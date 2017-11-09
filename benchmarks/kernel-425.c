// --atomics 39 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,1,23 -l 23,1,1
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

__constant uint32_t permutations[10][23] = {
{1,18,9,17,8,3,0,7,5,13,21,6,10,16,15,12,20,19,14,2,22,11,4}, // permutation 0
{19,3,21,11,14,16,1,0,8,12,20,4,18,22,9,7,15,2,13,6,17,10,5}, // permutation 1
{10,12,3,6,17,20,22,4,19,16,5,8,15,7,13,0,18,9,21,11,14,1,2}, // permutation 2
{9,17,2,10,6,14,8,16,19,15,21,0,5,4,22,7,3,11,18,20,12,13,1}, // permutation 3
{9,15,4,3,17,20,21,5,2,19,1,13,22,14,12,7,0,18,16,10,8,11,6}, // permutation 4
{2,21,18,13,5,3,22,20,4,15,19,16,11,12,9,14,8,0,10,6,7,17,1}, // permutation 5
{9,21,18,8,16,20,14,17,4,15,0,5,22,7,3,12,13,2,19,1,11,10,6}, // permutation 6
{9,21,4,1,18,10,20,11,17,2,0,14,15,16,19,3,5,13,22,7,8,6,12}, // permutation 7
{13,8,12,0,15,3,16,14,11,10,5,18,6,7,1,22,21,19,20,2,4,17,9}, // permutation 8
{13,20,12,4,19,7,15,14,17,8,9,1,16,11,6,0,18,3,10,22,5,2,21} // permutation 9
};

// Seed: 881411832

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
};

union U1 {
   volatile struct S0  f0;
   volatile int8_t * f1;
   int8_t  f2;
   struct S0  f3;
   volatile int64_t  f4;
};

struct S2 {
    int32_t g_4;
    VECTOR(uint16_t, 2) g_28;
    int8_t g_34;
    int8_t *g_33;
    int32_t g_43;
    int8_t g_48;
    int32_t g_49;
    int32_t * volatile g_59;
    uint32_t g_172;
    volatile VECTOR(int8_t, 8) g_173;
    int8_t g_179[5];
    volatile uint32_t g_181[10];
    volatile uint32_t *g_180;
    VECTOR(uint32_t, 2) g_182;
    int32_t g_195[4][3];
    struct S0 g_196;
    volatile uint32_t g_201[7][9];
    volatile VECTOR(int32_t, 16) g_212;
    VECTOR(int32_t, 16) g_213;
    VECTOR(int32_t, 2) g_214;
    union U1 *g_221;
    volatile VECTOR(int8_t, 8) g_229;
    volatile VECTOR(int8_t, 4) g_230;
    volatile VECTOR(int8_t, 8) g_231;
    int64_t g_235[6];
    union U1 g_242;
    volatile uint32_t g_250;
    int32_t g_259;
    int32_t g_262;
    int32_t g_263;
    uint64_t g_264;
    int32_t *g_268;
    int32_t ** volatile g_267;
    int64_t g_272;
    int32_t ** volatile g_273;
    int32_t ** volatile g_274;
    struct S0 * volatile g_284;
    VECTOR(uint8_t, 4) g_303;
    union U1 g_306;
    uint16_t g_314[5][8][6];
    volatile VECTOR(uint8_t, 16) g_332;
    int16_t g_343;
    struct S0 * volatile g_348;
    volatile int32_t g_351;
    volatile int32_t * volatile g_350[4];
    volatile int32_t * volatile * volatile g_352;
    volatile int32_t * volatile * volatile g_353;
    int32_t ** volatile g_355[6][8][5];
    uint32_t *g_377;
    uint32_t **g_376;
    uint32_t *** volatile g_375;
    uint64_t g_396;
    volatile int32_t * volatile * volatile g_397;
    volatile VECTOR(uint8_t, 4) g_415;
    struct S0 * volatile g_422;
    int8_t g_543;
    uint32_t ***g_571;
    union U1 g_582;
    VECTOR(int8_t, 16) g_609;
    struct S0 * volatile g_624[3][4][2];
    struct S0 * volatile g_625;
    int32_t *g_639[3][6][6];
    int32_t ** volatile g_638;
    uint32_t ** volatile g_643;
    int32_t * volatile g_655;
    VECTOR(int32_t, 4) g_659;
    volatile VECTOR(uint16_t, 16) g_667;
    VECTOR(uint16_t, 2) g_668;
    VECTOR(int16_t, 16) g_689;
    VECTOR(int16_t, 16) g_690;
    VECTOR(uint32_t, 2) g_736;
    int32_t **g_759;
    int32_t *** volatile g_758;
    VECTOR(int8_t, 8) g_785;
    volatile int32_t g_786;
    volatile uint8_t g_791;
    union U1 g_817[5];
    VECTOR(int8_t, 4) g_837;
    volatile VECTOR(int8_t, 4) g_839;
    VECTOR(uint8_t, 4) g_841;
    volatile VECTOR(uint8_t, 16) g_842;
    volatile VECTOR(int16_t, 16) g_843;
    volatile VECTOR(uint16_t, 16) g_849;
    volatile VECTOR(int8_t, 2) g_861;
    int32_t g_883;
    struct S0 g_889;
    VECTOR(int16_t, 4) g_950;
    volatile VECTOR(int16_t, 2) g_951;
    volatile VECTOR(int16_t, 4) g_952;
    VECTOR(int16_t, 4) g_954;
    VECTOR(int16_t, 4) g_955;
    VECTOR(int8_t, 4) g_965;
    volatile VECTOR(int16_t, 16) g_990;
    volatile VECTOR(int16_t, 16) g_991;
    volatile VECTOR(int16_t, 2) g_992;
    VECTOR(int16_t, 4) g_993;
    VECTOR(int64_t, 4) g_1001;
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
uint16_t  func_1(struct S2 * p_1019);
int32_t * func_7(int16_t  p_8, int8_t * p_9, int8_t * p_10, struct S0  p_11, struct S2 * p_1019);
int8_t * func_12(uint64_t  p_13, int64_t  p_14, uint32_t  p_15, struct S2 * p_1019);
int64_t  func_17(int32_t  p_18, uint32_t  p_19, int8_t * p_20, uint64_t  p_21, uint32_t  p_22, struct S2 * p_1019);
int32_t * func_23(int8_t  p_24, uint32_t  p_25, uint32_t  p_26, int8_t * p_27, struct S2 * p_1019);
int32_t ** func_35(int32_t ** p_36, int32_t * p_37, struct S2 * p_1019);
int32_t ** func_38(int32_t  p_39, struct S2 * p_1019);
struct S0  func_53(int8_t * p_54, int32_t * p_55, int16_t  p_56, struct S2 * p_1019);
int8_t * func_57(uint16_t  p_58, struct S2 * p_1019);
int32_t  func_62(uint8_t  p_63, int32_t * p_64, int32_t  p_65, struct S2 * p_1019);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1019->g_4 p_1019->g_839
 * writes: p_1019->g_4
 */
uint16_t  func_1(struct S2 * p_1019)
{ /* block id: 4 */
    int8_t l_2 = 4L;
    int32_t *l_3 = &p_1019->g_4;
    uint8_t l_32 = 0xA4L;
    uint8_t l_917[10][8] = {{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L},{0xD3L,0xD3L,0xDAL,1UL,249UL,1UL,0xDAL,0xD3L}};
    int32_t l_923 = 0x76FF2204L;
    int32_t l_924[9] = {0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L,0x5F48A308L};
    int32_t l_987 = 0x4B7A7C6EL;
    VECTOR(int64_t, 16) l_996 = (VECTOR(int64_t, 16))(0x20EE266282313A8FL, (VECTOR(int64_t, 4))(0x20EE266282313A8FL, (VECTOR(int64_t, 2))(0x20EE266282313A8FL, 0x533BC2B51A21A814L), 0x533BC2B51A21A814L), 0x533BC2B51A21A814L, 0x20EE266282313A8FL, 0x533BC2B51A21A814L, (VECTOR(int64_t, 2))(0x20EE266282313A8FL, 0x533BC2B51A21A814L), (VECTOR(int64_t, 2))(0x20EE266282313A8FL, 0x533BC2B51A21A814L), 0x20EE266282313A8FL, 0x533BC2B51A21A814L, 0x20EE266282313A8FL, 0x533BC2B51A21A814L);
    int64_t *l_1011 = &p_1019->g_235[0];
    int32_t l_1012 = 9L;
    int32_t *l_1013[3];
    int8_t l_1014 = 0x37L;
    int16_t l_1015 = 0x06BCL;
    VECTOR(uint64_t, 4) l_1016 = (VECTOR(uint64_t, 4))(0x433B08316651CB17L, (VECTOR(uint64_t, 2))(0x433B08316651CB17L, 0x52460606798EE23BL), 0x52460606798EE23BL);
    int i, j;
    for (i = 0; i < 3; i++)
        l_1013[i] = &p_1019->g_263;
    (*l_3) ^= l_2;
    for (p_1019->g_4 = 0; (p_1019->g_4 != (-26)); p_1019->g_4 = safe_sub_func_uint16_t_u_u(p_1019->g_4, 9))
    { /* block id: 8 */
        int32_t l_16 = 0x5C2DD78FL;
        int8_t *l_31 = (void*)0;
        int32_t **l_760 = &l_3;
        int8_t *l_888 = (void*)0;
        int32_t *l_905 = &p_1019->g_883;
        int32_t *l_906 = &p_1019->g_262;
        int32_t *l_907 = &l_16;
        int32_t *l_908 = &p_1019->g_43;
        int32_t *l_909 = &p_1019->g_883;
        int32_t *l_910 = &p_1019->g_262;
        int32_t *l_911 = (void*)0;
        int32_t *l_912 = (void*)0;
        int32_t *l_913 = &p_1019->g_43;
        int32_t *l_914 = &p_1019->g_43;
        int32_t *l_915 = &p_1019->g_49;
        int32_t *l_916 = &p_1019->g_49;
        int32_t l_925[1][9][2] = {{{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)},{0x63031E00L,(-1L)}}};
        uint32_t l_929 = 4294967291UL;
        uint32_t **l_941 = &p_1019->g_377;
        VECTOR(int16_t, 16) l_953 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int16_t, 2))((-1L), (-6L)), (VECTOR(int16_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L));
        int16_t *l_994[1];
        VECTOR(uint16_t, 4) l_995 = (VECTOR(uint16_t, 4))(0x3F7FL, (VECTOR(uint16_t, 2))(0x3F7FL, 0UL), 0UL);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_994[i] = (void*)0;
        (1 + 1);
    }
    l_1016.y--;
    return p_1019->g_839.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_303 p_1019->g_33 p_1019->g_48 p_1019->g_883 p_1019->g_889.f0 p_1019->g_196 p_1019->g_272 p_1019->g_415
 * writes: p_1019->g_883 p_1019->g_34 p_1019->g_889.f0 p_1019->g_303
 */
int32_t * func_7(int16_t  p_8, int8_t * p_9, int8_t * p_10, struct S0  p_11, struct S2 * p_1019)
{ /* block id: 510 */
    VECTOR(int32_t, 4) l_890 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6F5F3DBAL), 0x6F5F3DBAL);
    VECTOR(int32_t, 8) l_891 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    struct S0 *l_892 = &p_1019->g_196;
    int32_t *l_893 = &p_1019->g_883;
    uint8_t *l_897 = (void*)0;
    uint8_t **l_896 = &l_897;
    uint32_t l_902 = 0x45244550L;
    int64_t *l_903 = (void*)0;
    int64_t *l_904 = &p_1019->g_889.f0;
    int i;
    (*l_893) = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_890.zxzzzwxwwwzwxwxw)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_891.s10045632)).s67)), (int32_t)(l_892 != &p_1019->g_889), (int32_t)(p_1019->g_303.y | FAKE_DIVERGE(p_1019->global_0_offset, get_global_id(0), 10))))), 0x0EDCB370L, 0L)))).xywxzxzzwyzxwzwy, ((VECTOR(int32_t, 2))(1L, 0x46ADA6A3L)).yxxxxxyxyxxxyxxx))).s5;
    l_891.s0 &= (safe_lshift_func_int16_t_s_s((((*p_1019->g_33) = (l_896 == (void*)0)) != (((*p_9) <= (safe_rshift_func_uint16_t_u_s((((p_1019->g_303.y = (safe_mul_func_uint8_t_u_u((((((((*l_893) <= (!((*l_904) |= l_902))) && (((*l_892) , &p_1019->g_264) != l_903)) != p_1019->g_272) != 0x3421L) >= p_1019->g_415.y) ^ 0UL), 255UL))) , p_11.f0) & p_11.f0), 7))) ^ (*l_893))), 8));
    return l_893;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_837 p_1019->g_839 p_1019->g_841 p_1019->g_842 p_1019->g_843 p_1019->g_849 p_1019->g_235 p_1019->g_49 p_1019->g_262 p_1019->g_179 p_1019->g_689 p_1019->g_861 p_1019->g_786 p_1019->g_668 p_1019->g_263 p_1019->g_659
 * writes: p_1019->g_235 p_1019->g_582.f3.f0 p_1019->g_263
 */
int8_t * func_12(uint64_t  p_13, int64_t  p_14, uint32_t  p_15, struct S2 * p_1019)
{ /* block id: 501 */
    VECTOR(int16_t, 8) l_835 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1C21L), 0x1C21L), 0x1C21L, 1L, 0x1C21L);
    VECTOR(int8_t, 4) l_836 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
    uint64_t l_838[2][2][3];
    VECTOR(int8_t, 2) l_840 = (VECTOR(int8_t, 2))(0x26L, 0x6AL);
    uint32_t *l_844 = (void*)0;
    uint32_t *l_845[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_846 = 7UL;
    int64_t *l_853 = (void*)0;
    int64_t *l_854 = &p_1019->g_235[0];
    int64_t *l_855 = (void*)0;
    int64_t *l_856 = (void*)0;
    int64_t *l_857[8][10] = {{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0},{&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,(void*)0,&p_1019->g_196.f0,&p_1019->g_196.f0}};
    int32_t l_858[9][8] = {{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)},{0x6248436AL,0L,0x5C2E6F1CL,0x6248436AL,(-1L),0x5C2E6F1CL,0x5C2E6F1CL,(-1L)}};
    VECTOR(int8_t, 4) l_864 = (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, 1L), 1L);
    int32_t *l_867 = &p_1019->g_263;
    uint32_t l_880 = 0xA47EA109L;
    int32_t *l_881 = &l_858[1][6];
    int32_t *l_882[2];
    uint64_t l_884 = 18446744073709551615UL;
    int8_t *l_887 = &p_1019->g_48;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_838[i][j][k] = 3UL;
        }
    }
    for (i = 0; i < 2; i++)
        l_882[i] = &p_1019->g_262;
    l_858[1][0] = ((safe_lshift_func_uint16_t_u_u((((p_15 && ((safe_mod_func_uint16_t_u_u((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_835.s7211)).wwzyxxxz)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_836.wyww)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(1L, 0x5AL, ((VECTOR(int8_t, 4))(p_1019->g_837.zwyy)), 0x72L, 0x78L)).s5134304717373613, (int8_t)l_835.s0, (int8_t)l_838[1][1][1]))), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(p_1019->g_839.xwxzzyxz)).odd, ((VECTOR(int8_t, 16))(l_840.xyxyxyyyyxyyyxyx)).s8ef2))).xxwzyzxzyxywwyzx))))))).s5116))).yzywxzxzzyzzwwxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(p_1019->g_841.xzyyzzywxxzwxxyw)).hi, ((VECTOR(uint8_t, 8))(p_1019->g_842.s6935773b))))).s6226261774152606))))))).even, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(p_1019->g_843.s97ee742d5b1de9c2)).s4ab8))).ywyxxzzw))).s5145627454103423)))).lo))).s7227323266136423, (int16_t)(((-1L) || (((l_846 |= 4294967290UL) > 0x3CE000A6L) || (p_13 >= ((safe_sub_func_int64_t_s_s((p_1019->g_582.f3.f0 = ((*l_854) |= (((VECTOR(uint16_t, 4))(p_1019->g_849.s7fe1)).y > (p_15 & (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 16))(0x194EL, 0xAE12L, l_836.y, ((VECTOR(uint16_t, 4))(0x6ADEL)), ((VECTOR(uint16_t, 8))(0xB76CL)), 0x30F3L)).sb)) , p_13), 0x4D4DL)))))), p_1019->g_49)) & 0x51D1B1508455B526L)))) ^ p_15), (int16_t)p_1019->g_262))).hi)).s7 <= p_13), p_13)) == FAKE_DIVERGE(p_1019->local_2_offset, get_local_id(2), 10))) <= p_1019->g_179[1]) <= p_1019->g_689.sc), 3)) != 0x73C92948L);
    l_880 = (safe_div_func_uint32_t_u_u((5L || (((((0x50C994DBL | (((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0L, 7L, 0L, ((VECTOR(int8_t, 2))((-1L), (-2L))), 0x32L, 0x58L, 0x65L)).s0365256133677221)).s8b, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1019->g_861.yy)).yxyy)))).zxywwxzyzwxxxzww)).sd0, ((VECTOR(int8_t, 2))(0x73L, 1L))))).yxyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(((safe_rshift_func_uint8_t_u_s(5UL, ((VECTOR(int8_t, 8))(l_864.xwyzywyw)).s3)) < (((*l_867) = (safe_div_func_int16_t_s_s(0x5AE5L, 3L))) >= (safe_mod_func_int16_t_s_s((l_846 & p_14), ((!(safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x34L, (safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((!((safe_mul_func_uint8_t_u_u((p_14 , 1UL), p_1019->g_786)) , p_14)), 1L)), p_1019->g_668.y)))), p_13))) , l_858[7][7]))))), p_15, 0x7EL, 0x0EL)).lo, ((VECTOR(int8_t, 2))(0x1CL))))))).xxxx))).x , (*l_867))) <= p_1019->g_659.y) == p_13) , p_1019->g_689.sb) <= p_15)), p_14));
    --l_884;
    return l_887;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_262 p_1019->g_182 p_1019->g_49 p_1019->g_785 p_1019->g_43 p_1019->g_786 p_1019->g_179 p_1019->g_33 p_1019->g_34 p_1019->g_791 p_1019->g_759 p_1019->g_376 p_1019->g_377 p_1019->g_638 p_1019->g_639 p_1019->g_263 p_1019->g_4 p_1019->g_817 p_1019->g_172
 * writes: p_1019->g_49 p_1019->g_639 p_1019->g_268 p_1019->g_43 p_1019->g_196.f0 p_1019->g_262 p_1019->g_172
 */
int64_t  func_17(int32_t  p_18, uint32_t  p_19, int8_t * p_20, uint64_t  p_21, uint32_t  p_22, struct S2 * p_1019)
{ /* block id: 468 */
    int32_t *l_761 = &p_1019->g_49;
    int32_t *l_762 = &p_1019->g_43;
    int32_t *l_763 = &p_1019->g_262;
    int32_t *l_764 = &p_1019->g_262;
    int32_t *l_765 = &p_1019->g_43;
    int32_t *l_766 = &p_1019->g_262;
    int32_t *l_767 = &p_1019->g_43;
    int32_t *l_768 = (void*)0;
    int32_t *l_769 = &p_1019->g_43;
    int32_t *l_770[10] = {&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263,&p_1019->g_263};
    int32_t l_771 = 0x29AEABD6L;
    uint32_t l_772[9];
    uint64_t l_788 = 0xE57EC12520FF899EL;
    int32_t *l_797 = &l_771;
    int i;
    for (i = 0; i < 9; i++)
        l_772[i] = 0x6683EAE4L;
    l_772[7]--;
    l_788 |= (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((*l_764), p_18)), (((VECTOR(uint64_t, 16))(0UL, p_1019->g_182.y, 0x0126B7113DAD7920L, (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((safe_mul_func_int8_t_s_s((*l_761), (safe_rshift_func_uint16_t_u_u(8UL, 0)))), 6L, 1L, ((VECTOR(int8_t, 4))(p_1019->g_785.s4340)), (((*l_762) >= ((*l_761) = (-4L))) , p_1019->g_786), ((safe_unary_minus_func_int8_t_s((*p_20))) >= 0x40L), (*p_1019->g_33), ((VECTOR(int8_t, 4))(0x56L)), 0x1CL, 8L)).s475d)).xxwywwwz, ((VECTOR(int8_t, 8))(0x3DL))))).s2, (*p_20))), ((VECTOR(uint64_t, 8))(18446744073709551609UL)), 1UL, 0x36C4225CAA7CB9CFL, 0xA667637C642C4ABCL, 0x02CFCD925E2657CAL)).s5 & p_1019->g_179[4])));
    if ((safe_rshift_func_uint16_t_u_u(p_1019->g_791, 1)))
    { /* block id: 472 */
        uint32_t l_792[9][8] = {{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL},{0x034461E4L,0x5A068247L,0xB524BE2FL,4294967294UL,0UL,0xA1D790AEL,0xA1D790AEL,0UL}};
        int32_t *l_795 = &p_1019->g_4;
        int32_t **l_796[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_796[i] = &l_770[4];
        l_792[6][0]++;
        l_768 = (l_797 = ((*p_1019->g_759) = l_795));
    }
    else
    { /* block id: 477 */
        uint32_t *l_798 = &p_1019->g_172;
        uint32_t *l_799 = &p_1019->g_172;
        int32_t l_800 = 0x12A91BB8L;
        int32_t l_801 = 0L;
        int32_t l_802[3][10][2] = {{{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL}},{{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL}},{{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL},{7L,0x3BE0105DL}}};
        int32_t l_803 = 0x447D18EAL;
        uint64_t l_804 = 0xBB87032CDF36E1F9L;
        VECTOR(int16_t, 2) l_823 = (VECTOR(int16_t, 2))(0x2F23L, 1L);
        uint8_t l_824 = 0x24L;
        int i, j, k;
        (*l_767) = (((l_798 = (*p_1019->g_376)) != l_799) & (**p_1019->g_638));
        ++l_804;
        for (p_18 = 0; (p_18 != (-26)); --p_18)
        { /* block id: 483 */
            int64_t *l_809 = &p_1019->g_196.f0;
            uint16_t l_810 = 65535UL;
            VECTOR(uint16_t, 16) l_820 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 2UL), 2UL), 2UL, 65529UL, 2UL, (VECTOR(uint16_t, 2))(65529UL, 2UL), (VECTOR(uint16_t, 2))(65529UL, 2UL), 65529UL, 2UL, 65529UL, 2UL);
            int i;
            l_824 ^= (((VECTOR(uint32_t, 16))((0x6F2991889A6FC479L > ((*l_809) = p_21)), ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((l_810 ^ (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((p_1019->g_817[4] , ((l_810 == l_810) , ((*l_764) = (safe_lshift_func_int8_t_s_u((((VECTOR(uint16_t, 2))(l_820.s52)).hi ^ ((safe_lshift_func_uint16_t_u_s((((VECTOR(int16_t, 2))(l_823.xx)).even == (&p_1019->g_179[1] != (void*)0)), p_22)) != 0x16DDL)), GROUP_DIVERGE(1, 1)))))), (*l_767))) & l_800) >= l_804) >= p_21), 65527UL)), p_18))) , p_18), 0x3572CDFEL, 0xF1521855L, ((VECTOR(uint32_t, 4))(0x3D51C2A9L)), 0x04C9C633L, ((VECTOR(uint32_t, 4))(2UL)), 0x335D9DFCL, ((VECTOR(uint32_t, 2))(4294967295UL)), 3UL)).even, ((VECTOR(uint32_t, 8))(0xC2357E32L)), ((VECTOR(uint32_t, 8))(0xD7707D31L))))), 0xB912C89CL, ((VECTOR(uint32_t, 2))(4294967291UL)), ((VECTOR(uint32_t, 4))(0xF8357B82L)))).s2 != GROUP_DIVERGE(0, 1));
        }
    }
    for (p_19 = 0; (p_19 == 39); p_19 = safe_add_func_uint8_t_u_u(p_19, 8))
    { /* block id: 491 */
        int32_t *l_830 = &p_1019->g_43;
        (*p_1019->g_759) = &l_771;
        for (p_1019->g_172 = 8; (p_1019->g_172 <= 55); p_1019->g_172 = safe_add_func_uint8_t_u_u(p_1019->g_172, 3))
        { /* block id: 495 */
            int64_t l_829[1][10] = {{0x399545DA1705F0E2L,0x11FA360B9DF71D0CL,0x399545DA1705F0E2L,0x399545DA1705F0E2L,0x11FA360B9DF71D0CL,0x399545DA1705F0E2L,0x399545DA1705F0E2L,0x11FA360B9DF71D0CL,0x399545DA1705F0E2L,0x399545DA1705F0E2L}};
            int i, j;
            l_830 = (l_829[0][1] , (void*)0);
            (*p_1019->g_759) = &l_771;
        }
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_259 p_1019->g_353 p_1019->g_350 p_1019->g_351 p_1019->g_268 p_1019->g_43 p_1019->g_33 p_1019->g_214 p_1019->g_343 p_1019->g_201 p_1019->g_543 p_1019->g_235 p_1019->g_348 p_1019->g_582 p_1019->g_34 p_1019->g_48 p_1019->g_4 p_1019->g_263 p_1019->g_625 p_1019->g_49 p_1019->g_213 p_1019->g_332 p_1019->g_59 p_1019->g_638 p_1019->g_643 p_1019->g_264 p_1019->g_172 p_1019->g_655 p_1019->g_352 p_1019->g_659 p_1019->g_196.f0 p_1019->g_182 p_1019->g_396 p_1019->g_639 p_1019->g_262 p_1019->g_195 p_1019->g_736 p_1019->g_758
 * writes: p_1019->g_259 p_1019->g_242.f3.f0 p_1019->g_196.f0 p_1019->g_263 p_1019->g_43 p_1019->g_268 p_1019->g_34 p_1019->g_242.f3 p_1019->g_571 p_1019->g_343 p_1019->g_48 p_1019->g_49 p_1019->g_639 p_1019->g_643 p_1019->g_264 p_1019->g_172 p_1019->g_543 p_1019->g_182 p_1019->g_214 p_1019->g_736 p_1019->g_759
 */
int32_t * func_23(int8_t  p_24, uint32_t  p_25, uint32_t  p_26, int8_t * p_27, struct S2 * p_1019)
{ /* block id: 9 */
    int32_t *l_502[9] = {&p_1019->g_4,&p_1019->g_43,&p_1019->g_4,&p_1019->g_4,&p_1019->g_43,&p_1019->g_4,&p_1019->g_4,&p_1019->g_43,&p_1019->g_4};
    int i;
    (*p_1019->g_758) = func_35(func_38(p_24, p_1019), l_502[6], p_1019);
    return l_502[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_353 p_1019->g_350 p_1019->g_351 p_1019->g_268 p_1019->g_43 p_1019->g_33 p_1019->g_214 p_1019->g_343 p_1019->g_201 p_1019->g_543 p_1019->g_259 p_1019->g_235 p_1019->g_348 p_1019->g_582 p_1019->g_34 p_1019->g_48 p_1019->g_4 p_1019->g_263 p_1019->g_625 p_1019->g_49 p_1019->g_213 p_1019->g_332 p_1019->g_59 p_1019->g_638 p_1019->g_643 p_1019->g_264 p_1019->g_172 p_1019->g_655 p_1019->g_352 p_1019->g_659 p_1019->g_196.f0 p_1019->g_182 p_1019->g_396 p_1019->g_639 p_1019->g_262 p_1019->g_195 p_1019->g_736
 * writes: p_1019->g_242.f3.f0 p_1019->g_196.f0 p_1019->g_263 p_1019->g_43 p_1019->g_268 p_1019->g_34 p_1019->g_242.f3 p_1019->g_571 p_1019->g_343 p_1019->g_48 p_1019->g_49 p_1019->g_639 p_1019->g_643 p_1019->g_264 p_1019->g_172 p_1019->g_543 p_1019->g_182 p_1019->g_214 p_1019->g_736
 */
int32_t ** func_35(int32_t ** p_36, int32_t * p_37, struct S2 * p_1019)
{ /* block id: 301 */
    int64_t l_505 = (-6L);
    int64_t *l_512 = &p_1019->g_242.f3.f0;
    int16_t *l_513 = &p_1019->g_343;
    uint64_t l_514 = 0x6BABE01E0970E1BFL;
    int32_t l_541 = 1L;
    VECTOR(int8_t, 8) l_608 = (VECTOR(int8_t, 8))(0x61L, (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, (-6L)), (-6L)), (-6L), 0x61L, (-6L));
    uint32_t ** volatile *l_644 = &p_1019->g_643;
    union U1 *l_669 = &p_1019->g_242;
    int32_t l_672 = 3L;
    VECTOR(int32_t, 8) l_675 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
    uint16_t l_722 = 65535UL;
    uint32_t l_742 = 0xD102CF1FL;
    int8_t *l_755 = &p_1019->g_179[2];
    int i;
    if (((**p_36) = ((safe_mod_func_uint32_t_u_u(5UL, (((!(l_505 || ((safe_add_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((+(p_1019->g_196.f0 = (!((*l_512) = 1L)))), (l_505 < 0x04DAEF8AC3CF86C1L))) && l_505) && ((void*)0 == l_513)), (**p_1019->g_353))) || GROUP_DIVERGE(0, 1)))) && 0x5CE2614B9D376D18L) , l_514))) || 0xD042L)))
    { /* block id: 305 */
        int16_t l_520 = 0x1B90L;
        int32_t l_537 = 0x2B38D386L;
        uint64_t l_538 = 0UL;
        int32_t l_544 = (-5L);
        struct S0 l_566 = {0x074E7DDB7F23E0E0L};
        uint32_t ****l_570 = (void*)0;
        uint16_t *l_585[4][4][10] = {{{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0}},{{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0}},{{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0}},{{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0},{(void*)0,(void*)0,&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0,&p_1019->g_314[3][0][1],(void*)0}}};
        uint8_t *l_588[1][7][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_589 = 0x1782F000L;
        int32_t l_590 = (-1L);
        int32_t *l_627[4] = {&l_541,&l_541,&l_541,&l_541};
        int i, j, k;
        for (p_1019->g_43 = (-5); (p_1019->g_43 <= (-3)); p_1019->g_43 = safe_add_func_int8_t_s_s(p_1019->g_43, 9))
        { /* block id: 308 */
            int32_t *l_517[10] = {&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49};
            VECTOR(uint8_t, 4) l_523 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 255UL), 255UL);
            VECTOR(int8_t, 2) l_526 = (VECTOR(int8_t, 2))(0x0CL, 0x13L);
            uint32_t *l_533 = (void*)0;
            uint32_t *l_534 = (void*)0;
            uint32_t *l_535 = (void*)0;
            uint32_t *l_536[1][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            uint64_t l_542 = 0x8A243C440EE2C819L;
            int i, j, k;
            (*p_36) = l_517[1];
            l_544 &= ((((*l_512) = (((*p_1019->g_33) = 0x7DL) == (0xF01044D0L == l_520))) ^ (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_523.yzwy)).y, ((((((safe_mod_func_int16_t_s_s((l_520 >= ((VECTOR(int8_t, 16))(l_526.xyyyyxxxxyxyxyyy)).s5), (safe_add_func_uint64_t_u_u((l_505 | l_520), ((safe_add_func_int16_t_s_s(l_514, p_1019->g_214.x)) && (((((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))((((l_538++) != (l_541 = (*p_1019->g_268))) && l_505), ((VECTOR(uint16_t, 8))(0UL)), l_520, ((VECTOR(uint16_t, 4))(65529UL)), 0x9834L, 8UL)).sf8, (uint16_t)l_520, (uint16_t)0x39E8L))).odd, 0x525FL, ((VECTOR(uint16_t, 2))(0x4446L)), l_538, l_514, l_520, l_541, ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 2))(0xF2D6L)), 1UL)).s6, 0x5D47L)) , p_1019->g_343) > l_542) , l_514) > l_520)))))) > l_520) , p_1019->g_201[0][6]) ^ 0x1310B8B6L) & p_1019->g_543) & p_1019->g_259)))) > p_1019->g_235[0]);
            if ((atomic_inc(&p_1019->g_atomic_input[39 * get_linear_group_id() + 3]) == 2))
            { /* block id: 316 */
                int32_t l_545 = 0L;
                uint64_t l_546 = 2UL;
                struct S0 l_558 = {0x7020BEFD51FC5D65L};
                struct S0 l_559[4][3] = {{{0x0368AC0D095653DDL},{0x0368AC0D095653DDL},{0x0368AC0D095653DDL}},{{0x0368AC0D095653DDL},{0x0368AC0D095653DDL},{0x0368AC0D095653DDL}},{{0x0368AC0D095653DDL},{0x0368AC0D095653DDL},{0x0368AC0D095653DDL}},{{0x0368AC0D095653DDL},{0x0368AC0D095653DDL},{0x0368AC0D095653DDL}}};
                struct S0 l_560 = {4L};
                union U1 l_562 = {{8L}};/* VOLATILE GLOBAL l_562 */
                union U1 *l_561[4] = {&l_562,&l_562,&l_562,&l_562};
                union U1 *l_563 = &l_562;
                int i, j;
                l_546 &= l_545;
                for (l_546 = 0; (l_546 >= 7); l_546++)
                { /* block id: 320 */
                    int32_t l_550 = 0x78C88961L;
                    int32_t *l_549 = &l_550;
                    int32_t *l_551 = &l_550;
                    l_551 = l_549;
                    for (l_550 = (-5); (l_550 == (-9)); l_550 = safe_sub_func_int16_t_s_s(l_550, 2))
                    { /* block id: 324 */
                        union U1 l_554 = {{0x229DAC8E3FE837BCL}};/* VOLATILE GLOBAL l_554 */
                        union U1 l_555 = {{0L}};/* VOLATILE GLOBAL l_555 */
                        VECTOR(int32_t, 4) l_556 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                        uint8_t l_557[6] = {249UL,0x03L,249UL,249UL,0x03L,249UL};
                        int i;
                        l_557[4] &= ((l_554 , l_555) , ((VECTOR(int32_t, 16))(l_556.xwwyywxyyzzzwxzz)).s9);
                    }
                }
                l_560 = (l_559[2][2] = l_558);
                l_563 = l_561[2];
                unsigned int result = 0;
                result += l_545;
                result += l_546;
                result += l_558.f0;
                int l_559_i0, l_559_i1;
                for (l_559_i0 = 0; l_559_i0 < 4; l_559_i0++) {
                    for (l_559_i1 = 0; l_559_i1 < 3; l_559_i1++) {
                        result += l_559[l_559_i0][l_559_i1].f0;
                    }
                }
                result += l_560.f0;
                result += l_562.f0.f0;
                result += l_562.f1;
                result += l_562.f2;
                result += l_562.f3.f0;
                result += l_562.f4;
                atomic_add(&p_1019->g_special_values[39 * get_linear_group_id() + 3], result);
            }
            else
            { /* block id: 331 */
                (1 + 1);
            }
            for (l_538 = 20; (l_538 >= 34); l_538 = safe_add_func_uint64_t_u_u(l_538, 8))
            { /* block id: 336 */
                struct S0 *l_567 = (void*)0;
                (*p_1019->g_348) = l_566;
            }
        }
        if ((safe_lshift_func_uint16_t_u_s(((&p_1019->g_376 == (p_1019->g_571 = (void*)0)) || (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_544, (l_590 |= ((safe_rshift_func_int16_t_s_s((p_1019->g_582 , (0x78DD73AEL | (safe_mul_func_uint8_t_u_u((((*l_513) = l_538) && ((FAKE_DIVERGE(p_1019->global_1_offset, get_global_id(1), 10) < (l_589 ^= (l_541 && ((l_537 = l_505) , ((safe_mul_func_uint16_t_u_u(((~l_541) == 2L), 0x5B7CL)) | l_544))))) ^ 1L)), 1UL)))), l_514)) , 1L)))) || l_590), (*p_1019->g_33))), GROUP_DIVERGE(0, 1))), (*p_1019->g_33)))), p_1019->g_48)))
        { /* block id: 345 */
            int8_t *l_593 = &p_1019->g_48;
            int32_t *l_594 = (void*)0;
            int32_t *l_595 = &l_590;
            (*l_595) &= ((l_520 ^ p_1019->g_214.y) == ((*l_593) = ((*p_1019->g_33) = (safe_lshift_func_int8_t_s_s(l_514, 5)))));
            l_589 = (*p_37);
        }
        else
        { /* block id: 350 */
            uint8_t l_607 = 0UL;
            union U1 *l_614 = &p_1019->g_582;
            struct S0 l_617 = {0x2680D38567CC2EE4L};
            int32_t *l_622 = &p_1019->g_49;
            int i, j;
            if ((atomic_inc(&p_1019->l_atomic_input[28]) == 7))
            { /* block id: 352 */
                int32_t l_596 = (-9L);
                l_596 ^= 0x2A40496CL;
                unsigned int result = 0;
                result += l_596;
                atomic_add(&p_1019->l_special_values[28], result);
            }
            else
            { /* block id: 354 */
                (1 + 1);
            }
            for (p_1019->g_34 = 0; (p_1019->g_34 > 9); p_1019->g_34++)
            { /* block id: 359 */
                uint32_t *l_610 = (void*)0;
                uint32_t *l_611 = (void*)0;
                int32_t l_612 = (-1L);
                union U1 *l_613 = &p_1019->g_306;
                int32_t **l_626 = &p_1019->g_268;
                l_614 = (((l_612 = (l_541 = (((safe_lshift_func_uint8_t_u_s(l_566.f0, (((VECTOR(int8_t, 4))((((p_1019->g_272 <= 0x6E00L) , ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_1019->g_262, 1)), 2)) >= (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x652DL, 0x201FL)).lo, (p_1019->g_242 , l_607))))) , ((VECTOR(int8_t, 2))(l_608.s32)).hi), l_607, 1L, 8L)).z , ((VECTOR(int8_t, 4))((*p_1019->g_33), ((VECTOR(int8_t, 2))(p_1019->g_609.se1)), (-1L))).y))) & 18446744073709551608UL) , 5UL))) == l_538) , l_613);
                for (l_607 = 16; (l_607 == 10); l_607 = safe_sub_func_int8_t_s_s(l_607, 2))
                { /* block id: 365 */
                    (*p_36) = (void*)0;
                    l_566 = l_617;
                }
                for (l_514 = 5; (l_514 > 32); l_514 = safe_add_func_int16_t_s_s(l_514, 9))
                { /* block id: 371 */
                    for (p_1019->g_343 = 9; (p_1019->g_343 < 12); p_1019->g_343++)
                    { /* block id: 374 */
                        struct S0 l_623 = {1L};
                        l_622 = (void*)0;
                        (*p_1019->g_625) = l_623;
                        return l_626;
                    }
                    return &p_1019->g_268;
                }
                if ((*l_622))
                    continue;
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1019->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u(p_1019->g_213.s5, 10))][(safe_mod_func_uint32_t_u_u(p_1019->tid, 23))]));
            (*p_36) = l_627[2];
        }
    }
    else
    { /* block id: 388 */
        int32_t l_628[1][2][5];
        uint16_t l_633 = 1UL;
        struct S0 l_637 = {-1L};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_628[i][j][k] = (-1L);
            }
        }
        (*p_1019->g_59) = (p_1019->g_332.s9 != l_628[0][0][1]);
        for (p_1019->g_343 = 0; (p_1019->g_343 > 29); ++p_1019->g_343)
        { /* block id: 392 */
            int32_t *l_631 = &l_628[0][0][1];
            int32_t *l_632[4][6] = {{&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3],&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3]},{&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3],&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3]},{&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3],&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3]},{&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3],&l_628[0][1][3],&p_1019->g_263,&l_628[0][1][3]}};
            struct S0 l_636 = {8L};
            int i, j;
            --l_633;
            if ((*p_37))
                break;
            l_637 = l_636;
        }
        (*p_1019->g_638) = ((*p_36) = (*p_36));
        for (p_1019->g_34 = 0; (p_1019->g_34 > (-22)); p_1019->g_34--)
        { /* block id: 401 */
            int8_t l_642 = 1L;
            if (l_642)
                break;
        }
    }
    (*l_644) = p_1019->g_643;
    for (p_1019->g_264 = 0; (p_1019->g_264 != 45); ++p_1019->g_264)
    { /* block id: 408 */
        uint32_t l_656[2];
        int i;
        for (i = 0; i < 2; i++)
            l_656[i] = 0x5A21BB00L;
        for (p_1019->g_172 = 0; (p_1019->g_172 > 48); ++p_1019->g_172)
        { /* block id: 411 */
            if (l_514)
                break;
        }
        if ((*p_1019->g_268))
            continue;
        for (p_1019->g_543 = 0; (p_1019->g_543 != 5); p_1019->g_543++)
        { /* block id: 417 */
            VECTOR(int32_t, 8) l_660 = (VECTOR(int32_t, 8))(0x63399E42L, (VECTOR(int32_t, 4))(0x63399E42L, (VECTOR(int32_t, 2))(0x63399E42L, 0x7485B7C1L), 0x7485B7C1L), 0x7485B7C1L, 0x63399E42L, 0x7485B7C1L);
            int32_t **l_662 = &p_1019->g_639[1][4][1];
            int i;
            (*p_1019->g_655) |= (safe_lshift_func_int8_t_s_s((*p_1019->g_33), (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1019->global_2_offset, get_global_id(2), 10), 0))));
            if ((*p_37))
                continue;
            if (l_656[0])
                break;
            for (p_1019->g_263 = 0; (p_1019->g_263 > 9); ++p_1019->g_263)
            { /* block id: 423 */
                int32_t *l_661 = &l_541;
                (*l_661) = ((VECTOR(int32_t, 8))((**p_1019->g_352), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1019->g_659.zz)))), (*p_1019->g_59), ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_660.s44)))), 0x33202F81L)))).s5;
                return l_662;
            }
        }
    }
    for (l_505 = 0; (l_505 != (-19)); l_505 = safe_sub_func_int64_t_s_s(l_505, 6))
    { /* block id: 431 */
        union U1 **l_670 = &l_669;
        int32_t *l_671 = &l_541;
        int32_t **l_677 = &p_1019->g_639[1][2][1];
        int32_t ***l_676 = &l_677;
        uint8_t *l_678 = (void*)0;
        uint8_t *l_679 = (void*)0;
        uint8_t *l_680 = (void*)0;
        uint8_t *l_681 = (void*)0;
        uint8_t *l_682 = (void*)0;
        uint8_t *l_683 = (void*)0;
        uint8_t *l_684 = (void*)0;
        uint8_t *l_685 = (void*)0;
        union U1 *l_688 = &p_1019->g_306;
        int32_t l_718 = 0L;
        int32_t l_720 = (-3L);
        int32_t l_721 = 0x3A8BBB25L;
        int32_t l_735[4];
        int64_t *l_745 = &p_1019->g_272;
        uint8_t *l_748 = (void*)0;
        int i;
        for (i = 0; i < 4; i++)
            l_735[i] = 1L;
        for (p_1019->g_543 = 25; (p_1019->g_543 < (-8)); p_1019->g_543 = safe_sub_func_int16_t_s_s(p_1019->g_543, 1))
        { /* block id: 434 */
            (*p_36) = (void*)0;
        }
        if ((((p_1019->g_235[4] > ((p_1019->g_242.f3.f0 = (GROUP_DIVERGE(1, 1) > ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(p_1019->g_667.s7e29610b)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_1019->g_668.yyxxyyyxxyyxyxyx)))).se34b))).zyxxxywzyzwxywyw)).s2)) >= l_541)) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((((*l_670) = l_669) == ((FAKE_DIVERGE(p_1019->local_1_offset, get_local_id(1), 10) ^ (l_672 &= ((*l_671) = (*p_37)))) , (((safe_div_func_int32_t_s_s(l_514, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_675.s27660324)).s70)).odd)) || (((((&p_37 != ((*l_676) = &p_37)) | (p_1019->g_303.z++)) | (*l_671)) || (p_1019->g_48 , (*l_671))) || 0x3191D8ECL)) , l_688))) <= (*p_1019->g_33)), 9L, 5L, 0x19035F3022545CF3L, ((VECTOR(int64_t, 2))(0x21ADD453C3BA1854L)), 0x52B5CF9A4630753BL, (-7L))).s2134267757116441)).s1) , 0x5AD8258EL))
        { /* block id: 443 */
            int64_t l_691 = 0x6F52260D200B6405L;
            uint8_t **l_692 = &l_679;
            uint32_t *l_701[2][8][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_710 = 0x57ED3637L;
            uint16_t *l_711[8] = {&p_1019->g_314[1][5][0],(void*)0,&p_1019->g_314[1][5][0],&p_1019->g_314[1][5][0],(void*)0,&p_1019->g_314[1][5][0],&p_1019->g_314[1][5][0],(void*)0};
            int32_t *l_712[4] = {&p_1019->g_195[1][0],&p_1019->g_195[1][0],&p_1019->g_195[1][0],&p_1019->g_195[1][0]};
            int32_t l_719 = 0x75A1B18BL;
            int32_t *l_725 = (void*)0;
            int32_t *l_726 = (void*)0;
            int32_t *l_727 = &p_1019->g_43;
            int32_t *l_728 = &l_719;
            int32_t *l_729 = &p_1019->g_49;
            int32_t *l_730 = &l_710;
            int32_t *l_731 = &p_1019->g_263;
            int32_t *l_732 = &l_541;
            int32_t *l_733 = &p_1019->g_49;
            int32_t *l_734[2][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int i, j, k;
            if ((((((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(p_1019->g_689.s167a5abda1f29bad)).hi, ((VECTOR(int16_t, 4))(p_1019->g_690.s287c)).zywyyyxw))).s40))).odd || (((VECTOR(uint8_t, 2))(1UL, 253UL)).odd <= l_691)) , (p_1019->g_214.x = (((p_1019->g_33 != ((*l_692) = p_1019->g_33)) < (((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-10L), (-1L))), 0x62CEL, 0x258BL)).y, p_1019->g_196.f0)) & (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((0L <= (((-3L) == ((++p_1019->g_182.x) >= 8L)) , ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_672 = ((p_1019->g_396 >= (safe_rshift_func_int8_t_s_u(((***l_676) <= 0x7E8D400A8A2FD8B2L), l_691))) ^ l_710)), p_1019->g_235[0])), p_1019->g_195[1][0])) || (-1L)))), l_691)), 0x491FL)), p_1019->g_34))) , l_505) || l_710) > 0x7C1F6140L)) == 0x3743954AL))) , (**p_1019->g_352)))
            { /* block id: 448 */
                int32_t *l_713 = &p_1019->g_262;
                int32_t *l_714 = &l_710;
                int32_t *l_715 = &p_1019->g_49;
                int32_t *l_716 = &l_710;
                int32_t *l_717[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_717[i] = &l_672;
                --l_722;
            }
            else
            { /* block id: 450 */
                l_725 = (*l_677);
                atomic_or(&p_1019->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 1L)).yxxx)).z + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1019->v_collective += p_1019->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                (*l_677) = (*l_677);
                if ((*p_37))
                    continue;
            }
            --p_1019->g_736.x;
        }
        else
        { /* block id: 457 */
            int32_t *l_739 = &p_1019->g_263;
            int32_t *l_740 = &l_672;
            int32_t *l_741[9][9][3] = {{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}},{{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541},{&p_1019->g_43,(void*)0,&l_541}}};
            int8_t *l_756 = (void*)0;
            uint32_t *l_757 = (void*)0;
            int i, j, k;
            (*l_671) = (***l_676);
            l_742++;
            (*l_740) |= ((((VECTOR(uint32_t, 2))(4294967290UL, 0UL)).even >= ((((***l_676) <= 65528UL) != (((void*)0 == l_745) & ((((l_675.s1 , 0xCE220B65L) , ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(0x4D370B75324DBF30L, 0x25F9A1D059969E15L)).xxxy, ((VECTOR(int64_t, 2))(0x00FE5813357FE724L, 0x1F570D1148B81A26L)).xyxx))).y) ^ ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))((-10L), (-1L))).yxyyxxxyyxyxxyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((void*)0 == l_748), ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))((safe_sub_func_int32_t_s_s((((((((VECTOR(uint64_t, 8))(0x1F4E74D8F0A99BD4L, ((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_1019->g_396, p_1019->g_213.s7)), l_608.s0)) , p_1019->g_230.y), 0xD03425C3B0559210L, (*l_671), 1UL, ((VECTOR(uint64_t, 2))(1UL)), 0x065421C8B2B1000AL)).s3 , l_755) != l_756) , l_757) == (void*)0) , 0x651AE4ABL), 0x4B9C23EFL)), (-1L), (-1L), 0x6DL)).yxyywxyx, ((VECTOR(int8_t, 8))(0x40L)), ((VECTOR(int8_t, 8))(0x1FL))))), 0x0EL, ((VECTOR(int8_t, 4))(1L)), 0x36L, 0x54L)).s0d, ((VECTOR(int8_t, 2))((-1L)))))).yxyyxxyx)).s7741640314543732))))).sa, (*l_671))) , p_1019->g_659.z)) >= 0x4B8EL))) && 0L)) < l_675.s0);
            (*p_36) = (*l_677);
        }
    }
    return &p_1019->g_268;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_259
 * writes: p_1019->g_259
 */
int32_t ** func_38(int32_t  p_39, struct S2 * p_1019)
{ /* block id: 10 */
    uint32_t l_50 = 0xC6F73980L;
    int32_t *l_425 = &p_1019->g_4;
    for (p_39 = 19; (p_39 == 24); p_39++)
    { /* block id: 13 */
        int32_t *l_42 = &p_1019->g_43;
        int32_t *l_44 = &p_1019->g_43;
        int32_t *l_45 = &p_1019->g_43;
        int32_t *l_46 = &p_1019->g_43;
        int32_t *l_47[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        --l_50;
        if (p_39)
            break;
    }
    for (p_1019->g_259 = 0; (p_1019->g_259 != (-3)); p_1019->g_259 = safe_sub_func_int32_t_s_s(p_1019->g_259, 3))
    { /* block id: 238 */
        int32_t **l_426[9][3] = {{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425},{&l_425,&p_1019->g_268,&l_425}};
        int i, j;
        l_425 = l_425;
        if ((atomic_inc(&p_1019->l_atomic_input[23]) == 8))
        { /* block id: 241 */
            uint32_t l_427 = 4294967295UL;
            uint32_t l_428 = 9UL;
            uint64_t l_429[5] = {0x36D612AFBD095FF2L,0x36D612AFBD095FF2L,0x36D612AFBD095FF2L,0x36D612AFBD095FF2L,0x36D612AFBD095FF2L};
            int16_t l_430 = 0L;
            int32_t l_431[4] = {0x5C7950D2L,0x5C7950D2L,0x5C7950D2L,0x5C7950D2L};
            VECTOR(int32_t, 4) l_466 = (VECTOR(int32_t, 4))(0x39ED660DL, (VECTOR(int32_t, 2))(0x39ED660DL, (-6L)), (-6L));
            VECTOR(uint64_t, 4) l_467 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
            uint32_t l_468 = 0UL;
            uint8_t l_469 = 0xBEL;
            int8_t l_470 = 0L;
            uint16_t l_471 = 0x1141L;
            VECTOR(int32_t, 16) l_472 = (VECTOR(int32_t, 16))(0x1DE83242L, (VECTOR(int32_t, 4))(0x1DE83242L, (VECTOR(int32_t, 2))(0x1DE83242L, 0x582363DCL), 0x582363DCL), 0x582363DCL, 0x1DE83242L, 0x582363DCL, (VECTOR(int32_t, 2))(0x1DE83242L, 0x582363DCL), (VECTOR(int32_t, 2))(0x1DE83242L, 0x582363DCL), 0x1DE83242L, 0x582363DCL, 0x1DE83242L, 0x582363DCL);
            uint32_t l_473 = 0x2ECB61A0L;
            uint32_t l_474[5][8][2] = {{{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL}},{{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL}},{{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL}},{{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL}},{{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL},{0x2F694AF2L,4294967295UL}}};
            VECTOR(int32_t, 16) l_475 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
            VECTOR(int16_t, 4) l_476 = (VECTOR(int16_t, 4))(0x61A8L, (VECTOR(int16_t, 2))(0x61A8L, 0x18C8L), 0x18C8L);
            VECTOR(uint16_t, 16) l_477 = (VECTOR(uint16_t, 16))(0x470DL, (VECTOR(uint16_t, 4))(0x470DL, (VECTOR(uint16_t, 2))(0x470DL, 0x1F36L), 0x1F36L), 0x1F36L, 0x470DL, 0x1F36L, (VECTOR(uint16_t, 2))(0x470DL, 0x1F36L), (VECTOR(uint16_t, 2))(0x470DL, 0x1F36L), 0x470DL, 0x1F36L, 0x470DL, 0x1F36L);
            uint32_t l_478 = 4294967295UL;
            int32_t l_479 = 0x1A66444AL;
            VECTOR(int32_t, 16) l_480 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), 8L, 0L, 8L, (VECTOR(int32_t, 2))(0L, 8L), (VECTOR(int32_t, 2))(0L, 8L), 0L, 8L, 0L, 8L);
            VECTOR(int32_t, 4) l_481 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L));
            uint64_t l_482 = 0xABF8FBF686FE12CFL;
            VECTOR(uint64_t, 2) l_483 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
            VECTOR(int32_t, 2) l_484 = (VECTOR(int32_t, 2))(1L, (-2L));
            uint64_t l_485 = 18446744073709551615UL;
            uint32_t l_486 = 0x77F39D59L;
            VECTOR(int16_t, 2) l_487 = (VECTOR(int16_t, 2))((-1L), (-1L));
            VECTOR(int16_t, 8) l_488 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6A60L), 0x6A60L), 0x6A60L, 0L, 0x6A60L);
            VECTOR(int16_t, 2) l_489 = (VECTOR(int16_t, 2))(0L, (-1L));
            VECTOR(int16_t, 16) l_490 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x31FAL), 0x31FAL), 0x31FAL, (-8L), 0x31FAL, (VECTOR(int16_t, 2))((-8L), 0x31FAL), (VECTOR(int16_t, 2))((-8L), 0x31FAL), (-8L), 0x31FAL, (-8L), 0x31FAL);
            VECTOR(int16_t, 4) l_491 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2382L), 0x2382L);
            VECTOR(int16_t, 4) l_492 = (VECTOR(int16_t, 4))(0x368AL, (VECTOR(int16_t, 2))(0x368AL, 0x2E2BL), 0x2E2BL);
            uint16_t l_493 = 65535UL;
            int16_t l_494[4][4] = {{0x7813L,0x7813L,4L,7L},{0x7813L,0x7813L,4L,7L},{0x7813L,0x7813L,4L,7L},{0x7813L,0x7813L,4L,7L}};
            int8_t l_495 = 0x67L;
            uint32_t l_496 = 0x44A96983L;
            uint8_t l_497 = 0x18L;
            VECTOR(int32_t, 4) l_498 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0L), 0L);
            int16_t l_499 = 5L;
            uint8_t l_500 = 255UL;
            uint16_t l_501 = 0x82F9L;
            int i, j, k;
            l_429[0] |= (l_427 , (l_428 = 0x792683E8L));
            l_431[3] = l_430;
            for (l_430 = 24; (l_430 < 0); l_430--)
            { /* block id: 247 */
                int32_t l_434 = 0x2FD9D4ACL;
                uint32_t l_446 = 0UL;
                union U1 l_447 = {{1L}};/* VOLATILE GLOBAL l_447 */
                int32_t *l_448 = &l_434;
                int32_t *l_449 = (void*)0;
                for (l_434 = 0; (l_434 < (-1)); --l_434)
                { /* block id: 250 */
                    int32_t l_437 = 0x114B12DDL;
                    int8_t l_438 = 6L;
                    uint64_t l_439 = 18446744073709551615UL;
                    int32_t l_442 = 1L;
                    uint64_t l_443 = 18446744073709551615UL;
                    --l_439;
                    l_442 = ((VECTOR(int32_t, 2))(0L, 0x150BEE59L)).lo;
                    --l_443;
                }
                l_449 = (((l_446 = (-5L)) , l_447) , l_448);
                for (l_447.f2 = 0; (l_447.f2 >= 21); l_447.f2++)
                { /* block id: 259 */
                    int32_t l_452 = 1L;
                    int8_t l_456 = 9L;
                    int16_t l_465 = 0x6FBBL;
                    (1 + 1);
                }
            }
            l_501 &= (l_480.sc = (l_500 = (l_499 = (l_498.x = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_497 = (l_496 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x66B52D0BL)).xxyxxxxxxxyyyyyx)).s0a, ((VECTOR(int32_t, 2))(l_466.yy)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_470 = (l_469 |= (l_468 = l_467.w))), 3L, 0x52C69E44L, (-1L))))), (int32_t)l_471, (int32_t)((VECTOR(int32_t, 8))(2L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_472.s892a)).wxwxwxxxwywxyxwx)).s9799, ((VECTOR(int32_t, 8))((-7L), 1L, (l_474[4][7][0] &= l_473), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_475.s98597edbb1b406c6)).sef)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_476.yxwy)).zyywyxwxxxxxwwxx)).sa3, ((VECTOR(uint16_t, 16))(l_477.s8b1c64cf0d9c3733)).s28))).xxyxxyyy)).s43, (int32_t)(l_478 = 8L), (int32_t)l_479))), 0x73611038L)).even, ((VECTOR(int32_t, 8))(l_480.s7ec538c5)).hi))), 0x04ABCE25L, (-9L), 0x327CA392L)).s0))).xwyyxzwwxyxwxwww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_481.ywwx)), l_482, 1L, (-10L), (((VECTOR(uint64_t, 2))(l_483.xx)).hi , (l_486 ^= (l_485 = ((VECTOR(int32_t, 8))(l_484.xyyxyxyy)).s5))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(0x2530L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(l_487.yxxyxyxx)).s01, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(l_488.s5252743600572710)).lo, ((VECTOR(int16_t, 8))(l_489.yyyyyyxy))))).s15))))).yxyy, ((VECTOR(int16_t, 4))(l_490.s3662))))).xxxwzwyy, (int16_t)(l_495 |= ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(l_491.xx)).xyxxxxyxyxxxyxxy, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_492.zzzx)).odd)), 0x31EFL, 0x6D89L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((l_493 = FAKE_DIVERGE(p_1019->local_1_offset, get_local_id(1), 10)) , 1L), (-1L), (-1L), 0L)))).hi)), (-1L))).s01, (int16_t)l_494[1][1]))).xxyxyxxyxxxyyxyx))).sf)))).s11)), ((VECTOR(int16_t, 2))((-1L))), 0x3562L, 0x18BBL, 0x4C44L)), ((VECTOR(int16_t, 4))(0L)), 0x21FEL, 0x344FL, 0x56C0L)).hi)), ((VECTOR(uint16_t, 8))(0UL))))))))).hi)).s3665734512755020))).seb)), ((VECTOR(int32_t, 2))(0L)))))))).xxyxxyyyxyxxxyyy)).hi)).s3)), 0x32B9995AL, 0x38ECF030L, (-8L))))).zxxxxwwx)).hi))).xyzwxxxzxyyxwywx))).s6))));
            unsigned int result = 0;
            result += l_427;
            result += l_428;
            int l_429_i0;
            for (l_429_i0 = 0; l_429_i0 < 5; l_429_i0++) {
                result += l_429[l_429_i0];
            }
            result += l_430;
            int l_431_i0;
            for (l_431_i0 = 0; l_431_i0 < 4; l_431_i0++) {
                result += l_431[l_431_i0];
            }
            result += l_466.w;
            result += l_466.z;
            result += l_466.y;
            result += l_466.x;
            result += l_467.w;
            result += l_467.z;
            result += l_467.y;
            result += l_467.x;
            result += l_468;
            result += l_469;
            result += l_470;
            result += l_471;
            result += l_472.sf;
            result += l_472.se;
            result += l_472.sd;
            result += l_472.sc;
            result += l_472.sb;
            result += l_472.sa;
            result += l_472.s9;
            result += l_472.s8;
            result += l_472.s7;
            result += l_472.s6;
            result += l_472.s5;
            result += l_472.s4;
            result += l_472.s3;
            result += l_472.s2;
            result += l_472.s1;
            result += l_472.s0;
            result += l_473;
            int l_474_i0, l_474_i1, l_474_i2;
            for (l_474_i0 = 0; l_474_i0 < 5; l_474_i0++) {
                for (l_474_i1 = 0; l_474_i1 < 8; l_474_i1++) {
                    for (l_474_i2 = 0; l_474_i2 < 2; l_474_i2++) {
                        result += l_474[l_474_i0][l_474_i1][l_474_i2];
                    }
                }
            }
            result += l_475.sf;
            result += l_475.se;
            result += l_475.sd;
            result += l_475.sc;
            result += l_475.sb;
            result += l_475.sa;
            result += l_475.s9;
            result += l_475.s8;
            result += l_475.s7;
            result += l_475.s6;
            result += l_475.s5;
            result += l_475.s4;
            result += l_475.s3;
            result += l_475.s2;
            result += l_475.s1;
            result += l_475.s0;
            result += l_476.w;
            result += l_476.z;
            result += l_476.y;
            result += l_476.x;
            result += l_477.sf;
            result += l_477.se;
            result += l_477.sd;
            result += l_477.sc;
            result += l_477.sb;
            result += l_477.sa;
            result += l_477.s9;
            result += l_477.s8;
            result += l_477.s7;
            result += l_477.s6;
            result += l_477.s5;
            result += l_477.s4;
            result += l_477.s3;
            result += l_477.s2;
            result += l_477.s1;
            result += l_477.s0;
            result += l_478;
            result += l_479;
            result += l_480.sf;
            result += l_480.se;
            result += l_480.sd;
            result += l_480.sc;
            result += l_480.sb;
            result += l_480.sa;
            result += l_480.s9;
            result += l_480.s8;
            result += l_480.s7;
            result += l_480.s6;
            result += l_480.s5;
            result += l_480.s4;
            result += l_480.s3;
            result += l_480.s2;
            result += l_480.s1;
            result += l_480.s0;
            result += l_481.w;
            result += l_481.z;
            result += l_481.y;
            result += l_481.x;
            result += l_482;
            result += l_483.y;
            result += l_483.x;
            result += l_484.y;
            result += l_484.x;
            result += l_485;
            result += l_486;
            result += l_487.y;
            result += l_487.x;
            result += l_488.s7;
            result += l_488.s6;
            result += l_488.s5;
            result += l_488.s4;
            result += l_488.s3;
            result += l_488.s2;
            result += l_488.s1;
            result += l_488.s0;
            result += l_489.y;
            result += l_489.x;
            result += l_490.sf;
            result += l_490.se;
            result += l_490.sd;
            result += l_490.sc;
            result += l_490.sb;
            result += l_490.sa;
            result += l_490.s9;
            result += l_490.s8;
            result += l_490.s7;
            result += l_490.s6;
            result += l_490.s5;
            result += l_490.s4;
            result += l_490.s3;
            result += l_490.s2;
            result += l_490.s1;
            result += l_490.s0;
            result += l_491.w;
            result += l_491.z;
            result += l_491.y;
            result += l_491.x;
            result += l_492.w;
            result += l_492.z;
            result += l_492.y;
            result += l_492.x;
            result += l_493;
            int l_494_i0, l_494_i1;
            for (l_494_i0 = 0; l_494_i0 < 4; l_494_i0++) {
                for (l_494_i1 = 0; l_494_i1 < 4; l_494_i1++) {
                    result += l_494[l_494_i0][l_494_i1];
                }
            }
            result += l_495;
            result += l_496;
            result += l_497;
            result += l_498.w;
            result += l_498.z;
            result += l_498.y;
            result += l_498.x;
            result += l_499;
            result += l_500;
            result += l_501;
            atomic_add(&p_1019->l_special_values[23], result);
        }
        else
        { /* block id: 295 */
            (1 + 1);
        }
        l_425 = l_425;
    }
    return &p_1019->g_268;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_33 p_1019->g_48 p_1019->g_59 p_1019->g_49 p_1019->g_28 p_1019->g_173 p_1019->g_180 p_1019->g_182 p_1019->g_43 p_1019->g_196 p_1019->g_34 p_1019->g_201 p_1019->g_250 p_1019->g_212 p_1019->g_264 p_1019->g_267 p_1019->g_314 p_1019->g_303 p_1019->g_332 p_1019->g_179 p_1019->g_262 p_1019->g_195 p_1019->g_comm_values p_1019->g_348 p_1019->g_350 p_1019->g_352 p_1019->g_353 p_1019->g_375 p_1019->g_396 p_1019->g_397 p_1019->g_415 p_1019->g_263 p_1019->g_4 p_1019->g_351 p_1019->g_213 p_1019->g_259
 * writes: p_1019->g_43 p_1019->g_34 p_1019->g_48 p_1019->g_172 p_1019->g_179 p_1019->g_28 p_1019->g_195 p_1019->g_49 p_1019->g_201 p_1019->g_196 p_1019->g_59 p_1019->g_250 p_1019->g_264 p_1019->g_268 p_1019->g_314 p_1019->g_303 p_1019->g_306.f3.f0 p_1019->g_343 p_1019->g_242.f3 p_1019->g_350 p_1019->g_376 p_1019->g_259
 */
struct S0  func_53(int8_t * p_54, int32_t * p_55, int16_t  p_56, struct S2 * p_1019)
{ /* block id: 19 */
    VECTOR(int32_t, 8) l_60 = (VECTOR(int32_t, 8))(0x010F1939L, (VECTOR(int32_t, 4))(0x010F1939L, (VECTOR(int32_t, 2))(0x010F1939L, 1L), 1L), 1L, 0x010F1939L, 1L);
    int32_t *l_67[9] = {&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49,&p_1019->g_49};
    uint64_t l_346[6][10] = {{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL},{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL},{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL},{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL},{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL},{0x7D2563290B5A5A3FL,6UL,0UL,0x1B6D9E034A355E92L,1UL,1UL,0x1B6D9E034A355E92L,0UL,6UL,0x7D2563290B5A5A3FL}};
    struct S0 l_349 = {0x53E9C7D38C6CD710L};
    int32_t **l_354 = (void*)0;
    int32_t **l_356[7];
    int32_t *l_357 = &p_1019->g_262;
    int32_t *l_372 = &p_1019->g_49;
    uint64_t l_380 = 0x66E385824E1A11DBL;
    VECTOR(uint8_t, 16) l_393 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
    VECTOR(uint8_t, 16) l_394 = (VECTOR(uint8_t, 16))(0x7AL, (VECTOR(uint8_t, 4))(0x7AL, (VECTOR(uint8_t, 2))(0x7AL, 0UL), 0UL), 0UL, 0x7AL, 0UL, (VECTOR(uint8_t, 2))(0x7AL, 0UL), (VECTOR(uint8_t, 2))(0x7AL, 0UL), 0x7AL, 0UL, 0x7AL, 0UL);
    int32_t l_400 = (-1L);
    int64_t l_418 = 0x269807B1A2F894A0L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_356[i] = (void*)0;
    if (((*p_55) = ((VECTOR(int32_t, 8))(l_60.s13260024)).s0))
    { /* block id: 21 */
        int8_t *l_61 = &p_1019->g_48;
        VECTOR(int16_t, 4) l_66 = (VECTOR(int16_t, 4))(0x5335L, (VECTOR(int16_t, 2))(0x5335L, 0x4A1AL), 0x4A1AL);
        int32_t **l_68[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t *l_336 = &p_1019->g_306.f3.f0;
        uint16_t *l_337 = (void*)0;
        uint16_t *l_338 = &p_1019->g_314[4][0][2];
        int16_t *l_339 = (void*)0;
        int16_t *l_340 = (void*)0;
        int16_t *l_341 = (void*)0;
        int16_t *l_342[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 l_347 = {-1L};
        int i;
        (*p_55) = (((*l_61) |= ((*p_1019->g_33) = 0x18L)) , func_62(((((((VECTOR(int16_t, 4))(l_66.wwxx)).x , p_55) == (l_67[4] = l_67[4])) != (*p_1019->g_59)) & (safe_rshift_func_uint8_t_u_u(p_56, 6))), p_55, (((&p_1019->g_34 != &p_1019->g_48) != (safe_mod_func_int16_t_s_s(p_56, p_1019->g_28.y))) != FAKE_DIVERGE(p_1019->group_0_offset, get_group_id(0), 10)), p_1019));
        atomic_min(&p_1019->g_atomic_reduction[get_linear_group_id()], (safe_div_func_int32_t_s_s(((++p_1019->g_303.y) >= (((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_346[5][5] = (p_56 == (~(safe_div_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-9L), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1019->g_332.sd56c7af7ed305fa5)).sc55a)).z)), (p_1019->g_343 = (safe_unary_minus_func_uint16_t_u((((safe_div_func_int16_t_s_s(p_56, (0x700F302B24482857L & ((*l_336) = p_1019->g_179[2])))) | ((*l_338) = p_1019->g_28.y)) , ((*l_338) |= p_1019->g_179[4]))))))) <= p_1019->g_262) | ((safe_rshift_func_uint8_t_u_u((0x03782908A865DE98L >= p_1019->g_195[1][0]), 3)) , 6L)), p_1019->g_179[4]))))), p_1019->g_comm_values[p_1019->tid])), 65534UL)) == p_56) == GROUP_DIVERGE(1, 1))), (*p_55))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1019->v_collective += p_1019->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if ((*p_55))
        { /* block id: 184 */
            p_55 = (void*)0;
            (*p_1019->g_348) = l_347;
        }
        else
        { /* block id: 187 */
            return l_349;
        }
    }
    else
    { /* block id: 190 */
        (*p_1019->g_352) = p_1019->g_350[1];
        (*p_1019->g_353) = (*p_1019->g_352);
    }
    l_357 = (p_55 = p_55);
    if (p_56)
    { /* block id: 196 */
        int16_t l_360 = 0L;
        int32_t l_364[4][9] = {{1L,8L,0x56EF3A2CL,8L,0x56EF3A2CL,8L,1L,0x56B828AEL,(-3L)},{1L,8L,0x56EF3A2CL,8L,0x56EF3A2CL,8L,1L,0x56B828AEL,(-3L)},{1L,8L,0x56EF3A2CL,8L,0x56EF3A2CL,8L,1L,0x56B828AEL,(-3L)},{1L,8L,0x56EF3A2CL,8L,0x56EF3A2CL,8L,1L,0x56B828AEL,(-3L)}};
        struct S0 l_378 = {0x309EF1ECBDFCB6BEL};
        int8_t l_379 = 0x74L;
        VECTOR(uint8_t, 2) l_392 = (VECTOR(uint8_t, 2))(0x43L, 248UL);
        int i, j;
        for (p_1019->g_49 = 0; (p_1019->g_49 != (-23)); p_1019->g_49--)
        { /* block id: 199 */
            int16_t l_363[3];
            int32_t l_365[10] = {0x40BD1DE4L,(-10L),5L,(-10L),0x40BD1DE4L,0x40BD1DE4L,(-10L),5L,(-10L),0x40BD1DE4L};
            uint32_t l_366 = 0UL;
            int32_t *l_371 = (void*)0;
            uint32_t *l_374[9][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            uint32_t **l_373 = &l_374[2][2][0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_363[i] = 1L;
            if (p_56)
            { /* block id: 200 */
                int8_t l_361[9][5] = {{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L},{0x7CL,0x7CL,0x25L,(-2L),0x45L}};
                int32_t l_362 = 3L;
                int i, j;
                ++l_366;
                for (p_1019->g_34 = (-10); (p_1019->g_34 < 27); ++p_1019->g_34)
                { /* block id: 204 */
                    p_55 = l_371;
                    (*p_1019->g_267) = l_372;
                }
                (*p_1019->g_375) = l_373;
                l_365[1] = (4294967290UL >= l_364[2][4]);
            }
            else
            { /* block id: 210 */
                p_55 = p_55;
                return l_378;
            }
        }
        --l_380;
        (*l_372) ^= p_56;
        (*l_372) = (safe_lshift_func_int8_t_s_u((((*p_1019->g_33) = (safe_unary_minus_func_int64_t_s((safe_mul_func_uint64_t_u_u(((&p_1019->g_179[4] != (void*)0) , (((l_364[2][4] & (p_1019->g_comm_values[p_1019->tid] == (safe_lshift_func_int8_t_s_u(0x10L, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(l_392.yy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(3UL, 0x6DL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_393.sa5)), 0xB3L, 0x5DL)).even))).xxxx)))).even, ((VECTOR(uint8_t, 2))(l_394.sc3))))).even)))) | ((((safe_unary_minus_func_uint8_t_u(0xB1L)) <= l_378.f0) < p_56) > (*p_1019->g_33))) < 0xFA885A27DE33565DL)), 0UL))))) >= 1L), p_1019->g_396));
    }
    else
    { /* block id: 219 */
        int64_t l_401 = 0x50E5571A8812CF31L;
        int32_t l_402 = 1L;
        VECTOR(uint16_t, 4) l_403 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65533UL), 65533UL);
        VECTOR(uint32_t, 8) l_404 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967295UL), 4294967295UL), 4294967295UL, 7UL, 4294967295UL);
        uint32_t *l_405 = (void*)0;
        uint32_t *l_406 = (void*)0;
        uint32_t *l_407[8][3];
        int32_t l_412 = 0x5FD0AF04L;
        VECTOR(uint8_t, 2) l_416 = (VECTOR(uint8_t, 2))(0xB0L, 0x0AL);
        int16_t *l_417 = &p_1019->g_343;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 3; j++)
                l_407[i][j] = (void*)0;
        }
        (*p_1019->g_397) = (*p_1019->g_352);
        (*l_372) |= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x16E7423AL, ((safe_sub_func_int8_t_s_s((l_401 = l_400), l_402)) || (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(l_403.zy)).xxyy, (uint16_t)(p_1019->g_212.sa && GROUP_DIVERGE(1, 1)), (uint16_t)(((((((l_402 |= ((VECTOR(uint32_t, 8))(l_404.s40732156)).s4) || ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0xB0F4L, (l_412 || (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(p_1019->g_415.wzzxxzwx)).s64, ((VECTOR(uint8_t, 8))(l_416.xxxyxxxx)).s66))).odd, ((void*)0 != l_417)))))) != (p_1019->g_28.y , p_1019->g_263)), p_56)) != p_56)) , p_56) == p_1019->g_4) , 0x1FA8719613A48237L) , &p_1019->g_235[0]) == (void*)0)))).xzxxwzzzywwzwxxw)).s9 > (-9L))), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x774F5656L)), ((VECTOR(int32_t, 4))(1L)), l_418, ((VECTOR(int32_t, 2))(0x308613A9L)), 0x5EB3AF60L)).s0, ((VECTOR(int32_t, 8))(0x0248ECBAL)), 1L, (-9L), (**p_1019->g_397), 0x31F56A83L, l_412, (-1L), (-6L))).s4939, ((VECTOR(int32_t, 4))(8L))))).z;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1019->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u(p_1019->g_213.sd, 10))][(safe_mod_func_uint32_t_u_u(p_1019->tid, 23))]));
        for (p_1019->g_259 = 0; (p_1019->g_259 == (-11)); p_1019->g_259 = safe_sub_func_int8_t_s_s(p_1019->g_259, 6))
        { /* block id: 229 */
            struct S0 l_421 = {0L};
            return l_421;
        }
    }
    return l_349;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_34 p_1019->g_59
 * writes: p_1019->g_49
 */
int8_t * func_57(uint16_t  p_58, struct S2 * p_1019)
{ /* block id: 16 */
    (*p_1019->g_59) = p_1019->g_34;
    return &p_1019->g_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1019->g_173 p_1019->g_180 p_1019->g_182 p_1019->g_43 p_1019->g_196 p_1019->g_33 p_1019->g_34 p_1019->g_48 p_1019->g_201 p_1019->g_49 p_1019->g_250 p_1019->g_212 p_1019->g_264 p_1019->g_267 p_1019->g_314
 * writes: p_1019->g_172 p_1019->g_179 p_1019->g_28 p_1019->g_195 p_1019->g_49 p_1019->g_201 p_1019->g_196 p_1019->g_43 p_1019->g_59 p_1019->g_250 p_1019->g_264 p_1019->g_268 p_1019->g_34 p_1019->g_314
 */
int32_t  func_62(uint8_t  p_63, int32_t * p_64, int32_t  p_65, struct S2 * p_1019)
{ /* block id: 25 */
    uint32_t *l_171 = &p_1019->g_172;
    struct S0 l_177[8] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
    VECTOR(uint64_t, 8) l_178 = (VECTOR(uint64_t, 8))(0x0A4866C57027B00CL, (VECTOR(uint64_t, 4))(0x0A4866C57027B00CL, (VECTOR(uint64_t, 2))(0x0A4866C57027B00CL, 1UL), 1UL), 1UL, 0x0A4866C57027B00CL, 1UL);
    uint16_t *l_189 = (void*)0;
    uint16_t *l_190 = (void*)0;
    uint16_t *l_191 = (void*)0;
    uint16_t *l_192 = (void*)0;
    uint16_t *l_193 = (void*)0;
    int64_t *l_194[1];
    int32_t *l_197 = &p_1019->g_49;
    uint8_t l_198 = 0x2BL;
    int32_t l_200 = 9L;
    VECTOR(int8_t, 2) l_228 = (VECTOR(int8_t, 2))(0L, 1L);
    uint32_t *l_239 = &p_1019->g_172;
    int32_t l_248[6][1][2];
    struct S0 *l_317 = &l_177[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_194[i] = (void*)0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_248[i][j][k] = 0L;
        }
    }
    if ((atomic_inc(&p_1019->l_atomic_input[12]) == 1))
    { /* block id: 27 */
        VECTOR(int32_t, 16) l_73 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x04C7B934L), 0x04C7B934L), 0x04C7B934L, (-1L), 0x04C7B934L, (VECTOR(int32_t, 2))((-1L), 0x04C7B934L), (VECTOR(int32_t, 2))((-1L), 0x04C7B934L), (-1L), 0x04C7B934L, (-1L), 0x04C7B934L);
        int32_t l_74[8] = {0x71475AC3L,0x71475AC3L,0x71475AC3L,0x71475AC3L,0x71475AC3L,0x71475AC3L,0x71475AC3L,0x71475AC3L};
        int32_t l_75 = 0x0DD146F1L;
        int32_t *l_76 = &l_75;
        int32_t *l_77 = (void*)0;
        int i;
        l_74[2] |= ((VECTOR(int32_t, 4))(l_73.sceb0)).w;
        l_73.s0 &= l_75;
        l_77 = l_76;
        unsigned int result = 0;
        result += l_73.sf;
        result += l_73.se;
        result += l_73.sd;
        result += l_73.sc;
        result += l_73.sb;
        result += l_73.sa;
        result += l_73.s9;
        result += l_73.s8;
        result += l_73.s7;
        result += l_73.s6;
        result += l_73.s5;
        result += l_73.s4;
        result += l_73.s3;
        result += l_73.s2;
        result += l_73.s1;
        result += l_73.s0;
        int l_74_i0;
        for (l_74_i0 = 0; l_74_i0 < 8; l_74_i0++) {
            result += l_74[l_74_i0];
        }
        result += l_75;
        atomic_add(&p_1019->l_special_values[12], result);
    }
    else
    { /* block id: 31 */
        (1 + 1);
    }
    if ((atomic_inc(&p_1019->l_atomic_input[18]) == 6))
    { /* block id: 35 */
        int16_t l_78 = 0x3D26L;
        union U1 l_152 = {{-1L}};/* VOLATILE GLOBAL l_152 */
        int32_t l_155 = 0x52D8D885L;
        int32_t *l_154 = &l_155;
        int32_t **l_153 = &l_154;
        int32_t **l_156 = &l_154;
        uint16_t l_157 = 65535UL;
        VECTOR(int64_t, 16) l_158 = (VECTOR(int64_t, 16))(0x245DBAEAE63DA663L, (VECTOR(int64_t, 4))(0x245DBAEAE63DA663L, (VECTOR(int64_t, 2))(0x245DBAEAE63DA663L, 1L), 1L), 1L, 0x245DBAEAE63DA663L, 1L, (VECTOR(int64_t, 2))(0x245DBAEAE63DA663L, 1L), (VECTOR(int64_t, 2))(0x245DBAEAE63DA663L, 1L), 0x245DBAEAE63DA663L, 1L, 0x245DBAEAE63DA663L, 1L);
        int32_t l_159 = 0x7DAC8820L;
        uint16_t l_160 = 0xAA86L;
        int32_t l_161[5];
        VECTOR(uint32_t, 2) l_162 = (VECTOR(uint32_t, 2))(1UL, 0x55F75C09L);
        union U1 l_163 = {{0x3FE1AB3331872FA3L}};/* VOLATILE GLOBAL l_163 */
        uint32_t l_164 = 4294967291UL;
        uint16_t l_165 = 1UL;
        struct S0 l_166 = {0x2514DC0AA95C4C3CL};
        uint32_t l_167 = 0x6EEA41B1L;
        int32_t l_168 = 9L;
        int i;
        for (i = 0; i < 5; i++)
            l_161[i] = 0x6DEFA84FL;
        if (l_78)
        { /* block id: 36 */
            int64_t l_79 = 0L;
            int64_t l_80 = (-1L);
            uint32_t l_81 = 4294967288UL;
            ++l_81;
            for (l_80 = 0; (l_80 < 0); l_80++)
            { /* block id: 40 */
                int32_t l_87 = 0x2170516AL;
                int32_t *l_86[8] = {&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87};
                int32_t *l_88 = &l_87;
                uint32_t l_89 = 4294967295UL;
                VECTOR(int32_t, 2) l_117 = (VECTOR(int32_t, 2))(0x386B6EF1L, (-8L));
                uint8_t l_118 = 0x05L;
                uint32_t l_119 = 4294967288UL;
                int16_t l_120 = (-1L);
                int32_t l_121 = (-4L);
                VECTOR(int32_t, 8) l_122 = (VECTOR(int32_t, 8))(0x36A2D9A9L, (VECTOR(int32_t, 4))(0x36A2D9A9L, (VECTOR(int32_t, 2))(0x36A2D9A9L, 0x550EE726L), 0x550EE726L), 0x550EE726L, 0x36A2D9A9L, 0x550EE726L);
                VECTOR(int32_t, 2) l_123 = (VECTOR(int32_t, 2))(0L, 0L);
                int16_t l_124 = 0x4D72L;
                uint64_t l_125[2];
                VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(0x693423A3L, 0L);
                VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))(0x6CE6111DL, (VECTOR(int32_t, 2))(0x6CE6111DL, (-10L)), (-10L));
                int32_t l_128 = 0x2EB29FA7L;
                int16_t l_129 = 0x3645L;
                int i;
                for (i = 0; i < 2; i++)
                    l_125[i] = 0x2099EBF9289730A7L;
                l_88 = (l_86[1] = (void*)0);
                if (l_89)
                { /* block id: 43 */
                    int32_t l_90 = 0x7AF0C8B8L;
                    union U1 l_100 = {{2L}};/* VOLATILE GLOBAL l_100 */
                    union U1 *l_99 = &l_100;
                    union U1 *l_101 = &l_100;
                    VECTOR(int32_t, 8) l_102 = (VECTOR(int32_t, 8))(0x6B001120L, (VECTOR(int32_t, 4))(0x6B001120L, (VECTOR(int32_t, 2))(0x6B001120L, 0x42F6E581L), 0x42F6E581L), 0x42F6E581L, 0x6B001120L, 0x42F6E581L);
                    VECTOR(int32_t, 2) l_103 = (VECTOR(int32_t, 2))(0x71DDE4E4L, 0x44755875L);
                    int64_t l_104 = (-6L);
                    int i;
                    for (l_90 = 9; (l_90 > (-16)); --l_90)
                    { /* block id: 46 */
                        int16_t l_93 = 0x6AF7L;
                        int16_t l_94[7] = {0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L,0x23D9L};
                        int32_t l_95 = 1L;
                        uint32_t l_96 = 0UL;
                        int i;
                        l_96--;
                    }
                    l_101 = l_99;
                    l_90 &= ((VECTOR(int32_t, 8))(l_102.s14356341)).s2;
                    l_104 &= l_103.x;
                }
                else
                { /* block id: 52 */
                    struct S0 l_105 = {0x3BDC21833D8312EDL};
                    struct S0 l_106 = {-1L};
                    l_106 = l_105;
                    l_86[5] = ((l_89 = FAKE_DIVERGE(p_1019->local_2_offset, get_local_id(2), 10)) , (void*)0);
                    for (l_106.f0 = (-4); (l_106.f0 != 20); ++l_106.f0)
                    { /* block id: 58 */
                        union U1 *l_109 = (void*)0;
                        union U1 *l_110 = (void*)0;
                        union U1 *l_111 = (void*)0;
                        struct S0 l_113[4] = {{0x27FFA30257628AE8L},{0x27FFA30257628AE8L},{0x27FFA30257628AE8L},{0x27FFA30257628AE8L}};
                        struct S0 *l_112 = &l_113[2];
                        uint64_t l_114 = 0x57EB90776C5754D5L;
                        uint32_t l_115[5][1];
                        int16_t l_116 = 0x40D6L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_115[i][j] = 0UL;
                        }
                        l_111 = (l_110 = l_109);
                        l_112 = l_112;
                        l_116 = (l_115[2][0] = l_114);
                    }
                }
                if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_117.yy)).yxxy)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(7L, 0x2484370AL)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_118, ((VECTOR(int32_t, 2))((-1L), 0x58CF631BL)), 0x5DB27898L)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))((l_120 = l_119), 0x21886388L, 0x37C3E796L, 0L)).zxyxywxy, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x20A7086DL, (-2L))), 8L, 0x5696F087L)).even, ((VECTOR(int32_t, 8))(0x5BCF7219L, ((VECTOR(int32_t, 2))(1L, (-1L))), 0x52F2FD22L, (-2L), 0x0FB8DA5BL, 1L, 3L)).s73))).yxyyyxyxyxxxyyyx)).odd, ((VECTOR(int32_t, 16))(0x485D133FL, l_121, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_122.s55)).xxyyyyyyyyxxxyxy)), ((VECTOR(int32_t, 4))(l_123.yyxx)).wwxxxwwwwzxxwwzz))).sb771)), (-7L), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))((l_125[0] = l_124), 0x6065F2B7L, ((VECTOR(int32_t, 2))(l_126.xy)), (-7L), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_127.zyyy)).lo)), 0x4A710607L, 0x2AE7FF6FL)))).hi))), 0x10D2121AL, l_128, ((VECTOR(int32_t, 4))(5L)), 0x70AA6A4DL, 5L, (-6L))), ((VECTOR(int32_t, 16))(6L))))).s27)))).hi , l_129), ((VECTOR(int32_t, 8))(0L)))).even, ((VECTOR(int32_t, 8))(0x11C586F4L))))).s0023503172276024)).sa7e5)).xzxxxzxw)), ((VECTOR(int32_t, 8))(1L))))))))))).odd))).wyyzzyzyxwxxyyyx, ((VECTOR(int32_t, 16))(0x7B65799CL))))).s72, ((VECTOR(int32_t, 2))(1L)))))))).xyxyyxyx, ((VECTOR(int32_t, 8))(1L))))).s1606370110261307, ((VECTOR(int32_t, 16))(0x177FA41FL))))).s08, ((VECTOR(int32_t, 2))(0x6B94EFEAL))))), 9L, 0x6E4AE6ECL)).s6773263071251616)).sa, ((VECTOR(int32_t, 2))(0x1382D961L)), ((VECTOR(int32_t, 4))(0x154A6F35L)), 0x462C2F11L)).s4 , (-3L)))
                { /* block id: 68 */
                    union U1 l_131 = {{0x1FDE04AB730D59BCL}};/* VOLATILE GLOBAL l_131 */
                    union U1 *l_130 = &l_131;
                    union U1 *l_132 = &l_131;
                    l_132 = l_130;
                }
                else
                { /* block id: 70 */
                    VECTOR(uint32_t, 16) l_133 = (VECTOR(uint32_t, 16))(0x642D8EDDL, (VECTOR(uint32_t, 4))(0x642D8EDDL, (VECTOR(uint32_t, 2))(0x642D8EDDL, 4294967290UL), 4294967290UL), 4294967290UL, 0x642D8EDDL, 4294967290UL, (VECTOR(uint32_t, 2))(0x642D8EDDL, 4294967290UL), (VECTOR(uint32_t, 2))(0x642D8EDDL, 4294967290UL), 0x642D8EDDL, 4294967290UL, 0x642D8EDDL, 4294967290UL);
                    int32_t l_134 = 0x610A321FL;
                    uint8_t l_135 = 0x88L;
                    int16_t l_143 = (-1L);
                    int16_t l_144 = 0x26CDL;
                    int i;
                    if ((l_133.sa , (l_135 |= l_134)))
                    { /* block id: 72 */
                        uint32_t l_136 = 1UL;
                        l_136--;
                    }
                    else
                    { /* block id: 74 */
                        uint32_t l_139 = 0x28CD2B34L;
                        uint32_t l_140 = 0UL;
                        l_139 = 0L;
                        --l_140;
                    }
                    l_144 ^= (l_134 &= l_143);
                }
            }
        }
        else
        { /* block id: 82 */
            union U1 l_145 = {{0x1019322E619775E7L}};/* VOLATILE GLOBAL l_145 */
            int32_t l_147 = 0L;
            int32_t *l_146 = &l_147;
            int32_t *l_148 = &l_147;
            uint8_t l_149 = 1UL;
            l_148 = (l_145 , l_146);
            --l_149;
        }
        l_156 = (l_152 , l_153);
        l_168 ^= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x390CL, 0x44B2L, 0x2A46L, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((l_164 = (l_157 , ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_158.s94)))).even , l_159) , (l_78 |= ((l_160 , l_161[0]) , (((VECTOR(uint32_t, 4))(l_162.xxxx)).z , (l_163 , 0x3111L))))))), l_165, 0x586DL, 0x421FL)).even)).yyxxyyxx)), (int16_t)(l_78 = (l_166 , 1L)), (int16_t)0L))).s0, l_167, 1L, 0x7213L, 0x449FL)))).s56, ((VECTOR(uint16_t, 2))(0x0DCDL))))).even;
        unsigned int result = 0;
        result += l_78;
        result += l_152.f0.f0;
        result += l_152.f1;
        result += l_152.f2;
        result += l_152.f3.f0;
        result += l_152.f4;
        result += l_155;
        result += l_157;
        result += l_158.sf;
        result += l_158.se;
        result += l_158.sd;
        result += l_158.sc;
        result += l_158.sb;
        result += l_158.sa;
        result += l_158.s9;
        result += l_158.s8;
        result += l_158.s7;
        result += l_158.s6;
        result += l_158.s5;
        result += l_158.s4;
        result += l_158.s3;
        result += l_158.s2;
        result += l_158.s1;
        result += l_158.s0;
        result += l_159;
        result += l_160;
        int l_161_i0;
        for (l_161_i0 = 0; l_161_i0 < 5; l_161_i0++) {
            result += l_161[l_161_i0];
        }
        result += l_162.y;
        result += l_162.x;
        result += l_163.f0.f0;
        result += l_163.f1;
        result += l_163.f2;
        result += l_163.f3.f0;
        result += l_163.f4;
        result += l_164;
        result += l_165;
        result += l_166.f0;
        result += l_167;
        result += l_168;
        atomic_add(&p_1019->l_special_values[18], result);
    }
    else
    { /* block id: 91 */
        (1 + 1);
    }
    if ((safe_rshift_func_int16_t_s_s(((((*l_171) = 0x3BD2D337L) , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1019->g_173.s2744)).zxwwzwww)))).s5) ^ (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((l_177[3] , ((p_1019->g_179[4] = ((VECTOR(uint64_t, 16))(l_178.s2073304475315525)).s4) , (((((((((p_1019->g_180 == p_64) || ((VECTOR(uint32_t, 16))(p_1019->g_182.yxxyyxxyxyxxyyxy)).s0) , (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1019->local_2_offset, get_local_id(2), 10), (safe_lshift_func_uint16_t_u_s((p_1019->g_28.x = (0x5E85E3D3L >= (*p_64))), 7)))), (((*l_197) = (((p_1019->g_195[1][0] = 0x19209CF466BE1257L) , &l_177[7]) != ((p_1019->g_196 , 0xC23F7838L) , &l_177[3]))) >= GROUP_DIVERGE(1, 1))))) == p_1019->g_43) < (*p_1019->g_33)) >= p_63) | l_178.s4) & l_198) , 0UL))))), p_1019->g_48))), p_1019->g_196.f0)))
    { /* block id: 99 */
        int32_t *l_199[3][10] = {{&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43},{&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43},{&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43,&p_1019->g_43,&p_1019->g_49,&p_1019->g_49,&p_1019->g_43}};
        int i, j;
        --p_1019->g_201[0][6];
        for (p_65 = 0; (p_65 >= 21); p_65 = safe_add_func_uint16_t_u_u(p_65, 8))
        { /* block id: 103 */
            struct S0 l_206 = {1L};
            struct S0 *l_207 = &p_1019->g_196;
            (*l_207) = l_206;
            (*l_197) ^= ((void*)0 == &p_1019->g_59);
        }
    }
    else
    { /* block id: 107 */
        VECTOR(int32_t, 16) l_216 = (VECTOR(int32_t, 16))(0x1C59D2C9L, (VECTOR(int32_t, 4))(0x1C59D2C9L, (VECTOR(int32_t, 2))(0x1C59D2C9L, 0x3BE093A5L), 0x3BE093A5L), 0x3BE093A5L, 0x1C59D2C9L, 0x3BE093A5L, (VECTOR(int32_t, 2))(0x1C59D2C9L, 0x3BE093A5L), (VECTOR(int32_t, 2))(0x1C59D2C9L, 0x3BE093A5L), 0x1C59D2C9L, 0x3BE093A5L, 0x1C59D2C9L, 0x3BE093A5L);
        int32_t l_249 = 0x79E53DDBL;
        union U1 *l_307 = (void*)0;
        int32_t *l_308 = &p_1019->g_43;
        int32_t *l_309 = &p_1019->g_263;
        int32_t *l_310 = &l_200;
        int32_t *l_311 = &p_1019->g_263;
        int32_t *l_312[4];
        int32_t l_313[2];
        int i;
        for (i = 0; i < 4; i++)
            l_312[i] = &l_200;
        for (i = 0; i < 2; i++)
            l_313[i] = 0x7F8A22B9L;
        if ((*p_64))
        { /* block id: 108 */
            VECTOR(int32_t, 2) l_215 = (VECTOR(int32_t, 2))(1L, 0x7DDE3D06L);
            VECTOR(uint32_t, 16) l_222 = (VECTOR(uint32_t, 16))(0xC32A7BFFL, (VECTOR(uint32_t, 4))(0xC32A7BFFL, (VECTOR(uint32_t, 2))(0xC32A7BFFL, 4294967295UL), 4294967295UL), 4294967295UL, 0xC32A7BFFL, 4294967295UL, (VECTOR(uint32_t, 2))(0xC32A7BFFL, 4294967295UL), (VECTOR(uint32_t, 2))(0xC32A7BFFL, 4294967295UL), 0xC32A7BFFL, 4294967295UL, 0xC32A7BFFL, 4294967295UL);
            int32_t l_240 = 4L;
            int8_t l_244 = 1L;
            int i;
            for (p_1019->g_49 = 0; (p_1019->g_49 > (-6)); --p_1019->g_49)
            { /* block id: 111 */
                VECTOR(int32_t, 4) l_210 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                VECTOR(int32_t, 2) l_211 = (VECTOR(int32_t, 2))(0x79091060L, 5L);
                int32_t l_232[5];
                int32_t **l_233 = &l_197;
                uint64_t *l_234 = (void*)0;
                uint32_t **l_238 = &l_171;
                union U1 *l_241 = &p_1019->g_242;
                int64_t *l_243 = &p_1019->g_196.f0;
                uint16_t *l_245[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                int32_t *l_246 = &p_1019->g_43;
                int32_t *l_247[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_232[i] = 1L;
                for (i = 0; i < 5; i++)
                    l_247[i] = &l_232[1];
                (*p_64) = (((((((VECTOR(int32_t, 8))(0x66D9D4B4L, 0x1FF9CF07L, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_210.xxzz)))).xyzxzywy)).lo, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_211.xyyyxxyxxxyyyxxy)).sb5)).xxxxxyyyxyyxxxxx)).s6a9c, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1019->g_212.s8952072d0b3d7231)).lo)))).hi, ((VECTOR(int32_t, 16))(p_1019->g_213.sd05f3529b9cdfa42)).s2619))), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1019->g_214.yyyyyxyx)))).s55, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(0L, 0L)).yxyyxyxyyxxxyyyy, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(l_215.xxxx)).zxxyxxxywxxwzwwx))).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_216.s0b06)).ywzwxwyx, ((VECTOR(int32_t, 4))(((+((((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((*l_243) &= (p_1019->g_221 != ((((*l_197) && ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_222.s1393)))).zwwzzwzw, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x7553D69DL, 1UL)), 4294967289UL, (((l_216.sc ^ ((safe_mod_func_uint64_t_u_u((l_240 = ((safe_unary_minus_func_uint64_t_u(((((*l_238) = (((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((((safe_mul_func_int8_t_s_s((l_232[1] = ((VECTOR(int8_t, 4))((p_1019->g_4 != l_216.s8), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(l_228.xx)).xyxxyyxy, ((VECTOR(int8_t, 8))(p_1019->g_229.s64133605))))).s36, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1019->g_230.wxywyyyxwxzzwyzw)).s4976)).even, ((VECTOR(int8_t, 8))(p_1019->g_231.s46541140)).s50))), 6L)).z), (((*l_233) = &l_200) != &p_65))) , ((((p_1019->g_235[0] = p_65) || (safe_sub_func_uint16_t_u_u((0x0C3CE80497F3A2DDL != p_1019->g_comm_values[p_1019->tid]), GROUP_DIVERGE(2, 1)))) , p_1019->g_201[1][3]) ^ FAKE_DIVERGE(p_1019->group_1_offset, get_group_id(1), 10))) <= GROUP_DIVERGE(0, 1)) ^ p_1019->g_213.s7), (-1L), 0x677575D801473823L, 0x345A6AC65B612D4DL)).xzxyywwxywyxyyww, ((VECTOR(int64_t, 16))(0x1462849A9B351D39L)), ((VECTOR(int64_t, 16))((-1L)))))).even)).hi, ((VECTOR(int64_t, 4))((-1L)))))).y , (void*)0)) != l_239) & l_222.s5))) < p_63)), 4L)) & 0xAD67L)) < (-7L)) , 0xB4EDF281L), 0xCE1A13B9L, 0UL, 0x98E5AE54L, 0xAC0EC065L))))).s2) & FAKE_DIVERGE(p_1019->global_2_offset, get_global_id(2), 10)) , l_241))), p_1019->g_comm_values[p_1019->tid])), (*p_64))) & l_215.y) | p_1019->g_34) , (**l_233))) & p_1019->g_43), p_65, (-5L), 0x1F683CE6L)).xxxywwwx))), ((VECTOR(int32_t, 8))(0x591DCD4FL))))).s55, ((VECTOR(int32_t, 2))((-1L)))))).xxyyyyxyyxxyxyyy)).hi))).s7212207773254353))).sfd))), 0x27A7D874L, 1L)).lo, ((VECTOR(int32_t, 2))(0L))))), 1L, 0L)).zyywywxw)).hi, ((VECTOR(int32_t, 4))(0x2AD3A7C0L))))), ((VECTOR(int32_t, 4))(1L)))))))), 0L, 1L)).s5 , l_244) <= l_215.x) || 0x6BL) , l_245[1][0]) != (void*)0);
                p_1019->g_59 = (void*)0;
                (*l_233) = &p_65;
                ++p_1019->g_250;
            }
            (*p_64) |= l_240;
            (*l_197) |= p_1019->g_212.s1;
        }
        else
        { /* block id: 125 */
            int8_t l_256 = 0L;
            int32_t l_257 = 0x5F79DBF3L;
            int32_t l_258 = 0x06B99CC3L;
            int32_t l_260 = 0x38B644DAL;
            int32_t l_261[1];
            int i;
            for (i = 0; i < 1; i++)
                l_261[i] = 0x4FC59C9FL;
            for (l_198 = (-8); (l_198 <= 6); l_198++)
            { /* block id: 128 */
                int32_t *l_255[6] = {&l_248[4][0][1],&l_248[4][0][1],&l_248[4][0][1],&l_248[4][0][1],&l_248[4][0][1],&l_248[4][0][1]};
                int i;
                p_1019->g_264--;
                return (*p_64);
            }
            p_1019->g_59 = &l_257;
            (*p_1019->g_267) = &l_248[3][0][1];
        }
        for (p_1019->g_34 = (-24); (p_1019->g_34 != (-19)); ++p_1019->g_34)
        { /* block id: 137 */
            int64_t *l_271 = &p_1019->g_272;
            int32_t l_277 = (-1L);
            union U1 *l_305[5];
            int i;
            for (i = 0; i < 5; i++)
                l_305[i] = &p_1019->g_306;
            (1 + 1);
        }
        p_1019->g_314[3][0][1]++;
    }
    (*l_317) = l_177[3];
    return (*p_64);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_comm_values[i] = 1;
    struct S2 c_1020;
    struct S2* p_1019 = &c_1020;
    struct S2 c_1021 = {
        0L, // p_1019->g_4
        (VECTOR(uint16_t, 2))(4UL, 0x07DDL), // p_1019->g_28
        0L, // p_1019->g_34
        &p_1019->g_34, // p_1019->g_33
        0x3B7A2E25L, // p_1019->g_43
        0x4BL, // p_1019->g_48
        (-9L), // p_1019->g_49
        &p_1019->g_49, // p_1019->g_59
        0UL, // p_1019->g_172
        (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x32L), 0x32L), 0x32L, 0x64L, 0x32L), // p_1019->g_173
        {0x45L,0x45L,0x45L,0x45L,0x45L}, // p_1019->g_179
        {0xB2ED70B5L,0xFAF5395DL,0xB2ED70B5L,0xB2ED70B5L,0xFAF5395DL,0xB2ED70B5L,0xB2ED70B5L,0xFAF5395DL,0xB2ED70B5L,0xB2ED70B5L}, // p_1019->g_181
        &p_1019->g_181[3], // p_1019->g_180
        (VECTOR(uint32_t, 2))(0UL, 0x2D788D99L), // p_1019->g_182
        {{0x50D544D0L,0x50D544D0L,0x50D544D0L},{0x50D544D0L,0x50D544D0L,0x50D544D0L},{0x50D544D0L,0x50D544D0L,0x50D544D0L},{0x50D544D0L,0x50D544D0L,0x50D544D0L}}, // p_1019->g_195
        {3L}, // p_1019->g_196
        {{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL},{4294967288UL,0UL,0xD08AE5EAL,0UL,4294967288UL,4294967288UL,0UL,0xD08AE5EAL,0UL}}, // p_1019->g_201
        (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int32_t, 2))((-9L), 0L), (VECTOR(int32_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L), // p_1019->g_212
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x31EAC38EL), 0x31EAC38EL), 0x31EAC38EL, 1L, 0x31EAC38EL, (VECTOR(int32_t, 2))(1L, 0x31EAC38EL), (VECTOR(int32_t, 2))(1L, 0x31EAC38EL), 1L, 0x31EAC38EL, 1L, 0x31EAC38EL), // p_1019->g_213
        (VECTOR(int32_t, 2))(0x3B1B58F1L, 0x69E2DA4DL), // p_1019->g_214
        (void*)0, // p_1019->g_221
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1019->g_229
        (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x6EL), 0x6EL), // p_1019->g_230
        (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 0x0FL), 0x0FL), 0x0FL, 0x2AL, 0x0FL), // p_1019->g_231
        {0x02116EFC717972E5L,0x02116EFC717972E5L,0x02116EFC717972E5L,0x02116EFC717972E5L,0x02116EFC717972E5L,0x02116EFC717972E5L}, // p_1019->g_235
        {{0x311AE36C6A78CF51L}}, // p_1019->g_242
        1UL, // p_1019->g_250
        0x78E8E59EL, // p_1019->g_259
        3L, // p_1019->g_262
        (-7L), // p_1019->g_263
        0UL, // p_1019->g_264
        &p_1019->g_263, // p_1019->g_268
        &p_1019->g_268, // p_1019->g_267
        0x004988C3F0006055L, // p_1019->g_272
        (void*)0, // p_1019->g_273
        (void*)0, // p_1019->g_274
        &p_1019->g_242.f3, // p_1019->g_284
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), // p_1019->g_303
        {{0x2498CEFA681B2EEEL}}, // p_1019->g_306
        {{{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL}},{{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL}},{{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL}},{{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL}},{{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL},{65535UL,0xE30AL,0xC719L,65528UL,0x7B02L,1UL}}}, // p_1019->g_314
        (VECTOR(uint8_t, 16))(0xBEL, (VECTOR(uint8_t, 4))(0xBEL, (VECTOR(uint8_t, 2))(0xBEL, 0x3EL), 0x3EL), 0x3EL, 0xBEL, 0x3EL, (VECTOR(uint8_t, 2))(0xBEL, 0x3EL), (VECTOR(uint8_t, 2))(0xBEL, 0x3EL), 0xBEL, 0x3EL, 0xBEL, 0x3EL), // p_1019->g_332
        0x307CL, // p_1019->g_343
        &p_1019->g_242.f3, // p_1019->g_348
        0x24796A68L, // p_1019->g_351
        {&p_1019->g_351,&p_1019->g_351,&p_1019->g_351,&p_1019->g_351}, // p_1019->g_350
        &p_1019->g_350[1], // p_1019->g_352
        &p_1019->g_350[0], // p_1019->g_353
        {{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}},{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}},{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}},{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}},{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}},{{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268},{&p_1019->g_268,&p_1019->g_268,(void*)0,&p_1019->g_268,&p_1019->g_268}}}, // p_1019->g_355
        &p_1019->g_172, // p_1019->g_377
        &p_1019->g_377, // p_1019->g_376
        &p_1019->g_376, // p_1019->g_375
        18446744073709551612UL, // p_1019->g_396
        &p_1019->g_350[0], // p_1019->g_397
        (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 4UL), 4UL), // p_1019->g_415
        &p_1019->g_242.f3, // p_1019->g_422
        0x5EL, // p_1019->g_543
        &p_1019->g_376, // p_1019->g_571
        {{0L}}, // p_1019->g_582
        (VECTOR(int8_t, 16))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, (-8L)), (-8L)), (-8L), 0x31L, (-8L), (VECTOR(int8_t, 2))(0x31L, (-8L)), (VECTOR(int8_t, 2))(0x31L, (-8L)), 0x31L, (-8L), 0x31L, (-8L)), // p_1019->g_609
        {{{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196}},{{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196}},{{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196},{&p_1019->g_196,&p_1019->g_196}}}, // p_1019->g_624
        &p_1019->g_242.f3, // p_1019->g_625
        {{{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4}},{{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4}},{{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4},{&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4,&p_1019->g_4}}}, // p_1019->g_639
        &p_1019->g_639[1][2][1], // p_1019->g_638
        (void*)0, // p_1019->g_643
        &p_1019->g_49, // p_1019->g_655
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2C137537L), 0x2C137537L), // p_1019->g_659
        (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x2CE0L), 0x2CE0L), 0x2CE0L, 65529UL, 0x2CE0L, (VECTOR(uint16_t, 2))(65529UL, 0x2CE0L), (VECTOR(uint16_t, 2))(65529UL, 0x2CE0L), 65529UL, 0x2CE0L, 65529UL, 0x2CE0L), // p_1019->g_667
        (VECTOR(uint16_t, 2))(65535UL, 0x740FL), // p_1019->g_668
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x543AL), 0x543AL), 0x543AL, 1L, 0x543AL, (VECTOR(int16_t, 2))(1L, 0x543AL), (VECTOR(int16_t, 2))(1L, 0x543AL), 1L, 0x543AL, 1L, 0x543AL), // p_1019->g_689
        (VECTOR(int16_t, 16))(0x3ECAL, (VECTOR(int16_t, 4))(0x3ECAL, (VECTOR(int16_t, 2))(0x3ECAL, 0x3483L), 0x3483L), 0x3483L, 0x3ECAL, 0x3483L, (VECTOR(int16_t, 2))(0x3ECAL, 0x3483L), (VECTOR(int16_t, 2))(0x3ECAL, 0x3483L), 0x3ECAL, 0x3483L, 0x3ECAL, 0x3483L), // p_1019->g_690
        (VECTOR(uint32_t, 2))(4294967295UL, 9UL), // p_1019->g_736
        &p_1019->g_268, // p_1019->g_759
        &p_1019->g_759, // p_1019->g_758
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7EL), 0x7EL), 0x7EL, 0L, 0x7EL), // p_1019->g_785
        0x4DB92B45L, // p_1019->g_786
        0x0BL, // p_1019->g_791
        {{{0x32A9C87BD2B91B71L}},{{0x32A9C87BD2B91B71L}},{{0x32A9C87BD2B91B71L}},{{0x32A9C87BD2B91B71L}},{{0x32A9C87BD2B91B71L}}}, // p_1019->g_817
        (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x54L), 0x54L), // p_1019->g_837
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x57L), 0x57L), // p_1019->g_839
        (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 255UL), 255UL), // p_1019->g_841
        (VECTOR(uint8_t, 16))(0x8FL, (VECTOR(uint8_t, 4))(0x8FL, (VECTOR(uint8_t, 2))(0x8FL, 0UL), 0UL), 0UL, 0x8FL, 0UL, (VECTOR(uint8_t, 2))(0x8FL, 0UL), (VECTOR(uint8_t, 2))(0x8FL, 0UL), 0x8FL, 0UL, 0x8FL, 0UL), // p_1019->g_842
        (VECTOR(int16_t, 16))(0x2BD5L, (VECTOR(int16_t, 4))(0x2BD5L, (VECTOR(int16_t, 2))(0x2BD5L, (-7L)), (-7L)), (-7L), 0x2BD5L, (-7L), (VECTOR(int16_t, 2))(0x2BD5L, (-7L)), (VECTOR(int16_t, 2))(0x2BD5L, (-7L)), 0x2BD5L, (-7L), 0x2BD5L, (-7L)), // p_1019->g_843
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_1019->g_849
        (VECTOR(int8_t, 2))(7L, (-6L)), // p_1019->g_861
        0x6DBE8475L, // p_1019->g_883
        {0L}, // p_1019->g_889
        (VECTOR(int16_t, 4))(0x46EBL, (VECTOR(int16_t, 2))(0x46EBL, 0x563EL), 0x563EL), // p_1019->g_950
        (VECTOR(int16_t, 2))(0x7E61L, 0x4CADL), // p_1019->g_951
        (VECTOR(int16_t, 4))(0x2902L, (VECTOR(int16_t, 2))(0x2902L, 0x4ECDL), 0x4ECDL), // p_1019->g_952
        (VECTOR(int16_t, 4))(0x3359L, (VECTOR(int16_t, 2))(0x3359L, 0x238AL), 0x238AL), // p_1019->g_954
        (VECTOR(int16_t, 4))(0x38E8L, (VECTOR(int16_t, 2))(0x38E8L, 0L), 0L), // p_1019->g_955
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 6L), 6L), // p_1019->g_965
        (VECTOR(int16_t, 16))(0x4711L, (VECTOR(int16_t, 4))(0x4711L, (VECTOR(int16_t, 2))(0x4711L, 0x47D6L), 0x47D6L), 0x47D6L, 0x4711L, 0x47D6L, (VECTOR(int16_t, 2))(0x4711L, 0x47D6L), (VECTOR(int16_t, 2))(0x4711L, 0x47D6L), 0x4711L, 0x47D6L, 0x4711L, 0x47D6L), // p_1019->g_990
        (VECTOR(int16_t, 16))(0x2D81L, (VECTOR(int16_t, 4))(0x2D81L, (VECTOR(int16_t, 2))(0x2D81L, 0x457BL), 0x457BL), 0x457BL, 0x2D81L, 0x457BL, (VECTOR(int16_t, 2))(0x2D81L, 0x457BL), (VECTOR(int16_t, 2))(0x2D81L, 0x457BL), 0x2D81L, 0x457BL, 0x2D81L, 0x457BL), // p_1019->g_991
        (VECTOR(int16_t, 2))(0x62C2L, 0x5659L), // p_1019->g_992
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), // p_1019->g_993
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 3L), 3L), // p_1019->g_1001
        0, // p_1019->v_collective
        sequence_input[get_global_id(0)], // p_1019->global_0_offset
        sequence_input[get_global_id(1)], // p_1019->global_1_offset
        sequence_input[get_global_id(2)], // p_1019->global_2_offset
        sequence_input[get_local_id(0)], // p_1019->local_0_offset
        sequence_input[get_local_id(1)], // p_1019->local_1_offset
        sequence_input[get_local_id(2)], // p_1019->local_2_offset
        sequence_input[get_group_id(0)], // p_1019->group_0_offset
        sequence_input[get_group_id(1)], // p_1019->group_1_offset
        sequence_input[get_group_id(2)], // p_1019->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[0][get_linear_local_id()])), // p_1019->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1020 = c_1021;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1019);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1019->g_4, "p_1019->g_4", print_hash_value);
    transparent_crc(p_1019->g_28.x, "p_1019->g_28.x", print_hash_value);
    transparent_crc(p_1019->g_28.y, "p_1019->g_28.y", print_hash_value);
    transparent_crc(p_1019->g_34, "p_1019->g_34", print_hash_value);
    transparent_crc(p_1019->g_43, "p_1019->g_43", print_hash_value);
    transparent_crc(p_1019->g_48, "p_1019->g_48", print_hash_value);
    transparent_crc(p_1019->g_49, "p_1019->g_49", print_hash_value);
    transparent_crc(p_1019->g_172, "p_1019->g_172", print_hash_value);
    transparent_crc(p_1019->g_173.s0, "p_1019->g_173.s0", print_hash_value);
    transparent_crc(p_1019->g_173.s1, "p_1019->g_173.s1", print_hash_value);
    transparent_crc(p_1019->g_173.s2, "p_1019->g_173.s2", print_hash_value);
    transparent_crc(p_1019->g_173.s3, "p_1019->g_173.s3", print_hash_value);
    transparent_crc(p_1019->g_173.s4, "p_1019->g_173.s4", print_hash_value);
    transparent_crc(p_1019->g_173.s5, "p_1019->g_173.s5", print_hash_value);
    transparent_crc(p_1019->g_173.s6, "p_1019->g_173.s6", print_hash_value);
    transparent_crc(p_1019->g_173.s7, "p_1019->g_173.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1019->g_179[i], "p_1019->g_179[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1019->g_181[i], "p_1019->g_181[i]", print_hash_value);

    }
    transparent_crc(p_1019->g_182.x, "p_1019->g_182.x", print_hash_value);
    transparent_crc(p_1019->g_182.y, "p_1019->g_182.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1019->g_195[i][j], "p_1019->g_195[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1019->g_196.f0, "p_1019->g_196.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1019->g_201[i][j], "p_1019->g_201[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1019->g_212.s0, "p_1019->g_212.s0", print_hash_value);
    transparent_crc(p_1019->g_212.s1, "p_1019->g_212.s1", print_hash_value);
    transparent_crc(p_1019->g_212.s2, "p_1019->g_212.s2", print_hash_value);
    transparent_crc(p_1019->g_212.s3, "p_1019->g_212.s3", print_hash_value);
    transparent_crc(p_1019->g_212.s4, "p_1019->g_212.s4", print_hash_value);
    transparent_crc(p_1019->g_212.s5, "p_1019->g_212.s5", print_hash_value);
    transparent_crc(p_1019->g_212.s6, "p_1019->g_212.s6", print_hash_value);
    transparent_crc(p_1019->g_212.s7, "p_1019->g_212.s7", print_hash_value);
    transparent_crc(p_1019->g_212.s8, "p_1019->g_212.s8", print_hash_value);
    transparent_crc(p_1019->g_212.s9, "p_1019->g_212.s9", print_hash_value);
    transparent_crc(p_1019->g_212.sa, "p_1019->g_212.sa", print_hash_value);
    transparent_crc(p_1019->g_212.sb, "p_1019->g_212.sb", print_hash_value);
    transparent_crc(p_1019->g_212.sc, "p_1019->g_212.sc", print_hash_value);
    transparent_crc(p_1019->g_212.sd, "p_1019->g_212.sd", print_hash_value);
    transparent_crc(p_1019->g_212.se, "p_1019->g_212.se", print_hash_value);
    transparent_crc(p_1019->g_212.sf, "p_1019->g_212.sf", print_hash_value);
    transparent_crc(p_1019->g_213.s0, "p_1019->g_213.s0", print_hash_value);
    transparent_crc(p_1019->g_213.s1, "p_1019->g_213.s1", print_hash_value);
    transparent_crc(p_1019->g_213.s2, "p_1019->g_213.s2", print_hash_value);
    transparent_crc(p_1019->g_213.s3, "p_1019->g_213.s3", print_hash_value);
    transparent_crc(p_1019->g_213.s4, "p_1019->g_213.s4", print_hash_value);
    transparent_crc(p_1019->g_213.s5, "p_1019->g_213.s5", print_hash_value);
    transparent_crc(p_1019->g_213.s6, "p_1019->g_213.s6", print_hash_value);
    transparent_crc(p_1019->g_213.s7, "p_1019->g_213.s7", print_hash_value);
    transparent_crc(p_1019->g_213.s8, "p_1019->g_213.s8", print_hash_value);
    transparent_crc(p_1019->g_213.s9, "p_1019->g_213.s9", print_hash_value);
    transparent_crc(p_1019->g_213.sa, "p_1019->g_213.sa", print_hash_value);
    transparent_crc(p_1019->g_213.sb, "p_1019->g_213.sb", print_hash_value);
    transparent_crc(p_1019->g_213.sc, "p_1019->g_213.sc", print_hash_value);
    transparent_crc(p_1019->g_213.sd, "p_1019->g_213.sd", print_hash_value);
    transparent_crc(p_1019->g_213.se, "p_1019->g_213.se", print_hash_value);
    transparent_crc(p_1019->g_213.sf, "p_1019->g_213.sf", print_hash_value);
    transparent_crc(p_1019->g_214.x, "p_1019->g_214.x", print_hash_value);
    transparent_crc(p_1019->g_214.y, "p_1019->g_214.y", print_hash_value);
    transparent_crc(p_1019->g_229.s0, "p_1019->g_229.s0", print_hash_value);
    transparent_crc(p_1019->g_229.s1, "p_1019->g_229.s1", print_hash_value);
    transparent_crc(p_1019->g_229.s2, "p_1019->g_229.s2", print_hash_value);
    transparent_crc(p_1019->g_229.s3, "p_1019->g_229.s3", print_hash_value);
    transparent_crc(p_1019->g_229.s4, "p_1019->g_229.s4", print_hash_value);
    transparent_crc(p_1019->g_229.s5, "p_1019->g_229.s5", print_hash_value);
    transparent_crc(p_1019->g_229.s6, "p_1019->g_229.s6", print_hash_value);
    transparent_crc(p_1019->g_229.s7, "p_1019->g_229.s7", print_hash_value);
    transparent_crc(p_1019->g_230.x, "p_1019->g_230.x", print_hash_value);
    transparent_crc(p_1019->g_230.y, "p_1019->g_230.y", print_hash_value);
    transparent_crc(p_1019->g_230.z, "p_1019->g_230.z", print_hash_value);
    transparent_crc(p_1019->g_230.w, "p_1019->g_230.w", print_hash_value);
    transparent_crc(p_1019->g_231.s0, "p_1019->g_231.s0", print_hash_value);
    transparent_crc(p_1019->g_231.s1, "p_1019->g_231.s1", print_hash_value);
    transparent_crc(p_1019->g_231.s2, "p_1019->g_231.s2", print_hash_value);
    transparent_crc(p_1019->g_231.s3, "p_1019->g_231.s3", print_hash_value);
    transparent_crc(p_1019->g_231.s4, "p_1019->g_231.s4", print_hash_value);
    transparent_crc(p_1019->g_231.s5, "p_1019->g_231.s5", print_hash_value);
    transparent_crc(p_1019->g_231.s6, "p_1019->g_231.s6", print_hash_value);
    transparent_crc(p_1019->g_231.s7, "p_1019->g_231.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1019->g_235[i], "p_1019->g_235[i]", print_hash_value);

    }
    transparent_crc(p_1019->g_242.f0.f0, "p_1019->g_242.f0.f0", print_hash_value);
    transparent_crc(p_1019->g_250, "p_1019->g_250", print_hash_value);
    transparent_crc(p_1019->g_259, "p_1019->g_259", print_hash_value);
    transparent_crc(p_1019->g_262, "p_1019->g_262", print_hash_value);
    transparent_crc(p_1019->g_263, "p_1019->g_263", print_hash_value);
    transparent_crc(p_1019->g_264, "p_1019->g_264", print_hash_value);
    transparent_crc(p_1019->g_272, "p_1019->g_272", print_hash_value);
    transparent_crc(p_1019->g_303.x, "p_1019->g_303.x", print_hash_value);
    transparent_crc(p_1019->g_303.y, "p_1019->g_303.y", print_hash_value);
    transparent_crc(p_1019->g_303.z, "p_1019->g_303.z", print_hash_value);
    transparent_crc(p_1019->g_303.w, "p_1019->g_303.w", print_hash_value);
    transparent_crc(p_1019->g_306.f0.f0, "p_1019->g_306.f0.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1019->g_314[i][j][k], "p_1019->g_314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1019->g_332.s0, "p_1019->g_332.s0", print_hash_value);
    transparent_crc(p_1019->g_332.s1, "p_1019->g_332.s1", print_hash_value);
    transparent_crc(p_1019->g_332.s2, "p_1019->g_332.s2", print_hash_value);
    transparent_crc(p_1019->g_332.s3, "p_1019->g_332.s3", print_hash_value);
    transparent_crc(p_1019->g_332.s4, "p_1019->g_332.s4", print_hash_value);
    transparent_crc(p_1019->g_332.s5, "p_1019->g_332.s5", print_hash_value);
    transparent_crc(p_1019->g_332.s6, "p_1019->g_332.s6", print_hash_value);
    transparent_crc(p_1019->g_332.s7, "p_1019->g_332.s7", print_hash_value);
    transparent_crc(p_1019->g_332.s8, "p_1019->g_332.s8", print_hash_value);
    transparent_crc(p_1019->g_332.s9, "p_1019->g_332.s9", print_hash_value);
    transparent_crc(p_1019->g_332.sa, "p_1019->g_332.sa", print_hash_value);
    transparent_crc(p_1019->g_332.sb, "p_1019->g_332.sb", print_hash_value);
    transparent_crc(p_1019->g_332.sc, "p_1019->g_332.sc", print_hash_value);
    transparent_crc(p_1019->g_332.sd, "p_1019->g_332.sd", print_hash_value);
    transparent_crc(p_1019->g_332.se, "p_1019->g_332.se", print_hash_value);
    transparent_crc(p_1019->g_332.sf, "p_1019->g_332.sf", print_hash_value);
    transparent_crc(p_1019->g_343, "p_1019->g_343", print_hash_value);
    transparent_crc(p_1019->g_351, "p_1019->g_351", print_hash_value);
    transparent_crc(p_1019->g_396, "p_1019->g_396", print_hash_value);
    transparent_crc(p_1019->g_415.x, "p_1019->g_415.x", print_hash_value);
    transparent_crc(p_1019->g_415.y, "p_1019->g_415.y", print_hash_value);
    transparent_crc(p_1019->g_415.z, "p_1019->g_415.z", print_hash_value);
    transparent_crc(p_1019->g_415.w, "p_1019->g_415.w", print_hash_value);
    transparent_crc(p_1019->g_543, "p_1019->g_543", print_hash_value);
    transparent_crc(p_1019->g_582.f0.f0, "p_1019->g_582.f0.f0", print_hash_value);
    transparent_crc(p_1019->g_609.s0, "p_1019->g_609.s0", print_hash_value);
    transparent_crc(p_1019->g_609.s1, "p_1019->g_609.s1", print_hash_value);
    transparent_crc(p_1019->g_609.s2, "p_1019->g_609.s2", print_hash_value);
    transparent_crc(p_1019->g_609.s3, "p_1019->g_609.s3", print_hash_value);
    transparent_crc(p_1019->g_609.s4, "p_1019->g_609.s4", print_hash_value);
    transparent_crc(p_1019->g_609.s5, "p_1019->g_609.s5", print_hash_value);
    transparent_crc(p_1019->g_609.s6, "p_1019->g_609.s6", print_hash_value);
    transparent_crc(p_1019->g_609.s7, "p_1019->g_609.s7", print_hash_value);
    transparent_crc(p_1019->g_609.s8, "p_1019->g_609.s8", print_hash_value);
    transparent_crc(p_1019->g_609.s9, "p_1019->g_609.s9", print_hash_value);
    transparent_crc(p_1019->g_609.sa, "p_1019->g_609.sa", print_hash_value);
    transparent_crc(p_1019->g_609.sb, "p_1019->g_609.sb", print_hash_value);
    transparent_crc(p_1019->g_609.sc, "p_1019->g_609.sc", print_hash_value);
    transparent_crc(p_1019->g_609.sd, "p_1019->g_609.sd", print_hash_value);
    transparent_crc(p_1019->g_609.se, "p_1019->g_609.se", print_hash_value);
    transparent_crc(p_1019->g_609.sf, "p_1019->g_609.sf", print_hash_value);
    transparent_crc(p_1019->g_659.x, "p_1019->g_659.x", print_hash_value);
    transparent_crc(p_1019->g_659.y, "p_1019->g_659.y", print_hash_value);
    transparent_crc(p_1019->g_659.z, "p_1019->g_659.z", print_hash_value);
    transparent_crc(p_1019->g_659.w, "p_1019->g_659.w", print_hash_value);
    transparent_crc(p_1019->g_667.s0, "p_1019->g_667.s0", print_hash_value);
    transparent_crc(p_1019->g_667.s1, "p_1019->g_667.s1", print_hash_value);
    transparent_crc(p_1019->g_667.s2, "p_1019->g_667.s2", print_hash_value);
    transparent_crc(p_1019->g_667.s3, "p_1019->g_667.s3", print_hash_value);
    transparent_crc(p_1019->g_667.s4, "p_1019->g_667.s4", print_hash_value);
    transparent_crc(p_1019->g_667.s5, "p_1019->g_667.s5", print_hash_value);
    transparent_crc(p_1019->g_667.s6, "p_1019->g_667.s6", print_hash_value);
    transparent_crc(p_1019->g_667.s7, "p_1019->g_667.s7", print_hash_value);
    transparent_crc(p_1019->g_667.s8, "p_1019->g_667.s8", print_hash_value);
    transparent_crc(p_1019->g_667.s9, "p_1019->g_667.s9", print_hash_value);
    transparent_crc(p_1019->g_667.sa, "p_1019->g_667.sa", print_hash_value);
    transparent_crc(p_1019->g_667.sb, "p_1019->g_667.sb", print_hash_value);
    transparent_crc(p_1019->g_667.sc, "p_1019->g_667.sc", print_hash_value);
    transparent_crc(p_1019->g_667.sd, "p_1019->g_667.sd", print_hash_value);
    transparent_crc(p_1019->g_667.se, "p_1019->g_667.se", print_hash_value);
    transparent_crc(p_1019->g_667.sf, "p_1019->g_667.sf", print_hash_value);
    transparent_crc(p_1019->g_668.x, "p_1019->g_668.x", print_hash_value);
    transparent_crc(p_1019->g_668.y, "p_1019->g_668.y", print_hash_value);
    transparent_crc(p_1019->g_689.s0, "p_1019->g_689.s0", print_hash_value);
    transparent_crc(p_1019->g_689.s1, "p_1019->g_689.s1", print_hash_value);
    transparent_crc(p_1019->g_689.s2, "p_1019->g_689.s2", print_hash_value);
    transparent_crc(p_1019->g_689.s3, "p_1019->g_689.s3", print_hash_value);
    transparent_crc(p_1019->g_689.s4, "p_1019->g_689.s4", print_hash_value);
    transparent_crc(p_1019->g_689.s5, "p_1019->g_689.s5", print_hash_value);
    transparent_crc(p_1019->g_689.s6, "p_1019->g_689.s6", print_hash_value);
    transparent_crc(p_1019->g_689.s7, "p_1019->g_689.s7", print_hash_value);
    transparent_crc(p_1019->g_689.s8, "p_1019->g_689.s8", print_hash_value);
    transparent_crc(p_1019->g_689.s9, "p_1019->g_689.s9", print_hash_value);
    transparent_crc(p_1019->g_689.sa, "p_1019->g_689.sa", print_hash_value);
    transparent_crc(p_1019->g_689.sb, "p_1019->g_689.sb", print_hash_value);
    transparent_crc(p_1019->g_689.sc, "p_1019->g_689.sc", print_hash_value);
    transparent_crc(p_1019->g_689.sd, "p_1019->g_689.sd", print_hash_value);
    transparent_crc(p_1019->g_689.se, "p_1019->g_689.se", print_hash_value);
    transparent_crc(p_1019->g_689.sf, "p_1019->g_689.sf", print_hash_value);
    transparent_crc(p_1019->g_690.s0, "p_1019->g_690.s0", print_hash_value);
    transparent_crc(p_1019->g_690.s1, "p_1019->g_690.s1", print_hash_value);
    transparent_crc(p_1019->g_690.s2, "p_1019->g_690.s2", print_hash_value);
    transparent_crc(p_1019->g_690.s3, "p_1019->g_690.s3", print_hash_value);
    transparent_crc(p_1019->g_690.s4, "p_1019->g_690.s4", print_hash_value);
    transparent_crc(p_1019->g_690.s5, "p_1019->g_690.s5", print_hash_value);
    transparent_crc(p_1019->g_690.s6, "p_1019->g_690.s6", print_hash_value);
    transparent_crc(p_1019->g_690.s7, "p_1019->g_690.s7", print_hash_value);
    transparent_crc(p_1019->g_690.s8, "p_1019->g_690.s8", print_hash_value);
    transparent_crc(p_1019->g_690.s9, "p_1019->g_690.s9", print_hash_value);
    transparent_crc(p_1019->g_690.sa, "p_1019->g_690.sa", print_hash_value);
    transparent_crc(p_1019->g_690.sb, "p_1019->g_690.sb", print_hash_value);
    transparent_crc(p_1019->g_690.sc, "p_1019->g_690.sc", print_hash_value);
    transparent_crc(p_1019->g_690.sd, "p_1019->g_690.sd", print_hash_value);
    transparent_crc(p_1019->g_690.se, "p_1019->g_690.se", print_hash_value);
    transparent_crc(p_1019->g_690.sf, "p_1019->g_690.sf", print_hash_value);
    transparent_crc(p_1019->g_736.x, "p_1019->g_736.x", print_hash_value);
    transparent_crc(p_1019->g_736.y, "p_1019->g_736.y", print_hash_value);
    transparent_crc(p_1019->g_785.s0, "p_1019->g_785.s0", print_hash_value);
    transparent_crc(p_1019->g_785.s1, "p_1019->g_785.s1", print_hash_value);
    transparent_crc(p_1019->g_785.s2, "p_1019->g_785.s2", print_hash_value);
    transparent_crc(p_1019->g_785.s3, "p_1019->g_785.s3", print_hash_value);
    transparent_crc(p_1019->g_785.s4, "p_1019->g_785.s4", print_hash_value);
    transparent_crc(p_1019->g_785.s5, "p_1019->g_785.s5", print_hash_value);
    transparent_crc(p_1019->g_785.s6, "p_1019->g_785.s6", print_hash_value);
    transparent_crc(p_1019->g_785.s7, "p_1019->g_785.s7", print_hash_value);
    transparent_crc(p_1019->g_786, "p_1019->g_786", print_hash_value);
    transparent_crc(p_1019->g_791, "p_1019->g_791", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1019->g_817[i].f0.f0, "p_1019->g_817[i].f0.f0", print_hash_value);

    }
    transparent_crc(p_1019->g_837.x, "p_1019->g_837.x", print_hash_value);
    transparent_crc(p_1019->g_837.y, "p_1019->g_837.y", print_hash_value);
    transparent_crc(p_1019->g_837.z, "p_1019->g_837.z", print_hash_value);
    transparent_crc(p_1019->g_837.w, "p_1019->g_837.w", print_hash_value);
    transparent_crc(p_1019->g_839.x, "p_1019->g_839.x", print_hash_value);
    transparent_crc(p_1019->g_839.y, "p_1019->g_839.y", print_hash_value);
    transparent_crc(p_1019->g_839.z, "p_1019->g_839.z", print_hash_value);
    transparent_crc(p_1019->g_839.w, "p_1019->g_839.w", print_hash_value);
    transparent_crc(p_1019->g_841.x, "p_1019->g_841.x", print_hash_value);
    transparent_crc(p_1019->g_841.y, "p_1019->g_841.y", print_hash_value);
    transparent_crc(p_1019->g_841.z, "p_1019->g_841.z", print_hash_value);
    transparent_crc(p_1019->g_841.w, "p_1019->g_841.w", print_hash_value);
    transparent_crc(p_1019->g_842.s0, "p_1019->g_842.s0", print_hash_value);
    transparent_crc(p_1019->g_842.s1, "p_1019->g_842.s1", print_hash_value);
    transparent_crc(p_1019->g_842.s2, "p_1019->g_842.s2", print_hash_value);
    transparent_crc(p_1019->g_842.s3, "p_1019->g_842.s3", print_hash_value);
    transparent_crc(p_1019->g_842.s4, "p_1019->g_842.s4", print_hash_value);
    transparent_crc(p_1019->g_842.s5, "p_1019->g_842.s5", print_hash_value);
    transparent_crc(p_1019->g_842.s6, "p_1019->g_842.s6", print_hash_value);
    transparent_crc(p_1019->g_842.s7, "p_1019->g_842.s7", print_hash_value);
    transparent_crc(p_1019->g_842.s8, "p_1019->g_842.s8", print_hash_value);
    transparent_crc(p_1019->g_842.s9, "p_1019->g_842.s9", print_hash_value);
    transparent_crc(p_1019->g_842.sa, "p_1019->g_842.sa", print_hash_value);
    transparent_crc(p_1019->g_842.sb, "p_1019->g_842.sb", print_hash_value);
    transparent_crc(p_1019->g_842.sc, "p_1019->g_842.sc", print_hash_value);
    transparent_crc(p_1019->g_842.sd, "p_1019->g_842.sd", print_hash_value);
    transparent_crc(p_1019->g_842.se, "p_1019->g_842.se", print_hash_value);
    transparent_crc(p_1019->g_842.sf, "p_1019->g_842.sf", print_hash_value);
    transparent_crc(p_1019->g_843.s0, "p_1019->g_843.s0", print_hash_value);
    transparent_crc(p_1019->g_843.s1, "p_1019->g_843.s1", print_hash_value);
    transparent_crc(p_1019->g_843.s2, "p_1019->g_843.s2", print_hash_value);
    transparent_crc(p_1019->g_843.s3, "p_1019->g_843.s3", print_hash_value);
    transparent_crc(p_1019->g_843.s4, "p_1019->g_843.s4", print_hash_value);
    transparent_crc(p_1019->g_843.s5, "p_1019->g_843.s5", print_hash_value);
    transparent_crc(p_1019->g_843.s6, "p_1019->g_843.s6", print_hash_value);
    transparent_crc(p_1019->g_843.s7, "p_1019->g_843.s7", print_hash_value);
    transparent_crc(p_1019->g_843.s8, "p_1019->g_843.s8", print_hash_value);
    transparent_crc(p_1019->g_843.s9, "p_1019->g_843.s9", print_hash_value);
    transparent_crc(p_1019->g_843.sa, "p_1019->g_843.sa", print_hash_value);
    transparent_crc(p_1019->g_843.sb, "p_1019->g_843.sb", print_hash_value);
    transparent_crc(p_1019->g_843.sc, "p_1019->g_843.sc", print_hash_value);
    transparent_crc(p_1019->g_843.sd, "p_1019->g_843.sd", print_hash_value);
    transparent_crc(p_1019->g_843.se, "p_1019->g_843.se", print_hash_value);
    transparent_crc(p_1019->g_843.sf, "p_1019->g_843.sf", print_hash_value);
    transparent_crc(p_1019->g_849.s0, "p_1019->g_849.s0", print_hash_value);
    transparent_crc(p_1019->g_849.s1, "p_1019->g_849.s1", print_hash_value);
    transparent_crc(p_1019->g_849.s2, "p_1019->g_849.s2", print_hash_value);
    transparent_crc(p_1019->g_849.s3, "p_1019->g_849.s3", print_hash_value);
    transparent_crc(p_1019->g_849.s4, "p_1019->g_849.s4", print_hash_value);
    transparent_crc(p_1019->g_849.s5, "p_1019->g_849.s5", print_hash_value);
    transparent_crc(p_1019->g_849.s6, "p_1019->g_849.s6", print_hash_value);
    transparent_crc(p_1019->g_849.s7, "p_1019->g_849.s7", print_hash_value);
    transparent_crc(p_1019->g_849.s8, "p_1019->g_849.s8", print_hash_value);
    transparent_crc(p_1019->g_849.s9, "p_1019->g_849.s9", print_hash_value);
    transparent_crc(p_1019->g_849.sa, "p_1019->g_849.sa", print_hash_value);
    transparent_crc(p_1019->g_849.sb, "p_1019->g_849.sb", print_hash_value);
    transparent_crc(p_1019->g_849.sc, "p_1019->g_849.sc", print_hash_value);
    transparent_crc(p_1019->g_849.sd, "p_1019->g_849.sd", print_hash_value);
    transparent_crc(p_1019->g_849.se, "p_1019->g_849.se", print_hash_value);
    transparent_crc(p_1019->g_849.sf, "p_1019->g_849.sf", print_hash_value);
    transparent_crc(p_1019->g_861.x, "p_1019->g_861.x", print_hash_value);
    transparent_crc(p_1019->g_861.y, "p_1019->g_861.y", print_hash_value);
    transparent_crc(p_1019->g_883, "p_1019->g_883", print_hash_value);
    transparent_crc(p_1019->g_889.f0, "p_1019->g_889.f0", print_hash_value);
    transparent_crc(p_1019->g_950.x, "p_1019->g_950.x", print_hash_value);
    transparent_crc(p_1019->g_950.y, "p_1019->g_950.y", print_hash_value);
    transparent_crc(p_1019->g_950.z, "p_1019->g_950.z", print_hash_value);
    transparent_crc(p_1019->g_950.w, "p_1019->g_950.w", print_hash_value);
    transparent_crc(p_1019->g_951.x, "p_1019->g_951.x", print_hash_value);
    transparent_crc(p_1019->g_951.y, "p_1019->g_951.y", print_hash_value);
    transparent_crc(p_1019->g_952.x, "p_1019->g_952.x", print_hash_value);
    transparent_crc(p_1019->g_952.y, "p_1019->g_952.y", print_hash_value);
    transparent_crc(p_1019->g_952.z, "p_1019->g_952.z", print_hash_value);
    transparent_crc(p_1019->g_952.w, "p_1019->g_952.w", print_hash_value);
    transparent_crc(p_1019->g_954.x, "p_1019->g_954.x", print_hash_value);
    transparent_crc(p_1019->g_954.y, "p_1019->g_954.y", print_hash_value);
    transparent_crc(p_1019->g_954.z, "p_1019->g_954.z", print_hash_value);
    transparent_crc(p_1019->g_954.w, "p_1019->g_954.w", print_hash_value);
    transparent_crc(p_1019->g_955.x, "p_1019->g_955.x", print_hash_value);
    transparent_crc(p_1019->g_955.y, "p_1019->g_955.y", print_hash_value);
    transparent_crc(p_1019->g_955.z, "p_1019->g_955.z", print_hash_value);
    transparent_crc(p_1019->g_955.w, "p_1019->g_955.w", print_hash_value);
    transparent_crc(p_1019->g_965.x, "p_1019->g_965.x", print_hash_value);
    transparent_crc(p_1019->g_965.y, "p_1019->g_965.y", print_hash_value);
    transparent_crc(p_1019->g_965.z, "p_1019->g_965.z", print_hash_value);
    transparent_crc(p_1019->g_965.w, "p_1019->g_965.w", print_hash_value);
    transparent_crc(p_1019->g_990.s0, "p_1019->g_990.s0", print_hash_value);
    transparent_crc(p_1019->g_990.s1, "p_1019->g_990.s1", print_hash_value);
    transparent_crc(p_1019->g_990.s2, "p_1019->g_990.s2", print_hash_value);
    transparent_crc(p_1019->g_990.s3, "p_1019->g_990.s3", print_hash_value);
    transparent_crc(p_1019->g_990.s4, "p_1019->g_990.s4", print_hash_value);
    transparent_crc(p_1019->g_990.s5, "p_1019->g_990.s5", print_hash_value);
    transparent_crc(p_1019->g_990.s6, "p_1019->g_990.s6", print_hash_value);
    transparent_crc(p_1019->g_990.s7, "p_1019->g_990.s7", print_hash_value);
    transparent_crc(p_1019->g_990.s8, "p_1019->g_990.s8", print_hash_value);
    transparent_crc(p_1019->g_990.s9, "p_1019->g_990.s9", print_hash_value);
    transparent_crc(p_1019->g_990.sa, "p_1019->g_990.sa", print_hash_value);
    transparent_crc(p_1019->g_990.sb, "p_1019->g_990.sb", print_hash_value);
    transparent_crc(p_1019->g_990.sc, "p_1019->g_990.sc", print_hash_value);
    transparent_crc(p_1019->g_990.sd, "p_1019->g_990.sd", print_hash_value);
    transparent_crc(p_1019->g_990.se, "p_1019->g_990.se", print_hash_value);
    transparent_crc(p_1019->g_990.sf, "p_1019->g_990.sf", print_hash_value);
    transparent_crc(p_1019->g_991.s0, "p_1019->g_991.s0", print_hash_value);
    transparent_crc(p_1019->g_991.s1, "p_1019->g_991.s1", print_hash_value);
    transparent_crc(p_1019->g_991.s2, "p_1019->g_991.s2", print_hash_value);
    transparent_crc(p_1019->g_991.s3, "p_1019->g_991.s3", print_hash_value);
    transparent_crc(p_1019->g_991.s4, "p_1019->g_991.s4", print_hash_value);
    transparent_crc(p_1019->g_991.s5, "p_1019->g_991.s5", print_hash_value);
    transparent_crc(p_1019->g_991.s6, "p_1019->g_991.s6", print_hash_value);
    transparent_crc(p_1019->g_991.s7, "p_1019->g_991.s7", print_hash_value);
    transparent_crc(p_1019->g_991.s8, "p_1019->g_991.s8", print_hash_value);
    transparent_crc(p_1019->g_991.s9, "p_1019->g_991.s9", print_hash_value);
    transparent_crc(p_1019->g_991.sa, "p_1019->g_991.sa", print_hash_value);
    transparent_crc(p_1019->g_991.sb, "p_1019->g_991.sb", print_hash_value);
    transparent_crc(p_1019->g_991.sc, "p_1019->g_991.sc", print_hash_value);
    transparent_crc(p_1019->g_991.sd, "p_1019->g_991.sd", print_hash_value);
    transparent_crc(p_1019->g_991.se, "p_1019->g_991.se", print_hash_value);
    transparent_crc(p_1019->g_991.sf, "p_1019->g_991.sf", print_hash_value);
    transparent_crc(p_1019->g_992.x, "p_1019->g_992.x", print_hash_value);
    transparent_crc(p_1019->g_992.y, "p_1019->g_992.y", print_hash_value);
    transparent_crc(p_1019->g_993.x, "p_1019->g_993.x", print_hash_value);
    transparent_crc(p_1019->g_993.y, "p_1019->g_993.y", print_hash_value);
    transparent_crc(p_1019->g_993.z, "p_1019->g_993.z", print_hash_value);
    transparent_crc(p_1019->g_993.w, "p_1019->g_993.w", print_hash_value);
    transparent_crc(p_1019->g_1001.x, "p_1019->g_1001.x", print_hash_value);
    transparent_crc(p_1019->g_1001.y, "p_1019->g_1001.y", print_hash_value);
    transparent_crc(p_1019->g_1001.z, "p_1019->g_1001.z", print_hash_value);
    transparent_crc(p_1019->g_1001.w, "p_1019->g_1001.w", print_hash_value);
    transparent_crc(p_1019->v_collective, "p_1019->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 39; i++)
            transparent_crc(p_1019->g_special_values[i + 39 * get_linear_group_id()], "p_1019->g_special_values[i + 39 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 39; i++)
            transparent_crc(p_1019->l_special_values[i], "p_1019->l_special_values[i]", print_hash_value);
    transparent_crc(p_1019->l_comm_values[get_linear_local_id()], "p_1019->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1019->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()], "p_1019->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
