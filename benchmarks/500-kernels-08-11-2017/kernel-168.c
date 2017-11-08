// --atomics 31 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 20,98,4 -l 20,7,1
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

__constant uint32_t permutations[10][140] = {
{15,101,31,69,96,90,35,82,58,91,12,80,48,70,53,1,95,56,89,122,64,92,111,98,139,113,114,126,102,79,73,46,121,33,5,21,86,100,11,97,84,7,94,20,128,83,104,49,130,57,118,110,25,16,29,2,87,44,135,4,76,109,55,36,22,85,138,112,63,28,99,43,39,18,88,75,71,10,72,62,106,50,107,77,52,78,17,26,137,61,124,42,32,30,19,47,13,41,59,103,66,133,120,136,23,68,54,14,74,131,24,8,27,37,40,123,117,116,65,108,105,60,93,129,125,34,134,119,132,9,127,38,51,115,0,45,67,81,3,6}, // permutation 0
{4,77,117,100,53,31,44,55,57,86,113,93,12,65,28,130,60,29,32,88,89,13,95,121,61,18,9,139,37,46,20,133,101,8,138,22,137,43,17,21,40,76,3,103,80,30,7,27,35,64,45,69,50,105,90,5,123,115,25,49,63,62,74,97,116,126,111,127,85,107,119,67,136,114,118,33,125,6,120,58,108,104,34,91,59,73,56,26,66,87,135,102,39,98,71,2,122,84,128,36,92,41,51,19,10,112,14,38,16,96,129,1,131,47,52,110,70,79,109,48,81,94,99,24,15,54,23,68,83,72,134,42,124,78,11,0,75,82,132,106}, // permutation 1
{48,84,70,94,95,80,68,19,72,54,34,104,29,41,107,61,69,74,0,92,111,15,101,110,6,4,103,60,93,56,22,100,106,55,116,138,77,24,2,23,1,88,10,9,71,52,123,108,96,44,121,82,99,30,85,27,102,98,11,47,132,43,33,26,109,136,122,126,120,3,51,53,119,64,90,59,50,75,134,20,35,63,133,124,127,31,14,76,79,36,113,81,137,135,131,16,125,45,78,49,128,58,105,21,62,114,91,38,13,42,73,8,7,115,117,67,65,40,5,66,12,39,18,25,28,32,118,112,139,17,89,86,46,57,87,83,37,130,129,97}, // permutation 2
{46,138,0,61,30,128,49,114,84,95,52,66,79,32,29,81,85,131,91,105,37,72,68,45,88,92,10,117,4,74,12,116,15,65,70,87,80,20,47,64,111,127,55,22,56,40,97,93,39,35,119,130,136,58,63,110,31,82,50,100,1,41,48,34,113,76,132,120,27,51,9,69,26,5,16,18,19,86,104,126,8,42,11,134,14,89,3,90,2,122,43,125,62,36,96,54,77,101,53,33,123,94,129,7,21,115,23,28,99,67,135,118,25,102,137,106,139,44,6,109,108,71,124,98,107,57,112,73,13,133,103,75,83,17,78,59,24,60,38,121}, // permutation 3
{130,76,123,106,49,75,55,97,11,62,116,36,128,117,1,33,48,111,43,85,31,42,112,122,96,83,104,13,86,38,82,30,131,68,37,69,134,54,119,10,90,60,121,65,3,58,6,136,100,120,34,135,139,47,66,81,59,109,9,26,80,20,27,67,19,133,64,101,118,92,14,61,113,79,5,53,46,51,84,56,7,137,15,107,108,2,91,52,24,35,77,70,0,23,40,16,98,78,129,94,103,50,138,89,71,110,93,105,126,99,45,28,8,88,87,44,41,95,74,12,17,18,114,125,115,4,63,39,132,21,22,25,124,102,127,32,57,72,29,73}, // permutation 4
{78,59,117,71,21,129,84,99,36,82,27,127,7,26,125,110,49,9,113,85,137,88,14,50,100,43,95,131,61,139,11,31,38,53,80,134,57,39,68,30,35,6,73,69,47,15,124,51,121,115,18,44,48,23,123,60,42,1,46,55,54,72,0,136,107,3,101,25,28,102,56,37,104,2,17,13,20,34,138,133,91,24,77,105,86,81,32,19,118,119,87,65,122,16,41,58,4,92,89,96,126,130,111,103,74,116,62,63,64,135,10,52,70,128,114,29,94,45,8,112,83,132,22,97,90,5,79,98,40,93,76,109,75,12,120,67,66,106,33,108}, // permutation 5
{42,2,11,88,63,53,14,23,91,44,126,27,50,46,54,93,119,137,61,37,128,4,41,26,111,132,19,76,8,24,64,36,77,45,17,12,108,74,56,68,118,110,57,89,55,87,124,84,106,94,49,18,85,30,66,28,131,138,92,107,114,6,72,80,139,120,15,47,21,9,51,33,83,75,16,7,104,82,59,40,113,79,35,81,125,22,73,115,67,62,39,136,20,31,96,129,90,100,3,127,34,13,32,103,109,52,134,48,95,121,86,25,60,43,99,70,5,123,122,1,116,10,105,78,135,97,0,117,101,38,71,133,130,29,69,98,58,65,102,112}, // permutation 6
{30,74,40,1,53,52,56,61,24,136,101,75,110,83,122,105,18,77,12,41,67,69,108,34,62,51,66,72,33,47,125,81,17,42,121,92,29,59,126,55,28,11,36,103,132,96,113,123,133,4,44,15,27,128,95,10,43,119,115,93,102,22,45,58,78,134,131,20,38,117,99,35,124,120,86,65,32,9,135,13,64,60,49,79,19,94,109,98,0,87,57,100,3,63,70,31,16,130,50,68,54,114,76,71,80,46,129,89,85,48,107,23,8,104,2,7,25,37,138,97,84,127,21,106,111,14,118,116,139,6,26,73,5,90,91,88,137,112,82,39}, // permutation 7
{136,126,128,35,29,58,46,89,124,19,97,20,132,60,125,113,9,21,71,3,47,94,122,115,70,87,1,10,42,73,28,26,61,90,37,5,130,129,111,105,100,4,99,66,81,76,107,30,14,43,13,85,65,108,139,34,6,120,98,53,24,31,84,40,16,95,48,62,18,121,112,119,27,88,83,55,91,127,33,101,15,74,50,96,11,92,51,103,54,25,39,36,104,8,69,79,41,110,72,138,78,80,0,22,7,32,2,109,114,56,117,106,82,59,102,12,93,45,67,118,52,75,23,137,123,116,49,64,86,38,57,77,133,44,68,131,134,135,17,63}, // permutation 8
{90,121,24,91,103,78,73,85,50,83,8,12,55,5,39,58,38,15,86,37,87,106,34,125,51,134,59,71,53,80,54,139,96,67,0,57,11,123,6,84,17,88,32,46,30,25,21,70,14,43,36,47,41,26,2,28,127,31,133,69,74,92,115,113,23,110,117,122,109,3,63,95,62,138,77,119,97,82,27,44,126,111,128,35,132,16,48,89,107,40,1,76,112,61,33,131,75,10,105,98,60,102,137,81,19,72,7,114,18,66,79,101,130,42,108,136,52,99,100,129,64,20,135,56,120,29,65,22,118,49,13,9,124,68,94,45,4,116,104,93} // permutation 9
};

// Seed: 3548644162

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
};

struct S1 {
   uint64_t  f0;
   int32_t  f1;
};

union U2 {
   uint32_t  f0;
   struct S0  f1;
};

struct S3 {
    int32_t g_3;
    int32_t g_9;
    volatile uint32_t g_10;
    uint8_t g_20;
    uint32_t g_49;
    uint64_t g_83;
    uint64_t *g_90;
    uint32_t g_124;
    struct S0 g_131;
    volatile int32_t **g_142;
    int32_t *g_147;
    int32_t ** volatile g_146;
    int32_t ** volatile g_150;
    int32_t ***g_169[1];
    int32_t **g_180;
    int32_t ***g_179;
    volatile VECTOR(int8_t, 16) g_196;
    union U2 g_201;
    volatile struct S0 g_202;
    volatile struct S0 * volatile g_203;
    volatile union U2 g_209;
    volatile VECTOR(int16_t, 16) g_220;
    union U2 *g_228;
    union U2 ** volatile g_227;
    int8_t g_244;
    int8_t g_246;
    uint16_t g_249;
    VECTOR(uint64_t, 4) g_252;
    VECTOR(uint32_t, 2) g_254;
    VECTOR(uint32_t, 16) g_255;
    VECTOR(int8_t, 8) g_286;
    int16_t g_323[3];
    volatile VECTOR(int8_t, 2) g_374;
    VECTOR(int16_t, 16) g_384;
    int16_t *g_393;
    volatile uint32_t g_404;
    volatile uint32_t * volatile g_403;
    volatile uint32_t * volatile *g_402;
    volatile VECTOR(int32_t, 4) g_414;
    uint32_t g_431;
    volatile uint8_t g_434[4];
    volatile int8_t * volatile g_499;
    volatile int8_t * volatile * volatile g_498;
    struct S1 g_516;
    volatile int32_t g_543;
    volatile uint8_t **g_552;
    struct S1 *g_567;
    struct S0 g_582;
    struct S0 * volatile g_583;
    volatile int64_t g_596;
    volatile struct S0 g_670;
    struct S0 g_680;
    volatile struct S0 g_732[5][8];
    int64_t g_774[4][8][2];
    int16_t g_776;
    int16_t g_777;
    uint8_t g_779;
    volatile VECTOR(int32_t, 2) g_784;
    volatile VECTOR(int16_t, 8) g_791;
    volatile VECTOR(int16_t, 8) g_793;
    volatile VECTOR(int64_t, 8) g_795;
    int8_t *g_803;
    VECTOR(uint16_t, 8) g_836;
    VECTOR(int32_t, 16) g_999;
    int32_t * volatile g_1001;
    VECTOR(uint16_t, 16) g_1027;
    volatile int32_t g_1028;
    uint64_t *g_1045;
    VECTOR(int64_t, 4) g_1064;
    VECTOR(uint32_t, 4) g_1069;
    VECTOR(uint32_t, 4) g_1072;
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
int16_t  func_1(struct S3 * p_1074);
uint8_t  func_17(uint16_t  p_18, struct S3 * p_1074);
int32_t * func_44(uint32_t  p_45, uint32_t  p_46, int32_t * p_47, struct S3 * p_1074);
uint16_t  func_51(int32_t  p_52, int32_t * p_53, int32_t  p_54, uint32_t * p_55, struct S1  p_56, struct S3 * p_1074);
int32_t  func_59(uint32_t * p_60, uint8_t  p_61, struct S3 * p_1074);
uint32_t * func_62(uint32_t * p_63, int32_t  p_64, int32_t * p_65, struct S3 * p_1074);
uint32_t * func_66(uint32_t * p_67, int64_t  p_68, uint32_t  p_69, uint64_t  p_70, struct S3 * p_1074);
uint32_t * func_71(uint32_t * p_72, uint32_t * p_73, int32_t * p_74, uint32_t * p_75, int32_t  p_76, struct S3 * p_1074);
uint32_t * func_77(int16_t  p_78, int16_t  p_79, int32_t * p_80, struct S3 * p_1074);
uint8_t  func_85(int32_t * p_86, int32_t  p_87, uint64_t * p_88, uint64_t * p_89, struct S3 * p_1074);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1074->g_10 p_1074->g_comm_values p_1074->g_3 p_1074->g_146 p_1074->g_147 p_1074->g_1027 p_1074->g_431 p_1074->g_414 p_1074->g_254 p_1074->g_999 p_1074->g_384 p_1074->g_150 p_1074->g_1045 p_1074->g_83 p_1074->g_779 p_1074->g_9 p_1074->g_498 p_1074->g_499 p_1074->g_552 p_1074->g_286 p_1074->g_402 p_1074->g_403 p_1074->g_404 p_1074->g_516 p_1074->g_249 p_1074->g_196 p_1074->g_393 p_1074->g_180 p_1074->g_1064 p_1074->g_49 p_1074->g_1069 p_1074->g_1072 p_1074->g_567 p_1074->g_323
 * writes: p_1074->g_10 p_1074->g_20 p_1074->g_3 p_1074->g_431 p_1074->g_90 p_1074->g_1045 p_1074->g_124 p_1074->g_201.f0 p_1074->g_779 p_1074->g_9 p_1074->g_803 p_1074->g_246 p_1074->g_244 p_1074->g_249 p_1074->g_323 p_1074->g_147 p_1074->g_516.f0 p_1074->g_516
 */
int16_t  func_1(struct S3 * p_1074)
{ /* block id: 4 */
    int32_t *l_2 = &p_1074->g_3;
    int32_t *l_4 = &p_1074->g_3;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &p_1074->g_3;
    int32_t *l_7 = &p_1074->g_3;
    int32_t *l_8[4][4] = {{&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&p_1074->g_3},{&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&p_1074->g_3},{&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&p_1074->g_3},{&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&p_1074->g_3}};
    uint32_t *l_19 = (void*)0;
    uint8_t l_1033 = 253UL;
    int16_t **l_1040 = &p_1074->g_393;
    int16_t ***l_1039 = &l_1040;
    int i, j;
    p_1074->g_10--;
    if ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((!1L), func_17((p_1074->g_comm_values[p_1074->tid] | (p_1074->g_20 = GROUP_DIVERGE(0, 1))), p_1074))), (safe_mul_func_uint16_t_u_u(65528UL, ((VECTOR(uint16_t, 2))(p_1074->g_1027.s3b)).odd)))))
    { /* block id: 522 */
        int8_t l_1029 = 7L;
        int32_t l_1030 = 0L;
        int32_t l_1031 = 0x352A53B9L;
        VECTOR(int64_t, 2) l_1032 = (VECTOR(int64_t, 2))(0x403FE28B08DD4217L, 6L);
        uint64_t *l_1043 = &p_1074->g_83;
        uint64_t **l_1044 = &p_1074->g_90;
        int32_t l_1053[9];
        uint32_t *l_1054 = &p_1074->g_124;
        int32_t l_1055 = 0x3695C532L;
        int i;
        for (i = 0; i < 9; i++)
            l_1053[i] = 0x715B7F1AL;
        l_1033--;
        for (p_1074->g_431 = 26; (p_1074->g_431 >= 31); p_1074->g_431 = safe_add_func_uint8_t_u_u(p_1074->g_431, 1))
        { /* block id: 526 */
            int32_t l_1038[3][10] = {{(-8L),(-8L),0x2C5F3F9FL,1L,0x00770B24L,0x17319472L,0x6E9FD267L,0L,0x6E9FD267L,0x17319472L},{(-8L),(-8L),0x2C5F3F9FL,1L,0x00770B24L,0x17319472L,0x6E9FD267L,0L,0x6E9FD267L,0x17319472L},{(-8L),(-8L),0x2C5F3F9FL,1L,0x00770B24L,0x17319472L,0x6E9FD267L,0L,0x6E9FD267L,0x17319472L}};
            int i, j;
            return l_1038[1][6];
        }
        (**p_1074->g_150) = (GROUP_DIVERGE(2, 1) == ((((l_1039 != &l_1040) & (~(((!(0x82A5L | (safe_mod_func_int32_t_s_s(((l_1043 == (p_1074->g_1045 = ((*l_1044) = &p_1074->g_83))) , (((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x10C8L, (((safe_rshift_func_uint16_t_u_u((&p_1074->g_227 == &p_1074->g_227), 6)) & (*l_7)) ^ (safe_unary_minus_func_uint16_t_u(GROUP_DIVERGE(2, 1)))), 1L, (safe_lshift_func_uint16_t_u_u((l_1031 > l_1030), 6)), 0x6197L, (-1L), ((VECTOR(int16_t, 8))(8L)), 0x6DC2L, (-2L))))).s73)).yxyx, ((VECTOR(int16_t, 4))(4L))))).z, p_1074->g_414.x)) & 0x6255L) , l_1053[8])), p_1074->g_254.x)))) | (*l_4)) & p_1074->g_999.sa))) == l_1032.y) & p_1074->g_384.s1));
        (*p_1074->g_180) = func_66(l_1054, l_1055, (*l_2), (*p_1074->g_1045), p_1074);
    }
    else
    { /* block id: 533 */
        uint8_t l_1056 = 0UL;
        VECTOR(int64_t, 16) l_1063 = (VECTOR(int64_t, 16))(0x3C97CF997A1CB412L, (VECTOR(int64_t, 4))(0x3C97CF997A1CB412L, (VECTOR(int64_t, 2))(0x3C97CF997A1CB412L, 0L), 0L), 0L, 0x3C97CF997A1CB412L, 0L, (VECTOR(int64_t, 2))(0x3C97CF997A1CB412L, 0L), (VECTOR(int64_t, 2))(0x3C97CF997A1CB412L, 0L), 0x3C97CF997A1CB412L, 0L, 0x3C97CF997A1CB412L, 0L);
        VECTOR(int64_t, 2) l_1065 = (VECTOR(int64_t, 2))(0x54E089D9CAE2A82BL, 0L);
        uint16_t l_1068 = 0xC85DL;
        uint16_t l_1073 = 0xF5E6L;
        int i;
        l_1073 ^= ((l_1056 <= (((l_1056 != (safe_add_func_uint8_t_u_u(((*l_6) >= (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_1063.sc1590f38)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_1074->g_1064.wyzxxxyw)).hi)), ((VECTOR(int64_t, 4))(l_1065.yyxy)))).sd > ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((**p_1074->g_146) ^ (p_1074->g_49 || ((**l_1040) = l_1068))), 0x646EC8DCL, ((VECTOR(uint32_t, 8))(p_1074->g_1069.yzwxzyxy)), 0x21F777CCL, (l_1063.s7 != ((((*p_1074->g_1045)--) , FAKE_DIVERGE(p_1074->group_1_offset, get_group_id(1), 10)) , (*l_7))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1074->g_1072.yx)), 4294967289UL, 0UL)))).s36)).yxyy)).w, 0x3F8702BAL)) | l_1068)), l_1068)), l_1056))), GROUP_DIVERGE(1, 1)))) , l_2) == (void*)0)) && l_1065.y);
    }
    (*p_1074->g_567) = (*p_1074->g_567);
    return (*p_1074->g_393);
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_3 p_1074->g_146 p_1074->g_147
 * writes: p_1074->g_3
 */
uint8_t  func_17(uint16_t  p_18, struct S3 * p_1074)
{ /* block id: 7 */
    uint8_t l_84 = 255UL;
    int32_t *l_91 = &p_1074->g_3;
    int32_t *l_997 = &p_1074->g_3;
    int32_t l_1023 = (-1L);
    uint32_t l_1024 = 0UL;
    for (p_18 = 0; (p_18 > 49); p_18 = safe_add_func_int64_t_s_s(p_18, 1))
    { /* block id: 10 */
        VECTOR(int32_t, 16) l_50 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-6L)), (-6L)), (-6L), 9L, (-6L), (VECTOR(int32_t, 2))(9L, (-6L)), (VECTOR(int32_t, 2))(9L, (-6L)), 9L, (-6L), 9L, (-6L));
        int32_t *l_1003 = &p_1074->g_3;
        int i;
        for (p_1074->g_3 = 25; (p_1074->g_3 >= (-29)); p_1074->g_3--)
        { /* block id: 13 */
            uint32_t *l_48[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            uint64_t *l_81 = (void*)0;
            uint64_t *l_82[8][6] = {{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83},{&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83,&p_1074->g_83}};
            struct S1 l_998 = {0xF5C043B6881BFE31L,-7L};
            int i, j;
            if ((atomic_inc(&p_1074->g_atomic_input[31 * get_linear_group_id() + 0]) == 4))
            { /* block id: 15 */
                int32_t l_25[3];
                struct S1 l_39 = {7UL,4L};
                uint32_t l_40 = 0xAD14CA72L;
                int64_t l_41 = 4L;
                int64_t l_42 = (-8L);
                uint64_t l_43 = 18446744073709551612UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_25[i] = (-9L);
                for (l_25[2] = 18; (l_25[2] >= 3); l_25[2] = safe_sub_func_uint16_t_u_u(l_25[2], 4))
                { /* block id: 18 */
                    int64_t l_28 = (-2L);
                    int32_t l_29 = 0x19843334L;
                    int32_t l_30 = (-1L);
                    int16_t l_31 = 1L;
                    int8_t l_32 = (-7L);
                    uint32_t l_33 = 0UL;
                    uint32_t l_36 = 0xA550E8F7L;
                    uint32_t l_37 = 0UL;
                    uint8_t l_38[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_38[i] = 0UL;
                    l_33++;
                    l_38[0] |= (l_37 ^= l_36);
                }
                l_43 ^= ((l_39 = l_39) , (GROUP_DIVERGE(0, 1) , (l_42 = (l_41 ^= l_40))));
                unsigned int result = 0;
                int l_25_i0;
                for (l_25_i0 = 0; l_25_i0 < 3; l_25_i0++) {
                    result += l_25[l_25_i0];
                }
                result += l_39.f0;
                result += l_39.f1;
                result += l_40;
                result += l_41;
                result += l_42;
                result += l_43;
                atomic_add(&p_1074->g_special_values[31 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 27 */
                (1 + 1);
            }
        }
        for (p_1074->g_3 = 0; (p_1074->g_3 == (-11)); p_1074->g_3 = safe_sub_func_uint64_t_u_u(p_1074->g_3, 2))
        { /* block id: 514 */
            if ((**p_1074->g_146))
                break;
        }
        if (p_18)
            continue;
        return (*l_91);
    }
    l_1023 |= (*l_91);
    return l_1024;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_393 p_1074->g_323 p_1074->g_20 p_1074->g_249 p_1074->g_3
 * writes: p_1074->g_83 p_1074->g_20
 */
int32_t * func_44(uint32_t  p_45, uint32_t  p_46, int32_t * p_47, struct S3 * p_1074)
{ /* block id: 503 */
    struct S1 l_1004 = {18446744073709551615UL,0x52F81F6BL};
    VECTOR(int8_t, 2) l_1009 = (VECTOR(int8_t, 2))(0L, (-7L));
    int64_t l_1012 = 0x296192A115F93A37L;
    uint64_t *l_1013 = &p_1074->g_83;
    int32_t l_1014 = 1L;
    VECTOR(int64_t, 2) l_1015 = (VECTOR(int64_t, 2))(0x741AD2B331F79ED0L, 1L);
    uint8_t *l_1018 = (void*)0;
    uint8_t *l_1019[8][2][5] = {{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}},{{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0},{&p_1074->g_779,&p_1074->g_779,&p_1074->g_779,(void*)0,(void*)0}}};
    int32_t l_1020[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1020[i] = 0x13844E18L;
    l_1020[4] = ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(0x52DB8EADL, ((VECTOR(int32_t, 4))((((((l_1004 , 0xA5169149L) , 1UL) >= (((l_1004.f0 != (((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_1009.yyxx)).w, (safe_div_func_uint16_t_u_u((!((l_1014 = ((*l_1013) = l_1012)) || ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1015.yxxyxyxxxxyyyxyx)).s5cd1)).x)), 0x64E7L)))), (*p_1074->g_393))) | (safe_rshift_func_uint8_t_u_s((p_1074->g_20 ^= 253UL), 7))) | 0xA9395E35L)) <= p_1074->g_249) < p_45)) ^ l_1015.x) | GROUP_DIVERGE(2, 1)), 2L, 0x0119DCFCL, 0x26409D20L)), ((VECTOR(int32_t, 2))(0L)), (-5L))).even))).w;
    l_1020[1] |= (*p_47);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_999 p_1074->g_246
 * writes: p_1074->g_9
 */
uint16_t  func_51(int32_t  p_52, int32_t * p_53, int32_t  p_54, uint32_t * p_55, struct S1  p_56, struct S3 * p_1074)
{ /* block id: 499 */
    int16_t l_1000 = 0x7A8CL;
    int32_t *l_1002 = &p_1074->g_9;
    l_1000 &= ((VECTOR(int32_t, 4))(p_1074->g_999.s9600)).y;
    (*l_1002) = (l_1000 <= p_56.f0);
    return p_1074->g_246;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_776 p_1074->g_146 p_1074->g_147 p_1074->g_3
 * writes: p_1074->g_776
 */
int32_t  func_59(uint32_t * p_60, uint8_t  p_61, struct S3 * p_1074)
{ /* block id: 492 */
    for (p_1074->g_776 = (-13); (p_1074->g_776 <= 10); ++p_1074->g_776)
    { /* block id: 495 */
        return (**p_1074->g_146);
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_180 p_1074->g_246
 * writes: p_1074->g_147 p_1074->g_246
 */
uint32_t * func_62(uint32_t * p_63, int32_t  p_64, int32_t * p_65, struct S3 * p_1074)
{ /* block id: 484 */
    int32_t *l_991 = &p_1074->g_3;
    (*p_1074->g_180) = l_991;
    for (p_1074->g_246 = (-24); (p_1074->g_246 == 8); p_1074->g_246++)
    { /* block id: 488 */
        int32_t *l_994 = &p_1074->g_9;
        l_994 = &p_64;
    }
    return l_991;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_124 p_1074->g_201.f0 p_1074->g_779 p_1074->g_784 p_1074->g_9 p_1074->g_791 p_1074->g_793 p_1074->g_774 p_1074->g_795 p_1074->g_393 p_1074->g_323 p_1074->g_196 p_1074->g_374 p_1074->g_498 p_1074->g_499 p_1074->g_246 p_1074->g_552 p_1074->g_286 p_1074->g_402 p_1074->g_403 p_1074->g_404 p_1074->g_516 p_1074->g_836 p_1074->g_249
 * writes: p_1074->g_124 p_1074->g_201.f0 p_1074->g_779 p_1074->g_9 p_1074->g_774 p_1074->g_803 p_1074->g_246 p_1074->g_244 p_1074->g_249 p_1074->g_323
 */
uint32_t * func_66(uint32_t * p_67, int64_t  p_68, uint32_t  p_69, uint64_t  p_70, struct S3 * p_1074)
{ /* block id: 331 */
    int32_t l_761 = 0x4D9E9EFEL;
    int32_t l_762 = 0x6D5CD6E1L;
    int32_t l_769 = (-1L);
    int32_t l_771 = (-3L);
    int32_t l_772 = 0L;
    int32_t l_775[3][9][6] = {{{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L}},{{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L}},{{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L},{0x71653F8DL,0x2D48B972L,(-7L),6L,0L,6L}}};
    int16_t *l_790[5] = {&p_1074->g_776,&p_1074->g_776,&p_1074->g_776,&p_1074->g_776,&p_1074->g_776};
    uint32_t l_800 = 4294967295UL;
    int8_t **l_987 = &p_1074->g_803;
    int8_t **l_989 = (void*)0;
    int8_t ***l_988 = &l_989;
    VECTOR(int8_t, 4) l_990 = (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, 0x06L), 0x06L);
    int i, j, k;
    for (p_1074->g_124 = 0; (p_1074->g_124 <= 58); p_1074->g_124++)
    { /* block id: 334 */
        uint32_t l_763 = 0xE01CB315L;
        int32_t l_766 = 0x79D9FCE4L;
        int32_t l_767 = 0x0B2B66DDL;
        int32_t l_770 = 0x73CB8C53L;
        int32_t l_773[3];
        int32_t l_778 = (-1L);
        VECTOR(int32_t, 16) l_782 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x406A2FD3L), 0x406A2FD3L), 0x406A2FD3L, 5L, 0x406A2FD3L, (VECTOR(int32_t, 2))(5L, 0x406A2FD3L), (VECTOR(int32_t, 2))(5L, 0x406A2FD3L), 5L, 0x406A2FD3L, 5L, 0x406A2FD3L);
        uint32_t l_783 = 0x23376C8CL;
        int16_t l_787 = 6L;
        VECTOR(int16_t, 2) l_792 = (VECTOR(int16_t, 2))((-1L), 0x6E64L);
        int64_t *l_794 = &p_1074->g_774[2][7][1];
        VECTOR(int64_t, 8) l_796 = (VECTOR(int64_t, 8))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x1F183F259B273CBDL), 0x1F183F259B273CBDL), 0x1F183F259B273CBDL, 5L, 0x1F183F259B273CBDL);
        union U2 **l_798 = &p_1074->g_228;
        union U2 ***l_797 = &l_798;
        VECTOR(uint16_t, 16) l_799 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
        int32_t *l_929 = (void*)0;
        int32_t *l_930[9] = {&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766};
        int i;
        for (i = 0; i < 3; i++)
            l_773[i] = (-1L);
        if ((atomic_inc(&p_1074->g_atomic_input[31 * get_linear_group_id() + 21]) == 3))
        { /* block id: 336 */
            int32_t l_738 = (-1L);
            int32_t *l_737 = &l_738;
            int32_t *l_739 = &l_738;
            int32_t *l_740 = &l_738;
            int64_t l_741 = 1L;
            struct S0 l_742 = {0L};/* VOLATILE GLOBAL l_742 */
            struct S0 l_743 = {0L};/* VOLATILE GLOBAL l_743 */
            l_737 = (void*)0;
            l_740 = l_739;
            l_743 = (l_741 , l_742);
            unsigned int result = 0;
            result += l_738;
            result += l_741;
            result += l_742.f0;
            result += l_743.f0;
            atomic_add(&p_1074->g_special_values[31 * get_linear_group_id() + 21], result);
        }
        else
        { /* block id: 340 */
            (1 + 1);
        }
        for (p_1074->g_201.f0 = (-15); (p_1074->g_201.f0 >= 52); ++p_1074->g_201.f0)
        { /* block id: 345 */
            int32_t l_746 = 0x3FA51FC6L;
            int32_t *l_747 = &p_1074->g_9;
            int32_t *l_748 = &p_1074->g_9;
            int32_t *l_749 = &p_1074->g_9;
            int32_t *l_750 = &p_1074->g_9;
            int32_t *l_751 = &p_1074->g_9;
            int32_t *l_752 = &p_1074->g_9;
            int32_t *l_753 = &p_1074->g_9;
            int32_t *l_754 = &p_1074->g_9;
            int32_t *l_755 = &p_1074->g_9;
            int32_t *l_756 = (void*)0;
            int32_t *l_757 = &p_1074->g_9;
            int32_t *l_758 = &p_1074->g_9;
            int32_t *l_759 = &p_1074->g_9;
            int32_t *l_760[3];
            int32_t l_768 = 2L;
            int i;
            for (i = 0; i < 3; i++)
                l_760[i] = &p_1074->g_9;
            --l_763;
            --p_1074->g_779;
            l_775[2][7][1] ^= (FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_782.s3e38201d0506ec82)).lo, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((l_783 | l_761) || 4294967294UL), l_771, (-6L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x29CBF079L, (-5L))))).xxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1074->g_784.yy)).yxyxxyxxyyxyyyyy)).sc855))))))), (p_1074->g_9 <= ((safe_rshift_func_int16_t_s_u(0L, 5)) != ((p_70 > (*l_751)) & (l_773[1] > (-9L))))), 0x60B46AEBL, 1L, 0x2B488590L, l_787, ((VECTOR(int32_t, 2))(1L)), 0x1C254DACL, 9L)), ((VECTOR(int32_t, 16))(0L))))).s98b9)), ((VECTOR(int32_t, 4))(0x229756A2L))))).zywywxyy))), ((VECTOR(int32_t, 8))(0x38E9DEA5L)), ((VECTOR(int32_t, 8))((-1L)))))).s04)).yyxxxxyx, ((VECTOR(int32_t, 8))(0x70B0F21CL))))), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x095D77F9L))))).s46)).xyxyxxxy)).s3006734156440332)))).s5);
            (*l_750) &= p_68;
        }
        if ((safe_div_func_uint8_t_u_u(((&p_1074->g_776 != l_790[4]) & ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(0UL, 65535UL)).yxxy, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1074->g_791.s5374021510020060)).even)).s2063275634425153, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(l_792.yxyxxyxyyxyyyxyx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1074->g_793.s7403664047547677)).s66d1)), 3L, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(0x525FL, 0x501BL)).yxyyyyxy, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(0x558CL, 0x5CE0L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(7L, 0x0F19L, 0x37C9L, 0x24BBL, (0x284BEA4985DC7EBAL ^ (((((*l_794) ^= (-1L)) < ((VECTOR(int64_t, 16))(p_1074->g_795.s7157053243676247)).s8) , ((VECTOR(int64_t, 2))(l_796.s11)).lo) == (&p_1074->g_228 == ((*l_797) = &p_1074->g_228)))), (((VECTOR(uint16_t, 2))(l_799.s32)).hi > (*p_1074->g_393)), 9L, 0x4156L)).s4655403712467064, (int16_t)l_800, (int16_t)((l_769 , p_68) , 0L)))).sb855)).lo, ((VECTOR(int16_t, 2))(1L))))), 0x423CL, 0x285EL)).even))).xyxxxyyx, ((VECTOR(int16_t, 8))((-1L))))))))).s07, ((VECTOR(int16_t, 2))(0x26BEL))))), 0x5015L)).lo)).wwyywyyyyxwyxxww)))))).s5c)).yxxyxyyyyxyxxyxy, ((VECTOR(int16_t, 16))(0x3893L))))).se131))), (uint16_t)p_1074->g_196.sc, (uint16_t)p_1074->g_374.y))).odd)).lo), 0x72L)))
        { /* block id: 353 */
            return &p_1074->g_49;
        }
        else
        { /* block id: 355 */
            uint32_t l_831[5] = {1UL,1UL,1UL,1UL,1UL};
            int i;
            for (l_766 = 8; (l_766 < 21); l_766 = safe_add_func_uint16_t_u_u(l_766, 5))
            { /* block id: 358 */
                int32_t *l_804[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_804[i] = &l_767;
                l_767 &= ((*p_1074->g_498) == (p_1074->g_803 = (void*)0));
                for (p_1074->g_246 = 0; (p_1074->g_246 >= 14); p_1074->g_246 = safe_add_func_uint16_t_u_u(p_1074->g_246, 9))
                { /* block id: 363 */
                    int8_t *l_813 = (void*)0;
                    int8_t *l_814 = &p_1074->g_244;
                    int32_t l_830 = 0x065F00A7L;
                    int i, j;
                    if (((safe_add_func_int64_t_s_s((0x56D18943DF2B1F40L <= ((void*)0 == p_1074->g_552)), (0L >= ((+(-1L)) || p_1074->g_286.s5)))) ^ (safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) && (safe_mod_func_int8_t_s_s(((*l_814) = l_763), ((safe_div_func_int32_t_s_s((~(safe_mod_func_int8_t_s_s(((p_67 == &l_783) || (**p_1074->g_402)), p_1074->g_286.s1))), (-7L))) | p_68)))), 5))))
                    { /* block id: 365 */
                        int32_t l_821 = 0x59FB95AAL;
                        l_771 ^= (p_1074->g_516 , (safe_div_func_uint16_t_u_u(p_69, (-5L))));
                        if (l_821)
                            break;
                    }
                    else
                    { /* block id: 368 */
                        uint8_t l_822 = 0x43L;
                        --l_822;
                    }
                    for (l_778 = 0; (l_778 != (-12)); l_778--)
                    { /* block id: 373 */
                        int64_t l_827[7] = {1L,1L,1L,1L,1L,1L,1L};
                        int i;
                        l_827[0] &= p_70;
                        if (p_69)
                            break;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1074->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 140)), permutations[(safe_mod_func_uint32_t_u_u(5UL, 10))][(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))]));
                    for (p_1074->g_201.f0 = 4; (p_1074->g_201.f0 != 30); p_1074->g_201.f0++)
                    { /* block id: 382 */
                        VECTOR(uint16_t, 8) l_837 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x3B91L), 0x3B91L), 0x3B91L, 8UL, 0x3B91L);
                        uint16_t *l_838 = (void*)0;
                        uint16_t *l_839 = (void*)0;
                        uint16_t *l_840 = &p_1074->g_249;
                        int i;
                        l_831[2]--;
                        l_769 = (safe_sub_func_int64_t_s_s((((*l_840) = ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(p_1074->g_836.s15204433)).s24, ((VECTOR(uint16_t, 8))(l_837.s25713216)).s30))).hi) <= 0UL), p_70));
                    }
                }
            }
            if ((atomic_inc(&p_1074->l_atomic_input[7]) == 1))
            { /* block id: 390 */
                int32_t l_841 = (-1L);
                int8_t l_852 = 1L;
                l_841 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x42C863D9L, 0x59750940L)))).even;
                for (l_841 = 0; (l_841 <= (-30)); l_841--)
                { /* block id: 394 */
                    int32_t l_844 = 0x5448B3FCL;
                    for (l_844 = 21; (l_844 < 19); --l_844)
                    { /* block id: 397 */
                        int16_t l_847 = 8L;
                        uint16_t l_848 = 0xFDD1L;
                        union U2 l_850 = {0x7FA630DBL};/* VOLATILE GLOBAL l_850 */
                        union U2 *l_849 = &l_850;
                        union U2 *l_851[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_851[i] = &l_850;
                        l_848 ^= (FAKE_DIVERGE(p_1074->local_0_offset, get_local_id(0), 10) , l_847);
                        l_851[0] = l_849;
                    }
                }
                if (l_852)
                { /* block id: 402 */
                    int32_t l_854 = (-7L);
                    int32_t *l_853[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_877[3][6] = {{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854},{&l_854,&l_854,&l_854,&l_854,&l_854,&l_854}};
                    int32_t *l_878 = &l_854;
                    int i, j;
                    l_853[6] = (void*)0;
                    for (l_854 = 17; (l_854 > (-25)); --l_854)
                    { /* block id: 406 */
                        uint8_t l_857 = 0x64L;
                        VECTOR(int32_t, 4) l_858 = (VECTOR(int32_t, 4))(0x1822629CL, (VECTOR(int32_t, 2))(0x1822629CL, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_859 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L));
                        VECTOR(int32_t, 4) l_860 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4069220CL), 0x4069220CL);
                        uint8_t l_861 = 0x93L;
                        uint8_t l_862 = 6UL;
                        VECTOR(uint64_t, 16) l_863 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), 1UL, 18446744073709551615UL, 1UL, 18446744073709551615UL);
                        uint8_t l_864 = 0x87L;
                        uint16_t l_865[7] = {65535UL,0UL,65535UL,65535UL,0UL,65535UL,65535UL};
                        int8_t l_866 = 6L;
                        VECTOR(int32_t, 16) l_867 = (VECTOR(int32_t, 16))(0x7C08128DL, (VECTOR(int32_t, 4))(0x7C08128DL, (VECTOR(int32_t, 2))(0x7C08128DL, 0x4F4FABFBL), 0x4F4FABFBL), 0x4F4FABFBL, 0x7C08128DL, 0x4F4FABFBL, (VECTOR(int32_t, 2))(0x7C08128DL, 0x4F4FABFBL), (VECTOR(int32_t, 2))(0x7C08128DL, 0x4F4FABFBL), 0x7C08128DL, 0x4F4FABFBL, 0x7C08128DL, 0x4F4FABFBL);
                        int32_t l_868 = 0x51053E03L;
                        int8_t l_869 = 0x06L;
                        int8_t l_870[8][6] = {{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L},{0x5CL,0x02L,0x0DL,0L,0x0DL,0x02L}};
                        uint64_t l_871 = 1UL;
                        uint64_t l_872 = 18446744073709551615UL;
                        uint8_t l_873 = 0x44L;
                        VECTOR(uint32_t, 16) l_874 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC1B15439L), 0xC1B15439L), 0xC1B15439L, 4294967295UL, 0xC1B15439L, (VECTOR(uint32_t, 2))(4294967295UL, 0xC1B15439L), (VECTOR(uint32_t, 2))(4294967295UL, 0xC1B15439L), 4294967295UL, 0xC1B15439L, 4294967295UL, 0xC1B15439L);
                        int i, j;
                        l_873 |= (l_857 , (l_858.x = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_858.wy)), 0x11B0564DL, 0x5179C3C7L)).w, 1L, 3L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_859.yw)))), (l_861 = ((VECTOR(int32_t, 16))(l_860.wxxywwzwzzyxxyxy)).s3), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_862, ((l_864 = ((VECTOR(uint64_t, 4))(l_863.s7d3b)).w) , l_865[5]), 0x35E2C789L, (l_866 = (l_859.w ^= (-5L))), ((VECTOR(int32_t, 2))(l_867.s1d)), 0x47943D01L, 0L)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(1L, 0x485DA78AL, l_868, 0x692E3DC4L, 0x39D04259L, l_869, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x7F88D597L, (-3L))), (l_870[1][4] , l_871), l_872, ((VECTOR(int32_t, 4))(0x3F129AB6L)))))).odd)), 0x14894538L, ((VECTOR(int32_t, 4))(0x2941C0E9L)), 0x7B63250FL)).s3030)), ((VECTOR(int32_t, 4))((-9L)))))), ((VECTOR(int32_t, 4))(0x6FBFE0EDL))))).odd)), 0x7726B294L, (-5L))).wwyzxwwx, (int32_t)(-1L)))), 1L, 1L)).s1, 2L, (-5L), 1L, 0x6181FBB3L, ((VECTOR(int32_t, 2))(0x3E4941B9L)), 0x0FCE4CF9L)).s3625531125111104)).sea))).lo));
                        --l_874.sf;
                    }
                    l_878 = l_877[1][4];
                    for (l_854 = 0; (l_854 <= 11); l_854 = safe_add_func_uint32_t_u_u(l_854, 8))
                    { /* block id: 418 */
                        uint16_t l_881 = 0xD7A1L;
                        int64_t l_882 = (-9L);
                        int16_t l_883 = 0x2D21L;
                        int32_t l_884[8][8] = {{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)},{(-5L),0x5E8E5E43L,1L,0x10E6F017L,1L,0x5E8E5E43L,(-5L),(-8L)}};
                        VECTOR(uint16_t, 2) l_885 = (VECTOR(uint16_t, 2))(0x6C7CL, 0x7024L);
                        VECTOR(int32_t, 4) l_886 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 8L), 8L);
                        VECTOR(uint32_t, 4) l_887 = (VECTOR(uint32_t, 4))(0xFB757CD4L, (VECTOR(uint32_t, 2))(0xFB757CD4L, 0x14C5B564L), 0x14C5B564L);
                        VECTOR(uint32_t, 4) l_888 = (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0x2C0674CAL), 0x2C0674CAL);
                        VECTOR(uint8_t, 8) l_889 = (VECTOR(uint8_t, 8))(0x99L, (VECTOR(uint8_t, 4))(0x99L, (VECTOR(uint8_t, 2))(0x99L, 2UL), 2UL), 2UL, 0x99L, 2UL);
                        VECTOR(uint8_t, 4) l_890 = (VECTOR(uint8_t, 4))(0x09L, (VECTOR(uint8_t, 2))(0x09L, 0xEDL), 0xEDL);
                        VECTOR(uint8_t, 4) l_891 = (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0x08L), 0x08L);
                        VECTOR(uint16_t, 4) l_892 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0xB962L), 0xB962L);
                        VECTOR(uint16_t, 16) l_893 = (VECTOR(uint16_t, 16))(0xDE20L, (VECTOR(uint16_t, 4))(0xDE20L, (VECTOR(uint16_t, 2))(0xDE20L, 0UL), 0UL), 0UL, 0xDE20L, 0UL, (VECTOR(uint16_t, 2))(0xDE20L, 0UL), (VECTOR(uint16_t, 2))(0xDE20L, 0UL), 0xDE20L, 0UL, 0xDE20L, 0UL);
                        int8_t l_894 = 0x33L;
                        uint16_t l_895 = 0xC915L;
                        VECTOR(uint8_t, 4) l_896 = (VECTOR(uint8_t, 4))(0x67L, (VECTOR(uint8_t, 2))(0x67L, 3UL), 3UL);
                        VECTOR(int8_t, 16) l_897 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 8L), 8L), 8L, (-3L), 8L, (VECTOR(int8_t, 2))((-3L), 8L), (VECTOR(int8_t, 2))((-3L), 8L), (-3L), 8L, (-3L), 8L);
                        int64_t l_898[8][1] = {{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)}};
                        uint8_t l_899 = 0xC6L;
                        uint8_t l_900 = 251UL;
                        int64_t l_901 = 0L;
                        VECTOR(int8_t, 4) l_902 = (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x66L), 0x66L);
                        uint32_t l_903[8][6] = {{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL},{0x6D0D7C62L,0x155C3F98L,0x80234978L,9UL,0x155C3F98L,9UL}};
                        int64_t l_904 = 0x40B74D87A613AAC7L;
                        uint32_t l_905[10];
                        int8_t l_906 = 0x6AL;
                        uint16_t l_907 = 1UL;
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_905[i] = 0x2FB023D7L;
                        l_882 = l_881;
                        l_907 &= (l_883 , ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(0x3B14L, 6L, 1L, l_884[0][3], 0x783DL, 0L, 0x3864L, 8L)), ((VECTOR(uint16_t, 4))(l_885.xxxy)).yxxwwwxy))).s5443420375702506, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_886.yxywzxxzwzwzxwww)).lo))).s7263664260355544))).sba)).even, ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xF044E38AL, 1UL)).yxxy)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(l_887.zw)).yxyyxxxxyyyyxyxy, ((VECTOR(uint32_t, 8))(l_888.zwywyyxw)).s2157653225556661))).sd035)).wyxwzzxz, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_889.s11)), 1UL, 0x95L)).zzzzywwxxyxzzzwy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(l_890.yy)), ((VECTOR(uint8_t, 4))(l_891.zyzz)).even))).yxxxxxxyyxxxxxyx))))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_892.yzzz)).xxwwxzwy)).s3273114134260707, ((VECTOR(uint16_t, 2))(0xEF5DL, 0xF38EL)).yxxyyyxyxyxyxyxy))))))).even)).s2403443363272567, ((VECTOR(uint16_t, 2))(l_893.sbd)).yxyxxxyyyyyxyxyy))).hi))).s62, (uint32_t)(l_888.z = l_894), (uint32_t)l_895))), 6UL, 4294967293UL)).s71))).xyyxxxxxxxxyyxxy)).sf , ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(0x31L, 0xF6L)).xxxxxxyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_896.wwyyzyyz)).s2176501122115466)).s54da)).zxxzyxwx, ((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(l_897.s2a)).xxxyxxxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))((-1L), 0L, l_898[6][0], ((l_886.x = (l_899 , l_900)) , l_901), 1L, (l_852 |= ((VECTOR(int8_t, 4))(l_902.yywz)).z), 0x6EL, (-8L))), ((VECTOR(int8_t, 4))(2L, 1L, 0x16L, 0x22L)).zxwyzzwx))), l_903[7][3], ((VECTOR(int8_t, 4))(0x76L)), 0L, 0x0EL, 0x4CL)).odd))).s5301304425463024))).even))).odd, (uint8_t)l_904, (uint8_t)l_905[6]))), 0UL, ((VECTOR(uint8_t, 2))(0xA4L)), 0UL)), ((VECTOR(uint8_t, 8))(9UL))))).s4) , 0L), ((VECTOR(int32_t, 2))((-1L))), 1L, 0L, 0x53E32B2AL, 0L)))).s2172671764733022)).odd, (int32_t)l_906))).s1);
                    }
                }
                else
                { /* block id: 425 */
                    int64_t l_908 = 0x2714AFA38E73F1F0L;
                    int8_t l_909 = 0x15L;
                    uint32_t l_910 = 4294967295UL;
                    int64_t l_923 = (-7L);
                    int32_t l_924 = 0x1321CFEFL;
                    l_910++;
                    for (l_908 = 0; (l_908 < 6); l_908 = safe_add_func_uint32_t_u_u(l_908, 2))
                    { /* block id: 429 */
                        uint8_t l_915 = 0x44L;
                        int64_t l_916 = 0x6D03A479B8E094C1L;
                        VECTOR(int64_t, 2) l_917 = (VECTOR(int64_t, 2))(0x0F577D9727C7CFD5L, (-7L));
                        int64_t l_918 = 0x3B21DD71EE6073E2L;
                        int32_t l_920 = 0x2E39608EL;
                        int32_t *l_919 = &l_920;
                        int32_t *l_921 = &l_920;
                        int16_t l_922 = (-9L);
                        int i;
                        l_917.y &= (l_916 = l_915);
                        l_918 = 0x2A49B2B1L;
                        l_921 = l_919;
                        (*l_919) ^= l_922;
                    }
                    l_924 |= l_923;
                }
                unsigned int result = 0;
                result += l_841;
                result += l_852;
                atomic_add(&p_1074->l_special_values[7], result);
            }
            else
            { /* block id: 438 */
                (1 + 1);
            }
        }
        l_769 ^= (safe_rshift_func_uint16_t_u_u((++p_1074->g_249), 11));
    }
    for (p_1074->g_246 = 0; (p_1074->g_246 != (-7)); --p_1074->g_246)
    { /* block id: 447 */
        uint16_t *l_978 = (void*)0;
        int32_t *l_979 = &l_775[2][0][3];
        VECTOR(int8_t, 16) l_982 = (VECTOR(int8_t, 16))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0L), 0L), 0L, 0x13L, 0L, (VECTOR(int8_t, 2))(0x13L, 0L), (VECTOR(int8_t, 2))(0x13L, 0L), 0x13L, 0L, 0x13L, 0L);
        int i;
        if ((atomic_inc(&p_1074->l_atomic_input[30]) == 4))
        { /* block id: 449 */
            int32_t l_933[6];
            int i;
            for (i = 0; i < 6; i++)
                l_933[i] = (-9L);
            for (l_933[4] = 8; (l_933[4] == 29); ++l_933[4])
            { /* block id: 452 */
                int32_t l_936 = 0x2074EFB8L;
                int32_t *l_971 = &l_936;
                for (l_936 = 0; (l_936 <= 14); l_936 = safe_add_func_uint64_t_u_u(l_936, 3))
                { /* block id: 455 */
                    int32_t l_939[7];
                    int32_t l_965 = 0x3F208CA4L;
                    uint16_t l_966 = 0x26D6L;
                    uint8_t l_967[5] = {0x54L,0x54L,0x54L,0x54L,0x54L};
                    uint64_t l_968 = 0x2F7B546A0E1A7DB8L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_939[i] = 0x0261A0BCL;
                    for (l_939[2] = 0; (l_939[2] < (-5)); l_939[2]--)
                    { /* block id: 458 */
                        int8_t l_942 = 1L;
                        VECTOR(uint64_t, 16) l_943 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x8AC3C13E2C5BF11BL), 0x8AC3C13E2C5BF11BL), 0x8AC3C13E2C5BF11BL, 1UL, 0x8AC3C13E2C5BF11BL, (VECTOR(uint64_t, 2))(1UL, 0x8AC3C13E2C5BF11BL), (VECTOR(uint64_t, 2))(1UL, 0x8AC3C13E2C5BF11BL), 1UL, 0x8AC3C13E2C5BF11BL, 1UL, 0x8AC3C13E2C5BF11BL);
                        VECTOR(uint64_t, 16) l_944 = (VECTOR(uint64_t, 16))(0x69952579CEBB9FB7L, (VECTOR(uint64_t, 4))(0x69952579CEBB9FB7L, (VECTOR(uint64_t, 2))(0x69952579CEBB9FB7L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0x69952579CEBB9FB7L, 18446744073709551610UL, (VECTOR(uint64_t, 2))(0x69952579CEBB9FB7L, 18446744073709551610UL), (VECTOR(uint64_t, 2))(0x69952579CEBB9FB7L, 18446744073709551610UL), 0x69952579CEBB9FB7L, 18446744073709551610UL, 0x69952579CEBB9FB7L, 18446744073709551610UL);
                        VECTOR(uint64_t, 8) l_945 = (VECTOR(uint64_t, 8))(0x2665E4E178EA63CEL, (VECTOR(uint64_t, 4))(0x2665E4E178EA63CEL, (VECTOR(uint64_t, 2))(0x2665E4E178EA63CEL, 0UL), 0UL), 0UL, 0x2665E4E178EA63CEL, 0UL);
                        VECTOR(uint64_t, 8) l_946 = (VECTOR(uint64_t, 8))(0x54AC5E5FCAE9D726L, (VECTOR(uint64_t, 4))(0x54AC5E5FCAE9D726L, (VECTOR(uint64_t, 2))(0x54AC5E5FCAE9D726L, 0xD014876E2E90AF40L), 0xD014876E2E90AF40L), 0xD014876E2E90AF40L, 0x54AC5E5FCAE9D726L, 0xD014876E2E90AF40L);
                        int32_t l_947 = 0x2B5A6752L;
                        int8_t l_948 = 0x79L;
                        uint8_t l_949[9][6][1] = {{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}},{{0x13L},{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}}};
                        uint32_t l_950[3][3] = {{0x5F16F97EL,0x1435D3D1L,0x5F16F97EL},{0x5F16F97EL,0x1435D3D1L,0x5F16F97EL},{0x5F16F97EL,0x1435D3D1L,0x5F16F97EL}};
                        VECTOR(uint64_t, 16) l_953 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x74AB648F345E8166L), 0x74AB648F345E8166L), 0x74AB648F345E8166L, 1UL, 0x74AB648F345E8166L, (VECTOR(uint64_t, 2))(1UL, 0x74AB648F345E8166L), (VECTOR(uint64_t, 2))(1UL, 0x74AB648F345E8166L), 1UL, 0x74AB648F345E8166L, 1UL, 0x74AB648F345E8166L);
                        VECTOR(uint64_t, 8) l_954 = (VECTOR(uint64_t, 8))(0x2496557DE07636C5L, (VECTOR(uint64_t, 4))(0x2496557DE07636C5L, (VECTOR(uint64_t, 2))(0x2496557DE07636C5L, 0xAE79E163B33AFA66L), 0xAE79E163B33AFA66L), 0xAE79E163B33AFA66L, 0x2496557DE07636C5L, 0xAE79E163B33AFA66L);
                        VECTOR(uint64_t, 4) l_955 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL);
                        VECTOR(uint64_t, 4) l_956 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL);
                        int32_t l_957 = 0x72AF2B4AL;
                        VECTOR(uint64_t, 2) l_958 = (VECTOR(uint64_t, 2))(8UL, 18446744073709551611UL);
                        VECTOR(uint64_t, 8) l_959 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 3UL), 3UL), 3UL, 18446744073709551611UL, 3UL);
                        VECTOR(uint64_t, 4) l_960 = (VECTOR(uint64_t, 4))(0x14361D84730BF1A6L, (VECTOR(uint64_t, 2))(0x14361D84730BF1A6L, 5UL), 5UL);
                        VECTOR(uint64_t, 16) l_961 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551615UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551608UL), 18446744073709551615UL, 18446744073709551608UL, 18446744073709551615UL, 18446744073709551608UL);
                        struct S1 l_964 = {0x4DC09D6B06E5F2F5L,-8L};
                        struct S1 *l_963 = &l_964;
                        struct S1 **l_962 = &l_963;
                        int i, j, k;
                        l_962 = (((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(18446744073709551615UL, l_942, 5UL, 18446744073709551606UL)).zywzzxwx)).s75, ((VECTOR(uint64_t, 2))(l_943.s07))))))).yyyy, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(l_944.se35e9eaf2a793fe2)).s8a, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(l_945.s22)).xxxyyyxxxyyyxxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_946.s6645)))).wzyzzxwxwzwwyyww))).s20b2, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))((l_948 = l_947), 0UL, 0x8329EE777949CA4BL, 2UL)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(18446744073709551615UL, (l_949[8][2][0] &= GROUP_DIVERGE(2, 1)), (++l_950[0][1]), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(4UL, 0xB904293C7A74CD69L)), 18446744073709551615UL, 0x61597EC393FAECB2L)), 0UL)).lo)))))))).even))).xyyx))))).xwxyzxyx, ((VECTOR(uint64_t, 2))(l_953.s20)).xxxxyyxx))).s7533344734170754)))).se9, ((VECTOR(uint64_t, 8))(l_954.s44522527)).s13))).xxxyyyxyxyyxxxyy, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_955.xwzz)).hi)).yxxx, ((VECTOR(uint64_t, 8))(l_956.zyxxzzxw)).even, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(0xC3EDA1EF63039996L, 0xB995BDCFD88BB289L)), (uint64_t)(l_957 = GROUP_DIVERGE(2, 1))))).xxxy, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL)).xyyyxxxy))).odd, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_958.xyyy)).lo)))), ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 4))(l_959.s1276)).xyxxwxwy, ((VECTOR(uint64_t, 4))(l_960.xwxz)).yxwwzxxx, ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 2))(0x67788E4698C25F14L, 18446744073709551614UL))))).yyyyyxyx))).s43))).yyyy)))))).yzzxyxwzxwxywzxy))).s93f4, ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_961.s3c64c0d03725104e)).s63)).xxyx)))))).w , (void*)0);
                    }
                    l_965 = 0L;
                    l_967[2] &= l_966;
                    --l_968;
                }
                l_971 = (void*)0;
            }
            unsigned int result = 0;
            int l_933_i0;
            for (l_933_i0 = 0; l_933_i0 < 6; l_933_i0++) {
                result += l_933[l_933_i0];
            }
            atomic_add(&p_1074->l_special_values[30], result);
        }
        else
        { /* block id: 471 */
            (1 + 1);
        }
        (*l_979) |= (safe_mul_func_int16_t_s_s(0L, ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_771, p_1074->g_196.s0)), 8)) | ((void*)0 != l_978))));
        (*l_979) = (((*p_1074->g_393) = (safe_mod_func_uint8_t_u_u((+FAKE_DIVERGE(p_1074->global_1_offset, get_global_id(1), 10)), ((VECTOR(int8_t, 2))(l_982.s7e)).odd))) == ((*l_979) > (p_68 < p_70)));
        if (p_68)
            break;
    }
    atomic_min(&p_1074->g_atomic_reduction[get_linear_group_id()], ((l_775[2][0][3] &= (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((*l_988) = (l_987 = l_987)) == &p_1074->g_803), 18446744073709551613UL)), ((VECTOR(int8_t, 4))(l_990.xwyz)).x))) <= p_70));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1074->v_collective += p_1074->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return &p_1074->g_49;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_71(uint32_t * p_72, uint32_t * p_73, int32_t * p_74, uint32_t * p_75, int32_t  p_76, struct S3 * p_1074)
{ /* block id: 329 */
    uint32_t *l_734 = &p_1074->g_49;
    return l_734;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_20 p_1074->g_83 p_1074->g_10 p_1074->g_9 p_1074->l_comm_values p_1074->g_3 p_1074->g_131 p_1074->g_49 p_1074->g_comm_values p_1074->g_142 p_1074->g_146 p_1074->g_150 p_1074->g_169 p_1074->g_124 p_1074->g_179 p_1074->g_196 p_1074->g_147 p_1074->g_201 p_1074->g_202 p_1074->g_203 p_1074->g_201.f0 p_1074->g_209 p_1074->g_220 p_1074->g_227 p_1074->g_252 p_1074->g_254 p_1074->g_255 p_1074->g_180 p_1074->g_286 p_1074->g_244 p_1074->g_249 p_1074->g_374 p_1074->g_384 p_1074->g_402 p_1074->g_246 p_1074->g_498 p_1074->g_403 p_1074->g_404 p_1074->g_582 p_1074->g_583 p_1074->g_228 p_1074->g_670 p_1074->g_680 p_1074->g_732
 * writes: p_1074->g_9 p_1074->g_comm_values p_1074->g_124 p_1074->g_147 p_1074->g_169 p_1074->g_202 p_1074->g_20 p_1074->g_228 p_1074->g_244 p_1074->g_246 p_1074->g_249 p_1074->g_252 p_1074->g_323 p_1074->g_393 p_1074->g_131 p_1074->g_201.f0 p_1074->g_567 p_1074->g_83 p_1074->g_431 p_1074->g_209.f1
 */
uint32_t * func_77(int16_t  p_78, int16_t  p_79, int32_t * p_80, struct S3 * p_1074)
{ /* block id: 34 */
    uint64_t *l_102 = (void*)0;
    VECTOR(uint8_t, 2) l_103 = (VECTOR(uint8_t, 2))(7UL, 252UL);
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = &p_1074->g_9;
    int32_t l_112 = 0x6EC8B7CFL;
    int64_t *l_113 = (void*)0;
    int64_t *l_114 = (void*)0;
    int64_t *l_115 = (void*)0;
    int64_t *l_116 = (void*)0;
    int64_t *l_117 = (void*)0;
    int64_t *l_118 = (void*)0;
    int64_t *l_119[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    uint64_t l_120 = 0x036077B2A72B5AE5L;
    VECTOR(int64_t, 8) l_125 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x672FAF5C710B0AC7L), 0x672FAF5C710B0AC7L), 0x672FAF5C710B0AC7L, 1L, 0x672FAF5C710B0AC7L);
    int32_t l_148 = 0L;
    int32_t ***l_222 = &p_1074->g_180;
    struct S0 *l_275 = &p_1074->g_131;
    VECTOR(int64_t, 16) l_277 = (VECTOR(int64_t, 16))(0x217AAFA67C6BDC7DL, (VECTOR(int64_t, 4))(0x217AAFA67C6BDC7DL, (VECTOR(int64_t, 2))(0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L), 0x0D0380F5ECD5AB35L), 0x0D0380F5ECD5AB35L, 0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L, (VECTOR(int64_t, 2))(0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L), (VECTOR(int64_t, 2))(0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L), 0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L, 0x217AAFA67C6BDC7DL, 0x0D0380F5ECD5AB35L);
    uint16_t *l_280 = &p_1074->g_249;
    union U2 **l_291 = &p_1074->g_228;
    int8_t *l_321 = &p_1074->g_246;
    int32_t l_359 = 0x22FACD48L;
    int32_t l_360 = 1L;
    int32_t l_364 = 0L;
    int32_t l_365[10] = {0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L,0x75070DB6L};
    uint32_t l_369 = 0x7BD3B64AL;
    VECTOR(int8_t, 16) l_376 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L, (VECTOR(int8_t, 2))((-10L), 0L), (VECTOR(int8_t, 2))((-10L), 0L), (-10L), 0L, (-10L), 0L);
    VECTOR(int16_t, 4) l_386 = (VECTOR(int16_t, 4))(0x3AAAL, (VECTOR(int16_t, 2))(0x3AAAL, (-1L)), (-1L));
    int32_t ****l_417 = &p_1074->g_169[0];
    int32_t l_479[1][5][3] = {{{0x321B757EL,0x321B757EL,0x321B757EL},{0x321B757EL,0x321B757EL,0x321B757EL},{0x321B757EL,0x321B757EL,0x321B757EL},{0x321B757EL,0x321B757EL,0x321B757EL},{0x321B757EL,0x321B757EL,0x321B757EL}}};
    int32_t *l_480 = &l_359;
    int32_t *l_481 = &l_359;
    int32_t *l_482 = &l_365[7];
    int32_t *l_483[7][3][1] = {{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}},{{&l_365[7]},{&l_365[7]},{&l_365[7]}}};
    int32_t l_484 = (-9L);
    int32_t l_485 = (-4L);
    int16_t l_486 = 0x4AC0L;
    int16_t l_487 = 0x0CDEL;
    uint32_t l_488 = 0x0E4C6A6DL;
    VECTOR(int32_t, 8) l_504 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5E728A92L), 0x5E728A92L), 0x5E728A92L, (-1L), 0x5E728A92L);
    int16_t **l_531 = &p_1074->g_393;
    int16_t **l_532[7][4] = {{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393},{&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393}};
    int64_t l_540 = 0x46321B78B7DEFDA4L;
    uint32_t l_597 = 0x9676D1FAL;
    int32_t l_602 = (-5L);
    int32_t l_606 = (-10L);
    uint8_t *l_731 = (void*)0;
    uint8_t **l_730 = &l_731;
    int i, j, k;
    if (((safe_mod_func_int64_t_s_s((p_78 >= (safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(p_79, (safe_add_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((0x1EF177DAE0A7320BL <= (l_102 != &p_1074->g_83)) > ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_103.yx)), 0xBEL, 0x45L, ((safe_rshift_func_uint8_t_u_s(p_79, (safe_sub_func_int64_t_s_s((p_1074->g_comm_values[p_1074->tid] = ((((safe_lshift_func_int16_t_s_s(((((VECTOR(uint64_t, 2))(3UL, 0xD7628F8C84420CA5L)).hi , l_103.y) == ((*l_111) = 0x46B2EB2EL)), ((VECTOR(int16_t, 16))((((l_112 , (-8L)) > p_1074->g_20) < p_78), ((VECTOR(int16_t, 4))(0x5E7CL)), 0x0429L, 1L, 0x1FECL, p_79, ((VECTOR(int16_t, 2))(0x25A6L)), 1L, p_78, ((VECTOR(int16_t, 2))((-1L))), 0L)).sa)) , l_111) == (void*)0) , 0x2801F5D8E54FB192L)), 1L)))) > p_1074->g_20), p_1074->g_83, 0x46L, 0x9FL))))).s0, 8UL, 0x09L, 253UL, 0xA7L, 0UL, 0UL, 0UL, FAKE_DIVERGE(p_1074->group_1_offset, get_group_id(1), 10), GROUP_DIVERGE(2, 1), 0xEAL, GROUP_DIVERGE(1, 1), 255UL, 0x8AL, 0x3CL)))).s673d))).w, p_78, 248UL, p_1074->g_10, ((VECTOR(uint8_t, 2))(2UL)), 0xEBL, 0x1BL)), 1UL, p_1074->g_9, 9UL, ((VECTOR(uint8_t, 4))(8UL)), 255UL)).s0), l_120)) , 18446744073709551615UL), GROUP_DIVERGE(0, 1))))) != p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))]), p_1074->g_20))), 0x401CC62712D857C4L)) <= p_78))
    { /* block id: 37 */
        uint32_t l_123 = 0x797B2EA2L;
        VECTOR(int64_t, 2) l_126 = (VECTOR(int64_t, 2))(0x4B8E9996A1BC1FB2L, 0x218BD6C3DA0ACF18L);
        VECTOR(int64_t, 8) l_127 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        VECTOR(uint32_t, 4) l_128 = (VECTOR(uint32_t, 4))(0xA42B1B44L, (VECTOR(uint32_t, 2))(0xA42B1B44L, 0x2533209CL), 0x2533209CL);
        VECTOR(int32_t, 16) l_140 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-3L)), (-3L)), (-3L), 3L, (-3L), (VECTOR(int32_t, 2))(3L, (-3L)), (VECTOR(int32_t, 2))(3L, (-3L)), 3L, (-3L), 3L, (-3L));
        VECTOR(int32_t, 2) l_141 = (VECTOR(int32_t, 2))(0L, 0x65E96A0BL);
        int32_t *l_145 = (void*)0;
        uint32_t *l_153[10][7][3] = {{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}},{{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49},{(void*)0,&p_1074->g_124,&p_1074->g_49}}};
        int32_t ***l_174 = (void*)0;
        uint64_t *l_192 = &l_120;
        int64_t *l_194 = (void*)0;
        int i, j, k;
        (*l_111) |= (safe_add_func_uint64_t_u_u(((+(((((0xEF06L == (p_1074->g_124 = l_123)) && (((VECTOR(int64_t, 16))(l_125.s0733472434262346)).s8 | ((VECTOR(int64_t, 16))(l_126.yxxyxyyxyyyyxxyx)).sa)) <= ((VECTOR(int64_t, 16))(l_127.s5531400160623763)).se) >= p_1074->g_3) != ((((VECTOR(uint32_t, 16))(l_128.yzxxxwyzxyyywxzy)).sf | (safe_add_func_int8_t_s_s((p_1074->g_131 , 2L), ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(p_1074->g_49, (safe_mul_func_int8_t_s_s(((((void*)0 == p_80) >= (((p_1074->g_83 || 0xB45BL) , p_1074->g_20) && 4294967295UL)) & 0x54L), p_1074->g_3)))) != 0x2A7E1DD4L), p_1074->g_49)) | p_1074->g_49)))) < p_1074->g_comm_values[p_1074->tid]))) & l_126.x), 0UL));
        for (p_1074->g_9 = 0; (p_1074->g_9 < (-1)); p_1074->g_9--)
        { /* block id: 42 */
            volatile int32_t **l_144 = (void*)0;
            VECTOR(uint64_t, 8) l_151 = (VECTOR(uint64_t, 8))(0x76BFB62ABAF8B371L, (VECTOR(uint64_t, 4))(0x76BFB62ABAF8B371L, (VECTOR(uint64_t, 2))(0x76BFB62ABAF8B371L, 0x5DA593D3CFB5F1DAL), 0x5DA593D3CFB5F1DAL), 0x5DA593D3CFB5F1DAL, 0x76BFB62ABAF8B371L, 0x5DA593D3CFB5F1DAL);
            int32_t **l_173 = &l_110;
            int32_t ***l_172[5] = {&l_173,&l_173,&l_173,&l_173,&l_173};
            int8_t l_182 = (-7L);
            uint8_t l_189[3][6][2] = {{{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L}},{{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L}},{{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L},{0x56L,0x18L}}};
            VECTOR(int8_t, 2) l_195 = (VECTOR(int8_t, 2))((-9L), (-1L));
            uint64_t *l_198 = &l_120;
            int i, j, k;
            if ((!((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_140.s0e5037cf)), ((VECTOR(int32_t, 2))(0L, 5L)).yxxxxyyy))).s5226522421422203, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_141.yyyxxxxx)).s30)).xyxyyxyxyyyxyyxy))))))).sf))
            { /* block id: 43 */
                volatile int32_t ***l_143[10][10] = {{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0},{&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,&p_1074->g_142,(void*)0,&p_1074->g_142,(void*)0}};
                int i, j;
                l_144 = p_1074->g_142;
                if ((*p_80))
                    break;
            }
            else
            { /* block id: 46 */
                int32_t **l_152 = &p_1074->g_147;
                uint16_t l_200 = 0UL;
                int32_t l_223 = 0x111A7FCEL;
                if (((void*)0 == l_145))
                { /* block id: 47 */
                    (*p_1074->g_146) = p_80;
                    l_148 &= (*p_80);
                }
                else
                { /* block id: 50 */
                    int32_t **l_149 = &l_111;
                    (*p_1074->g_150) = ((*l_149) = p_80);
                }
                (*l_152) = ((p_79 != ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_151.s7206)))).w) , l_145);
                if (((void*)0 != l_117))
                { /* block id: 55 */
                    return l_153[1][1][0];
                }
                else
                { /* block id: 57 */
                    uint16_t l_164 = 1UL;
                    int32_t ****l_170 = (void*)0;
                    int32_t ****l_171 = &p_1074->g_169[0];
                    int32_t *l_175[6] = {&l_148,&p_1074->g_3,&l_148,&l_148,&p_1074->g_3,&l_148};
                    uint16_t l_193 = 0x3434L;
                    int i;
                    if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x3789L, (p_78 == p_1074->g_83))), (p_78 , (((l_164 || ((safe_sub_func_int16_t_s_s(((l_148 |= (safe_sub_func_int8_t_s_s(((l_172[4] = ((*l_171) = p_1074->g_169[0])) == l_174), (*l_111)))) <= p_1074->g_3), p_1074->g_124)) != p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))])) != (-1L)) != 0x0CBDEBE9L)))), 6UL)), p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))])))
                    { /* block id: 61 */
                        uint32_t l_176 = 9UL;
                        int32_t l_177[8][3] = {{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L},{0x5AAB13C8L,0L,0x5AAB13C8L}};
                        int32_t l_178 = 3L;
                        int32_t ***l_181 = &p_1074->g_180;
                        int i, j;
                        l_178 = (l_177[1][2] = l_176);
                        l_152 = &p_80;
                        l_182 &= (((*l_171) = l_174) == (l_181 = p_1074->g_179));
                    }
                    else
                    { /* block id: 68 */
                        uint64_t *l_197 = &p_1074->g_83;
                        int32_t l_199 = 1L;
                        uint8_t *l_208[7][5][4] = {{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}},{{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20},{&p_1074->g_20,(void*)0,(void*)0,&p_1074->g_20}}};
                        int i, j, k;
                        (*l_152) = ((l_200 &= ((((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_189[1][1][1], (p_1074->g_131 , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((0x66DBL > ((void*)0 == l_192)), l_193, 0x6DL, (-1L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((-5L), (l_194 != (void*)0), 0x6EL, 0x6AL)))).w, 0x0BL, 0x66L, 0x20L)), ((VECTOR(int8_t, 2))(l_195.yy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(p_1074->g_196.sd5)).xxxx, ((VECTOR(int8_t, 4))(((((l_197 == l_198) , GROUP_DIVERGE(1, 1)) <= l_199) , 0x21L), ((VECTOR(int8_t, 2))(0x56L)), 0x72L))))).hi, ((VECTOR(int8_t, 2))(0x2EL))))), 0x50L, 0x6EL)), (-10L), 0x0FL)).s64e0, (int8_t)(-1L)))))).y))), p_79)), p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))])) >= p_1074->g_124) | GROUP_DIVERGE(0, 1)) < l_199)) , (*p_1074->g_146));
                        if ((*p_80))
                            continue;
                        (*p_1074->g_203) = (p_1074->g_201 , p_1074->g_202);
                        l_223 |= (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((p_1074->g_20 ^= p_1074->g_201.f0), ((((p_79 = (p_1074->g_209 , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((0x59E726B2L && (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_79 && ((*l_111) , 2UL)), 1UL)) & ((VECTOR(int16_t, 8))(p_1074->g_220.sd369f0a6)).s0), 0xACADL)), ((safe_unary_minus_func_uint64_t_u((l_222 != (*l_171)))) , p_1074->g_124)))) == p_78) , 6L), 7)), (-9L))))) < p_78) >= 0xF6L) && p_79))), p_78));
                    }
                }
            }
        }
        for (l_123 = (-26); (l_123 >= 15); l_123++)
        { /* block id: 82 */
            union U2 **l_226 = (void*)0;
            (*p_1074->g_227) = &p_1074->g_201;
            if ((*p_80))
                break;
        }
    }
    else
    { /* block id: 86 */
        int8_t *l_243 = &p_1074->g_244;
        int8_t *l_245 = &p_1074->g_246;
        int32_t l_247 = 0x4F610159L;
        uint16_t *l_248[10][2][1] = {{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}},{{&p_1074->g_249},{&p_1074->g_249}}};
        VECTOR(uint64_t, 2) l_253 = (VECTOR(uint64_t, 2))(0x7AD20B73E2F33466L, 18446744073709551614UL);
        uint32_t *l_285 = &p_1074->g_124;
        int32_t l_296[3][3][7] = {{{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L}},{{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L}},{{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L},{(-2L),2L,2L,(-2L),0x2AAB0096L,(-1L),0x13981001L}}};
        uint8_t *l_305 = &p_1074->g_20;
        VECTOR(uint64_t, 8) l_310 = (VECTOR(uint64_t, 8))(0xFCC671885BE153D7L, (VECTOR(uint64_t, 4))(0xFCC671885BE153D7L, (VECTOR(uint64_t, 2))(0xFCC671885BE153D7L, 0x3A5E84BC4E430C84L), 0x3A5E84BC4E430C84L), 0x3A5E84BC4E430C84L, 0xFCC671885BE153D7L, 0x3A5E84BC4E430C84L);
        uint32_t l_324[4][1] = {{1UL},{1UL},{1UL},{1UL}};
        struct S0 *l_329 = (void*)0;
        int8_t l_367 = 0L;
        VECTOR(int8_t, 2) l_375 = (VECTOR(int8_t, 2))((-3L), 0x68L);
        int16_t *l_392 = &p_1074->g_323[2];
        volatile uint32_t * volatile *l_406[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int32_t, 8) l_412 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x16479A09L), 0x16479A09L), 0x16479A09L, (-5L), 0x16479A09L);
        int i, j, k;
        (**l_222) = ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((((safe_sub_func_int8_t_s_s(((*l_245) = ((*l_243) = (safe_rshift_func_int8_t_s_s(((*p_1074->g_203) , p_1074->g_202.f0), 2)))), l_247)) <= 4294967293UL) < FAKE_DIVERGE(p_1074->global_1_offset, get_global_id(1), 10)) != p_1074->g_9) == (p_1074->g_249 = FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10))), (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1074->g_252.yzzxxxzy)).s77)).yyxy)).hi, ((VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL))))), 0x65524AE8CD262044L, 18446744073709551615UL)), ((VECTOR(uint64_t, 16))(l_253.yyyxyxyxxyxxyyyx)).s14fa))).xwxxzxyw, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(p_1074->g_254.xx)), ((VECTOR(uint32_t, 2))(p_1074->g_255.se7))))).yyyy))).ywzwxxxxzzwyxyxz)).sbf, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(0UL, l_253.y, (((safe_sub_func_int64_t_s_s((5L ^ (p_1074->g_9 , ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_78 > p_78), (*l_111))), 7)), 1)) && 0x4FL))) || (*l_111)))), 18446744073709551615UL)) >= 0xA49896F324701106L) != p_79), 3UL, 0xEE7F2809L, 6UL, 9UL, ((VECTOR(uint32_t, 8))(4294967292UL)), 4294967295UL)).s9baa, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0xE6405BCDL))))).lo))))), 4UL, ((VECTOR(uint64_t, 4))(0xA97485B82C6DD85AL)), 0xC4A7E46AF6D6110CL)), 0x837760ADB3E631B1L, 0x5767F022DFC17B50L, ((VECTOR(uint64_t, 4))(18446744073709551609UL)), 0x4E4066CF73A63B41L, 18446744073709551608UL)).sb016)).yyzxzwwy))))).lo, (uint64_t)p_79))).y, p_1074->g_255.s9)))), 0L)), p_1074->g_124)) , p_79) , &p_1074->g_20) != &p_1074->g_20), p_78)), 1UL)) , (*p_1074->g_150));
        if ((((!(p_78 = (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(p_1074->g_3, (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((((l_275 != (void*)0) | ((+((**p_1074->g_180) > (-1L))) != (*l_111))) ^ ((((0x75L < (safe_unary_minus_func_uint32_t_u((((((((*l_245) = ((p_1074->g_252.w = 0xA95782ED9C985195L) ^ ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_277.s12454b516f5680d5)).s31)).even > (((safe_add_func_uint32_t_u_u(((((l_280 == l_280) != 0L) , l_253.x) <= 18446744073709551611UL), l_247)) && (-1L)) & 0x7A22L)), (*l_111), p_78, p_1074->g_196.s9, ((VECTOR(int32_t, 4))(0x14C95139L)))).s2633772214545176, ((VECTOR(int32_t, 16))(0x0027C97BL))))).s53, ((VECTOR(uint32_t, 2))(0x73F40889L))))).odd)) , 0L) >= p_79) , 0x0D86D0E1961F1A68L) ^ 0xE433B8448DE1C552L) | p_78)))) < p_1074->g_255.s8) || 0x68C1L) || l_247)) , p_1074->g_9) & p_78), p_79)), 0x0DB3L)) , (***l_222)), 5)))), 0x616F577913A047BBL)))) == 2L) <= p_79))
        { /* block id: 94 */
            union U2 **l_290[9][1] = {{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228},{&p_1074->g_228}};
            uint16_t l_297[4][7][7] = {{{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL}},{{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL}},{{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL}},{{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL},{1UL,0xA291L,65526UL,0xE0E6L,65535UL,8UL,65527UL}}};
            int32_t l_298[3][4][9] = {{{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL}},{{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL}},{{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL},{0x4D7A43F1L,0x1B536B5AL,0x58342909L,0x4AEF7B45L,(-6L),0x3E044CEBL,0x4D8008BCL,4L,0x0DD78E7BL}}};
            uint8_t *l_303 = (void*)0;
            uint8_t **l_304[2][1][10] = {{{&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303}},{{&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303,&l_303}}};
            int16_t *l_322 = &p_1074->g_323[2];
            VECTOR(int32_t, 8) l_413 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0A204467L), 0x0A204467L), 0x0A204467L, (-1L), 0x0A204467L);
            int32_t ****l_418 = (void*)0;
            int32_t l_423 = (-10L);
            int8_t l_429 = (-4L);
            int i, j, k;
            for (l_247 = 20; (l_247 == 25); l_247 = safe_add_func_uint64_t_u_u(l_247, 3))
            { /* block id: 97 */
                struct S1 l_289 = {18446744073709551607UL,-1L};
                for (l_120 = (-4); (l_120 == 7); ++l_120)
                { /* block id: 100 */
                    (**l_222) = p_80;
                    if ((*p_80))
                        continue;
                    return l_285;
                }
                l_298[2][0][8] &= (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 8))((((VECTOR(int8_t, 16))(p_1074->g_286.s7634603077271517)).s4 && p_79), ((*l_245) = ((*l_243) |= (((l_289 , (0x5CL < (l_290[7][0] == l_291))) > (((((**p_1074->g_180) || 0x031C6C41L) ^ ((safe_mod_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(((*p_80) > (l_296[2][1][6] = (p_79 <= FAKE_DIVERGE(p_1074->local_1_offset, get_local_id(1), 10)))), p_1074->g_254.y)) , l_253.x) <= p_1074->g_255.s4), l_297[0][5][6])) , 0x5BA7L)) , 0UL) & l_253.y)) < 0x4B0D07F0L))), l_297[0][5][6], 0x21L, 0x40L, 0x5EL, 0L, 0L)).lo, ((VECTOR(int8_t, 4))(0x14L))))), ((VECTOR(uint8_t, 4))(0xD6L))))).zyywzxywzxwxyyzy, ((VECTOR(uint16_t, 16))(1UL))))).s6712)).odd))).xyxxxxyyyyxxxyyy, ((VECTOR(uint16_t, 16))(4UL))))).s6429)).y == p_79);
            }
            l_298[2][2][6] &= (((l_247 = (safe_mod_func_uint16_t_u_u((0xAC56C3AD2EF7A4E7L == (safe_rshift_func_int8_t_s_u((p_80 != &l_247), 6))), ((((l_305 = (p_78 , l_303)) != (void*)0) < ((***l_222) && (***l_222))) , (safe_div_func_int64_t_s_s(p_78, GROUP_DIVERGE(2, 1))))))) == 0xD41789B2885816FBL) != p_79);
            (*l_111) |= ((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1074->local_2_offset, get_local_id(2), 10), 4)) & (((VECTOR(uint64_t, 4))(l_310.s2642)).z , (p_1074->g_255.s9 != (*p_80))));
            if (((l_298[2][0][8] , ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_1074->g_comm_values[p_1074->tid], ((((*l_322) = (l_296[0][1][5] ^ ((l_243 = &p_1074->g_246) == l_321))) | ((+(9L < (((((p_1074->g_249 || ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_324[0][0], (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_1074->g_286.s5, p_79)) < l_324[0][0]), l_324[0][0])), 4L, 0x1796L, p_1074->g_220.sb, 0L, (-9L), 1L)).s07, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x4754L))))).xyyyyyxx)).lo)).zzzyxwzw, ((VECTOR(int16_t, 8))(1L)), ((VECTOR(int16_t, 8))(0x7AF6L))))).hi, ((VECTOR(int16_t, 4))(0x7839L))))).odd)), 0x5241L)).zzwyzyxy, (int16_t)p_78))).s2) , p_78) & 0x18C2D4B0A3D4F46DL) | p_1074->g_201.f0) & l_297[0][5][6]))) , p_78)) || p_78))), p_1074->g_255.s0)), p_1074->g_254.x)) ^ (***p_1074->g_179)), (***l_222))), p_1074->g_124)) >= p_79)) || p_1074->g_255.sf))
            { /* block id: 116 */
                struct S0 **l_330 = &l_275;
                (*l_330) = l_329;
                p_80 = p_80;
            }
            else
            { /* block id: 119 */
                uint64_t *l_341 = (void*)0;
                int8_t l_354 = 0x2FL;
                int32_t l_355 = 4L;
                int32_t l_356 = 0x630CC213L;
                int32_t l_357 = 1L;
                int32_t l_358 = 0x5998B90FL;
                int32_t l_361 = 0x4B4F2838L;
                int64_t l_362 = 0x7054F3D1165F1610L;
                int32_t l_363 = 0L;
                int32_t l_366 = 2L;
                int32_t l_368[7];
                VECTOR(int16_t, 16) l_385 = (VECTOR(int16_t, 16))(0x0821L, (VECTOR(int16_t, 4))(0x0821L, (VECTOR(int16_t, 2))(0x0821L, (-1L)), (-1L)), (-1L), 0x0821L, (-1L), (VECTOR(int16_t, 2))(0x0821L, (-1L)), (VECTOR(int16_t, 2))(0x0821L, (-1L)), 0x0821L, (-1L), 0x0821L, (-1L));
                int8_t *l_398 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_368[i] = 0x461252B7L;
                (**p_1074->g_179) = p_80;
                if ((safe_div_func_uint64_t_u_u(0xF82201CC4F86ED9EL, ((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(0x5A0E8362BCB64288L, l_324[0][0])), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(0xA1F3812432F8949AL, 0xFAFEF3B15DECD937L, 18446744073709551610UL, 1UL)), ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(0x79BC4A577A698D87L, 0x2749E7CF89285C79L)).xxyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x66836590245AD9A4L, 0x4EE5FFFB8E56F12EL)))).yxxy, ((VECTOR(uint64_t, 8))(0x3BBAA280FF014CA6L, 0x68611746868B74DEL, 0xD6CFC311100D1537L, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0x44F86216416DD6A9L, p_1074->g_201.f0, 0x8DCCD0DA9D683EA0L, 5UL)))).hi))).zxywwwzzxzwwwzyx)).s8c, ((VECTOR(uint64_t, 8))((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((l_341 == (void*)0) , p_79), 5)), (safe_div_func_int16_t_s_s(((*l_322) = ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((~((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((p_78 && ((safe_rshift_func_int16_t_s_s(l_324[0][0], 11)) == p_1074->g_254.y)), ((VECTOR(uint16_t, 2))(65535UL)), 0xB692L)).wyywzwyxzyzzxxxy)).sd), p_78)), p_78)) == p_78)), p_1074->g_254.x)))), ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 2))(0x1588C48387506DF7L)), 18446744073709551615UL)).s11))).yxxx, ((VECTOR(uint64_t, 4))(18446744073709551606UL))))).y)) || p_78))))
                { /* block id: 122 */
                    int32_t *l_350 = &l_296[2][1][6];
                    int32_t *l_351 = &l_298[0][0][7];
                    int32_t *l_352 = (void*)0;
                    int32_t *l_353[10] = {&p_1074->g_3,&p_1074->g_3,&l_296[2][1][6],&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&p_1074->g_3,&l_296[2][1][6],&p_1074->g_3,&p_1074->g_3};
                    VECTOR(int16_t, 16) l_387 = (VECTOR(int16_t, 16))(0x2104L, (VECTOR(int16_t, 4))(0x2104L, (VECTOR(int16_t, 2))(0x2104L, 0x40DCL), 0x40DCL), 0x40DCL, 0x2104L, 0x40DCL, (VECTOR(int16_t, 2))(0x2104L, 0x40DCL), (VECTOR(int16_t, 2))(0x2104L, 0x40DCL), 0x2104L, 0x40DCL, 0x2104L, 0x40DCL);
                    int16_t *l_390 = &p_1074->g_323[0];
                    struct S0 *l_394 = &p_1074->g_131;
                    int i;
                    --l_369;
                    for (p_79 = 0; (p_79 != (-27)); p_79 = safe_sub_func_int16_t_s_s(p_79, 1))
                    { /* block id: 126 */
                        uint64_t l_379 = 0x1F066B903D57D102L;
                        int16_t **l_391[2];
                        struct S0 **l_395 = &l_394;
                        struct S0 *l_396 = &p_1074->g_131;
                        int8_t **l_397[8][9][3] = {{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}},{{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245},{&l_321,&l_321,&l_245}}};
                        int16_t l_399 = (-1L);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_391[i] = &l_390;
                        (*l_350) &= (0x54B7E3B86F41053FL && (((((!((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(p_1074->g_374.yx)).yyxyxxxy, ((VECTOR(int8_t, 8))(l_375.yyxxyyyx))))).even, ((VECTOR(int8_t, 4))(l_376.sc077))))).odd, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 2))((-6L), 1L)), (((-1L) ^ ((((+(((safe_sub_func_uint32_t_u_u((l_379 = ((*l_285) |= FAKE_DIVERGE(p_1074->group_0_offset, get_group_id(0), 10))), ((((l_398 = ((~(safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(p_1074->g_384.scb)).xyxxxxxy, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(l_385.s3c76cdb3)).s7475272046136137, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_386.zwzyxwzw)).s35, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_387.s71)).yxxy)).lo, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, p_1074->g_196.s0, ((void*)0 != l_341), (safe_lshift_func_uint16_t_u_u((((p_1074->g_393 = (l_392 = l_390)) == (void*)0) < ((p_1074->g_20 &= ((((*l_395) = l_394) == l_396) && (-8L))) == GROUP_DIVERGE(2, 1))), p_79)), ((VECTOR(int16_t, 4))(1L)), 0x2AD2L, ((VECTOR(int16_t, 2))((-9L))), ((VECTOR(int16_t, 4))(0x5F9BL)), (-8L))).se1)).xyyx)), (int16_t)(-2L), (int16_t)l_298[0][1][7]))).lo))).xxxxxxyx)).s4212070455034062))).even))).s2 || GROUP_DIVERGE(1, 1)), 0x631EL)), 3))) , (void*)0)) == &p_1074->g_244) & p_1074->g_384.s9) , l_399))) ^ 0xC3FE31F7L) > 7UL)) < (-1L)) | p_1074->g_286.s6) >= (*p_1074->g_147))) < p_1074->g_384.s3), 0x64L, 0x51L, 0L, 1L, p_1074->g_10, ((VECTOR(int8_t, 2))(0x38L)), 7L, ((VECTOR(int8_t, 4))(0L)))))).even)).s00))).yyyx)).y) || 0xCFL) , 0x36802E42L) < FAKE_DIVERGE(p_1074->local_2_offset, get_local_id(2), 10)) <= p_79));
                        return p_80;
                    }
                    (*l_275) = (*p_1074->g_203);
                    for (l_369 = 0; (l_369 == 16); l_369 = safe_add_func_uint16_t_u_u(l_369, 1))
                    { /* block id: 140 */
                        volatile uint32_t * volatile **l_405[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_405[i] = &p_1074->g_402;
                        l_406[6] = p_1074->g_402;
                    }
                }
                else
                { /* block id: 143 */
                    return &p_1074->g_124;
                }
                for (p_1074->g_246 = (-25); (p_1074->g_246 < (-19)); p_1074->g_246 = safe_add_func_uint64_t_u_u(p_1074->g_246, 9))
                { /* block id: 148 */
                    VECTOR(int32_t, 16) l_411 = (VECTOR(int32_t, 16))(0x79D6E5CBL, (VECTOR(int32_t, 4))(0x79D6E5CBL, (VECTOR(int32_t, 2))(0x79D6E5CBL, 2L), 2L), 2L, 0x79D6E5CBL, 2L, (VECTOR(int32_t, 2))(0x79D6E5CBL, 2L), (VECTOR(int32_t, 2))(0x79D6E5CBL, 2L), 0x79D6E5CBL, 2L, 0x79D6E5CBL, 2L);
                    int32_t ****l_416 = &p_1074->g_179;
                    int32_t *****l_415[2][1][6] = {{{&l_416,&l_416,&l_416,&l_416,&l_416,&l_416}},{{&l_416,&l_416,&l_416,&l_416,&l_416,&l_416}}};
                    int i, j, k;
                    (*l_275) = (*p_1074->g_203);
                    for (l_362 = (-16); (l_362 <= 13); ++l_362)
                    { /* block id: 152 */
                        (*p_1074->g_180) = (void*)0;
                    }
                    l_423 &= ((VECTOR(int32_t, 8))(0x11F6EC8FL, 0x43BF444CL, 0x73F8F12AL, (+(l_368[5] = (*l_111))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-1L), l_298[1][2][0], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(0x32ED02F6L, 0x44FF8A13L, (*p_80), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_411.s4a1d3c44)).lo, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_412.s27446406)).even, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_413.s42)).yyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1074->g_414.wwyy)), 0x1F3EDB57L, 0x07844BDDL, 0L, 1L)).s5257521362404513)).s89de, ((VECTOR(int32_t, 2))(0L, 0x429A6F87L)).xxxy)))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((l_417 = &p_1074->g_179) != l_418), ((*p_1074->g_393) <= (safe_sub_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(l_355, 0x78L)) ^ 65527UL) == 0x597BL), l_385.s0))), 0x3F364004L, 0x497B56AEL)).even, ((VECTOR(int32_t, 2))((-6L)))))))).xxyy)))))))).yzzyxyzx, ((VECTOR(int32_t, 8))(0x2EB4896CL))))), (*p_80), ((VECTOR(int32_t, 2))(0x20A448BCL)), 0x311F8E36L, 0x3BABEF61L)), (int32_t)0L))), ((VECTOR(int32_t, 16))(0x011FA065L))))).s88)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(9L)), (-5L), 0x7F797D1EL)).sac)))), 1L, 1L)).s6;
                }
            }
        }
        else
        { /* block id: 169 */
            (*l_275) = (*l_275);
            for (p_1074->g_246 = 0; (p_1074->g_246 > 14); p_1074->g_246++)
            { /* block id: 173 */
                for (p_1074->g_124 = 0; (p_1074->g_124 >= 24); ++p_1074->g_124)
                { /* block id: 176 */
                    if ((**p_1074->g_146))
                        break;
                }
                if ((atomic_inc(&p_1074->g_atomic_input[31 * get_linear_group_id() + 2]) == 1))
                { /* block id: 180 */
                    int32_t l_442 = (-1L);
                    uint32_t l_443 = 0UL;
                    int32_t l_477 = 0x39891532L;
                    uint64_t l_478[6][4][1] = {{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}},{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}},{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}},{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}},{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}},{{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL},{0x91BFC295E9FD5B7AL}}};
                    int i, j, k;
                    l_443 = l_442;
                    for (l_443 = 0; (l_443 < 37); l_443 = safe_add_func_int64_t_s_s(l_443, 9))
                    { /* block id: 184 */
                        VECTOR(int32_t, 16) l_446 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x072058FCL), 0x072058FCL), 0x072058FCL, (-2L), 0x072058FCL, (VECTOR(int32_t, 2))((-2L), 0x072058FCL), (VECTOR(int32_t, 2))((-2L), 0x072058FCL), (-2L), 0x072058FCL, (-2L), 0x072058FCL);
                        VECTOR(int32_t, 2) l_447 = (VECTOR(int32_t, 2))(1L, 0x281A3252L);
                        VECTOR(int32_t, 16) l_448 = (VECTOR(int32_t, 16))(0x20F4DF76L, (VECTOR(int32_t, 4))(0x20F4DF76L, (VECTOR(int32_t, 2))(0x20F4DF76L, (-4L)), (-4L)), (-4L), 0x20F4DF76L, (-4L), (VECTOR(int32_t, 2))(0x20F4DF76L, (-4L)), (VECTOR(int32_t, 2))(0x20F4DF76L, (-4L)), 0x20F4DF76L, (-4L), 0x20F4DF76L, (-4L));
                        uint32_t l_449 = 0xA9E48247L;
                        VECTOR(int32_t, 8) l_450 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x2795DC36L), 0x2795DC36L), 0x2795DC36L, 2L, 0x2795DC36L);
                        int32_t l_451 = 0x7943FBEEL;
                        uint8_t l_452 = 5UL;
                        uint16_t l_453[6];
                        int16_t l_454 = 0L;
                        uint8_t l_455[5][1];
                        int32_t l_456 = (-1L);
                        uint16_t l_457 = 0UL;
                        uint32_t l_458 = 0x9222E997L;
                        int32_t l_459[4];
                        int64_t l_460 = 2L;
                        uint32_t l_461[1][6][9] = {{{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L},{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L},{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L},{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L},{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L},{0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L,0x98AC6FD9L,1UL,0x98AC6FD9L}}};
                        VECTOR(uint64_t, 2) l_462 = (VECTOR(uint64_t, 2))(0x572AA9F080F72829L, 7UL);
                        uint32_t l_463[8][10][3];
                        uint32_t l_464 = 4294967287UL;
                        uint8_t l_465[2][6][5] = {{{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L}},{{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L},{0x00L,0x85L,0x77L,0x85L,0x00L}}};
                        uint64_t l_466 = 18446744073709551615UL;
                        int16_t l_467 = 1L;
                        int32_t l_468 = 0x6115A900L;
                        uint16_t l_469 = 1UL;
                        int32_t *l_472 = &l_451;
                        int32_t *l_473 = (void*)0;
                        int32_t *l_474 = &l_451;
                        int32_t *l_475 = (void*)0;
                        int32_t *l_476[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_453[i] = 2UL;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_455[i][j] = 253UL;
                        }
                        for (i = 0; i < 4; i++)
                            l_459[i] = 2L;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_463[i][j][k] = 0xB5360750L;
                            }
                        }
                        l_468 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_446.s5409)).odd, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_447.xyyxxxyx)).hi, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_448.se86c)).odd, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_449, 0x0A2C8914L, (-1L), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_450.s62)).yxxyxxyxyxyyxyyx, ((VECTOR(int32_t, 2))(0x5397FFECL, 0x0F36E411L)).xxyyxyxxyyxxyyyy))).se7e5, ((VECTOR(int32_t, 8))(0x2F8D975BL, (-1L), (-6L), l_451, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(2L, 5L)).yxxy, ((VECTOR(int32_t, 16))(0x6935DAC9L, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_452, l_453[4], (l_448.s3 = (l_456 = (l_454 , l_455[2][0]))), (l_457 = 1L), 0x494A053AL, (-5L), 0L, 7L)), (int32_t)l_458, (int32_t)l_459[2]))), l_460, l_461[0][2][6], l_462.y, l_463[7][9][2], ((VECTOR(int32_t, 2))(1L)), 1L)).s6a0b))))).lo))).odd, ((VECTOR(int32_t, 2))(3L)), ((VECTOR(int32_t, 2))((-1L)))))))), ((VECTOR(int32_t, 2))(2L))))).yxyyxyxx)).odd, ((VECTOR(int32_t, 4))(0x102F7C95L)), ((VECTOR(int32_t, 4))(1L))))), l_464, 0L, ((VECTOR(int32_t, 2))((-2L))), 0x54ECB039L, l_465[1][3][2], l_466, 0x1C387EBFL, 2L)).s8e, (int32_t)l_467))).xyyy, ((VECTOR(int32_t, 4))(0x21CF66F0L)), ((VECTOR(int32_t, 4))(0x5D503DBDL))))).odd))).yxyy))).lo))), 1L, 1L)).y;
                        --l_469;
                        l_473 = l_472;
                        l_476[0] = (l_475 = l_474);
                    }
                    l_478[2][0][0] = l_477;
                    unsigned int result = 0;
                    result += l_442;
                    result += l_443;
                    result += l_477;
                    int l_478_i0, l_478_i1, l_478_i2;
                    for (l_478_i0 = 0; l_478_i0 < 6; l_478_i0++) {
                        for (l_478_i1 = 0; l_478_i1 < 4; l_478_i1++) {
                            for (l_478_i2 = 0; l_478_i2 < 1; l_478_i2++) {
                                result += l_478[l_478_i0][l_478_i1][l_478_i2];
                            }
                        }
                    }
                    atomic_add(&p_1074->g_special_values[31 * get_linear_group_id() + 2], result);
                }
                else
                { /* block id: 195 */
                    (1 + 1);
                }
            }
        }
    }
    l_488++;
    for (p_1074->g_201.f0 = (-26); (p_1074->g_201.f0 <= 56); p_1074->g_201.f0++)
    { /* block id: 204 */
        uint64_t l_493 = 0x38F2AFBBDB9BF488L;
        int8_t **l_500 = &l_321;
        int32_t l_535 = 1L;
        int32_t l_537[5][2][6] = {{{(-2L),1L,1L,(-2L),(-2L),1L},{(-2L),1L,1L,(-2L),(-2L),1L}},{{(-2L),1L,1L,(-2L),(-2L),1L},{(-2L),1L,1L,(-2L),(-2L),1L}},{{(-2L),1L,1L,(-2L),(-2L),1L},{(-2L),1L,1L,(-2L),(-2L),1L}},{{(-2L),1L,1L,(-2L),(-2L),1L},{(-2L),1L,1L,(-2L),(-2L),1L}},{{(-2L),1L,1L,(-2L),(-2L),1L},{(-2L),1L,1L,(-2L),(-2L),1L}}};
        int8_t l_542 = 0L;
        struct S1 l_553 = {0x549A69D52B47C7D9L,1L};
        int32_t l_595 = 0x7685BBF0L;
        uint16_t l_607 = 1UL;
        volatile struct S0 *l_733 = &p_1074->g_209.f1;
        int i, j, k;
        (*l_482) = l_493;
        for (p_78 = 0; (p_78 > (-28)); p_78 = safe_sub_func_int8_t_s_s(p_78, 6))
        { /* block id: 208 */
            VECTOR(int32_t, 2) l_509 = (VECTOR(int32_t, 2))(0x7280F2F9L, (-1L));
            VECTOR(uint16_t, 4) l_518 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), 65533UL);
            VECTOR(uint64_t, 8) l_584 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x59BAB77918752275L), 0x59BAB77918752275L), 0x59BAB77918752275L, 18446744073709551615UL, 0x59BAB77918752275L);
            uint8_t *l_684 = (void*)0;
            uint8_t **l_683 = &l_684;
            VECTOR(int64_t, 8) l_729 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x1CFE02A41EC55D02L), 0x1CFE02A41EC55D02L), 0x1CFE02A41EC55D02L, 9L, 0x1CFE02A41EC55D02L);
            int i;
            for (p_79 = 0; (p_79 <= (-9)); p_79 = safe_sub_func_int8_t_s_s(p_79, 6))
            { /* block id: 211 */
                VECTOR(uint8_t, 2) l_501 = (VECTOR(uint8_t, 2))(2UL, 0UL);
                struct S1 l_505 = {0x504034AD46D9ADF2L,-1L};
                VECTOR(int32_t, 16) l_508 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
                int32_t *l_525[6] = {&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1],&l_365[1]};
                int32_t ****l_526 = &p_1074->g_169[0];
                int32_t l_541 = 0x5E629C70L;
                struct S0 **l_556 = &l_275;
                VECTOR(uint64_t, 2) l_585 = (VECTOR(uint64_t, 2))(0xBA3184D3C16DB48BL, 0xBCEC9A94A73912B8L);
                VECTOR(int32_t, 2) l_588 = (VECTOR(int32_t, 2))(0L, 0x46823153L);
                int i, j;
                if (((p_1074->g_498 != l_500) <= FAKE_DIVERGE(p_1074->group_2_offset, get_group_id(2), 10)))
                { /* block id: 212 */
                    uint64_t **l_506 = &p_1074->g_90;
                    VECTOR(int32_t, 2) l_507 = (VECTOR(int32_t, 2))(0x0D7BD507L, (-1L));
                    uint8_t *l_517[3][8][1] = {{{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20}},{{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20}},{{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20},{&p_1074->g_20}}};
                    struct S1 l_519 = {0xB417E938DF688850L,0x1DEBEAD4L};
                    int16_t **l_527 = (void*)0;
                    int16_t ***l_528 = &l_527;
                    int16_t **l_530[9] = {&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393,&p_1074->g_393};
                    int16_t ***l_529[1][10] = {{&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2],&l_530[2]}};
                    int64_t l_534 = 0x40ED329CFE9BBDC4L;
                    int i, j, k;
                    if (((((*p_80) == (&p_1074->g_323[2] == (void*)0)) && ((((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(l_501.yx)).xyxxxxxyyxxxxyyy, (uint8_t)((safe_lshift_func_int8_t_s_s((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_504.s32)).xyxxxxxxyyyyyyyx)).sb , (&l_493 == ((*l_506) = (l_505 , &l_120)))) > ((*l_480) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_507.xxyyyyyx)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-1L), 0L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_508.s5531d9a5d945fbfd)))).sa7, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_509.xxyy)))).even))), 4L, ((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(1L, (l_508.sb = (((~(p_1074->g_516 , p_1074->g_374.y)) , (void*)0) == (void*)0)))), l_493)), p_1074->g_384.s7)) , 0L), ((VECTOR(int32_t, 4))(1L)))).s7)) | 4294967286UL), p_1074->g_249)) > 1UL)))), ((VECTOR(uint8_t, 16))(0xCAL))))).s6 , 255UL) <= p_1074->g_comm_values[p_1074->tid])) && l_518.y))
                    { /* block id: 216 */
                        struct S1 *l_520 = &l_505;
                        (*l_520) = l_519;
                        (*p_1074->g_180) = (**l_222);
                    }
                    else
                    { /* block id: 219 */
                        (**p_1074->g_179) = ((safe_mul_func_uint16_t_u_u(0xD229L, (safe_rshift_func_int8_t_s_u(l_508.sd, 3)))) , l_525[4]);
                        (***p_1074->g_179) = (l_526 != (void*)0);
                        if (l_493)
                            continue;
                    }
                    if ((((*l_528) = l_527) == (l_532[2][3] = (l_531 = (void*)0))))
                    { /* block id: 227 */
                        int32_t l_533 = 1L;
                        int32_t l_536 = 2L;
                        int32_t l_538 = 0x2D045622L;
                        int32_t l_539[6][7][6] = {{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}},{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}},{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}},{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}},{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}},{{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L},{0x7C3124D1L,0x36A48517L,0L,1L,0x2FFF2979L,1L}}};
                        VECTOR(uint8_t, 4) l_544 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x5AL), 0x5AL);
                        int i, j, k;
                        (*l_481) = l_533;
                        l_544.x++;
                        (*l_481) = (safe_unary_minus_func_uint32_t_u((**p_1074->g_402)));
                        (**p_1074->g_179) = p_80;
                    }
                    else
                    { /* block id: 232 */
                        int16_t l_563 = 0L;
                        int32_t l_564 = 8L;
                        if ((*p_80))
                            break;
                        if ((*p_80))
                            break;
                        l_564 = (((((VECTOR(int8_t, 4))(0x0DL, ((*l_321) &= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((~(((VECTOR(int8_t, 16))(0x33L, (((((void*)0 != p_1074->g_552) , ((*l_291) = (l_553 , (*p_1074->g_227)))) != (void*)0) , (safe_div_func_int64_t_s_s((&l_275 != l_556), (safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(p_79, p_79)), l_563)) != l_507.x) , l_553.f1) < (*p_80)), 0))))), 0L, l_563, ((VECTOR(int8_t, 8))(0x04L)), (-3L), 0x48L, 0x06L, 0x6AL)).sc > p_1074->g_249)), p_78)), 4))), (-1L), 0x06L)).x , 1L) , (*p_80)) & l_518.x);
                        l_507.x = (l_509.x = (safe_rshift_func_uint16_t_u_u(p_79, (p_79 , (18446744073709551615UL <= (&l_505 != ((0x427C9F97L < ((void*)0 == &l_530[0])) , (p_1074->g_567 = (void*)0))))))));
                    }
                    if (l_553.f1)
                        continue;
                }
                else
                { /* block id: 243 */
                    int32_t l_570 = 0L;
                    uint8_t *l_575 = &p_1074->g_20;
                    (*l_482) = (*l_111);
                    (*l_482) ^= (((safe_lshift_func_uint16_t_u_s(l_518.y, l_570)) || FAKE_DIVERGE(p_1074->group_0_offset, get_group_id(0), 10)) > (safe_mod_func_int32_t_s_s(((*p_1074->g_203) , (p_78 || ((((*p_1074->g_403) && (safe_lshift_func_uint8_t_u_u(l_542, ((++(*l_575)) , (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_493, 10)) > ((*p_80) , 0x76E982ECL)), p_78)))))) | p_78) && 0x114E8238L))), l_537[1][1][2])));
                }
                (*p_1074->g_583) = p_1074->g_582;
                if ((*p_80))
                    break;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1074->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 140)), permutations[(safe_mod_func_uint32_t_u_u((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_584.s37)), ((VECTOR(uint64_t, 2))(l_585.xy)), 2UL, 18446744073709551606UL, 7UL, 0x7DACAA3E1A6CFC4AL)).s6 != p_79) , ((*l_480) , (safe_rshift_func_int8_t_s_u(0x4DL, (((*l_482) = ((VECTOR(int32_t, 2))(l_588.xx)).even) == (safe_div_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(p_79, l_509.y)) <= (safe_mul_func_int8_t_s_s(((l_595 & l_584.s2) | p_79), 0x0FL))) , p_1074->g_286.s5), l_509.y))))))) & p_1074->g_244), 10))][(safe_mod_func_uint32_t_u_u(p_1074->tid, 140))]));
            }
            --l_597;
            for (l_542 = 23; (l_542 > (-5)); l_542 = safe_sub_func_int16_t_s_s(l_542, 6))
            { /* block id: 258 */
                int16_t l_603 = 9L;
                int32_t l_604 = (-3L);
                int32_t l_605 = (-2L);
                uint64_t *l_685 = &p_1074->g_83;
                l_607++;
                if (l_603)
                    continue;
                if ((atomic_inc(&p_1074->g_atomic_input[31 * get_linear_group_id() + 24]) == 2))
                { /* block id: 262 */
                    int32_t l_610 = 0x7EF6B2BEL;
                    int8_t l_616[5][10] = {{1L,1L,9L,2L,0x05L,0x74L,0x6DL,(-7L),0x6DL,0x74L},{1L,1L,9L,2L,0x05L,0x74L,0x6DL,(-7L),0x6DL,0x74L},{1L,1L,9L,2L,0x05L,0x74L,0x6DL,(-7L),0x6DL,0x74L},{1L,1L,9L,2L,0x05L,0x74L,0x6DL,(-7L),0x6DL,0x74L},{1L,1L,9L,2L,0x05L,0x74L,0x6DL,(-7L),0x6DL,0x74L}};
                    VECTOR(int32_t, 16) l_617 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int32_t, 2))(1L, (-4L)), (VECTOR(int32_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L));
                    VECTOR(int32_t, 16) l_618 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 5L), 5L), 5L, (-4L), 5L, (VECTOR(int32_t, 2))((-4L), 5L), (VECTOR(int32_t, 2))((-4L), 5L), (-4L), 5L, (-4L), 5L);
                    int16_t l_619[9][6] = {{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L},{5L,5L,5L,5L,5L,5L}};
                    uint32_t l_620 = 1UL;
                    uint64_t l_621 = 1UL;
                    uint64_t l_622 = 0x39FB13EBBAAAC405L;
                    int32_t l_623 = 0x5A8ED019L;
                    VECTOR(int64_t, 8) l_624 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
                    VECTOR(int64_t, 4) l_625 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L));
                    struct S1 l_626 = {1UL,0x3EBECD92L};
                    int32_t l_627 = 0x32EF2A19L;
                    int64_t l_628 = 0x251A78063FF88AD8L;
                    int16_t l_629 = (-1L);
                    int64_t l_630 = 0x56F225DB90A2191EL;
                    int32_t l_631[6][9][4] = {{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}},{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}},{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}},{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}},{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}},{{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L},{(-10L),0x2B8C8038L,0x57363402L,0L}}};
                    uint32_t l_632 = 0UL;
                    int16_t l_633[9][8] = {{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L},{0L,(-1L),0x1CC7L,1L,0x1CC7L,(-1L),0L,0x48E7L}};
                    int8_t l_634 = 0x09L;
                    uint32_t l_662 = 0UL;
                    int32_t l_663 = 1L;
                    int i, j, k;
                    for (l_610 = 28; (l_610 != 27); l_610--)
                    { /* block id: 265 */
                        int32_t l_614 = 0x541028A9L;
                        int32_t *l_613[2];
                        int32_t *l_615 = &l_614;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_613[i] = &l_614;
                        l_615 = l_613[1];
                    }
                    if ((l_616[1][8] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_617.s4e)), 0x616EAA07L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))((-7L), 0x164DF391L)).xyxx, ((VECTOR(int32_t, 2))(l_618.s0f)).yyxy))), 0x4BB6B103L, 8L, (-1L), 0x47B7FB25L)).s4, 0x6C5FBC89L, 1L, l_619[6][5], ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), 8L, 0x79B6A857L, 0L)), (-10L), (((l_621 = l_620) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((-1L), 7L, ((VECTOR(int64_t, 2))(0x4DFDBDDD910F94CFL, (-1L))), (l_623 = l_622), ((VECTOR(int64_t, 2))(0x0A908C76C9AB7208L, (-10L))), ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(l_624.s1570)).ywzxwzwwxyyyxzyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x40612EF59F953B9FL, ((VECTOR(int64_t, 2))(l_625.wz)), (l_630 = (l_626 , (FAKE_DIVERGE(p_1074->local_2_offset, get_local_id(2), 10) , (((l_628 |= l_627) , l_629) , 0x0676541F99A1A179L)))), l_631[4][4][2], 0x11B1EF365C1CB233L, (-1L), 0x43DB89E35F466C72L)))), l_632, ((VECTOR(int64_t, 2))(0x37795B08989FE35AL)), ((VECTOR(int64_t, 2))(1L)), l_633[4][7], 7L, 0x37F443D8E0E4F659L)), ((VECTOR(int64_t, 16))((-1L)))))).s4d, ((VECTOR(int64_t, 2))(0x4E8E72B196FBD84CL))))), 5L, 1L)).even, ((VECTOR(int64_t, 2))(0x3B26EE5F22933457L))))).yxxx)).odd)).yyyxyyxxxyxxxxxx, ((VECTOR(int64_t, 16))(0x3CF7E4FF816EED5BL))))).s2, 0x3F8744FCA3098356L, 1L, ((VECTOR(int64_t, 4))(0L)), 1L, (-2L))).sd43f)).w) , l_634), (-3L), (-1L)))))), 7L)).s9))
                    { /* block id: 272 */
                        int32_t *l_635 = (void*)0;
                        int32_t l_637 = 5L;
                        int32_t *l_636 = &l_637;
                        int32_t *l_638 = &l_637;
                        int32_t *l_639 = (void*)0;
                        VECTOR(uint32_t, 2) l_640 = (VECTOR(uint32_t, 2))(0x23940474L, 0x4DF75768L);
                        int32_t l_641 = 0x3477433FL;
                        VECTOR(uint32_t, 4) l_642 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 3UL), 3UL);
                        VECTOR(uint32_t, 2) l_643 = (VECTOR(uint32_t, 2))(0xF7C2F50BL, 0x9D5B2BA4L);
                        int64_t l_644[8] = {0x4D1BD9D96644B6AFL,1L,0x4D1BD9D96644B6AFL,0x4D1BD9D96644B6AFL,1L,0x4D1BD9D96644B6AFL,0x4D1BD9D96644B6AFL,1L};
                        VECTOR(uint32_t, 4) l_645 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
                        VECTOR(uint32_t, 4) l_646 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x6AA5B6E7L), 0x6AA5B6E7L);
                        uint16_t l_647 = 0UL;
                        int32_t l_648 = 2L;
                        int32_t l_649 = (-1L);
                        int64_t l_650 = (-1L);
                        int32_t l_651 = 0x465C4087L;
                        uint32_t l_652[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                        int i;
                        l_638 = (l_636 = l_635);
                        l_638 = l_639;
                        l_618.se = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(l_640.yx)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x39FF345CL, 1UL)).yxyxxyxx)).s32))), 4294967291UL, FAKE_DIVERGE(p_1074->local_1_offset, get_local_id(1), 10), 4294967295UL, l_641, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(4294967295UL, 0x1BBE5A32L)), ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(l_642.zywzxzzx)).s2171361400537241, ((VECTOR(uint32_t, 8))(l_643.yyyxyyyx)).s0135774325536153))).se1, ((VECTOR(uint32_t, 4))(7UL, l_644[4], 4294967295UL, 0xCC5B25A3L)).even))).xyyx, ((VECTOR(uint32_t, 2))(l_645.xw)).yyyx))).hi)).odd, 0xD70BC0B2L, 4294967291UL, FAKE_DIVERGE(p_1074->group_1_offset, get_group_id(1), 10), ((VECTOR(uint32_t, 2))(l_646.yz)), 4294967290UL, 4294967293UL, 4294967295UL, 0x40AC0DB4L)).sa , l_647);
                        l_652[1]++;
                    }
                    else
                    { /* block id: 278 */
                        int8_t l_655 = (-5L);
                        uint32_t l_656 = 2UL;
                        uint32_t l_659 = 1UL;
                        l_631[4][8][1] &= l_655;
                        l_610 ^= (l_631[2][8][1] = (l_618.s5 = (-1L)));
                        l_656++;
                        --l_659;
                    }
                    l_617.s1 |= (l_662 , l_663);
                    unsigned int result = 0;
                    result += l_610;
                    int l_616_i0, l_616_i1;
                    for (l_616_i0 = 0; l_616_i0 < 5; l_616_i0++) {
                        for (l_616_i1 = 0; l_616_i1 < 10; l_616_i1++) {
                            result += l_616[l_616_i0][l_616_i1];
                        }
                    }
                    result += l_617.sf;
                    result += l_617.se;
                    result += l_617.sd;
                    result += l_617.sc;
                    result += l_617.sb;
                    result += l_617.sa;
                    result += l_617.s9;
                    result += l_617.s8;
                    result += l_617.s7;
                    result += l_617.s6;
                    result += l_617.s5;
                    result += l_617.s4;
                    result += l_617.s3;
                    result += l_617.s2;
                    result += l_617.s1;
                    result += l_617.s0;
                    result += l_618.sf;
                    result += l_618.se;
                    result += l_618.sd;
                    result += l_618.sc;
                    result += l_618.sb;
                    result += l_618.sa;
                    result += l_618.s9;
                    result += l_618.s8;
                    result += l_618.s7;
                    result += l_618.s6;
                    result += l_618.s5;
                    result += l_618.s4;
                    result += l_618.s3;
                    result += l_618.s2;
                    result += l_618.s1;
                    result += l_618.s0;
                    int l_619_i0, l_619_i1;
                    for (l_619_i0 = 0; l_619_i0 < 9; l_619_i0++) {
                        for (l_619_i1 = 0; l_619_i1 < 6; l_619_i1++) {
                            result += l_619[l_619_i0][l_619_i1];
                        }
                    }
                    result += l_620;
                    result += l_621;
                    result += l_622;
                    result += l_623;
                    result += l_624.s7;
                    result += l_624.s6;
                    result += l_624.s5;
                    result += l_624.s4;
                    result += l_624.s3;
                    result += l_624.s2;
                    result += l_624.s1;
                    result += l_624.s0;
                    result += l_625.w;
                    result += l_625.z;
                    result += l_625.y;
                    result += l_625.x;
                    result += l_626.f0;
                    result += l_626.f1;
                    result += l_627;
                    result += l_628;
                    result += l_629;
                    result += l_630;
                    int l_631_i0, l_631_i1, l_631_i2;
                    for (l_631_i0 = 0; l_631_i0 < 6; l_631_i0++) {
                        for (l_631_i1 = 0; l_631_i1 < 9; l_631_i1++) {
                            for (l_631_i2 = 0; l_631_i2 < 4; l_631_i2++) {
                                result += l_631[l_631_i0][l_631_i1][l_631_i2];
                            }
                        }
                    }
                    result += l_632;
                    int l_633_i0, l_633_i1;
                    for (l_633_i0 = 0; l_633_i0 < 9; l_633_i0++) {
                        for (l_633_i1 = 0; l_633_i1 < 8; l_633_i1++) {
                            result += l_633[l_633_i0][l_633_i1];
                        }
                    }
                    result += l_634;
                    result += l_662;
                    result += l_663;
                    atomic_add(&p_1074->g_special_values[31 * get_linear_group_id() + 24], result);
                }
                else
                { /* block id: 287 */
                    (1 + 1);
                }
                if (((safe_mul_func_uint8_t_u_u(((**p_1074->g_227) , (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((p_1074->g_670 , (safe_mul_func_uint8_t_u_u(1UL, (safe_mod_func_int32_t_s_s(((*l_111) < (safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((*l_685) = (8L > (GROUP_DIVERGE(1, 1) < (p_1074->g_680 , (safe_add_func_uint8_t_u_u((l_683 != (void*)0), (l_518.y != l_509.y))))))), 18446744073709551615UL)), p_79))))), p_1074->g_9))))), p_79)), 0))), l_542)) | (-1L)))
                { /* block id: 291 */
                    if ((atomic_inc(&p_1074->g_atomic_input[31 * get_linear_group_id() + 8]) == 5))
                    { /* block id: 293 */
                        int32_t l_687 = 0L;
                        int32_t *l_686 = &l_687;
                        int16_t l_688 = 0x4B71L;
                        uint32_t l_689 = 0xCDDB09D5L;
                        uint32_t l_692 = 0x78787838L;
                        VECTOR(int32_t, 2) l_693 = (VECTOR(int32_t, 2))(0x5F4E1525L, (-1L));
                        int32_t l_694[4][9][7] = {{{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L}},{{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L}},{{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L}},{{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L},{0x630AE7CCL,(-9L),(-5L),0x53A244A3L,0x62D48DE3L,9L,0L}}};
                        VECTOR(uint16_t, 2) l_695 = (VECTOR(uint16_t, 2))(0xD338L, 0xD6DCL);
                        int8_t l_696 = 9L;
                        int16_t l_697 = 0x0508L;
                        VECTOR(int64_t, 16) l_698 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x1B2584A838A01F0BL), 0x1B2584A838A01F0BL), 0x1B2584A838A01F0BL, 0L, 0x1B2584A838A01F0BL, (VECTOR(int64_t, 2))(0L, 0x1B2584A838A01F0BL), (VECTOR(int64_t, 2))(0L, 0x1B2584A838A01F0BL), 0L, 0x1B2584A838A01F0BL, 0L, 0x1B2584A838A01F0BL);
                        VECTOR(int64_t, 4) l_699 = (VECTOR(int64_t, 4))(0x59538D9B606BEDE2L, (VECTOR(int64_t, 2))(0x59538D9B606BEDE2L, 0x291AD56C19AEFB42L), 0x291AD56C19AEFB42L);
                        VECTOR(int8_t, 8) l_700 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int32_t l_701 = (-8L);
                        VECTOR(int8_t, 2) l_702 = (VECTOR(int8_t, 2))(0x4CL, (-1L));
                        int64_t l_703 = 0L;
                        int32_t l_704 = 7L;
                        VECTOR(int8_t, 2) l_705 = (VECTOR(int8_t, 2))(0x3EL, 0L);
                        VECTOR(int8_t, 4) l_706 = (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, 0x3CL), 0x3CL);
                        VECTOR(int8_t, 2) l_707 = (VECTOR(int8_t, 2))(0x45L, (-1L));
                        int64_t l_708 = 0x245739BDE66DA250L;
                        VECTOR(int8_t, 4) l_709 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
                        int32_t l_710 = 5L;
                        int8_t l_711[1][2];
                        struct S0 l_712 = {0x2089184CE0D76432L};/* VOLATILE GLOBAL l_712 */
                        int16_t l_713 = 1L;
                        uint64_t l_714 = 0xFFCEB73390A669A6L;
                        int64_t l_715 = (-4L);
                        int32_t l_716 = 0x5626D0D5L;
                        int16_t l_717 = 0L;
                        uint8_t l_718 = 0x87L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_711[i][j] = 0x74L;
                        }
                        l_686 = (void*)0;
                        l_689--;
                        l_716 = (l_715 = (l_714 |= ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 16))(l_692, ((VECTOR(int32_t, 2))(l_693.xx)), (-1L), ((VECTOR(int32_t, 2))(0x5EC91DE3L, 0x71699226L)), 0x20AD01FDL, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(1L, 0x6EED7BD1L, 1L, 0x08353940L, (-7L), (GROUP_DIVERGE(0, 1) , ((l_694[0][2][1] , (((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_695.xyxxyyyxxyyxxyyx)).lo)).s6057556225655070)).s0d97))).z , l_696)) , ((l_697 , (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_698.sf5)).yyxx)).even)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(9L, 1L)).xxyx)).z, (-1L), (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_699.wyzz)).odd)), 7L)).s1 , ((l_707.y = ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(l_700.s72)).yxyyxyxx, ((VECTOR(int8_t, 16))((-5L), (l_704 &= (l_701 , (l_703 |= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_702.yy)))).hi))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_705.yxxyxyxyxxxyxxxy)).sc4)).yxyx))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_706.wy)).yyyy))))).lo)).lo, 0x73L, 0x0FL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_707.yxxxyxyy)).s43)), l_708, 0x2AL, ((VECTOR(int8_t, 2))(l_709.zz)).even, ((VECTOR(int8_t, 2))(0x35L, (-9L))), ((VECTOR(int8_t, 2))(5L, 0x3DL)), (-5L), 0x4AL)).hi))).s0) , ((l_710 , l_711[0][0]) , l_712)))) , l_713))), 0x6E61991BL, 0x40D26CA1L)), ((VECTOR(int32_t, 8))((-5L)))))), 1L)).s5, (-1L), 0L)).z));
                        l_718++;
                        unsigned int result = 0;
                        result += l_687;
                        result += l_688;
                        result += l_689;
                        result += l_692;
                        result += l_693.y;
                        result += l_693.x;
                        int l_694_i0, l_694_i1, l_694_i2;
                        for (l_694_i0 = 0; l_694_i0 < 4; l_694_i0++) {
                            for (l_694_i1 = 0; l_694_i1 < 9; l_694_i1++) {
                                for (l_694_i2 = 0; l_694_i2 < 7; l_694_i2++) {
                                    result += l_694[l_694_i0][l_694_i1][l_694_i2];
                                }
                            }
                        }
                        result += l_695.y;
                        result += l_695.x;
                        result += l_696;
                        result += l_697;
                        result += l_698.sf;
                        result += l_698.se;
                        result += l_698.sd;
                        result += l_698.sc;
                        result += l_698.sb;
                        result += l_698.sa;
                        result += l_698.s9;
                        result += l_698.s8;
                        result += l_698.s7;
                        result += l_698.s6;
                        result += l_698.s5;
                        result += l_698.s4;
                        result += l_698.s3;
                        result += l_698.s2;
                        result += l_698.s1;
                        result += l_698.s0;
                        result += l_699.w;
                        result += l_699.z;
                        result += l_699.y;
                        result += l_699.x;
                        result += l_700.s7;
                        result += l_700.s6;
                        result += l_700.s5;
                        result += l_700.s4;
                        result += l_700.s3;
                        result += l_700.s2;
                        result += l_700.s1;
                        result += l_700.s0;
                        result += l_701;
                        result += l_702.y;
                        result += l_702.x;
                        result += l_703;
                        result += l_704;
                        result += l_705.y;
                        result += l_705.x;
                        result += l_706.w;
                        result += l_706.z;
                        result += l_706.y;
                        result += l_706.x;
                        result += l_707.y;
                        result += l_707.x;
                        result += l_708;
                        result += l_709.w;
                        result += l_709.z;
                        result += l_709.y;
                        result += l_709.x;
                        result += l_710;
                        int l_711_i0, l_711_i1;
                        for (l_711_i0 = 0; l_711_i0 < 1; l_711_i0++) {
                            for (l_711_i1 = 0; l_711_i1 < 2; l_711_i1++) {
                                result += l_711[l_711_i0][l_711_i1];
                            }
                        }
                        result += l_712.f0;
                        result += l_713;
                        result += l_714;
                        result += l_715;
                        result += l_716;
                        result += l_717;
                        result += l_718;
                        atomic_add(&p_1074->g_special_values[31 * get_linear_group_id() + 8], result);
                    }
                    else
                    { /* block id: 303 */
                        (1 + 1);
                    }
                    for (p_1074->g_431 = 0; (p_1074->g_431 <= 14); ++p_1074->g_431)
                    { /* block id: 308 */
                        return p_80;
                    }
                    for (p_1074->g_20 = 0; (p_1074->g_20 >= 27); ++p_1074->g_20)
                    { /* block id: 313 */
                        if ((*p_80))
                            break;
                        if ((*p_80))
                            continue;
                    }
                }
                else
                { /* block id: 317 */
                    (*l_291) = (*p_1074->g_227);
                }
            }
            (*l_481) &= (((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))((l_537[3][1][3] = (safe_div_func_uint64_t_u_u(18446744073709551615UL, ((*l_482) = l_493)))), ((l_537[1][1][2] = GROUP_DIVERGE(0, 1)) , l_595), ((**p_1074->g_402) & p_78), 0x448A47EEAB21AD62L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_729.s75)))), (-1L), 0x3C7FADB2F171EFB5L)).s6411377576614767, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x5BF84AA93220A60EL, 0x745F23F5DF3C0F9EL)))), (-9L), ((VECTOR(int64_t, 2))(0x06D9808DC0EE6338L, 0x149F7D43E3B4391CL)), (((l_730 == (p_1074->g_374.x , &l_731)) || p_1074->g_220.s9) , (-1L)), 0x1D4E8BA649C8C8CDL, 0x0E233AED5338856CL)).s3446415360033214)).s22)).xxyyyxxyyxyyxxxx))).s5, 0x5DF51014F12B2FAFL)), 0x6DL, 0x7DL, 0x43L)).even, ((VECTOR(uint8_t, 2))(0xC1L)), ((VECTOR(uint8_t, 2))(255UL))))).odd, 1UL, 4UL, 255UL)).zwwxwwwy))).s00, ((VECTOR(uint8_t, 2))(0x09L))))).even >= 0x0EL);
        }
        (*l_733) = p_1074->g_732[3][0];
    }
    return &p_1074->g_431;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_85(int32_t * p_86, int32_t  p_87, uint64_t * p_88, uint64_t * p_89, struct S3 * p_1074)
{ /* block id: 32 */
    return p_87;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[31];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 31; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[31];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 31; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[140];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 140; i++)
            l_comm_values[i] = 1;
    struct S3 c_1075;
    struct S3* p_1074 = &c_1075;
    struct S3 c_1076 = {
        0x7C8748AFL, // p_1074->g_3
        0x05B8B78AL, // p_1074->g_9
        1UL, // p_1074->g_10
        0xC3L, // p_1074->g_20
        4294967295UL, // p_1074->g_49
        0xAF1BECDE87198B9DL, // p_1074->g_83
        (void*)0, // p_1074->g_90
        0x6E2B7B1BL, // p_1074->g_124
        {0x03BC58EBAA32B3D1L}, // p_1074->g_131
        (void*)0, // p_1074->g_142
        &p_1074->g_3, // p_1074->g_147
        &p_1074->g_147, // p_1074->g_146
        &p_1074->g_147, // p_1074->g_150
        {(void*)0}, // p_1074->g_169
        &p_1074->g_147, // p_1074->g_180
        &p_1074->g_180, // p_1074->g_179
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_1074->g_196
        {1UL}, // p_1074->g_201
        {0L}, // p_1074->g_202
        &p_1074->g_202, // p_1074->g_203
        {1UL}, // p_1074->g_209
        (VECTOR(int16_t, 16))(0x4F7CL, (VECTOR(int16_t, 4))(0x4F7CL, (VECTOR(int16_t, 2))(0x4F7CL, 3L), 3L), 3L, 0x4F7CL, 3L, (VECTOR(int16_t, 2))(0x4F7CL, 3L), (VECTOR(int16_t, 2))(0x4F7CL, 3L), 0x4F7CL, 3L, 0x4F7CL, 3L), // p_1074->g_220
        &p_1074->g_201, // p_1074->g_228
        &p_1074->g_228, // p_1074->g_227
        1L, // p_1074->g_244
        6L, // p_1074->g_246
        1UL, // p_1074->g_249
        (VECTOR(uint64_t, 4))(0x724B2F69E9B9EE40L, (VECTOR(uint64_t, 2))(0x724B2F69E9B9EE40L, 0UL), 0UL), // p_1074->g_252
        (VECTOR(uint32_t, 2))(0UL, 0x5A71976BL), // p_1074->g_254
        (VECTOR(uint32_t, 16))(0x345E9BEFL, (VECTOR(uint32_t, 4))(0x345E9BEFL, (VECTOR(uint32_t, 2))(0x345E9BEFL, 1UL), 1UL), 1UL, 0x345E9BEFL, 1UL, (VECTOR(uint32_t, 2))(0x345E9BEFL, 1UL), (VECTOR(uint32_t, 2))(0x345E9BEFL, 1UL), 0x345E9BEFL, 1UL, 0x345E9BEFL, 1UL), // p_1074->g_255
        (VECTOR(int8_t, 8))(0x01L, (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, (-8L)), (-8L)), (-8L), 0x01L, (-8L)), // p_1074->g_286
        {0x37B5L,0x37B5L,0x37B5L}, // p_1074->g_323
        (VECTOR(int8_t, 2))((-1L), 1L), // p_1074->g_374
        (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int16_t, 2))((-9L), 1L), (VECTOR(int16_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L), // p_1074->g_384
        &p_1074->g_323[2], // p_1074->g_393
        0xE0C3B85EL, // p_1074->g_404
        &p_1074->g_404, // p_1074->g_403
        &p_1074->g_403, // p_1074->g_402
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), // p_1074->g_414
        0x1C2DF61CL, // p_1074->g_431
        {1UL,1UL,1UL,1UL}, // p_1074->g_434
        (void*)0, // p_1074->g_499
        &p_1074->g_499, // p_1074->g_498
        {0xAEA9904AC5167DC5L,-9L}, // p_1074->g_516
        (-1L), // p_1074->g_543
        (void*)0, // p_1074->g_552
        &p_1074->g_516, // p_1074->g_567
        {0x0602F0CBED822E13L}, // p_1074->g_582
        &p_1074->g_131, // p_1074->g_583
        0x1BDAAB9709823EA1L, // p_1074->g_596
        {9L}, // p_1074->g_670
        {0x58754313A96E1643L}, // p_1074->g_680
        {{{-9L},{4L},{0x4B05B1DB65893FF3L},{4L},{-9L},{-9L},{4L},{0x4B05B1DB65893FF3L}},{{-9L},{4L},{0x4B05B1DB65893FF3L},{4L},{-9L},{-9L},{4L},{0x4B05B1DB65893FF3L}},{{-9L},{4L},{0x4B05B1DB65893FF3L},{4L},{-9L},{-9L},{4L},{0x4B05B1DB65893FF3L}},{{-9L},{4L},{0x4B05B1DB65893FF3L},{4L},{-9L},{-9L},{4L},{0x4B05B1DB65893FF3L}},{{-9L},{4L},{0x4B05B1DB65893FF3L},{4L},{-9L},{-9L},{4L},{0x4B05B1DB65893FF3L}}}, // p_1074->g_732
        {{{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L}},{{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L}},{{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L}},{{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L},{5L,5L}}}, // p_1074->g_774
        0L, // p_1074->g_776
        0L, // p_1074->g_777
        249UL, // p_1074->g_779
        (VECTOR(int32_t, 2))(0L, 0x70391B4BL), // p_1074->g_784
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_1074->g_791
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x34A4L), 0x34A4L), 0x34A4L, 1L, 0x34A4L), // p_1074->g_793
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1CCC8B061A58E6A7L), 0x1CCC8B061A58E6A7L), 0x1CCC8B061A58E6A7L, (-1L), 0x1CCC8B061A58E6A7L), // p_1074->g_795
        (void*)0, // p_1074->g_803
        (VECTOR(uint16_t, 8))(0x1F86L, (VECTOR(uint16_t, 4))(0x1F86L, (VECTOR(uint16_t, 2))(0x1F86L, 0x1E41L), 0x1E41L), 0x1E41L, 0x1F86L, 0x1E41L), // p_1074->g_836
        (VECTOR(int32_t, 16))(0x7BD479A5L, (VECTOR(int32_t, 4))(0x7BD479A5L, (VECTOR(int32_t, 2))(0x7BD479A5L, 0x7A553450L), 0x7A553450L), 0x7A553450L, 0x7BD479A5L, 0x7A553450L, (VECTOR(int32_t, 2))(0x7BD479A5L, 0x7A553450L), (VECTOR(int32_t, 2))(0x7BD479A5L, 0x7A553450L), 0x7BD479A5L, 0x7A553450L, 0x7BD479A5L, 0x7A553450L), // p_1074->g_999
        (void*)0, // p_1074->g_1001
        (VECTOR(uint16_t, 16))(0x4ECBL, (VECTOR(uint16_t, 4))(0x4ECBL, (VECTOR(uint16_t, 2))(0x4ECBL, 1UL), 1UL), 1UL, 0x4ECBL, 1UL, (VECTOR(uint16_t, 2))(0x4ECBL, 1UL), (VECTOR(uint16_t, 2))(0x4ECBL, 1UL), 0x4ECBL, 1UL, 0x4ECBL, 1UL), // p_1074->g_1027
        0x0F3F0DE7L, // p_1074->g_1028
        &p_1074->g_516.f0, // p_1074->g_1045
        (VECTOR(int64_t, 4))(0x716521E896E3D2BFL, (VECTOR(int64_t, 2))(0x716521E896E3D2BFL, 0L), 0L), // p_1074->g_1064
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC9232842L), 0xC9232842L), // p_1074->g_1069
        (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967290UL), 4294967290UL), // p_1074->g_1072
        0, // p_1074->v_collective
        sequence_input[get_global_id(0)], // p_1074->global_0_offset
        sequence_input[get_global_id(1)], // p_1074->global_1_offset
        sequence_input[get_global_id(2)], // p_1074->global_2_offset
        sequence_input[get_local_id(0)], // p_1074->local_0_offset
        sequence_input[get_local_id(1)], // p_1074->local_1_offset
        sequence_input[get_local_id(2)], // p_1074->local_2_offset
        sequence_input[get_group_id(0)], // p_1074->group_0_offset
        sequence_input[get_group_id(1)], // p_1074->group_1_offset
        sequence_input[get_group_id(2)], // p_1074->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 140)), permutations[0][get_linear_local_id()])), // p_1074->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1075 = c_1076;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1074);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1074->g_3, "p_1074->g_3", print_hash_value);
    transparent_crc(p_1074->g_9, "p_1074->g_9", print_hash_value);
    transparent_crc(p_1074->g_10, "p_1074->g_10", print_hash_value);
    transparent_crc(p_1074->g_20, "p_1074->g_20", print_hash_value);
    transparent_crc(p_1074->g_49, "p_1074->g_49", print_hash_value);
    transparent_crc(p_1074->g_83, "p_1074->g_83", print_hash_value);
    transparent_crc(p_1074->g_124, "p_1074->g_124", print_hash_value);
    transparent_crc(p_1074->g_131.f0, "p_1074->g_131.f0", print_hash_value);
    transparent_crc(p_1074->g_196.s0, "p_1074->g_196.s0", print_hash_value);
    transparent_crc(p_1074->g_196.s1, "p_1074->g_196.s1", print_hash_value);
    transparent_crc(p_1074->g_196.s2, "p_1074->g_196.s2", print_hash_value);
    transparent_crc(p_1074->g_196.s3, "p_1074->g_196.s3", print_hash_value);
    transparent_crc(p_1074->g_196.s4, "p_1074->g_196.s4", print_hash_value);
    transparent_crc(p_1074->g_196.s5, "p_1074->g_196.s5", print_hash_value);
    transparent_crc(p_1074->g_196.s6, "p_1074->g_196.s6", print_hash_value);
    transparent_crc(p_1074->g_196.s7, "p_1074->g_196.s7", print_hash_value);
    transparent_crc(p_1074->g_196.s8, "p_1074->g_196.s8", print_hash_value);
    transparent_crc(p_1074->g_196.s9, "p_1074->g_196.s9", print_hash_value);
    transparent_crc(p_1074->g_196.sa, "p_1074->g_196.sa", print_hash_value);
    transparent_crc(p_1074->g_196.sb, "p_1074->g_196.sb", print_hash_value);
    transparent_crc(p_1074->g_196.sc, "p_1074->g_196.sc", print_hash_value);
    transparent_crc(p_1074->g_196.sd, "p_1074->g_196.sd", print_hash_value);
    transparent_crc(p_1074->g_196.se, "p_1074->g_196.se", print_hash_value);
    transparent_crc(p_1074->g_196.sf, "p_1074->g_196.sf", print_hash_value);
    transparent_crc(p_1074->g_201.f0, "p_1074->g_201.f0", print_hash_value);
    transparent_crc(p_1074->g_202.f0, "p_1074->g_202.f0", print_hash_value);
    transparent_crc(p_1074->g_209.f0, "p_1074->g_209.f0", print_hash_value);
    transparent_crc(p_1074->g_220.s0, "p_1074->g_220.s0", print_hash_value);
    transparent_crc(p_1074->g_220.s1, "p_1074->g_220.s1", print_hash_value);
    transparent_crc(p_1074->g_220.s2, "p_1074->g_220.s2", print_hash_value);
    transparent_crc(p_1074->g_220.s3, "p_1074->g_220.s3", print_hash_value);
    transparent_crc(p_1074->g_220.s4, "p_1074->g_220.s4", print_hash_value);
    transparent_crc(p_1074->g_220.s5, "p_1074->g_220.s5", print_hash_value);
    transparent_crc(p_1074->g_220.s6, "p_1074->g_220.s6", print_hash_value);
    transparent_crc(p_1074->g_220.s7, "p_1074->g_220.s7", print_hash_value);
    transparent_crc(p_1074->g_220.s8, "p_1074->g_220.s8", print_hash_value);
    transparent_crc(p_1074->g_220.s9, "p_1074->g_220.s9", print_hash_value);
    transparent_crc(p_1074->g_220.sa, "p_1074->g_220.sa", print_hash_value);
    transparent_crc(p_1074->g_220.sb, "p_1074->g_220.sb", print_hash_value);
    transparent_crc(p_1074->g_220.sc, "p_1074->g_220.sc", print_hash_value);
    transparent_crc(p_1074->g_220.sd, "p_1074->g_220.sd", print_hash_value);
    transparent_crc(p_1074->g_220.se, "p_1074->g_220.se", print_hash_value);
    transparent_crc(p_1074->g_220.sf, "p_1074->g_220.sf", print_hash_value);
    transparent_crc(p_1074->g_244, "p_1074->g_244", print_hash_value);
    transparent_crc(p_1074->g_246, "p_1074->g_246", print_hash_value);
    transparent_crc(p_1074->g_249, "p_1074->g_249", print_hash_value);
    transparent_crc(p_1074->g_252.x, "p_1074->g_252.x", print_hash_value);
    transparent_crc(p_1074->g_252.y, "p_1074->g_252.y", print_hash_value);
    transparent_crc(p_1074->g_252.z, "p_1074->g_252.z", print_hash_value);
    transparent_crc(p_1074->g_252.w, "p_1074->g_252.w", print_hash_value);
    transparent_crc(p_1074->g_254.x, "p_1074->g_254.x", print_hash_value);
    transparent_crc(p_1074->g_254.y, "p_1074->g_254.y", print_hash_value);
    transparent_crc(p_1074->g_255.s0, "p_1074->g_255.s0", print_hash_value);
    transparent_crc(p_1074->g_255.s1, "p_1074->g_255.s1", print_hash_value);
    transparent_crc(p_1074->g_255.s2, "p_1074->g_255.s2", print_hash_value);
    transparent_crc(p_1074->g_255.s3, "p_1074->g_255.s3", print_hash_value);
    transparent_crc(p_1074->g_255.s4, "p_1074->g_255.s4", print_hash_value);
    transparent_crc(p_1074->g_255.s5, "p_1074->g_255.s5", print_hash_value);
    transparent_crc(p_1074->g_255.s6, "p_1074->g_255.s6", print_hash_value);
    transparent_crc(p_1074->g_255.s7, "p_1074->g_255.s7", print_hash_value);
    transparent_crc(p_1074->g_255.s8, "p_1074->g_255.s8", print_hash_value);
    transparent_crc(p_1074->g_255.s9, "p_1074->g_255.s9", print_hash_value);
    transparent_crc(p_1074->g_255.sa, "p_1074->g_255.sa", print_hash_value);
    transparent_crc(p_1074->g_255.sb, "p_1074->g_255.sb", print_hash_value);
    transparent_crc(p_1074->g_255.sc, "p_1074->g_255.sc", print_hash_value);
    transparent_crc(p_1074->g_255.sd, "p_1074->g_255.sd", print_hash_value);
    transparent_crc(p_1074->g_255.se, "p_1074->g_255.se", print_hash_value);
    transparent_crc(p_1074->g_255.sf, "p_1074->g_255.sf", print_hash_value);
    transparent_crc(p_1074->g_286.s0, "p_1074->g_286.s0", print_hash_value);
    transparent_crc(p_1074->g_286.s1, "p_1074->g_286.s1", print_hash_value);
    transparent_crc(p_1074->g_286.s2, "p_1074->g_286.s2", print_hash_value);
    transparent_crc(p_1074->g_286.s3, "p_1074->g_286.s3", print_hash_value);
    transparent_crc(p_1074->g_286.s4, "p_1074->g_286.s4", print_hash_value);
    transparent_crc(p_1074->g_286.s5, "p_1074->g_286.s5", print_hash_value);
    transparent_crc(p_1074->g_286.s6, "p_1074->g_286.s6", print_hash_value);
    transparent_crc(p_1074->g_286.s7, "p_1074->g_286.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1074->g_323[i], "p_1074->g_323[i]", print_hash_value);

    }
    transparent_crc(p_1074->g_374.x, "p_1074->g_374.x", print_hash_value);
    transparent_crc(p_1074->g_374.y, "p_1074->g_374.y", print_hash_value);
    transparent_crc(p_1074->g_384.s0, "p_1074->g_384.s0", print_hash_value);
    transparent_crc(p_1074->g_384.s1, "p_1074->g_384.s1", print_hash_value);
    transparent_crc(p_1074->g_384.s2, "p_1074->g_384.s2", print_hash_value);
    transparent_crc(p_1074->g_384.s3, "p_1074->g_384.s3", print_hash_value);
    transparent_crc(p_1074->g_384.s4, "p_1074->g_384.s4", print_hash_value);
    transparent_crc(p_1074->g_384.s5, "p_1074->g_384.s5", print_hash_value);
    transparent_crc(p_1074->g_384.s6, "p_1074->g_384.s6", print_hash_value);
    transparent_crc(p_1074->g_384.s7, "p_1074->g_384.s7", print_hash_value);
    transparent_crc(p_1074->g_384.s8, "p_1074->g_384.s8", print_hash_value);
    transparent_crc(p_1074->g_384.s9, "p_1074->g_384.s9", print_hash_value);
    transparent_crc(p_1074->g_384.sa, "p_1074->g_384.sa", print_hash_value);
    transparent_crc(p_1074->g_384.sb, "p_1074->g_384.sb", print_hash_value);
    transparent_crc(p_1074->g_384.sc, "p_1074->g_384.sc", print_hash_value);
    transparent_crc(p_1074->g_384.sd, "p_1074->g_384.sd", print_hash_value);
    transparent_crc(p_1074->g_384.se, "p_1074->g_384.se", print_hash_value);
    transparent_crc(p_1074->g_384.sf, "p_1074->g_384.sf", print_hash_value);
    transparent_crc(p_1074->g_404, "p_1074->g_404", print_hash_value);
    transparent_crc(p_1074->g_414.x, "p_1074->g_414.x", print_hash_value);
    transparent_crc(p_1074->g_414.y, "p_1074->g_414.y", print_hash_value);
    transparent_crc(p_1074->g_414.z, "p_1074->g_414.z", print_hash_value);
    transparent_crc(p_1074->g_414.w, "p_1074->g_414.w", print_hash_value);
    transparent_crc(p_1074->g_431, "p_1074->g_431", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1074->g_434[i], "p_1074->g_434[i]", print_hash_value);

    }
    transparent_crc(p_1074->g_516.f0, "p_1074->g_516.f0", print_hash_value);
    transparent_crc(p_1074->g_516.f1, "p_1074->g_516.f1", print_hash_value);
    transparent_crc(p_1074->g_543, "p_1074->g_543", print_hash_value);
    transparent_crc(p_1074->g_582.f0, "p_1074->g_582.f0", print_hash_value);
    transparent_crc(p_1074->g_596, "p_1074->g_596", print_hash_value);
    transparent_crc(p_1074->g_670.f0, "p_1074->g_670.f0", print_hash_value);
    transparent_crc(p_1074->g_680.f0, "p_1074->g_680.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1074->g_732[i][j].f0, "p_1074->g_732[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1074->g_774[i][j][k], "p_1074->g_774[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1074->g_776, "p_1074->g_776", print_hash_value);
    transparent_crc(p_1074->g_777, "p_1074->g_777", print_hash_value);
    transparent_crc(p_1074->g_779, "p_1074->g_779", print_hash_value);
    transparent_crc(p_1074->g_784.x, "p_1074->g_784.x", print_hash_value);
    transparent_crc(p_1074->g_784.y, "p_1074->g_784.y", print_hash_value);
    transparent_crc(p_1074->g_791.s0, "p_1074->g_791.s0", print_hash_value);
    transparent_crc(p_1074->g_791.s1, "p_1074->g_791.s1", print_hash_value);
    transparent_crc(p_1074->g_791.s2, "p_1074->g_791.s2", print_hash_value);
    transparent_crc(p_1074->g_791.s3, "p_1074->g_791.s3", print_hash_value);
    transparent_crc(p_1074->g_791.s4, "p_1074->g_791.s4", print_hash_value);
    transparent_crc(p_1074->g_791.s5, "p_1074->g_791.s5", print_hash_value);
    transparent_crc(p_1074->g_791.s6, "p_1074->g_791.s6", print_hash_value);
    transparent_crc(p_1074->g_791.s7, "p_1074->g_791.s7", print_hash_value);
    transparent_crc(p_1074->g_793.s0, "p_1074->g_793.s0", print_hash_value);
    transparent_crc(p_1074->g_793.s1, "p_1074->g_793.s1", print_hash_value);
    transparent_crc(p_1074->g_793.s2, "p_1074->g_793.s2", print_hash_value);
    transparent_crc(p_1074->g_793.s3, "p_1074->g_793.s3", print_hash_value);
    transparent_crc(p_1074->g_793.s4, "p_1074->g_793.s4", print_hash_value);
    transparent_crc(p_1074->g_793.s5, "p_1074->g_793.s5", print_hash_value);
    transparent_crc(p_1074->g_793.s6, "p_1074->g_793.s6", print_hash_value);
    transparent_crc(p_1074->g_793.s7, "p_1074->g_793.s7", print_hash_value);
    transparent_crc(p_1074->g_795.s0, "p_1074->g_795.s0", print_hash_value);
    transparent_crc(p_1074->g_795.s1, "p_1074->g_795.s1", print_hash_value);
    transparent_crc(p_1074->g_795.s2, "p_1074->g_795.s2", print_hash_value);
    transparent_crc(p_1074->g_795.s3, "p_1074->g_795.s3", print_hash_value);
    transparent_crc(p_1074->g_795.s4, "p_1074->g_795.s4", print_hash_value);
    transparent_crc(p_1074->g_795.s5, "p_1074->g_795.s5", print_hash_value);
    transparent_crc(p_1074->g_795.s6, "p_1074->g_795.s6", print_hash_value);
    transparent_crc(p_1074->g_795.s7, "p_1074->g_795.s7", print_hash_value);
    transparent_crc(p_1074->g_836.s0, "p_1074->g_836.s0", print_hash_value);
    transparent_crc(p_1074->g_836.s1, "p_1074->g_836.s1", print_hash_value);
    transparent_crc(p_1074->g_836.s2, "p_1074->g_836.s2", print_hash_value);
    transparent_crc(p_1074->g_836.s3, "p_1074->g_836.s3", print_hash_value);
    transparent_crc(p_1074->g_836.s4, "p_1074->g_836.s4", print_hash_value);
    transparent_crc(p_1074->g_836.s5, "p_1074->g_836.s5", print_hash_value);
    transparent_crc(p_1074->g_836.s6, "p_1074->g_836.s6", print_hash_value);
    transparent_crc(p_1074->g_836.s7, "p_1074->g_836.s7", print_hash_value);
    transparent_crc(p_1074->g_999.s0, "p_1074->g_999.s0", print_hash_value);
    transparent_crc(p_1074->g_999.s1, "p_1074->g_999.s1", print_hash_value);
    transparent_crc(p_1074->g_999.s2, "p_1074->g_999.s2", print_hash_value);
    transparent_crc(p_1074->g_999.s3, "p_1074->g_999.s3", print_hash_value);
    transparent_crc(p_1074->g_999.s4, "p_1074->g_999.s4", print_hash_value);
    transparent_crc(p_1074->g_999.s5, "p_1074->g_999.s5", print_hash_value);
    transparent_crc(p_1074->g_999.s6, "p_1074->g_999.s6", print_hash_value);
    transparent_crc(p_1074->g_999.s7, "p_1074->g_999.s7", print_hash_value);
    transparent_crc(p_1074->g_999.s8, "p_1074->g_999.s8", print_hash_value);
    transparent_crc(p_1074->g_999.s9, "p_1074->g_999.s9", print_hash_value);
    transparent_crc(p_1074->g_999.sa, "p_1074->g_999.sa", print_hash_value);
    transparent_crc(p_1074->g_999.sb, "p_1074->g_999.sb", print_hash_value);
    transparent_crc(p_1074->g_999.sc, "p_1074->g_999.sc", print_hash_value);
    transparent_crc(p_1074->g_999.sd, "p_1074->g_999.sd", print_hash_value);
    transparent_crc(p_1074->g_999.se, "p_1074->g_999.se", print_hash_value);
    transparent_crc(p_1074->g_999.sf, "p_1074->g_999.sf", print_hash_value);
    transparent_crc(p_1074->g_1027.s0, "p_1074->g_1027.s0", print_hash_value);
    transparent_crc(p_1074->g_1027.s1, "p_1074->g_1027.s1", print_hash_value);
    transparent_crc(p_1074->g_1027.s2, "p_1074->g_1027.s2", print_hash_value);
    transparent_crc(p_1074->g_1027.s3, "p_1074->g_1027.s3", print_hash_value);
    transparent_crc(p_1074->g_1027.s4, "p_1074->g_1027.s4", print_hash_value);
    transparent_crc(p_1074->g_1027.s5, "p_1074->g_1027.s5", print_hash_value);
    transparent_crc(p_1074->g_1027.s6, "p_1074->g_1027.s6", print_hash_value);
    transparent_crc(p_1074->g_1027.s7, "p_1074->g_1027.s7", print_hash_value);
    transparent_crc(p_1074->g_1027.s8, "p_1074->g_1027.s8", print_hash_value);
    transparent_crc(p_1074->g_1027.s9, "p_1074->g_1027.s9", print_hash_value);
    transparent_crc(p_1074->g_1027.sa, "p_1074->g_1027.sa", print_hash_value);
    transparent_crc(p_1074->g_1027.sb, "p_1074->g_1027.sb", print_hash_value);
    transparent_crc(p_1074->g_1027.sc, "p_1074->g_1027.sc", print_hash_value);
    transparent_crc(p_1074->g_1027.sd, "p_1074->g_1027.sd", print_hash_value);
    transparent_crc(p_1074->g_1027.se, "p_1074->g_1027.se", print_hash_value);
    transparent_crc(p_1074->g_1027.sf, "p_1074->g_1027.sf", print_hash_value);
    transparent_crc(p_1074->g_1028, "p_1074->g_1028", print_hash_value);
    transparent_crc(p_1074->g_1064.x, "p_1074->g_1064.x", print_hash_value);
    transparent_crc(p_1074->g_1064.y, "p_1074->g_1064.y", print_hash_value);
    transparent_crc(p_1074->g_1064.z, "p_1074->g_1064.z", print_hash_value);
    transparent_crc(p_1074->g_1064.w, "p_1074->g_1064.w", print_hash_value);
    transparent_crc(p_1074->g_1069.x, "p_1074->g_1069.x", print_hash_value);
    transparent_crc(p_1074->g_1069.y, "p_1074->g_1069.y", print_hash_value);
    transparent_crc(p_1074->g_1069.z, "p_1074->g_1069.z", print_hash_value);
    transparent_crc(p_1074->g_1069.w, "p_1074->g_1069.w", print_hash_value);
    transparent_crc(p_1074->g_1072.x, "p_1074->g_1072.x", print_hash_value);
    transparent_crc(p_1074->g_1072.y, "p_1074->g_1072.y", print_hash_value);
    transparent_crc(p_1074->g_1072.z, "p_1074->g_1072.z", print_hash_value);
    transparent_crc(p_1074->g_1072.w, "p_1074->g_1072.w", print_hash_value);
    transparent_crc(p_1074->v_collective, "p_1074->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 31; i++)
            transparent_crc(p_1074->g_special_values[i + 31 * get_linear_group_id()], "p_1074->g_special_values[i + 31 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 31; i++)
            transparent_crc(p_1074->l_special_values[i], "p_1074->l_special_values[i]", print_hash_value);
    transparent_crc(p_1074->l_comm_values[get_linear_local_id()], "p_1074->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1074->g_comm_values[get_linear_group_id() * 140 + get_linear_local_id()], "p_1074->g_comm_values[get_linear_group_id() * 140 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
