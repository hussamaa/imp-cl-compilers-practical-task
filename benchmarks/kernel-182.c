// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,70,2 -l 1,35,2
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
{2,32,39,64,4,62,31,38,58,14,24,53,48,3,13,46,52,5,33,60,21,54,29,51,26,45,59,11,50,44,37,65,49,9,34,36,25,22,17,42,19,47,27,41,30,15,40,56,18,28,8,7,61,16,35,1,66,0,57,68,69,12,23,63,43,55,10,67,6,20}, // permutation 0
{56,60,15,7,31,55,12,29,39,63,10,16,38,28,25,13,43,48,14,67,3,23,65,17,21,1,59,5,54,33,49,8,47,41,24,68,57,69,36,62,32,18,22,45,27,61,42,34,37,30,26,52,66,20,40,35,9,46,50,0,2,58,4,44,19,11,51,64,53,6}, // permutation 1
{23,40,59,13,48,31,27,32,15,20,49,5,29,66,26,38,46,10,64,44,62,2,37,9,3,47,6,7,12,28,11,0,17,65,14,24,42,61,30,50,51,16,67,63,33,18,56,34,58,54,69,43,4,21,8,19,1,68,52,41,22,57,60,55,25,36,53,39,35,45}, // permutation 2
{46,47,11,23,5,13,31,50,66,63,32,3,20,61,65,43,64,28,7,4,68,1,51,69,6,22,10,45,33,57,44,41,16,52,19,34,2,36,9,48,26,67,55,0,30,56,35,49,42,12,27,8,18,59,29,38,58,14,39,21,25,40,60,54,53,62,15,37,17,24}, // permutation 3
{10,65,54,44,39,3,15,61,37,13,45,42,48,34,63,28,38,59,18,67,5,25,6,40,47,33,19,27,32,14,11,7,1,58,62,2,69,9,46,30,53,57,20,66,50,8,31,64,21,43,68,51,23,24,4,41,29,52,16,0,26,35,56,22,36,49,12,60,17,55}, // permutation 4
{35,67,55,20,25,9,56,2,42,59,64,7,29,50,63,4,8,53,3,26,0,32,16,58,14,51,47,28,5,38,45,43,31,52,37,57,48,60,27,12,41,30,23,18,34,39,13,36,49,19,40,65,69,54,22,24,46,1,61,21,6,17,10,15,62,44,33,11,66,68}, // permutation 5
{19,26,49,66,18,55,54,13,45,11,48,2,56,41,42,67,62,35,47,68,69,29,4,9,32,3,61,59,16,20,38,1,50,46,33,43,36,7,17,8,53,28,60,12,30,24,40,15,10,58,31,37,21,22,63,65,57,23,64,51,52,34,6,25,39,27,0,14,44,5}, // permutation 6
{65,63,67,52,59,17,48,4,62,55,36,28,61,27,57,11,30,38,13,0,53,41,35,16,21,50,8,46,47,18,24,23,33,29,5,66,3,1,64,56,26,14,39,9,49,40,12,6,25,68,7,37,54,34,10,42,44,69,45,32,2,31,43,22,20,51,60,19,15,58}, // permutation 7
{5,0,29,10,2,64,44,31,60,21,6,14,25,56,3,16,39,61,30,11,36,66,41,42,22,15,4,55,19,23,43,9,38,32,26,33,34,52,1,53,57,54,27,67,48,24,7,20,59,49,45,58,62,47,65,63,46,50,69,37,51,13,28,12,8,40,18,17,68,35}, // permutation 8
{54,50,25,55,63,18,31,51,26,27,17,66,0,1,65,4,57,14,19,8,35,36,61,21,40,6,67,45,47,30,62,48,46,9,52,33,58,10,13,3,44,37,53,12,59,5,60,68,15,23,56,34,24,32,64,28,43,49,38,11,29,16,22,2,42,7,41,39,69,20} // permutation 9
};

// Seed: 1991518809

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

struct S1 {
    volatile int32_t g_2;
    int32_t g_3;
    VECTOR(int32_t, 4) g_9;
    VECTOR(int32_t, 8) g_12;
    volatile int32_t g_14;
    volatile int32_t g_15;
    volatile int32_t g_16;
    volatile int32_t g_17;
    int32_t g_18;
    volatile struct S0 g_34;
    struct S0 g_68;
    int64_t *g_96;
    struct S0 g_104;
    int32_t g_128;
    struct S0 *g_136;
    struct S0 **g_135;
    int64_t *g_160;
    int32_t g_166;
    uint32_t g_168;
    uint16_t g_173;
    uint32_t g_197;
    int32_t *g_199;
    int32_t ** volatile g_198;
    uint16_t g_211;
    volatile uint8_t * volatile g_222;
    volatile uint8_t g_228;
    volatile uint8_t *g_227;
    volatile uint8_t * volatile *g_226;
    int32_t ** volatile g_231;
    int32_t **g_234;
    int32_t *** volatile g_233;
    int32_t *g_239;
    int32_t ** volatile g_238;
    VECTOR(uint32_t, 8) g_323;
    VECTOR(uint32_t, 2) g_324;
    struct S0 *g_326[7];
    VECTOR(uint16_t, 2) g_335;
    uint8_t g_347[4];
    volatile VECTOR(int16_t, 16) g_387;
    VECTOR(uint8_t, 2) g_406;
    VECTOR(uint8_t, 16) g_407;
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
int16_t  func_1(struct S1 * p_423);
int32_t * func_43(struct S0 * p_44, struct S0 * p_45, int64_t  p_46, int32_t * p_47, struct S1 * p_423);
int8_t  func_48(int64_t  p_49, int32_t  p_50, int64_t  p_51, uint16_t  p_52, struct S1 * p_423);
int32_t * func_59(int64_t  p_60, struct S1 * p_423);
int32_t * func_63(struct S0 * p_64, struct S0 * p_65, struct S0  p_66, struct S1 * p_423);
struct S0  func_73(int64_t  p_74, struct S0 * p_75, struct S1 * p_423);
uint8_t  func_79(uint32_t  p_80, uint16_t  p_81, struct S1 * p_423);
int32_t  func_87(uint64_t  p_88, int64_t * p_89, struct S0  p_90, int64_t * p_91, struct S1 * p_423);
int8_t  func_94(uint32_t  p_95, struct S1 * p_423);
struct S0  func_99(int64_t * p_100, int32_t * p_101, struct S1 * p_423);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_423->g_3 p_423->g_9 p_423->g_12 p_423->g_18 p_423->g_15 p_423->g_34 p_423->g_14 p_423->l_comm_values p_423->g_198 p_423->g_199 p_423->g_222 p_423->g_226 p_423->g_227 p_423->g_228 p_423->g_231 p_423->g_233 p_423->g_136 p_423->g_68 p_423->g_104 p_423->g_238 p_423->g_135 p_423->g_324 p_423->g_335 p_423->g_128 p_423->g_17 p_423->g_160 p_423->g_387 p_423->g_239 p_423->g_406 p_423->g_407 p_423->g_347 p_423->g_168
 * writes: p_423->g_3 p_423->g_9 p_423->g_18 p_423->g_34 p_423->g_199 p_423->g_104.f1 p_423->g_211 p_423->g_12 p_423->g_234 p_423->g_239 p_423->g_168 p_423->g_136 p_423->g_96 p_423->g_160 p_423->g_335 p_423->g_68.f0 p_423->g_347
 */
int16_t  func_1(struct S1 * p_423)
{ /* block id: 4 */
    VECTOR(int32_t, 4) l_11 = (VECTOR(int32_t, 4))(0x709BA87AL, (VECTOR(int32_t, 2))(0x709BA87AL, 0x2FB5D1CBL), 0x2FB5D1CBL);
    uint32_t l_29[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int8_t l_53 = 0x53L;
    VECTOR(uint16_t, 8) l_55 = (VECTOR(uint16_t, 8))(0x5F08L, (VECTOR(uint16_t, 4))(0x5F08L, (VECTOR(uint16_t, 2))(0x5F08L, 0x1085L), 0x1085L), 0x1085L, 0x5F08L, 0x1085L);
    struct S0 *l_325 = &p_423->g_68;
    struct S0 *l_356 = &p_423->g_68;
    int32_t *l_357 = &p_423->g_18;
    uint32_t l_422[8] = {0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L,0x4E80ADB4L};
    int i;
    for (p_423->g_3 = 12; (p_423->g_3 != (-28)); p_423->g_3 = safe_sub_func_uint32_t_u_u(p_423->g_3, 7))
    { /* block id: 7 */
        VECTOR(int32_t, 16) l_10 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
        int32_t *l_13[7] = {(void*)0,&p_423->g_3,(void*)0,(void*)0,&p_423->g_3,(void*)0,(void*)0};
        int i;
        if ((atomic_inc(&p_423->g_atomic_input[41 * get_linear_group_id() + 14]) == 4))
        { /* block id: 9 */
            uint64_t l_6 = 0xF5872D9EE1C97412L;
            int32_t l_7[9][9][1];
            uint64_t l_8 = 1UL;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_7[i][j][k] = 0x45FE46C2L;
                }
            }
            l_6 = 0L;
            l_8 = (l_7[4][0][0] = (-1L));
            unsigned int result = 0;
            result += l_6;
            int l_7_i0, l_7_i1, l_7_i2;
            for (l_7_i0 = 0; l_7_i0 < 9; l_7_i0++) {
                for (l_7_i1 = 0; l_7_i1 < 9; l_7_i1++) {
                    for (l_7_i2 = 0; l_7_i2 < 1; l_7_i2++) {
                        result += l_7[l_7_i0][l_7_i1][l_7_i2];
                    }
                }
            }
            result += l_8;
            atomic_add(&p_423->g_special_values[41 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 13 */
            (1 + 1);
        }
        p_423->g_9.y = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(p_423->g_9.xx)).yyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_10.sa27289fff12f3ccd)).s24)).xxxy))))).wxxzzxzyyzxxyyxy, ((VECTOR(int32_t, 16))(l_11.zzwwxzzyxxyywxxx)), ((VECTOR(int32_t, 8))(p_423->g_12.s56351221)).s2275774442620217))).s4;
        for (p_423->g_18 = 12; (p_423->g_18 < 24); ++p_423->g_18)
        { /* block id: 19 */
            return p_423->g_15;
        }
    }
    for (p_423->g_3 = (-20); (p_423->g_3 == (-20)); p_423->g_3++)
    { /* block id: 25 */
        int32_t *l_23 = &p_423->g_18;
        int32_t *l_24 = &p_423->g_18;
        int32_t *l_25 = (void*)0;
        int32_t *l_26 = &p_423->g_18;
        int32_t *l_27 = &p_423->g_18;
        int32_t *l_28[8] = {&p_423->g_18,&p_423->g_18,&p_423->g_18,&p_423->g_18,&p_423->g_18,&p_423->g_18,&p_423->g_18,&p_423->g_18};
        uint32_t l_36 = 0x8B8ECDE2L;
        int i;
        ++l_29[2];
        for (p_423->g_18 = 0; (p_423->g_18 == (-12)); p_423->g_18 = safe_sub_func_int64_t_s_s(p_423->g_18, 3))
        { /* block id: 29 */
            volatile struct S0 *l_35[10][6] = {{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34},{&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34,&p_423->g_34}};
            int i, j;
            p_423->g_34 = p_423->g_34;
        }
        --l_36;
    }
    for (p_423->g_3 = 22; (p_423->g_3 >= (-15)); --p_423->g_3)
    { /* block id: 36 */
        int32_t l_58 = 0x34FEB13CL;
        int32_t l_328 = 1L;
        for (p_423->g_18 = 0; (p_423->g_18 == 2); p_423->g_18 = safe_add_func_uint32_t_u_u(p_423->g_18, 9))
        { /* block id: 39 */
            int64_t l_54 = 0x4DF3DC4946A2B7F3L;
            int64_t *l_56 = (void*)0;
            int64_t *l_57[5][3] = {{(void*)0,&l_54,(void*)0},{(void*)0,&l_54,(void*)0},{(void*)0,&l_54,(void*)0},{(void*)0,&l_54,(void*)0},{(void*)0,&l_54,(void*)0}};
            struct S0 *l_327 = &p_423->g_68;
            int32_t **l_421 = &p_423->g_199;
            int i, j;
            (*l_421) = func_43((func_48(l_53, l_11.z, p_423->g_9.w, ((l_54 , ((l_58 = (((VECTOR(uint16_t, 8))(l_55.s73263307)).s2 || p_423->g_14)) , func_59(p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 70))], p_423))) != (((safe_sub_func_int32_t_s_s(((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(4294967294UL, 0UL, 4294967290UL, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(p_423->g_323.s00)).yyxx, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(p_423->g_324.yyxx)).xxwyyzxzywyyxwwy, (uint32_t)((((VECTOR(int32_t, 8))(8L, (((p_423->g_326[0] = l_325) != l_327) , p_423->g_3), ((VECTOR(int32_t, 2))(0x6AD0E9B6L)), 7L, 0x41D468F9L, 0L, (-5L))).s5 >= l_328) || l_54)))).s74)), l_29[1], l_29[2], ((VECTOR(uint32_t, 4))(0x4E351086L)))).s15, ((VECTOR(uint32_t, 2))(1UL))))).yxxx))), 0x4656F078L)).s7233566112156162)).s72, ((VECTOR(uint32_t, 2))(4294967286UL))))), ((VECTOR(uint32_t, 2))(0x4508EA63L)), 0UL, 0x987BE163L, 0x990694C1L, l_54, 4294967289UL, 0xCC473912L, 5UL, p_423->g_68.f0, 4294967294UL, ((VECTOR(uint32_t, 2))(0x102BE682L)), 0x7474FA4FL)).se9)).even || l_328) && 0x7AL), 0x5DA8C6CAL)) ^ p_423->g_324.y) , (void*)0)), p_423) , (*p_423->g_135)), l_356, l_328, l_357, p_423);
            if ((**p_423->g_198))
                break;
        }
    }
    return l_422[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_160 p_423->g_12 p_423->g_387 p_423->g_9 p_423->g_128 p_423->g_239 p_423->g_18 p_423->g_68.f0 p_423->g_227 p_423->g_228 p_423->g_199 p_423->g_406 p_423->g_407 p_423->g_347 p_423->g_168 p_423->g_198
 * writes: p_423->g_104.f1 p_423->g_96 p_423->g_160 p_423->g_335 p_423->g_211 p_423->g_68.f0 p_423->g_347
 */
int32_t * func_43(struct S0 * p_44, struct S0 * p_45, int64_t  p_46, int32_t * p_47, struct S1 * p_423)
{ /* block id: 159 */
    uint8_t l_360 = 0x57L;
    uint64_t *l_361 = &p_423->g_104.f1;
    int64_t **l_364 = &p_423->g_96;
    int64_t **l_365 = &p_423->g_160;
    VECTOR(uint64_t, 8) l_367 = (VECTOR(uint64_t, 8))(0xB96FBA15A9044644L, (VECTOR(uint64_t, 4))(0xB96FBA15A9044644L, (VECTOR(uint64_t, 2))(0xB96FBA15A9044644L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xB96FBA15A9044644L, 18446744073709551615UL);
    VECTOR(uint64_t, 8) l_368 = (VECTOR(uint64_t, 8))(0xCCF03D51DBB06240L, (VECTOR(uint64_t, 4))(0xCCF03D51DBB06240L, (VECTOR(uint64_t, 2))(0xCCF03D51DBB06240L, 6UL), 6UL), 6UL, 0xCCF03D51DBB06240L, 6UL);
    VECTOR(uint64_t, 4) l_369 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL), 18446744073709551615UL);
    uint16_t *l_374 = (void*)0;
    uint16_t *l_375 = (void*)0;
    uint16_t *l_376[6];
    int32_t **l_388 = (void*)0;
    int8_t l_389 = 1L;
    int32_t *l_390[8][5] = {{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0},{(void*)0,&p_423->g_3,&p_423->g_68.f0,&p_423->g_3,(void*)0}};
    uint64_t l_391 = 0xCF38AF548DC20C86L;
    int8_t *l_404 = &l_389;
    VECTOR(uint8_t, 2) l_405 = (VECTOR(uint8_t, 2))(250UL, 0x86L);
    uint8_t *l_410 = &p_423->g_347[3];
    uint64_t l_411[4] = {0xD0A282B2FB7C0F2BL,0xD0A282B2FB7C0F2BL,0xD0A282B2FB7C0F2BL,0xD0A282B2FB7C0F2BL};
    int16_t l_412 = 0x5C9EL;
    int32_t l_413 = 2L;
    int32_t l_414 = 0x1BF0827FL;
    int32_t l_415 = 0x7E291E7CL;
    int64_t l_416[5][8][1] = {{{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}}};
    int16_t l_417 = (-1L);
    uint32_t l_418 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_376[i] = &p_423->g_173;
    p_423->g_68.f0 &= (safe_div_func_int8_t_s_s(l_360, ((((((((*l_361) = 0UL) != ((l_391 = (safe_rshift_func_int8_t_s_s((((*l_365) = ((*l_364) = p_423->g_160)) == ((safe_unary_minus_func_uint64_t_u((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(l_367.s44347063)), ((VECTOR(uint64_t, 8))(l_368.s30351636)), ((VECTOR(uint64_t, 16))(6UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(0x7FBE5D951B21DE09L, ((VECTOR(uint64_t, 2))(l_369.xw)), 0xA01AB742920C2919L)).odd)), (safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((p_423->g_335.y = p_46), (((p_423->g_211 = p_46) | (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((p_423->g_12.s3 >= ((0x0C24L & (~(((((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_423->g_387.s8b6355b1)).s41)).yxyxxyyy)).s4, l_368.s4)) && (((void*)0 == l_388) > p_423->g_9.w)) , 1UL) || GROUP_DIVERGE(1, 1)) < p_46))) | 0L)) >= p_423->g_128), 7)), p_46)) < (*p_423->g_239)), l_367.s5))) , 1L))) ^ l_389), 0x76B498909DC5050FL)), 18446744073709551608UL, ((VECTOR(uint64_t, 4))(1UL)), 0x59B9E4ED3A980C78L, 0x46A4C73922109C24L, ((VECTOR(uint64_t, 4))(0x9390E117B945A0D4L)), 0UL)).lo))).s0574214102015705)).sa == (-10L)))) , &p_46)), 3))) <= (-1L))) == p_46) > 0x7EF8L) <= 0x75E142AC313E8B50L) , p_46) | 6L)));
    l_411[3] = (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((*p_423->g_227), (safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((!((safe_div_func_int8_t_s_s(((*l_404) = ((*p_423->g_199) , p_46)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_405.xxxx)).zyzyywzyzyzxyxxy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xEAL, 0xC2L)).yyyxyxyxxxyxyyyx)), ((VECTOR(uint8_t, 4))(p_423->g_406.xxyx)).wxyzywyxwwxyzzzz))).s38)).xxxxxyxxxyxxxyxy, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(0xC1L, (GROUP_DIVERGE(1, 1) >= p_423->g_18), 247UL, 255UL))))).wyzyxzxxwyxzyyzx, ((VECTOR(uint8_t, 8))(p_46, (&p_47 == &l_390[2][4]), p_46, ((VECTOR(uint8_t, 4))(p_423->g_407.sc778)), 0xECL)).s5714452204275445))).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(0x0DL, 1UL, 0x8FL, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(0UL, ((*l_410) |= (((0x96L <= 0L) , p_423->g_407.s1) < 0x78D5CA3D55CD5828L)), 255UL, ((VECTOR(uint8_t, 4))(246UL)), 0xBDL, 255UL, 0x70L, p_423->g_168, ((VECTOR(uint8_t, 2))(1UL)), 0x03L, 0x88L, 0xFBL)).scd, (uint8_t)1UL))), p_46, 0xB2L, 0x7EL)).even, ((VECTOR(uint8_t, 4))(0UL))))).xyxwwwwx))))))).s0157754553627354))), ((VECTOR(uint8_t, 16))(252UL)), ((VECTOR(uint8_t, 16))(0xB6L))))).hi, ((VECTOR(uint8_t, 8))(255UL))))))).s7)) > FAKE_DIVERGE(p_423->local_0_offset, get_local_id(0), 10))) , (void*)0) == (void*)0), GROUP_DIVERGE(1, 1))), 2)))) | p_423->g_406.y), p_46)), (-7L)));
    l_418++;
    return (*p_423->g_198);
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_335 p_423->g_18 p_423->g_227 p_423->g_228 p_423->g_136 p_423->g_68 p_423->g_104 p_423->g_128 p_423->g_9 p_423->g_17
 * writes: p_423->g_9
 */
int8_t  func_48(int64_t  p_49, int32_t  p_50, int64_t  p_51, uint16_t  p_52, struct S1 * p_423)
{ /* block id: 148 */
    uint16_t l_336[1][9][6] = {{{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L},{0xB8A8L,7UL,1UL,7UL,0xB8A8L,0xB8A8L}}};
    int32_t l_341 = 1L;
    uint8_t *l_346[6][4][9] = {{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}},{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}},{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}},{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}},{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}},{{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0},{&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[1],&p_423->g_347[3],&p_423->g_347[3],&p_423->g_347[2],&p_423->g_347[2],(void*)0,(void*)0}}};
    uint16_t l_348 = 0x3A2FL;
    VECTOR(int32_t, 2) l_351 = (VECTOR(int32_t, 2))(0L, 0x05F5B6DAL);
    int32_t *l_352 = (void*)0;
    int32_t *l_353[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    p_423->g_9.y |= ((l_341 = ((safe_mul_func_int8_t_s_s(((0UL < ((((!(safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_423->g_335.xy)).hi, (l_336[0][4][5] = FAKE_DIVERGE(p_423->group_2_offset, get_group_id(2), 10)))), (-3L)))) & (((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_423->g_18, (((*p_423->g_227) < (((l_341 , p_50) , &p_423->g_173) == ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((++l_348) , (l_348 < ((*p_423->g_136) , l_348))), p_51)), 1)) , &p_423->g_211))) | p_52))), 0x884551AEL)) < 0xB596L) == l_341)) <= p_423->g_128) | l_341)) ^ 0xF0BF755DEFEB815DL), l_341)) ^ FAKE_DIVERGE(p_423->global_0_offset, get_global_id(0), 10))) <= l_351.y);
    for (l_341 = 0; (l_341 == (-12)); l_341--)
    { /* block id: 155 */
        return p_423->g_9.z;
    }
    return p_423->g_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_198 p_423->g_199 p_423->g_222 p_423->g_226 p_423->g_227 p_423->g_228 p_423->g_12 p_423->g_231 p_423->g_233 p_423->g_136 p_423->g_104 p_423->g_238 p_423->g_18 p_423->g_168 p_423->g_135 p_423->g_68
 * writes: p_423->g_199 p_423->g_104.f1 p_423->g_211 p_423->g_12 p_423->g_234 p_423->g_239 p_423->g_168 p_423->g_136
 */
int32_t * func_59(int64_t  p_60, struct S1 * p_423)
{ /* block id: 41 */
    struct S0 *l_242 = &p_423->g_68;
    int32_t l_312 = 0x5B582213L;
    int32_t l_313 = (-10L);
    int32_t l_314 = 0x70CFACC1L;
    int32_t l_316 = 2L;
    int32_t l_317[3][3][1] = {{{0x10D9D560L},{0x10D9D560L},{0x10D9D560L}},{{0x10D9D560L},{0x10D9D560L},{0x10D9D560L}},{{0x10D9D560L},{0x10D9D560L},{0x10D9D560L}}};
    VECTOR(uint32_t, 16) l_318 = (VECTOR(uint32_t, 16))(0x8C14BD2DL, (VECTOR(uint32_t, 4))(0x8C14BD2DL, (VECTOR(uint32_t, 2))(0x8C14BD2DL, 0xD9DED6A5L), 0xD9DED6A5L), 0xD9DED6A5L, 0x8C14BD2DL, 0xD9DED6A5L, (VECTOR(uint32_t, 2))(0x8C14BD2DL, 0xD9DED6A5L), (VECTOR(uint32_t, 2))(0x8C14BD2DL, 0xD9DED6A5L), 0x8C14BD2DL, 0xD9DED6A5L, 0x8C14BD2DL, 0xD9DED6A5L);
    int i, j, k;
    for (p_60 = (-20); (p_60 <= 14); ++p_60)
    { /* block id: 44 */
        struct S0 *l_67[10];
        struct S0 **l_69 = (void*)0;
        struct S0 **l_70 = (void*)0;
        struct S0 *l_72[9][8][3] = {{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}},{{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0},{&p_423->g_68,&p_423->g_68,(void*)0}}};
        struct S0 **l_71 = &l_72[6][2][0];
        int32_t l_76 = 3L;
        int32_t **l_236 = &p_423->g_199;
        int32_t **l_237 = (void*)0;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_67[i] = &p_423->g_68;
        (*p_423->g_238) = ((*l_236) = func_63(l_67[8], ((*l_71) = l_67[6]), func_73(l_76, &p_423->g_68, p_423), p_423));
        if ((**l_236))
            break;
    }
    for (p_423->g_168 = 0; (p_423->g_168 > 20); p_423->g_168 = safe_add_func_int64_t_s_s(p_423->g_168, 1))
    { /* block id: 105 */
        int32_t *l_307 = &p_423->g_128;
        int32_t *l_308 = &p_423->g_104.f0;
        int32_t *l_309 = &p_423->g_68.f0;
        int32_t l_310[7][2][6] = {{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}},{{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)},{0x14FBD77CL,(-1L),(-1L),0x14FBD77CL,0L,(-1L)}}};
        int32_t *l_311[2][10][3] = {{{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]}},{{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]},{&p_423->g_68.f0,&p_423->g_18,&l_310[4][1][0]}}};
        int16_t l_315 = 0x0164L;
        int i, j, k;
        (*p_423->g_135) = l_242;
        if ((atomic_inc(&p_423->g_atomic_input[41 * get_linear_group_id() + 11]) == 6))
        { /* block id: 108 */
            int32_t l_243 = (-1L);
            int32_t *l_299[9][6] = {{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243},{&l_243,&l_243,&l_243,&l_243,&l_243,&l_243}};
            int8_t l_300 = (-6L);
            int8_t l_305 = 0x6AL;
            int32_t l_306 = (-7L);
            int i, j;
            for (l_243 = 0; (l_243 >= 28); l_243++)
            { /* block id: 111 */
                int32_t l_247 = 0x0FECEFA5L;
                int32_t *l_246 = &l_247;
                int32_t *l_248 = &l_247;
                struct S0 l_249 = {1L,0UL,0x76669896L};
                struct S0 l_250 = {0L,0UL,3UL};
                uint64_t l_251[8][4] = {{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L},{0xAFBAC7EA18E5C58EL,0xAFBAC7EA18E5C58EL,18446744073709551615UL,0xCF7806D691EEC030L}};
                int i, j;
                l_248 = l_246;
                l_250 = l_249;
                if (l_251[7][0])
                { /* block id: 114 */
                    struct S0 *l_252 = (void*)0;
                    struct S0 l_254 = {-3L,0x38D7BE39CE783C7CL,3UL};
                    struct S0 *l_253 = &l_254;
                    l_253 = l_252;
                }
                else
                { /* block id: 116 */
                    int32_t l_257 = 0x19F57404L;
                    int32_t *l_256 = &l_257;
                    int32_t **l_255[3];
                    int32_t **l_258[5];
                    uint64_t l_259 = 0x5ECA742B9B84B15CL;
                    int32_t l_262 = 0x4888121AL;
                    uint32_t l_263[9][5] = {{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L},{4294967295UL,4294967295UL,3UL,1UL,0xB0A4E482L}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_255[i] = &l_256;
                    for (i = 0; i < 5; i++)
                        l_258[i] = &l_256;
                    l_258[4] = l_255[0];
                    --l_259;
                    l_263[0][1]++;
                    for (l_262 = 23; (l_262 != (-23)); l_262--)
                    { /* block id: 122 */
                        VECTOR(int32_t, 16) l_268 = (VECTOR(int32_t, 16))(0x4792D4B6L, (VECTOR(int32_t, 4))(0x4792D4B6L, (VECTOR(int32_t, 2))(0x4792D4B6L, (-1L)), (-1L)), (-1L), 0x4792D4B6L, (-1L), (VECTOR(int32_t, 2))(0x4792D4B6L, (-1L)), (VECTOR(int32_t, 2))(0x4792D4B6L, (-1L)), 0x4792D4B6L, (-1L), 0x4792D4B6L, (-1L));
                        VECTOR(int32_t, 16) l_269 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4CED09A8L), 0x4CED09A8L), 0x4CED09A8L, 0L, 0x4CED09A8L, (VECTOR(int32_t, 2))(0L, 0x4CED09A8L), (VECTOR(int32_t, 2))(0L, 0x4CED09A8L), 0L, 0x4CED09A8L, 0L, 0x4CED09A8L);
                        uint32_t l_270 = 4294967295UL;
                        uint8_t l_271 = 1UL;
                        VECTOR(int32_t, 2) l_272 = (VECTOR(int32_t, 2))(0x42BDC136L, 0x1365AFA3L);
                        uint32_t l_273 = 0UL;
                        uint16_t l_274 = 0UL;
                        uint16_t l_275 = 0xD970L;
                        VECTOR(uint64_t, 4) l_276 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBD4BA8CB6C84F80DL), 0xBD4BA8CB6C84F80DL);
                        uint8_t l_277 = 1UL;
                        VECTOR(uint64_t, 8) l_278 = (VECTOR(uint64_t, 8))(0xF185E36411CF429DL, (VECTOR(uint64_t, 4))(0xF185E36411CF429DL, (VECTOR(uint64_t, 2))(0xF185E36411CF429DL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0xF185E36411CF429DL, 18446744073709551608UL);
                        VECTOR(uint64_t, 8) l_279 = (VECTOR(uint64_t, 8))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0x279E7049906E010DL), 0x279E7049906E010DL), 0x279E7049906E010DL, 6UL, 0x279E7049906E010DL);
                        uint32_t l_280 = 0xB57ED5B8L;
                        uint32_t l_281 = 0xC00E36DEL;
                        uint8_t l_282 = 0UL;
                        VECTOR(int32_t, 2) l_283 = (VECTOR(int32_t, 2))(0x4B9EA9D6L, 0x124790C7L);
                        int64_t l_284 = 0L;
                        uint32_t l_285 = 0x76A31EEFL;
                        uint8_t l_286 = 0x15L;
                        int8_t l_287 = 1L;
                        uint8_t l_288[7] = {253UL,253UL,253UL,253UL,253UL,253UL,253UL};
                        uint64_t l_289 = 18446744073709551615UL;
                        uint8_t l_290 = 0UL;
                        int32_t l_291 = 0x4A3D857FL;
                        uint16_t l_292 = 1UL;
                        uint32_t l_293[4] = {0x10C99AEFL,0x10C99AEFL,0x10C99AEFL,0x10C99AEFL};
                        int16_t l_294 = 1L;
                        struct S0 l_295 = {-10L,0UL,4294967289UL};
                        VECTOR(int32_t, 8) l_296 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x79073FC8L), 0x79073FC8L), 0x79073FC8L, (-8L), 0x79073FC8L);
                        VECTOR(int32_t, 2) l_297 = (VECTOR(int32_t, 2))((-1L), 0x761A01F0L);
                        VECTOR(int32_t, 16) l_298 = (VECTOR(int32_t, 16))(0x748A360BL, (VECTOR(int32_t, 4))(0x748A360BL, (VECTOR(int32_t, 2))(0x748A360BL, 1L), 1L), 1L, 0x748A360BL, 1L, (VECTOR(int32_t, 2))(0x748A360BL, 1L), (VECTOR(int32_t, 2))(0x748A360BL, 1L), 0x748A360BL, 1L, 0x748A360BL, 1L);
                        int i;
                        l_294 &= ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_268.s504c)), ((VECTOR(int32_t, 2))(0L, 0L)).yxxy))).xwxyxzwwyxzyzxwz, ((VECTOR(int32_t, 8))(l_269.sbba51722)).s3461017404377477, ((VECTOR(int32_t, 16))(0x20C52178L, ((*l_246) = l_270), 0x6835DC99L, 0x228643DBL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x4ECFFF17L, l_271, (-1L), 0x3B3E9F4AL)).wwwxyyzzyyxyxyww)).s47, ((VECTOR(int32_t, 16))(l_272.yyyyxxyyyxyyxyyx)).s49, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))((l_269.sa = (l_274 = l_273)), ((VECTOR(int32_t, 4))((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x68B99E2F6929DEECL, 0UL)).yxxx)), l_275, 0x919E4CFCB6A1154AL, 0UL, ((VECTOR(uint64_t, 4))(l_276.zzwy)), l_277, 18446744073709551611UL, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 16))(l_278.s4215635134777450)).sa77b, ((VECTOR(uint64_t, 4))(l_279.s1275))))).x, 18446744073709551615UL, 0x40FB63792F64507EL)).s3 , l_280), l_281, 1L, 7L)), l_282, (-4L), (-1L))), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_283.xxyxxxxxyxyxyyyx)).lo)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x759180E5L)), ((VECTOR(int32_t, 8))(0x53BEDF84L, 0x107BC61FL, (-7L), 0L, l_284, 0x6659F9DBL, 0x5CC77198L, (-4L))).s2, ((VECTOR(int32_t, 8))(0x30F47E2CL)), 0x6499E2A4L, ((VECTOR(int32_t, 2))(0x37F026A4L)), 0x359EC436L, (-4L))).sa6)), 0L, ((VECTOR(int32_t, 2))((-1L))), l_285, 0x1910F593L, (-9L), 0x3EAFEB27L, ((VECTOR(int32_t, 4))(0x25689C2BL)), 0x5917724CL, 0x062294A8L, 0x1C76C9EDL)).saa)).xyxxyxyy))).s5043046517424466, ((VECTOR(int32_t, 16))((-4L))), ((VECTOR(int32_t, 16))(0x3E843EBBL))))).even))).s23))).yxxy)), l_286, 0x3313D0A2L, (-2L), 0L)).s6, l_287, 0x4C6D434DL, l_288[1], l_289, 1L, l_290, l_291, l_292, l_293[2], 1L, 0L))))).s0;
                        l_249 = l_295;
                        (*l_256) ^= ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(1L, 1L)).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_296.s12)), ((VECTOR(int32_t, 8))(0x62A92A61L, ((VECTOR(int32_t, 4))(l_297.xyxy)), 0x78C1645BL, 0x3A87FB0DL, 2L)).s2, ((VECTOR(int32_t, 4))(l_298.s8cf2)), 0x39B1D011L)).lo))).x;
                    }
                }
            }
            l_299[4][3] = (void*)0;
            if (l_300)
            { /* block id: 133 */
                int32_t *l_301 = (void*)0;
                int32_t *l_302 = (void*)0;
                l_302 = (l_299[4][3] = l_301);
            }
            else
            { /* block id: 136 */
                uint8_t l_303 = 3UL;
                uint16_t l_304 = 0x4739L;
                l_304 ^= l_303;
            }
            l_306 &= l_305;
            unsigned int result = 0;
            result += l_243;
            result += l_300;
            result += l_305;
            result += l_306;
            atomic_add(&p_423->g_special_values[41 * get_linear_group_id() + 11], result);
        }
        else
        { /* block id: 140 */
            (1 + 1);
        }
        if (p_60)
            continue;
        l_318.s9++;
    }
    return (*p_423->g_198);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_63(struct S0 * p_64, struct S0 * p_65, struct S0  p_66, struct S1 * p_423)
{ /* block id: 97 */
    int32_t *l_235 = &p_423->g_18;
    return l_235;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_9 p_423->g_96 p_423->g_68.f0 p_423->g_12 p_423->l_comm_values p_423->g_14 p_423->g_128 p_423->g_34 p_423->g_135 p_423->g_104.f2 p_423->g_68.f1 p_423->g_68.f2 p_423->g_136 p_423->g_104 p_423->g_160 p_423->g_166 p_423->g_168 p_423->g_3 p_423->g_173 p_423->g_comm_values p_423->g_17 p_423->g_198 p_423->g_199 p_423->g_222 p_423->g_226 p_423->g_227 p_423->g_228 p_423->g_231 p_423->g_233 p_423->g_68
 * writes: p_423->g_68.f0 p_423->g_104 p_423->g_34 p_423->g_128 p_423->g_12 p_423->g_68.f1 p_423->g_96 p_423->g_166 p_423->g_168 p_423->g_173 p_423->g_199 p_423->g_211 p_423->g_234
 */
struct S0  func_73(int64_t  p_74, struct S0 * p_75, struct S1 * p_423)
{ /* block id: 46 */
    VECTOR(uint8_t, 4) l_77 = (VECTOR(uint8_t, 4))(0xABL, (VECTOR(uint8_t, 2))(0xABL, 0x3DL), 0x3DL);
    VECTOR(uint8_t, 8) l_78 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 252UL), 252UL), 252UL, 1UL, 252UL);
    int32_t l_84 = (-1L);
    int64_t *l_98 = (void*)0;
    int64_t *l_143 = (void*)0;
    int64_t **l_205 = &p_423->g_96;
    uint8_t *l_220 = (void*)0;
    VECTOR(uint32_t, 8) l_225 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL);
    int32_t **l_232 = (void*)0;
    int i;
    (*p_423->g_198) = ((0L & (0L ^ (((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_77.wxzyzzyx)).hi)).wywwyxzwywxwwzww)).hi)).hi)).wxwxwzywzzzzxxwx, ((VECTOR(uint8_t, 8))(0x8CL, ((VECTOR(uint8_t, 4))(l_78.s5526)), 0UL, 255UL, 4UL)).s4517651506306473, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0x67L, func_79((safe_mod_func_int32_t_s_s((p_74 , (!(l_84 = (0x3DL ^ p_74)))), ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((func_87((safe_rshift_func_int8_t_s_u(func_94(p_423->g_9.x, p_423), 6)), l_98, func_99(l_98, &p_423->g_3, p_423), l_143, p_423) && p_423->g_comm_values[p_423->tid]), l_78.s3, 0x032AL, 0xA7B5L, 65535UL, 0x955AL, 0xA282L, 65526UL)).s5, GROUP_DIVERGE(2, 1))) , p_423->g_166))), l_78.s0, p_423), 9UL, 1UL)).lo)).xxyxxxyyxxyxyxxy))).odd, ((VECTOR(uint8_t, 8))(0xAFL))))).s5 > GROUP_DIVERGE(2, 1)))) , &l_84);
    for (p_423->g_104.f1 = 0; (p_423->g_104.f1 >= 12); p_423->g_104.f1 = safe_add_func_int16_t_s_s(p_423->g_104.f1, 9))
    { /* block id: 87 */
        int32_t **l_202 = &p_423->g_199;
        int64_t **l_204 = &p_423->g_96;
        int64_t ***l_203[5] = {&l_204,&l_204,&l_204,&l_204,&l_204};
        uint8_t *l_210 = (void*)0;
        uint8_t **l_221 = &l_220;
        uint8_t l_229 = 255UL;
        int32_t *l_230[6] = {&p_423->g_68.f0,&l_84,&p_423->g_68.f0,&p_423->g_68.f0,&l_84,&p_423->g_68.f0};
        int i;
        (*l_202) = (*p_423->g_198);
        l_205 = &p_423->g_96;
        p_423->g_12.s0 &= (safe_add_func_int16_t_s_s(((0x4FC381A5L > (safe_lshift_func_uint8_t_u_u(0x76L, (p_423->g_211 = 0xC9L)))) , (((safe_add_func_uint64_t_u_u((**l_202), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((*l_221) = l_220) == p_423->g_222) , (safe_sub_func_int32_t_s_s((-1L), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 0UL)))).yyxx)), ((VECTOR(uint32_t, 2))(l_225.s25)), 1UL, 0UL)).s24)).yxxxyxyy)).s5))), ((p_423->g_226 != &p_423->g_227) > (*p_423->g_199)))), l_78.s1)) , (**p_423->g_226)), (**l_202))))) == 0x3B53L) ^ 1L)), l_229));
    }
    (*p_423->g_231) = (*p_423->g_198);
    (*p_423->g_233) = l_232;
    return (*p_423->g_136);
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_68.f1 p_423->g_17 p_423->g_128
 * writes:
 */
uint8_t  func_79(uint32_t  p_80, uint16_t  p_81, struct S1 * p_423)
{ /* block id: 79 */
    VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0C6EC92AL), 0x0C6EC92AL);
    VECTOR(int32_t, 16) l_177 = (VECTOR(int32_t, 16))(0x15AE5765L, (VECTOR(int32_t, 4))(0x15AE5765L, (VECTOR(int32_t, 2))(0x15AE5765L, 0x7C3BE647L), 0x7C3BE647L), 0x7C3BE647L, 0x15AE5765L, 0x7C3BE647L, (VECTOR(int32_t, 2))(0x15AE5765L, 0x7C3BE647L), (VECTOR(int32_t, 2))(0x15AE5765L, 0x7C3BE647L), 0x15AE5765L, 0x7C3BE647L, 0x15AE5765L, 0x7C3BE647L);
    VECTOR(int32_t, 16) l_178 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4445633AL), 0x4445633AL), 0x4445633AL, (-1L), 0x4445633AL, (VECTOR(int32_t, 2))((-1L), 0x4445633AL), (VECTOR(int32_t, 2))((-1L), 0x4445633AL), (-1L), 0x4445633AL, (-1L), 0x4445633AL);
    int64_t **l_179[1];
    uint16_t *l_184 = &p_423->g_173;
    int64_t l_195 = 0x58078B896CBFC902L;
    uint32_t *l_196[10][7] = {{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197},{(void*)0,&p_423->g_197,&p_423->g_197,&p_423->g_197,(void*)0,&p_423->g_197,&p_423->g_197}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_179[i] = &p_423->g_96;
    l_178.se = ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_176.xzyz)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_177.s7b1380094e7ec2f7)))))).s50, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_178.sdef6)).xxyxwyxzzxxwxxzy)).sb6))), (l_179[0] != l_179[0]), (~((l_176.y = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((l_184 != &p_81) < (safe_div_func_int16_t_s_s((((l_178.sf != ((VECTOR(uint32_t, 4))(4294967295UL, (l_177.s1 = (p_81 ^ ((l_177.s7 && (safe_div_func_int16_t_s_s(l_177.s7, ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((p_423->g_68.f1 == p_423->g_17) <= p_81), 4)), 255UL)), l_195)) || p_423->g_128)))) >= p_423->g_68.f1))), 0xD73EC10CL, 4294967293UL)).z) , (void*)0) != l_196[1][2]), p_80))) | 0xEEB7C2CEL), 0x430DL)), l_176.y))) , 1L)), ((VECTOR(int32_t, 2))(1L)), l_195, ((VECTOR(int32_t, 2))((-10L))), 1L, 0x0C366B97L, 7L)).sc2fc, ((VECTOR(int32_t, 4))(0x0FFC3AD4L))))).w;
    return l_178.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_68.f1 p_423->g_128 p_423->g_160 p_423->g_68.f2 p_423->g_166 p_423->g_12 p_423->g_34.f0 p_423->g_68.f0 p_423->g_168 p_423->g_3 p_423->g_104.f0 p_423->g_173
 * writes: p_423->g_12 p_423->g_68.f1 p_423->g_96 p_423->g_166 p_423->g_168 p_423->g_173
 */
int32_t  func_87(uint64_t  p_88, int64_t * p_89, struct S0  p_90, int64_t * p_91, struct S1 * p_423)
{ /* block id: 64 */
    int32_t *l_144[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_144[i][j] = &p_423->g_128;
    }
    p_423->g_12.s2 = (p_90.f0 = ((VECTOR(int32_t, 2))(9L, 0x1243A785L)).even);
    for (p_423->g_68.f1 = 0; (p_423->g_68.f1 == 60); p_423->g_68.f1++)
    { /* block id: 69 */
        VECTOR(int16_t, 2) l_151 = (VECTOR(int16_t, 2))((-1L), 0x1C67L);
        struct S0 **l_154 = &p_423->g_136;
        int64_t **l_159[2];
        int32_t *l_165 = &p_423->g_166;
        uint32_t *l_167 = &p_423->g_168;
        int32_t l_169 = 0L;
        uint16_t *l_172[1][8][7] = {{{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173},{&p_423->g_173,(void*)0,&p_423->g_173,&p_423->g_173,&p_423->g_173,(void*)0,&p_423->g_173}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_159[i] = &p_423->g_96;
        l_169 &= (p_423->g_128 != (safe_div_func_uint64_t_u_u(((((((*l_167) &= (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(8L, 0L)).xxxyyxyx, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 2))(l_151.yy)).yxyyxyxy, (int16_t)((safe_mod_func_int8_t_s_s((((((void*)0 != l_154) >= GROUP_DIVERGE(1, 1)) <= ((safe_rshift_func_int8_t_s_u(0L, 1)) , GROUP_DIVERGE(2, 1))) , (safe_mul_func_int16_t_s_s((p_90.f1 > (((p_423->g_96 = p_89) == p_423->g_160) ^ (safe_lshift_func_uint8_t_u_u((((*l_165) &= (safe_div_func_int16_t_s_s((&p_423->g_136 != &p_423->g_136), p_423->g_68.f2))) , 0x58L), p_423->g_12.s5)))), FAKE_DIVERGE(p_423->global_1_offset, get_global_id(1), 10)))), p_90.f0)) <= p_423->g_34.f0), (int16_t)p_423->g_68.f0)))))).s71, ((VECTOR(int16_t, 2))(0x578CL))))).hi, 5))) , &p_423->g_136) != &p_423->g_136) || p_423->g_3) <= p_90.f0), p_423->g_104.f0)));
        l_169 = (safe_sub_func_uint16_t_u_u((p_423->g_173--), (p_423->g_68.f0 , ((VECTOR(int16_t, 2))((-1L), 0x0FD0L)).even)));
        l_169 = (+((VECTOR(int32_t, 2))(0x530F81C4L, (-2L))).odd);
    }
    return p_88;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_96 p_423->g_68.f0
 * writes: p_423->g_68.f0
 */
int8_t  func_94(uint32_t  p_95, struct S1 * p_423)
{ /* block id: 48 */
    int32_t *l_97 = &p_423->g_68.f0;
    (*l_97) |= (p_423->g_96 != p_423->g_96);
    return (*l_97);
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_12 p_423->l_comm_values p_423->g_14 p_423->g_9 p_423->g_128 p_423->g_34 p_423->g_135 p_423->g_104.f2 p_423->g_68.f1 p_423->g_68.f2 p_423->g_136 p_423->g_104
 * writes: p_423->g_104 p_423->g_34 p_423->g_128
 */
struct S0  func_99(int64_t * p_100, int32_t * p_101, struct S1 * p_423)
{ /* block id: 51 */
    struct S0 l_102[8] = {{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL},{0x4D61341CL,18446744073709551615UL,4294967288UL}};
    struct S0 *l_103[1][7][1] = {{{&l_102[6]},{&l_102[6]},{&l_102[6]},{&l_102[6]},{&l_102[6]},{&l_102[6]},{&l_102[6]}}};
    int32_t *l_105 = &p_423->g_104.f0;
    int32_t *l_106 = (void*)0;
    int32_t *l_107 = &p_423->g_104.f0;
    int32_t *l_108 = &p_423->g_104.f0;
    int32_t *l_109 = &l_102[6].f0;
    int32_t l_110 = 5L;
    int32_t *l_111 = &p_423->g_104.f0;
    int32_t *l_112[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(uint32_t, 16) l_113 = (VECTOR(uint32_t, 16))(0x998E2424L, (VECTOR(uint32_t, 4))(0x998E2424L, (VECTOR(uint32_t, 2))(0x998E2424L, 0x22F18E3FL), 0x22F18E3FL), 0x22F18E3FL, 0x998E2424L, 0x22F18E3FL, (VECTOR(uint32_t, 2))(0x998E2424L, 0x22F18E3FL), (VECTOR(uint32_t, 2))(0x998E2424L, 0x22F18E3FL), 0x998E2424L, 0x22F18E3FL, 0x998E2424L, 0x22F18E3FL);
    struct S0 **l_134[2][1][7] = {{{&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0]}},{{&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0],&l_103[0][5][0]}}};
    int i, j, k;
    p_423->g_34 = (p_423->g_104 = l_102[6]);
    l_102[6].f0 |= p_423->g_12.s1;
    l_113.s2++;
    if (((void*)0 != &l_110))
    { /* block id: 56 */
        uint32_t l_118 = 9UL;
        struct S0 *l_127 = &p_423->g_104;
        p_423->g_128 &= ((safe_div_func_uint32_t_u_u(((p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 70))] , (((l_118 >= ((*l_111) = 1L)) != 0x35A4D2AB853E7CFBL) , (safe_mod_func_int8_t_s_s(0x01L, ((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((*l_109) , ((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_423->group_2_offset, get_group_id(2), 10), (-1L))) < ((~((void*)0 != l_127)) , p_423->g_14))), l_118)), 1UL)) ^ l_118))))) != p_423->g_12.s7), p_423->g_9.z)) <= l_118);
    }
    else
    { /* block id: 59 */
        volatile struct S0 l_129 = {0x07FC28E3L,0UL,4UL};/* VOLATILE GLOBAL l_129 */
        int32_t l_132 = 0x59F5654AL;
        VECTOR(uint8_t, 2) l_133 = (VECTOR(uint8_t, 2))(0xA3L, 0x09L);
        VECTOR(uint8_t, 4) l_137 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
        VECTOR(uint8_t, 4) l_138 = (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 0x5BL), 0x5BL);
        int i;
        l_129 = p_423->g_34;
        (*l_111) = ((safe_rshift_func_uint8_t_u_s((l_129.f1 ^ ((VECTOR(uint8_t, 16))(l_132, 249UL, ((VECTOR(uint8_t, 2))(l_133.xx)), 4UL, 0xD3L, 0x67L, 0xF0L, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))((l_134[1][0][2] != p_423->g_135), 0xD5L, 252UL, 0xBDL)).xzywzwxx, ((VECTOR(uint8_t, 2))(l_137.zz)).xyyyyxyx))))).sb), (4UL <= (((((VECTOR(uint8_t, 8))(l_138.xzwxyxzz)).s7 < (FAKE_DIVERGE(p_423->group_0_offset, get_group_id(0), 10) | p_423->g_104.f2)) > p_423->g_68.f1) == ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_132 == ((*l_109) & p_423->g_68.f2)), l_138.z)), l_133.x)) && GROUP_DIVERGE(1, 1)))))) ^ l_137.y);
    }
    return (**p_423->g_135);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_comm_values[i] = 1;
    struct S1 c_424;
    struct S1* p_423 = &c_424;
    struct S1 c_425 = {
        (-6L), // p_423->g_2
        0x37D45DB3L, // p_423->g_3
        (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-9L)), (-9L)), // p_423->g_9
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L)), // p_423->g_12
        (-2L), // p_423->g_14
        (-10L), // p_423->g_15
        0x4D4E2095L, // p_423->g_16
        0L, // p_423->g_17
        0L, // p_423->g_18
        {0x4E519C81L,0UL,4294967289UL}, // p_423->g_34
        {0x6079B8BCL,18446744073709551613UL,0xF8A7072EL}, // p_423->g_68
        (void*)0, // p_423->g_96
        {-1L,0xA9704766C6174CE2L,0xAA37561DL}, // p_423->g_104
        1L, // p_423->g_128
        &p_423->g_104, // p_423->g_136
        &p_423->g_136, // p_423->g_135
        (void*)0, // p_423->g_160
        (-3L), // p_423->g_166
        0x0AD5FBB0L, // p_423->g_168
        0xE0C2L, // p_423->g_173
        0x1C2129FDL, // p_423->g_197
        &p_423->g_128, // p_423->g_199
        &p_423->g_199, // p_423->g_198
        0x4382L, // p_423->g_211
        (void*)0, // p_423->g_222
        251UL, // p_423->g_228
        &p_423->g_228, // p_423->g_227
        &p_423->g_227, // p_423->g_226
        &p_423->g_199, // p_423->g_231
        &p_423->g_199, // p_423->g_234
        &p_423->g_234, // p_423->g_233
        &p_423->g_18, // p_423->g_239
        &p_423->g_239, // p_423->g_238
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL), // p_423->g_323
        (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), // p_423->g_324
        {&p_423->g_68,(void*)0,&p_423->g_68,&p_423->g_68,(void*)0,&p_423->g_68,&p_423->g_68}, // p_423->g_326
        (VECTOR(uint16_t, 2))(0x4F34L, 0x8B82L), // p_423->g_335
        {252UL,252UL,252UL,252UL}, // p_423->g_347
        (VECTOR(int16_t, 16))(0x4870L, (VECTOR(int16_t, 4))(0x4870L, (VECTOR(int16_t, 2))(0x4870L, 0x7E1AL), 0x7E1AL), 0x7E1AL, 0x4870L, 0x7E1AL, (VECTOR(int16_t, 2))(0x4870L, 0x7E1AL), (VECTOR(int16_t, 2))(0x4870L, 0x7E1AL), 0x4870L, 0x7E1AL, 0x4870L, 0x7E1AL), // p_423->g_387
        (VECTOR(uint8_t, 2))(0xA2L, 1UL), // p_423->g_406
        (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 5UL), 5UL), 5UL, 251UL, 5UL, (VECTOR(uint8_t, 2))(251UL, 5UL), (VECTOR(uint8_t, 2))(251UL, 5UL), 251UL, 5UL, 251UL, 5UL), // p_423->g_407
        0, // p_423->v_collective
        sequence_input[get_global_id(0)], // p_423->global_0_offset
        sequence_input[get_global_id(1)], // p_423->global_1_offset
        sequence_input[get_global_id(2)], // p_423->global_2_offset
        sequence_input[get_local_id(0)], // p_423->local_0_offset
        sequence_input[get_local_id(1)], // p_423->local_1_offset
        sequence_input[get_local_id(2)], // p_423->local_2_offset
        sequence_input[get_group_id(0)], // p_423->group_0_offset
        sequence_input[get_group_id(1)], // p_423->group_1_offset
        sequence_input[get_group_id(2)], // p_423->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 70)), permutations[0][get_linear_local_id()])), // p_423->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_424 = c_425;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_423);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_423->g_2, "p_423->g_2", print_hash_value);
    transparent_crc(p_423->g_3, "p_423->g_3", print_hash_value);
    transparent_crc(p_423->g_9.x, "p_423->g_9.x", print_hash_value);
    transparent_crc(p_423->g_9.y, "p_423->g_9.y", print_hash_value);
    transparent_crc(p_423->g_9.z, "p_423->g_9.z", print_hash_value);
    transparent_crc(p_423->g_9.w, "p_423->g_9.w", print_hash_value);
    transparent_crc(p_423->g_12.s0, "p_423->g_12.s0", print_hash_value);
    transparent_crc(p_423->g_12.s1, "p_423->g_12.s1", print_hash_value);
    transparent_crc(p_423->g_12.s2, "p_423->g_12.s2", print_hash_value);
    transparent_crc(p_423->g_12.s3, "p_423->g_12.s3", print_hash_value);
    transparent_crc(p_423->g_12.s4, "p_423->g_12.s4", print_hash_value);
    transparent_crc(p_423->g_12.s5, "p_423->g_12.s5", print_hash_value);
    transparent_crc(p_423->g_12.s6, "p_423->g_12.s6", print_hash_value);
    transparent_crc(p_423->g_12.s7, "p_423->g_12.s7", print_hash_value);
    transparent_crc(p_423->g_14, "p_423->g_14", print_hash_value);
    transparent_crc(p_423->g_15, "p_423->g_15", print_hash_value);
    transparent_crc(p_423->g_16, "p_423->g_16", print_hash_value);
    transparent_crc(p_423->g_17, "p_423->g_17", print_hash_value);
    transparent_crc(p_423->g_18, "p_423->g_18", print_hash_value);
    transparent_crc(p_423->g_34.f0, "p_423->g_34.f0", print_hash_value);
    transparent_crc(p_423->g_34.f1, "p_423->g_34.f1", print_hash_value);
    transparent_crc(p_423->g_34.f2, "p_423->g_34.f2", print_hash_value);
    transparent_crc(p_423->g_68.f0, "p_423->g_68.f0", print_hash_value);
    transparent_crc(p_423->g_68.f1, "p_423->g_68.f1", print_hash_value);
    transparent_crc(p_423->g_68.f2, "p_423->g_68.f2", print_hash_value);
    transparent_crc(p_423->g_104.f0, "p_423->g_104.f0", print_hash_value);
    transparent_crc(p_423->g_104.f1, "p_423->g_104.f1", print_hash_value);
    transparent_crc(p_423->g_104.f2, "p_423->g_104.f2", print_hash_value);
    transparent_crc(p_423->g_128, "p_423->g_128", print_hash_value);
    transparent_crc(p_423->g_166, "p_423->g_166", print_hash_value);
    transparent_crc(p_423->g_168, "p_423->g_168", print_hash_value);
    transparent_crc(p_423->g_173, "p_423->g_173", print_hash_value);
    transparent_crc(p_423->g_197, "p_423->g_197", print_hash_value);
    transparent_crc(p_423->g_211, "p_423->g_211", print_hash_value);
    transparent_crc(p_423->g_228, "p_423->g_228", print_hash_value);
    transparent_crc(p_423->g_323.s0, "p_423->g_323.s0", print_hash_value);
    transparent_crc(p_423->g_323.s1, "p_423->g_323.s1", print_hash_value);
    transparent_crc(p_423->g_323.s2, "p_423->g_323.s2", print_hash_value);
    transparent_crc(p_423->g_323.s3, "p_423->g_323.s3", print_hash_value);
    transparent_crc(p_423->g_323.s4, "p_423->g_323.s4", print_hash_value);
    transparent_crc(p_423->g_323.s5, "p_423->g_323.s5", print_hash_value);
    transparent_crc(p_423->g_323.s6, "p_423->g_323.s6", print_hash_value);
    transparent_crc(p_423->g_323.s7, "p_423->g_323.s7", print_hash_value);
    transparent_crc(p_423->g_324.x, "p_423->g_324.x", print_hash_value);
    transparent_crc(p_423->g_324.y, "p_423->g_324.y", print_hash_value);
    transparent_crc(p_423->g_335.x, "p_423->g_335.x", print_hash_value);
    transparent_crc(p_423->g_335.y, "p_423->g_335.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_423->g_347[i], "p_423->g_347[i]", print_hash_value);

    }
    transparent_crc(p_423->g_387.s0, "p_423->g_387.s0", print_hash_value);
    transparent_crc(p_423->g_387.s1, "p_423->g_387.s1", print_hash_value);
    transparent_crc(p_423->g_387.s2, "p_423->g_387.s2", print_hash_value);
    transparent_crc(p_423->g_387.s3, "p_423->g_387.s3", print_hash_value);
    transparent_crc(p_423->g_387.s4, "p_423->g_387.s4", print_hash_value);
    transparent_crc(p_423->g_387.s5, "p_423->g_387.s5", print_hash_value);
    transparent_crc(p_423->g_387.s6, "p_423->g_387.s6", print_hash_value);
    transparent_crc(p_423->g_387.s7, "p_423->g_387.s7", print_hash_value);
    transparent_crc(p_423->g_387.s8, "p_423->g_387.s8", print_hash_value);
    transparent_crc(p_423->g_387.s9, "p_423->g_387.s9", print_hash_value);
    transparent_crc(p_423->g_387.sa, "p_423->g_387.sa", print_hash_value);
    transparent_crc(p_423->g_387.sb, "p_423->g_387.sb", print_hash_value);
    transparent_crc(p_423->g_387.sc, "p_423->g_387.sc", print_hash_value);
    transparent_crc(p_423->g_387.sd, "p_423->g_387.sd", print_hash_value);
    transparent_crc(p_423->g_387.se, "p_423->g_387.se", print_hash_value);
    transparent_crc(p_423->g_387.sf, "p_423->g_387.sf", print_hash_value);
    transparent_crc(p_423->g_406.x, "p_423->g_406.x", print_hash_value);
    transparent_crc(p_423->g_406.y, "p_423->g_406.y", print_hash_value);
    transparent_crc(p_423->g_407.s0, "p_423->g_407.s0", print_hash_value);
    transparent_crc(p_423->g_407.s1, "p_423->g_407.s1", print_hash_value);
    transparent_crc(p_423->g_407.s2, "p_423->g_407.s2", print_hash_value);
    transparent_crc(p_423->g_407.s3, "p_423->g_407.s3", print_hash_value);
    transparent_crc(p_423->g_407.s4, "p_423->g_407.s4", print_hash_value);
    transparent_crc(p_423->g_407.s5, "p_423->g_407.s5", print_hash_value);
    transparent_crc(p_423->g_407.s6, "p_423->g_407.s6", print_hash_value);
    transparent_crc(p_423->g_407.s7, "p_423->g_407.s7", print_hash_value);
    transparent_crc(p_423->g_407.s8, "p_423->g_407.s8", print_hash_value);
    transparent_crc(p_423->g_407.s9, "p_423->g_407.s9", print_hash_value);
    transparent_crc(p_423->g_407.sa, "p_423->g_407.sa", print_hash_value);
    transparent_crc(p_423->g_407.sb, "p_423->g_407.sb", print_hash_value);
    transparent_crc(p_423->g_407.sc, "p_423->g_407.sc", print_hash_value);
    transparent_crc(p_423->g_407.sd, "p_423->g_407.sd", print_hash_value);
    transparent_crc(p_423->g_407.se, "p_423->g_407.se", print_hash_value);
    transparent_crc(p_423->g_407.sf, "p_423->g_407.sf", print_hash_value);
    transparent_crc(p_423->v_collective, "p_423->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 41; i++)
            transparent_crc(p_423->g_special_values[i + 41 * get_linear_group_id()], "p_423->g_special_values[i + 41 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_423->l_comm_values[get_linear_local_id()], "p_423->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_423->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()], "p_423->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
