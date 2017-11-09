// --atomics 72 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,70,6 -l 1,10,6
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

__constant uint32_t permutations[10][60] = {
{22,59,55,38,1,35,21,4,46,53,0,36,5,57,54,26,23,16,8,37,39,30,51,52,9,19,2,40,42,41,7,14,3,28,10,44,11,58,47,31,49,45,24,56,27,33,50,6,32,17,12,29,18,15,20,48,43,25,13,34}, // permutation 0
{51,31,43,55,45,0,17,46,34,15,33,48,4,7,1,16,53,11,47,44,3,20,54,9,41,22,29,30,5,28,36,39,10,13,26,57,50,23,56,37,27,58,24,52,19,25,32,59,14,12,8,21,38,18,49,6,42,2,35,40}, // permutation 1
{5,17,12,22,6,52,18,51,28,45,31,29,37,27,4,33,11,32,0,35,38,3,8,34,47,54,9,7,1,16,43,25,55,44,59,56,26,46,48,15,36,2,40,21,20,42,30,57,58,14,39,53,19,23,49,24,13,50,10,41}, // permutation 2
{37,16,23,39,53,36,1,13,56,17,31,30,7,48,19,15,0,58,32,40,29,6,24,22,43,28,44,10,52,35,47,9,2,46,49,59,5,45,55,33,26,50,57,42,8,11,38,14,18,51,27,41,3,20,12,34,25,54,21,4}, // permutation 3
{42,17,16,24,58,50,37,6,29,35,54,40,12,15,23,57,56,38,7,43,52,44,10,30,25,48,19,22,46,0,11,51,4,18,45,28,13,33,2,14,39,5,21,8,36,3,20,49,31,1,34,53,41,59,27,32,55,47,9,26}, // permutation 4
{36,13,59,0,53,5,58,27,31,38,25,23,40,10,32,20,22,18,41,28,34,21,30,26,9,6,51,57,29,35,19,15,17,47,24,37,8,14,48,43,11,33,4,52,12,3,50,49,54,44,16,55,46,56,42,1,39,7,2,45}, // permutation 5
{4,58,8,45,9,40,2,24,21,48,42,7,23,16,38,51,37,59,3,0,49,15,19,53,14,47,39,5,13,30,27,26,41,17,52,10,55,22,28,46,35,54,20,50,6,34,1,12,29,33,25,32,36,43,44,57,56,11,18,31}, // permutation 6
{35,17,56,30,4,16,20,19,40,53,26,5,44,36,54,41,33,15,10,32,45,28,31,47,8,7,46,13,2,48,58,21,50,0,34,51,55,42,12,22,6,25,57,43,39,1,9,14,11,29,52,24,38,23,37,27,49,59,18,3}, // permutation 7
{53,35,45,33,56,34,49,58,25,12,37,28,51,26,39,15,40,6,41,8,36,55,7,13,17,38,44,24,43,47,32,46,19,23,59,30,21,0,10,27,31,52,42,9,16,14,11,48,29,4,5,54,50,22,57,18,3,2,1,20}, // permutation 8
{34,18,46,30,19,31,6,33,51,50,24,23,21,11,52,56,14,35,17,59,13,5,39,12,43,45,53,16,47,8,38,26,7,42,36,55,41,58,27,54,20,40,32,22,44,4,29,28,1,37,25,15,49,9,10,0,57,48,3,2} // permutation 9
};

// Seed: 406031281

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile int64_t  f1;
   uint64_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int16_t  f5;
   volatile int32_t  f6;
};

struct S1 {
   int32_t  f0;
   volatile uint32_t  f1;
   int8_t  f2;
   uint8_t  f3;
   int64_t  f4;
   volatile uint32_t  f5;
   uint32_t  f6;
   uint8_t  f7;
};

union U2 {
   int16_t  f0;
   volatile int8_t * f1;
};

struct S3 {
    volatile int32_t g_9;
    int32_t g_10;
    int8_t g_19;
    int32_t g_27;
    int32_t *g_26[1][3][3];
    volatile VECTOR(uint64_t, 4) g_34;
    int8_t g_39;
    uint16_t g_40;
    int32_t g_51;
    uint8_t g_65;
    uint32_t g_87;
    struct S1 g_97;
    uint32_t g_104[7];
    volatile struct S1 g_142;
    volatile struct S1 *g_141;
    volatile struct S1 **g_140;
    VECTOR(uint64_t, 16) g_155;
    uint32_t g_161[3][6][3];
    VECTOR(int8_t, 2) g_168;
    VECTOR(int8_t, 2) g_169;
    VECTOR(uint32_t, 4) g_172;
    int16_t g_181[2];
    uint32_t * volatile g_188;
    uint32_t * volatile *g_187;
    int32_t g_198;
    VECTOR(int16_t, 16) g_248;
    VECTOR(int32_t, 4) g_249;
    struct S0 g_253;
    VECTOR(uint8_t, 2) g_258;
    uint16_t g_260;
    volatile int64_t g_266;
    volatile int64_t *g_265[3];
    VECTOR(int32_t, 4) g_269;
    VECTOR(int32_t, 8) g_271;
    VECTOR(int32_t, 16) g_306;
    VECTOR(int32_t, 2) g_308;
    VECTOR(int32_t, 4) g_310;
    VECTOR(int8_t, 4) g_322;
    union U2 g_336;
    VECTOR(int64_t, 2) g_360;
    struct S1 g_370;
    struct S1 *g_369;
    volatile struct S0 *g_551[9];
    struct S0 g_553;
    VECTOR(uint16_t, 2) g_562;
    uint32_t *g_567;
    uint32_t **g_566;
    VECTOR(int32_t, 16) g_601;
    VECTOR(uint8_t, 16) g_611;
    VECTOR(uint8_t, 8) g_612;
    volatile int8_t g_636;
    volatile int8_t * volatile g_635;
    volatile int8_t * volatile *g_634;
    VECTOR(int8_t, 16) g_637;
    VECTOR(uint32_t, 8) g_644;
    struct S0 g_684;
    int64_t g_700;
    VECTOR(int32_t, 8) g_702;
    VECTOR(int32_t, 8) g_704;
    uint64_t **g_708;
    int32_t g_736;
    int8_t *g_739;
    int8_t **g_738;
    struct S1 g_774;
    VECTOR(uint8_t, 16) g_852;
    VECTOR(uint8_t, 4) g_854;
    volatile uint16_t g_881;
    volatile uint16_t g_882;
    volatile uint16_t * volatile g_880[5];
    volatile uint16_t * volatile *g_879;
    volatile struct S0 g_899;
    volatile VECTOR(uint32_t, 8) g_902;
    VECTOR(int16_t, 4) g_907;
    volatile VECTOR(int64_t, 4) g_928;
    VECTOR(int64_t, 2) g_929;
    volatile struct S0 ** volatile g_955;
    int32_t ** volatile g_956[6];
    int32_t ** volatile g_957;
    volatile VECTOR(uint16_t, 4) g_971;
    struct S0 g_976;
    struct S0 g_983;
    union U2 *g_1020;
    union U2 * volatile *g_1019;
    struct S0 *g_1031;
    int32_t ** volatile g_1033;
    volatile struct S0 g_1038;
    VECTOR(uint32_t, 8) g_1039;
    uint32_t g_1050;
    VECTOR(int16_t, 4) g_1084;
    VECTOR(uint16_t, 2) g_1093;
    volatile VECTOR(uint8_t, 8) g_1106;
    VECTOR(int8_t, 4) g_1111;
    VECTOR(int8_t, 2) g_1112;
    VECTOR(int8_t, 2) g_1113;
    VECTOR(uint16_t, 4) g_1120;
    volatile VECTOR(uint16_t, 2) g_1137;
    VECTOR(uint64_t, 4) g_1170;
    volatile VECTOR(uint64_t, 8) g_1171;
    volatile VECTOR(uint64_t, 4) g_1172;
    volatile VECTOR(uint64_t, 4) g_1173;
    VECTOR(uint64_t, 8) g_1174;
    VECTOR(uint64_t, 16) g_1215;
    VECTOR(uint64_t, 4) g_1216;
    int8_t g_1234;
    uint16_t g_1236[1];
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
union U2  func_1(struct S3 * p_1243);
int32_t * func_13(int32_t  p_14, int8_t * p_15, struct S3 * p_1243);
int8_t * func_16(int8_t * p_17, struct S3 * p_1243);
uint32_t  func_60(int64_t  p_61, struct S3 * p_1243);
struct S1 * func_88(uint32_t * p_89, int32_t  p_90, int8_t ** p_91, struct S1 * p_92, int16_t  p_93, struct S3 * p_1243);
uint32_t * func_94(struct S1 * p_95, struct S3 * p_1243);
int32_t * func_108(uint8_t  p_109, uint32_t  p_110, int16_t  p_111, struct S3 * p_1243);
uint8_t  func_118(uint8_t  p_119, uint32_t  p_120, int64_t  p_121, int64_t  p_122, struct S3 * p_1243);
int8_t  func_124(uint32_t * p_125, int32_t * p_126, uint16_t  p_127, int64_t  p_128, uint32_t  p_129, struct S3 * p_1243);
uint32_t * func_130(int8_t * p_131, int32_t  p_132, uint8_t  p_133, int8_t ** p_134, int64_t  p_135, struct S3 * p_1243);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1243->g_10 p_1243->g_comm_values p_1243->g_40 p_1243->g_27 p_1243->g_9 p_1243->g_65 p_1243->l_comm_values p_1243->g_700 p_1243->g_155 p_1243->g_738 p_1243->g_562 p_1243->g_97.f2 p_1243->g_104 p_1243->g_97.f7 p_1243->g_684.f3 p_1243->g_253.f0 p_1243->g_169 p_1243->g_899 p_1243->g_269 p_1243->g_19 p_1243->g_308 p_1243->g_198 p_1243->g_265 p_1243->g_955 p_1243->g_51 p_1243->g_181 p_1243->g_336 p_1243->g_260 p_1243->g_161 p_1243->g_253.f2 p_1243->g_957 p_1243->g_553.f1 p_1243->g_976 p_1243->g_983 p_1243->g_369 p_1243->g_370 p_1243->g_879 p_1243->g_852 p_1243->g_1019 p_1243->g_1020 p_1243->g_880 p_1243->g_882 p_1243->g_881 p_1243->g_249 p_1243->g_1038 p_1243->g_634 p_1243->g_635 p_1243->g_636 p_1243->g_1039 p_1243->g_774.f3 p_1243->g_1050 p_1243->g_141 p_1243->g_142 p_1243->g_172 p_1243->g_1084 p_1243->g_1093 p_1243->g_739 p_1243->g_1106 p_1243->g_1111 p_1243->g_1112 p_1243->g_1113 p_1243->g_1120 p_1243->g_1137 p_1243->g_97.f6 p_1243->g_567 p_1243->g_258 p_1243->g_253.f5 p_1243->g_1170 p_1243->g_1171 p_1243->g_1172 p_1243->g_1173 p_1243->g_1174 p_1243->g_1215 p_1243->g_1216 p_1243->g_253.f3 p_1243->g_1234 p_1243->g_1236 p_1243->g_684.f1
 * writes: p_1243->g_10 p_1243->g_26 p_1243->g_27 p_1243->g_65 p_1243->g_370.f0 p_1243->g_553.f0 p_1243->g_253.f0 p_1243->g_684.f5 p_1243->g_97.f2 p_1243->g_97.f7 p_1243->g_700 p_1243->g_553.f5 p_1243->g_739 p_1243->g_684.f3 p_1243->g_562 p_1243->g_553.f3 p_1243->g_684.f4 p_1243->g_19 p_1243->g_198 p_1243->g_551 p_1243->g_51 p_1243->g_181 p_1243->g_140 p_1243->g_168 p_1243->g_253.f3 p_1243->g_97.f6 p_1243->g_40 p_1243->g_39 p_1243->g_336 p_1243->g_1031 p_1243->g_1020 p_1243->g_260 p_1243->g_976.f5 p_1243->g_1093 p_1243->g_976.f3 p_1243->g_370.f2 p_1243->g_155
 */
union U2  func_1(struct S3 * p_1243)
{ /* block id: 4 */
    int8_t *l_18 = &p_1243->g_19;
    int32_t *l_1036[7];
    int32_t l_1047 = 0x7EEF86EBL;
    uint64_t l_1048 = 0x7DCF0CD7312D3AB9L;
    uint8_t l_1049 = 0x86L;
    uint32_t l_1069 = 0x0E63F695L;
    uint8_t l_1134 = 0xECL;
    VECTOR(int32_t, 2) l_1155 = (VECTOR(int32_t, 2))(9L, 0x3B83EDB6L);
    int64_t *l_1156 = &p_1243->g_253.f3;
    int8_t l_1165 = 1L;
    struct S1 **l_1217 = &p_1243->g_369;
    uint8_t *l_1232 = &p_1243->g_97.f7;
    uint64_t l_1233 = 0UL;
    union U2 l_1242 = {0x389DL};
    int i;
    for (i = 0; i < 7; i++)
        l_1036[i] = (void*)0;
    if ((atomic_inc(&p_1243->g_atomic_input[72 * get_linear_group_id() + 43]) == 1))
    { /* block id: 6 */
        int32_t l_3[7][8] = {{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L},{7L,(-5L),(-5L),7L,0x38884515L,0x52F34111L,0x52F34111L,0x38884515L}};
        int32_t *l_2 = &l_3[3][3];
        int32_t *l_4 = &l_3[3][3];
        int32_t *l_5 = &l_3[2][5];
        int32_t *l_6 = (void*)0;
        struct S1 l_8 = {0x61A6B719L,4294967293UL,-3L,0x0AL,0x50811FC80AE7B1B0L,0xADFB1AF9L,0x66DE6B93L,6UL};/* VOLATILE GLOBAL l_8 */
        struct S1 *l_7 = &l_8;
        int i, j;
        l_4 = l_2;
        l_6 = l_5;
        l_7 = (void*)0;
        unsigned int result = 0;
        int l_3_i0, l_3_i1;
        for (l_3_i0 = 0; l_3_i0 < 7; l_3_i0++) {
            for (l_3_i1 = 0; l_3_i1 < 8; l_3_i1++) {
                result += l_3[l_3_i0][l_3_i1];
            }
        }
        result += l_8.f0;
        result += l_8.f1;
        result += l_8.f2;
        result += l_8.f3;
        result += l_8.f4;
        result += l_8.f5;
        result += l_8.f6;
        result += l_8.f7;
        atomic_add(&p_1243->g_special_values[72 * get_linear_group_id() + 43], result);
    }
    else
    { /* block id: 10 */
        (1 + 1);
    }
    for (p_1243->g_10 = (-26); (p_1243->g_10 > (-29)); p_1243->g_10 = safe_sub_func_int32_t_s_s(p_1243->g_10, 8))
    { /* block id: 15 */
        int8_t **l_20 = &l_18;
        int32_t **l_1034 = (void*)0;
        int32_t **l_1035[7][10] = {{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]},{(void*)0,&p_1243->g_26[0][2][0],(void*)0,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][0][1],&p_1243->g_26[0][2][1],&p_1243->g_26[0][1][2],&p_1243->g_26[0][2][2],&p_1243->g_26[0][2][0]}};
        union U2 *l_1037 = &p_1243->g_336;
        union U2 **l_1040 = &p_1243->g_1020;
        struct S0 **l_1073 = &p_1243->g_1031;
        VECTOR(int64_t, 2) l_1090 = (VECTOR(int64_t, 2))(0x1473AF3661381C71L, 0x267C4472C63AB28DL);
        VECTOR(int64_t, 16) l_1132 = (VECTOR(int64_t, 16))(0x3F1431EDC13383AFL, (VECTOR(int64_t, 4))(0x3F1431EDC13383AFL, (VECTOR(int64_t, 2))(0x3F1431EDC13383AFL, (-1L)), (-1L)), (-1L), 0x3F1431EDC13383AFL, (-1L), (VECTOR(int64_t, 2))(0x3F1431EDC13383AFL, (-1L)), (VECTOR(int64_t, 2))(0x3F1431EDC13383AFL, (-1L)), 0x3F1431EDC13383AFL, (-1L), 0x3F1431EDC13383AFL, (-1L));
        int64_t *l_1153 = &p_1243->g_97.f4;
        uint32_t l_1224 = 1UL;
        int i, j;
        l_1036[4] = func_13(p_1243->g_comm_values[p_1243->tid], ((*p_1243->g_738) = func_16(((*l_20) = l_18), p_1243)), p_1243);
        (*p_1243->g_1019) = l_1037;
        if (((p_1243->g_1038 , (((((&l_18 != l_20) , ((**l_20) = (**p_1243->g_634))) > (&p_1243->g_336 == ((*l_1040) = (((VECTOR(uint32_t, 4))(p_1243->g_1039.s2644)).x , &p_1243->g_336)))) && (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((l_1047 <= (l_1048 > (**p_1243->g_879))), p_1243->g_774.f3)) , &p_1243->g_634) != (void*)0), l_1049)), 0xFA57479FD9856140L))) < p_1243->g_1050)) ^ 0x61076E0CL))
        { /* block id: 509 */
            uint8_t l_1053 = 1UL;
            int32_t l_1071 = 0x5D69BC28L;
            struct S0 **l_1074[6] = {(void*)0,&p_1243->g_1031,(void*)0,(void*)0,&p_1243->g_1031,(void*)0};
            uint64_t *l_1075[3];
            int8_t l_1085 = 0x5AL;
            VECTOR(uint64_t, 2) l_1144 = (VECTOR(uint64_t, 2))(0UL, 0x00C12B1CC9D81739L);
            struct S1 **l_1159 = &p_1243->g_369;
            int64_t l_1164[4][1][2];
            int32_t l_1167[1];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1075[i] = (void*)0;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1164[i][j][k] = (-5L);
                }
            }
            for (i = 0; i < 1; i++)
                l_1167[i] = 0L;
            if (((*p_1243->g_141) , (l_1053 = (FAKE_DIVERGE(p_1243->global_2_offset, get_global_id(2), 10) <= (safe_rshift_func_uint8_t_u_s(6UL, 7))))))
            { /* block id: 511 */
                int64_t l_1064 = 0x7EECC5581AAE07D4L;
                int32_t l_1072 = 1L;
                uint64_t *l_1076 = &l_1048;
                int32_t l_1100 = 0x24AE3944L;
                VECTOR(uint8_t, 8) l_1105 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x23L), 0x23L), 0x23L, 1UL, 0x23L);
                VECTOR(int8_t, 4) l_1114 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 3L), 3L);
                VECTOR(int8_t, 4) l_1115 = (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, (-6L)), (-6L));
                int8_t l_1122 = 1L;
                int16_t l_1128 = 0x1B25L;
                int i;
                for (p_1243->g_260 = 21; (p_1243->g_260 < 34); p_1243->g_260++)
                { /* block id: 514 */
                    int32_t l_1056 = (-1L);
                    uint64_t *l_1059 = &l_1048;
                    uint8_t *l_1068 = &l_1049;
                    uint16_t *l_1070 = &p_1243->g_40;
                    int64_t l_1077 = 0L;
                    struct S1 **l_1094 = &p_1243->g_369;
                    int16_t *l_1095 = &p_1243->g_976.f5;
                    l_1072 |= (l_1071 = (l_1056 >= (safe_sub_func_uint16_t_u_u((**p_1243->g_879), ((*l_1070) = (((((*l_1059) = l_1056) && (safe_lshift_func_uint16_t_u_s(0x7F0FL, (safe_rshift_func_int8_t_s_s((l_1064 >= GROUP_DIVERGE(0, 1)), 4))))) & (p_1243->g_104[0] , l_1064)) && (safe_mod_func_int64_t_s_s((!((safe_unary_minus_func_int64_t_s((p_1243->g_983.f3 <= ((*l_1068) = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((18446744073709551606UL & 18446744073709551611UL), 0x91L, 0x87L, 0xA9L)).zwwzxyyyxzxwxwxw)))).sa)))) , l_1069)), p_1243->g_172.z))))))));
                    l_1056 = ((l_1074[1] = l_1073) != &p_1243->g_1031);
                    l_1077 |= (l_1075[0] == l_1076);
                    l_1071 ^= (safe_lshift_func_uint8_t_u_u((0xE9CAL || ((*l_1095) &= ((*p_1243->g_141) , (((safe_sub_func_uint32_t_u_u((p_1243->g_142.f5 == 0xB3CAL), (((*l_1070) = (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(p_1243->g_1084.zyzzyxzx)).s2, 8))) != ((((l_1085 > (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*l_1068) |= ((FAKE_DIVERGE(p_1243->local_0_offset, get_local_id(0), 10) >= 0x5E59DFBE14FC53E5L) <= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(0x71B3042B5F6B84D6L, 0x380CC353D8B44EAEL, 5L, 4L, ((VECTOR(int64_t, 2))(l_1090.xx)), (p_1243->g_852.s4 >= ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_1243->g_1093.xxxx)).hi)).lo == (((GROUP_DIVERGE(2, 1) >= (l_1094 == &p_1243->g_141)) ^ 0x2E4520B7A9990E91L) <= 0x4CE98E07L)) < 0x0E82D2B4L)), 0L, ((VECTOR(int64_t, 4))((-7L))), 0L, ((VECTOR(int64_t, 2))(0x5D21A50F15AAED37L)), 0x222012A388FF8407L)).sc4, ((VECTOR(int64_t, 2))(0x29B54E9FB6C69A3CL))))).xxyyyyxx)).lo)).z)), (*p_1243->g_739))), 1UL))) ^ l_1072) < 0xEAL) , 0x5F79L)))) < (-1L)) || 0x8CL)))), 3));
                }
                for (p_1243->g_40 = 24; (p_1243->g_40 >= 4); p_1243->g_40--)
                { /* block id: 530 */
                    uint64_t l_1101 = 0x41121F8F435B6989L;
                    uint16_t *l_1121[4] = {&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260};
                    int32_t l_1129 = 1L;
                    int32_t l_1130 = 0x70A6F608L;
                    int32_t l_1131 = (-10L);
                    int32_t l_1133 = (-3L);
                    int i;
                    for (p_1243->g_976.f5 = (-5); (p_1243->g_976.f5 == (-15)); p_1243->g_976.f5--)
                    { /* block id: 533 */
                        l_1100 ^= (l_1072 = 6L);
                    }
                    l_1100 = (l_1101 || (safe_unary_minus_func_int32_t_s(((p_1243->g_1093.y &= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1105.s13)))).xyxxxxxx)).s2272770514420702, ((VECTOR(uint8_t, 2))(p_1243->g_1106.s07)).yxyxyxxxxyxxyyyy))).s2, ((safe_rshift_func_int8_t_s_u(((l_1073 != (void*)0) , (safe_add_func_uint64_t_u_u((((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(l_1072, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(p_1243->g_1111.zyww)).yxyyyzyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(p_1243->g_1112.yx)).xxyxxxyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_1243->g_1113.xxyx)).even)), 0x18L, (-1L))).xwxxxwyywzyxxwwy)).lo))).s0775165632410363, ((VECTOR(int8_t, 16))(l_1114.xwyyxxyxxwxywzxz)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1115.wyzxywxywzywyzyx))))))).sc0, ((VECTOR(int8_t, 2))(0x74L, 0x67L))))), (((l_1101 ^ (safe_mod_func_uint32_t_u_u((+((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_1243->g_1120.wywzxwzwzyzxxzww)).sa, 3)) && (FAKE_DIVERGE(p_1243->global_0_offset, get_global_id(0), 10) != ((&p_1243->g_369 != (void*)0) || (l_1101 && l_1114.z))))), (-4L)))) , l_1101) != p_1243->g_181[0]), ((VECTOR(int8_t, 8))((-5L))), 0x46L, l_1085, 0x2FL, 9L, 0x06L))))).sbd)), 0x07L, ((VECTOR(int8_t, 4))(1L)), 0x38L))))).hi)), 0x5BL, 1L, 1L)).s25, ((VECTOR(int8_t, 2))(0x5AL))))).odd , 0x55B4392992B2B5F1L), 0x436B020A0CB09A27L))), 2)) | l_1101)))) && l_1122))));
                    for (p_1243->g_976.f3 = 0; (p_1243->g_976.f3 < (-9)); --p_1243->g_976.f3)
                    { /* block id: 541 */
                        uint16_t l_1125 = 0xB4E2L;
                        --l_1125;
                    }
                    --l_1134;
                }
            }
            else
            { /* block id: 546 */
                uint16_t *l_1149 = (void*)0;
                uint16_t *l_1150[10] = {&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260,&p_1243->g_260};
                int64_t **l_1154 = &l_1153;
                int32_t **l_1160 = &p_1243->g_26[0][2][1];
                int16_t *l_1161 = (void*)0;
                int16_t *l_1162 = (void*)0;
                int16_t *l_1163[8] = {&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5,&p_1243->g_983.f5};
                int32_t l_1166 = 0x60801DF1L;
                uint8_t l_1189 = 6UL;
                volatile struct S0 **l_1199 = &p_1243->g_551[6];
                volatile struct S0 ***l_1198 = &l_1199;
                int i;
                l_1167[0] = (((VECTOR(uint16_t, 16))(p_1243->g_1137.yyyyyxxyxxxyxyxy)).sa & (safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1243->g_97.f6, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(0x47D5C1D3579D12A0L, (-1L)))))), ((VECTOR(int64_t, 4))(0x3560129A50918396L, 0x4AC5731258FE4F50L, 9L, 2L)), 9L)), ((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_1144.xxyyyxxy)).s5532312405527351)).s1 , (((l_1071 = (l_1144.y >= (safe_mul_func_uint16_t_u_u((~(safe_div_func_uint16_t_u_u((p_1243->g_1093.x = p_1243->g_700), (safe_mod_func_int64_t_s_s((((*l_1154) = l_1153) == (((VECTOR(int32_t, 2))(l_1155.xy)).hi , l_1156)), (((p_1243->g_983.f0 && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))((-9L), (p_1243->g_976.f5 |= (safe_mul_func_uint16_t_u_u((l_1159 == &p_1243->g_141), ((void*)0 != l_1160)))), 0x004CL, 0x2327L)), (int16_t)0x6221L))).zxxxwzzyyyyywzyy)).sa) <= p_1243->g_1050) && 0xE0L)))))), p_1243->g_269.w)))) != (*p_1243->g_567)) > p_1243->g_258.y)) != l_1164[2][0][1]))) , 0L), 0x6032B4444053B8B3L, 7L, l_1144.y, l_1165, p_1243->g_258.y, 0x4CDD8F17ADB996D5L, 9L)).even, (int64_t)p_1243->g_253.f5))).s2 , 0x4CE8FE31L), l_1166)) >= 2UL) , p_1243->g_976.f3), 0x07L)));
                for (p_1243->g_253.f0 = (-27); (p_1243->g_253.f0 > (-9)); ++p_1243->g_253.f0)
                { /* block id: 554 */
                    int8_t l_1187 = 0x2FL;
                    int8_t l_1188 = 0x2DL;
                    l_1071 ^= ((((-1L) || (**p_1243->g_738)) == ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1167[0], ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x0E7B7849L, (((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_1243->g_1170.ywzxwxwx)))).s0152453017264665, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_1243->g_1171.s65)))))).yyyyyxyxyxxxxxyx))), ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 4))(p_1243->g_1172.ywwy)).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_1243->g_1173.wzww)).yzzzzxxw)).s67))))).yxyyxxyyyyxxxxxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)))).yyyyxxxyyxyyxyxy))))).even, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1243->g_1174.s40)).yyyxxxxxyyxxyyyx)).hi))).s4 | ((safe_lshift_func_int8_t_s_s((!(&p_1243->g_181[0] != &p_1243->g_181[0])), 3)) >= 0x1BE7L)), 0x558EC406L, 1UL, 4294967291UL, ((safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((((**p_1243->g_738) == ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((&p_1243->g_140 == &p_1243->g_140), l_1187)), (**p_1243->g_879))) ^ (**p_1243->g_738)), l_1166)) && l_1188)) || 0UL), 0L)) || 8L), l_1189)) ^ 0x62L), 0xE2D21E16L, l_1189, (*p_1243->g_567), (*p_1243->g_567), 1UL, ((VECTOR(uint32_t, 2))(9UL)), 0UL, 6UL, 3UL)).sacc0)), 0x08004FA6L, 0xA7628883L, 0x41115A88L)).s45)).odd) == 0x34A06D8AL);
                }
                for (p_1243->g_198 = 0; (p_1243->g_198 < (-21)); --p_1243->g_198)
                { /* block id: 559 */
                    uint16_t l_1192[9] = {0xAF81L,0x5EDEL,0xAF81L,0xAF81L,0x5EDEL,0xAF81L,0xAF81L,0x5EDEL,0xAF81L};
                    int i;
                    ++l_1192[6];
                    for (p_1243->g_370.f2 = 0; (p_1243->g_370.f2 < 11); p_1243->g_370.f2 = safe_add_func_uint64_t_u_u(p_1243->g_370.f2, 4))
                    { /* block id: 563 */
                        uint64_t l_1197 = 0xA520C95F58D89FD1L;
                        l_1166 &= l_1197;
                    }
                }
                (*l_1198) = &p_1243->g_551[6];
            }
        }
        else
        { /* block id: 569 */
            int64_t l_1202 = (-1L);
            struct S1 **l_1219 = &p_1243->g_369;
            struct S1 ***l_1218 = &l_1219;
            struct S1 **l_1221 = &p_1243->g_369;
            struct S1 ***l_1220 = &l_1221;
            uint64_t *l_1222 = (void*)0;
            uint64_t *l_1223 = &l_1048;
            uint8_t *l_1231 = &l_1134;
            int32_t l_1235 = 0x5CC27E65L;
            l_1235 = ((VECTOR(int32_t, 16))(1L, (0UL <= (safe_sub_func_int64_t_s_s(l_1202, (safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0L != (safe_rshift_func_int8_t_s_s((**p_1243->g_634), 7))), (((safe_rshift_func_uint8_t_u_u(((p_1243->g_155.s9 &= ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 2))(p_1243->g_1215.s64)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1243->g_1216.xy)), ((VECTOR(uint64_t, 2))(0x87EEF6AB224394ADL, 0x97E587041F33EFE5L)), 1UL, ((*l_1223) = (l_1217 != ((*l_1220) = ((*l_1218) = &p_1243->g_369)))), 2UL, 1UL)).s15))).hi) >= (l_1224 != ((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_1243->g_40 = (((((safe_mul_func_uint16_t_u_u((l_1231 != l_1232), l_1202)) , p_1243->g_879) != (void*)0) >= 9UL) >= l_1202)), 0L)), p_1243->g_169.x)) && p_1243->g_370.f7))), l_1233)) | GROUP_DIVERGE(2, 1)) == l_1202))), 0x5AD4L)) | p_1243->g_1039.s7) != p_1243->g_253.f3), FAKE_DIVERGE(p_1243->group_1_offset, get_group_id(1), 10))), p_1243->g_1234))))), l_1202, 0x095445AAL, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x34BDFCE9L)), (-1L), l_1202, ((VECTOR(int32_t, 4))(0x0165240BL)), 9L, 1L)).sb;
            if (p_1243->g_1236[0])
                break;
            return (**p_1243->g_1019);
        }
        for (p_1243->g_19 = 0; (p_1243->g_19 <= 6); p_1243->g_19++)
        { /* block id: 581 */
            uint16_t l_1239 = 65535UL;
            l_1239++;
            (*p_1243->g_957) = func_108(p_1243->g_684.f1, p_1243->g_1084.w, p_1243->g_370.f7, p_1243);
        }
    }
    return l_1242;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_27 p_1243->g_169 p_1243->g_899 p_1243->g_902 p_1243->g_907 p_1243->g_553.f3 p_1243->g_684.f4 p_1243->g_269 p_1243->g_928 p_1243->g_929 p_1243->g_19 p_1243->g_308 p_1243->g_198 p_1243->g_168 p_1243->g_265 p_1243->g_955 p_1243->g_51 p_1243->g_181 p_1243->g_336 p_1243->g_155 p_1243->g_104 p_1243->g_260 p_1243->g_161 p_1243->g_253.f2 p_1243->g_957 p_1243->g_971 p_1243->g_852 p_1243->g_553.f1 p_1243->g_976 p_1243->g_983 p_1243->g_369 p_1243->g_370 p_1243->g_879 p_1243->g_40 p_1243->g_39 p_1243->g_1019 p_1243->g_1020 p_1243->g_880 p_1243->g_882 p_1243->g_881 p_1243->g_249
 * writes: p_1243->g_27 p_1243->g_553.f3 p_1243->g_684.f4 p_1243->g_19 p_1243->g_198 p_1243->g_551 p_1243->g_97.f7 p_1243->g_51 p_1243->g_181 p_1243->g_26 p_1243->g_140 p_1243->g_168 p_1243->g_253.f3 p_1243->g_97.f6 p_1243->g_40 p_1243->g_370.f0 p_1243->g_39 p_1243->g_336 p_1243->g_1031
 */
int32_t * func_13(int32_t  p_14, int8_t * p_15, struct S3 * p_1243)
{ /* block id: 440 */
    VECTOR(int32_t, 8) l_896 = (VECTOR(int32_t, 8))(0x0124DCB9L, (VECTOR(int32_t, 4))(0x0124DCB9L, (VECTOR(int32_t, 2))(0x0124DCB9L, 0L), 0L), 0L, 0x0124DCB9L, 0L);
    int32_t *l_897 = (void*)0;
    int32_t *l_898 = &p_1243->g_27;
    VECTOR(int64_t, 4) l_926 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x78EA4D8EFDC29799L), 0x78EA4D8EFDC29799L);
    union U2 **l_939 = (void*)0;
    VECTOR(uint8_t, 4) l_947 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xA7L), 0xA7L);
    VECTOR(uint8_t, 4) l_948 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0UL), 0UL);
    int16_t *l_954 = &p_1243->g_336.f0;
    VECTOR(uint16_t, 2) l_970 = (VECTOR(uint16_t, 2))(0x5B08L, 0UL);
    uint64_t l_1032 = 18446744073709551609UL;
    int i;
    if (((*l_898) &= ((VECTOR(int32_t, 4))(l_896.s5666)).x))
    { /* block id: 442 */
        VECTOR(uint32_t, 16) l_910 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint32_t, 2))(0UL, 7UL), (VECTOR(uint32_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
        VECTOR(int64_t, 16) l_925 = (VECTOR(int64_t, 16))(0x704BCA3DF3DC5009L, (VECTOR(int64_t, 4))(0x704BCA3DF3DC5009L, (VECTOR(int64_t, 2))(0x704BCA3DF3DC5009L, 0x41602E5D79634D92L), 0x41602E5D79634D92L), 0x41602E5D79634D92L, 0x704BCA3DF3DC5009L, 0x41602E5D79634D92L, (VECTOR(int64_t, 2))(0x704BCA3DF3DC5009L, 0x41602E5D79634D92L), (VECTOR(int64_t, 2))(0x704BCA3DF3DC5009L, 0x41602E5D79634D92L), 0x704BCA3DF3DC5009L, 0x41602E5D79634D92L, 0x704BCA3DF3DC5009L, 0x41602E5D79634D92L);
        VECTOR(int64_t, 8) l_927 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L));
        VECTOR(int64_t, 16) l_930 = (VECTOR(int64_t, 16))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-9L)), (-9L)), (-9L), (-7L), (-9L), (VECTOR(int64_t, 2))((-7L), (-9L)), (VECTOR(int64_t, 2))((-7L), (-9L)), (-7L), (-9L), (-7L), (-9L));
        int64_t l_943 = 7L;
        VECTOR(int32_t, 2) l_958 = (VECTOR(int32_t, 2))(8L, 5L);
        VECTOR(int32_t, 4) l_959 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x3A289D4BL), 0x3A289D4BL);
        int8_t ***l_975 = &p_1243->g_738;
        uint8_t *l_978[8];
        int32_t *l_995 = (void*)0;
        int i;
        for (i = 0; i < 8; i++)
            l_978[i] = &p_1243->g_370.f3;
        (*l_898) |= (((p_1243->g_169.y , p_1243->g_899) , (safe_div_func_uint32_t_u_u((p_14 | p_14), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_1243->g_902.s16521716)).s4655431063532621)))).s4))) <= (safe_div_func_uint64_t_u_u((((VECTOR(int16_t, 16))(p_1243->g_907.wzxyxxyzxwyxywzw)).s5 < 0UL), (safe_rshift_func_uint16_t_u_u(p_14, 1)))));
        if (l_910.s2)
        { /* block id: 444 */
            union U2 **l_940 = (void*)0;
            int32_t l_941[6];
            int8_t *l_942[3][4] = {{(void*)0,&p_1243->g_97.f2,(void*)0,(void*)0},{(void*)0,&p_1243->g_97.f2,(void*)0,(void*)0},{(void*)0,&p_1243->g_97.f2,(void*)0,(void*)0}};
            int32_t *l_944 = &p_1243->g_198;
            int16_t l_953 = 0x67C3L;
            VECTOR(uint16_t, 4) l_965 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65530UL);
            int i, j;
            for (i = 0; i < 6; i++)
                l_941[i] = 0x501FA8CEL;
            for (p_1243->g_553.f3 = (-21); (p_1243->g_553.f3 < 25); p_1243->g_553.f3 = safe_add_func_int8_t_s_s(p_1243->g_553.f3, 8))
            { /* block id: 447 */
                for (p_1243->g_684.f4 = 29; (p_1243->g_684.f4 != 5); p_1243->g_684.f4 = safe_sub_func_uint64_t_u_u(p_1243->g_684.f4, 2))
                { /* block id: 450 */
                    return l_897;
                }
            }
            (*l_944) &= (!(safe_mod_func_int8_t_s_s((l_943 = ((safe_sub_func_int64_t_s_s((*l_898), (p_14 <= (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_1243->g_269.y, ((*p_15) ^= (((VECTOR(uint64_t, 4))(18446744073709551612UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(l_925.se851dbd2b0f3aa91)).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(0x2D12AEBBA5A6FE30L, 8L)).xyyxyyxxyyxxxyxx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x06A7D90CF6F9F529L, 0L)).xxyxxyxxyyxyxxxx))))).lo)).s1277142126370453, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(l_926.zywyzwzw)), ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 2))(l_927.s12)), ((VECTOR(int64_t, 2))(p_1243->g_928.yx))))).yyxxyyxx))).s52, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))((-10L), 0x3B8450FCC68F2D32L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x114CD5389821C93CL, (-5L))))), 0x0FD037B271A9E432L, 0x625EE272A4F994A6L, (-1L), 0L)).lo, ((VECTOR(int64_t, 4))(p_1243->g_929.xyyy))))).hi))).xyxyyxxyxyxxyyyx))).s77)).xyxyxyyx))).odd, ((VECTOR(int64_t, 16))(0L, 0x57EA7C2B333E5DE9L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_930.s3d40)).even)), 0x33107E0900B235F7L, 0x5161088536C9C7ABL)), 1L, ((VECTOR(int64_t, 4))((safe_mul_func_uint16_t_u_u(0UL, (safe_mul_func_int16_t_s_s(0x16B4L, (+(safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((l_939 != l_940), l_941[3])), 5))))))), 0x5CFD459FB347711BL, 8L, 0x041EF60A9D6EDCD5L)), ((VECTOR(int64_t, 4))(0x691636CCBABFFCE5L)), 0x279C752807044141L)).s118c))).xxzwwwyy))).s36)), 18446744073709551610UL)).z <= l_927.s3)))), p_1243->g_308.x)), (*l_898)))))) >= p_14)), (*l_898))));
            if (((*p_15) >= ((((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(5UL, 2UL)), 255UL, (((*l_898) | p_1243->g_168.x) & (safe_mod_func_int8_t_s_s((*p_15), ((VECTOR(uint8_t, 4))(l_947.wxyz)).x))), 0x83L, 0xA5L, 255UL, 0UL)).s6116437234766303, ((VECTOR(uint8_t, 2))(l_948.wx)).xxyyyyyyxyyyyxxy, ((VECTOR(uint8_t, 2))(0xBAL, 0x27L)).xxxxxxyxxxyyyxyx))).sb , &p_1243->g_181[0]) == ((l_953 = ((((p_1243->g_265[0] != (void*)0) || p_14) & (((safe_div_func_int64_t_s_s(0x6933F9990E508BDFL, l_930.s6)) < l_943) < p_14)) ^ l_925.s8)) , l_954))))
            { /* block id: 458 */
                (*p_1243->g_955) = &p_1243->g_899;
                (*p_1243->g_957) = func_94(&p_1243->g_774, p_1243);
            }
            else
            { /* block id: 461 */
                int8_t l_960 = 1L;
                VECTOR(int32_t, 8) l_961 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-8L)), (-8L)), (-8L), 9L, (-8L));
                int32_t l_964 = 0x32D167D4L;
                uint8_t *l_974[3][6][2] = {{{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0}},{{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0}},{{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0},{&p_1243->g_370.f3,(void*)0}}};
                int32_t *l_994[8][3][5] = {{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}},{{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]},{&l_941[2],&l_941[2],&p_1243->g_10,&l_941[3],&l_941[3]}}};
                struct S0 *l_997 = &p_1243->g_553;
                struct S0 **l_996 = &l_997;
                int i, j, k;
                (*l_944) |= l_927.s0;
                (*l_898) = (l_960 &= ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-8L), 0x4CB0BB7CL)).yyyyxyxxyxyxxxyx)), ((VECTOR(int32_t, 2))(l_958.yx)).yyxyxyyyyyyxxyxy, ((VECTOR(int32_t, 2))(l_959.xy)).yxxyxxxxxyxxyxyy))).s67))).odd);
                if (((((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(l_961.s21325572)).hi, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x22D2L, l_964, ((VECTOR(uint16_t, 4))(l_965.wwyw)), p_14, 0x1AF3L, (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xFBCBL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_970.xyxy)).lo)), 65526UL)), GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(p_1243->g_971.zwzyzzxx)).s20, (uint16_t)l_961.s3, (uint16_t)(p_1243->g_852.s1 < (p_14 , ((safe_rshift_func_int8_t_s_u((*p_15), 0)) == (0x78L <= ((*l_944) &= 255UL)))))))), 9UL)).s27)))), 1UL, 65535UL)))).y)), (*p_15))), 9UL, p_14, 0UL, p_14, 0xF367L, 0x641DL, 1UL)).s1, FAKE_DIVERGE(p_1243->local_2_offset, get_local_id(2), 10))) >= 0x00F1L) > p_14), ((VECTOR(int32_t, 4))(2L)), 1L, (*l_898), ((VECTOR(int32_t, 4))(0x0D5BF157L)), (*l_944), ((VECTOR(int32_t, 4))((-7L))))), (int32_t)p_14))).se78a))).w , p_1243->g_553.f1) >= 0L))
                { /* block id: 466 */
                    uint8_t *l_977 = &p_1243->g_97.f3;
                    uint8_t **l_979 = &l_974[0][1][1];
                    uint32_t *l_980 = &p_1243->g_97.f6;
                    int32_t l_988 = 0x494962F9L;
                    uint64_t l_989[2][1];
                    uint16_t *l_990 = &p_1243->g_40;
                    uint16_t l_991[1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_989[i][j] = 18446744073709551615UL;
                    }
                    for (i = 0; i < 1; i++)
                        l_991[i] = 0x24FDL;
                    l_988 = (((*l_980) = ((*l_898) &= ((l_975 == (p_1243->g_976 , (void*)0)) ^ (l_977 == ((*l_979) = l_978[0]))))) , ((safe_mul_func_int8_t_s_s((0x2B944D9D459D4DACL & (((p_1243->g_983 , (65532UL && ((*l_990) ^= ((((((safe_add_func_int32_t_s_s(((+(safe_lshift_func_int16_t_s_s(((((((*p_1243->g_369) , &p_1243->g_880[1]) == p_1243->g_879) , (*l_898)) & 0L) == l_910.s5), p_14))) && p_14), (-7L))) & 1UL) && l_988) || l_988) | (*l_898)) ^ l_989[0][0])))) > p_1243->g_852.sd) <= 0x5D59F9EEL)), 0x0BL)) | l_991[0]));
                    for (p_1243->g_370.f0 = (-10); (p_1243->g_370.f0 == 23); ++p_1243->g_370.f0)
                    { /* block id: 474 */
                        return l_995;
                    }
                }
                else
                { /* block id: 477 */
                    (*l_944) |= ((void*)0 == l_996);
                }
            }
        }
        else
        { /* block id: 481 */
            int32_t *l_998 = (void*)0;
            int32_t *l_999[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t l_1000 = 255UL;
            int i, j;
            l_1000++;
            if ((atomic_inc(&p_1243->g_atomic_input[72 * get_linear_group_id() + 46]) == 3))
            { /* block id: 484 */
                int32_t l_1003 = 0x7C0D55FBL;
                uint8_t l_1004 = 0x97L;
                uint32_t l_1005 = 4294967294UL;
                uint16_t l_1006 = 65529UL;
                l_1006 = ((VECTOR(int32_t, 4))((-4L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_1003 , l_1004), l_1005, 0L, 0x61C46334L)).hi)), 1L)).y;
                unsigned int result = 0;
                result += l_1003;
                result += l_1004;
                result += l_1005;
                result += l_1006;
                atomic_add(&p_1243->g_special_values[72 * get_linear_group_id() + 46], result);
            }
            else
            { /* block id: 486 */
                (1 + 1);
            }
        }
        for (p_1243->g_39 = 0; (p_1243->g_39 < 19); p_1243->g_39++)
        { /* block id: 492 */
            uint64_t l_1018 = 0UL;
            uint32_t l_1027 = 0UL;
            (*l_898) |= (safe_mod_func_int64_t_s_s((((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1243->global_2_offset, get_global_id(2), 10), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((l_1018 , ((p_14 ^ (p_14 || ((p_1243->g_1019 == (void*)0) ^ (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((p_14 <= (&p_1243->g_187 != (((**p_1243->g_1019) = (**p_1243->g_1019)) , (void*)0))), p_14)), p_14)) >= (**p_1243->g_879)), 0))))) && 1UL)))), p_1243->g_249.z)), l_1027)))) >= p_14) != 2UL), p_14));
            return l_898;
        }
        return l_898;
    }
    else
    { /* block id: 498 */
        int16_t l_1028[10][5];
        struct S0 *l_1029 = &p_1243->g_976;
        struct S0 **l_1030[3][10] = {{(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0},{(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0},{(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0,&l_1029,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 5; j++)
                l_1028[i][j] = 0x5445L;
        }
        l_1028[2][2] = p_14;
        p_1243->g_1031 = l_1029;
        (*l_898) ^= l_1032;
    }
    (*l_898) = (FAKE_DIVERGE(p_1243->group_1_offset, get_group_id(1), 10) > p_14);
    return l_897;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_comm_values p_1243->g_34 p_1243->g_40 p_1243->g_19 p_1243->g_51 p_1243->l_comm_values p_1243->g_27 p_1243->g_9 p_1243->g_10 p_1243->g_65 p_1243->g_87 p_1243->g_97.f7 p_1243->g_97.f4 p_1243->g_140 p_1243->g_155 p_1243->g_168 p_1243->g_169 p_1243->g_172 p_1243->g_39 p_1243->g_104 p_1243->g_97.f2 p_1243->g_187 p_1243->g_198 p_1243->g_248 p_1243->g_249 p_1243->g_258 p_1243->g_253.f2 p_1243->g_260 p_1243->g_253.f3 p_1243->g_265 p_1243->g_253.f4 p_1243->g_161 p_1243->g_181 p_1243->g_306 p_1243->g_308 p_1243->g_310 p_1243->g_322 p_1243->g_336 p_1243->g_360 p_1243->g_369 p_1243->g_97.f0 p_1243->g_370.f0 p_1243->g_551 p_1243->g_553.f2 p_1243->g_562 p_1243->g_553.f3 p_1243->g_601 p_1243->g_611 p_1243->g_612 p_1243->g_253.f0 p_1243->g_567 p_1243->g_566 p_1243->g_634 p_1243->g_637 p_1243->g_644 p_1243->g_97.f3 p_1243->g_700 p_1243->g_702 p_1243->g_704 p_1243->g_553.f5 p_1243->g_708 p_1243->g_738 p_1243->g_684.f3 p_1243->g_852 p_1243->g_854 p_1243->g_879
 * writes: p_1243->g_26 p_1243->g_40 p_1243->g_51 p_1243->g_27 p_1243->g_65 p_1243->g_87 p_1243->g_97.f7 p_1243->g_161 p_1243->g_155 p_1243->g_19 p_1243->g_97.f2 p_1243->g_97.f3 p_1243->g_198 p_1243->g_260 p_1243->g_253.f3 p_1243->g_181 p_1243->g_104 p_1243->g_140 p_1243->g_168 p_1243->g_360 p_1243->g_566 p_1243->g_553.f3 p_1243->g_370.f4 p_1243->g_370.f0 p_1243->g_39 p_1243->g_553.f5 p_1243->g_684.f5 p_1243->g_553.f0 p_1243->g_253.f0 p_1243->g_700 p_1243->g_739 p_1243->g_684.f3 p_1243->g_562
 */
int8_t * func_16(int8_t * p_17, struct S3 * p_1243)
{ /* block id: 17 */
    int16_t l_21 = (-4L);
    int32_t *l_25[2][2][9] = {{{(void*)0,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,&p_1243->g_10,(void*)0,(void*)0}}};
    int32_t **l_24[9][2][7] = {{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}},{{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]},{&l_25[1][0][1],&l_25[0][0][7],&l_25[0][0][7],&l_25[0][0][7],&l_25[1][0][1],&l_25[1][0][1],&l_25[0][0][7]}}};
    VECTOR(uint64_t, 16) l_30 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL, (VECTOR(uint64_t, 2))(0UL, 5UL), (VECTOR(uint64_t, 2))(0UL, 5UL), 0UL, 5UL, 0UL, 5UL);
    VECTOR(uint64_t, 2) l_31 = (VECTOR(uint64_t, 2))(0x83F3A8A1D584D75FL, 0x3D0C964B5AD8EDCEL);
    VECTOR(uint64_t, 4) l_32 = (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x7819AFCA6F77A312L), 0x7819AFCA6F77A312L);
    VECTOR(uint64_t, 8) l_33 = (VECTOR(uint64_t, 8))(0x5F9F7E48FFC8ECEAL, (VECTOR(uint64_t, 4))(0x5F9F7E48FFC8ECEAL, (VECTOR(uint64_t, 2))(0x5F9F7E48FFC8ECEAL, 0xF41B6ADD7081DC49L), 0xF41B6ADD7081DC49L), 0xF41B6ADD7081DC49L, 0x5F9F7E48FFC8ECEAL, 0xF41B6ADD7081DC49L);
    VECTOR(uint64_t, 16) l_35 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9A64B00F59FB917DL), 0x9A64B00F59FB917DL), 0x9A64B00F59FB917DL, 0UL, 0x9A64B00F59FB917DL, (VECTOR(uint64_t, 2))(0UL, 0x9A64B00F59FB917DL), (VECTOR(uint64_t, 2))(0UL, 0x9A64B00F59FB917DL), 0UL, 0x9A64B00F59FB917DL, 0UL, 0x9A64B00F59FB917DL);
    uint64_t *l_36 = (void*)0;
    uint64_t *l_37 = (void*)0;
    uint64_t *l_38[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 4) l_43 = (VECTOR(uint64_t, 4))(0xDD8C90CC824F9D48L, (VECTOR(uint64_t, 2))(0xDD8C90CC824F9D48L, 0x031D569F207B6F81L), 0x031D569F207B6F81L);
    VECTOR(int8_t, 16) l_52 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x38L), 0x38L), 0x38L, (-1L), 0x38L, (VECTOR(int8_t, 2))((-1L), 0x38L), (VECTOR(int8_t, 2))((-1L), 0x38L), (-1L), 0x38L, (-1L), 0x38L);
    int8_t *l_57 = (void*)0;
    int8_t *l_59 = &p_1243->g_19;
    int8_t **l_58 = &l_59;
    uint8_t *l_64 = &p_1243->g_65;
    uint8_t l_895[3][9][9] = {{{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL}},{{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL}},{{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL},{0x28L,0xDFL,0UL,0xE1L,0xF5L,0x1DL,0UL,0UL,0x9CL}}};
    int i, j, k;
    p_1243->g_27 |= (l_21 != ((safe_mul_func_uint16_t_u_u(((p_1243->g_26[0][2][0] = (void*)0) == &p_1243->g_9), (safe_rshift_func_int16_t_s_s((p_1243->g_comm_values[p_1243->tid] != ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_30.s20e9)).yxyxxxyxwwwzwyzw)).even)), (&p_1243->g_10 != &p_1243->g_27), ((VECTOR(uint64_t, 4))(l_31.yyyx)).y, ((VECTOR(uint64_t, 2))(l_32.xx)), ((VECTOR(uint64_t, 4))(18446744073709551615UL, 0UL, 7UL, 18446744073709551607UL)))).s9 <= (((((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_33.s32700115)))).s5233311565370160, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1243->g_34.yywwwyyy)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_35.se484)), 0x3AA7A66B3E629931L, (--p_1243->g_40), 0x358B4D46498492E7L, 0xE88CDAF70C77B72BL)).s2, 0x3A7AA557094D0414L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_43.wzzyxzxw)).s06)), ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(((void*)0 != &p_1243->g_39))), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_1243->g_51 |= p_1243->g_19), 2)), 15)))) , p_1243->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1243->tid, 60))]), ((VECTOR(uint64_t, 2))(0xD2431EA725BA0F3FL)), 18446744073709551609UL)).s5b89)).wzwwwwzywzxyxzzx))))))), ((VECTOR(uint64_t, 16))(0x778B6DB4DB8DD0D4L))))), ((VECTOR(uint64_t, 16))(0x9CA1FCAC0D74891BL))))).sc53c, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))))).xxywwxwz, ((VECTOR(uint64_t, 8))(0xDF88EE36B02009A6L))))).s5 || FAKE_DIVERGE(p_1243->group_2_offset, get_group_id(2), 10)) , p_1243->g_40) , 0x1E79BFF94FF55BD2L)) , 0x69L)), 8)))) & p_1243->g_comm_values[p_1243->tid]));
    l_895[0][5][1] = (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_52.s6048)), 3L, ((VECTOR(int8_t, 2))((-1L), (-1L))).hi, 0x41L, 0L)).s0 > (FAKE_DIVERGE(p_1243->global_1_offset, get_global_id(1), 10) > (p_1243->g_9 == (((safe_add_func_int64_t_s_s(p_1243->g_10, p_1243->g_40)) >= 0x0C00L) ^ ((safe_mul_func_uint8_t_u_u(1UL, (l_57 != ((*l_58) = &p_1243->g_39)))) && func_60((safe_lshift_func_uint8_t_u_s(((*l_64)++), 1)), p_1243))))));
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->l_comm_values p_1243->g_87 p_1243->g_97.f7 p_1243->g_51 p_1243->g_40 p_1243->g_97.f4 p_1243->g_140 p_1243->g_155 p_1243->g_168 p_1243->g_169 p_1243->g_172 p_1243->g_39 p_1243->g_104 p_1243->g_comm_values p_1243->g_19 p_1243->g_97.f2 p_1243->g_187 p_1243->g_198 p_1243->g_248 p_1243->g_27 p_1243->g_249 p_1243->g_258 p_1243->g_253.f2 p_1243->g_260 p_1243->g_253.f3 p_1243->g_265 p_1243->g_253.f4 p_1243->g_161 p_1243->g_181 p_1243->g_306 p_1243->g_308 p_1243->g_310 p_1243->g_322 p_1243->g_336 p_1243->g_360 p_1243->g_369 p_1243->g_97.f0 p_1243->g_370.f0 p_1243->g_551 p_1243->g_553.f2 p_1243->g_562 p_1243->g_553.f3 p_1243->g_601 p_1243->g_611 p_1243->g_612 p_1243->g_253.f0 p_1243->g_567 p_1243->g_566 p_1243->g_634 p_1243->g_637 p_1243->g_644 p_1243->g_65 p_1243->g_97.f3 p_1243->g_700 p_1243->g_702 p_1243->g_704 p_1243->g_553.f5 p_1243->g_708 p_1243->g_738 p_1243->g_684.f3 p_1243->g_852 p_1243->g_854 p_1243->g_879
 * writes: p_1243->g_87 p_1243->g_97.f7 p_1243->g_51 p_1243->g_65 p_1243->g_161 p_1243->g_155 p_1243->g_19 p_1243->g_97.f2 p_1243->g_97.f3 p_1243->g_27 p_1243->g_198 p_1243->g_260 p_1243->g_253.f3 p_1243->g_181 p_1243->g_26 p_1243->g_104 p_1243->g_140 p_1243->g_168 p_1243->g_360 p_1243->g_566 p_1243->g_553.f3 p_1243->g_370.f4 p_1243->g_370.f0 p_1243->g_39 p_1243->g_553.f5 p_1243->g_684.f5 p_1243->g_553.f0 p_1243->g_253.f0 p_1243->g_700 p_1243->g_739 p_1243->g_684.f3 p_1243->g_562
 */
uint32_t  func_60(int64_t  p_61, struct S3 * p_1243)
{ /* block id: 24 */
    int32_t *l_68[3];
    uint8_t l_69 = 249UL;
    uint32_t *l_86 = &p_1243->g_87;
    struct S1 *l_96[4];
    struct S1 **l_98 = &l_96[0];
    int8_t *l_368 = &p_1243->g_253.f0;
    int8_t **l_367 = &l_368;
    int8_t l_699[7][7] = {{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L},{1L,0x2FL,(-1L),6L,(-1L),0x2FL,1L}};
    uint8_t l_701 = 1UL;
    VECTOR(int32_t, 2) l_703 = (VECTOR(int32_t, 2))((-7L), 0x2810745EL);
    int16_t *l_707 = &p_1243->g_553.f5;
    uint64_t *l_710 = (void*)0;
    uint64_t **l_709 = &l_710;
    int64_t *l_719 = &p_1243->g_553.f3;
    int32_t l_720 = 1L;
    VECTOR(uint64_t, 4) l_721 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xD7CE57FB5E5F204EL), 0xD7CE57FB5E5F204EL);
    int16_t *l_722 = &p_1243->g_684.f5;
    int16_t l_723 = 5L;
    VECTOR(uint16_t, 16) l_763 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x55DEL), 0x55DEL), 0x55DEL, 6UL, 0x55DEL, (VECTOR(uint16_t, 2))(6UL, 0x55DEL), (VECTOR(uint16_t, 2))(6UL, 0x55DEL), 6UL, 0x55DEL, 6UL, 0x55DEL);
    VECTOR(uint16_t, 2) l_857 = (VECTOR(uint16_t, 2))(65535UL, 65529UL);
    VECTOR(uint32_t, 2) l_878 = (VECTOR(uint32_t, 2))(1UL, 0UL);
    int i, j;
    for (i = 0; i < 3; i++)
        l_68[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_96[i] = &p_1243->g_97;
    l_69 = 0L;
    for (l_69 = 0; (l_69 <= 38); l_69++)
    { /* block id: 28 */
        VECTOR(uint16_t, 8) l_74 = (VECTOR(uint16_t, 8))(0xA761L, (VECTOR(uint16_t, 4))(0xA761L, (VECTOR(uint16_t, 2))(0xA761L, 1UL), 1UL), 1UL, 0xA761L, 1UL);
        int32_t l_75 = 0x3F1ECA23L;
        int i;
        l_75 = (safe_sub_func_uint16_t_u_u(5UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_74.s4617300342036263)))).sa3)).hi));
    }
    l_701 = ((safe_lshift_func_int8_t_s_u((-10L), (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(p_1243->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1243->tid, 60))], p_61)), (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(0x3E8AL, (((*l_86) &= ((VECTOR(uint32_t, 2))(0UL, 0xD7B545DDL)).lo) == (l_699[3][6] = ((((*l_98) = func_88(func_94(((*l_98) = l_96[0]), p_1243), p_1243->g_258.x, l_367, p_1243->g_369, (safe_sub_func_int64_t_s_s(((((((p_1243->g_97.f0 == 0x0DL) < p_61) , 4UL) | p_1243->g_306.s6) ^ p_61) <= p_1243->g_370.f0), p_1243->g_248.s5)), p_1243)) == (void*)0) == 0x6AL))), 0L, 5L)).z, p_61)))))) & p_1243->g_700);
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(p_1243->g_702.s3473)).wwzxwyzywwyzxwzz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_703.yyxxxyxy)).s22)).yyyxyxxyyxxyxyyx))).s66a9, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0E9CE127L, 0x14CD1B11L)), 0x2AF4670CL, (-4L))), ((VECTOR(int32_t, 4))(p_1243->g_704.s2530))))).zxzxxzzwwyxzwwxy, (int32_t)((((((*l_707) ^= ((+(safe_mod_func_int16_t_s_s((!p_1243->g_322.x), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-1L), (-9L))))).odd))) < p_1243->g_704.s3)) != ((*l_722) = (((p_1243->g_708 == l_709) ^ (safe_mod_func_int64_t_s_s(p_1243->g_637.se, ((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((3UL != ((safe_div_func_int64_t_s_s(((*l_719) = p_1243->g_601.s0), ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(18446744073709551615UL, l_720, 1UL, 0UL)), ((VECTOR(uint64_t, 8))(l_721.xzywxxyy)), (GROUP_DIVERGE(0, 1) > (*p_1243->g_567)), 18446744073709551615UL, 1UL, 0x098CF7992D22CFC8L)).lo))))).s7)) < 1UL)), p_1243->g_306.se)), 4L)) | p_61)))) < 251UL))) || 0x99L) >= p_61) ^ l_723)))).s55)).even)
    { /* block id: 349 */
        int32_t *l_724[10][5][2] = {{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}},{{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0},{&p_1243->g_51,(void*)0}}};
        int32_t **l_725[9][1][8] = {{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}},{{&p_1243->g_26[0][2][0],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1],&l_724[1][4][1],&l_68[1],&p_1243->g_26[0][2][0],&l_68[1]}}};
        int8_t *l_728 = &p_1243->g_253.f0;
        int8_t l_737 = (-1L);
        int16_t **l_743[6][4] = {{&l_722,&l_707,&l_722,&l_722},{&l_722,&l_707,&l_722,&l_722},{&l_722,&l_707,&l_722,&l_722},{&l_722,&l_707,&l_722,&l_722},{&l_722,&l_707,&l_722,&l_722},{&l_722,&l_707,&l_722,&l_722}};
        int i, j, k;
        l_68[2] = l_724[6][0][1];
        for (p_1243->g_370.f0 = 0; (p_1243->g_370.f0 > 2); p_1243->g_370.f0 = safe_add_func_int16_t_s_s(p_1243->g_370.f0, 8))
        { /* block id: 353 */
            VECTOR(uint8_t, 4) l_733 = (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 0x78L), 0x78L);
            int64_t l_734 = 1L;
            VECTOR(int16_t, 4) l_735 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x601BL), 0x601BL);
            int32_t l_740 = 0x32894BADL;
            int i;
            l_68[1] = func_130(l_728, ((safe_mul_func_uint16_t_u_u((0x13L > ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x49L, 0UL)))).hi), ((*l_722) = (((p_61 ^ (-7L)) | (((p_1243->g_553.f0 = 0x65L) ^ ((safe_lshift_func_int8_t_s_u((((VECTOR(uint64_t, 2))(0x63D015CEB27F5CF2L, 5UL)).lo && (((*l_728) = p_61) != (((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 8))(l_733.wwxxxyxy)), (2UL && (l_734 || ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(l_735.xyyy)).xywzzxzxxxxzzzyw, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(p_1243->g_736, 1L, 0L, 0x5DCBL)).even, ((VECTOR(int16_t, 2))(0x08B7L))))))).xxyxxyyyyxxyyyyy))).se)), ((VECTOR(uint8_t, 4))(0x4DL)), 255UL, 0xD3L)), (uint8_t)p_1243->g_253.f4))).sb < 0x78L))), p_1243->g_155.s9)) | l_734)) || l_737)) > 0x5418A3E3L)))) , p_61), p_61, p_1243->g_738, p_1243->g_562.y, p_1243);
            l_740 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1881A466L, 0x36F4136BL)), (-1L), (-10L))).wyzyzxyy)).s3;
            l_740 |= (safe_rshift_func_uint16_t_u_s(0x744DL, 5));
            if (p_61)
                break;
        }
        l_743[4][2] = &l_722;
    }
    else
    { /* block id: 363 */
        uint8_t l_744 = 1UL;
        uint16_t *l_751 = (void*)0;
        int32_t l_752[8] = {0x52D57B63L,0x52D57B63L,0x52D57B63L,0x52D57B63L,0x52D57B63L,0x52D57B63L,0x52D57B63L,0x52D57B63L};
        uint64_t **l_760[1][5];
        int16_t l_771 = 0x5546L;
        int32_t l_772 = 0x70D29656L;
        VECTOR(uint8_t, 2) l_853 = (VECTOR(uint8_t, 2))(0x03L, 0x89L);
        uint8_t *l_876 = &p_1243->g_97.f7;
        uint32_t l_877 = 0UL;
        int32_t l_883 = 0x2517CC57L;
        int32_t **l_886 = &l_68[1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_760[i][j] = &l_710;
        }
        if (((((!(0L <= l_744)) ^ 0x41L) <= ((l_752[1] = ((((safe_div_func_int8_t_s_s((p_61 ^ l_744), (safe_add_func_uint64_t_u_u(0UL, (safe_mod_func_uint8_t_u_u(((p_61 < (((void*)0 != &p_1243->g_336) | p_61)) <= p_61), p_61)))))) | 0x3BL) > (-5L)) , 0x75D3L)) <= l_744)) >= p_61))
        { /* block id: 365 */
            uint32_t l_753 = 0UL;
            uint8_t *l_756 = (void*)0;
            uint8_t *l_757[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t *l_768 = &p_1243->g_684.f5;
            int i;
            atomic_max(&p_1243->g_atomic_reduction[get_linear_group_id()], (((l_753 != (l_772 = ((!((((safe_mod_func_uint8_t_u_u((--p_1243->g_97.f7), 247UL)) > (((void*)0 == l_760[0][1]) , (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_763.sb9771266)).s1, 15)))) , (l_771 = (l_752[1] = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_753, ((((void*)0 == l_768) , ((safe_lshift_func_int16_t_s_u(((&p_1243->g_181[0] != l_751) <= p_61), 9)) ^ l_752[3])) , p_61))), (-5L)))))) != FAKE_DIVERGE(p_1243->global_1_offset, get_global_id(1), 10))) ^ p_61))) != 0x48L) | 0x3EL));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1243->v_collective += p_1243->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        else
        { /* block id: 371 */
            struct S1 *l_773 = &p_1243->g_774;
            int32_t l_777 = (-1L);
            int8_t *l_780 = (void*)0;
            int32_t **l_783 = &p_1243->g_26[0][2][0];
            int32_t *l_784[8];
            int i;
            for (i = 0; i < 8; i++)
                l_784[i] = &l_752[5];
            (*l_98) = l_773;
            for (p_1243->g_700 = (-24); (p_1243->g_700 >= (-27)); --p_1243->g_700)
            { /* block id: 375 */
                l_777 |= p_61;
            }
            l_752[0] &= ((p_61 && (FAKE_DIVERGE(p_1243->global_0_offset, get_global_id(0), 10) >= (((p_61 > p_61) , (safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1243->group_2_offset, get_group_id(2), 10), GROUP_DIVERGE(2, 1)))) , ((p_1243->g_684.f3 ^= ((((*l_707) = ((void*)0 == &p_1243->g_567)) && (l_780 == ((*p_1243->g_738) = (void*)0))) , (+p_1243->g_97.f7))) , ((safe_add_func_int8_t_s_s(((l_784[0] = ((*l_783) = &p_1243->g_198)) == (void*)0), p_61)) , l_771))))) >= p_1243->g_comm_values[p_1243->tid]);
            if ((atomic_inc(&p_1243->l_atomic_input[19]) == 3))
            { /* block id: 385 */
                uint8_t l_785[6] = {9UL,9UL,9UL,9UL,9UL,9UL};
                uint8_t l_786 = 0xD3L;
                VECTOR(int32_t, 4) l_787 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L));
                int32_t *l_798 = (void*)0;
                int32_t *l_799 = (void*)0;
                int i;
                if (((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((FAKE_DIVERGE(p_1243->global_0_offset, get_global_id(0), 10) , (l_786 = l_785[3])), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_787.xwwwwyyzwzzxwzxy)))).even)).even)), 5L, 0x24FB52EBL)).s6426261573327263)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x0D7299B8L, 9L)), ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(6L, 0x5C5BC8A3L)), 1L)), 0x5C40F62DL, 0x59B8CFC1L)).s6153346526667021))).s0)
                { /* block id: 387 */
                    int32_t l_789 = (-1L);
                    int32_t *l_788[7][6] = {{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789},{(void*)0,&l_789,&l_789,&l_789,&l_789,&l_789}};
                    int32_t *l_790 = &l_789;
                    int32_t l_791 = 1L;
                    uint8_t l_792 = 0x98L;
                    int8_t l_793 = 0x7BL;
                    uint16_t l_794 = 9UL;
                    int i, j;
                    l_790 = l_788[6][4];
                    l_787.y |= l_791;
                    l_794 ^= (((l_792 = 0x30299C9F82FBEDA9L) , 1UL) , l_793);
                }
                else
                { /* block id: 392 */
                    uint8_t l_795 = 248UL;
                    uint32_t l_796 = 0x74E8BD8CL;
                    int16_t l_797 = 0x61B0L;
                    l_795 = (l_787.y &= (-1L));
                    l_797 = l_796;
                }
                l_799 = l_798;
                for (l_785[3] = (-2); (l_785[3] < 45); l_785[3] = safe_add_func_int32_t_s_s(l_785[3], 4))
                { /* block id: 400 */
                    int32_t l_802 = (-5L);
                    uint16_t l_831 = 0x3C1DL;
                    for (l_802 = 27; (l_802 != 9); l_802--)
                    { /* block id: 403 */
                        VECTOR(int32_t, 4) l_805 = (VECTOR(int32_t, 4))(0x4C680D3EL, (VECTOR(int32_t, 2))(0x4C680D3EL, 0x29974323L), 0x29974323L);
                        VECTOR(int32_t, 2) l_806 = (VECTOR(int32_t, 2))(0x6655B03DL, 0x7865AF98L);
                        VECTOR(int32_t, 8) l_807 = (VECTOR(int32_t, 8))(0x4C658C5EL, (VECTOR(int32_t, 4))(0x4C658C5EL, (VECTOR(int32_t, 2))(0x4C658C5EL, (-1L)), (-1L)), (-1L), 0x4C658C5EL, (-1L));
                        VECTOR(int32_t, 2) l_808 = (VECTOR(int32_t, 2))(0x581B5F85L, (-10L));
                        int32_t l_809 = 4L;
                        uint32_t l_810 = 0UL;
                        int32_t l_811 = 0x1B62AE85L;
                        uint64_t l_812 = 0xB54535C89644B42FL;
                        int8_t l_813 = 0x4DL;
                        VECTOR(int32_t, 4) l_814 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                        VECTOR(int32_t, 2) l_815 = (VECTOR(int32_t, 2))(0x765AAF8BL, 0x6242FBA0L);
                        VECTOR(int32_t, 4) l_816 = (VECTOR(int32_t, 4))(0x6CED8423L, (VECTOR(int32_t, 2))(0x6CED8423L, 0x6BE21FC7L), 0x6BE21FC7L);
                        int16_t l_817 = (-1L);
                        uint16_t l_818 = 0xB408L;
                        int16_t l_819 = 0x2D7DL;
                        uint32_t l_820 = 8UL;
                        uint8_t l_821 = 253UL;
                        uint32_t l_822 = 0x6A676E03L;
                        int8_t l_823 = 0x32L;
                        uint32_t l_824[5][3][6] = {{{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL}},{{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL}},{{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL}},{{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL}},{{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL},{0xEA3A1EC5L,7UL,0x69D9D7B3L,4294967290UL,0UL,1UL}}};
                        uint32_t l_827[5][2][8] = {{{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL},{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL}},{{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL},{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL}},{{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL},{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL}},{{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL},{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL}},{{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL},{0x9079B329L,0UL,0xB0666B3DL,0x2805B9CFL,0x9079B329L,0xFF000F52L,0UL,0xAAE656DEL}}};
                        uint32_t l_828 = 4294967288UL;
                        VECTOR(int32_t, 4) l_829 = (VECTOR(int32_t, 4))(0x7AB5D5A6L, (VECTOR(int32_t, 2))(0x7AB5D5A6L, 0x25646965L), 0x25646965L);
                        VECTOR(int32_t, 2) l_830 = (VECTOR(int32_t, 2))(0x21233344L, 0x26B9B6F9L);
                        int i, j, k;
                        l_787.y = ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(l_805.xxyw)).yxzyzyyyzyxwwyww))).s49, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x6A531BF3L, (-1L))).yyxxxyyy)).s1001146424442143)).s8472))).wwxzyyywzxzwzwxz)).s6a02)).xyywywxy)).s23)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_806.xyyyyyyxxxxxxxyx)).sbb))))), 1L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(l_807.s22727167)).s1225067103746744, ((VECTOR(int32_t, 4))(l_808.yxyx)).zzxxyyzwzwyxxxwx))).even)).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x05931FD8L, 1L)))).yxxx))).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))((-9L), 0L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((l_811 = (l_810 &= l_809)) , 1L), l_812, l_813, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_814.xzyw)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(l_815.xxxx)).xzzyzxzz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_816.wzyzxyyyxyzzyyxy)))))).lo))), l_817, 0x065FA622L, (-1L), l_818, 6L, l_819, 0L, (-2L))).s10))).hi, (-7L), 0x4601BC17L, 0x1F1DF036L))))), l_820, (-1L), ((VECTOR(int32_t, 2))((-1L))), l_821, (-7L), ((VECTOR(int32_t, 2))(0x546DFED9L)), 0x68FB40D6L)).sce1b, ((VECTOR(int32_t, 4))(0x4C8EE3ABL))))), 1L, ((VECTOR(int32_t, 2))((-4L))), 0x75B0EE8DL)).lo, ((VECTOR(int32_t, 4))(0x2742963FL))))).z, 0x5FBF4000L, ((VECTOR(int32_t, 2))(0x6B3FD9A6L)), 0x66DFB01AL, 0x688BFF4EL)).s64, ((VECTOR(int32_t, 2))(6L))))).yyxyyxxx)).s0045661456336740)).sa0)).yyxyxyyyyyxyyxyx)).sef))), 0L, 0L, l_822, 0L, ((VECTOR(int32_t, 4))(0L)), l_823, 0x31393520L, (-1L))), ((VECTOR(int32_t, 16))(1L))))).sa;
                        l_824[0][0][3]++;
                        l_787.w = l_827[4][0][7];
                        l_787.y &= ((l_828 &= 0x74CEADC4FD642C05L) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_829.xyzz)).xyzxwyxywxzzzwyz)).hi, ((VECTOR(int32_t, 4))(8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_830.yy)), 7L, (-1L))).hi)), 0L)).wxwzwyxy))))).s2);
                    }
                    l_831--;
                    for (l_831 = 0; (l_831 < 44); l_831++)
                    { /* block id: 415 */
                        VECTOR(int32_t, 8) l_836 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x424F3EBBL), 0x424F3EBBL), 0x424F3EBBL, (-2L), 0x424F3EBBL);
                        uint8_t l_837 = 0x03L;
                        int64_t l_840 = 0x08EDD0B313259C41L;
                        int32_t l_841 = 0x6171326AL;
                        uint32_t l_842 = 0x72C7D339L;
                        int32_t *l_845 = &l_841;
                        int i;
                        l_836.s6 = ((VECTOR(int32_t, 16))(l_836.s1572120455730342)).sf;
                        --l_837;
                        ++l_842;
                        l_799 = l_845;
                    }
                }
                unsigned int result = 0;
                int l_785_i0;
                for (l_785_i0 = 0; l_785_i0 < 6; l_785_i0++) {
                    result += l_785[l_785_i0];
                }
                result += l_786;
                result += l_787.w;
                result += l_787.z;
                result += l_787.y;
                result += l_787.x;
                atomic_add(&p_1243->l_special_values[19], result);
            }
            else
            { /* block id: 422 */
                (1 + 1);
            }
        }
        l_772 = (l_772 >= ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x7AL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 0x69L)), 0xCBL, 255UL, ((VECTOR(uint8_t, 2))(p_1243->g_852.sac)), ((VECTOR(uint8_t, 2))(0xBEL, 0x4CL)), 1UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_853.yxxyyyxx)).s74)), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(255UL, 255UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1243->g_854.xzywwzxw)))), 1UL, (((safe_mul_func_int8_t_s_s((l_883 = (((((((FAKE_DIVERGE(p_1243->global_1_offset, get_global_id(1), 10) <= ((VECTOR(uint16_t, 16))(l_857.yyyyxyyyxyyyyyyy)).s6) , p_1243->g_39) , ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_1243->g_161[1][5][2], 2)), (0x44DDCE8B0611DF13L >= ((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((((((*l_719) |= (((*l_876) &= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((GROUP_DIVERGE(2, 1) == 0x799BA109EF342586L), 6)), (l_752[1] = 0x7008AC79L)))) <= (-5L))) <= 0x074B93DFDB016C85L) != p_61) , l_752[1]) > p_61) < FAKE_DIVERGE(p_1243->local_2_offset, get_local_id(2), 10)), p_61)), l_877)), 0x2AL)) | p_61), 0xCC1EC806L)), l_853.x)) <= l_878.x)))) != 18446744073709551615UL)) , p_1243->g_879) == p_1243->g_879) > l_772) != p_61)), l_772)) | 5UL) || 5UL), p_61, ((VECTOR(uint8_t, 2))(255UL)), 247UL)).lo, ((VECTOR(uint8_t, 8))(0x10L))))), ((VECTOR(uint8_t, 4))(0x5FL)), 255UL, 246UL)).s34))), 0x5DL, p_61, 0xCDL, 253UL, 1UL)).s2690)).x)), 0x0ECAL)), 2)) ^ 0x6AL));
        l_720 = (safe_mul_func_uint16_t_u_u((((l_886 != l_886) | (!(((*l_886) = (*l_886)) != (void*)0))) <= (safe_mul_func_int16_t_s_s(1L, 0x7CB5L))), (safe_add_func_uint8_t_u_u((+((((*l_722) = (p_1243->g_253.f0 , (safe_sub_func_uint64_t_u_u(p_61, ((safe_mul_func_uint16_t_u_u((p_1243->g_562.x = ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(0x722FL, ((p_1243->g_708 != p_1243->g_708) > 0x23F8L), ((VECTOR(uint16_t, 2))(0xD5CCL)), l_703.x, 0x7AF4L, 65528UL, 0UL)).hi, (uint16_t)0UL))).x), p_61)) || GROUP_DIVERGE(1, 1)))))) > p_61) ^ p_61)), p_61))));
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_551 p_1243->g_553.f2 p_1243->g_562 p_1243->g_187 p_1243->g_19 p_1243->g_260 p_1243->g_97.f2 p_1243->g_553.f3 p_1243->g_360 p_1243->g_155 p_1243->g_97.f0 p_1243->g_601 p_1243->g_169 p_1243->g_611 p_1243->g_612 p_1243->g_253.f0 p_1243->g_567 p_1243->g_104 p_1243->g_566 p_1243->g_370.f0 p_1243->g_634 p_1243->g_310 p_1243->g_637 p_1243->g_161 p_1243->g_322 p_1243->g_369 p_1243->g_644 p_1243->g_65 p_1243->g_97.f3 p_1243->g_51 p_1243->g_39
 * writes: p_1243->g_566 p_1243->g_260 p_1243->g_553.f3 p_1243->g_155 p_1243->g_370.f4 p_1243->g_97.f3 p_1243->g_370.f0 p_1243->g_168 p_1243->g_104 p_1243->g_65 p_1243->g_51 p_1243->g_198 p_1243->g_39
 */
struct S1 * func_88(uint32_t * p_89, int32_t  p_90, int8_t ** p_91, struct S1 * p_92, int16_t  p_93, struct S3 * p_1243)
{ /* block id: 153 */
    struct S0 *l_552 = &p_1243->g_553;
    uint32_t *l_564 = &p_1243->g_104[0];
    uint32_t **l_563[10] = {&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564,&l_564};
    uint32_t ***l_565 = &l_563[4];
    uint32_t l_568 = 0xD3CDD001L;
    uint16_t *l_569 = &p_1243->g_260;
    int32_t l_579 = 0x384A5ABFL;
    int16_t l_589[10];
    int8_t *l_593 = (void*)0;
    VECTOR(int32_t, 8) l_600 = (VECTOR(int32_t, 8))(0x425DD137L, (VECTOR(int32_t, 4))(0x425DD137L, (VECTOR(int32_t, 2))(0x425DD137L, 0L), 0L), 0L, 0x425DD137L, 0L);
    int32_t l_626 = 0L;
    int16_t l_692 = 7L;
    int32_t l_695[1];
    uint32_t l_696 = 0x7957BF77L;
    int i;
    for (i = 0; i < 10; i++)
        l_589[i] = 3L;
    for (i = 0; i < 1; i++)
        l_695[i] = 0x43349F63L;
    if ((atomic_inc(&p_1243->l_atomic_input[55]) == 5))
    { /* block id: 155 */
        int32_t l_373 = 0x40702608L;
        for (l_373 = 9; (l_373 < 23); l_373++)
        { /* block id: 158 */
            uint16_t l_376 = 0x016CL;
            int32_t l_510 = 7L;
            int32_t *l_509 = &l_510;
            int32_t *l_511 = (void*)0;
            int32_t *l_512 = &l_510;
            int32_t *l_513 = &l_510;
            int32_t *l_514 = &l_510;
            int32_t *l_515 = &l_510;
            int32_t *l_516 = &l_510;
            if (l_376)
            { /* block id: 159 */
                int32_t l_377[2][5] = {{(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L)}};
                int i, j;
                for (l_377[0][1] = (-19); (l_377[0][1] >= (-24)); l_377[0][1] = safe_sub_func_int8_t_s_s(l_377[0][1], 5))
                { /* block id: 162 */
                    union U2 l_381 = {0x2664L};
                    union U2 *l_380 = &l_381;
                    l_380 = (void*)0;
                }
                for (l_377[0][1] = (-6); (l_377[0][1] == (-9)); --l_377[0][1])
                { /* block id: 167 */
                    VECTOR(int32_t, 2) l_384 = (VECTOR(int32_t, 2))(0x7BDCA4FBL, (-10L));
                    VECTOR(int32_t, 8) l_385 = (VECTOR(int32_t, 8))(0x0F6E647FL, (VECTOR(int32_t, 4))(0x0F6E647FL, (VECTOR(int32_t, 2))(0x0F6E647FL, 0x4F21CC76L), 0x4F21CC76L), 0x4F21CC76L, 0x0F6E647FL, 0x4F21CC76L);
                    VECTOR(int32_t, 16) l_386 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int32_t, 2))((-5L), 0L), (VECTOR(int32_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
                    VECTOR(int16_t, 2) l_387 = (VECTOR(int16_t, 2))(1L, (-1L));
                    uint32_t l_388 = 0UL;
                    int8_t l_389 = 3L;
                    VECTOR(int8_t, 16) l_390 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L), (VECTOR(int8_t, 2))(0L, (-2L)), (VECTOR(int8_t, 2))(0L, (-2L)), 0L, (-2L), 0L, (-2L));
                    VECTOR(int8_t, 16) l_391 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                    VECTOR(uint8_t, 8) l_392 = (VECTOR(uint8_t, 8))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 255UL), 255UL), 255UL, 0x77L, 255UL);
                    uint32_t l_393 = 4294967295UL;
                    uint32_t l_394[9] = {0xE1B82CDAL,0x72BF1DF1L,0xE1B82CDAL,0xE1B82CDAL,0x72BF1DF1L,0xE1B82CDAL,0xE1B82CDAL,0x72BF1DF1L,0xE1B82CDAL};
                    VECTOR(uint8_t, 4) l_395 = (VECTOR(uint8_t, 4))(0xECL, (VECTOR(uint8_t, 2))(0xECL, 0xA7L), 0xA7L);
                    int64_t l_396[2];
                    VECTOR(uint64_t, 2) l_397 = (VECTOR(uint64_t, 2))(0xC7F3DDB51170D256L, 0x358D941C29687573L);
                    uint32_t l_398 = 0x5BBF1EC9L;
                    VECTOR(uint16_t, 2) l_399 = (VECTOR(uint16_t, 2))(65528UL, 0x5D37L);
                    int8_t l_400 = 0x32L;
                    uint64_t l_401 = 0x8CAD3445E5A8A51BL;
                    VECTOR(uint32_t, 4) l_404 = (VECTOR(uint32_t, 4))(0x4F6E1461L, (VECTOR(uint32_t, 2))(0x4F6E1461L, 1UL), 1UL);
                    VECTOR(uint32_t, 8) l_405 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x32C5AF18L), 0x32C5AF18L), 0x32C5AF18L, 4294967295UL, 0x32C5AF18L);
                    int32_t l_406 = 0L;
                    int32_t l_407 = (-1L);
                    int32_t l_408 = 0x3301E2AAL;
                    VECTOR(uint16_t, 16) l_409 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x7D5DL), 0x7D5DL), 0x7D5DL, 1UL, 0x7D5DL, (VECTOR(uint16_t, 2))(1UL, 0x7D5DL), (VECTOR(uint16_t, 2))(1UL, 0x7D5DL), 1UL, 0x7D5DL, 1UL, 0x7D5DL);
                    VECTOR(uint32_t, 8) l_410 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x860CF9C2L), 0x860CF9C2L), 0x860CF9C2L, 4294967295UL, 0x860CF9C2L);
                    int8_t l_411[2];
                    uint32_t l_412[3];
                    int64_t l_413[1];
                    union U2 l_414[4] = {{0x5A86L},{0x5A86L},{0x5A86L},{0x5A86L}};
                    union U2 l_415 = {0x14B4L};
                    union U2 l_416 = {-3L};
                    uint16_t l_417 = 0x4564L;
                    uint64_t l_418 = 0xBA14AB6AAE44D185L;
                    int8_t l_419 = 0x64L;
                    uint8_t l_420[4];
                    uint32_t l_421[1];
                    int8_t l_422 = 0x20L;
                    uint32_t l_423 = 0x3F1882A8L;
                    VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))(9L, (-1L));
                    int16_t l_425[4][2][8] = {{{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL},{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL}},{{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL},{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL}},{{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL},{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL}},{{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL},{(-10L),(-10L),(-9L),0L,4L,4L,(-4L),0x4B4CL}}};
                    int16_t l_426 = 1L;
                    uint32_t l_427 = 0x345C6137L;
                    int32_t l_428 = 0x112C0FDCL;
                    int32_t l_429 = 4L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_396[i] = (-5L);
                    for (i = 0; i < 2; i++)
                        l_411[i] = 0x66L;
                    for (i = 0; i < 3; i++)
                        l_412[i] = 0x341BF478L;
                    for (i = 0; i < 1; i++)
                        l_413[i] = (-1L);
                    for (i = 0; i < 4; i++)
                        l_420[i] = 7UL;
                    for (i = 0; i < 1; i++)
                        l_421[i] = 0x8E28AAB4L;
                    l_429 = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_384.xyyxxyxx)).even)).xxwxwzyw)).s5145371440707007)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_385.s75)).xxyx))))).xwzwzwyy, ((VECTOR(int32_t, 16))(l_386.s12110b905038af96)).hi))).s50, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_387.yx)), 1L, (-8L))), ((VECTOR(uint16_t, 8))((l_388 , l_389), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_390.sb3)), (-1L), 0x38L)).yzzwxxxzyxzwzzwy, ((VECTOR(int8_t, 4))(l_391.s46b1)).xxyxzxxxzwwyxzwy))).s9213, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((l_393 = ((VECTOR(uint8_t, 8))(l_392.s23234136)).s0), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((l_396[0] |= (l_395.x &= l_394[0])) , 0UL), ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_424.y = ((FAKE_DIVERGE(p_1243->global_1_offset, get_global_id(1), 10) , (l_398 = ((VECTOR(uint64_t, 2))(l_397.yy)).even)) , (((VECTOR(uint16_t, 8))(l_399.xxxxyyxx)).s3 , ((VECTOR(int32_t, 4))(0L, (((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x8C4F50B4L, (++l_401), ((VECTOR(uint32_t, 2))(l_404.wz)), ((VECTOR(uint32_t, 2))(9UL, 4294967295UL)), 0x1237E278L, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(l_405.s51)).yxyyyxyx, ((VECTOR(uint32_t, 16))(0x1C074220L, ((l_418 = (((l_413[0] = (l_412[1] &= ((l_408 = (l_407 ^= l_406)) , (((VECTOR(uint16_t, 16))(l_409.s3798e68dcec0575f)).s5 , (l_411[1] = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_410.s1524262756610343)).s0d72)).xzyyxzwyyyyxwxxy)))).sc))))) , (l_416 = (l_415 = l_414[0]))) , l_417)) , (l_420[1] = l_419)), 0UL, (l_421[0] &= 4294967295UL), 0x118914E4L, 0x0452F2C5L, 4294967288UL, ((VECTOR(uint32_t, 8))(0x043792A2L)), 0xD3C4B83AL)).even))).s74, (uint32_t)l_422, (uint32_t)0x90BA6CF9L))), 4294967289UL, ((VECTOR(uint32_t, 4))(4294967287UL)), 6UL, 4294967293UL)).sa3ea)).hi, ((VECTOR(uint32_t, 2))(0xD77EB23AL))))), ((VECTOR(uint32_t, 2))(4294967286UL)), ((VECTOR(uint32_t, 2))(0x890BF7BCL))))).lo , l_423), (-1L), 0x32126B3CL)).y))), ((VECTOR(int32_t, 2))(3L)), 0x73A014E1L)), 0x47EBBBDEL, l_425[2][0][7], 0L, 0x32D9CD39L)).s6 , l_426) , 0x5FL), 0xC0L, l_427, ((VECTOR(uint8_t, 4))(246UL)), 0UL, ((VECTOR(uint8_t, 4))(0xAEL)), GROUP_DIVERGE(2, 1), 0xEBL, 0UL)).sbe))), ((VECTOR(uint8_t, 4))(0x95L)), 0xCBL)).s06)).xxxxyyxxxxxyyxxy, ((VECTOR(uint8_t, 16))(0xFCL))))).s8bad, ((VECTOR(uint8_t, 4))(0xDDL))))))), ((VECTOR(uint8_t, 4))(0xC9L))))).odd, ((VECTOR(uint8_t, 2))(251UL))))), l_428, ((VECTOR(uint16_t, 4))(0x0C88L)))).even))).wyxyywzx, ((VECTOR(int32_t, 8))(5L))))).s64))), 0x41067124L, 0x03AFC6DBL, ((VECTOR(int32_t, 2))(0x5CC19058L)), (-3L), (-9L))).s33, ((VECTOR(int32_t, 2))(0x562CC356L)), ((VECTOR(int32_t, 2))(0x6793D22FL))))).xyyy)).lo)).yyxyxxyx, ((VECTOR(int32_t, 8))(0x3223EAD2L))))).s27, ((VECTOR(int32_t, 2))(0x10C7C238L))))))).xyxxyyyxxxxyyyyx))))).s0;
                }
            }
            else
            { /* block id: 186 */
                uint16_t l_430[3];
                int32_t l_431 = 4L;
                uint64_t l_432 = 18446744073709551615UL;
                VECTOR(int64_t, 8) l_433 = (VECTOR(int64_t, 8))(0x784784100FC00DB7L, (VECTOR(int64_t, 4))(0x784784100FC00DB7L, (VECTOR(int64_t, 2))(0x784784100FC00DB7L, 0x1F5A14CEF3810BDFL), 0x1F5A14CEF3810BDFL), 0x1F5A14CEF3810BDFL, 0x784784100FC00DB7L, 0x1F5A14CEF3810BDFL);
                int i;
                for (i = 0; i < 3; i++)
                    l_430[i] = 0x52A8L;
                l_431 &= (l_430[2] |= 8L);
                if ((l_432 , l_433.s0))
                { /* block id: 189 */
                    int32_t l_435[5];
                    int32_t *l_434 = &l_435[4];
                    int32_t *l_436 = &l_435[3];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_435[i] = 0x451BC57AL;
                    l_436 = l_434;
                }
                else
                { /* block id: 191 */
                    VECTOR(int32_t, 2) l_437 = (VECTOR(int32_t, 2))(0x638DE1FBL, 2L);
                    int i;
                    for (l_437.x = (-23); (l_437.x <= (-10)); l_437.x++)
                    { /* block id: 194 */
                        uint16_t l_440 = 0xF1C2L;
                        uint32_t l_443 = 4294967295UL;
                        int8_t l_446 = 6L;
                        int64_t l_447 = (-1L);
                        uint32_t l_448 = 0xA3438944L;
                        --l_440;
                        l_443++;
                        l_448 &= (l_446 , (l_447 = 1L));
                    }
                }
                for (l_430[2] = 0; (l_430[2] < 34); l_430[2] = safe_add_func_int32_t_s_s(l_430[2], 2))
                { /* block id: 203 */
                    VECTOR(int32_t, 8) l_451 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                    uint64_t l_490[4][2][3] = {{{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL},{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL}},{{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL},{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL}},{{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL},{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL}},{{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL},{0x7CCCF060E531D99FL,18446744073709551615UL,0x7CCCF060E531D99FL}}};
                    int i, j, k;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_451.s30)).yyxx)).w)
                    { /* block id: 204 */
                        struct S0 l_453 = {0x23L,0x44C6D35B93D66BECL,0UL,6L,0xA99D5E39L,0x4026L,0x60846434L};/* VOLATILE GLOBAL l_453 */
                        struct S0 *l_452 = &l_453;
                        struct S0 l_455 = {0L,1L,1UL,0x059177D3097D2548L,0xB759D2FAL,0x5D2CL,0x3BB68F0CL};/* VOLATILE GLOBAL l_455 */
                        struct S0 *l_454 = &l_455;
                        struct S0 l_457 = {-9L,0x4A3C5C8E9D30DACDL,0xC7C2A8DDC2EEA0DFL,1L,4294967295UL,0x291CL,-9L};/* VOLATILE GLOBAL l_457 */
                        struct S0 *l_456 = &l_457;
                        VECTOR(uint16_t, 2) l_458 = (VECTOR(uint16_t, 2))(0UL, 0x8E9EL);
                        VECTOR(uint16_t, 2) l_459 = (VECTOR(uint16_t, 2))(0x6345L, 0x5720L);
                        VECTOR(uint16_t, 8) l_460 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65531UL), 65531UL), 65531UL, 65530UL, 65531UL);
                        uint64_t l_461 = 0x71BFC11A37DD8157L;
                        VECTOR(int32_t, 8) l_462 = (VECTOR(int32_t, 8))(0x2D922DA0L, (VECTOR(int32_t, 4))(0x2D922DA0L, (VECTOR(int32_t, 2))(0x2D922DA0L, (-1L)), (-1L)), (-1L), 0x2D922DA0L, (-1L));
                        int32_t l_463[8];
                        VECTOR(uint16_t, 16) l_464 = (VECTOR(uint16_t, 16))(0xDBC6L, (VECTOR(uint16_t, 4))(0xDBC6L, (VECTOR(uint16_t, 2))(0xDBC6L, 0x0BEAL), 0x0BEAL), 0x0BEAL, 0xDBC6L, 0x0BEAL, (VECTOR(uint16_t, 2))(0xDBC6L, 0x0BEAL), (VECTOR(uint16_t, 2))(0xDBC6L, 0x0BEAL), 0xDBC6L, 0x0BEAL, 0xDBC6L, 0x0BEAL);
                        VECTOR(uint16_t, 4) l_465 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL);
                        int16_t l_466 = 0x5E49L;
                        uint32_t l_467 = 1UL;
                        union U2 l_468 = {0L};
                        union U2 l_469 = {-1L};
                        int32_t l_470[2][2];
                        uint32_t l_471 = 0x89F9BE23L;
                        VECTOR(uint16_t, 16) l_472 = (VECTOR(uint16_t, 16))(0xF21CL, (VECTOR(uint16_t, 4))(0xF21CL, (VECTOR(uint16_t, 2))(0xF21CL, 0UL), 0UL), 0UL, 0xF21CL, 0UL, (VECTOR(uint16_t, 2))(0xF21CL, 0UL), (VECTOR(uint16_t, 2))(0xF21CL, 0UL), 0xF21CL, 0UL, 0xF21CL, 0UL);
                        uint16_t l_473 = 65530UL;
                        uint16_t l_474 = 0UL;
                        int64_t l_475 = 0x08931C50F14125F0L;
                        int64_t l_476 = 0x6D27BEF5E952D713L;
                        int32_t l_477 = 0x029D5076L;
                        int32_t *l_478 = &l_477;
                        int32_t *l_479 = (void*)0;
                        int32_t *l_480 = &l_477;
                        VECTOR(int32_t, 2) l_481 = (VECTOR(int32_t, 2))(0x4B8531AAL, (-10L));
                        uint8_t l_482 = 8UL;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_463[i] = 0x6E97EE76L;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_470[i][j] = 0x376C99CDL;
                        }
                        l_456 = (l_454 = l_452);
                        l_480 = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(l_458.yxxyxyxx)).s12, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(l_459.yyyx)).hi, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x881DL, 0UL)), 1UL, 0UL)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 1UL)), 1UL, 1UL)).lo))), ((VECTOR(uint16_t, 16))(l_460.s1612017352357401)).s41)))))).xxxy))))).ywzzwxyzzxzzxyxw)).even)).s0 , ((GROUP_DIVERGE(1, 1) , GROUP_DIVERGE(2, 1)) , (l_479 = (l_478 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_431 &= l_461), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_462.s5445201050322510)), ((VECTOR(int32_t, 2))(0x0D1C1F7AL, 8L)).yxyxxxxxxxxyxyyx))).s750f)), (l_476 = (l_431 = ((l_475 = (l_463[2] , ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(l_464.s4f0c5fcd04e25983)).s9a67, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_465.yyyywyww)).s63)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0xFA72L, (l_466 = (l_376 = 0xEF38L)), 65535UL, (l_467 , ((l_469 = l_468) , l_470[0][1])), ((VECTOR(uint16_t, 4))(l_471, ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 2))(65531UL, 1UL)), 0xDE7AL, ((VECTOR(uint16_t, 2))(l_472.s20)), 65535UL, 0xC345L)).s7, 1UL, 0xA40AL)))).s52)), 6UL)), ((VECTOR(uint16_t, 2))(65534UL, 9UL)), 0x4539L, 0x70FCL)), (l_473 , l_474), 65533UL, ((VECTOR(uint16_t, 2))(0xD2C7L)), 0x18BEL, 65528UL)).s2580))).x)) , 0x1685043BL))), 0x5CB4975CL, ((VECTOR(int32_t, 8))(0x3BA822FAL)), 0L)))).sc, ((VECTOR(int32_t, 4))(0x75DA1053L)), l_477, 1L, 0x375E52ECL)).s4 , (void*)0)))));
                        l_482--;
                    }
                    else
                    { /* block id: 218 */
                        uint16_t l_485[4][8][8] = {{{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL}},{{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL}},{{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL}},{{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL},{0xC03EL,1UL,7UL,0UL,0x5099L,0UL,7UL,1UL}}};
                        int32_t l_488 = (-5L);
                        uint32_t l_489 = 4294967295UL;
                        int i, j, k;
                        l_485[1][1][4]++;
                        l_451.s7 &= ((l_488 , 0x650B0CA8L) , l_489);
                    }
                    l_451.s7 = l_490[3][1][2];
                    for (l_490[3][1][2] = 9; (l_490[3][1][2] > 43); ++l_490[3][1][2])
                    { /* block id: 225 */
                        uint64_t **l_493 = (void*)0;
                        uint64_t **l_494 = (void*)0;
                        uint16_t l_495[7] = {0xE26CL,0xE26CL,0xE26CL,0xE26CL,0xE26CL,0xE26CL,0xE26CL};
                        uint32_t *l_499 = (void*)0;
                        uint32_t **l_498 = &l_499;
                        uint32_t **l_500[6] = {&l_499,&l_499,&l_499,&l_499,&l_499,&l_499};
                        int i;
                        l_494 = l_493;
                        --l_495[1];
                        l_451.s1 = 7L;
                        l_500[0] = l_498;
                    }
                }
                for (l_431 = 24; (l_431 != (-17)); l_431 = safe_sub_func_uint8_t_u_u(l_431, 1))
                { /* block id: 234 */
                    int32_t l_504 = 0x09FB564EL;
                    int32_t *l_503 = &l_504;
                    int32_t *l_505[4][8] = {{&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504},{&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504},{&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504},{&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504,&l_504}};
                    int i, j;
                    l_505[2][5] = l_503;
                }
            }
            for (l_376 = 10; (l_376 < 34); ++l_376)
            { /* block id: 240 */
                uint64_t l_508[10] = {0x6337D94673D875FCL,0x5903B94E8E13B7ACL,0x1250D6CBC7449050L,0x5903B94E8E13B7ACL,0x6337D94673D875FCL,0x6337D94673D875FCL,0x5903B94E8E13B7ACL,0x1250D6CBC7449050L,0x5903B94E8E13B7ACL,0x6337D94673D875FCL};
                int i;
                l_508[0] = 0x6C4FEB48L;
            }
            l_512 = (l_511 = l_509);
            l_516 = (l_515 = (l_514 = l_513));
        }
        unsigned int result = 0;
        result += l_373;
        atomic_add(&p_1243->l_special_values[55], result);
    }
    else
    { /* block id: 249 */
        (1 + 1);
    }
    if ((atomic_inc(&p_1243->l_atomic_input[7]) == 5))
    { /* block id: 253 */
        int32_t l_517 = 0x019F6D72L;
        uint32_t l_528[8][4] = {{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL},{4294967295UL,1UL,4294967293UL,1UL}};
        uint32_t l_540 = 0x489B8CF6L;
        int i, j;
        for (l_517 = 0; (l_517 == (-29)); l_517--)
        { /* block id: 256 */
            VECTOR(int32_t, 4) l_520 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4AC406F5L), 0x4AC406F5L);
            VECTOR(int32_t, 8) l_521 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5904ECC8L), 0x5904ECC8L), 0x5904ECC8L, 1L, 0x5904ECC8L);
            int32_t l_522 = 0x385A423AL;
            int i;
            l_522 &= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_520.yxywxyxzxzxxzzzx)).s74))), ((VECTOR(int32_t, 2))(l_521.s25))))).odd;
            for (l_520.w = 10; (l_520.w > 19); ++l_520.w)
            { /* block id: 260 */
                int32_t l_525 = 0x7F80EC02L;
                int16_t l_526 = 0x668DL;
                uint16_t l_527[6][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
                int i, j;
                l_521.s0 |= l_525;
                l_527[4][0] |= (l_521.s0 = l_526);
            }
        }
        l_528[7][2]--;
        for (l_528[7][2] = 0; (l_528[7][2] >= 17); l_528[7][2]++)
        { /* block id: 269 */
            uint8_t l_533 = 5UL;
            uint8_t l_534 = 1UL;
            struct S0 *l_535 = (void*)0;
            struct S0 *l_536 = (void*)0;
            int32_t l_538 = 0x0BD7BC4EL;
            int32_t *l_537[10][5] = {{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538},{(void*)0,&l_538,(void*)0,(void*)0,&l_538}};
            int32_t *l_539 = &l_538;
            int i, j;
            l_536 = ((l_534 |= l_533) , l_535);
            l_539 = l_537[9][1];
        }
        l_540--;
        unsigned int result = 0;
        result += l_517;
        int l_528_i0, l_528_i1;
        for (l_528_i0 = 0; l_528_i0 < 8; l_528_i0++) {
            for (l_528_i1 = 0; l_528_i1 < 4; l_528_i1++) {
                result += l_528[l_528_i0][l_528_i1];
            }
        }
        result += l_540;
        atomic_add(&p_1243->l_special_values[7], result);
    }
    else
    { /* block id: 275 */
        (1 + 1);
    }
    if ((1UL <= (safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((*l_569) &= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(p_93, (p_1243->g_551[6] != l_552))), (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(7UL, 0xBEL, 0xB2L, 255UL)).odd)), (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_1243->g_553.f2, (((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(p_1243->g_562.yx))))).odd < (p_1243->g_187 != (p_1243->g_566 = ((*l_565) = l_563[4])))))), GROUP_DIVERGE(0, 1))) || ((l_564 == (void*)0) < p_90)) ^ 0xB9ABC6A6L), p_1243->g_19, ((VECTOR(uint8_t, 2))(1UL)), 0x77L, 0x9DL)).s6, l_568)), l_568))))), p_1243->g_97.f2)), FAKE_DIVERGE(p_1243->local_1_offset, get_local_id(1), 10)))))
    { /* block id: 281 */
        int8_t l_578 = 0x54L;
        int32_t l_580 = 0x5C5C6906L;
        int8_t *l_585 = (void*)0;
        int8_t **l_584 = &l_585;
        int8_t ***l_583 = &l_584;
        VECTOR(int8_t, 16) l_592 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int8_t, 2))(1L, (-4L)), (VECTOR(int8_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L));
        uint64_t l_595[5][8][6] = {{{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L}},{{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L}},{{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L}},{{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L}},{{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L},{0xAFFEA12C8202491DL,0x99426DACAF3EDEE1L,0xECB244D2DA90CADEL,1UL,0x1821DDBA0A99463CL,0x5852A1342B040032L}}};
        VECTOR(int32_t, 16) l_598 = (VECTOR(int32_t, 16))(0x5CCD0722L, (VECTOR(int32_t, 4))(0x5CCD0722L, (VECTOR(int32_t, 2))(0x5CCD0722L, 0x4F852403L), 0x4F852403L), 0x4F852403L, 0x5CCD0722L, 0x4F852403L, (VECTOR(int32_t, 2))(0x5CCD0722L, 0x4F852403L), (VECTOR(int32_t, 2))(0x5CCD0722L, 0x4F852403L), 0x5CCD0722L, 0x4F852403L, 0x5CCD0722L, 0x4F852403L);
        VECTOR(int32_t, 8) l_599 = (VECTOR(int32_t, 8))(0x679F3B8BL, (VECTOR(int32_t, 4))(0x679F3B8BL, (VECTOR(int32_t, 2))(0x679F3B8BL, 0x1AB1B31BL), 0x1AB1B31BL), 0x1AB1B31BL, 0x679F3B8BL, 0x1AB1B31BL);
        union U2 l_648 = {0x04B3L};
        struct S1 **l_649[2][6][1] = {{{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369}},{{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369},{&p_1243->g_369}}};
        int32_t *l_676 = &l_626;
        int i, j, k;
        for (p_1243->g_553.f3 = 0; (p_1243->g_553.f3 != (-16)); p_1243->g_553.f3--)
        { /* block id: 284 */
            uint16_t l_572 = 3UL;
            int32_t *l_573[10][4][4] = {{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}},{{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10},{(void*)0,(void*)0,(void*)0,&p_1243->g_10}}};
            uint64_t *l_576 = (void*)0;
            uint64_t *l_577[3];
            int64_t *l_586 = &p_1243->g_370.f4;
            VECTOR(uint8_t, 8) l_606 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 252UL), 252UL), 252UL, 255UL, 252UL);
            VECTOR(uint8_t, 16) l_613 = (VECTOR(uint8_t, 16))(0xF2L, (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 0x43L), 0x43L), 0x43L, 0xF2L, 0x43L, (VECTOR(uint8_t, 2))(0xF2L, 0x43L), (VECTOR(uint8_t, 2))(0xF2L, 0x43L), 0xF2L, 0x43L, 0xF2L, 0x43L);
            int8_t **l_633 = &l_585;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_577[i] = (void*)0;
            p_90 &= ((p_1243->g_360.y > l_572) , p_93);
            if ((((safe_mul_func_uint8_t_u_u((&p_91 == ((++p_1243->g_155.s4) , l_583)), p_1243->g_553.f2)) == (((*l_586) = (l_579 ^ p_90)) != 0L)) != (((safe_rshift_func_uint8_t_u_s(((l_589[2] & (p_1243->g_97.f0 < (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_592.se6)).hi, ((l_593 == l_593) & p_90))))) > l_578), 0)) || l_592.se) , p_1243->g_360.x)))
            { /* block id: 288 */
                uint64_t l_594 = 18446744073709551615UL;
                VECTOR(uint8_t, 16) l_614 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 255UL), 255UL), 255UL, 6UL, 255UL, (VECTOR(uint8_t, 2))(6UL, 255UL), (VECTOR(uint8_t, 2))(6UL, 255UL), 6UL, 255UL, 6UL, 255UL);
                uint8_t *l_615 = &p_1243->g_97.f3;
                struct S1 **l_647[8][2] = {{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369},{&p_1243->g_369,&p_1243->g_369}};
                int32_t l_651[2];
                uint32_t l_671[5] = {0xCF1B6FEEL,0xCF1B6FEEL,0xCF1B6FEEL,0xCF1B6FEEL,0xCF1B6FEEL};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_651[i] = 0x49176872L;
                l_580 ^= (((VECTOR(int16_t, 16))(2L, 0x0456L, l_594, l_595[1][2][1], (safe_div_func_int64_t_s_s(((((l_594 , (void*)0) != (void*)0) & (~((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_598.sd7)).yxyyyxxxxxyyxxyx, ((VECTOR(int32_t, 8))(l_599.s65127204)).s1044543205043241, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_600.s23)), 9L)).lo)).xxxyyxxxxxyyyyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1243->g_601.sa22f65ca)).s3424540412254274)).s6d17, (int32_t)((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))((-5L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x26E92976L, (safe_div_func_uint16_t_u_u(p_1243->g_360.x, ((*l_569) = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_606.s5532)).z, ((((safe_mul_func_int32_t_s_s((p_1243->g_169.x >= (safe_lshift_func_uint8_t_u_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1243->g_611.s08982b3b)), ((VECTOR(uint8_t, 2))(p_1243->g_612.s26)), 0UL, ((VECTOR(uint8_t, 2))(0x84L, 250UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(l_613.sfc50)).lo, ((VECTOR(uint8_t, 16))(l_614.se6542a7df90fbe0d)).sb2))))), 254UL)).sc < ((*l_615) = p_90)), 5))), (!(((VECTOR(int8_t, 16))(((l_598.s3 >= l_595[0][7][1]) != 2L), (**p_91), ((VECTOR(int8_t, 4))(0x3AL)), p_1243->g_97.f0, 0x71L, ((VECTOR(int8_t, 8))(0x15L)))).sa & 1UL)))) , p_90) != (*p_1243->g_567)) < l_594)))))), 1L, 0x1A091E2DL)).odd)), 0x1E3E51C4L)).hi))).even))).yyyzywzzyxxxzyzw)), ((VECTOR(int32_t, 16))(1L))))).s60, ((VECTOR(int32_t, 2))(0x5E20440AL))))), ((VECTOR(int32_t, 2))(0x46970759L))))).yyyxyyyxxxxxxyxy))).s7d)).yyxyxxxx, ((VECTOR(int32_t, 8))(0x52844DA5L))))), (uint32_t)0x5E4CCCB1L, (uint32_t)(**p_1243->g_566)))).lo)).w)) >= (-6L)), 0x21A3C5CE13CD559CL)), (-1L), ((VECTOR(int16_t, 8))((-7L))), 4L, 1L)).sf & p_1243->g_553.f3);
                if ((safe_mul_func_int16_t_s_s(l_598.s2, (~1UL))))
                { /* block id: 292 */
                    for (p_1243->g_370.f0 = 0; (p_1243->g_370.f0 <= 7); p_1243->g_370.f0++)
                    { /* block id: 295 */
                        int8_t *l_638 = (void*)0;
                        int8_t *l_639[3][5] = {{&l_578,&p_1243->g_97.f2,&l_578,&l_578,&p_1243->g_97.f2},{&l_578,&p_1243->g_97.f2,&l_578,&l_578,&p_1243->g_97.f2},{&l_578,&p_1243->g_97.f2,&l_578,&l_578,&p_1243->g_97.f2}};
                        int i, j;
                        atomic_xor(&p_1243->l_atomic_reduction[0], ((((((safe_div_func_int8_t_s_s((**p_91), (((safe_add_func_uint8_t_u_u(((*l_615) = ((safe_add_func_uint16_t_u_u((p_1243->g_601.sa < (0x1BL >= (p_1243->g_168.y = (l_626 != ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0x4E3BL, 5)) >= (safe_mul_func_uint16_t_u_u((l_633 == p_1243->g_634), p_1243->g_310.z))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1243->g_637.s09ca)), (-5L), ((VECTOR(int8_t, 2))(5L)), 0x42L)).s4051273550752075)).hi)).s5)) <= p_1243->g_161[0][4][0]))))), 0x0413L)) , GROUP_DIVERGE(0, 1))), p_1243->g_161[0][2][2])) <= 0xA86AFFB6BBC7182AL) ^ 0x1BE8EA19L))) != p_90) || p_1243->g_322.z) != 0x31F665DFFB583CFDL) == (**p_91)) | 0L) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1243->v_collective += p_1243->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                }
                else
                { /* block id: 300 */
                    return p_1243->g_369;
                }
                if ((safe_div_func_int32_t_s_s((p_93 < (p_93 != (safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(p_1243->g_644.s0516)).w | ((-2L) && 0x78L)), (safe_mul_func_uint8_t_u_u(l_614.s9, 0UL)))))), ((*l_564) = l_589[2]))))
                { /* block id: 304 */
                    VECTOR(int32_t, 8) l_650 = (VECTOR(int32_t, 8))(0x1F2C232CL, (VECTOR(int32_t, 4))(0x1F2C232CL, (VECTOR(int32_t, 2))(0x1F2C232CL, 0x2BDAD0C7L), 0x2BDAD0C7L), 0x2BDAD0C7L, 0x1F2C232CL, 0x2BDAD0C7L);
                    uint16_t l_652 = 0x14EFL;
                    int32_t *l_665 = &p_1243->g_10;
                    int i;
                    l_651[1] |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(0x1A163D95L, (l_647[6][0] == (l_648 , l_649[0][2][0])), 1L, 0x4E3C683AL)), ((VECTOR(int32_t, 16))(l_650.s3772736527323574)).s4805))))), 0x3EF645EDL, 0x58B9992AL, 0x77195A9EL)))).s7;
                    if (p_93)
                    { /* block id: 306 */
                        int16_t l_655 = (-1L);
                        l_652--;
                        if (l_655)
                            continue;
                    }
                    else
                    { /* block id: 309 */
                        int32_t **l_656 = &l_573[0][3][2];
                        int32_t l_657 = 0x0055D38FL;
                        int32_t l_658[3][5][2] = {{{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)}},{{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)}},{{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)},{0x05171244L,(-1L)}}};
                        uint32_t l_659 = 0x6BE56E69L;
                        uint64_t l_662[10][9] = {{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL},{0x687D511E13BD04DBL,0x687D511E13BD04DBL,18446744073709551615UL,18446744073709551613UL,0xB3B27CDB9954D85DL,18446744073709551613UL,18446744073709551615UL,0x687D511E13BD04DBL,0x687D511E13BD04DBL}};
                        int i, j, k;
                        (*l_656) = &p_90;
                        l_659++;
                        ++l_662[4][4];
                        (*l_656) = l_665;
                    }
                    for (p_1243->g_65 = (-2); (p_1243->g_65 == 2); ++p_1243->g_65)
                    { /* block id: 317 */
                        p_90 = (l_650.s6 = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(0x71L, 0x3CL)).xyyyxyyy))).s21, (int8_t)l_651[1]))).odd, p_1243->g_97.f3)));
                    }
                }
                else
                { /* block id: 321 */
                    int64_t l_670 = 0x244E5658657BD9C5L;
                    p_90 = 0x3484AC90L;
                    l_671[1]++;
                }
            }
            else
            { /* block id: 325 */
                union U2 *l_675[1];
                union U2 **l_674 = &l_675[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_675[i] = &p_1243->g_336;
                (*l_674) = &p_1243->g_336;
            }
        }
        (*l_676) = l_595[1][6][1];
        l_600.s1 ^= (safe_lshift_func_int8_t_s_u(0L, 4));
    }
    else
    { /* block id: 331 */
        int32_t *l_679 = &p_1243->g_51;
        int32_t *l_680 = (void*)0;
        int32_t *l_686 = &l_579;
        int32_t *l_687 = (void*)0;
        int32_t *l_688 = (void*)0;
        int32_t *l_689 = &p_1243->g_198;
        int32_t *l_690 = (void*)0;
        int32_t *l_691[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_693 = (-1L);
        int32_t l_694 = (-10L);
        int i;
        (*l_679) &= 0x3A96837AL;
        l_680 = func_108(l_568, p_93, p_90, p_1243);
        for (p_1243->g_39 = 0; (p_1243->g_39 != (-23)); p_1243->g_39 = safe_sub_func_int16_t_s_s(p_1243->g_39, 3))
        { /* block id: 336 */
            struct S0 *l_683 = &p_1243->g_684;
            struct S0 **l_685 = &l_552;
            (*l_685) = l_683;
            (*l_679) ^= 0x1470D7C0L;
        }
        l_696--;
    }
    return p_1243->g_369;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_97.f7 p_1243->g_51 p_1243->g_40 p_1243->g_97.f4 p_1243->g_140 p_1243->g_155 p_1243->g_168 p_1243->g_169 p_1243->g_172 p_1243->g_39 p_1243->g_104 p_1243->g_comm_values p_1243->g_19 p_1243->g_97.f2 p_1243->g_187 p_1243->g_198 p_1243->g_248 p_1243->g_27 p_1243->g_249 p_1243->g_258 p_1243->g_253.f2 p_1243->g_260 p_1243->g_253.f3 p_1243->g_265 p_1243->g_253.f4 p_1243->g_161 p_1243->g_181 p_1243->g_306 p_1243->g_308 p_1243->g_310 p_1243->g_322 p_1243->l_comm_values p_1243->g_336 p_1243->g_360
 * writes: p_1243->g_97.f7 p_1243->g_51 p_1243->g_65 p_1243->g_161 p_1243->g_155 p_1243->g_19 p_1243->g_97.f2 p_1243->g_97.f3 p_1243->g_27 p_1243->g_198 p_1243->g_260 p_1243->g_253.f3 p_1243->g_181 p_1243->g_26 p_1243->g_104 p_1243->g_140 p_1243->g_168 p_1243->g_360
 */
uint32_t * func_94(struct S1 * p_95, struct S3 * p_1243)
{ /* block id: 33 */
    int32_t *l_105 = &p_1243->g_51;
    VECTOR(uint16_t, 8) l_106 = (VECTOR(uint16_t, 8))(0xB809L, (VECTOR(uint16_t, 4))(0xB809L, (VECTOR(uint16_t, 2))(0xB809L, 1UL), 1UL), 1UL, 0xB809L, 1UL);
    int32_t l_107 = 2L;
    VECTOR(int16_t, 16) l_114 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2066L), 0x2066L), 0x2066L, (-1L), 0x2066L, (VECTOR(int16_t, 2))((-1L), 0x2066L), (VECTOR(int16_t, 2))((-1L), 0x2066L), (-1L), 0x2066L, (-1L), 0x2066L);
    VECTOR(int16_t, 8) l_115 = (VECTOR(int16_t, 8))(0x7488L, (VECTOR(int16_t, 4))(0x7488L, (VECTOR(int16_t, 2))(0x7488L, (-6L)), (-6L)), (-6L), 0x7488L, (-6L));
    VECTOR(int16_t, 8) l_116 = (VECTOR(int16_t, 8))(0x78AAL, (VECTOR(int16_t, 4))(0x78AAL, (VECTOR(int16_t, 2))(0x78AAL, 0L), 0L), 0L, 0x78AAL, 0L);
    VECTOR(int16_t, 4) l_117 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-3L)), (-3L));
    int32_t l_291 = 0x32FB22B9L;
    VECTOR(int32_t, 4) l_303 = (VECTOR(int32_t, 4))(0x2644BE91L, (VECTOR(int32_t, 2))(0x2644BE91L, 0x0C8B28DBL), 0x0C8B28DBL);
    VECTOR(int32_t, 8) l_307 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L);
    VECTOR(int32_t, 16) l_311 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x77F2596AL), 0x77F2596AL), 0x77F2596AL, (-1L), 0x77F2596AL, (VECTOR(int32_t, 2))((-1L), 0x77F2596AL), (VECTOR(int32_t, 2))((-1L), 0x77F2596AL), (-1L), 0x77F2596AL, (-1L), 0x77F2596AL);
    uint16_t *l_317 = (void*)0;
    int32_t l_325 = 0x619E3B03L;
    int64_t l_326 = 1L;
    int i;
    for (p_1243->g_97.f7 = 0; (p_1243->g_97.f7 < 43); ++p_1243->g_97.f7)
    { /* block id: 36 */
        uint32_t *l_103 = &p_1243->g_104[0];
        uint32_t **l_102 = &l_103;
        uint32_t ***l_101 = &l_102;
        (*l_101) = (void*)0;
    }
    (*l_105) ^= 0L;
    if ((((VECTOR(uint16_t, 16))(l_106.s2753442437257140)).sc , l_107))
    { /* block id: 40 */
        int8_t l_123 = 0L;
        struct S1 *l_139 = (void*)0;
        struct S1 **l_138 = &l_139;
        int8_t *l_144 = &p_1243->g_19;
        int8_t **l_143[6];
        int16_t *l_284 = &p_1243->g_181[0];
        uint16_t *l_285 = (void*)0;
        uint16_t *l_286 = (void*)0;
        VECTOR(int32_t, 8) l_287 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5C92A074L), 0x5C92A074L), 0x5C92A074L, 1L, 0x5C92A074L);
        uint16_t *l_288 = (void*)0;
        uint16_t *l_289[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_290 = 0L;
        int32_t **l_302 = &p_1243->g_26[0][2][0];
        VECTOR(int32_t, 4) l_304 = (VECTOR(int32_t, 4))(0x32E3A015L, (VECTOR(int32_t, 2))(0x32E3A015L, 0x06687283L), 0x06687283L);
        VECTOR(int32_t, 16) l_305 = (VECTOR(int32_t, 16))(0x6EC7671CL, (VECTOR(int32_t, 4))(0x6EC7671CL, (VECTOR(int32_t, 2))(0x6EC7671CL, 0x64968F0BL), 0x64968F0BL), 0x64968F0BL, 0x6EC7671CL, 0x64968F0BL, (VECTOR(int32_t, 2))(0x6EC7671CL, 0x64968F0BL), (VECTOR(int32_t, 2))(0x6EC7671CL, 0x64968F0BL), 0x6EC7671CL, 0x64968F0BL, 0x6EC7671CL, 0x64968F0BL);
        VECTOR(int32_t, 8) l_309 = (VECTOR(int32_t, 8))(0x05D67222L, (VECTOR(int32_t, 4))(0x05D67222L, (VECTOR(int32_t, 2))(0x05D67222L, 0x31EEAB81L), 0x31EEAB81L), 0x31EEAB81L, 0x05D67222L, 0x31EEAB81L);
        int64_t *l_312 = &p_1243->g_253.f3;
        uint32_t *l_318 = &p_1243->g_104[0];
        VECTOR(int64_t, 4) l_319 = (VECTOR(int64_t, 4))(0x308618C5F81281AEL, (VECTOR(int64_t, 2))(0x308618C5F81281AEL, 0x43ED0E94F79DCE7AL), 0x43ED0E94F79DCE7AL);
        uint16_t **l_323 = &l_289[5];
        int32_t l_324[4][9] = {{8L,(-6L),0x07726477L,(-7L),(-6L),(-7L),0x07726477L,(-6L),8L},{8L,(-6L),0x07726477L,(-7L),(-6L),(-7L),0x07726477L,(-6L),8L},{8L,(-6L),0x07726477L,(-7L),(-6L),(-7L),0x07726477L,(-6L),8L},{8L,(-6L),0x07726477L,(-7L),(-6L),(-7L),0x07726477L,(-6L),8L}};
        int32_t *l_327 = (void*)0;
        int32_t *l_328 = (void*)0;
        int32_t *l_329 = &l_324[2][6];
        volatile struct S1 ***l_330 = &p_1243->g_140;
        int i, j;
        for (i = 0; i < 6; i++)
            l_143[i] = &l_144;
        (*l_302) = func_108((p_1243->g_51 && (l_291 = ((((((l_290 = (l_287.s5 &= ((((*l_284) &= ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_114.s65c6)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_115.s4530310241743262)).sb4)).yxxxxxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x5E75L, 1L)).xyxx)).zzwzwxwx)).odd)))).hi)), 4L)).y, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-4L), (-8L))), 0L, 0x149FL)).hi)).yxyx)), 0x0F0CL, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(l_116.s1754)).xzyzxwyw, ((VECTOR(int16_t, 2))(l_117.yz)).yxyxxyxx, ((VECTOR(int16_t, 16))((func_118((*l_105), l_123, p_1243->g_40, p_1243->g_97.f4, p_1243) >= func_124(func_130(&p_1243->g_19, ((((safe_sub_func_int32_t_s_s(((p_1243->g_51 , l_138) == p_1243->g_140), (*l_105))) & (*l_105)) ^ 0x8E68L) | (*l_105)), (*l_105), l_143[5], l_123, p_1243), l_105, l_123, (*l_105), l_123, p_1243)), p_1243->g_161[2][5][1], (*l_105), (*l_105), (*l_105), l_123, 0x7B4FL, 0x1729L, l_123, ((VECTOR(int16_t, 4))((-1L))), 0x4567L, 0x2DBBL, (-1L))).even))), 0x0230L, (-1L))).hi))).s34))).xxxy, ((VECTOR(int16_t, 4))(0x2329L))))).xxwxyzxz, (int16_t)l_123, (int16_t)(*l_105)))).s6) , (*l_105)) & 18446744073709551615UL))) >= (*l_105)) , 1L) <= l_123) , &p_95) == &p_95))), l_123, l_123, p_1243);
        (*l_329) = ((*l_105) = (((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(0x17C3C2E7L, 0x424C5DFDL, 1L, 0x79028903L)).ywyxyzzz, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_303.yz)).yxxyyxxxyxxyyyyx)).s0a4f)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_304.zwwwzzzy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_305.s6bed0ee9bee710e4)).odd)).s34)).yxxyxyyxyyyxyyyx)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1243->g_306.s77)), (-1L), 0L)).xzwyzzwxwwxxxwxw)).s92e6, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_307.s1462)), ((VECTOR(int32_t, 2))(0x4C1447DEL, (-1L))), 0x12DFB3A1L, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1243->g_308.yyxyyyyx)).lo)), ((VECTOR(int32_t, 2))(l_309.s72)), 0L, (-1L))).s958f, ((VECTOR(int32_t, 8))(p_1243->g_310.zxzxzwxz)).odd))), ((VECTOR(int32_t, 2))(0x701F40ADL, (-1L))).xyxx))).ywzwzyxxwyzxyyxw))).sbdda))), ((VECTOR(int32_t, 8))(l_311.s0a95ec79)), (((void*)0 == l_312) > (+((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((((*l_105) < ((*l_318) = ((void*)0 == l_317))) & ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_319.zxzy)).zwxwxwzxwzyxxwxw)).s7c)).xyxyxxyyxyyxyyxx, ((VECTOR(int64_t, 16))(((safe_lshift_func_uint16_t_u_s(p_1243->g_181[0], (0x7EL ^ ((VECTOR(int8_t, 8))(p_1243->g_322.wyzzwywx)).s4))) == (((+((*l_105) == ((((*l_323) = l_317) != l_317) || p_1243->g_248.s4))) && p_1243->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1243->tid, 60))]) , (*l_105))), (*l_105), (*l_105), ((VECTOR(int64_t, 8))(0x594C2BE8C4C8185FL)), ((VECTOR(int64_t, 2))((-1L))), 0L, 0x0746486A36EAC91FL, 0x1C0889641B2DF1A8L))))).s1d)).xyyxyyyx)).s1) >= l_324[0][2]), l_325)), (*l_105))) | l_326))), ((VECTOR(int32_t, 2))((-1L))), 0x029C2B25L)).even))))).even))).zxwyzwyx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(1L)))))))).s21))))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0L))))).yxyy, (int32_t)(*l_105), (int32_t)(*l_105)))), ((VECTOR(int32_t, 4))(1L))))).x ^ 4294967295UL));
        (*l_330) = &p_1243->g_141;
    }
    else
    { /* block id: 136 */
        VECTOR(uint32_t, 2) l_335 = (VECTOR(uint32_t, 2))(8UL, 0xFCD5E284L);
        int32_t l_343 = 1L;
        int8_t *l_344[8][4] = {{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2},{(void*)0,(void*)0,&p_1243->g_253.f0,&p_1243->g_97.f2}};
        int32_t l_365 = 2L;
        int i, j;
        if ((safe_rshift_func_int8_t_s_u((((1L < 0L) , l_335.x) == ((p_1243->g_336 , (((void*)0 != &p_1243->g_104[0]) , (0L < (p_1243->g_169.y >= (p_1243->g_168.x = (GROUP_DIVERGE(1, 1) > ((safe_add_func_int64_t_s_s((l_343 = (safe_rshift_func_uint8_t_u_s((~(l_335.y < GROUP_DIVERGE(1, 1))), p_1243->g_155.s6))), 18446744073709551615UL)) >= l_335.y))))))) != (-1L))), l_335.x)))
        { /* block id: 139 */
            int8_t **l_346 = &l_344[0][3];
            int8_t ***l_345 = &l_346;
            (*l_345) = &l_344[7][2];
        }
        else
        { /* block id: 141 */
            uint32_t *l_353 = (void*)0;
            uint32_t **l_352 = &l_353;
            uint32_t ***l_351 = &l_352;
            uint16_t *l_356 = &p_1243->g_40;
            int32_t l_361 = 0x27BACAAAL;
            int32_t **l_366 = &p_1243->g_26[0][0][0];
            for (p_1243->g_253.f3 = 0; (p_1243->g_253.f3 <= 14); p_1243->g_253.f3++)
            { /* block id: 144 */
                uint32_t **l_350 = (void*)0;
                uint32_t ***l_349 = &l_350;
                int32_t l_357 = 0L;
                int64_t *l_362[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_362[i] = &l_326;
                (*l_105) = (((~(l_349 != l_351)) != (safe_add_func_int64_t_s_s((p_1243->g_104[0] || (l_317 != l_356)), l_357))) >= (safe_sub_func_uint64_t_u_u(((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_1243->g_360.xyxy)).w, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((p_1243->g_360.y = l_361), ((safe_add_func_int16_t_s_s(l_361, (((l_365 < (*l_105)) >= 4UL) , p_1243->g_253.f4))) | 0x6B508783C2FE79FCL), ((VECTOR(int64_t, 2))((-3L))), 0x11D977C2E0CEEC07L, l_361, 1L, 0x30B3B7A1951D7ED9L)).s24)), ((VECTOR(int64_t, 2))(0x2750F9503BDCEF8BL)), ((VECTOR(int64_t, 2))(0L))))), ((VECTOR(int64_t, 2))(0x56730E5EC8E5D5D0L))))), 0x424D83999C5EDB89L, ((VECTOR(int64_t, 8))((-1L))), ((VECTOR(int64_t, 4))(0x48DA7019C970AC85L)))))).s82)), 1L, ((VECTOR(int64_t, 2))(0x17918826C249556DL)), 0x19499EF2F5C437C3L, 0x4EFF4946598BCBC1L, 0x677A634DEAC22EEDL)))).s5 >= p_1243->g_260) , FAKE_DIVERGE(p_1243->local_2_offset, get_local_id(2), 10)), l_361)));
            }
            (*l_366) = &p_1243->g_198;
            (*l_105) = (p_1243->g_161[1][5][2] && p_1243->g_253.f2);
        }
    }
    return &p_1243->g_104[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1243->g_198
 */
int32_t * func_108(uint8_t  p_109, uint32_t  p_110, int16_t  p_111, struct S3 * p_1243)
{ /* block id: 121 */
    int32_t *l_292 = &p_1243->g_198;
    int32_t *l_293[4];
    uint16_t l_294 = 65535UL;
    uint64_t l_295 = 0x3E0CC880848E3E9AL;
    int16_t l_298 = 6L;
    uint16_t l_299 = 0UL;
    int i;
    for (i = 0; i < 4; i++)
        l_293[i] = (void*)0;
    l_295 = (l_294 ^= ((*l_292) = p_111));
    l_293[3] = (l_292 = ((safe_sub_func_int32_t_s_s(((*l_292) = l_298), p_110)) , l_293[1]));
    l_299++;
    return l_293[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_97.f7
 * writes:
 */
uint8_t  func_118(uint8_t  p_119, uint32_t  p_120, int64_t  p_121, int64_t  p_122, struct S3 * p_1243)
{ /* block id: 41 */
    return p_1243->g_97.f7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_187 p_1243->g_169 p_1243->g_198 p_1243->g_248 p_1243->g_27 p_1243->g_249 p_1243->g_258 p_1243->g_253.f2 p_1243->g_104 p_1243->g_51 p_1243->g_260 p_1243->g_253.f3 p_1243->g_265 p_1243->g_253.f4
 * writes: p_1243->g_65 p_1243->g_97.f3 p_1243->g_27 p_1243->g_198 p_1243->g_260 p_1243->g_253.f3
 */
int8_t  func_124(uint32_t * p_125, int32_t * p_126, uint16_t  p_127, int64_t  p_128, uint32_t  p_129, struct S3 * p_1243)
{ /* block id: 52 */
    uint32_t *l_185 = &p_1243->g_104[0];
    uint32_t **l_184 = &l_185;
    uint32_t ***l_186 = &l_184;
    struct S1 *l_190 = (void*)0;
    struct S1 **l_189[2];
    struct S1 ***l_191 = &l_189[0];
    int32_t l_192 = 0x4FF3832AL;
    uint8_t *l_195 = &p_1243->g_65;
    int32_t *l_196 = &p_1243->g_27;
    int32_t *l_197 = &p_1243->g_198;
    struct S0 *l_252 = &p_1243->g_253;
    VECTOR(uint8_t, 8) l_256 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x43L), 0x43L), 0x43L, 0UL, 0x43L);
    VECTOR(uint8_t, 16) l_257 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 255UL), 255UL), 255UL, 253UL, 255UL, (VECTOR(uint8_t, 2))(253UL, 255UL), (VECTOR(uint8_t, 2))(253UL, 255UL), 253UL, 255UL, 253UL, 255UL);
    uint16_t *l_259 = &p_1243->g_260;
    VECTOR(int32_t, 2) l_270 = (VECTOR(int32_t, 2))(0x26987747L, 0x07495FB4L);
    uint64_t l_281 = 0xB181AE6F8FEA2FEBL;
    int i;
    for (i = 0; i < 2; i++)
        l_189[i] = &l_190;
    (*l_197) &= ((*l_196) = (FAKE_DIVERGE(p_1243->group_2_offset, get_group_id(2), 10) | ((p_1243->g_97.f3 = ((((*l_191) = ((((*l_186) = l_184) == p_1243->g_187) , l_189[0])) != (void*)0) >= ((*l_195) = ((p_1243->g_169.y || l_192) & (((GROUP_DIVERGE(1, 1) , FAKE_DIVERGE(p_1243->group_1_offset, get_group_id(1), 10)) , p_129) & (((safe_rshift_func_int8_t_s_u(((void*)0 != l_195), FAKE_DIVERGE(p_1243->local_1_offset, get_local_id(1), 10))) ^ l_192) < 0x27L)))))) != 0x4EL)));
    if ((atomic_inc(&p_1243->l_atomic_input[54]) == 3))
    { /* block id: 60 */
        int32_t l_199 = 0x23A9F7FFL;
        int64_t l_200 = 4L;
        uint64_t l_201[6][8][5] = {{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}},{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}},{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}},{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}},{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}},{{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL},{0xCD862EAF816F9A34L,18446744073709551608UL,0UL,0UL,18446744073709551615UL}}};
        uint8_t l_204[8];
        int32_t l_206 = 3L;
        int32_t *l_205[3][2][8] = {{{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206}}};
        int32_t *l_207 = &l_206;
        int32_t *l_208[7][5][3] = {{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}},{{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206},{&l_206,&l_206,&l_206}}};
        int32_t *l_209 = &l_206;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_204[i] = 0x8FL;
        ++l_201[3][3][3];
        l_209 = (l_208[2][3][0] = (l_207 = (l_204[6] , l_205[0][0][2])));
        for (l_204[6] = 3; (l_204[6] < 24); l_204[6] = safe_add_func_int64_t_s_s(l_204[6], 9))
        { /* block id: 67 */
            struct S0 l_213 = {8L,0x0E5CE82039155DF5L,0xA92D0F30BB9E6809L,0x12A585A5F5D36CBCL,0xDCA60020L,0L,-10L};/* VOLATILE GLOBAL l_213 */
            struct S0 *l_212[3];
            VECTOR(int32_t, 2) l_214 = (VECTOR(int32_t, 2))((-1L), (-5L));
            VECTOR(int32_t, 8) l_215 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
            int i;
            for (i = 0; i < 3; i++)
                l_212[i] = &l_213;
            l_212[0] = (void*)0;
            l_214.y = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_214.yx)).xyyyyyxyyxyxxxxy)).sc7)), ((VECTOR(int32_t, 2))(l_215.s20))))).even;
            for (l_213.f0 = 0; (l_213.f0 <= (-14)); l_213.f0 = safe_sub_func_uint64_t_u_u(l_213.f0, 6))
            { /* block id: 72 */
                int8_t l_218 = 0x7BL;
                int32_t l_219 = 0x771FD4D9L;
                int32_t l_220 = 0x53A49707L;
                uint32_t l_240 = 0xBDB2856AL;
                int64_t l_243[5];
                int16_t l_244 = 1L;
                int16_t l_245 = 5L;
                int i;
                for (i = 0; i < 5; i++)
                    l_243[i] = (-6L);
                l_220 = (l_219 &= l_218);
                for (l_219 = 26; (l_219 <= (-3)); l_219 = safe_sub_func_uint64_t_u_u(l_219, 4))
                { /* block id: 77 */
                    uint32_t l_223 = 4294967295UL;
                    uint32_t l_224 = 4294967295UL;
                    int64_t l_225[10] = {0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L,0x045A6EA2F8BC75F3L};
                    int8_t l_226 = 0x36L;
                    uint16_t l_227 = 1UL;
                    int8_t l_228 = 2L;
                    uint64_t l_229 = 1UL;
                    int i;
                    if ((l_229 = (l_228 = (l_227 = (l_226 = (l_223 , (l_225[6] = l_224)))))))
                    { /* block id: 83 */
                        VECTOR(int32_t, 8) l_230 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 7L), 7L), 7L, (-7L), 7L);
                        int i;
                        l_230.s4 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_230.s0515656522736215)).sff24)), 0x2F6C5CB4L, 0L, 0x0A9A59BAL, (-1L))).s5;
                    }
                    else
                    { /* block id: 85 */
                        uint8_t l_231 = 0xDCL;
                        int32_t *l_234 = (void*)0;
                        uint64_t l_235 = 0xCF58E64A6B7683A6L;
                        uint64_t l_236 = 2UL;
                        int32_t l_237 = 0x44AC05CBL;
                        int32_t l_238[3][6][8] = {{{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L}},{{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L}},{{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L},{0x65E07E27L,0x14162AAEL,9L,(-1L),0x32566770L,(-1L),0x28630E75L,9L}}};
                        int32_t l_239 = 0x1E6F677CL;
                        int i, j, k;
                        --l_231;
                        l_209 = l_234;
                        l_237 = (l_235 , l_236);
                        l_239 = l_238[2][2][2];
                    }
                }
                l_245 &= (((++l_240) , l_243[4]) , l_244);
            }
        }
        unsigned int result = 0;
        result += l_199;
        result += l_200;
        int l_201_i0, l_201_i1, l_201_i2;
        for (l_201_i0 = 0; l_201_i0 < 6; l_201_i0++) {
            for (l_201_i1 = 0; l_201_i1 < 8; l_201_i1++) {
                for (l_201_i2 = 0; l_201_i2 < 5; l_201_i2++) {
                    result += l_201[l_201_i0][l_201_i1][l_201_i2];
                }
            }
        }
        int l_204_i0;
        for (l_204_i0 = 0; l_204_i0 < 8; l_204_i0++) {
            result += l_204[l_204_i0];
        }
        result += l_206;
        atomic_add(&p_1243->l_special_values[54], result);
    }
    else
    { /* block id: 96 */
        (1 + 1);
    }
    if ((safe_rshift_func_int8_t_s_u((0x2AL ^ (((VECTOR(int16_t, 4))(p_1243->g_248.s8e4b)).w , (((((*l_197) ^= (*l_196)) & ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1243->g_249.xxzx)).xxwyyzxxxwzyywxw)).sf) || ((*l_259) ^= (safe_rshift_func_int16_t_s_u(((((void*)0 == l_252) >= ((p_128 , &l_192) != (void*)0)) ^ (safe_div_func_int32_t_s_s(((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(l_256.s6263156376036075)).sa6, ((VECTOR(uint8_t, 4))(0x1DL, 1UL, 255UL, 255UL)).odd))).xxyx)).wxwwyzzx, ((VECTOR(uint8_t, 4))(l_257.s0bbb)).xwyyyxxz))).s13, ((VECTOR(uint8_t, 8))(p_1243->g_258.xyyyxyyx)).s07, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))((((((p_1243->g_253.f2 ^ p_129) && (*p_125)) >= p_1243->g_198) & (*p_126)) | (*p_125)), p_129, ((VECTOR(uint8_t, 4))(0xA4L)), 0x62L, 249UL)), ((VECTOR(uint8_t, 8))(0UL))))), ((VECTOR(uint8_t, 8))(0x08L)))).s7f))).yxyxxxyx)).s6 >= 247UL) & p_128), (*p_126)))), 7)))) ^ 0L))), (*l_196))))
    { /* block id: 101 */
        if ((*p_126))
        { /* block id: 102 */
            return (*l_196);
        }
        else
        { /* block id: 104 */
            VECTOR(int32_t, 8) l_272 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x2C733014L), 0x2C733014L), 0x2C733014L, 6L, 0x2C733014L);
            int i;
            for (p_1243->g_253.f3 = 0; (p_1243->g_253.f3 == 5); p_1243->g_253.f3 = safe_add_func_int8_t_s_s(p_1243->g_253.f3, 3))
            { /* block id: 107 */
                int32_t *l_273[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t **l_274[7][7] = {{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]},{&p_1243->g_26[0][0][2],&p_1243->g_26[0][0][2],&p_1243->g_26[0][1][1],&l_197,&l_197,&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]}};
                int i, j;
                (*l_196) = (((VECTOR(int32_t, 2))(0x5B8E88A2L, 0L)).even , (p_129 < (safe_mul_func_int8_t_s_s(((p_1243->g_265[0] != &p_128) | ((safe_sub_func_int64_t_s_s((*l_197), p_129)) > (p_1243->g_253.f4 || ((VECTOR(uint16_t, 2))(65531UL, 0UL)).hi))), (*l_197)))));
                (*l_196) ^= ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(p_1243->g_269.xxzx)).odd, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(0x3F53F7FCL, (*p_126), 8L, 0x2FB37CFEL)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_270.xy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(0x540EA4F8L, (-1L))).yyyyyxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x253A74EDL)).xyxyxxxx))))))))).s46))), 0x33E6FB5CL)).hi, ((VECTOR(int32_t, 16))(p_1243->g_271.s6625514771770132)).sd6, ((VECTOR(int32_t, 2))(0x65652534L, 0x2017B476L))))).xyyy))))).xywzwxzy, ((VECTOR(int32_t, 16))(l_272.s0367075751455746)).even))).s10))).lo;
                p_126 = l_273[0][1];
            }
        }
    }
    else
    { /* block id: 113 */
        int32_t *l_275 = (void*)0;
        int32_t l_276 = 0L;
        int32_t *l_277 = (void*)0;
        int32_t *l_278 = (void*)0;
        int32_t *l_279 = &l_276;
        int32_t *l_280 = &p_1243->g_27;
        l_281--;
    }
    return p_128;
}


/* ------------------------------------------ */
/* 
 * reads : p_1243->g_97.f7 p_1243->g_155 p_1243->g_168 p_1243->g_169 p_1243->g_172 p_1243->g_97.f4 p_1243->g_39 p_1243->g_104 p_1243->g_comm_values p_1243->g_19 p_1243->g_97.f2
 * writes: p_1243->g_65 p_1243->g_161 p_1243->g_155 p_1243->g_19 p_1243->g_97.f2
 */
uint32_t * func_130(int8_t * p_131, int32_t  p_132, uint8_t  p_133, int8_t ** p_134, int64_t  p_135, struct S3 * p_1243)
{ /* block id: 43 */
    uint8_t *l_145 = (void*)0;
    uint8_t *l_146 = (void*)0;
    uint8_t *l_147 = &p_1243->g_65;
    int32_t l_150 = (-8L);
    VECTOR(int64_t, 2) l_156 = (VECTOR(int64_t, 2))(0L, 0L);
    VECTOR(int64_t, 2) l_157 = (VECTOR(int64_t, 2))((-1L), 0x24DF932BF644599FL);
    VECTOR(int64_t, 16) l_158 = (VECTOR(int64_t, 16))(0x35DCCD6D889F70B1L, (VECTOR(int64_t, 4))(0x35DCCD6D889F70B1L, (VECTOR(int64_t, 2))(0x35DCCD6D889F70B1L, 0x30722B247686F9EFL), 0x30722B247686F9EFL), 0x30722B247686F9EFL, 0x35DCCD6D889F70B1L, 0x30722B247686F9EFL, (VECTOR(int64_t, 2))(0x35DCCD6D889F70B1L, 0x30722B247686F9EFL), (VECTOR(int64_t, 2))(0x35DCCD6D889F70B1L, 0x30722B247686F9EFL), 0x35DCCD6D889F70B1L, 0x30722B247686F9EFL, 0x35DCCD6D889F70B1L, 0x30722B247686F9EFL);
    int64_t *l_159 = (void*)0;
    int64_t *l_160 = (void*)0;
    uint64_t *l_162 = (void*)0;
    uint64_t *l_163 = (void*)0;
    uint64_t *l_164 = (void*)0;
    uint64_t *l_165[4];
    VECTOR(int32_t, 4) l_166 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x2FE1426FL), 0x2FE1426FL);
    VECTOR(int8_t, 2) l_167 = (VECTOR(int8_t, 2))((-1L), 0x46L);
    uint32_t *l_177 = &p_1243->g_104[6];
    int32_t l_178 = 0x1506DAA5L;
    int8_t *l_179 = &p_1243->g_97.f2;
    int16_t *l_180[7][8] = {{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]},{&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0],&p_1243->g_181[0]}};
    int32_t l_182 = 3L;
    int32_t *l_183 = &l_150;
    int i, j;
    for (i = 0; i < 4; i++)
        l_165[i] = (void*)0;
    (*l_183) = (((*l_147) = p_132) | ((safe_div_func_int64_t_s_s(((l_182 &= (((((*l_179) |= ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(0x73L, 0x52L, ((VECTOR(int8_t, 2))(0x7FL, 0x0BL)), 0L, (-5L), 0x7EL, 0x7AL, (-1L), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(l_150, (((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, (-1L), 0x1FL, 0x40L)), (!((**p_134) = (((p_1243->g_97.f7 < 0x67EEA9CB02FEDD84L) >= (!(p_1243->g_155.sd = (((VECTOR(uint8_t, 2))(0xE9L, 8UL)).lo | (((VECTOR(uint64_t, 16))(p_1243->g_155.s55cd8020b3e3a31e)).s1 > (p_1243->g_161[1][5][2] = ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_156.yxyyxxxyxyxxyxyy)))).lo, ((VECTOR(int64_t, 2))(l_157.xy)).xxxxyxxx, ((VECTOR(int64_t, 2))(l_158.s08)).yyyxxyxx))).s5)))))) | ((VECTOR(int32_t, 8))(l_166.zyxywyyx)).s7))), 1L, 0x5BL, 1L)), ((VECTOR(int8_t, 8))(l_167.xyxyxyxx)), ((VECTOR(int8_t, 2))(3L, 1L)).xyxxyxyx))).odd)).zyywxyxx, ((VECTOR(int8_t, 4))(p_1243->g_168.yyyx)).zyywywxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(0x18L, ((VECTOR(int8_t, 2))(p_1243->g_169.yy)), (((l_166.z & (0x3445F0763AE82E7FL != ((safe_add_func_int8_t_s_s((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(p_1243->g_172.yzyxwywx)).s6146724354012544, (uint32_t)((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(0x142BC99AL, 0x796CAE12L, (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_1243->g_97.f4, (((l_166.z < l_167.y) , l_177) != (void*)0))), l_158.s8)), 0x17869A76L, ((VECTOR(uint32_t, 4))(5UL)), 0xB1E45251L, 0x803106ADL, 0x4B668E61L, ((VECTOR(uint32_t, 4))(0xBA6CF05BL)), 0x20DD73F1L)).saf, ((VECTOR(uint32_t, 2))(0x666AC72AL)), ((VECTOR(uint32_t, 2))(4294967295UL))))), 4294967291UL, 0UL)).hi, (uint32_t)p_135))).hi, (uint32_t)0x04E769F5L))).sb589, ((VECTOR(uint32_t, 4))(4294967287UL))))).odd, ((VECTOR(uint32_t, 2))(1UL))))).xxxxyyxy)).s2 || p_1243->g_39), p_1243->g_104[0])) & p_1243->g_comm_values[p_1243->tid]))) >= p_1243->g_172.z) == l_167.x), ((VECTOR(int8_t, 8))(1L)), 2L, 1L, 0x31L, 0x36L)).odd, (int8_t)l_178, (int8_t)0x08L)))))).s6225071523152422)).hi))).s53)).xxxyyyxx)).s6, 0x17L)) , 0x8E43806708EC85A5L) , (**p_134)), 0x2AL, ((VECTOR(int8_t, 4))(0x0EL)), (-8L))).s23, ((VECTOR(int8_t, 2))(0x64L)), ((VECTOR(int8_t, 2))(0L))))).xxxy, ((VECTOR(int8_t, 4))((-10L)))))).z, ((VECTOR(int8_t, 4))(1L)), 6L, 7L)).lo))).s1) != p_135) > p_1243->g_104[0]) == l_156.y)) >= 65526UL), 0x487D1E233BC691B7L)) , 2UL));
    return &p_1243->g_104[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_comm_values[i] = 1;
    struct S3 c_1244;
    struct S3* p_1243 = &c_1244;
    struct S3 c_1245 = {
        0L, // p_1243->g_9
        0x25B5CF0AL, // p_1243->g_10
        4L, // p_1243->g_19
        0x44FA7555L, // p_1243->g_27
        {{{&p_1243->g_27,&p_1243->g_27,&p_1243->g_27},{&p_1243->g_27,&p_1243->g_27,&p_1243->g_27},{&p_1243->g_27,&p_1243->g_27,&p_1243->g_27}}}, // p_1243->g_26
        (VECTOR(uint64_t, 4))(0x0551B70F82EDDAADL, (VECTOR(uint64_t, 2))(0x0551B70F82EDDAADL, 0xDDA5C12BBF3AF71EL), 0xDDA5C12BBF3AF71EL), // p_1243->g_34
        (-10L), // p_1243->g_39
        65535UL, // p_1243->g_40
        0x6CDC4137L, // p_1243->g_51
        0UL, // p_1243->g_65
        1UL, // p_1243->g_87
        {0L,4294967295UL,-6L,0x5AL,1L,0x3ABDF95BL,7UL,0x83L}, // p_1243->g_97
        {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL}, // p_1243->g_104
        {0x1E68E90FL,0x1B2BD449L,5L,255UL,0x0DB40B985C477C23L,0x72F705CCL,1UL,255UL}, // p_1243->g_142
        &p_1243->g_142, // p_1243->g_141
        &p_1243->g_141, // p_1243->g_140
        (VECTOR(uint64_t, 16))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x1FA38B77653E0B4AL), 0x1FA38B77653E0B4AL), 0x1FA38B77653E0B4AL, 18446744073709551612UL, 0x1FA38B77653E0B4AL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x1FA38B77653E0B4AL), (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x1FA38B77653E0B4AL), 18446744073709551612UL, 0x1FA38B77653E0B4AL, 18446744073709551612UL, 0x1FA38B77653E0B4AL), // p_1243->g_155
        {{{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L}},{{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L}},{{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L},{0xC8BCB830L,1UL,0xC8BCB830L}}}, // p_1243->g_161
        (VECTOR(int8_t, 2))(7L, 0x2AL), // p_1243->g_168
        (VECTOR(int8_t, 2))((-1L), 1L), // p_1243->g_169
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xF2D15554L), 0xF2D15554L), // p_1243->g_172
        {0x202EL,0x202EL}, // p_1243->g_181
        (void*)0, // p_1243->g_188
        &p_1243->g_188, // p_1243->g_187
        0x0E0E4D52L, // p_1243->g_198
        (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x2162L), 0x2162L), 0x2162L, (-6L), 0x2162L, (VECTOR(int16_t, 2))((-6L), 0x2162L), (VECTOR(int16_t, 2))((-6L), 0x2162L), (-6L), 0x2162L, (-6L), 0x2162L), // p_1243->g_248
        (VECTOR(int32_t, 4))(0x5E59AA8CL, (VECTOR(int32_t, 2))(0x5E59AA8CL, 9L), 9L), // p_1243->g_249
        {0x51L,0x434EC1C7CE739196L,0UL,0x67176CBD41AF20DDL,0xB0E59E16L,0x0E59L,3L}, // p_1243->g_253
        (VECTOR(uint8_t, 2))(0UL, 0xFAL), // p_1243->g_258
        65529UL, // p_1243->g_260
        0x79AA37D95E908290L, // p_1243->g_266
        {&p_1243->g_266,&p_1243->g_266,&p_1243->g_266}, // p_1243->g_265
        (VECTOR(int32_t, 4))(0x3D7AD810L, (VECTOR(int32_t, 2))(0x3D7AD810L, (-1L)), (-1L)), // p_1243->g_269
        (VECTOR(int32_t, 8))(0x6B2067BBL, (VECTOR(int32_t, 4))(0x6B2067BBL, (VECTOR(int32_t, 2))(0x6B2067BBL, (-1L)), (-1L)), (-1L), 0x6B2067BBL, (-1L)), // p_1243->g_271
        (VECTOR(int32_t, 16))(0x5D2177A2L, (VECTOR(int32_t, 4))(0x5D2177A2L, (VECTOR(int32_t, 2))(0x5D2177A2L, 0x14CD86ECL), 0x14CD86ECL), 0x14CD86ECL, 0x5D2177A2L, 0x14CD86ECL, (VECTOR(int32_t, 2))(0x5D2177A2L, 0x14CD86ECL), (VECTOR(int32_t, 2))(0x5D2177A2L, 0x14CD86ECL), 0x5D2177A2L, 0x14CD86ECL, 0x5D2177A2L, 0x14CD86ECL), // p_1243->g_306
        (VECTOR(int32_t, 2))(0x2200B15AL, 1L), // p_1243->g_308
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4C4563C6L), 0x4C4563C6L), // p_1243->g_310
        (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 1L), 1L), // p_1243->g_322
        {0x1D1AL}, // p_1243->g_336
        (VECTOR(int64_t, 2))((-10L), 8L), // p_1243->g_360
        {-5L,0UL,0x09L,1UL,0x16843CFB3AD6472FL,9UL,0x05925AE1L,2UL}, // p_1243->g_370
        &p_1243->g_370, // p_1243->g_369
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1243->g_551
        {-5L,-1L,18446744073709551609UL,0x4E91BF1455342A3CL,4294967295UL,0x6932L,0x6D09AEA5L}, // p_1243->g_553
        (VECTOR(uint16_t, 2))(0xF832L, 0x4519L), // p_1243->g_562
        &p_1243->g_104[0], // p_1243->g_567
        &p_1243->g_567, // p_1243->g_566
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int32_t, 2))(1L, (-2L)), (VECTOR(int32_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L)), // p_1243->g_601
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xA0L), 0xA0L), 0xA0L, 255UL, 0xA0L, (VECTOR(uint8_t, 2))(255UL, 0xA0L), (VECTOR(uint8_t, 2))(255UL, 0xA0L), 255UL, 0xA0L, 255UL, 0xA0L), // p_1243->g_611
        (VECTOR(uint8_t, 8))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 1UL), 1UL), 1UL, 0x91L, 1UL), // p_1243->g_612
        1L, // p_1243->g_636
        &p_1243->g_636, // p_1243->g_635
        &p_1243->g_635, // p_1243->g_634
        (VECTOR(int8_t, 16))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0x3BL), 0x3BL), 0x3BL, 0x45L, 0x3BL, (VECTOR(int8_t, 2))(0x45L, 0x3BL), (VECTOR(int8_t, 2))(0x45L, 0x3BL), 0x45L, 0x3BL, 0x45L, 0x3BL), // p_1243->g_637
        (VECTOR(uint32_t, 8))(0xDD20B5BEL, (VECTOR(uint32_t, 4))(0xDD20B5BEL, (VECTOR(uint32_t, 2))(0xDD20B5BEL, 4294967295UL), 4294967295UL), 4294967295UL, 0xDD20B5BEL, 4294967295UL), // p_1243->g_644
        {0L,-2L,0UL,-1L,0xC8E2C7FEL,0x7454L,0x113C9D78L}, // p_1243->g_684
        0x3A7ABE6E436A4D04L, // p_1243->g_700
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x12920F98L), 0x12920F98L), 0x12920F98L, (-1L), 0x12920F98L), // p_1243->g_702
        (VECTOR(int32_t, 8))(0x03C0EC2BL, (VECTOR(int32_t, 4))(0x03C0EC2BL, (VECTOR(int32_t, 2))(0x03C0EC2BL, 0x6BB4BF11L), 0x6BB4BF11L), 0x6BB4BF11L, 0x03C0EC2BL, 0x6BB4BF11L), // p_1243->g_704
        (void*)0, // p_1243->g_708
        (-5L), // p_1243->g_736
        (void*)0, // p_1243->g_739
        &p_1243->g_739, // p_1243->g_738
        {-1L,0x1C48D715L,-6L,0x07L,-1L,0UL,0UL,0xBFL}, // p_1243->g_774
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xC2L), 0xC2L), 0xC2L, 1UL, 0xC2L, (VECTOR(uint8_t, 2))(1UL, 0xC2L), (VECTOR(uint8_t, 2))(1UL, 0xC2L), 1UL, 0xC2L, 1UL, 0xC2L), // p_1243->g_852
        (VECTOR(uint8_t, 4))(0xEDL, (VECTOR(uint8_t, 2))(0xEDL, 0x06L), 0x06L), // p_1243->g_854
        65533UL, // p_1243->g_881
        0xEA46L, // p_1243->g_882
        {&p_1243->g_881,&p_1243->g_881,&p_1243->g_881,&p_1243->g_881,&p_1243->g_881}, // p_1243->g_880
        &p_1243->g_880[1], // p_1243->g_879
        {9L,0x7A1E9A75E47D27FAL,0x0D6149539F735771L,-1L,0x0504DA43L,0x62A8L,0x6EAB4932L}, // p_1243->g_899
        (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x7D7E6B8CL), 0x7D7E6B8CL), 0x7D7E6B8CL, 4294967292UL, 0x7D7E6B8CL), // p_1243->g_902
        (VECTOR(int16_t, 4))(0x3DE6L, (VECTOR(int16_t, 2))(0x3DE6L, 1L), 1L), // p_1243->g_907
        (VECTOR(int64_t, 4))(0x4ECEECA8DD9B84F9L, (VECTOR(int64_t, 2))(0x4ECEECA8DD9B84F9L, 0x530FDAEFA003B862L), 0x530FDAEFA003B862L), // p_1243->g_928
        (VECTOR(int64_t, 2))(0x7E675D605BA86B8EL, (-6L)), // p_1243->g_929
        &p_1243->g_551[6], // p_1243->g_955
        {&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0],&p_1243->g_26[0][2][0]}, // p_1243->g_956
        &p_1243->g_26[0][2][1], // p_1243->g_957
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x438CL), 0x438CL), // p_1243->g_971
        {-9L,-6L,18446744073709551613UL,0x72AD09CF88EB080CL,0UL,0x3845L,0x2A8A7EA1L}, // p_1243->g_976
        {0L,1L,0x72491B11E8D4D91CL,-8L,0x151B76C7L,-1L,0x07EA01C0L}, // p_1243->g_983
        &p_1243->g_336, // p_1243->g_1020
        &p_1243->g_1020, // p_1243->g_1019
        (void*)0, // p_1243->g_1031
        (void*)0, // p_1243->g_1033
        {0x1CL,-3L,18446744073709551614UL,0x2B1067E285DA28E8L,4294967295UL,0x598FL,-4L}, // p_1243->g_1038
        (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x3EEA3C23L), 0x3EEA3C23L), 0x3EEA3C23L, 5UL, 0x3EEA3C23L), // p_1243->g_1039
        0UL, // p_1243->g_1050
        (VECTOR(int16_t, 4))(0x1E21L, (VECTOR(int16_t, 2))(0x1E21L, 0x028BL), 0x028BL), // p_1243->g_1084
        (VECTOR(uint16_t, 2))(0xBF9BL, 0xEB1DL), // p_1243->g_1093
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x04L), 0x04L), 0x04L, 0UL, 0x04L), // p_1243->g_1106
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), // p_1243->g_1111
        (VECTOR(int8_t, 2))(0x0BL, 4L), // p_1243->g_1112
        (VECTOR(int8_t, 2))(0x53L, 0L), // p_1243->g_1113
        (VECTOR(uint16_t, 4))(0x52BDL, (VECTOR(uint16_t, 2))(0x52BDL, 0x84FBL), 0x84FBL), // p_1243->g_1120
        (VECTOR(uint16_t, 2))(65530UL, 0x4758L), // p_1243->g_1137
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x1CA832E6C6C24361L), 0x1CA832E6C6C24361L), // p_1243->g_1170
        (VECTOR(uint64_t, 8))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x713FDBE6F60C989FL), 0x713FDBE6F60C989FL), 0x713FDBE6F60C989FL, 18446744073709551607UL, 0x713FDBE6F60C989FL), // p_1243->g_1171
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xB4A43D59919CDD7BL), 0xB4A43D59919CDD7BL), // p_1243->g_1172
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), // p_1243->g_1173
        (VECTOR(uint64_t, 8))(0x1AB3A555ACC9DA6CL, (VECTOR(uint64_t, 4))(0x1AB3A555ACC9DA6CL, (VECTOR(uint64_t, 2))(0x1AB3A555ACC9DA6CL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0x1AB3A555ACC9DA6CL, 18446744073709551608UL), // p_1243->g_1174
        (VECTOR(uint64_t, 16))(0x1C8D3D6E432815C7L, (VECTOR(uint64_t, 4))(0x1C8D3D6E432815C7L, (VECTOR(uint64_t, 2))(0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L), 0x3CDF558A28C9FC76L), 0x3CDF558A28C9FC76L, 0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L, (VECTOR(uint64_t, 2))(0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L), (VECTOR(uint64_t, 2))(0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L), 0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L, 0x1C8D3D6E432815C7L, 0x3CDF558A28C9FC76L), // p_1243->g_1215
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), // p_1243->g_1216
        (-1L), // p_1243->g_1234
        {65535UL}, // p_1243->g_1236
        0, // p_1243->v_collective
        sequence_input[get_global_id(0)], // p_1243->global_0_offset
        sequence_input[get_global_id(1)], // p_1243->global_1_offset
        sequence_input[get_global_id(2)], // p_1243->global_2_offset
        sequence_input[get_local_id(0)], // p_1243->local_0_offset
        sequence_input[get_local_id(1)], // p_1243->local_1_offset
        sequence_input[get_local_id(2)], // p_1243->local_2_offset
        sequence_input[get_group_id(0)], // p_1243->group_0_offset
        sequence_input[get_group_id(1)], // p_1243->group_1_offset
        sequence_input[get_group_id(2)], // p_1243->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[0][get_linear_local_id()])), // p_1243->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1244 = c_1245;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1243);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1243->g_9, "p_1243->g_9", print_hash_value);
    transparent_crc(p_1243->g_10, "p_1243->g_10", print_hash_value);
    transparent_crc(p_1243->g_19, "p_1243->g_19", print_hash_value);
    transparent_crc(p_1243->g_27, "p_1243->g_27", print_hash_value);
    transparent_crc(p_1243->g_34.x, "p_1243->g_34.x", print_hash_value);
    transparent_crc(p_1243->g_34.y, "p_1243->g_34.y", print_hash_value);
    transparent_crc(p_1243->g_34.z, "p_1243->g_34.z", print_hash_value);
    transparent_crc(p_1243->g_34.w, "p_1243->g_34.w", print_hash_value);
    transparent_crc(p_1243->g_39, "p_1243->g_39", print_hash_value);
    transparent_crc(p_1243->g_40, "p_1243->g_40", print_hash_value);
    transparent_crc(p_1243->g_51, "p_1243->g_51", print_hash_value);
    transparent_crc(p_1243->g_65, "p_1243->g_65", print_hash_value);
    transparent_crc(p_1243->g_87, "p_1243->g_87", print_hash_value);
    transparent_crc(p_1243->g_97.f0, "p_1243->g_97.f0", print_hash_value);
    transparent_crc(p_1243->g_97.f1, "p_1243->g_97.f1", print_hash_value);
    transparent_crc(p_1243->g_97.f2, "p_1243->g_97.f2", print_hash_value);
    transparent_crc(p_1243->g_97.f3, "p_1243->g_97.f3", print_hash_value);
    transparent_crc(p_1243->g_97.f4, "p_1243->g_97.f4", print_hash_value);
    transparent_crc(p_1243->g_97.f5, "p_1243->g_97.f5", print_hash_value);
    transparent_crc(p_1243->g_97.f6, "p_1243->g_97.f6", print_hash_value);
    transparent_crc(p_1243->g_97.f7, "p_1243->g_97.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1243->g_104[i], "p_1243->g_104[i]", print_hash_value);

    }
    transparent_crc(p_1243->g_142.f0, "p_1243->g_142.f0", print_hash_value);
    transparent_crc(p_1243->g_142.f1, "p_1243->g_142.f1", print_hash_value);
    transparent_crc(p_1243->g_142.f2, "p_1243->g_142.f2", print_hash_value);
    transparent_crc(p_1243->g_142.f3, "p_1243->g_142.f3", print_hash_value);
    transparent_crc(p_1243->g_142.f4, "p_1243->g_142.f4", print_hash_value);
    transparent_crc(p_1243->g_142.f5, "p_1243->g_142.f5", print_hash_value);
    transparent_crc(p_1243->g_142.f6, "p_1243->g_142.f6", print_hash_value);
    transparent_crc(p_1243->g_142.f7, "p_1243->g_142.f7", print_hash_value);
    transparent_crc(p_1243->g_155.s0, "p_1243->g_155.s0", print_hash_value);
    transparent_crc(p_1243->g_155.s1, "p_1243->g_155.s1", print_hash_value);
    transparent_crc(p_1243->g_155.s2, "p_1243->g_155.s2", print_hash_value);
    transparent_crc(p_1243->g_155.s3, "p_1243->g_155.s3", print_hash_value);
    transparent_crc(p_1243->g_155.s4, "p_1243->g_155.s4", print_hash_value);
    transparent_crc(p_1243->g_155.s5, "p_1243->g_155.s5", print_hash_value);
    transparent_crc(p_1243->g_155.s6, "p_1243->g_155.s6", print_hash_value);
    transparent_crc(p_1243->g_155.s7, "p_1243->g_155.s7", print_hash_value);
    transparent_crc(p_1243->g_155.s8, "p_1243->g_155.s8", print_hash_value);
    transparent_crc(p_1243->g_155.s9, "p_1243->g_155.s9", print_hash_value);
    transparent_crc(p_1243->g_155.sa, "p_1243->g_155.sa", print_hash_value);
    transparent_crc(p_1243->g_155.sb, "p_1243->g_155.sb", print_hash_value);
    transparent_crc(p_1243->g_155.sc, "p_1243->g_155.sc", print_hash_value);
    transparent_crc(p_1243->g_155.sd, "p_1243->g_155.sd", print_hash_value);
    transparent_crc(p_1243->g_155.se, "p_1243->g_155.se", print_hash_value);
    transparent_crc(p_1243->g_155.sf, "p_1243->g_155.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1243->g_161[i][j][k], "p_1243->g_161[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1243->g_168.x, "p_1243->g_168.x", print_hash_value);
    transparent_crc(p_1243->g_168.y, "p_1243->g_168.y", print_hash_value);
    transparent_crc(p_1243->g_169.x, "p_1243->g_169.x", print_hash_value);
    transparent_crc(p_1243->g_169.y, "p_1243->g_169.y", print_hash_value);
    transparent_crc(p_1243->g_172.x, "p_1243->g_172.x", print_hash_value);
    transparent_crc(p_1243->g_172.y, "p_1243->g_172.y", print_hash_value);
    transparent_crc(p_1243->g_172.z, "p_1243->g_172.z", print_hash_value);
    transparent_crc(p_1243->g_172.w, "p_1243->g_172.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1243->g_181[i], "p_1243->g_181[i]", print_hash_value);

    }
    transparent_crc(p_1243->g_198, "p_1243->g_198", print_hash_value);
    transparent_crc(p_1243->g_248.s0, "p_1243->g_248.s0", print_hash_value);
    transparent_crc(p_1243->g_248.s1, "p_1243->g_248.s1", print_hash_value);
    transparent_crc(p_1243->g_248.s2, "p_1243->g_248.s2", print_hash_value);
    transparent_crc(p_1243->g_248.s3, "p_1243->g_248.s3", print_hash_value);
    transparent_crc(p_1243->g_248.s4, "p_1243->g_248.s4", print_hash_value);
    transparent_crc(p_1243->g_248.s5, "p_1243->g_248.s5", print_hash_value);
    transparent_crc(p_1243->g_248.s6, "p_1243->g_248.s6", print_hash_value);
    transparent_crc(p_1243->g_248.s7, "p_1243->g_248.s7", print_hash_value);
    transparent_crc(p_1243->g_248.s8, "p_1243->g_248.s8", print_hash_value);
    transparent_crc(p_1243->g_248.s9, "p_1243->g_248.s9", print_hash_value);
    transparent_crc(p_1243->g_248.sa, "p_1243->g_248.sa", print_hash_value);
    transparent_crc(p_1243->g_248.sb, "p_1243->g_248.sb", print_hash_value);
    transparent_crc(p_1243->g_248.sc, "p_1243->g_248.sc", print_hash_value);
    transparent_crc(p_1243->g_248.sd, "p_1243->g_248.sd", print_hash_value);
    transparent_crc(p_1243->g_248.se, "p_1243->g_248.se", print_hash_value);
    transparent_crc(p_1243->g_248.sf, "p_1243->g_248.sf", print_hash_value);
    transparent_crc(p_1243->g_249.x, "p_1243->g_249.x", print_hash_value);
    transparent_crc(p_1243->g_249.y, "p_1243->g_249.y", print_hash_value);
    transparent_crc(p_1243->g_249.z, "p_1243->g_249.z", print_hash_value);
    transparent_crc(p_1243->g_249.w, "p_1243->g_249.w", print_hash_value);
    transparent_crc(p_1243->g_253.f0, "p_1243->g_253.f0", print_hash_value);
    transparent_crc(p_1243->g_253.f1, "p_1243->g_253.f1", print_hash_value);
    transparent_crc(p_1243->g_253.f2, "p_1243->g_253.f2", print_hash_value);
    transparent_crc(p_1243->g_253.f3, "p_1243->g_253.f3", print_hash_value);
    transparent_crc(p_1243->g_253.f4, "p_1243->g_253.f4", print_hash_value);
    transparent_crc(p_1243->g_253.f5, "p_1243->g_253.f5", print_hash_value);
    transparent_crc(p_1243->g_253.f6, "p_1243->g_253.f6", print_hash_value);
    transparent_crc(p_1243->g_258.x, "p_1243->g_258.x", print_hash_value);
    transparent_crc(p_1243->g_258.y, "p_1243->g_258.y", print_hash_value);
    transparent_crc(p_1243->g_260, "p_1243->g_260", print_hash_value);
    transparent_crc(p_1243->g_266, "p_1243->g_266", print_hash_value);
    transparent_crc(p_1243->g_269.x, "p_1243->g_269.x", print_hash_value);
    transparent_crc(p_1243->g_269.y, "p_1243->g_269.y", print_hash_value);
    transparent_crc(p_1243->g_269.z, "p_1243->g_269.z", print_hash_value);
    transparent_crc(p_1243->g_269.w, "p_1243->g_269.w", print_hash_value);
    transparent_crc(p_1243->g_271.s0, "p_1243->g_271.s0", print_hash_value);
    transparent_crc(p_1243->g_271.s1, "p_1243->g_271.s1", print_hash_value);
    transparent_crc(p_1243->g_271.s2, "p_1243->g_271.s2", print_hash_value);
    transparent_crc(p_1243->g_271.s3, "p_1243->g_271.s3", print_hash_value);
    transparent_crc(p_1243->g_271.s4, "p_1243->g_271.s4", print_hash_value);
    transparent_crc(p_1243->g_271.s5, "p_1243->g_271.s5", print_hash_value);
    transparent_crc(p_1243->g_271.s6, "p_1243->g_271.s6", print_hash_value);
    transparent_crc(p_1243->g_271.s7, "p_1243->g_271.s7", print_hash_value);
    transparent_crc(p_1243->g_306.s0, "p_1243->g_306.s0", print_hash_value);
    transparent_crc(p_1243->g_306.s1, "p_1243->g_306.s1", print_hash_value);
    transparent_crc(p_1243->g_306.s2, "p_1243->g_306.s2", print_hash_value);
    transparent_crc(p_1243->g_306.s3, "p_1243->g_306.s3", print_hash_value);
    transparent_crc(p_1243->g_306.s4, "p_1243->g_306.s4", print_hash_value);
    transparent_crc(p_1243->g_306.s5, "p_1243->g_306.s5", print_hash_value);
    transparent_crc(p_1243->g_306.s6, "p_1243->g_306.s6", print_hash_value);
    transparent_crc(p_1243->g_306.s7, "p_1243->g_306.s7", print_hash_value);
    transparent_crc(p_1243->g_306.s8, "p_1243->g_306.s8", print_hash_value);
    transparent_crc(p_1243->g_306.s9, "p_1243->g_306.s9", print_hash_value);
    transparent_crc(p_1243->g_306.sa, "p_1243->g_306.sa", print_hash_value);
    transparent_crc(p_1243->g_306.sb, "p_1243->g_306.sb", print_hash_value);
    transparent_crc(p_1243->g_306.sc, "p_1243->g_306.sc", print_hash_value);
    transparent_crc(p_1243->g_306.sd, "p_1243->g_306.sd", print_hash_value);
    transparent_crc(p_1243->g_306.se, "p_1243->g_306.se", print_hash_value);
    transparent_crc(p_1243->g_306.sf, "p_1243->g_306.sf", print_hash_value);
    transparent_crc(p_1243->g_308.x, "p_1243->g_308.x", print_hash_value);
    transparent_crc(p_1243->g_308.y, "p_1243->g_308.y", print_hash_value);
    transparent_crc(p_1243->g_310.x, "p_1243->g_310.x", print_hash_value);
    transparent_crc(p_1243->g_310.y, "p_1243->g_310.y", print_hash_value);
    transparent_crc(p_1243->g_310.z, "p_1243->g_310.z", print_hash_value);
    transparent_crc(p_1243->g_310.w, "p_1243->g_310.w", print_hash_value);
    transparent_crc(p_1243->g_322.x, "p_1243->g_322.x", print_hash_value);
    transparent_crc(p_1243->g_322.y, "p_1243->g_322.y", print_hash_value);
    transparent_crc(p_1243->g_322.z, "p_1243->g_322.z", print_hash_value);
    transparent_crc(p_1243->g_322.w, "p_1243->g_322.w", print_hash_value);
    transparent_crc(p_1243->g_336.f0, "p_1243->g_336.f0", print_hash_value);
    transparent_crc(p_1243->g_360.x, "p_1243->g_360.x", print_hash_value);
    transparent_crc(p_1243->g_360.y, "p_1243->g_360.y", print_hash_value);
    transparent_crc(p_1243->g_370.f0, "p_1243->g_370.f0", print_hash_value);
    transparent_crc(p_1243->g_370.f1, "p_1243->g_370.f1", print_hash_value);
    transparent_crc(p_1243->g_370.f2, "p_1243->g_370.f2", print_hash_value);
    transparent_crc(p_1243->g_370.f3, "p_1243->g_370.f3", print_hash_value);
    transparent_crc(p_1243->g_370.f4, "p_1243->g_370.f4", print_hash_value);
    transparent_crc(p_1243->g_370.f5, "p_1243->g_370.f5", print_hash_value);
    transparent_crc(p_1243->g_370.f6, "p_1243->g_370.f6", print_hash_value);
    transparent_crc(p_1243->g_370.f7, "p_1243->g_370.f7", print_hash_value);
    transparent_crc(p_1243->g_553.f0, "p_1243->g_553.f0", print_hash_value);
    transparent_crc(p_1243->g_553.f1, "p_1243->g_553.f1", print_hash_value);
    transparent_crc(p_1243->g_553.f2, "p_1243->g_553.f2", print_hash_value);
    transparent_crc(p_1243->g_553.f3, "p_1243->g_553.f3", print_hash_value);
    transparent_crc(p_1243->g_553.f4, "p_1243->g_553.f4", print_hash_value);
    transparent_crc(p_1243->g_553.f5, "p_1243->g_553.f5", print_hash_value);
    transparent_crc(p_1243->g_553.f6, "p_1243->g_553.f6", print_hash_value);
    transparent_crc(p_1243->g_562.x, "p_1243->g_562.x", print_hash_value);
    transparent_crc(p_1243->g_562.y, "p_1243->g_562.y", print_hash_value);
    transparent_crc(p_1243->g_601.s0, "p_1243->g_601.s0", print_hash_value);
    transparent_crc(p_1243->g_601.s1, "p_1243->g_601.s1", print_hash_value);
    transparent_crc(p_1243->g_601.s2, "p_1243->g_601.s2", print_hash_value);
    transparent_crc(p_1243->g_601.s3, "p_1243->g_601.s3", print_hash_value);
    transparent_crc(p_1243->g_601.s4, "p_1243->g_601.s4", print_hash_value);
    transparent_crc(p_1243->g_601.s5, "p_1243->g_601.s5", print_hash_value);
    transparent_crc(p_1243->g_601.s6, "p_1243->g_601.s6", print_hash_value);
    transparent_crc(p_1243->g_601.s7, "p_1243->g_601.s7", print_hash_value);
    transparent_crc(p_1243->g_601.s8, "p_1243->g_601.s8", print_hash_value);
    transparent_crc(p_1243->g_601.s9, "p_1243->g_601.s9", print_hash_value);
    transparent_crc(p_1243->g_601.sa, "p_1243->g_601.sa", print_hash_value);
    transparent_crc(p_1243->g_601.sb, "p_1243->g_601.sb", print_hash_value);
    transparent_crc(p_1243->g_601.sc, "p_1243->g_601.sc", print_hash_value);
    transparent_crc(p_1243->g_601.sd, "p_1243->g_601.sd", print_hash_value);
    transparent_crc(p_1243->g_601.se, "p_1243->g_601.se", print_hash_value);
    transparent_crc(p_1243->g_601.sf, "p_1243->g_601.sf", print_hash_value);
    transparent_crc(p_1243->g_611.s0, "p_1243->g_611.s0", print_hash_value);
    transparent_crc(p_1243->g_611.s1, "p_1243->g_611.s1", print_hash_value);
    transparent_crc(p_1243->g_611.s2, "p_1243->g_611.s2", print_hash_value);
    transparent_crc(p_1243->g_611.s3, "p_1243->g_611.s3", print_hash_value);
    transparent_crc(p_1243->g_611.s4, "p_1243->g_611.s4", print_hash_value);
    transparent_crc(p_1243->g_611.s5, "p_1243->g_611.s5", print_hash_value);
    transparent_crc(p_1243->g_611.s6, "p_1243->g_611.s6", print_hash_value);
    transparent_crc(p_1243->g_611.s7, "p_1243->g_611.s7", print_hash_value);
    transparent_crc(p_1243->g_611.s8, "p_1243->g_611.s8", print_hash_value);
    transparent_crc(p_1243->g_611.s9, "p_1243->g_611.s9", print_hash_value);
    transparent_crc(p_1243->g_611.sa, "p_1243->g_611.sa", print_hash_value);
    transparent_crc(p_1243->g_611.sb, "p_1243->g_611.sb", print_hash_value);
    transparent_crc(p_1243->g_611.sc, "p_1243->g_611.sc", print_hash_value);
    transparent_crc(p_1243->g_611.sd, "p_1243->g_611.sd", print_hash_value);
    transparent_crc(p_1243->g_611.se, "p_1243->g_611.se", print_hash_value);
    transparent_crc(p_1243->g_611.sf, "p_1243->g_611.sf", print_hash_value);
    transparent_crc(p_1243->g_612.s0, "p_1243->g_612.s0", print_hash_value);
    transparent_crc(p_1243->g_612.s1, "p_1243->g_612.s1", print_hash_value);
    transparent_crc(p_1243->g_612.s2, "p_1243->g_612.s2", print_hash_value);
    transparent_crc(p_1243->g_612.s3, "p_1243->g_612.s3", print_hash_value);
    transparent_crc(p_1243->g_612.s4, "p_1243->g_612.s4", print_hash_value);
    transparent_crc(p_1243->g_612.s5, "p_1243->g_612.s5", print_hash_value);
    transparent_crc(p_1243->g_612.s6, "p_1243->g_612.s6", print_hash_value);
    transparent_crc(p_1243->g_612.s7, "p_1243->g_612.s7", print_hash_value);
    transparent_crc(p_1243->g_636, "p_1243->g_636", print_hash_value);
    transparent_crc(p_1243->g_637.s0, "p_1243->g_637.s0", print_hash_value);
    transparent_crc(p_1243->g_637.s1, "p_1243->g_637.s1", print_hash_value);
    transparent_crc(p_1243->g_637.s2, "p_1243->g_637.s2", print_hash_value);
    transparent_crc(p_1243->g_637.s3, "p_1243->g_637.s3", print_hash_value);
    transparent_crc(p_1243->g_637.s4, "p_1243->g_637.s4", print_hash_value);
    transparent_crc(p_1243->g_637.s5, "p_1243->g_637.s5", print_hash_value);
    transparent_crc(p_1243->g_637.s6, "p_1243->g_637.s6", print_hash_value);
    transparent_crc(p_1243->g_637.s7, "p_1243->g_637.s7", print_hash_value);
    transparent_crc(p_1243->g_637.s8, "p_1243->g_637.s8", print_hash_value);
    transparent_crc(p_1243->g_637.s9, "p_1243->g_637.s9", print_hash_value);
    transparent_crc(p_1243->g_637.sa, "p_1243->g_637.sa", print_hash_value);
    transparent_crc(p_1243->g_637.sb, "p_1243->g_637.sb", print_hash_value);
    transparent_crc(p_1243->g_637.sc, "p_1243->g_637.sc", print_hash_value);
    transparent_crc(p_1243->g_637.sd, "p_1243->g_637.sd", print_hash_value);
    transparent_crc(p_1243->g_637.se, "p_1243->g_637.se", print_hash_value);
    transparent_crc(p_1243->g_637.sf, "p_1243->g_637.sf", print_hash_value);
    transparent_crc(p_1243->g_644.s0, "p_1243->g_644.s0", print_hash_value);
    transparent_crc(p_1243->g_644.s1, "p_1243->g_644.s1", print_hash_value);
    transparent_crc(p_1243->g_644.s2, "p_1243->g_644.s2", print_hash_value);
    transparent_crc(p_1243->g_644.s3, "p_1243->g_644.s3", print_hash_value);
    transparent_crc(p_1243->g_644.s4, "p_1243->g_644.s4", print_hash_value);
    transparent_crc(p_1243->g_644.s5, "p_1243->g_644.s5", print_hash_value);
    transparent_crc(p_1243->g_644.s6, "p_1243->g_644.s6", print_hash_value);
    transparent_crc(p_1243->g_644.s7, "p_1243->g_644.s7", print_hash_value);
    transparent_crc(p_1243->g_684.f0, "p_1243->g_684.f0", print_hash_value);
    transparent_crc(p_1243->g_684.f1, "p_1243->g_684.f1", print_hash_value);
    transparent_crc(p_1243->g_684.f2, "p_1243->g_684.f2", print_hash_value);
    transparent_crc(p_1243->g_684.f3, "p_1243->g_684.f3", print_hash_value);
    transparent_crc(p_1243->g_684.f4, "p_1243->g_684.f4", print_hash_value);
    transparent_crc(p_1243->g_684.f5, "p_1243->g_684.f5", print_hash_value);
    transparent_crc(p_1243->g_684.f6, "p_1243->g_684.f6", print_hash_value);
    transparent_crc(p_1243->g_700, "p_1243->g_700", print_hash_value);
    transparent_crc(p_1243->g_702.s0, "p_1243->g_702.s0", print_hash_value);
    transparent_crc(p_1243->g_702.s1, "p_1243->g_702.s1", print_hash_value);
    transparent_crc(p_1243->g_702.s2, "p_1243->g_702.s2", print_hash_value);
    transparent_crc(p_1243->g_702.s3, "p_1243->g_702.s3", print_hash_value);
    transparent_crc(p_1243->g_702.s4, "p_1243->g_702.s4", print_hash_value);
    transparent_crc(p_1243->g_702.s5, "p_1243->g_702.s5", print_hash_value);
    transparent_crc(p_1243->g_702.s6, "p_1243->g_702.s6", print_hash_value);
    transparent_crc(p_1243->g_702.s7, "p_1243->g_702.s7", print_hash_value);
    transparent_crc(p_1243->g_704.s0, "p_1243->g_704.s0", print_hash_value);
    transparent_crc(p_1243->g_704.s1, "p_1243->g_704.s1", print_hash_value);
    transparent_crc(p_1243->g_704.s2, "p_1243->g_704.s2", print_hash_value);
    transparent_crc(p_1243->g_704.s3, "p_1243->g_704.s3", print_hash_value);
    transparent_crc(p_1243->g_704.s4, "p_1243->g_704.s4", print_hash_value);
    transparent_crc(p_1243->g_704.s5, "p_1243->g_704.s5", print_hash_value);
    transparent_crc(p_1243->g_704.s6, "p_1243->g_704.s6", print_hash_value);
    transparent_crc(p_1243->g_704.s7, "p_1243->g_704.s7", print_hash_value);
    transparent_crc(p_1243->g_736, "p_1243->g_736", print_hash_value);
    transparent_crc(p_1243->g_774.f0, "p_1243->g_774.f0", print_hash_value);
    transparent_crc(p_1243->g_774.f1, "p_1243->g_774.f1", print_hash_value);
    transparent_crc(p_1243->g_774.f2, "p_1243->g_774.f2", print_hash_value);
    transparent_crc(p_1243->g_774.f3, "p_1243->g_774.f3", print_hash_value);
    transparent_crc(p_1243->g_774.f4, "p_1243->g_774.f4", print_hash_value);
    transparent_crc(p_1243->g_774.f5, "p_1243->g_774.f5", print_hash_value);
    transparent_crc(p_1243->g_774.f6, "p_1243->g_774.f6", print_hash_value);
    transparent_crc(p_1243->g_774.f7, "p_1243->g_774.f7", print_hash_value);
    transparent_crc(p_1243->g_852.s0, "p_1243->g_852.s0", print_hash_value);
    transparent_crc(p_1243->g_852.s1, "p_1243->g_852.s1", print_hash_value);
    transparent_crc(p_1243->g_852.s2, "p_1243->g_852.s2", print_hash_value);
    transparent_crc(p_1243->g_852.s3, "p_1243->g_852.s3", print_hash_value);
    transparent_crc(p_1243->g_852.s4, "p_1243->g_852.s4", print_hash_value);
    transparent_crc(p_1243->g_852.s5, "p_1243->g_852.s5", print_hash_value);
    transparent_crc(p_1243->g_852.s6, "p_1243->g_852.s6", print_hash_value);
    transparent_crc(p_1243->g_852.s7, "p_1243->g_852.s7", print_hash_value);
    transparent_crc(p_1243->g_852.s8, "p_1243->g_852.s8", print_hash_value);
    transparent_crc(p_1243->g_852.s9, "p_1243->g_852.s9", print_hash_value);
    transparent_crc(p_1243->g_852.sa, "p_1243->g_852.sa", print_hash_value);
    transparent_crc(p_1243->g_852.sb, "p_1243->g_852.sb", print_hash_value);
    transparent_crc(p_1243->g_852.sc, "p_1243->g_852.sc", print_hash_value);
    transparent_crc(p_1243->g_852.sd, "p_1243->g_852.sd", print_hash_value);
    transparent_crc(p_1243->g_852.se, "p_1243->g_852.se", print_hash_value);
    transparent_crc(p_1243->g_852.sf, "p_1243->g_852.sf", print_hash_value);
    transparent_crc(p_1243->g_854.x, "p_1243->g_854.x", print_hash_value);
    transparent_crc(p_1243->g_854.y, "p_1243->g_854.y", print_hash_value);
    transparent_crc(p_1243->g_854.z, "p_1243->g_854.z", print_hash_value);
    transparent_crc(p_1243->g_854.w, "p_1243->g_854.w", print_hash_value);
    transparent_crc(p_1243->g_881, "p_1243->g_881", print_hash_value);
    transparent_crc(p_1243->g_882, "p_1243->g_882", print_hash_value);
    transparent_crc(p_1243->g_899.f0, "p_1243->g_899.f0", print_hash_value);
    transparent_crc(p_1243->g_899.f1, "p_1243->g_899.f1", print_hash_value);
    transparent_crc(p_1243->g_899.f2, "p_1243->g_899.f2", print_hash_value);
    transparent_crc(p_1243->g_899.f3, "p_1243->g_899.f3", print_hash_value);
    transparent_crc(p_1243->g_899.f4, "p_1243->g_899.f4", print_hash_value);
    transparent_crc(p_1243->g_899.f5, "p_1243->g_899.f5", print_hash_value);
    transparent_crc(p_1243->g_899.f6, "p_1243->g_899.f6", print_hash_value);
    transparent_crc(p_1243->g_902.s0, "p_1243->g_902.s0", print_hash_value);
    transparent_crc(p_1243->g_902.s1, "p_1243->g_902.s1", print_hash_value);
    transparent_crc(p_1243->g_902.s2, "p_1243->g_902.s2", print_hash_value);
    transparent_crc(p_1243->g_902.s3, "p_1243->g_902.s3", print_hash_value);
    transparent_crc(p_1243->g_902.s4, "p_1243->g_902.s4", print_hash_value);
    transparent_crc(p_1243->g_902.s5, "p_1243->g_902.s5", print_hash_value);
    transparent_crc(p_1243->g_902.s6, "p_1243->g_902.s6", print_hash_value);
    transparent_crc(p_1243->g_902.s7, "p_1243->g_902.s7", print_hash_value);
    transparent_crc(p_1243->g_907.x, "p_1243->g_907.x", print_hash_value);
    transparent_crc(p_1243->g_907.y, "p_1243->g_907.y", print_hash_value);
    transparent_crc(p_1243->g_907.z, "p_1243->g_907.z", print_hash_value);
    transparent_crc(p_1243->g_907.w, "p_1243->g_907.w", print_hash_value);
    transparent_crc(p_1243->g_928.x, "p_1243->g_928.x", print_hash_value);
    transparent_crc(p_1243->g_928.y, "p_1243->g_928.y", print_hash_value);
    transparent_crc(p_1243->g_928.z, "p_1243->g_928.z", print_hash_value);
    transparent_crc(p_1243->g_928.w, "p_1243->g_928.w", print_hash_value);
    transparent_crc(p_1243->g_929.x, "p_1243->g_929.x", print_hash_value);
    transparent_crc(p_1243->g_929.y, "p_1243->g_929.y", print_hash_value);
    transparent_crc(p_1243->g_971.x, "p_1243->g_971.x", print_hash_value);
    transparent_crc(p_1243->g_971.y, "p_1243->g_971.y", print_hash_value);
    transparent_crc(p_1243->g_971.z, "p_1243->g_971.z", print_hash_value);
    transparent_crc(p_1243->g_971.w, "p_1243->g_971.w", print_hash_value);
    transparent_crc(p_1243->g_976.f0, "p_1243->g_976.f0", print_hash_value);
    transparent_crc(p_1243->g_976.f1, "p_1243->g_976.f1", print_hash_value);
    transparent_crc(p_1243->g_976.f2, "p_1243->g_976.f2", print_hash_value);
    transparent_crc(p_1243->g_976.f3, "p_1243->g_976.f3", print_hash_value);
    transparent_crc(p_1243->g_976.f4, "p_1243->g_976.f4", print_hash_value);
    transparent_crc(p_1243->g_976.f5, "p_1243->g_976.f5", print_hash_value);
    transparent_crc(p_1243->g_976.f6, "p_1243->g_976.f6", print_hash_value);
    transparent_crc(p_1243->g_983.f0, "p_1243->g_983.f0", print_hash_value);
    transparent_crc(p_1243->g_983.f1, "p_1243->g_983.f1", print_hash_value);
    transparent_crc(p_1243->g_983.f2, "p_1243->g_983.f2", print_hash_value);
    transparent_crc(p_1243->g_983.f3, "p_1243->g_983.f3", print_hash_value);
    transparent_crc(p_1243->g_983.f4, "p_1243->g_983.f4", print_hash_value);
    transparent_crc(p_1243->g_983.f5, "p_1243->g_983.f5", print_hash_value);
    transparent_crc(p_1243->g_983.f6, "p_1243->g_983.f6", print_hash_value);
    transparent_crc(p_1243->g_1038.f0, "p_1243->g_1038.f0", print_hash_value);
    transparent_crc(p_1243->g_1038.f1, "p_1243->g_1038.f1", print_hash_value);
    transparent_crc(p_1243->g_1038.f2, "p_1243->g_1038.f2", print_hash_value);
    transparent_crc(p_1243->g_1038.f3, "p_1243->g_1038.f3", print_hash_value);
    transparent_crc(p_1243->g_1038.f4, "p_1243->g_1038.f4", print_hash_value);
    transparent_crc(p_1243->g_1038.f5, "p_1243->g_1038.f5", print_hash_value);
    transparent_crc(p_1243->g_1038.f6, "p_1243->g_1038.f6", print_hash_value);
    transparent_crc(p_1243->g_1039.s0, "p_1243->g_1039.s0", print_hash_value);
    transparent_crc(p_1243->g_1039.s1, "p_1243->g_1039.s1", print_hash_value);
    transparent_crc(p_1243->g_1039.s2, "p_1243->g_1039.s2", print_hash_value);
    transparent_crc(p_1243->g_1039.s3, "p_1243->g_1039.s3", print_hash_value);
    transparent_crc(p_1243->g_1039.s4, "p_1243->g_1039.s4", print_hash_value);
    transparent_crc(p_1243->g_1039.s5, "p_1243->g_1039.s5", print_hash_value);
    transparent_crc(p_1243->g_1039.s6, "p_1243->g_1039.s6", print_hash_value);
    transparent_crc(p_1243->g_1039.s7, "p_1243->g_1039.s7", print_hash_value);
    transparent_crc(p_1243->g_1050, "p_1243->g_1050", print_hash_value);
    transparent_crc(p_1243->g_1084.x, "p_1243->g_1084.x", print_hash_value);
    transparent_crc(p_1243->g_1084.y, "p_1243->g_1084.y", print_hash_value);
    transparent_crc(p_1243->g_1084.z, "p_1243->g_1084.z", print_hash_value);
    transparent_crc(p_1243->g_1084.w, "p_1243->g_1084.w", print_hash_value);
    transparent_crc(p_1243->g_1093.x, "p_1243->g_1093.x", print_hash_value);
    transparent_crc(p_1243->g_1093.y, "p_1243->g_1093.y", print_hash_value);
    transparent_crc(p_1243->g_1106.s0, "p_1243->g_1106.s0", print_hash_value);
    transparent_crc(p_1243->g_1106.s1, "p_1243->g_1106.s1", print_hash_value);
    transparent_crc(p_1243->g_1106.s2, "p_1243->g_1106.s2", print_hash_value);
    transparent_crc(p_1243->g_1106.s3, "p_1243->g_1106.s3", print_hash_value);
    transparent_crc(p_1243->g_1106.s4, "p_1243->g_1106.s4", print_hash_value);
    transparent_crc(p_1243->g_1106.s5, "p_1243->g_1106.s5", print_hash_value);
    transparent_crc(p_1243->g_1106.s6, "p_1243->g_1106.s6", print_hash_value);
    transparent_crc(p_1243->g_1106.s7, "p_1243->g_1106.s7", print_hash_value);
    transparent_crc(p_1243->g_1111.x, "p_1243->g_1111.x", print_hash_value);
    transparent_crc(p_1243->g_1111.y, "p_1243->g_1111.y", print_hash_value);
    transparent_crc(p_1243->g_1111.z, "p_1243->g_1111.z", print_hash_value);
    transparent_crc(p_1243->g_1111.w, "p_1243->g_1111.w", print_hash_value);
    transparent_crc(p_1243->g_1112.x, "p_1243->g_1112.x", print_hash_value);
    transparent_crc(p_1243->g_1112.y, "p_1243->g_1112.y", print_hash_value);
    transparent_crc(p_1243->g_1113.x, "p_1243->g_1113.x", print_hash_value);
    transparent_crc(p_1243->g_1113.y, "p_1243->g_1113.y", print_hash_value);
    transparent_crc(p_1243->g_1120.x, "p_1243->g_1120.x", print_hash_value);
    transparent_crc(p_1243->g_1120.y, "p_1243->g_1120.y", print_hash_value);
    transparent_crc(p_1243->g_1120.z, "p_1243->g_1120.z", print_hash_value);
    transparent_crc(p_1243->g_1120.w, "p_1243->g_1120.w", print_hash_value);
    transparent_crc(p_1243->g_1137.x, "p_1243->g_1137.x", print_hash_value);
    transparent_crc(p_1243->g_1137.y, "p_1243->g_1137.y", print_hash_value);
    transparent_crc(p_1243->g_1170.x, "p_1243->g_1170.x", print_hash_value);
    transparent_crc(p_1243->g_1170.y, "p_1243->g_1170.y", print_hash_value);
    transparent_crc(p_1243->g_1170.z, "p_1243->g_1170.z", print_hash_value);
    transparent_crc(p_1243->g_1170.w, "p_1243->g_1170.w", print_hash_value);
    transparent_crc(p_1243->g_1171.s0, "p_1243->g_1171.s0", print_hash_value);
    transparent_crc(p_1243->g_1171.s1, "p_1243->g_1171.s1", print_hash_value);
    transparent_crc(p_1243->g_1171.s2, "p_1243->g_1171.s2", print_hash_value);
    transparent_crc(p_1243->g_1171.s3, "p_1243->g_1171.s3", print_hash_value);
    transparent_crc(p_1243->g_1171.s4, "p_1243->g_1171.s4", print_hash_value);
    transparent_crc(p_1243->g_1171.s5, "p_1243->g_1171.s5", print_hash_value);
    transparent_crc(p_1243->g_1171.s6, "p_1243->g_1171.s6", print_hash_value);
    transparent_crc(p_1243->g_1171.s7, "p_1243->g_1171.s7", print_hash_value);
    transparent_crc(p_1243->g_1172.x, "p_1243->g_1172.x", print_hash_value);
    transparent_crc(p_1243->g_1172.y, "p_1243->g_1172.y", print_hash_value);
    transparent_crc(p_1243->g_1172.z, "p_1243->g_1172.z", print_hash_value);
    transparent_crc(p_1243->g_1172.w, "p_1243->g_1172.w", print_hash_value);
    transparent_crc(p_1243->g_1173.x, "p_1243->g_1173.x", print_hash_value);
    transparent_crc(p_1243->g_1173.y, "p_1243->g_1173.y", print_hash_value);
    transparent_crc(p_1243->g_1173.z, "p_1243->g_1173.z", print_hash_value);
    transparent_crc(p_1243->g_1173.w, "p_1243->g_1173.w", print_hash_value);
    transparent_crc(p_1243->g_1174.s0, "p_1243->g_1174.s0", print_hash_value);
    transparent_crc(p_1243->g_1174.s1, "p_1243->g_1174.s1", print_hash_value);
    transparent_crc(p_1243->g_1174.s2, "p_1243->g_1174.s2", print_hash_value);
    transparent_crc(p_1243->g_1174.s3, "p_1243->g_1174.s3", print_hash_value);
    transparent_crc(p_1243->g_1174.s4, "p_1243->g_1174.s4", print_hash_value);
    transparent_crc(p_1243->g_1174.s5, "p_1243->g_1174.s5", print_hash_value);
    transparent_crc(p_1243->g_1174.s6, "p_1243->g_1174.s6", print_hash_value);
    transparent_crc(p_1243->g_1174.s7, "p_1243->g_1174.s7", print_hash_value);
    transparent_crc(p_1243->g_1215.s0, "p_1243->g_1215.s0", print_hash_value);
    transparent_crc(p_1243->g_1215.s1, "p_1243->g_1215.s1", print_hash_value);
    transparent_crc(p_1243->g_1215.s2, "p_1243->g_1215.s2", print_hash_value);
    transparent_crc(p_1243->g_1215.s3, "p_1243->g_1215.s3", print_hash_value);
    transparent_crc(p_1243->g_1215.s4, "p_1243->g_1215.s4", print_hash_value);
    transparent_crc(p_1243->g_1215.s5, "p_1243->g_1215.s5", print_hash_value);
    transparent_crc(p_1243->g_1215.s6, "p_1243->g_1215.s6", print_hash_value);
    transparent_crc(p_1243->g_1215.s7, "p_1243->g_1215.s7", print_hash_value);
    transparent_crc(p_1243->g_1215.s8, "p_1243->g_1215.s8", print_hash_value);
    transparent_crc(p_1243->g_1215.s9, "p_1243->g_1215.s9", print_hash_value);
    transparent_crc(p_1243->g_1215.sa, "p_1243->g_1215.sa", print_hash_value);
    transparent_crc(p_1243->g_1215.sb, "p_1243->g_1215.sb", print_hash_value);
    transparent_crc(p_1243->g_1215.sc, "p_1243->g_1215.sc", print_hash_value);
    transparent_crc(p_1243->g_1215.sd, "p_1243->g_1215.sd", print_hash_value);
    transparent_crc(p_1243->g_1215.se, "p_1243->g_1215.se", print_hash_value);
    transparent_crc(p_1243->g_1215.sf, "p_1243->g_1215.sf", print_hash_value);
    transparent_crc(p_1243->g_1216.x, "p_1243->g_1216.x", print_hash_value);
    transparent_crc(p_1243->g_1216.y, "p_1243->g_1216.y", print_hash_value);
    transparent_crc(p_1243->g_1216.z, "p_1243->g_1216.z", print_hash_value);
    transparent_crc(p_1243->g_1216.w, "p_1243->g_1216.w", print_hash_value);
    transparent_crc(p_1243->g_1234, "p_1243->g_1234", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1243->g_1236[i], "p_1243->g_1236[i]", print_hash_value);

    }
    transparent_crc(p_1243->v_collective, "p_1243->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 72; i++)
            transparent_crc(p_1243->g_special_values[i + 72 * get_linear_group_id()], "p_1243->g_special_values[i + 72 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 72; i++)
            transparent_crc(p_1243->l_special_values[i], "p_1243->l_special_values[i]", print_hash_value);
    transparent_crc(p_1243->l_comm_values[get_linear_local_id()], "p_1243->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1243->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()], "p_1243->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
