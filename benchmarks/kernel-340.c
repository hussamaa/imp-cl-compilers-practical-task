// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 15,29,9 -l 15,1,9
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

__constant uint32_t permutations[10][135] = {
{9,88,89,45,37,72,92,132,5,4,40,29,115,34,57,68,18,55,36,81,112,31,11,52,3,26,42,13,48,100,54,56,97,130,73,127,94,1,23,124,62,87,6,106,125,84,39,91,80,123,114,63,109,67,49,71,129,107,60,17,133,64,101,65,77,22,27,7,19,21,8,74,103,30,41,69,0,128,35,113,102,16,66,85,121,104,98,76,118,96,38,131,32,82,14,59,43,116,70,33,134,53,51,50,2,47,15,105,99,58,83,79,12,28,108,44,25,90,75,86,111,122,126,117,95,93,110,46,120,24,20,119,78,10,61}, // permutation 0
{60,9,125,23,122,113,79,27,1,102,7,41,98,70,66,123,52,81,40,43,56,11,58,80,120,106,111,65,104,0,22,84,90,20,57,54,127,6,17,8,95,31,51,62,35,68,94,4,29,92,115,2,69,74,21,117,26,93,100,13,55,76,36,44,110,42,83,124,10,3,47,34,14,87,77,133,50,45,63,121,33,118,107,24,116,61,88,49,99,48,15,132,59,18,134,101,32,114,75,16,119,128,96,53,103,85,131,86,38,97,30,78,46,37,108,71,91,25,82,126,67,39,28,105,12,129,19,112,73,109,64,5,130,89,72}, // permutation 1
{126,27,59,66,84,72,130,115,39,123,133,127,92,111,23,101,68,33,48,57,80,6,65,2,116,16,8,44,78,34,125,106,51,56,73,85,74,45,53,24,31,132,41,89,49,86,7,88,22,55,87,47,128,69,17,0,62,107,122,21,96,117,93,82,13,25,102,14,76,70,83,64,42,19,134,10,61,4,120,30,112,38,129,105,11,29,20,9,124,28,118,109,77,67,81,32,100,46,119,3,36,15,5,114,90,98,103,43,91,79,131,113,75,94,95,99,110,54,63,40,104,1,108,97,12,35,71,18,50,37,58,60,121,26,52}, // permutation 2
{108,79,43,42,58,48,106,52,95,54,17,7,107,111,89,129,132,110,23,55,105,4,127,128,84,65,81,88,69,47,120,126,118,96,80,24,82,1,16,73,83,15,134,32,98,10,114,53,121,76,44,2,56,72,61,99,70,93,8,125,92,117,9,57,36,27,45,6,5,112,46,21,109,49,26,91,37,123,3,74,11,29,131,63,122,35,20,87,60,12,39,62,85,94,30,119,100,51,67,50,86,90,102,64,25,31,101,19,68,77,103,66,28,97,41,104,13,59,33,34,75,38,18,40,116,0,130,78,14,133,124,113,115,22,71}, // permutation 3
{134,18,28,80,46,122,64,12,59,126,119,38,22,109,67,81,77,48,9,104,24,66,65,94,72,111,35,15,20,17,57,55,44,83,23,30,103,131,53,42,108,93,85,41,98,100,19,69,124,45,27,62,29,58,76,79,86,87,43,84,39,47,82,130,49,14,33,71,7,52,4,128,11,92,16,105,36,101,0,1,54,8,123,112,120,127,68,121,51,114,97,50,21,96,89,75,91,133,61,5,95,107,106,63,40,78,132,118,31,125,113,3,74,73,37,10,90,116,110,32,70,99,129,25,115,13,60,117,102,26,6,56,34,88,2}, // permutation 4
{23,128,53,124,101,25,129,7,116,61,92,122,10,24,106,103,33,59,3,73,67,80,39,62,68,20,63,113,32,6,130,1,50,17,55,60,123,0,81,89,64,36,76,34,71,74,28,99,52,93,65,29,79,18,82,21,108,90,109,57,12,134,102,38,77,70,22,49,14,72,11,69,121,115,26,8,54,66,47,58,88,96,19,111,114,91,85,43,87,75,133,13,16,117,107,95,132,83,97,56,5,2,78,126,51,46,125,30,118,27,40,100,104,86,37,15,120,41,4,94,35,48,45,119,98,9,84,105,42,110,127,112,131,31,44}, // permutation 5
{30,118,104,111,56,54,17,93,14,109,64,97,85,127,73,45,78,112,123,23,47,5,115,68,87,27,59,39,58,50,8,61,99,134,119,67,121,107,110,35,66,55,124,77,106,75,49,132,34,18,80,62,20,12,42,86,105,84,32,0,52,1,76,7,90,2,38,81,11,29,6,101,98,102,129,71,44,51,48,22,130,33,116,83,92,15,69,114,103,28,60,25,19,88,4,9,13,108,95,16,3,10,70,89,53,21,100,113,46,131,36,26,120,122,79,65,125,91,117,96,72,63,43,31,74,24,133,128,126,37,57,82,41,40,94}, // permutation 6
{2,60,82,62,49,128,10,13,95,104,126,63,47,112,133,51,12,7,66,109,130,46,132,88,9,34,84,50,81,40,53,61,58,98,97,110,123,116,83,70,127,64,119,44,52,22,91,103,113,15,96,17,134,117,59,26,19,92,72,125,89,28,105,48,107,36,75,33,67,31,27,14,65,35,114,4,78,0,131,38,29,80,39,24,108,86,55,54,43,6,122,1,74,87,30,93,100,16,8,25,79,45,120,115,85,124,21,111,18,41,56,101,71,76,106,11,94,42,69,37,99,102,68,90,77,5,118,129,57,121,20,73,3,23,32}, // permutation 7
{108,121,61,92,115,52,8,111,72,113,27,62,110,130,93,66,116,101,123,55,2,67,103,43,49,58,129,64,26,15,31,82,87,96,22,16,34,100,76,107,6,122,68,29,13,99,95,23,25,90,119,97,5,38,86,57,28,14,94,88,106,4,54,125,80,0,78,48,24,18,3,47,60,102,44,71,98,21,19,46,41,53,10,75,36,50,85,131,39,112,51,70,56,127,81,91,63,128,109,1,120,69,83,35,30,79,45,17,59,7,74,124,42,89,126,73,9,12,133,104,134,84,40,77,33,105,114,20,118,11,32,65,132,37,117}, // permutation 8
{58,29,28,31,33,60,82,79,72,130,30,118,55,10,86,121,66,65,61,32,52,3,129,5,84,11,17,40,70,132,106,91,67,63,133,6,98,111,43,119,87,124,126,15,50,27,75,48,117,104,76,96,94,74,64,120,2,23,99,134,38,7,12,108,90,100,54,127,101,20,107,49,8,24,80,44,0,14,46,81,95,37,56,22,116,9,125,123,47,1,42,57,128,114,131,102,110,62,25,53,51,59,19,89,115,41,113,122,109,34,35,68,78,77,26,69,18,93,88,21,97,39,36,73,103,13,16,45,85,4,92,83,112,105,71} // permutation 9
};

// Seed: 1189523504

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int16_t  f1;
   volatile int32_t  f2;
};

struct S1 {
   int32_t  f0;
   int16_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6;
    int32_t g_7;
    volatile int32_t g_10[6][8][2];
    volatile int32_t g_11[9][8];
    volatile int32_t g_12;
    int32_t g_13;
    volatile int32_t g_16[9][4];
    volatile int32_t g_17;
    volatile VECTOR(int32_t, 4) g_18;
    int32_t g_19;
    int32_t g_22;
    volatile int32_t g_55;
    VECTOR(int32_t, 2) g_56;
    VECTOR(uint16_t, 16) g_70;
    volatile VECTOR(uint8_t, 16) g_76;
    uint16_t g_89;
    uint32_t g_92;
    int16_t g_100;
    int32_t g_101;
    volatile VECTOR(int16_t, 16) g_106;
    VECTOR(int32_t, 16) g_118;
    VECTOR(uint16_t, 16) g_131;
    struct S0 g_132[2][6];
    volatile int8_t g_137;
    volatile int8_t *g_136[2];
    volatile int8_t g_145;
    int32_t *g_150;
    int32_t ** volatile g_149[7];
    int64_t g_159[4];
    uint16_t g_160;
    int8_t g_161;
    uint8_t g_306;
    int32_t ** volatile g_337[3];
    int32_t ** volatile g_338;
    VECTOR(int32_t, 8) g_359;
    int32_t g_363;
    uint64_t g_366;
    VECTOR(uint64_t, 8) g_368;
    volatile VECTOR(uint8_t, 4) g_409;
    volatile VECTOR(uint8_t, 2) g_414;
    VECTOR(uint8_t, 8) g_416;
    VECTOR(uint8_t, 2) g_417;
    volatile VECTOR(uint8_t, 8) g_418;
    VECTOR(int16_t, 8) g_435;
    VECTOR(uint32_t, 2) g_437;
    volatile VECTOR(int8_t, 8) g_445;
    volatile struct S1 g_463;
    uint32_t *g_494;
    uint32_t **g_493[3];
    volatile struct S1 * volatile g_499;
    struct S1 g_507;
    volatile VECTOR(int32_t, 8) g_512;
    volatile int64_t *g_516;
    volatile int64_t * volatile * volatile g_515;
    volatile VECTOR(uint8_t, 4) g_553;
    VECTOR(int64_t, 8) g_554;
    uint8_t g_607;
    volatile VECTOR(uint8_t, 16) g_620;
    int64_t *g_633;
    int64_t **g_632;
    int32_t ** volatile g_654;
    VECTOR(int32_t, 8) g_662;
    volatile VECTOR(int32_t, 16) g_664;
    volatile VECTOR(int32_t, 4) g_665;
    volatile VECTOR(int32_t, 16) g_666;
    struct S1 g_668;
    volatile uint8_t * volatile g_678;
    volatile uint8_t * volatile * volatile g_677;
    uint8_t * volatile *g_679;
    struct S1 g_692;
    int16_t g_712;
    uint32_t g_718;
    int32_t ** volatile g_721;
    volatile VECTOR(int32_t, 16) g_742;
    VECTOR(int64_t, 2) g_746;
    VECTOR(uint32_t, 16) g_787;
    uint16_t g_803;
    volatile VECTOR(uint8_t, 8) g_811;
    VECTOR(uint32_t, 16) g_854;
    uint64_t *g_860;
    uint64_t **g_859;
    int32_t * volatile g_880;
    VECTOR(int16_t, 4) g_886;
    volatile struct S0 g_889[4];
    int64_t g_892;
    int32_t *g_907;
    volatile struct S1 g_908;
    volatile struct S0 g_912;
    VECTOR(uint8_t, 16) g_915;
    int32_t ** volatile g_935;
    int16_t *g_941;
    uint32_t g_972;
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
uint16_t  func_1(struct S2 * p_1003);
int32_t * func_25(int32_t * p_26, struct S2 * p_1003);
int32_t  func_28(int8_t  p_29, struct S2 * p_1003);
int16_t  func_30(int32_t * p_31, struct S2 * p_1003);
int32_t * func_32(int32_t * p_33, struct S2 * p_1003);
int32_t * func_34(int32_t * p_35, int8_t  p_36, int32_t * p_37, struct S2 * p_1003);
int32_t * func_38(int32_t * p_39, uint32_t  p_40, uint64_t  p_41, struct S2 * p_1003);
int32_t * func_43(int32_t * p_44, int32_t  p_45, uint64_t  p_46, struct S2 * p_1003);
int32_t * func_47(int32_t * p_48, int32_t * p_49, uint32_t  p_50, int32_t  p_51, struct S2 * p_1003);
int32_t * func_52(int32_t * p_53, struct S2 * p_1003);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1003->g_3 p_1003->g_7 p_1003->g_13 p_1003->g_19 p_1003->g_22 p_1003->g_150 p_1003->g_131 p_1003->g_972 p_1003->g_89 p_1003->g_677 p_1003->g_678 p_1003->g_915 p_1003->g_860 p_1003->g_366 p_1003->g_118 p_1003->g_70 p_1003->g_132 p_1003->g_136 p_1003->g_149 p_1003->g_159 p_1003->g_306 p_1003->g_160 p_1003->g_100 p_1003->g_101 p_1003->g_338 p_1003->g_654 p_1003->g_507.f1 p_1003->g_435 p_1003->g_803 p_1003->g_907 p_1003->g_787 p_1003->g_359 p_1003->g_692.f3 p_1003->g_692.f0
 * writes: p_1003->g_3 p_1003->g_7 p_1003->g_13 p_1003->g_19 p_1003->g_22 p_1003->g_972 p_1003->g_89 p_1003->g_56 p_1003->g_149 p_1003->g_159 p_1003->g_160 p_1003->g_161 p_1003->g_92 p_1003->g_306 p_1003->g_100 p_1003->g_132.f1 p_1003->g_101 p_1003->g_150 p_1003->g_907 p_1003->g_712 p_1003->g_803 p_1003->g_692.f3 p_1003->g_692.f0
 */
uint16_t  func_1(struct S2 * p_1003)
{ /* block id: 4 */
    int32_t *l_968 = &p_1003->g_7;
    uint32_t *l_971[8] = {&p_1003->g_972,&p_1003->g_972,&p_1003->g_972,&p_1003->g_972,&p_1003->g_972,&p_1003->g_972,&p_1003->g_972,&p_1003->g_972};
    uint16_t *l_981 = &p_1003->g_89;
    struct S1 *l_985 = &p_1003->g_668;
    struct S1 **l_984 = &l_985;
    VECTOR(int8_t, 8) l_994 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
    int32_t **l_997 = &p_1003->g_907;
    int32_t *l_998 = &p_1003->g_692.f0;
    uint8_t l_1002 = 0xC6L;
    int i;
    for (p_1003->g_3 = (-16); (p_1003->g_3 <= 13); p_1003->g_3++)
    { /* block id: 7 */
        int32_t l_964 = (-1L);
        for (p_1003->g_7 = 0; (p_1003->g_7 != 27); p_1003->g_7++)
        { /* block id: 10 */
            uint8_t l_965 = 251UL;
            for (p_1003->g_13 = (-2); (p_1003->g_13 >= 9); p_1003->g_13++)
            { /* block id: 13 */
                for (p_1003->g_19 = 0; (p_1003->g_19 != (-21)); p_1003->g_19 = safe_sub_func_uint64_t_u_u(p_1003->g_19, 6))
                { /* block id: 16 */
                    for (p_1003->g_22 = (-12); (p_1003->g_22 >= 2); p_1003->g_22++)
                    { /* block id: 19 */
                        int32_t *l_27 = (void*)0;
                        int32_t **l_963 = &p_1003->g_150;
                        (1 + 1);
                    }
                }
                (*p_1003->g_150) = l_964;
                (*p_1003->g_150) = (-7L);
                return p_1003->g_131.sd;
            }
            ++l_965;
        }
    }
    (*l_997) = func_47(func_32(((*l_997) = func_38(l_968, (p_1003->g_972 |= (safe_rshift_func_int8_t_s_s(0x6BL, 5))), (((safe_div_func_uint16_t_u_u(65532UL, (~GROUP_DIVERGE(1, 1)))) < (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((1L < ((++(*l_981)) & (((*l_984) = &p_1003->g_507) == ((((*l_968) = (safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(0x78L, 255UL)), (GROUP_DIVERGE(0, 1) <= (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_994.s5227)).z, FAKE_DIVERGE(p_1003->global_2_offset, get_global_id(2), 10)))))) >= (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((+(((0UL < (safe_rshift_func_int16_t_s_s(((*p_1003->g_677) != &p_1003->g_607), 12))) != (*l_968)) || (*l_968))) , p_1003->g_915.sb), 0xC1L, 0x0DL, (*l_968), 1UL, GROUP_DIVERGE(1, 1), 0UL, 1UL)), (*l_968), ((VECTOR(uint8_t, 2))(1UL)), 4UL, ((VECTOR(uint8_t, 2))(0xE5L)), 0x81L, 0xBAL)).s4 != (*l_968))) != (*l_968)), (*l_968)))) < 0x4E3D2C95L) , &p_1003->g_668)))) && (*p_1003->g_860)) ^ l_994.s1) <= GROUP_DIVERGE(2, 1)), 4)), p_1003->g_118.s0)), l_994.s1))) , 18446744073709551606UL), p_1003)), p_1003), l_998, p_1003->g_787.s4, p_1003->g_359.s3, p_1003);
    for (p_1003->g_692.f3 = 0; (p_1003->g_692.f3 > 44); p_1003->g_692.f3 = safe_add_func_int8_t_s_s(p_1003->g_692.f3, 5))
    { /* block id: 446 */
        int32_t l_1001 = 0L;
        (*l_998) &= l_1001;
        return l_1002;
    }
    return (*l_968);
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_13 p_1003->g_56 p_1003->g_70 p_1003->g_76 p_1003->g_19 p_1003->g_89 p_1003->g_92 p_1003->g_12 p_1003->g_11 p_1003->l_comm_values p_1003->g_10 p_1003->g_7 p_1003->g_106 p_1003->g_118 p_1003->g_101 p_1003->g_comm_values p_1003->g_131 p_1003->g_132 p_1003->g_136 p_1003->g_3 p_1003->g_149 p_1003->g_159 p_1003->g_306 p_1003->g_160 p_1003->g_100 p_1003->g_150 p_1003->g_338 p_1003->g_654 p_1003->g_554 p_1003->g_854 p_1003->g_718 p_1003->g_463.f2 p_1003->g_859 p_1003->g_161 p_1003->g_668.f0 p_1003->g_507.f1 p_1003->g_435 p_1003->g_712 p_1003->g_886 p_1003->g_803 p_1003->g_889 p_1003->g_692 p_1003->g_907 p_1003->g_908 p_1003->g_912 p_1003->g_915 p_1003->g_553 p_1003->g_363 p_1003->g_860 p_1003->g_366 p_1003->g_935 p_1003->g_507.f3 p_1003->g_668.f1 p_1003->g_515 p_1003->g_516
 * writes: p_1003->g_56 p_1003->g_89 p_1003->g_149 p_1003->g_159 p_1003->g_160 p_1003->g_161 p_1003->g_92 p_1003->g_306 p_1003->g_100 p_1003->g_132.f1 p_1003->g_101 p_1003->g_150 p_1003->g_70 p_1003->g_131 p_1003->g_718 p_1003->g_668.f1 p_1003->g_859 p_1003->g_668.f0 p_1003->g_507.f0 p_1003->g_712 p_1003->g_803 p_1003->g_892 p_1003->g_363 p_1003->g_907 p_1003->g_507.f3 p_1003->g_941 p_1003->g_692.f1
 */
int32_t * func_25(int32_t * p_26, struct S2 * p_1003)
{ /* block id: 20 */
    int32_t *l_42 = (void*)0;
    uint16_t l_946[8] = {0x0AD9L,0x0AD9L,0x0AD9L,0x0AD9L,0x0AD9L,0x0AD9L,0x0AD9L,0x0AD9L};
    int32_t *l_949 = (void*)0;
    int32_t *l_950 = (void*)0;
    int32_t *l_951 = (void*)0;
    int32_t *l_952 = &p_1003->g_507.f0;
    int32_t *l_953 = &p_1003->g_101;
    int32_t *l_954 = &p_1003->g_101;
    int32_t *l_955 = &p_1003->g_507.f0;
    int32_t *l_956 = (void*)0;
    int32_t l_957 = 0L;
    int32_t *l_958[2];
    int16_t l_959[5][2][10] = {{{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL},{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL}},{{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL},{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL}},{{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL},{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL}},{{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL},{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL}},{{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL},{0x54F4L,0x16F1L,(-9L),0x7134L,(-9L),0x16F1L,0x54F4L,0x0048L,0x2CEAL,0x2CEAL}}};
    uint8_t l_960 = 0x6AL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_958[i] = &p_1003->g_692.f0;
    l_946[6] = func_28((GROUP_DIVERGE(1, 1) == func_30(func_32(func_34(func_38(l_42, (l_42 == l_42), p_1003->g_13, p_1003), p_1003->g_554.s7, l_42, p_1003), p_1003), p_1003)), p_1003);
    for (p_1003->g_692.f1 = 11; (p_1003->g_692.f1 >= 24); ++p_1003->g_692.f1)
    { /* block id: 422 */
        return p_26;
    }
    l_960++;
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_515 p_1003->g_516 p_1003->g_132.f1
 * writes: p_1003->g_941 p_1003->g_132.f1
 */
int32_t  func_28(int8_t  p_29, struct S2 * p_1003)
{ /* block id: 413 */
    int64_t l_938[9][8] = {{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)},{1L,(-5L),(-1L),(-5L),(-1L),(-5L),(-1L),(-5L)}};
    int16_t *l_940 = &p_1003->g_132[1][1].f1;
    int16_t **l_939[4];
    int32_t *l_944 = (void*)0;
    VECTOR(int32_t, 4) l_945 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_939[i] = &l_940;
    l_938[1][5] = 0x1715D2AEL;
    l_945.z |= ((&p_1003->g_100 != (p_1003->g_941 = &p_1003->g_712)) >= (p_29 ^ ((*l_940) |= (safe_mul_func_uint8_t_u_u(0xB9L, (&l_938[1][5] == (*p_1003->g_515)))))));
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_908 p_1003->g_912 p_1003->g_915 p_1003->g_553 p_1003->g_70 p_1003->g_101 p_1003->g_363 p_1003->g_507.f1 p_1003->g_435 p_1003->g_160 p_1003->g_803 p_1003->g_907 p_1003->g_76 p_1003->g_860 p_1003->g_366 p_1003->g_935 p_1003->g_507.f3 p_1003->g_668.f1
 * writes: p_1003->g_101 p_1003->g_363 p_1003->g_712 p_1003->g_803 p_1003->g_907 p_1003->g_507.f3
 */
int16_t  func_30(int32_t * p_31, struct S2 * p_1003)
{ /* block id: 397 */
    int64_t l_909[3][5][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
    int32_t l_918 = 0x047E6433L;
    int32_t *l_919 = &p_1003->g_101;
    uint32_t *l_924 = &p_1003->g_92;
    uint32_t *l_925 = (void*)0;
    int64_t *l_928 = &p_1003->g_892;
    int i, j, k;
    (*l_919) &= (((((p_1003->g_908 , l_909[1][3][3]) ^ (l_909[1][3][3] && ((safe_rshift_func_int16_t_s_u((-1L), 5)) == l_909[2][4][0]))) , 3L) == GROUP_DIVERGE(1, 1)) || (l_909[2][1][0] ^ (p_1003->g_912 , (l_918 ^= (safe_mod_func_uint16_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1003->g_915.s611a5ed1d2ac70d1)).sae)).yxyyyyxx)).s1 , ((VECTOR(uint16_t, 2))(0x7274L, 0xE6F5L)).odd), ((safe_rshift_func_uint16_t_u_s(p_1003->g_553.w, p_1003->g_70.se)) & l_909[1][4][1])))))));
    for (p_1003->g_363 = 0; (p_1003->g_363 <= 18); ++p_1003->g_363)
    { /* block id: 402 */
        int64_t l_930 = 0x6E15391F10090C3CL;
        uint8_t *l_931 = (void*)0;
        uint8_t *l_932 = (void*)0;
        uint8_t *l_933[4] = {&p_1003->g_607,&p_1003->g_607,&p_1003->g_607,&p_1003->g_607};
        int32_t l_934 = 0x4D5DF1E5L;
        int i;
        (*p_1003->g_935) = ((((l_934 |= (((safe_sub_func_int64_t_s_s(((l_924 = func_32(p_31, p_1003)) == l_925), 0xB5448069A689E557L)) || ((safe_rshift_func_uint8_t_u_s((*l_919), 2)) <= ((((+((l_928 == l_928) , ((*l_919) , ((safe_unary_minus_func_uint16_t_u(6UL)) && (-1L))))) & p_1003->g_76.sd) & 0x49A254A4L) ^ (*p_1003->g_860)))) < l_930)) == 0x10L) , (*l_919)) , &l_918);
    }
    for (p_1003->g_507.f3 = 20; (p_1003->g_507.f3 != 53); p_1003->g_507.f3 = safe_add_func_uint32_t_u_u(p_1003->g_507.f3, 6))
    { /* block id: 409 */
        return p_1003->g_668.f1;
    }
    return (*l_919);
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_507.f1 p_1003->g_435 p_1003->g_712 p_1003->g_101 p_1003->g_886 p_1003->g_160 p_1003->g_803 p_1003->g_889 p_1003->g_692 p_1003->g_907
 * writes: p_1003->g_101 p_1003->g_712 p_1003->g_803 p_1003->g_892
 */
int32_t * func_32(int32_t * p_33, struct S2 * p_1003)
{ /* block id: 384 */
    struct S1 *l_874 = &p_1003->g_692;
    int32_t l_875 = 1L;
    int32_t *l_881 = &p_1003->g_101;
    VECTOR(int16_t, 4) l_888 = (VECTOR(int16_t, 4))(0x5F46L, (VECTOR(int16_t, 2))(0x5F46L, (-9L)), (-9L));
    int32_t l_897[4][7] = {{0x5B69A1B8L,0L,0L,0L,0x5B69A1B8L,0x5B69A1B8L,0L},{0x5B69A1B8L,0L,0L,0L,0x5B69A1B8L,0x5B69A1B8L,0L},{0x5B69A1B8L,0L,0L,0L,0x5B69A1B8L,0x5B69A1B8L,0L},{0x5B69A1B8L,0L,0L,0L,0x5B69A1B8L,0x5B69A1B8L,0L}};
    int32_t l_901 = 0x5F80EE78L;
    int i, j;
    (*l_881) = (safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((p_1003->g_507.f1 | (safe_mul_func_uint16_t_u_u(65530UL, (&p_1003->g_692 == l_874)))), ((l_875 >= (((((safe_mod_func_uint16_t_u_u(0xCF7EL, (safe_mul_func_uint16_t_u_u(((~(-1L)) & l_875), p_1003->g_435.s3)))) ^ 9L) <= 0x725DL) && l_875) , l_875)) > l_875))), 18446744073709551612UL)), l_875));
    for (p_1003->g_712 = 0; (p_1003->g_712 <= 28); p_1003->g_712 = safe_add_func_int64_t_s_s(p_1003->g_712, 4))
    { /* block id: 388 */
        uint16_t *l_887 = &p_1003->g_803;
        int32_t l_890 = 1L;
        int64_t *l_891 = &p_1003->g_892;
        uint8_t *l_898[4] = {&p_1003->g_306,&p_1003->g_306,&p_1003->g_306,&p_1003->g_306};
        int32_t l_899 = 5L;
        int32_t *l_900[2][10][1] = {{{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875}},{{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875},{&l_875}}};
        uint32_t l_902 = 1UL;
        int i, j, k;
        l_875 &= (!(safe_add_func_int8_t_s_s((((+(*l_881)) & ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1003->g_886.yyyz)).wyyyzyyy)).s5) , (((*l_887) &= (~p_1003->g_160)) & ((-5L) & ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_888.wz)).yxyx)).zxxzzywzyxwxxxww, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((((p_1003->g_889[1] , ((*l_891) = l_890)) , (safe_mod_func_uint8_t_u_u((l_890 = (safe_sub_func_int16_t_s_s(0x7F1CL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(1L, ((((((*l_874) , 0x60AB5A9B3E6B0DB8L) == 7UL) & l_897[1][3]) <= 65535UL) == 0x51L), (-2L), 0L)), (-1L), 0x2653L, 0x4419L, 0x017FL)).s1))), 255UL))) | (*l_881)) == (*l_881)), ((VECTOR(int16_t, 2))(0x203AL)), 0L)).zywxxzwxywxxwwzy))))).s93)))).hi))), l_899)));
        --l_902;
    }
    (*l_881) = (safe_sub_func_int16_t_s_s(0x4E6AL, (*l_881)));
    return p_1003->g_907;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_70 p_1003->g_854 p_1003->g_718 p_1003->g_463.f2 p_1003->g_859 p_1003->g_161 p_1003->g_668.f0
 * writes: p_1003->g_70 p_1003->g_131 p_1003->g_718 p_1003->g_668.f1 p_1003->g_859 p_1003->g_161 p_1003->g_668.f0 p_1003->g_507.f0
 */
int32_t * func_34(int32_t * p_35, int8_t  p_36, int32_t * p_37, struct S2 * p_1003)
{ /* block id: 370 */
    struct S0 *l_841 = (void*)0;
    int32_t l_844 = (-1L);
    VECTOR(int16_t, 2) l_845 = (VECTOR(int16_t, 2))((-1L), 0x284AL);
    uint16_t *l_846[5][6][2] = {{{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803}},{{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803}},{{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803}},{{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803}},{{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803},{(void*)0,&p_1003->g_803}}};
    int32_t l_847 = (-7L);
    uint32_t *l_855 = &p_1003->g_718;
    int64_t ***l_856 = &p_1003->g_632;
    int64_t ****l_857 = &l_856;
    int16_t *l_858 = (void*)0;
    uint64_t ***l_861[6] = {(void*)0,&p_1003->g_859,(void*)0,(void*)0,&p_1003->g_859,(void*)0};
    int8_t *l_862[10] = {&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161,&p_1003->g_161};
    int32_t *l_863 = (void*)0;
    int32_t *l_864 = &p_1003->g_668.f0;
    int32_t *l_865 = &p_1003->g_507.f0;
    int i, j, k;
    (*l_864) |= (safe_unary_minus_func_int8_t_s((p_1003->g_161 ^= (((p_1003->g_70.se--) | ((p_1003->g_859 = ((0x1D60L <= ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_36, (l_841 == l_841))), (0x3667L <= (l_847 = (p_1003->g_131.s1 = ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(7L, (~(l_844 &= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 4))(0UL, p_36, 1UL, 0xD9L)).ywzxyyzw))).s4, 2)))), 0L, 0x3C94L)).odd, ((VECTOR(int16_t, 2))(l_845.yx))))).even))))) <= (safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((*l_855) |= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1003->g_854.sd5)))).odd), ((GROUP_DIVERGE(2, 1) , (p_1003->g_668.f1 = (((*l_857) = l_856) != (void*)0))) && l_845.x))), 8L)) > p_36), p_1003->g_463.f2)))) , p_1003->g_859)) != (void*)0)) ^ l_845.y))));
    (*l_865) = ((*l_864) = (-1L));
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_56 p_1003->g_70 p_1003->g_76 p_1003->g_19 p_1003->g_89 p_1003->g_92 p_1003->g_12 p_1003->g_11 p_1003->l_comm_values p_1003->g_10 p_1003->g_7 p_1003->g_106 p_1003->g_13 p_1003->g_118 p_1003->g_101 p_1003->g_comm_values p_1003->g_131 p_1003->g_132 p_1003->g_136 p_1003->g_3 p_1003->g_149 p_1003->g_159 p_1003->g_306 p_1003->g_160 p_1003->g_100 p_1003->g_150 p_1003->g_338 p_1003->g_654
 * writes: p_1003->g_56 p_1003->g_89 p_1003->g_149 p_1003->g_159 p_1003->g_160 p_1003->g_161 p_1003->g_92 p_1003->g_306 p_1003->g_100 p_1003->g_132.f1 p_1003->g_101 p_1003->g_150
 */
int32_t * func_38(int32_t * p_39, uint32_t  p_40, uint64_t  p_41, struct S2 * p_1003)
{ /* block id: 21 */
    int32_t *l_54 = &p_1003->g_7;
    int32_t **l_151[9] = {&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150};
    int64_t *l_158 = &p_1003->g_159[1];
    int i;
    (*p_1003->g_654) = func_43(func_47(&p_1003->g_19, (p_39 = func_52(l_54, p_1003)), p_1003->g_131.s1, (p_1003->g_161 = ((p_40 & (safe_mul_func_uint16_t_u_u(1UL, (safe_rshift_func_uint16_t_u_u((p_1003->g_160 = (((p_40 || ((safe_div_func_int64_t_s_s(((*l_158) &= ((4L != p_1003->g_7) == 0UL)), 0x0DD1E963A6868F39L)) , p_40)) ^ p_40) || 0xAAA4100DL)), 10))))) && p_40)), p_1003), p_41, p_40, p_1003);
    if ((atomic_inc(&p_1003->g_atomic_input[29 * get_linear_group_id() + 15]) == 6))
    { /* block id: 351 */
        int64_t l_820 = 0L;
        uint32_t l_821 = 0UL;
        l_821 = l_820;
        for (l_821 = 0; (l_821 >= 43); ++l_821)
        { /* block id: 355 */
            int32_t l_824 = 4L;
            int32_t *l_833 = &l_824;
            for (l_824 = 1; (l_824 >= 6); l_824 = safe_add_func_uint8_t_u_u(l_824, 9))
            { /* block id: 358 */
                struct S1 l_827 = {0x71A8D2EDL,-1L,-8L,0x3ABADE06L};/* VOLATILE GLOBAL l_827 */
                VECTOR(int32_t, 4) l_828 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1807E4A4L), 0x1807E4A4L);
                struct S0 l_829[7][3] = {{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}},{{-1L,0x1AD1L,0x045838FAL},{0x40ACDD019573EE31L,-4L,0x6E84BC27L},{0x291CAD140B4FEF5EL,1L,0x2E6995EFL}}};
                uint32_t l_830 = 4294967287UL;
                int32_t l_831 = 0x4E688E2DL;
                uint32_t l_832 = 1UL;
                int i, j;
                l_827 = l_827;
                l_828.z = ((VECTOR(int32_t, 2))(l_828.wz)).odd;
                l_832 = (l_829[6][0] , (l_831 = l_830));
            }
            l_833 = (void*)0;
        }
        unsigned int result = 0;
        result += l_820;
        result += l_821;
        atomic_add(&p_1003->g_special_values[29 * get_linear_group_id() + 15], result);
    }
    else
    { /* block id: 366 */
        (1 + 1);
    }
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_92 p_1003->g_132.f0 p_1003->g_306 p_1003->g_160 p_1003->g_100 p_1003->g_150 p_1003->g_19 p_1003->g_101 p_1003->g_159 p_1003->g_89 p_1003->g_132 p_1003->g_70 p_1003->g_338
 * writes: p_1003->g_92 p_1003->g_306 p_1003->g_160 p_1003->g_100 p_1003->g_132.f1 p_1003->g_101 p_1003->g_159 p_1003->g_89 p_1003->g_150
 */
int32_t * func_43(int32_t * p_44, int32_t  p_45, uint64_t  p_46, struct S2 * p_1003)
{ /* block id: 156 */
    int32_t l_272 = 1L;
    int32_t *l_273 = (void*)0;
    int32_t *l_274 = (void*)0;
    int32_t *l_275 = (void*)0;
    int32_t *l_276 = &p_1003->g_101;
    int32_t *l_277 = (void*)0;
    int32_t *l_278 = (void*)0;
    int32_t *l_279 = &p_1003->g_101;
    int32_t *l_280 = &p_1003->g_101;
    int32_t *l_281 = (void*)0;
    int32_t *l_282 = &p_1003->g_101;
    int32_t *l_283 = &p_1003->g_101;
    int32_t *l_284 = &l_272;
    int32_t *l_285 = (void*)0;
    int32_t *l_286 = &p_1003->g_101;
    int32_t *l_287 = &p_1003->g_101;
    int32_t *l_288[1][7] = {{&p_1003->g_3,(void*)0,&p_1003->g_3,&p_1003->g_3,(void*)0,&p_1003->g_3,&p_1003->g_3}};
    int8_t l_289 = (-1L);
    int32_t l_290 = 8L;
    uint16_t l_291 = 0x21C8L;
    int16_t *l_304 = &p_1003->g_100;
    struct S0 *l_317[1];
    struct S0 **l_316 = &l_317[0];
    int32_t *l_319 = &p_1003->g_19;
    int64_t *l_320 = (void*)0;
    int64_t *l_321 = &p_1003->g_159[2];
    uint16_t *l_334 = &p_1003->g_89;
    int8_t l_335 = 0x5CL;
    uint32_t l_341 = 0xACD75475L;
    uint32_t l_364 = 1UL;
    uint32_t *l_390[5][1] = {{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}};
    VECTOR(uint8_t, 2) l_413 = (VECTOR(uint8_t, 2))(0x17L, 250UL);
    uint8_t *l_451 = (void*)0;
    uint8_t l_481 = 0x00L;
    uint32_t l_561 = 4294967295UL;
    int16_t l_578 = 3L;
    int16_t l_581 = 1L;
    int64_t **l_636 = &p_1003->g_633;
    uint8_t l_655 = 0xB4L;
    int32_t l_656[9] = {0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L,0x49DB83D9L};
    int64_t l_695 = 0x0623A2DADCDE8DC8L;
    VECTOR(int64_t, 4) l_745 = (VECTOR(int64_t, 4))(0x3C9F219B592BFEAEL, (VECTOR(int64_t, 2))(0x3C9F219B592BFEAEL, 0x7667B55ED44D53F9L), 0x7667B55ED44D53F9L);
    int32_t *l_809 = (void*)0;
    int32_t *l_816 = &l_290;
    int32_t *l_817[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_818 = &l_272;
    int32_t *l_819 = &p_1003->g_692.f0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_317[i] = (void*)0;
    --l_291;
    for (p_1003->g_92 = 0; (p_1003->g_92 > 60); p_1003->g_92 = safe_add_func_uint64_t_u_u(p_1003->g_92, 7))
    { /* block id: 160 */
        int64_t l_296 = 0x7ACA08FAB05C6BA5L;
        int32_t l_297 = 0L;
        int32_t l_298[10] = {1L,0L,0x0F560C3EL,0L,1L,1L,0L,0x0F560C3EL,0L,1L};
        uint64_t l_299 = 0x2BCD84908660C052L;
        uint8_t *l_305[4][6][2] = {{{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306}},{{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306}},{{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306}},{{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306},{(void*)0,&p_1003->g_306}}};
        uint64_t *l_309 = &l_299;
        uint16_t *l_318 = &p_1003->g_160;
        int i, j, k;
        l_299--;
        (*l_282) ^= (((safe_rshift_func_uint8_t_u_u(((void*)0 != l_304), 4)) <= p_1003->g_132[1][1].f0) == (((++p_1003->g_306) && (((*l_309) = p_46) == ((safe_rshift_func_int16_t_s_u((p_1003->g_132[1][1].f1 = (l_297 &= ((*l_304) &= ((safe_rshift_func_uint16_t_u_u(((*l_318) &= (safe_mul_func_uint16_t_u_u(((l_316 == (void*)0) , (&p_1003->g_137 != (l_298[0] , &p_1003->g_145))), 0xB233L))), p_46)) || (-3L))))), 14)) & (*p_1003->g_150)))) & 0x50L));
        return l_319;
    }
    if ((!((((*l_321) &= (-1L)) != ((safe_div_func_uint16_t_u_u((*l_319), (safe_mul_func_uint16_t_u_u((p_46 < ((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((*l_280), (*l_276))) , (safe_rshift_func_uint8_t_u_u(p_1003->g_101, 6))), (safe_rshift_func_uint8_t_u_s(0x71L, 2)))) && ((((((0x7548B3A6L == (((*l_334) ^= ((((((*l_316) != (void*)0) || p_46) || (-1L)) , 0x6C8790A0229E0906L) > p_46)) <= 0x15E5L)) , p_1003->g_132[0][1]) , &l_317[0]) == &l_317[0]) & p_46) < p_46))), p_1003->g_70.s5)))) & l_335)) || p_45)))
    { /* block id: 173 */
        int32_t *l_336 = (void*)0;
        return l_336;
    }
    else
    { /* block id: 175 */
        (*p_1003->g_338) = &p_45;
    }
    for (p_1003->g_89 = 0; (p_1003->g_89 > 32); p_1003->g_89++)
    { /* block id: 180 */
        uint32_t l_342 = 2UL;
        int32_t l_369[9][6] = {{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL},{0x1B4D899DL,0x1B4D899DL,(-7L),0x7FBDC15EL,0x18043299L,0x7FBDC15EL}};
        uint16_t l_388[6];
        VECTOR(int32_t, 16) l_425 = (VECTOR(int32_t, 16))(0x58CFA09FL, (VECTOR(int32_t, 4))(0x58CFA09FL, (VECTOR(int32_t, 2))(0x58CFA09FL, 1L), 1L), 1L, 0x58CFA09FL, 1L, (VECTOR(int32_t, 2))(0x58CFA09FL, 1L), (VECTOR(int32_t, 2))(0x58CFA09FL, 1L), 0x58CFA09FL, 1L, 0x58CFA09FL, 1L);
        VECTOR(int8_t, 2) l_443 = (VECTOR(int8_t, 2))(0x17L, 0x10L);
        int64_t *l_449 = &p_1003->g_159[1];
        uint64_t *l_480 = (void*)0;
        int16_t l_495 = 0x2888L;
        int32_t *l_521 = &l_272;
        int32_t *l_522 = &p_1003->g_101;
        uint32_t l_539 = 0x0A5B8C0BL;
        int16_t *l_565 = (void*)0;
        int32_t *l_638 = (void*)0;
        uint64_t l_646 = 3UL;
        VECTOR(int32_t, 4) l_663 = (VECTOR(int32_t, 4))(0x0609E335L, (VECTOR(int32_t, 2))(0x0609E335L, 0x240789D3L), 0x240789D3L);
        uint8_t *l_798 = &p_1003->g_306;
        uint32_t l_813 = 0xD54D069DL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_388[i] = 1UL;
        l_342 ^= l_341;
    }
    return l_819;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_47(int32_t * p_48, int32_t * p_49, uint32_t  p_50, int32_t  p_51, struct S2 * p_1003)
{ /* block id: 56 */
    int32_t *l_271 = (void*)0;
    if ((atomic_inc(&p_1003->g_atomic_input[29 * get_linear_group_id() + 11]) == 4))
    { /* block id: 58 */
        struct S0 l_163[5] = {{0x02529E886C669DC9L,0L,-6L},{0x02529E886C669DC9L,0L,-6L},{0x02529E886C669DC9L,0L,-6L},{0x02529E886C669DC9L,0L,-6L},{0x02529E886C669DC9L,0L,-6L}};
        struct S0 *l_162 = &l_163[2];
        struct S0 *l_164 = (void*)0;
        int32_t l_165 = 0x18EFFA9EL;
        int i;
        l_164 = l_162;
        l_165 &= 1L;
        for (l_163[2].f1 = 0; (l_163[2].f1 == (-22)); l_163[2].f1 = safe_sub_func_int8_t_s_s(l_163[2].f1, 7))
        { /* block id: 63 */
            int32_t l_168 = 0x548962ACL;
            int64_t l_206[8][3][7] = {{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}},{{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L},{0x61B9C6BC016521D1L,0L,(-1L),1L,0L,0x61B9C6BC016521D1L,1L}}};
            uint64_t l_207 = 0x65B01A7F6B2CCB7FL;
            int32_t l_208 = 0x1899E8C3L;
            int i, j, k;
            for (l_168 = (-8); (l_168 == 25); ++l_168)
            { /* block id: 66 */
                uint16_t l_171 = 65535UL;
                l_165 = l_171;
            }
            for (l_168 = 0; (l_168 > (-3)); l_168 = safe_sub_func_uint16_t_u_u(l_168, 2))
            { /* block id: 71 */
                uint32_t l_174 = 1UL;
                uint32_t l_175 = 0x3C8A0015L;
                uint32_t l_176 = 1UL;
                int32_t l_177[10];
                int32_t l_178[7];
                uint8_t l_197 = 255UL;
                uint32_t l_198 = 0x530299ECL;
                uint64_t l_199 = 2UL;
                struct S1 l_200 = {0x23F03639L,-10L,0x3844435AL,4294967292UL};/* VOLATILE GLOBAL l_200 */
                int32_t l_201[6][1][4] = {{{0x54229B64L,1L,(-3L),0x33189EFCL}},{{0x54229B64L,1L,(-3L),0x33189EFCL}},{{0x54229B64L,1L,(-3L),0x33189EFCL}},{{0x54229B64L,1L,(-3L),0x33189EFCL}},{{0x54229B64L,1L,(-3L),0x33189EFCL}},{{0x54229B64L,1L,(-3L),0x33189EFCL}}};
                struct S1 l_202[4][1][4] = {{{{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L}}},{{{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L}}},{{{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L}}},{{{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L},{6L,6L,0x58770A7EL,0x960AF9E2L}}}};
                int16_t l_203 = 0x2A50L;
                int32_t *l_204[9][6][4] = {{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}},{{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0},{&l_177[3],&l_177[8],&l_202[2][0][2].f0,&l_200.f0}}};
                int32_t *l_205 = &l_177[1];
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_177[i] = 0L;
                for (i = 0; i < 7; i++)
                    l_178[i] = 0x1725A535L;
                l_177[8] = (l_165 &= ((l_175 &= l_174) , l_176));
                if (l_178[2])
                { /* block id: 75 */
                    int64_t l_179 = 0x5530713DA4405A9FL;
                    struct S0 l_182 = {0x570CE76D961DEDF9L,0x28D5L,1L};/* VOLATILE GLOBAL l_182 */
                    struct S0 *l_181 = &l_182;
                    struct S0 **l_180 = &l_181;
                    uint8_t l_183[7][9] = {{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL}};
                    int i, j;
                    l_180 = (l_179 , (void*)0);
                    l_165 = l_183[6][3];
                }
                else
                { /* block id: 78 */
                    int32_t l_184 = 0x5971EFD2L;
                    uint8_t l_191 = 0x5AL;
                    uint64_t l_194 = 0x8C35CB5F3D007031L;
                    for (l_184 = 0; (l_184 < (-9)); --l_184)
                    { /* block id: 81 */
                        int32_t l_188 = 0x6597F0CCL;
                        int32_t *l_187 = &l_188;
                        int32_t *l_189 = &l_188;
                        int32_t *l_190 = (void*)0;
                        l_190 = (l_189 = l_187);
                    }
                    --l_191;
                    l_194--;
                }
                l_177[9] &= ((l_197 , ((l_199 = l_198) , ((l_200 , l_201[1][0][2]) , l_202[2][0][2]))) , (l_203 = (l_165 = (-8L))));
                l_205 = l_204[0][2][1];
            }
            l_165 |= (l_206[2][1][0] , (((VECTOR(uint8_t, 2))(0xD6L, 1UL)).even , l_207));
            if (l_208)
            { /* block id: 95 */
                int32_t l_209 = 0x3733C049L;
                VECTOR(int32_t, 16) l_239 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0A93D07BL), 0x0A93D07BL), 0x0A93D07BL, 0L, 0x0A93D07BL, (VECTOR(int32_t, 2))(0L, 0x0A93D07BL), (VECTOR(int32_t, 2))(0L, 0x0A93D07BL), 0L, 0x0A93D07BL, 0L, 0x0A93D07BL);
                int32_t l_240 = 0x0C21575AL;
                int i;
                for (l_209 = 0; (l_209 < 16); l_209 = safe_add_func_int64_t_s_s(l_209, 9))
                { /* block id: 98 */
                    int32_t l_212 = 0x5E02E9BFL;
                    for (l_212 = 0; (l_212 != 10); l_212 = safe_add_func_uint16_t_u_u(l_212, 8))
                    { /* block id: 101 */
                        VECTOR(int64_t, 8) l_215 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 3L), 3L), 3L, 9L, 3L);
                        int8_t l_216 = 0x7DL;
                        uint8_t l_217 = 255UL;
                        uint32_t l_218 = 0x627E4604L;
                        VECTOR(int32_t, 16) l_219 = (VECTOR(int32_t, 16))(0x20D5BCF2L, (VECTOR(int32_t, 4))(0x20D5BCF2L, (VECTOR(int32_t, 2))(0x20D5BCF2L, 0x4861A6FDL), 0x4861A6FDL), 0x4861A6FDL, 0x20D5BCF2L, 0x4861A6FDL, (VECTOR(int32_t, 2))(0x20D5BCF2L, 0x4861A6FDL), (VECTOR(int32_t, 2))(0x20D5BCF2L, 0x4861A6FDL), 0x20D5BCF2L, 0x4861A6FDL, 0x20D5BCF2L, 0x4861A6FDL);
                        int16_t l_220 = 0x2CDBL;
                        uint32_t l_221 = 0xB79C51BBL;
                        uint16_t l_222[7] = {0xE6F3L,0x30C2L,0xE6F3L,0xE6F3L,0x30C2L,0xE6F3L,0xE6F3L};
                        VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))(0x3F7A3E2AL, (VECTOR(int32_t, 2))(0x3F7A3E2AL, 1L), 1L);
                        VECTOR(uint32_t, 8) l_224 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x99B76A7DL), 0x99B76A7DL), 0x99B76A7DL, 4294967289UL, 0x99B76A7DL);
                        VECTOR(int32_t, 2) l_225 = (VECTOR(int32_t, 2))(0x4CCDC0E4L, 0x0851C7AAL);
                        VECTOR(int32_t, 2) l_226 = (VECTOR(int32_t, 2))(0x3F308271L, 0L);
                        VECTOR(int32_t, 8) l_227 = (VECTOR(int32_t, 8))(0x7F6A7CA8L, (VECTOR(int32_t, 4))(0x7F6A7CA8L, (VECTOR(int32_t, 2))(0x7F6A7CA8L, (-1L)), (-1L)), (-1L), 0x7F6A7CA8L, (-1L));
                        int64_t l_228 = (-1L);
                        uint8_t l_229 = 0x84L;
                        VECTOR(uint16_t, 16) l_230 = (VECTOR(uint16_t, 16))(0xD065L, (VECTOR(uint16_t, 4))(0xD065L, (VECTOR(uint16_t, 2))(0xD065L, 0xB00EL), 0xB00EL), 0xB00EL, 0xD065L, 0xB00EL, (VECTOR(uint16_t, 2))(0xD065L, 0xB00EL), (VECTOR(uint16_t, 2))(0xD065L, 0xB00EL), 0xD065L, 0xB00EL, 0xD065L, 0xB00EL);
                        uint32_t l_231 = 0x3DBB84B7L;
                        int32_t *l_232[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_233 = (void*)0;
                        int32_t *l_234 = (void*)0;
                        uint8_t l_235 = 0x7CL;
                        int32_t l_238 = 0L;
                        int i, j;
                        l_234 = (l_233 = (((VECTOR(uint64_t, 4))((((VECTOR(int64_t, 8))(l_215.s70116452)).s4 , ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(0x72DC60A0L, l_216, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_208 |= l_217), 0x3AE004E2L, (-1L), 0x1461080BL)).wzwywwxz)).s45, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_218, ((l_220 = (((VECTOR(int32_t, 2))(l_219.s0c)).even , 0x277777ECL)) , (l_222[4] = (l_208 ^= l_221))), 0x28D90598L, (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_223.zz)), 8L, 0L))))).even))), 0L, ((l_224.s0 , l_225.y) , ((VECTOR(int32_t, 16))(l_226.xyxxyxxyyxxyyxyx)).sb), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_227.s3157731671627565)).sdec0)), (((l_230.s7 = (l_229 = l_228)) , 0x79838588B50552F2L) , l_231), 8L, ((VECTOR(int32_t, 4))(1L)))).hi, ((VECTOR(uint32_t, 8))(0x515BC77DL))))).s33, ((VECTOR(int64_t, 2))((-9L)))))).even), 18446744073709551607UL, 0UL, 0x4A7FEDD1781A2C8AL)).x , l_232[0][6]));
                        l_235++;
                        l_168 ^= l_238;
                    }
                }
                l_165 = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_239.sb10a7bf9)))).s15)).even , 4L);
                if (l_240)
                { /* block id: 115 */
                    uint32_t l_241[9][4][7] = {{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}},{{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL},{0xBF247D82L,4294967294UL,4294967288UL,1UL,1UL,6UL,4294967295UL}}};
                    int32_t l_254 = 0x2B85AA11L;
                    int32_t *l_253 = &l_254;
                    int i, j, k;
                    if ((l_241[7][1][3] , 0x7B4B7B24L))
                    { /* block id: 116 */
                        VECTOR(int32_t, 4) l_242 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        VECTOR(int32_t, 16) l_243 = (VECTOR(int32_t, 16))(0x03E8E110L, (VECTOR(int32_t, 4))(0x03E8E110L, (VECTOR(int32_t, 2))(0x03E8E110L, 0x13133742L), 0x13133742L), 0x13133742L, 0x03E8E110L, 0x13133742L, (VECTOR(int32_t, 2))(0x03E8E110L, 0x13133742L), (VECTOR(int32_t, 2))(0x03E8E110L, 0x13133742L), 0x03E8E110L, 0x13133742L, 0x03E8E110L, 0x13133742L);
                        VECTOR(int32_t, 16) l_244 = (VECTOR(int32_t, 16))(0x115918E7L, (VECTOR(int32_t, 4))(0x115918E7L, (VECTOR(int32_t, 2))(0x115918E7L, 1L), 1L), 1L, 0x115918E7L, 1L, (VECTOR(int32_t, 2))(0x115918E7L, 1L), (VECTOR(int32_t, 2))(0x115918E7L, 1L), 0x115918E7L, 1L, 0x115918E7L, 1L);
                        int32_t *l_245[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_246 = (void*)0;
                        int32_t *l_247 = (void*)0;
                        int i, j;
                        l_209 &= (l_168 &= ((VECTOR(int32_t, 2))(l_242.xx)).odd);
                        l_239.se &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_243.s00)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_244.s58954239c461fc06)).s4e)).xxxy)), 0L, 8L)).s67))).yxyxyxxx)).s55)))).lo;
                        l_247 = (l_246 = l_245[5][3]);
                    }
                    else
                    { /* block id: 122 */
                        int32_t l_249 = 1L;
                        int32_t *l_248 = &l_249;
                        int32_t *l_250 = &l_249;
                        VECTOR(int32_t, 4) l_251 = (VECTOR(int32_t, 4))(0x50F5FD91L, (VECTOR(int32_t, 2))(0x50F5FD91L, 0x111948A0L), 0x111948A0L);
                        int32_t *l_252 = (void*)0;
                        int i;
                        l_250 = l_248;
                        l_168 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_251.wzxwyyxxxyxwzyzz)))).sc;
                        l_252 = (void*)0;
                    }
                    l_253 = (void*)0;
                }
                else
                { /* block id: 128 */
                    int32_t l_255 = 0x3C19C81CL;
                    for (l_255 = 28; (l_255 <= (-4)); l_255 = safe_sub_func_int64_t_s_s(l_255, 6))
                    { /* block id: 131 */
                        int32_t l_258 = 0x16BC7677L;
                        l_209 = l_258;
                    }
                }
            }
            else
            { /* block id: 135 */
                VECTOR(int32_t, 4) l_259 = (VECTOR(int32_t, 4))(0x1BF8956BL, (VECTOR(int32_t, 2))(0x1BF8956BL, 4L), 4L);
                uint8_t l_267 = 0x65L;
                VECTOR(int32_t, 8) l_270 = (VECTOR(int32_t, 8))(0x57CB1E10L, (VECTOR(int32_t, 4))(0x57CB1E10L, (VECTOR(int32_t, 2))(0x57CB1E10L, 0x40E52161L), 0x40E52161L), 0x40E52161L, 0x57CB1E10L, 0x40E52161L);
                int i;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-1L), 0x196DBA0EL)).yxxyxyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_259.xz)), 0x6624F423L, 0x4F2A6D1BL)).odd)).yyxyxxxx))).s5254743365467767)).s5)
                { /* block id: 136 */
                    int8_t l_260 = 0x73L;
                    int32_t l_261 = 1L;
                    l_259.z ^= l_260;
                    l_259.x ^= l_261;
                }
                else
                { /* block id: 139 */
                    int64_t l_262 = 0x3A56B32E001951E7L;
                    int32_t l_263[2][2][10];
                    uint32_t l_264 = 0xC2C97F29L;
                    int64_t l_265[4];
                    uint16_t l_266 = 65535UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 10; k++)
                                l_263[i][j][k] = 0x689D73F0L;
                        }
                    }
                    for (i = 0; i < 4; i++)
                        l_265[i] = 1L;
                    l_265[3] = (l_264 = (l_165 = (l_263[1][0][8] |= (l_259.z = (l_168 &= l_262)))));
                    l_263[1][1][8] = l_266;
                }
                l_267--;
                l_165 = ((VECTOR(int32_t, 2))(l_270.s14)).even;
            }
        }
        unsigned int result = 0;
        int l_163_i0;
        for (l_163_i0 = 0; l_163_i0 < 5; l_163_i0++) {
            result += l_163[l_163_i0].f0;
            result += l_163[l_163_i0].f1;
            result += l_163[l_163_i0].f2;
        }
        result += l_165;
        atomic_add(&p_1003->g_special_values[29 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 152 */
        (1 + 1);
    }
    return l_271;
}


/* ------------------------------------------ */
/* 
 * reads : p_1003->g_56 p_1003->g_70 p_1003->g_76 p_1003->g_19 p_1003->g_89 p_1003->g_92 p_1003->g_12 p_1003->g_11 p_1003->l_comm_values p_1003->g_10 p_1003->g_7 p_1003->g_106 p_1003->g_13 p_1003->g_118 p_1003->g_101 p_1003->g_comm_values p_1003->g_131 p_1003->g_132 p_1003->g_136 p_1003->g_3 p_1003->g_149
 * writes: p_1003->g_56 p_1003->g_89 p_1003->g_149
 */
int32_t * func_52(int32_t * p_53, struct S2 * p_1003)
{ /* block id: 22 */
    uint8_t l_61[10] = {0x16L,0x16L,0x16L,0x16L,0x16L,0x16L,0x16L,0x16L,0x16L,0x16L};
    VECTOR(int16_t, 4) l_73 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1250L), 0x1250L);
    VECTOR(uint16_t, 8) l_75 = (VECTOR(uint16_t, 8))(0x3759L, (VECTOR(uint16_t, 4))(0x3759L, (VECTOR(uint16_t, 2))(0x3759L, 0xDD17L), 0xDD17L), 0xDD17L, 0x3759L, 0xDD17L);
    VECTOR(uint8_t, 4) l_77 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL);
    VECTOR(uint16_t, 16) l_78 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 9UL), 9UL), 9UL, 9UL, 9UL, (VECTOR(uint16_t, 2))(9UL, 9UL), (VECTOR(uint16_t, 2))(9UL, 9UL), 9UL, 9UL, 9UL, 9UL);
    int32_t l_93[4][1];
    uint64_t l_103 = 0x99970256F4602127L;
    VECTOR(int8_t, 2) l_121 = (VECTOR(int8_t, 2))(0x7FL, 0x0FL);
    int32_t l_138 = 6L;
    int8_t l_143[8][9] = {{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL},{0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL,0x1EL,0x47L,0x1EL}};
    int32_t l_144 = (-1L);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_93[i][j] = 0x702422DCL;
    }
    for (p_1003->g_56.x = 10; (p_1003->g_56.x <= (-19)); --p_1003->g_56.x)
    { /* block id: 25 */
        uint64_t l_74 = 18446744073709551612UL;
        int16_t *l_87 = (void*)0;
        int16_t *l_88[8][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint32_t l_90[5][7][7] = {{{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL}},{{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL}},{{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL}},{{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL}},{{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL},{0xBA8BA317L,0x319732ECL,4294967292UL,0x5970AEDAL,0x7A8330C0L,0xA7E5B635L,0UL}}};
        uint8_t l_91 = 0xDAL;
        int32_t l_97 = 0x3E3C2ACCL;
        VECTOR(int32_t, 4) l_98 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
        int16_t l_99 = 0x3BE2L;
        VECTOR(int32_t, 4) l_117 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
        int32_t *l_129 = &p_1003->g_3;
        int i, j, k;
        if ((safe_lshift_func_int16_t_s_s(l_61[2], ((safe_lshift_func_uint8_t_u_s((~(safe_sub_func_int8_t_s_s(l_61[2], ((!((p_53 == &p_1003->g_11[3][1]) < (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x6FF5L, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1003->g_70.sb3))))))).yxxyyxxyxyyxxyyx))))).s26)), ((safe_lshift_func_int16_t_s_s(p_1003->g_56.y, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_73.ww)).xyyx)).z)) & l_74), ((VECTOR(uint16_t, 2))(l_75.s14)), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(p_1003->g_76.sa1b0f83d54b5bc17)).s73, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_77.zxzwzzyxyyxwyzwx)).even)).s66))), 0xAC0FL)).lo, ((VECTOR(uint16_t, 2))(0x66A4L, 0xBD99L)).xxxx, ((VECTOR(uint16_t, 2))(0x0311L, 0x1463L)).yyxy))), ((VECTOR(uint16_t, 2))(l_78.s57)), ((((p_1003->g_19 & (safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((l_93[3][0] &= ((((safe_add_func_int64_t_s_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((safe_div_func_int64_t_s_s((((VECTOR(uint32_t, 8))((0xE781FF1CL || (l_90[0][2][3] = ((((p_1003->g_89 |= ((l_75.s0 > GROUP_DIVERGE(1, 1)) == l_78.s5)) > l_74) , l_75.s7) < p_1003->g_70.se))), 4294967295UL, 0x61A18340L, 0x58637213L, 0xB125E79EL, ((VECTOR(uint32_t, 2))(0xDBDA42F3L)), 0UL)).s6 , 0x0DBC482750ABA655L), l_91)), ((VECTOR(uint8_t, 2))(0x4CL)), 254UL)), 0x9CL, 0x06L, 0xF1L, ((VECTOR(uint8_t, 4))(0x2EL)), l_90[0][2][3], 0x75L, ((VECTOR(uint8_t, 2))(252UL)), 0xDBL)).hi)).s2 <= 0x49L), l_74)) , p_1003->g_92) | p_1003->g_19) > p_1003->g_12)), 0x5610L)) , p_1003->g_11[5][3]), GROUP_DIVERGE(2, 1)))) | p_1003->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1003->tid, 135))]) , l_91) <= l_91), p_1003->g_10[3][6][0], ((VECTOR(uint16_t, 2))(0x70C1L)), 65532UL, ((VECTOR(uint16_t, 4))(0x76E4L)))).s5, l_77.y)), p_1003->g_70.sf)))) , l_61[2])))), 0)) > l_73.y))))
        { /* block id: 29 */
            int32_t *l_96[10][4] = {{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0},{&p_1003->g_13,&p_1003->g_13,(void*)0,(void*)0}};
            int64_t l_102 = 0x1F502D78261AB18AL;
            int i, j;
            if ((*p_53))
                break;
            for (l_74 = 0; (l_74 <= 4); l_74 = safe_add_func_uint8_t_u_u(l_74, 1))
            { /* block id: 33 */
                return p_53;
            }
            l_103++;
        }
        else
        { /* block id: 37 */
            int64_t l_109 = 0x083D566D08C7653EL;
            uint64_t *l_110 = &l_74;
            int32_t l_112 = 0x171137CEL;
            int8_t *l_122[5][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int32_t *l_125 = (void*)0;
            int32_t *l_126 = &l_93[3][0];
            int32_t **l_130 = &l_126;
            uint32_t *l_135[2];
            int32_t *l_139 = &l_97;
            int32_t *l_140 = &l_112;
            int32_t *l_141 = (void*)0;
            int32_t *l_142[2];
            VECTOR(uint32_t, 8) l_146 = (VECTOR(uint32_t, 8))(0xA8684DB0L, (VECTOR(uint32_t, 4))(0xA8684DB0L, (VECTOR(uint32_t, 2))(0xA8684DB0L, 4294967295UL), 4294967295UL), 4294967295UL, 0xA8684DB0L, 4294967295UL);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_135[i] = &p_1003->g_92;
            for (i = 0; i < 2; i++)
                l_142[i] = (void*)0;
            (*l_126) = (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1003->g_106.s1c)))).yyyyyyxx)).s5772705772135455, ((VECTOR(int16_t, 4))((-9L), 8L, 0x4ADBL, 0x0814L)).wxwyzxyywzwwywxz))).odd, (int16_t)0L))).s2025113500043661, (int16_t)(safe_div_func_uint64_t_u_u(((*l_110) = l_109), (l_112 = (safe_unary_minus_func_int64_t_s(p_1003->g_13)))))))).even, ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(0x6587L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((safe_rshift_func_int8_t_s_s(((*p_53) < (-1L)), ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_117.yz)), ((VECTOR(int32_t, 16))(p_1003->g_118.s113e96b69f79cd59)).se5, ((VECTOR(int32_t, 4))(0x2B6D1779L, (-1L), (-1L), 0x524AB5D2L)).hi))), (int32_t)((+(l_99 , (safe_sub_func_int8_t_s_s((l_117.x &= ((l_98.x ^= l_112) > (((VECTOR(int8_t, 4))(l_121.xxxy)).y , p_1003->g_101))), (safe_add_func_int8_t_s_s((-8L), p_1003->g_19)))))) && l_73.x)))).yyxy, ((VECTOR(int32_t, 4))(0x7BDB857CL))))).x, l_90[3][2][5])) == p_1003->g_comm_values[p_1003->tid]))) | l_97), 1L, 5L, ((VECTOR(int16_t, 2))((-5L))), (-1L), 0x706FL, 0L, 0x3201L, 0x276BL, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 4))(1L)))).sf0)), 0x1D45L)), ((VECTOR(int16_t, 4))(2L)), ((VECTOR(int16_t, 4))(4L))))).ywywwxzw))).s1710554011315721, ((VECTOR(int16_t, 16))(0L)), ((VECTOR(int16_t, 16))(0L))))))).s69)).yyxyyyxyxyxxyxyx)).se & p_1003->g_118.sd);
            l_138 = (((l_97 ^= (l_74 != 0x560A1FF2559C4E1FL)) > (((((safe_sub_func_uint16_t_u_u((&p_1003->g_10[0][1][0] != ((*l_130) = l_129)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1003->g_131.s54fa31ec76f50c88)).even)).s4)) <= (p_1003->g_132[1][1] , ((safe_mul_func_int16_t_s_s(p_1003->g_19, ((l_121.x > (l_93[1][0] = 0xEBEEA759L)) ^ p_1003->g_70.s3))) | 2UL))) ^ 0UL) , l_122[3][5][2]) == p_1003->g_136[0])) <= (*l_129));
            l_146.s2--;
            p_1003->g_149[1] = p_1003->g_149[1];
        }
    }
    return p_53;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[135];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 135; i++)
            l_comm_values[i] = 1;
    struct S2 c_1004;
    struct S2* p_1003 = &c_1004;
    struct S2 c_1005 = {
        0x02EAC453L, // p_1003->g_2
        0x2263126FL, // p_1003->g_3
        0x51D8F8F5L, // p_1003->g_6
        (-5L), // p_1003->g_7
        {{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}},{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}},{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}},{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}},{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}},{{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L},{(-7L),0x0331C587L}}}, // p_1003->g_10
        {{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L},{0x09E8E548L,0x6D734895L,0x19CD890FL,0x19CD890FL,0x6D734895L,0x09E8E548L,0x5AE1DC63L,0L}}, // p_1003->g_11
        0x55833AEDL, // p_1003->g_12
        0L, // p_1003->g_13
        {{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L},{0x7276463AL,0x7276463AL,0x50AB83DCL,0x26F57610L}}, // p_1003->g_16
        0x42EF3998L, // p_1003->g_17
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), // p_1003->g_18
        0L, // p_1003->g_19
        0x3E0E206FL, // p_1003->g_22
        (-1L), // p_1003->g_55
        (VECTOR(int32_t, 2))(6L, 0x677CCB2DL), // p_1003->g_56
        (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 2UL), 2UL), 2UL, 65529UL, 2UL, (VECTOR(uint16_t, 2))(65529UL, 2UL), (VECTOR(uint16_t, 2))(65529UL, 2UL), 65529UL, 2UL, 65529UL, 2UL), // p_1003->g_70
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x29L), 0x29L), 0x29L, 7UL, 0x29L, (VECTOR(uint8_t, 2))(7UL, 0x29L), (VECTOR(uint8_t, 2))(7UL, 0x29L), 7UL, 0x29L, 7UL, 0x29L), // p_1003->g_76
        8UL, // p_1003->g_89
        0xB20E94A9L, // p_1003->g_92
        1L, // p_1003->g_100
        6L, // p_1003->g_101
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int16_t, 2))((-1L), (-9L)), (VECTOR(int16_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L)), // p_1003->g_106
        (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x5A9C8A47L), 0x5A9C8A47L), 0x5A9C8A47L, (-10L), 0x5A9C8A47L, (VECTOR(int32_t, 2))((-10L), 0x5A9C8A47L), (VECTOR(int32_t, 2))((-10L), 0x5A9C8A47L), (-10L), 0x5A9C8A47L, (-10L), 0x5A9C8A47L), // p_1003->g_118
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL), // p_1003->g_131
        {{{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L}},{{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L},{2L,0x664CL,2L}}}, // p_1003->g_132
        0L, // p_1003->g_137
        {&p_1003->g_137,&p_1003->g_137}, // p_1003->g_136
        0x31L, // p_1003->g_145
        &p_1003->g_19, // p_1003->g_150
        {&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150,&p_1003->g_150}, // p_1003->g_149
        {4L,4L,4L,4L}, // p_1003->g_159
        9UL, // p_1003->g_160
        0x20L, // p_1003->g_161
        0xC2L, // p_1003->g_306
        {(void*)0,(void*)0,(void*)0}, // p_1003->g_337
        &p_1003->g_150, // p_1003->g_338
        (VECTOR(int32_t, 8))(0x531BECF2L, (VECTOR(int32_t, 4))(0x531BECF2L, (VECTOR(int32_t, 2))(0x531BECF2L, 0x6966114DL), 0x6966114DL), 0x6966114DL, 0x531BECF2L, 0x6966114DL), // p_1003->g_359
        0x53894630L, // p_1003->g_363
        0x28860A2740761FC8L, // p_1003->g_366
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xE2DA93ED52AF9D10L), 0xE2DA93ED52AF9D10L), 0xE2DA93ED52AF9D10L, 0UL, 0xE2DA93ED52AF9D10L), // p_1003->g_368
        (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 252UL), 252UL), // p_1003->g_409
        (VECTOR(uint8_t, 2))(0x45L, 0x4EL), // p_1003->g_414
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 249UL), 249UL), 249UL, 254UL, 249UL), // p_1003->g_416
        (VECTOR(uint8_t, 2))(0x89L, 0x4DL), // p_1003->g_417
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC4L), 0xC4L), 0xC4L, 0UL, 0xC4L), // p_1003->g_418
        (VECTOR(int16_t, 8))(0x05D9L, (VECTOR(int16_t, 4))(0x05D9L, (VECTOR(int16_t, 2))(0x05D9L, (-8L)), (-8L)), (-8L), 0x05D9L, (-8L)), // p_1003->g_435
        (VECTOR(uint32_t, 2))(0x847E7DCCL, 0xF0C76D18L), // p_1003->g_437
        (VECTOR(int8_t, 8))(0x57L, (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x10L), 0x10L), 0x10L, 0x57L, 0x10L), // p_1003->g_445
        {1L,0x4766L,-5L,4294967295UL}, // p_1003->g_463
        (void*)0, // p_1003->g_494
        {&p_1003->g_494,&p_1003->g_494,&p_1003->g_494}, // p_1003->g_493
        &p_1003->g_463, // p_1003->g_499
        {0x0F89FECDL,-1L,0x4159BADCL,0x0807E082L}, // p_1003->g_507
        (VECTOR(int32_t, 8))(0x6A83FDBFL, (VECTOR(int32_t, 4))(0x6A83FDBFL, (VECTOR(int32_t, 2))(0x6A83FDBFL, 0x3B6B2A3BL), 0x3B6B2A3BL), 0x3B6B2A3BL, 0x6A83FDBFL, 0x3B6B2A3BL), // p_1003->g_512
        (void*)0, // p_1003->g_516
        &p_1003->g_516, // p_1003->g_515
        (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x0AL), 0x0AL), // p_1003->g_553
        (VECTOR(int64_t, 8))(0x3D9C8EDFECFF5E07L, (VECTOR(int64_t, 4))(0x3D9C8EDFECFF5E07L, (VECTOR(int64_t, 2))(0x3D9C8EDFECFF5E07L, 0x144516553004AFD3L), 0x144516553004AFD3L), 0x144516553004AFD3L, 0x3D9C8EDFECFF5E07L, 0x144516553004AFD3L), // p_1003->g_554
        255UL, // p_1003->g_607
        (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x88L), 0x88L), 0x88L, 252UL, 0x88L, (VECTOR(uint8_t, 2))(252UL, 0x88L), (VECTOR(uint8_t, 2))(252UL, 0x88L), 252UL, 0x88L, 252UL, 0x88L), // p_1003->g_620
        (void*)0, // p_1003->g_633
        &p_1003->g_633, // p_1003->g_632
        &p_1003->g_150, // p_1003->g_654
        (VECTOR(int32_t, 8))(0x4A413434L, (VECTOR(int32_t, 4))(0x4A413434L, (VECTOR(int32_t, 2))(0x4A413434L, (-3L)), (-3L)), (-3L), 0x4A413434L, (-3L)), // p_1003->g_662
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x65F89336L), 0x65F89336L), 0x65F89336L, (-1L), 0x65F89336L, (VECTOR(int32_t, 2))((-1L), 0x65F89336L), (VECTOR(int32_t, 2))((-1L), 0x65F89336L), (-1L), 0x65F89336L, (-1L), 0x65F89336L), // p_1003->g_664
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), // p_1003->g_665
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int32_t, 2))((-1L), 4L), (VECTOR(int32_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L), // p_1003->g_666
        {0x6CDE2EC3L,-4L,0x197B8E2DL,0x0E94DB28L}, // p_1003->g_668
        (void*)0, // p_1003->g_678
        &p_1003->g_678, // p_1003->g_677
        (void*)0, // p_1003->g_679
        {0x272C901FL,-1L,0x06CDCEC9L,1UL}, // p_1003->g_692
        0L, // p_1003->g_712
        0x41B6190AL, // p_1003->g_718
        &p_1003->g_150, // p_1003->g_721
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_1003->g_742
        (VECTOR(int64_t, 2))(0x310BC7D6A1A8F358L, 0x0E5D8F4243CE68B4L), // p_1003->g_746
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL, (VECTOR(uint32_t, 2))(0UL, 2UL), (VECTOR(uint32_t, 2))(0UL, 2UL), 0UL, 2UL, 0UL, 2UL), // p_1003->g_787
        0x276AL, // p_1003->g_803
        (VECTOR(uint8_t, 8))(0x94L, (VECTOR(uint8_t, 4))(0x94L, (VECTOR(uint8_t, 2))(0x94L, 255UL), 255UL), 255UL, 0x94L, 255UL), // p_1003->g_811
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 0UL, 4294967295UL, 0UL, 4294967295UL), // p_1003->g_854
        &p_1003->g_366, // p_1003->g_860
        &p_1003->g_860, // p_1003->g_859
        (void*)0, // p_1003->g_880
        (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0L), 0L), // p_1003->g_886
        {{0x5AE287079724163CL,0x54A5L,0x4646910CL},{0x5AE287079724163CL,0x54A5L,0x4646910CL},{0x5AE287079724163CL,0x54A5L,0x4646910CL},{0x5AE287079724163CL,0x54A5L,0x4646910CL}}, // p_1003->g_889
        0L, // p_1003->g_892
        &p_1003->g_19, // p_1003->g_907
        {0x647D5F18L,0x6023L,0x7BCCAAC9L,4294967294UL}, // p_1003->g_908
        {0x754AC1CE41992268L,0x61F9L,0x5DDF6E3AL}, // p_1003->g_912
        (VECTOR(uint8_t, 16))(0xF0L, (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 1UL), 1UL), 1UL, 0xF0L, 1UL, (VECTOR(uint8_t, 2))(0xF0L, 1UL), (VECTOR(uint8_t, 2))(0xF0L, 1UL), 0xF0L, 1UL, 0xF0L, 1UL), // p_1003->g_915
        &p_1003->g_907, // p_1003->g_935
        &p_1003->g_100, // p_1003->g_941
        4294967295UL, // p_1003->g_972
        0, // p_1003->v_collective
        sequence_input[get_global_id(0)], // p_1003->global_0_offset
        sequence_input[get_global_id(1)], // p_1003->global_1_offset
        sequence_input[get_global_id(2)], // p_1003->global_2_offset
        sequence_input[get_local_id(0)], // p_1003->local_0_offset
        sequence_input[get_local_id(1)], // p_1003->local_1_offset
        sequence_input[get_local_id(2)], // p_1003->local_2_offset
        sequence_input[get_group_id(0)], // p_1003->group_0_offset
        sequence_input[get_group_id(1)], // p_1003->group_1_offset
        sequence_input[get_group_id(2)], // p_1003->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 135)), permutations[0][get_linear_local_id()])), // p_1003->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1004 = c_1005;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1003);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1003->g_2, "p_1003->g_2", print_hash_value);
    transparent_crc(p_1003->g_3, "p_1003->g_3", print_hash_value);
    transparent_crc(p_1003->g_6, "p_1003->g_6", print_hash_value);
    transparent_crc(p_1003->g_7, "p_1003->g_7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1003->g_10[i][j][k], "p_1003->g_10[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1003->g_11[i][j], "p_1003->g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1003->g_12, "p_1003->g_12", print_hash_value);
    transparent_crc(p_1003->g_13, "p_1003->g_13", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1003->g_16[i][j], "p_1003->g_16[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1003->g_17, "p_1003->g_17", print_hash_value);
    transparent_crc(p_1003->g_18.x, "p_1003->g_18.x", print_hash_value);
    transparent_crc(p_1003->g_18.y, "p_1003->g_18.y", print_hash_value);
    transparent_crc(p_1003->g_18.z, "p_1003->g_18.z", print_hash_value);
    transparent_crc(p_1003->g_18.w, "p_1003->g_18.w", print_hash_value);
    transparent_crc(p_1003->g_19, "p_1003->g_19", print_hash_value);
    transparent_crc(p_1003->g_22, "p_1003->g_22", print_hash_value);
    transparent_crc(p_1003->g_55, "p_1003->g_55", print_hash_value);
    transparent_crc(p_1003->g_56.x, "p_1003->g_56.x", print_hash_value);
    transparent_crc(p_1003->g_56.y, "p_1003->g_56.y", print_hash_value);
    transparent_crc(p_1003->g_70.s0, "p_1003->g_70.s0", print_hash_value);
    transparent_crc(p_1003->g_70.s1, "p_1003->g_70.s1", print_hash_value);
    transparent_crc(p_1003->g_70.s2, "p_1003->g_70.s2", print_hash_value);
    transparent_crc(p_1003->g_70.s3, "p_1003->g_70.s3", print_hash_value);
    transparent_crc(p_1003->g_70.s4, "p_1003->g_70.s4", print_hash_value);
    transparent_crc(p_1003->g_70.s5, "p_1003->g_70.s5", print_hash_value);
    transparent_crc(p_1003->g_70.s6, "p_1003->g_70.s6", print_hash_value);
    transparent_crc(p_1003->g_70.s7, "p_1003->g_70.s7", print_hash_value);
    transparent_crc(p_1003->g_70.s8, "p_1003->g_70.s8", print_hash_value);
    transparent_crc(p_1003->g_70.s9, "p_1003->g_70.s9", print_hash_value);
    transparent_crc(p_1003->g_70.sa, "p_1003->g_70.sa", print_hash_value);
    transparent_crc(p_1003->g_70.sb, "p_1003->g_70.sb", print_hash_value);
    transparent_crc(p_1003->g_70.sc, "p_1003->g_70.sc", print_hash_value);
    transparent_crc(p_1003->g_70.sd, "p_1003->g_70.sd", print_hash_value);
    transparent_crc(p_1003->g_70.se, "p_1003->g_70.se", print_hash_value);
    transparent_crc(p_1003->g_70.sf, "p_1003->g_70.sf", print_hash_value);
    transparent_crc(p_1003->g_76.s0, "p_1003->g_76.s0", print_hash_value);
    transparent_crc(p_1003->g_76.s1, "p_1003->g_76.s1", print_hash_value);
    transparent_crc(p_1003->g_76.s2, "p_1003->g_76.s2", print_hash_value);
    transparent_crc(p_1003->g_76.s3, "p_1003->g_76.s3", print_hash_value);
    transparent_crc(p_1003->g_76.s4, "p_1003->g_76.s4", print_hash_value);
    transparent_crc(p_1003->g_76.s5, "p_1003->g_76.s5", print_hash_value);
    transparent_crc(p_1003->g_76.s6, "p_1003->g_76.s6", print_hash_value);
    transparent_crc(p_1003->g_76.s7, "p_1003->g_76.s7", print_hash_value);
    transparent_crc(p_1003->g_76.s8, "p_1003->g_76.s8", print_hash_value);
    transparent_crc(p_1003->g_76.s9, "p_1003->g_76.s9", print_hash_value);
    transparent_crc(p_1003->g_76.sa, "p_1003->g_76.sa", print_hash_value);
    transparent_crc(p_1003->g_76.sb, "p_1003->g_76.sb", print_hash_value);
    transparent_crc(p_1003->g_76.sc, "p_1003->g_76.sc", print_hash_value);
    transparent_crc(p_1003->g_76.sd, "p_1003->g_76.sd", print_hash_value);
    transparent_crc(p_1003->g_76.se, "p_1003->g_76.se", print_hash_value);
    transparent_crc(p_1003->g_76.sf, "p_1003->g_76.sf", print_hash_value);
    transparent_crc(p_1003->g_89, "p_1003->g_89", print_hash_value);
    transparent_crc(p_1003->g_92, "p_1003->g_92", print_hash_value);
    transparent_crc(p_1003->g_100, "p_1003->g_100", print_hash_value);
    transparent_crc(p_1003->g_101, "p_1003->g_101", print_hash_value);
    transparent_crc(p_1003->g_106.s0, "p_1003->g_106.s0", print_hash_value);
    transparent_crc(p_1003->g_106.s1, "p_1003->g_106.s1", print_hash_value);
    transparent_crc(p_1003->g_106.s2, "p_1003->g_106.s2", print_hash_value);
    transparent_crc(p_1003->g_106.s3, "p_1003->g_106.s3", print_hash_value);
    transparent_crc(p_1003->g_106.s4, "p_1003->g_106.s4", print_hash_value);
    transparent_crc(p_1003->g_106.s5, "p_1003->g_106.s5", print_hash_value);
    transparent_crc(p_1003->g_106.s6, "p_1003->g_106.s6", print_hash_value);
    transparent_crc(p_1003->g_106.s7, "p_1003->g_106.s7", print_hash_value);
    transparent_crc(p_1003->g_106.s8, "p_1003->g_106.s8", print_hash_value);
    transparent_crc(p_1003->g_106.s9, "p_1003->g_106.s9", print_hash_value);
    transparent_crc(p_1003->g_106.sa, "p_1003->g_106.sa", print_hash_value);
    transparent_crc(p_1003->g_106.sb, "p_1003->g_106.sb", print_hash_value);
    transparent_crc(p_1003->g_106.sc, "p_1003->g_106.sc", print_hash_value);
    transparent_crc(p_1003->g_106.sd, "p_1003->g_106.sd", print_hash_value);
    transparent_crc(p_1003->g_106.se, "p_1003->g_106.se", print_hash_value);
    transparent_crc(p_1003->g_106.sf, "p_1003->g_106.sf", print_hash_value);
    transparent_crc(p_1003->g_118.s0, "p_1003->g_118.s0", print_hash_value);
    transparent_crc(p_1003->g_118.s1, "p_1003->g_118.s1", print_hash_value);
    transparent_crc(p_1003->g_118.s2, "p_1003->g_118.s2", print_hash_value);
    transparent_crc(p_1003->g_118.s3, "p_1003->g_118.s3", print_hash_value);
    transparent_crc(p_1003->g_118.s4, "p_1003->g_118.s4", print_hash_value);
    transparent_crc(p_1003->g_118.s5, "p_1003->g_118.s5", print_hash_value);
    transparent_crc(p_1003->g_118.s6, "p_1003->g_118.s6", print_hash_value);
    transparent_crc(p_1003->g_118.s7, "p_1003->g_118.s7", print_hash_value);
    transparent_crc(p_1003->g_118.s8, "p_1003->g_118.s8", print_hash_value);
    transparent_crc(p_1003->g_118.s9, "p_1003->g_118.s9", print_hash_value);
    transparent_crc(p_1003->g_118.sa, "p_1003->g_118.sa", print_hash_value);
    transparent_crc(p_1003->g_118.sb, "p_1003->g_118.sb", print_hash_value);
    transparent_crc(p_1003->g_118.sc, "p_1003->g_118.sc", print_hash_value);
    transparent_crc(p_1003->g_118.sd, "p_1003->g_118.sd", print_hash_value);
    transparent_crc(p_1003->g_118.se, "p_1003->g_118.se", print_hash_value);
    transparent_crc(p_1003->g_118.sf, "p_1003->g_118.sf", print_hash_value);
    transparent_crc(p_1003->g_131.s0, "p_1003->g_131.s0", print_hash_value);
    transparent_crc(p_1003->g_131.s1, "p_1003->g_131.s1", print_hash_value);
    transparent_crc(p_1003->g_131.s2, "p_1003->g_131.s2", print_hash_value);
    transparent_crc(p_1003->g_131.s3, "p_1003->g_131.s3", print_hash_value);
    transparent_crc(p_1003->g_131.s4, "p_1003->g_131.s4", print_hash_value);
    transparent_crc(p_1003->g_131.s5, "p_1003->g_131.s5", print_hash_value);
    transparent_crc(p_1003->g_131.s6, "p_1003->g_131.s6", print_hash_value);
    transparent_crc(p_1003->g_131.s7, "p_1003->g_131.s7", print_hash_value);
    transparent_crc(p_1003->g_131.s8, "p_1003->g_131.s8", print_hash_value);
    transparent_crc(p_1003->g_131.s9, "p_1003->g_131.s9", print_hash_value);
    transparent_crc(p_1003->g_131.sa, "p_1003->g_131.sa", print_hash_value);
    transparent_crc(p_1003->g_131.sb, "p_1003->g_131.sb", print_hash_value);
    transparent_crc(p_1003->g_131.sc, "p_1003->g_131.sc", print_hash_value);
    transparent_crc(p_1003->g_131.sd, "p_1003->g_131.sd", print_hash_value);
    transparent_crc(p_1003->g_131.se, "p_1003->g_131.se", print_hash_value);
    transparent_crc(p_1003->g_131.sf, "p_1003->g_131.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1003->g_132[i][j].f0, "p_1003->g_132[i][j].f0", print_hash_value);
            transparent_crc(p_1003->g_132[i][j].f1, "p_1003->g_132[i][j].f1", print_hash_value);
            transparent_crc(p_1003->g_132[i][j].f2, "p_1003->g_132[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1003->g_137, "p_1003->g_137", print_hash_value);
    transparent_crc(p_1003->g_145, "p_1003->g_145", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1003->g_159[i], "p_1003->g_159[i]", print_hash_value);

    }
    transparent_crc(p_1003->g_160, "p_1003->g_160", print_hash_value);
    transparent_crc(p_1003->g_161, "p_1003->g_161", print_hash_value);
    transparent_crc(p_1003->g_306, "p_1003->g_306", print_hash_value);
    transparent_crc(p_1003->g_359.s0, "p_1003->g_359.s0", print_hash_value);
    transparent_crc(p_1003->g_359.s1, "p_1003->g_359.s1", print_hash_value);
    transparent_crc(p_1003->g_359.s2, "p_1003->g_359.s2", print_hash_value);
    transparent_crc(p_1003->g_359.s3, "p_1003->g_359.s3", print_hash_value);
    transparent_crc(p_1003->g_359.s4, "p_1003->g_359.s4", print_hash_value);
    transparent_crc(p_1003->g_359.s5, "p_1003->g_359.s5", print_hash_value);
    transparent_crc(p_1003->g_359.s6, "p_1003->g_359.s6", print_hash_value);
    transparent_crc(p_1003->g_359.s7, "p_1003->g_359.s7", print_hash_value);
    transparent_crc(p_1003->g_363, "p_1003->g_363", print_hash_value);
    transparent_crc(p_1003->g_366, "p_1003->g_366", print_hash_value);
    transparent_crc(p_1003->g_368.s0, "p_1003->g_368.s0", print_hash_value);
    transparent_crc(p_1003->g_368.s1, "p_1003->g_368.s1", print_hash_value);
    transparent_crc(p_1003->g_368.s2, "p_1003->g_368.s2", print_hash_value);
    transparent_crc(p_1003->g_368.s3, "p_1003->g_368.s3", print_hash_value);
    transparent_crc(p_1003->g_368.s4, "p_1003->g_368.s4", print_hash_value);
    transparent_crc(p_1003->g_368.s5, "p_1003->g_368.s5", print_hash_value);
    transparent_crc(p_1003->g_368.s6, "p_1003->g_368.s6", print_hash_value);
    transparent_crc(p_1003->g_368.s7, "p_1003->g_368.s7", print_hash_value);
    transparent_crc(p_1003->g_409.x, "p_1003->g_409.x", print_hash_value);
    transparent_crc(p_1003->g_409.y, "p_1003->g_409.y", print_hash_value);
    transparent_crc(p_1003->g_409.z, "p_1003->g_409.z", print_hash_value);
    transparent_crc(p_1003->g_409.w, "p_1003->g_409.w", print_hash_value);
    transparent_crc(p_1003->g_414.x, "p_1003->g_414.x", print_hash_value);
    transparent_crc(p_1003->g_414.y, "p_1003->g_414.y", print_hash_value);
    transparent_crc(p_1003->g_416.s0, "p_1003->g_416.s0", print_hash_value);
    transparent_crc(p_1003->g_416.s1, "p_1003->g_416.s1", print_hash_value);
    transparent_crc(p_1003->g_416.s2, "p_1003->g_416.s2", print_hash_value);
    transparent_crc(p_1003->g_416.s3, "p_1003->g_416.s3", print_hash_value);
    transparent_crc(p_1003->g_416.s4, "p_1003->g_416.s4", print_hash_value);
    transparent_crc(p_1003->g_416.s5, "p_1003->g_416.s5", print_hash_value);
    transparent_crc(p_1003->g_416.s6, "p_1003->g_416.s6", print_hash_value);
    transparent_crc(p_1003->g_416.s7, "p_1003->g_416.s7", print_hash_value);
    transparent_crc(p_1003->g_417.x, "p_1003->g_417.x", print_hash_value);
    transparent_crc(p_1003->g_417.y, "p_1003->g_417.y", print_hash_value);
    transparent_crc(p_1003->g_418.s0, "p_1003->g_418.s0", print_hash_value);
    transparent_crc(p_1003->g_418.s1, "p_1003->g_418.s1", print_hash_value);
    transparent_crc(p_1003->g_418.s2, "p_1003->g_418.s2", print_hash_value);
    transparent_crc(p_1003->g_418.s3, "p_1003->g_418.s3", print_hash_value);
    transparent_crc(p_1003->g_418.s4, "p_1003->g_418.s4", print_hash_value);
    transparent_crc(p_1003->g_418.s5, "p_1003->g_418.s5", print_hash_value);
    transparent_crc(p_1003->g_418.s6, "p_1003->g_418.s6", print_hash_value);
    transparent_crc(p_1003->g_418.s7, "p_1003->g_418.s7", print_hash_value);
    transparent_crc(p_1003->g_435.s0, "p_1003->g_435.s0", print_hash_value);
    transparent_crc(p_1003->g_435.s1, "p_1003->g_435.s1", print_hash_value);
    transparent_crc(p_1003->g_435.s2, "p_1003->g_435.s2", print_hash_value);
    transparent_crc(p_1003->g_435.s3, "p_1003->g_435.s3", print_hash_value);
    transparent_crc(p_1003->g_435.s4, "p_1003->g_435.s4", print_hash_value);
    transparent_crc(p_1003->g_435.s5, "p_1003->g_435.s5", print_hash_value);
    transparent_crc(p_1003->g_435.s6, "p_1003->g_435.s6", print_hash_value);
    transparent_crc(p_1003->g_435.s7, "p_1003->g_435.s7", print_hash_value);
    transparent_crc(p_1003->g_437.x, "p_1003->g_437.x", print_hash_value);
    transparent_crc(p_1003->g_437.y, "p_1003->g_437.y", print_hash_value);
    transparent_crc(p_1003->g_445.s0, "p_1003->g_445.s0", print_hash_value);
    transparent_crc(p_1003->g_445.s1, "p_1003->g_445.s1", print_hash_value);
    transparent_crc(p_1003->g_445.s2, "p_1003->g_445.s2", print_hash_value);
    transparent_crc(p_1003->g_445.s3, "p_1003->g_445.s3", print_hash_value);
    transparent_crc(p_1003->g_445.s4, "p_1003->g_445.s4", print_hash_value);
    transparent_crc(p_1003->g_445.s5, "p_1003->g_445.s5", print_hash_value);
    transparent_crc(p_1003->g_445.s6, "p_1003->g_445.s6", print_hash_value);
    transparent_crc(p_1003->g_445.s7, "p_1003->g_445.s7", print_hash_value);
    transparent_crc(p_1003->g_463.f0, "p_1003->g_463.f0", print_hash_value);
    transparent_crc(p_1003->g_463.f1, "p_1003->g_463.f1", print_hash_value);
    transparent_crc(p_1003->g_463.f2, "p_1003->g_463.f2", print_hash_value);
    transparent_crc(p_1003->g_463.f3, "p_1003->g_463.f3", print_hash_value);
    transparent_crc(p_1003->g_507.f0, "p_1003->g_507.f0", print_hash_value);
    transparent_crc(p_1003->g_507.f1, "p_1003->g_507.f1", print_hash_value);
    transparent_crc(p_1003->g_507.f2, "p_1003->g_507.f2", print_hash_value);
    transparent_crc(p_1003->g_507.f3, "p_1003->g_507.f3", print_hash_value);
    transparent_crc(p_1003->g_512.s0, "p_1003->g_512.s0", print_hash_value);
    transparent_crc(p_1003->g_512.s1, "p_1003->g_512.s1", print_hash_value);
    transparent_crc(p_1003->g_512.s2, "p_1003->g_512.s2", print_hash_value);
    transparent_crc(p_1003->g_512.s3, "p_1003->g_512.s3", print_hash_value);
    transparent_crc(p_1003->g_512.s4, "p_1003->g_512.s4", print_hash_value);
    transparent_crc(p_1003->g_512.s5, "p_1003->g_512.s5", print_hash_value);
    transparent_crc(p_1003->g_512.s6, "p_1003->g_512.s6", print_hash_value);
    transparent_crc(p_1003->g_512.s7, "p_1003->g_512.s7", print_hash_value);
    transparent_crc(p_1003->g_553.x, "p_1003->g_553.x", print_hash_value);
    transparent_crc(p_1003->g_553.y, "p_1003->g_553.y", print_hash_value);
    transparent_crc(p_1003->g_553.z, "p_1003->g_553.z", print_hash_value);
    transparent_crc(p_1003->g_553.w, "p_1003->g_553.w", print_hash_value);
    transparent_crc(p_1003->g_554.s0, "p_1003->g_554.s0", print_hash_value);
    transparent_crc(p_1003->g_554.s1, "p_1003->g_554.s1", print_hash_value);
    transparent_crc(p_1003->g_554.s2, "p_1003->g_554.s2", print_hash_value);
    transparent_crc(p_1003->g_554.s3, "p_1003->g_554.s3", print_hash_value);
    transparent_crc(p_1003->g_554.s4, "p_1003->g_554.s4", print_hash_value);
    transparent_crc(p_1003->g_554.s5, "p_1003->g_554.s5", print_hash_value);
    transparent_crc(p_1003->g_554.s6, "p_1003->g_554.s6", print_hash_value);
    transparent_crc(p_1003->g_554.s7, "p_1003->g_554.s7", print_hash_value);
    transparent_crc(p_1003->g_607, "p_1003->g_607", print_hash_value);
    transparent_crc(p_1003->g_620.s0, "p_1003->g_620.s0", print_hash_value);
    transparent_crc(p_1003->g_620.s1, "p_1003->g_620.s1", print_hash_value);
    transparent_crc(p_1003->g_620.s2, "p_1003->g_620.s2", print_hash_value);
    transparent_crc(p_1003->g_620.s3, "p_1003->g_620.s3", print_hash_value);
    transparent_crc(p_1003->g_620.s4, "p_1003->g_620.s4", print_hash_value);
    transparent_crc(p_1003->g_620.s5, "p_1003->g_620.s5", print_hash_value);
    transparent_crc(p_1003->g_620.s6, "p_1003->g_620.s6", print_hash_value);
    transparent_crc(p_1003->g_620.s7, "p_1003->g_620.s7", print_hash_value);
    transparent_crc(p_1003->g_620.s8, "p_1003->g_620.s8", print_hash_value);
    transparent_crc(p_1003->g_620.s9, "p_1003->g_620.s9", print_hash_value);
    transparent_crc(p_1003->g_620.sa, "p_1003->g_620.sa", print_hash_value);
    transparent_crc(p_1003->g_620.sb, "p_1003->g_620.sb", print_hash_value);
    transparent_crc(p_1003->g_620.sc, "p_1003->g_620.sc", print_hash_value);
    transparent_crc(p_1003->g_620.sd, "p_1003->g_620.sd", print_hash_value);
    transparent_crc(p_1003->g_620.se, "p_1003->g_620.se", print_hash_value);
    transparent_crc(p_1003->g_620.sf, "p_1003->g_620.sf", print_hash_value);
    transparent_crc(p_1003->g_662.s0, "p_1003->g_662.s0", print_hash_value);
    transparent_crc(p_1003->g_662.s1, "p_1003->g_662.s1", print_hash_value);
    transparent_crc(p_1003->g_662.s2, "p_1003->g_662.s2", print_hash_value);
    transparent_crc(p_1003->g_662.s3, "p_1003->g_662.s3", print_hash_value);
    transparent_crc(p_1003->g_662.s4, "p_1003->g_662.s4", print_hash_value);
    transparent_crc(p_1003->g_662.s5, "p_1003->g_662.s5", print_hash_value);
    transparent_crc(p_1003->g_662.s6, "p_1003->g_662.s6", print_hash_value);
    transparent_crc(p_1003->g_662.s7, "p_1003->g_662.s7", print_hash_value);
    transparent_crc(p_1003->g_664.s0, "p_1003->g_664.s0", print_hash_value);
    transparent_crc(p_1003->g_664.s1, "p_1003->g_664.s1", print_hash_value);
    transparent_crc(p_1003->g_664.s2, "p_1003->g_664.s2", print_hash_value);
    transparent_crc(p_1003->g_664.s3, "p_1003->g_664.s3", print_hash_value);
    transparent_crc(p_1003->g_664.s4, "p_1003->g_664.s4", print_hash_value);
    transparent_crc(p_1003->g_664.s5, "p_1003->g_664.s5", print_hash_value);
    transparent_crc(p_1003->g_664.s6, "p_1003->g_664.s6", print_hash_value);
    transparent_crc(p_1003->g_664.s7, "p_1003->g_664.s7", print_hash_value);
    transparent_crc(p_1003->g_664.s8, "p_1003->g_664.s8", print_hash_value);
    transparent_crc(p_1003->g_664.s9, "p_1003->g_664.s9", print_hash_value);
    transparent_crc(p_1003->g_664.sa, "p_1003->g_664.sa", print_hash_value);
    transparent_crc(p_1003->g_664.sb, "p_1003->g_664.sb", print_hash_value);
    transparent_crc(p_1003->g_664.sc, "p_1003->g_664.sc", print_hash_value);
    transparent_crc(p_1003->g_664.sd, "p_1003->g_664.sd", print_hash_value);
    transparent_crc(p_1003->g_664.se, "p_1003->g_664.se", print_hash_value);
    transparent_crc(p_1003->g_664.sf, "p_1003->g_664.sf", print_hash_value);
    transparent_crc(p_1003->g_665.x, "p_1003->g_665.x", print_hash_value);
    transparent_crc(p_1003->g_665.y, "p_1003->g_665.y", print_hash_value);
    transparent_crc(p_1003->g_665.z, "p_1003->g_665.z", print_hash_value);
    transparent_crc(p_1003->g_665.w, "p_1003->g_665.w", print_hash_value);
    transparent_crc(p_1003->g_666.s0, "p_1003->g_666.s0", print_hash_value);
    transparent_crc(p_1003->g_666.s1, "p_1003->g_666.s1", print_hash_value);
    transparent_crc(p_1003->g_666.s2, "p_1003->g_666.s2", print_hash_value);
    transparent_crc(p_1003->g_666.s3, "p_1003->g_666.s3", print_hash_value);
    transparent_crc(p_1003->g_666.s4, "p_1003->g_666.s4", print_hash_value);
    transparent_crc(p_1003->g_666.s5, "p_1003->g_666.s5", print_hash_value);
    transparent_crc(p_1003->g_666.s6, "p_1003->g_666.s6", print_hash_value);
    transparent_crc(p_1003->g_666.s7, "p_1003->g_666.s7", print_hash_value);
    transparent_crc(p_1003->g_666.s8, "p_1003->g_666.s8", print_hash_value);
    transparent_crc(p_1003->g_666.s9, "p_1003->g_666.s9", print_hash_value);
    transparent_crc(p_1003->g_666.sa, "p_1003->g_666.sa", print_hash_value);
    transparent_crc(p_1003->g_666.sb, "p_1003->g_666.sb", print_hash_value);
    transparent_crc(p_1003->g_666.sc, "p_1003->g_666.sc", print_hash_value);
    transparent_crc(p_1003->g_666.sd, "p_1003->g_666.sd", print_hash_value);
    transparent_crc(p_1003->g_666.se, "p_1003->g_666.se", print_hash_value);
    transparent_crc(p_1003->g_666.sf, "p_1003->g_666.sf", print_hash_value);
    transparent_crc(p_1003->g_668.f0, "p_1003->g_668.f0", print_hash_value);
    transparent_crc(p_1003->g_668.f1, "p_1003->g_668.f1", print_hash_value);
    transparent_crc(p_1003->g_668.f2, "p_1003->g_668.f2", print_hash_value);
    transparent_crc(p_1003->g_668.f3, "p_1003->g_668.f3", print_hash_value);
    transparent_crc(p_1003->g_692.f0, "p_1003->g_692.f0", print_hash_value);
    transparent_crc(p_1003->g_692.f1, "p_1003->g_692.f1", print_hash_value);
    transparent_crc(p_1003->g_692.f2, "p_1003->g_692.f2", print_hash_value);
    transparent_crc(p_1003->g_692.f3, "p_1003->g_692.f3", print_hash_value);
    transparent_crc(p_1003->g_712, "p_1003->g_712", print_hash_value);
    transparent_crc(p_1003->g_718, "p_1003->g_718", print_hash_value);
    transparent_crc(p_1003->g_742.s0, "p_1003->g_742.s0", print_hash_value);
    transparent_crc(p_1003->g_742.s1, "p_1003->g_742.s1", print_hash_value);
    transparent_crc(p_1003->g_742.s2, "p_1003->g_742.s2", print_hash_value);
    transparent_crc(p_1003->g_742.s3, "p_1003->g_742.s3", print_hash_value);
    transparent_crc(p_1003->g_742.s4, "p_1003->g_742.s4", print_hash_value);
    transparent_crc(p_1003->g_742.s5, "p_1003->g_742.s5", print_hash_value);
    transparent_crc(p_1003->g_742.s6, "p_1003->g_742.s6", print_hash_value);
    transparent_crc(p_1003->g_742.s7, "p_1003->g_742.s7", print_hash_value);
    transparent_crc(p_1003->g_742.s8, "p_1003->g_742.s8", print_hash_value);
    transparent_crc(p_1003->g_742.s9, "p_1003->g_742.s9", print_hash_value);
    transparent_crc(p_1003->g_742.sa, "p_1003->g_742.sa", print_hash_value);
    transparent_crc(p_1003->g_742.sb, "p_1003->g_742.sb", print_hash_value);
    transparent_crc(p_1003->g_742.sc, "p_1003->g_742.sc", print_hash_value);
    transparent_crc(p_1003->g_742.sd, "p_1003->g_742.sd", print_hash_value);
    transparent_crc(p_1003->g_742.se, "p_1003->g_742.se", print_hash_value);
    transparent_crc(p_1003->g_742.sf, "p_1003->g_742.sf", print_hash_value);
    transparent_crc(p_1003->g_746.x, "p_1003->g_746.x", print_hash_value);
    transparent_crc(p_1003->g_746.y, "p_1003->g_746.y", print_hash_value);
    transparent_crc(p_1003->g_787.s0, "p_1003->g_787.s0", print_hash_value);
    transparent_crc(p_1003->g_787.s1, "p_1003->g_787.s1", print_hash_value);
    transparent_crc(p_1003->g_787.s2, "p_1003->g_787.s2", print_hash_value);
    transparent_crc(p_1003->g_787.s3, "p_1003->g_787.s3", print_hash_value);
    transparent_crc(p_1003->g_787.s4, "p_1003->g_787.s4", print_hash_value);
    transparent_crc(p_1003->g_787.s5, "p_1003->g_787.s5", print_hash_value);
    transparent_crc(p_1003->g_787.s6, "p_1003->g_787.s6", print_hash_value);
    transparent_crc(p_1003->g_787.s7, "p_1003->g_787.s7", print_hash_value);
    transparent_crc(p_1003->g_787.s8, "p_1003->g_787.s8", print_hash_value);
    transparent_crc(p_1003->g_787.s9, "p_1003->g_787.s9", print_hash_value);
    transparent_crc(p_1003->g_787.sa, "p_1003->g_787.sa", print_hash_value);
    transparent_crc(p_1003->g_787.sb, "p_1003->g_787.sb", print_hash_value);
    transparent_crc(p_1003->g_787.sc, "p_1003->g_787.sc", print_hash_value);
    transparent_crc(p_1003->g_787.sd, "p_1003->g_787.sd", print_hash_value);
    transparent_crc(p_1003->g_787.se, "p_1003->g_787.se", print_hash_value);
    transparent_crc(p_1003->g_787.sf, "p_1003->g_787.sf", print_hash_value);
    transparent_crc(p_1003->g_803, "p_1003->g_803", print_hash_value);
    transparent_crc(p_1003->g_811.s0, "p_1003->g_811.s0", print_hash_value);
    transparent_crc(p_1003->g_811.s1, "p_1003->g_811.s1", print_hash_value);
    transparent_crc(p_1003->g_811.s2, "p_1003->g_811.s2", print_hash_value);
    transparent_crc(p_1003->g_811.s3, "p_1003->g_811.s3", print_hash_value);
    transparent_crc(p_1003->g_811.s4, "p_1003->g_811.s4", print_hash_value);
    transparent_crc(p_1003->g_811.s5, "p_1003->g_811.s5", print_hash_value);
    transparent_crc(p_1003->g_811.s6, "p_1003->g_811.s6", print_hash_value);
    transparent_crc(p_1003->g_811.s7, "p_1003->g_811.s7", print_hash_value);
    transparent_crc(p_1003->g_854.s0, "p_1003->g_854.s0", print_hash_value);
    transparent_crc(p_1003->g_854.s1, "p_1003->g_854.s1", print_hash_value);
    transparent_crc(p_1003->g_854.s2, "p_1003->g_854.s2", print_hash_value);
    transparent_crc(p_1003->g_854.s3, "p_1003->g_854.s3", print_hash_value);
    transparent_crc(p_1003->g_854.s4, "p_1003->g_854.s4", print_hash_value);
    transparent_crc(p_1003->g_854.s5, "p_1003->g_854.s5", print_hash_value);
    transparent_crc(p_1003->g_854.s6, "p_1003->g_854.s6", print_hash_value);
    transparent_crc(p_1003->g_854.s7, "p_1003->g_854.s7", print_hash_value);
    transparent_crc(p_1003->g_854.s8, "p_1003->g_854.s8", print_hash_value);
    transparent_crc(p_1003->g_854.s9, "p_1003->g_854.s9", print_hash_value);
    transparent_crc(p_1003->g_854.sa, "p_1003->g_854.sa", print_hash_value);
    transparent_crc(p_1003->g_854.sb, "p_1003->g_854.sb", print_hash_value);
    transparent_crc(p_1003->g_854.sc, "p_1003->g_854.sc", print_hash_value);
    transparent_crc(p_1003->g_854.sd, "p_1003->g_854.sd", print_hash_value);
    transparent_crc(p_1003->g_854.se, "p_1003->g_854.se", print_hash_value);
    transparent_crc(p_1003->g_854.sf, "p_1003->g_854.sf", print_hash_value);
    transparent_crc(p_1003->g_886.x, "p_1003->g_886.x", print_hash_value);
    transparent_crc(p_1003->g_886.y, "p_1003->g_886.y", print_hash_value);
    transparent_crc(p_1003->g_886.z, "p_1003->g_886.z", print_hash_value);
    transparent_crc(p_1003->g_886.w, "p_1003->g_886.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1003->g_889[i].f0, "p_1003->g_889[i].f0", print_hash_value);
        transparent_crc(p_1003->g_889[i].f1, "p_1003->g_889[i].f1", print_hash_value);
        transparent_crc(p_1003->g_889[i].f2, "p_1003->g_889[i].f2", print_hash_value);

    }
    transparent_crc(p_1003->g_892, "p_1003->g_892", print_hash_value);
    transparent_crc(p_1003->g_908.f0, "p_1003->g_908.f0", print_hash_value);
    transparent_crc(p_1003->g_908.f1, "p_1003->g_908.f1", print_hash_value);
    transparent_crc(p_1003->g_908.f2, "p_1003->g_908.f2", print_hash_value);
    transparent_crc(p_1003->g_908.f3, "p_1003->g_908.f3", print_hash_value);
    transparent_crc(p_1003->g_912.f0, "p_1003->g_912.f0", print_hash_value);
    transparent_crc(p_1003->g_912.f1, "p_1003->g_912.f1", print_hash_value);
    transparent_crc(p_1003->g_912.f2, "p_1003->g_912.f2", print_hash_value);
    transparent_crc(p_1003->g_915.s0, "p_1003->g_915.s0", print_hash_value);
    transparent_crc(p_1003->g_915.s1, "p_1003->g_915.s1", print_hash_value);
    transparent_crc(p_1003->g_915.s2, "p_1003->g_915.s2", print_hash_value);
    transparent_crc(p_1003->g_915.s3, "p_1003->g_915.s3", print_hash_value);
    transparent_crc(p_1003->g_915.s4, "p_1003->g_915.s4", print_hash_value);
    transparent_crc(p_1003->g_915.s5, "p_1003->g_915.s5", print_hash_value);
    transparent_crc(p_1003->g_915.s6, "p_1003->g_915.s6", print_hash_value);
    transparent_crc(p_1003->g_915.s7, "p_1003->g_915.s7", print_hash_value);
    transparent_crc(p_1003->g_915.s8, "p_1003->g_915.s8", print_hash_value);
    transparent_crc(p_1003->g_915.s9, "p_1003->g_915.s9", print_hash_value);
    transparent_crc(p_1003->g_915.sa, "p_1003->g_915.sa", print_hash_value);
    transparent_crc(p_1003->g_915.sb, "p_1003->g_915.sb", print_hash_value);
    transparent_crc(p_1003->g_915.sc, "p_1003->g_915.sc", print_hash_value);
    transparent_crc(p_1003->g_915.sd, "p_1003->g_915.sd", print_hash_value);
    transparent_crc(p_1003->g_915.se, "p_1003->g_915.se", print_hash_value);
    transparent_crc(p_1003->g_915.sf, "p_1003->g_915.sf", print_hash_value);
    transparent_crc(p_1003->g_972, "p_1003->g_972", print_hash_value);
    transparent_crc(p_1003->v_collective, "p_1003->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 29; i++)
            transparent_crc(p_1003->g_special_values[i + 29 * get_linear_group_id()], "p_1003->g_special_values[i + 29 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1003->l_comm_values[get_linear_local_id()], "p_1003->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1003->g_comm_values[get_linear_group_id() * 135 + get_linear_local_id()], "p_1003->g_comm_values[get_linear_group_id() * 135 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
