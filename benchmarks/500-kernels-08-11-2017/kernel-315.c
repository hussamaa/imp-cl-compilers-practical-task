// --atomics 97 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 45,70,2 -l 1,35,2
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

__constant uint32_t permutations[10][70] = {
{24,21,22,16,44,14,47,6,60,62,58,45,10,39,7,57,38,40,0,31,46,63,20,8,51,17,56,28,42,37,59,32,9,23,34,66,29,69,48,27,33,18,12,68,2,13,65,36,55,50,49,3,61,52,41,11,30,54,35,4,5,1,53,67,26,15,19,64,43,25}, // permutation 0
{8,37,52,31,26,40,66,42,23,43,5,28,68,61,49,45,17,15,29,20,1,22,57,24,7,0,65,32,39,9,62,58,11,53,46,27,13,41,2,56,30,16,38,63,3,64,19,10,36,54,33,21,18,12,44,34,25,55,14,51,67,35,59,69,48,47,50,4,6,60}, // permutation 1
{29,68,42,67,66,25,54,41,34,55,40,5,1,39,60,61,65,18,16,27,35,0,20,30,24,58,11,37,64,56,36,63,21,53,3,47,22,23,69,14,12,10,45,48,44,33,13,7,59,19,57,6,50,8,17,32,49,31,9,15,46,2,43,26,62,4,51,38,28,52}, // permutation 2
{47,45,24,27,56,20,32,14,52,3,2,46,18,48,33,57,36,4,19,66,17,9,12,38,34,50,42,62,0,15,51,44,64,53,10,54,31,6,22,5,65,41,30,25,43,69,40,67,68,1,29,58,13,59,26,16,23,7,49,37,35,63,39,8,11,55,60,21,28,61}, // permutation 3
{40,16,10,69,11,63,20,34,53,66,1,4,46,65,2,67,0,48,45,37,61,14,38,55,8,27,3,17,24,39,6,33,54,41,56,26,9,57,44,43,5,50,49,60,18,47,59,12,21,28,31,15,30,68,19,13,23,52,36,29,25,22,58,32,62,7,64,51,35,42}, // permutation 4
{13,39,56,15,44,61,65,16,11,64,45,22,62,55,31,26,3,58,30,66,52,2,67,47,5,37,68,23,36,59,18,50,0,14,41,33,60,54,9,7,6,10,17,4,1,42,53,35,19,34,21,12,51,69,38,49,48,63,43,25,24,40,28,57,8,20,27,32,29,46}, // permutation 5
{17,27,69,50,64,29,0,16,25,53,42,30,28,22,35,52,37,51,44,66,40,54,34,60,26,38,48,24,21,14,36,19,18,49,2,33,62,5,63,47,8,39,1,23,46,31,41,56,13,15,9,4,6,32,68,55,59,7,12,58,10,43,65,67,20,61,45,3,11,57}, // permutation 6
{53,18,7,16,33,51,42,20,37,40,47,35,60,62,14,68,50,61,31,6,63,39,55,13,1,57,8,30,64,9,19,22,32,4,21,69,67,11,44,59,5,43,29,34,54,38,36,3,46,24,45,23,15,56,48,26,49,2,17,65,41,52,28,58,66,0,12,25,10,27}, // permutation 7
{16,0,44,62,68,9,41,46,17,66,1,28,10,25,57,23,38,24,67,56,20,40,45,15,32,52,43,31,48,18,58,55,6,34,3,37,63,36,5,12,11,39,8,13,61,2,53,54,42,19,21,14,47,22,59,69,49,64,7,35,51,29,27,60,30,33,65,4,50,26}, // permutation 8
{8,5,63,28,57,4,2,12,50,23,67,36,34,48,65,10,29,26,46,64,47,56,66,35,45,59,37,61,22,6,58,1,43,54,69,60,39,33,25,51,53,19,68,13,40,52,21,14,9,32,16,55,42,31,0,49,11,17,62,7,41,3,24,30,38,20,18,44,15,27} // permutation 9
};

// Seed: 4045453897

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_175;
    int8_t *g_191;
    int32_t g_201;
    volatile int32_t g_204;
    volatile int32_t g_205[6];
    int32_t **g_241;
    uint64_t g_274;
    int64_t g_276;
    VECTOR(uint8_t, 8) g_303;
    VECTOR(uint64_t, 8) g_313;
    VECTOR(uint16_t, 16) g_317;
    uint16_t g_326;
    int8_t g_344;
    uint16_t *g_361;
    VECTOR(int64_t, 8) g_373;
    VECTOR(int64_t, 8) g_374;
    VECTOR(int64_t, 2) g_375;
    VECTOR(int32_t, 2) g_380;
    VECTOR(int64_t, 2) g_382;
    VECTOR(int16_t, 16) g_388;
    VECTOR(int16_t, 8) g_389;
    VECTOR(int8_t, 2) g_390;
    int64_t g_415;
    int32_t g_417;
    int8_t g_472[7];
    uint32_t g_500;
    VECTOR(int8_t, 16) g_503;
    VECTOR(int32_t, 2) g_512;
    uint32_t g_515;
    uint32_t g_517[5];
    int32_t *g_520;
    int16_t g_527;
    VECTOR(int64_t, 4) g_589;
    volatile VECTOR(int16_t, 8) g_596;
    volatile VECTOR(int16_t, 4) g_598;
    volatile VECTOR(uint8_t, 8) g_606;
    int32_t *g_620;
    int32_t **g_619[3][2][10];
    VECTOR(int32_t, 4) g_647;
    volatile VECTOR(uint16_t, 16) g_751;
    VECTOR(uint32_t, 16) g_753;
    VECTOR(uint64_t, 8) g_766;
    VECTOR(int32_t, 2) g_768;
    int32_t ** volatile g_778[3];
    volatile int64_t * volatile g_861;
    volatile int64_t * volatile *g_860;
    int32_t *g_870[4];
    VECTOR(int64_t, 2) g_872;
    volatile VECTOR(int16_t, 2) g_917;
    VECTOR(int16_t, 16) g_919;
    uint8_t *g_986;
    uint64_t g_987;
    VECTOR(uint32_t, 2) g_1047;
    uint32_t g_1069;
    volatile VECTOR(int8_t, 2) g_1096;
    VECTOR(uint16_t, 4) g_1123;
    VECTOR(uint16_t, 4) g_1125;
    VECTOR(uint16_t, 8) g_1126;
    VECTOR(uint16_t, 2) g_1133;
    VECTOR(uint32_t, 2) g_1136;
    uint32_t g_1187;
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
int32_t  func_1(struct S0 * p_1189);
uint16_t  func_159(int32_t  p_160, int64_t  p_161, uint32_t  p_162, struct S0 * p_1189);
uint64_t  func_165(int32_t * p_166, int32_t * p_167, int32_t ** p_168, int64_t  p_169, int32_t * p_170, struct S0 * p_1189);
uint8_t  func_176(int16_t  p_177, uint32_t  p_178, struct S0 * p_1189);
uint16_t  func_180(uint64_t  p_181, int32_t  p_182, int8_t * p_183, int32_t * p_184, struct S0 * p_1189);
uint64_t  func_185(int8_t * p_186, int8_t  p_187, int8_t * p_188, uint32_t  p_189, int32_t ** p_190, struct S0 * p_1189);
uint32_t  func_196(int32_t  p_197, struct S0 * p_1189);
int64_t  func_229(int32_t ** p_230, struct S0 * p_1189);
int32_t ** func_231(uint32_t  p_232, int32_t  p_233, int32_t  p_234, struct S0 * p_1189);
int32_t * func_242(uint64_t  p_243, int64_t  p_244, uint16_t  p_245, struct S0 * p_1189);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1189->g_comm_values p_1189->g_191 p_1189->l_comm_values p_1189->g_201 p_1189->g_205 p_1189->g_241 p_1189->g_276 p_1189->g_303 p_1189->g_313 p_1189->g_317 p_1189->g_274 p_1189->g_326 p_1189->g_373 p_1189->g_374 p_1189->g_375 p_1189->g_380 p_1189->g_382 p_1189->g_388 p_1189->g_389 p_1189->g_390 p_1189->g_415 p_1189->g_472 p_1189->g_417 p_1189->g_503 p_1189->g_512 p_1189->g_515 p_1189->g_344 p_1189->g_520 p_1189->g_527 p_1189->g_589 p_1189->g_500 p_1189->g_596 p_1189->g_598 p_1189->g_606 p_1189->g_619 p_1189->g_647 p_1189->g_751 p_1189->g_753 p_1189->g_766 p_1189->g_768 p_1189->g_620 p_1189->g_361 p_1189->g_860 p_1189->g_870 p_1189->g_872 p_1189->g_517 p_1189->g_917 p_1189->g_919 p_1189->g_1096 p_1189->g_1123 p_1189->g_1125 p_1189->g_1126 p_1189->g_1133 p_1189->g_1136 p_1189->g_1187
 * writes: p_1189->g_175 p_1189->g_201 p_1189->g_241 p_1189->g_274 p_1189->g_276 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_417 p_1189->g_380 p_1189->g_500 p_1189->g_515 p_1189->g_517 p_1189->g_520 p_1189->g_344 p_1189->g_527 p_1189->g_303 p_1189->g_620 p_1189->g_472 p_1189->g_503 p_1189->g_415 p_1189->g_753 p_1189->g_919 p_1189->g_870 p_1189->g_1069
 */
int32_t  func_1(struct S0 * p_1189)
{ /* block id: 4 */
    int32_t l_173 = 1L;
    int8_t *l_174 = &p_1189->g_175;
    uint32_t *l_1143 = &p_1189->g_517[2];
    int32_t l_1144 = 0x70329FBCL;
    uint8_t l_1188 = 3UL;
    if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 96]) == 1))
    { /* block id: 6 */
        int32_t l_2 = 0x2D386CCEL;
        int8_t l_13 = (-1L);
        VECTOR(int32_t, 16) l_14 = (VECTOR(int32_t, 16))(0x07B35F19L, (VECTOR(int32_t, 4))(0x07B35F19L, (VECTOR(int32_t, 2))(0x07B35F19L, 0L), 0L), 0L, 0x07B35F19L, 0L, (VECTOR(int32_t, 2))(0x07B35F19L, 0L), (VECTOR(int32_t, 2))(0x07B35F19L, 0L), 0x07B35F19L, 0L, 0x07B35F19L, 0L);
        uint8_t l_15 = 246UL;
        int32_t l_16 = 0x3ED13222L;
        int i;
        for (l_2 = 29; (l_2 != 29); l_2 = safe_add_func_uint32_t_u_u(l_2, 6))
        { /* block id: 9 */
            int64_t l_5 = (-5L);
            int32_t l_6 = 0L;
            int64_t l_7 = (-4L);
            int64_t l_8[4][9] = {{1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L},{1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L},{1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L},{1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L,1L,0x1320F2D6273D5943L,1L}};
            int64_t l_9 = 0x28217C7128ABF8B2L;
            uint16_t l_10[8] = {0xEC35L,0xEC35L,0xEC35L,0xEC35L,0xEC35L,0xEC35L,0xEC35L,0xEC35L};
            int i, j;
            l_6 = l_5;
            l_6 |= ((((VECTOR(uint64_t, 4))(0x41FC9A57B5BF2D3FL, 1UL, 1UL, 0x4BCD76CE4A6F4440L)).y , l_7) , ((l_8[2][4] , (--l_10[3])) , 0x698DC509L));
        }
        l_15 = (l_13 , ((VECTOR(int32_t, 8))(l_14.s289aa508)).s0);
        if ((l_16 = 0x06C7A88FL))
        { /* block id: 16 */
            int32_t l_18[5] = {0x3BEB927EL,0x3BEB927EL,0x3BEB927EL,0x3BEB927EL,0x3BEB927EL};
            int32_t *l_17 = &l_18[3];
            int i;
            l_17 = l_17;
        }
        else
        { /* block id: 18 */
            uint32_t l_19 = 0x3CC9D6C8L;
            VECTOR(int64_t, 4) l_152 = (VECTOR(int64_t, 4))(0x4CAA5AC24F387BF1L, (VECTOR(int64_t, 2))(0x4CAA5AC24F387BF1L, 0x0929445B3C7D797CL), 0x0929445B3C7D797CL);
            VECTOR(int32_t, 8) l_153 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L));
            VECTOR(int32_t, 8) l_154 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
            VECTOR(int32_t, 4) l_155 = (VECTOR(int32_t, 4))(0x2BE1C1F1L, (VECTOR(int32_t, 2))(0x2BE1C1F1L, 0x393810D7L), 0x393810D7L);
            uint8_t l_156[9][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
            int i, j;
            --l_19;
            for (l_19 = 26; (l_19 <= 60); l_19 = safe_add_func_int64_t_s_s(l_19, 4))
            { /* block id: 22 */
                int32_t l_24 = 0x1AF2C67AL;
                int32_t *l_74 = &l_24;
                int32_t **l_73 = &l_74;
                for (l_24 = 0; (l_24 <= 11); l_24 = safe_add_func_int16_t_s_s(l_24, 4))
                { /* block id: 25 */
                    int32_t l_27 = 2L;
                    uint32_t l_65 = 9UL;
                    int32_t *l_66 = (void*)0;
                    int32_t *l_67 = &l_27;
                    for (l_27 = 26; (l_27 >= (-7)); l_27 = safe_sub_func_int16_t_s_s(l_27, 1))
                    { /* block id: 28 */
                        int16_t l_30 = 0x5602L;
                        int16_t l_31 = 1L;
                        int32_t l_34 = 0x249E864AL;
                        int32_t *l_33 = &l_34;
                        int32_t **l_32 = &l_33;
                        int32_t **l_35 = &l_33;
                        int32_t **l_36 = &l_33;
                        int64_t l_37 = 0x0C53483200138D7EL;
                        uint8_t l_38 = 0xC1L;
                        int32_t l_41 = (-10L);
                        int32_t l_42 = (-8L);
                        int16_t l_43 = 0x6E07L;
                        int64_t l_44 = 0x274B4FBF646D9140L;
                        int8_t l_45[5][3] = {{0x07L,0x69L,0x07L},{0x07L,0x69L,0x07L},{0x07L,0x69L,0x07L},{0x07L,0x69L,0x07L},{0x07L,0x69L,0x07L}};
                        int8_t l_46 = (-1L);
                        uint8_t l_47 = 1UL;
                        int8_t l_50 = 1L;
                        int32_t l_51 = 0x2B1506F5L;
                        int32_t *l_52 = (void*)0;
                        int32_t *l_53 = &l_34;
                        int i, j;
                        l_36 = ((l_31 = l_30) , (l_35 = l_32));
                        l_38++;
                        l_53 = ((++l_47) , (l_50 , (l_51 , l_52)));
                    }
                    for (l_27 = 0; (l_27 <= 0); l_27 = safe_add_func_uint64_t_u_u(l_27, 2))
                    { /* block id: 38 */
                        uint32_t l_56 = 0xB84A8A62L;
                        int32_t l_57 = 0x13C4D980L;
                        uint32_t l_58 = 4294967291UL;
                        int32_t l_62 = 5L;
                        int32_t *l_61 = &l_62;
                        int32_t *l_63 = (void*)0;
                        int32_t *l_64 = &l_62;
                        l_56 = 0x388BB1B5L;
                        --l_58;
                        l_63 = l_61;
                        l_61 = l_64;
                    }
                    l_66 = (l_65 , (l_67 = l_66));
                    for (l_65 = 0; (l_65 < 39); l_65 = safe_add_func_uint16_t_u_u(l_65, 4))
                    { /* block id: 48 */
                        int64_t l_70 = 0x76B071CE904CDE8BL;
                        int32_t l_71[9][1][3] = {{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}},{{0x3FCFF147L,(-1L),0x2B85AE34L}}};
                        int32_t l_72 = 0x63FF6366L;
                        int i, j, k;
                        l_71[4][0][1] = (l_70 |= 0x7FA2E55FL);
                        l_14.sc &= l_72;
                    }
                }
                l_73 = (void*)0;
            }
            for (l_19 = (-14); (l_19 == 1); ++l_19)
            { /* block id: 58 */
                int8_t l_77 = 0x74L;
                uint64_t l_78 = 0UL;
                int32_t *l_79 = (void*)0;
                int32_t l_81 = 9L;
                int32_t *l_80[10][10] = {{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81,&l_81}};
                VECTOR(int32_t, 16) l_82 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6BB8FA76L), 0x6BB8FA76L), 0x6BB8FA76L, 0L, 0x6BB8FA76L, (VECTOR(int32_t, 2))(0L, 0x6BB8FA76L), (VECTOR(int32_t, 2))(0L, 0x6BB8FA76L), 0L, 0x6BB8FA76L, 0L, 0x6BB8FA76L);
                uint32_t l_106 = 4294967286UL;
                VECTOR(int32_t, 16) l_107 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x65A292D2L), 0x65A292D2L), 0x65A292D2L, 0L, 0x65A292D2L, (VECTOR(int32_t, 2))(0L, 0x65A292D2L), (VECTOR(int32_t, 2))(0L, 0x65A292D2L), 0L, 0x65A292D2L, 0L, 0x65A292D2L);
                int64_t l_108[3];
                VECTOR(int32_t, 16) l_109 = (VECTOR(int32_t, 16))(0x4F75C71EL, (VECTOR(int32_t, 4))(0x4F75C71EL, (VECTOR(int32_t, 2))(0x4F75C71EL, 0x35E0E559L), 0x35E0E559L), 0x35E0E559L, 0x4F75C71EL, 0x35E0E559L, (VECTOR(int32_t, 2))(0x4F75C71EL, 0x35E0E559L), (VECTOR(int32_t, 2))(0x4F75C71EL, 0x35E0E559L), 0x4F75C71EL, 0x35E0E559L, 0x4F75C71EL, 0x35E0E559L);
                uint8_t l_110 = 248UL;
                int8_t l_111 = 0L;
                VECTOR(int32_t, 2) l_112 = (VECTOR(int32_t, 2))(0L, (-1L));
                int32_t l_113[3];
                uint16_t l_114[10] = {0x0D5CL,1UL,0x0D5CL,0x0D5CL,1UL,0x0D5CL,0x0D5CL,1UL,0x0D5CL,0x0D5CL};
                int16_t l_115 = 0x3CB0L;
                int16_t l_116 = 0x5899L;
                uint64_t l_117 = 0x879FC72062B2DEDBL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_108[i] = (-1L);
                for (i = 0; i < 3; i++)
                    l_113[i] = (-6L);
                l_78 = (l_77 , ((VECTOR(int32_t, 2))(0L, 0x3FD34DB6L)).hi);
                l_80[5][2] = l_79;
                if (((VECTOR(int32_t, 8))(l_82.s005bf03b)).s6)
                { /* block id: 61 */
                    uint8_t l_83 = 250UL;
                    int32_t l_86 = 0x29281337L;
                    VECTOR(int32_t, 2) l_87 = (VECTOR(int32_t, 2))(0x0F130343L, 0x1702F8FAL);
                    VECTOR(int32_t, 8) l_88 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 7L), 7L), 7L, (-5L), 7L);
                    VECTOR(int32_t, 2) l_89 = (VECTOR(int32_t, 2))(0x4CF3742CL, 0x41A9D29CL);
                    VECTOR(int32_t, 16) l_90 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 4L), 4L), 4L, 6L, 4L, (VECTOR(int32_t, 2))(6L, 4L), (VECTOR(int32_t, 2))(6L, 4L), 6L, 4L, 6L, 4L);
                    VECTOR(int32_t, 4) l_91 = (VECTOR(int32_t, 4))(0x48CC3AA3L, (VECTOR(int32_t, 2))(0x48CC3AA3L, 4L), 4L);
                    VECTOR(int32_t, 16) l_92 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 16) l_93 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 8) l_94 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L), 6L, 0L, 6L);
                    VECTOR(int32_t, 8) l_95 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    VECTOR(int32_t, 16) l_96 = (VECTOR(int32_t, 16))(0x35086CD1L, (VECTOR(int32_t, 4))(0x35086CD1L, (VECTOR(int32_t, 2))(0x35086CD1L, (-1L)), (-1L)), (-1L), 0x35086CD1L, (-1L), (VECTOR(int32_t, 2))(0x35086CD1L, (-1L)), (VECTOR(int32_t, 2))(0x35086CD1L, (-1L)), 0x35086CD1L, (-1L), 0x35086CD1L, (-1L));
                    VECTOR(int32_t, 4) l_97 = (VECTOR(int32_t, 4))(0x7C661B5BL, (VECTOR(int32_t, 2))(0x7C661B5BL, 0x424141E3L), 0x424141E3L);
                    VECTOR(int32_t, 4) l_98 = (VECTOR(int32_t, 4))(0x66949726L, (VECTOR(int32_t, 2))(0x66949726L, (-9L)), (-9L));
                    VECTOR(int32_t, 8) l_99 = (VECTOR(int32_t, 8))(0x62A80421L, (VECTOR(int32_t, 4))(0x62A80421L, (VECTOR(int32_t, 2))(0x62A80421L, 1L), 1L), 1L, 0x62A80421L, 1L);
                    VECTOR(int32_t, 2) l_100 = (VECTOR(int32_t, 2))(0x6E77E331L, 1L);
                    VECTOR(int32_t, 16) l_101 = (VECTOR(int32_t, 16))(0x6D8D5F6DL, (VECTOR(int32_t, 4))(0x6D8D5F6DL, (VECTOR(int32_t, 2))(0x6D8D5F6DL, 0x4238541CL), 0x4238541CL), 0x4238541CL, 0x6D8D5F6DL, 0x4238541CL, (VECTOR(int32_t, 2))(0x6D8D5F6DL, 0x4238541CL), (VECTOR(int32_t, 2))(0x6D8D5F6DL, 0x4238541CL), 0x6D8D5F6DL, 0x4238541CL, 0x6D8D5F6DL, 0x4238541CL);
                    uint32_t l_102 = 0UL;
                    uint32_t l_103 = 0UL;
                    int i;
                    l_83++;
                    l_103 &= (l_102 = (l_86 , ((VECTOR(int32_t, 16))(0x711966D8L, 0x7BB50BB1L, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x025FA2FCL, 0L)).yyyxyxxxxyyyyxyy)).saf, ((VECTOR(int32_t, 2))(l_87.xx))))).xyyxxxyy, ((VECTOR(int32_t, 2))(l_88.s34)).yxxyyyyy, ((VECTOR(int32_t, 16))(l_89.xxyyyxxyyyxxxyyx)).odd))).s2420712753307503, ((VECTOR(int32_t, 4))(l_90.s690e)).wyywzwxwyxyywwxx))).seb09))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(6L, 0x7766E099L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_91.zxxxwxxzxzxxzxxw)).sf4)).odd, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_92.s06c8)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(1L, 4L)).xyxx, ((VECTOR(int32_t, 16))(l_93.sd9a11d30d066b323)).s35dc, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(0x3CF54F23L, ((VECTOR(int32_t, 2))(l_94.s73)), 0x358279F8L)).wwzwwyyw, ((VECTOR(int32_t, 2))(l_95.s44)).yxxyxyxx))).hi))).yzyxwzzz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_96.sd8)).xyxxxyyxyyyyyxyx)).s7, 0x1B9DBF79L, 0x2C80CF28L, 0x6A83B75AL)).xwyxyyzy, ((VECTOR(int32_t, 16))(l_97.zzzzyyzxwxyywzyx)).odd))).odd))), 1L)).s62)), ((VECTOR(int32_t, 4))(l_98.yyzy)).y, 7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_99.s22)))), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_100.xxyyyxyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_101.s8ed9f2ed)).odd)).zwzzxywy))))).s10)), 0x30F790E2L)).s0));
                }
                else
                { /* block id: 65 */
                    int32_t l_104[10][8][3] = {{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}},{{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)},{0x66391751L,5L,(-9L)}}};
                    uint16_t l_105 = 1UL;
                    int i, j, k;
                    l_105 = l_104[5][2][2];
                }
                if ((l_117 ^= ((VECTOR(int32_t, 16))(l_106, 0x12875DDBL, 9L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_107.s3b9165633c59a757)).se7)).yyxx)), 1L, (l_108[1] , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_109.s6e)).yxyxyxyxyyyyyxxy, ((VECTOR(int32_t, 16))((l_16 = ((l_13 |= l_110) , l_111)), 0x48E8C813L, 0x6352912AL, ((VECTOR(int32_t, 4))(l_112.xyyx)).z, ((VECTOR(int32_t, 8))(0L, ((l_113[1] , FAKE_DIVERGE(p_1189->global_0_offset, get_global_id(0), 10)) , l_114[2]), 0x750615D4L, 0x01A31D27L, l_115, l_116, 6L, 1L)), ((VECTOR(int32_t, 2))((-8L))), 8L, 1L)), ((VECTOR(int32_t, 16))(0x29ED696CL))))).sb), 0L, ((VECTOR(int32_t, 4))(0x5E3861B4L)), (-5L), 1L)).s1))
                { /* block id: 71 */
                    int32_t l_118 = 0x362B2AF5L;
                    for (l_118 = 25; (l_118 != (-13)); l_118 = safe_sub_func_int8_t_s_s(l_118, 8))
                    { /* block id: 74 */
                        uint32_t l_121 = 1UL;
                        uint16_t l_122 = 0xED4DL;
                        uint32_t l_123 = 0UL;
                        int32_t l_124 = 0x58984F7DL;
                        int32_t l_127 = 0x5CC132FBL;
                        int16_t l_128 = 0L;
                        int64_t l_129 = 6L;
                        l_122 ^= l_121;
                        l_123 = 0x50763847L;
                        l_129 = ((l_127 = (--l_114[2])) , l_128);
                        l_79 = (void*)0;
                    }
                    for (l_118 = 0; (l_118 >= (-4)); l_118 = safe_sub_func_uint32_t_u_u(l_118, 5))
                    { /* block id: 84 */
                        int16_t l_132 = 0x4754L;
                        int16_t l_133 = 0x5E5FL;
                        int32_t l_134 = 0x493EC219L;
                        VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(0x1B36AA6FL, (VECTOR(int32_t, 4))(0x1B36AA6FL, (VECTOR(int32_t, 2))(0x1B36AA6FL, 0x3ACC00A5L), 0x3ACC00A5L), 0x3ACC00A5L, 0x1B36AA6FL, 0x3ACC00A5L);
                        int64_t l_136[9][9] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}};
                        int i, j;
                        l_134 = (l_133 &= ((l_113[0] = l_132) , 0x7F3EB3C1L));
                        l_136[8][2] = l_135.s7;
                        l_80[4][8] = (void*)0;
                    }
                }
                else
                { /* block id: 91 */
                    uint32_t l_137 = 4294967295UL;
                    int32_t l_139 = (-3L);
                    int32_t *l_138 = &l_139;
                    int16_t l_140 = 0x4C0BL;
                    uint8_t l_141 = 0xFBL;
                    int32_t *l_142 = &l_139;
                    int32_t l_143 = (-3L);
                    int8_t l_144 = 1L;
                    uint32_t l_145 = 4294967295UL;
                    l_138 = (l_137 , (void*)0);
                    l_141 = (l_140 , 0x3716F4F3L);
                    l_79 = l_142;
                    if (((l_143 , l_144) , l_145))
                    { /* block id: 95 */
                        int32_t l_146 = 0x2F6FDADEL;
                        uint16_t l_147 = 0x6833L;
                        int32_t *l_148 = &l_146;
                        l_80[6][3] = ((l_147 &= (l_146 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-3L), (-1L))), ((VECTOR(int64_t, 2))(0x1EB0B8A3AA6587CEL, (-1L))), 0x5B3F8E770A445FDDL, 0x1C7F1A52F76F327AL, 0x4723BD2C5A230DB6L, 0x73321FAC70611894L)).s4)) , l_148);
                    }
                    else
                    { /* block id: 99 */
                        uint16_t l_149 = 65535UL;
                        l_149++;
                    }
                }
            }
            l_155.w = ((((VECTOR(int64_t, 4))(l_152.wzzw)).z , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x4FCE9AB8L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_153.s22)), 0x3232EF97L, 0x26FC9A26L)), ((VECTOR(int32_t, 2))(0x25975BB4L, 0x5A4208AAL)).odd, ((VECTOR(int32_t, 4))(l_154.s4420)), 0x4D1430F7L, ((VECTOR(int32_t, 2))((-1L), 0x46A7A22FL)), 7L, 0x3D635B3FL, 0x53AD90D2L)).sfa)).xyxxyyxx)), ((VECTOR(int32_t, 16))(l_155.ywyywyzyxzzywwyw)).lo))))).s4) , l_156[5][0]);
        }
        unsigned int result = 0;
        result += l_2;
        result += l_13;
        result += l_14.sf;
        result += l_14.se;
        result += l_14.sd;
        result += l_14.sc;
        result += l_14.sb;
        result += l_14.sa;
        result += l_14.s9;
        result += l_14.s8;
        result += l_14.s7;
        result += l_14.s6;
        result += l_14.s5;
        result += l_14.s4;
        result += l_14.s3;
        result += l_14.s2;
        result += l_14.s1;
        result += l_14.s0;
        result += l_15;
        result += l_16;
        atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 96], result);
    }
    else
    { /* block id: 106 */
        (1 + 1);
    }
    if ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(0x36F8107E6F1DCE19L, 0x3C87BEFE2CA5F56CL)).lo, (func_159(p_1189->g_comm_values[p_1189->tid], (((safe_mul_func_uint16_t_u_u(0xC5A3L, GROUP_DIVERGE(1, 1))) && (((*l_1143) = (p_1189->g_comm_values[p_1189->tid] != func_165(((safe_lshift_func_int8_t_s_u(((*l_174) = l_173), func_176(l_173, l_173, p_1189))) , p_1189->g_870[2]), &l_173, &p_1189->g_870[2], p_1189->g_768.y, &l_173, p_1189))) >= l_1144)) , p_1189->g_388.s8), p_1189->g_1136.x, p_1189) , p_1189->g_388.s7))))
    { /* block id: 536 */
        if ((atomic_inc(&p_1189->l_atomic_input[79]) == 8))
        { /* block id: 538 */
            uint16_t l_1147 = 65535UL;
            if (l_1147)
            { /* block id: 539 */
                uint64_t l_1148 = 0xFC3F7EAF58BB6C3DL;
                int16_t l_1149 = 0x44B1L;
                l_1149 ^= (l_1148 = 3L);
            }
            else
            { /* block id: 542 */
                int32_t l_1150 = (-1L);
                for (l_1150 = 25; (l_1150 != (-13)); l_1150 = safe_sub_func_int32_t_s_s(l_1150, 2))
                { /* block id: 545 */
                    int32_t l_1154 = (-3L);
                    int32_t *l_1153 = &l_1154;
                    int32_t *l_1155[10][7] = {{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,(void*)0,&l_1154,&l_1154,&l_1154,&l_1154,&l_1154}};
                    int32_t *l_1156[4];
                    int8_t l_1157 = 0x15L;
                    VECTOR(int32_t, 2) l_1158 = (VECTOR(int32_t, 2))(0x24BE9FE9L, 0x0CB4DD08L);
                    VECTOR(int32_t, 4) l_1159 = (VECTOR(int32_t, 4))(0x60B55062L, (VECTOR(int32_t, 2))(0x60B55062L, (-1L)), (-1L));
                    int32_t l_1160 = 0x001FB549L;
                    int32_t l_1161 = 0L;
                    int64_t l_1162 = 0x19F1990D633651F9L;
                    int32_t l_1163 = 0x6F1B3E31L;
                    uint16_t l_1164 = 0x441FL;
                    VECTOR(int32_t, 4) l_1165 = (VECTOR(int32_t, 4))(0x5E171962L, (VECTOR(int32_t, 2))(0x5E171962L, 0x16916F6AL), 0x16916F6AL);
                    uint16_t l_1166 = 65534UL;
                    uint8_t l_1167 = 0xA8L;
                    uint16_t l_1168[10] = {0x240DL,0xDD7AL,0UL,0xDD7AL,0x240DL,0x240DL,0xDD7AL,0UL,0xDD7AL,0x240DL};
                    int16_t l_1169 = 0x0C42L;
                    uint8_t l_1170 = 3UL;
                    uint16_t l_1171 = 0x7913L;
                    uint32_t l_1172 = 4294967294UL;
                    int32_t l_1173 = (-1L);
                    int64_t l_1174 = 1L;
                    uint32_t l_1175 = 0x1C01AFDFL;
                    uint8_t l_1176 = 0xC3L;
                    uint8_t l_1177 = 255UL;
                    uint64_t l_1178 = 0xD5287B6F0B2AF474L;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1156[i] = (void*)0;
                    l_1156[2] = (l_1155[2][0] = l_1153);
                    if (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x46D146E9L, (l_1157 , 0x79FCB96AL), (-1L), 8L)).odd)).yxyyxxyyxxyxyyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_1158.yyyx)).yxzyxywxyywyyxxw, ((VECTOR(int32_t, 4))(0L, (((VECTOR(int32_t, 8))(l_1159.xxxyxyzx)).s6 , (l_1160 , ((l_1161 , ((l_1164 = (l_1162 , (l_1163 = 8L))) , (l_1176 = (l_1175 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x14965270L, ((VECTOR(int32_t, 2))(l_1165.ww)), (-4L))), 0x43C47CD0L, l_1166, (l_1173 = ((l_1168[2] = l_1167) , (l_1172 = ((l_1169 , l_1170) , l_1171)))), 0x2DC4442BL, 0L, ((VECTOR(int32_t, 2))(0x6CB39553L)), (-2L), (-2L), ((VECTOR(int32_t, 2))((-1L))), 0x523D5CB3L)).s261d, ((VECTOR(int32_t, 4))(6L)), ((VECTOR(int32_t, 4))(0x67E48DA7L))))), l_1174, 0x49E88E40L, 0x602D5F87L, 0x37E9DC85L, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 2))(0x1372F642L)), 0L)).s1403)))).w)))) , l_1177))), 1L, (-1L))).wyyzywywywzzzyzz))).s3b, (int32_t)l_1178))).yxxxyxxy)).s1057706471551745))))).s597c)))))), ((VECTOR(int32_t, 4))(0x30AC276DL))))).w)
                    { /* block id: 555 */
                        int32_t l_1180 = 0x0D97A6DBL;
                        int32_t *l_1179[3][9][5] = {{{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180}},{{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180}},{{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180},{&l_1180,&l_1180,(void*)0,&l_1180,&l_1180}}};
                        int32_t *l_1181 = &l_1180;
                        int32_t *l_1182 = &l_1180;
                        int i, j, k;
                        l_1179[2][4][0] = (void*)0;
                        l_1156[2] = l_1181;
                        l_1156[0] = (l_1155[6][2] = l_1182);
                    }
                    else
                    { /* block id: 560 */
                        int32_t l_1183 = 0x5FFB555CL;
                        uint8_t l_1184 = 0x2AL;
                        uint32_t l_1185 = 0x051CB78DL;
                        uint64_t l_1186[9][4] = {{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL},{0x3A6BCFBFDFA7FCBAL,0x3A6BCFBFDFA7FCBAL,0xFC06968610F39DC6L,18446744073709551607UL}};
                        int i, j;
                        l_1184 ^= (l_1183 , ((*l_1153) = 0L));
                        l_1186[1][3] |= l_1185;
                    }
                }
            }
            unsigned int result = 0;
            result += l_1147;
            atomic_add(&p_1189->l_special_values[79], result);
        }
        else
        { /* block id: 567 */
            (1 + 1);
        }
    }
    else
    { /* block id: 570 */
        l_173 = p_1189->g_1187;
    }
    return l_1188;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_159(int32_t  p_160, int64_t  p_161, uint32_t  p_162, struct S0 * p_1189)
{ /* block id: 533 */
    uint64_t **l_1145 = (void*)0;
    uint64_t ***l_1146 = &l_1145;
    (*l_1146) = l_1145;
    return p_162;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_389 p_1189->g_872 p_1189->g_415 p_1189->l_comm_values p_1189->g_606 p_1189->g_417 p_1189->g_205 p_1189->g_303 p_1189->g_870 p_1189->g_517 p_1189->g_917 p_1189->g_919 p_1189->g_500 p_1189->g_753 p_1189->g_503 p_1189->g_274 p_1189->g_472 p_1189->g_751 p_1189->g_373 p_1189->g_201 p_1189->g_313 p_1189->g_326 p_1189->g_1096 p_1189->g_276 p_1189->g_317 p_1189->g_380 p_1189->g_647 p_1189->g_1123 p_1189->g_1125 p_1189->g_1126 p_1189->g_1133 p_1189->g_1136
 * writes: p_1189->g_415 p_1189->g_472 p_1189->g_517 p_1189->g_500 p_1189->g_753 p_1189->g_417 p_1189->g_919 p_1189->g_870 p_1189->g_201 p_1189->g_527 p_1189->g_1069 p_1189->g_326
 */
uint64_t  func_165(int32_t * p_166, int32_t * p_167, int32_t ** p_168, int64_t  p_169, int32_t * p_170, struct S0 * p_1189)
{ /* block id: 388 */
    uint32_t *l_871 = &p_1189->g_517[3];
    int64_t *l_873 = (void*)0;
    int64_t *l_874 = &p_1189->g_415;
    int32_t l_875 = 0x1E600A55L;
    int32_t ***l_878 = &p_1189->g_241;
    int8_t *l_887 = (void*)0;
    int64_t l_888 = 8L;
    uint64_t l_889 = 18446744073709551610UL;
    int8_t *l_890 = &p_1189->g_472[6];
    VECTOR(int32_t, 4) l_898 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-4L)), (-4L));
    VECTOR(int16_t, 8) l_918 = (VECTOR(int16_t, 8))(0x6207L, (VECTOR(int16_t, 4))(0x6207L, (VECTOR(int16_t, 2))(0x6207L, 0x7AE2L), 0x7AE2L), 0x7AE2L, 0x6207L, 0x7AE2L);
    uint16_t **l_926 = (void*)0;
    uint16_t ***l_925 = &l_926;
    VECTOR(int32_t, 16) l_1003 = (VECTOR(int32_t, 16))(0x7E3CF883L, (VECTOR(int32_t, 4))(0x7E3CF883L, (VECTOR(int32_t, 2))(0x7E3CF883L, 0x52E4DDECL), 0x52E4DDECL), 0x52E4DDECL, 0x7E3CF883L, 0x52E4DDECL, (VECTOR(int32_t, 2))(0x7E3CF883L, 0x52E4DDECL), (VECTOR(int32_t, 2))(0x7E3CF883L, 0x52E4DDECL), 0x7E3CF883L, 0x52E4DDECL, 0x7E3CF883L, 0x52E4DDECL);
    int64_t *l_1009 = (void*)0;
    VECTOR(uint64_t, 4) l_1046 = (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551611UL), 18446744073709551611UL);
    uint16_t l_1095 = 0xF60EL;
    int16_t l_1108[2][1][10];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
                l_1108[i][j][k] = 0x2F15L;
        }
    }
    if (((((*l_874) |= ((VECTOR(int64_t, 16))((p_1189->g_389.s3 <= ((void*)0 != l_871)), ((VECTOR(int64_t, 2))(0x5DB4BEC3BE55E3EAL, (-1L))), (-7L), 0x30963D00885F4918L, 0x28697630543C43E9L, 9L, ((VECTOR(int64_t, 8))(p_1189->g_872.yxxyxxyx)), 0x323ACCD67A80FDF0L)).s7) || ((l_875 , ((VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551612UL)).even) , ((safe_rshift_func_int16_t_s_s((((p_1189->g_389.s2 || ((void*)0 == l_878)) != ((((safe_sub_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((*l_890) = ((safe_lshift_func_int8_t_s_s((l_888 = 1L), 5)) >= l_889)), l_889)) != p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))]), l_889)) , p_169), p_169)) <= (*p_170)) , l_878) == l_878)) > l_875), p_1189->g_606.s3)) < GROUP_DIVERGE(0, 1)))) >= 18446744073709551615UL))
    { /* block id: 392 */
        int32_t l_891[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_891[i][j] = 0x34F41CCDL;
        }
        (*p_170) = l_891[1][0];
    }
    else
    { /* block id: 394 */
        uint32_t l_903 = 0xCCBFA6B9L;
        VECTOR(int32_t, 8) l_920 = (VECTOR(int32_t, 8))(0x6F478EA1L, (VECTOR(int32_t, 4))(0x6F478EA1L, (VECTOR(int32_t, 2))(0x6F478EA1L, 0x2AEEA57BL), 0x2AEEA57BL), 0x2AEEA57BL, 0x6F478EA1L, 0x2AEEA57BL);
        int16_t *l_942 = (void*)0;
        int32_t *l_943 = (void*)0;
        int16_t l_946 = (-1L);
        VECTOR(int32_t, 16) l_997 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7AA5B7D1L), 0x7AA5B7D1L), 0x7AA5B7D1L, 1L, 0x7AA5B7D1L, (VECTOR(int32_t, 2))(1L, 0x7AA5B7D1L), (VECTOR(int32_t, 2))(1L, 0x7AA5B7D1L), 1L, 0x7AA5B7D1L, 1L, 0x7AA5B7D1L);
        VECTOR(uint8_t, 8) l_1034 = (VECTOR(uint8_t, 8))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 0x5CL), 0x5CL), 0x5CL, 0x81L, 0x5CL);
        int64_t *l_1056[1];
        uint32_t *l_1068 = &p_1189->g_1069;
        int i;
        for (i = 0; i < 1; i++)
            l_1056[i] = &p_1189->g_276;
        if ((atomic_inc(&p_1189->l_atomic_input[48]) == 1))
        { /* block id: 396 */
            int8_t l_892 = (-2L);
            uint32_t l_893 = 3UL;
            int32_t l_897 = 1L;
            int32_t *l_896 = &l_897;
            l_893++;
            l_896 = (void*)0;
            unsigned int result = 0;
            result += l_892;
            result += l_893;
            result += l_897;
            atomic_add(&p_1189->l_special_values[48], result);
        }
        else
        { /* block id: 399 */
            (1 + 1);
        }
        atomic_min(&p_1189->l_atomic_reduction[0], ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_898.xwyzxwzywyyzzzwy)), (int32_t)(*p_170)))))).s8 + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1189->v_collective += p_1189->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if ((p_1189->g_417 | (p_1189->g_205[0] , ((safe_mod_func_uint16_t_u_u(p_169, p_169)) ^ (safe_mul_func_int16_t_s_s(((void*)0 != &p_1189->g_326), ((((*l_874) = l_903) >= 0L) && GROUP_DIVERGE(0, 1))))))))
        { /* block id: 404 */
            return p_1189->g_303.s2;
        }
        else
        { /* block id: 406 */
            VECTOR(uint8_t, 8) l_908 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x66L), 0x66L), 0x66L, 255UL, 0x66L);
            uint32_t *l_923[1];
            int32_t l_924 = (-1L);
            VECTOR(int32_t, 16) l_929 = (VECTOR(int32_t, 16))(0x4A6BA636L, (VECTOR(int32_t, 4))(0x4A6BA636L, (VECTOR(int32_t, 2))(0x4A6BA636L, (-4L)), (-4L)), (-4L), 0x4A6BA636L, (-4L), (VECTOR(int32_t, 2))(0x4A6BA636L, (-4L)), (VECTOR(int32_t, 2))(0x4A6BA636L, (-4L)), 0x4A6BA636L, (-4L), 0x4A6BA636L, (-4L));
            uint8_t *l_990 = (void*)0;
            int32_t l_1010[7][1][6] = {{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}},{{1L,1L,0x605D2B19L,0x27286AEAL,0x605D2B19L,1L}}};
            int8_t *l_1045 = &p_1189->g_344;
            int32_t *l_1062 = &l_1010[5][0][2];
            int32_t *l_1063 = (void*)0;
            int32_t *l_1064[9][5][5] = {{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}},{{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924},{(void*)0,(void*)0,&l_924,(void*)0,&l_924}}};
            uint8_t l_1065 = 0xE4L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_923[i] = &p_1189->g_515;
            l_920.s7 = (0L > (((((*l_890) &= (((*p_168) != (void*)0) | (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(249UL, 0xECL)).yxxxyxyxyxxxyxxx, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(l_908.s73)), ((VECTOR(uint8_t, 16))(0x2FL, ((VECTOR(uint8_t, 8))(0UL, 255UL, (safe_div_func_int8_t_s_s((((*l_871) ^= 4294967295UL) ^ (l_924 = ((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_903, (safe_add_func_uint8_t_u_u(((void*)0 != &p_168), ((p_169 != ((*p_170) = (((+((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(p_1189->g_917.xx)).yxyy, ((VECTOR(int16_t, 2))(l_918.s04)).xyyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1189->g_919.s8f)))).yxyy))).y) != (((((VECTOR(int32_t, 8))(l_920.s70455776)).s1 >= (p_1189->g_753.s5 |= (p_1189->g_500 &= ((((safe_sub_func_int64_t_s_s((1L != 0x1B0CL), 0x623519FE442F2E68L)) < 0xD9447A1205A31237L) | 0xB7L) < (-1L))))) & 0x55E9EE8BL) > p_169)) != l_920.s6))) | p_1189->g_503.s3))))), p_1189->g_274)) || p_169))), p_169)), 0x47L, 1UL, 0UL, 1UL, 0x2FL)), ((VECTOR(uint8_t, 2))(0x19L)), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0xC4L)), 0x15L)).s21))).xxyxyyyxyxxyyyyx))).s3, l_908.s3)))) , l_925) == (void*)0) >= p_1189->g_872.y));
            for (p_1189->g_417 = 0; (p_1189->g_417 != (-11)); p_1189->g_417 = safe_sub_func_uint16_t_u_u(p_1189->g_417, 1))
            { /* block id: 416 */
                uint8_t l_930 = 0UL;
                int16_t *l_933[2][4];
                int32_t *l_944 = (void*)0;
                int32_t *l_945 = &p_1189->g_201;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_933[i][j] = (void*)0;
                }
                l_924 = ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_929.s4e9c0a5f)), (int32_t)((*l_945) |= (l_930 , ((safe_mul_func_int16_t_s_s((l_929.s3 = (p_1189->g_919.s8 = l_903)), (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((p_1189->g_417 ^ (safe_add_func_int32_t_s_s(((*p_170) = (safe_mul_func_uint16_t_u_u(p_169, ((void*)0 != l_942)))), (((*p_168) = l_943) == ((((2L ^ (p_1189->g_751.s2 & GROUP_DIVERGE(0, 1))) || l_908.s1) , 1L) , l_943))))), p_169)), 14)))) >= p_1189->g_373.s0))), (int32_t)l_946))).s7;
            }
            for (l_946 = 0; (l_946 < 17); l_946++)
            { /* block id: 426 */
                int8_t l_952 = (-8L);
                int32_t l_994 = 1L;
                uint32_t *l_1016 = (void*)0;
                uint16_t **l_1036 = &p_1189->g_361;
                for (p_1189->g_527 = 3; (p_1189->g_527 <= 20); ++p_1189->g_527)
                { /* block id: 429 */
                    int32_t *l_951 = &l_875;
                    (*l_951) |= (*p_167);
                    (*p_167) |= 7L;
                    if (l_952)
                        continue;
                    (*p_168) = &l_924;
                }
            }
            ++l_1065;
        }
        if ((((*l_1068) = p_1189->g_872.x) , (0x5AF3DB8F708427CFL || (p_169 && (safe_rshift_func_int8_t_s_s(p_1189->g_313.s5, (safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(p_169, (safe_rshift_func_int8_t_s_s(p_169, 2)))) , (~(p_169 & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xBCL, 0x01L)).yyxx)).x))), p_169))))))))
        { /* block id: 489 */
            VECTOR(uint8_t, 8) l_1092 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x61L), 0x61L), 0x61L, 246UL, 0x61L);
            uint32_t l_1097[4][10][6] = {{{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L}},{{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L}},{{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L}},{{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L},{4294967294UL,0x61F9A817L,1UL,1UL,1UL,0x61F9A817L}}};
            int32_t l_1104 = 0x074E9E00L;
            VECTOR(uint16_t, 4) l_1124 = (VECTOR(uint16_t, 4))(0x58B8L, (VECTOR(uint16_t, 2))(0x58B8L, 0x9C37L), 0x9C37L);
            int32_t *l_1137[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            if ((*p_167))
            { /* block id: 490 */
                uint16_t *l_1098 = &l_1095;
                int32_t l_1099[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1099[i] = (-5L);
                for (p_1189->g_326 = 0; (p_1189->g_326 != 37); p_1189->g_326 = safe_add_func_uint32_t_u_u(p_1189->g_326, 9))
                { /* block id: 493 */
                    return p_169;
                }
                if (((safe_rshift_func_int8_t_s_u((((VECTOR(uint8_t, 16))(0x23L, ((safe_mod_func_uint16_t_u_u((&p_1189->g_361 == (void*)0), (safe_lshift_func_uint16_t_u_s(((0xC203F941L || (safe_mul_func_uint16_t_u_u(((*l_1098) = (((*l_874) = (safe_mul_func_int8_t_s_s(0L, (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1092.s63)))).even, (safe_div_func_uint64_t_u_u(18446744073709551615UL, (((l_1095 && ((VECTOR(int8_t, 16))(p_1189->g_1096.xyyyyxyxyyyxyxxx)).s7) | p_169) , l_1097[3][0][5])))))))) & p_1189->g_274)), l_1099[6]))) & 0x68093862L), p_1189->g_276)))) , 253UL), 1UL, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 8))(0x6EL)), 247UL)).s9 > p_169), p_1189->g_317.s1)) & 0x7413L))
                { /* block id: 498 */
                    int32_t *l_1100 = (void*)0;
                    int32_t *l_1101 = &l_1099[2];
                    int32_t *l_1102 = &p_1189->g_201;
                    int32_t *l_1103[3][2][5] = {{{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201},{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201}},{{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201},{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201}},{{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201},{(void*)0,&p_1189->g_201,&p_1189->g_201,&p_1189->g_417,&p_1189->g_201}}};
                    uint8_t l_1105[5] = {0x52L,0x52L,0x52L,0x52L,0x52L};
                    int i, j, k;
                    l_1105[2]++;
                    (*p_167) |= (p_169 | l_1108[0][0][8]);
                }
                else
                { /* block id: 501 */
                    int64_t l_1109 = 2L;
                    (*p_167) = l_1109;
                    for (l_888 = (-12); (l_888 > 23); l_888 = safe_add_func_int32_t_s_s(l_888, 2))
                    { /* block id: 505 */
                        uint32_t l_1112 = 9UL;
                        l_1112++;
                        return p_1189->g_380.y;
                    }
                }
            }
            else
            { /* block id: 510 */
                uint32_t **l_1117 = &l_1068;
                uint32_t *l_1119 = &p_1189->g_1069;
                uint32_t **l_1118 = &l_1119;
                int32_t l_1122 = 0x1A30D140L;
                uint8_t *l_1134 = (void*)0;
                uint8_t *l_1135[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                int i, j;
                (*p_170) = (((((((FAKE_DIVERGE(p_1189->group_2_offset, get_group_id(2), 10) & 0x5DD593FD11FEB946L) | p_1189->g_647.z) , ((safe_mul_func_uint8_t_u_u((&p_1189->g_1069 == ((*l_1118) = ((*l_1117) = &p_1189->g_1069))), ((l_1122 = (safe_mul_func_uint16_t_u_u((l_1122 , ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(p_1189->g_1123.wwwy)).wzyywzzzyyywyyxw, ((VECTOR(uint16_t, 16))(l_1124.yyzwxwxxxyzyzwxz))))), ((VECTOR(uint16_t, 16))(p_1189->g_1125.xzyyxzyxwwyzxyzz)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(p_1189->g_1126.s51014735)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_169, (((&p_1189->g_861 == (((safe_rshift_func_uint8_t_u_u(p_169, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_1189->g_1133.yxyx)).x, 10)))) ^ ((l_1104 = p_1189->g_317.s5) < l_1124.y)) , (void*)0)) , 0x7EL) <= l_1095), p_169, l_1122, GROUP_DIVERGE(1, 1), 0xC4F7L, p_169, 0x49E6L, 0xB6DAL, 0x31A0L, ((VECTOR(uint16_t, 4))(0x3B61L)), 0x2D05L, 0x5B3FL)).odd)).s33)).yxyxxxyxxyxxyxxx)).s6492, ((VECTOR(uint16_t, 4))(65535UL))))))).hi)), 0xE8ECL, 0UL)).zwzwxwxxyyxwyyxw))).s3), p_169))) , FAKE_DIVERGE(p_1189->group_2_offset, get_group_id(2), 10)))) | p_169)) ^ p_1189->g_1126.s1) & p_169) , p_1189->g_1136.y) <= l_1092.s6);
                (*p_168) = l_1137[2];
                return l_1122;
            }
            l_920.s3 &= (*p_167);
        }
        else
        { /* block id: 520 */
            if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 50]) == 8))
            { /* block id: 522 */
                int32_t l_1139 = (-5L);
                int32_t *l_1138 = &l_1139;
                int32_t *l_1140 = &l_1139;
                uint16_t l_1141[6][10][4];
                int32_t *l_1142 = (void*)0;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1141[i][j][k] = 0x234EL;
                    }
                }
                l_1140 = l_1138;
                l_1141[5][2][2] ^= (((VECTOR(int8_t, 2))(1L, (-8L))).even , (-3L));
                l_1142 = (void*)0;
                unsigned int result = 0;
                result += l_1139;
                int l_1141_i0, l_1141_i1, l_1141_i2;
                for (l_1141_i0 = 0; l_1141_i0 < 6; l_1141_i0++) {
                    for (l_1141_i1 = 0; l_1141_i1 < 10; l_1141_i1++) {
                        for (l_1141_i2 = 0; l_1141_i2 < 4; l_1141_i2++) {
                            result += l_1141[l_1141_i0][l_1141_i1][l_1141_i2];
                        }
                    }
                }
                atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 50], result);
            }
            else
            { /* block id: 526 */
                (1 + 1);
            }
        }
    }
    return l_875;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_comm_values p_1189->g_191 p_1189->l_comm_values p_1189->g_201 p_1189->g_205 p_1189->g_241 p_1189->g_276 p_1189->g_303 p_1189->g_313 p_1189->g_317 p_1189->g_274 p_1189->g_326 p_1189->g_373 p_1189->g_374 p_1189->g_375 p_1189->g_380 p_1189->g_382 p_1189->g_388 p_1189->g_389 p_1189->g_390 p_1189->g_415 p_1189->g_472 p_1189->g_417 p_1189->g_503 p_1189->g_512 p_1189->g_515 p_1189->g_344 p_1189->g_520 p_1189->g_527 p_1189->g_589 p_1189->g_500 p_1189->g_596 p_1189->g_598 p_1189->g_606 p_1189->g_619 p_1189->g_647 p_1189->g_751 p_1189->g_753 p_1189->g_766 p_1189->g_768 p_1189->g_620 p_1189->g_361 p_1189->g_860
 * writes: p_1189->g_201 p_1189->g_241 p_1189->g_274 p_1189->g_276 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_417 p_1189->g_380 p_1189->g_500 p_1189->g_515 p_1189->g_517 p_1189->g_520 p_1189->g_344 p_1189->g_527 p_1189->g_303 p_1189->g_620 p_1189->g_472 p_1189->g_503
 */
uint8_t  func_176(int16_t  p_177, uint32_t  p_178, struct S0 * p_1189)
{ /* block id: 110 */
    uint8_t l_179 = 0UL;
    int32_t l_737 = 0x56C47F5EL;
    int32_t l_742 = 0L;
    uint16_t l_747[9] = {0xF7E2L,1UL,0xF7E2L,0xF7E2L,1UL,0xF7E2L,0xF7E2L,1UL,0xF7E2L};
    VECTOR(uint32_t, 16) l_752 = (VECTOR(uint32_t, 16))(0x4D21CC80L, (VECTOR(uint32_t, 4))(0x4D21CC80L, (VECTOR(uint32_t, 2))(0x4D21CC80L, 0x77412BC4L), 0x77412BC4L), 0x77412BC4L, 0x4D21CC80L, 0x77412BC4L, (VECTOR(uint32_t, 2))(0x4D21CC80L, 0x77412BC4L), (VECTOR(uint32_t, 2))(0x4D21CC80L, 0x77412BC4L), 0x4D21CC80L, 0x77412BC4L, 0x4D21CC80L, 0x77412BC4L);
    VECTOR(uint32_t, 2) l_763 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
    VECTOR(int32_t, 2) l_782 = (VECTOR(int32_t, 2))(0x678D7EAEL, 0x22786556L);
    int64_t *l_792 = (void*)0;
    uint16_t **l_811 = &p_1189->g_361;
    int16_t l_831 = 0L;
    int32_t l_862 = 0x78E83388L;
    int8_t l_863 = 0x19L;
    int i;
    if ((l_179 &= p_177))
    { /* block id: 112 */
        uint32_t l_617[5][5] = {{0x5B256BE8L,0x5B256BE8L,0UL,0x07C92A2BL,0x295CF8AEL},{0x5B256BE8L,0x5B256BE8L,0UL,0x07C92A2BL,0x295CF8AEL},{0x5B256BE8L,0x5B256BE8L,0UL,0x07C92A2BL,0x295CF8AEL},{0x5B256BE8L,0x5B256BE8L,0UL,0x07C92A2BL,0x295CF8AEL},{0x5B256BE8L,0x5B256BE8L,0UL,0x07C92A2BL,0x295CF8AEL}};
        int8_t *l_618[7][1][9] = {{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}},{{&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5],&p_1189->g_472[5]}}};
        int32_t *l_667[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t **l_692 = &p_1189->g_361;
        int64_t l_741 = 0x4AE61AC596BCD79AL;
        VECTOR(uint16_t, 8) l_750 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65535UL), 65535UL), 65535UL, 2UL, 65535UL);
        VECTOR(int16_t, 2) l_756 = (VECTOR(int16_t, 2))(0x4338L, 0x74BCL);
        VECTOR(int32_t, 2) l_767 = (VECTOR(int32_t, 2))(1L, 0x053C2358L);
        int32_t **l_832 = &p_1189->g_620;
        uint64_t *l_845 = &p_1189->g_274;
        int64_t **l_854 = &l_792;
        VECTOR(int8_t, 16) l_859 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L), (VECTOR(int8_t, 2))(1L, (-3L)), (VECTOR(int8_t, 2))(1L, (-3L)), 1L, (-3L), 1L, (-3L));
        int i, j, k;
        if ((p_1189->g_comm_values[p_1189->tid] & func_180(func_185(p_1189->g_191, (((safe_mod_func_uint64_t_u_u(p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))], (p_177 && (!(safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1189->global_0_offset, get_global_id(0), 10), func_196(((safe_mul_func_uint8_t_u_u(p_177, p_178)) , 0x28BC1734L), p_1189))))))) , (l_617[0][3] |= p_177)) | 1L), l_618[6][0][3], p_1189->g_472[4], p_1189->g_619[0][1][9], p_1189), p_177, &p_1189->g_472[5], l_667[0][3], p_1189)))
        { /* block id: 313 */
            uint64_t l_730[1];
            uint8_t *l_738 = (void*)0;
            uint8_t *l_739[4][7][6] = {{{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0}},{{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0}},{{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0}},{{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0},{(void*)0,&l_179,(void*)0,(void*)0,&l_179,(void*)0}}};
            int32_t l_740 = (-1L);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_730[i] = 0xB491483F3CD4AA83L;
            l_692 = (void*)0;
            l_667[5][4] = l_667[0][3];
            for (p_177 = 17; (p_177 < (-5)); p_177--)
            { /* block id: 318 */
                uint32_t l_701 = 4294967287UL;
                for (p_178 = 0; (p_178 > 33); p_178 = safe_add_func_uint32_t_u_u(p_178, 5))
                { /* block id: 321 */
                    uint16_t ***l_702 = &l_692;
                    int32_t l_703 = 0x6C713C96L;
                    l_703 ^= ((((&p_1189->g_361 != (void*)0) , GROUP_DIVERGE(2, 1)) >= (safe_div_func_int16_t_s_s(p_178, (safe_rshift_func_uint16_t_u_u(p_178, GROUP_DIVERGE(2, 1)))))) == (l_701 > ((((((*l_702) = &p_1189->g_361) != (void*)0) , &p_1189->g_415) != (p_177 , (void*)0)) | p_1189->g_373.s4)));
                    if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 13]) == 4))
                    { /* block id: 325 */
                        uint16_t l_704[4];
                        uint32_t l_705 = 3UL;
                        uint8_t l_706 = 0xA7L;
                        int32_t l_708 = 0x7D076AC0L;
                        int32_t *l_707 = &l_708;
                        int32_t *l_709 = &l_708;
                        int32_t *l_710 = (void*)0;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_704[i] = 0x8B59L;
                        l_705 &= l_704[0];
                        l_710 = (l_709 = (l_706 , l_707));
                        unsigned int result = 0;
                        int l_704_i0;
                        for (l_704_i0 = 0; l_704_i0 < 4; l_704_i0++) {
                            result += l_704[l_704_i0];
                        }
                        result += l_705;
                        result += l_706;
                        result += l_708;
                        atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 13], result);
                    }
                    else
                    { /* block id: 329 */
                        (1 + 1);
                    }
                    if ((atomic_inc(&p_1189->l_atomic_input[34]) == 6))
                    { /* block id: 333 */
                        int32_t l_711 = 0x24F6FD04L;
                        int32_t l_712[9][5][3] = {{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}},{{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL},{0L,0L,0x78A962AFL}}};
                        int32_t l_713 = 0x4B45BCE5L;
                        uint64_t l_714 = 18446744073709551612UL;
                        uint16_t **l_717 = (void*)0;
                        uint16_t l_720 = 65535UL;
                        uint16_t *l_719 = &l_720;
                        uint16_t **l_718[5][7][3] = {{{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719}},{{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719}},{{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719}},{{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719}},{{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719}}};
                        uint16_t **l_721 = &l_719;
                        int i, j, k;
                        l_712[0][1][1] &= l_711;
                        l_714++;
                        l_721 = (GROUP_DIVERGE(2, 1) , (l_718[1][3][1] = l_717));
                        unsigned int result = 0;
                        result += l_711;
                        int l_712_i0, l_712_i1, l_712_i2;
                        for (l_712_i0 = 0; l_712_i0 < 9; l_712_i0++) {
                            for (l_712_i1 = 0; l_712_i1 < 5; l_712_i1++) {
                                for (l_712_i2 = 0; l_712_i2 < 3; l_712_i2++) {
                                    result += l_712[l_712_i0][l_712_i1][l_712_i2];
                                }
                            }
                        }
                        result += l_713;
                        result += l_714;
                        result += l_720;
                        atomic_add(&p_1189->l_special_values[34], result);
                    }
                    else
                    { /* block id: 338 */
                        (1 + 1);
                    }
                }
            }
            l_742 = (p_1189->g_512.x >= ((safe_lshift_func_int16_t_s_u(((+(((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((&l_692 != (void*)0), 13)), ((((l_730[0] < 0x37L) || p_177) > (((((safe_mul_func_uint8_t_u_u((l_740 &= ((safe_mod_func_int64_t_s_s((((l_737 = (((safe_add_func_int32_t_s_s(p_177, ((p_177 && p_177) > l_730[0]))) , p_1189->g_512.x) | p_177)) ^ l_730[0]) != (-9L)), p_178)) , GROUP_DIVERGE(2, 1))), l_741)) != 0x4B27L) <= l_179) != 0x4756L) <= 1UL)) != p_177))), 0x661FL)) , 1L) , p_178)) > l_730[0]), l_179)) || p_1189->g_598.w));
        }
        else
        { /* block id: 346 */
            VECTOR(int32_t, 4) l_769 = (VECTOR(int32_t, 4))(0x3AE0F792L, (VECTOR(int32_t, 2))(0x3AE0F792L, 1L), 1L);
            VECTOR(int32_t, 16) l_770 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
            uint64_t *l_771 = (void*)0;
            uint64_t *l_772 = (void*)0;
            uint64_t *l_773 = (void*)0;
            uint64_t *l_774 = (void*)0;
            uint64_t *l_775 = (void*)0;
            uint64_t *l_776[3];
            int32_t l_777 = 1L;
            uint16_t ***l_781[7];
            int32_t l_783 = 0x28B01015L;
            int32_t l_784 = 6L;
            int i;
            for (i = 0; i < 3; i++)
                l_776[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_781[i] = &l_692;
            l_737 |= (safe_lshift_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((l_747[3] | (safe_lshift_func_int16_t_s_u((((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_750.s42)).yyyyyyyyxxxyyyyy)).s4200, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(p_1189->g_751.sbf56)), ((VECTOR(uint16_t, 2))(0xECECL, 65535UL)).yyyy)))))).xyyxwyzz)).s22, ((VECTOR(uint32_t, 16))(l_752.s1e7be78ffa720780)).scf, ((VECTOR(uint32_t, 4))(p_1189->g_753.s8b35)).hi))).odd == ((safe_rshift_func_int16_t_s_s(p_1189->g_753.s7, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_756.xx)), 0x6D68L, 0x439FL)).z)) && (((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(((l_179 > (safe_mul_func_uint8_t_u_u(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_763.yy)), 0UL, 4294967293UL)).x <= l_747[0]) || p_1189->g_303.s0), p_177))) , (safe_div_func_uint64_t_u_u(p_178, (l_777 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_1189->g_766.s32)), 0x42E8FB08160B5AA3L, 0x579C0B72C79646C6L)), ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(0x48F36162L, 1L)).xxxx))).lo)).yyyy, ((VECTOR(int32_t, 8))(l_767.yyxyxxxx)).lo, ((VECTOR(int32_t, 2))(p_1189->g_768.yx)).yxyx))).xzywzywz, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(1L, p_1189->g_390.x, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_769.xz)), 6L, 0L)), ((VECTOR(int32_t, 2))((-2L), 0x782A90C3L)), 0L)).lo)), 1L, 0x0524D1C9L, ((VECTOR(int32_t, 8))(l_770.scf37a787)))).s9d6b))).xxxyzwxz))), (uint32_t)((p_177 , l_770.s8) <= p_177)))), ((VECTOR(uint32_t, 8))(0x5372B091L))))).odd))), 0x41A7936A0DAD47C1L, ((VECTOR(uint64_t, 4))(0x86273072555F6247L)), ((VECTOR(uint64_t, 4))(0x433B156A153F9D67L)), ((VECTOR(uint64_t, 2))(0x9022F1BE11AFCBEAL)), 0x02BC46A6E7A12372L)).s4 , p_1189->g_647.x))))), p_1189->g_313.s7)) <= FAKE_DIVERGE(p_1189->global_1_offset, get_global_id(1), 10)), 0xB25A73C05CB0897AL)) != 0x3290L) | p_1189->g_344))), p_177))), p_1189->g_317.s0)) && l_763.x) < l_769.z), p_178));
            if (p_178)
            { /* block id: 349 */
                int32_t **l_779 = &p_1189->g_620;
                VECTOR(int32_t, 16) l_780 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x6B9400F8L), 0x6B9400F8L), 0x6B9400F8L, (-4L), 0x6B9400F8L, (VECTOR(int32_t, 2))((-4L), 0x6B9400F8L), (VECTOR(int32_t, 2))((-4L), 0x6B9400F8L), (-4L), 0x6B9400F8L, (-4L), 0x6B9400F8L);
                int i;
                (*l_779) = &l_777;
                (**l_779) |= ((VECTOR(int32_t, 16))(l_780.scc12ed419e1b8152)).sf;
            }
            else
            { /* block id: 352 */
                uint16_t l_785[4] = {0x85A5L,0x85A5L,0x85A5L,0x85A5L};
                int i;
                l_742 ^= (l_781[4] != &l_692);
                l_785[0]--;
                return p_1189->g_388.s3;
            }
        }
        for (p_1189->g_326 = 0; (p_1189->g_326 <= 30); p_1189->g_326 = safe_add_func_uint16_t_u_u(p_1189->g_326, 1))
        { /* block id: 360 */
            int64_t **l_793 = (void*)0;
            int64_t **l_794 = &l_792;
            uint16_t ***l_812 = (void*)0;
            uint16_t ***l_813 = &l_811;
            int32_t l_814 = 0x78ACB5B0L;
            int32_t l_815 = 0x174D5F36L;
            VECTOR(int16_t, 2) l_825 = (VECTOR(int16_t, 2))(0x2233L, 0x2DFCL);
            uint32_t *l_830[8];
            int i;
            for (i = 0; i < 8; i++)
                l_830[i] = &p_1189->g_517[4];
            l_815 |= (l_814 = (safe_add_func_int64_t_s_s((((*l_794) = l_792) == &p_1189->g_276), (safe_rshift_func_uint8_t_u_u(p_1189->g_380.x, (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0x7B108743DE259813L, ((safe_mul_func_int8_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 16))(0xBA5894ECL, 0UL, (safe_rshift_func_uint16_t_u_u((p_177 == GROUP_DIVERGE(0, 1)), p_178)), 7UL, (safe_rshift_func_int16_t_s_s((((*l_813) = l_811) != &p_1189->g_361), 4)), ((VECTOR(uint32_t, 4))(4294967295UL)), 0x9D2504A7L, ((VECTOR(uint32_t, 2))(0xCFD3DAD1L)), ((VECTOR(uint32_t, 4))(4294967295UL)))), ((VECTOR(uint32_t, 16))(0xD74BD8DFL))))).s66, (uint32_t)0x0541A564L))).yxxxxyyy, ((VECTOR(uint32_t, 8))(0x579CB8CDL))))).lo, ((VECTOR(uint32_t, 4))(4294967286UL))))), ((VECTOR(uint32_t, 4))(0UL)))).s4 <= p_177), p_1189->g_313.s2)) & l_179))), l_747[7])), p_1189->g_589.w)), p_1189->g_415)))))));
            l_742 = (l_831 = (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((p_1189->g_503.sc = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(0x78801E4FL, p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))], 0UL, 0UL)).w, (p_1189->g_500 = (((**l_813) == (void*)0) | (((p_178 || 0x31D0L) , (safe_mod_func_int8_t_s_s(l_814, (safe_rshift_func_uint16_t_u_s((l_782.x = ((p_178 || ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_825.xyxyxxyxxyyyyxxy)).even)).s7) >= ((VECTOR(uint32_t, 4))(l_815, ((VECTOR(uint32_t, 2))(0x91BF7969L, 4UL)), 0x4165CD61L)).z)), 5))))) , (((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_179, l_825.x)), l_825.y)) | 255UL) && 1UL)))))), 5))) | 1UL), 0x28E87BAFE9414444L, ((VECTOR(uint64_t, 4))(0x55901F8C086DBC37L)), 6UL, 0UL)).hi)), ((VECTOR(uint64_t, 4))(18446744073709551608UL))))).w)));
        }
        (*l_832) = (void*)0;
        l_862 = (p_1189->g_303.s1 || ((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(0x2B43L, (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_1189->g_500 , (safe_mul_func_uint8_t_u_u((~0x1DL), ((safe_add_func_int64_t_s_s(((void*)0 == l_845), (safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1189->global_0_offset, get_global_id(0), 10), ((VECTOR(int32_t, 2))(0x69579296L, 0x30D3C300L)).even)))) > (safe_rshift_func_uint8_t_u_s(((l_782.y |= (safe_sub_func_int16_t_s_s((p_177 , (safe_rshift_func_int8_t_s_u((l_854 == ((~(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((VECTOR(int8_t, 16))(0x41L, ((VECTOR(int8_t, 8))((-1L), (-1L), 1L, 0x02L, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(l_859.s3af3)), (int8_t)p_178))))), ((VECTOR(int8_t, 2))(0x6AL)), p_178, p_178, 8L, 1L, (-1L))).s7 & 0x35L), 3)) , l_763.y), 2L)) >= p_177) ^ p_177)) , p_1189->g_860)), 2))), 0x4DF4L))) == l_862), 5)))))), l_863)), 14)))) != FAKE_DIVERGE(p_1189->local_1_offset, get_local_id(1), 10)), p_178)) , p_177));
    }
    else
    { /* block id: 374 */
        for (p_178 = 0; (p_178 != 51); p_178 = safe_add_func_uint32_t_u_u(p_178, 9))
        { /* block id: 377 */
            if (l_782.x)
                break;
        }
        if ((atomic_inc(&p_1189->l_atomic_input[45]) == 5))
        { /* block id: 381 */
            int64_t l_866[8][5][1] = {{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}}};
            int64_t l_867 = 1L;
            VECTOR(int32_t, 4) l_868 = (VECTOR(int32_t, 4))(0x3683B8EDL, (VECTOR(int32_t, 2))(0x3683B8EDL, (-1L)), (-1L));
            int8_t l_869 = 0x02L;
            int i, j, k;
            l_869 = (l_866[5][0][0] , (l_867 , (l_868.y , ((VECTOR(int32_t, 4))(0x5D2DBECAL, (-5L), 0x51FCCAE4L, 0x33B1CE87L)).y)));
            unsigned int result = 0;
            int l_866_i0, l_866_i1, l_866_i2;
            for (l_866_i0 = 0; l_866_i0 < 8; l_866_i0++) {
                for (l_866_i1 = 0; l_866_i1 < 5; l_866_i1++) {
                    for (l_866_i2 = 0; l_866_i2 < 1; l_866_i2++) {
                        result += l_866[l_866_i0][l_866_i1][l_866_i2];
                    }
                }
            }
            result += l_867;
            result += l_868.w;
            result += l_868.z;
            result += l_868.y;
            result += l_868.x;
            result += l_869;
            atomic_add(&p_1189->l_special_values[45], result);
        }
        else
        { /* block id: 383 */
            (1 + 1);
        }
    }
    return p_1189->g_596.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_527 p_1189->g_417 p_1189->g_472 p_1189->g_512 p_1189->g_515 p_1189->g_415 p_1189->l_comm_values p_1189->g_274 p_1189->g_comm_values p_1189->g_326 p_1189->g_201 p_1189->g_380 p_1189->g_317 p_1189->g_375 p_1189->g_382 p_1189->g_344 p_1189->g_373
 * writes: p_1189->g_527 p_1189->g_417 p_1189->g_472 p_1189->g_201 p_1189->g_276 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_380 p_1189->g_274 p_1189->g_241 p_1189->g_500 p_1189->g_517 p_1189->g_520
 */
uint16_t  func_180(uint64_t  p_181, int32_t  p_182, int8_t * p_183, int32_t * p_184, struct S0 * p_1189)
{ /* block id: 297 */
    int32_t *l_668 = &p_1189->g_417;
    int32_t *l_669 = (void*)0;
    int32_t *l_670 = (void*)0;
    int32_t l_671 = 0x340AA41EL;
    int32_t *l_672[1];
    uint32_t l_673[4];
    int i;
    for (i = 0; i < 1; i++)
        l_672[i] = &p_1189->g_201;
    for (i = 0; i < 4; i++)
        l_673[i] = 4294967288UL;
    --l_673[3];
    for (p_1189->g_527 = 0; (p_1189->g_527 < (-30)); p_1189->g_527 = safe_sub_func_uint32_t_u_u(p_1189->g_527, 7))
    { /* block id: 301 */
        VECTOR(int16_t, 2) l_680 = (VECTOR(int16_t, 2))(0x3020L, 0x414BL);
        int8_t *l_681 = &p_1189->g_344;
        uint16_t *l_690 = &p_1189->g_326;
        int32_t **l_691 = &p_1189->g_520;
        int i;
        if (p_182)
            break;
        for (l_671 = 0; (l_671 > 8); ++l_671)
        { /* block id: 305 */
            (*l_668) |= p_181;
        }
        (*l_691) = func_242((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_680.xxxxxxyyxyyyyxyy)).hi)).s44)).yxyx, ((VECTOR(int16_t, 16))(p_1189->g_527, ((((0UL > (p_183 == l_681)) && ((safe_lshift_func_int16_t_s_s(p_182, ((safe_add_func_uint32_t_u_u(l_680.y, (l_680.y ^ (((safe_div_func_int8_t_s_s(((*p_183) &= l_680.y), (safe_rshift_func_int16_t_s_u((l_690 != l_690), 7)))) & p_181) <= p_1189->g_512.x)))) && p_182))) ^ p_1189->g_515)) && p_181) ^ l_680.y), ((VECTOR(int16_t, 4))(0x2949L)), ((VECTOR(int16_t, 4))(3L)), 0L, 0x079EL, 0x38E3L, 0x5ACDL, 1L, 0x7B8DL)).sebd8))).yyyywyyz)))).s3 != 1UL), p_1189->g_415, l_680.x, p_1189);
        if ((*l_668))
            continue;
    }
    return p_181;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_417 p_1189->g_303 p_1189->g_388 p_1189->g_647 p_1189->g_515 p_1189->g_589
 * writes: p_1189->g_417 p_1189->g_303 p_1189->g_620
 */
uint64_t  func_185(int8_t * p_186, int8_t  p_187, int8_t * p_188, uint32_t  p_189, int32_t ** p_190, struct S0 * p_1189)
{ /* block id: 277 */
    int8_t l_656 = (-1L);
    int32_t l_658 = 1L;
    int32_t l_660 = (-5L);
    for (p_1189->g_417 = 27; (p_1189->g_417 == (-18)); p_1189->g_417 = safe_sub_func_int8_t_s_s(p_1189->g_417, 2))
    { /* block id: 280 */
        int32_t l_635 = (-9L);
        uint8_t *l_636 = (void*)0;
        uint8_t *l_637 = (void*)0;
        uint8_t *l_638[8][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_643 = 0L;
        VECTOR(int32_t, 4) l_648 = (VECTOR(int32_t, 4))(0x5E683E34L, (VECTOR(int32_t, 2))(0x5E683E34L, 0x0B537460L), 0x0B537460L);
        int64_t l_651[1][1][10];
        int32_t l_657 = 1L;
        int32_t *l_659[1][10] = {{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 10; k++)
                    l_651[i][j][k] = (-1L);
            }
        }
        l_660 &= (l_657 = ((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((p_1189->g_303.s4 || ((safe_mul_func_int8_t_s_s((p_1189->g_388.s5 & ((safe_mul_func_int16_t_s_s((l_635 <= ((((p_1189->g_303.s1 = p_1189->g_303.s7) == (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_187, 10)), (l_643 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(7UL, 0xCAC7L, 0x09FFL, 1UL)), ((VECTOR(uint16_t, 2))(1UL, 0xD15EL)), 0xF148L, 0x79F5L)).s6)))) ^ (safe_rshift_func_int8_t_s_s(l_635, (((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1189->g_647.zwyxyyzwzxzyxwxz)).sa7be)).xyxyxwzw, ((VECTOR(int32_t, 8))(l_648.wwzwxzwx)), ((VECTOR(int32_t, 16))((-10L), 0L, ((p_187 < FAKE_DIVERGE(p_1189->local_2_offset, get_local_id(2), 10)) >= (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x3BL, ((VECTOR(int8_t, 2))(0L, 0x6BL)), 0x79L)))).hi)).odd, l_651[0][0][2]))), 0x24D16BE8L, (l_656 = (safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s((-1L), 2L)) , 0x758BL), p_189))), ((VECTOR(int32_t, 4))(0L)), 5L, 0x7747E856L, 0x7FD7A956L, ((VECTOR(int32_t, 2))(0x0DC80907L)), 0L, 0x68546CACL)).lo))).s5)) != l_657) , l_656)))) , p_1189->g_388.sf)), 1L)) || p_189)), 0x64L)) & p_1189->g_515)), l_658)), p_189)), p_189)), p_1189->g_589.z)) | p_189));
    }
    if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 47]) == 5))
    { /* block id: 288 */
        uint64_t l_661 = 18446744073709551606UL;
        int32_t *l_664[3][3];
        int32_t l_665 = (-7L);
        VECTOR(int32_t, 16) l_666 = (VECTOR(int32_t, 16))(0x152D175AL, (VECTOR(int32_t, 4))(0x152D175AL, (VECTOR(int32_t, 2))(0x152D175AL, 7L), 7L), 7L, 0x152D175AL, 7L, (VECTOR(int32_t, 2))(0x152D175AL, 7L), (VECTOR(int32_t, 2))(0x152D175AL, 7L), 0x152D175AL, 7L, 0x152D175AL, 7L);
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_664[i][j] = (void*)0;
        }
        --l_661;
        l_664[0][1] = (void*)0;
        l_666.s8 = l_665;
        unsigned int result = 0;
        result += l_661;
        result += l_665;
        result += l_666.sf;
        result += l_666.se;
        result += l_666.sd;
        result += l_666.sc;
        result += l_666.sb;
        result += l_666.sa;
        result += l_666.s9;
        result += l_666.s8;
        result += l_666.s7;
        result += l_666.s6;
        result += l_666.s5;
        result += l_666.s4;
        result += l_666.s3;
        result += l_666.s2;
        result += l_666.s1;
        result += l_666.s0;
        atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 47], result);
    }
    else
    { /* block id: 292 */
        (1 + 1);
    }
    (*p_190) = &l_660;
    return l_656;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_201 p_1189->g_comm_values p_1189->g_205 p_1189->l_comm_values p_1189->g_241 p_1189->g_276 p_1189->g_303 p_1189->g_313 p_1189->g_317 p_1189->g_274 p_1189->g_326 p_1189->g_373 p_1189->g_374 p_1189->g_375 p_1189->g_380 p_1189->g_382 p_1189->g_388 p_1189->g_389 p_1189->g_390 p_1189->g_415 p_1189->g_472 p_1189->g_417 p_1189->g_503 p_1189->g_512 p_1189->g_515 p_1189->g_344 p_1189->g_520 p_1189->g_527 p_1189->g_589 p_1189->g_500 p_1189->g_596 p_1189->g_598 p_1189->g_606
 * writes: p_1189->g_201 p_1189->g_241 p_1189->g_274 p_1189->g_276 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_417 p_1189->g_380 p_1189->g_500 p_1189->g_515 p_1189->g_517 p_1189->g_520 p_1189->g_344 p_1189->g_527
 */
uint32_t  func_196(int32_t  p_197, struct S0 * p_1189)
{ /* block id: 113 */
    int32_t *l_200 = &p_1189->g_201;
    int32_t *l_202 = &p_1189->g_201;
    int32_t *l_203[4] = {&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201};
    int64_t l_206 = (-1L);
    int64_t l_207[1];
    uint64_t l_208 = 0UL;
    int8_t l_225 = (-5L);
    VECTOR(int32_t, 16) l_228 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x06E56068L), 0x06E56068L), 0x06E56068L, (-1L), 0x06E56068L, (VECTOR(int32_t, 2))((-1L), 0x06E56068L), (VECTOR(int32_t, 2))((-1L), 0x06E56068L), (-1L), 0x06E56068L, (-1L), 0x06E56068L);
    uint32_t l_528[6] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
    VECTOR(int16_t, 2) l_595 = (VECTOR(int16_t, 2))(7L, 0x60E4L);
    uint16_t l_613 = 0x0E87L;
    int i;
    for (i = 0; i < 1; i++)
        l_207[i] = 0L;
    l_208++;
    for (p_197 = (-27); (p_197 <= 14); p_197++)
    { /* block id: 117 */
        for (p_1189->g_201 = (-26); (p_1189->g_201 < 8); p_1189->g_201++)
        { /* block id: 120 */
            return p_1189->g_comm_values[p_1189->tid];
        }
        for (l_208 = 12; (l_208 < 2); --l_208)
        { /* block id: 125 */
            uint32_t l_217 = 0x881C6F64L;
            l_217--;
            if (p_197)
                continue;
        }
        for (l_208 = 0; (l_208 >= 54); l_208 = safe_add_func_uint16_t_u_u(l_208, 3))
        { /* block id: 131 */
            uint64_t l_224 = 0xF44213E9DE08AC1BL;
            (*l_200) &= (safe_rshift_func_int8_t_s_s(l_224, 3));
        }
    }
    if (((FAKE_DIVERGE(p_1189->local_0_offset, get_local_id(0), 10) != ((*l_200) || (l_225 , ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0L, (l_203[2] != (void*)0), 8L, 0L)).zywxzzxx)).s3616272527547705)), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_1189->g_205[0], (safe_div_func_int16_t_s_s(((+p_1189->g_205[3]) > (p_1189->g_527 &= ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_228.s40bb)).xwyyxxzyxzzwwxwz, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(0x26B4D2B5L, ((func_229(func_231((*l_200), p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))], p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))], p_1189), p_1189) , p_1189->g_303.s6) && (*l_200)), (-1L), 1L)).xxyxxzzwxyzwzxwy, (int32_t)p_197))), ((VECTOR(int32_t, 16))(0L))))).s4)), 0x6E29L)), (-1L), p_1189->g_205[5], p_1189->g_515, p_197, 0x19ADA576A13A6905L, 0x440571D6308F4570L)))).even, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x5889C0A0288DA9A7L))))).xxxyxywzwzxyzwwx, ((VECTOR(int64_t, 16))(0x029F175F9227A84DL))))).se))) != l_528[2]))
    { /* block id: 248 */
        int32_t **l_529[10];
        int i;
        for (i = 0; i < 10; i++)
            l_529[i] = &p_1189->g_520;
        p_1189->g_520 = (p_197 , l_202);
    }
    else
    { /* block id: 250 */
        int32_t l_583 = 0x370051C9L;
        VECTOR(int16_t, 8) l_597 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
        int64_t l_614[2];
        int32_t l_616 = (-6L);
        int i;
        for (i = 0; i < 2; i++)
            l_614[i] = 0x4F6D837F4BC9070CL;
        if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 24]) == 3))
        { /* block id: 252 */
            uint32_t l_530[8][4][8] = {{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}},{{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L},{4294967293UL,2UL,0x3C74B819L,4294967288UL,4294967295UL,0UL,4294967295UL,0xE06F8184L}}};
            uint32_t l_531 = 4294967294UL;
            uint8_t l_532 = 0UL;
            uint64_t l_533 = 1UL;
            int32_t l_534 = 0L;
            VECTOR(int32_t, 8) l_535 = (VECTOR(int32_t, 8))(0x3ED8AEF9L, (VECTOR(int32_t, 4))(0x3ED8AEF9L, (VECTOR(int32_t, 2))(0x3ED8AEF9L, 4L), 4L), 4L, 0x3ED8AEF9L, 4L);
            VECTOR(int32_t, 8) l_536 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-3L)), (-3L)), (-3L), (-4L), (-3L));
            VECTOR(int32_t, 16) l_537 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
            VECTOR(int32_t, 8) l_538 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x59C3EB73L), 0x59C3EB73L), 0x59C3EB73L, (-4L), 0x59C3EB73L);
            VECTOR(int32_t, 16) l_539 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x09A05C08L), 0x09A05C08L), 0x09A05C08L, 1L, 0x09A05C08L, (VECTOR(int32_t, 2))(1L, 0x09A05C08L), (VECTOR(int32_t, 2))(1L, 0x09A05C08L), 1L, 0x09A05C08L, 1L, 0x09A05C08L);
            uint8_t l_540 = 1UL;
            VECTOR(int32_t, 16) l_541 = (VECTOR(int32_t, 16))(0x73B30EE1L, (VECTOR(int32_t, 4))(0x73B30EE1L, (VECTOR(int32_t, 2))(0x73B30EE1L, 0x3E40DF9EL), 0x3E40DF9EL), 0x3E40DF9EL, 0x73B30EE1L, 0x3E40DF9EL, (VECTOR(int32_t, 2))(0x73B30EE1L, 0x3E40DF9EL), (VECTOR(int32_t, 2))(0x73B30EE1L, 0x3E40DF9EL), 0x73B30EE1L, 0x3E40DF9EL, 0x73B30EE1L, 0x3E40DF9EL);
            VECTOR(int32_t, 8) l_542 = (VECTOR(int32_t, 8))(0x3C45B57AL, (VECTOR(int32_t, 4))(0x3C45B57AL, (VECTOR(int32_t, 2))(0x3C45B57AL, 0x369DE9D6L), 0x369DE9D6L), 0x369DE9D6L, 0x3C45B57AL, 0x369DE9D6L);
            VECTOR(int32_t, 2) l_543 = (VECTOR(int32_t, 2))(0x44D87BEDL, 0x214ECFFDL);
            VECTOR(int32_t, 2) l_544 = (VECTOR(int32_t, 2))((-9L), 0L);
            VECTOR(int32_t, 8) l_545 = (VECTOR(int32_t, 8))(0x682B17C4L, (VECTOR(int32_t, 4))(0x682B17C4L, (VECTOR(int32_t, 2))(0x682B17C4L, (-1L)), (-1L)), (-1L), 0x682B17C4L, (-1L));
            VECTOR(int32_t, 2) l_546 = (VECTOR(int32_t, 2))((-1L), 0x3ED47AD7L);
            VECTOR(int32_t, 2) l_547 = (VECTOR(int32_t, 2))(4L, 0x40F733D2L);
            VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
            VECTOR(int16_t, 4) l_549 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x6DC1L), 0x6DC1L);
            VECTOR(uint16_t, 2) l_550 = (VECTOR(uint16_t, 2))(0x7994L, 65535UL);
            VECTOR(int32_t, 16) l_551 = (VECTOR(int32_t, 16))(0x15722CF2L, (VECTOR(int32_t, 4))(0x15722CF2L, (VECTOR(int32_t, 2))(0x15722CF2L, 0x6F233707L), 0x6F233707L), 0x6F233707L, 0x15722CF2L, 0x6F233707L, (VECTOR(int32_t, 2))(0x15722CF2L, 0x6F233707L), (VECTOR(int32_t, 2))(0x15722CF2L, 0x6F233707L), 0x15722CF2L, 0x6F233707L, 0x15722CF2L, 0x6F233707L);
            VECTOR(int32_t, 8) l_552 = (VECTOR(int32_t, 8))(0x010F9541L, (VECTOR(int32_t, 4))(0x010F9541L, (VECTOR(int32_t, 2))(0x010F9541L, 0L), 0L), 0L, 0x010F9541L, 0L);
            VECTOR(int32_t, 8) l_553 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
            VECTOR(int32_t, 2) l_554 = (VECTOR(int32_t, 2))(0x68D03F3BL, 0x136E3B21L);
            VECTOR(int32_t, 4) l_555 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x61E1EDD5L), 0x61E1EDD5L);
            VECTOR(int32_t, 4) l_556 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x02431276L), 0x02431276L);
            int32_t l_557 = 0x17950838L;
            uint8_t l_558 = 0x23L;
            VECTOR(int32_t, 2) l_559 = (VECTOR(int32_t, 2))(0L, (-1L));
            VECTOR(uint32_t, 8) l_560 = (VECTOR(uint32_t, 8))(0xEB6F26B6L, (VECTOR(uint32_t, 4))(0xEB6F26B6L, (VECTOR(uint32_t, 2))(0xEB6F26B6L, 0xF568B2CCL), 0xF568B2CCL), 0xF568B2CCL, 0xEB6F26B6L, 0xF568B2CCL);
            VECTOR(uint32_t, 16) l_561 = (VECTOR(uint32_t, 16))(0x59C7E137L, (VECTOR(uint32_t, 4))(0x59C7E137L, (VECTOR(uint32_t, 2))(0x59C7E137L, 0x47824C7AL), 0x47824C7AL), 0x47824C7AL, 0x59C7E137L, 0x47824C7AL, (VECTOR(uint32_t, 2))(0x59C7E137L, 0x47824C7AL), (VECTOR(uint32_t, 2))(0x59C7E137L, 0x47824C7AL), 0x59C7E137L, 0x47824C7AL, 0x59C7E137L, 0x47824C7AL);
            VECTOR(uint32_t, 16) l_562 = (VECTOR(uint32_t, 16))(0xEF956C66L, (VECTOR(uint32_t, 4))(0xEF956C66L, (VECTOR(uint32_t, 2))(0xEF956C66L, 0xC16093F9L), 0xC16093F9L), 0xC16093F9L, 0xEF956C66L, 0xC16093F9L, (VECTOR(uint32_t, 2))(0xEF956C66L, 0xC16093F9L), (VECTOR(uint32_t, 2))(0xEF956C66L, 0xC16093F9L), 0xEF956C66L, 0xC16093F9L, 0xEF956C66L, 0xC16093F9L);
            VECTOR(uint32_t, 4) l_563 = (VECTOR(uint32_t, 4))(0x51BA1A5AL, (VECTOR(uint32_t, 2))(0x51BA1A5AL, 0UL), 0UL);
            VECTOR(uint32_t, 4) l_564 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL);
            int32_t l_565 = 1L;
            uint64_t l_566 = 0xCF750A4ADF7368ADL;
            uint8_t l_567 = 255UL;
            uint32_t l_568 = 0x1A142833L;
            int16_t l_569 = 0x5B29L;
            VECTOR(int32_t, 2) l_570 = (VECTOR(int32_t, 2))(0L, 0x1514D1BFL);
            VECTOR(int32_t, 16) l_571 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
            VECTOR(int16_t, 16) l_572 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x15F3L), 0x15F3L), 0x15F3L, 0L, 0x15F3L, (VECTOR(int16_t, 2))(0L, 0x15F3L), (VECTOR(int16_t, 2))(0L, 0x15F3L), 0L, 0x15F3L, 0L, 0x15F3L);
            uint32_t l_573 = 0x1B6B4DBFL;
            uint32_t l_574 = 0x0E343E1FL;
            int i, j, k;
            l_532 ^= (l_531 = l_530[1][0][7]);
            l_534 &= l_533;
            l_574 |= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_535.s57)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(l_536.s22325430)).s62, ((VECTOR(int32_t, 2))(l_537.s97))))).xxyyxyxx)).s03)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(0x0AE154F5L, ((VECTOR(int32_t, 8))(1L, 0L, 0x75A12111L, 0x5372708CL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_538.s33)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_539.se1174edcc5794e92)).lo)), 0L, l_540, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_541.sb5)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_542.s2304)).odd)), ((VECTOR(int32_t, 16))(0x489A8019L, ((VECTOR(int32_t, 2))(l_543.yx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x660C696EL)).yyxxxyxy)), ((VECTOR(int32_t, 2))(l_544.yy)), ((VECTOR(int32_t, 2))(l_545.s54)), 1L)).sd3))).yyyx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_546.xxxyxxxx)).s1554457501435056)).s1bc0, ((VECTOR(int32_t, 4))(l_547.yxyx))))), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(l_548.ywxw)).yxwxyxwxywyxyzzw, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_549.wxxzwxyxywxyxxzy)), ((VECTOR(uint16_t, 4))(l_550.yxyx)).zxxzwzwyywwwwxxy))).odd)).s0374621572600502, ((VECTOR(int32_t, 4))((-1L), 0L, 0x41FD667CL, (-1L))).zzyzwwzwyxywwwxz)))))).sc4dc, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_551.s79182462)))).hi))), 0x2A39FBE9L, (-6L), 0x32580C4CL, (-10L))).hi, ((VECTOR(int32_t, 8))(l_552.s25307721)).odd))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_553.s1637365510647152)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_554.xyyxyxxx)))).s77, ((VECTOR(int32_t, 4))(l_555.zxxw)).lo, ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_556.xxyyywwx)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_557, l_558, 0L, 0x6A61CA3CL)))), ((VECTOR(int32_t, 2))(0L, 0x48113A18L)).yyyy))).yyyxwxww)), 0x4B285452L, 0x2522005CL, ((VECTOR(int32_t, 4))(l_559.xyxy)), 0x433888BCL)).s2c)))))).xyyyyyyyxyyyxxxx))).lo)).s24))).even, ((l_565 = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(4294967288UL, 0UL, ((VECTOR(uint32_t, 2))(l_560.s43)), ((VECTOR(uint32_t, 4))(l_561.s623d)))).s54, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_562.s04876d5a04b16348)).s47)).yxyx, ((VECTOR(uint32_t, 2))(0x1292745BL, 4294967286UL)).xxyx, ((VECTOR(uint32_t, 4))(l_563.yxyz))))).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_564.yzzxxzxxwzwxxywx)).odd)).s37))).yxxyyxxyyxxyyxxx)).s2) , (l_566 , l_567)), 9L, (-6L))).s23)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x65A545C0L, 0L)), 1L, 0x5A715106L, 0x5B2E4E43L, 0x182232F9L, l_568, l_569, ((VECTOR(int32_t, 2))(l_570.xx)), ((VECTOR(int32_t, 4))(0x2429BD85L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_571.sdf41)).even)), 1L)), 0x6603004EL, (-4L))).sd15c)), 0x084E1996L, 0x74160EF6L)).lo)))), (((VECTOR(int16_t, 16))(l_572.s0bb4ca8ce7549695)).s6 , ((l_573 = (-1L)) , 0x44700DF5L)), 6L, 0L, ((VECTOR(int32_t, 2))(0x3773F015L)), 0x1AE12948L, 0L)).s86, ((VECTOR(int32_t, 2))(0L)))))))), ((VECTOR(int32_t, 2))(7L))))).hi;
            unsigned int result = 0;
            int l_530_i0, l_530_i1, l_530_i2;
            for (l_530_i0 = 0; l_530_i0 < 8; l_530_i0++) {
                for (l_530_i1 = 0; l_530_i1 < 4; l_530_i1++) {
                    for (l_530_i2 = 0; l_530_i2 < 8; l_530_i2++) {
                        result += l_530[l_530_i0][l_530_i1][l_530_i2];
                    }
                }
            }
            result += l_531;
            result += l_532;
            result += l_533;
            result += l_534;
            result += l_535.s7;
            result += l_535.s6;
            result += l_535.s5;
            result += l_535.s4;
            result += l_535.s3;
            result += l_535.s2;
            result += l_535.s1;
            result += l_535.s0;
            result += l_536.s7;
            result += l_536.s6;
            result += l_536.s5;
            result += l_536.s4;
            result += l_536.s3;
            result += l_536.s2;
            result += l_536.s1;
            result += l_536.s0;
            result += l_537.sf;
            result += l_537.se;
            result += l_537.sd;
            result += l_537.sc;
            result += l_537.sb;
            result += l_537.sa;
            result += l_537.s9;
            result += l_537.s8;
            result += l_537.s7;
            result += l_537.s6;
            result += l_537.s5;
            result += l_537.s4;
            result += l_537.s3;
            result += l_537.s2;
            result += l_537.s1;
            result += l_537.s0;
            result += l_538.s7;
            result += l_538.s6;
            result += l_538.s5;
            result += l_538.s4;
            result += l_538.s3;
            result += l_538.s2;
            result += l_538.s1;
            result += l_538.s0;
            result += l_539.sf;
            result += l_539.se;
            result += l_539.sd;
            result += l_539.sc;
            result += l_539.sb;
            result += l_539.sa;
            result += l_539.s9;
            result += l_539.s8;
            result += l_539.s7;
            result += l_539.s6;
            result += l_539.s5;
            result += l_539.s4;
            result += l_539.s3;
            result += l_539.s2;
            result += l_539.s1;
            result += l_539.s0;
            result += l_540;
            result += l_541.sf;
            result += l_541.se;
            result += l_541.sd;
            result += l_541.sc;
            result += l_541.sb;
            result += l_541.sa;
            result += l_541.s9;
            result += l_541.s8;
            result += l_541.s7;
            result += l_541.s6;
            result += l_541.s5;
            result += l_541.s4;
            result += l_541.s3;
            result += l_541.s2;
            result += l_541.s1;
            result += l_541.s0;
            result += l_542.s7;
            result += l_542.s6;
            result += l_542.s5;
            result += l_542.s4;
            result += l_542.s3;
            result += l_542.s2;
            result += l_542.s1;
            result += l_542.s0;
            result += l_543.y;
            result += l_543.x;
            result += l_544.y;
            result += l_544.x;
            result += l_545.s7;
            result += l_545.s6;
            result += l_545.s5;
            result += l_545.s4;
            result += l_545.s3;
            result += l_545.s2;
            result += l_545.s1;
            result += l_545.s0;
            result += l_546.y;
            result += l_546.x;
            result += l_547.y;
            result += l_547.x;
            result += l_548.w;
            result += l_548.z;
            result += l_548.y;
            result += l_548.x;
            result += l_549.w;
            result += l_549.z;
            result += l_549.y;
            result += l_549.x;
            result += l_550.y;
            result += l_550.x;
            result += l_551.sf;
            result += l_551.se;
            result += l_551.sd;
            result += l_551.sc;
            result += l_551.sb;
            result += l_551.sa;
            result += l_551.s9;
            result += l_551.s8;
            result += l_551.s7;
            result += l_551.s6;
            result += l_551.s5;
            result += l_551.s4;
            result += l_551.s3;
            result += l_551.s2;
            result += l_551.s1;
            result += l_551.s0;
            result += l_552.s7;
            result += l_552.s6;
            result += l_552.s5;
            result += l_552.s4;
            result += l_552.s3;
            result += l_552.s2;
            result += l_552.s1;
            result += l_552.s0;
            result += l_553.s7;
            result += l_553.s6;
            result += l_553.s5;
            result += l_553.s4;
            result += l_553.s3;
            result += l_553.s2;
            result += l_553.s1;
            result += l_553.s0;
            result += l_554.y;
            result += l_554.x;
            result += l_555.w;
            result += l_555.z;
            result += l_555.y;
            result += l_555.x;
            result += l_556.w;
            result += l_556.z;
            result += l_556.y;
            result += l_556.x;
            result += l_557;
            result += l_558;
            result += l_559.y;
            result += l_559.x;
            result += l_560.s7;
            result += l_560.s6;
            result += l_560.s5;
            result += l_560.s4;
            result += l_560.s3;
            result += l_560.s2;
            result += l_560.s1;
            result += l_560.s0;
            result += l_561.sf;
            result += l_561.se;
            result += l_561.sd;
            result += l_561.sc;
            result += l_561.sb;
            result += l_561.sa;
            result += l_561.s9;
            result += l_561.s8;
            result += l_561.s7;
            result += l_561.s6;
            result += l_561.s5;
            result += l_561.s4;
            result += l_561.s3;
            result += l_561.s2;
            result += l_561.s1;
            result += l_561.s0;
            result += l_562.sf;
            result += l_562.se;
            result += l_562.sd;
            result += l_562.sc;
            result += l_562.sb;
            result += l_562.sa;
            result += l_562.s9;
            result += l_562.s8;
            result += l_562.s7;
            result += l_562.s6;
            result += l_562.s5;
            result += l_562.s4;
            result += l_562.s3;
            result += l_562.s2;
            result += l_562.s1;
            result += l_562.s0;
            result += l_563.w;
            result += l_563.z;
            result += l_563.y;
            result += l_563.x;
            result += l_564.w;
            result += l_564.z;
            result += l_564.y;
            result += l_564.x;
            result += l_565;
            result += l_566;
            result += l_567;
            result += l_568;
            result += l_569;
            result += l_570.y;
            result += l_570.x;
            result += l_571.sf;
            result += l_571.se;
            result += l_571.sd;
            result += l_571.sc;
            result += l_571.sb;
            result += l_571.sa;
            result += l_571.s9;
            result += l_571.s8;
            result += l_571.s7;
            result += l_571.s6;
            result += l_571.s5;
            result += l_571.s4;
            result += l_571.s3;
            result += l_571.s2;
            result += l_571.s1;
            result += l_571.s0;
            result += l_572.sf;
            result += l_572.se;
            result += l_572.sd;
            result += l_572.sc;
            result += l_572.sb;
            result += l_572.sa;
            result += l_572.s9;
            result += l_572.s8;
            result += l_572.s7;
            result += l_572.s6;
            result += l_572.s5;
            result += l_572.s4;
            result += l_572.s3;
            result += l_572.s2;
            result += l_572.s1;
            result += l_572.s0;
            result += l_573;
            result += l_574;
            atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 24], result);
        }
        else
        { /* block id: 259 */
            (1 + 1);
        }
        for (p_197 = 0; (p_197 >= (-22)); p_197--)
        { /* block id: 264 */
            uint64_t *l_588 = &p_1189->g_274;
            uint32_t *l_590 = &p_1189->g_500;
            uint8_t *l_599 = (void*)0;
            uint8_t *l_600 = (void*)0;
            uint8_t *l_601 = (void*)0;
            uint8_t *l_602 = (void*)0;
            uint8_t *l_603 = (void*)0;
            uint8_t *l_604 = (void*)0;
            int32_t l_605 = (-3L);
            uint8_t l_615 = 0xBFL;
            l_616 ^= ((l_615 |= (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((+(safe_rshift_func_int8_t_s_s((FAKE_DIVERGE(p_1189->local_2_offset, get_local_id(2), 10) , p_197), 7))) == l_583), p_1189->g_344)), (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*l_588) = 0x569AFA46C255E68FL), p_1189->g_317.s0)), (((VECTOR(int64_t, 4))(p_1189->g_589.ywxy)).y || (((((((*l_590) ^= 0x29748A5DL) != (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_1189->g_515 ^= (((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_595.yx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(p_1189->g_596.s66065455)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-3L), 0x7316L)), (-1L), 1L)).yzyxyxyx))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_597.s14216043)).s2221400133052430)).even, ((VECTOR(int16_t, 4))(p_1189->g_598.wyyy)).yyyzyyyx))).s3031126572644226)).sd185))))), (-1L), 7L)).s32)).xyxyxyyy)).s2 , ((((((((((*l_202) = ((VECTOR(uint64_t, 2))(1UL, 1UL)).hi) < ((l_605 = p_197) ^ ((VECTOR(uint8_t, 2))(p_1189->g_606.s77)).hi)) >= ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((-1L), l_613)) && 1UL), 11)), l_614[0])) | p_197) , l_602) == l_600)) && p_1189->g_598.y) < 0x38L) <= p_197) < (-3L)) <= l_614[0]) != p_197)) >= 1UL) ^ p_197)), p_1189->g_388.s1)), p_197))) , l_605) , 0UL) ^ 1UL) & (-3L)))))))) ^ 9UL);
            l_605 = (*l_202);
        }
    }
    return p_1189->g_598.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_comm_values p_1189->l_comm_values p_1189->g_276 p_1189->g_303 p_1189->g_313 p_1189->g_317 p_1189->g_274 p_1189->g_326 p_1189->g_201 p_1189->g_373 p_1189->g_374 p_1189->g_375 p_1189->g_380 p_1189->g_382 p_1189->g_388 p_1189->g_389 p_1189->g_390 p_1189->g_415 p_1189->g_472 p_1189->g_417 p_1189->g_503 p_1189->g_512 p_1189->g_515 p_1189->g_344 p_1189->g_520
 * writes: p_1189->g_241 p_1189->g_274 p_1189->g_276 p_1189->g_201 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_417 p_1189->g_380 p_1189->g_500 p_1189->g_515 p_1189->g_517 p_1189->g_520 p_1189->g_344
 */
int64_t  func_229(int32_t ** p_230, struct S0 * p_1189)
{ /* block id: 145 */
    int32_t l_246 = (-10L);
    uint16_t l_271 = 0UL;
    int32_t ***l_272 = &p_1189->g_241;
    uint64_t *l_273 = &p_1189->g_274;
    int64_t *l_275 = &p_1189->g_276;
    int16_t l_277 = (-3L);
    int32_t **l_521 = &p_1189->g_520;
    int8_t *l_526 = &p_1189->g_344;
    (*l_521) = func_242(l_246, ((*l_275) |= ((safe_lshift_func_int16_t_s_u(l_246, 8)) , ((p_1189->g_comm_values[p_1189->tid] , (0x2E96L ^ (0x1CL & (safe_lshift_func_uint16_t_u_u(l_246, (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((18446744073709551612UL < ((*l_273) = (((((safe_lshift_func_uint16_t_u_s(0x4D09L, 0)) < ((safe_sub_func_int16_t_s_s(((((*l_272) = (((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(l_246, l_271)), l_246)), p_1189->g_comm_values[p_1189->tid])), l_271)) >= 0x01L) , (void*)0)) == p_230) ^ l_271), p_1189->g_comm_values[p_1189->tid])) , 0x23L)) != l_246) < p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))]) <= 255UL))), l_271)) && l_246) <= p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))]), l_246)), l_246)), l_246))))))) <= 0x565BEB9DF2DC09E0L))), l_277, p_1189);
    (*p_1189->g_520) = (safe_mul_func_uint8_t_u_u((**l_521), ((*l_526) ^= ((safe_add_func_uint64_t_u_u(7UL, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0UL, 0x98352340340DCCB8L)).xxyy)).wxzxywyzyxxzwwxy)).sc)) || FAKE_DIVERGE(p_1189->group_0_offset, get_group_id(0), 10)))));
    return (**l_521);
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->g_241
 * writes:
 */
int32_t ** func_231(uint32_t  p_232, int32_t  p_233, int32_t  p_234, struct S0 * p_1189)
{ /* block id: 135 */
    if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 83]) == 4))
    { /* block id: 137 */
        uint32_t l_235 = 7UL;
        uint8_t l_236 = 0xA9L;
        VECTOR(int32_t, 2) l_237 = (VECTOR(int32_t, 2))((-7L), 0x169D787DL);
        VECTOR(int32_t, 8) l_238 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x502ABD1AL), 0x502ABD1AL), 0x502ABD1AL, 8L, 0x502ABD1AL);
        uint8_t l_239 = 0x23L;
        int16_t l_240 = 0x0DCAL;
        int i;
        l_240 = ((l_236 = l_235) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_237.yxyx)), ((VECTOR(int32_t, 4))(l_238.s0714)), ((VECTOR(int32_t, 2))(1L, 0x16D5FB64L)).yxxy))).xwwzxzwwzxxwwxxw, ((VECTOR(int32_t, 4))(1L, (l_237.x = l_239), 0x79292164L, 0x584E0663L)).wxzxzyywzyzwwwwz))).s4b85)).y);
        unsigned int result = 0;
        result += l_235;
        result += l_236;
        result += l_237.y;
        result += l_237.x;
        result += l_238.s7;
        result += l_238.s6;
        result += l_238.s5;
        result += l_238.s4;
        result += l_238.s3;
        result += l_238.s2;
        result += l_238.s1;
        result += l_238.s0;
        result += l_239;
        result += l_240;
        atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 83], result);
    }
    else
    { /* block id: 141 */
        (1 + 1);
    }
    return p_1189->g_241;
}


/* ------------------------------------------ */
/* 
 * reads : p_1189->l_comm_values p_1189->g_303 p_1189->g_313 p_1189->g_317 p_1189->g_274 p_1189->g_comm_values p_1189->g_326 p_1189->g_201 p_1189->g_373 p_1189->g_374 p_1189->g_375 p_1189->g_380 p_1189->g_382 p_1189->g_388 p_1189->g_389 p_1189->g_390 p_1189->g_415 p_1189->g_276 p_1189->g_472 p_1189->g_417 p_1189->g_503 p_1189->g_512 p_1189->g_515 p_1189->g_344
 * writes: p_1189->g_201 p_1189->g_276 p_1189->g_326 p_1189->g_361 p_1189->g_375 p_1189->g_417 p_1189->g_380 p_1189->g_274 p_1189->g_241 p_1189->g_500 p_1189->g_515 p_1189->g_517 p_1189->g_520
 */
int32_t * func_242(uint64_t  p_243, int64_t  p_244, uint16_t  p_245, struct S0 * p_1189)
{ /* block id: 149 */
    uint64_t l_290[3];
    uint32_t l_304 = 0x21FB0914L;
    VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))(0x6D4CEE04L, (VECTOR(int32_t, 4))(0x6D4CEE04L, (VECTOR(int32_t, 2))(0x6D4CEE04L, (-5L)), (-5L)), (-5L), 0x6D4CEE04L, (-5L), (VECTOR(int32_t, 2))(0x6D4CEE04L, (-5L)), (VECTOR(int32_t, 2))(0x6D4CEE04L, (-5L)), 0x6D4CEE04L, (-5L), 0x6D4CEE04L, (-5L));
    int32_t ***l_358 = &p_1189->g_241;
    uint16_t *l_359 = (void*)0;
    int32_t *l_431 = &p_1189->g_417;
    uint16_t *l_496 = &p_1189->g_326;
    VECTOR(int8_t, 16) l_504 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L, (VECTOR(int8_t, 2))((-10L), 0L), (VECTOR(int8_t, 2))((-10L), 0L), (-10L), 0L, (-10L), 0L);
    int i;
    for (i = 0; i < 3; i++)
        l_290[i] = 1UL;
    for (p_244 = 0; (p_244 != (-14)); p_244 = safe_sub_func_uint8_t_u_u(p_244, 1))
    { /* block id: 152 */
        int32_t *l_280 = &p_1189->g_201;
        int32_t *l_281 = &p_1189->g_201;
        int32_t *l_282 = (void*)0;
        int32_t *l_283 = &p_1189->g_201;
        int32_t *l_284 = &p_1189->g_201;
        int32_t *l_285 = &p_1189->g_201;
        int32_t *l_286 = &p_1189->g_201;
        int32_t *l_287 = &p_1189->g_201;
        int32_t *l_288 = &p_1189->g_201;
        int32_t *l_289[10][10] = {{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201},{&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201,(void*)0,&p_1189->g_201,&p_1189->g_201}};
        VECTOR(int32_t, 2) l_316 = (VECTOR(int32_t, 2))(0L, 0x736B146FL);
        int16_t l_318[3];
        uint16_t *l_319 = (void*)0;
        uint16_t *l_320 = (void*)0;
        int32_t ***l_364 = &p_1189->g_241;
        VECTOR(int64_t, 8) l_372 = (VECTOR(int64_t, 8))(0x0CA60B45DA27BD15L, (VECTOR(int64_t, 4))(0x0CA60B45DA27BD15L, (VECTOR(int64_t, 2))(0x0CA60B45DA27BD15L, 0x361C2B21888E1F63L), 0x361C2B21888E1F63L), 0x361C2B21888E1F63L, 0x0CA60B45DA27BD15L, 0x361C2B21888E1F63L);
        VECTOR(int32_t, 8) l_379 = (VECTOR(int32_t, 8))(0x43521BDBL, (VECTOR(int32_t, 4))(0x43521BDBL, (VECTOR(int32_t, 2))(0x43521BDBL, 5L), 5L), 5L, 0x43521BDBL, 5L);
        uint64_t *l_381 = &p_1189->g_274;
        VECTOR(uint8_t, 2) l_430 = (VECTOR(uint8_t, 2))(0x59L, 4UL);
        int i, j;
        for (i = 0; i < 3; i++)
            l_318[i] = 0x3AB0L;
        l_290[1]--;
        if (((safe_sub_func_uint16_t_u_u((4294967295UL ^ (safe_rshift_func_int16_t_s_s((p_245 | (safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))], 9)), l_290[1])), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1189->g_303.s1070)).yyxzwyxz)).s5))), l_304))), ((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((+(((*l_281) = ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((+((VECTOR(uint64_t, 8))(p_1189->g_313.s62732476)).s2) , p_244), (((safe_mul_func_int8_t_s_s(((((VECTOR(int32_t, 8))(l_316.xyxyxyyy)).s3 & ((l_304 , ((VECTOR(uint16_t, 16))(0x7C99L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1189->g_317.s0c)).yyxy))))).odd)).xxyxxyyyxxyyyxxy)))).s861d)), p_243, (255UL && l_290[0]), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 2))(0xB377L)), ((VECTOR(uint16_t, 4))(65531UL)), 0x78E7L)).s3) >= l_318[2])) , p_244), p_1189->g_274)) ^ l_290[0]) , 3UL))), (-1L))) <= p_1189->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1189->tid, 70))])) > p_1189->g_274)), 4294967294UL)), p_245)) , p_1189->g_comm_values[p_1189->tid]))) || p_244))
        { /* block id: 155 */
            VECTOR(int32_t, 4) l_333 = (VECTOR(int32_t, 4))(0x6C4743E2L, (VECTOR(int32_t, 2))(0x6C4743E2L, 0L), 0L);
            int32_t l_345 = 0x06CF536BL;
            int32_t *l_363[3];
            VECTOR(uint8_t, 2) l_407 = (VECTOR(uint8_t, 2))(6UL, 252UL);
            int16_t l_410[9][9] = {{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L},{(-1L),0x5DDAL,(-8L),0x5DDAL,(-1L),0x402CL,0x1571L,(-8L),1L}};
            int32_t l_414 = 0L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_363[i] = &p_1189->g_201;
            (*l_284) = (safe_unary_minus_func_int16_t_s(p_243));
            for (p_243 = 0; (p_243 != 37); ++p_243)
            { /* block id: 159 */
                VECTOR(int16_t, 4) l_346 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x2C35L), 0x2C35L);
                int32_t *l_362 = (void*)0;
                int i;
                for (p_1189->g_276 = 19; (p_1189->g_276 == (-4)); --p_1189->g_276)
                { /* block id: 162 */
                    VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(1L, (-2L));
                    int8_t *l_343[1];
                    VECTOR(int8_t, 16) l_347 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int8_t, 2))((-8L), (-1L)), (VECTOR(int8_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L));
                    int32_t **l_348 = &l_285;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_343[i] = &p_1189->g_344;
                    ++p_1189->g_326;
                    (*l_287) = (*l_283);
                    if (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))((-3L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_329.s2e)), (-7L), 0x701F2B56L)), 1L, ((VECTOR(int32_t, 4))((safe_mul_func_int8_t_s_s((l_329.s1 = 1L), p_244)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_332.xxxx)).even)), 0x6848BA51L)), ((VECTOR(int32_t, 2))(l_333.zw)), (((l_333.x & (l_290[1] && (safe_lshift_func_uint16_t_u_s((0L && (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(((p_243 > ((safe_lshift_func_int8_t_s_u((l_345 &= l_333.y), (*l_287))) > ((VECTOR(int16_t, 8))(l_346.wxwywzwz)).s0)) > ((VECTOR(int8_t, 2))(l_347.s7b)).odd), ((((*l_348) = l_286) != (void*)0) | p_243))))) & p_243), p_244))), l_333.w)))) , (**l_348)) <= l_329.sd), 0x5171539EL, 0x4FF91015L, 1L)), ((VECTOR(int32_t, 16))(0x2387CF6AL)), ((VECTOR(int32_t, 16))(0L))))).se)
                    { /* block id: 168 */
                        int32_t ***l_351 = &p_1189->g_241;
                        uint16_t **l_360[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_360[i] = (void*)0;
                        atomic_xor(&p_1189->l_atomic_reduction[0], ((((safe_lshift_func_int8_t_s_s(((void*)0 == l_351), (safe_add_func_uint32_t_u_u(4294967294UL, l_346.y)))) <= (((safe_div_func_int16_t_s_s(9L, (safe_lshift_func_int16_t_s_u(p_245, ((void*)0 == l_358))))) != (((p_1189->g_361 = l_359) == &p_245) | (**l_348))) > 0x759EB566F3951A5CL)) , 0x59CDL) , p_243) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1189->v_collective += p_1189->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 171 */
                        l_363[2] = l_362;
                    }
                    if (p_1189->g_326)
                        break;
                }
                (*l_287) = ((void*)0 == l_364);
            }
            for (l_345 = (-21); (l_345 != (-6)); l_345++)
            { /* block id: 180 */
                int16_t l_371 = 2L;
                int64_t *l_376 = (void*)0;
                VECTOR(uint32_t, 4) l_383 = (VECTOR(uint32_t, 4))(0x6790FA32L, (VECTOR(uint32_t, 2))(0x6790FA32L, 0xAF753D0AL), 0xAF753D0AL);
                uint8_t *l_411 = (void*)0;
                uint8_t *l_412 = (void*)0;
                int32_t l_413 = 0x08B3F55CL;
                uint32_t *l_416[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*l_286) = (((safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((((l_371 > (p_1189->g_375.y = ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(l_372.s0212)).wxyzzxzx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(p_1189->g_373.s61201702)).hi, ((VECTOR(int64_t, 8))(0x7049ECD370320F73L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1189->g_374.s1315)).odd)).yyyxxyyx)).even)), ((VECTOR(int64_t, 2))(0L, 0x76BF0F56E2CB0DAAL)), 7L)).odd, ((VECTOR(int64_t, 8))(p_1189->g_375.yyxyyyxx)).odd))).wwwwyxwx))))).s3)) >= (((safe_mul_func_int64_t_s_s((-1L), (((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_379.s52)).xyxxyxxxyyxxyyxy, ((VECTOR(int32_t, 2))(p_1189->g_380.xy)).xxxyxyxxxyxyxxyy))).s1 >= (0x3D1EL >= ((1L & ((void*)0 != l_381)) || 0x3D9B70BCL))))) > 18446744073709551613UL) , p_245)) , (void*)0) != &p_1189->g_241), 0x66L)), FAKE_DIVERGE(p_1189->local_1_offset, get_local_id(1), 10))) ^ 3UL) , 0x36FE500FL);
                p_1189->g_380.x ^= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1189->g_382.xxyxyxyy)).s1066615055107672)).sb , (((((*l_280) | 0x687A6853L) , (p_1189->g_417 = (((VECTOR(uint32_t, 4))(l_383.zyww)).z , (((safe_sub_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1189->g_388.s7256ca13)).s6704372157633463)).lo, ((VECTOR(int16_t, 2))(p_1189->g_389.s71)).yxyyyxxy, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))((-3L), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1189->g_390.xx)).xyxxyxyy)).s41, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-1L), 0x2AL)))).yyxx)).odd))).lo, ((safe_mul_func_int16_t_s_s((((p_245 & ((*l_288) = (((safe_lshift_func_uint8_t_u_u((l_413 &= ((0x0C4C7AEAL != (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((FAKE_DIVERGE(p_1189->group_1_offset, get_group_id(1), 10) , 0x2FL), ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 2))(0UL, 255UL)).xxxyxyxy, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(1UL, 0x3CL)).xxyyxxyy, (uint8_t)p_1189->g_313.s4))).s7425401546070060, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0x65L, 0x97L, ((VECTOR(uint8_t, 2))(l_407.yy)), 0x85L, (safe_lshift_func_int16_t_s_s((-1L), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))((l_410[8][1] > GROUP_DIVERGE(1, 1)), ((&p_1189->g_326 == (void*)0) != 0xF0L), p_1189->g_201, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 8))((-1L))), l_383.z, 0x44E7L, 1L)).sa4, (int16_t)p_243, (int16_t)p_245))).odd)), ((VECTOR(uint8_t, 4))(0xC5L)), 0xA5L, 251UL, ((VECTOR(uint8_t, 4))(251UL)))))), ((VECTOR(uint8_t, 16))(0xDBL))))).hi, ((VECTOR(uint8_t, 8))(0xEFL))))).s0)), (*l_286))) ^ p_245), FAKE_DIVERGE(p_1189->global_2_offset, get_global_id(2), 10))) <= (*l_286)), l_383.x)) <= p_245) == p_1189->g_374.s4), 13)), 0x3D36C170L, 0x6E34FC9BL, 8L)).wxyywzxyyxwyyzzw, ((VECTOR(int32_t, 16))((-1L)))))))).sc, p_244))) , p_244)), p_243)) || p_244) >= p_244))) <= p_1189->g_382.x) > FAKE_DIVERGE(p_1189->group_0_offset, get_group_id(0), 10)), p_244)) & 3L), 0x1AL, p_244, ((VECTOR(int8_t, 2))(6L)), 1L, ((VECTOR(int8_t, 8))((-9L))))).s08, ((VECTOR(uint8_t, 2))(1UL))))).xxyxxyyy))).s5, p_245)) <= l_414) , 65535UL) < p_1189->g_415), 0x323D87D20524BC72L)) , 0L) > 0UL)))) == 0x5EA2B003L) || l_383.x));
            }
            (*l_286) |= ((p_245 , &p_1189->g_274) != (void*)0);
        }
        else
        { /* block id: 189 */
            VECTOR(int8_t, 2) l_421 = (VECTOR(int8_t, 2))(2L, 0x12L);
            int i;
            p_1189->g_380.x &= (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint64_t_u((((VECTOR(int8_t, 8))(l_421.yxxxxxxx)).s3 && (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((~p_244) , 0x16L), (((0UL > ((p_245 = ((((p_243 , (void*)0) != (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(0x6CEDE78F07ABB56EL, (-1L))).yxyxxyxxyxyxxxyx, ((VECTOR(int64_t, 2))(0x330ACA410F369EBCL, (-6L))).xyxxyxxxyyxxxxxx))).sb2b4)).x , &p_1189->g_361)) ^ ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(250UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_430.xx)).xyxyxyxy)).s2)), p_1189->g_201)) , p_243)) >= 4294967287UL)) || p_1189->g_317.s2)) == p_243) , 0x1EL))), 4UL))))), p_1189->g_375.y));
            return l_431;
        }
    }
    for (l_304 = 18; (l_304 == 52); l_304++)
    { /* block id: 197 */
        int32_t **l_479 = (void*)0;
        int32_t l_489 = 4L;
        uint32_t *l_499 = &p_1189->g_500;
        VECTOR(int8_t, 16) l_501 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x0CL), 0x0CL), 0x0CL, 1L, 0x0CL, (VECTOR(int8_t, 2))(1L, 0x0CL), (VECTOR(int8_t, 2))(1L, 0x0CL), 1L, 0x0CL, 1L, 0x0CL);
        VECTOR(int8_t, 2) l_502 = (VECTOR(int8_t, 2))(0x08L, 1L);
        uint64_t l_505 = 0xB5084BC34CB39480L;
        uint64_t l_513 = 0x617A8E50634E57DEL;
        uint32_t *l_514 = &p_1189->g_515;
        uint32_t *l_516 = &p_1189->g_517[3];
        uint32_t l_518[1];
        int32_t *l_519[4][7][8] = {{{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201}},{{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201}},{{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201}},{{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201},{&p_1189->g_201,(void*)0,(void*)0,&p_1189->g_201,(void*)0,&p_1189->g_417,(void*)0,&p_1189->g_201}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_518[i] = 0xF0D7B034L;
        for (p_1189->g_274 = 0; (p_1189->g_274 >= 41); p_1189->g_274++)
        { /* block id: 200 */
            uint64_t l_480 = 18446744073709551609UL;
            uint16_t *l_481 = (void*)0;
            uint16_t *l_482 = &p_1189->g_326;
            int32_t *l_487[1];
            uint32_t l_488 = 4294967287UL;
            int i;
            for (i = 0; i < 1; i++)
                l_487[i] = &p_1189->g_417;
            for (p_1189->g_276 = 0; (p_1189->g_276 >= (-14)); p_1189->g_276 = safe_sub_func_int8_t_s_s(p_1189->g_276, 1))
            { /* block id: 203 */
                p_1189->g_380.x ^= 0x352D91BAL;
            }
            if ((atomic_inc(&p_1189->g_atomic_input[97 * get_linear_group_id() + 81]) == 2))
            { /* block id: 207 */
                int32_t l_438 = 8L;
                for (l_438 = 0; (l_438 > (-24)); l_438 = safe_sub_func_uint64_t_u_u(l_438, 2))
                { /* block id: 210 */
                    int32_t l_441 = 0x26F2A685L;
                    for (l_441 = 1; (l_441 >= 4); l_441++)
                    { /* block id: 213 */
                        int64_t l_444 = 5L;
                        uint32_t l_445 = 0x25E9E4BCL;
                        uint16_t l_446 = 0xE0F3L;
                        uint32_t l_447 = 5UL;
                        int64_t l_450 = 0x57AA783BB0D358DDL;
                        int64_t l_451 = 0x224C9806AD5AF7CFL;
                        uint32_t l_452 = 4294967295UL;
                        int32_t l_453 = 1L;
                        uint16_t l_454 = 9UL;
                        VECTOR(int8_t, 4) l_455 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0L), 0L);
                        VECTOR(int8_t, 4) l_456 = (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, (-9L)), (-9L));
                        VECTOR(int8_t, 16) l_457 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x62L), 0x62L), 0x62L, 1L, 0x62L, (VECTOR(int8_t, 2))(1L, 0x62L), (VECTOR(int8_t, 2))(1L, 0x62L), 1L, 0x62L, 1L, 0x62L);
                        uint32_t l_458 = 0x5A348085L;
                        uint32_t l_459[2];
                        uint32_t l_460 = 4294967292UL;
                        int16_t l_461 = 0x0841L;
                        VECTOR(int8_t, 2) l_462 = (VECTOR(int8_t, 2))(0x3EL, 9L);
                        VECTOR(int8_t, 16) l_463 = (VECTOR(int8_t, 16))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 6L), 6L), 6L, 0x2AL, 6L, (VECTOR(int8_t, 2))(0x2AL, 6L), (VECTOR(int8_t, 2))(0x2AL, 6L), 0x2AL, 6L, 0x2AL, 6L);
                        VECTOR(int8_t, 16) l_464 = (VECTOR(int8_t, 16))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x5DL), 0x5DL), 0x5DL, 0x03L, 0x5DL, (VECTOR(int8_t, 2))(0x03L, 0x5DL), (VECTOR(int8_t, 2))(0x03L, 0x5DL), 0x03L, 0x5DL, 0x03L, 0x5DL);
                        uint8_t l_465 = 0x3AL;
                        VECTOR(uint32_t, 16) l_466 = (VECTOR(uint32_t, 16))(0xB4AE6775L, (VECTOR(uint32_t, 4))(0xB4AE6775L, (VECTOR(uint32_t, 2))(0xB4AE6775L, 0xB6F31288L), 0xB6F31288L), 0xB6F31288L, 0xB4AE6775L, 0xB6F31288L, (VECTOR(uint32_t, 2))(0xB4AE6775L, 0xB6F31288L), (VECTOR(uint32_t, 2))(0xB4AE6775L, 0xB6F31288L), 0xB4AE6775L, 0xB6F31288L, 0xB4AE6775L, 0xB6F31288L);
                        uint32_t l_467 = 4294967287UL;
                        uint32_t l_468[8] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
                        uint64_t l_469 = 18446744073709551610UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_459[i] = 7UL;
                        l_446 = (l_445 ^= l_444);
                        l_447--;
                        l_452 ^= (l_451 = l_450);
                        l_469 = ((l_454 ^= (l_453 = 0x071A35C6L)) , ((l_467 = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(l_455.zzxzywwxzzxyxwzx)).sa420, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x34L, 9L)), 0x2BL, ((VECTOR(int8_t, 4))(l_456.ywwy)), 1L)).even))), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(0x7AL, 0x1FL)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(l_457.sd6)), ((VECTOR(int8_t, 16))(8L, (l_459[1] = l_458), 1L, (l_460 , (l_457.s1 |= l_461)), ((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(0x36L, ((VECTOR(int8_t, 8))(1L, 0x3BL, ((VECTOR(int8_t, 4))(l_462.xxxx)), 0x58L, 0x3BL)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_463.s0cdd)), (int8_t)((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(1L, (-3L))), (-9L), 0x4AL)), ((VECTOR(int8_t, 8))((-7L), 7L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_464.s5676)).hi)).xyyy)), 0x4BL, 0x0DL)).lo))).z))).even)), 0x37L, ((VECTOR(int8_t, 2))(9L)), 6L, 3L)), ((VECTOR(int8_t, 16))(0L)), ((VECTOR(int8_t, 16))(0x7BL))))).seb)), (-1L))), l_465, 0x04L, l_466.s2, 4L, (-8L), ((VECTOR(int8_t, 2))(0x1EL)), 0x76L)).s7f, ((VECTOR(int8_t, 2))(0x77L)))))))), 1L, 1L)).s1) , l_468[7]));
                    }
                }
                unsigned int result = 0;
                result += l_438;
                atomic_add(&p_1189->g_special_values[97 * get_linear_group_id() + 81], result);
            }
            else
            { /* block id: 227 */
                (1 + 1);
            }
            l_489 ^= (((safe_sub_func_uint32_t_u_u((p_1189->g_472[5] , ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((~((*l_431) = (((((safe_mul_func_uint8_t_u_u((((*l_358) = l_479) != (void*)0), l_480)) != ((*l_482)--)) & ((&p_1189->g_344 != ((safe_mod_func_int32_t_s_s((((void*)0 != &l_481) < (&p_1189->g_201 != l_487[0])), p_1189->g_comm_values[p_1189->tid])) , &p_1189->g_344)) == l_488)) , l_358) != (void*)0))) & p_245), FAKE_DIVERGE(p_1189->global_2_offset, get_global_id(2), 10))) | p_244), 12)) > GROUP_DIVERGE(0, 1))), p_243)) & p_1189->g_382.x) ^ 0x80F38FB30ABB0502L);
        }
        (*l_431) = p_243;
        l_329.se ^= ((safe_mul_func_int8_t_s_s((((safe_div_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((((l_496 != &p_1189->g_326) , (0xB7L <= ((safe_add_func_uint32_t_u_u(((*l_499) = 0x67B3FC34L), ((*l_516) = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_501.s95)).xxxx)).yzwwyyyx, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_502.xxxy)))))).wxxyywxxwyxxyzxy, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((*l_431), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(0x2CL, ((VECTOR(int8_t, 2))(3L, 1L)), (-6L))).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(p_1189->g_503.sed80d1316c65b210)).s84f0, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_504.sb18699f3)).s1452054254350574)).odd, (int8_t)1L))).s01, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-5L), 0L)).xxyx)).even))).xyyx))).xxyywxwzzyxzzzzz)).s05)).yyxyxyyyxyxyxyxx, ((VECTOR(int8_t, 2))(0x03L, 0x13L)).xxyyxxxxyyyyxxxy))).s742c, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))((l_505 < ((((((*l_514) ^= (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(1L, 0x3160D24B676F917EL)).yyyy, ((VECTOR(int64_t, 16))((((((((safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((((((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(p_1189->g_512.xyxxyxxyyyyyxyxy)), ((VECTOR(int32_t, 2))(1L, (-5L))).xxxxxxyyyxxyyyxy))).sf7f0, ((VECTOR(int32_t, 2))((-2L), 0x796EFB33L)).xyyy))).z != p_244) <= p_244) , (*l_431)) , (*l_431)), p_1189->g_503.s2)) || p_243), p_243)) && p_244) <= l_513) >= 0x40E0L) || (-9L)) <= p_245) | 0x78C0L), ((VECTOR(int64_t, 4))(0x53DF8AB15005DFCCL)), ((VECTOR(int64_t, 2))(6L)), 0x013C35D429D18758L, 0x79971DD3C9E120DFL, p_1189->g_313.s3, 0x1A5F26D177BDA850L, p_1189->g_373.s4, 2L, ((VECTOR(int64_t, 2))(0L)), 0L)).sc93c))), ((VECTOR(int64_t, 4))((-10L))))).s1543515375474003)).s1, p_1189->g_274))) <= 0L) , FAKE_DIVERGE(p_1189->group_1_offset, get_group_id(1), 10)) , (-1L)) == FAKE_DIVERGE(p_1189->local_0_offset, get_local_id(0), 10))), ((VECTOR(int8_t, 2))(1L)), 0x7AL)).even, ((VECTOR(int8_t, 2))(3L))))).xyyx))).odd))))), 0x0EL)))).odd, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x68L))))).xyyy))).yzzwzxyz, (int8_t)p_244))).s0430664062561576))).sd2d2, ((VECTOR(int8_t, 4))(0x14L))))), p_245, 0x13L, (-2L))))))))).s4275547656267655)).sba1a)).y == GROUP_DIVERGE(2, 1))))) != p_245))) , p_244) > GROUP_DIVERGE(0, 1)), p_1189->g_344)) | 0L) | p_1189->g_373.s1), 1UL)) >= 0x12L) , p_244), (-5L))) , l_518[0]);
    }
    p_1189->g_520 = &p_1189->g_417;
    return l_431;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_comm_values[i] = 1;
    struct S0 c_1190;
    struct S0* p_1189 = &c_1190;
    struct S0 c_1191 = {
        0x00L, // p_1189->g_175
        (void*)0, // p_1189->g_191
        0x22683E64L, // p_1189->g_201
        0L, // p_1189->g_204
        {0x37EF6DE3L,0x37EF6DE3L,0x37EF6DE3L,0x37EF6DE3L,0x37EF6DE3L,0x37EF6DE3L}, // p_1189->g_205
        (void*)0, // p_1189->g_241
        0x5772DBF15BDAC5F2L, // p_1189->g_274
        0L, // p_1189->g_276
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x28L), 0x28L), 0x28L, 0UL, 0x28L), // p_1189->g_303
        (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0xA49BE085A8B14A20L), 0xA49BE085A8B14A20L), 0xA49BE085A8B14A20L, 18446744073709551614UL, 0xA49BE085A8B14A20L), // p_1189->g_313
        (VECTOR(uint16_t, 16))(0xBADBL, (VECTOR(uint16_t, 4))(0xBADBL, (VECTOR(uint16_t, 2))(0xBADBL, 0xD56CL), 0xD56CL), 0xD56CL, 0xBADBL, 0xD56CL, (VECTOR(uint16_t, 2))(0xBADBL, 0xD56CL), (VECTOR(uint16_t, 2))(0xBADBL, 0xD56CL), 0xBADBL, 0xD56CL, 0xBADBL, 0xD56CL), // p_1189->g_317
        0x8B9BL, // p_1189->g_326
        1L, // p_1189->g_344
        (void*)0, // p_1189->g_361
        (VECTOR(int64_t, 8))(0x0FB740927EC23776L, (VECTOR(int64_t, 4))(0x0FB740927EC23776L, (VECTOR(int64_t, 2))(0x0FB740927EC23776L, 0x1A2E9158BB53B4D7L), 0x1A2E9158BB53B4D7L), 0x1A2E9158BB53B4D7L, 0x0FB740927EC23776L, 0x1A2E9158BB53B4D7L), // p_1189->g_373
        (VECTOR(int64_t, 8))(0x77C02BE83FFCD047L, (VECTOR(int64_t, 4))(0x77C02BE83FFCD047L, (VECTOR(int64_t, 2))(0x77C02BE83FFCD047L, 9L), 9L), 9L, 0x77C02BE83FFCD047L, 9L), // p_1189->g_374
        (VECTOR(int64_t, 2))(0x6F711E883802A891L, 1L), // p_1189->g_375
        (VECTOR(int32_t, 2))(0x45028FC8L, (-1L)), // p_1189->g_380
        (VECTOR(int64_t, 2))(0L, 0x021C16AA9396B7FBL), // p_1189->g_382
        (VECTOR(int16_t, 16))(0x2449L, (VECTOR(int16_t, 4))(0x2449L, (VECTOR(int16_t, 2))(0x2449L, 0x745FL), 0x745FL), 0x745FL, 0x2449L, 0x745FL, (VECTOR(int16_t, 2))(0x2449L, 0x745FL), (VECTOR(int16_t, 2))(0x2449L, 0x745FL), 0x2449L, 0x745FL, 0x2449L, 0x745FL), // p_1189->g_388
        (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 8L), 8L), 8L, 5L, 8L), // p_1189->g_389
        (VECTOR(int8_t, 2))(0x1EL, 0x4AL), // p_1189->g_390
        0x5B6373B779006878L, // p_1189->g_415
        0x624AB9EEL, // p_1189->g_417
        {0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL}, // p_1189->g_472
        1UL, // p_1189->g_500
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int8_t, 2))((-1L), (-3L)), (VECTOR(int8_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L)), // p_1189->g_503
        (VECTOR(int32_t, 2))(0x07F35D76L, 0x49AA7848L), // p_1189->g_512
        0xE0B41486L, // p_1189->g_515
        {0x710FFCDAL,0x710FFCDAL,0x710FFCDAL,0x710FFCDAL,0x710FFCDAL}, // p_1189->g_517
        (void*)0, // p_1189->g_520
        (-1L), // p_1189->g_527
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7170917DB7829E45L), 0x7170917DB7829E45L), // p_1189->g_589
        (VECTOR(int16_t, 8))(0x557CL, (VECTOR(int16_t, 4))(0x557CL, (VECTOR(int16_t, 2))(0x557CL, 8L), 8L), 8L, 0x557CL, 8L), // p_1189->g_596
        (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x5566L), 0x5566L), // p_1189->g_598
        (VECTOR(uint8_t, 8))(0xD5L, (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 0xC3L), 0xC3L), 0xC3L, 0xD5L, 0xC3L), // p_1189->g_606
        (void*)0, // p_1189->g_620
        {{{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620},{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620}},{{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620},{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620}},{{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620},{&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620,&p_1189->g_620}}}, // p_1189->g_619
        (VECTOR(int32_t, 4))(0x4CBCAB88L, (VECTOR(int32_t, 2))(0x4CBCAB88L, 0x178E2F0BL), 0x178E2F0BL), // p_1189->g_647
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x35D7L), 0x35D7L), 0x35D7L, 0UL, 0x35D7L, (VECTOR(uint16_t, 2))(0UL, 0x35D7L), (VECTOR(uint16_t, 2))(0UL, 0x35D7L), 0UL, 0x35D7L, 0UL, 0x35D7L), // p_1189->g_751
        (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xF9F4EAC9L), 0xF9F4EAC9L), 0xF9F4EAC9L, 4294967291UL, 0xF9F4EAC9L, (VECTOR(uint32_t, 2))(4294967291UL, 0xF9F4EAC9L), (VECTOR(uint32_t, 2))(4294967291UL, 0xF9F4EAC9L), 4294967291UL, 0xF9F4EAC9L, 4294967291UL, 0xF9F4EAC9L), // p_1189->g_753
        (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x73C99A490DC1C83EL), 0x73C99A490DC1C83EL), 0x73C99A490DC1C83EL, 18446744073709551608UL, 0x73C99A490DC1C83EL), // p_1189->g_766
        (VECTOR(int32_t, 2))((-1L), (-1L)), // p_1189->g_768
        {&p_1189->g_620,&p_1189->g_620,&p_1189->g_620}, // p_1189->g_778
        (void*)0, // p_1189->g_861
        &p_1189->g_861, // p_1189->g_860
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1189->g_870
        (VECTOR(int64_t, 2))(9L, 0L), // p_1189->g_872
        (VECTOR(int16_t, 2))(0x0E98L, (-1L)), // p_1189->g_917
        (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x4F9FL), 0x4F9FL), 0x4F9FL, (-5L), 0x4F9FL, (VECTOR(int16_t, 2))((-5L), 0x4F9FL), (VECTOR(int16_t, 2))((-5L), 0x4F9FL), (-5L), 0x4F9FL, (-5L), 0x4F9FL), // p_1189->g_919
        (void*)0, // p_1189->g_986
        0x76FC1897397E736FL, // p_1189->g_987
        (VECTOR(uint32_t, 2))(0UL, 4294967294UL), // p_1189->g_1047
        0x9B97CD28L, // p_1189->g_1069
        (VECTOR(int8_t, 2))(0x52L, 7L), // p_1189->g_1096
        (VECTOR(uint16_t, 4))(0x0A3DL, (VECTOR(uint16_t, 2))(0x0A3DL, 0x6115L), 0x6115L), // p_1189->g_1123
        (VECTOR(uint16_t, 4))(0xDE49L, (VECTOR(uint16_t, 2))(0xDE49L, 1UL), 1UL), // p_1189->g_1125
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL), // p_1189->g_1126
        (VECTOR(uint16_t, 2))(0UL, 0xE695L), // p_1189->g_1133
        (VECTOR(uint32_t, 2))(0xD3D23243L, 4294967290UL), // p_1189->g_1136
        0x7A230D2EL, // p_1189->g_1187
        0, // p_1189->v_collective
        sequence_input[get_global_id(0)], // p_1189->global_0_offset
        sequence_input[get_global_id(1)], // p_1189->global_1_offset
        sequence_input[get_global_id(2)], // p_1189->global_2_offset
        sequence_input[get_local_id(0)], // p_1189->local_0_offset
        sequence_input[get_local_id(1)], // p_1189->local_1_offset
        sequence_input[get_local_id(2)], // p_1189->local_2_offset
        sequence_input[get_group_id(0)], // p_1189->group_0_offset
        sequence_input[get_group_id(1)], // p_1189->group_1_offset
        sequence_input[get_group_id(2)], // p_1189->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 70)), permutations[0][get_linear_local_id()])), // p_1189->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1190 = c_1191;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1189);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1189->g_175, "p_1189->g_175", print_hash_value);
    transparent_crc(p_1189->g_201, "p_1189->g_201", print_hash_value);
    transparent_crc(p_1189->g_204, "p_1189->g_204", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1189->g_205[i], "p_1189->g_205[i]", print_hash_value);

    }
    transparent_crc(p_1189->g_274, "p_1189->g_274", print_hash_value);
    transparent_crc(p_1189->g_276, "p_1189->g_276", print_hash_value);
    transparent_crc(p_1189->g_303.s0, "p_1189->g_303.s0", print_hash_value);
    transparent_crc(p_1189->g_303.s1, "p_1189->g_303.s1", print_hash_value);
    transparent_crc(p_1189->g_303.s2, "p_1189->g_303.s2", print_hash_value);
    transparent_crc(p_1189->g_303.s3, "p_1189->g_303.s3", print_hash_value);
    transparent_crc(p_1189->g_303.s4, "p_1189->g_303.s4", print_hash_value);
    transparent_crc(p_1189->g_303.s5, "p_1189->g_303.s5", print_hash_value);
    transparent_crc(p_1189->g_303.s6, "p_1189->g_303.s6", print_hash_value);
    transparent_crc(p_1189->g_303.s7, "p_1189->g_303.s7", print_hash_value);
    transparent_crc(p_1189->g_313.s0, "p_1189->g_313.s0", print_hash_value);
    transparent_crc(p_1189->g_313.s1, "p_1189->g_313.s1", print_hash_value);
    transparent_crc(p_1189->g_313.s2, "p_1189->g_313.s2", print_hash_value);
    transparent_crc(p_1189->g_313.s3, "p_1189->g_313.s3", print_hash_value);
    transparent_crc(p_1189->g_313.s4, "p_1189->g_313.s4", print_hash_value);
    transparent_crc(p_1189->g_313.s5, "p_1189->g_313.s5", print_hash_value);
    transparent_crc(p_1189->g_313.s6, "p_1189->g_313.s6", print_hash_value);
    transparent_crc(p_1189->g_313.s7, "p_1189->g_313.s7", print_hash_value);
    transparent_crc(p_1189->g_317.s0, "p_1189->g_317.s0", print_hash_value);
    transparent_crc(p_1189->g_317.s1, "p_1189->g_317.s1", print_hash_value);
    transparent_crc(p_1189->g_317.s2, "p_1189->g_317.s2", print_hash_value);
    transparent_crc(p_1189->g_317.s3, "p_1189->g_317.s3", print_hash_value);
    transparent_crc(p_1189->g_317.s4, "p_1189->g_317.s4", print_hash_value);
    transparent_crc(p_1189->g_317.s5, "p_1189->g_317.s5", print_hash_value);
    transparent_crc(p_1189->g_317.s6, "p_1189->g_317.s6", print_hash_value);
    transparent_crc(p_1189->g_317.s7, "p_1189->g_317.s7", print_hash_value);
    transparent_crc(p_1189->g_317.s8, "p_1189->g_317.s8", print_hash_value);
    transparent_crc(p_1189->g_317.s9, "p_1189->g_317.s9", print_hash_value);
    transparent_crc(p_1189->g_317.sa, "p_1189->g_317.sa", print_hash_value);
    transparent_crc(p_1189->g_317.sb, "p_1189->g_317.sb", print_hash_value);
    transparent_crc(p_1189->g_317.sc, "p_1189->g_317.sc", print_hash_value);
    transparent_crc(p_1189->g_317.sd, "p_1189->g_317.sd", print_hash_value);
    transparent_crc(p_1189->g_317.se, "p_1189->g_317.se", print_hash_value);
    transparent_crc(p_1189->g_317.sf, "p_1189->g_317.sf", print_hash_value);
    transparent_crc(p_1189->g_326, "p_1189->g_326", print_hash_value);
    transparent_crc(p_1189->g_344, "p_1189->g_344", print_hash_value);
    transparent_crc(p_1189->g_373.s0, "p_1189->g_373.s0", print_hash_value);
    transparent_crc(p_1189->g_373.s1, "p_1189->g_373.s1", print_hash_value);
    transparent_crc(p_1189->g_373.s2, "p_1189->g_373.s2", print_hash_value);
    transparent_crc(p_1189->g_373.s3, "p_1189->g_373.s3", print_hash_value);
    transparent_crc(p_1189->g_373.s4, "p_1189->g_373.s4", print_hash_value);
    transparent_crc(p_1189->g_373.s5, "p_1189->g_373.s5", print_hash_value);
    transparent_crc(p_1189->g_373.s6, "p_1189->g_373.s6", print_hash_value);
    transparent_crc(p_1189->g_373.s7, "p_1189->g_373.s7", print_hash_value);
    transparent_crc(p_1189->g_374.s0, "p_1189->g_374.s0", print_hash_value);
    transparent_crc(p_1189->g_374.s1, "p_1189->g_374.s1", print_hash_value);
    transparent_crc(p_1189->g_374.s2, "p_1189->g_374.s2", print_hash_value);
    transparent_crc(p_1189->g_374.s3, "p_1189->g_374.s3", print_hash_value);
    transparent_crc(p_1189->g_374.s4, "p_1189->g_374.s4", print_hash_value);
    transparent_crc(p_1189->g_374.s5, "p_1189->g_374.s5", print_hash_value);
    transparent_crc(p_1189->g_374.s6, "p_1189->g_374.s6", print_hash_value);
    transparent_crc(p_1189->g_374.s7, "p_1189->g_374.s7", print_hash_value);
    transparent_crc(p_1189->g_375.x, "p_1189->g_375.x", print_hash_value);
    transparent_crc(p_1189->g_375.y, "p_1189->g_375.y", print_hash_value);
    transparent_crc(p_1189->g_380.x, "p_1189->g_380.x", print_hash_value);
    transparent_crc(p_1189->g_380.y, "p_1189->g_380.y", print_hash_value);
    transparent_crc(p_1189->g_382.x, "p_1189->g_382.x", print_hash_value);
    transparent_crc(p_1189->g_382.y, "p_1189->g_382.y", print_hash_value);
    transparent_crc(p_1189->g_388.s0, "p_1189->g_388.s0", print_hash_value);
    transparent_crc(p_1189->g_388.s1, "p_1189->g_388.s1", print_hash_value);
    transparent_crc(p_1189->g_388.s2, "p_1189->g_388.s2", print_hash_value);
    transparent_crc(p_1189->g_388.s3, "p_1189->g_388.s3", print_hash_value);
    transparent_crc(p_1189->g_388.s4, "p_1189->g_388.s4", print_hash_value);
    transparent_crc(p_1189->g_388.s5, "p_1189->g_388.s5", print_hash_value);
    transparent_crc(p_1189->g_388.s6, "p_1189->g_388.s6", print_hash_value);
    transparent_crc(p_1189->g_388.s7, "p_1189->g_388.s7", print_hash_value);
    transparent_crc(p_1189->g_388.s8, "p_1189->g_388.s8", print_hash_value);
    transparent_crc(p_1189->g_388.s9, "p_1189->g_388.s9", print_hash_value);
    transparent_crc(p_1189->g_388.sa, "p_1189->g_388.sa", print_hash_value);
    transparent_crc(p_1189->g_388.sb, "p_1189->g_388.sb", print_hash_value);
    transparent_crc(p_1189->g_388.sc, "p_1189->g_388.sc", print_hash_value);
    transparent_crc(p_1189->g_388.sd, "p_1189->g_388.sd", print_hash_value);
    transparent_crc(p_1189->g_388.se, "p_1189->g_388.se", print_hash_value);
    transparent_crc(p_1189->g_388.sf, "p_1189->g_388.sf", print_hash_value);
    transparent_crc(p_1189->g_389.s0, "p_1189->g_389.s0", print_hash_value);
    transparent_crc(p_1189->g_389.s1, "p_1189->g_389.s1", print_hash_value);
    transparent_crc(p_1189->g_389.s2, "p_1189->g_389.s2", print_hash_value);
    transparent_crc(p_1189->g_389.s3, "p_1189->g_389.s3", print_hash_value);
    transparent_crc(p_1189->g_389.s4, "p_1189->g_389.s4", print_hash_value);
    transparent_crc(p_1189->g_389.s5, "p_1189->g_389.s5", print_hash_value);
    transparent_crc(p_1189->g_389.s6, "p_1189->g_389.s6", print_hash_value);
    transparent_crc(p_1189->g_389.s7, "p_1189->g_389.s7", print_hash_value);
    transparent_crc(p_1189->g_390.x, "p_1189->g_390.x", print_hash_value);
    transparent_crc(p_1189->g_390.y, "p_1189->g_390.y", print_hash_value);
    transparent_crc(p_1189->g_415, "p_1189->g_415", print_hash_value);
    transparent_crc(p_1189->g_417, "p_1189->g_417", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1189->g_472[i], "p_1189->g_472[i]", print_hash_value);

    }
    transparent_crc(p_1189->g_500, "p_1189->g_500", print_hash_value);
    transparent_crc(p_1189->g_503.s0, "p_1189->g_503.s0", print_hash_value);
    transparent_crc(p_1189->g_503.s1, "p_1189->g_503.s1", print_hash_value);
    transparent_crc(p_1189->g_503.s2, "p_1189->g_503.s2", print_hash_value);
    transparent_crc(p_1189->g_503.s3, "p_1189->g_503.s3", print_hash_value);
    transparent_crc(p_1189->g_503.s4, "p_1189->g_503.s4", print_hash_value);
    transparent_crc(p_1189->g_503.s5, "p_1189->g_503.s5", print_hash_value);
    transparent_crc(p_1189->g_503.s6, "p_1189->g_503.s6", print_hash_value);
    transparent_crc(p_1189->g_503.s7, "p_1189->g_503.s7", print_hash_value);
    transparent_crc(p_1189->g_503.s8, "p_1189->g_503.s8", print_hash_value);
    transparent_crc(p_1189->g_503.s9, "p_1189->g_503.s9", print_hash_value);
    transparent_crc(p_1189->g_503.sa, "p_1189->g_503.sa", print_hash_value);
    transparent_crc(p_1189->g_503.sb, "p_1189->g_503.sb", print_hash_value);
    transparent_crc(p_1189->g_503.sc, "p_1189->g_503.sc", print_hash_value);
    transparent_crc(p_1189->g_503.sd, "p_1189->g_503.sd", print_hash_value);
    transparent_crc(p_1189->g_503.se, "p_1189->g_503.se", print_hash_value);
    transparent_crc(p_1189->g_503.sf, "p_1189->g_503.sf", print_hash_value);
    transparent_crc(p_1189->g_512.x, "p_1189->g_512.x", print_hash_value);
    transparent_crc(p_1189->g_512.y, "p_1189->g_512.y", print_hash_value);
    transparent_crc(p_1189->g_515, "p_1189->g_515", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1189->g_517[i], "p_1189->g_517[i]", print_hash_value);

    }
    transparent_crc(p_1189->g_527, "p_1189->g_527", print_hash_value);
    transparent_crc(p_1189->g_589.x, "p_1189->g_589.x", print_hash_value);
    transparent_crc(p_1189->g_589.y, "p_1189->g_589.y", print_hash_value);
    transparent_crc(p_1189->g_589.z, "p_1189->g_589.z", print_hash_value);
    transparent_crc(p_1189->g_589.w, "p_1189->g_589.w", print_hash_value);
    transparent_crc(p_1189->g_596.s0, "p_1189->g_596.s0", print_hash_value);
    transparent_crc(p_1189->g_596.s1, "p_1189->g_596.s1", print_hash_value);
    transparent_crc(p_1189->g_596.s2, "p_1189->g_596.s2", print_hash_value);
    transparent_crc(p_1189->g_596.s3, "p_1189->g_596.s3", print_hash_value);
    transparent_crc(p_1189->g_596.s4, "p_1189->g_596.s4", print_hash_value);
    transparent_crc(p_1189->g_596.s5, "p_1189->g_596.s5", print_hash_value);
    transparent_crc(p_1189->g_596.s6, "p_1189->g_596.s6", print_hash_value);
    transparent_crc(p_1189->g_596.s7, "p_1189->g_596.s7", print_hash_value);
    transparent_crc(p_1189->g_598.x, "p_1189->g_598.x", print_hash_value);
    transparent_crc(p_1189->g_598.y, "p_1189->g_598.y", print_hash_value);
    transparent_crc(p_1189->g_598.z, "p_1189->g_598.z", print_hash_value);
    transparent_crc(p_1189->g_598.w, "p_1189->g_598.w", print_hash_value);
    transparent_crc(p_1189->g_606.s0, "p_1189->g_606.s0", print_hash_value);
    transparent_crc(p_1189->g_606.s1, "p_1189->g_606.s1", print_hash_value);
    transparent_crc(p_1189->g_606.s2, "p_1189->g_606.s2", print_hash_value);
    transparent_crc(p_1189->g_606.s3, "p_1189->g_606.s3", print_hash_value);
    transparent_crc(p_1189->g_606.s4, "p_1189->g_606.s4", print_hash_value);
    transparent_crc(p_1189->g_606.s5, "p_1189->g_606.s5", print_hash_value);
    transparent_crc(p_1189->g_606.s6, "p_1189->g_606.s6", print_hash_value);
    transparent_crc(p_1189->g_606.s7, "p_1189->g_606.s7", print_hash_value);
    transparent_crc(p_1189->g_647.x, "p_1189->g_647.x", print_hash_value);
    transparent_crc(p_1189->g_647.y, "p_1189->g_647.y", print_hash_value);
    transparent_crc(p_1189->g_647.z, "p_1189->g_647.z", print_hash_value);
    transparent_crc(p_1189->g_647.w, "p_1189->g_647.w", print_hash_value);
    transparent_crc(p_1189->g_751.s0, "p_1189->g_751.s0", print_hash_value);
    transparent_crc(p_1189->g_751.s1, "p_1189->g_751.s1", print_hash_value);
    transparent_crc(p_1189->g_751.s2, "p_1189->g_751.s2", print_hash_value);
    transparent_crc(p_1189->g_751.s3, "p_1189->g_751.s3", print_hash_value);
    transparent_crc(p_1189->g_751.s4, "p_1189->g_751.s4", print_hash_value);
    transparent_crc(p_1189->g_751.s5, "p_1189->g_751.s5", print_hash_value);
    transparent_crc(p_1189->g_751.s6, "p_1189->g_751.s6", print_hash_value);
    transparent_crc(p_1189->g_751.s7, "p_1189->g_751.s7", print_hash_value);
    transparent_crc(p_1189->g_751.s8, "p_1189->g_751.s8", print_hash_value);
    transparent_crc(p_1189->g_751.s9, "p_1189->g_751.s9", print_hash_value);
    transparent_crc(p_1189->g_751.sa, "p_1189->g_751.sa", print_hash_value);
    transparent_crc(p_1189->g_751.sb, "p_1189->g_751.sb", print_hash_value);
    transparent_crc(p_1189->g_751.sc, "p_1189->g_751.sc", print_hash_value);
    transparent_crc(p_1189->g_751.sd, "p_1189->g_751.sd", print_hash_value);
    transparent_crc(p_1189->g_751.se, "p_1189->g_751.se", print_hash_value);
    transparent_crc(p_1189->g_751.sf, "p_1189->g_751.sf", print_hash_value);
    transparent_crc(p_1189->g_753.s0, "p_1189->g_753.s0", print_hash_value);
    transparent_crc(p_1189->g_753.s1, "p_1189->g_753.s1", print_hash_value);
    transparent_crc(p_1189->g_753.s2, "p_1189->g_753.s2", print_hash_value);
    transparent_crc(p_1189->g_753.s3, "p_1189->g_753.s3", print_hash_value);
    transparent_crc(p_1189->g_753.s4, "p_1189->g_753.s4", print_hash_value);
    transparent_crc(p_1189->g_753.s5, "p_1189->g_753.s5", print_hash_value);
    transparent_crc(p_1189->g_753.s6, "p_1189->g_753.s6", print_hash_value);
    transparent_crc(p_1189->g_753.s7, "p_1189->g_753.s7", print_hash_value);
    transparent_crc(p_1189->g_753.s8, "p_1189->g_753.s8", print_hash_value);
    transparent_crc(p_1189->g_753.s9, "p_1189->g_753.s9", print_hash_value);
    transparent_crc(p_1189->g_753.sa, "p_1189->g_753.sa", print_hash_value);
    transparent_crc(p_1189->g_753.sb, "p_1189->g_753.sb", print_hash_value);
    transparent_crc(p_1189->g_753.sc, "p_1189->g_753.sc", print_hash_value);
    transparent_crc(p_1189->g_753.sd, "p_1189->g_753.sd", print_hash_value);
    transparent_crc(p_1189->g_753.se, "p_1189->g_753.se", print_hash_value);
    transparent_crc(p_1189->g_753.sf, "p_1189->g_753.sf", print_hash_value);
    transparent_crc(p_1189->g_766.s0, "p_1189->g_766.s0", print_hash_value);
    transparent_crc(p_1189->g_766.s1, "p_1189->g_766.s1", print_hash_value);
    transparent_crc(p_1189->g_766.s2, "p_1189->g_766.s2", print_hash_value);
    transparent_crc(p_1189->g_766.s3, "p_1189->g_766.s3", print_hash_value);
    transparent_crc(p_1189->g_766.s4, "p_1189->g_766.s4", print_hash_value);
    transparent_crc(p_1189->g_766.s5, "p_1189->g_766.s5", print_hash_value);
    transparent_crc(p_1189->g_766.s6, "p_1189->g_766.s6", print_hash_value);
    transparent_crc(p_1189->g_766.s7, "p_1189->g_766.s7", print_hash_value);
    transparent_crc(p_1189->g_768.x, "p_1189->g_768.x", print_hash_value);
    transparent_crc(p_1189->g_768.y, "p_1189->g_768.y", print_hash_value);
    transparent_crc(p_1189->g_872.x, "p_1189->g_872.x", print_hash_value);
    transparent_crc(p_1189->g_872.y, "p_1189->g_872.y", print_hash_value);
    transparent_crc(p_1189->g_917.x, "p_1189->g_917.x", print_hash_value);
    transparent_crc(p_1189->g_917.y, "p_1189->g_917.y", print_hash_value);
    transparent_crc(p_1189->g_919.s0, "p_1189->g_919.s0", print_hash_value);
    transparent_crc(p_1189->g_919.s1, "p_1189->g_919.s1", print_hash_value);
    transparent_crc(p_1189->g_919.s2, "p_1189->g_919.s2", print_hash_value);
    transparent_crc(p_1189->g_919.s3, "p_1189->g_919.s3", print_hash_value);
    transparent_crc(p_1189->g_919.s4, "p_1189->g_919.s4", print_hash_value);
    transparent_crc(p_1189->g_919.s5, "p_1189->g_919.s5", print_hash_value);
    transparent_crc(p_1189->g_919.s6, "p_1189->g_919.s6", print_hash_value);
    transparent_crc(p_1189->g_919.s7, "p_1189->g_919.s7", print_hash_value);
    transparent_crc(p_1189->g_919.s8, "p_1189->g_919.s8", print_hash_value);
    transparent_crc(p_1189->g_919.s9, "p_1189->g_919.s9", print_hash_value);
    transparent_crc(p_1189->g_919.sa, "p_1189->g_919.sa", print_hash_value);
    transparent_crc(p_1189->g_919.sb, "p_1189->g_919.sb", print_hash_value);
    transparent_crc(p_1189->g_919.sc, "p_1189->g_919.sc", print_hash_value);
    transparent_crc(p_1189->g_919.sd, "p_1189->g_919.sd", print_hash_value);
    transparent_crc(p_1189->g_919.se, "p_1189->g_919.se", print_hash_value);
    transparent_crc(p_1189->g_919.sf, "p_1189->g_919.sf", print_hash_value);
    transparent_crc(p_1189->g_987, "p_1189->g_987", print_hash_value);
    transparent_crc(p_1189->g_1047.x, "p_1189->g_1047.x", print_hash_value);
    transparent_crc(p_1189->g_1047.y, "p_1189->g_1047.y", print_hash_value);
    transparent_crc(p_1189->g_1069, "p_1189->g_1069", print_hash_value);
    transparent_crc(p_1189->g_1096.x, "p_1189->g_1096.x", print_hash_value);
    transparent_crc(p_1189->g_1096.y, "p_1189->g_1096.y", print_hash_value);
    transparent_crc(p_1189->g_1123.x, "p_1189->g_1123.x", print_hash_value);
    transparent_crc(p_1189->g_1123.y, "p_1189->g_1123.y", print_hash_value);
    transparent_crc(p_1189->g_1123.z, "p_1189->g_1123.z", print_hash_value);
    transparent_crc(p_1189->g_1123.w, "p_1189->g_1123.w", print_hash_value);
    transparent_crc(p_1189->g_1125.x, "p_1189->g_1125.x", print_hash_value);
    transparent_crc(p_1189->g_1125.y, "p_1189->g_1125.y", print_hash_value);
    transparent_crc(p_1189->g_1125.z, "p_1189->g_1125.z", print_hash_value);
    transparent_crc(p_1189->g_1125.w, "p_1189->g_1125.w", print_hash_value);
    transparent_crc(p_1189->g_1126.s0, "p_1189->g_1126.s0", print_hash_value);
    transparent_crc(p_1189->g_1126.s1, "p_1189->g_1126.s1", print_hash_value);
    transparent_crc(p_1189->g_1126.s2, "p_1189->g_1126.s2", print_hash_value);
    transparent_crc(p_1189->g_1126.s3, "p_1189->g_1126.s3", print_hash_value);
    transparent_crc(p_1189->g_1126.s4, "p_1189->g_1126.s4", print_hash_value);
    transparent_crc(p_1189->g_1126.s5, "p_1189->g_1126.s5", print_hash_value);
    transparent_crc(p_1189->g_1126.s6, "p_1189->g_1126.s6", print_hash_value);
    transparent_crc(p_1189->g_1126.s7, "p_1189->g_1126.s7", print_hash_value);
    transparent_crc(p_1189->g_1133.x, "p_1189->g_1133.x", print_hash_value);
    transparent_crc(p_1189->g_1133.y, "p_1189->g_1133.y", print_hash_value);
    transparent_crc(p_1189->g_1136.x, "p_1189->g_1136.x", print_hash_value);
    transparent_crc(p_1189->g_1136.y, "p_1189->g_1136.y", print_hash_value);
    transparent_crc(p_1189->g_1187, "p_1189->g_1187", print_hash_value);
    transparent_crc(p_1189->v_collective, "p_1189->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 97; i++)
            transparent_crc(p_1189->g_special_values[i + 97 * get_linear_group_id()], "p_1189->g_special_values[i + 97 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 97; i++)
            transparent_crc(p_1189->l_special_values[i], "p_1189->l_special_values[i]", print_hash_value);
    transparent_crc(p_1189->l_comm_values[get_linear_local_id()], "p_1189->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1189->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()], "p_1189->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
