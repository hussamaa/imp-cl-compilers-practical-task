// --atomics 90 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,38,2 -l 2,19,2
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

__constant uint32_t permutations[10][76] = {
{65,68,24,28,55,70,0,53,64,23,61,33,20,62,44,37,56,38,22,29,72,40,52,42,43,14,35,69,4,50,34,39,73,11,12,6,47,32,54,67,9,57,74,41,36,1,19,21,71,17,60,2,15,18,48,31,10,13,30,45,26,7,51,5,58,59,27,3,63,25,66,75,46,8,49,16}, // permutation 0
{19,13,60,48,66,42,27,24,41,4,50,33,1,47,63,30,73,3,56,22,18,59,70,25,9,44,71,15,46,0,8,11,58,40,61,75,69,17,16,35,55,54,74,36,72,49,6,29,34,62,37,32,31,51,38,45,23,65,5,7,57,12,53,28,43,68,67,10,14,21,20,64,39,26,52,2}, // permutation 1
{43,65,42,11,71,67,68,25,58,47,74,26,36,2,69,21,72,50,55,37,56,59,54,30,19,23,29,10,46,40,62,32,41,70,45,3,14,12,24,13,66,39,53,52,75,63,33,48,38,6,15,28,51,16,31,34,35,22,18,57,9,64,20,7,60,49,44,61,0,27,1,8,17,5,4,73}, // permutation 2
{44,32,30,67,43,74,10,5,23,64,57,49,69,34,12,24,50,39,58,62,37,60,2,17,31,51,63,26,70,7,3,25,53,22,45,27,56,9,47,59,68,41,19,46,14,66,73,13,11,65,15,4,40,8,0,48,16,18,20,61,29,42,6,36,33,55,52,54,75,71,38,21,35,28,72,1}, // permutation 3
{64,73,74,33,22,21,17,45,61,75,14,11,62,54,66,52,13,8,27,70,30,26,15,20,43,4,40,23,44,50,72,47,1,25,7,34,56,69,32,6,3,46,24,36,41,55,60,0,10,49,37,68,48,38,31,67,53,9,63,18,29,12,57,71,59,2,39,65,58,16,28,5,42,35,19,51}, // permutation 4
{38,21,22,6,37,57,43,33,59,11,51,15,39,60,3,48,0,2,28,24,4,62,75,63,30,5,70,55,50,25,20,66,49,23,40,42,67,34,71,73,8,47,52,45,36,74,27,7,17,18,68,31,16,53,54,13,58,10,26,14,56,29,9,41,35,61,72,64,1,65,19,32,44,69,46,12}, // permutation 5
{27,71,23,60,40,22,15,30,6,10,1,14,48,51,17,20,12,9,4,50,38,46,34,43,70,25,52,18,49,61,62,36,75,37,66,8,24,19,0,32,16,31,58,63,73,44,29,64,65,13,3,28,35,45,26,41,72,7,2,39,53,57,33,21,56,69,47,74,42,11,68,5,59,67,55,54}, // permutation 6
{54,10,49,28,21,52,38,23,16,19,59,31,33,7,29,58,61,6,2,39,3,1,53,9,24,69,37,27,64,67,44,63,15,4,65,35,5,41,72,40,71,70,50,18,47,8,14,25,57,48,0,66,56,17,34,20,12,45,74,13,55,68,75,22,73,26,62,11,51,42,60,46,32,36,43,30}, // permutation 7
{11,58,61,17,51,21,47,13,32,19,37,6,16,8,65,50,39,45,40,55,0,14,44,54,46,31,1,71,52,36,42,43,34,69,9,70,59,48,5,68,2,73,63,72,35,30,25,64,33,23,4,53,74,41,29,3,12,67,60,75,15,24,62,10,20,27,49,26,7,18,22,56,66,28,38,57}, // permutation 8
{11,35,34,15,22,46,17,26,24,75,52,19,7,60,4,43,13,56,16,18,0,48,33,20,41,74,45,53,59,73,55,44,30,68,32,54,5,49,65,47,21,14,10,37,63,51,3,23,31,12,58,40,70,69,36,1,39,62,8,29,71,38,25,50,2,66,72,61,27,28,9,42,57,6,67,64} // permutation 9
};

// Seed: 91728890

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
};

struct S1 {
   volatile int8_t  f0;
   uint32_t  f1;
   int64_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    volatile int32_t g_6;
    int32_t g_7;
    int32_t g_10;
    int32_t g_15[1];
    int32_t *g_45;
    int32_t **g_44;
    uint8_t g_83[4][7][9];
    VECTOR(uint16_t, 2) g_100;
    volatile int32_t g_105;
    volatile int32_t g_106;
    volatile int32_t g_107;
    int32_t g_108;
    volatile struct S1 g_112;
    volatile struct S1 * volatile g_111;
    uint64_t g_148;
    uint32_t g_156;
    volatile struct S0 g_161;
    struct S1 g_269;
    uint32_t * volatile *g_274;
    struct S1 g_279;
    int32_t * volatile g_292;
    int32_t g_304;
    int32_t * volatile g_303;
    uint64_t g_313;
    int64_t g_323[9][10];
    struct S0 g_331[2];
    VECTOR(int8_t, 2) g_362;
    volatile struct S0 g_379;
    uint32_t *g_384;
    uint32_t **g_383;
    int32_t g_396;
    int16_t g_398;
    volatile VECTOR(int8_t, 16) g_403;
    VECTOR(uint8_t, 16) g_415;
    VECTOR(int32_t, 8) g_420;
    VECTOR(int8_t, 4) g_429;
    int32_t *g_439[5][6];
    uint32_t g_486;
    VECTOR(uint32_t, 2) g_491;
    VECTOR(int64_t, 16) g_493;
    volatile struct S0 g_516;
    volatile VECTOR(int32_t, 8) g_530;
    VECTOR(int16_t, 8) g_543;
    int64_t g_548;
    volatile VECTOR(int32_t, 16) g_597;
    uint16_t *g_605;
    uint32_t *** volatile g_609[9][1][8];
    uint32_t *** volatile g_610;
    volatile struct S0 g_611[3];
    volatile VECTOR(int32_t, 8) g_619;
    volatile VECTOR(int32_t, 2) g_620;
    int64_t g_624;
    struct S1 *g_656;
    volatile VECTOR(uint64_t, 4) g_669;
    VECTOR(int16_t, 4) g_682;
    volatile struct S1 g_703;
    volatile VECTOR(int32_t, 16) g_709;
    VECTOR(int32_t, 8) g_713;
    int32_t * volatile g_727;
    int32_t * volatile * volatile g_726;
    int32_t *g_729[8];
    int32_t **g_728;
    VECTOR(uint32_t, 8) g_740;
    volatile VECTOR(int32_t, 2) g_753;
    VECTOR(int32_t, 16) g_755;
    volatile int8_t *g_761;
    volatile int8_t * volatile *g_760;
    VECTOR(int16_t, 16) g_780;
    int32_t g_801;
    uint16_t g_817[8][5];
    volatile VECTOR(uint8_t, 8) g_833;
    volatile struct S0 g_846;
    volatile VECTOR(int16_t, 2) g_849;
    volatile int16_t *g_848;
    volatile int16_t **g_847[10][8][3];
    uint32_t **g_860;
    volatile struct S0 g_879;
    VECTOR(int32_t, 2) g_896;
    VECTOR(int8_t, 8) g_909;
    uint32_t g_913;
    int32_t g_914[6][8][5];
    volatile struct S0 *g_919[6][9];
    volatile uint32_t g_931;
    VECTOR(uint8_t, 4) g_947;
    int64_t *g_952[8];
    int64_t **g_951[4];
    int32_t **g_964;
    VECTOR(uint64_t, 4) g_971;
    int32_t g_979;
    VECTOR(uint64_t, 8) g_997;
    volatile VECTOR(uint64_t, 8) g_998;
    volatile struct S1 * volatile * volatile g_1020;
    volatile struct S1 * volatile * volatile *g_1019;
    volatile struct S0 g_1058[4][2];
    volatile struct S0 g_1066;
    volatile VECTOR(int32_t, 4) g_1067;
    VECTOR(uint16_t, 16) g_1071;
    VECTOR(int32_t, 16) g_1072;
    struct S0 g_1112;
    VECTOR(int8_t, 8) g_1119;
    VECTOR(int32_t, 4) g_1135;
    VECTOR(int32_t, 4) g_1136;
    int32_t * volatile g_1145;
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
uint32_t  func_1(struct S2 * p_1146);
int32_t ** func_25(int32_t ** p_26, struct S2 * p_1146);
int32_t ** func_27(int32_t * p_28, int32_t * p_29, uint32_t  p_30, int32_t ** p_31, struct S2 * p_1146);
int64_t  func_32(int32_t ** p_33, uint32_t  p_34, int32_t * p_35, uint32_t  p_36, struct S2 * p_1146);
int32_t ** func_37(uint8_t  p_38, int64_t  p_39, int16_t  p_40, struct S2 * p_1146);
int64_t  func_41(int32_t ** p_42, uint64_t  p_43, struct S2 * p_1146);
uint8_t  func_48(uint16_t  p_49, uint64_t  p_50, uint32_t  p_51, int32_t * p_52, struct S2 * p_1146);
struct S1  func_53(uint32_t  p_54, int64_t  p_55, int32_t  p_56, int32_t ** p_57, uint64_t  p_58, struct S2 * p_1146);
uint32_t  func_59(int32_t * p_60, struct S2 * p_1146);
int32_t * func_61(int32_t ** p_62, int32_t ** p_63, int8_t  p_64, uint32_t  p_65, int32_t * p_66, struct S2 * p_1146);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1146->g_7 p_1146->g_1119 p_1146->g_760 p_1146->g_761 p_1146->g_279.f0 p_1146->g_952 p_1146->g_1135 p_1146->g_1136 p_1146->g_979 p_1146->g_313 p_1146->g_429 p_1146->g_331.f1
 * writes: p_1146->g_7 p_1146->g_10 p_1146->g_323 p_1146->g_429
 */
uint32_t  func_1(struct S2 * p_1146)
{ /* block id: 4 */
    uint32_t l_22 = 0xF20920A6L;
    int32_t **l_67 = (void*)0;
    int32_t l_280 = 0x44A2E45BL;
    uint32_t l_440 = 4294967288UL;
    int64_t **l_974 = &p_1146->g_952[5];
    int16_t *l_976 = (void*)0;
    int16_t **l_975 = &l_976;
    int32_t l_980 = (-7L);
    uint32_t **l_987 = &p_1146->g_384;
    VECTOR(uint64_t, 2) l_999 = (VECTOR(uint64_t, 2))(0x0251FC0BB02FABA0L, 0UL);
    int64_t l_1002 = 0x1C78D177526E32EDL;
    int32_t l_1008 = (-1L);
    int32_t l_1013 = 0x125DB1B5L;
    VECTOR(int8_t, 4) l_1025 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x07L), 0x07L);
    uint64_t l_1052 = 0x5785E7CD31BB6663L;
    int32_t l_1106 = 0L;
    struct S1 **l_1120 = &p_1146->g_656;
    struct S1 **l_1122[7][2] = {{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0},{&p_1146->g_656,(void*)0}};
    struct S1 ***l_1121 = &l_1122[3][0];
    VECTOR(int16_t, 8) l_1125 = (VECTOR(int16_t, 8))(0x679CL, (VECTOR(int16_t, 4))(0x679CL, (VECTOR(int16_t, 2))(0x679CL, (-8L)), (-8L)), (-8L), 0x679CL, (-8L));
    uint8_t l_1126 = 1UL;
    VECTOR(int16_t, 16) l_1133 = (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x7578L), 0x7578L), 0x7578L, (-2L), 0x7578L, (VECTOR(int16_t, 2))((-2L), 0x7578L), (VECTOR(int16_t, 2))((-2L), 0x7578L), (-2L), 0x7578L, (-2L), 0x7578L);
    uint64_t l_1134 = 18446744073709551615UL;
    VECTOR(int8_t, 4) l_1139 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-5L)), (-5L));
    uint8_t l_1142 = 255UL;
    int8_t l_1143 = 0x55L;
    int8_t *l_1144 = (void*)0;
    int i, j;
    for (p_1146->g_7 = 0; (p_1146->g_7 != (-19)); --p_1146->g_7)
    { /* block id: 7 */
        int32_t l_17 = 0x1479B69BL;
        uint8_t *l_82 = &p_1146->g_83[3][3][2];
        int32_t **l_918 = &p_1146->g_439[3][2];
        int32_t ***l_963[1][3][4];
        uint32_t **l_983 = (void*)0;
        VECTOR(uint8_t, 4) l_988 = (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 0UL), 0UL);
        int16_t l_991 = 0x27D2L;
        int64_t l_1009 = 0x6CBDEA16A1062439L;
        uint16_t l_1014 = 0x333FL;
        uint16_t l_1073[1][6][6] = {{{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL},{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL},{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL},{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL},{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL},{0xB1D7L,0x07E2L,0x07E2L,0xB1D7L,0x0AB5L,1UL}}};
        uint32_t l_1075 = 0xE1096834L;
        uint32_t l_1107[1];
        uint32_t l_1114 = 0x97556155L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 4; k++)
                    l_963[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 1; i++)
            l_1107[i] = 4294967295UL;
        for (p_1146->g_10 = 0; (p_1146->g_10 == (-7)); p_1146->g_10 = safe_sub_func_int8_t_s_s(p_1146->g_10, 7))
        { /* block id: 10 */
            int32_t *l_13 = (void*)0;
            int32_t *l_14 = &p_1146->g_15[0];
            int32_t *l_16 = &p_1146->g_15[0];
            int32_t *l_18 = &p_1146->g_15[0];
            int32_t *l_19 = &p_1146->g_15[0];
            int32_t *l_20 = (void*)0;
            int32_t *l_21[1][10][5] = {{{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]}}};
            int i, j, k;
            l_22--;
        }
    }
    l_1013 = l_280;
    atomic_xor(&p_1146->l_atomic_reduction[0], ((&l_280 == (void*)0) >= (safe_rshift_func_uint8_t_u_s(l_1025.y, 6))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1146->v_collective += p_1146->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_980 = (!(0x59L ^ ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(p_1146->g_1119.s7136))))).y, (l_1120 != ((*l_1121) = l_1120)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_1125.s4603167321055636)).s7, l_1126)), 0x3BL, (p_1146->g_429.w &= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((**p_1146->g_760), ((((((VECTOR(int32_t, 8))(0x720D42FAL, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(0x0AF460B2L, (((**l_974) = 0x6053B412808A7B73L) , (l_1134 ^= (0x3567L != ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1133.s3513e8c2)).s30)).lo))), 1L, 1L)).odd, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, (-1L), 0x20BC7938L, (-8L))).lo)).yyxxxyxy, ((VECTOR(int32_t, 4))(p_1146->g_1135.zzzy)).wwxxyxzz))).s27))), ((VECTOR(int32_t, 4))(p_1146->g_1136.wxwy)), (-1L))).s1 ^ (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(l_1139.zzyzzzxx)).s37, (int8_t)(safe_div_func_uint64_t_u_u(0xDF0E243CB0219AB1L, 1UL)), (int8_t)l_1142))), ((VECTOR(int8_t, 2))((-5L)))))).even, 252UL))) < p_1146->g_979) > p_1146->g_313) <= l_1143))) || l_22), 8)), l_1133.s2)) && 4UL)), (**p_1146->g_760), 4L, (*p_1146->g_761), ((VECTOR(int8_t, 4))(0x16L)), l_1126, 0x26L, (-1L), (*p_1146->g_761), (-1L), 1L)).sf1af, ((VECTOR(int8_t, 4))(0L))))).hi, ((VECTOR(int8_t, 2))(1L))))), ((VECTOR(int8_t, 2))(0x4AL)), 0x20L)).s2714014566327316)).se));
    return p_1146->g_331[1].f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_931 p_1146->g_947 p_1146->g_951 p_1146->g_303 p_1146->g_304 p_1146->g_682
 * writes: p_1146->g_931 p_1146->g_951 p_1146->g_331.f2 p_1146->g_15 p_1146->g_304
 */
int32_t ** func_25(int32_t ** p_26, struct S2 * p_1146)
{ /* block id: 423 */
    int32_t *l_921 = (void*)0;
    int32_t *l_922 = &p_1146->g_304;
    int32_t *l_923 = &p_1146->g_15[0];
    int32_t *l_924 = &p_1146->g_15[0];
    int32_t *l_925 = &p_1146->g_15[0];
    int32_t *l_926 = (void*)0;
    int32_t *l_927 = &p_1146->g_15[0];
    int32_t *l_928 = (void*)0;
    int32_t *l_929 = &p_1146->g_331[1].f2;
    int32_t *l_930[4][8] = {{(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_108,(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_15[0]},{(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_108,(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_15[0]},{(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_108,(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_15[0]},{(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_108,(void*)0,&p_1146->g_7,(void*)0,&p_1146->g_15[0]}};
    int32_t l_944 = 0x6B6C7DAEL;
    int64_t **l_948 = (void*)0;
    int64_t *l_950 = (void*)0;
    int64_t **l_949 = &l_950;
    int64_t ***l_953 = (void*)0;
    int64_t ***l_954[2][8][7] = {{{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948}},{{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948},{(void*)0,&p_1146->g_951[0],&l_948,&l_949,&p_1146->g_951[0],&l_949,&l_948}}};
    int8_t *l_955 = (void*)0;
    int8_t *l_956 = (void*)0;
    int32_t l_957 = 0x2ED7E5D6L;
    int32_t l_958 = 0L;
    uint8_t l_959 = 0UL;
    int32_t **l_962 = &l_930[3][6];
    int i, j, k;
    ++p_1146->g_931;
    (*l_922) = ((safe_mul_func_int8_t_s_s(((*l_924) = ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((l_944 <= (safe_lshift_func_int16_t_s_u((((VECTOR(uint8_t, 4))(p_1146->g_947.zxwx)).z < ((((*l_949) = &p_1146->g_323[4][7]) != &p_1146->g_323[8][0]) < 0x5A96L)), (l_949 != (p_1146->g_951[3] = p_1146->g_951[2]))))), (((*l_929) = (-1L)) >= (*p_1146->g_303)))) && ((void*)0 == l_955)), p_1146->g_682.z)), (-1L))), (-5L))) > 0x684DL)), 246UL)) || 0x3AD5BC54E75190F2L);
    l_959--;
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_7
 * writes: p_1146->g_919 p_1146->g_439 p_1146->g_10
 */
int32_t ** func_27(int32_t * p_28, int32_t * p_29, uint32_t  p_30, int32_t ** p_31, struct S2 * p_1146)
{ /* block id: 418 */
    int32_t *l_920 = &p_1146->g_7;
    p_1146->g_919[3][7] = &p_1146->g_161;
    (*p_31) = l_920;
    (*p_29) = (*l_920);
    return &p_1146->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_304 p_1146->g_331 p_1146->g_384 p_1146->g_156 p_1146->g_491 p_1146->g_148 p_1146->g_161 p_1146->g_7 p_1146->g_45 p_1146->g_15 p_1146->g_10 p_1146->g_100 p_1146->g_269 p_1146->g_111 p_1146->g_112 p_1146->g_44 p_1146->g_5 p_1146->g_274 p_1146->g_279 p_1146->g_323 p_1146->g_107 p_1146->g_493 p_1146->g_83 p_1146->g_420 p_1146->g_108 p_1146->g_516 p_1146->g_530 p_1146->g_543 p_1146->g_383 p_1146->g_486 p_1146->l_comm_values p_1146->g_548 p_1146->g_429 p_1146->g_398 p_1146->g_597 p_1146->g_313 p_1146->g_605 p_1146->g_610 p_1146->g_611 p_1146->g_619 p_1146->g_620 p_1146->g_624 p_1146->g_303 p_1146->g_439 p_1146->g_703 p_1146->g_709 p_1146->g_713 p_1146->g_726 p_1146->g_728 p_1146->g_740 p_1146->g_760 p_1146->g_669 p_1146->g_817 p_1146->g_780 p_1146->g_846 p_1146->g_847 p_1146->g_860 p_1146->g_879 p_1146->g_379.f0 p_1146->g_761 p_1146->g_896 p_1146->g_909 p_1146->g_comm_values p_1146->g_913
 * writes: p_1146->g_415 p_1146->g_304 p_1146->g_486 p_1146->g_156 p_1146->g_148 p_1146->g_108 p_1146->g_45 p_1146->g_106 p_1146->g_279.f2 p_1146->g_15 p_1146->g_100 p_1146->g_331.f1 p_1146->g_493 p_1146->g_398 p_1146->g_429 p_1146->g_605 p_1146->g_383 p_1146->g_611 p_1146->g_656 p_1146->g_279 p_1146->g_728 p_1146->g_83 p_1146->g_760 p_1146->g_323 p_1146->g_801 p_1146->g_543 p_1146->g_624 p_1146->g_780 p_1146->g_913 p_1146->g_914
 */
int64_t  func_32(int32_t ** p_33, uint32_t  p_34, int32_t * p_35, uint32_t  p_36, struct S2 * p_1146)
{ /* block id: 198 */
    int8_t l_441 = 0x0DL;
    int32_t l_453 = 0x3C972DA9L;
    int32_t l_454 = 0x7A42B928L;
    int32_t l_455 = 0x12E50F9DL;
    int32_t l_456 = (-5L);
    int32_t l_457 = 0L;
    VECTOR(int32_t, 8) l_458 = (VECTOR(int32_t, 8))(0x1D3CBDAFL, (VECTOR(int32_t, 4))(0x1D3CBDAFL, (VECTOR(int32_t, 2))(0x1D3CBDAFL, 0x6DC669B8L), 0x6DC669B8L), 0x6DC669B8L, 0x1D3CBDAFL, 0x6DC669B8L);
    uint8_t l_459 = 0xB2L;
    VECTOR(uint8_t, 8) l_462 = (VECTOR(uint8_t, 8))(0x1DL, (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 1UL), 1UL), 1UL, 0x1DL, 1UL);
    struct S1 *l_463 = &p_1146->g_279;
    uint32_t l_484 = 0x29325D82L;
    int64_t *l_489[10][2][2] = {{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}},{{&p_1146->g_323[7][6],(void*)0},{&p_1146->g_323[7][6],(void*)0}}};
    VECTOR(int64_t, 16) l_492 = (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x60C53522DC87E9DCL), 0x60C53522DC87E9DCL), 0x60C53522DC87E9DCL, (-10L), 0x60C53522DC87E9DCL, (VECTOR(int64_t, 2))((-10L), 0x60C53522DC87E9DCL), (VECTOR(int64_t, 2))((-10L), 0x60C53522DC87E9DCL), (-10L), 0x60C53522DC87E9DCL, (-10L), 0x60C53522DC87E9DCL);
    int32_t *l_497[10] = {&l_456,&p_1146->g_7,&l_456,&l_456,&p_1146->g_7,&l_456,&l_456,&p_1146->g_7,&l_456,&l_456};
    struct S0 *l_514 = (void*)0;
    VECTOR(int8_t, 2) l_539 = (VECTOR(int8_t, 2))(0x3DL, 0x01L);
    uint64_t l_549 = 0x0D08E9943FCA100BL;
    uint64_t l_550[9][4][6] = {{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}},{{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL},{0x6E671F9B45C5069FL,1UL,18446744073709551615UL,0x08C54D22B5CDED6DL,18446744073709551611UL,18446744073709551612UL}}};
    uint16_t l_556[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    VECTOR(int32_t, 4) l_618 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x14886563L), 0x14886563L);
    int8_t l_630[5][6] = {{0x37L,0x6DL,0x37L,0x37L,0x6DL,0x37L},{0x37L,0x6DL,0x37L,0x37L,0x6DL,0x37L},{0x37L,0x6DL,0x37L,0x37L,0x6DL,0x37L},{0x37L,0x6DL,0x37L,0x37L,0x6DL,0x37L},{0x37L,0x6DL,0x37L,0x37L,0x6DL,0x37L}};
    VECTOR(uint64_t, 16) l_670 = (VECTOR(uint64_t, 16))(0xBCA02E5223D95CD0L, (VECTOR(uint64_t, 4))(0xBCA02E5223D95CD0L, (VECTOR(uint64_t, 2))(0xBCA02E5223D95CD0L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xBCA02E5223D95CD0L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xBCA02E5223D95CD0L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xBCA02E5223D95CD0L, 18446744073709551615UL), 0xBCA02E5223D95CD0L, 18446744073709551615UL, 0xBCA02E5223D95CD0L, 18446744073709551615UL);
    VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))(0x04B9622DL, (VECTOR(int32_t, 4))(0x04B9622DL, (VECTOR(int32_t, 2))(0x04B9622DL, 0x0D94956AL), 0x0D94956AL), 0x0D94956AL, 0x04B9622DL, 0x0D94956AL);
    uint32_t l_697 = 0xACF7666DL;
    VECTOR(int32_t, 2) l_724 = (VECTOR(int32_t, 2))(2L, 0x505D6194L);
    struct S1 **l_751 = &p_1146->g_656;
    int16_t *l_774[5] = {&p_1146->g_398,&p_1146->g_398,&p_1146->g_398,&p_1146->g_398,&p_1146->g_398};
    uint32_t **l_875 = &p_1146->g_384;
    VECTOR(int32_t, 16) l_895 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
    VECTOR(int16_t, 16) l_908 = (VECTOR(int16_t, 16))(0x18B6L, (VECTOR(int16_t, 4))(0x18B6L, (VECTOR(int16_t, 2))(0x18B6L, (-1L)), (-1L)), (-1L), 0x18B6L, (-1L), (VECTOR(int16_t, 2))(0x18B6L, (-1L)), (VECTOR(int16_t, 2))(0x18B6L, (-1L)), 0x18B6L, (-1L), 0x18B6L, (-1L));
    uint32_t l_916 = 0xE8660616L;
    VECTOR(int32_t, 4) l_917 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
    int i, j, k;
    if (l_441)
    { /* block id: 199 */
        int32_t *l_442 = &p_1146->g_108;
        int32_t *l_443 = &p_1146->g_15[0];
        int32_t *l_444 = &p_1146->g_304;
        int32_t *l_445 = &p_1146->g_108;
        int32_t *l_446 = (void*)0;
        int32_t *l_447 = &p_1146->g_15[0];
        int32_t *l_448 = (void*)0;
        int32_t *l_449 = (void*)0;
        int32_t *l_450 = (void*)0;
        int32_t l_451 = 0x148FB7D6L;
        int32_t *l_452[10] = {&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]};
        uint8_t *l_464 = (void*)0;
        uint8_t *l_465[9] = {&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2],&p_1146->g_83[2][0][2]};
        struct S1 *l_469 = &p_1146->g_269;
        struct S1 **l_468 = &l_469;
        struct S1 **l_470 = (void*)0;
        struct S1 *l_471[7] = {&p_1146->g_279,&p_1146->g_279,&p_1146->g_279,&p_1146->g_279,&p_1146->g_279,&p_1146->g_279,&p_1146->g_279};
        struct S1 *l_472[6];
        int16_t *l_483[5];
        uint32_t *l_485 = &p_1146->g_486;
        int64_t **l_490 = &l_489[1][0][1];
        VECTOR(uint8_t, 2) l_506 = (VECTOR(uint8_t, 2))(246UL, 0xB9L);
        struct S0 *l_513 = (void*)0;
        struct S0 *l_515 = &p_1146->g_331[1];
        int64_t l_555 = 1L;
        int i;
        for (i = 0; i < 6; i++)
            l_472[i] = &p_1146->g_279;
        for (i = 0; i < 5; i++)
            l_483[i] = &p_1146->g_398;
        --l_459;
        (*l_444) &= ((((VECTOR(uint8_t, 4))(l_462.s4653)).w ^ (p_1146->g_415.sd = (l_463 == (p_34 , l_463)))) | (safe_sub_func_uint64_t_u_u(0UL, (((*l_468) = &p_1146->g_269) == (l_472[2] = (l_471[4] = l_463))))));
        if ((4294967292UL ^ ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((func_53((((*l_485) = (safe_sub_func_int16_t_s_s((l_457 = 0x512BL), (l_484 == 18446744073709551615UL)))) , (p_1146->g_331[1] , ((*p_1146->g_384) ^= (safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 16))((l_458.s7 &= (-9L)), 0x1F1AL, p_1146->g_331[1].f2, (((*l_490) = l_489[8][1][1]) == (void*)0), ((VECTOR(int16_t, 4))(0x18D7L)), l_462.s4, ((VECTOR(int16_t, 4))(0x3E84L)), 0x25E8L, 3L, 0x7677L)).s6 | 0xAF3CL), 3L))))), p_1146->g_491.y, l_462.s1, &p_1146->g_45, p_36, p_1146) , p_1146->g_331[1].f2), p_1146->g_100.y)), p_36)) , p_1146->g_323[2][1]) < (-6L)), 2)), 6)) , l_484)))
        { /* block id: 211 */
            int32_t **l_494 = &p_1146->g_45;
            int64_t *l_495 = (void*)0;
            int64_t *l_496 = &p_1146->g_279.f2;
            int32_t l_498 = 0x255F202AL;
            VECTOR(uint8_t, 8) l_505 = (VECTOR(uint8_t, 8))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 1UL), 1UL), 1UL, 0xFDL, 1UL);
            struct S0 *l_512 = (void*)0;
            struct S0 **l_511[2][7][4] = {{{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512}},{{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512},{&l_512,&l_512,&l_512,&l_512}}};
            int8_t l_517 = (-6L);
            VECTOR(int32_t, 16) l_518 = (VECTOR(int32_t, 16))(0x3436D7E2L, (VECTOR(int32_t, 4))(0x3436D7E2L, (VECTOR(int32_t, 2))(0x3436D7E2L, 0x49C4475FL), 0x49C4475FL), 0x49C4475FL, 0x3436D7E2L, 0x49C4475FL, (VECTOR(int32_t, 2))(0x3436D7E2L, 0x49C4475FL), (VECTOR(int32_t, 2))(0x3436D7E2L, 0x49C4475FL), 0x3436D7E2L, 0x49C4475FL, 0x3436D7E2L, 0x49C4475FL);
            uint16_t *l_523 = (void*)0;
            uint16_t *l_524 = (void*)0;
            uint16_t *l_525 = (void*)0;
            uint16_t *l_526 = (void*)0;
            uint16_t *l_527[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(int8_t, 2) l_540 = (VECTOR(int8_t, 2))(0x6CL, 0x09L);
            uint64_t *l_546 = &p_1146->g_331[1].f1;
            int16_t l_547 = 0x152AL;
            uint16_t l_551 = 0x6FBBL;
            int i, j, k;
            (*l_442) = ((+(((VECTOR(uint32_t, 8))((p_1146->g_107 >= (((0xB0L | (((0x8BB71AA7F24CEA0EL > 0UL) < ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_492.s5a71)).yxwwwxwywyywzxxw)).s741a, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(p_1146->g_493.s1923)).odd))).yyxyxxxxxyyxyyxy)).s75)).xxxy))).wyxwywwyywxwxwwx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))((((*p_1146->g_44) = func_61(l_494, l_494, p_36, (((*l_496) = 0L) | 0x139323C6EE131967L), &l_451, p_1146)) == l_497[9]), 0x6DFD065A8A1E2BD9L, 0x5D79DD3592A18736L, (-8L))).yywxxxyywxzyzyzy, ((VECTOR(int64_t, 16))((-1L))), ((VECTOR(int64_t, 16))(0x3520356C5E300A04L)))))))))), ((VECTOR(int64_t, 16))((-1L)))))).sa0cf)).wxywywyzzxzzxxxz)).s3 , p_1146->g_156) , 6UL)) != p_1146->g_83[1][2][3])) != p_34) != p_1146->g_493.sd)), ((VECTOR(uint32_t, 2))(0x562B43E6L)), 4294967287UL, 0xEC2C819CL, ((VECTOR(uint32_t, 2))(4294967289UL)), 7UL)).s6 == l_498)) , l_498);
            (*l_444) |= (safe_mul_func_uint16_t_u_u(p_1146->g_420.s0, (((((l_498 = (safe_lshift_func_uint8_t_u_s(0x84L, 3))) || 0L) < ((*l_447) = (safe_rshift_func_int8_t_s_s((p_1146->g_100.x <= 1L), 7)))) , p_1146->g_491.x) & ((+((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_505.s74553642)).s14)), 255UL, 0xCCL)).zzzwwxzw, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_506.yyyyxxxxyxyyyxxy)).sf9)).xxyyyxxy, (uint8_t)((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((VECTOR(int64_t, 8))(((((**l_468) , ((((l_513 = &p_1146->g_331[1]) != (l_515 = l_514)) >= (*l_442)) > 0x5A21D2B2L)) , p_1146->g_516) , p_1146->g_100.x), 1L, l_517, ((VECTOR(int64_t, 2))(0x135BFC79AF9B55FBL)), 1L, 0x43271216119A982FL, 1L)).s1 != p_36), p_1146->g_269.f1)), 1)) & 0xD7349BA2L)))), ((VECTOR(uint8_t, 8))(1UL))))).s3415054152627652)), ((VECTOR(uint8_t, 16))(0x5CL))))).s9) <= p_1146->g_279.f1))));
            (*l_447) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_518.s4feb)).hi, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((!((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((0L | (((VECTOR(int16_t, 4))(p_34, 1L, 8L, 0x38C7L)).y < ((FAKE_DIVERGE(p_1146->local_1_offset, get_local_id(1), 10) & p_34) <= ((VECTOR(int8_t, 4))(0x27L, (-4L), 0x78L, (-1L))).y))), ((*l_496) = (((p_1146->g_100.y = p_1146->g_331[1].f1) , (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(p_1146->g_530.s6275014323410304)).s2, (((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_1146->g_83[3][3][2] ^ (p_1146->g_493.s1 = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(0x3CL, 1L)).xyxyxyxxyxyyxxyx, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(l_539.xxxyyyyy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(l_540.yxxxyyyyyyyxxyxx)).s14d3, (int8_t)((((*l_546) = (((safe_add_func_int8_t_s_s((((VECTOR(int16_t, 2))(p_1146->g_543.s56)).even , (safe_sub_func_int8_t_s_s((((**p_1146->g_383) | (p_34 , 0x9CCB45F2L)) , p_1146->g_486), 0x57L))), p_1146->g_304)) , p_36) , GROUP_DIVERGE(2, 1))) ^ GROUP_DIVERGE(0, 1)) < p_1146->g_491.y), (int8_t)l_547))).lo, ((VECTOR(int8_t, 2))(0x6BL)), ((VECTOR(int8_t, 2))((-10L)))))).xyyxyyxy)).hi)).hi, ((VECTOR(int8_t, 2))(0x72L))))), 0x6DL, 7L)).hi)).xxxy)).wwyxwyxy, ((VECTOR(int8_t, 8))(0x61L))))).s0547343503210264))).s5 != 0L), 0x09L, ((VECTOR(int8_t, 2))(0x15L)), 0x67L, 0x17L, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x31L)), 0x17L, 0x6FL)).s9, p_1146->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1146->tid, 76))])))), p_1146->g_548)), p_1146->g_429.x)), 0x11B0DEF1L)) == 65535UL) , (*l_445))))) <= l_549)))), p_36)) && 0x60A2L)) , l_550[5][2][4]), p_34, 6L, 0x26099254L)).odd)).yxyyyyyxxyyxyxyx, ((VECTOR(int32_t, 16))((-3L)))))).sa7, ((VECTOR(int32_t, 2))(0L)))))))).yxyxyyxy)).s7;
            --l_551;
        }
        else
        { /* block id: 226 */
            uint32_t l_554 = 4294967295UL;
            return l_554;
        }
        --l_556[2];
    }
    else
    { /* block id: 230 */
        VECTOR(uint64_t, 2) l_559 = (VECTOR(uint64_t, 2))(0x82237F6DB7BD4BFCL, 0xB6D562344016E2ADL);
        int64_t *l_560 = &p_1146->g_323[8][2];
        struct S1 *l_576[7][9][2] = {{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}},{{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279},{&p_1146->g_279,&p_1146->g_279}}};
        int32_t l_602[1][1][6] = {{{0x4DA68DA3L,0x55037AA7L,0x4DA68DA3L,0x4DA68DA3L,0x55037AA7L,0x4DA68DA3L}}};
        VECTOR(int32_t, 2) l_623 = (VECTOR(int32_t, 2))(0x32B0128AL, 0x50475A97L);
        VECTOR(int32_t, 8) l_655 = (VECTOR(int32_t, 8))(0x465E764FL, (VECTOR(int32_t, 4))(0x465E764FL, (VECTOR(int32_t, 2))(0x465E764FL, (-1L)), (-1L)), (-1L), 0x465E764FL, (-1L));
        VECTOR(int8_t, 8) l_723 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x78L), 0x78L), 0x78L, 0x70L, 0x78L);
        VECTOR(int32_t, 2) l_725 = (VECTOR(int32_t, 2))((-1L), 0x39A66D08L);
        int16_t l_741 = (-5L);
        VECTOR(int32_t, 2) l_752 = (VECTOR(int32_t, 2))(0x6767E277L, 0x51F9CBA7L);
        VECTOR(int32_t, 8) l_754 = (VECTOR(int32_t, 8))(0x0C5DA6E1L, (VECTOR(int32_t, 4))(0x0C5DA6E1L, (VECTOR(int32_t, 2))(0x0C5DA6E1L, 0L), 0L), 0L, 0x0C5DA6E1L, 0L);
        int32_t *l_767 = &l_457;
        int i, j, k;
        if ((((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_559.yyyx)).xxyzxyyxxxywwzyw)).se665)).wxxxwwzx)).s65))).hi , ((void*)0 != l_560)))
        { /* block id: 231 */
            uint8_t l_563 = 253UL;
            VECTOR(uint16_t, 8) l_569 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL);
            struct S1 **l_577 = (void*)0;
            struct S1 **l_578 = &l_463;
            int16_t *l_579 = (void*)0;
            int16_t *l_580 = (void*)0;
            int16_t *l_581 = &p_1146->g_398;
            uint32_t *l_586 = &p_1146->g_486;
            int64_t *l_590 = &p_1146->g_323[3][1];
            uint32_t **l_608[5] = {&p_1146->g_384,&p_1146->g_384,&p_1146->g_384,&p_1146->g_384,&p_1146->g_384};
            VECTOR(int16_t, 8) l_621 = (VECTOR(int16_t, 8))(0x7099L, (VECTOR(int16_t, 4))(0x7099L, (VECTOR(int16_t, 2))(0x7099L, 0L), 0L), 0L, 0x7099L, 0L);
            VECTOR(uint16_t, 8) l_622 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
            uint32_t l_631 = 0x61E100B1L;
            VECTOR(uint32_t, 4) l_635 = (VECTOR(uint32_t, 4))(0x40F379FAL, (VECTOR(uint32_t, 2))(0x40F379FAL, 0x1FB2663AL), 0x1FB2663AL);
            VECTOR(int32_t, 8) l_680 = (VECTOR(int32_t, 8))(0x39ED8E9DL, (VECTOR(int32_t, 4))(0x39ED8E9DL, (VECTOR(int32_t, 2))(0x39ED8E9DL, 0L), 0L), 0L, 0x39ED8E9DL, 0L);
            int i;
            if (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(7L, (((safe_mod_func_uint8_t_u_u(p_34, 0x85L)) && l_563) > ((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(p_1146->g_83[3][6][7])), ((*l_581) ^= ((((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_569.s57)).hi, l_559.x)) == (((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u((p_1146->g_5 , (0UL && (safe_add_func_uint8_t_u_u((l_576[3][1][0] != ((*l_578) = &p_1146->g_279)), GROUP_DIVERGE(2, 1))))), l_559.y)))))) , p_36), 2UL, 0xC8DB98BEL, 1UL)).lo)).xxxx, ((VECTOR(uint32_t, 4))(0xC56DFE21L))))).x <= 0x446E0D3CL)) & p_1146->g_100.x) > p_34)))) != p_1146->g_279.f2)), 0L, p_1146->g_279.f2, 0x3A64L, 0x4D7EL, 0L, p_34, 0x5AFBL, l_559.y, 0L, 0L, 0x1A1AL, ((VECTOR(int16_t, 2))(0L)), 0x12F9L)), ((VECTOR(uint16_t, 16))(65534UL))))).s0)
            { /* block id: 234 */
                int64_t *l_589 = &p_1146->g_323[8][2];
                int8_t *l_598 = (void*)0;
                int8_t *l_599 = (void*)0;
                int8_t *l_600 = &l_441;
                int32_t l_601 = 0x73DED3B7L;
                uint16_t *l_604 = &l_556[2];
                volatile struct S0 *l_612 = &p_1146->g_611[2];
                if ((safe_mul_func_uint8_t_u_u((((l_586 == l_497[4]) ^ ((((*p_1146->g_384) = (l_589 != l_590)) > (FAKE_DIVERGE(p_1146->group_1_offset, get_group_id(1), 10) , (p_36 > (safe_lshift_func_int16_t_s_u(((65535UL < (((p_1146->g_279.f1 == (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((*l_600) = (p_1146->g_429.x = ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(0x23L, ((((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(1L, 0L, (-10L), 0x6B6514FBL)), ((VECTOR(int32_t, 4))(p_1146->g_597.sc22c))))).z , &l_563) == (void*)0), 0x6AL, 0x0CL)).wwwyxzwx, ((VECTOR(int8_t, 8))(0x2CL)), ((VECTOR(int8_t, 8))(0L))))).s3)) >= p_36), 2)), 12))) >= p_1146->g_313) , 3L)) != l_601), 3))))) != l_559.y)) ^ l_559.y), l_602[0][0][5])))
                { /* block id: 238 */
                    return p_1146->g_112.f2;
                }
                else
                { /* block id: 240 */
                    uint64_t *l_603 = &l_549;
                    uint16_t **l_606 = &p_1146->g_605;
                    int32_t l_607 = 0x1425BDB7L;
                    l_601 |= 0L;
                    l_607 ^= (l_601 = (p_1146->g_331[0] , (((*l_603) = ((VECTOR(uint64_t, 2))(0x4FB0C8675FD028CCL, 0x7E4E29A704AB6BEFL)).odd) >= (l_604 != ((*l_606) = p_1146->g_605)))));
                }
                (*p_1146->g_610) = l_608[0];
                (*l_612) = p_1146->g_611[2];
                for (l_457 = 0; (l_457 == (-14)); l_457--)
                { /* block id: 251 */
                    int32_t l_617 = 0x7E2E8EB7L;
                    int32_t l_632 = 0x026698D5L;
                    l_617 = (p_34 >= ((((safe_sub_func_int32_t_s_s(0x02D708A9L, ((l_617 || 0x74E1L) != ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_618.yyzw)).even, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_1146->g_619.s25)), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(2L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(p_1146->g_620.yy)).yxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x3FB7L, ((VECTOR(int16_t, 2))(l_621.s65)), 0x4483L)))).ywxyzzxy, (int16_t)(~p_34)))).odd, ((VECTOR(uint16_t, 16))(l_622.s5500053171224643)).s5433))).odd)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), 0x07FD8B0FL)), (-1L), 0x6B7E2409L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 0x7E89B253L)))).xyxxyxyyyyxxyxxx)).s3975, ((VECTOR(int32_t, 2))(0x7E909CECL, 1L)).xyxy))).wxyyxzzw)).even))).xzxwwxzwxwxwwxyx, ((VECTOR(int32_t, 16))(l_623.yyxxyyxxxyyyyyyy))))))).s37))).xxyyxxyy)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((void*)0 == &p_1146->g_516), (p_36 >= 0x3973EE7C38FEC265L), 0x139F34D5L, 1L)).yyyywwzw)).hi))).odd)), l_559.x, 0L, 0x5BB5DC80L, l_602[0][0][5], 0L, 0x499568D2L, l_621.s6, (-1L), 0x21EAA186L, p_1146->g_624, 1L, 0x5A058FE3L)).s21)).xyxx, (int32_t)0x01D0D9BFL, (int32_t)l_617))).odd, ((VECTOR(int32_t, 2))((-2L))))))))))).even))) != p_34) >= l_601) < l_617));
                    (*l_612) = p_1146->g_611[2];
                    for (l_454 = 0; (l_454 <= 16); l_454++)
                    { /* block id: 256 */
                        int64_t l_636 = 0x4423E05643EFF10AL;
                        l_632 = (safe_lshift_func_int8_t_s_s((((((*l_581) &= p_36) <= (safe_unary_minus_func_uint8_t_u(l_630[1][2]))) ^ ((l_623.y , l_631) , ((l_622.s1 ^ (l_601 <= (~((void*)0 != &l_604)))) & (l_617 == p_34)))) < p_34), 6));
                        (*p_1146->g_303) = 0x55969948L;
                        l_636 &= (safe_sub_func_uint32_t_u_u(l_601, ((VECTOR(uint32_t, 4))(l_635.zwyx)).z));
                        if (l_631)
                            continue;
                    }
                    if ((atomic_inc(&p_1146->l_atomic_input[32]) == 1))
                    { /* block id: 264 */
                        int8_t l_637[2];
                        VECTOR(int32_t, 8) l_638 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 8L), 8L), 8L, 9L, 8L);
                        uint16_t l_639 = 1UL;
                        int64_t l_640 = 0x20B7463CED6068CBL;
                        int32_t l_641 = 1L;
                        uint16_t l_642[2];
                        int32_t l_643 = 1L;
                        struct S1 l_644 = {-1L,0x8A3137A5L,0x1AE094F4BE6B7797L};/* VOLATILE GLOBAL l_644 */
                        VECTOR(uint64_t, 2) l_645 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x0F77A0A881B3E562L);
                        struct S0 l_646 = {0L,0UL,4L};/* VOLATILE GLOBAL l_646 */
                        struct S0 l_647 = {-1L,0UL,0x198647DEL};/* VOLATILE GLOBAL l_647 */
                        int i;
                        for (i = 0; i < 2; i++)
                            l_637[i] = 0x16L;
                        for (i = 0; i < 2; i++)
                            l_642[i] = 0x89ABL;
                        l_641 &= (l_637[0] , (l_640 = (l_639 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_638.s0062)).wxwxxwxxyyyyxzwx)).sa)));
                        l_643 = l_642[0];
                        l_647 = (l_644 , ((((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(l_645.yyxx)).xzyyyxzw))).s1 , 0x1BA0C4F0L) , l_646));
                        unsigned int result = 0;
                        int l_637_i0;
                        for (l_637_i0 = 0; l_637_i0 < 2; l_637_i0++) {
                            result += l_637[l_637_i0];
                        }
                        result += l_638.s7;
                        result += l_638.s6;
                        result += l_638.s5;
                        result += l_638.s4;
                        result += l_638.s3;
                        result += l_638.s2;
                        result += l_638.s1;
                        result += l_638.s0;
                        result += l_639;
                        result += l_640;
                        result += l_641;
                        int l_642_i0;
                        for (l_642_i0 = 0; l_642_i0 < 2; l_642_i0++) {
                            result += l_642[l_642_i0];
                        }
                        result += l_643;
                        result += l_644.f0;
                        result += l_644.f1;
                        result += l_644.f2;
                        result += l_645.y;
                        result += l_645.x;
                        result += l_646.f0;
                        result += l_646.f1;
                        result += l_646.f2;
                        result += l_647.f0;
                        result += l_647.f1;
                        result += l_647.f2;
                        atomic_add(&p_1146->l_special_values[32], result);
                    }
                    else
                    { /* block id: 270 */
                        (1 + 1);
                    }
                }
            }
            else
            { /* block id: 274 */
                int32_t l_672 = 0x0F9BE25DL;
                VECTOR(int32_t, 16) l_679 = (VECTOR(int32_t, 16))(0x7DD68AD1L, (VECTOR(int32_t, 4))(0x7DD68AD1L, (VECTOR(int32_t, 2))(0x7DD68AD1L, 0x3BA56C1BL), 0x3BA56C1BL), 0x3BA56C1BL, 0x7DD68AD1L, 0x3BA56C1BL, (VECTOR(int32_t, 2))(0x7DD68AD1L, 0x3BA56C1BL), (VECTOR(int32_t, 2))(0x7DD68AD1L, 0x3BA56C1BL), 0x7DD68AD1L, 0x3BA56C1BL, 0x7DD68AD1L, 0x3BA56C1BL);
                int32_t l_685 = (-9L);
                uint32_t l_694 = 0xCC1FD3D4L;
                VECTOR(int32_t, 2) l_701 = (VECTOR(int32_t, 2))(1L, 0x115D3B6BL);
                int32_t **l_702 = &p_1146->g_439[0][3];
                int i;
                for (l_441 = (-18); (l_441 >= 10); l_441++)
                { /* block id: 277 */
                    for (p_1146->g_108 = 0; (p_1146->g_108 == 8); ++p_1146->g_108)
                    { /* block id: 280 */
                        int16_t **l_652 = &l_581;
                        int16_t ***l_653 = &l_652;
                        int32_t l_654 = 0x30CB2C05L;
                        (*l_653) = l_652;
                        (*p_1146->g_303) = (l_654 , ((VECTOR(int32_t, 4))(l_655.s4651)).y);
                    }
                }
                p_1146->g_656 = l_463;
                l_623.x ^= 0x4F069029L;
                for (p_36 = (-15); (p_36 != 36); ++p_36)
                { /* block id: 289 */
                    uint64_t *l_671[6][7];
                    int32_t l_686 = 9L;
                    uint16_t *l_687 = (void*)0;
                    uint16_t *l_688 = &l_556[2];
                    int16_t *l_689 = (void*)0;
                    int16_t *l_690 = (void*)0;
                    int16_t *l_691 = (void*)0;
                    int16_t *l_692 = (void*)0;
                    int16_t *l_693[8][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    VECTOR(int32_t, 4) l_704 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x36901451L), 0x36901451L);
                    uint8_t l_706 = 2UL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_671[i][j] = (void*)0;
                    }
                    if (((safe_div_func_uint8_t_u_u(((((9UL && (((safe_unary_minus_func_int64_t_s(p_36)) & (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((((safe_unary_minus_func_uint8_t_u((GROUP_DIVERGE(1, 1) | (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(p_1146->g_669.ywyzywxx)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_670.s8abe4698484162de)).odd)).lo))).xxxxyxzw)).lo)).w , ((((((VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL)).hi || (l_672 = (FAKE_DIVERGE(p_1146->group_2_offset, get_group_id(2), 10) <= p_34))) != (safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1146->local_2_offset, get_local_id(2), 10), ((((l_686 = ((*l_581) = (((safe_rshift_func_int16_t_s_u(p_1146->g_597.s0, ((*l_688) = (((((0x46B9A14ADAD79EE5L ^ ((((p_34 > (((safe_add_func_int64_t_s_s((p_34 < (l_685 &= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_679.s2e708ca1)).hi)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 3L))))))).xxyyyyyx)).odd, ((VECTOR(int32_t, 16))(l_559.y, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_680.s0235022002135532)).s4f)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x352E8883L, 0x6C518004L)).yyyy)).ywxyyxxw, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_681.s16)).xxxy)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1146->g_682.xy)).yyxyxxxx)).s41, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(7UL, 0xB98EL)).xyyyyyxyyxxyyxyy)).s82d9, (uint16_t)(safe_lshift_func_uint8_t_u_s(247UL, p_36))))).yxwwxywwwwwyxzyw, ((VECTOR(uint16_t, 16))(65534UL))))).lo)).s77))), (-1L))).s17)).xyxy, (int32_t)0x718B594CL))).zwyzxyxw))).s3, 1L, 0x24A57C13L, ((VECTOR(int32_t, 8))(1L)), (-6L))).s8ba8))).zwzzzywy)).s0601732751575014)).sc , 2UL))), l_686)) < p_36) && 0x7937L)) , p_34) != 0x05E8601A8FBDEC06L) <= p_34)) != FAKE_DIVERGE(p_1146->group_1_offset, get_group_id(1), 10)) <= 0x5297L) > (-1L)) < l_686)))) ^ l_621.s6) == l_679.s8))) , 0x24C06AFF0A73116AL) >= 0x781A97BDB55DAFC1L) == 6UL)))) , GROUP_DIVERGE(1, 1)) > l_569.s2))))) , l_694) >= p_34) , p_1146->g_279.f1), FAKE_DIVERGE(p_1146->global_0_offset, get_global_id(0), 10))), p_34)), 1UL, 7UL, 0xB1L)).wzywzyyx, ((VECTOR(uint8_t, 8))(0x46L))))).s15)).hi, ((VECTOR(uint8_t, 2))(0UL)), 255UL)).y, 0))) >= 255UL)) >= p_1146->g_269.f2) > 0x02E0L) ^ p_1146->g_429.z), p_36)) <= 0x1B1A094EDFC30F80L))
                    { /* block id: 295 */
                        uint8_t *l_695 = (void*)0;
                        uint8_t *l_696 = &l_563;
                        int32_t l_705 = 0x480C003FL;
                        (*p_1146->g_44) = func_61(&p_1146->g_439[4][1], l_702, l_655.s0, p_1146->g_493.s7, (*p_1146->g_44), p_1146);
                        (**l_578) = p_1146->g_703;
                        l_680.s3 &= ((VECTOR(int32_t, 4))(l_704.wwzw)).w;
                        ++l_706;
                    }
                    else
                    { /* block id: 302 */
                        if (l_686)
                            break;
                    }
                    l_704.w ^= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1146->g_709.s9dd10e935dfd5c7d)).sfd)).xxyxyxyxyxyyxxxy)).sf5, (int32_t)l_679.s1))).odd;
                }
            }
        }
        else
        { /* block id: 308 */
            int32_t *l_717[2][8] = {{&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4]},{&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4],&l_602[0][0][4]}};
            int32_t **l_716 = &l_717[0][4];
            int32_t *l_719[2][10] = {{(void*)0,&l_602[0][0][5],(void*)0,&p_1146->g_396,&l_602[0][0][5],&p_1146->g_396,(void*)0,&l_602[0][0][5],(void*)0,(void*)0},{(void*)0,&l_602[0][0][5],(void*)0,&p_1146->g_396,&l_602[0][0][5],&p_1146->g_396,(void*)0,&l_602[0][0][5],(void*)0,(void*)0}};
            int32_t **l_718 = &l_719[1][1];
            VECTOR(int8_t, 16) l_722 = (VECTOR(int8_t, 16))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 6L), 6L), 6L, 0x73L, 6L, (VECTOR(int8_t, 2))(0x73L, 6L), (VECTOR(int8_t, 2))(0x73L, 6L), 0x73L, 6L, 0x73L, 6L);
            int32_t ***l_730 = &p_1146->g_728;
            uint8_t *l_735[6][10][3] = {{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}},{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}},{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}},{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}},{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}},{{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0},{&p_1146->g_83[3][3][2],&p_1146->g_83[3][3][2],(void*)0}}};
            VECTOR(uint32_t, 4) l_742 = (VECTOR(uint32_t, 4))(0x148E0992L, (VECTOR(uint32_t, 2))(0x148E0992L, 1UL), 1UL);
            int32_t l_743 = 0x62AFEC72L;
            int16_t *l_773 = &l_741;
            uint16_t l_786 = 0xBC07L;
            int i, j, k;
            for (p_1146->g_156 = 0; (p_1146->g_156 < 58); p_1146->g_156++)
            { /* block id: 311 */
                VECTOR(int32_t, 4) l_712 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x12FA4121L), 0x12FA4121L);
                int i;
                l_655.s4 ^= ((VECTOR(int32_t, 8))(l_712.xyxzzzyw)).s6;
                l_623.x |= ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(p_1146->g_713.s0622236407367360)).s0022))).z;
            }
            (*p_1146->g_44) = func_61(&p_1146->g_439[2][0], &p_1146->g_439[0][3], (safe_rshift_func_uint16_t_u_u((((*l_716) = (void*)0) == ((*l_718) = p_35)), ((safe_div_func_int8_t_s_s((!(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(l_722.s18)).yyyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_723.s6051633442642320)).odd)).hi))).y ^ ((((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x06CD3288L, 0x242DB026L)).yyxyyyxxxyyyyyxy, ((VECTOR(int32_t, 2))(l_724.yy)).yyxxyxxxyyyxyyxy, ((VECTOR(int32_t, 8))(l_725.xyxxxyxy)).s2123056411026645))).s3 <= (p_1146->g_726 != ((*l_730) = p_1146->g_728))) != (safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((p_1146->g_83[3][5][6]++) , (p_34 <= ((p_36 <= (+(((safe_add_func_uint64_t_u_u(1UL, p_1146->g_100.x)) , p_1146->g_740.s2) < p_36))) && p_1146->g_740.s3))), 0x12516F48FBFE42E7L)) , l_741), p_1146->g_156))))), l_723.s2)) | 18446744073709551610UL))), p_1146->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1146->tid, 76))], (*p_33), p_1146);
            l_743 ^= (((VECTOR(uint32_t, 4))(l_742.wyyx)).w != p_36);
            for (l_549 = 0; (l_549 < 29); l_549 = safe_add_func_uint16_t_u_u(l_549, 8))
            { /* block id: 323 */
                uint16_t l_748 = 65534UL;
                struct S1 **l_750[9];
                struct S1 ***l_749[10][2][10] = {{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}},{{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0},{&l_750[1],&l_750[2],&l_750[2],(void*)0,&l_750[4],(void*)0,&l_750[3],&l_750[6],&l_750[3],(void*)0}}};
                int64_t *l_758[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t l_765[2][4] = {{0x7AL,0x7AL,0x7AL,0x7AL},{0x7AL,0x7AL,0x7AL,0x7AL}};
                int32_t l_785 = 0L;
                int32_t l_788 = (-1L);
                int32_t l_790 = 0x47D0A682L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_750[i] = &l_576[1][8][1];
                if ((((**p_1146->g_383) = ((safe_rshift_func_int16_t_s_s(l_748, ((l_751 = &p_1146->g_656) == &p_1146->g_111))) || (0x2EL || p_36))) == ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_752.yxxxyxxxyyxyyxxy)).even, ((VECTOR(int32_t, 8))(p_1146->g_753.yxxyxxxx))))).lo)).wzwyzxzywxwxzzxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))((-1L), 0L)).xxyyyyyxyxxxxxyx, ((VECTOR(int32_t, 2))(l_754.s44)).xxyxyyyxxxyyxxxy))).s6b, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(p_1146->g_755.s32)).xxxxyxyy, (int32_t)(l_722.s6 <= ((!(l_655.s2 > ((p_36 | ((p_1146->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1146->tid, 76))] = (safe_mul_func_int16_t_s_s((l_754.s0 ^ l_741), GROUP_DIVERGE(0, 1)))) >= p_36)) > 0x3CL))) && l_742.x))))).s24))), 0x600EF360L, (-7L))).zwzwywywxwwwwxxz, ((VECTOR(int32_t, 16))((-1L)))))).s1))
                { /* block id: 327 */
                    uint64_t *l_759[10] = {&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313,&p_1146->g_313};
                    volatile int8_t * volatile **l_762 = &p_1146->g_760;
                    int i;
                    (*l_762) = (((void*)0 == l_759[0]) , p_1146->g_760);
                    return p_36;
                }
                else
                { /* block id: 330 */
                    int32_t l_766 = 0x2F7180A4L;
                    if ((p_36 & ((safe_add_func_uint8_t_u_u(l_742.x, 0x5FL)) && ((l_754.s2 = ((((*p_1146->g_303) , (l_765[1][0] ^= 0x6664FE95L)) == 0xDD4A26CFL) < ((-1L) < (0x574EL >= (((VECTOR(uint8_t, 2))(0x9BL, 0UL)).even >= p_34))))) > p_36))))
                    { /* block id: 333 */
                        if (l_766)
                            break;
                        (*p_1146->g_44) = l_767;
                    }
                    else
                    { /* block id: 336 */
                        VECTOR(int8_t, 4) l_777 = (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x55L), 0x55L);
                        uint16_t *l_778 = (void*)0;
                        uint16_t *l_779 = &l_556[2];
                        int32_t ***l_787 = &p_1146->g_728;
                        int32_t l_789 = (-3L);
                        int i;
                        l_790 = (safe_unary_minus_func_uint8_t_u(((p_34 < ((safe_div_func_int32_t_s_s(l_743, (safe_add_func_int16_t_s_s((l_773 == (((*l_560) &= (-8L)) , l_774[0])), p_36)))) & (4294967295UL < (l_789 ^= (((safe_sub_func_int16_t_s_s((l_788 &= ((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_777.wxwzwwxwxxxyywxx)))).s7 & ((((*l_779) = GROUP_DIVERGE(1, 1)) ^ (((((*l_773) |= ((VECTOR(int16_t, 8))(p_1146->g_780.sd646fe03)).s7) == p_1146->g_611[2].f0) , ((*l_767) ^= (safe_lshift_func_uint16_t_u_u((l_785 &= ((safe_sub_func_int16_t_s_s(p_1146->g_669.y, l_742.w)) >= p_34)), 12)))) == l_786)) , (*l_767))) , (-1L)) , &p_1146->g_726) == l_787)), (-1L))) , p_34) || 1L))))) && p_1146->g_624)));
                    }
                    for (l_455 = (-19); (l_455 < 10); l_455++)
                    { /* block id: 348 */
                        if ((*p_1146->g_303))
                            break;
                        (*l_767) &= (p_1146->g_420.s0 != 255UL);
                        if (p_34)
                            break;
                    }
                }
                if (l_786)
                    continue;
            }
        }
    }
    for (p_1146->g_156 = 0; (p_1146->g_156 < 15); p_1146->g_156 = safe_add_func_int16_t_s_s(p_1146->g_156, 1))
    { /* block id: 360 */
        int32_t l_799[1];
        uint32_t l_821 = 0xAE14E2D2L;
        int32_t l_835 = 0x4A3EEB8CL;
        int16_t l_876 = 0x5116L;
        int32_t **l_894[1][3];
        uint8_t *l_899 = (void*)0;
        uint8_t *l_900[5][8][3] = {{{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459}},{{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459}},{{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459}},{{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459}},{{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459},{&p_1146->g_83[2][0][8],&p_1146->g_83[1][1][4],&l_459}}};
        uint32_t *l_903[2][3][6] = {{{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484}},{{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484}}};
        int64_t l_912 = 0x38ECAE0D07499BB7L;
        VECTOR(int16_t, 16) l_915 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_799[i] = 1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_894[i][j] = &l_497[9];
        }
        for (p_1146->g_304 = 0; (p_1146->g_304 == 3); p_1146->g_304++)
        { /* block id: 363 */
            int64_t *l_797 = &p_1146->g_323[6][5];
            int64_t **l_798 = &l_489[7][0][0];
            int32_t *l_800 = &p_1146->g_801;
            int32_t l_808 = 0x307C6C36L;
            uint32_t l_820 = 4294967292UL;
            uint64_t *l_822 = &p_1146->g_148;
            int64_t *l_823 = &p_1146->g_624;
            l_799[0] |= (((*l_798) = l_797) != (void*)0);
            if ((((*l_800) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4A446F08L, 0x47928EC8L)).yxxx)))).x) , (((((safe_div_func_uint8_t_u_u(p_34, p_1146->g_611[2].f2)) > ((safe_sub_func_uint64_t_u_u(18446744073709551606UL, ((*l_823) ^= ((safe_div_func_uint8_t_u_u((0L || (p_1146->g_543.s1 &= (((*l_797) ^= (l_808 <= ((((*l_822) = ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(0x10L, ((safe_lshift_func_uint16_t_u_u(p_1146->g_817[2][1], 2)) | l_808))) == ((((l_821 |= (safe_sub_func_int8_t_s_s((p_36 > l_799[0]), l_820))) < p_36) < 0x40L) >= p_36)), l_820)), 1UL)) , GROUP_DIVERGE(2, 1))) > p_1146->g_279.f2) ^ p_34))) , p_36))), p_1146->g_83[3][3][2])) == p_36)))) || p_1146->g_780.s0)) < l_799[0]) || p_34) | 0x2E6FCB9BL)))
            { /* block id: 372 */
                struct S1 ***l_830 = (void*)0;
                int32_t l_834[1][9][4] = {{{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L},{(-4L),0x034CC264L,(-1L),0x034CC264L}}};
                int i, j, k;
                l_835 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((p_1146->g_83[3][3][2] = p_36), 7)), 0x3AL)) >= (((l_834[0][2][3] = ((!p_34) >= (l_808 |= (+((+(safe_div_func_uint8_t_u_u((((void*)0 == l_830) , (safe_mul_func_int16_t_s_s(0x7984L, l_799[0]))), ((VECTOR(uint8_t, 8))(p_1146->g_833.s44253404)).s7))) , 1L))))) != 0xD3AE8368L) | p_34));
            }
            else
            { /* block id: 377 */
                VECTOR(int64_t, 2) l_874 = (VECTOR(int64_t, 2))(0x1C81A88C71E220ABL, 0x20F3618BA2352329L);
                uint8_t l_878[8][7];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_878[i][j] = 0xF0L;
                }
                for (l_459 = 20; (l_459 <= 46); l_459 = safe_add_func_uint16_t_u_u(l_459, 2))
                { /* block id: 380 */
                    uint16_t l_840 = 0xBF0EL;
                    uint16_t *l_845[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1146->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(p_36, ((p_1146->g_493.se >= l_840) , (safe_mul_func_uint8_t_u_u(((l_808 = (l_840 > p_34)) & ((p_36 , (~4294967288UL)) , (p_1146->g_331[1] , ((+((p_1146->g_846 , 9UL) == (-2L))) == 5UL)))), l_820))))), 10))][(safe_mod_func_uint32_t_u_u(p_1146->tid, 76))]));
                }
                l_835 ^= ((void*)0 == p_1146->g_847[2][3][2]);
                (*p_1146->g_44) = (void*)0;
                for (p_1146->g_279.f2 = 19; (p_1146->g_279.f2 != 15); p_1146->g_279.f2 = safe_sub_func_uint8_t_u_u(p_1146->g_279.f2, 1))
                { /* block id: 390 */
                    int32_t l_856 = 0x3C4D68ABL;
                    int16_t **l_857 = &l_774[0];
                    uint8_t *l_890 = (void*)0;
                    uint8_t *l_891 = (void*)0;
                    int8_t *l_892 = (void*)0;
                    int8_t *l_893 = &l_630[3][0];
                    for (p_34 = 0; (p_34 >= 33); p_34 = safe_add_func_uint8_t_u_u(p_34, 9))
                    { /* block id: 393 */
                        uint32_t ***l_861 = &p_1146->g_383;
                        int32_t l_877 = 0x4FC2D3EEL;
                        l_878[5][0] = (safe_mod_func_int32_t_s_s((l_856 &= p_36), (~(((l_857 == ((safe_rshift_func_uint8_t_u_s(((((*l_861) = p_1146->g_860) == ((safe_mul_func_int16_t_s_s((p_36 >= (safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(p_1146->g_331[1].f1, (~(safe_div_func_uint64_t_u_u(((((VECTOR(int64_t, 4))(l_874.yyxx)).x , (((p_36 >= 0x32CCL) <= 1L) == p_34)) != p_36), GROUP_DIVERGE(1, 1)))))), p_1146->g_304)), 65535UL)) == l_874.y), 4L))), p_36)) , l_875)) < (-3L)), 2)) , &p_1146->g_848)) , l_876) , l_877))));
                    }
                    (*p_33) = func_61(&p_1146->g_439[0][3], &p_1146->g_45, (~((p_1146->g_879 , (((safe_sub_func_int16_t_s_s((p_1146->g_780.se = (p_1146->g_161 , ((l_876 , (p_34 != (safe_add_func_uint32_t_u_u(l_808, (safe_add_func_int64_t_s_s(((*l_823) ^= ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(1L, 0x47FCL)).lo, (safe_mul_func_int8_t_s_s(7L, ((*l_893) = (((((p_1146->g_83[3][3][2] = p_1146->g_379.f0) || p_36) || 1UL) || GROUP_DIVERGE(0, 1)) , p_34)))))) != 0L)), p_34)))))) , 9L))), 0UL)) , p_36) || 0x78L)) >= p_34)), p_36, (*p_1146->g_44), p_1146);
                }
            }
            return p_1146->g_620.y;
        }
        (*p_33) = func_61(&l_497[9], l_894[0][0], (*p_1146->g_761), p_1146->g_331[1].f2, ((*p_33) = (*p_33)), p_1146);
        l_916 &= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_895.s016c522729e71114)))).s75, ((VECTOR(int32_t, 2))(p_1146->g_896.xy))))), (safe_lshift_func_uint16_t_u_s(((((~(p_1146->g_914[4][5][4] = (p_1146->g_913 |= (((p_1146->g_415.s6 = 1UL) & (p_34 , (p_1146->g_83[3][3][2]++))) | (((p_1146->g_112.f2 ^ ((((p_36 |= 0x2C7EF89AL) < (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_908.sb3)), 0x0328L, (-2L)))))).hi)).lo ^ (((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(p_1146->g_909.s35)).yxxx, (int8_t)(((&p_35 == l_894[0][0]) && (safe_sub_func_uint64_t_u_u(((void*)0 == &p_1146->g_486), (p_34 && 0x3709545EL)))) == (**p_1146->g_383))))).z || 1L)), p_1146->g_331[1].f2)), l_912))) <= 1UL) & 0xF8A4L)) , p_1146->g_comm_values[p_1146->tid]) && 0x32D792B36B53E109L))))) , p_34) == 1L) & 1UL), 3)), ((VECTOR(int32_t, 4))(0x11E95D2FL)), 0x30FFB3A3L)).s64)).yyxx, ((VECTOR(int32_t, 4))((-7L)))))).xxwwxyww)).s5, ((VECTOR(int32_t, 2))(0x16FE3E2EL)), l_915.s5, ((VECTOR(int32_t, 8))(0L)), (*p_1146->g_303), ((VECTOR(int32_t, 2))((-2L))), 0x13B87E11L)).sfa, ((VECTOR(int32_t, 2))(0x1FAD15B5L)), ((VECTOR(int32_t, 2))(0x5FCDE914L))))).yyyy)).zwzwwyywzyxxzzzw)))), ((VECTOR(int32_t, 16))((-9L)))))).s0;
        (*p_1146->g_303) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_917.xwywwzzxzwywxwxx)).s7e41, (int32_t)(p_34 || 9L)))), 0x3266172AL, 0x2AD988DBL, 0x08F940C6L, 0x1706AC54L)).s7;
    }
    return p_1146->g_703.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_83 p_1146->g_279.f0 p_1146->g_45 p_1146->g_362 p_1146->g_comm_values p_1146->g_313 p_1146->g_15 p_1146->g_331.f2 p_1146->g_303 p_1146->g_304 p_1146->g_379 p_1146->g_383 p_1146->g_323 p_1146->g_44 p_1146->g_279.f1 p_1146->g_403 p_1146->l_comm_values p_1146->g_415 p_1146->g_420 p_1146->g_429 p_1146->g_384 p_1146->g_156 p_1146->g_10
 * writes: p_1146->g_269.f2 p_1146->g_331.f2 p_1146->g_83 p_1146->g_379 p_1146->g_383 p_1146->g_396 p_1146->g_398 p_1146->g_279.f1 p_1146->g_45 p_1146->g_156 p_1146->g_304
 */
int32_t ** func_37(uint8_t  p_38, int64_t  p_39, int16_t  p_40, struct S2 * p_1146)
{ /* block id: 160 */
    int64_t l_356 = 0x4DC28CC5898F537BL;
    int64_t *l_357 = &p_1146->g_269.f2;
    int32_t ***l_372 = (void*)0;
    uint32_t **l_381 = (void*)0;
    int32_t **l_399 = &p_1146->g_45;
    VECTOR(int8_t, 16) l_402 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int8_t, 2))(1L, (-8L)), (VECTOR(int8_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L));
    uint32_t l_414 = 0x78EB271DL;
    uint8_t *l_416 = &p_1146->g_83[3][3][2];
    uint8_t *l_417[10][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(int8_t, 16) l_427 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int8_t, 4) l_428 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5CL), 0x5CL);
    VECTOR(int8_t, 8) l_430 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    VECTOR(int8_t, 8) l_431 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x72L), 0x72L), 0x72L, 4L, 0x72L);
    VECTOR(int8_t, 4) l_432 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
    int i, j, k;
    if (((safe_lshift_func_int16_t_s_u((0L || 0x3CL), (p_1146->g_83[3][3][2] && ((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((*l_357) = l_356), p_1146->g_279.f0)) != 0L), (((*p_1146->g_45) = p_38) || (p_39 , ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_1146->g_362.xyxy)).w, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((~p_1146->g_comm_values[p_1146->tid]), p_1146->g_313)), p_39)))), 0x30L)) >= p_40))))), p_1146->g_15[0])), l_356)) == 0L)))) <= 65533UL))
    { /* block id: 163 */
        uint16_t l_367 = 0x7371L;
        int32_t ***l_371[8];
        int32_t ****l_370 = &l_371[3];
        uint8_t *l_375 = (void*)0;
        uint8_t *l_376 = &p_1146->g_83[1][1][8];
        volatile struct S0 *l_380 = &p_1146->g_379;
        uint32_t ***l_382 = &l_381;
        uint32_t ***l_385 = (void*)0;
        uint32_t ***l_386 = &p_1146->g_383;
        int32_t *l_395 = &p_1146->g_396;
        int16_t *l_397 = &p_1146->g_398;
        int i;
        for (i = 0; i < 8; i++)
            l_371[i] = &p_1146->g_44;
        (*p_1146->g_45) |= l_367;
        (*l_380) = ((safe_add_func_int32_t_s_s((FAKE_DIVERGE(p_1146->group_0_offset, get_group_id(0), 10) == (*p_1146->g_303)), (((*l_370) = &p_1146->g_44) != l_372))) , ((safe_lshift_func_int8_t_s_u(8L, (++(*l_376)))) , p_1146->g_379));
        (****l_370) &= (((((*l_382) = l_381) == ((*l_386) = p_1146->g_383)) && ((safe_sub_func_int16_t_s_s((0x21D1B10EL <= (!((!((VECTOR(uint16_t, 2))(65535UL, 65535UL)).hi) <= ((*l_397) = ((((*l_395) = (p_39 , (((!0UL) == ((*l_357) = ((safe_rshift_func_uint8_t_u_u(((&p_39 != ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_39, ((VECTOR(int64_t, 2))(0x4EECD880B42A95AFL, 0L)), p_39, ((VECTOR(int64_t, 2))((-1L), 1L)), (-1L), 0x0616CA4F2E78720EL)).odd)).xxyyzywy, ((VECTOR(int64_t, 4))(0x577B6DBF4DE0FEB4L, ((VECTOR(int64_t, 2))(0L, 9L)), 7L)).yzxyywwy))).s6 , (void*)0) == (void*)0) && p_38), 7)) & p_39), p_1146->g_379.f2)) , &p_39)) >= p_38), p_1146->g_323[0][8])) > p_40))) != 0x0AA1BBB7L))) , p_38) >= p_38))))), GROUP_DIVERGE(0, 1))) == p_40)) , 0x73653151L);
        (*l_382) = (*l_386);
    }
    else
    { /* block id: 175 */
        (**p_1146->g_44) = 0x089C9659L;
        return l_399;
    }
    for (p_1146->g_279.f1 = 0; (p_1146->g_279.f1 >= 16); p_1146->g_279.f1 = safe_add_func_uint16_t_u_u(p_1146->g_279.f1, 6))
    { /* block id: 181 */
        (*l_399) = (*p_1146->g_44);
    }
    if (((((VECTOR(int8_t, 16))(l_402.sa694168bd10ad33c)).sd || ((VECTOR(int8_t, 4))(p_1146->g_403.s8376)).y) < ((safe_sub_func_uint64_t_u_u(p_1146->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1146->tid, 76))], ((0x2C4EL > (((VECTOR(int8_t, 2))(8L, 0L)).even && (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_38 = ((*l_416) = ((l_414 == (&p_1146->g_274 != &p_1146->g_274)) < ((VECTOR(uint8_t, 4))(0x80L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1146->g_415.sd5544e20458b270b)).s21)), 1UL)).x))), 7)), (safe_div_func_uint8_t_u_u((((l_381 == (void*)0) ^ ((**l_399) == ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(p_1146->g_420.s65)).yyyy, (int32_t)(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_427.s95)).xxxxyxxxyxyxxxxx)).sfb95, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(l_428.wyzw)).even, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(4L, 0x7EL)).yyxxyxyxxxxxyxyx)).s2b50, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(p_1146->g_429.yy)).xyxxxyyy, ((VECTOR(int8_t, 8))(l_430.s66016636))))).odd))))).zzyyxywyxzywywyy, ((VECTOR(int8_t, 4))(l_431.s6652)).wwwywwywzwywxzzx))).s7d))).yxyy, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(l_432.yxzz)).yywxzwwx, ((VECTOR(int8_t, 2))(0x5BL, (-6L))).xxxyyxxy))).s72, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((-1L), (-2L), (safe_div_func_int32_t_s_s((**p_1146->g_44), (**l_399))), 0x6AL, ((VECTOR(int8_t, 4))(0x7DL)), p_39, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))(0x04L)), 0L)).s626e)).hi)))).xxyxxyyx)).s77))).xyxx)))))).xzyyzwyyyxwwwxxy, ((VECTOR(int8_t, 16))(0x44L)), ((VECTOR(int8_t, 16))(0x21L))))).odd, ((VECTOR(int8_t, 8))(0x42L))))).s7, 0xE7L)), 11)), (**l_399))) ^ 65535UL) && (*p_1146->g_384))))).x)) & p_1146->g_323[7][1]), p_1146->g_10)))), 65535UL)))) >= 0UL))) ^ FAKE_DIVERGE(p_1146->global_2_offset, get_global_id(2), 10))))
    { /* block id: 186 */
        (**l_399) |= ((*p_1146->g_303) > ((**l_381) &= (p_38 ^ p_1146->g_15[0])));
    }
    else
    { /* block id: 189 */
        int32_t *l_437 = (void*)0;
        int32_t *l_438[3][6] = {{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]}};
        int i, j;
        for (p_1146->g_156 = 13; (p_1146->g_156 >= 31); p_1146->g_156++)
        { /* block id: 192 */
            (*l_399) = l_437;
        }
        (*p_1146->g_303) ^= 0x40671A72L;
    }
    return &p_1146->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_331 p_1146->g_44 p_1146->g_45 p_1146->g_303 p_1146->g_304 p_1146->g_148 p_1146->g_10
 * writes: p_1146->g_45 p_1146->g_331.f2 p_1146->g_10
 */
int64_t  func_41(int32_t ** p_42, uint64_t  p_43, struct S2 * p_1146)
{ /* block id: 153 */
    VECTOR(int32_t, 4) l_332 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
    VECTOR(int32_t, 8) l_333 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x07E78FE0L), 0x07E78FE0L), 0x07E78FE0L, 0L, 0x07E78FE0L);
    int32_t *l_334 = &p_1146->g_331[1].f2;
    int32_t ***l_344 = &p_1146->g_44;
    int32_t ****l_343 = &l_344;
    int32_t *l_345 = &p_1146->g_10;
    int i;
    (*p_42) = ((safe_mul_func_int8_t_s_s(1L, ((p_1146->g_331[1] , (-7L)) > ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(l_332.yyywwyyw)).s6107234714706545, ((VECTOR(int32_t, 8))(l_333.s42162236)).s2214743660424025))).sc))) , l_334);
    (*p_42) = l_334;
    (**p_1146->g_44) ^= 0x24988E6EL;
    (*l_345) &= ((safe_div_func_uint32_t_u_u(p_43, (GROUP_DIVERGE(0, 1) ^ 0x0B240CD41C9934A3L))) , ((safe_rshift_func_uint16_t_u_u(((*p_1146->g_303) == (**p_42)), ((**p_1146->g_44) | ((void*)0 != &l_334)))) < ((+((safe_mul_func_int8_t_s_s(p_43, ((((*l_343) = &p_1146->g_44) != (void*)0) & (**p_1146->g_44)))) , p_43)) > p_1146->g_148)));
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_83 p_1146->g_15 p_1146->g_6 p_1146->g_148 p_1146->g_161 p_1146->g_7 p_1146->g_45 p_1146->g_10 p_1146->g_100 p_1146->g_269 p_1146->g_111 p_1146->g_112 p_1146->g_44 p_1146->g_5 p_1146->g_274 p_1146->g_279 p_1146->g_108 p_1146->g_303 p_1146->g_304 p_1146->g_313
 * writes: p_1146->g_148 p_1146->g_156 p_1146->g_108 p_1146->g_45 p_1146->g_106 p_1146->g_269 p_1146->g_10 p_1146->g_304 p_1146->g_313
 */
uint8_t  func_48(uint16_t  p_49, uint64_t  p_50, uint32_t  p_51, int32_t * p_52, struct S2 * p_1146)
{ /* block id: 131 */
    struct S1 *l_285 = &p_1146->g_269;
    int32_t l_288[1][7];
    uint16_t *l_301[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t **l_300 = &l_301[2][3];
    VECTOR(int16_t, 2) l_302 = (VECTOR(int16_t, 2))(0x4FA0L, 0x4FD8L);
    VECTOR(uint8_t, 8) l_311 = (VECTOR(uint8_t, 8))(0xCDL, (VECTOR(uint8_t, 4))(0xCDL, (VECTOR(uint8_t, 2))(0xCDL, 0UL), 0UL), 0UL, 0xCDL, 0UL);
    VECTOR(uint64_t, 2) l_314 = (VECTOR(uint64_t, 2))(0x62CF15C36A206852L, 0x97D43AD270D92E2EL);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_288[i][j] = 0L;
    }
    (*l_285) = func_53((p_1146->g_83[3][3][2] , 0xDBD624D2L), (safe_sub_func_uint8_t_u_u(250UL, (((safe_mod_func_uint32_t_u_u(p_49, (((void*)0 != l_285) && p_50))) | (safe_mod_func_uint64_t_u_u((FAKE_DIVERGE(p_1146->group_0_offset, get_group_id(0), 10) == ((p_1146->g_15[0] ^ 0x1D93221E11CBF97CL) != l_288[0][1])), p_51))) && FAKE_DIVERGE(p_1146->local_0_offset, get_local_id(0), 10)))), p_1146->g_6, &p_1146->g_45, p_50, p_1146);
    for (p_1146->g_10 = 0; (p_1146->g_10 == (-2)); p_1146->g_10--)
    { /* block id: 135 */
        uint32_t **l_291 = (void*)0;
        int32_t *l_293 = &p_1146->g_108;
        uint64_t *l_312 = &p_1146->g_313;
        uint16_t l_317 = 65532UL;
        int64_t *l_322[9][4] = {{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]},{&p_1146->g_323[8][2],&p_1146->g_323[2][7],&p_1146->g_323[2][9],&p_1146->g_323[8][2]}};
        int32_t *l_324 = (void*)0;
        int32_t *l_325 = &p_1146->g_304;
        int16_t l_328 = (-1L);
        int i, j;
        (*l_293) = (l_291 != p_1146->g_274);
        (*p_1146->g_303) &= (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((*l_293), (safe_lshift_func_int8_t_s_u((l_300 == &l_301[3][2]), 5)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_302.xxxyyyxx)).even)).x));
        if (((*l_325) = (safe_div_func_int32_t_s_s(((p_49 < l_302.y) == 0x4AFA024AL), (((*l_293) ^= (safe_sub_func_int64_t_s_s((((safe_div_func_uint8_t_u_u(p_1146->g_100.y, ((VECTOR(uint8_t, 4))(l_311.s4543)).z)) > 1UL) >= (((*l_312) &= 0x2EAA756BD6667CC5L) , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_314.xyxxyxxxxxyyxyxy)).lo)).s4)), (0x54L | (safe_sub_func_uint64_t_u_u(l_317, (((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_311.s7 != p_1146->g_6) ^ 0x0EDC83CEL), 0xCFL)), l_288[0][1])) != (*p_52)) , (-1L)))))))) , l_302.x)))))
        { /* block id: 141 */
            for (p_50 = 0; (p_50 >= 58); p_50 = safe_add_func_int64_t_s_s(p_50, 1))
            { /* block id: 144 */
                return l_328;
            }
        }
        else
        { /* block id: 147 */
            if (l_288[0][1])
                break;
        }
        if ((*p_52))
            continue;
    }
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_148 p_1146->g_161 p_1146->g_7 p_1146->g_45 p_1146->g_15 p_1146->g_10 p_1146->g_100 p_1146->g_269 p_1146->g_111 p_1146->g_112 p_1146->g_44 p_1146->g_5 p_1146->g_274 p_1146->g_279
 * writes: p_1146->g_148 p_1146->g_156 p_1146->g_108 p_1146->g_45 p_1146->g_106
 */
struct S1  func_53(uint32_t  p_54, int64_t  p_55, int32_t  p_56, int32_t ** p_57, uint64_t  p_58, struct S2 * p_1146)
{ /* block id: 34 */
    int16_t l_146[3][6] = {{0x7AD4L,0x7AD4L,0x344BL,1L,2L,1L},{0x7AD4L,0x7AD4L,0x344BL,1L,2L,1L},{0x7AD4L,0x7AD4L,0x344BL,1L,2L,1L}};
    int32_t *l_147[10][7][3] = {{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}},{{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_10,&p_1146->g_15[0]}}};
    int32_t ***l_151 = &p_1146->g_44;
    int32_t ****l_152 = &l_151;
    uint32_t *l_153 = (void*)0;
    uint32_t *l_154 = (void*)0;
    uint32_t *l_155 = &p_1146->g_156;
    VECTOR(int8_t, 4) l_157 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
    VECTOR(int64_t, 16) l_160 = (VECTOR(int64_t, 16))(0x2A49DC3AFFD700EFL, (VECTOR(int64_t, 4))(0x2A49DC3AFFD700EFL, (VECTOR(int64_t, 2))(0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL), 0x2033656F6DE51AEEL), 0x2033656F6DE51AEEL, 0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL, (VECTOR(int64_t, 2))(0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL), (VECTOR(int64_t, 2))(0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL), 0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL, 0x2A49DC3AFFD700EFL, 0x2033656F6DE51AEEL);
    uint32_t **l_162 = (void*)0;
    uint32_t **l_163 = &l_154;
    uint32_t l_278[4][2][7] = {{{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL},{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL}},{{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL},{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL}},{{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL},{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL}},{{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL},{0UL,0UL,0x0A0EE0BAL,0UL,0xF9B30A4DL,0UL,0x0A0EE0BAL}}};
    int i, j, k;
    p_1146->g_148--;
    if ((p_1146->g_108 = (p_54 < ((p_55 & ((p_56 , ((*l_152) = l_151)) != ((p_58 & ((((*l_155) = 0xB7FC80EFL) || (p_54 && ((VECTOR(int8_t, 4))(l_157.wyzy)).y)) | ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(l_160.s02a2667aad10fcb5)).odd, ((VECTOR(int64_t, 2))((-1L), 0L)).yyxyyxyy))).s1, ((p_1146->g_161 , (((((((*l_163) = func_61(p_57, p_57, p_1146->g_7, p_56, (*p_57), p_1146)) != p_1146->g_45) , p_1146->g_15[0]) && (-9L)) | 0x4E51L) & (-1L))) & p_1146->g_10))) || 0x0CEA68C7A647BA95L))) , &p_57))) , p_1146->g_100.y))))
    { /* block id: 40 */
        if ((atomic_inc(&p_1146->l_atomic_input[43]) == 0))
        { /* block id: 42 */
            int32_t l_164 = 0x2576ED2DL;
            struct S0 l_241 = {0x2369EC73L,0xAEBFF0220364D17AL,0x0700FE2BL};/* VOLATILE GLOBAL l_241 */
            struct S0 l_242 = {0x27DD3274L,18446744073709551615UL,-3L};/* VOLATILE GLOBAL l_242 */
            uint8_t l_243 = 253UL;
            for (l_164 = 0; (l_164 >= (-3)); l_164--)
            { /* block id: 45 */
                int32_t l_167 = 0x0CEBAA7DL;
                for (l_167 = 0; (l_167 > (-15)); l_167 = safe_sub_func_int32_t_s_s(l_167, 9))
                { /* block id: 48 */
                    uint32_t l_170 = 4294967295UL;
                    struct S1 l_171 = {1L,0xE345E967L,0x4BB3C6450A63B9AFL};/* VOLATILE GLOBAL l_171 */
                    struct S1 l_172 = {0x08L,0x01BA1C07L,0x5B32F8ACA71B24F3L};/* VOLATILE GLOBAL l_172 */
                    struct S1 l_173 = {0L,0UL,5L};/* VOLATILE GLOBAL l_173 */
                    int8_t l_174 = 0x00L;
                    int8_t l_175 = (-6L);
                    struct S1 l_176[10][3] = {{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}},{{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x02L,4294967290UL,0x3BD00C7963A9DBF6L},{0x5FL,0xAFCD1A43L,0x241DB001E96B0A0DL}}};
                    int i, j;
                    l_172 = (l_170 , l_171);
                    l_175 = (l_174 |= (l_173 , 0x309FDD95L));
                    l_176[8][0] = l_176[8][0];
                }
                for (l_167 = 1; (l_167 < (-5)); l_167 = safe_sub_func_uint16_t_u_u(l_167, 2))
                { /* block id: 56 */
                    uint32_t l_179[9][1];
                    int64_t l_182 = (-6L);
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_179[i][j] = 0xAAB0956CL;
                    }
                    l_179[6][0]--;
                    if (l_182)
                    { /* block id: 58 */
                        VECTOR(int8_t, 16) l_183 = (VECTOR(int8_t, 16))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0L), 0L), 0L, 0x49L, 0L, (VECTOR(int8_t, 2))(0x49L, 0L), (VECTOR(int8_t, 2))(0x49L, 0L), 0x49L, 0L, 0x49L, 0L);
                        int32_t l_185 = 9L;
                        int32_t *l_184[10][5][5] = {{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}},{{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0},{&l_185,&l_185,&l_185,&l_185,(void*)0}}};
                        int32_t *l_186 = &l_185;
                        uint32_t l_187 = 0x5722BD1DL;
                        VECTOR(int16_t, 4) l_188 = (VECTOR(int16_t, 4))(0x3B3DL, (VECTOR(int16_t, 2))(0x3B3DL, 0x417AL), 0x417AL);
                        VECTOR(int16_t, 8) l_189 = (VECTOR(int16_t, 8))(0x75C3L, (VECTOR(int16_t, 4))(0x75C3L, (VECTOR(int16_t, 2))(0x75C3L, (-2L)), (-2L)), (-2L), 0x75C3L, (-2L));
                        int32_t l_190 = 0x34215336L;
                        int32_t l_191 = 0x77800328L;
                        uint16_t l_192 = 8UL;
                        int32_t l_193 = 0x4EE44133L;
                        VECTOR(int16_t, 4) l_194 = (VECTOR(int16_t, 4))(0x0086L, (VECTOR(int16_t, 2))(0x0086L, 0x5A54L), 0x5A54L);
                        VECTOR(int16_t, 4) l_195 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x192BL), 0x192BL);
                        VECTOR(int16_t, 2) l_196 = (VECTOR(int16_t, 2))((-1L), (-1L));
                        VECTOR(int16_t, 2) l_197 = (VECTOR(int16_t, 2))(1L, 0L);
                        uint32_t l_198 = 0xAC019A06L;
                        uint8_t l_199[5][5] = {{0x35L,0xE4L,0UL,255UL,0xE4L},{0x35L,0xE4L,0UL,255UL,0xE4L},{0x35L,0xE4L,0UL,255UL,0xE4L},{0x35L,0xE4L,0UL,255UL,0xE4L},{0x35L,0xE4L,0UL,255UL,0xE4L}};
                        int32_t l_200 = (-3L);
                        int32_t l_201 = 0x3FF6A6F7L;
                        uint8_t l_202[10][8][3] = {{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}},{{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL},{0xEAL,1UL,8UL}}};
                        int16_t l_203 = 0x1EEEL;
                        int32_t l_204 = 1L;
                        int8_t l_205 = 0x66L;
                        uint16_t l_206 = 9UL;
                        int i, j, k;
                        l_183.sc ^= 0x61D21668L;
                        l_186 = l_184[5][4][1];
                        l_187 = (-7L);
                        l_206 = ((l_204 = ((VECTOR(int16_t, 16))(0x5EAFL, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(0L, 0x23F9L, 0x2AE1L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_188.xyyx)).w, 0x55D4L, 0x0F00L, 0x1259L)), ((VECTOR(int16_t, 4))((-8L), 2L, 0x0FA2L, (-1L))), ((VECTOR(int16_t, 2))(l_189.s16)), 0x5EB6L, 7L, 0x29E4L)), (int16_t)((l_192 &= (l_190 , l_191)) , (l_193 , ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(l_194.wwyw)).zxxywwzwyyzxzxyx, ((VECTOR(int16_t, 4))(l_195.zzzw)).wywyxyzxwzwwwyxw))).s1))))).s39d6, ((VECTOR(int16_t, 2))(0x58F6L, 0x736EL)).xyxy, ((VECTOR(int16_t, 16))(l_196.xyyyyyxyxxyxxxyx)).se247))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_197.xxyxyyxxxxxxyxxy)).s20ac)).xxzyzzyw)).hi))).y, 0x4BE2L, l_198, ((l_199[2][2] , (l_200 , l_201)) , l_202[5][4][0]), (-1L), l_203, ((VECTOR(int16_t, 4))(0x0A40L)), 0x28B2L, ((VECTOR(int16_t, 2))(0x364FL)), 0x461AL, 0x0201L)).s3) , l_205);
                    }
                    else
                    { /* block id: 65 */
                        uint32_t l_207[8][9] = {{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL},{8UL,0UL,1UL,4294967295UL,0UL,4294967295UL,1UL,0UL,8UL}};
                        int32_t l_208 = 1L;
                        VECTOR(int64_t, 16) l_209 = (VECTOR(int64_t, 16))(0x4D0BF88848957202L, (VECTOR(int64_t, 4))(0x4D0BF88848957202L, (VECTOR(int64_t, 2))(0x4D0BF88848957202L, 0L), 0L), 0L, 0x4D0BF88848957202L, 0L, (VECTOR(int64_t, 2))(0x4D0BF88848957202L, 0L), (VECTOR(int64_t, 2))(0x4D0BF88848957202L, 0L), 0x4D0BF88848957202L, 0L, 0x4D0BF88848957202L, 0L);
                        VECTOR(uint16_t, 4) l_210 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 1UL), 1UL);
                        uint64_t l_213[3];
                        struct S1 l_216 = {0x4DL,0xB364EF60L,0x0ABA4FA0E64833E0L};/* VOLATILE GLOBAL l_216 */
                        struct S1 l_217[5] = {{6L,0xEBBB2C9FL,-1L},{6L,0xEBBB2C9FL,-1L},{6L,0xEBBB2C9FL,-1L},{6L,0xEBBB2C9FL,-1L},{6L,0xEBBB2C9FL,-1L}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_213[i] = 0xB67BDB8DD240B2EBL;
                        l_208 &= l_207[6][1];
                        ++l_210.z;
                        l_213[1]--;
                        l_217[2] = l_216;
                    }
                }
                for (l_167 = 0; (l_167 < (-22)); l_167 = safe_sub_func_uint64_t_u_u(l_167, 2))
                { /* block id: 74 */
                    int32_t l_220 = 4L;
                    uint32_t l_221 = 1UL;
                    VECTOR(int8_t, 8) l_222 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 4L), 4L), 4L, (-2L), 4L);
                    uint64_t l_223 = 18446744073709551615UL;
                    uint64_t l_224 = 0xFE7BB2D01FADEA91L;
                    uint32_t l_225 = 1UL;
                    uint8_t l_226 = 1UL;
                    int8_t l_237 = (-9L);
                    uint8_t l_238 = 0x48L;
                    int i;
                    l_224 |= (((l_221 &= l_220) , l_222.s6) , l_223);
                    l_220 = (l_226 = l_225);
                    for (l_225 = 0; (l_225 <= 14); l_225 = safe_add_func_int32_t_s_s(l_225, 7))
                    { /* block id: 81 */
                        uint8_t l_229 = 0x85L;
                        uint32_t l_230[4][9] = {{0x4B1DD053L,4294967287UL,0x0AF2857BL,1UL,0xA2E47172L,0x4B1DD053L,1UL,0x841E320CL,1UL},{0x4B1DD053L,4294967287UL,0x0AF2857BL,1UL,0xA2E47172L,0x4B1DD053L,1UL,0x841E320CL,1UL},{0x4B1DD053L,4294967287UL,0x0AF2857BL,1UL,0xA2E47172L,0x4B1DD053L,1UL,0x841E320CL,1UL},{0x4B1DD053L,4294967287UL,0x0AF2857BL,1UL,0xA2E47172L,0x4B1DD053L,1UL,0x841E320CL,1UL}};
                        int16_t l_231 = (-1L);
                        int32_t *l_232 = (void*)0;
                        int32_t l_234 = 0x7D3E07EBL;
                        int32_t *l_233 = &l_234;
                        int32_t *l_235[6][10] = {{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234},{&l_234,(void*)0,(void*)0,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234,&l_234}};
                        int32_t *l_236 = &l_234;
                        int i, j;
                        l_220 = (l_229 , (-1L));
                        l_236 = (l_235[2][8] = ((l_231 = l_230[3][7]) , (l_233 = l_232)));
                    }
                    --l_238;
                }
            }
            l_242 = l_241;
            if (l_243)
            { /* block id: 92 */
                struct S1 l_245 = {0x23L,1UL,-1L};/* VOLATILE GLOBAL l_245 */
                struct S1 *l_244 = &l_245;
                uint32_t l_246 = 4294967295UL;
                l_244 = (void*)0;
                l_164 = (l_242.f2 = (l_241.f2 = 1L));
                --l_246;
            }
            else
            { /* block id: 98 */
                int32_t l_249[7];
                uint32_t l_260 = 0x4CF66860L;
                int i;
                for (i = 0; i < 7; i++)
                    l_249[i] = 0x612024B5L;
                for (l_249[2] = (-29); (l_249[2] == (-10)); l_249[2] = safe_add_func_int8_t_s_s(l_249[2], 6))
                { /* block id: 101 */
                    int32_t *l_252 = (void*)0;
                    int32_t l_254[3][2] = {{0x05371D5EL,0x05371D5EL},{0x05371D5EL,0x05371D5EL},{0x05371D5EL,0x05371D5EL}};
                    int32_t *l_253 = &l_254[0][1];
                    int i, j;
                    l_253 = l_252;
                    for (l_254[0][1] = (-18); (l_254[0][1] == (-30)); --l_254[0][1])
                    { /* block id: 105 */
                        uint16_t l_259 = 0x3CE5L;
                        uint16_t *l_258 = &l_259;
                        uint16_t **l_257 = &l_258;
                        l_257 = (void*)0;
                    }
                }
                l_241.f2 |= l_260;
            }
            unsigned int result = 0;
            result += l_164;
            result += l_241.f0;
            result += l_241.f1;
            result += l_241.f2;
            result += l_242.f0;
            result += l_242.f1;
            result += l_242.f2;
            result += l_243;
            atomic_add(&p_1146->l_special_values[43], result);
        }
        else
        { /* block id: 111 */
            (1 + 1);
        }
    }
    else
    { /* block id: 114 */
        int32_t l_263[1];
        int64_t l_264 = 7L;
        int32_t l_265[6][9] = {{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L},{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L},{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L},{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L},{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L},{0x293D5A49L,0x293D5A49L,0x1B8EAB52L,0x239DDDDFL,0x6ADD2EC1L,0x239DDDDFL,0x1B8EAB52L,0x293D5A49L,0x293D5A49L}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_263[i] = (-1L);
        for (p_54 = 0; (p_54 == 48); ++p_54)
        { /* block id: 117 */
            uint32_t l_266 = 4294967286UL;
            l_266++;
            return p_1146->g_269;
        }
        (**l_151) = ((*p_1146->g_111) , (void*)0);
    }
    for (p_58 = 0; (p_58 <= 17); p_58 = safe_add_func_uint64_t_u_u(p_58, 1))
    { /* block id: 125 */
        int16_t *l_277 = &l_146[0][1];
        p_1146->g_106 = (~(safe_rshift_func_int16_t_s_u((p_1146->g_161 , ((p_1146->g_5 , (void*)0) != p_1146->g_274)), (safe_lshift_func_int16_t_s_s(((*l_277) = 0x588DL), 8)))));
        if (l_278[1][0][6])
            break;
    }
    return p_1146->g_279;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_4 p_1146->g_2 p_1146->g_100 p_1146->g_7 p_1146->g_83 p_1146->g_10 p_1146->g_44 p_1146->g_45 p_1146->g_108 p_1146->g_107 p_1146->g_111 p_1146->g_comm_values p_1146->g_15
 * writes: p_1146->g_4 p_1146->g_45 p_1146->g_10 p_1146->g_108 p_1146->g_111 p_1146->g_100
 */
uint32_t  func_59(int32_t * p_60, struct S2 * p_1146)
{ /* block id: 16 */
    int32_t **l_85[8] = {&p_1146->g_45,&p_1146->g_45,&p_1146->g_45,&p_1146->g_45,&p_1146->g_45,&p_1146->g_45,&p_1146->g_45,&p_1146->g_45};
    int32_t ***l_84 = &l_85[3];
    int32_t *l_86[6][8] = {{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]},{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]},{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]},{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]},{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]},{(void*)0,&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],(void*)0,(void*)0,&p_1146->g_15[0],&p_1146->g_15[0]}};
    uint64_t l_87[2];
    VECTOR(uint16_t, 4) l_101 = (VECTOR(uint16_t, 4))(0x18E2L, (VECTOR(uint16_t, 2))(0x18E2L, 6UL), 6UL);
    VECTOR(uint32_t, 16) l_102 = (VECTOR(uint32_t, 16))(0x2F9027EAL, (VECTOR(uint32_t, 4))(0x2F9027EAL, (VECTOR(uint32_t, 2))(0x2F9027EAL, 4294967295UL), 4294967295UL), 4294967295UL, 0x2F9027EAL, 4294967295UL, (VECTOR(uint32_t, 2))(0x2F9027EAL, 4294967295UL), (VECTOR(uint32_t, 2))(0x2F9027EAL, 4294967295UL), 0x2F9027EAL, 4294967295UL, 0x2F9027EAL, 4294967295UL);
    int8_t l_135 = 1L;
    int16_t l_144 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_87[i] = 0x10CA1D25F4349FECL;
    p_1146->g_4 &= (((*l_84) = &p_1146->g_45) != (void*)0);
    ++l_87[1];
    (*p_1146->g_44) = (((0x31368DE677DABF26L && (safe_add_func_uint16_t_u_u((&p_60 != &p_60), (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_1146->g_2, ((((VECTOR(uint16_t, 16))(p_1146->g_100.xxyxyxxyyxxyyyyy)).s9 >= ((p_1146->g_7 , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(65526UL, 65534UL)).yyxyxxxy, ((VECTOR(uint16_t, 8))(l_101.yzxxxwwx))))).s0357015263577570)).sbf, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x5E375EFDL, 0x3981A733L)))), ((VECTOR(uint32_t, 2))(0xA635BD15L, 4294967290UL)), 0xD821F8E6L, 4294967295UL, 0UL, 0x8400EC86L)).s13, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_102.sb8)).yxxxxyyx)), (uint32_t)(+(p_1146->g_100.y != (p_1146->g_83[0][1][7] & 1UL))), (uint32_t)p_1146->g_10))).s33))), ((VECTOR(uint32_t, 4))(0xDBF4B608L)), 0xAA087AC2L, 4294967294UL)).s3) < 1L)) ^ p_1146->g_100.y))), p_1146->g_83[3][3][2])), 13)), 11))))) | p_1146->g_83[3][0][0]) , (*p_1146->g_44));
    for (p_1146->g_10 = 0; (p_1146->g_10 == 18); p_1146->g_10 = safe_add_func_uint16_t_u_u(p_1146->g_10, 7))
    { /* block id: 23 */
        int8_t l_134 = 0L;
        uint16_t *l_140 = (void*)0;
        uint16_t *l_141 = (void*)0;
        uint16_t *l_142 = (void*)0;
        uint16_t *l_143 = (void*)0;
        int8_t l_145 = (-1L);
        for (p_1146->g_108 = 0; (p_1146->g_108 >= 21); p_1146->g_108++)
        { /* block id: 26 */
            return p_1146->g_107;
        }
        p_1146->g_111 = p_1146->g_111;
        p_1146->g_108 &= (safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((-7L))), ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0xB92564D2L, ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(l_134, ((l_135 != ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_1146->g_100.x |= (+l_134)), p_1146->g_2)), (0x3FACL <= ((void*)0 == (*p_1146->g_44))))) == l_134)) | l_134))) && l_144) | p_1146->g_83[3][3][2]), p_1146->g_83[3][3][2])) != p_1146->g_comm_values[p_1146->tid]), 1UL)), 0)), p_1146->g_15[0])) , l_134))) > 0x39L), l_145)) , FAKE_DIVERGE(p_1146->local_1_offset, get_local_id(1), 10)))), l_145)), 255UL));
    }
    return p_1146->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1146->g_45 p_1146->g_439
 * writes:
 */
int32_t * func_61(int32_t ** p_62, int32_t ** p_63, int8_t  p_64, uint32_t  p_65, int32_t * p_66, struct S2 * p_1146)
{ /* block id: 14 */
    return (*p_63);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_comm_values[i] = 1;
    struct S2 c_1147;
    struct S2* p_1146 = &c_1147;
    struct S2 c_1148 = {
        (-1L), // p_1146->g_2
        0x1E814B73L, // p_1146->g_3
        0x33843046L, // p_1146->g_4
        8L, // p_1146->g_5
        0L, // p_1146->g_6
        0x2A29C146L, // p_1146->g_7
        8L, // p_1146->g_10
        {(-5L)}, // p_1146->g_15
        (void*)0, // p_1146->g_45
        &p_1146->g_45, // p_1146->g_44
        {{{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL}},{{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL}},{{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL}},{{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL},{0x24L,255UL,0x8EL,0x26L,0x8EL,255UL,0x24L,0UL,0xEFL}}}, // p_1146->g_83
        (VECTOR(uint16_t, 2))(8UL, 9UL), // p_1146->g_100
        0x4CDB194AL, // p_1146->g_105
        0L, // p_1146->g_106
        0x6264D6F6L, // p_1146->g_107
        0x42B18C89L, // p_1146->g_108
        {0x19L,0x9C2EEFDDL,0x005B5690C02A0D86L}, // p_1146->g_112
        &p_1146->g_112, // p_1146->g_111
        1UL, // p_1146->g_148
        1UL, // p_1146->g_156
        {0L,0UL,0x4EEA5D27L}, // p_1146->g_161
        {0x14L,0x3721B999L,-1L}, // p_1146->g_269
        (void*)0, // p_1146->g_274
        {0L,4294967287UL,0x5AA97D915561DD08L}, // p_1146->g_279
        (void*)0, // p_1146->g_292
        (-1L), // p_1146->g_304
        &p_1146->g_304, // p_1146->g_303
        0UL, // p_1146->g_313
        {{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L},{0x72BDF8E17AAAFD06L,1L,1L,0x72BDF8E17AAAFD06L,(-1L),1L,1L,(-1L),0x72BDF8E17AAAFD06L,1L}}, // p_1146->g_323
        {{0x28DF3650L,18446744073709551614UL,-1L},{0x28DF3650L,18446744073709551614UL,-1L}}, // p_1146->g_331
        (VECTOR(int8_t, 2))(0x11L, 0x5DL), // p_1146->g_362
        {0x7B57526DL,0xE529CC8C22E17EA6L,0x720AAA3CL}, // p_1146->g_379
        &p_1146->g_156, // p_1146->g_384
        &p_1146->g_384, // p_1146->g_383
        (-8L), // p_1146->g_396
        0L, // p_1146->g_398
        (VECTOR(int8_t, 16))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0x00L), 0x00L), 0x00L, 0x67L, 0x00L, (VECTOR(int8_t, 2))(0x67L, 0x00L), (VECTOR(int8_t, 2))(0x67L, 0x00L), 0x67L, 0x00L, 0x67L, 0x00L), // p_1146->g_403
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 251UL), 251UL), 251UL, 0UL, 251UL, (VECTOR(uint8_t, 2))(0UL, 251UL), (VECTOR(uint8_t, 2))(0UL, 251UL), 0UL, 251UL, 0UL, 251UL), // p_1146->g_415
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C22FC88L), 0x1C22FC88L), 0x1C22FC88L, (-1L), 0x1C22FC88L), // p_1146->g_420
        (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, (-3L)), (-3L)), // p_1146->g_429
        {{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]},{&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0],&p_1146->g_15[0]}}, // p_1146->g_439
        0xD7C1B578L, // p_1146->g_486
        (VECTOR(uint32_t, 2))(1UL, 4294967289UL), // p_1146->g_491
        (VECTOR(int64_t, 16))(0x14B5E2410F8B55F6L, (VECTOR(int64_t, 4))(0x14B5E2410F8B55F6L, (VECTOR(int64_t, 2))(0x14B5E2410F8B55F6L, 0L), 0L), 0L, 0x14B5E2410F8B55F6L, 0L, (VECTOR(int64_t, 2))(0x14B5E2410F8B55F6L, 0L), (VECTOR(int64_t, 2))(0x14B5E2410F8B55F6L, 0L), 0x14B5E2410F8B55F6L, 0L, 0x14B5E2410F8B55F6L, 0L), // p_1146->g_493
        {0x55A4EDAEL,0x989D237AB5A76E7FL,1L}, // p_1146->g_516
        (VECTOR(int32_t, 8))(0x08B658DFL, (VECTOR(int32_t, 4))(0x08B658DFL, (VECTOR(int32_t, 2))(0x08B658DFL, (-10L)), (-10L)), (-10L), 0x08B658DFL, (-10L)), // p_1146->g_530
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x69FDL), 0x69FDL), 0x69FDL, (-6L), 0x69FDL), // p_1146->g_543
        0x244F225368335AC5L, // p_1146->g_548
        (VECTOR(int32_t, 16))(0x68D816F3L, (VECTOR(int32_t, 4))(0x68D816F3L, (VECTOR(int32_t, 2))(0x68D816F3L, 0x281ABBEFL), 0x281ABBEFL), 0x281ABBEFL, 0x68D816F3L, 0x281ABBEFL, (VECTOR(int32_t, 2))(0x68D816F3L, 0x281ABBEFL), (VECTOR(int32_t, 2))(0x68D816F3L, 0x281ABBEFL), 0x68D816F3L, 0x281ABBEFL, 0x68D816F3L, 0x281ABBEFL), // p_1146->g_597
        (void*)0, // p_1146->g_605
        {{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}},{{(void*)0,(void*)0,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,&p_1146->g_383,(void*)0,&p_1146->g_383}}}, // p_1146->g_609
        &p_1146->g_383, // p_1146->g_610
        {{0L,18446744073709551615UL,1L},{0L,18446744073709551615UL,1L},{0L,18446744073709551615UL,1L}}, // p_1146->g_611
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3E401DE5L), 0x3E401DE5L), 0x3E401DE5L, 1L, 0x3E401DE5L), // p_1146->g_619
        (VECTOR(int32_t, 2))(1L, 0x42855AEEL), // p_1146->g_620
        0x137980E84026C543L, // p_1146->g_624
        &p_1146->g_279, // p_1146->g_656
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), 18446744073709551609UL), // p_1146->g_669
        (VECTOR(int16_t, 4))(0x6500L, (VECTOR(int16_t, 2))(0x6500L, 0x7F57L), 0x7F57L), // p_1146->g_682
        {0x57L,1UL,7L}, // p_1146->g_703
        (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int32_t, 2))((-5L), (-1L)), (VECTOR(int32_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L)), // p_1146->g_709
        (VECTOR(int32_t, 8))(0x3B0DDE0EL, (VECTOR(int32_t, 4))(0x3B0DDE0EL, (VECTOR(int32_t, 2))(0x3B0DDE0EL, 0x5F0E641FL), 0x5F0E641FL), 0x5F0E641FL, 0x3B0DDE0EL, 0x5F0E641FL), // p_1146->g_713
        &p_1146->g_396, // p_1146->g_727
        &p_1146->g_727, // p_1146->g_726
        {&p_1146->g_396,&p_1146->g_396,&p_1146->g_396,&p_1146->g_396,&p_1146->g_396,&p_1146->g_396,&p_1146->g_396,&p_1146->g_396}, // p_1146->g_729
        &p_1146->g_729[0], // p_1146->g_728
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA9268A13L), 0xA9268A13L), 0xA9268A13L, 1UL, 0xA9268A13L), // p_1146->g_740
        (VECTOR(int32_t, 2))(0x40CE68F3L, 0x2439955DL), // p_1146->g_753
        (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int32_t, 2))(9L, 0L), (VECTOR(int32_t, 2))(9L, 0L), 9L, 0L, 9L, 0L), // p_1146->g_755
        &p_1146->g_279.f0, // p_1146->g_761
        &p_1146->g_761, // p_1146->g_760
        (VECTOR(int16_t, 16))(0x6409L, (VECTOR(int16_t, 4))(0x6409L, (VECTOR(int16_t, 2))(0x6409L, 0x3C84L), 0x3C84L), 0x3C84L, 0x6409L, 0x3C84L, (VECTOR(int16_t, 2))(0x6409L, 0x3C84L), (VECTOR(int16_t, 2))(0x6409L, 0x3C84L), 0x6409L, 0x3C84L, 0x6409L, 0x3C84L), // p_1146->g_780
        (-1L), // p_1146->g_801
        {{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L},{0x8758L,0x4EF4L,0x15D0L,7UL,0x4EF4L}}, // p_1146->g_817
        (VECTOR(uint8_t, 8))(0x34L, (VECTOR(uint8_t, 4))(0x34L, (VECTOR(uint8_t, 2))(0x34L, 6UL), 6UL), 6UL, 0x34L, 6UL), // p_1146->g_833
        {2L,0x03F4D7E246EB2131L,0x09E46D53L}, // p_1146->g_846
        (VECTOR(int16_t, 2))(0L, 0x3BFBL), // p_1146->g_849
        (void*)0, // p_1146->g_848
        {{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}},{{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848},{&p_1146->g_848,&p_1146->g_848,&p_1146->g_848}}}, // p_1146->g_847
        &p_1146->g_384, // p_1146->g_860
        {1L,0x1769C1B5FDB575F8L,0x14213ADEL}, // p_1146->g_879
        (VECTOR(int32_t, 2))(0x6D9B7269L, (-1L)), // p_1146->g_896
        (VECTOR(int8_t, 8))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x5BL), 0x5BL), 0x5BL, 0x1FL, 0x5BL), // p_1146->g_909
        0UL, // p_1146->g_913
        {{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}},{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}},{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}},{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}},{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}},{{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL},{(-1L),(-1L),0x5AF1B022L,0x55F61BFAL,0x5D572FDBL}}}, // p_1146->g_914
        {{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]},{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]},{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]},{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]},{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]},{&p_1146->g_846,&p_1146->g_379,&p_1146->g_611[1],&p_1146->g_846,&p_1146->g_611[1],&p_1146->g_379,&p_1146->g_846,&p_1146->g_846,&p_1146->g_611[2]}}, // p_1146->g_919
        0UL, // p_1146->g_931
        (VECTOR(uint8_t, 4))(0xB0L, (VECTOR(uint8_t, 2))(0xB0L, 5UL), 5UL), // p_1146->g_947
        {&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2],&p_1146->g_323[8][2]}, // p_1146->g_952
        {&p_1146->g_952[2],&p_1146->g_952[2],&p_1146->g_952[2],&p_1146->g_952[2]}, // p_1146->g_951
        &p_1146->g_439[4][2], // p_1146->g_964
        (VECTOR(uint64_t, 4))(0x57339B2A58BAB47FL, (VECTOR(uint64_t, 2))(0x57339B2A58BAB47FL, 0x05E94BD317B40665L), 0x05E94BD317B40665L), // p_1146->g_971
        0x744128F0L, // p_1146->g_979
        (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 1UL), 1UL), 1UL, 18446744073709551606UL, 1UL), // p_1146->g_997
        (VECTOR(uint64_t, 8))(0xB8F55E7705C0D84DL, (VECTOR(uint64_t, 4))(0xB8F55E7705C0D84DL, (VECTOR(uint64_t, 2))(0xB8F55E7705C0D84DL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0xB8F55E7705C0D84DL, 18446744073709551606UL), // p_1146->g_998
        (void*)0, // p_1146->g_1020
        &p_1146->g_1020, // p_1146->g_1019
        {{{0L,3UL,-5L},{0L,3UL,-5L}},{{0L,3UL,-5L},{0L,3UL,-5L}},{{0L,3UL,-5L},{0L,3UL,-5L}},{{0L,3UL,-5L},{0L,3UL,-5L}}}, // p_1146->g_1058
        {0x31D10992L,18446744073709551609UL,0x29CC8806L}, // p_1146->g_1066
        (VECTOR(int32_t, 4))(0x28D88D25L, (VECTOR(int32_t, 2))(0x28D88D25L, 0x353D37F2L), 0x353D37F2L), // p_1146->g_1067
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL), // p_1146->g_1071
        (VECTOR(int32_t, 16))(0x416BF646L, (VECTOR(int32_t, 4))(0x416BF646L, (VECTOR(int32_t, 2))(0x416BF646L, 0x468A4A29L), 0x468A4A29L), 0x468A4A29L, 0x416BF646L, 0x468A4A29L, (VECTOR(int32_t, 2))(0x416BF646L, 0x468A4A29L), (VECTOR(int32_t, 2))(0x416BF646L, 0x468A4A29L), 0x416BF646L, 0x468A4A29L, 0x416BF646L, 0x468A4A29L), // p_1146->g_1072
        {0L,0xAD1738E92F720B08L,0x4C8E8C3CL}, // p_1146->g_1112
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x31L), 0x31L), 0x31L, 1L, 0x31L), // p_1146->g_1119
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0A26251AL), 0x0A26251AL), // p_1146->g_1135
        (VECTOR(int32_t, 4))(0x04A91BC5L, (VECTOR(int32_t, 2))(0x04A91BC5L, 0x299957CDL), 0x299957CDL), // p_1146->g_1136
        (void*)0, // p_1146->g_1145
        0, // p_1146->v_collective
        sequence_input[get_global_id(0)], // p_1146->global_0_offset
        sequence_input[get_global_id(1)], // p_1146->global_1_offset
        sequence_input[get_global_id(2)], // p_1146->global_2_offset
        sequence_input[get_local_id(0)], // p_1146->local_0_offset
        sequence_input[get_local_id(1)], // p_1146->local_1_offset
        sequence_input[get_local_id(2)], // p_1146->local_2_offset
        sequence_input[get_group_id(0)], // p_1146->group_0_offset
        sequence_input[get_group_id(1)], // p_1146->group_1_offset
        sequence_input[get_group_id(2)], // p_1146->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[0][get_linear_local_id()])), // p_1146->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1147 = c_1148;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1146);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1146->g_2, "p_1146->g_2", print_hash_value);
    transparent_crc(p_1146->g_3, "p_1146->g_3", print_hash_value);
    transparent_crc(p_1146->g_4, "p_1146->g_4", print_hash_value);
    transparent_crc(p_1146->g_5, "p_1146->g_5", print_hash_value);
    transparent_crc(p_1146->g_6, "p_1146->g_6", print_hash_value);
    transparent_crc(p_1146->g_7, "p_1146->g_7", print_hash_value);
    transparent_crc(p_1146->g_10, "p_1146->g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1146->g_15[i], "p_1146->g_15[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1146->g_83[i][j][k], "p_1146->g_83[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1146->g_100.x, "p_1146->g_100.x", print_hash_value);
    transparent_crc(p_1146->g_100.y, "p_1146->g_100.y", print_hash_value);
    transparent_crc(p_1146->g_105, "p_1146->g_105", print_hash_value);
    transparent_crc(p_1146->g_106, "p_1146->g_106", print_hash_value);
    transparent_crc(p_1146->g_107, "p_1146->g_107", print_hash_value);
    transparent_crc(p_1146->g_108, "p_1146->g_108", print_hash_value);
    transparent_crc(p_1146->g_112.f0, "p_1146->g_112.f0", print_hash_value);
    transparent_crc(p_1146->g_112.f1, "p_1146->g_112.f1", print_hash_value);
    transparent_crc(p_1146->g_112.f2, "p_1146->g_112.f2", print_hash_value);
    transparent_crc(p_1146->g_148, "p_1146->g_148", print_hash_value);
    transparent_crc(p_1146->g_156, "p_1146->g_156", print_hash_value);
    transparent_crc(p_1146->g_161.f0, "p_1146->g_161.f0", print_hash_value);
    transparent_crc(p_1146->g_161.f1, "p_1146->g_161.f1", print_hash_value);
    transparent_crc(p_1146->g_161.f2, "p_1146->g_161.f2", print_hash_value);
    transparent_crc(p_1146->g_269.f0, "p_1146->g_269.f0", print_hash_value);
    transparent_crc(p_1146->g_269.f1, "p_1146->g_269.f1", print_hash_value);
    transparent_crc(p_1146->g_269.f2, "p_1146->g_269.f2", print_hash_value);
    transparent_crc(p_1146->g_279.f0, "p_1146->g_279.f0", print_hash_value);
    transparent_crc(p_1146->g_279.f1, "p_1146->g_279.f1", print_hash_value);
    transparent_crc(p_1146->g_279.f2, "p_1146->g_279.f2", print_hash_value);
    transparent_crc(p_1146->g_304, "p_1146->g_304", print_hash_value);
    transparent_crc(p_1146->g_313, "p_1146->g_313", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1146->g_323[i][j], "p_1146->g_323[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1146->g_331[i].f0, "p_1146->g_331[i].f0", print_hash_value);
        transparent_crc(p_1146->g_331[i].f1, "p_1146->g_331[i].f1", print_hash_value);
        transparent_crc(p_1146->g_331[i].f2, "p_1146->g_331[i].f2", print_hash_value);

    }
    transparent_crc(p_1146->g_362.x, "p_1146->g_362.x", print_hash_value);
    transparent_crc(p_1146->g_362.y, "p_1146->g_362.y", print_hash_value);
    transparent_crc(p_1146->g_379.f0, "p_1146->g_379.f0", print_hash_value);
    transparent_crc(p_1146->g_379.f1, "p_1146->g_379.f1", print_hash_value);
    transparent_crc(p_1146->g_379.f2, "p_1146->g_379.f2", print_hash_value);
    transparent_crc(p_1146->g_396, "p_1146->g_396", print_hash_value);
    transparent_crc(p_1146->g_398, "p_1146->g_398", print_hash_value);
    transparent_crc(p_1146->g_403.s0, "p_1146->g_403.s0", print_hash_value);
    transparent_crc(p_1146->g_403.s1, "p_1146->g_403.s1", print_hash_value);
    transparent_crc(p_1146->g_403.s2, "p_1146->g_403.s2", print_hash_value);
    transparent_crc(p_1146->g_403.s3, "p_1146->g_403.s3", print_hash_value);
    transparent_crc(p_1146->g_403.s4, "p_1146->g_403.s4", print_hash_value);
    transparent_crc(p_1146->g_403.s5, "p_1146->g_403.s5", print_hash_value);
    transparent_crc(p_1146->g_403.s6, "p_1146->g_403.s6", print_hash_value);
    transparent_crc(p_1146->g_403.s7, "p_1146->g_403.s7", print_hash_value);
    transparent_crc(p_1146->g_403.s8, "p_1146->g_403.s8", print_hash_value);
    transparent_crc(p_1146->g_403.s9, "p_1146->g_403.s9", print_hash_value);
    transparent_crc(p_1146->g_403.sa, "p_1146->g_403.sa", print_hash_value);
    transparent_crc(p_1146->g_403.sb, "p_1146->g_403.sb", print_hash_value);
    transparent_crc(p_1146->g_403.sc, "p_1146->g_403.sc", print_hash_value);
    transparent_crc(p_1146->g_403.sd, "p_1146->g_403.sd", print_hash_value);
    transparent_crc(p_1146->g_403.se, "p_1146->g_403.se", print_hash_value);
    transparent_crc(p_1146->g_403.sf, "p_1146->g_403.sf", print_hash_value);
    transparent_crc(p_1146->g_415.s0, "p_1146->g_415.s0", print_hash_value);
    transparent_crc(p_1146->g_415.s1, "p_1146->g_415.s1", print_hash_value);
    transparent_crc(p_1146->g_415.s2, "p_1146->g_415.s2", print_hash_value);
    transparent_crc(p_1146->g_415.s3, "p_1146->g_415.s3", print_hash_value);
    transparent_crc(p_1146->g_415.s4, "p_1146->g_415.s4", print_hash_value);
    transparent_crc(p_1146->g_415.s5, "p_1146->g_415.s5", print_hash_value);
    transparent_crc(p_1146->g_415.s6, "p_1146->g_415.s6", print_hash_value);
    transparent_crc(p_1146->g_415.s7, "p_1146->g_415.s7", print_hash_value);
    transparent_crc(p_1146->g_415.s8, "p_1146->g_415.s8", print_hash_value);
    transparent_crc(p_1146->g_415.s9, "p_1146->g_415.s9", print_hash_value);
    transparent_crc(p_1146->g_415.sa, "p_1146->g_415.sa", print_hash_value);
    transparent_crc(p_1146->g_415.sb, "p_1146->g_415.sb", print_hash_value);
    transparent_crc(p_1146->g_415.sc, "p_1146->g_415.sc", print_hash_value);
    transparent_crc(p_1146->g_415.sd, "p_1146->g_415.sd", print_hash_value);
    transparent_crc(p_1146->g_415.se, "p_1146->g_415.se", print_hash_value);
    transparent_crc(p_1146->g_415.sf, "p_1146->g_415.sf", print_hash_value);
    transparent_crc(p_1146->g_420.s0, "p_1146->g_420.s0", print_hash_value);
    transparent_crc(p_1146->g_420.s1, "p_1146->g_420.s1", print_hash_value);
    transparent_crc(p_1146->g_420.s2, "p_1146->g_420.s2", print_hash_value);
    transparent_crc(p_1146->g_420.s3, "p_1146->g_420.s3", print_hash_value);
    transparent_crc(p_1146->g_420.s4, "p_1146->g_420.s4", print_hash_value);
    transparent_crc(p_1146->g_420.s5, "p_1146->g_420.s5", print_hash_value);
    transparent_crc(p_1146->g_420.s6, "p_1146->g_420.s6", print_hash_value);
    transparent_crc(p_1146->g_420.s7, "p_1146->g_420.s7", print_hash_value);
    transparent_crc(p_1146->g_429.x, "p_1146->g_429.x", print_hash_value);
    transparent_crc(p_1146->g_429.y, "p_1146->g_429.y", print_hash_value);
    transparent_crc(p_1146->g_429.z, "p_1146->g_429.z", print_hash_value);
    transparent_crc(p_1146->g_429.w, "p_1146->g_429.w", print_hash_value);
    transparent_crc(p_1146->g_486, "p_1146->g_486", print_hash_value);
    transparent_crc(p_1146->g_491.x, "p_1146->g_491.x", print_hash_value);
    transparent_crc(p_1146->g_491.y, "p_1146->g_491.y", print_hash_value);
    transparent_crc(p_1146->g_493.s0, "p_1146->g_493.s0", print_hash_value);
    transparent_crc(p_1146->g_493.s1, "p_1146->g_493.s1", print_hash_value);
    transparent_crc(p_1146->g_493.s2, "p_1146->g_493.s2", print_hash_value);
    transparent_crc(p_1146->g_493.s3, "p_1146->g_493.s3", print_hash_value);
    transparent_crc(p_1146->g_493.s4, "p_1146->g_493.s4", print_hash_value);
    transparent_crc(p_1146->g_493.s5, "p_1146->g_493.s5", print_hash_value);
    transparent_crc(p_1146->g_493.s6, "p_1146->g_493.s6", print_hash_value);
    transparent_crc(p_1146->g_493.s7, "p_1146->g_493.s7", print_hash_value);
    transparent_crc(p_1146->g_493.s8, "p_1146->g_493.s8", print_hash_value);
    transparent_crc(p_1146->g_493.s9, "p_1146->g_493.s9", print_hash_value);
    transparent_crc(p_1146->g_493.sa, "p_1146->g_493.sa", print_hash_value);
    transparent_crc(p_1146->g_493.sb, "p_1146->g_493.sb", print_hash_value);
    transparent_crc(p_1146->g_493.sc, "p_1146->g_493.sc", print_hash_value);
    transparent_crc(p_1146->g_493.sd, "p_1146->g_493.sd", print_hash_value);
    transparent_crc(p_1146->g_493.se, "p_1146->g_493.se", print_hash_value);
    transparent_crc(p_1146->g_493.sf, "p_1146->g_493.sf", print_hash_value);
    transparent_crc(p_1146->g_516.f0, "p_1146->g_516.f0", print_hash_value);
    transparent_crc(p_1146->g_516.f1, "p_1146->g_516.f1", print_hash_value);
    transparent_crc(p_1146->g_516.f2, "p_1146->g_516.f2", print_hash_value);
    transparent_crc(p_1146->g_530.s0, "p_1146->g_530.s0", print_hash_value);
    transparent_crc(p_1146->g_530.s1, "p_1146->g_530.s1", print_hash_value);
    transparent_crc(p_1146->g_530.s2, "p_1146->g_530.s2", print_hash_value);
    transparent_crc(p_1146->g_530.s3, "p_1146->g_530.s3", print_hash_value);
    transparent_crc(p_1146->g_530.s4, "p_1146->g_530.s4", print_hash_value);
    transparent_crc(p_1146->g_530.s5, "p_1146->g_530.s5", print_hash_value);
    transparent_crc(p_1146->g_530.s6, "p_1146->g_530.s6", print_hash_value);
    transparent_crc(p_1146->g_530.s7, "p_1146->g_530.s7", print_hash_value);
    transparent_crc(p_1146->g_543.s0, "p_1146->g_543.s0", print_hash_value);
    transparent_crc(p_1146->g_543.s1, "p_1146->g_543.s1", print_hash_value);
    transparent_crc(p_1146->g_543.s2, "p_1146->g_543.s2", print_hash_value);
    transparent_crc(p_1146->g_543.s3, "p_1146->g_543.s3", print_hash_value);
    transparent_crc(p_1146->g_543.s4, "p_1146->g_543.s4", print_hash_value);
    transparent_crc(p_1146->g_543.s5, "p_1146->g_543.s5", print_hash_value);
    transparent_crc(p_1146->g_543.s6, "p_1146->g_543.s6", print_hash_value);
    transparent_crc(p_1146->g_543.s7, "p_1146->g_543.s7", print_hash_value);
    transparent_crc(p_1146->g_548, "p_1146->g_548", print_hash_value);
    transparent_crc(p_1146->g_597.s0, "p_1146->g_597.s0", print_hash_value);
    transparent_crc(p_1146->g_597.s1, "p_1146->g_597.s1", print_hash_value);
    transparent_crc(p_1146->g_597.s2, "p_1146->g_597.s2", print_hash_value);
    transparent_crc(p_1146->g_597.s3, "p_1146->g_597.s3", print_hash_value);
    transparent_crc(p_1146->g_597.s4, "p_1146->g_597.s4", print_hash_value);
    transparent_crc(p_1146->g_597.s5, "p_1146->g_597.s5", print_hash_value);
    transparent_crc(p_1146->g_597.s6, "p_1146->g_597.s6", print_hash_value);
    transparent_crc(p_1146->g_597.s7, "p_1146->g_597.s7", print_hash_value);
    transparent_crc(p_1146->g_597.s8, "p_1146->g_597.s8", print_hash_value);
    transparent_crc(p_1146->g_597.s9, "p_1146->g_597.s9", print_hash_value);
    transparent_crc(p_1146->g_597.sa, "p_1146->g_597.sa", print_hash_value);
    transparent_crc(p_1146->g_597.sb, "p_1146->g_597.sb", print_hash_value);
    transparent_crc(p_1146->g_597.sc, "p_1146->g_597.sc", print_hash_value);
    transparent_crc(p_1146->g_597.sd, "p_1146->g_597.sd", print_hash_value);
    transparent_crc(p_1146->g_597.se, "p_1146->g_597.se", print_hash_value);
    transparent_crc(p_1146->g_597.sf, "p_1146->g_597.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1146->g_611[i].f0, "p_1146->g_611[i].f0", print_hash_value);
        transparent_crc(p_1146->g_611[i].f1, "p_1146->g_611[i].f1", print_hash_value);
        transparent_crc(p_1146->g_611[i].f2, "p_1146->g_611[i].f2", print_hash_value);

    }
    transparent_crc(p_1146->g_619.s0, "p_1146->g_619.s0", print_hash_value);
    transparent_crc(p_1146->g_619.s1, "p_1146->g_619.s1", print_hash_value);
    transparent_crc(p_1146->g_619.s2, "p_1146->g_619.s2", print_hash_value);
    transparent_crc(p_1146->g_619.s3, "p_1146->g_619.s3", print_hash_value);
    transparent_crc(p_1146->g_619.s4, "p_1146->g_619.s4", print_hash_value);
    transparent_crc(p_1146->g_619.s5, "p_1146->g_619.s5", print_hash_value);
    transparent_crc(p_1146->g_619.s6, "p_1146->g_619.s6", print_hash_value);
    transparent_crc(p_1146->g_619.s7, "p_1146->g_619.s7", print_hash_value);
    transparent_crc(p_1146->g_620.x, "p_1146->g_620.x", print_hash_value);
    transparent_crc(p_1146->g_620.y, "p_1146->g_620.y", print_hash_value);
    transparent_crc(p_1146->g_624, "p_1146->g_624", print_hash_value);
    transparent_crc(p_1146->g_669.x, "p_1146->g_669.x", print_hash_value);
    transparent_crc(p_1146->g_669.y, "p_1146->g_669.y", print_hash_value);
    transparent_crc(p_1146->g_669.z, "p_1146->g_669.z", print_hash_value);
    transparent_crc(p_1146->g_669.w, "p_1146->g_669.w", print_hash_value);
    transparent_crc(p_1146->g_682.x, "p_1146->g_682.x", print_hash_value);
    transparent_crc(p_1146->g_682.y, "p_1146->g_682.y", print_hash_value);
    transparent_crc(p_1146->g_682.z, "p_1146->g_682.z", print_hash_value);
    transparent_crc(p_1146->g_682.w, "p_1146->g_682.w", print_hash_value);
    transparent_crc(p_1146->g_703.f0, "p_1146->g_703.f0", print_hash_value);
    transparent_crc(p_1146->g_703.f1, "p_1146->g_703.f1", print_hash_value);
    transparent_crc(p_1146->g_703.f2, "p_1146->g_703.f2", print_hash_value);
    transparent_crc(p_1146->g_709.s0, "p_1146->g_709.s0", print_hash_value);
    transparent_crc(p_1146->g_709.s1, "p_1146->g_709.s1", print_hash_value);
    transparent_crc(p_1146->g_709.s2, "p_1146->g_709.s2", print_hash_value);
    transparent_crc(p_1146->g_709.s3, "p_1146->g_709.s3", print_hash_value);
    transparent_crc(p_1146->g_709.s4, "p_1146->g_709.s4", print_hash_value);
    transparent_crc(p_1146->g_709.s5, "p_1146->g_709.s5", print_hash_value);
    transparent_crc(p_1146->g_709.s6, "p_1146->g_709.s6", print_hash_value);
    transparent_crc(p_1146->g_709.s7, "p_1146->g_709.s7", print_hash_value);
    transparent_crc(p_1146->g_709.s8, "p_1146->g_709.s8", print_hash_value);
    transparent_crc(p_1146->g_709.s9, "p_1146->g_709.s9", print_hash_value);
    transparent_crc(p_1146->g_709.sa, "p_1146->g_709.sa", print_hash_value);
    transparent_crc(p_1146->g_709.sb, "p_1146->g_709.sb", print_hash_value);
    transparent_crc(p_1146->g_709.sc, "p_1146->g_709.sc", print_hash_value);
    transparent_crc(p_1146->g_709.sd, "p_1146->g_709.sd", print_hash_value);
    transparent_crc(p_1146->g_709.se, "p_1146->g_709.se", print_hash_value);
    transparent_crc(p_1146->g_709.sf, "p_1146->g_709.sf", print_hash_value);
    transparent_crc(p_1146->g_713.s0, "p_1146->g_713.s0", print_hash_value);
    transparent_crc(p_1146->g_713.s1, "p_1146->g_713.s1", print_hash_value);
    transparent_crc(p_1146->g_713.s2, "p_1146->g_713.s2", print_hash_value);
    transparent_crc(p_1146->g_713.s3, "p_1146->g_713.s3", print_hash_value);
    transparent_crc(p_1146->g_713.s4, "p_1146->g_713.s4", print_hash_value);
    transparent_crc(p_1146->g_713.s5, "p_1146->g_713.s5", print_hash_value);
    transparent_crc(p_1146->g_713.s6, "p_1146->g_713.s6", print_hash_value);
    transparent_crc(p_1146->g_713.s7, "p_1146->g_713.s7", print_hash_value);
    transparent_crc(p_1146->g_740.s0, "p_1146->g_740.s0", print_hash_value);
    transparent_crc(p_1146->g_740.s1, "p_1146->g_740.s1", print_hash_value);
    transparent_crc(p_1146->g_740.s2, "p_1146->g_740.s2", print_hash_value);
    transparent_crc(p_1146->g_740.s3, "p_1146->g_740.s3", print_hash_value);
    transparent_crc(p_1146->g_740.s4, "p_1146->g_740.s4", print_hash_value);
    transparent_crc(p_1146->g_740.s5, "p_1146->g_740.s5", print_hash_value);
    transparent_crc(p_1146->g_740.s6, "p_1146->g_740.s6", print_hash_value);
    transparent_crc(p_1146->g_740.s7, "p_1146->g_740.s7", print_hash_value);
    transparent_crc(p_1146->g_753.x, "p_1146->g_753.x", print_hash_value);
    transparent_crc(p_1146->g_753.y, "p_1146->g_753.y", print_hash_value);
    transparent_crc(p_1146->g_755.s0, "p_1146->g_755.s0", print_hash_value);
    transparent_crc(p_1146->g_755.s1, "p_1146->g_755.s1", print_hash_value);
    transparent_crc(p_1146->g_755.s2, "p_1146->g_755.s2", print_hash_value);
    transparent_crc(p_1146->g_755.s3, "p_1146->g_755.s3", print_hash_value);
    transparent_crc(p_1146->g_755.s4, "p_1146->g_755.s4", print_hash_value);
    transparent_crc(p_1146->g_755.s5, "p_1146->g_755.s5", print_hash_value);
    transparent_crc(p_1146->g_755.s6, "p_1146->g_755.s6", print_hash_value);
    transparent_crc(p_1146->g_755.s7, "p_1146->g_755.s7", print_hash_value);
    transparent_crc(p_1146->g_755.s8, "p_1146->g_755.s8", print_hash_value);
    transparent_crc(p_1146->g_755.s9, "p_1146->g_755.s9", print_hash_value);
    transparent_crc(p_1146->g_755.sa, "p_1146->g_755.sa", print_hash_value);
    transparent_crc(p_1146->g_755.sb, "p_1146->g_755.sb", print_hash_value);
    transparent_crc(p_1146->g_755.sc, "p_1146->g_755.sc", print_hash_value);
    transparent_crc(p_1146->g_755.sd, "p_1146->g_755.sd", print_hash_value);
    transparent_crc(p_1146->g_755.se, "p_1146->g_755.se", print_hash_value);
    transparent_crc(p_1146->g_755.sf, "p_1146->g_755.sf", print_hash_value);
    transparent_crc(p_1146->g_780.s0, "p_1146->g_780.s0", print_hash_value);
    transparent_crc(p_1146->g_780.s1, "p_1146->g_780.s1", print_hash_value);
    transparent_crc(p_1146->g_780.s2, "p_1146->g_780.s2", print_hash_value);
    transparent_crc(p_1146->g_780.s3, "p_1146->g_780.s3", print_hash_value);
    transparent_crc(p_1146->g_780.s4, "p_1146->g_780.s4", print_hash_value);
    transparent_crc(p_1146->g_780.s5, "p_1146->g_780.s5", print_hash_value);
    transparent_crc(p_1146->g_780.s6, "p_1146->g_780.s6", print_hash_value);
    transparent_crc(p_1146->g_780.s7, "p_1146->g_780.s7", print_hash_value);
    transparent_crc(p_1146->g_780.s8, "p_1146->g_780.s8", print_hash_value);
    transparent_crc(p_1146->g_780.s9, "p_1146->g_780.s9", print_hash_value);
    transparent_crc(p_1146->g_780.sa, "p_1146->g_780.sa", print_hash_value);
    transparent_crc(p_1146->g_780.sb, "p_1146->g_780.sb", print_hash_value);
    transparent_crc(p_1146->g_780.sc, "p_1146->g_780.sc", print_hash_value);
    transparent_crc(p_1146->g_780.sd, "p_1146->g_780.sd", print_hash_value);
    transparent_crc(p_1146->g_780.se, "p_1146->g_780.se", print_hash_value);
    transparent_crc(p_1146->g_780.sf, "p_1146->g_780.sf", print_hash_value);
    transparent_crc(p_1146->g_801, "p_1146->g_801", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1146->g_817[i][j], "p_1146->g_817[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1146->g_833.s0, "p_1146->g_833.s0", print_hash_value);
    transparent_crc(p_1146->g_833.s1, "p_1146->g_833.s1", print_hash_value);
    transparent_crc(p_1146->g_833.s2, "p_1146->g_833.s2", print_hash_value);
    transparent_crc(p_1146->g_833.s3, "p_1146->g_833.s3", print_hash_value);
    transparent_crc(p_1146->g_833.s4, "p_1146->g_833.s4", print_hash_value);
    transparent_crc(p_1146->g_833.s5, "p_1146->g_833.s5", print_hash_value);
    transparent_crc(p_1146->g_833.s6, "p_1146->g_833.s6", print_hash_value);
    transparent_crc(p_1146->g_833.s7, "p_1146->g_833.s7", print_hash_value);
    transparent_crc(p_1146->g_846.f0, "p_1146->g_846.f0", print_hash_value);
    transparent_crc(p_1146->g_846.f1, "p_1146->g_846.f1", print_hash_value);
    transparent_crc(p_1146->g_846.f2, "p_1146->g_846.f2", print_hash_value);
    transparent_crc(p_1146->g_849.x, "p_1146->g_849.x", print_hash_value);
    transparent_crc(p_1146->g_849.y, "p_1146->g_849.y", print_hash_value);
    transparent_crc(p_1146->g_879.f0, "p_1146->g_879.f0", print_hash_value);
    transparent_crc(p_1146->g_879.f1, "p_1146->g_879.f1", print_hash_value);
    transparent_crc(p_1146->g_879.f2, "p_1146->g_879.f2", print_hash_value);
    transparent_crc(p_1146->g_896.x, "p_1146->g_896.x", print_hash_value);
    transparent_crc(p_1146->g_896.y, "p_1146->g_896.y", print_hash_value);
    transparent_crc(p_1146->g_909.s0, "p_1146->g_909.s0", print_hash_value);
    transparent_crc(p_1146->g_909.s1, "p_1146->g_909.s1", print_hash_value);
    transparent_crc(p_1146->g_909.s2, "p_1146->g_909.s2", print_hash_value);
    transparent_crc(p_1146->g_909.s3, "p_1146->g_909.s3", print_hash_value);
    transparent_crc(p_1146->g_909.s4, "p_1146->g_909.s4", print_hash_value);
    transparent_crc(p_1146->g_909.s5, "p_1146->g_909.s5", print_hash_value);
    transparent_crc(p_1146->g_909.s6, "p_1146->g_909.s6", print_hash_value);
    transparent_crc(p_1146->g_909.s7, "p_1146->g_909.s7", print_hash_value);
    transparent_crc(p_1146->g_913, "p_1146->g_913", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1146->g_914[i][j][k], "p_1146->g_914[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1146->g_931, "p_1146->g_931", print_hash_value);
    transparent_crc(p_1146->g_947.x, "p_1146->g_947.x", print_hash_value);
    transparent_crc(p_1146->g_947.y, "p_1146->g_947.y", print_hash_value);
    transparent_crc(p_1146->g_947.z, "p_1146->g_947.z", print_hash_value);
    transparent_crc(p_1146->g_947.w, "p_1146->g_947.w", print_hash_value);
    transparent_crc(p_1146->g_971.x, "p_1146->g_971.x", print_hash_value);
    transparent_crc(p_1146->g_971.y, "p_1146->g_971.y", print_hash_value);
    transparent_crc(p_1146->g_971.z, "p_1146->g_971.z", print_hash_value);
    transparent_crc(p_1146->g_971.w, "p_1146->g_971.w", print_hash_value);
    transparent_crc(p_1146->g_979, "p_1146->g_979", print_hash_value);
    transparent_crc(p_1146->g_997.s0, "p_1146->g_997.s0", print_hash_value);
    transparent_crc(p_1146->g_997.s1, "p_1146->g_997.s1", print_hash_value);
    transparent_crc(p_1146->g_997.s2, "p_1146->g_997.s2", print_hash_value);
    transparent_crc(p_1146->g_997.s3, "p_1146->g_997.s3", print_hash_value);
    transparent_crc(p_1146->g_997.s4, "p_1146->g_997.s4", print_hash_value);
    transparent_crc(p_1146->g_997.s5, "p_1146->g_997.s5", print_hash_value);
    transparent_crc(p_1146->g_997.s6, "p_1146->g_997.s6", print_hash_value);
    transparent_crc(p_1146->g_997.s7, "p_1146->g_997.s7", print_hash_value);
    transparent_crc(p_1146->g_998.s0, "p_1146->g_998.s0", print_hash_value);
    transparent_crc(p_1146->g_998.s1, "p_1146->g_998.s1", print_hash_value);
    transparent_crc(p_1146->g_998.s2, "p_1146->g_998.s2", print_hash_value);
    transparent_crc(p_1146->g_998.s3, "p_1146->g_998.s3", print_hash_value);
    transparent_crc(p_1146->g_998.s4, "p_1146->g_998.s4", print_hash_value);
    transparent_crc(p_1146->g_998.s5, "p_1146->g_998.s5", print_hash_value);
    transparent_crc(p_1146->g_998.s6, "p_1146->g_998.s6", print_hash_value);
    transparent_crc(p_1146->g_998.s7, "p_1146->g_998.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1146->g_1058[i][j].f0, "p_1146->g_1058[i][j].f0", print_hash_value);
            transparent_crc(p_1146->g_1058[i][j].f1, "p_1146->g_1058[i][j].f1", print_hash_value);
            transparent_crc(p_1146->g_1058[i][j].f2, "p_1146->g_1058[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1146->g_1066.f0, "p_1146->g_1066.f0", print_hash_value);
    transparent_crc(p_1146->g_1066.f1, "p_1146->g_1066.f1", print_hash_value);
    transparent_crc(p_1146->g_1066.f2, "p_1146->g_1066.f2", print_hash_value);
    transparent_crc(p_1146->g_1067.x, "p_1146->g_1067.x", print_hash_value);
    transparent_crc(p_1146->g_1067.y, "p_1146->g_1067.y", print_hash_value);
    transparent_crc(p_1146->g_1067.z, "p_1146->g_1067.z", print_hash_value);
    transparent_crc(p_1146->g_1067.w, "p_1146->g_1067.w", print_hash_value);
    transparent_crc(p_1146->g_1071.s0, "p_1146->g_1071.s0", print_hash_value);
    transparent_crc(p_1146->g_1071.s1, "p_1146->g_1071.s1", print_hash_value);
    transparent_crc(p_1146->g_1071.s2, "p_1146->g_1071.s2", print_hash_value);
    transparent_crc(p_1146->g_1071.s3, "p_1146->g_1071.s3", print_hash_value);
    transparent_crc(p_1146->g_1071.s4, "p_1146->g_1071.s4", print_hash_value);
    transparent_crc(p_1146->g_1071.s5, "p_1146->g_1071.s5", print_hash_value);
    transparent_crc(p_1146->g_1071.s6, "p_1146->g_1071.s6", print_hash_value);
    transparent_crc(p_1146->g_1071.s7, "p_1146->g_1071.s7", print_hash_value);
    transparent_crc(p_1146->g_1071.s8, "p_1146->g_1071.s8", print_hash_value);
    transparent_crc(p_1146->g_1071.s9, "p_1146->g_1071.s9", print_hash_value);
    transparent_crc(p_1146->g_1071.sa, "p_1146->g_1071.sa", print_hash_value);
    transparent_crc(p_1146->g_1071.sb, "p_1146->g_1071.sb", print_hash_value);
    transparent_crc(p_1146->g_1071.sc, "p_1146->g_1071.sc", print_hash_value);
    transparent_crc(p_1146->g_1071.sd, "p_1146->g_1071.sd", print_hash_value);
    transparent_crc(p_1146->g_1071.se, "p_1146->g_1071.se", print_hash_value);
    transparent_crc(p_1146->g_1071.sf, "p_1146->g_1071.sf", print_hash_value);
    transparent_crc(p_1146->g_1072.s0, "p_1146->g_1072.s0", print_hash_value);
    transparent_crc(p_1146->g_1072.s1, "p_1146->g_1072.s1", print_hash_value);
    transparent_crc(p_1146->g_1072.s2, "p_1146->g_1072.s2", print_hash_value);
    transparent_crc(p_1146->g_1072.s3, "p_1146->g_1072.s3", print_hash_value);
    transparent_crc(p_1146->g_1072.s4, "p_1146->g_1072.s4", print_hash_value);
    transparent_crc(p_1146->g_1072.s5, "p_1146->g_1072.s5", print_hash_value);
    transparent_crc(p_1146->g_1072.s6, "p_1146->g_1072.s6", print_hash_value);
    transparent_crc(p_1146->g_1072.s7, "p_1146->g_1072.s7", print_hash_value);
    transparent_crc(p_1146->g_1072.s8, "p_1146->g_1072.s8", print_hash_value);
    transparent_crc(p_1146->g_1072.s9, "p_1146->g_1072.s9", print_hash_value);
    transparent_crc(p_1146->g_1072.sa, "p_1146->g_1072.sa", print_hash_value);
    transparent_crc(p_1146->g_1072.sb, "p_1146->g_1072.sb", print_hash_value);
    transparent_crc(p_1146->g_1072.sc, "p_1146->g_1072.sc", print_hash_value);
    transparent_crc(p_1146->g_1072.sd, "p_1146->g_1072.sd", print_hash_value);
    transparent_crc(p_1146->g_1072.se, "p_1146->g_1072.se", print_hash_value);
    transparent_crc(p_1146->g_1072.sf, "p_1146->g_1072.sf", print_hash_value);
    transparent_crc(p_1146->g_1112.f0, "p_1146->g_1112.f0", print_hash_value);
    transparent_crc(p_1146->g_1112.f1, "p_1146->g_1112.f1", print_hash_value);
    transparent_crc(p_1146->g_1112.f2, "p_1146->g_1112.f2", print_hash_value);
    transparent_crc(p_1146->g_1119.s0, "p_1146->g_1119.s0", print_hash_value);
    transparent_crc(p_1146->g_1119.s1, "p_1146->g_1119.s1", print_hash_value);
    transparent_crc(p_1146->g_1119.s2, "p_1146->g_1119.s2", print_hash_value);
    transparent_crc(p_1146->g_1119.s3, "p_1146->g_1119.s3", print_hash_value);
    transparent_crc(p_1146->g_1119.s4, "p_1146->g_1119.s4", print_hash_value);
    transparent_crc(p_1146->g_1119.s5, "p_1146->g_1119.s5", print_hash_value);
    transparent_crc(p_1146->g_1119.s6, "p_1146->g_1119.s6", print_hash_value);
    transparent_crc(p_1146->g_1119.s7, "p_1146->g_1119.s7", print_hash_value);
    transparent_crc(p_1146->g_1135.x, "p_1146->g_1135.x", print_hash_value);
    transparent_crc(p_1146->g_1135.y, "p_1146->g_1135.y", print_hash_value);
    transparent_crc(p_1146->g_1135.z, "p_1146->g_1135.z", print_hash_value);
    transparent_crc(p_1146->g_1135.w, "p_1146->g_1135.w", print_hash_value);
    transparent_crc(p_1146->g_1136.x, "p_1146->g_1136.x", print_hash_value);
    transparent_crc(p_1146->g_1136.y, "p_1146->g_1136.y", print_hash_value);
    transparent_crc(p_1146->g_1136.z, "p_1146->g_1136.z", print_hash_value);
    transparent_crc(p_1146->g_1136.w, "p_1146->g_1136.w", print_hash_value);
    transparent_crc(p_1146->v_collective, "p_1146->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 90; i++)
            transparent_crc(p_1146->l_special_values[i], "p_1146->l_special_values[i]", print_hash_value);
    transparent_crc(p_1146->l_comm_values[get_linear_local_id()], "p_1146->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1146->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()], "p_1146->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
