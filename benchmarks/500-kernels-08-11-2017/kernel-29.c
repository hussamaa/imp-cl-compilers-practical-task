// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,98,2 -l 1,98,2
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
{17,153,95,195,7,1,31,111,187,181,5,77,120,82,65,157,170,56,90,113,165,141,137,6,121,50,97,116,10,175,163,43,101,104,28,192,67,176,9,64,98,69,183,143,129,107,44,87,160,13,185,138,80,164,81,110,45,12,96,40,115,117,91,54,171,179,151,122,189,58,63,22,59,158,126,71,178,144,83,41,35,66,20,193,15,84,24,89,161,174,136,21,51,154,188,8,19,191,106,49,75,102,37,131,100,47,88,76,78,2,52,142,11,26,33,147,42,125,118,145,93,167,23,139,32,173,155,3,55,168,127,105,148,62,86,132,177,85,182,99,79,57,150,60,39,119,159,149,94,152,156,4,133,134,16,0,109,172,194,114,103,29,46,36,34,14,146,112,72,140,190,130,128,18,48,166,92,61,27,70,186,25,123,108,53,180,135,162,30,184,38,68,73,169,74,124}, // permutation 0
{190,89,48,106,138,68,64,164,40,91,165,169,2,29,66,88,148,157,104,151,166,184,124,193,134,87,177,154,30,125,50,185,85,58,18,49,176,188,33,181,144,32,175,142,17,26,171,130,45,92,99,97,118,102,78,135,111,147,62,195,133,108,163,145,67,10,82,20,54,4,107,70,83,34,156,41,152,39,52,120,84,23,13,117,94,123,93,24,25,86,1,110,162,129,8,57,72,137,69,103,9,122,46,101,141,15,158,155,149,16,189,59,180,160,7,61,113,131,53,0,161,168,81,55,74,115,114,153,192,22,65,71,76,75,112,105,90,96,44,128,43,194,100,80,12,31,19,182,143,27,186,79,109,116,38,42,21,5,159,119,140,36,146,35,136,173,56,3,11,37,121,174,14,73,139,170,6,127,191,183,172,178,63,98,77,47,126,28,95,150,132,51,179,187,60,167}, // permutation 1
{147,132,135,35,101,123,153,96,77,176,165,178,127,114,89,5,16,98,78,64,120,161,166,173,175,14,46,187,157,186,195,23,30,18,171,112,113,156,169,62,65,56,189,67,185,170,162,25,109,131,137,38,41,70,43,110,66,74,58,21,39,24,100,193,159,103,155,129,106,83,150,125,139,19,93,90,122,99,4,53,111,45,152,81,145,151,17,181,190,48,105,133,149,148,75,108,3,0,71,167,172,52,141,37,11,107,6,27,119,192,69,20,59,26,97,102,80,174,177,73,91,130,142,84,22,15,160,121,85,168,47,184,40,182,32,118,128,95,7,104,144,86,42,8,115,94,54,68,163,134,158,79,116,49,188,124,183,60,9,140,57,92,191,146,143,55,51,36,61,154,44,88,180,82,10,63,179,28,117,126,29,31,50,136,194,138,72,13,12,87,33,164,1,2,34,76}, // permutation 2
{164,146,187,92,47,70,75,27,105,84,195,1,129,110,22,6,190,109,54,116,143,49,80,183,104,180,96,68,62,82,138,156,7,111,24,188,149,192,140,11,131,76,44,55,14,168,123,18,175,107,130,162,177,36,147,13,48,45,182,126,122,152,72,34,35,108,19,0,154,65,77,39,2,42,3,121,57,170,174,155,99,185,120,167,89,102,113,95,98,46,69,32,5,186,137,101,97,139,134,178,118,100,136,173,135,8,60,148,153,37,56,145,15,159,128,163,169,184,114,87,191,90,133,150,33,50,30,119,93,81,40,9,194,112,94,28,124,64,181,115,125,161,17,142,83,132,103,160,29,151,61,86,51,59,141,165,20,157,4,31,66,172,74,144,58,127,85,63,88,176,73,53,91,10,26,23,189,78,38,16,106,79,71,21,67,117,166,12,43,179,41,171,158,25,193,52}, // permutation 3
{161,70,27,178,46,56,16,4,36,96,169,158,98,54,152,180,120,25,187,55,118,181,42,6,80,176,57,141,91,2,186,31,157,112,78,128,48,67,90,44,72,119,166,63,73,50,179,156,53,15,175,105,164,149,18,66,102,160,32,65,125,75,185,172,38,52,14,108,191,0,94,39,26,87,145,1,195,22,45,171,177,133,109,127,34,137,62,174,126,143,121,136,8,131,111,134,150,89,10,20,103,170,147,146,47,193,13,117,49,30,60,115,51,151,85,77,144,29,148,167,35,71,163,86,79,9,106,183,17,81,135,37,154,192,130,122,188,159,101,114,92,190,74,97,12,11,113,40,138,110,5,61,173,19,24,100,142,139,155,28,129,153,59,107,116,93,58,194,76,95,88,69,83,165,132,21,23,104,43,99,168,41,64,84,68,7,184,189,33,140,124,162,182,82,123,3}, // permutation 4
{190,116,69,63,140,7,150,195,107,89,19,38,156,68,139,2,32,65,143,66,61,56,82,30,16,131,100,39,172,137,55,84,154,189,70,161,141,85,134,46,96,13,152,185,179,67,43,121,97,81,14,106,92,29,123,181,109,133,74,62,52,50,9,79,175,99,112,77,22,33,37,12,41,23,110,171,15,117,21,149,4,20,98,75,26,44,126,157,54,45,155,27,53,57,142,158,176,114,78,95,193,191,167,128,187,118,93,3,127,113,51,186,73,173,135,91,147,24,184,6,94,119,178,138,103,169,60,148,174,42,182,58,183,88,125,5,31,136,163,8,102,115,164,86,1,188,25,111,10,168,153,35,17,0,145,177,105,159,28,87,101,71,165,129,160,146,166,151,36,90,170,48,34,40,11,124,64,49,76,122,18,120,59,132,83,72,108,162,194,192,144,180,130,47,104,80}, // permutation 5
{150,194,86,169,2,80,178,81,168,19,195,62,94,60,18,67,78,170,20,23,79,15,126,77,116,135,65,131,57,106,56,0,54,177,29,115,96,36,8,85,179,122,37,25,63,27,14,55,149,137,121,100,176,112,156,114,66,69,4,127,35,31,40,58,186,9,154,185,129,162,152,144,44,174,146,3,6,133,52,160,51,158,167,182,102,145,91,139,136,84,157,82,188,110,12,50,130,166,30,74,119,142,43,90,108,171,143,26,13,125,75,148,180,33,93,87,99,48,68,107,163,97,47,132,164,190,159,88,11,189,165,73,49,124,38,95,120,24,104,59,147,184,98,64,53,183,16,128,141,192,1,138,34,76,113,83,10,151,175,118,153,105,117,32,89,22,70,109,161,103,155,46,181,71,193,191,101,173,140,42,17,123,28,45,172,7,92,111,41,39,134,21,61,5,187,72}, // permutation 6
{52,190,77,164,195,31,154,152,1,19,47,187,151,70,67,120,192,22,74,127,6,115,40,9,179,100,101,135,178,104,60,37,185,43,26,0,75,96,49,166,193,78,125,119,53,132,112,182,29,131,130,63,62,123,191,87,98,51,181,121,163,68,159,160,173,72,83,23,177,102,5,42,136,58,99,170,110,88,113,153,12,33,18,11,54,24,105,165,69,57,90,183,66,64,157,167,28,171,21,176,161,93,106,194,128,8,48,143,86,65,111,162,41,107,25,148,45,109,139,145,118,95,79,39,155,146,71,116,184,84,20,108,56,14,80,174,81,186,172,35,149,138,140,94,114,169,147,36,59,141,55,117,10,15,27,168,91,4,124,92,16,76,13,44,133,180,2,144,17,137,156,158,34,7,150,188,82,85,38,126,3,189,73,30,129,103,50,32,61,142,89,97,122,46,134,175}, // permutation 7
{148,62,11,150,143,163,34,128,39,72,149,172,191,88,147,146,135,65,28,178,74,41,37,20,58,186,123,5,124,10,127,38,0,48,101,108,106,182,85,189,110,169,36,29,6,13,68,136,76,164,40,107,64,112,4,156,153,184,2,56,23,71,8,157,75,83,109,126,78,52,181,95,55,96,168,81,33,50,176,175,113,114,51,59,49,42,100,99,82,144,69,171,125,134,21,117,158,15,187,73,94,145,45,170,122,91,70,67,90,12,188,154,32,138,119,84,89,133,103,183,97,46,27,179,92,140,160,194,173,111,87,195,165,105,192,79,162,35,174,26,30,131,57,93,185,180,22,155,104,141,130,60,132,77,63,115,166,14,9,102,1,61,120,193,18,177,66,121,142,151,25,118,116,161,31,80,47,159,3,16,44,24,19,139,17,98,137,53,167,86,43,54,7,129,190,152}, // permutation 8
{18,2,158,100,32,54,83,3,102,104,94,82,127,186,184,36,147,1,72,35,48,109,96,129,16,20,174,78,6,63,137,177,87,165,122,47,164,55,103,0,146,151,19,51,90,45,57,169,128,77,161,110,12,46,99,89,27,183,172,185,134,98,107,95,97,116,181,24,193,139,71,86,43,10,115,79,15,37,76,150,68,156,141,11,117,180,56,106,167,75,149,182,108,26,22,120,85,191,21,194,178,14,188,171,136,173,148,73,153,5,80,31,152,93,176,133,67,138,155,88,49,91,170,40,166,17,4,157,195,81,179,143,135,39,175,74,114,58,60,61,53,30,41,105,190,42,33,29,113,84,8,132,131,38,144,154,62,168,65,119,23,66,142,34,50,160,126,123,145,125,92,13,121,163,64,25,9,111,130,162,124,140,28,187,59,192,44,52,7,69,189,159,70,112,101,118} // permutation 9
};

// Seed: 2243568874

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint32_t  f3;
};

union U1 {
   uint16_t  f0;
   int32_t  f1;
   int32_t  f2;
   volatile int16_t  f3;
};

struct S2 {
    struct S0 g_163;
    int8_t g_169[9];
    int64_t g_171;
    union U1 g_174;
    union U1 *g_176[9];
    union U1 **g_175;
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
int32_t  func_1(struct S2 * p_178);
union U1 ** func_159(uint64_t  p_160, struct S0  p_161, int64_t  p_162, struct S2 * p_178);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_178->g_comm_values p_178->g_163 p_178->g_169 p_178->g_175
 * writes: p_178->g_169 p_178->g_171 p_178->g_175
 */
int32_t  func_1(struct S2 * p_178)
{ /* block id: 4 */
    int32_t *l_167 = (void*)0;
    int32_t **l_166[6][8][3] = {{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}},{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}},{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}},{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}},{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}},{{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167},{&l_167,(void*)0,&l_167}}};
    int8_t *l_168 = &p_178->g_169[5];
    int64_t *l_170[4][5] = {{(void*)0,(void*)0,&p_178->g_171,&p_178->g_171,(void*)0},{(void*)0,(void*)0,&p_178->g_171,&p_178->g_171,(void*)0},{(void*)0,(void*)0,&p_178->g_171,&p_178->g_171,(void*)0},{(void*)0,(void*)0,&p_178->g_171,&p_178->g_171,(void*)0}};
    uint64_t l_177[6] = {0x0AE59654CD30D841L,0x0AE59654CD30D841L,0x0AE59654CD30D841L,0x0AE59654CD30D841L,0x0AE59654CD30D841L,0x0AE59654CD30D841L};
    int i, j, k;
    if ((atomic_inc(&p_178->l_atomic_input[8]) == 9))
    { /* block id: 6 */
        int32_t l_2[5];
        VECTOR(int32_t, 2) l_3 = (VECTOR(int32_t, 2))(0x0A233712L, 0x2DF1ADB2L);
        uint32_t l_4 = 0x81A82E77L;
        int32_t l_5 = 4L;
        int64_t l_6 = 0x71658A60016488A9L;
        int8_t l_7[2];
        int32_t l_8 = 0x225189D9L;
        int8_t l_9 = 0x4DL;
        VECTOR(int64_t, 16) l_10 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        uint16_t l_11 = 4UL;
        VECTOR(int32_t, 4) l_12 = (VECTOR(int32_t, 4))(0x23CB8E00L, (VECTOR(int32_t, 2))(0x23CB8E00L, 0x223A3407L), 0x223A3407L);
        int16_t l_13 = 3L;
        int16_t l_14 = 0L;
        uint32_t l_15 = 4294967295UL;
        uint32_t l_16[9][9] = {{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL},{1UL,0UL,9UL,0x2CF3E4C9L,0UL,0x2CF3E4C9L,9UL,0UL,1UL}};
        int32_t l_153 = 0x2CA0155AL;
        int64_t l_154 = 0x61FC9B2B409C0A55L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_2[i] = 0x49CEC79EL;
        for (i = 0; i < 2; i++)
            l_7[i] = 0x47L;
        l_5 = ((VECTOR(int32_t, 16))(1L, l_2[2], ((VECTOR(int32_t, 2))(l_3.yx)), 0L, 0L, 0x5658EDFEL, (-1L), 0L, 0x525D2D91L, 0x1CF13E13L, 0x49CD49FCL, (l_12.y = (((VECTOR(uint32_t, 2))(1UL, 1UL)).lo , ((((l_7[0] = (l_4 , (l_6 = l_5))) , (l_8 = 0xAE73L)) , (l_9 , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_10.s8b15b45beac3efc1)))).s6)) , l_11))), ((VECTOR(int32_t, 2))(0x43B03C3FL, 0x49E4A043L)), 0x45DB0FF8L)).s4;
        l_14 |= l_13;
        if ((l_16[0][2] = l_15))
        { /* block id: 14 */
            int32_t l_17 = 0x60F9AA2AL;
            for (l_17 = 1; (l_17 == (-28)); --l_17)
            { /* block id: 17 */
                int32_t l_20 = 0x7914A126L;
                int32_t *l_53[9];
                int32_t *l_54[5][8] = {{(void*)0,&l_20,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20},{(void*)0,&l_20,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20},{(void*)0,&l_20,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20},{(void*)0,&l_20,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20},{(void*)0,&l_20,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20}};
                int i, j;
                for (i = 0; i < 9; i++)
                    l_53[i] = &l_20;
                for (l_20 = 0; (l_20 <= (-12)); --l_20)
                { /* block id: 20 */
                    int32_t l_23 = 5L;
                    for (l_23 = 0; (l_23 < 20); l_23 = safe_add_func_int16_t_s_s(l_23, 6))
                    { /* block id: 23 */
                        int16_t l_26 = 0x75EBL;
                        uint32_t l_27 = 3UL;
                        union U1 l_28 = {0xEEDAL};/* VOLATILE GLOBAL l_28 */
                        union U1 l_29 = {0x0E28L};/* VOLATILE GLOBAL l_29 */
                        int32_t l_31 = 0x7F5175D1L;
                        int32_t *l_30 = &l_31;
                        int32_t *l_32 = &l_31;
                        int32_t *l_33 = &l_31;
                        int32_t *l_34 = (void*)0;
                        int64_t l_35 = 1L;
                        struct S0 l_36 = {0L,0x543B57941993E367L,1L,0UL};
                        int8_t l_37 = 5L;
                        int16_t l_38 = 0L;
                        int32_t l_39 = (-9L);
                        union U1 l_40 = {2UL};/* VOLATILE GLOBAL l_40 */
                        int32_t **l_41 = &l_34;
                        int32_t **l_42 = (void*)0;
                        l_34 = (l_33 = (l_32 = (((l_26 , l_27) , l_28) , (l_29 , l_30))));
                        l_42 = (((l_35 , l_36) , FAKE_DIVERGE(p_178->group_2_offset, get_group_id(2), 10)) , (l_37 , (l_41 = (l_38 , (l_39 , (l_40 , (void*)0))))));
                    }
                    for (l_23 = 8; (l_23 <= 13); ++l_23)
                    { /* block id: 32 */
                        int8_t l_45 = 0x18L;
                        uint8_t l_46 = 0x05L;
                        int8_t l_47 = (-6L);
                        uint16_t l_48 = 0xF470L;
                        int32_t l_49 = 0x51882859L;
                        VECTOR(int32_t, 2) l_50 = (VECTOR(int32_t, 2))(0x2B9CA246L, 0x5B79C141L);
                        VECTOR(int32_t, 4) l_51 = (VECTOR(int32_t, 4))(0x2D29C614L, (VECTOR(int32_t, 2))(0x2D29C614L, 0x740839CAL), 0x740839CAL);
                        uint32_t l_52 = 0x4295AD7CL;
                        int i;
                        l_49 &= ((l_47 &= (l_46 &= l_45)) , l_48);
                        l_12.z |= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_50.yxxy)).wwwyyzzzywxzyyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_51.wy)).yxxxxxyyxyxyyxyx))))).sb;
                        l_5 = l_52;
                    }
                }
                l_54[1][3] = l_53[6];
            }
        }
        else
        { /* block id: 42 */
            int32_t l_55[2];
            uint8_t l_152 = 4UL;
            int i;
            for (i = 0; i < 2; i++)
                l_55[i] = 0L;
            l_12.y &= (((VECTOR(int16_t, 2))(0x534BL, 0x0601L)).odd , 0x0CEC93CBL);
            for (l_55[1] = 0; (l_55[1] > 3); ++l_55[1])
            { /* block id: 46 */
                int32_t l_58 = (-1L);
                if ((l_58 , 0x3B1E24EBL))
                { /* block id: 47 */
                    VECTOR(int32_t, 8) l_59 = (VECTOR(int32_t, 8))(0x537137C2L, (VECTOR(int32_t, 4))(0x537137C2L, (VECTOR(int32_t, 2))(0x537137C2L, 0x6BA1441EL), 0x6BA1441EL), 0x6BA1441EL, 0x537137C2L, 0x6BA1441EL);
                    int16_t l_60[8][7];
                    uint8_t l_61 = 255UL;
                    union U1 l_65 = {0xC47FL};/* VOLATILE GLOBAL l_65 */
                    union U1 *l_64 = &l_65;
                    union U1 *l_66 = &l_65;
                    uint32_t l_67 = 0x092FBB16L;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_60[i][j] = 0L;
                    }
                    l_60[2][0] &= (l_3.y |= ((VECTOR(int32_t, 8))(l_59.s23342241)).s4);
                    --l_61;
                    l_66 = (l_64 = (void*)0);
                    if ((l_67 |= 0x0D6BFD67L))
                    { /* block id: 54 */
                        int32_t l_69 = (-1L);
                        int32_t *l_68 = &l_69;
                        struct S0 l_70[5] = {{1L,0UL,0L,0x9B690C29L},{1L,0UL,0L,0x9B690C29L},{1L,0UL,0L,0x9B690C29L},{1L,0UL,0L,0x9B690C29L},{1L,0UL,0L,0x9B690C29L}};
                        struct S0 l_71 = {1L,2UL,0x3035B408L,0xD3BBD115L};
                        int i;
                        l_68 = (void*)0;
                        l_71 = l_70[3];
                    }
                    else
                    { /* block id: 57 */
                        int32_t l_73 = (-1L);
                        int32_t *l_72 = &l_73;
                        int32_t *l_74 = &l_73;
                        int64_t l_75 = (-8L);
                        l_74 = l_72;
                        l_59.s6 = l_75;
                        (*l_72) |= (l_12.w = 0x3D427A37L);
                    }
                }
                else
                { /* block id: 63 */
                    int32_t l_76 = 0L;
                    uint16_t l_77 = 0x62DAL;
                    int32_t l_80 = (-1L);
                    int32_t *l_79 = &l_80;
                    int32_t **l_78 = &l_79;
                    l_77 ^= l_76;
                    l_78 = l_78;
                }
                for (l_58 = (-10); (l_58 >= (-21)); --l_58)
                { /* block id: 69 */
                    uint8_t l_83 = 0UL;
                    int32_t l_129[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int32_t *l_128 = &l_129[5];
                    int32_t *l_130 = &l_129[5];
                    uint32_t l_131 = 0xCF2B2128L;
                    int32_t *l_132 = &l_129[5];
                    VECTOR(int32_t, 4) l_133 = (VECTOR(int32_t, 4))(0x25D8BB33L, (VECTOR(int32_t, 2))(0x25D8BB33L, 0x4E538C8CL), 0x4E538C8CL);
                    int i;
                    if (l_83)
                    { /* block id: 70 */
                        int32_t l_84 = 0x22850EDCL;
                        VECTOR(uint8_t, 2) l_85 = (VECTOR(uint8_t, 2))(0xCFL, 0UL);
                        VECTOR(uint8_t, 16) l_86 = (VECTOR(uint8_t, 16))(0x43L, (VECTOR(uint8_t, 4))(0x43L, (VECTOR(uint8_t, 2))(0x43L, 0x2FL), 0x2FL), 0x2FL, 0x43L, 0x2FL, (VECTOR(uint8_t, 2))(0x43L, 0x2FL), (VECTOR(uint8_t, 2))(0x43L, 0x2FL), 0x43L, 0x2FL, 0x43L, 0x2FL);
                        VECTOR(uint8_t, 2) l_87 = (VECTOR(uint8_t, 2))(0x33L, 0x40L);
                        int32_t l_88 = 0x05945736L;
                        uint32_t l_89 = 0x3E2A50B6L;
                        uint32_t l_90 = 4294967288UL;
                        uint16_t l_91 = 1UL;
                        uint16_t l_92 = 0xF9E2L;
                        union U1 l_94 = {65535UL};/* VOLATILE GLOBAL l_94 */
                        union U1 *l_93 = &l_94;
                        union U1 *l_95 = &l_94;
                        union U1 *l_96 = &l_94;
                        union U1 *l_97 = &l_94;
                        union U1 *l_98 = (void*)0;
                        int16_t l_99 = 0x6B56L;
                        uint32_t l_100 = 5UL;
                        int32_t *l_103 = &l_84;
                        int32_t *l_104 = &l_84;
                        uint32_t l_105 = 1UL;
                        int i;
                        l_98 = (l_97 = ((l_83 = (((l_14 |= l_84) , 1L) , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_85.yx)))).xxxx, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_86.s251b)).xyyzwxxyxwxzwzwz)))).s831a)).lo))))).xxyx, ((VECTOR(uint8_t, 16))(l_87.yyyyxxyyyxyxxxxx)).sbd3c))).hi)).yyxyyxyy)), l_88, ((VECTOR(uint8_t, 2))(0xB7L, 1UL)), l_89, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x70L, 255UL)).yxyy)))).se)) , (l_96 = ((l_90 , (l_92 = (l_91 , ((VECTOR(int64_t, 2))(0x53B50BCEF8620699L, (-1L))).even))) , (l_95 = l_93)))));
                        ++l_100;
                        l_104 = l_103;
                        --l_105;
                    }
                    else
                    { /* block id: 81 */
                        int32_t l_108 = (-8L);
                        uint32_t l_109 = 0x97919FD8L;
                        int64_t l_110 = 0x697764D012404B1AL;
                        VECTOR(int32_t, 4) l_111 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 7L), 7L);
                        VECTOR(uint32_t, 2) l_112 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL);
                        VECTOR(uint32_t, 4) l_113 = (VECTOR(uint32_t, 4))(0x0115AE51L, (VECTOR(uint32_t, 2))(0x0115AE51L, 0UL), 0UL);
                        VECTOR(uint32_t, 8) l_114 = (VECTOR(uint32_t, 8))(0xA86D7796L, (VECTOR(uint32_t, 4))(0xA86D7796L, (VECTOR(uint32_t, 2))(0xA86D7796L, 0x1E60E50EL), 0x1E60E50EL), 0x1E60E50EL, 0xA86D7796L, 0x1E60E50EL);
                        VECTOR(uint32_t, 2) l_115 = (VECTOR(uint32_t, 2))(0x4FB37E2CL, 1UL);
                        VECTOR(uint32_t, 4) l_116 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967291UL), 4294967291UL);
                        VECTOR(int32_t, 16) l_117 = (VECTOR(int32_t, 16))(0x154B2775L, (VECTOR(int32_t, 4))(0x154B2775L, (VECTOR(int32_t, 2))(0x154B2775L, 4L), 4L), 4L, 0x154B2775L, 4L, (VECTOR(int32_t, 2))(0x154B2775L, 4L), (VECTOR(int32_t, 2))(0x154B2775L, 4L), 0x154B2775L, 4L, 0x154B2775L, 4L);
                        VECTOR(int32_t, 8) l_118 = (VECTOR(int32_t, 8))(0x3DCC97F0L, (VECTOR(int32_t, 4))(0x3DCC97F0L, (VECTOR(int32_t, 2))(0x3DCC97F0L, 0x512158B1L), 0x512158B1L), 0x512158B1L, 0x3DCC97F0L, 0x512158B1L);
                        VECTOR(int32_t, 8) l_119 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L));
                        VECTOR(int32_t, 4) l_120 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6833BBF8L), 0x6833BBF8L);
                        VECTOR(int32_t, 16) l_121 = (VECTOR(int32_t, 16))(0x351E36C2L, (VECTOR(int32_t, 4))(0x351E36C2L, (VECTOR(int32_t, 2))(0x351E36C2L, 0x30719000L), 0x30719000L), 0x30719000L, 0x351E36C2L, 0x30719000L, (VECTOR(int32_t, 2))(0x351E36C2L, 0x30719000L), (VECTOR(int32_t, 2))(0x351E36C2L, 0x30719000L), 0x351E36C2L, 0x30719000L, 0x351E36C2L, 0x30719000L);
                        struct S0 l_122 = {0x0CL,0x68C178462E04F2ECL,0L,4294967295UL};
                        int16_t l_123 = 0x66B3L;
                        uint32_t l_124 = 0x02917F3FL;
                        uint8_t l_125 = 250UL;
                        int64_t l_126 = 0x3CD2035C0580E9A8L;
                        int8_t l_127 = 0x55L;
                        int i;
                        l_127 = ((VECTOR(int32_t, 4))((l_108 , (l_126 = (l_5 = ((l_3.y = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x1A6D21B0L, 5L)).xxyx, (int32_t)l_109))).xxyzxzzw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x6A93CC3EL, 0x65C328A7L)).xyxxyxyx)), l_110, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-3L))).xxxy)))), (-7L), (-7L), 9L)).even, ((VECTOR(int32_t, 2))(0x7EE76F71L, 0x6CD3A2B2L)).xxyxxyyy))).s44, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6D192008L, 0x6E78AC6AL)), 0x375CE82FL, 0L)).xxyzzzxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_111.yywx)).zzxwzzxw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x06349BB0L)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(0x141FD73AL, (((VECTOR(uint32_t, 8))(0xEB2DE199L, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(l_112.yyyxyxxy)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_113.yz)), 0x9A36E4CBL, 0x9F508D56L)))).zxxwwxwx, (uint32_t)0xA2250544L, (uint32_t)(FAKE_DIVERGE(p_178->global_1_offset, get_global_id(1), 10) , 0x151E35FFL)))).lo)))).wxzyxwwx)).lo))), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_114.s6647)).wwwxxxzwxyyywxwx)).s5a, ((VECTOR(uint32_t, 4))(l_115.xyxy)).hi, ((VECTOR(uint32_t, 8))(l_116.wyzyywzw)).s24))), 4294967294UL)).s1 , (l_12.y = (l_118.s4 = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_117.s7bc2)).xwwzyzwzyzyyzzzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_118.s2731)).wxxxxwxy, ((VECTOR(int32_t, 16))(l_119.s1565525466255277)).odd, ((VECTOR(int32_t, 8))(0x2565C7EDL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_120.zwwwxxyxyzyzxwwz)).sdf3e)), 0x3195B5E5L, 0x45FBAF3FL, 0L))))))))).s6347735201161571, ((VECTOR(int32_t, 16))(l_121.s718b624cab1fc945))))).s2))), ((VECTOR(int32_t, 2))(0L, 0x0C6D9DE4L)), (l_122 , l_123), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x18482C93L, 0L, 1L, (-1L), (-1L), ((VECTOR(int32_t, 2))(0x2AD158D1L)), 0x03384632L)))).s27)), 0x3AA76F27L, l_124, ((VECTOR(int32_t, 4))(0x4EE14A35L)), ((VECTOR(int32_t, 2))(0x00559AC6L)), 0x561EF543L)).lo, ((VECTOR(int32_t, 8))(0x4ECD82EBL)), ((VECTOR(int32_t, 8))(0x1276630CL))))).s60, ((VECTOR(int32_t, 2))(0x50E43E29L))))), (-1L), (-1L), 0L, (-7L))).hi)).yxxwwyww))).s2, ((VECTOR(int32_t, 2))(0x42F93AC7L)), ((VECTOR(int32_t, 4))(1L)), 9L, ((VECTOR(int32_t, 8))(0L)))).even))).s03))).xxyyxyxx)).s54)).yxxyxyyxyyyxxxxx, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(1L))))).s4) , l_125)))), (-5L), (-9L), (-6L))).z;
                    }
                    l_130 = l_128;
                    l_132 = (l_131 , l_132);
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_133.yzxwxzxxxyzyxxzw)).hi)).s7747720542743460)).sa)
                    { /* block id: 91 */
                        VECTOR(int16_t, 8) l_134 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-4L)), (-4L)), (-4L), 9L, (-4L));
                        uint16_t l_135 = 0xD8F5L;
                        VECTOR(int16_t, 2) l_136 = (VECTOR(int16_t, 2))((-9L), 0x7343L);
                        int32_t l_137 = 0x23EF8ABBL;
                        VECTOR(int16_t, 8) l_138 = (VECTOR(int16_t, 8))(0x3DABL, (VECTOR(int16_t, 4))(0x3DABL, (VECTOR(int16_t, 2))(0x3DABL, 1L), 1L), 1L, 0x3DABL, 1L);
                        int32_t *l_139 = &l_137;
                        uint64_t l_140 = 0xA4D1CBB092B1045DL;
                        int32_t *l_141 = &l_137;
                        int32_t *l_142 = &l_137;
                        int i;
                        (*l_128) = (-4L);
                        l_130 = (((VECTOR(int16_t, 16))((-9L), 0L, (-1L), 0x22C9L, ((VECTOR(int16_t, 2))((-1L), 0x0285L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))(l_134.s34244052)).s7025202054210175, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(0x6EF5L, l_135, ((VECTOR(int16_t, 2))(0x2463L, 0x23B4L)), (-1L), 1L, 1L, 0x4C0BL)), ((VECTOR(int16_t, 16))(l_136.xyxxxyxyyxyxxxxy)).hi))).s3121261521660516))))).sf32c)).yxwxxxxwywzxxyxw))).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x66A2L, ((VECTOR(int16_t, 2))(0x2975L, 0x1DFCL)), 0x5CD2L)).odd)).yyyyyxxy))).s02)).even, l_137, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_138.s53)).xxyxyyyx)))).s3 , l_139);
                        l_130 = ((l_140 , 65535UL) , (l_142 = l_141));
                    }
                    else
                    { /* block id: 96 */
                        uint32_t l_143[10][8][3] = {{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}},{{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL},{0UL,0xFD4B6AB4L,8UL}}};
                        int16_t l_146[5][3][9] = {{{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)}},{{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)}},{{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)}},{{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)}},{{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)},{(-7L),0x33EFL,0x5D75L,0x0A07L,0x2FEEL,0x6A65L,0x01DFL,0x0D82L,(-7L)}}};
                        int16_t l_147 = (-1L);
                        int64_t l_148 = 6L;
                        uint16_t l_149 = 0x5B41L;
                        int i, j, k;
                        (*l_128) |= 0L;
                        --l_143[9][6][1];
                        l_147 = l_146[1][0][1];
                        --l_149;
                    }
                }
            }
            l_5 = l_152;
        }
        l_154 = l_153;
        unsigned int result = 0;
        int l_2_i0;
        for (l_2_i0 = 0; l_2_i0 < 5; l_2_i0++) {
            result += l_2[l_2_i0];
        }
        result += l_3.y;
        result += l_3.x;
        result += l_4;
        result += l_5;
        result += l_6;
        int l_7_i0;
        for (l_7_i0 = 0; l_7_i0 < 2; l_7_i0++) {
            result += l_7[l_7_i0];
        }
        result += l_8;
        result += l_9;
        result += l_10.sf;
        result += l_10.se;
        result += l_10.sd;
        result += l_10.sc;
        result += l_10.sb;
        result += l_10.sa;
        result += l_10.s9;
        result += l_10.s8;
        result += l_10.s7;
        result += l_10.s6;
        result += l_10.s5;
        result += l_10.s4;
        result += l_10.s3;
        result += l_10.s2;
        result += l_10.s1;
        result += l_10.s0;
        result += l_11;
        result += l_12.w;
        result += l_12.z;
        result += l_12.y;
        result += l_12.x;
        result += l_13;
        result += l_14;
        result += l_15;
        int l_16_i0, l_16_i1;
        for (l_16_i0 = 0; l_16_i0 < 9; l_16_i0++) {
            for (l_16_i1 = 0; l_16_i1 < 9; l_16_i1++) {
                result += l_16[l_16_i0][l_16_i1];
            }
        }
        result += l_153;
        result += l_154;
        atomic_add(&p_178->l_special_values[8], result);
    }
    else
    { /* block id: 107 */
        (1 + 1);
    }
    if ((atomic_inc(&p_178->g_atomic_input[70 * get_linear_group_id() + 7]) == 1))
    { /* block id: 111 */
        int32_t l_157 = 1L;
        int32_t *l_156 = &l_157;
        int32_t **l_155 = &l_156;
        int32_t **l_158 = &l_156;
        l_158 = l_155;
        unsigned int result = 0;
        result += l_157;
        atomic_add(&p_178->g_special_values[70 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 113 */
        (1 + 1);
    }
    p_178->g_175 = func_159(p_178->g_comm_values[p_178->tid], p_178->g_163, (p_178->g_163.f2 , (p_178->g_171 = (safe_sub_func_uint8_t_u_u(((void*)0 == l_166[1][6][1]), ((*l_168) |= 0x48L))))), p_178);
    return l_177[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_178->g_175
 * writes:
 */
union U1 ** func_159(uint64_t  p_160, struct S0  p_161, int64_t  p_162, struct S2 * p_178)
{ /* block id: 118 */
    union U1 *l_173 = &p_178->g_174;
    union U1 **l_172[4][8] = {{(void*)0,(void*)0,&l_173,(void*)0,&l_173,&l_173,&l_173,&l_173},{(void*)0,(void*)0,&l_173,(void*)0,&l_173,&l_173,&l_173,&l_173},{(void*)0,(void*)0,&l_173,(void*)0,&l_173,&l_173,&l_173,&l_173},{(void*)0,(void*)0,&l_173,(void*)0,&l_173,&l_173,&l_173,&l_173}};
    int i, j;
    return p_178->g_175;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[196];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 196; i++)
            l_comm_values[i] = 1;
    struct S2 c_179;
    struct S2* p_178 = &c_179;
    struct S2 c_180 = {
        {0x34L,1UL,-1L,0x8E4556B4L}, // p_178->g_163
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_178->g_169
        (-5L), // p_178->g_171
        {0UL}, // p_178->g_174
        {&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174,&p_178->g_174}, // p_178->g_176
        &p_178->g_176[6], // p_178->g_175
        0, // p_178->v_collective
        sequence_input[get_global_id(0)], // p_178->global_0_offset
        sequence_input[get_global_id(1)], // p_178->global_1_offset
        sequence_input[get_global_id(2)], // p_178->global_2_offset
        sequence_input[get_local_id(0)], // p_178->local_0_offset
        sequence_input[get_local_id(1)], // p_178->local_1_offset
        sequence_input[get_local_id(2)], // p_178->local_2_offset
        sequence_input[get_group_id(0)], // p_178->group_0_offset
        sequence_input[get_group_id(1)], // p_178->group_1_offset
        sequence_input[get_group_id(2)], // p_178->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 196)), permutations[0][get_linear_local_id()])), // p_178->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_179 = c_180;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_178);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_178->g_163.f0, "p_178->g_163.f0", print_hash_value);
    transparent_crc(p_178->g_163.f1, "p_178->g_163.f1", print_hash_value);
    transparent_crc(p_178->g_163.f2, "p_178->g_163.f2", print_hash_value);
    transparent_crc(p_178->g_163.f3, "p_178->g_163.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_178->g_169[i], "p_178->g_169[i]", print_hash_value);

    }
    transparent_crc(p_178->g_171, "p_178->g_171", print_hash_value);
    transparent_crc(p_178->g_174.f0, "p_178->g_174.f0", print_hash_value);
    transparent_crc(p_178->v_collective, "p_178->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 70; i++)
            transparent_crc(p_178->g_special_values[i + 70 * get_linear_group_id()], "p_178->g_special_values[i + 70 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 70; i++)
            transparent_crc(p_178->l_special_values[i], "p_178->l_special_values[i]", print_hash_value);
    transparent_crc(p_178->l_comm_values[get_linear_local_id()], "p_178->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_178->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()], "p_178->g_comm_values[get_linear_group_id() * 196 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
