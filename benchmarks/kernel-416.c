// --atomics 36 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,50,2 -l 1,50,2
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

__constant uint32_t permutations[10][100] = {
{26,87,53,4,46,99,21,45,73,3,91,64,44,14,1,70,82,8,94,35,36,30,66,57,27,86,93,31,0,20,77,95,25,40,97,74,92,96,90,5,84,24,11,38,85,41,59,12,58,68,6,16,18,65,37,15,7,79,22,19,80,76,42,10,81,54,47,48,43,13,34,71,89,55,62,9,60,78,75,51,2,56,69,61,17,88,49,29,67,98,23,32,28,72,83,39,52,33,63,50}, // permutation 0
{72,80,71,50,46,19,29,94,85,37,62,24,43,16,68,64,67,33,21,14,52,79,5,61,18,98,81,7,15,53,57,34,11,91,47,58,75,49,4,56,45,97,73,3,32,25,66,20,23,0,60,26,38,78,9,48,86,96,13,6,99,63,65,39,44,88,95,77,76,74,30,10,89,17,22,31,1,2,83,35,93,90,54,70,41,69,27,82,8,55,84,51,12,42,92,40,87,59,28,36}, // permutation 1
{68,32,96,63,28,1,86,19,59,20,57,88,93,33,81,61,30,50,54,35,71,98,14,47,80,5,34,99,16,24,43,7,6,3,56,23,29,41,90,49,0,87,12,97,95,42,36,26,48,74,91,27,37,45,11,58,53,55,44,73,66,78,51,89,76,39,94,15,77,79,67,92,40,22,38,72,13,60,69,8,84,65,46,18,4,25,52,83,64,31,82,9,62,21,85,10,2,75,17,70}, // permutation 2
{59,53,19,5,38,31,25,10,63,30,93,40,39,48,99,81,9,36,91,45,22,54,60,2,51,6,21,37,1,64,47,14,27,92,82,50,83,88,3,87,29,17,62,56,15,34,57,97,68,94,0,65,72,20,55,44,26,80,7,52,67,76,12,69,89,85,73,33,8,42,86,35,18,84,23,49,75,46,77,13,41,28,66,71,16,70,78,58,96,11,79,90,61,95,24,4,74,43,32,98}, // permutation 3
{47,93,94,40,20,12,45,29,19,27,85,8,73,9,89,82,10,35,76,30,5,32,75,25,70,98,48,63,92,23,17,96,80,61,69,87,33,83,41,24,86,22,74,88,43,71,64,58,18,14,11,99,28,57,39,42,72,55,84,6,54,21,59,26,46,97,3,44,95,53,34,90,91,56,13,60,79,4,38,50,67,51,78,1,15,31,7,66,81,65,16,0,52,36,77,2,68,49,37,62}, // permutation 4
{73,65,35,85,76,25,56,80,6,48,46,58,64,31,94,2,16,61,30,9,29,43,33,88,21,78,66,10,41,53,40,39,83,75,38,93,55,8,96,86,87,70,79,37,32,99,54,92,42,18,11,95,69,97,81,3,84,77,12,15,52,60,26,71,45,89,82,5,1,23,14,27,51,90,63,74,13,68,17,7,20,4,36,22,44,24,67,28,98,0,91,62,57,59,50,72,47,34,49,19}, // permutation 5
{88,61,43,30,54,38,0,6,67,10,8,51,11,4,90,58,97,31,22,68,48,77,40,9,60,24,27,23,3,18,89,26,45,39,33,56,5,34,83,41,50,65,52,85,98,76,63,17,7,94,29,42,53,79,47,14,16,71,44,84,86,73,87,62,13,72,32,57,66,35,70,12,93,28,55,91,36,25,78,21,99,92,95,96,81,1,2,59,46,74,20,49,64,19,75,80,82,15,69,37}, // permutation 6
{38,52,25,9,62,57,16,7,44,41,69,47,67,55,71,35,42,82,13,73,75,87,2,15,64,4,24,40,93,98,99,30,68,14,21,63,29,0,79,39,60,84,18,91,89,50,70,22,95,26,3,27,80,8,12,17,51,36,10,74,76,77,92,96,32,28,78,66,34,83,20,81,45,61,49,65,1,48,5,88,59,72,85,37,86,56,23,31,33,54,6,46,97,94,90,58,43,11,53,19}, // permutation 7
{54,62,91,32,6,73,81,43,4,24,21,84,18,20,71,17,44,10,3,70,48,95,56,29,33,78,41,97,74,55,45,5,82,53,28,14,65,0,35,76,99,37,90,60,96,88,69,7,11,77,57,42,15,9,34,25,85,1,94,67,68,86,2,13,83,52,80,8,51,93,38,58,47,12,27,75,46,79,59,72,98,63,31,16,22,19,64,36,39,92,66,87,50,49,61,23,26,89,40,30}, // permutation 8
{95,49,30,35,62,7,53,24,77,86,63,98,43,66,45,90,23,42,8,39,5,83,51,89,4,97,76,57,31,65,48,18,69,16,0,13,94,2,56,91,61,36,70,22,73,3,41,46,17,75,21,59,47,50,85,11,19,38,9,26,54,10,58,79,96,92,68,67,72,88,20,82,84,1,6,81,29,25,55,32,93,87,99,40,80,33,44,34,27,15,37,14,64,78,71,12,60,52,74,28} // permutation 9
};

// Seed: 3320568529

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
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
int32_t  func_1(struct S0 * p_60);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_1(struct S0 * p_60)
{ /* block id: 4 */
    int8_t l_59 = 0x77L;
    if ((atomic_inc(&p_60->g_atomic_input[36 * get_linear_group_id() + 25]) == 3))
    { /* block id: 6 */
        uint8_t l_2[8][1] = {{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL},{6UL}};
        int32_t l_4 = (-9L);
        int32_t *l_3 = &l_4;
        int i, j;
        l_2[2][0] |= 0x4A0029BFL;
        l_3 = (void*)0;
        for (l_2[6][0] = 1; (l_2[6][0] >= 25); l_2[6][0] = safe_add_func_uint16_t_u_u(l_2[6][0], 2))
        { /* block id: 11 */
            int32_t l_7 = 0L;
            for (l_7 = 17; (l_7 >= (-23)); --l_7)
            { /* block id: 14 */
                int32_t l_10 = 0x18F01BA0L;
                int8_t l_23 = (-1L);
                VECTOR(uint64_t, 16) l_24 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 5UL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(5UL, 18446744073709551614UL), 5UL, 18446744073709551614UL, 5UL, 18446744073709551614UL);
                uint32_t l_25 = 1UL;
                int64_t l_26 = 1L;
                int8_t l_27 = 5L;
                uint8_t l_28[8][10][3] = {{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}},{{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL},{0xC5L,0xB6L,8UL}}};
                int8_t l_29 = 0L;
                uint16_t l_30 = 0x7AEBL;
                uint8_t l_31 = 247UL;
                int64_t l_32 = 0x2D8EDCE5F1497EA9L;
                uint32_t l_33[8] = {0x594A39B7L,0x3FA8726AL,0x594A39B7L,0x594A39B7L,0x3FA8726AL,0x594A39B7L,0x594A39B7L,0x3FA8726AL};
                VECTOR(int16_t, 8) l_34 = (VECTOR(int16_t, 8))(0x75D9L, (VECTOR(int16_t, 4))(0x75D9L, (VECTOR(int16_t, 2))(0x75D9L, 0x0EFBL), 0x0EFBL), 0x0EFBL, 0x75D9L, 0x0EFBL);
                VECTOR(int32_t, 16) l_35 = (VECTOR(int32_t, 16))(0x4CFF5F9FL, (VECTOR(int32_t, 4))(0x4CFF5F9FL, (VECTOR(int32_t, 2))(0x4CFF5F9FL, 0x48FFC8ECL), 0x48FFC8ECL), 0x48FFC8ECL, 0x4CFF5F9FL, 0x48FFC8ECL, (VECTOR(int32_t, 2))(0x4CFF5F9FL, 0x48FFC8ECL), (VECTOR(int32_t, 2))(0x4CFF5F9FL, 0x48FFC8ECL), 0x4CFF5F9FL, 0x48FFC8ECL, 0x4CFF5F9FL, 0x48FFC8ECL);
                uint8_t l_36 = 1UL;
                uint16_t l_37 = 5UL;
                uint32_t l_38 = 1UL;
                int16_t l_39 = 0x7918L;
                int i, j, k;
                for (l_10 = (-6); (l_10 == (-20)); --l_10)
                { /* block id: 17 */
                    int32_t l_14 = (-2L);
                    int32_t *l_13 = &l_14;
                    int32_t *l_15 = &l_14;
                    l_15 = (l_13 = (void*)0);
                    for (l_14 = 6; (l_14 >= 11); ++l_14)
                    { /* block id: 22 */
                        uint32_t l_18 = 4294967295UL;
                        int32_t l_22[9][5] = {{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL},{0x11FC80AEL,4L,0x1AF9D66DL,4L,0x11FC80AEL}};
                        int32_t *l_21 = &l_22[0][1];
                        int i, j;
                        l_18++;
                        l_13 = l_21;
                    }
                }
                l_39 &= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_23, (((((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x4AB462A77B69C93EL, 2UL)))), ((VECTOR(uint64_t, 16))(l_24.sbf7935db5a26cdee)).s94, ((VECTOR(uint64_t, 2))(0x90AEC51AC06E3268L, 0x2AC30BCA0BECC33BL))))).even , (l_26 = l_25)) , l_27) , l_28[3][8][1]), (l_29 , (l_10 ^= l_30)), l_31, ((VECTOR(int32_t, 16))(l_32, (((l_34.s6 = (l_33[3] = GROUP_DIVERGE(1, 1))) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_35.sea67f41b)).s6255700154413270, ((VECTOR(int32_t, 2))(8L, 0x399D6DB7L)).xyxxyyyyyxyxxyyy))).s5055)).y) , l_36), l_37, ((VECTOR(int32_t, 8))(0x771E1D77L)), l_38, 0x264B00F5L, ((VECTOR(int32_t, 2))(0L)), 0x6484183AL)).sa, ((VECTOR(int32_t, 8))(5L)), ((VECTOR(int32_t, 2))(0x2993103DL)), 0L)).s4b, ((VECTOR(int32_t, 2))(0L))))).even;
                for (l_33[0] = 0; (l_33[0] >= 49); ++l_33[0])
                { /* block id: 34 */
                    int32_t l_42[8] = {(-2L),6L,(-2L),(-2L),6L,(-2L),(-2L),6L};
                    VECTOR(uint64_t, 2) l_58 = (VECTOR(uint64_t, 2))(0xAA24DD39D0E3EE8CL, 0xEE7193220CCB0868L);
                    int i;
                    for (l_42[2] = 0; (l_42[2] > 7); l_42[2]++)
                    { /* block id: 37 */
                        int32_t l_46 = (-4L);
                        int32_t *l_45 = &l_46;
                        int32_t *l_47 = &l_46;
                        int32_t *l_48[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_48[8] = (l_45 = (l_47 = (l_3 = l_45)));
                    }
                    for (l_42[2] = (-26); (l_42[2] < 3); ++l_42[2])
                    { /* block id: 45 */
                        VECTOR(uint32_t, 8) l_51 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xE73BF60CL), 0xE73BF60CL), 0xE73BF60CL, 1UL, 0xE73BF60CL);
                        int32_t l_52[8];
                        uint64_t l_53 = 0x725BA0F3F00C75B8L;
                        int64_t l_54[9][9] = {{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L},{0x577B3F785D6CF981L,(-1L),(-1L),6L,(-1L),6L,(-1L),(-1L),0x577B3F785D6CF981L}};
                        uint32_t l_55 = 0UL;
                        VECTOR(int32_t, 8) l_56 = (VECTOR(int32_t, 8))(0x0C655405L, (VECTOR(int32_t, 4))(0x0C655405L, (VECTOR(int32_t, 2))(0x0C655405L, 0x71E831F0L), 0x71E831F0L), 0x71E831F0L, 0x0C655405L, 0x71E831F0L);
                        int64_t l_57 = 0x50913F082F4DE99EL;
                        int i, j;
                        for (i = 0; i < 8; i++)
                            l_52[i] = 6L;
                        l_57 = (l_56.s7 = ((VECTOR(int32_t, 8))(0x6F817EA5L, (l_55 |= (l_4 = ((((VECTOR(uint32_t, 16))(l_51.s7541577226025036)).s5 , ((l_52[7] &= (-2L)) , (l_32 |= l_53))) , l_54[1][1]))), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(l_56.s72233137)).s70, ((VECTOR(int32_t, 2))(5L, 0x0604885EL))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x5BD8EBBBL, 0x068ECBDEL, 0x77431CF5L, 0x5978B88EL)))))).s2);
                    }
                    l_42[4] ^= l_58.x;
                }
                l_3 = (void*)0;
            }
        }
        unsigned int result = 0;
        int l_2_i0, l_2_i1;
        for (l_2_i0 = 0; l_2_i0 < 8; l_2_i0++) {
            for (l_2_i1 = 0; l_2_i1 < 1; l_2_i1++) {
                result += l_2[l_2_i0][l_2_i1];
            }
        }
        result += l_4;
        atomic_add(&p_60->g_special_values[36 * get_linear_group_id() + 25], result);
    }
    else
    { /* block id: 58 */
        (1 + 1);
    }
    return l_59;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[100];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 100; i++)
            l_comm_values[i] = 1;
    struct S0 c_61;
    struct S0* p_60 = &c_61;
    struct S0 c_62 = {
        0, // p_60->v_collective
        sequence_input[get_global_id(0)], // p_60->global_0_offset
        sequence_input[get_global_id(1)], // p_60->global_1_offset
        sequence_input[get_global_id(2)], // p_60->global_2_offset
        sequence_input[get_local_id(0)], // p_60->local_0_offset
        sequence_input[get_local_id(1)], // p_60->local_1_offset
        sequence_input[get_local_id(2)], // p_60->local_2_offset
        sequence_input[get_group_id(0)], // p_60->group_0_offset
        sequence_input[get_group_id(1)], // p_60->group_1_offset
        sequence_input[get_group_id(2)], // p_60->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[0][get_linear_local_id()])), // p_60->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_61 = c_62;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_60);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_60->v_collective, "p_60->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 36; i++)
            transparent_crc(p_60->g_special_values[i + 36 * get_linear_group_id()], "p_60->g_special_values[i + 36 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_60->l_comm_values[get_linear_local_id()], "p_60->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_60->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()], "p_60->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
