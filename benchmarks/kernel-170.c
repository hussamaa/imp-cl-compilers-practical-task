// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 64,66,2 -l 1,66,1
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

__constant uint32_t permutations[10][66] = {
{51,21,12,39,6,3,18,53,14,46,24,49,5,1,4,48,23,57,50,37,19,10,0,55,42,60,52,9,35,25,32,40,22,63,36,28,58,2,11,31,65,27,16,15,47,59,43,61,17,45,41,64,7,44,13,62,30,38,26,8,29,56,33,20,54,34}, // permutation 0
{37,44,3,56,33,13,21,51,63,64,7,22,9,15,29,23,54,12,24,20,11,35,57,16,38,46,59,32,50,25,41,65,17,19,28,58,60,10,40,18,4,36,39,5,0,61,49,45,42,6,27,8,52,1,34,26,2,62,14,53,55,30,43,47,48,31}, // permutation 1
{36,55,19,64,39,30,3,45,46,49,27,16,35,42,18,52,6,15,29,41,0,48,13,65,17,20,59,47,26,4,34,62,50,32,51,25,14,11,61,57,12,58,33,37,56,2,5,9,63,38,22,28,1,23,43,7,24,10,40,60,44,21,8,53,54,31}, // permutation 2
{54,21,7,2,18,19,28,37,23,61,17,57,60,12,31,44,20,9,24,3,0,51,52,62,4,34,10,49,14,55,59,53,32,38,8,22,63,46,29,65,36,43,33,47,25,15,11,1,39,41,42,48,5,26,40,16,6,35,30,64,50,27,56,58,45,13}, // permutation 3
{17,36,32,10,9,24,53,47,13,22,48,29,16,8,44,37,51,33,1,25,50,30,20,12,59,40,26,60,35,54,28,3,55,5,6,45,11,46,0,61,65,18,38,2,42,27,52,41,4,43,34,23,64,62,39,7,57,19,63,49,31,56,15,14,21,58}, // permutation 4
{27,36,35,25,49,41,52,54,46,32,45,1,24,2,42,57,60,20,40,33,10,15,12,6,30,16,22,50,43,29,56,53,21,8,5,7,4,48,44,28,9,19,37,11,39,62,38,17,58,0,23,59,3,64,63,13,18,47,65,14,61,34,51,26,55,31}, // permutation 5
{35,20,24,1,43,55,50,37,39,63,44,22,0,59,16,32,58,9,14,6,8,48,42,5,13,51,62,25,10,49,34,2,31,19,41,23,40,17,12,60,54,46,27,30,26,45,7,21,57,28,11,36,47,4,18,64,15,29,52,38,33,65,56,53,61,3}, // permutation 6
{31,0,46,13,4,42,15,29,51,6,7,56,63,3,12,43,39,19,16,65,10,27,30,38,37,53,18,1,36,40,14,2,64,44,32,60,11,17,62,28,55,41,23,26,33,24,49,47,21,57,48,50,58,54,45,9,35,25,22,61,5,20,52,59,34,8}, // permutation 7
{7,53,12,10,58,30,64,32,57,19,11,45,47,44,20,6,22,56,34,26,41,14,24,43,15,46,42,37,16,27,61,0,39,2,38,28,65,29,40,51,48,52,35,55,1,63,62,21,8,54,31,49,5,9,13,17,60,4,3,33,50,36,18,25,59,23}, // permutation 8
{41,30,37,40,50,46,34,62,44,29,58,63,49,33,55,7,12,26,32,53,11,13,31,43,5,9,36,6,27,60,38,64,61,48,18,28,10,24,25,45,52,22,21,16,54,39,23,19,14,56,1,65,59,47,2,3,57,8,17,20,0,4,35,42,15,51} // permutation 9
};

// Seed: 33294186

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint64_t  f1;
};

struct S1 {
    int32_t g_13[9];
    int64_t g_16;
    int32_t g_31[4];
    volatile int32_t g_38;
    volatile int32_t * volatile g_37[5][1];
    volatile int32_t * volatile * volatile g_36;
    volatile int64_t g_55;
    volatile int64_t * volatile g_54[8];
    VECTOR(int32_t, 4) g_56;
    volatile VECTOR(int32_t, 8) g_59;
    VECTOR(int32_t, 4) g_60;
    int32_t g_69;
    int32_t * volatile g_68;
    int8_t g_71;
    int16_t g_74;
    uint16_t g_99;
    uint8_t g_153;
    VECTOR(int16_t, 4) g_155;
    volatile int32_t g_179;
    volatile int32_t *g_178;
    volatile int32_t ** volatile g_177;
    volatile int32_t ** volatile g_180;
    volatile int32_t ** volatile *g_176[4];
    int32_t *g_215;
    int32_t *g_219;
    int32_t **g_218;
    int32_t ***g_217[3][7];
    volatile VECTOR(uint64_t, 4) g_223;
    int32_t **g_247;
    VECTOR(uint32_t, 16) g_249;
    VECTOR(uint8_t, 2) g_254;
    VECTOR(int16_t, 16) g_267;
    VECTOR(int8_t, 16) g_280;
    volatile VECTOR(int32_t, 8) g_297;
    union U0 g_305;
    uint64_t g_319;
    VECTOR(uint32_t, 16) g_322;
    volatile VECTOR(uint32_t, 2) g_335;
    volatile VECTOR(uint32_t, 8) g_361;
    VECTOR(int8_t, 4) g_370;
    volatile VECTOR(int64_t, 2) g_380;
    volatile VECTOR(int8_t, 4) g_415;
    int64_t * volatile g_427;
    volatile uint8_t *g_452;
    volatile uint8_t * volatile *g_451;
    int64_t g_468;
    VECTOR(uint32_t, 8) g_469;
    VECTOR(int16_t, 16) g_487;
    VECTOR(int16_t, 4) g_513;
    VECTOR(int16_t, 16) g_525;
    volatile VECTOR(int16_t, 16) g_526;
    VECTOR(uint16_t, 16) g_538;
    VECTOR(uint16_t, 4) g_539;
    union U0 *g_554;
    uint16_t *g_568[3][8][10];
    VECTOR(int32_t, 2) g_628;
    VECTOR(int32_t, 16) g_629;
    volatile VECTOR(int32_t, 16) g_637;
    VECTOR(uint8_t, 8) g_648;
    volatile VECTOR(int16_t, 2) g_670;
    VECTOR(int32_t, 16) g_682;
    volatile VECTOR(int16_t, 2) g_692;
    VECTOR(int16_t, 8) g_695;
    VECTOR(uint64_t, 16) g_698;
    VECTOR(uint64_t, 8) g_699;
    VECTOR(int32_t, 16) g_719;
    volatile VECTOR(uint64_t, 2) g_722;
    volatile VECTOR(uint64_t, 2) g_723;
    volatile VECTOR(uint64_t, 16) g_724;
    volatile uint16_t * volatile g_728;
    volatile VECTOR(int32_t, 4) g_740;
    volatile VECTOR(int32_t, 2) g_742;
    volatile VECTOR(int16_t, 4) g_779;
    VECTOR(int16_t, 16) g_781;
    uint8_t g_791;
    uint64_t *g_818[4][1];
    uint64_t ** volatile g_817;
    uint64_t ** volatile * volatile g_819;
    volatile VECTOR(uint16_t, 8) g_844;
    uint64_t g_904;
    int32_t g_910;
    volatile uint8_t g_937;
    int8_t g_965;
    volatile uint32_t g_970[4][8][8];
    VECTOR(uint32_t, 8) g_977;
    volatile VECTOR(int32_t, 4) g_982;
    volatile VECTOR(uint32_t, 4) g_985;
    VECTOR(int32_t, 8) g_1043;
    int8_t *g_1046;
    volatile union U0 * volatile *g_1060;
    volatile union U0 * volatile **g_1059;
    uint32_t g_1064[9];
    volatile uint64_t g_1086;
    volatile VECTOR(int16_t, 8) g_1121;
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
int64_t  func_1(struct S1 * p_1122);
uint8_t  func_6(int8_t  p_7, uint64_t  p_8, int64_t  p_9, int8_t  p_10, struct S1 * p_1122);
int8_t  func_17(union U0  p_18, int8_t  p_19, union U0  p_20, int8_t  p_21, int64_t * p_22, struct S1 * p_1122);
union U0  func_23(int32_t  p_24, int64_t  p_25, int32_t * p_26, uint32_t  p_27, int64_t  p_28, struct S1 * p_1122);
int32_t * func_79(int64_t * p_80, int8_t * p_81, int32_t ** p_82, int8_t * p_83, int32_t  p_84, struct S1 * p_1122);
int32_t ** func_87(uint32_t  p_88, int64_t  p_89, struct S1 * p_1122);
int64_t  func_92(uint16_t  p_93, int32_t * p_94, uint32_t  p_95, int32_t *** p_96, int32_t ** p_97, struct S1 * p_1122);
int32_t *** func_101(int32_t *** p_102, int8_t * p_103, int64_t  p_104, uint8_t  p_105, int64_t * p_106, struct S1 * p_1122);
int32_t *** func_107(int32_t  p_108, int16_t  p_109, int8_t  p_110, struct S1 * p_1122);
int64_t  func_115(uint8_t  p_116, int32_t * p_117, uint64_t  p_118, union U0  p_119, struct S1 * p_1122);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1122->g_comm_values p_1122->l_comm_values p_1122->g_31 p_1122->g_54 p_1122->g_56 p_1122->g_59 p_1122->g_60 p_1122->g_68 p_1122->g_13
 * writes: p_1122->g_13 p_1122->g_16 p_1122->g_36 p_1122->g_31 p_1122->g_69 p_1122->g_71 p_1122->g_74
 */
int64_t  func_1(struct S1 * p_1122)
{ /* block id: 4 */
    VECTOR(uint32_t, 4) l_11 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967287UL), 4294967287UL);
    int32_t *l_12 = &p_1122->g_13[2];
    int64_t *l_14 = (void*)0;
    int64_t *l_15 = &p_1122->g_16;
    int32_t *l_30 = &p_1122->g_31[3];
    int32_t **l_29 = &l_30;
    int32_t *l_32 = &p_1122->g_31[3];
    union U0 l_40 = {0x4D633C66L};
    int8_t *l_70 = &p_1122->g_71;
    int64_t *l_85 = &p_1122->g_16;
    int32_t l_1053 = 0x0D008792L;
    int32_t l_1055 = 0x58714531L;
    uint32_t l_1058 = 1UL;
    int32_t *l_1066 = (void*)0;
    int32_t l_1069 = 0x6E8DB3C9L;
    uint32_t l_1098 = 0x6B58E3E7L;
    int32_t l_1111 = 4L;
    uint16_t *l_1114 = &p_1122->g_99;
    int i;
    (*l_32) = ((((((VECTOR(int16_t, 16))((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(249UL, 0xDBL, 0xC4L, func_6(l_11.x, (((*l_12) = (l_11.x && ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xEDL, 0xEDL)))), 0xA1L, 251UL)).x)) > p_1122->g_comm_values[p_1122->tid]), ((*l_15) = p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]), ((*l_70) = func_17(func_23((((*l_29) = (void*)0) == l_32), p_1122->g_31[1], &p_1122->g_31[3], p_1122->g_31[3], (*l_32), p_1122), p_1122->g_31[3], l_40, p_1122->g_31[3], l_15, p_1122)), p_1122), 249UL, ((VECTOR(uint8_t, 2))(1UL)), 0xC5L)).s6764174231040127)).hi, ((VECTOR(uint8_t, 8))(255UL))))).lo, ((VECTOR(uint8_t, 4))(0UL))))).hi, ((VECTOR(uint8_t, 2))(7UL)), ((VECTOR(uint8_t, 2))(0UL))))).lo, p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))])) || (*l_12)), 8L)), ((VECTOR(int16_t, 4))((-9L))), ((VECTOR(int16_t, 8))(5L)), 1L, 7L, (-1L))).s0 , 18446744073709551615UL) != p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]) , (*l_32)) | l_40.f0);
    for (l_40.f1 = (-15); (l_40.f1 < 23); l_40.f1 = safe_add_func_int64_t_s_s(l_40.f1, 1))
    { /* block id: 27 */
        int8_t *l_86 = &p_1122->g_71;
        int32_t *l_122 = (void*)0;
        union U0 l_123 = {0x4F43AC61L};
        int64_t *l_220 = &p_1122->g_16;
        int32_t **l_1045 = &p_1122->g_219;
        uint8_t l_1054 = 0UL;
        uint8_t **l_1056 = (void*)0;
        VECTOR(int64_t, 8) l_1057 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        VECTOR(int32_t, 16) l_1067 = (VECTOR(int32_t, 16))(0x66460B16L, (VECTOR(int32_t, 4))(0x66460B16L, (VECTOR(int32_t, 2))(0x66460B16L, 0x105563EFL), 0x105563EFL), 0x105563EFL, 0x66460B16L, 0x105563EFL, (VECTOR(int32_t, 2))(0x66460B16L, 0x105563EFL), (VECTOR(int32_t, 2))(0x66460B16L, 0x105563EFL), 0x66460B16L, 0x105563EFL, 0x66460B16L, 0x105563EFL);
        uint64_t l_1071[7];
        uint16_t l_1082 = 0xA6E3L;
        int i;
        for (i = 0; i < 7; i++)
            l_1071[i] = 0xB18F2A8E77B2834FL;
        for (p_1122->g_74 = 21; (p_1122->g_74 == 29); ++p_1122->g_74)
        { /* block id: 30 */
            uint16_t *l_98[7][10] = {{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99},{(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,&p_1122->g_99}};
            int8_t l_100 = 0x76L;
            int64_t *l_184 = (void*)0;
            int64_t *l_185 = (void*)0;
            int64_t *l_186 = (void*)0;
            int64_t *l_187 = (void*)0;
            int64_t *l_188 = (void*)0;
            int64_t *l_189[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t l_190 = 0x0E694F7BBAF5E34AL;
            int32_t ****l_246[6][3][5] = {{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}},{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}},{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}},{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}},{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}},{{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0},{(void*)0,&p_1122->g_217[2][2],(void*)0,&p_1122->g_217[2][0],(void*)0}}};
            int i, j, k;
            (1 + 1);
        }
    }
    return (*l_32);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1122->g_74
 */
uint8_t  func_6(int8_t  p_7, uint64_t  p_8, int64_t  p_9, int8_t  p_10, struct S1 * p_1122)
{ /* block id: 21 */
    uint32_t l_72[10];
    int32_t *l_73[7][2] = {{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]},{&p_1122->g_13[2],&p_1122->g_13[2]}};
    int i, j;
    for (i = 0; i < 10; i++)
        l_72[i] = 1UL;
    p_1122->g_74 = l_72[3];
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_54 p_1122->g_comm_values p_1122->g_31 p_1122->g_56 p_1122->g_59 p_1122->g_60 p_1122->g_68
 * writes: p_1122->g_31 p_1122->g_69
 */
int8_t  func_17(union U0  p_18, int8_t  p_19, union U0  p_20, int8_t  p_21, int64_t * p_22, struct S1 * p_1122)
{ /* block id: 11 */
    int32_t *l_49 = &p_1122->g_31[3];
    VECTOR(int32_t, 2) l_57 = (VECTOR(int32_t, 2))(0x0B879B68L, 1L);
    VECTOR(int32_t, 16) l_58 = (VECTOR(int32_t, 16))(0x012CB5DCL, (VECTOR(int32_t, 4))(0x012CB5DCL, (VECTOR(int32_t, 2))(0x012CB5DCL, 0x1F91351DL), 0x1F91351DL), 0x1F91351DL, 0x012CB5DCL, 0x1F91351DL, (VECTOR(int32_t, 2))(0x012CB5DCL, 0x1F91351DL), (VECTOR(int32_t, 2))(0x012CB5DCL, 0x1F91351DL), 0x012CB5DCL, 0x1F91351DL, 0x012CB5DCL, 0x1F91351DL);
    VECTOR(int32_t, 2) l_61 = (VECTOR(int32_t, 2))(0x7A760F2FL, (-7L));
    VECTOR(int32_t, 8) l_62 = (VECTOR(int32_t, 8))(0x210AB9CAL, (VECTOR(int32_t, 4))(0x210AB9CAL, (VECTOR(int32_t, 2))(0x210AB9CAL, (-6L)), (-6L)), (-6L), 0x210AB9CAL, (-6L));
    VECTOR(int32_t, 4) l_63 = (VECTOR(int32_t, 4))(0x2D29C614L, (VECTOR(int32_t, 2))(0x2D29C614L, (-10L)), (-10L));
    VECTOR(int32_t, 16) l_64 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5CE94720L), 0x5CE94720L), 0x5CE94720L, 0L, 0x5CE94720L, (VECTOR(int32_t, 2))(0L, 0x5CE94720L), (VECTOR(int32_t, 2))(0L, 0x5CE94720L), 0L, 0x5CE94720L, 0L, 0x5CE94720L);
    VECTOR(int32_t, 4) l_65 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
    int32_t *l_66 = (void*)0;
    int32_t *l_67[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (p_20.f1 = 12; (p_20.f1 <= 46); p_20.f1 = safe_add_func_uint16_t_u_u(p_20.f1, 4))
    { /* block id: 14 */
        return p_21;
    }
    (*p_1122->g_68) = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_20.f0, ((void*)0 != l_49))), (((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((void*)0 != p_1122->g_54[2]), p_1122->g_comm_values[p_1122->tid])), (*l_49))) , ((*l_49) = ((VECTOR(int32_t, 16))(1L, 9L, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(p_1122->g_56.wywy)).xyyywzwz, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(l_57.yy)).xyxxyyyyxyxyyxxy, ((VECTOR(int32_t, 2))(0x12106DF3L, 0x063D476FL)).xyxxxyyxxxxxxxyx, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(l_58.sbd7c)).x, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(p_1122->g_59.s4063)).zxzxzyyy, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(p_1122->g_60.zxyz)).odd, ((VECTOR(int32_t, 8))(l_61.yxxyyyxx)).s20))), (-1L))).lo, ((VECTOR(int32_t, 2))(l_62.s75))))).yyyxyxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_63.xxwyxzwywxzzzzww)).se, 0x1529ABC0L, 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x64960898L, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_64.s237aee56c84d1b33)))).sb75c, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_65.zzyw)).zxxxyyyw)).even))).w, (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(254UL, 6UL)))).hi & ((*l_49) | p_20.f0)), p_1122->g_60.w, ((VECTOR(int32_t, 8))((-7L))), ((VECTOR(int32_t, 4))(0x1E24EB76L)))).s4fad)), 0x130E9DD3L)).s7137422663214416)).s23, ((VECTOR(int32_t, 2))(4L))))), 0x1C813C75L, 1L)).yzyxxzzwyzzzxzyx)).s706c)).odd)).xyyxyxxx))), 1L, p_19, 0x78952EB5L, ((VECTOR(int32_t, 2))(0L)), 1L))))).lo))), p_20.f0, p_1122->g_60.y, 0x31092FBBL, p_1122->g_60.z, 0x29706E18L, 1L)).sb)) , 1UL))), p_1122->g_56.x));
    return (*l_49);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1122->g_36
 */
union U0  func_23(int32_t  p_24, int64_t  p_25, int32_t * p_26, uint32_t  p_27, int64_t  p_28, struct S1 * p_1122)
{ /* block id: 8 */
    int32_t *l_35 = &p_1122->g_31[3];
    int32_t **l_34 = &l_35;
    int32_t ***l_33[7][8];
    union U0 l_39 = {0L};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
            l_33[i][j] = &l_34;
    }
    p_1122->g_36 = (void*)0;
    return l_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_38 p_1122->g_219 p_1122->g_305 p_1122->g_69 p_1122->g_319 p_1122->g_322 p_1122->g_60 p_1122->g_254 p_1122->g_71 p_1122->g_16 p_1122->g_335 p_1122->g_280 p_1122->g_31 p_1122->g_267 p_1122->g_361 p_1122->g_370 p_1122->g_153 p_1122->g_380 p_1122->g_99 p_1122->g_13 p_1122->g_155 p_1122->g_415 p_1122->g_305.f0 p_1122->g_427 p_1122->g_451 p_1122->g_249 p_1122->g_180 p_1122->g_178 p_1122->g_179 p_1122->g_177 p_1122->g_74 p_1122->g_469 p_1122->g_487 p_1122->g_comm_values p_1122->g_56 p_1122->g_513 p_1122->g_452 p_1122->g_525 p_1122->g_526 p_1122->g_59 p_1122->g_538 p_1122->g_539 p_1122->g_297 p_1122->g_554 p_1122->l_comm_values p_1122->g_468 p_1122->g_719 p_1122->g_722 p_1122->g_723 p_1122->g_724 p_1122->g_728 p_1122->g_740 p_1122->g_742 p_1122->g_68 p_1122->g_699 p_1122->g_779 p_1122->g_781 p_1122->g_791 p_1122->g_55 p_1122->g_698 p_1122->g_817 p_1122->g_819 p_1122->g_844 p_1122->g_629 p_1122->g_670 p_1122->g_818 p_1122->g_904 p_1122->g_937 p_1122->g_970 p_1122->g_977 p_1122->g_982 p_1122->g_985 p_1122->g_628 p_1122->g_682 p_1122->g_965
 * writes: p_1122->g_31 p_1122->g_319 p_1122->g_69 p_1122->g_71 p_1122->g_267 p_1122->g_219 p_1122->g_99 p_1122->g_13 p_1122->g_249 p_1122->g_468 p_1122->g_179 p_1122->g_370 p_1122->g_254 p_1122->g_554 p_1122->g_155 p_1122->g_280 p_1122->g_568 p_1122->g_comm_values p_1122->g_322 p_1122->g_695 p_1122->g_487 p_1122->g_698 p_1122->g_16 p_1122->g_817 p_1122->g_970 p_1122->g_965
 */
int32_t * func_79(int64_t * p_80, int8_t * p_81, int32_t ** p_82, int8_t * p_83, int32_t  p_84, struct S1 * p_1122)
{ /* block id: 107 */
    VECTOR(int16_t, 2) l_308 = (VECTOR(int16_t, 2))(0x753FL, 0x4F09L);
    int32_t *l_313 = &p_1122->g_69;
    uint64_t *l_318[5][3][10] = {{{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319}},{{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319}},{{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319}},{{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319}},{{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319},{&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,(void*)0,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319,&p_1122->g_319}}};
    int32_t ***l_327 = &p_1122->g_218;
    uint32_t l_328 = 4294967295UL;
    int32_t l_329 = 1L;
    uint16_t *l_367 = &p_1122->g_99;
    VECTOR(uint8_t, 4) l_395 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x08L), 0x08L);
    VECTOR(int8_t, 16) l_416 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x02L), 0x02L), 0x02L, 9L, 0x02L, (VECTOR(int8_t, 2))(9L, 0x02L), (VECTOR(int8_t, 2))(9L, 0x02L), 9L, 0x02L, 9L, 0x02L);
    int16_t l_447 = (-3L);
    uint32_t l_450 = 4294967295UL;
    int8_t *l_466 = (void*)0;
    uint32_t l_472 = 0x346C8994L;
    VECTOR(uint64_t, 2) l_491 = (VECTOR(uint64_t, 2))(0xCF9CB1E7FDA4AFFDL, 0x1F751F4F8730F27EL);
    VECTOR(int16_t, 4) l_512 = (VECTOR(int16_t, 4))(0x6C88L, (VECTOR(int16_t, 2))(0x6C88L, 0x5132L), 0x5132L);
    VECTOR(int8_t, 2) l_529 = (VECTOR(int8_t, 2))(0L, 0x76L);
    VECTOR(int16_t, 2) l_551 = (VECTOR(int16_t, 2))(0x40EFL, 0x6F45L);
    VECTOR(int32_t, 2) l_626 = (VECTOR(int32_t, 2))(0x6692E4C5L, 1L);
    VECTOR(int32_t, 4) l_627 = (VECTOR(int32_t, 4))(0x65F92025L, (VECTOR(int32_t, 2))(0x65F92025L, 1L), 1L);
    union U0 **l_631 = &p_1122->g_554;
    VECTOR(int32_t, 8) l_640 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x105DF0EAL), 0x105DF0EAL), 0x105DF0EAL, 4L, 0x105DF0EAL);
    VECTOR(int16_t, 4) l_685 = (VECTOR(int16_t, 4))(0x53DDL, (VECTOR(int16_t, 2))(0x53DDL, 0x749FL), 0x749FL);
    VECTOR(int16_t, 8) l_686 = (VECTOR(int16_t, 8))(0x7CDEL, (VECTOR(int16_t, 4))(0x7CDEL, (VECTOR(int16_t, 2))(0x7CDEL, (-1L)), (-1L)), (-1L), 0x7CDEL, (-1L));
    int64_t l_730 = 1L;
    int32_t l_759 = 0x5F7A019FL;
    VECTOR(int16_t, 8) l_780 = (VECTOR(int16_t, 8))(0x42CCL, (VECTOR(int16_t, 4))(0x42CCL, (VECTOR(int16_t, 2))(0x42CCL, (-2L)), (-2L)), (-2L), 0x42CCL, (-2L));
    int16_t l_793 = 5L;
    VECTOR(uint32_t, 2) l_803 = (VECTOR(uint32_t, 2))(1UL, 0x542CC4CBL);
    VECTOR(uint32_t, 4) l_824 = (VECTOR(uint32_t, 4))(0xF3BBA7EFL, (VECTOR(uint32_t, 2))(0xF3BBA7EFL, 4294967295UL), 4294967295UL);
    int32_t **l_829 = &p_1122->g_219;
    volatile int32_t *l_830[6];
    uint16_t l_848 = 1UL;
    uint32_t l_916 = 0x07BA86BFL;
    int32_t **l_927 = &p_1122->g_215;
    VECTOR(int16_t, 2) l_998 = (VECTOR(int16_t, 2))(0x181EL, 0x4135L);
    VECTOR(int8_t, 4) l_1016 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x4BL), 0x4BL);
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_830[i] = &p_1122->g_179;
    if ((((safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(((*p_1122->g_219) = ((0L & 0x0447L) || (p_1122->g_38 && 0UL))), ((p_1122->g_305 , (safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 4))(l_308.yyxy)).w && (~((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((l_313 == l_313) == (safe_mod_func_uint16_t_u_u((*l_313), (safe_mod_func_int64_t_s_s((((p_1122->g_319++) <= (((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(0xD40800FFL, 1UL)).yxxyxyyx, ((VECTOR(uint32_t, 2))(0x8DCC9543L, 0x744DAF3DL)).xyyxxyxy, ((VECTOR(uint32_t, 2))(p_1122->g_322.s3b)).xxyyyxyy))).s4520204173746056, (uint32_t)(((safe_add_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u(255UL, (*l_313))) , l_327) == &p_82), (-1L))) & p_84) , FAKE_DIVERGE(p_1122->group_0_offset, get_group_id(0), 10))))).sf | l_328)) , p_1122->g_60.w), 0xD9A7A357069F2227L))))) != (*l_313)) > 0x2C8C59DEA679EB67L), 9L)), p_84)) , p_84))), 1UL))) || p_1122->g_254.y))), 1UL)) , 1L) | l_329))
    { /* block id: 110 */
        uint8_t *l_341[1][1][5];
        uint32_t l_343 = 0x90FA34F1L;
        int32_t l_356[10][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
        int32_t *l_374 = &p_1122->g_13[1];
        int32_t *l_375 = &p_1122->g_31[3];
        uint8_t l_402[10];
        VECTOR(int64_t, 16) l_412 = (VECTOR(int64_t, 16))(0x5D5A57667E573D20L, (VECTOR(int64_t, 4))(0x5D5A57667E573D20L, (VECTOR(int64_t, 2))(0x5D5A57667E573D20L, 0L), 0L), 0L, 0x5D5A57667E573D20L, 0L, (VECTOR(int64_t, 2))(0x5D5A57667E573D20L, 0L), (VECTOR(int64_t, 2))(0x5D5A57667E573D20L, 0L), 0x5D5A57667E573D20L, 0L, 0x5D5A57667E573D20L, 0L);
        uint16_t *l_446 = &p_1122->g_99;
        volatile int32_t *l_476 = &p_1122->g_38;
        VECTOR(uint32_t, 16) l_507 = (VECTOR(uint32_t, 16))(0xD5FBFC26L, (VECTOR(uint32_t, 4))(0xD5FBFC26L, (VECTOR(uint32_t, 2))(0xD5FBFC26L, 0xB5A455A9L), 0xB5A455A9L), 0xB5A455A9L, 0xD5FBFC26L, 0xB5A455A9L, (VECTOR(uint32_t, 2))(0xD5FBFC26L, 0xB5A455A9L), (VECTOR(uint32_t, 2))(0xD5FBFC26L, 0xB5A455A9L), 0xD5FBFC26L, 0xB5A455A9L, 0xD5FBFC26L, 0xB5A455A9L);
        int64_t *l_519 = (void*)0;
        int32_t ***l_531[5];
        VECTOR(int32_t, 4) l_532 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
        VECTOR(uint16_t, 16) l_546 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 65535UL), 65535UL), 65535UL, 65527UL, 65535UL, (VECTOR(uint16_t, 2))(65527UL, 65535UL), (VECTOR(uint16_t, 2))(65527UL, 65535UL), 65527UL, 65535UL, 65527UL, 65535UL);
        VECTOR(uint8_t, 8) l_649 = (VECTOR(uint8_t, 8))(0x88L, (VECTOR(uint8_t, 4))(0x88L, (VECTOR(uint8_t, 2))(0x88L, 1UL), 1UL), 1UL, 0x88L, 1UL);
        int16_t l_658[7] = {0L,0L,0L,0L,0L,0L,0L};
        VECTOR(int32_t, 8) l_718 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
        VECTOR(int32_t, 8) l_741 = (VECTOR(int32_t, 8))(0x1AB88145L, (VECTOR(int32_t, 4))(0x1AB88145L, (VECTOR(int32_t, 2))(0x1AB88145L, 0x41C823F4L), 0x41C823F4L), 0x41C823F4L, 0x1AB88145L, 0x41C823F4L);
        int64_t l_748 = 1L;
        uint16_t l_760 = 0x494DL;
        int16_t l_792 = 0x477EL;
        VECTOR(uint64_t, 4) l_806 = (VECTOR(uint64_t, 4))(0x64079B37BBDBFFFEL, (VECTOR(uint64_t, 2))(0x64079B37BBDBFFFEL, 2UL), 2UL);
        int64_t *l_827 = &p_1122->g_468;
        uint16_t *l_828 = &l_760;
        VECTOR(int64_t, 8) l_850 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6E5D2945695EBC4AL), 0x6E5D2945695EBC4AL), 0x6E5D2945695EBC4AL, (-1L), 0x6E5D2945695EBC4AL);
        int16_t l_851 = 0L;
        VECTOR(uint16_t, 2) l_853 = (VECTOR(uint16_t, 2))(0x08CFL, 0x36E3L);
        VECTOR(uint16_t, 16) l_854 = (VECTOR(uint16_t, 16))(0x2608L, (VECTOR(uint16_t, 4))(0x2608L, (VECTOR(uint16_t, 2))(0x2608L, 1UL), 1UL), 1UL, 0x2608L, 1UL, (VECTOR(uint16_t, 2))(0x2608L, 1UL), (VECTOR(uint16_t, 2))(0x2608L, 1UL), 0x2608L, 1UL, 0x2608L, 1UL);
        int32_t l_905 = 0x6F7C0351L;
        int8_t l_930 = 0x77L;
        VECTOR(uint16_t, 4) l_947 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x5FCBL), 0x5FCBL);
        VECTOR(uint16_t, 16) l_949 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x6F63L), 0x6F63L), 0x6F63L, 65530UL, 0x6F63L, (VECTOR(uint16_t, 2))(65530UL, 0x6F63L), (VECTOR(uint16_t, 2))(65530UL, 0x6F63L), 65530UL, 0x6F63L, 65530UL, 0x6F63L);
        int32_t l_961 = 0x04BBACA0L;
        int8_t l_968 = 1L;
        VECTOR(int32_t, 4) l_975 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x44F1E08EL), 0x44F1E08EL);
        VECTOR(int32_t, 8) l_981 = (VECTOR(int32_t, 8))(0x7E6E2F4EL, (VECTOR(int32_t, 4))(0x7E6E2F4EL, (VECTOR(int32_t, 2))(0x7E6E2F4EL, 0L), 0L), 0L, 0x7E6E2F4EL, 0L);
        int64_t l_994 = (-1L);
        int32_t l_1040 = 0x4F44D12FL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_341[i][j][k] = &p_1122->g_153;
            }
        }
        for (i = 0; i < 10; i++)
            l_402[i] = 1UL;
        for (i = 0; i < 5; i++)
            l_531[i] = (void*)0;
        if (((VECTOR(int32_t, 2))(0x799A62C1L, 0L)).hi)
        { /* block id: 111 */
            uint16_t l_336 = 0x9FE6L;
            int32_t l_363 = 0L;
            int64_t l_364[9] = {0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L,0x07DBF3D6430BFF10L};
            uint16_t l_368[3][7] = {{0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL},{0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL},{0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL,0x399BL}};
            VECTOR(int8_t, 2) l_369 = (VECTOR(int8_t, 2))(0L, 0L);
            uint8_t l_385[10][6] = {{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL},{0x56L,0UL,1UL,255UL,0xF4L,255UL}};
            VECTOR(uint64_t, 4) l_386 = (VECTOR(uint64_t, 4))(0x0FB3C66450083CA2L, (VECTOR(uint64_t, 2))(0x0FB3C66450083CA2L, 0x270B965632E78D34L), 0x270B965632E78D34L);
            VECTOR(int64_t, 16) l_411 = (VECTOR(int64_t, 16))(0x3C99A5FCF52D2AC3L, (VECTOR(int64_t, 4))(0x3C99A5FCF52D2AC3L, (VECTOR(int64_t, 2))(0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL), 0x0ABFA0E34CA72E6DL), 0x0ABFA0E34CA72E6DL, 0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL, (VECTOR(int64_t, 2))(0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL), (VECTOR(int64_t, 2))(0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL), 0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL, 0x3C99A5FCF52D2AC3L, 0x0ABFA0E34CA72E6DL);
            VECTOR(int8_t, 4) l_417 = (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, (-1L)), (-1L));
            int16_t *l_423 = &p_1122->g_74;
            VECTOR(int32_t, 2) l_426 = (VECTOR(int32_t, 2))(0x7B94CCE8L, 0x26017B87L);
            union U0 l_465 = {0x01951CABL};
            int32_t ****l_470[2][4] = {{&p_1122->g_217[2][4],&p_1122->g_217[2][4],&p_1122->g_217[2][4],&p_1122->g_217[2][4]},{&p_1122->g_217[2][4],&p_1122->g_217[2][4],&p_1122->g_217[2][4],&p_1122->g_217[2][4]}};
            int32_t l_471[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            VECTOR(int16_t, 4) l_524 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L);
            VECTOR(uint16_t, 8) l_537 = (VECTOR(uint16_t, 8))(0x2F95L, (VECTOR(uint16_t, 4))(0x2F95L, (VECTOR(uint16_t, 2))(0x2F95L, 65529UL), 65529UL), 65529UL, 0x2F95L, 65529UL);
            int8_t l_591[2];
            uint32_t l_592 = 4294967295UL;
            int8_t l_621 = 0x75L;
            VECTOR(int32_t, 2) l_638 = (VECTOR(int32_t, 2))((-8L), 0L);
            VECTOR(int32_t, 2) l_639 = (VECTOR(int32_t, 2))((-3L), (-8L));
            uint32_t l_657[9][10][2] = {{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}},{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}}};
            int64_t l_687 = 0x1EA985FE1489A66BL;
            VECTOR(uint8_t, 8) l_690 = (VECTOR(uint8_t, 8))(0x10L, (VECTOR(uint8_t, 4))(0x10L, (VECTOR(uint8_t, 2))(0x10L, 1UL), 1UL), 1UL, 0x10L, 1UL);
            VECTOR(int16_t, 16) l_694 = (VECTOR(int16_t, 16))(0x4D97L, (VECTOR(int16_t, 4))(0x4D97L, (VECTOR(int16_t, 2))(0x4D97L, 0x772EL), 0x772EL), 0x772EL, 0x4D97L, 0x772EL, (VECTOR(int16_t, 2))(0x4D97L, 0x772EL), (VECTOR(int16_t, 2))(0x4D97L, 0x772EL), 0x4D97L, 0x772EL, 0x4D97L, 0x772EL);
            union U0 *l_709 = &p_1122->g_305;
            VECTOR(int32_t, 2) l_738 = (VECTOR(int32_t, 2))(0L, 0x45592D06L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_591[i] = 0x27L;
            if (((*l_313) = (safe_lshift_func_int8_t_s_s((*p_83), p_1122->g_16))))
            { /* block id: 113 */
                uint32_t l_332 = 0x7BDB6203L;
                VECTOR(int64_t, 4) l_409 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x6F4E1CDCE22CB400L), 0x6F4E1CDCE22CB400L);
                uint16_t l_410 = 1UL;
                int32_t l_428 = (-7L);
                int i;
                if ((GROUP_DIVERGE(2, 1) > l_332))
                { /* block id: 114 */
                    int16_t *l_362[8][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_373 = (-1L);
                    int32_t **l_376 = &l_313;
                    int32_t **l_377 = &l_374;
                    int64_t l_403 = 0x1825BB455993346FL;
                    int32_t *l_404 = &l_363;
                    int64_t *l_424 = &l_364[0];
                    int16_t *l_425[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    for (l_329 = 0; (l_329 == 8); l_329++)
                    { /* block id: 117 */
                        uint8_t **l_342[10][3][6] = {{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}},{{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]},{&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][1],&l_341[0][0][3],&l_341[0][0][1]}}};
                        int i, j, k;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1122->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4294967295UL, 0UL, 0UL, ((VECTOR(uint32_t, 4))(p_1122->g_335.yxyx)), 4294967288UL)).s64)).lo, 10))][(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]));
                        l_336++;
                        l_343 |= ((safe_mul_func_int8_t_s_s((p_1122->g_280.sb || (&p_1122->g_153 == (l_341[0][0][3] = l_341[0][0][3]))), 0x68L)) <= (18446744073709551609UL > p_1122->g_38));
                        (*l_313) ^= (**p_82);
                    }
                    (*l_377) = ((*l_376) = ((FAKE_DIVERGE(p_1122->global_0_offset, get_global_id(0), 10) || ((*p_83) ^= p_1122->g_267.s9)) , (l_375 = ((*p_82) = ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_add_func_uint32_t_u_u(((l_373 &= ((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((l_356[0][0] && (safe_lshift_func_uint8_t_u_s(p_84, (!(safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_1122->g_361.s16)).lo, (GROUP_DIVERGE(0, 1) != (p_1122->g_267.sc ^= (l_363 = 0x420BL))))))))), l_364[0])), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((safe_add_func_int8_t_s_s((!(&p_1122->g_99 != l_367)), l_368[2][5])), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_369.xxyyyxyx)).s1705342403016371)).odd, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(0x3EL, 1L)).yyxx, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(p_1122->g_370.yxzwzwxw)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((!(safe_lshift_func_int16_t_s_s(((l_356[5][0] >= p_84) >= GROUP_DIVERGE(2, 1)), 11))), 0x64L, 0x44L, 0x72L, 0x2AL, ((VECTOR(int8_t, 2))((-7L))), 1L)).hi)))))))).wyxwyzxw, ((VECTOR(int8_t, 8))(3L))))), (int8_t)(*p_83)))).s70, ((VECTOR(int8_t, 2))(0x40L))))), 8UL)), ((VECTOR(uint8_t, 2))(9UL)), 0UL, ((VECTOR(uint8_t, 4))(5UL)), 0x93L, ((VECTOR(uint8_t, 2))(7UL)), 255UL, 0x8AL)).s2)), p_1122->g_153)))) | p_84)) <= 0x5EL), (*p_1122->g_219))) , FAKE_DIVERGE(p_1122->global_1_offset, get_global_id(1), 10)))), 251UL)) , l_374)))));
                    (*l_377) = ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(p_1122->g_380.yyyyxxyxxyyxyxyx)).s9, ((VECTOR(uint64_t, 16))((1L || ((safe_sub_func_int16_t_s_s((65535UL == ((p_1122->g_254.x & p_84) == ((((((l_385[9][0] | (((VECTOR(uint64_t, 2))(l_386.wz)).hi <= ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((*l_367)--), 0x4568L)) < (**l_377)), GROUP_DIVERGE(1, 1))) == (safe_rshift_func_int16_t_s_s(0x01D7L, (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_395.zyww)))).zzyxyxwzxzwxyzwx)).s3 ^ ((safe_mod_func_uint32_t_u_u((((+(safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s((p_1122->g_267.se >= FAKE_DIVERGE(p_1122->group_1_offset, get_group_id(1), 10)), l_402[8])), 0L))) , 0x97BEDB9DL) , 1UL), p_1122->g_153)) == p_1122->g_155.y))))))) != 0x51ACL) | 0xECC75241B77E60A7L) , p_84) , p_1122->g_155.x) < (**l_376)))), 0xDE3AL)) > 0L)), 18446744073709551614UL, l_403, 0UL, 0x17B55F8126BFCCF3L, 0UL, ((VECTOR(uint64_t, 4))(0x9E8BBB4E707567DAL)), ((VECTOR(uint64_t, 2))(0x278179770184F10FL)), 18446744073709551609UL, ((VECTOR(uint64_t, 2))(5UL)), 5UL)).sa)) , l_404);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1122->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[(safe_mod_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((((l_336 && ((((safe_mod_func_int64_t_s_s((**l_376), ((VECTOR(int64_t, 16))(l_409.yyywxxwxzzyzyyww)).s3)) & l_410) == (l_426.y = ((((((*l_424) = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(l_411.sc1a55df4ca21ffaa)).s6733, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_412.s23a04bdefd1b7ba8)))).s86b4))), (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_1122->g_415.ywyzwyxywyyzwxyy)).s6, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_416.sc94aa7400657b17d)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(1L, (-8L), ((VECTOR(int8_t, 4))(l_417.yyyz)), p_1122->g_305.f0, ((((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((l_409.x > (safe_unary_minus_func_int64_t_s((*l_375)))), 10)) & (+((*l_374) = p_84))), ((((((&p_1122->g_217[1][2] == (((l_362[5][5] = ((&p_1122->g_71 != (void*)0) , l_362[6][5])) != l_423) , &p_1122->g_176[1])) ^ 0x4514AF70A23419B1L) > 0x2D62L) >= l_409.z) , 0x77L) != (-1L)))) < FAKE_DIVERGE(p_1122->group_0_offset, get_group_id(0), 10)) , 8UL) ^ p_1122->g_31[3]), 0L, 0x0AL, p_1122->g_280.s2, p_1122->g_322.sa, ((VECTOR(int8_t, 4))(5L)))).s01)).xxyyxxyy, ((VECTOR(int8_t, 8))(1L))))).even)).lo)).xyxyxxyx))).s1)), 0x080F5C0070678D7CL, 0L, (-6L))), ((VECTOR(int64_t, 8))(0x1817E7BB51946FF8L)), ((VECTOR(int64_t, 8))(0x6F02563EA5185A5BL))))).s53)).even) || 18446744073709551615UL) || p_84) | 6UL) , p_84))) && p_84)) && (*l_313)) && p_84), (-5L))) , p_1122->g_427) == (void*)0) <= l_428), 10))][(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]));
                }
                else
                { /* block id: 143 */
                    for (l_332 = 0; (l_332 >= 30); l_332++)
                    { /* block id: 146 */
                        if (l_409.z)
                            break;
                    }
                }
                (*p_82) = (*p_82);
            }
            else
            { /* block id: 151 */
                for (l_336 = 0; (l_336 < 18); l_336 = safe_add_func_uint8_t_u_u(l_336, 7))
                { /* block id: 154 */
                    if ((atomic_inc(&p_1122->l_atomic_input[0]) == 3))
                    { /* block id: 156 */
                        union U0 l_434 = {0x394B41FAL};
                        union U0 *l_433 = &l_434;
                        union U0 *l_435 = &l_434;
                        int32_t l_437 = 3L;
                        int32_t *l_436 = &l_437;
                        int32_t *l_438 = &l_437;
                        l_435 = l_433;
                        l_438 = l_436;
                        unsigned int result = 0;
                        result += l_434.f0;
                        result += l_434.f1;
                        result += l_437;
                        atomic_add(&p_1122->l_special_values[0], result);
                    }
                    else
                    { /* block id: 159 */
                        (1 + 1);
                    }
                }
                (*p_82) = (void*)0;
            }
            if ((!0x7C5DDD10L))
            { /* block id: 165 */
                int16_t *l_439 = (void*)0;
                uint32_t *l_461 = &l_450;
                int32_t l_467[2][3];
                int64_t *l_497 = (void*)0;
                int64_t *l_518[10][7][3] = {{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}},{{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]},{(void*)0,(void*)0,&l_364[0]}}};
                VECTOR(uint8_t, 8) l_530 = (VECTOR(uint8_t, 8))(0x1DL, (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 254UL), 254UL), 254UL, 0x1DL, 254UL);
                union U0 *l_553 = (void*)0;
                union U0 **l_552[1][10] = {{&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553,&l_553}};
                int16_t *l_555[3];
                int8_t *l_556 = (void*)0;
                int8_t *l_557[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_679 = 0x3838D60EL;
                VECTOR(int8_t, 4) l_688 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
                VECTOR(int8_t, 4) l_689 = (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x39L), 0x39L);
                VECTOR(int16_t, 4) l_691 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), (-4L)), (-4L));
                VECTOR(int16_t, 2) l_693 = (VECTOR(int16_t, 2))(1L, (-5L));
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_467[i][j] = 0x57364B51L;
                }
                for (i = 0; i < 3; i++)
                    l_555[i] = (void*)0;
                l_426.y |= ((((*l_374) |= 0x38D4L) != ((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_1122->g_267.s4 |= (safe_mod_func_int64_t_s_s(((((FAKE_DIVERGE(p_1122->local_2_offset, get_local_id(2), 10) != (l_446 == &l_368[2][5])) , 0x60715C58L) == l_447) == FAKE_DIVERGE(p_1122->group_2_offset, get_group_id(2), 10)), (safe_mul_func_int16_t_s_s(l_450, (((p_84 == (p_1122->g_451 != (void*)0)) < p_84) < p_1122->g_16)))))) < p_1122->g_280.s2), p_1122->g_280.s8)), p_84)) , &p_1122->g_71) != p_83) != 0xFAL)) ^ FAKE_DIVERGE(p_1122->local_1_offset, get_local_id(1), 10));
                if ((safe_div_func_uint64_t_u_u(((((p_84 != (safe_mul_func_uint16_t_u_u((((~(((((((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1122->global_2_offset, get_global_id(2), 10), 7)) == (((((safe_mul_func_int16_t_s_s((((*l_461) = (p_1122->g_249.s9 &= l_386.z)) == ((~(FAKE_DIVERGE(p_1122->local_0_offset, get_local_id(0), 10) && (0x44L > p_84))) || ((safe_unary_minus_func_int64_t_s((l_327 != (void*)0))) != ((*l_313) |= ((l_465 , p_83) == l_466))))), l_467[1][0])) < (**p_1122->g_180)) , (-9L)) == 0xAAFD4719B1546D84L) == FAKE_DIVERGE(p_1122->global_1_offset, get_global_id(1), 10))) ^ FAKE_DIVERGE(p_1122->local_0_offset, get_local_id(0), 10)) , (-1L)) != 2L) , p_1122->g_380.y) || 0x73AB670DL)) , p_1122->g_153) && l_369.x), l_467[1][0]))) && (**p_1122->g_177)) ^ 0x6B6C8AD7L) && (*l_374)), p_1122->g_74)))
                { /* block id: 172 */
                    int16_t *l_473[10][5] = {{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0},{&l_447,(void*)0,&l_447,&l_447,(void*)0}};
                    int i, j;
                    (*p_1122->g_178) &= ((((p_1122->g_468 = 0x0B5BA877L) < (l_426.x = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_1122->g_469.s4061)))).w)) ^ ((*l_461) = ((void*)0 == l_470[0][1]))) <= (((l_471[4] = (*l_374)) ^ ((l_467[1][0] = (l_472 = p_84)) != ((*l_367) = p_1122->g_280.sc))) , ((safe_mod_func_uint32_t_u_u(((void*)0 != &p_1122->g_218), p_84)) ^ (*l_374))));
                    return (*p_82);
                }
                else
                { /* block id: 182 */
                    VECTOR(int16_t, 2) l_486 = (VECTOR(int16_t, 2))((-1L), 0x395EL);
                    int32_t l_492 = 0x30FCB872L;
                    int32_t l_496 = 0x57A8A2FFL;
                    int32_t l_502 = 1L;
                    uint8_t *l_517[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    VECTOR(int16_t, 2) l_522 = (VECTOR(int16_t, 2))(0x2769L, 0x0A03L);
                    VECTOR(int16_t, 8) l_523 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 6L), 6L), 6L, 5L, 6L);
                    VECTOR(int64_t, 4) l_527 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L);
                    int16_t *l_528 = &l_447;
                    int i;
                    l_476 = (*p_1122->g_180);
                    if (((void*)0 == &l_368[2][5]))
                    { /* block id: 184 */
                        int64_t *l_488 = &l_364[0];
                        int8_t *l_498 = (void*)0;
                        int8_t *l_499 = (void*)0;
                        int8_t *l_500 = (void*)0;
                        int8_t *l_501[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        (*p_1122->g_178) = ((*l_313) = ((safe_rshift_func_int8_t_s_u((l_502 = (safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((0UL | (((0x57L > (p_1122->g_370.x = ((*p_83) = (safe_mul_func_uint16_t_u_u(p_84, ((*l_446) = ((((((18446744073709551607UL >= (l_496 ^= (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_486.xyxx)), ((VECTOR(int16_t, 8))(p_1122->g_487.s87c43a5b)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))((((*l_488) ^= (-4L)) , 0x11E1L), (safe_div_func_int16_t_s_s((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x034684DBDAA540F6L, 0x4D2F9DCB7F035399L)), 2UL, 0xC92C2BD86C564C09L)).y == (l_492 = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x3DD7E3B0A91AB771L, ((VECTOR(uint64_t, 2))(l_491.yy)), 0x65A2843D53A20C3BL)).yxwwwxxx)).hi)).y)), (-1L))), 0L, 0L, 0x3CE5L, 0x0ED2L, 0x16A3L, 0x5A55L, (-5L), (-8L), ((safe_mul_func_int16_t_s_s(((((VECTOR(uint64_t, 2))(0x8828CA612847701BL, 0x1264E6488AB867F8L)).lo == (l_467[0][0] = p_84)) || (+((safe_unary_minus_func_uint16_t_u(p_1122->g_155.w)) > p_84))), p_1122->g_13[2])) != (*l_476)), ((VECTOR(int16_t, 2))((-5L))), ((VECTOR(int16_t, 2))(0x4A40L)), 0x4C58L)), ((VECTOR(int16_t, 16))(1L)), ((VECTOR(int16_t, 16))(0x456BL))))).s9a))).xxxyxxxx, ((VECTOR(int16_t, 8))((-1L)))))).even)))).s59a4, ((VECTOR(int16_t, 4))(0x01C2L))))).z, 10)))) >= 0xA9EDL) | p_84) ^ GROUP_DIVERGE(2, 1)) , l_497) == (void*)0))))))) & p_1122->g_comm_values[p_1122->tid]) && 4L)), 0xFD23L))))), p_84)) && 0x5D73L));
                    }
                    else
                    { /* block id: 195 */
                        uint8_t **l_516[6] = {&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][3],&l_341[0][0][3],&l_341[0][0][2],&l_341[0][0][3]};
                        int i;
                        (*p_1122->g_178) = p_84;
                        (*l_476) = p_84;
                        (*l_313) = (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 2))(0x5C9DL, 1L)).odd < (p_84 < ((((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(l_507.sbf05fc56)).s34, (uint32_t)0x41FFE7E0L, (uint32_t)p_1122->g_56.x))).even , p_84) > (((((p_84 != p_1122->g_153) <= ((((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_1122->local_1_offset, get_local_id(1), 10) <= ((VECTOR(int16_t, 8))(l_512.zyzxxxxz)).s6), ((VECTOR(int16_t, 8))(p_1122->g_513.zyywzxyy)).s7)) , (*l_374)) < ((safe_add_func_int16_t_s_s((0UL && ((l_341[0][0][3] = p_83) != (void*)0)), FAKE_DIVERGE(p_1122->group_2_offset, get_group_id(2), 10))) ^ (*l_313))), 7)) || p_84) , (*p_1122->g_451)) != l_517[7])) , l_518[1][2][1]) == l_519) || 0x61740B0A62ABD589L)))), 0xF319L)), p_1122->g_99));
                    }
                    l_476 = (void*)0;
                    (*l_313) = (((*l_367) = (((((safe_rshift_func_int8_t_s_s(((*p_83) = ((VECTOR(int8_t, 8))((*p_83), 0x46L, (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_522.yyyx)), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))((-10L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_523.s4263332572506450)).s2b)), 0x7DD5L, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(l_524.ywzxxyxwxxwyywwx)).sd5, ((VECTOR(int16_t, 16))(p_1122->g_525.s1da2bb6377883d85)).sb4))), (-7L), (-1L))).s65, ((VECTOR(int16_t, 16))(p_1122->g_526.s541ae90d4f34b50b)).sa9))), 0x64DBL, (-1L))).s7637155140132115)).s1 | p_84), l_486.y, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(0x41L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))((p_84 < ((*l_528) &= ((0UL | 18446744073709551615UL) && ((VECTOR(int64_t, 2))(l_527.xw)).even))), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(8L, 0x4CL)), 0x19L, 0x16L)), ((VECTOR(int8_t, 4))(0x5BL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_529.yyyx)).even)), 0x4EL))))), (((p_1122->g_254.y = 0xDDL) != ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_530.s00)), (*l_313), 0UL, (*l_313), ((VECTOR(uint8_t, 2))(0xB5L)), ((VECTOR(uint8_t, 4))(0x2EL)), 1UL, 0xFBL, p_84, 0x72L, 0x0EL)).s9) , 1L), 2L, 1L)), ((VECTOR(int8_t, 8))(7L))))).s66)).xyyyyyxyxyxxyyyy)).s03)), 0x41L)), (int8_t)(*p_83)))))))).s4), 1)) , p_84) ^ p_84) , (void*)0) == l_531[4])) , l_496);
                }
                (*p_1122->g_178) = ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))((*p_1122->g_178), 0x4732498AL, (-10L), (-10L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x03E86B08L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_532.yxzwyzyy)).s45)))), 0L, (~((p_84 > (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_1122->g_59.s0, 0xE811L)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(l_537.s47)), 0x37FCL)).odd, ((VECTOR(uint16_t, 2))(p_1122->g_538.se1)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1122->g_539.wy)).xyyx)).hi))), ((p_1122->g_280.sb &= (safe_lshift_func_int16_t_s_u((p_1122->g_155.w ^= (((VECTOR(int64_t, 4))(0x26521F5C0A1A0813L, 0L, 0x676B21F454D6D267L, 2L)).y | (l_467[0][2] > (+(safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((*l_313) &= p_1122->g_16), (((VECTOR(uint16_t, 8))(l_546.s14bd5333)).s7 || (safe_lshift_func_uint8_t_u_s(((FAKE_DIVERGE(p_1122->group_0_offset, get_group_id(0), 10) , (((safe_lshift_func_int16_t_s_u(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_551.yxyyxxyxyxyyyyxy)))).s6 , (((*p_83) = (*p_83)) , ((((((((p_1122->g_554 = &p_1122->g_305) == &p_1122->g_305) != p_84) || l_530.s1) , &p_1122->g_153) != (void*)0) ^ 4294967288UL) < p_1122->g_538.sc))) , p_1122->g_60.w), p_1122->g_513.z)) == l_530.s7) , p_84)) && p_1122->g_56.z), 6))))) > 9L), p_1122->g_267.sf)))))), 9))) || p_1122->g_487.s9), 0x2D79L, p_1122->g_56.x, 1UL, 0xE456L, ((VECTOR(uint16_t, 2))(6UL)), p_1122->g_56.x, 0xAEEAL, 9UL, p_84, p_84, 0x40B6L, 0x7197L)).s44)).lo))) < GROUP_DIVERGE(2, 1))), ((VECTOR(int32_t, 2))(0x39755ED2L)), 0x2C2E80D8L)).s64)), 1L, 0x6A8F0C79L)).hi)), 0x4AAC5E5FL)).s7;
                for (p_84 = 16; (p_84 == (-16)); --p_84)
                { /* block id: 216 */
                    uint16_t **l_566 = &l_446;
                    uint16_t **l_567 = &l_367;
                    uint16_t *l_571[6][1] = {{&l_336},{&l_336},{&l_336},{&l_336},{&l_336},{&l_336}};
                    int32_t l_590[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    union U0 **l_609 = &p_1122->g_554;
                    VECTOR(int32_t, 2) l_630 = (VECTOR(int32_t, 2))(0x455B3044L, 1L);
                    uint32_t l_632 = 0x0AE9567BL;
                    uint16_t l_634 = 8UL;
                    int32_t l_680 = 0x3FD1C7A9L;
                    int32_t *l_681 = &p_1122->g_13[2];
                    int32_t l_705 = 0x1861BD57L;
                    int i, j;
                    if ((((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(((p_1122->g_568[1][0][4] = ((*l_567) = ((*l_566) = (void*)0))) != &p_1122->g_99), (p_1122->g_297.s7 >= (safe_rshift_func_int16_t_s_u((p_84 && p_84), ((*l_374) = p_84)))))) && ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(p_84, 6)), 2)) , ((*l_461) &= ((p_84 <= (l_590[3] |= ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1122->global_0_offset, get_global_id(0), 10), (--p_1122->g_254.y), 0x52L, 0xF3L)), ((VECTOR(uint8_t, 2))(0x2DL, 0x9FL)).yxxx))).y, 4)) >= (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0L, p_84)), 0)), 1UL))), (*p_83))) , 0x045FL))) | p_84)))) < 0x4C07L), 9)) && p_84) || l_591[0]) , &l_402[4]) == &p_1122->g_153), 3)) , l_592) | 7UL))
                    { /* block id: 224 */
                        uint64_t l_600 = 0xA63987AF980F8B31L;
                        union U0 ***l_610 = &l_552[0][6];
                        uint32_t *l_611 = (void*)0;
                        uint32_t *l_612 = (void*)0;
                        int i, j;
                        (*p_1122->g_178) = (safe_add_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u(18446744073709551608UL)) & 0L), (p_1122->g_comm_values[p_1122->tid] = (l_600 = (safe_rshift_func_int8_t_s_u((*p_81), (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1122->group_1_offset, get_group_id(1), 10), p_84))))))));
                        if ((*l_313))
                            break;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1122->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((*l_313), ((safe_div_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((p_1122->g_322.s3 = ((((*l_610) = l_609) == &p_1122->g_554) , ((*l_461) = ((**l_609) , p_1122->g_297.s1)))), l_600)), 13)) != (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_530.s7 ^ (((safe_add_func_int8_t_s_s((p_1122->g_155.y <= (((!(((safe_rshift_func_int8_t_s_s(0x45L, (*l_374))) , 0x9C3CL) >= 0xABEBL)) , p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]) || 7L)), p_1122->g_468)) | p_84) && (*l_313))), 5)), p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]))) , l_590[6]), l_621)) >= 0L))), 10))][(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]));
                    }
                    else
                    { /* block id: 235 */
                        uint32_t l_633 = 0x46235F77L;
                        (*l_313) = ((0x721729C7L == (safe_div_func_uint64_t_u_u(1UL, (safe_rshift_func_uint8_t_u_u(((!(((((*l_375) || ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_626.xxyxxxyxyxxxxyyx)).s66a2, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_627.yxzx)), (-1L), l_467[1][0], ((VECTOR(int32_t, 8))(p_1122->g_628.yyxxxyxx)), (-1L), 1L)).even)), ((VECTOR(int32_t, 2))((-1L), (-1L))).yxyxyyxx))).s02)), ((VECTOR(int32_t, 4))(p_1122->g_629.saefe)).even))), ((VECTOR(int32_t, 16))(l_630.xyyyxxyxxxyxyxyx)).sdb))).yyxxyxxxyyxxxyyy)).sb84f))).y) >= ((((l_590[5] = p_84) || p_1122->g_380.x) , &p_1122->g_554) != l_631)) | 0xDEL) || l_632)) & (*p_83)), 0))))) >= l_632);
                        (*p_1122->g_178) = l_633;
                    }
                    l_634++;
                }
            }
            else
            { /* block id: 261 */
                int32_t l_706 = (-3L);
                VECTOR(uint32_t, 8) l_707 = (VECTOR(uint32_t, 8))(0x710B3B47L, (VECTOR(uint32_t, 4))(0x710B3B47L, (VECTOR(uint32_t, 2))(0x710B3B47L, 0x01EFAEB0L), 0x01EFAEB0L), 0x01EFAEB0L, 0x710B3B47L, 0x01EFAEB0L);
                uint32_t *l_708[5];
                int32_t l_712 = (-7L);
                VECTOR(int32_t, 2) l_717 = (VECTOR(int32_t, 2))(0x16334C2EL, (-1L));
                VECTOR(int32_t, 16) l_732 = (VECTOR(int32_t, 16))(0x5C419915L, (VECTOR(int32_t, 4))(0x5C419915L, (VECTOR(int32_t, 2))(0x5C419915L, 1L), 1L), 1L, 0x5C419915L, 1L, (VECTOR(int32_t, 2))(0x5C419915L, 1L), (VECTOR(int32_t, 2))(0x5C419915L, 1L), 0x5C419915L, 1L, 0x5C419915L, 1L);
                int i;
                for (i = 0; i < 5; i++)
                    l_708[i] = &l_450;
                if ((l_706 && (p_1122->g_249.sf &= ((VECTOR(uint32_t, 4))(l_707.s2403)).z)))
                { /* block id: 263 */
                    (*l_631) = l_709;
                    return (*p_82);
                }
                else
                { /* block id: 266 */
                    (*l_375) ^= l_707.s2;
                    l_712 = ((*l_375) = (safe_rshift_func_uint8_t_u_s(p_84, 3)));
                }
                for (p_84 = (-15); (p_84 == (-29)); p_84--)
                { /* block id: 273 */
                    uint64_t l_720 = 1UL;
                    VECTOR(uint64_t, 8) l_721 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x433354E299860C47L), 0x433354E299860C47L), 0x433354E299860C47L, 1UL, 0x433354E299860C47L);
                    uint16_t *l_727[1][3];
                    int64_t *l_729 = &l_364[0];
                    int32_t l_731[4];
                    uint32_t l_733 = 0x31CB9C56L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_727[i][j] = (void*)0;
                    }
                    for (i = 0; i < 4; i++)
                        l_731[i] = (-10L);
                    l_712 |= (safe_lshift_func_int16_t_s_s((((((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_717.xxyyyyxy)), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_718.s23064532)).hi)).xwzzxzyw, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1122->g_719.sd5e9)).yxywwyzx)), 0x22FB7C15L, (0xA3L > ((l_720 || ((p_1122->g_370.x , (!((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_721.s40)))).xyyxxyyy, ((VECTOR(uint64_t, 4))(p_1122->g_722.xyyx)).xwyywwzy))).s3701465452337470, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_1122->g_723.xyxyxxxxxyxyyyxy)).sb1)).xyyxxyxyxxyyxxyx))).lo)).s4)) , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(p_1122->g_724.se6439e1a1cb10180)))).s8)) , ((safe_lshift_func_int16_t_s_s(((-1L) ^ ((*l_729) ^= (((*p_1122->g_554) , l_727[0][0]) != p_1122->g_728))), (p_1122->g_60.w > (0x4D42503CL < p_84)))) | l_717.x))), ((VECTOR(int32_t, 4))(5L)), (-1L), (-1L))).sc8, ((VECTOR(int32_t, 2))(0x5F253B54L))))).xxxyyxyx))), ((VECTOR(int32_t, 8))(0x781B2FD8L))))).s74, ((VECTOR(uint32_t, 2))(4294967292UL))))).even == 0L) == l_730) , (*l_313)), 13));
                    if (l_707.s4)
                        continue;
                    ++l_733;
                    if ((**p_1122->g_177))
                        break;
                }
                return (*p_82);
            }
            for (l_472 = 0; (l_472 == 33); l_472++)
            { /* block id: 284 */
                VECTOR(int32_t, 4) l_739 = (VECTOR(int32_t, 4))(0x4CAA299EL, (VECTOR(int32_t, 2))(0x4CAA299EL, 6L), 6L);
                VECTOR(int16_t, 16) l_743 = (VECTOR(int16_t, 16))(0x4F9DL, (VECTOR(int16_t, 4))(0x4F9DL, (VECTOR(int16_t, 2))(0x4F9DL, 8L), 8L), 8L, 0x4F9DL, 8L, (VECTOR(int16_t, 2))(0x4F9DL, 8L), (VECTOR(int16_t, 2))(0x4F9DL, 8L), 0x4F9DL, 8L, 0x4F9DL, 8L);
                int i;
                (*l_375) = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_738.xyxyxxxx)).s4026006736035476, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_739.zzzx)))).xwyzzwxzywywxzwx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(p_1122->g_740.zyyy)).xyzxyyzwywwxzzzz, ((VECTOR(int32_t, 2))(l_741.s40)).yyyyyyxxyyyxxyxy, ((VECTOR(int32_t, 8))(0x07431489L, ((VECTOR(int32_t, 4))(p_1122->g_742.xyxx)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_743.s16fc)), ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(0xF10FL, ((((safe_sub_func_uint32_t_u_u(0xD0D8755CL, ((void*)0 == &p_1122->g_247))) || ((safe_mod_func_int16_t_s_s((l_748 & (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((((*l_631) = &p_1122->g_305) != (void*)0), ((*p_1122->g_68) & ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_1122->g_370.w, 8)), (((l_759 , (void*)0) == (void*)0) , 0x45CAL))) == p_84)))) == p_84), p_84)), (*p_83)))), p_1122->g_525.s8)) && l_760)) < l_739.w) , 0UL), (*l_313), ((VECTOR(uint16_t, 4))(65534UL)), 0x3357L)).s26, ((VECTOR(uint16_t, 2))(0UL))))).yxyx))).lo, ((VECTOR(int32_t, 2))(0x60AB519EL)), ((VECTOR(int32_t, 2))(0x523BFEF3L))))), ((VECTOR(int32_t, 2))(5L))))), 0x41E9EC85L)).s5070300516023563))).s72, ((VECTOR(int32_t, 2))((-6L)))))))).yyyyxxxyxxxyxxyy, ((VECTOR(int32_t, 16))(0x55C4FB69L)))))))).s0;
                if (l_743.sc)
                    break;
            }
            (*p_82) = (*p_82);
        }
        else
        { /* block id: 290 */
            VECTOR(uint8_t, 4) l_767 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL);
            uint32_t *l_768 = (void*)0;
            uint32_t *l_769[4];
            int32_t l_770 = (-8L);
            int16_t *l_773[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(int16_t, 4) l_782 = (VECTOR(int16_t, 4))(0x085EL, (VECTOR(int16_t, 2))(0x085EL, 0x5129L), 0x5129L);
            int i;
            for (i = 0; i < 4; i++)
                l_769[i] = &l_450;
            l_476 = (*p_1122->g_180);
            if (((safe_mod_func_int16_t_s_s(0x3A64L, (p_1122->g_695.s3 = (safe_sub_func_uint16_t_u_u((p_1122->g_699.s3 > ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_767.zwwz)).x, 0L)) | l_767.y)), (((--p_1122->g_249.s4) >= (*l_374)) == (+0x3AC22370L))))))) >= (*p_83)))
            { /* block id: 294 */
                uint32_t l_774[6];
                int32_t l_789 = 1L;
                uint8_t *l_790 = &l_402[1];
                VECTOR(int32_t, 4) l_799 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                int16_t *l_800 = (void*)0;
                uint64_t l_813 = 0x08EB36431209BE78L;
                int i;
                for (i = 0; i < 6; i++)
                    l_774[i] = 0x6DCA5EAEL;
                l_774[3]++;
                (**p_82) = (((p_1122->g_487.sa = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x3B73L, (-8L), 0x4028L, (-1L))), (-6L), 0x4D10L, 0x57FDL, 0x4FDDL)).s0) < (((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 4))((safe_lshift_func_int16_t_s_u(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1122->g_779.xz)), (-1L), (-1L))))).zzzyzwwy, ((VECTOR(int16_t, 4))(l_780.s4747)).yzxzxxwx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1122->g_781.s9f57)))).even)))).xyxyxxyx))), (-1L), 0x397CL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x68A4L, 6L)).yyxyyyyyxyxxxxxx)).sd2b7, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(l_782.xyyywzwyxywxwxzx)).sbe76, (int16_t)((FAKE_DIVERGE(p_1122->group_0_offset, get_group_id(0), 10) < (safe_lshift_func_int16_t_s_s(p_1122->g_254.x, (&l_446 != (void*)0)))) , (((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1122->local_1_offset, get_local_id(1), 10), ((((l_789 = 0x9D582C67L) != (((p_84 != ((l_767.w , l_790) != (l_782.y , p_81))) <= l_774[4]) || p_1122->g_59.s7)) == l_774[4]) <= (-1L)))), p_1122->g_791)) , l_767.z) , p_1122->g_791)), (int16_t)1L)))))).xxwyzxyz)).s3406222017503254)).s9ae3, ((VECTOR(int16_t, 4))(0x30ECL))))).hi, ((VECTOR(int16_t, 2))(0x3BE4L))))).xyxx)).xzwyywzz))).s6743134627552151)).saead)), p_1122->g_55, ((VECTOR(int16_t, 2))(0x3C06L)), ((VECTOR(int16_t, 4))(0x3395L)), l_792, 4L, 0x2E5FL, 0x049AL, 0x1608L)).odd)).s01)), 0x4C3AL, 0x7F34L, (-8L), 0x16A3L)).s6 | p_1122->g_698.sf) & l_793), 12)), 2L, 0x147621DA23EA4D99L, 0L)), ((VECTOR(int64_t, 4))(0x4C4253C0C7057547L)), ((VECTOR(int64_t, 4))(0x54BB438BDC7E49A9L))))).w , (*l_476))) && FAKE_DIVERGE(p_1122->global_2_offset, get_global_id(2), 10));
                if ((safe_unary_minus_func_int32_t_s((**p_82))))
                { /* block id: 299 */
                    int64_t l_807 = 0x04B825C0C37775E4L;
                    VECTOR(uint64_t, 2) l_812 = (VECTOR(uint64_t, 2))(1UL, 0xB991248AEEA2DA5FL);
                    int i;
                    (*l_313) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((VECTOR(int32_t, 8))(l_799.xxxzwxyx)).s4 | (l_800 == (void*)0)) && FAKE_DIVERGE(p_1122->global_0_offset, get_global_id(0), 10)), (safe_mul_func_uint8_t_u_u((((((VECTOR(uint32_t, 16))(l_803.xxyxxyyyyxyxyxxx)).s4 , 0x6FL) & 249UL) , (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_806.xz)), 0x4E2F839B8795CB63L, 0xE96CC6FD6EAB6FE4L, (p_1122->g_698.sd--), 1UL, 0xCAEC270E8B7C5F6AL, 0x63A9B9B816CE5DB7L)).s0, GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))((safe_lshift_func_int8_t_s_s(((p_80 == (void*)0) , p_1122->g_59.s3), 4)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(0x309347B373CEEAD0L, 0xB9F40587779DB48AL)), ((VECTOR(uint64_t, 8))(l_812.yxxyyyxy)).s46))).yxxyyyyy)).even)), l_813, (p_1122->g_380.x != p_1122->g_538.s8), ((VECTOR(uint64_t, 2))(0xCE97579BFD5F88C5L)), 0xC8860EC279873C92L, 18446744073709551612UL, 5UL, ((VECTOR(uint64_t, 2))(18446744073709551612UL)), 0xD4B19BC74A334941L, 0xAC05C9C420260880L)))).s1e29))), 0x552932332F69BC4FL, p_1122->g_335.y, 4UL, 0xDE361169EB93354FL)))).s34)), ((VECTOR(uint64_t, 2))(1UL)), 0xC5E0234FE4B241EFL, 0x9B583477719D1180L)))).s2, l_782.x))), l_782.x)))), p_1122->g_16));
                }
                else
                { /* block id: 302 */
                    uint32_t l_814 = 0x9B59C47FL;
                    l_814--;
                }
            }
            else
            { /* block id: 305 */
                return (*p_82);
            }
            (*p_1122->g_819) = (((*p_80) = (0x7DA6L || GROUP_DIVERGE(0, 1))) , p_1122->g_817);
        }
        if ((p_1122->g_155.y , (((((*p_82) != (*p_1122->g_180)) , l_829) == (void*)0) != p_84)))
        { /* block id: 313 */
            (**p_1122->g_180) = (p_84 <= 0x6A09L);
            l_830[2] = (*p_1122->g_177);
        }
        else
        { /* block id: 316 */
            uint8_t l_833 = 0x43L;
            uint64_t *l_847[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(uint32_t, 2) l_852 = (VECTOR(uint32_t, 2))(0UL, 1UL);
            int32_t l_865 = 0x252A8DDAL;
            int32_t l_903 = 0x1C61F073L;
            int32_t l_906 = 0x42FDA0DAL;
            int32_t l_911 = 1L;
            int32_t l_915[5];
            int8_t l_976[1];
            VECTOR(int8_t, 16) l_1015 = (VECTOR(int8_t, 16))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x1DL), 0x1DL), 0x1DL, 0x59L, 0x1DL, (VECTOR(int8_t, 2))(0x59L, 0x1DL), (VECTOR(int8_t, 2))(0x59L, 0x1DL), 0x59L, 0x1DL, 0x59L, 0x1DL);
            union U0 ***l_1019 = &l_631;
            uint64_t **l_1026 = &l_847[0];
            uint64_t ***l_1025 = &l_1026;
            int i;
            for (i = 0; i < 5; i++)
                l_915[i] = 6L;
            for (i = 0; i < 1; i++)
                l_976[i] = 0x24L;
            if ((!(p_84 , ((-1L) & ((safe_lshift_func_uint8_t_u_s(p_84, 0)) & (l_833 , 7L))))))
            { /* block id: 317 */
                int32_t l_838 = 2L;
                uint32_t *l_843 = (void*)0;
                VECTOR(int32_t, 4) l_849 = (VECTOR(int32_t, 4))(0x4A56239DL, (VECTOR(int32_t, 2))(0x4A56239DL, 0L), 0L);
                int32_t *l_864[8];
                int32_t l_866 = 0x6775AAC7L;
                VECTOR(uint16_t, 8) l_948 = (VECTOR(uint16_t, 8))(0xED86L, (VECTOR(uint16_t, 4))(0xED86L, (VECTOR(uint16_t, 2))(0xED86L, 65527UL), 65527UL), 65527UL, 0xED86L, 65527UL);
                int8_t l_959[3];
                VECTOR(int32_t, 8) l_979 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L);
                VECTOR(int32_t, 4) l_980 = (VECTOR(int32_t, 4))(0x7ED5B94FL, (VECTOR(int32_t, 2))(0x7ED5B94FL, 1L), 1L);
                VECTOR(int32_t, 8) l_984 = (VECTOR(int32_t, 8))(0x1945A99AL, (VECTOR(int32_t, 4))(0x1945A99AL, (VECTOR(int32_t, 2))(0x1945A99AL, 0x109ED338L), 0x109ED338L), 0x109ED338L, 0x1945A99AL, 0x109ED338L);
                VECTOR(int32_t, 4) l_996 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x62C73217L), 0x62C73217L);
                uint16_t **l_1000 = &p_1122->g_568[1][0][4];
                int i;
                for (i = 0; i < 8; i++)
                    l_864[i] = &p_1122->g_69;
                for (i = 0; i < 3; i++)
                    l_959[i] = 0x0AL;
                if (((GROUP_DIVERGE(1, 1) , ((safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((l_838 , ((safe_rshift_func_int8_t_s_u(((*p_81) = (FAKE_DIVERGE(p_1122->local_1_offset, get_local_id(1), 10) == l_838)), ((VECTOR(uint8_t, 16))(250UL, (safe_lshift_func_uint8_t_u_s(0xD7L, p_1122->g_719.s5)), 0x85L, (((0x3841314219F7F5FAL || (((*l_828) = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(0x4F68L, 0x1A5AL)).xxxxyyxx, ((VECTOR(uint16_t, 8))((l_843 != (void*)0), ((VECTOR(uint16_t, 4))(0xD38FL, ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 0x2597L)), 0UL, 0UL, 0x90ABL)), ((VECTOR(uint16_t, 2))(1UL, 2UL)).yxyyyyxy))).s4354150137263050)).s9) | (((((VECTOR(uint16_t, 8))(65534UL, 0xD718L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1122->g_844.s6022)), ((l_848 = (safe_sub_func_uint8_t_u_u((l_318[3][0][4] != l_847[0]), p_1122->g_629.sd))) < p_1122->g_670.y), ((VECTOR(uint16_t, 2))(65535UL)), p_84, 65528UL, 65529UL, l_849.y, p_84, p_84, ((VECTOR(uint16_t, 2))(0x0EEBL)), 65535UL)).sfb60))), ((VECTOR(uint16_t, 4))(4UL))))).wzzxyywy))).hi)).lo)), 0x1D6EL, ((VECTOR(uint16_t, 2))(0x2E91L)), 65535UL)).s4 || 8L) | 1UL) == 0x6519F0EBL))) || l_850.s7) & p_84), p_84, 0x6EL, ((VECTOR(uint8_t, 2))(0x27L)), l_849.y, 251UL, 0xA9L, 0x66L, ((VECTOR(uint8_t, 4))(0xD4L)))).se)) , 0x2028D24A4F0C6A4FL)), p_84)) && l_849.z), l_851)) >= 0x2B2F6B5F53520503L)) , (*p_1122->g_68)))
                { /* block id: 321 */
                    uint32_t l_870[1][10][10] = {{{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL},{0UL,0x6ECFC173L,0UL,0xC79AEC8BL,0x6ECFC173L,0xC79AEC8BL,0UL,0x6ECFC173L,0UL,0UL}}};
                    int64_t l_902 = 0x0350148B5F7A242FL;
                    int32_t l_909[4][7] = {{0x41886320L,0x41886320L,0L,0x36FA47C2L,0x70B9BA6CL,0x36FA47C2L,0L},{0x41886320L,0x41886320L,0L,0x36FA47C2L,0x70B9BA6CL,0x36FA47C2L,0L},{0x41886320L,0x41886320L,0L,0x36FA47C2L,0x70B9BA6CL,0x36FA47C2L,0L},{0x41886320L,0x41886320L,0L,0x36FA47C2L,0x70B9BA6CL,0x36FA47C2L,0L}};
                    VECTOR(int8_t, 4) l_936 = (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x0CL), 0x0CL);
                    int i, j, k;
                    (*p_82) = (*p_82);
                    if (((*l_375) > ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(l_852.yyyxxyxy)).s2500431747065004, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(l_853.xx)).xyyx, ((VECTOR(uint16_t, 8))(l_854.s78e9aec7)).hi))).xxxwyywz)).s2503310367425333))).se))
                    { /* block id: 323 */
                        union U0 l_857 = {0x7A1E6799L};
                        l_866 |= ((safe_add_func_int32_t_s_s((((*p_80) , (l_857 , (l_865 = (safe_div_func_uint16_t_u_u(p_84, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(0x29E2L, 0x3411L, 3L, 9L)), (int16_t)((&p_82 != l_531[0]) , ((((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), (*l_313))) , ((*p_82) != (l_864[6] = (((safe_rshift_func_uint16_t_u_s(l_849.x, 9)) > (9UL | p_84)) , (void*)0)))) , (-3L)) & 2L))))).z))))) & (*l_313)), (*p_1122->g_178))) , p_84);
                    }
                    else
                    { /* block id: 327 */
                        (*p_82) = (void*)0;
                    }
                    for (l_848 = 0; (l_848 >= 31); l_848++)
                    { /* block id: 332 */
                        VECTOR(int64_t, 4) l_869 = (VECTOR(int64_t, 4))(0x6C92AB11B74D00B4L, (VECTOR(int64_t, 2))(0x6C92AB11B74D00B4L, 6L), 6L);
                        int32_t l_907 = (-7L);
                        int32_t l_908 = 0x67B1CB98L;
                        int32_t l_912 = 0x68EEF520L;
                        int32_t l_913 = 0x1809AA8EL;
                        int32_t l_914 = 0x5D86BE1AL;
                        int i;
                        l_870[0][4][4]--;
                        (*l_829) = (((safe_rshift_func_int8_t_s_u((l_870[0][4][4] , (p_80 != (**p_1122->g_819))), 0)) == (safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u((l_903 |= (((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))((((-1L) || (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((p_1122->g_629.se , (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((+(safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(0x0CC1L, (-1L))) && (safe_div_func_uint8_t_u_u(l_865, (safe_unary_minus_func_uint64_t_u(0x89FFE7FF445F9B30L))))), p_84)) , 0xD745L), 1))), (*p_83))) == l_869.y), l_902)), 11)) , p_84) | 1L)), l_902)) , 0x041FL), 14)), (*p_81))), l_870[0][2][0]))) && l_869.y), ((VECTOR(int32_t, 2))(0x6F95AD23L)), (-9L), 0x296259C7L, ((VECTOR(int32_t, 2))((-6L))), 0L)), ((VECTOR(int32_t, 8))(0x33B3BE91L))))).s3 == GROUP_DIVERGE(2, 1))), p_1122->g_904)) && l_905), p_84))) , (*p_82));
                        --l_916;
                    }
                    l_909[2][3] &= ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((void*)0 == l_927), 1)) != (((safe_mul_func_int16_t_s_s((p_84 <= (l_930 &= p_84)), (((*l_313) = p_84) , ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))((*p_83), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s(l_870[0][4][4], 2)))), 13)), ((VECTOR(int8_t, 4))(l_936.yxxx)), 0x18L, 0x00L, 9L)).s5121115430434026)), ((VECTOR(int8_t, 16))((*l_313), 0x25L, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 4))((-1L))), (-1L), 0x46L))))).sdb, ((VECTOR(int8_t, 2))(3L))))), 0L)).yzzwyxyyzwxzyzxw, ((VECTOR(uint8_t, 16))(248UL))))).s9))) ^ p_1122->g_937) , p_84)), 1UL)), p_1122->g_370.z)), p_1122->g_904)) | 0xE1F635B5L);
                }
                else
                { /* block id: 341 */
                    uint64_t l_944[1][8] = {{0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L,0x7F87D509D381B639L}};
                    uint16_t *l_954 = (void*)0;
                    uint16_t *l_955 = (void*)0;
                    uint16_t *l_956 = (void*)0;
                    uint16_t *l_957 = &l_848;
                    int32_t l_958 = 0x7C094719L;
                    int32_t l_960[9][5] = {{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L},{0x5C957924L,(-10L),1L,(-10L),0x5C957924L}};
                    int32_t l_966 = 0x6A93A160L;
                    VECTOR(uint16_t, 16) l_1005 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x1930L), 0x1930L), 0x1930L, 65532UL, 0x1930L, (VECTOR(uint16_t, 2))(65532UL, 0x1930L), (VECTOR(uint16_t, 2))(65532UL, 0x1930L), 65532UL, 0x1930L, 65532UL, 0x1930L);
                    union U0 ***l_1020 = &l_631;
                    int i, j;
                    (*p_82) = &l_866;
                    l_958 = ((VECTOR(int32_t, 8))((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(l_944[0][3], p_84)), (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(l_947.yy)).xxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x014DL, 9UL)))).yxxyyyyx)).odd, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_948.s1742)).odd)))).yxyyxxxxyxxxxyxy)).s0565, ((VECTOR(uint16_t, 4))(l_949.se3f6)))))))).x, p_84)))), (~FAKE_DIVERGE(p_1122->group_2_offset, get_group_id(2), 10)))), (((*l_375) & l_944[0][3]) == ((*p_81) = (0x1C070117L && (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((safe_lshift_func_int8_t_s_u(1L, 7)) , ((*l_957) = ((*l_828) = ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((p_84 ^ 0xC7EFL), ((VECTOR(uint16_t, 8))(0x6E50L)), 0x0AE7L, 0xD372L, 1UL, ((VECTOR(uint16_t, 4))(0xF313L)))).lo)).s0521514420542207)).s49, ((VECTOR(uint16_t, 2))(0x51FAL))))).lo)))))))), 0L, 0x5D926055L, (**p_1122->g_177), 7L, 0x6C942EE6L, 0L)).s7;
                    if ((0x7DL ^ p_1122->g_526.s8))
                    { /* block id: 347 */
                        int64_t l_962 = 0x43C6A93920D85F53L;
                        int32_t l_963 = 0x08765661L;
                        int32_t l_964 = 6L;
                        int32_t l_967 = (-1L);
                        int32_t l_969 = 0x22F44B90L;
                        (*l_829) = (*p_82);
                        p_1122->g_970[1][5][2]--;
                    }
                    else
                    { /* block id: 350 */
                        VECTOR(uint32_t, 2) l_978 = (VECTOR(uint32_t, 2))(0x0C755832L, 0UL);
                        VECTOR(int32_t, 2) l_983 = (VECTOR(int32_t, 2))(0L, 1L);
                        uint32_t l_995 = 5UL;
                        int32_t l_997 = (-1L);
                        uint32_t **l_1006 = &l_843;
                        VECTOR(int8_t, 2) l_1013 = (VECTOR(int8_t, 2))((-1L), 0x46L);
                        VECTOR(int8_t, 16) l_1014 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int8_t, 2))((-5L), (-1L)), (VECTOR(int8_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L));
                        uint32_t *l_1021 = (void*)0;
                        uint32_t *l_1022 = (void*)0;
                        uint32_t *l_1023 = &l_450;
                        int16_t l_1024 = (-1L);
                        uint32_t l_1027[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1027[i] = 1UL;
                        (*l_313) = ((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(l_975.xwzwwxwzyzxwzzyw)).even, (int32_t)l_976[0], (int32_t)0x66E5B39FL))))), ((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 4))(0x6C4E9DF0L, (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(p_1122->g_977.s34656033)), ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_978.xx)).yxyyyxyyyxyyyxxy)))).even, ((VECTOR(uint32_t, 2))(0x6CFA4845L, 0x19222D6DL)).xxyxxyxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_979.s40006744)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_980.yyyxywyyzwxyxyzy)).scd)).yyxyxxyy)), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_981.s5204165113124262)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x7BFF543DL, p_84, 0x42D3F873L, 0L)).xzwzwxzyyzyzyzwz))))).lo))).s36)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_1122->g_982.xx)), ((VECTOR(int32_t, 8))(l_983.yyxxxyxx)).s21, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(0x73C498F0L, (-1L))), ((VECTOR(int32_t, 16))(l_984.s4606113372175623)).s5d)))))), 1L, 5L)).lo))).yxxxyxxyxxyxxxyy)).odd))).s21, ((VECTOR(uint32_t, 4))(p_1122->g_985.zyxz)).lo))), 0x47AD7282L, 0xBF32053FL)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 16))((~(-5L)), ((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (6UL & p_84))) & l_983.x), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((safe_lshift_func_uint16_t_u_u((((l_978.y , (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((0UL < p_84) || l_852.x), 6)), p_84))) , (-10L)) , l_915[3]), p_84)) <= (*p_81)), l_976[0], 0x14BD46FAL, ((VECTOR(int32_t, 4))(0L)), 1L)).s73, ((VECTOR(int32_t, 2))((-1L)))))).xxxxxxyy)))).s43)), (*l_313), l_994, ((VECTOR(int32_t, 2))(1L)), 0x35BF7A16L, ((VECTOR(int32_t, 2))((-1L))), 0x3136BE30L, l_995, p_84, (-1L), 0x12237AFBL))))).s8086)).even))).yxyyyxxyyxyyxxxy)), ((VECTOR(uint32_t, 16))(0x7104AE63L))))), ((VECTOR(uint32_t, 16))(0x7727C645L)), ((VECTOR(uint32_t, 16))(4294967295UL))))).even))).s22, ((VECTOR(uint32_t, 2))(0xC66DE296L)), ((VECTOR(uint32_t, 2))(2UL))))), 6UL, 0x6909761CL)).hi)))), ((VECTOR(uint32_t, 4))(6UL)), 1UL, 4294967295UL, ((VECTOR(uint32_t, 4))(2UL)), 4294967295UL, l_978.y, 0xB02F3F98L, 0x341C1AC8L)).s2c31, ((VECTOR(uint32_t, 4))(0x6D0F34BDL))))).zzxyzzxy)).s3 == 18446744073709551614UL), 2UL, 1UL)).yywxwyyy)))))).s4, l_852.y)) >= p_84);
                        (**p_82) = (((l_997 = (((+((((VECTOR(int32_t, 4))(l_996.xzxw)).x >= p_1122->g_628.y) , 18446744073709551615UL)) | p_84) >= 0x7BL)) & (8UL && ((VECTOR(int16_t, 16))(l_998.xyyxyyxxxyyyxxxx)).s5)) > 0x4D917C2DL);
                        (**p_82) = (((*l_313) |= ((safe_unary_minus_func_uint64_t_u((65535UL & ((l_1000 != (void*)0) & ((safe_add_func_uint64_t_u_u((l_1027[0] |= (((((safe_add_func_uint8_t_u_u((((((*l_828) = ((VECTOR(uint16_t, 4))(0x98AAL, ((VECTOR(uint16_t, 8))(l_1005.s3586c1ac)).s3, 0x8EE3L, 0x3BBEL)).z) || ((*l_957) = ((p_1122->g_68 != ((*l_1006) = &l_995)) > ((++(*l_828)) & (((safe_sub_func_uint64_t_u_u(((**p_82) , ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_1013.yy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_1014.s1a4dc192)).s0, 1L, 0x0FL, (-8L))).hi, ((VECTOR(int8_t, 4))(l_1015.s6758)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_1016.zwzzxxwz)).even, ((VECTOR(int8_t, 2))(1L, (-1L))).yxyy, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((safe_add_func_int32_t_s_s((((*l_1023) = (p_1122->g_781.s0 == (((l_1020 = l_1019) == (void*)0) , 0xF155FF9A40E666FEL))) == p_84), (**p_82))) || p_1122->g_682.sf), ((VECTOR(int8_t, 8))(0L)), (-8L), 0x17L, ((VECTOR(int8_t, 2))(8L)), l_903, 1L, (-9L))).s9180, ((VECTOR(int8_t, 4))(1L)))))))).x, ((VECTOR(int8_t, 4))(3L)), p_1122->g_71, 0x72L, 0x14L)).lo)), ((VECTOR(int8_t, 2))(3L)), (-9L), 9L)).hi)).odd))).xyyy)), 0L, 0x1BL)).s3303007631745725))).s7, FAKE_DIVERGE(p_1122->global_0_offset, get_global_id(0), 10))) > l_1013.x)), p_1122->g_682.sb)) != l_1024) || 0x0F00A112L))))) > l_1015.s6) <= p_1122->g_719.sb), 0x5CL)) , (**p_82)) & (**p_82)) , l_1025) != (void*)0)), 0x3A94E5D8760975D9L)) ^ 2UL))))) <= p_84)) < l_1024);
                    }
                }
                for (l_447 = (-14); (l_447 < 13); ++l_447)
                { /* block id: 367 */
                    (*p_82) = &l_906;
                }
            }
            else
            { /* block id: 370 */
                int8_t l_1030 = (-1L);
                int32_t l_1031 = (-1L);
                (*p_1122->g_178) &= 0x7B12B841L;
                if (l_865)
                { /* block id: 372 */
                    uint32_t l_1032 = 0x38A34EB0L;
                    --l_1032;
                    for (l_450 = 7; (l_450 > 4); --l_450)
                    { /* block id: 376 */
                        int64_t l_1037 = (-1L);
                        (*l_375) = l_1037;
                    }
                    (*p_82) = ((safe_unary_minus_func_uint32_t_u(p_84)) , (*p_82));
                }
                else
                { /* block id: 380 */
                    int32_t l_1039 = 0x289380F2L;
                    l_1040 = ((*l_375) = l_1039);
                    (*p_1122->g_178) |= (p_84 || p_84);
                }
            }
        }
    }
    else
    { /* block id: 387 */
        volatile uint8_t **l_1042 = &p_1122->g_452;
        volatile uint8_t ***l_1041 = &l_1042;
        (*l_1041) = &p_1122->g_452;
    }
    return l_313;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_99 p_1122->g_267 p_1122->g_71 p_1122->g_280 p_1122->g_60 p_1122->g_55 p_1122->g_56 p_1122->g_249 p_1122->g_69 p_1122->g_219 p_1122->g_31 p_1122->g_297
 * writes: p_1122->g_99 p_1122->g_249 p_1122->g_31
 */
int32_t ** func_87(uint32_t  p_88, int64_t  p_89, struct S1 * p_1122)
{ /* block id: 98 */
    uint16_t *l_260 = &p_1122->g_99;
    VECTOR(int16_t, 4) l_281 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-1L)), (-1L));
    int32_t *l_286[8];
    uint32_t *l_291 = (void*)0;
    uint32_t *l_292 = (void*)0;
    uint32_t *l_293 = (void*)0;
    uint32_t *l_294[5][9];
    int32_t l_295[6];
    VECTOR(int32_t, 16) l_296 = (VECTOR(int32_t, 16))(0x3C830416L, (VECTOR(int32_t, 4))(0x3C830416L, (VECTOR(int32_t, 2))(0x3C830416L, 5L), 5L), 5L, 0x3C830416L, 5L, (VECTOR(int32_t, 2))(0x3C830416L, 5L), (VECTOR(int32_t, 2))(0x3C830416L, 5L), 0x3C830416L, 5L, 0x3C830416L, 5L);
    int32_t **l_298 = &p_1122->g_219;
    int i, j;
    for (i = 0; i < 8; i++)
        l_286[i] = (void*)0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
            l_294[i][j] = (void*)0;
    }
    for (i = 0; i < 6; i++)
        l_295[i] = (-1L);
    atomic_sub(&p_1122->g_atomic_reduction[get_linear_group_id()], (((*l_260)++) || (safe_rshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((((*p_1122->g_219) = (l_295[1] = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(p_1122->g_267.s4f4a)), ((VECTOR(int16_t, 16))(0x7A8EL, p_1122->g_71, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(0L, 0x0866L)).yxxx, ((VECTOR(int16_t, 4))((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((p_1122->g_249.s6 = (safe_rshift_func_int16_t_s_u(p_88, (!(l_260 != ((safe_mod_func_uint32_t_u_u(p_88, (safe_lshift_func_uint8_t_u_u(p_88, ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(0x3BL, 0L)).yyxyxyyyxxyyxyxy, ((VECTOR(int8_t, 16))(p_1122->g_280.sbe486600078894fd))))).sa, (((((VECTOR(int16_t, 2))(l_281.wy)).odd || (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((void*)0 != l_286[1]), (((safe_add_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(p_1122->g_60.y, p_1122->g_55)) , l_281.x), GROUP_DIVERGE(0, 1))) , (-1L)) > p_88))), 18446744073709551615UL))) ^ p_1122->g_56.x) != p_1122->g_249.s4))) <= l_281.w))))) , l_260)))))) , 4294967289UL) && l_281.w), 3UL)), p_89)), p_88, 4L, 0x0DB1L))))), 0x0EFEL, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x7F6BL)), ((VECTOR(int16_t, 2))(1L)), 0x2C05L)).s5dac))).zxzwwwwzywzxzyzw)).sf , p_1122->g_69) & p_89))) <= (-5L)), p_89)) && l_281.w), 4))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1122->v_collective += p_1122->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_1122->g_219) ^= ((VECTOR(int32_t, 16))(l_296.s6027655b96c97fdc)).sc;
    l_296.sa |= ((VECTOR(int32_t, 4))(p_1122->g_297.s0525)).x;
    return l_298;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_249 p_1122->g_254 p_1122->g_153 p_1122->g_219 p_1122->g_13 p_1122->g_16 p_1122->g_178 p_1122->g_179
 * writes: p_1122->g_153 p_1122->g_31 p_1122->g_13 p_1122->g_16 p_1122->g_179
 */
int64_t  func_92(uint16_t  p_93, int32_t * p_94, uint32_t  p_95, int32_t *** p_96, int32_t ** p_97, struct S1 * p_1122)
{ /* block id: 88 */
    VECTOR(uint32_t, 2) l_248 = (VECTOR(uint32_t, 2))(0UL, 0UL);
    uint8_t *l_255 = &p_1122->g_153;
    int i;
    (*p_94) |= ((*p_1122->g_219) = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(l_248.xy)).xyxxyxyy, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 2))(6UL, 0xEE0E8DCDL))))).xyyxxyxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1122->g_249.s22b36c4d)).odd)).wwxwxywx)))))).s27)).odd || (safe_add_func_uint32_t_u_u((l_248.x < l_248.y), (safe_sub_func_uint8_t_u_u(l_248.x, ((*l_255) &= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1122->g_254.xyyyxxxyyyxxyyyy)).odd)))).s6)))))));
    for (p_1122->g_16 = 0; (p_1122->g_16 < 15); ++p_1122->g_16)
    { /* block id: 94 */
        (*p_1122->g_178) |= (safe_mul_func_int8_t_s_s(p_93, 248UL));
    }
    return p_93;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_223 p_1122->g_56 p_1122->g_219 p_1122->g_13 p_1122->g_60 p_1122->g_153 p_1122->g_comm_values p_1122->g_31
 * writes: p_1122->g_218 p_1122->g_219
 */
int32_t *** func_101(int32_t *** p_102, int8_t * p_103, int64_t  p_104, uint8_t  p_105, int64_t * p_106, struct S1 * p_1122)
{ /* block id: 82 */
    int32_t *l_224[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int64_t, 2) l_225 = (VECTOR(int64_t, 2))((-7L), 5L);
    VECTOR(int64_t, 8) l_226 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
    int32_t **l_234 = (void*)0;
    int32_t ***l_235 = &p_1122->g_218;
    int32_t **l_236 = &p_1122->g_219;
    uint64_t l_243 = 0UL;
    int32_t l_244 = 0L;
    int32_t *l_245 = &p_1122->g_31[0];
    int i;
    l_244 &= (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1122->g_223.yyzxwyyzyxyxyzww)).se, ((l_224[2] == (((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(l_225.yx)).yxxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_226.s61741323)))).hi))).x , l_224[2])) != (((safe_unary_minus_func_int16_t_s(p_105)) | (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((*l_235) = l_234) == l_236), 6)), (safe_mul_func_int8_t_s_s((((((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(p_1122->g_56.x, 0xCA4BL)) > (((((((VECTOR(uint8_t, 16))(0UL, (+(**l_236)), 5UL, 0x36L, p_104, ((VECTOR(uint8_t, 8))(254UL)), 0x5DL, 250UL, 246UL)).sd ^ p_1122->g_60.y) , p_104) <= 0xD30D841EF775B68FL) && 0x52L) <= FAKE_DIVERGE(p_1122->group_0_offset, get_group_id(0), 10))), p_1122->g_153)) && p_1122->g_56.y) >= l_243) & (*p_1122->g_219)) != p_1122->g_comm_values[p_1122->tid]), p_104)))), p_1122->g_31[3]))) | 0x1D2F55BAFC07765BL))));
    (*l_236) = l_245;
    return &p_1122->g_218;
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_178 p_1122->g_155 p_1122->g_179 p_1122->g_56 p_1122->g_215 p_1122->g_60 p_1122->g_153 p_1122->l_comm_values p_1122->g_69 p_1122->g_217
 * writes: p_1122->g_179 p_1122->g_215
 */
int32_t *** func_107(int32_t  p_108, int16_t  p_109, int8_t  p_110, struct S1 * p_1122)
{ /* block id: 77 */
    int32_t l_199[10][9] = {{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)},{0L,0x1FF961ABL,0x5959F263L,0x5A87B3A4L,0x23E2319AL,0x0872ADFBL,0x12B71802L,0x69A3159AL,(-2L)}};
    VECTOR(int32_t, 8) l_202 = (VECTOR(int32_t, 8))(0x2A2E64E4L, (VECTOR(int32_t, 4))(0x2A2E64E4L, (VECTOR(int32_t, 2))(0x2A2E64E4L, 0x4C9BB9CBL), 0x4C9BB9CBL), 0x4C9BB9CBL, 0x2A2E64E4L, 0x4C9BB9CBL);
    VECTOR(int32_t, 16) l_203 = (VECTOR(int32_t, 16))(0x4D287EBBL, (VECTOR(int32_t, 4))(0x4D287EBBL, (VECTOR(int32_t, 2))(0x4D287EBBL, 0x0F9B15E0L), 0x0F9B15E0L), 0x0F9B15E0L, 0x4D287EBBL, 0x0F9B15E0L, (VECTOR(int32_t, 2))(0x4D287EBBL, 0x0F9B15E0L), (VECTOR(int32_t, 2))(0x4D287EBBL, 0x0F9B15E0L), 0x4D287EBBL, 0x0F9B15E0L, 0x4D287EBBL, 0x0F9B15E0L);
    int32_t *l_214[6][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
    int32_t **l_216 = &p_1122->g_215;
    int i, j, k;
    (*p_1122->g_178) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(9L, 1L)))).lo;
    (*p_1122->g_178) = (((((((safe_div_func_uint8_t_u_u((~(safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_1122->g_155.x, (((safe_sub_func_uint64_t_u_u((p_1122->g_155.y > l_199[8][6]), p_1122->g_179)) & ((0xB778705FL | l_199[4][7]) , (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_202.s24)).hi, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(0x152DCB31L, 0x4C53BE71L)).yxxxxyxyxyxxyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_203.sc5cd07ea)).s07))), 0x669C13BAL, 0L)).xyxyzwwywwzwzzyx))).s0)))) | ((((p_1122->g_56.y >= ((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((l_214[3][0][0] == ((*l_216) = p_1122->g_215)) != l_202.s6) >= l_203.sf), p_1122->g_60.x)), p_110)), p_1122->g_60.x)) <= 0x782FL), p_1122->g_153)), 1)) & 0xD6L)) , 0L) > 0x54E9L) != 0UL)))), 0x61E6L))), FAKE_DIVERGE(p_1122->group_2_offset, get_group_id(2), 10))) ^ p_109) , p_1122->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1122->tid, 66))]) | p_1122->g_69) , p_109) != 0L) & p_110);
    return p_1122->g_217[2][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1122->g_13 p_1122->g_31 p_1122->g_60 p_1122->g_153 p_1122->g_71 p_1122->g_56 p_1122->g_155 p_1122->g_176 p_1122->g_69 p_1122->g_74 p_1122->g_comm_values
 * writes: p_1122->g_31 p_1122->g_153
 */
int64_t  func_115(uint8_t  p_116, int32_t * p_117, uint64_t  p_118, union U0  p_119, struct S1 * p_1122)
{ /* block id: 32 */
    int32_t *l_124 = &p_1122->g_31[3];
    int32_t l_131 = 0L;
    int32_t l_143[6];
    uint16_t l_145[10] = {0xFE5EL,1UL,0xFE5EL,0xFE5EL,1UL,0xFE5EL,0xFE5EL,1UL,0xFE5EL,0xFE5EL};
    int i;
    for (i = 0; i < 6; i++)
        l_143[i] = 0x51010FFDL;
    (*l_124) &= p_1122->g_13[2];
    for (p_119.f0 = (-15); (p_119.f0 <= 22); p_119.f0++)
    { /* block id: 36 */
        int32_t *l_127 = &p_1122->g_31[2];
        int32_t *l_128 = (void*)0;
        int32_t *l_129 = (void*)0;
        int32_t *l_130 = &p_1122->g_31[0];
        int32_t *l_132 = &p_1122->g_31[3];
        int32_t *l_133[10][2] = {{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]},{(void*)0,&p_1122->g_31[3]}};
        uint16_t l_134[8][10][3];
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 3; k++)
                    l_134[i][j][k] = 0x2B8EL;
            }
        }
        ++l_134[0][1][0];
        for (p_116 = (-13); (p_116 == 31); p_116 = safe_add_func_int16_t_s_s(p_116, 4))
        { /* block id: 40 */
            uint8_t l_139 = 0xF0L;
            int32_t l_142 = 1L;
            int32_t l_144 = 0x7E56D926L;
            ++l_139;
            l_142 &= p_1122->g_60.w;
            --l_145[8];
            for (l_142 = (-20); (l_142 == 11); l_142 = safe_add_func_uint32_t_u_u(l_142, 1))
            { /* block id: 46 */
                int32_t l_154 = 0x26EFE3CFL;
                for (l_139 = 0; (l_139 >= 23); l_139++)
                { /* block id: 49 */
                    uint8_t *l_152 = &p_1122->g_153;
                    l_154 ^= (((*l_152) |= (8L >= p_118)) ^ (p_1122->g_71 , (-1L)));
                    return p_1122->g_56.z;
                }
                if (((*l_127) = (((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(6L, 0x1000L)).yyxy, ((VECTOR(int16_t, 8))(p_1122->g_155.zzxxzyyz)).hi))).y != p_1122->g_13[2])))
                { /* block id: 55 */
                    int32_t **l_156 = &l_130;
                    (*l_156) = p_117;
                }
                else
                { /* block id: 57 */
                    uint16_t l_181 = 0xC76DL;
                    int32_t l_183 = 0x52030A44L;
                    for (l_131 = 28; (l_131 == (-25)); l_131 = safe_sub_func_int8_t_s_s(l_131, 6))
                    { /* block id: 60 */
                        uint16_t *l_161 = &l_134[0][1][0];
                        int32_t **l_164 = &l_133[7][0];
                        int32_t **l_165 = &l_129;
                        uint8_t *l_182 = &p_1122->g_153;
                        (*l_165) = ((safe_lshift_func_uint16_t_u_s(((*l_161)++), (4294967287UL | p_1122->g_31[1]))) , ((*l_164) = p_117));
                        l_183 = (((l_144 = (safe_add_func_int32_t_s_s(((*l_132) = (l_154 == (safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((0x02917F3FL <= (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((*l_182) = ((((+((p_1122->g_176[0] != p_1122->g_176[3]) , p_1122->g_69)) , &p_1122->g_71) == (void*)0) == l_181)), (l_181 || 0x48L))), 2UL))) , 0x0580E9A89EFA3817L), p_1122->g_74)), GROUP_DIVERGE(2, 1))))), 0x3500CD51L))) >= 0xAD161D8DL) != p_1122->g_comm_values[p_1122->tid]);
                    }
                }
                return p_119.f0;
            }
        }
        (*l_132) ^= 0x67F47FA0L;
    }
    return p_1122->g_155.w;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_comm_values[i] = 1;
    struct S1 c_1123;
    struct S1* p_1122 = &c_1123;
    struct S1 c_1124 = {
        {1L,0x4F6CBCB1L,1L,1L,0x4F6CBCB1L,1L,1L,0x4F6CBCB1L,1L}, // p_1122->g_13
        (-8L), // p_1122->g_16
        {0x70004DDCL,0x70004DDCL,0x70004DDCL,0x70004DDCL}, // p_1122->g_31
        0x7A0B2B04L, // p_1122->g_38
        {{&p_1122->g_38},{&p_1122->g_38},{&p_1122->g_38},{&p_1122->g_38},{&p_1122->g_38}}, // p_1122->g_37
        &p_1122->g_37[4][0], // p_1122->g_36
        0L, // p_1122->g_55
        {&p_1122->g_55,&p_1122->g_55,&p_1122->g_55,&p_1122->g_55,&p_1122->g_55,&p_1122->g_55,&p_1122->g_55,&p_1122->g_55}, // p_1122->g_54
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4DB28543L), 0x4DB28543L), // p_1122->g_56
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L)), // p_1122->g_59
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x27B986AFL), 0x27B986AFL), // p_1122->g_60
        0x236DA352L, // p_1122->g_69
        &p_1122->g_69, // p_1122->g_68
        1L, // p_1122->g_71
        0L, // p_1122->g_74
        1UL, // p_1122->g_99
        250UL, // p_1122->g_153
        (VECTOR(int16_t, 4))(0x31FCL, (VECTOR(int16_t, 2))(0x31FCL, 8L), 8L), // p_1122->g_155
        0x3BA70242L, // p_1122->g_179
        &p_1122->g_179, // p_1122->g_178
        &p_1122->g_178, // p_1122->g_177
        &p_1122->g_178, // p_1122->g_180
        {&p_1122->g_177,&p_1122->g_177,&p_1122->g_177,&p_1122->g_177}, // p_1122->g_176
        (void*)0, // p_1122->g_215
        &p_1122->g_13[6], // p_1122->g_219
        &p_1122->g_219, // p_1122->g_218
        {{&p_1122->g_218,(void*)0,&p_1122->g_218,(void*)0,&p_1122->g_218,&p_1122->g_218,(void*)0},{&p_1122->g_218,(void*)0,&p_1122->g_218,(void*)0,&p_1122->g_218,&p_1122->g_218,(void*)0},{&p_1122->g_218,(void*)0,&p_1122->g_218,(void*)0,&p_1122->g_218,&p_1122->g_218,(void*)0}}, // p_1122->g_217
        (VECTOR(uint64_t, 4))(0x83A632E2ADD75513L, (VECTOR(uint64_t, 2))(0x83A632E2ADD75513L, 0x696816D0B2B69162L), 0x696816D0B2B69162L), // p_1122->g_223
        (void*)0, // p_1122->g_247
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2BC33D4BL), 0x2BC33D4BL), 0x2BC33D4BL, 4294967295UL, 0x2BC33D4BL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2BC33D4BL), (VECTOR(uint32_t, 2))(4294967295UL, 0x2BC33D4BL), 4294967295UL, 0x2BC33D4BL, 4294967295UL, 0x2BC33D4BL), // p_1122->g_249
        (VECTOR(uint8_t, 2))(0x55L, 1UL), // p_1122->g_254
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4B79L), 0x4B79L), 0x4B79L, (-1L), 0x4B79L, (VECTOR(int16_t, 2))((-1L), 0x4B79L), (VECTOR(int16_t, 2))((-1L), 0x4B79L), (-1L), 0x4B79L, (-1L), 0x4B79L), // p_1122->g_267
        (VECTOR(int8_t, 16))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0L), 0L), 0L, 0x59L, 0L, (VECTOR(int8_t, 2))(0x59L, 0L), (VECTOR(int8_t, 2))(0x59L, 0L), 0x59L, 0L, 0x59L, 0L), // p_1122->g_280
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1122->g_297
        {0x42DA4460L}, // p_1122->g_305
        4UL, // p_1122->g_319
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint32_t, 2))(0UL, 7UL), (VECTOR(uint32_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL), // p_1122->g_322
        (VECTOR(uint32_t, 2))(1UL, 1UL), // p_1122->g_335
        (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 4UL), 4UL), 4UL, 3UL, 4UL), // p_1122->g_361
        (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x00L), 0x00L), // p_1122->g_370
        (VECTOR(int64_t, 2))((-1L), 0x278D93BE3A05BC7DL), // p_1122->g_380
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x18L), 0x18L), // p_1122->g_415
        (void*)0, // p_1122->g_427
        (void*)0, // p_1122->g_452
        &p_1122->g_452, // p_1122->g_451
        (-8L), // p_1122->g_468
        (VECTOR(uint32_t, 8))(0xD64994C7L, (VECTOR(uint32_t, 4))(0xD64994C7L, (VECTOR(uint32_t, 2))(0xD64994C7L, 0xF9254335L), 0xF9254335L), 0xF9254335L, 0xD64994C7L, 0xF9254335L), // p_1122->g_469
        (VECTOR(int16_t, 16))(0x52C4L, (VECTOR(int16_t, 4))(0x52C4L, (VECTOR(int16_t, 2))(0x52C4L, 0L), 0L), 0L, 0x52C4L, 0L, (VECTOR(int16_t, 2))(0x52C4L, 0L), (VECTOR(int16_t, 2))(0x52C4L, 0L), 0x52C4L, 0L, 0x52C4L, 0L), // p_1122->g_487
        (VECTOR(int16_t, 4))(0x758AL, (VECTOR(int16_t, 2))(0x758AL, 0x6930L), 0x6930L), // p_1122->g_513
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4397L), 0x4397L), 0x4397L, 1L, 0x4397L, (VECTOR(int16_t, 2))(1L, 0x4397L), (VECTOR(int16_t, 2))(1L, 0x4397L), 1L, 0x4397L, 1L, 0x4397L), // p_1122->g_525
        (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x7DCFL), 0x7DCFL), 0x7DCFL, (-2L), 0x7DCFL, (VECTOR(int16_t, 2))((-2L), 0x7DCFL), (VECTOR(int16_t, 2))((-2L), 0x7DCFL), (-2L), 0x7DCFL, (-2L), 0x7DCFL), // p_1122->g_526
        (VECTOR(uint16_t, 16))(0x2E1CL, (VECTOR(uint16_t, 4))(0x2E1CL, (VECTOR(uint16_t, 2))(0x2E1CL, 0x099BL), 0x099BL), 0x099BL, 0x2E1CL, 0x099BL, (VECTOR(uint16_t, 2))(0x2E1CL, 0x099BL), (VECTOR(uint16_t, 2))(0x2E1CL, 0x099BL), 0x2E1CL, 0x099BL, 0x2E1CL, 0x099BL), // p_1122->g_538
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65531UL), 65531UL), // p_1122->g_539
        &p_1122->g_305, // p_1122->g_554
        {{{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1122->g_99,(void*)0,&p_1122->g_99,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1122->g_568
        (VECTOR(int32_t, 2))(0x2CDCE316L, 0L), // p_1122->g_628
        (VECTOR(int32_t, 16))(0x755671F7L, (VECTOR(int32_t, 4))(0x755671F7L, (VECTOR(int32_t, 2))(0x755671F7L, 2L), 2L), 2L, 0x755671F7L, 2L, (VECTOR(int32_t, 2))(0x755671F7L, 2L), (VECTOR(int32_t, 2))(0x755671F7L, 2L), 0x755671F7L, 2L, 0x755671F7L, 2L), // p_1122->g_629
        (VECTOR(int32_t, 16))(0x3692DD8AL, (VECTOR(int32_t, 4))(0x3692DD8AL, (VECTOR(int32_t, 2))(0x3692DD8AL, (-5L)), (-5L)), (-5L), 0x3692DD8AL, (-5L), (VECTOR(int32_t, 2))(0x3692DD8AL, (-5L)), (VECTOR(int32_t, 2))(0x3692DD8AL, (-5L)), 0x3692DD8AL, (-5L), 0x3692DD8AL, (-5L)), // p_1122->g_637
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_1122->g_648
        (VECTOR(int16_t, 2))(0x388FL, 0x32D7L), // p_1122->g_670
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x49053416L), 0x49053416L), 0x49053416L, 0L, 0x49053416L, (VECTOR(int32_t, 2))(0L, 0x49053416L), (VECTOR(int32_t, 2))(0L, 0x49053416L), 0L, 0x49053416L, 0L, 0x49053416L), // p_1122->g_682
        (VECTOR(int16_t, 2))(9L, 0L), // p_1122->g_692
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1122->g_695
        (VECTOR(uint64_t, 16))(0xDE9FD28E7E78B6CCL, (VECTOR(uint64_t, 4))(0xDE9FD28E7E78B6CCL, (VECTOR(uint64_t, 2))(0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL), 0xE1EE941021C78DDCL), 0xE1EE941021C78DDCL, 0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL, (VECTOR(uint64_t, 2))(0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL), (VECTOR(uint64_t, 2))(0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL), 0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL, 0xDE9FD28E7E78B6CCL, 0xE1EE941021C78DDCL), // p_1122->g_698
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x30A20768F8F44DC4L), 0x30A20768F8F44DC4L), 0x30A20768F8F44DC4L, 0UL, 0x30A20768F8F44DC4L), // p_1122->g_699
        (VECTOR(int32_t, 16))(0x513458F2L, (VECTOR(int32_t, 4))(0x513458F2L, (VECTOR(int32_t, 2))(0x513458F2L, 0x0BFC8358L), 0x0BFC8358L), 0x0BFC8358L, 0x513458F2L, 0x0BFC8358L, (VECTOR(int32_t, 2))(0x513458F2L, 0x0BFC8358L), (VECTOR(int32_t, 2))(0x513458F2L, 0x0BFC8358L), 0x513458F2L, 0x0BFC8358L, 0x513458F2L, 0x0BFC8358L), // p_1122->g_719
        (VECTOR(uint64_t, 2))(2UL, 0x3522D30E1690BF48L), // p_1122->g_722
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1F54DA276BBB645FL), // p_1122->g_723
        (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551607UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551615UL), 18446744073709551607UL, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551615UL), // p_1122->g_724
        (void*)0, // p_1122->g_728
        (VECTOR(int32_t, 4))(0x2E3551F5L, (VECTOR(int32_t, 2))(0x2E3551F5L, (-7L)), (-7L)), // p_1122->g_740
        (VECTOR(int32_t, 2))(0x7AB19C1EL, (-4L)), // p_1122->g_742
        (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L), // p_1122->g_779
        (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int16_t, 2))(9L, 1L), (VECTOR(int16_t, 2))(9L, 1L), 9L, 1L, 9L, 1L), // p_1122->g_781
        0xF5L, // p_1122->g_791
        {{&p_1122->g_319},{&p_1122->g_319},{&p_1122->g_319},{&p_1122->g_319}}, // p_1122->g_818
        &p_1122->g_818[2][0], // p_1122->g_817
        &p_1122->g_817, // p_1122->g_819
        (VECTOR(uint16_t, 8))(0x513FL, (VECTOR(uint16_t, 4))(0x513FL, (VECTOR(uint16_t, 2))(0x513FL, 1UL), 1UL), 1UL, 0x513FL, 1UL), // p_1122->g_844
        0xE393E56F659FD0D9L, // p_1122->g_904
        0x74D19570L, // p_1122->g_910
        0x76L, // p_1122->g_937
        0L, // p_1122->g_965
        {{{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL}},{{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL}},{{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL}},{{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL},{0xFC332F22L,0UL,4294967295UL,0x9461C6E3L,4294967295UL,0xF790BC62L,0x540800D9L,0x3E7DEE1FL}}}, // p_1122->g_970
        (VECTOR(uint32_t, 8))(0x7539B130L, (VECTOR(uint32_t, 4))(0x7539B130L, (VECTOR(uint32_t, 2))(0x7539B130L, 0xB7748262L), 0xB7748262L), 0xB7748262L, 0x7539B130L, 0xB7748262L), // p_1122->g_977
        (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x26A6CED6L), 0x26A6CED6L), // p_1122->g_982
        (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967289UL), 4294967289UL), // p_1122->g_985
        (VECTOR(int32_t, 8))(0x0DC4C11BL, (VECTOR(int32_t, 4))(0x0DC4C11BL, (VECTOR(int32_t, 2))(0x0DC4C11BL, 0x298549D1L), 0x298549D1L), 0x298549D1L, 0x0DC4C11BL, 0x298549D1L), // p_1122->g_1043
        &p_1122->g_71, // p_1122->g_1046
        (void*)0, // p_1122->g_1060
        &p_1122->g_1060, // p_1122->g_1059
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1122->g_1064
        0x5375133AAE220A92L, // p_1122->g_1086
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4F96L), 0x4F96L), 0x4F96L, 0L, 0x4F96L), // p_1122->g_1121
        0, // p_1122->v_collective
        sequence_input[get_global_id(0)], // p_1122->global_0_offset
        sequence_input[get_global_id(1)], // p_1122->global_1_offset
        sequence_input[get_global_id(2)], // p_1122->global_2_offset
        sequence_input[get_local_id(0)], // p_1122->local_0_offset
        sequence_input[get_local_id(1)], // p_1122->local_1_offset
        sequence_input[get_local_id(2)], // p_1122->local_2_offset
        sequence_input[get_group_id(0)], // p_1122->group_0_offset
        sequence_input[get_group_id(1)], // p_1122->group_1_offset
        sequence_input[get_group_id(2)], // p_1122->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 66)), permutations[0][get_linear_local_id()])), // p_1122->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1123 = c_1124;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1122);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1122->g_13[i], "p_1122->g_13[i]", print_hash_value);

    }
    transparent_crc(p_1122->g_16, "p_1122->g_16", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1122->g_31[i], "p_1122->g_31[i]", print_hash_value);

    }
    transparent_crc(p_1122->g_38, "p_1122->g_38", print_hash_value);
    transparent_crc(p_1122->g_55, "p_1122->g_55", print_hash_value);
    transparent_crc(p_1122->g_56.x, "p_1122->g_56.x", print_hash_value);
    transparent_crc(p_1122->g_56.y, "p_1122->g_56.y", print_hash_value);
    transparent_crc(p_1122->g_56.z, "p_1122->g_56.z", print_hash_value);
    transparent_crc(p_1122->g_56.w, "p_1122->g_56.w", print_hash_value);
    transparent_crc(p_1122->g_59.s0, "p_1122->g_59.s0", print_hash_value);
    transparent_crc(p_1122->g_59.s1, "p_1122->g_59.s1", print_hash_value);
    transparent_crc(p_1122->g_59.s2, "p_1122->g_59.s2", print_hash_value);
    transparent_crc(p_1122->g_59.s3, "p_1122->g_59.s3", print_hash_value);
    transparent_crc(p_1122->g_59.s4, "p_1122->g_59.s4", print_hash_value);
    transparent_crc(p_1122->g_59.s5, "p_1122->g_59.s5", print_hash_value);
    transparent_crc(p_1122->g_59.s6, "p_1122->g_59.s6", print_hash_value);
    transparent_crc(p_1122->g_59.s7, "p_1122->g_59.s7", print_hash_value);
    transparent_crc(p_1122->g_60.x, "p_1122->g_60.x", print_hash_value);
    transparent_crc(p_1122->g_60.y, "p_1122->g_60.y", print_hash_value);
    transparent_crc(p_1122->g_60.z, "p_1122->g_60.z", print_hash_value);
    transparent_crc(p_1122->g_60.w, "p_1122->g_60.w", print_hash_value);
    transparent_crc(p_1122->g_69, "p_1122->g_69", print_hash_value);
    transparent_crc(p_1122->g_71, "p_1122->g_71", print_hash_value);
    transparent_crc(p_1122->g_74, "p_1122->g_74", print_hash_value);
    transparent_crc(p_1122->g_99, "p_1122->g_99", print_hash_value);
    transparent_crc(p_1122->g_153, "p_1122->g_153", print_hash_value);
    transparent_crc(p_1122->g_155.x, "p_1122->g_155.x", print_hash_value);
    transparent_crc(p_1122->g_155.y, "p_1122->g_155.y", print_hash_value);
    transparent_crc(p_1122->g_155.z, "p_1122->g_155.z", print_hash_value);
    transparent_crc(p_1122->g_155.w, "p_1122->g_155.w", print_hash_value);
    transparent_crc(p_1122->g_179, "p_1122->g_179", print_hash_value);
    transparent_crc(p_1122->g_223.x, "p_1122->g_223.x", print_hash_value);
    transparent_crc(p_1122->g_223.y, "p_1122->g_223.y", print_hash_value);
    transparent_crc(p_1122->g_223.z, "p_1122->g_223.z", print_hash_value);
    transparent_crc(p_1122->g_223.w, "p_1122->g_223.w", print_hash_value);
    transparent_crc(p_1122->g_249.s0, "p_1122->g_249.s0", print_hash_value);
    transparent_crc(p_1122->g_249.s1, "p_1122->g_249.s1", print_hash_value);
    transparent_crc(p_1122->g_249.s2, "p_1122->g_249.s2", print_hash_value);
    transparent_crc(p_1122->g_249.s3, "p_1122->g_249.s3", print_hash_value);
    transparent_crc(p_1122->g_249.s4, "p_1122->g_249.s4", print_hash_value);
    transparent_crc(p_1122->g_249.s5, "p_1122->g_249.s5", print_hash_value);
    transparent_crc(p_1122->g_249.s6, "p_1122->g_249.s6", print_hash_value);
    transparent_crc(p_1122->g_249.s7, "p_1122->g_249.s7", print_hash_value);
    transparent_crc(p_1122->g_249.s8, "p_1122->g_249.s8", print_hash_value);
    transparent_crc(p_1122->g_249.s9, "p_1122->g_249.s9", print_hash_value);
    transparent_crc(p_1122->g_249.sa, "p_1122->g_249.sa", print_hash_value);
    transparent_crc(p_1122->g_249.sb, "p_1122->g_249.sb", print_hash_value);
    transparent_crc(p_1122->g_249.sc, "p_1122->g_249.sc", print_hash_value);
    transparent_crc(p_1122->g_249.sd, "p_1122->g_249.sd", print_hash_value);
    transparent_crc(p_1122->g_249.se, "p_1122->g_249.se", print_hash_value);
    transparent_crc(p_1122->g_249.sf, "p_1122->g_249.sf", print_hash_value);
    transparent_crc(p_1122->g_254.x, "p_1122->g_254.x", print_hash_value);
    transparent_crc(p_1122->g_254.y, "p_1122->g_254.y", print_hash_value);
    transparent_crc(p_1122->g_267.s0, "p_1122->g_267.s0", print_hash_value);
    transparent_crc(p_1122->g_267.s1, "p_1122->g_267.s1", print_hash_value);
    transparent_crc(p_1122->g_267.s2, "p_1122->g_267.s2", print_hash_value);
    transparent_crc(p_1122->g_267.s3, "p_1122->g_267.s3", print_hash_value);
    transparent_crc(p_1122->g_267.s4, "p_1122->g_267.s4", print_hash_value);
    transparent_crc(p_1122->g_267.s5, "p_1122->g_267.s5", print_hash_value);
    transparent_crc(p_1122->g_267.s6, "p_1122->g_267.s6", print_hash_value);
    transparent_crc(p_1122->g_267.s7, "p_1122->g_267.s7", print_hash_value);
    transparent_crc(p_1122->g_267.s8, "p_1122->g_267.s8", print_hash_value);
    transparent_crc(p_1122->g_267.s9, "p_1122->g_267.s9", print_hash_value);
    transparent_crc(p_1122->g_267.sa, "p_1122->g_267.sa", print_hash_value);
    transparent_crc(p_1122->g_267.sb, "p_1122->g_267.sb", print_hash_value);
    transparent_crc(p_1122->g_267.sc, "p_1122->g_267.sc", print_hash_value);
    transparent_crc(p_1122->g_267.sd, "p_1122->g_267.sd", print_hash_value);
    transparent_crc(p_1122->g_267.se, "p_1122->g_267.se", print_hash_value);
    transparent_crc(p_1122->g_267.sf, "p_1122->g_267.sf", print_hash_value);
    transparent_crc(p_1122->g_280.s0, "p_1122->g_280.s0", print_hash_value);
    transparent_crc(p_1122->g_280.s1, "p_1122->g_280.s1", print_hash_value);
    transparent_crc(p_1122->g_280.s2, "p_1122->g_280.s2", print_hash_value);
    transparent_crc(p_1122->g_280.s3, "p_1122->g_280.s3", print_hash_value);
    transparent_crc(p_1122->g_280.s4, "p_1122->g_280.s4", print_hash_value);
    transparent_crc(p_1122->g_280.s5, "p_1122->g_280.s5", print_hash_value);
    transparent_crc(p_1122->g_280.s6, "p_1122->g_280.s6", print_hash_value);
    transparent_crc(p_1122->g_280.s7, "p_1122->g_280.s7", print_hash_value);
    transparent_crc(p_1122->g_280.s8, "p_1122->g_280.s8", print_hash_value);
    transparent_crc(p_1122->g_280.s9, "p_1122->g_280.s9", print_hash_value);
    transparent_crc(p_1122->g_280.sa, "p_1122->g_280.sa", print_hash_value);
    transparent_crc(p_1122->g_280.sb, "p_1122->g_280.sb", print_hash_value);
    transparent_crc(p_1122->g_280.sc, "p_1122->g_280.sc", print_hash_value);
    transparent_crc(p_1122->g_280.sd, "p_1122->g_280.sd", print_hash_value);
    transparent_crc(p_1122->g_280.se, "p_1122->g_280.se", print_hash_value);
    transparent_crc(p_1122->g_280.sf, "p_1122->g_280.sf", print_hash_value);
    transparent_crc(p_1122->g_297.s0, "p_1122->g_297.s0", print_hash_value);
    transparent_crc(p_1122->g_297.s1, "p_1122->g_297.s1", print_hash_value);
    transparent_crc(p_1122->g_297.s2, "p_1122->g_297.s2", print_hash_value);
    transparent_crc(p_1122->g_297.s3, "p_1122->g_297.s3", print_hash_value);
    transparent_crc(p_1122->g_297.s4, "p_1122->g_297.s4", print_hash_value);
    transparent_crc(p_1122->g_297.s5, "p_1122->g_297.s5", print_hash_value);
    transparent_crc(p_1122->g_297.s6, "p_1122->g_297.s6", print_hash_value);
    transparent_crc(p_1122->g_297.s7, "p_1122->g_297.s7", print_hash_value);
    transparent_crc(p_1122->g_305.f0, "p_1122->g_305.f0", print_hash_value);
    transparent_crc(p_1122->g_319, "p_1122->g_319", print_hash_value);
    transparent_crc(p_1122->g_322.s0, "p_1122->g_322.s0", print_hash_value);
    transparent_crc(p_1122->g_322.s1, "p_1122->g_322.s1", print_hash_value);
    transparent_crc(p_1122->g_322.s2, "p_1122->g_322.s2", print_hash_value);
    transparent_crc(p_1122->g_322.s3, "p_1122->g_322.s3", print_hash_value);
    transparent_crc(p_1122->g_322.s4, "p_1122->g_322.s4", print_hash_value);
    transparent_crc(p_1122->g_322.s5, "p_1122->g_322.s5", print_hash_value);
    transparent_crc(p_1122->g_322.s6, "p_1122->g_322.s6", print_hash_value);
    transparent_crc(p_1122->g_322.s7, "p_1122->g_322.s7", print_hash_value);
    transparent_crc(p_1122->g_322.s8, "p_1122->g_322.s8", print_hash_value);
    transparent_crc(p_1122->g_322.s9, "p_1122->g_322.s9", print_hash_value);
    transparent_crc(p_1122->g_322.sa, "p_1122->g_322.sa", print_hash_value);
    transparent_crc(p_1122->g_322.sb, "p_1122->g_322.sb", print_hash_value);
    transparent_crc(p_1122->g_322.sc, "p_1122->g_322.sc", print_hash_value);
    transparent_crc(p_1122->g_322.sd, "p_1122->g_322.sd", print_hash_value);
    transparent_crc(p_1122->g_322.se, "p_1122->g_322.se", print_hash_value);
    transparent_crc(p_1122->g_322.sf, "p_1122->g_322.sf", print_hash_value);
    transparent_crc(p_1122->g_335.x, "p_1122->g_335.x", print_hash_value);
    transparent_crc(p_1122->g_335.y, "p_1122->g_335.y", print_hash_value);
    transparent_crc(p_1122->g_361.s0, "p_1122->g_361.s0", print_hash_value);
    transparent_crc(p_1122->g_361.s1, "p_1122->g_361.s1", print_hash_value);
    transparent_crc(p_1122->g_361.s2, "p_1122->g_361.s2", print_hash_value);
    transparent_crc(p_1122->g_361.s3, "p_1122->g_361.s3", print_hash_value);
    transparent_crc(p_1122->g_361.s4, "p_1122->g_361.s4", print_hash_value);
    transparent_crc(p_1122->g_361.s5, "p_1122->g_361.s5", print_hash_value);
    transparent_crc(p_1122->g_361.s6, "p_1122->g_361.s6", print_hash_value);
    transparent_crc(p_1122->g_361.s7, "p_1122->g_361.s7", print_hash_value);
    transparent_crc(p_1122->g_370.x, "p_1122->g_370.x", print_hash_value);
    transparent_crc(p_1122->g_370.y, "p_1122->g_370.y", print_hash_value);
    transparent_crc(p_1122->g_370.z, "p_1122->g_370.z", print_hash_value);
    transparent_crc(p_1122->g_370.w, "p_1122->g_370.w", print_hash_value);
    transparent_crc(p_1122->g_380.x, "p_1122->g_380.x", print_hash_value);
    transparent_crc(p_1122->g_380.y, "p_1122->g_380.y", print_hash_value);
    transparent_crc(p_1122->g_415.x, "p_1122->g_415.x", print_hash_value);
    transparent_crc(p_1122->g_415.y, "p_1122->g_415.y", print_hash_value);
    transparent_crc(p_1122->g_415.z, "p_1122->g_415.z", print_hash_value);
    transparent_crc(p_1122->g_415.w, "p_1122->g_415.w", print_hash_value);
    transparent_crc(p_1122->g_468, "p_1122->g_468", print_hash_value);
    transparent_crc(p_1122->g_469.s0, "p_1122->g_469.s0", print_hash_value);
    transparent_crc(p_1122->g_469.s1, "p_1122->g_469.s1", print_hash_value);
    transparent_crc(p_1122->g_469.s2, "p_1122->g_469.s2", print_hash_value);
    transparent_crc(p_1122->g_469.s3, "p_1122->g_469.s3", print_hash_value);
    transparent_crc(p_1122->g_469.s4, "p_1122->g_469.s4", print_hash_value);
    transparent_crc(p_1122->g_469.s5, "p_1122->g_469.s5", print_hash_value);
    transparent_crc(p_1122->g_469.s6, "p_1122->g_469.s6", print_hash_value);
    transparent_crc(p_1122->g_469.s7, "p_1122->g_469.s7", print_hash_value);
    transparent_crc(p_1122->g_487.s0, "p_1122->g_487.s0", print_hash_value);
    transparent_crc(p_1122->g_487.s1, "p_1122->g_487.s1", print_hash_value);
    transparent_crc(p_1122->g_487.s2, "p_1122->g_487.s2", print_hash_value);
    transparent_crc(p_1122->g_487.s3, "p_1122->g_487.s3", print_hash_value);
    transparent_crc(p_1122->g_487.s4, "p_1122->g_487.s4", print_hash_value);
    transparent_crc(p_1122->g_487.s5, "p_1122->g_487.s5", print_hash_value);
    transparent_crc(p_1122->g_487.s6, "p_1122->g_487.s6", print_hash_value);
    transparent_crc(p_1122->g_487.s7, "p_1122->g_487.s7", print_hash_value);
    transparent_crc(p_1122->g_487.s8, "p_1122->g_487.s8", print_hash_value);
    transparent_crc(p_1122->g_487.s9, "p_1122->g_487.s9", print_hash_value);
    transparent_crc(p_1122->g_487.sa, "p_1122->g_487.sa", print_hash_value);
    transparent_crc(p_1122->g_487.sb, "p_1122->g_487.sb", print_hash_value);
    transparent_crc(p_1122->g_487.sc, "p_1122->g_487.sc", print_hash_value);
    transparent_crc(p_1122->g_487.sd, "p_1122->g_487.sd", print_hash_value);
    transparent_crc(p_1122->g_487.se, "p_1122->g_487.se", print_hash_value);
    transparent_crc(p_1122->g_487.sf, "p_1122->g_487.sf", print_hash_value);
    transparent_crc(p_1122->g_513.x, "p_1122->g_513.x", print_hash_value);
    transparent_crc(p_1122->g_513.y, "p_1122->g_513.y", print_hash_value);
    transparent_crc(p_1122->g_513.z, "p_1122->g_513.z", print_hash_value);
    transparent_crc(p_1122->g_513.w, "p_1122->g_513.w", print_hash_value);
    transparent_crc(p_1122->g_525.s0, "p_1122->g_525.s0", print_hash_value);
    transparent_crc(p_1122->g_525.s1, "p_1122->g_525.s1", print_hash_value);
    transparent_crc(p_1122->g_525.s2, "p_1122->g_525.s2", print_hash_value);
    transparent_crc(p_1122->g_525.s3, "p_1122->g_525.s3", print_hash_value);
    transparent_crc(p_1122->g_525.s4, "p_1122->g_525.s4", print_hash_value);
    transparent_crc(p_1122->g_525.s5, "p_1122->g_525.s5", print_hash_value);
    transparent_crc(p_1122->g_525.s6, "p_1122->g_525.s6", print_hash_value);
    transparent_crc(p_1122->g_525.s7, "p_1122->g_525.s7", print_hash_value);
    transparent_crc(p_1122->g_525.s8, "p_1122->g_525.s8", print_hash_value);
    transparent_crc(p_1122->g_525.s9, "p_1122->g_525.s9", print_hash_value);
    transparent_crc(p_1122->g_525.sa, "p_1122->g_525.sa", print_hash_value);
    transparent_crc(p_1122->g_525.sb, "p_1122->g_525.sb", print_hash_value);
    transparent_crc(p_1122->g_525.sc, "p_1122->g_525.sc", print_hash_value);
    transparent_crc(p_1122->g_525.sd, "p_1122->g_525.sd", print_hash_value);
    transparent_crc(p_1122->g_525.se, "p_1122->g_525.se", print_hash_value);
    transparent_crc(p_1122->g_525.sf, "p_1122->g_525.sf", print_hash_value);
    transparent_crc(p_1122->g_526.s0, "p_1122->g_526.s0", print_hash_value);
    transparent_crc(p_1122->g_526.s1, "p_1122->g_526.s1", print_hash_value);
    transparent_crc(p_1122->g_526.s2, "p_1122->g_526.s2", print_hash_value);
    transparent_crc(p_1122->g_526.s3, "p_1122->g_526.s3", print_hash_value);
    transparent_crc(p_1122->g_526.s4, "p_1122->g_526.s4", print_hash_value);
    transparent_crc(p_1122->g_526.s5, "p_1122->g_526.s5", print_hash_value);
    transparent_crc(p_1122->g_526.s6, "p_1122->g_526.s6", print_hash_value);
    transparent_crc(p_1122->g_526.s7, "p_1122->g_526.s7", print_hash_value);
    transparent_crc(p_1122->g_526.s8, "p_1122->g_526.s8", print_hash_value);
    transparent_crc(p_1122->g_526.s9, "p_1122->g_526.s9", print_hash_value);
    transparent_crc(p_1122->g_526.sa, "p_1122->g_526.sa", print_hash_value);
    transparent_crc(p_1122->g_526.sb, "p_1122->g_526.sb", print_hash_value);
    transparent_crc(p_1122->g_526.sc, "p_1122->g_526.sc", print_hash_value);
    transparent_crc(p_1122->g_526.sd, "p_1122->g_526.sd", print_hash_value);
    transparent_crc(p_1122->g_526.se, "p_1122->g_526.se", print_hash_value);
    transparent_crc(p_1122->g_526.sf, "p_1122->g_526.sf", print_hash_value);
    transparent_crc(p_1122->g_538.s0, "p_1122->g_538.s0", print_hash_value);
    transparent_crc(p_1122->g_538.s1, "p_1122->g_538.s1", print_hash_value);
    transparent_crc(p_1122->g_538.s2, "p_1122->g_538.s2", print_hash_value);
    transparent_crc(p_1122->g_538.s3, "p_1122->g_538.s3", print_hash_value);
    transparent_crc(p_1122->g_538.s4, "p_1122->g_538.s4", print_hash_value);
    transparent_crc(p_1122->g_538.s5, "p_1122->g_538.s5", print_hash_value);
    transparent_crc(p_1122->g_538.s6, "p_1122->g_538.s6", print_hash_value);
    transparent_crc(p_1122->g_538.s7, "p_1122->g_538.s7", print_hash_value);
    transparent_crc(p_1122->g_538.s8, "p_1122->g_538.s8", print_hash_value);
    transparent_crc(p_1122->g_538.s9, "p_1122->g_538.s9", print_hash_value);
    transparent_crc(p_1122->g_538.sa, "p_1122->g_538.sa", print_hash_value);
    transparent_crc(p_1122->g_538.sb, "p_1122->g_538.sb", print_hash_value);
    transparent_crc(p_1122->g_538.sc, "p_1122->g_538.sc", print_hash_value);
    transparent_crc(p_1122->g_538.sd, "p_1122->g_538.sd", print_hash_value);
    transparent_crc(p_1122->g_538.se, "p_1122->g_538.se", print_hash_value);
    transparent_crc(p_1122->g_538.sf, "p_1122->g_538.sf", print_hash_value);
    transparent_crc(p_1122->g_539.x, "p_1122->g_539.x", print_hash_value);
    transparent_crc(p_1122->g_539.y, "p_1122->g_539.y", print_hash_value);
    transparent_crc(p_1122->g_539.z, "p_1122->g_539.z", print_hash_value);
    transparent_crc(p_1122->g_539.w, "p_1122->g_539.w", print_hash_value);
    transparent_crc(p_1122->g_628.x, "p_1122->g_628.x", print_hash_value);
    transparent_crc(p_1122->g_628.y, "p_1122->g_628.y", print_hash_value);
    transparent_crc(p_1122->g_629.s0, "p_1122->g_629.s0", print_hash_value);
    transparent_crc(p_1122->g_629.s1, "p_1122->g_629.s1", print_hash_value);
    transparent_crc(p_1122->g_629.s2, "p_1122->g_629.s2", print_hash_value);
    transparent_crc(p_1122->g_629.s3, "p_1122->g_629.s3", print_hash_value);
    transparent_crc(p_1122->g_629.s4, "p_1122->g_629.s4", print_hash_value);
    transparent_crc(p_1122->g_629.s5, "p_1122->g_629.s5", print_hash_value);
    transparent_crc(p_1122->g_629.s6, "p_1122->g_629.s6", print_hash_value);
    transparent_crc(p_1122->g_629.s7, "p_1122->g_629.s7", print_hash_value);
    transparent_crc(p_1122->g_629.s8, "p_1122->g_629.s8", print_hash_value);
    transparent_crc(p_1122->g_629.s9, "p_1122->g_629.s9", print_hash_value);
    transparent_crc(p_1122->g_629.sa, "p_1122->g_629.sa", print_hash_value);
    transparent_crc(p_1122->g_629.sb, "p_1122->g_629.sb", print_hash_value);
    transparent_crc(p_1122->g_629.sc, "p_1122->g_629.sc", print_hash_value);
    transparent_crc(p_1122->g_629.sd, "p_1122->g_629.sd", print_hash_value);
    transparent_crc(p_1122->g_629.se, "p_1122->g_629.se", print_hash_value);
    transparent_crc(p_1122->g_629.sf, "p_1122->g_629.sf", print_hash_value);
    transparent_crc(p_1122->g_637.s0, "p_1122->g_637.s0", print_hash_value);
    transparent_crc(p_1122->g_637.s1, "p_1122->g_637.s1", print_hash_value);
    transparent_crc(p_1122->g_637.s2, "p_1122->g_637.s2", print_hash_value);
    transparent_crc(p_1122->g_637.s3, "p_1122->g_637.s3", print_hash_value);
    transparent_crc(p_1122->g_637.s4, "p_1122->g_637.s4", print_hash_value);
    transparent_crc(p_1122->g_637.s5, "p_1122->g_637.s5", print_hash_value);
    transparent_crc(p_1122->g_637.s6, "p_1122->g_637.s6", print_hash_value);
    transparent_crc(p_1122->g_637.s7, "p_1122->g_637.s7", print_hash_value);
    transparent_crc(p_1122->g_637.s8, "p_1122->g_637.s8", print_hash_value);
    transparent_crc(p_1122->g_637.s9, "p_1122->g_637.s9", print_hash_value);
    transparent_crc(p_1122->g_637.sa, "p_1122->g_637.sa", print_hash_value);
    transparent_crc(p_1122->g_637.sb, "p_1122->g_637.sb", print_hash_value);
    transparent_crc(p_1122->g_637.sc, "p_1122->g_637.sc", print_hash_value);
    transparent_crc(p_1122->g_637.sd, "p_1122->g_637.sd", print_hash_value);
    transparent_crc(p_1122->g_637.se, "p_1122->g_637.se", print_hash_value);
    transparent_crc(p_1122->g_637.sf, "p_1122->g_637.sf", print_hash_value);
    transparent_crc(p_1122->g_648.s0, "p_1122->g_648.s0", print_hash_value);
    transparent_crc(p_1122->g_648.s1, "p_1122->g_648.s1", print_hash_value);
    transparent_crc(p_1122->g_648.s2, "p_1122->g_648.s2", print_hash_value);
    transparent_crc(p_1122->g_648.s3, "p_1122->g_648.s3", print_hash_value);
    transparent_crc(p_1122->g_648.s4, "p_1122->g_648.s4", print_hash_value);
    transparent_crc(p_1122->g_648.s5, "p_1122->g_648.s5", print_hash_value);
    transparent_crc(p_1122->g_648.s6, "p_1122->g_648.s6", print_hash_value);
    transparent_crc(p_1122->g_648.s7, "p_1122->g_648.s7", print_hash_value);
    transparent_crc(p_1122->g_670.x, "p_1122->g_670.x", print_hash_value);
    transparent_crc(p_1122->g_670.y, "p_1122->g_670.y", print_hash_value);
    transparent_crc(p_1122->g_682.s0, "p_1122->g_682.s0", print_hash_value);
    transparent_crc(p_1122->g_682.s1, "p_1122->g_682.s1", print_hash_value);
    transparent_crc(p_1122->g_682.s2, "p_1122->g_682.s2", print_hash_value);
    transparent_crc(p_1122->g_682.s3, "p_1122->g_682.s3", print_hash_value);
    transparent_crc(p_1122->g_682.s4, "p_1122->g_682.s4", print_hash_value);
    transparent_crc(p_1122->g_682.s5, "p_1122->g_682.s5", print_hash_value);
    transparent_crc(p_1122->g_682.s6, "p_1122->g_682.s6", print_hash_value);
    transparent_crc(p_1122->g_682.s7, "p_1122->g_682.s7", print_hash_value);
    transparent_crc(p_1122->g_682.s8, "p_1122->g_682.s8", print_hash_value);
    transparent_crc(p_1122->g_682.s9, "p_1122->g_682.s9", print_hash_value);
    transparent_crc(p_1122->g_682.sa, "p_1122->g_682.sa", print_hash_value);
    transparent_crc(p_1122->g_682.sb, "p_1122->g_682.sb", print_hash_value);
    transparent_crc(p_1122->g_682.sc, "p_1122->g_682.sc", print_hash_value);
    transparent_crc(p_1122->g_682.sd, "p_1122->g_682.sd", print_hash_value);
    transparent_crc(p_1122->g_682.se, "p_1122->g_682.se", print_hash_value);
    transparent_crc(p_1122->g_682.sf, "p_1122->g_682.sf", print_hash_value);
    transparent_crc(p_1122->g_692.x, "p_1122->g_692.x", print_hash_value);
    transparent_crc(p_1122->g_692.y, "p_1122->g_692.y", print_hash_value);
    transparent_crc(p_1122->g_695.s0, "p_1122->g_695.s0", print_hash_value);
    transparent_crc(p_1122->g_695.s1, "p_1122->g_695.s1", print_hash_value);
    transparent_crc(p_1122->g_695.s2, "p_1122->g_695.s2", print_hash_value);
    transparent_crc(p_1122->g_695.s3, "p_1122->g_695.s3", print_hash_value);
    transparent_crc(p_1122->g_695.s4, "p_1122->g_695.s4", print_hash_value);
    transparent_crc(p_1122->g_695.s5, "p_1122->g_695.s5", print_hash_value);
    transparent_crc(p_1122->g_695.s6, "p_1122->g_695.s6", print_hash_value);
    transparent_crc(p_1122->g_695.s7, "p_1122->g_695.s7", print_hash_value);
    transparent_crc(p_1122->g_698.s0, "p_1122->g_698.s0", print_hash_value);
    transparent_crc(p_1122->g_698.s1, "p_1122->g_698.s1", print_hash_value);
    transparent_crc(p_1122->g_698.s2, "p_1122->g_698.s2", print_hash_value);
    transparent_crc(p_1122->g_698.s3, "p_1122->g_698.s3", print_hash_value);
    transparent_crc(p_1122->g_698.s4, "p_1122->g_698.s4", print_hash_value);
    transparent_crc(p_1122->g_698.s5, "p_1122->g_698.s5", print_hash_value);
    transparent_crc(p_1122->g_698.s6, "p_1122->g_698.s6", print_hash_value);
    transparent_crc(p_1122->g_698.s7, "p_1122->g_698.s7", print_hash_value);
    transparent_crc(p_1122->g_698.s8, "p_1122->g_698.s8", print_hash_value);
    transparent_crc(p_1122->g_698.s9, "p_1122->g_698.s9", print_hash_value);
    transparent_crc(p_1122->g_698.sa, "p_1122->g_698.sa", print_hash_value);
    transparent_crc(p_1122->g_698.sb, "p_1122->g_698.sb", print_hash_value);
    transparent_crc(p_1122->g_698.sc, "p_1122->g_698.sc", print_hash_value);
    transparent_crc(p_1122->g_698.sd, "p_1122->g_698.sd", print_hash_value);
    transparent_crc(p_1122->g_698.se, "p_1122->g_698.se", print_hash_value);
    transparent_crc(p_1122->g_698.sf, "p_1122->g_698.sf", print_hash_value);
    transparent_crc(p_1122->g_699.s0, "p_1122->g_699.s0", print_hash_value);
    transparent_crc(p_1122->g_699.s1, "p_1122->g_699.s1", print_hash_value);
    transparent_crc(p_1122->g_699.s2, "p_1122->g_699.s2", print_hash_value);
    transparent_crc(p_1122->g_699.s3, "p_1122->g_699.s3", print_hash_value);
    transparent_crc(p_1122->g_699.s4, "p_1122->g_699.s4", print_hash_value);
    transparent_crc(p_1122->g_699.s5, "p_1122->g_699.s5", print_hash_value);
    transparent_crc(p_1122->g_699.s6, "p_1122->g_699.s6", print_hash_value);
    transparent_crc(p_1122->g_699.s7, "p_1122->g_699.s7", print_hash_value);
    transparent_crc(p_1122->g_719.s0, "p_1122->g_719.s0", print_hash_value);
    transparent_crc(p_1122->g_719.s1, "p_1122->g_719.s1", print_hash_value);
    transparent_crc(p_1122->g_719.s2, "p_1122->g_719.s2", print_hash_value);
    transparent_crc(p_1122->g_719.s3, "p_1122->g_719.s3", print_hash_value);
    transparent_crc(p_1122->g_719.s4, "p_1122->g_719.s4", print_hash_value);
    transparent_crc(p_1122->g_719.s5, "p_1122->g_719.s5", print_hash_value);
    transparent_crc(p_1122->g_719.s6, "p_1122->g_719.s6", print_hash_value);
    transparent_crc(p_1122->g_719.s7, "p_1122->g_719.s7", print_hash_value);
    transparent_crc(p_1122->g_719.s8, "p_1122->g_719.s8", print_hash_value);
    transparent_crc(p_1122->g_719.s9, "p_1122->g_719.s9", print_hash_value);
    transparent_crc(p_1122->g_719.sa, "p_1122->g_719.sa", print_hash_value);
    transparent_crc(p_1122->g_719.sb, "p_1122->g_719.sb", print_hash_value);
    transparent_crc(p_1122->g_719.sc, "p_1122->g_719.sc", print_hash_value);
    transparent_crc(p_1122->g_719.sd, "p_1122->g_719.sd", print_hash_value);
    transparent_crc(p_1122->g_719.se, "p_1122->g_719.se", print_hash_value);
    transparent_crc(p_1122->g_719.sf, "p_1122->g_719.sf", print_hash_value);
    transparent_crc(p_1122->g_722.x, "p_1122->g_722.x", print_hash_value);
    transparent_crc(p_1122->g_722.y, "p_1122->g_722.y", print_hash_value);
    transparent_crc(p_1122->g_723.x, "p_1122->g_723.x", print_hash_value);
    transparent_crc(p_1122->g_723.y, "p_1122->g_723.y", print_hash_value);
    transparent_crc(p_1122->g_724.s0, "p_1122->g_724.s0", print_hash_value);
    transparent_crc(p_1122->g_724.s1, "p_1122->g_724.s1", print_hash_value);
    transparent_crc(p_1122->g_724.s2, "p_1122->g_724.s2", print_hash_value);
    transparent_crc(p_1122->g_724.s3, "p_1122->g_724.s3", print_hash_value);
    transparent_crc(p_1122->g_724.s4, "p_1122->g_724.s4", print_hash_value);
    transparent_crc(p_1122->g_724.s5, "p_1122->g_724.s5", print_hash_value);
    transparent_crc(p_1122->g_724.s6, "p_1122->g_724.s6", print_hash_value);
    transparent_crc(p_1122->g_724.s7, "p_1122->g_724.s7", print_hash_value);
    transparent_crc(p_1122->g_724.s8, "p_1122->g_724.s8", print_hash_value);
    transparent_crc(p_1122->g_724.s9, "p_1122->g_724.s9", print_hash_value);
    transparent_crc(p_1122->g_724.sa, "p_1122->g_724.sa", print_hash_value);
    transparent_crc(p_1122->g_724.sb, "p_1122->g_724.sb", print_hash_value);
    transparent_crc(p_1122->g_724.sc, "p_1122->g_724.sc", print_hash_value);
    transparent_crc(p_1122->g_724.sd, "p_1122->g_724.sd", print_hash_value);
    transparent_crc(p_1122->g_724.se, "p_1122->g_724.se", print_hash_value);
    transparent_crc(p_1122->g_724.sf, "p_1122->g_724.sf", print_hash_value);
    transparent_crc(p_1122->g_740.x, "p_1122->g_740.x", print_hash_value);
    transparent_crc(p_1122->g_740.y, "p_1122->g_740.y", print_hash_value);
    transparent_crc(p_1122->g_740.z, "p_1122->g_740.z", print_hash_value);
    transparent_crc(p_1122->g_740.w, "p_1122->g_740.w", print_hash_value);
    transparent_crc(p_1122->g_742.x, "p_1122->g_742.x", print_hash_value);
    transparent_crc(p_1122->g_742.y, "p_1122->g_742.y", print_hash_value);
    transparent_crc(p_1122->g_779.x, "p_1122->g_779.x", print_hash_value);
    transparent_crc(p_1122->g_779.y, "p_1122->g_779.y", print_hash_value);
    transparent_crc(p_1122->g_779.z, "p_1122->g_779.z", print_hash_value);
    transparent_crc(p_1122->g_779.w, "p_1122->g_779.w", print_hash_value);
    transparent_crc(p_1122->g_781.s0, "p_1122->g_781.s0", print_hash_value);
    transparent_crc(p_1122->g_781.s1, "p_1122->g_781.s1", print_hash_value);
    transparent_crc(p_1122->g_781.s2, "p_1122->g_781.s2", print_hash_value);
    transparent_crc(p_1122->g_781.s3, "p_1122->g_781.s3", print_hash_value);
    transparent_crc(p_1122->g_781.s4, "p_1122->g_781.s4", print_hash_value);
    transparent_crc(p_1122->g_781.s5, "p_1122->g_781.s5", print_hash_value);
    transparent_crc(p_1122->g_781.s6, "p_1122->g_781.s6", print_hash_value);
    transparent_crc(p_1122->g_781.s7, "p_1122->g_781.s7", print_hash_value);
    transparent_crc(p_1122->g_781.s8, "p_1122->g_781.s8", print_hash_value);
    transparent_crc(p_1122->g_781.s9, "p_1122->g_781.s9", print_hash_value);
    transparent_crc(p_1122->g_781.sa, "p_1122->g_781.sa", print_hash_value);
    transparent_crc(p_1122->g_781.sb, "p_1122->g_781.sb", print_hash_value);
    transparent_crc(p_1122->g_781.sc, "p_1122->g_781.sc", print_hash_value);
    transparent_crc(p_1122->g_781.sd, "p_1122->g_781.sd", print_hash_value);
    transparent_crc(p_1122->g_781.se, "p_1122->g_781.se", print_hash_value);
    transparent_crc(p_1122->g_781.sf, "p_1122->g_781.sf", print_hash_value);
    transparent_crc(p_1122->g_791, "p_1122->g_791", print_hash_value);
    transparent_crc(p_1122->g_844.s0, "p_1122->g_844.s0", print_hash_value);
    transparent_crc(p_1122->g_844.s1, "p_1122->g_844.s1", print_hash_value);
    transparent_crc(p_1122->g_844.s2, "p_1122->g_844.s2", print_hash_value);
    transparent_crc(p_1122->g_844.s3, "p_1122->g_844.s3", print_hash_value);
    transparent_crc(p_1122->g_844.s4, "p_1122->g_844.s4", print_hash_value);
    transparent_crc(p_1122->g_844.s5, "p_1122->g_844.s5", print_hash_value);
    transparent_crc(p_1122->g_844.s6, "p_1122->g_844.s6", print_hash_value);
    transparent_crc(p_1122->g_844.s7, "p_1122->g_844.s7", print_hash_value);
    transparent_crc(p_1122->g_904, "p_1122->g_904", print_hash_value);
    transparent_crc(p_1122->g_910, "p_1122->g_910", print_hash_value);
    transparent_crc(p_1122->g_937, "p_1122->g_937", print_hash_value);
    transparent_crc(p_1122->g_965, "p_1122->g_965", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1122->g_970[i][j][k], "p_1122->g_970[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1122->g_977.s0, "p_1122->g_977.s0", print_hash_value);
    transparent_crc(p_1122->g_977.s1, "p_1122->g_977.s1", print_hash_value);
    transparent_crc(p_1122->g_977.s2, "p_1122->g_977.s2", print_hash_value);
    transparent_crc(p_1122->g_977.s3, "p_1122->g_977.s3", print_hash_value);
    transparent_crc(p_1122->g_977.s4, "p_1122->g_977.s4", print_hash_value);
    transparent_crc(p_1122->g_977.s5, "p_1122->g_977.s5", print_hash_value);
    transparent_crc(p_1122->g_977.s6, "p_1122->g_977.s6", print_hash_value);
    transparent_crc(p_1122->g_977.s7, "p_1122->g_977.s7", print_hash_value);
    transparent_crc(p_1122->g_982.x, "p_1122->g_982.x", print_hash_value);
    transparent_crc(p_1122->g_982.y, "p_1122->g_982.y", print_hash_value);
    transparent_crc(p_1122->g_982.z, "p_1122->g_982.z", print_hash_value);
    transparent_crc(p_1122->g_982.w, "p_1122->g_982.w", print_hash_value);
    transparent_crc(p_1122->g_985.x, "p_1122->g_985.x", print_hash_value);
    transparent_crc(p_1122->g_985.y, "p_1122->g_985.y", print_hash_value);
    transparent_crc(p_1122->g_985.z, "p_1122->g_985.z", print_hash_value);
    transparent_crc(p_1122->g_985.w, "p_1122->g_985.w", print_hash_value);
    transparent_crc(p_1122->g_1043.s0, "p_1122->g_1043.s0", print_hash_value);
    transparent_crc(p_1122->g_1043.s1, "p_1122->g_1043.s1", print_hash_value);
    transparent_crc(p_1122->g_1043.s2, "p_1122->g_1043.s2", print_hash_value);
    transparent_crc(p_1122->g_1043.s3, "p_1122->g_1043.s3", print_hash_value);
    transparent_crc(p_1122->g_1043.s4, "p_1122->g_1043.s4", print_hash_value);
    transparent_crc(p_1122->g_1043.s5, "p_1122->g_1043.s5", print_hash_value);
    transparent_crc(p_1122->g_1043.s6, "p_1122->g_1043.s6", print_hash_value);
    transparent_crc(p_1122->g_1043.s7, "p_1122->g_1043.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1122->g_1064[i], "p_1122->g_1064[i]", print_hash_value);

    }
    transparent_crc(p_1122->g_1086, "p_1122->g_1086", print_hash_value);
    transparent_crc(p_1122->g_1121.s0, "p_1122->g_1121.s0", print_hash_value);
    transparent_crc(p_1122->g_1121.s1, "p_1122->g_1121.s1", print_hash_value);
    transparent_crc(p_1122->g_1121.s2, "p_1122->g_1121.s2", print_hash_value);
    transparent_crc(p_1122->g_1121.s3, "p_1122->g_1121.s3", print_hash_value);
    transparent_crc(p_1122->g_1121.s4, "p_1122->g_1121.s4", print_hash_value);
    transparent_crc(p_1122->g_1121.s5, "p_1122->g_1121.s5", print_hash_value);
    transparent_crc(p_1122->g_1121.s6, "p_1122->g_1121.s6", print_hash_value);
    transparent_crc(p_1122->g_1121.s7, "p_1122->g_1121.s7", print_hash_value);
    transparent_crc(p_1122->v_collective, "p_1122->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 1; i++)
            transparent_crc(p_1122->l_special_values[i], "p_1122->l_special_values[i]", print_hash_value);
    transparent_crc(p_1122->l_comm_values[get_linear_local_id()], "p_1122->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1122->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()], "p_1122->g_comm_values[get_linear_group_id() * 66 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
