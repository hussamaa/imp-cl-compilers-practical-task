// --atomics 91 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 88,14,4 -l 8,14,2
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

__constant uint32_t permutations[10][224] = {
{201,15,202,57,17,109,82,84,158,66,34,106,166,141,31,113,6,94,154,142,26,88,205,115,160,59,69,23,42,58,44,176,149,65,163,121,171,36,156,46,71,5,101,114,38,206,150,119,33,37,83,60,50,110,120,102,7,3,145,77,136,140,99,85,169,221,30,220,203,135,125,95,213,188,170,153,41,73,52,107,178,126,53,208,129,159,183,130,185,100,168,197,215,18,219,133,92,209,55,16,29,10,211,11,21,45,177,204,48,64,124,108,117,128,144,79,143,104,152,192,146,35,86,12,123,116,56,76,25,132,200,164,67,47,217,62,174,63,180,195,181,20,51,54,87,194,9,90,28,19,49,27,179,199,39,182,172,222,218,78,68,111,127,118,61,105,24,198,14,216,75,4,134,187,155,190,167,207,81,157,184,189,103,148,43,96,151,196,32,40,13,2,223,97,210,80,131,1,212,138,191,165,89,139,161,22,91,74,193,70,8,214,72,162,173,122,175,0,137,93,98,186,112,147}, // permutation 0
{24,223,166,142,25,110,61,138,203,94,73,69,32,207,84,49,39,65,135,38,70,4,85,81,171,40,9,147,180,13,66,186,105,121,173,48,163,199,202,124,212,104,111,101,123,63,103,54,201,3,119,42,127,97,149,160,194,193,179,132,200,21,34,162,183,106,174,90,172,134,56,122,52,169,18,116,51,31,155,126,151,152,43,189,36,102,6,167,17,29,47,7,50,62,76,218,67,28,158,198,114,133,188,72,95,113,148,30,120,14,57,12,176,154,153,161,37,87,46,55,164,221,192,86,129,184,117,182,197,141,170,23,8,204,78,44,143,109,20,15,146,107,10,1,157,150,112,209,82,145,217,108,59,211,213,206,128,222,210,100,191,136,214,5,45,190,185,53,144,33,165,205,187,219,99,0,74,60,68,91,175,22,98,130,77,137,140,118,93,139,41,178,16,75,58,11,220,156,196,88,131,35,64,215,19,195,125,159,168,216,92,79,115,181,89,80,2,208,83,26,96,27,177,71}, // permutation 1
{138,43,126,103,160,114,106,45,143,184,195,83,47,57,169,146,119,10,140,109,199,89,161,91,28,66,58,154,15,118,136,197,201,85,149,213,196,198,220,166,167,209,144,130,205,37,174,65,178,95,4,191,111,152,192,222,175,207,115,142,88,104,82,86,145,68,217,77,76,171,123,6,180,139,100,179,56,129,59,157,147,128,73,131,46,20,102,133,165,80,168,164,62,189,2,60,125,72,200,64,181,24,54,71,159,219,116,27,124,42,97,78,176,90,21,117,50,183,137,18,29,41,98,40,215,211,212,210,221,190,23,107,223,101,11,150,51,44,55,204,208,33,216,121,203,99,93,35,94,153,194,52,162,120,36,186,25,141,75,193,113,34,79,22,3,39,122,202,172,214,1,32,110,218,155,38,53,127,108,17,134,31,13,132,14,177,70,148,63,105,0,92,26,84,19,112,87,74,81,30,173,9,12,67,170,156,16,48,96,69,163,7,8,188,206,182,158,61,151,5,135,185,49,187}, // permutation 2
{105,34,95,178,122,56,15,119,103,42,109,77,9,128,65,22,187,206,18,160,26,144,7,161,10,159,151,107,215,64,102,150,152,81,80,28,201,84,106,219,147,69,118,79,63,82,154,57,100,89,202,153,158,204,138,185,165,181,39,92,120,129,60,211,164,40,186,45,126,98,1,149,2,171,208,30,93,217,143,141,47,210,54,193,121,216,221,5,197,72,50,179,213,12,162,198,13,94,43,33,169,67,38,127,23,124,218,90,214,76,137,74,130,83,113,78,170,116,192,184,190,53,99,19,31,223,117,157,174,59,70,71,177,35,97,32,123,175,17,86,29,133,55,21,182,134,4,104,132,52,66,115,173,8,14,180,194,96,199,24,148,139,85,156,166,168,163,49,205,207,146,112,0,3,155,114,73,189,135,222,145,220,172,36,6,101,196,183,191,111,167,25,131,11,44,209,176,27,188,75,136,142,203,195,61,91,41,212,140,51,20,125,37,200,16,110,58,108,68,62,87,88,48,46}, // permutation 3
{45,137,76,38,48,142,133,62,116,213,3,88,8,144,60,191,126,97,159,182,119,165,65,28,179,9,215,181,2,127,166,194,89,15,145,83,157,94,184,148,214,204,80,42,69,39,134,14,96,108,40,34,0,180,138,49,99,205,212,1,11,149,35,174,120,5,100,56,154,7,79,82,219,70,216,25,140,170,31,163,136,74,185,125,66,117,32,172,36,104,121,84,183,12,59,168,30,217,131,63,218,112,207,146,114,22,110,162,122,220,67,206,78,81,124,155,55,202,10,173,92,196,193,53,6,164,175,29,153,91,50,33,186,95,150,158,143,27,68,87,128,98,139,58,75,118,107,222,61,72,209,195,113,208,21,41,192,43,135,223,26,64,210,102,151,101,200,106,188,129,178,73,152,16,57,109,44,13,132,169,23,176,197,199,93,111,221,141,198,203,156,171,160,123,4,77,52,147,71,17,19,177,161,130,190,85,47,20,103,105,115,189,86,37,90,54,211,201,46,167,18,187,24,51}, // permutation 4
{108,36,171,106,57,79,153,112,151,140,215,95,70,59,146,47,37,34,99,73,207,137,74,101,26,5,96,165,102,167,11,89,67,49,148,142,155,211,216,179,0,139,163,97,181,23,2,210,16,162,51,152,72,71,104,166,83,50,200,55,48,194,144,172,66,30,14,192,53,174,32,86,98,61,120,134,46,184,18,100,38,126,222,198,147,121,58,52,20,110,185,201,17,219,3,90,56,187,81,116,220,214,68,168,21,103,178,63,218,25,92,182,107,119,204,160,45,111,127,195,93,105,24,130,7,150,202,109,132,10,158,199,164,209,15,156,64,31,212,115,193,80,75,124,221,189,19,133,196,143,188,78,159,42,35,65,114,84,4,8,9,87,175,145,131,191,94,217,82,85,197,77,62,118,206,76,186,223,39,157,44,12,136,117,33,161,28,123,177,170,122,173,69,141,43,27,113,22,208,6,91,213,180,1,40,54,135,41,190,203,154,183,13,29,138,129,125,88,128,205,149,176,60,169}, // permutation 5
{36,213,138,132,145,172,54,160,35,16,68,37,133,119,39,26,46,103,107,166,118,93,88,154,12,30,52,95,146,216,10,190,128,192,83,164,73,82,134,201,157,174,168,202,155,185,58,211,5,222,206,92,137,108,200,189,147,193,56,89,17,3,175,48,6,32,183,220,197,47,59,79,161,14,98,69,87,100,143,84,104,178,184,86,115,215,223,43,158,117,34,65,122,57,8,171,72,63,204,96,112,49,11,76,169,167,21,131,125,142,78,114,55,50,62,123,20,191,219,203,101,27,156,40,99,24,13,74,120,85,9,51,116,31,25,187,141,149,159,19,71,70,129,53,66,196,198,75,150,22,221,136,208,45,67,77,113,33,182,124,15,105,80,7,127,177,102,110,2,205,162,91,176,111,186,207,60,163,61,121,41,126,64,151,29,210,212,42,94,209,199,218,135,90,144,38,181,217,170,179,165,140,214,130,194,23,139,173,106,1,44,97,148,109,152,28,0,188,81,18,4,180,153,195}, // permutation 6
{131,137,149,108,40,133,135,173,45,204,207,115,67,73,87,162,43,123,154,176,2,208,36,119,65,209,93,50,61,3,153,167,205,127,70,186,27,175,77,117,120,174,157,82,31,37,15,110,121,144,62,78,11,81,134,109,106,124,12,52,177,24,220,46,76,172,99,98,33,211,91,185,140,1,47,118,190,54,41,8,9,155,102,169,10,139,6,213,187,193,28,59,218,88,95,34,132,74,60,200,113,14,222,96,182,53,90,147,97,116,161,178,13,191,103,141,163,150,138,51,216,5,44,17,195,160,122,21,170,168,42,128,199,201,112,192,206,196,179,197,23,58,194,26,38,29,198,22,84,146,85,68,86,104,19,129,223,83,105,219,183,4,71,180,57,94,165,80,75,181,189,18,151,107,210,89,39,152,25,55,212,111,69,20,217,7,125,159,0,156,188,145,142,130,64,214,166,48,202,215,203,100,143,114,56,49,30,72,35,16,148,184,79,126,221,63,66,171,32,158,92,136,164,101}, // permutation 7
{44,69,186,167,223,37,222,169,30,89,103,102,100,208,5,57,131,101,125,110,67,141,26,15,70,143,160,136,58,149,161,174,40,124,193,78,189,64,50,1,150,99,9,16,130,96,79,72,196,83,219,178,128,75,158,170,84,93,127,56,90,61,123,126,204,214,165,4,59,209,192,104,210,172,182,151,33,116,117,36,113,177,45,133,168,108,20,87,129,107,121,51,27,166,94,171,198,213,206,11,82,201,134,88,39,97,54,120,122,152,109,71,138,190,47,187,154,147,23,41,60,184,32,43,13,207,197,55,139,212,17,0,62,185,183,81,38,157,176,8,74,195,98,86,132,119,53,22,18,114,85,145,77,173,28,14,155,91,106,191,66,112,164,148,175,52,159,25,202,140,221,42,76,162,118,29,6,137,194,135,188,179,153,200,34,146,80,19,10,63,142,68,111,21,220,144,12,24,203,156,3,217,49,73,95,205,115,163,65,181,46,105,2,31,7,48,199,218,35,211,216,180,215,92}, // permutation 8
{95,161,19,62,200,18,54,53,48,125,47,66,107,128,216,177,68,99,196,222,203,25,35,160,91,163,89,55,214,136,223,141,85,209,3,202,140,33,213,172,69,219,81,139,78,108,88,98,137,116,24,152,190,101,127,4,123,105,169,122,126,154,135,119,45,205,197,145,147,84,16,7,182,133,187,170,86,70,41,184,38,151,97,218,74,27,106,94,80,173,138,102,148,39,149,50,104,186,166,112,20,8,150,93,142,191,87,188,195,183,130,23,26,201,96,132,217,30,46,164,144,204,157,118,165,120,175,61,42,59,181,10,156,207,60,155,185,221,21,65,121,153,114,103,22,146,17,100,76,199,162,5,52,124,71,14,198,2,113,15,90,193,210,73,109,158,131,28,75,192,220,77,208,13,64,58,179,12,0,32,40,34,215,92,11,63,82,211,83,49,180,171,37,44,1,72,129,110,134,143,6,206,115,79,212,9,189,43,168,117,111,67,194,159,56,31,36,57,174,29,178,176,167,51} // permutation 9
};

// Seed: 1753343082

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int64_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U1 {
   int32_t  f0;
   int16_t  f1;
   volatile uint16_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3[9];
    int32_t g_4;
    int32_t g_18;
    int32_t g_23;
    struct S0 g_55[8];
    volatile VECTOR(uint16_t, 16) g_81;
    volatile VECTOR(int8_t, 4) g_98;
    volatile VECTOR(int8_t, 2) g_99;
    VECTOR(int8_t, 8) g_100;
    VECTOR(int8_t, 2) g_101;
    volatile int32_t * volatile g_113;
    volatile int32_t * volatile *g_112[6];
    uint64_t g_117;
    int8_t *g_137;
    int16_t g_139[8][10];
    int32_t g_141;
    int32_t *g_147;
    int32_t ** volatile g_146;
    VECTOR(int8_t, 8) g_160;
    VECTOR(int64_t, 2) g_178;
    int8_t g_182;
    int32_t * volatile g_196;
    int32_t g_197[9];
    uint8_t g_207[1];
    int64_t *g_218;
    int64_t **g_217;
    int64_t *** volatile g_216;
    volatile VECTOR(uint8_t, 8) g_222;
    struct S0 g_227;
    volatile union U1 g_228;
    volatile VECTOR(int64_t, 2) g_357;
    VECTOR(int8_t, 16) g_360;
    uint16_t g_363;
    uint32_t g_387;
    volatile VECTOR(int32_t, 8) g_388;
    volatile union U1 g_397;
    volatile union U1 g_402;
    uint64_t g_428;
    union U1 g_448;
    int32_t ** volatile g_494;
    uint32_t g_498;
    int32_t g_510;
    union U1 *g_523;
    struct S0 * volatile g_531;
    VECTOR(int64_t, 4) g_564;
    volatile VECTOR(uint32_t, 4) g_884;
    volatile VECTOR(int32_t, 4) g_891;
    VECTOR(int32_t, 16) g_892;
    volatile VECTOR(uint16_t, 16) g_893;
    volatile VECTOR(uint16_t, 4) g_895;
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
int32_t  func_1(struct S2 * p_924);
int32_t  func_20(uint32_t  p_21, uint16_t  p_22, struct S2 * p_924);
uint32_t  func_25(int32_t * p_26, int32_t * p_27, struct S2 * p_924);
uint32_t  func_33(int64_t  p_34, int32_t * p_35, struct S2 * p_924);
uint16_t  func_53(struct S0  p_54, struct S2 * p_924);
int32_t  func_56(int32_t * p_57, int8_t  p_58, int64_t  p_59, struct S2 * p_924);
int8_t  func_60(int32_t * p_61, int16_t  p_62, int32_t * p_63, int32_t * p_64, struct S2 * p_924);
int32_t * func_65(uint64_t  p_66, int32_t  p_67, int64_t  p_68, int32_t * p_69, struct S2 * p_924);
int32_t * func_82(uint64_t  p_83, uint32_t  p_84, int32_t * p_85, uint8_t  p_86, struct S2 * p_924);
int32_t  func_92(int32_t * p_93, uint16_t  p_94, struct S2 * p_924);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_924->g_4 p_924->g_18 p_924->g_2 p_924->g_101 p_924->g_100 p_924->g_363 p_924->g_207 p_924->g_387 p_924->g_147 p_924->g_55.f3 p_924->g_55.f0 p_924->g_141 p_924->g_139 p_924->g_448 p_924->g_55 p_924->g_178 p_924->g_98 p_924->g_227.f0 p_924->g_498 p_924->g_99 p_924->g_227.f2 p_924->g_196 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_531 p_924->g_117 p_924->g_81 p_924->g_564 p_924->g_182 p_924->g_884 p_924->g_891 p_924->g_892 p_924->g_893 p_924->g_895 p_924->g_160 p_924->g_228.f0 p_924->g_146 p_924->g_448.f0
 * writes: p_924->g_4 p_924->g_18 p_924->g_23 p_924->g_182 p_924->g_117 p_924->g_227.f3 p_924->g_363 p_924->g_55.f3 p_924->g_55.f0 p_924->g_141 p_924->g_207 p_924->g_147 p_924->g_387 p_924->g_227.f0 p_924->g_227.f2 p_924->g_523 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_55 p_924->g_160
 */
int32_t  func_1(struct S2 * p_924)
{ /* block id: 4 */
    uint32_t l_19 = 0x8405CEFDL;
    VECTOR(int64_t, 4) l_565 = (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, (-4L)), (-4L));
    VECTOR(int64_t, 8) l_566 = (VECTOR(int64_t, 8))(0x319EE989D2DF288EL, (VECTOR(int64_t, 4))(0x319EE989D2DF288EL, (VECTOR(int64_t, 2))(0x319EE989D2DF288EL, (-1L)), (-1L)), (-1L), 0x319EE989D2DF288EL, (-1L));
    struct S0 *l_887 = &p_924->g_227;
    VECTOR(int64_t, 8) l_890 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
    VECTOR(uint16_t, 4) l_894 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
    int32_t l_897 = 0x32DB2138L;
    int8_t l_898 = 0x69L;
    int32_t l_899 = 0x2E3C8CBDL;
    VECTOR(uint32_t, 2) l_906 = (VECTOR(uint32_t, 2))(0xF8A91A6DL, 0x4A5B66FBL);
    int32_t l_919 = 0x47394EAFL;
    uint64_t *l_920[1];
    int32_t l_921 = 0x06E3BB14L;
    int64_t l_922[10];
    int32_t *l_923[5][3] = {{&p_924->g_227.f3,&p_924->g_227.f3,&p_924->g_227.f3},{&p_924->g_227.f3,&p_924->g_227.f3,&p_924->g_227.f3},{&p_924->g_227.f3,&p_924->g_227.f3,&p_924->g_227.f3},{&p_924->g_227.f3,&p_924->g_227.f3,&p_924->g_227.f3},{&p_924->g_227.f3,&p_924->g_227.f3,&p_924->g_227.f3}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_920[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_922[i] = (-1L);
    for (p_924->g_4 = 0; (p_924->g_4 > 10); p_924->g_4 = safe_add_func_uint32_t_u_u(p_924->g_4, 7))
    { /* block id: 7 */
        uint8_t l_16 = 0x8EL;
        int32_t *l_17 = &p_924->g_18;
        union U1 *l_555[3][2][4] = {{{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448},{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448}},{{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448},{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448}},{{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448},{&p_924->g_448,&p_924->g_448,&p_924->g_448,&p_924->g_448}}};
        uint16_t l_567 = 0x9099L;
        int32_t l_573 = 2L;
        int i, j, k;
        if ((atomic_inc(&p_924->l_atomic_input[18]) == 4))
        { /* block id: 9 */
            uint32_t l_7 = 4294967294UL;
            int16_t l_8 = 0x415DL;
            uint64_t l_9 = 18446744073709551608UL;
            int32_t *l_10 = (void*)0;
            int32_t l_12 = 0x591509CFL;
            int32_t *l_11[2][1][8] = {{{&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12}},{{&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12}}};
            uint16_t l_13 = 0xE008L;
            int i, j, k;
            l_9 |= (l_8 |= l_7);
            l_11[1][0][5] = l_10;
            l_13++;
            unsigned int result = 0;
            result += l_7;
            result += l_8;
            result += l_9;
            result += l_12;
            result += l_13;
            atomic_add(&p_924->l_special_values[18], result);
        }
        else
        { /* block id: 14 */
            (1 + 1);
        }
        (*l_17) |= l_16;
        if (l_19)
            continue;
        if (func_20((p_924->g_23 = 0xE77E815FL), p_924->g_2, p_924))
        { /* block id: 258 */
            VECTOR(int32_t, 2) l_558 = (VECTOR(int32_t, 2))(0x57DF5BFBL, 0L);
            int8_t *l_568 = (void*)0;
            int8_t *l_569 = (void*)0;
            int8_t *l_570 = (void*)0;
            int8_t *l_571 = &p_924->g_182;
            int32_t *l_572[3];
            int i;
            for (i = 0; i < 3; i++)
                l_572[i] = &p_924->g_227.f3;
            l_573 |= (safe_sub_func_uint64_t_u_u((GROUP_DIVERGE(2, 1) , FAKE_DIVERGE(p_924->local_0_offset, get_local_id(0), 10)), (0xB50CL || (((p_924->g_2 , p_924->g_81.s3) , (l_555[2][1][2] == (void*)0)) != (safe_div_func_int64_t_s_s((((*l_571) &= (((((*p_924->g_147) = ((VECTOR(int32_t, 4))(l_558.xyyx)).w) || (safe_sub_func_int64_t_s_s(((((*l_17) & ((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(0x19L)) , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_924->g_564.zwwwyxxx)).s2, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x3DA72890E95F62B2L, 6L, 0x36F5531E6EF9713CL, p_924->g_18, 1L, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(l_565.wzwxxzzw)).s44, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(l_566.s1237352161252050)).s96, (int64_t)0x0C0B145F78CEB463L)))))))), (-1L))).s3241026650020063)).s4ddd)), l_566.s3, ((VECTOR(int64_t, 2))(0x4DC5AA3D4565E55CL)), 4L)))).s3561545347737367, ((VECTOR(int64_t, 16))(0L))))).sbc)))), 0x1141D1DA66CF630EL, 0x1FD4A6385435F045L, ((VECTOR(int64_t, 2))(1L)), 0L)).s3) ^ 0x03023F2F952DE3C7L), 2)) , l_567)) == (-9L)) ^ FAKE_DIVERGE(p_924->local_0_offset, get_local_id(0), 10)), l_19))) ^ 0x72BFL) , (-1L))) | (-4L)), l_558.y))))));
        }
        else
        { /* block id: 262 */
            int16_t l_574 = 1L;
            return l_574;
        }
    }
    if ((atomic_inc(&p_924->g_atomic_input[91 * get_linear_group_id() + 5]) == 5))
    { /* block id: 267 */
        int32_t l_575[8];
        int16_t l_615 = 0x22B1L;
        uint8_t l_616 = 0x76L;
        int i;
        for (i = 0; i < 8; i++)
            l_575[i] = 0x76941C79L;
        if (l_575[2])
        { /* block id: 268 */
            uint32_t l_576 = 4294967286UL;
            uint64_t l_579 = 0x33F827537ACEF57FL;
            VECTOR(uint32_t, 8) l_580 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
            VECTOR(int16_t, 8) l_581 = (VECTOR(int16_t, 8))(0x557EL, (VECTOR(int16_t, 4))(0x557EL, (VECTOR(int16_t, 2))(0x557EL, 0L), 0L), 0L, 0x557EL, 0L);
            uint64_t l_582 = 18446744073709551615UL;
            VECTOR(int16_t, 8) l_583 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x542AL), 0x542AL), 0x542AL, (-1L), 0x542AL);
            VECTOR(int16_t, 16) l_584 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x0595L), 0x0595L), 0x0595L, 9L, 0x0595L, (VECTOR(int16_t, 2))(9L, 0x0595L), (VECTOR(int16_t, 2))(9L, 0x0595L), 9L, 0x0595L, 9L, 0x0595L);
            uint32_t l_585 = 0UL;
            int8_t l_588 = 0x69L;
            VECTOR(int16_t, 8) l_589 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
            VECTOR(int16_t, 8) l_590 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3C1DL), 0x3C1DL), 0x3C1DL, (-1L), 0x3C1DL);
            struct S0 l_591 = {0x47D44414L,0x1A09B9192D791E0DL,0x7604E481L,-6L};
            struct S0 l_592[7] = {{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L},{0x71ABEC5AL,0x5DCD6648F396A961L,-4L,0x44C70C97L}};
            struct S0 l_593 = {0x2C2E80D8L,0L,0x644A6A8FL,9L};
            struct S0 l_594 = {0x66CF3267L,0x4B722373B0C7D4D9L,6L,0x3816F2E1L};
            int32_t *l_595 = &l_594.f3;
            int32_t *l_596 = &l_592[6].f0;
            uint64_t l_597 = 0x5C3740A3E5DEABCCL;
            int i;
            ++l_576;
            l_594 = (l_593 = (((VECTOR(int16_t, 16))(l_579, l_580.s1, ((VECTOR(int16_t, 4))(l_581.s2674)).w, (-4L), ((VECTOR(int16_t, 2))((-2L), (-9L))), ((VECTOR(int16_t, 4))(l_582, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(l_583.s7413364424114174)).even))).s63, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_584.sd733916a)).s75)).yxyy, ((VECTOR(int16_t, 2))(0x1C30L, 0x4D15L)).xyyx))).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x5E76L, (l_585 , ((--l_582) , l_588)), 0x2FEDL, ((VECTOR(int16_t, 2))(1L, 0x660CL)), ((VECTOR(int16_t, 8))(5L, 0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_589.s0215426635110722)).se1a8)), 0x03E1L, 0x58F1L)), 0x7F49L, 0x3332L, 0x2C37L)))).sa2))), 1L)), 0x34F8L, (-1L), 0x1952L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_590.s31716613)).s31)), 0x704FL)).se , (l_592[6] = l_591)));
            l_596 = (l_595 = l_595);
            l_575[2] = l_597;
        }
        else
        { /* block id: 277 */
            int32_t l_598[5][1][9] = {{{(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L)}},{{(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L)}},{{(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L)}},{{(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L)}},{{(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L),(-3L),0x50867517L,(-3L)}}};
            uint32_t l_605[8][6] = {{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL},{1UL,0xAA340119L,0x71F1E1EBL,0xAA340119L,1UL,1UL}};
            uint64_t l_606[6] = {0x42000F9248A12363L,7UL,0x42000F9248A12363L,0x42000F9248A12363L,7UL,0x42000F9248A12363L};
            VECTOR(int16_t, 2) l_607 = (VECTOR(int16_t, 2))(0x72C2L, 0x5BFDL);
            int16_t l_608 = 0x5CD5L;
            uint32_t l_609 = 0x92D319FBL;
            uint64_t l_610 = 18446744073709551610UL;
            uint64_t l_611 = 0xE1E7DF5595F65FB9L;
            int32_t *l_612 = &l_598[2][0][0];
            int32_t *l_613 = &l_598[1][0][1];
            int32_t *l_614 = &l_598[0][0][2];
            int i, j, k;
            for (l_598[0][0][2] = 0; (l_598[0][0][2] >= 29); l_598[0][0][2] = safe_add_func_int32_t_s_s(l_598[0][0][2], 1))
            { /* block id: 280 */
                uint16_t l_601 = 0x5463L;
                struct S0 l_602 = {0x0DEA08BBL,0L,0x13719769L,0L};
                struct S0 l_603 = {9L,-1L,-1L,0x2A5BAB5DL};
                struct S0 l_604 = {-1L,9L,0x46BB6B5DL,-1L};
                l_604 = (l_601 , (l_603 = l_602));
            }
            l_606[0] |= l_605[5][0];
            l_612 = (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_607.yxxyxxyxxyxxxxxy)).odd)))).s0531036206344406)).s3 , (((l_610 = (l_608 , l_609)) , 1L) , (l_614 = (l_613 = (l_611 , l_612)))));
        }
        l_616--;
        for (l_575[4] = 0; (l_575[4] == 17); ++l_575[4])
        { /* block id: 293 */
            int64_t l_621[3][5][7] = {{{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL}},{{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL}},{{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL},{0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL,0x696C0184CF8F41E5L,0x2F43179FD6AF861FL,0x2F43179FD6AF861FL}}};
            VECTOR(int8_t, 8) l_652 = (VECTOR(int8_t, 8))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, 0x15L), 0x15L), 0x15L, 0x31L, 0x15L);
            VECTOR(int32_t, 8) l_681 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7AD7C1E0L), 0x7AD7C1E0L), 0x7AD7C1E0L, (-1L), 0x7AD7C1E0L);
            int32_t *l_871[3][1];
            int32_t *l_872 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_871[i][j] = (void*)0;
            }
            if (l_621[2][0][3])
            { /* block id: 294 */
                int8_t l_622 = 0x51L;
                VECTOR(int32_t, 2) l_623 = (VECTOR(int32_t, 2))(0L, (-1L));
                VECTOR(int32_t, 16) l_624 = (VECTOR(int32_t, 16))(0x291AC2E3L, (VECTOR(int32_t, 4))(0x291AC2E3L, (VECTOR(int32_t, 2))(0x291AC2E3L, 0x76209618L), 0x76209618L), 0x76209618L, 0x291AC2E3L, 0x76209618L, (VECTOR(int32_t, 2))(0x291AC2E3L, 0x76209618L), (VECTOR(int32_t, 2))(0x291AC2E3L, 0x76209618L), 0x291AC2E3L, 0x76209618L, 0x291AC2E3L, 0x76209618L);
                int64_t l_625 = 0L;
                VECTOR(int32_t, 8) l_626 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x7F2CBEA0L), 0x7F2CBEA0L), 0x7F2CBEA0L, (-9L), 0x7F2CBEA0L);
                int8_t l_627[3];
                uint8_t l_628 = 0x3FL;
                VECTOR(int16_t, 2) l_629 = (VECTOR(int16_t, 2))((-1L), 0x4025L);
                VECTOR(int16_t, 4) l_630 = (VECTOR(int16_t, 4))(0x2E79L, (VECTOR(int16_t, 2))(0x2E79L, 0x767AL), 0x767AL);
                int32_t l_631 = 0x1FBFB565L;
                uint32_t l_632 = 4294967295UL;
                uint8_t l_633[9][9] = {{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL},{255UL,255UL,0UL,0x2CL,9UL,0x2CL,0UL,255UL,255UL}};
                union U1 l_634 = {0x478F4E98L};/* VOLATILE GLOBAL l_634 */
                int32_t l_635 = (-1L);
                struct S0 l_636 = {0x3DBEE1D9L,0x484AC73840EFD758L,0L,0L};
                int32_t l_637 = (-1L);
                uint16_t l_638[3];
                VECTOR(int8_t, 8) l_639 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x54L), 0x54L), 0x54L, 3L, 0x54L);
                uint32_t l_640[3][2][8];
                uint64_t l_641 = 7UL;
                uint32_t l_642 = 4294967293UL;
                uint32_t l_643 = 0x34526C5CL;
                int64_t l_644[2];
                int32_t *l_645[7] = {(void*)0,&l_636.f2,(void*)0,(void*)0,&l_636.f2,(void*)0,(void*)0};
                int32_t *l_646 = &l_636.f2;
                int8_t l_647 = (-7L);
                int8_t l_648 = 6L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_627[i] = 0x24L;
                for (i = 0; i < 3; i++)
                    l_638[i] = 4UL;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 8; k++)
                            l_640[i][j][k] = 4294967295UL;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_644[i] = (-6L);
                l_646 = (l_622 , ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x315633D0L, ((VECTOR(int32_t, 2))(l_623.xx)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_624.sdfd2e87c)).s5475375126310727)).s98, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(0x5A8A4272L, l_625, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(l_626.s33564713)).s41, (int32_t)(l_623.x ^= (l_639.s3 ^= ((l_630.z = ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(l_627[0], (l_628 , (l_631 = (l_615 &= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(l_629.xxyx)).wzzwxyywxzzxywxz, ((VECTOR(int16_t, 16))(l_630.xywwwyzxxxyxxwxx))))).lo)).even)).x))), 1L, (-1L), (l_632 , (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((l_633[8][1] , l_634) , ((l_635 , l_636) , 0x0B33E375D721729CL)), ((VECTOR(int64_t, 2))((-1L))), 0x7780DB21F0BAADC1L)).xyxzzzxzwyzwyzxx)).s2 , l_637)), ((VECTOR(int16_t, 2))(0x62ADL)), (-1L))).s0204155271142535, ((VECTOR(int16_t, 16))(0x7231L))))).s6) , l_638[1]))), (int32_t)l_640[2][0][7]))), l_641, ((VECTOR(int32_t, 2))(0x50605A75L)), l_642, 0L, 1L, (-2L), 0x2D33C8AFL, ((VECTOR(int32_t, 4))((-1L))))).sf7, (int32_t)l_643)))))), ((VECTOR(int32_t, 2))(0x30444C2DL)), 0L)).s20)).even , l_644[0]) , l_645[6]));
                l_648 ^= l_647;
            }
            else
            { /* block id: 302 */
                uint64_t l_649 = 0UL;
                l_649++;
            }
            if (l_652.s6)
            { /* block id: 305 */
                int32_t l_654 = 0x0AE83B1FL;
                int32_t *l_653 = &l_654;
                int32_t *l_655 = &l_654;
                int64_t l_656 = (-9L);
                uint32_t l_666 = 0xCBBDB2B7L;
                uint8_t l_667 = 0x10L;
                l_655 = l_653;
                l_656 &= 0L;
                for (l_656 = 0; (l_656 < (-18)); --l_656)
                { /* block id: 310 */
                    int64_t l_659[10] = {0x46235F77811AC456L,1L,0x46235F77811AC456L,0x46235F77811AC456L,1L,0x46235F77811AC456L,0x46235F77811AC456L,1L,0x46235F77811AC456L,0x46235F77811AC456L};
                    uint16_t l_660 = 0xC166L;
                    uint32_t l_663 = 0x8F88C931L;
                    int i;
                    ++l_660;
                    --l_663;
                }
                if ((l_667 = l_666))
                { /* block id: 315 */
                    VECTOR(int32_t, 2) l_668 = (VECTOR(int32_t, 2))(0x50387A4FL, 0x063F6AC8L);
                    int64_t l_669 = 4L;
                    int32_t *l_670 = (void*)0;
                    int i;
                    l_669 &= ((VECTOR(int32_t, 16))(l_668.yxxyyxyyxxxxxyxy)).s1;
                    l_670 = l_670;
                    for (l_668.y = (-8); (l_668.y < 16); l_668.y = safe_add_func_int64_t_s_s(l_668.y, 3))
                    { /* block id: 320 */
                        (*l_653) |= (-1L);
                    }
                    l_653 = (void*)0;
                }
                else
                { /* block id: 324 */
                    union U1 l_673 = {0x5351B17BL};/* VOLATILE GLOBAL l_673 */
                    VECTOR(int32_t, 16) l_674 = (VECTOR(int32_t, 16))(0x3A76E2F6L, (VECTOR(int32_t, 4))(0x3A76E2F6L, (VECTOR(int32_t, 2))(0x3A76E2F6L, 0x23E4B6A3L), 0x23E4B6A3L), 0x23E4B6A3L, 0x3A76E2F6L, 0x23E4B6A3L, (VECTOR(int32_t, 2))(0x3A76E2F6L, 0x23E4B6A3L), (VECTOR(int32_t, 2))(0x3A76E2F6L, 0x23E4B6A3L), 0x3A76E2F6L, 0x23E4B6A3L, 0x3A76E2F6L, 0x23E4B6A3L);
                    int64_t l_675 = 0x4086122719BC136AL;
                    int i;
                    l_675 &= (l_673 , ((*l_653) = ((VECTOR(int32_t, 4))(l_674.s78ee)).z));
                }
            }
            else
            { /* block id: 328 */
                uint16_t l_676 = 0x49CCL;
                int64_t l_677[1][4][1];
                uint32_t l_678 = 0x5247E1BFL;
                int16_t l_679 = 0x2E5BL;
                int32_t l_680 = 8L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_677[i][j][k] = 0x05A1FA3A2D11C7A6L;
                    }
                }
                l_677[0][3][0] = l_676;
                l_680 |= ((VECTOR(int32_t, 8))(l_678, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(7L, 0x7E7FDAD2L)), (int32_t)l_679, (int32_t)0x28958513L))), (-2L), (-1L), 0x5F7AAC23L, (-10L), 0L)).s3;
            }
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_681.s07431547)))).s4)
            { /* block id: 332 */
                int16_t l_682[3];
                int32_t l_684[8] = {1L,0x1ACF14ABL,1L,1L,0x1ACF14ABL,1L,1L,0x1ACF14ABL};
                int32_t *l_683[8][6] = {{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]},{&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1],&l_684[1]}};
                int32_t *l_685 = &l_684[7];
                int32_t l_686 = 1L;
                int64_t l_699 = 0x4C8F2A094280AEA1L;
                int32_t l_700[6][8] = {{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L},{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L},{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L},{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L},{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L},{0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L,0x599EE700L,0x599EE700L,0x469FE410L}};
                int32_t l_701 = 0L;
                union U1 l_702[6] = {{0L},{0L},{0L},{0L},{0L},{0L}};
                VECTOR(uint16_t, 4) l_703 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65535UL), 65535UL);
                uint32_t l_704 = 0x1E110ECFL;
                VECTOR(int16_t, 16) l_705 = (VECTOR(int16_t, 16))(0x53DBL, (VECTOR(int16_t, 4))(0x53DBL, (VECTOR(int16_t, 2))(0x53DBL, 0x298BL), 0x298BL), 0x298BL, 0x53DBL, 0x298BL, (VECTOR(int16_t, 2))(0x53DBL, 0x298BL), (VECTOR(int16_t, 2))(0x53DBL, 0x298BL), 0x53DBL, 0x298BL, 0x53DBL, 0x298BL);
                VECTOR(int16_t, 8) l_706 = (VECTOR(int16_t, 8))(0x0032L, (VECTOR(int16_t, 4))(0x0032L, (VECTOR(int16_t, 2))(0x0032L, 0L), 0L), 0L, 0x0032L, 0L);
                int64_t l_707 = (-1L);
                int16_t l_798 = 0x008EL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_682[i] = (-3L);
                l_685 = ((l_682[1] ^= 65535UL) , l_683[0][4]);
                if (l_686)
                { /* block id: 335 */
                    int16_t l_687 = 1L;
                    int32_t l_688 = 1L;
                    l_688 ^= l_687;
                }
                else
                { /* block id: 337 */
                    VECTOR(int32_t, 4) l_689 = (VECTOR(int32_t, 4))(0x698EB1F8L, (VECTOR(int32_t, 2))(0x698EB1F8L, 0L), 0L);
                    uint32_t l_690 = 0x862359AEL;
                    uint32_t l_691 = 0xEDFEB151L;
                    uint16_t l_692[5][7] = {{0xE7A4L,0x86CEL,0x86CEL,0xE7A4L,0xE7A4L,0x86CEL,0x86CEL},{0xE7A4L,0x86CEL,0x86CEL,0xE7A4L,0xE7A4L,0x86CEL,0x86CEL},{0xE7A4L,0x86CEL,0x86CEL,0xE7A4L,0xE7A4L,0x86CEL,0x86CEL},{0xE7A4L,0x86CEL,0x86CEL,0xE7A4L,0xE7A4L,0x86CEL,0x86CEL},{0xE7A4L,0x86CEL,0x86CEL,0xE7A4L,0xE7A4L,0x86CEL,0x86CEL}};
                    struct S0 l_693 = {0x1581EC59L,-5L,-7L,1L};
                    int64_t l_694 = 0x4CAB68DECB677982L;
                    int64_t l_695 = 0x7F5A816746EE3527L;
                    union U1 l_696[3] = {{8L},{8L},{8L}};
                    uint32_t l_697[1][6][3] = {{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}}};
                    uint16_t l_698 = 0x9D59L;
                    int i, j, k;
                    l_692[0][1] ^= ((VECTOR(int32_t, 8))((-1L), 5L, 0x4C53FE96L, ((VECTOR(int32_t, 2))((-1L), 0x6252C148L)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(l_689.xxzz)).lo, (int32_t)l_690, (int32_t)l_691))), 0x0FA82CE5L)).s0;
                    (*l_685) ^= ((l_694 = (l_693 , 0x57973AEEB22B106AL)) , (l_695 , ((VECTOR(int32_t, 4))((l_696[0] , l_697[0][4][1]), l_698, (-1L), (-1L))).w));
                }
                if ((l_681.s0 &= ((l_699 , (l_707 |= ((l_700[4][7] , l_701) , (l_702[2] , (l_615 = ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((l_703.z , l_704), ((VECTOR(int16_t, 2))(l_705.s00)), 0x722AL)).w, ((VECTOR(int16_t, 2))(l_706.s64)).odd, 0x3446L, 0x7928L)).x))))) , 0x27D5DD39L)))
                { /* block id: 345 */
                    VECTOR(int32_t, 8) l_708 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x0D94DAF1L), 0x0D94DAF1L), 0x0D94DAF1L, 9L, 0x0D94DAF1L);
                    int64_t l_709 = 0L;
                    struct S0 l_744[5][2] = {{{0L,0x58002487FB9FFB1FL,0x285B0EB2L,1L},{0x4975B5C8L,-1L,0x1EA985FEL,-10L}},{{0L,0x58002487FB9FFB1FL,0x285B0EB2L,1L},{0x4975B5C8L,-1L,0x1EA985FEL,-10L}},{{0L,0x58002487FB9FFB1FL,0x285B0EB2L,1L},{0x4975B5C8L,-1L,0x1EA985FEL,-10L}},{{0L,0x58002487FB9FFB1FL,0x285B0EB2L,1L},{0x4975B5C8L,-1L,0x1EA985FEL,-10L}},{{0L,0x58002487FB9FFB1FL,0x285B0EB2L,1L},{0x4975B5C8L,-1L,0x1EA985FEL,-10L}}};
                    struct S0 l_745 = {0x4311A5C4L,1L,-7L,0x16A39B61L};
                    struct S0 l_746 = {0L,0x4DAE87D4259CBEC5L,0x1F9488A6L,0x4CB319FAL};
                    uint32_t l_747 = 4294967295UL;
                    int64_t l_748 = 0x0A1E1C447BEE00A5L;
                    uint16_t l_749 = 1UL;
                    VECTOR(int64_t, 4) l_750 = (VECTOR(int64_t, 4))(0x369031FD963531EEL, (VECTOR(int64_t, 2))(0x369031FD963531EEL, 1L), 1L);
                    VECTOR(int64_t, 2) l_751 = (VECTOR(int64_t, 2))(0x14EA2EAB02B27387L, 7L);
                    VECTOR(int32_t, 8) l_752 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                    VECTOR(int32_t, 4) l_753 = (VECTOR(int32_t, 4))(0x57095ED2L, (VECTOR(int32_t, 2))(0x57095ED2L, 5L), 5L);
                    VECTOR(int32_t, 16) l_754 = (VECTOR(int32_t, 16))(0x09CD97BAL, (VECTOR(int32_t, 4))(0x09CD97BAL, (VECTOR(int32_t, 2))(0x09CD97BAL, (-8L)), (-8L)), (-8L), 0x09CD97BAL, (-8L), (VECTOR(int32_t, 2))(0x09CD97BAL, (-8L)), (VECTOR(int32_t, 2))(0x09CD97BAL, (-8L)), 0x09CD97BAL, (-8L), 0x09CD97BAL, (-8L));
                    VECTOR(int32_t, 16) l_755 = (VECTOR(int32_t, 16))(0x1B76707FL, (VECTOR(int32_t, 4))(0x1B76707FL, (VECTOR(int32_t, 2))(0x1B76707FL, 0x35F27F46L), 0x35F27F46L), 0x35F27F46L, 0x1B76707FL, 0x35F27F46L, (VECTOR(int32_t, 2))(0x1B76707FL, 0x35F27F46L), (VECTOR(int32_t, 2))(0x1B76707FL, 0x35F27F46L), 0x1B76707FL, 0x35F27F46L, 0x1B76707FL, 0x35F27F46L);
                    VECTOR(int32_t, 2) l_756 = (VECTOR(int32_t, 2))(0x141021C7L, (-2L));
                    uint16_t l_757[4] = {0xB618L,0xB618L,0xB618L,0xB618L};
                    VECTOR(int32_t, 16) l_758 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 2) l_759 = (VECTOR(int32_t, 2))(1L, 0x4EF0240FL);
                    VECTOR(int32_t, 4) l_760 = (VECTOR(int32_t, 4))(0x2A56C1D9L, (VECTOR(int32_t, 2))(0x2A56C1D9L, (-9L)), (-9L));
                    VECTOR(int32_t, 2) l_761 = (VECTOR(int32_t, 2))(0x7676D026L, 0L);
                    uint32_t l_762 = 0x4C69DF6FL;
                    VECTOR(int16_t, 8) l_763 = (VECTOR(int16_t, 8))(0x78FBL, (VECTOR(int16_t, 4))(0x78FBL, (VECTOR(int16_t, 2))(0x78FBL, 4L), 4L), 4L, 0x78FBL, 4L);
                    VECTOR(int32_t, 8) l_764 = (VECTOR(int32_t, 8))(0x3105337FL, (VECTOR(int32_t, 4))(0x3105337FL, (VECTOR(int32_t, 2))(0x3105337FL, 0x654A63D8L), 0x654A63D8L), 0x654A63D8L, 0x3105337FL, 0x654A63D8L);
                    VECTOR(int32_t, 16) l_765 = (VECTOR(int32_t, 16))(0x074E7DE2L, (VECTOR(int32_t, 4))(0x074E7DE2L, (VECTOR(int32_t, 2))(0x074E7DE2L, 0L), 0L), 0L, 0x074E7DE2L, 0L, (VECTOR(int32_t, 2))(0x074E7DE2L, 0L), (VECTOR(int32_t, 2))(0x074E7DE2L, 0L), 0x074E7DE2L, 0L, 0x074E7DE2L, 0L);
                    VECTOR(int32_t, 2) l_766 = (VECTOR(int32_t, 2))(0x27E7821FL, (-1L));
                    int16_t l_767 = 0x0923L;
                    int32_t l_768 = 0x3A00F2ACL;
                    uint32_t l_769 = 4UL;
                    VECTOR(int16_t, 16) l_772 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0358L), 0x0358L), 0x0358L, 0L, 0x0358L, (VECTOR(int16_t, 2))(0L, 0x0358L), (VECTOR(int16_t, 2))(0L, 0x0358L), 0L, 0x0358L, 0L, 0x0358L);
                    VECTOR(int16_t, 4) l_773 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
                    int32_t l_774 = 0x6C5B130DL;
                    uint64_t l_775 = 0UL;
                    uint64_t l_776 = 0UL;
                    int i, j;
                    if ((l_709 = ((VECTOR(int32_t, 8))(l_708.s23646567)).s6))
                    { /* block id: 347 */
                        int8_t l_710[5];
                        uint32_t l_711 = 0UL;
                        VECTOR(int32_t, 16) l_712 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x4D8A2DF3L), 0x4D8A2DF3L), 0x4D8A2DF3L, 6L, 0x4D8A2DF3L, (VECTOR(int32_t, 2))(6L, 0x4D8A2DF3L), (VECTOR(int32_t, 2))(6L, 0x4D8A2DF3L), 6L, 0x4D8A2DF3L, 6L, 0x4D8A2DF3L);
                        VECTOR(int32_t, 8) l_713 = (VECTOR(int32_t, 8))(0x3199751DL, (VECTOR(int32_t, 4))(0x3199751DL, (VECTOR(int32_t, 2))(0x3199751DL, 0L), 0L), 0L, 0x3199751DL, 0L);
                        VECTOR(int32_t, 4) l_714 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                        VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(0L, (-1L));
                        uint32_t l_716 = 0x616A1ECBL;
                        VECTOR(int16_t, 8) l_717 = (VECTOR(int16_t, 8))(0x5D48L, (VECTOR(int16_t, 4))(0x5D48L, (VECTOR(int16_t, 2))(0x5D48L, 1L), 1L), 1L, 0x5D48L, 1L);
                        struct S0 l_718 = {0L,7L,0x005A3B34L,0x38B3428AL};
                        int8_t l_719[8][1];
                        int16_t l_720 = 0x3D4FL;
                        struct S0 l_721 = {1L,0x5B8CBA9490EE047BL,0L,1L};
                        struct S0 l_722 = {0x39BF6571L,0x1417820F4CD98EB1L,-9L,0L};
                        uint16_t l_723 = 1UL;
                        VECTOR(int32_t, 2) l_724 = (VECTOR(int32_t, 2))(0x0854915BL, 0x0A3570ABL);
                        VECTOR(uint32_t, 2) l_725 = (VECTOR(uint32_t, 2))(0xF166D276L, 0x29B4D9FEL);
                        uint32_t l_726 = 5UL;
                        int8_t l_727 = 0x49L;
                        uint32_t l_728 = 0x65E126F5L;
                        uint64_t l_729[2][10][1] = {{{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL}},{{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL},{0xD60E21BDA6000B8AL}}};
                        uint32_t l_730[8][10] = {{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L},{4294967287UL,4294967287UL,0x16866757L,0x91858304L,0UL,0x91858304L,0x16866757L,4294967287UL,4294967287UL,0x16866757L}};
                        int16_t l_731 = 0L;
                        int64_t l_732[10];
                        int32_t l_733 = 0x773B750AL;
                        uint64_t l_734 = 0xD032DFF108B7903DL;
                        int64_t l_735[9] = {0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL,0x3214D1D7000320EFL};
                        int16_t l_736 = 0x0BA4L;
                        int16_t l_737[2][9] = {{0L,0L,0x7356L,0L,0L,0L,0L,0x7356L,0L},{0L,0L,0x7356L,0L,0L,0L,0L,0x7356L,0L}};
                        int32_t l_738 = (-3L);
                        uint32_t l_739[1];
                        int8_t l_740 = 0L;
                        int32_t l_741 = 1L;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_710[i] = 0x7FL;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_719[i][j] = 0L;
                        }
                        for (i = 0; i < 10; i++)
                            l_732[i] = 0x08B9FEECFE115D51L;
                        for (i = 0; i < 1; i++)
                            l_739[i] = 0xE22584AAL;
                        l_740 |= (l_718.f3 = (l_710[2] , (l_739[0] |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_711, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_712.sd1)), ((VECTOR(int32_t, 2))(0x6CF52C31L, 0x4B132D29L))))), ((VECTOR(int32_t, 4))(l_713.s0137)), 0x6B989B99L)).s56)))), (-2L), (-3L))))).even, ((VECTOR(int32_t, 2))(l_714.yz)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_715.yxxxxyxyyxyyxxxy)), ((VECTOR(int32_t, 16))(((*l_685) = l_716), (((VECTOR(int16_t, 2))(l_717.s23)).hi , (l_718 , l_719[3][0])), l_720, ((l_722 = l_721) , l_723), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((*l_685) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_724.yxxy)), (((VECTOR(uint32_t, 2))(l_725.yx)).even , l_726), 0x1A0FCEB8L, 0x5EF7A9DDL, ((VECTOR(int32_t, 2))(0x51F6A7B0L)), l_727, (-3L), ((VECTOR(int32_t, 4))((-1L))), (-1L))).s1), l_728, 4L, 0x35B32DE4L, 0x29710101L, 0x78325DE8L, l_729[0][4][0], 0x08C3DBB9L, 0L, ((VECTOR(int32_t, 2))(0L)), l_730[6][9], l_731, 0x12178B52L, 0x760CD13DL, (-9L))))), ((VECTOR(int32_t, 16))((-4L)))))).s5, l_732[5], l_733, l_734, 0x4AB1A014L, l_735[2], l_736, (-2L), 0x3F309D40L, ((VECTOR(int32_t, 2))((-1L))), (-5L)))))).even, ((VECTOR(int32_t, 8))(0x70F1BFCDL))))), l_737[0][3], l_738, ((VECTOR(int32_t, 2))(0x5A1FFB5CL)), 0x71688D4CL, ((VECTOR(int32_t, 2))((-4L))), 0x01BDF6C2L)).sf2))), 8L, 0x6FEE39B0L)).ywwwyyxw, ((VECTOR(int32_t, 8))(0L))))).odd)))).xzxxwxwy)), ((VECTOR(int32_t, 8))((-1L)))))).s0205662110163775)).scd)).lo)));
                        (*l_685) = l_741;
                    }
                    else
                    { /* block id: 355 */
                        int32_t l_743[5][1] = {{0x061307EEL},{0x061307EEL},{0x061307EEL},{0x061307EEL},{0x061307EEL}};
                        int32_t *l_742 = &l_743[2][0];
                        int i, j;
                        l_685 = l_742;
                    }
                    l_746 = (l_745 = l_744[4][0]);
                    l_745.f3 |= ((l_749 = (l_748 = (l_747 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x3148FAAAD5E85661L, 18446744073709551607UL)).xyxx)).y))) , (((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_750.zx)), 0x41FC412B7CDCC3F6L, (-6L))).hi)).xyyxxxyx, ((VECTOR(int64_t, 4))(l_751.yyxy)).zxyxxyyy, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x7265C539L, ((VECTOR(int32_t, 2))(l_752.s31)), 0x28FD3C37L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_753.yzwyyyxw)))).s41)))), 1L, 0x15BDCDC5L)).lo, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(7L, 0x68265297L)))).yxyy, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_754.s805b)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, (-1L))).yxxyyyxy)).hi)))))).hi))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(l_755.s7bda0bf6ad019698)).odd))).s26)).xxxx)), 0x2F33EBB3L, 0x0B4A7C3DL, 0x7D28E7E7L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_756.yx)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x0B717A03L, (-6L))).yyyyyxyxyxxyyyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_757[0], ((VECTOR(int32_t, 2))(0x354C1124L, 0x3C9944B2L)), 0x3FCC390CL)).lo, ((VECTOR(int32_t, 16))((GROUP_DIVERGE(2, 1) , (l_700[1][0] = 0x4005145EL)), 0x7717DF35L, (l_700[4][7] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_758.sb450)))).y), (-4L), 0x17D801A5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x144CED1CL, 0x4E58180FL, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_759.xx)).yyxy, ((VECTOR(int32_t, 8))(0x14F97144L, 0x020B87A1L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_760.yxxxyzzz)).s7341165112724121, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_761.xxxxyxyy)).s7775233055606265)))).odd, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(1L, (-8L))), ((VECTOR(int32_t, 2))(0x6736888AL, 0x03F929E5L))))).xxxxxxyx))).s12)))).yyxxxyxxxyyxyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_762, ((VECTOR(int16_t, 2))(l_763.s52)), 9L)))).wwyxwwwxwzzxyzwz)))).seb, ((VECTOR(uint16_t, 2))(65532UL, 65530UL))))), 0x5E245D8CL, 0x75B89020L)).yyxxzywzxyyzzxww))).s71, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x3A4D4A19L, 1L, 0x66798D1FL, 0L)).wyywxxxz)).odd)).odd, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_764.s7743515227310777)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_765.sf95dc025)).odd)).wyzwwwyxxyxwwwyz, ((VECTOR(int32_t, 2))(l_766.yx)).yyxxxxxxyxxxyyyy))).s47))), ((++l_769) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(l_772.sd5)).xyyxyyyyxxyxxxyy, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(l_773.yxzw)).yzzzyxxxyzxzwxyz, ((VECTOR(int16_t, 4))(l_774, l_775, 7L, 1L)).xwzyxwwwyxzzyyxz)))))), ((VECTOR(uint16_t, 16))(2UL))))).odd)).s4), ((VECTOR(int32_t, 2))((-1L))), 7L)).odd))), 0x697A0C73L, (-1L))).lo)))), 0x1690BF48L, ((VECTOR(int32_t, 4))(0x243593FEL)), 0x701C6545L, 0L)).s4f)))))), ((VECTOR(int32_t, 2))((-1L)))))).yyyyyyxyxyyyyxyx, ((VECTOR(int32_t, 16))(0x76BBB645L)), ((VECTOR(int32_t, 16))(0L))))).s8, ((VECTOR(int32_t, 8))(0x20A765FBL)), l_776, 0x6B0769E0L, 0x13A94E64L, ((VECTOR(int32_t, 4))(1L)))), ((VECTOR(int32_t, 16))(0x4B101808L))))).s14))), 0x39F33ADEL)).sdf)), ((VECTOR(uint32_t, 2))(0x58B2B59AL))))).yyyxxyyyyyyyxyxy, ((VECTOR(int64_t, 16))(0x0C01F76D70DDF40EL)), ((VECTOR(int64_t, 16))(0x73E998F30EB4172AL))))).odd))).s5 , 4L));
                }
                else
                { /* block id: 366 */
                    int32_t l_777 = 0x0107538FL;
                    uint32_t l_797 = 0x24A7E84CL;
                    for (l_777 = 0; (l_777 < (-9)); l_777 = safe_sub_func_int8_t_s_s(l_777, 2))
                    { /* block id: 369 */
                        int32_t l_781 = 4L;
                        int32_t *l_780 = &l_781;
                        int16_t l_782[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_782[i] = 0x333EL;
                        l_685 = l_780;
                        (*l_685) &= l_782[0];
                    }
                    for (l_777 = 6; (l_777 != (-17)); l_777--)
                    { /* block id: 375 */
                        VECTOR(uint8_t, 2) l_785 = (VECTOR(uint8_t, 2))(255UL, 0x40L);
                        VECTOR(uint8_t, 8) l_786 = (VECTOR(uint8_t, 8))(0x2FL, (VECTOR(uint8_t, 4))(0x2FL, (VECTOR(uint8_t, 2))(0x2FL, 0xC2L), 0xC2L), 0xC2L, 0x2FL, 0xC2L);
                        VECTOR(uint8_t, 2) l_787 = (VECTOR(uint8_t, 2))(0x28L, 0xC9L);
                        int64_t l_788 = 0x0F1DCB473D373A3EL;
                        VECTOR(int32_t, 2) l_789 = (VECTOR(int32_t, 2))(0x658EA276L, 0x2ECD3C2FL);
                        int32_t l_790 = 4L;
                        struct S0 l_791 = {0x6AFB9044L,-8L,0x0AF8118CL,0x25C8F200L};
                        VECTOR(int32_t, 2) l_792 = (VECTOR(int32_t, 2))(0x5C4E460AL, 0x336D7E4DL);
                        struct S0 *l_793[2];
                        struct S0 *l_794 = &l_791;
                        struct S0 *l_795 = &l_791;
                        struct S0 *l_796 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_793[i] = &l_791;
                        l_796 = (((((FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10) , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 2))(l_785.yx)).xxxxxyxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 0xF7L)).yyyyyxyxxyxyyyyx)).s9982)).yyzyzyzx, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_786.s22)), 249UL, 246UL)))).zzxzzwww)).s47, ((VECTOR(uint8_t, 4))(l_787.yyyx)).lo))).xxyxxxxy))).even)).z) , l_788) , (((VECTOR(int32_t, 2))(l_789.xx)).lo , ((l_790 , 0x2DECL) , l_791))) , ((VECTOR(int32_t, 4))(l_792.yyxy)).y) , (l_795 = (l_794 = (l_793[0] = (void*)0))));
                    }
                    l_777 &= (l_797 = 0x710E683DL);
                }
                if (l_798)
                { /* block id: 384 */
                    int64_t l_799 = 0x3207777619AB230DL;
                    if (l_799)
                    { /* block id: 385 */
                        int32_t *l_800 = (void*)0;
                        int32_t l_801 = 1L;
                        union U1 l_803 = {1L};/* VOLATILE GLOBAL l_803 */
                        union U1 *l_802 = &l_803;
                        union U1 *l_804 = &l_803;
                        l_685 = l_800;
                        l_801 = l_801;
                        l_804 = l_802;
                    }
                    else
                    { /* block id: 389 */
                        int32_t l_805 = 0x0E94E6E6L;
                        int64_t l_806 = 0x7049A88CBB2716CEL;
                        uint64_t l_807 = 0x0AAAA78AB35B3678L;
                        int32_t l_811 = (-2L);
                        int32_t *l_810 = &l_811;
                        uint8_t l_812[7];
                        int64_t l_813[6] = {0x3B18ABA0CC45A5FEL,0x3B18ABA0CC45A5FEL,0x3B18ABA0CC45A5FEL,0x3B18ABA0CC45A5FEL,0x3B18ABA0CC45A5FEL,0x3B18ABA0CC45A5FEL};
                        int i;
                        for (i = 0; i < 7; i++)
                            l_812[i] = 0x3EL;
                        --l_807;
                        l_810 = l_810;
                        l_813[1] = l_812[6];
                    }
                }
                else
                { /* block id: 394 */
                    VECTOR(int32_t, 4) l_814 = (VECTOR(int32_t, 4))(0x6651450FL, (VECTOR(int32_t, 2))(0x6651450FL, 4L), 4L);
                    int i;
                    for (l_814.z = 0; (l_814.z != (-3)); l_814.z--)
                    { /* block id: 397 */
                        int32_t l_817 = 0L;
                        uint8_t l_818 = 0x3AL;
                        int32_t *l_821 = &l_817;
                        union U1 **l_822[2][9];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_822[i][j] = (void*)0;
                        }
                        --l_818;
                        l_821 = (void*)0;
                        l_822[1][3] = (void*)0;
                    }
                }
            }
            else
            { /* block id: 403 */
                union U1 **l_823 = (void*)0;
                union U1 l_826 = {1L};/* VOLATILE GLOBAL l_826 */
                union U1 *l_825 = &l_826;
                union U1 **l_824 = &l_825;
                VECTOR(int32_t, 8) l_827 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x19E5AF02L), 0x19E5AF02L), 0x19E5AF02L, 4L, 0x19E5AF02L);
                VECTOR(int32_t, 4) l_828 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                VECTOR(int32_t, 2) l_829 = (VECTOR(int32_t, 2))(0x01B8F1ABL, (-6L));
                uint8_t l_830 = 5UL;
                int32_t *l_867 = (void*)0;
                int32_t *l_868 = (void*)0;
                int32_t *l_869 = (void*)0;
                int32_t *l_870 = (void*)0;
                int i;
                l_824 = l_823;
                if (((VECTOR(int32_t, 16))(0x08ED56FBL, (l_681.s4 = 9L), ((VECTOR(int32_t, 2))(1L, (-1L))), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-9L), 0x0AC02688L)).xyyx, ((VECTOR(int32_t, 2))((-8L), (-9L))).yyyx, ((VECTOR(int32_t, 16))(l_827.s6204312234657530)).sef00))).z, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_828.wyyywyyx)).even))), 1L, 0x596B137CL, ((VECTOR(int32_t, 2))(l_829.yx)), l_830, 0x573C679BL, 0x52BAC0D0L)).s7)
                { /* block id: 406 */
                    int32_t l_831[9][2][10] = {{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}},{{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL},{0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL,5L,0x58B9D34FL,0x58B9D34FL}}};
                    int i, j, k;
                    for (l_831[8][0][1] = (-7); (l_831[8][0][1] >= 27); ++l_831[8][0][1])
                    { /* block id: 409 */
                        struct S0 l_834 = {-1L,0x7012A9DFC6E0E633L,-4L,0x09EF1317L};
                        struct S0 l_835 = {0x41DF3A7FL,1L,0L,0x648F037CL};
                        struct S0 l_836 = {7L,0x2BDC2B8DEB516E4CL,-3L,9L};
                        uint32_t l_837[9] = {0UL,4294967288UL,0UL,0UL,4294967288UL,0UL,0UL,4294967288UL,0UL};
                        int i;
                        l_829.y = ((l_836 = (l_835 = l_834)) , 1L);
                        l_837[8]--;
                    }
                }
                else
                { /* block id: 415 */
                    int16_t l_840 = 0x4B3BL;
                    if ((l_828.y = l_840))
                    { /* block id: 417 */
                        VECTOR(int32_t, 4) l_841 = (VECTOR(int32_t, 4))(0x54A01FE2L, (VECTOR(int32_t, 2))(0x54A01FE2L, 0x42FB8F3EL), 0x42FB8F3EL);
                        struct S0 l_842 = {1L,-1L,0x1E0F60ABL,0x19EDD23BL};
                        struct S0 l_843 = {0x00D160A3L,0x63726C81BBB40C5EL,-3L,0x0B77D5C4L};
                        struct S0 l_844 = {0x41BDCE3DL,-8L,0L,0L};
                        struct S0 l_845 = {-1L,1L,1L,-5L};
                        uint16_t l_846[2][5][8] = {{{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL}},{{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL},{65526UL,0xA7B7L,0xC27FL,0xA7B7L,65526UL,65526UL,0xA7B7L,0xC27FL}}};
                        int32_t *l_847[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_847[i] = &l_844.f0;
                        l_681.s3 = (l_829.x &= ((VECTOR(int32_t, 8))(l_841.wxyzyxyw)).s5);
                        l_845 = (l_844 = (l_843 = l_842));
                        l_828.z ^= (l_681.s0 = (l_827.s7 &= l_846[0][0][7]));
                        l_847[3] = (void*)0;
                    }
                    else
                    { /* block id: 427 */
                        struct S0 l_849 = {0x45677E60L,-1L,-1L,0x0E6D500AL};
                        struct S0 *l_848[3][9][9] = {{{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849}},{{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849}},{{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849,&l_849}}};
                        struct S0 *l_850 = &l_849;
                        struct S0 *l_851[6][4] = {{&l_849,(void*)0,&l_849,(void*)0},{&l_849,(void*)0,&l_849,(void*)0},{&l_849,(void*)0,&l_849,(void*)0},{&l_849,(void*)0,&l_849,(void*)0},{&l_849,(void*)0,&l_849,(void*)0},{&l_849,(void*)0,&l_849,(void*)0}};
                        int32_t *l_852 = &l_849.f2;
                        int i, j, k;
                        l_851[4][2] = (l_850 = l_848[2][4][8]);
                        l_852 = (void*)0;
                    }
                    for (l_840 = 2; (l_840 <= (-3)); l_840 = safe_sub_func_uint64_t_u_u(l_840, 4))
                    { /* block id: 434 */
                        int16_t l_855 = 0x0D3DL;
                        struct S0 l_856 = {-1L,0x6F8EAA923715DBC7L,-6L,0x4CE78047L};
                        struct S0 l_857 = {0x71A6AC25L,0x0141FCBEAE1DA7F4L,2L,-8L};
                        struct S0 l_858 = {0x2B7D7663L,1L,-1L,0x05E59D12L};
                        struct S0 l_859 = {0x101B339FL,-1L,0L,1L};
                        struct S0 l_860 = {-1L,0x19D793463A2DC620L,-1L,0x20FD0C20L};
                        uint8_t l_861 = 255UL;
                        uint8_t l_862 = 253UL;
                        uint32_t l_863 = 4294967289UL;
                        l_860 = ((l_855 , (l_856 = l_856)) , (l_859 = (l_858 = l_857)));
                        l_681.s3 |= l_861;
                        l_681.s4 = (l_862 , l_863);
                    }
                    for (l_840 = (-10); (l_840 <= (-21)); --l_840)
                    { /* block id: 444 */
                        int8_t l_866 = 0x72L;
                        l_681.s7 &= l_866;
                    }
                }
                l_869 = (l_868 = l_867);
                l_870 = (void*)0;
            }
            l_872 = l_871[2][0];
        }
        for (l_616 = 0; (l_616 > 6); ++l_616)
        { /* block id: 456 */
            int8_t l_875 = 0x1FL;
            int32_t l_876 = 0x36AE5F55L;
            int8_t l_877 = (-5L);
            VECTOR(int32_t, 2) l_878 = (VECTOR(int32_t, 2))(1L, (-10L));
            uint16_t l_879[5] = {0x512BL,0x512BL,0x512BL,0x512BL,0x512BL};
            int i;
            l_575[1] &= ((l_876 = l_875) , (-4L));
            --l_879[3];
        }
        unsigned int result = 0;
        int l_575_i0;
        for (l_575_i0 = 0; l_575_i0 < 8; l_575_i0++) {
            result += l_575[l_575_i0];
        }
        result += l_615;
        result += l_616;
        atomic_add(&p_924->g_special_values[91 * get_linear_group_id() + 5], result);
    }
    else
    { /* block id: 461 */
        (1 + 1);
    }
    l_899 = ((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_924->local_1_offset, get_local_id(1), 10) && (((VECTOR(uint32_t, 16))(p_924->g_884.xxzwxyxxwxzxywzz)).s2 , (safe_mod_func_int8_t_s_s((((((&p_924->g_55[4] != l_887) <= (((((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10) ^ ((*l_887) , (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(l_890.s62367645)).hi, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(0x04B825C0L, ((VECTOR(int32_t, 2))(p_924->g_891.ww)), 1L)).wxyyzxww, ((VECTOR(int32_t, 8))(p_924->g_892.s286408c3))))).lo, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(0xCE5DL, 0UL, 0x34D2L, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(p_924->g_893.s3a871b086114edb4)).sd2, ((VECTOR(uint16_t, 2))(0xBE92L, 0x2152L)), ((VECTOR(uint16_t, 4))(l_894.yxyx)).odd))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_924->g_895.wxxyxwwwyywxxzzx)).s60)), 65535UL, 0xCAB9L)), ((p_924->g_160.s2 |= ((safe_unary_minus_func_uint32_t_u((&p_924->g_510 != (void*)0))) | (l_897 = (l_890.s2 , ((((*p_924->g_147) = 0x59F79980L) || 0x579BFD5FL) >= 0x060EC279L))))) , 0x3494L), 0x5C9CL, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(1UL)), 0x9F26L)).sffeb, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0UL))))).odd))).yyxy, (uint16_t)0x4F1BL))).xxyxxxxxzwyyyzww)).hi))).s4272245636116163)).even, ((VECTOR(uint16_t, 8))(3UL))))).s4734024373445602)).s34)).yxxyxxyxyxyyyyxy, ((VECTOR(uint16_t, 16))(0UL))))).even)))).lo, ((VECTOR(uint16_t, 4))(1UL))))).yxxzxwwxxzyyxzww)).s0919, ((VECTOR(uint32_t, 4))(4294967291UL))))), p_924->g_228.f0, ((VECTOR(uint32_t, 2))(0x90FABC5EL)), ((VECTOR(uint32_t, 8))(4UL)), 4294967293UL)), ((VECTOR(uint32_t, 16))(1UL))))).s7b5f)))))).odd, ((VECTOR(int64_t, 2))(0x20D64A0756C78814L))))).lo, l_894.y)))) > l_566.s0), ((VECTOR(int32_t, 8))((-1L))), 0x2A0229D5L, 0x1500AB70L, (-1L), ((VECTOR(int32_t, 4))(0x18FC0060L)))).sc40d)).zyzwyzzw, ((VECTOR(int32_t, 8))(0x4092004FL))))))).s1622023012073610)).odd, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x2BA153EEL))))).s0 , l_566.s6) <= l_898) != GROUP_DIVERGE(1, 1))) || 0xA443D014FB17817FL) != p_924->g_178.x) , l_898), 0x2CL)))), l_566.s5)) != l_890.s1);
    p_924->g_141 ^= ((safe_div_func_uint32_t_u_u(l_566.s1, (safe_mod_func_int64_t_s_s((l_897 &= 0x19860E15C5B87D65L), (safe_sub_func_int64_t_s_s(l_906.y, 0x57A043C45967FFBDL)))))) < (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s((l_890.s1 < ((safe_mul_func_int8_t_s_s((l_565.x <= FAKE_DIVERGE(p_924->local_1_offset, get_local_id(1), 10)), (safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((l_899 = (&p_924->g_207[0] != &p_924->g_207[0])), (((l_921 &= (safe_div_func_int32_t_s_s(((*p_924->g_146) != &p_924->g_18), l_919))) , l_887) != l_887))) > l_922[9]), p_924->g_117)))) < p_924->g_55[4].f3)), p_924->g_448.f0)) < 0L) >= l_894.y) != l_565.y), p_924->g_182)));
    return p_924->g_99.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_2 p_924->l_comm_values p_924->g_55 p_924->g_81 p_924->g_98 p_924->g_99 p_924->g_100 p_924->g_101 p_924->g_112 p_924->g_23 p_924->g_4 p_924->g_137 p_924->g_139 p_924->g_146 p_924->g_147 p_924->g_160 p_924->g_3 p_924->g_178 p_924->g_182 p_924->g_141 p_924->g_18 p_924->g_196 p_924->g_197 p_924->g_comm_values p_924->g_216 p_924->g_222 p_924->g_228 p_924->g_117 p_924->g_363 p_924->g_207 p_924->g_387 p_924->g_448 p_924->g_227.f0 p_924->g_498 p_924->g_227.f2 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_531
 * writes: p_924->g_117 p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0 p_924->g_197 p_924->g_207 p_924->g_217 p_924->g_55 p_924->g_227 p_924->g_182 p_924->g_363 p_924->g_387 p_924->g_523 p_924->g_448.f1 p_924->g_428
 */
int32_t  func_20(uint32_t  p_21, uint16_t  p_22, struct S2 * p_924)
{ /* block id: 20 */
    uint64_t l_24 = 0x9EC134886255D580L;
    int32_t *l_28 = &p_924->g_4;
    int32_t *l_550[2][10][5] = {{{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0}},{{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0},{&p_924->g_55[4].f3,(void*)0,&p_924->g_55[4].f3,&p_924->g_55[4].f3,(void*)0}}};
    int i, j, k;
    (*p_924->g_196) = (l_24 & func_25(l_28, l_28, p_924));
    return (*p_924->g_147);
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_2 p_924->l_comm_values p_924->g_55 p_924->g_81 p_924->g_98 p_924->g_99 p_924->g_100 p_924->g_101 p_924->g_112 p_924->g_23 p_924->g_4 p_924->g_137 p_924->g_139 p_924->g_146 p_924->g_147 p_924->g_160 p_924->g_3 p_924->g_178 p_924->g_182 p_924->g_141 p_924->g_18 p_924->g_196 p_924->g_197 p_924->g_comm_values p_924->g_216 p_924->g_222 p_924->g_228 p_924->g_117 p_924->g_363 p_924->g_207 p_924->g_387 p_924->g_448 p_924->g_227.f0 p_924->g_498 p_924->g_227.f2 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_531
 * writes: p_924->g_117 p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0 p_924->g_197 p_924->g_207 p_924->g_217 p_924->g_55 p_924->g_227 p_924->g_182 p_924->g_363 p_924->g_387 p_924->g_523 p_924->g_448.f1 p_924->g_428
 */
uint32_t  func_25(int32_t * p_26, int32_t * p_27, struct S2 * p_924)
{ /* block id: 21 */
    int32_t l_29 = 0x3BDF78B1L;
    uint16_t l_32 = 0UL;
    VECTOR(uint8_t, 4) l_38 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x4AL), 0x4AL);
    struct S0 l_229 = {0x72F5B41CL,-9L,-6L,0x591C3BF2L};
    struct S0 *l_230[1][8] = {{&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4],&p_924->g_55[4]}};
    struct S0 l_231 = {0x54ACA4B3L,-10L,-9L,-8L};
    int32_t l_232 = 0L;
    int8_t *l_233 = &p_924->g_182;
    int8_t l_549 = (-1L);
    int i, j;
    l_29 = 0x070004DDL;
    l_549 = (safe_div_func_uint32_t_u_u((l_32 = 4294967295UL), func_33((((l_229.f0 = ((((*l_233) = (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(p_924->g_2, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(5L, 2L, 0x19FA4A60L, ((VECTOR(int32_t, 2))(0x4C996E15L, 0L)).lo, (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_38.yz)), (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(0x83L, (safe_div_func_uint16_t_u_u((p_924->l_comm_values[(safe_mod_func_uint32_t_u_u(p_924->tid, 224))] , (safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((-1L) || (l_232 ^= (safe_lshift_func_uint16_t_u_u(((l_231 = (p_924->g_55[4] = ((safe_mul_func_uint16_t_u_u(func_53(p_924->g_55[4], p_924), ((l_38.z >= (0x216BL && p_924->g_182)) != GROUP_DIVERGE(0, 1)))) , l_229))) , 9UL), 2)))), GROUP_DIVERGE(1, 1))) , p_924->g_222.s4), 4294967295UL))), 5L)))), l_229.f1)), 0x20L, ((VECTOR(uint8_t, 8))(0x96L)), ((VECTOR(uint8_t, 2))(249UL)), 246UL, 1UL)).s7, l_229.f2)), l_229.f0, 0x686D2688L, 0x5B35DEB6L)).s40)).xxxxxyxx)).s6621160624016264, (int32_t)0x4D32BE16L, (int32_t)(-4L)))).s37)), (*p_27), ((VECTOR(int32_t, 4))(0x30F8876AL)), ((VECTOR(int32_t, 8))(1L)))), ((VECTOR(int32_t, 16))(1L))))).s0 > 4294967295UL)) && l_229.f1) >= (-9L))) < GROUP_DIVERGE(0, 1)) | 4L), &p_924->g_4, p_924)));
    return l_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_117 p_924->g_101 p_924->g_100 p_924->g_363 p_924->g_207 p_924->g_387 p_924->g_147 p_924->g_55.f3 p_924->g_55.f0 p_924->g_141 p_924->g_139 p_924->g_18 p_924->g_448 p_924->g_55 p_924->g_178 p_924->g_98 p_924->g_4 p_924->g_227.f0 p_924->g_498 p_924->g_99 p_924->g_227.f2 p_924->g_196 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_531
 * writes: p_924->g_117 p_924->g_227.f3 p_924->g_363 p_924->g_55.f3 p_924->g_55.f0 p_924->g_141 p_924->g_207 p_924->g_147 p_924->g_387 p_924->g_227.f0 p_924->g_18 p_924->g_227.f2 p_924->g_523 p_924->g_448.f1 p_924->g_428 p_924->g_227 p_924->g_55
 */
uint32_t  func_33(int64_t  p_34, int32_t * p_35, struct S2 * p_924)
{ /* block id: 83 */
    uint32_t l_345 = 4294967291UL;
    int32_t l_365 = 0L;
    VECTOR(uint16_t, 4) l_371 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xF68CL), 0xF68CL);
    VECTOR(int8_t, 4) l_381 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x50L), 0x50L);
    VECTOR(int16_t, 2) l_403 = (VECTOR(int16_t, 2))(0L, 0x0371L);
    VECTOR(int64_t, 4) l_422 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 9L), 9L);
    int32_t l_459 = 0x0C1112C3L;
    int32_t l_507[3][5][7] = {{{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L}},{{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L}},{{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L},{0L,0x2692AF43L,5L,0x0836B2D6L,0x4BAF9A9EL,1L,1L}}};
    VECTOR(int32_t, 2) l_519 = (VECTOR(int32_t, 2))(0L, 0L);
    int i, j, k;
    if ((atomic_inc(&p_924->l_atomic_input[48]) == 1))
    { /* block id: 85 */
        int32_t l_234 = (-7L);
        int32_t l_235 = 0x520CEAFFL;
        uint32_t l_236 = 4UL;
        uint32_t l_237 = 0xA1A656AFL;
        uint16_t l_339 = 0xEF4EL;
        int16_t l_340 = 0x5C37L;
        l_235 = l_234;
        if ((l_236 , l_237))
        { /* block id: 87 */
            struct S0 l_239 = {0x4A0AEEF7L,0x3C1AD6298BA18F78L,0x00EF0E03L,0x0DBF95D6L};
            struct S0 *l_238 = &l_239;
            struct S0 *l_240 = &l_239;
            l_240 = l_238;
        }
        else
        { /* block id: 89 */
            int16_t l_241 = 0L;
            int32_t l_286[7] = {0x3623F3E8L,0x011B8DE1L,0x3623F3E8L,0x3623F3E8L,0x011B8DE1L,0x3623F3E8L,0x3623F3E8L};
            uint16_t l_336 = 0xDC06L;
            int64_t l_337 = 0x71838A191D6976FEL;
            uint8_t l_338 = 0x9DL;
            int i;
            if (l_241)
            { /* block id: 90 */
                struct S0 l_242 = {0x52C08418L,0x15EC47EE0E8DCDA3L,1L,-1L};
                l_242 = l_242;
            }
            else
            { /* block id: 92 */
                int32_t l_243 = (-10L);
                int64_t l_265 = 8L;
                l_234 = 0x7874170AL;
                for (l_243 = 0; (l_243 != (-5)); l_243 = safe_sub_func_uint8_t_u_u(l_243, 6))
                { /* block id: 96 */
                    uint32_t l_246 = 0xA11C9E3CL;
                    struct S0 l_249 = {6L,0x1BAB34661305BF94L,-1L,0L};
                    VECTOR(int32_t, 4) l_250 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L);
                    VECTOR(int32_t, 4) l_251 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x1E3E255AL), 0x1E3E255AL);
                    VECTOR(uint8_t, 8) l_252 = (VECTOR(uint8_t, 8))(0x9FL, (VECTOR(uint8_t, 4))(0x9FL, (VECTOR(uint8_t, 2))(0x9FL, 1UL), 1UL), 1UL, 0x9FL, 1UL);
                    VECTOR(int16_t, 8) l_253 = (VECTOR(int16_t, 8))(0x1000L, (VECTOR(int16_t, 4))(0x1000L, (VECTOR(int16_t, 2))(0x1000L, 0x7E60L), 0x7E60L), 0x7E60L, 0x1000L, 0x7E60L);
                    VECTOR(int32_t, 4) l_254 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-7L)), (-7L));
                    uint32_t l_255 = 0x7EA6E083L;
                    uint64_t l_256[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    VECTOR(int32_t, 4) l_257 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x057DF223L), 0x057DF223L);
                    VECTOR(int32_t, 8) l_258 = (VECTOR(int32_t, 8))(0x2E57E6AAL, (VECTOR(int32_t, 4))(0x2E57E6AAL, (VECTOR(int32_t, 2))(0x2E57E6AAL, 0L), 0L), 0L, 0x2E57E6AAL, 0L);
                    VECTOR(int32_t, 8) l_259 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x56CB48F3L), 0x56CB48F3L), 0x56CB48F3L, (-4L), 0x56CB48F3L);
                    VECTOR(int32_t, 2) l_260 = (VECTOR(int32_t, 2))((-1L), 0L);
                    VECTOR(int32_t, 16) l_261 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                    int8_t l_262 = 7L;
                    int32_t l_263 = 0x446B0DBFL;
                    int16_t l_264 = 0x42A6L;
                    int i;
                    l_264 = ((--l_246) , ((VECTOR(int32_t, 8))(0x3A1A5540L, 0L, (l_249 , ((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_250.wyyy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(7L, 0x1B5D2C1EL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_251.zx)), (-10L), (-1L))).ywyyyzzw)), 1L, ((VECTOR(int32_t, 2))(0x07F5430EL, 0x6A4EE1F3L)), (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_252.s00)))).odd , l_253.s5), 0x1236B7ECL, 0x1DCC9798L)).sb304)), ((VECTOR(int32_t, 4))(l_254.yxyz))))).z, (-7L), 8L)).x), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(0x1BFA9311L, l_255, 0x06F32E08L, l_256[5], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_257.zx)))).yxyx)))).even)).odd, 0x0B388C12L, 0x5BEE3EABL, 7L)).hi)), 0x394147C4L, (-10L))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x15A39AC4L, 0x75945D36L)).yxyx)).yzzyzxwz, ((VECTOR(int32_t, 16))(l_258.s6155700160400306)).lo))).hi)).wxxyyxyx))).s0275024017640047)).lo, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_259.s62441263)).lo, ((VECTOR(int32_t, 2))(l_260.xx)).yyxy))).lo)).yxyyyyxy))), ((VECTOR(int32_t, 4))(l_261.s4fc7)).wwwwwwzz))).s63, ((VECTOR(int32_t, 2))(0x35E8AD48L, 0x6C985221L))))), (l_263 = (l_234 |= l_262)), 0x2B7384CCL, 0x39717E37L)).s2);
                }
                if (l_265)
                { /* block id: 102 */
                    int32_t l_267 = 0x08C12509L;
                    int32_t *l_266 = &l_267;
                    l_266 = l_266;
                    for (l_267 = 3; (l_267 > 21); l_267++)
                    { /* block id: 106 */
                        struct S0 l_270 = {2L,0x7F6B8ADB2BEAC055L,0x2CA86B7FL,-5L};
                        struct S0 l_271[8][2][4] = {{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}},{{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}},{{0x6AE77555L,0L,-7L,0x1250CD72L},{1L,-3L,0x26E4B284L,1L},{0x2D2F496AL,0x3989A8E6CA84D639L,0L,-1L},{1L,-3L,0x26E4B284L,1L}}}};
                        int64_t l_272 = 0x412F7C296114083AL;
                        VECTOR(int32_t, 16) l_273 = (VECTOR(int32_t, 16))(0x73D8554AL, (VECTOR(int32_t, 4))(0x73D8554AL, (VECTOR(int32_t, 2))(0x73D8554AL, (-1L)), (-1L)), (-1L), 0x73D8554AL, (-1L), (VECTOR(int32_t, 2))(0x73D8554AL, (-1L)), (VECTOR(int32_t, 2))(0x73D8554AL, (-1L)), 0x73D8554AL, (-1L), 0x73D8554AL, (-1L));
                        VECTOR(int32_t, 8) l_274 = (VECTOR(int32_t, 8))(0x6BD36A48L, (VECTOR(int32_t, 4))(0x6BD36A48L, (VECTOR(int32_t, 2))(0x6BD36A48L, 1L), 1L), 1L, 0x6BD36A48L, 1L);
                        uint64_t l_275 = 0xB3EF2E3C69D2BE7BL;
                        int i, j, k;
                        l_271[2][0][2] = l_270;
                        l_273.s9 = (l_272 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_273.sf28c)), ((VECTOR(int32_t, 2))(0x13B8E99BL, 0x34D2820CL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_274.s33617372)).s2741473502455354)).odd)), 0L, 7L)).s40b4)).z);
                        ++l_275;
                    }
                }
                else
                { /* block id: 111 */
                    int32_t l_278 = 1L;
                    for (l_278 = 0; (l_278 == 22); l_278 = safe_add_func_uint32_t_u_u(l_278, 9))
                    { /* block id: 114 */
                        int64_t l_281[8] = {0x53D9A7A357069F22L,1L,0x53D9A7A357069F22L,0x53D9A7A357069F22L,1L,0x53D9A7A357069F22L,0x53D9A7A357069F22L,1L};
                        int32_t l_282 = 0x32C53F82L;
                        struct S0 l_283 = {0x795F7130L,0x22A7BF1E7EB242ABL,0x1A41F489L,0x5D36EDDFL};
                        int16_t l_284 = 0L;
                        int8_t l_285 = 0x5AL;
                        int i;
                        l_234 |= ((l_235 = l_281[0]) , 0L);
                        l_234 = (l_282 , (l_285 &= (l_283 , l_284)));
                    }
                }
            }
            if (l_286[5])
            { /* block id: 122 */
                int32_t l_287 = (-1L);
                uint16_t l_311 = 0x2C72L;
                uint64_t l_314 = 0xF102D8F09C6116B3L;
                uint64_t *l_313 = &l_314;
                uint64_t **l_312[5][9] = {{&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313,&l_313}};
                uint64_t **l_315 = &l_313;
                int32_t *l_316 = &l_287;
                int i, j;
                for (l_287 = (-27); (l_287 < 9); l_287 = safe_add_func_uint64_t_u_u(l_287, 9))
                { /* block id: 125 */
                    int8_t l_290 = (-1L);
                    struct S0 l_308 = {0L,0x255AE1925E8790BDL,3L,0x68D8F1ACL};
                    int32_t *l_309[6][6] = {{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2},{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2},{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2},{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2},{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2},{&l_308.f2,&l_308.f0,&l_308.f2,&l_308.f2,&l_308.f0,&l_308.f2}};
                    int32_t *l_310 = (void*)0;
                    int i, j;
                    if (l_290)
                    { /* block id: 126 */
                        int32_t l_292 = 0x5165CD4AL;
                        int32_t *l_291 = &l_292;
                        int32_t *l_293 = &l_292;
                        struct S0 l_294 = {0L,1L,1L,0x27DD6E50L};
                        struct S0 l_295 = {0L,0x7A4B5F97AF9E345EL,0x4BC8077EL,-4L};
                        struct S0 l_296 = {0x3A12C1CEL,0x4D2D91674E724880L,0x70B265B0L,0x2781781BL};
                        struct S0 l_297 = {0x35D3E90FL,0x34F1C786D4D23ED5L,-2L,0x28F6F076L};
                        struct S0 l_298 = {4L,-3L,0x09DE6CA5L,-5L};
                        struct S0 l_299 = {-2L,0x793AE9CA03AC845CL,0x411BC2BFL,6L};
                        l_293 = l_291;
                        l_295 = l_294;
                        l_299 = (l_298 = (l_297 = l_296));
                    }
                    else
                    { /* block id: 132 */
                        int16_t l_300 = (-7L);
                        int8_t l_301 = (-1L);
                        uint64_t l_302 = 18446744073709551615UL;
                        int32_t *l_305 = (void*)0;
                        int32_t *l_306 = (void*)0;
                        uint32_t l_307 = 4294967293UL;
                        l_302--;
                        l_306 = l_305;
                        l_234 = 0x19AEE28DL;
                        l_234 ^= l_307;
                    }
                    l_234 = 0x1501CF55L;
                    l_234 = 0x606E186EL;
                    l_309[3][0] = (l_310 = (l_308 , l_309[0][5]));
                }
                l_234 |= l_311;
                l_315 = l_312[4][8];
                l_316 = l_316;
            }
            else
            { /* block id: 146 */
                int32_t l_317 = 0x1F539C6CL;
                VECTOR(uint16_t, 16) l_328 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0xDFDAL), 0xDFDAL), 0xDFDAL, 9UL, 0xDFDAL, (VECTOR(uint16_t, 2))(9UL, 0xDFDAL), (VECTOR(uint16_t, 2))(9UL, 0xDFDAL), 9UL, 0xDFDAL, 9UL, 0xDFDAL);
                int8_t l_329 = 0x62L;
                uint32_t l_330[2];
                uint16_t l_331[10][1][9] = {{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}},{{0xFF75L,0xFEAAL,0xFEAAL,0xFF75L,65535UL,0x513DL,0x513DL,65535UL,0xFF75L}}};
                uint64_t l_332 = 1UL;
                int16_t l_335 = (-1L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_330[i] = 0UL;
                for (l_317 = (-9); (l_317 > (-16)); l_317 = safe_sub_func_int32_t_s_s(l_317, 9))
                { /* block id: 149 */
                    uint64_t l_320 = 0x46E92700A744752AL;
                    int32_t l_322[7][9] = {{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L},{0x7DE106B6L,0x3F96EEB8L,0x3E8852DDL,0x1C45FF28L,0x3F96EEB8L,0x1C45FF28L,0x3E8852DDL,0x3F96EEB8L,0x7DE106B6L}};
                    int32_t *l_321 = &l_322[0][4];
                    int64_t l_323 = (-1L);
                    int i, j;
                    l_321 = (l_320 , (void*)0);
                    if (l_323)
                    { /* block id: 151 */
                        uint16_t l_324 = 0x4F57L;
                        int64_t l_325 = 0x61E74DD836C28093L;
                        l_325 |= l_324;
                    }
                    else
                    { /* block id: 153 */
                        int32_t l_327 = (-7L);
                        int32_t *l_326 = &l_327;
                        l_326 = (l_321 = (void*)0);
                    }
                }
                l_234 &= ((((VECTOR(uint16_t, 2))(l_328.se5)).odd , (l_329 , (GROUP_DIVERGE(0, 1) , l_330[0]))) , l_331[9][0][1]);
                l_332--;
                l_234 = l_335;
            }
            l_337 = l_336;
            l_234 ^= l_338;
        }
        l_340 ^= l_339;
        unsigned int result = 0;
        result += l_234;
        result += l_235;
        result += l_236;
        result += l_237;
        result += l_339;
        result += l_340;
        atomic_add(&p_924->l_special_values[48], result);
    }
    else
    { /* block id: 166 */
        (1 + 1);
    }
    for (p_924->g_117 = 0; (p_924->g_117 == 48); p_924->g_117 = safe_add_func_int8_t_s_s(p_924->g_117, 8))
    { /* block id: 171 */
        VECTOR(int64_t, 2) l_356 = (VECTOR(int64_t, 2))(7L, 8L);
        int32_t l_364 = 0x660A7B76L;
        VECTOR(int64_t, 16) l_421 = (VECTOR(int64_t, 16))(0x73F5E95EBB0ECB0DL, (VECTOR(int64_t, 4))(0x73F5E95EBB0ECB0DL, (VECTOR(int64_t, 2))(0x73F5E95EBB0ECB0DL, 0L), 0L), 0L, 0x73F5E95EBB0ECB0DL, 0L, (VECTOR(int64_t, 2))(0x73F5E95EBB0ECB0DL, 0L), (VECTOR(int64_t, 2))(0x73F5E95EBB0ECB0DL, 0L), 0x73F5E95EBB0ECB0DL, 0L, 0x73F5E95EBB0ECB0DL, 0L);
        uint32_t l_433[5][10] = {{0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L},{0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L},{0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L},{0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L},{0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L,0x68BB182DL,0x1BA29303L,0x1BA29303L}};
        VECTOR(int32_t, 2) l_454 = (VECTOR(int32_t, 2))((-8L), (-5L));
        uint16_t l_460[6][8][5] = {{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}},{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}},{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}},{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}},{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}},{{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L},{65534UL,0x84B9L,0x30F2L,0xAFFDL,0xB1F7L}}};
        int32_t *l_485[7] = {(void*)0,&p_924->g_227.f0,(void*)0,(void*)0,&p_924->g_227.f0,(void*)0,(void*)0};
        int i, j, k;
        for (p_924->g_227.f3 = (-27); (p_924->g_227.f3 != (-17)); p_924->g_227.f3 = safe_add_func_uint32_t_u_u(p_924->g_227.f3, 4))
        { /* block id: 174 */
            int64_t l_346 = 0L;
            VECTOR(int64_t, 2) l_355 = (VECTOR(int64_t, 2))((-9L), 4L);
            int64_t *l_361 = &l_346;
            uint16_t *l_362[7][3][10] = {{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}},{{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363},{&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363,&p_924->g_363}}};
            struct S0 l_370 = {0x34559933L,-3L,0x77E080BFL,1L};
            VECTOR(uint16_t, 2) l_380 = (VECTOR(uint16_t, 2))(0UL, 0x0D95L);
            VECTOR(int8_t, 4) l_382 = (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x25L), 0x25L);
            VECTOR(uint8_t, 16) l_383 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 7UL), 7UL), 7UL, 9UL, 7UL, (VECTOR(uint8_t, 2))(9UL, 7UL), (VECTOR(uint8_t, 2))(9UL, 7UL), 9UL, 7UL, 9UL, 7UL);
            int8_t *l_384 = (void*)0;
            VECTOR(int32_t, 4) l_385 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5CFD4324L), 0x5CFD4324L);
            int32_t l_386 = 0x2D314AB4L;
            uint8_t l_463[5];
            int32_t **l_483 = &p_924->g_147;
            int8_t *l_484[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_463[i] = 254UL;
            if (((l_345 , (l_346 = p_924->g_101.x)) , ((safe_div_func_int16_t_s_s((((((safe_add_func_int16_t_s_s(((l_365 = (FAKE_DIVERGE(p_924->group_2_offset, get_group_id(2), 10) , (safe_add_func_int32_t_s_s(((*p_924->g_147) |= (((((safe_div_func_int32_t_s_s(((((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_355.yy)).xyxy, ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_356.xxyyyyyx)).even)).yxxwwxwywxxzywwz))).sadc1, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_924->g_357.yyxxyxxx)).s21)).yyyy))).x | ((p_924->g_100.s6 ^ ((*l_361) = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_924->g_360.s20a1)).z, 3)))) | ((p_924->g_363++) > ((safe_rshift_func_uint16_t_u_u((l_370 , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_371.wwzy)))).w), (safe_rshift_func_uint16_t_u_s(((+((((-4L) >= FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10)) < (l_386 &= (l_385.y |= ((1UL | (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((p_34 , ((GROUP_DIVERGE(2, 1) , (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_380.yx)).xyxxxyxy)).s13)), 1UL, 0x0602L)).y, p_34))) && (((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_381.zwyxxywz)).s33)).yxxyxyxyyxyxyyyy, ((VECTOR(int8_t, 16))(l_382.wxwyzyzzxwwzxzww))))).sa < ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_383.s7e4f9625)).s55)).xyyxxyxyyyyxxyxx)).s223a)).hi, ((VECTOR(uint8_t, 2))(247UL, 0x7BL))))).xxxxyxxx)).s2546053347677404))), (uint8_t)(((((p_924->g_100.s7 , (-1L)) , (void*)0) == l_384) && 0UL) , 255UL)))).s3))), FAKE_DIVERGE(p_924->global_1_offset, get_global_id(1), 10))) < l_383.s6), p_924->g_207[0]))) , 0x6C0EL)))) < p_34)) >= 4L), l_382.x)))) , 0x0F17L)))) ^ 0x362AD116B99E8AA2L), l_356.y)) <= p_924->g_387) == 0x52B3F937DB2F1F8AL) && 0x3EL) ^ 18446744073709551615UL)), p_34)))) , p_34), p_924->g_139[3][0])) , 0x163E4180L) , 0x04L) && p_34) || l_364), p_924->g_18)) & l_345)))
            { /* block id: 182 */
                VECTOR(uint8_t, 16) l_393 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
                uint8_t *l_394 = &p_924->g_207[0];
                VECTOR(int64_t, 4) l_420 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
                uint64_t *l_427 = &p_924->g_428;
                int32_t l_453 = 0x60EA6CC2L;
                int i;
                (*p_924->g_147) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_924->g_388.s6043)))).w;
                (*p_924->g_147) = (safe_div_func_uint64_t_u_u((l_386 ^= ((safe_sub_func_int64_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_393.s0ab47989)).s2751221423567701)).sca55)).z == (--(*l_394))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(0xC0070678D7CD09B3L, 1UL)).yxyy, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(0UL, (p_924->g_397 , (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_924->group_1_offset, get_group_id(1), 10), ((safe_div_func_uint16_t_u_u((p_924->g_402 , (((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(l_403.yy)), (-5L))).z > (((l_385.x |= (safe_sub_func_int8_t_s_s((p_924->g_55[4].f0 ^ l_380.x), ((safe_mod_func_uint8_t_u_u(p_34, (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((+0x10L), 7)), (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_924->global_0_offset, get_global_id(0), 10), p_34)) >= (((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_420.xzyz)).yyzyyyzx))))).s11, ((VECTOR(int64_t, 4))(l_421.sc822)).lo, ((VECTOR(int64_t, 4))(l_422.xwxy)).lo))).odd , ((p_924->g_388.s3 != (safe_div_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((*l_427)++), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))((l_403.x <= p_34), ((VECTOR(int64_t, 4))(0x4EC3D57967B3311DL)), p_924->g_227.f0, ((VECTOR(int64_t, 8))(0x6F2395F17322D6B1L)), 0x01290319C4D52338L, 0x21109BFE476B1B15L)).sb, 0x2D654EE130C3EF0EL)))) <= p_34), GROUP_DIVERGE(2, 1)))) == l_393.s4))), p_924->g_227.f1)), l_370.f2)))), l_433[0][4])))) > l_370.f0)))) >= p_34) < 1UL))), 65535UL)) >= 0x0D53L)))), 0x6E7E63EC22B56A81L, 0x93DE23EB3A9716F1L)).zyxyxwwy, ((VECTOR(uint64_t, 8))(0x4C744F0A5696FB7BL))))).even))), 0x5B9FE362A4A30AB1L, ((VECTOR(uint64_t, 2))(18446744073709551606UL)), l_381.y, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0x60419544F442A5BFL)), 0UL)).lo)).s6)) , 0xB59A8D9B2F9EC9FBL)), p_34));
                l_453 &= ((safe_rshift_func_int8_t_s_s((l_421.se , (safe_lshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(0x5A44L, (((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_924->g_448 , (((((((p_924->g_55[4] , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, 0x364B51ABF02F0CA7L)).xxxy)).y) > (p_924->g_178.y && ((void*)0 != &p_34))) ^ p_34) , (safe_sub_func_uint64_t_u_u(((void*)0 != &p_924->g_363), p_34))) >= FAKE_DIVERGE(p_924->local_0_offset, get_local_id(0), 10)) && p_34) >= l_421.sc)), 0x10L)), l_370.f3)), p_34)) , l_427) == l_427))), p_34)) == 4294967292UL), l_420.z))), 1)) == FAKE_DIVERGE(p_924->group_2_offset, get_group_id(2), 10));
            }
            else
            { /* block id: 190 */
                int32_t l_457[4][3][7] = {{{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L}},{{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L}},{{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L}},{{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L},{0x25CD1017L,0L,(-1L),0x523E72AAL,1L,4L,8L}}};
                int32_t *l_458[1][9][8] = {{{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2},{&p_924->g_55[4].f3,&l_457[3][0][2],(void*)0,&l_457[0][1][1],&p_924->g_141,&l_364,&p_924->g_55[4].f3,&p_924->g_227.f2}}};
                int i, j, k;
                (*p_924->g_147) &= ((VECTOR(int32_t, 8))(l_454.xyxyyxxy)).s7;
                for (l_370.f3 = 4; (l_370.f3 == (-27)); l_370.f3 = safe_sub_func_uint32_t_u_u(l_370.f3, 6))
                { /* block id: 194 */
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_924->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 224)), permutations[(safe_mod_func_uint32_t_u_u(p_924->g_98.w, 10))][(safe_mod_func_uint32_t_u_u(p_924->tid, 224))]));
                    return p_34;
                }
                l_460[5][0][3]++;
            }
            (*l_483) = func_65(l_355.x, l_463[0], (safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s(((((((safe_mod_func_uint16_t_u_u(((p_34 , &p_924->g_147) == ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((safe_unary_minus_func_int8_t_s((p_924->g_160.s2 ^= (safe_mod_func_int32_t_s_s((0x4E64L >= (l_364 = (2UL <= p_924->g_100.s2))), (safe_rshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(0x2684L, (((*l_483) = p_35) != p_35))) && l_422.w) && p_924->g_18), 9))))))), p_924->g_99.x, l_460[2][5][3], ((VECTOR(uint32_t, 4))(4294967286UL)), 3UL)).even)))).z, l_421.s2)) , (void*)0)), 0x9F49L)) , (-2L)) , &p_924->g_227) == (void*)0) >= (-5L)) , p_34), 2)) <= p_34) <= (-1L)), p_34)), l_403.x)), l_485[4], p_924);
        }
        if ((*p_35))
            break;
    }
    for (p_924->g_387 = 2; (p_924->g_387 >= 27); p_924->g_387++)
    { /* block id: 211 */
        uint16_t l_488 = 0UL;
        int16_t l_511 = 0x2144L;
        VECTOR(int32_t, 4) l_520 = (VECTOR(int32_t, 4))(0x02153A4DL, (VECTOR(int32_t, 2))(0x02153A4DL, 1L), 1L);
        union U1 *l_521 = &p_924->g_448;
        union U1 **l_522[8] = {&l_521,&l_521,&l_521,&l_521,&l_521,&l_521,&l_521,&l_521};
        int i;
        (*p_924->g_147) &= l_488;
        for (p_924->g_227.f0 = 0; (p_924->g_227.f0 < (-22)); p_924->g_227.f0--)
        { /* block id: 215 */
            int32_t *l_493[1];
            int i;
            for (i = 0; i < 1; i++)
                l_493[i] = &p_924->g_227.f2;
            for (p_924->g_18 = 27; (p_924->g_18 <= (-10)); p_924->g_18 = safe_sub_func_uint16_t_u_u(p_924->g_18, 6))
            { /* block id: 218 */
                int32_t **l_495 = &l_493[0];
                uint32_t *l_502 = &l_345;
                uint64_t *l_508 = &p_924->g_117;
                int32_t *l_509[6][3] = {{&p_924->g_510,&p_924->g_510,&p_924->g_510},{&p_924->g_510,&p_924->g_510,&p_924->g_510},{&p_924->g_510,&p_924->g_510,&p_924->g_510},{&p_924->g_510,&p_924->g_510,&p_924->g_510},{&p_924->g_510,&p_924->g_510,&p_924->g_510},{&p_924->g_510,&p_924->g_510,&p_924->g_510}};
                uint16_t *l_518 = &p_924->g_363;
                int i, j;
                (*l_495) = l_493[0];
                (**l_495) = (safe_add_func_uint32_t_u_u(p_924->g_498, ((((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(0x09C0F3B6L, (-3L), (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_502) |= l_488))), (p_924->g_99.x , ((*l_518) &= (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((*l_508) = (p_34 , (p_34 , l_507[0][0][5]))), ((l_511 ^= p_34) , (safe_unary_minus_func_int64_t_s((-1L)))))) && (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0x457AF73DL, l_511)), 11))))), (**l_495))))))), (*p_924->g_196), ((VECTOR(int32_t, 8))(0x45634D57L)), ((VECTOR(int32_t, 4))(0x7E7E0AF7L)))).s8b, (int32_t)0x63D98E29L))), ((VECTOR(int32_t, 2))(0L))))).lo , l_381.w) != l_422.y)));
                return l_403.x;
            }
            if (l_422.w)
                continue;
            l_519.x = ((*p_924->g_147) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_519.xy)).yxxy)).w);
            (*p_924->g_147) = (+((VECTOR(int32_t, 2))(l_520.yy)).even);
        }
        p_924->g_523 = l_521;
    }
    for (p_924->g_448.f1 = 27; (p_924->g_448.f1 < 4); p_924->g_448.f1 = safe_sub_func_int64_t_s_s(p_924->g_448.f1, 2))
    { /* block id: 236 */
        uint8_t *l_528 = &p_924->g_207[0];
        int32_t l_529 = 5L;
        int32_t l_538 = 0L;
        int32_t l_539 = (-5L);
        int32_t l_540 = 0L;
        int32_t l_541 = 0x07F3B901L;
        VECTOR(int32_t, 16) l_542 = (VECTOR(int32_t, 16))(0x34CD2C9CL, (VECTOR(int32_t, 4))(0x34CD2C9CL, (VECTOR(int32_t, 2))(0x34CD2C9CL, 0x2CF8A823L), 0x2CF8A823L), 0x2CF8A823L, 0x34CD2C9CL, 0x2CF8A823L, (VECTOR(int32_t, 2))(0x34CD2C9CL, 0x2CF8A823L), (VECTOR(int32_t, 2))(0x34CD2C9CL, 0x2CF8A823L), 0x34CD2C9CL, 0x2CF8A823L, 0x34CD2C9CL, 0x2CF8A823L);
        struct S0 l_548 = {-8L,-4L,0x36FA84AEL,1L};
        int i;
        for (p_924->g_428 = 0; (p_924->g_428 == 60); p_924->g_428 = safe_add_func_uint32_t_u_u(p_924->g_428, 4))
        { /* block id: 239 */
            struct S0 *l_530 = &p_924->g_227;
            if ((*p_924->g_196))
                break;
            l_529 = ((void*)0 == l_528);
            (*p_924->g_531) = ((*l_530) = p_924->g_227);
        }
        for (l_459 = (-27); (l_459 != 2); l_459 = safe_add_func_int64_t_s_s(l_459, 9))
        { /* block id: 247 */
            int32_t *l_534 = &l_529;
            int32_t *l_535 = &l_529;
            int32_t *l_536 = &p_924->g_227.f2;
            int32_t *l_537[9] = {&p_924->g_4,&p_924->g_141,&p_924->g_4,&p_924->g_4,&p_924->g_141,&p_924->g_4,&p_924->g_4,&p_924->g_141,&p_924->g_4};
            uint32_t l_543 = 4294967295UL;
            int i;
            l_543++;
        }
        (*p_924->g_147) = (p_924->g_117 ^ (safe_lshift_func_uint16_t_u_s(l_519.y, 7)));
        l_548 = l_548;
    }
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_81 p_924->g_55.f1 p_924->g_98 p_924->g_99 p_924->g_100 p_924->g_101 p_924->g_112 p_924->g_23 p_924->g_4 p_924->g_137 p_924->g_139 p_924->g_55 p_924->g_146 p_924->g_147 p_924->g_160 p_924->g_3 p_924->g_178 p_924->g_182 p_924->g_141 p_924->g_18 p_924->g_196 p_924->g_197 p_924->g_comm_values p_924->g_216 p_924->g_222 p_924->g_228
 * writes: p_924->g_117 p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0 p_924->g_197 p_924->g_207 p_924->g_217 p_924->g_55 p_924->g_227
 */
uint16_t  func_53(struct S0  p_54, struct S2 * p_924)
{ /* block id: 24 */
    VECTOR(uint16_t, 4) l_71 = (VECTOR(uint16_t, 4))(0x470BL, (VECTOR(uint16_t, 2))(0x470BL, 0UL), 0UL);
    VECTOR(uint32_t, 16) l_78 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEE56C84DL), 0xEE56C84DL), 0xEE56C84DL, 1UL, 0xEE56C84DL, (VECTOR(uint32_t, 2))(1UL, 0xEE56C84DL), (VECTOR(uint32_t, 2))(1UL, 0xEE56C84DL), 1UL, 0xEE56C84DL, 1UL, 0xEE56C84DL);
    int32_t **l_198 = &p_924->g_147;
    int32_t **l_199 = &p_924->g_147;
    int32_t **l_200 = &p_924->g_147;
    int32_t **l_201 = &p_924->g_147;
    int32_t **l_202 = &p_924->g_147;
    int32_t **l_203 = &p_924->g_147;
    int32_t **l_204 = (void*)0;
    int32_t *l_205 = &p_924->g_55[4].f0;
    uint8_t *l_206 = &p_924->g_207[0];
    int i;
    (*l_203) = ((func_56(&p_924->g_4, func_60(((*l_198) = func_65(p_54.f0, (((safe_unary_minus_func_int64_t_s(p_54.f1)) , 0xA42286E0L) , (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(l_71.yyxxzxyy)).s70, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(l_71.z, 0x8F5BL, (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((GROUP_DIVERGE(2, 1) | (safe_add_func_uint64_t_u_u(0UL, (((*l_206) = (~(((l_78.s1 & (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(p_924->g_81.sac)).hi, 9))) , (l_205 = func_82((l_78.sd > (safe_add_func_uint8_t_u_u((((1UL && 0x6213L) != l_78.s7) , p_54.f2), l_78.s1))), p_924->g_81.s3, &p_924->g_4, p_924->g_55[4].f1, p_924))) == &p_924->g_4))) || p_924->g_160.s1)))), p_924->g_comm_values[p_924->tid])), p_54.f0)) & p_924->g_55[4].f2) > p_54.f2), 65535UL, 0xB496L, ((VECTOR(uint16_t, 2))(0UL)), 0x52D5L)), ((VECTOR(uint16_t, 8))(0x216CL))))).hi)).odd))))), 0UL, 0x8783L, ((VECTOR(uint16_t, 2))(1UL)), 0x7E4DL, 0UL)).s03, ((VECTOR(uint16_t, 2))(0UL))))), 0x9DBBL, 0xBBB7L)).wxwxywwxxxwzxwxy)).sd | 65535UL)), p_924->g_55[4].f2, &p_924->g_4, p_924)), p_924->g_160.s4, &p_924->g_4, &p_924->g_4, p_924), p_924->g_4, p_924) , p_924->g_228) , (*l_202));
    return p_54.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_924->g_55 p_924->g_227
 */
int32_t  func_56(int32_t * p_57, int8_t  p_58, int64_t  p_59, struct S2 * p_924)
{ /* block id: 72 */
    struct S0 l_225 = {0x244C01E1L,9L,0x7EBAF8E3L,0x76213B6CL};
    struct S0 *l_226[3];
    int i;
    for (i = 0; i < 3; i++)
        l_226[i] = &p_924->g_55[5];
    p_924->g_227 = (p_924->g_55[6] = (((void*)0 == &p_924->g_217) , l_225));
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_216 p_924->g_222 p_924->g_4 p_924->g_137 p_924->g_139 p_924->g_55 p_924->g_146 p_924->g_98 p_924->g_147 p_924->g_196 p_924->g_18 p_924->g_197
 * writes: p_924->g_217 p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0 p_924->g_197
 */
int8_t  func_60(int32_t * p_61, int16_t  p_62, int32_t * p_63, int32_t * p_64, struct S2 * p_924)
{ /* block id: 68 */
    int64_t *l_215 = (void*)0;
    int64_t **l_214 = &l_215;
    int8_t l_221 = (-7L);
    (*p_924->g_216) = l_214;
    (*p_924->g_146) = func_82((safe_add_func_uint16_t_u_u((l_221 >= ((VECTOR(int8_t, 4))(0x3BL, 0x5FL, 0x30L, 0x5AL)).y), (-1L))), (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(p_924->g_222.s05)), (uint8_t)FAKE_DIVERGE(p_924->global_0_offset, get_global_id(0), 10)))).xyyx)).y || p_62), &p_924->g_4, (safe_mul_func_uint16_t_u_u(p_62, l_221)), p_924);
    return p_62;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_65(uint64_t  p_66, int32_t  p_67, int64_t  p_68, int32_t * p_69, struct S2 * p_924)
{ /* block id: 64 */
    int8_t l_208 = 0L;
    int32_t *l_209 = &p_924->g_55[4].f0;
    int32_t *l_210[7];
    uint32_t l_211[5];
    int i;
    for (i = 0; i < 7; i++)
        l_210[i] = &p_924->g_55[4].f3;
    for (i = 0; i < 5; i++)
        l_211[i] = 0xCD07EA0FL;
    l_211[2]++;
    return l_210[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_98 p_924->g_99 p_924->g_100 p_924->g_101 p_924->g_112 p_924->g_23 p_924->g_4 p_924->g_137 p_924->g_139 p_924->g_55 p_924->g_146 p_924->g_147 p_924->g_160 p_924->g_3 p_924->g_178 p_924->g_182 p_924->g_141 p_924->g_18 p_924->g_196 p_924->g_197
 * writes: p_924->g_117 p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0 p_924->g_197
 */
int32_t * func_82(uint64_t  p_83, uint32_t  p_84, int32_t * p_85, uint8_t  p_86, struct S2 * p_924)
{ /* block id: 25 */
    VECTOR(int32_t, 16) l_89 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x29E21427L), 0x29E21427L), 0x29E21427L, (-2L), 0x29E21427L, (VECTOR(int32_t, 2))((-2L), 0x29E21427L), (VECTOR(int32_t, 2))((-2L), 0x29E21427L), (-2L), 0x29E21427L, (-2L), 0x29E21427L);
    VECTOR(int32_t, 8) l_90 = (VECTOR(int32_t, 8))(0x3B161CA2L, (VECTOR(int32_t, 4))(0x3B161CA2L, (VECTOR(int32_t, 2))(0x3B161CA2L, (-1L)), (-1L)), (-1L), 0x3B161CA2L, (-1L));
    VECTOR(int32_t, 8) l_91 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L);
    VECTOR(int8_t, 16) l_97 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, (-1L)), (-1L)), (-1L), 0x0CL, (-1L), (VECTOR(int8_t, 2))(0x0CL, (-1L)), (VECTOR(int8_t, 2))(0x0CL, (-1L)), 0x0CL, (-1L), 0x0CL, (-1L));
    int32_t *l_105 = &p_924->g_18;
    int32_t **l_104 = &l_105;
    uint64_t *l_116[5] = {&p_924->g_117,&p_924->g_117,&p_924->g_117,&p_924->g_117,&p_924->g_117};
    int8_t *l_118 = (void*)0;
    int8_t *l_119 = (void*)0;
    int8_t *l_120 = (void*)0;
    int8_t *l_121 = (void*)0;
    int8_t *l_122 = (void*)0;
    int8_t *l_123 = (void*)0;
    int8_t *l_124[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_125 = (-10L);
    int16_t *l_126 = (void*)0;
    int32_t l_127 = 0L;
    int8_t l_128 = 0x27L;
    int i, j;
    p_924->g_197[2] ^= (((p_83 == (((VECTOR(int32_t, 8))((-10L), 0x7C0BD789L, ((VECTOR(int32_t, 2))(l_89.s8d)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_90.s51)).yxyy, ((VECTOR(int32_t, 2))(l_91.s57)).xyyx))))))).s6 ^ (+(func_92(p_85, ((((l_91.s0 < (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_97.s5b)), ((VECTOR(int8_t, 2))(p_924->g_98.wx)), ((VECTOR(int8_t, 4))(p_924->g_99.xxxx)), ((VECTOR(int8_t, 2))(p_924->g_100.s12)), ((VECTOR(int8_t, 2))(p_924->g_101.xx)), (safe_mul_func_int16_t_s_s((((*l_104) = &p_924->g_18) != (p_86 , &p_924->g_18)), (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s((((void*)0 != p_924->g_112[3]) == (l_127 = (safe_mod_func_int8_t_s_s((l_125 ^= (((p_924->g_117 = p_924->g_23) || p_86) || p_84)), p_83)))), 3)) < p_83) ^ FAKE_DIVERGE(p_924->group_1_offset, get_group_id(1), 10)), 18446744073709551611UL)), l_128)))), ((VECTOR(int8_t, 2))(0L)), (-4L))).s4, 4))) >= 1L) | (*p_85)) < p_84), p_924) , (*p_924->g_196))))) != p_924->g_55[4].f1) ^ 7L);
    return &p_924->g_141;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_23 p_924->g_137 p_924->g_139 p_924->g_55 p_924->g_146 p_924->g_98 p_924->g_147 p_924->g_160 p_924->g_3 p_924->g_178 p_924->g_4 p_924->g_100 p_924->g_182 p_924->g_141 p_924->g_18 p_924->g_196
 * writes: p_924->g_23 p_924->g_139 p_924->g_141 p_924->g_147 p_924->g_18 p_924->g_55.f0
 */
int32_t  func_92(int32_t * p_93, uint16_t  p_94, struct S2 * p_924)
{ /* block id: 30 */
    VECTOR(int8_t, 16) l_131 = (VECTOR(int8_t, 16))(0x48L, (VECTOR(int8_t, 4))(0x48L, (VECTOR(int8_t, 2))(0x48L, (-2L)), (-2L)), (-2L), 0x48L, (-2L), (VECTOR(int8_t, 2))(0x48L, (-2L)), (VECTOR(int8_t, 2))(0x48L, (-2L)), 0x48L, (-2L), 0x48L, (-2L));
    int32_t l_150 = 2L;
    VECTOR(uint8_t, 8) l_171 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 251UL), 251UL), 251UL, 1UL, 251UL);
    VECTOR(int64_t, 8) l_177 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0C699ED955F3680CL), 0x0C699ED955F3680CL), 0x0C699ED955F3680CL, (-1L), 0x0C699ED955F3680CL);
    uint32_t l_183 = 0x109FDD9FL;
    VECTOR(int32_t, 2) l_184 = (VECTOR(int32_t, 2))(0L, (-2L));
    int i;
    for (p_924->g_23 = (-11); (p_924->g_23 == 25); p_924->g_23++)
    { /* block id: 33 */
        int32_t l_136[5][9] = {{0x40CF43ACL,0x40CF43ACL,0x26FBF5F8L,0x61BD86D4L,(-1L),0x5E4B234AL,0L,0x2E6A661FL,0L},{0x40CF43ACL,0x40CF43ACL,0x26FBF5F8L,0x61BD86D4L,(-1L),0x5E4B234AL,0L,0x2E6A661FL,0L},{0x40CF43ACL,0x40CF43ACL,0x26FBF5F8L,0x61BD86D4L,(-1L),0x5E4B234AL,0L,0x2E6A661FL,0L},{0x40CF43ACL,0x40CF43ACL,0x26FBF5F8L,0x61BD86D4L,(-1L),0x5E4B234AL,0L,0x2E6A661FL,0L},{0x40CF43ACL,0x40CF43ACL,0x26FBF5F8L,0x61BD86D4L,(-1L),0x5E4B234AL,0L,0x2E6A661FL,0L}};
        int16_t *l_138 = &p_924->g_139[3][0];
        uint16_t *l_140 = (void*)0;
        int32_t **l_144 = (void*)0;
        int32_t **l_145 = (void*)0;
        VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x25F1995CL), 0x25F1995CL);
        VECTOR(int32_t, 4) l_152 = (VECTOR(int32_t, 4))(0x6EB2DE19L, (VECTOR(int32_t, 2))(0x6EB2DE19L, (-1L)), (-1L));
        VECTOR(int8_t, 4) l_159 = (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, (-1L)), (-1L));
        VECTOR(int64_t, 16) l_176 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int64_t, 2))(1L, (-8L)), (VECTOR(int64_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L));
        int64_t *l_179[3];
        VECTOR(int64_t, 8) l_180 = (VECTOR(int64_t, 8))(0x350FA80559AC6BCDL, (VECTOR(int64_t, 4))(0x350FA80559AC6BCDL, (VECTOR(int64_t, 2))(0x350FA80559AC6BCDL, 1L), 1L), 1L, 0x350FA80559AC6BCDL, 1L);
        uint16_t l_181[10][7] = {{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL},{0x840EL,0x56C7L,0UL,0x840EL,0x5C05L,0UL,0UL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_179[i] = (void*)0;
        (*p_924->g_146) = (((((VECTOR(int8_t, 4))(l_131.sc216)).x >= (((+0UL) , (safe_add_func_int8_t_s_s(((p_924->g_141 = (safe_add_func_uint16_t_u_u((l_136[2][5] && ((void*)0 == p_924->g_137)), ((*l_138) &= ((VECTOR(int16_t, 2))(0x7FF5L, 5L)).lo)))) < p_94), l_136[2][5]))) & (safe_add_func_uint32_t_u_u((p_924->g_55[5] , p_924->g_55[4].f3), 0x4D012404L)))) == p_94) , &l_136[2][5]);
        (*p_924->g_147) &= (l_150 &= ((FAKE_DIVERGE(p_924->group_1_offset, get_group_id(1), 10) <= (safe_rshift_func_uint16_t_u_u(p_924->g_98.y, 9))) <= p_924->g_139[3][0]));
        l_184.x = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_151.yyywxzzx)).s7664713213624013)).s1 ^ (((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(0x2F89F941L, (-3L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_152.zzzz)).ywyyxyxwwywxwxzy)).lo)), ((!p_94) , ((*p_924->g_147) |= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_159.xy)).yyyx)), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_924->g_160.s21516357)).lo)).zwxzyxww)).s03)), (-1L), 0x51L, (safe_rshift_func_uint16_t_u_s((((+(safe_sub_func_uint64_t_u_u(p_924->g_55[4].f1, (p_94 || ((VECTOR(int64_t, 2))(0x401AD3E3C3B741B6L, (-8L))).hi)))) != GROUP_DIVERGE(2, 1)) || (p_924->g_3[6] > ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_171.s2150312731740043)).s0, (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((((l_131.s4 , ((VECTOR(int64_t, 4))(l_176.s3195)).w) <= ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(1L, 0x703F9351E36C2B63L)).xyyyxxxyyxyxxxxx, ((VECTOR(int64_t, 16))(l_177.s6515644344763040))))), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 2))(p_924->g_178.yx)), (int64_t)(FAKE_DIVERGE(p_924->local_0_offset, get_local_id(0), 10) | l_171.s1), (int64_t)(l_150 = p_924->g_4)))).xyxyxyyyxxxxxxyx))).odd)).s1 , 18446744073709551611UL) != ((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_180.s54)).yyyx)).zxyxzzwwyzwzzwxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(((+((VECTOR(uint8_t, 4))((l_181[3][3] , l_171.s5), 0x4DL, 0x82L, 0x65L)).y) | l_177.s5), (-5L), 0x02C662BAD161D8D2L, ((VECTOR(int64_t, 4))(0L)), 0x76D975CF2B2128A0L)).s55, ((VECTOR(int64_t, 2))((-1L)))))).xxyxyyyx)).s1135473467313112))).s5)) && 1L) != 0xFE7F47FA05C2F4BCL), p_924->g_160.s0)) < FAKE_DIVERGE(p_924->group_2_offset, get_group_id(2), 10)), p_924->g_100.s1)))) , &p_924->g_4) == &p_924->g_4) , p_924->g_100.s2), 0x8961L)), p_94)) <= p_924->g_182))), p_924->g_160.s5)), l_183, (-7L), 7L)).s6041667570464675)).sc4, ((VECTOR(int8_t, 2))((-9L)))))), 1L, 0x17L)).hi)).even)).xyyy)).zwwxwzxz, ((VECTOR(int8_t, 8))(0x23L))))).s0, p_94)), 5)), 9)))), 0x7ECA5C75L, ((VECTOR(int32_t, 4))(0x4E05431AL)))), (int32_t)(**p_924->g_146), (int32_t)(-1L)))).s2 , p_94));
    }
    for (l_150 = (-24); (l_150 >= 28); l_150 = safe_add_func_uint64_t_u_u(l_150, 6))
    { /* block id: 45 */
        uint8_t l_187 = 0x21L;
        int32_t *l_195 = &p_924->g_55[4].f0;
        if (l_187)
            break;
        for (p_924->g_141 = (-27); (p_924->g_141 > (-26)); p_924->g_141 = safe_add_func_int8_t_s_s(p_924->g_141, 6))
        { /* block id: 49 */
            for (p_924->g_18 = 0; (p_924->g_18 <= 24); p_924->g_18++)
            { /* block id: 52 */
                uint16_t l_192 = 0xCB75L;
                l_192--;
            }
        }
        (*p_924->g_196) = ((*l_195) = l_131.s3);
    }
    return l_171.s2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[224];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 224; i++)
            l_comm_values[i] = 1;
    struct S2 c_925;
    struct S2* p_924 = &c_925;
    struct S2 c_926 = {
        0x09C3FBB4L, // p_924->g_2
        {0x663E3155L,4L,0x663E3155L,0x663E3155L,4L,0x663E3155L,0x663E3155L,4L,0x663E3155L}, // p_924->g_3
        1L, // p_924->g_4
        0x540A1650L, // p_924->g_18
        0x6BDA1846L, // p_924->g_23
        {{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L},{0x5D1B3002L,0x1D3B05E2623EE1E1L,0x1E4171B3L,0x678DE611L}}, // p_924->g_55
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xAE93L), 0xAE93L), 0xAE93L, 1UL, 0xAE93L, (VECTOR(uint16_t, 2))(1UL, 0xAE93L), (VECTOR(uint16_t, 2))(1UL, 0xAE93L), 1UL, 0xAE93L, 1UL, 0xAE93L), // p_924->g_81
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), // p_924->g_98
        (VECTOR(int8_t, 2))(0x28L, 0x24L), // p_924->g_99
        (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x7EL), 0x7EL), 0x7EL, 7L, 0x7EL), // p_924->g_100
        (VECTOR(int8_t, 2))(6L, 0L), // p_924->g_101
        &p_924->g_2, // p_924->g_113
        {(void*)0,&p_924->g_113,(void*)0,(void*)0,&p_924->g_113,(void*)0}, // p_924->g_112
        0xA2850EDC4196DCF8L, // p_924->g_117
        (void*)0, // p_924->g_137
        {{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L},{(-1L),3L,3L,(-1L),(-1L),3L,3L,(-1L),(-1L),3L}}, // p_924->g_139
        0x0FBC7DB1L, // p_924->g_141
        &p_924->g_55[4].f0, // p_924->g_147
        &p_924->g_147, // p_924->g_146
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x61L), 0x61L), 0x61L, (-4L), 0x61L), // p_924->g_160
        (VECTOR(int64_t, 2))((-6L), 0x78462E04F2ECF321L), // p_924->g_178
        0x3AL, // p_924->g_182
        &p_924->g_18, // p_924->g_196
        {0L,(-1L),0L,0L,(-1L),0L,0L,(-1L),0L}, // p_924->g_197
        {0xFFL}, // p_924->g_207
        (void*)0, // p_924->g_218
        &p_924->g_218, // p_924->g_217
        &p_924->g_217, // p_924->g_216
        (VECTOR(uint8_t, 8))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 2UL), 2UL), 2UL, 0xB5L, 2UL), // p_924->g_222
        {8L,0x2BEF45837000C01DL,0x28A07003L,0x070FD17AL}, // p_924->g_227
        {0L}, // p_924->g_228
        (VECTOR(int64_t, 2))(0x2B03CD6C90BD2ADCL, 0x0259AAC7A9D4689EL), // p_924->g_357
        (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-1L)), (-1L)), (-1L), 0x2CL, (-1L), (VECTOR(int8_t, 2))(0x2CL, (-1L)), (VECTOR(int8_t, 2))(0x2CL, (-1L)), 0x2CL, (-1L), 0x2CL, (-1L)), // p_924->g_360
        65528UL, // p_924->g_363
        4294967291UL, // p_924->g_387
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L), // p_924->g_388
        {0x25B5BE6EL}, // p_924->g_397
        {0x0C79545CL}, // p_924->g_402
        18446744073709551610UL, // p_924->g_428
        {0x13DF5487L}, // p_924->g_448
        (void*)0, // p_924->g_494
        9UL, // p_924->g_498
        0x7DC1A4F2L, // p_924->g_510
        &p_924->g_448, // p_924->g_523
        &p_924->g_55[7], // p_924->g_531
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), // p_924->g_564
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), // p_924->g_884
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), // p_924->g_891
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_924->g_892
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_924->g_893
        (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x26B9L), 0x26B9L), // p_924->g_895
        0, // p_924->v_collective
        sequence_input[get_global_id(0)], // p_924->global_0_offset
        sequence_input[get_global_id(1)], // p_924->global_1_offset
        sequence_input[get_global_id(2)], // p_924->global_2_offset
        sequence_input[get_local_id(0)], // p_924->local_0_offset
        sequence_input[get_local_id(1)], // p_924->local_1_offset
        sequence_input[get_local_id(2)], // p_924->local_2_offset
        sequence_input[get_group_id(0)], // p_924->group_0_offset
        sequence_input[get_group_id(1)], // p_924->group_1_offset
        sequence_input[get_group_id(2)], // p_924->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 224)), permutations[0][get_linear_local_id()])), // p_924->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_925 = c_926;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_924);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_924->g_2, "p_924->g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_924->g_3[i], "p_924->g_3[i]", print_hash_value);

    }
    transparent_crc(p_924->g_4, "p_924->g_4", print_hash_value);
    transparent_crc(p_924->g_18, "p_924->g_18", print_hash_value);
    transparent_crc(p_924->g_23, "p_924->g_23", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_924->g_55[i].f0, "p_924->g_55[i].f0", print_hash_value);
        transparent_crc(p_924->g_55[i].f1, "p_924->g_55[i].f1", print_hash_value);
        transparent_crc(p_924->g_55[i].f2, "p_924->g_55[i].f2", print_hash_value);
        transparent_crc(p_924->g_55[i].f3, "p_924->g_55[i].f3", print_hash_value);

    }
    transparent_crc(p_924->g_81.s0, "p_924->g_81.s0", print_hash_value);
    transparent_crc(p_924->g_81.s1, "p_924->g_81.s1", print_hash_value);
    transparent_crc(p_924->g_81.s2, "p_924->g_81.s2", print_hash_value);
    transparent_crc(p_924->g_81.s3, "p_924->g_81.s3", print_hash_value);
    transparent_crc(p_924->g_81.s4, "p_924->g_81.s4", print_hash_value);
    transparent_crc(p_924->g_81.s5, "p_924->g_81.s5", print_hash_value);
    transparent_crc(p_924->g_81.s6, "p_924->g_81.s6", print_hash_value);
    transparent_crc(p_924->g_81.s7, "p_924->g_81.s7", print_hash_value);
    transparent_crc(p_924->g_81.s8, "p_924->g_81.s8", print_hash_value);
    transparent_crc(p_924->g_81.s9, "p_924->g_81.s9", print_hash_value);
    transparent_crc(p_924->g_81.sa, "p_924->g_81.sa", print_hash_value);
    transparent_crc(p_924->g_81.sb, "p_924->g_81.sb", print_hash_value);
    transparent_crc(p_924->g_81.sc, "p_924->g_81.sc", print_hash_value);
    transparent_crc(p_924->g_81.sd, "p_924->g_81.sd", print_hash_value);
    transparent_crc(p_924->g_81.se, "p_924->g_81.se", print_hash_value);
    transparent_crc(p_924->g_81.sf, "p_924->g_81.sf", print_hash_value);
    transparent_crc(p_924->g_98.x, "p_924->g_98.x", print_hash_value);
    transparent_crc(p_924->g_98.y, "p_924->g_98.y", print_hash_value);
    transparent_crc(p_924->g_98.z, "p_924->g_98.z", print_hash_value);
    transparent_crc(p_924->g_98.w, "p_924->g_98.w", print_hash_value);
    transparent_crc(p_924->g_99.x, "p_924->g_99.x", print_hash_value);
    transparent_crc(p_924->g_99.y, "p_924->g_99.y", print_hash_value);
    transparent_crc(p_924->g_100.s0, "p_924->g_100.s0", print_hash_value);
    transparent_crc(p_924->g_100.s1, "p_924->g_100.s1", print_hash_value);
    transparent_crc(p_924->g_100.s2, "p_924->g_100.s2", print_hash_value);
    transparent_crc(p_924->g_100.s3, "p_924->g_100.s3", print_hash_value);
    transparent_crc(p_924->g_100.s4, "p_924->g_100.s4", print_hash_value);
    transparent_crc(p_924->g_100.s5, "p_924->g_100.s5", print_hash_value);
    transparent_crc(p_924->g_100.s6, "p_924->g_100.s6", print_hash_value);
    transparent_crc(p_924->g_100.s7, "p_924->g_100.s7", print_hash_value);
    transparent_crc(p_924->g_101.x, "p_924->g_101.x", print_hash_value);
    transparent_crc(p_924->g_101.y, "p_924->g_101.y", print_hash_value);
    transparent_crc(p_924->g_117, "p_924->g_117", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_924->g_139[i][j], "p_924->g_139[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_924->g_141, "p_924->g_141", print_hash_value);
    transparent_crc(p_924->g_160.s0, "p_924->g_160.s0", print_hash_value);
    transparent_crc(p_924->g_160.s1, "p_924->g_160.s1", print_hash_value);
    transparent_crc(p_924->g_160.s2, "p_924->g_160.s2", print_hash_value);
    transparent_crc(p_924->g_160.s3, "p_924->g_160.s3", print_hash_value);
    transparent_crc(p_924->g_160.s4, "p_924->g_160.s4", print_hash_value);
    transparent_crc(p_924->g_160.s5, "p_924->g_160.s5", print_hash_value);
    transparent_crc(p_924->g_160.s6, "p_924->g_160.s6", print_hash_value);
    transparent_crc(p_924->g_160.s7, "p_924->g_160.s7", print_hash_value);
    transparent_crc(p_924->g_178.x, "p_924->g_178.x", print_hash_value);
    transparent_crc(p_924->g_178.y, "p_924->g_178.y", print_hash_value);
    transparent_crc(p_924->g_182, "p_924->g_182", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_924->g_197[i], "p_924->g_197[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_924->g_207[i], "p_924->g_207[i]", print_hash_value);

    }
    transparent_crc(p_924->g_222.s0, "p_924->g_222.s0", print_hash_value);
    transparent_crc(p_924->g_222.s1, "p_924->g_222.s1", print_hash_value);
    transparent_crc(p_924->g_222.s2, "p_924->g_222.s2", print_hash_value);
    transparent_crc(p_924->g_222.s3, "p_924->g_222.s3", print_hash_value);
    transparent_crc(p_924->g_222.s4, "p_924->g_222.s4", print_hash_value);
    transparent_crc(p_924->g_222.s5, "p_924->g_222.s5", print_hash_value);
    transparent_crc(p_924->g_222.s6, "p_924->g_222.s6", print_hash_value);
    transparent_crc(p_924->g_222.s7, "p_924->g_222.s7", print_hash_value);
    transparent_crc(p_924->g_227.f0, "p_924->g_227.f0", print_hash_value);
    transparent_crc(p_924->g_227.f1, "p_924->g_227.f1", print_hash_value);
    transparent_crc(p_924->g_227.f2, "p_924->g_227.f2", print_hash_value);
    transparent_crc(p_924->g_227.f3, "p_924->g_227.f3", print_hash_value);
    transparent_crc(p_924->g_228.f0, "p_924->g_228.f0", print_hash_value);
    transparent_crc(p_924->g_357.x, "p_924->g_357.x", print_hash_value);
    transparent_crc(p_924->g_357.y, "p_924->g_357.y", print_hash_value);
    transparent_crc(p_924->g_360.s0, "p_924->g_360.s0", print_hash_value);
    transparent_crc(p_924->g_360.s1, "p_924->g_360.s1", print_hash_value);
    transparent_crc(p_924->g_360.s2, "p_924->g_360.s2", print_hash_value);
    transparent_crc(p_924->g_360.s3, "p_924->g_360.s3", print_hash_value);
    transparent_crc(p_924->g_360.s4, "p_924->g_360.s4", print_hash_value);
    transparent_crc(p_924->g_360.s5, "p_924->g_360.s5", print_hash_value);
    transparent_crc(p_924->g_360.s6, "p_924->g_360.s6", print_hash_value);
    transparent_crc(p_924->g_360.s7, "p_924->g_360.s7", print_hash_value);
    transparent_crc(p_924->g_360.s8, "p_924->g_360.s8", print_hash_value);
    transparent_crc(p_924->g_360.s9, "p_924->g_360.s9", print_hash_value);
    transparent_crc(p_924->g_360.sa, "p_924->g_360.sa", print_hash_value);
    transparent_crc(p_924->g_360.sb, "p_924->g_360.sb", print_hash_value);
    transparent_crc(p_924->g_360.sc, "p_924->g_360.sc", print_hash_value);
    transparent_crc(p_924->g_360.sd, "p_924->g_360.sd", print_hash_value);
    transparent_crc(p_924->g_360.se, "p_924->g_360.se", print_hash_value);
    transparent_crc(p_924->g_360.sf, "p_924->g_360.sf", print_hash_value);
    transparent_crc(p_924->g_363, "p_924->g_363", print_hash_value);
    transparent_crc(p_924->g_387, "p_924->g_387", print_hash_value);
    transparent_crc(p_924->g_388.s0, "p_924->g_388.s0", print_hash_value);
    transparent_crc(p_924->g_388.s1, "p_924->g_388.s1", print_hash_value);
    transparent_crc(p_924->g_388.s2, "p_924->g_388.s2", print_hash_value);
    transparent_crc(p_924->g_388.s3, "p_924->g_388.s3", print_hash_value);
    transparent_crc(p_924->g_388.s4, "p_924->g_388.s4", print_hash_value);
    transparent_crc(p_924->g_388.s5, "p_924->g_388.s5", print_hash_value);
    transparent_crc(p_924->g_388.s6, "p_924->g_388.s6", print_hash_value);
    transparent_crc(p_924->g_388.s7, "p_924->g_388.s7", print_hash_value);
    transparent_crc(p_924->g_397.f0, "p_924->g_397.f0", print_hash_value);
    transparent_crc(p_924->g_402.f0, "p_924->g_402.f0", print_hash_value);
    transparent_crc(p_924->g_428, "p_924->g_428", print_hash_value);
    transparent_crc(p_924->g_448.f0, "p_924->g_448.f0", print_hash_value);
    transparent_crc(p_924->g_498, "p_924->g_498", print_hash_value);
    transparent_crc(p_924->g_510, "p_924->g_510", print_hash_value);
    transparent_crc(p_924->g_564.x, "p_924->g_564.x", print_hash_value);
    transparent_crc(p_924->g_564.y, "p_924->g_564.y", print_hash_value);
    transparent_crc(p_924->g_564.z, "p_924->g_564.z", print_hash_value);
    transparent_crc(p_924->g_564.w, "p_924->g_564.w", print_hash_value);
    transparent_crc(p_924->g_884.x, "p_924->g_884.x", print_hash_value);
    transparent_crc(p_924->g_884.y, "p_924->g_884.y", print_hash_value);
    transparent_crc(p_924->g_884.z, "p_924->g_884.z", print_hash_value);
    transparent_crc(p_924->g_884.w, "p_924->g_884.w", print_hash_value);
    transparent_crc(p_924->g_891.x, "p_924->g_891.x", print_hash_value);
    transparent_crc(p_924->g_891.y, "p_924->g_891.y", print_hash_value);
    transparent_crc(p_924->g_891.z, "p_924->g_891.z", print_hash_value);
    transparent_crc(p_924->g_891.w, "p_924->g_891.w", print_hash_value);
    transparent_crc(p_924->g_892.s0, "p_924->g_892.s0", print_hash_value);
    transparent_crc(p_924->g_892.s1, "p_924->g_892.s1", print_hash_value);
    transparent_crc(p_924->g_892.s2, "p_924->g_892.s2", print_hash_value);
    transparent_crc(p_924->g_892.s3, "p_924->g_892.s3", print_hash_value);
    transparent_crc(p_924->g_892.s4, "p_924->g_892.s4", print_hash_value);
    transparent_crc(p_924->g_892.s5, "p_924->g_892.s5", print_hash_value);
    transparent_crc(p_924->g_892.s6, "p_924->g_892.s6", print_hash_value);
    transparent_crc(p_924->g_892.s7, "p_924->g_892.s7", print_hash_value);
    transparent_crc(p_924->g_892.s8, "p_924->g_892.s8", print_hash_value);
    transparent_crc(p_924->g_892.s9, "p_924->g_892.s9", print_hash_value);
    transparent_crc(p_924->g_892.sa, "p_924->g_892.sa", print_hash_value);
    transparent_crc(p_924->g_892.sb, "p_924->g_892.sb", print_hash_value);
    transparent_crc(p_924->g_892.sc, "p_924->g_892.sc", print_hash_value);
    transparent_crc(p_924->g_892.sd, "p_924->g_892.sd", print_hash_value);
    transparent_crc(p_924->g_892.se, "p_924->g_892.se", print_hash_value);
    transparent_crc(p_924->g_892.sf, "p_924->g_892.sf", print_hash_value);
    transparent_crc(p_924->g_893.s0, "p_924->g_893.s0", print_hash_value);
    transparent_crc(p_924->g_893.s1, "p_924->g_893.s1", print_hash_value);
    transparent_crc(p_924->g_893.s2, "p_924->g_893.s2", print_hash_value);
    transparent_crc(p_924->g_893.s3, "p_924->g_893.s3", print_hash_value);
    transparent_crc(p_924->g_893.s4, "p_924->g_893.s4", print_hash_value);
    transparent_crc(p_924->g_893.s5, "p_924->g_893.s5", print_hash_value);
    transparent_crc(p_924->g_893.s6, "p_924->g_893.s6", print_hash_value);
    transparent_crc(p_924->g_893.s7, "p_924->g_893.s7", print_hash_value);
    transparent_crc(p_924->g_893.s8, "p_924->g_893.s8", print_hash_value);
    transparent_crc(p_924->g_893.s9, "p_924->g_893.s9", print_hash_value);
    transparent_crc(p_924->g_893.sa, "p_924->g_893.sa", print_hash_value);
    transparent_crc(p_924->g_893.sb, "p_924->g_893.sb", print_hash_value);
    transparent_crc(p_924->g_893.sc, "p_924->g_893.sc", print_hash_value);
    transparent_crc(p_924->g_893.sd, "p_924->g_893.sd", print_hash_value);
    transparent_crc(p_924->g_893.se, "p_924->g_893.se", print_hash_value);
    transparent_crc(p_924->g_893.sf, "p_924->g_893.sf", print_hash_value);
    transparent_crc(p_924->g_895.x, "p_924->g_895.x", print_hash_value);
    transparent_crc(p_924->g_895.y, "p_924->g_895.y", print_hash_value);
    transparent_crc(p_924->g_895.z, "p_924->g_895.z", print_hash_value);
    transparent_crc(p_924->g_895.w, "p_924->g_895.w", print_hash_value);
    transparent_crc(p_924->v_collective, "p_924->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 91; i++)
            transparent_crc(p_924->g_special_values[i + 91 * get_linear_group_id()], "p_924->g_special_values[i + 91 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 91; i++)
            transparent_crc(p_924->l_special_values[i], "p_924->l_special_values[i]", print_hash_value);
    transparent_crc(p_924->l_comm_values[get_linear_local_id()], "p_924->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_924->g_comm_values[get_linear_group_id() * 224 + get_linear_local_id()], "p_924->g_comm_values[get_linear_group_id() * 224 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
