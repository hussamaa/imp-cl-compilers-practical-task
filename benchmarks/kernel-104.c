// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,76,1 -l 11,19,1
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

__constant uint32_t permutations[10][209] = {
{7,69,42,81,59,108,67,39,49,75,148,184,66,51,131,156,78,41,155,5,37,183,101,85,163,104,45,32,98,61,175,198,195,93,22,191,62,120,145,207,160,132,117,173,31,157,113,181,197,14,118,199,20,189,141,54,166,123,17,95,90,161,79,203,122,146,194,91,134,105,126,38,180,179,114,165,9,142,19,55,115,76,135,40,83,188,63,80,72,18,149,94,169,26,143,129,196,116,204,206,15,92,56,96,110,171,27,168,193,65,58,12,202,86,11,177,6,88,159,16,185,87,21,53,1,34,35,200,125,133,2,102,74,73,119,44,140,82,176,106,192,28,127,186,24,57,136,0,182,3,208,164,130,137,167,112,121,13,36,107,70,10,47,139,25,29,147,30,103,124,154,43,178,153,201,128,97,162,23,170,172,33,48,89,109,52,68,77,111,100,46,99,150,50,71,187,138,158,205,151,60,190,174,152,8,84,144,64,4}, // permutation 0
{160,191,53,64,67,134,111,192,14,143,135,57,22,183,24,99,108,2,47,100,174,79,168,187,96,89,66,55,31,11,128,78,184,113,72,28,45,75,117,91,171,202,69,118,48,49,173,165,208,122,193,141,176,88,196,132,199,207,95,37,149,97,1,30,68,104,161,126,167,147,121,5,21,61,119,182,189,163,139,56,181,102,155,58,101,205,142,159,129,112,82,52,15,19,190,92,17,60,197,54,36,40,26,185,201,124,140,137,110,120,127,51,10,123,148,194,25,98,114,106,186,130,158,38,87,33,166,125,0,200,107,180,172,144,27,74,93,6,65,35,85,206,18,162,8,154,188,94,41,90,44,153,13,169,175,46,146,77,43,73,3,20,23,195,164,16,170,7,42,83,109,198,151,32,138,81,29,12,63,76,152,133,34,157,50,115,179,103,62,145,71,150,156,86,204,4,80,105,178,59,203,9,136,177,131,70,39,84,116}, // permutation 1
{173,142,91,143,172,193,66,42,133,144,57,76,123,154,169,139,117,126,29,6,208,84,170,122,18,187,95,148,92,207,110,203,99,40,137,114,77,31,181,52,48,38,156,33,80,1,71,53,47,140,174,65,45,134,105,17,8,175,64,128,30,78,192,23,32,190,111,44,116,163,206,41,88,22,204,141,161,166,87,164,151,171,157,27,182,150,160,191,158,75,49,198,184,131,115,138,62,98,11,146,188,112,120,106,82,178,13,145,73,12,72,104,149,180,102,183,195,194,93,130,100,50,199,155,20,4,129,119,60,118,2,14,135,101,159,79,24,69,124,200,113,21,59,103,176,125,68,74,165,10,96,177,132,15,5,25,90,127,19,85,167,3,67,186,107,109,201,197,61,51,37,136,0,39,97,86,147,56,55,43,185,179,202,94,205,70,34,89,36,108,189,35,54,83,63,196,81,121,153,168,16,7,28,9,152,26,162,58,46}, // permutation 2
{177,6,187,202,17,59,80,74,170,101,107,82,207,93,140,64,70,206,35,111,23,72,198,88,24,118,36,34,148,150,156,43,89,48,33,55,168,22,11,84,197,161,90,100,196,121,155,143,178,9,184,151,61,172,4,113,129,176,2,110,58,5,40,103,66,76,73,15,68,194,65,7,18,124,60,62,69,180,137,204,193,57,165,108,138,10,102,205,199,104,179,122,91,117,145,141,49,47,147,79,126,163,182,190,53,149,56,144,114,50,41,189,159,171,119,201,78,52,20,132,200,8,153,21,136,29,25,67,51,97,203,167,85,195,75,191,63,27,130,54,87,83,112,13,166,188,175,135,19,146,46,92,0,173,162,154,96,152,99,174,131,38,192,31,30,208,133,183,95,157,106,16,44,169,77,142,26,94,14,125,123,158,105,160,1,45,3,116,71,181,127,12,164,139,32,120,37,115,109,186,86,39,42,28,98,185,128,134,81}, // permutation 3
{91,169,208,125,190,174,81,22,54,9,185,85,114,32,128,53,78,187,117,33,161,143,56,61,6,64,130,170,129,59,175,30,193,48,82,154,62,145,179,2,97,13,44,35,163,84,23,204,199,168,71,108,149,8,72,4,158,38,39,3,184,203,41,173,135,79,146,77,42,131,112,144,24,140,136,200,156,63,165,182,95,12,120,151,150,104,142,196,37,74,159,176,139,107,172,19,167,152,183,46,15,50,96,195,47,162,126,26,160,124,73,155,186,69,116,10,70,121,201,164,123,25,34,90,21,88,100,122,89,177,181,118,105,141,86,94,93,67,180,134,99,1,11,57,103,106,75,29,0,58,60,102,178,65,111,87,133,132,49,137,16,188,76,28,127,113,171,157,148,138,198,110,115,14,101,18,55,27,207,43,109,83,40,45,66,51,119,189,205,31,5,68,17,197,92,147,36,52,202,194,206,7,192,166,191,153,98,20,80}, // permutation 4
{135,141,31,5,206,81,165,56,7,59,4,105,93,151,119,143,145,123,189,124,152,190,92,110,82,22,122,181,114,202,115,48,11,194,208,20,38,13,129,26,53,113,193,97,18,41,77,52,140,103,79,78,39,203,169,16,87,130,14,44,80,192,91,120,153,150,23,96,73,109,88,19,186,205,8,118,74,111,175,67,149,71,163,128,199,12,201,179,147,25,177,126,61,29,34,3,100,156,139,9,137,161,95,35,40,27,21,207,112,94,191,180,133,204,64,106,10,171,155,68,49,57,6,125,178,89,42,200,107,159,65,43,148,75,30,45,164,146,76,47,86,83,55,70,66,1,84,24,117,160,136,131,69,144,183,102,187,162,198,46,62,28,138,104,184,72,127,174,33,195,32,121,2,98,58,51,132,63,197,50,173,37,166,167,60,182,185,15,196,188,101,85,154,36,17,0,108,172,142,134,168,170,158,116,157,99,90,176,54}, // permutation 5
{80,149,164,180,117,194,113,88,0,138,101,185,203,108,89,91,85,90,51,24,52,201,30,11,79,42,9,130,69,54,170,68,111,119,82,174,152,49,148,128,93,59,131,102,98,1,38,167,123,200,173,115,71,118,195,179,168,187,62,156,75,158,208,178,190,46,5,169,126,47,183,64,160,196,165,154,120,53,23,133,26,56,25,72,177,202,107,127,27,109,134,139,40,31,143,182,125,73,83,4,21,63,95,13,197,106,186,81,44,48,171,176,198,112,105,65,43,37,166,146,14,77,32,184,8,204,205,92,6,76,141,87,60,66,193,28,2,67,45,35,157,142,74,124,16,57,36,155,20,159,103,86,78,15,22,191,172,181,136,144,33,153,84,29,175,145,104,94,17,99,151,135,114,61,140,19,18,55,3,207,132,58,199,163,39,96,10,110,137,116,34,50,7,41,161,150,97,188,206,162,12,121,129,189,192,100,122,70,147}, // permutation 6
{137,68,178,117,53,107,98,57,171,157,144,30,36,48,150,190,71,203,46,135,160,56,17,169,130,66,172,29,200,99,129,62,34,61,153,49,79,143,141,199,176,118,78,139,8,156,179,91,207,22,181,4,161,163,94,193,38,142,184,202,21,186,201,182,40,81,101,83,88,145,208,37,194,18,151,167,74,134,166,174,50,33,80,93,191,159,124,25,138,206,39,113,110,127,131,65,108,47,60,155,183,54,59,76,35,86,92,126,120,0,7,168,51,63,147,140,6,164,104,87,67,31,175,158,75,73,10,24,96,114,28,205,41,5,116,154,146,204,23,3,12,132,95,187,105,52,64,162,89,85,189,128,42,14,123,77,1,173,90,165,82,72,121,45,125,180,19,84,70,198,111,97,119,69,112,152,195,26,15,44,2,177,102,197,27,11,9,149,192,196,133,20,136,13,103,115,32,185,100,109,122,148,188,58,43,16,170,55,106}, // permutation 7
{103,117,112,44,158,48,163,80,161,60,35,146,23,154,69,133,58,19,47,155,87,78,6,36,56,172,168,4,34,101,52,182,53,204,145,65,131,62,132,82,206,22,189,174,77,192,196,134,37,81,55,129,10,16,50,205,193,79,118,120,94,200,180,30,166,54,13,202,93,11,45,39,97,31,173,38,64,49,105,148,63,115,167,84,149,138,91,199,181,128,7,169,9,203,151,70,175,85,57,190,68,25,162,186,144,201,0,12,130,140,183,40,43,116,126,164,3,124,95,123,73,72,8,191,159,18,28,109,2,110,14,111,127,88,86,98,207,165,121,139,104,61,152,26,114,170,15,74,107,32,156,66,24,102,136,119,208,141,187,150,27,176,122,185,188,125,143,5,113,59,17,195,197,83,1,89,76,178,41,106,21,194,160,198,135,33,96,99,157,179,71,67,20,51,42,142,137,108,92,147,29,75,46,171,184,177,100,153,90}, // permutation 8
{29,173,171,74,121,138,6,38,88,33,150,51,106,169,10,100,98,185,208,115,55,97,203,27,175,67,166,1,142,147,26,131,130,206,160,70,48,152,132,81,72,191,37,17,186,35,167,75,4,59,42,53,93,118,0,91,200,9,34,76,77,136,120,202,110,198,47,148,141,188,113,117,15,94,16,161,194,21,86,174,123,5,3,62,193,20,127,195,181,145,153,201,58,116,179,54,101,172,119,192,65,71,103,11,8,199,104,177,164,45,114,134,207,143,157,69,137,205,107,2,63,46,155,49,156,43,180,111,78,79,28,41,32,135,122,22,183,105,39,95,44,23,196,184,24,30,140,68,92,99,197,182,176,89,109,84,82,133,178,64,125,162,151,154,25,56,85,170,204,149,144,129,52,19,158,168,126,36,57,165,102,90,189,50,40,139,187,73,80,190,18,146,61,83,124,12,96,128,163,60,87,108,14,31,159,13,112,66,7} // permutation 9
};

// Seed: 806544661

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile int32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
};

struct S2 {
   int64_t  f0;
   volatile int16_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   uint64_t  f5;
   struct S0  f6;
};

struct S3 {
   struct S0  f0;
   volatile int64_t  f1;
   struct S2  f2;
   uint32_t  f3;
   uint64_t  f4;
};

struct S1 {
   int32_t  f0;
   int32_t  f1;
   volatile uint16_t  f2;
};

struct S6 {
   volatile int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   int32_t  f4;
   volatile uint32_t  f5;
   volatile struct S1  f6;
   volatile uint32_t  f7;
};

struct S9 {
   volatile struct S0  f0;
   uint32_t  f1;
   uint32_t  f2;
   uint64_t  f3;
   uint32_t  f4;
   uint32_t  f5;
};

struct S4 {
   uint32_t  f0;
   struct S0  f1;
   uint32_t  f2;
   int32_t  f3;
   volatile int64_t  f4;
};

struct S10 {
   volatile uint32_t  f0;
   struct S6  f1;
   volatile struct S1  f2;
   struct S0  f3;
   struct S4  f4;
};

struct S11 {
    int32_t g_2;
    struct S3 g_57;
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
struct S3  func_1(struct S11 * p_58);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_58->g_2 p_58->g_57
 * writes: p_58->g_2
 */
struct S3  func_1(struct S11 * p_58)
{ /* block id: 4 */
    for (p_58->g_2 = (-26); (p_58->g_2 < 10); p_58->g_2++)
    { /* block id: 7 */
        if ((atomic_inc(&p_58->g_atomic_input[23 * get_linear_group_id() + 9]) == 4))
        { /* block id: 9 */
            uint8_t l_5 = 0xDAL;
            uint16_t l_6 = 1UL;
            struct S2 l_7[5][10][1] = {{{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}}},{{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}}},{{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}}},{{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}}},{{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}},{{-6L,-3L,0xCDB59559L,0x29C84D8BL,0x8977B405L,0x815809F113D06461L,{0xE91F1311L,8L,0UL,0x8EL}}}}};
            int32_t l_8 = 0x01335C4AL;
            int32_t l_9 = 0x20A8E6C6L;
            int i, j, k;
            l_6 ^= l_5;
            if ((l_9 ^= (l_7[4][3][0] , l_8)))
            { /* block id: 12 */
                int32_t l_10 = 0x13CE431CL;
                int64_t l_16 = (-1L);
                int32_t l_17 = 0L;
                uint16_t l_18 = 1UL;
                VECTOR(int32_t, 16) l_21 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int32_t, 2))((-1L), 6L), (VECTOR(int32_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
                VECTOR(int32_t, 4) l_22 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x71E1A547L), 0x71E1A547L);
                VECTOR(int32_t, 2) l_23 = (VECTOR(int32_t, 2))((-1L), 0x0BB0491EL);
                VECTOR(int32_t, 16) l_24 = (VECTOR(int32_t, 16))(0x5CD97642L, (VECTOR(int32_t, 4))(0x5CD97642L, (VECTOR(int32_t, 2))(0x5CD97642L, 0L), 0L), 0L, 0x5CD97642L, 0L, (VECTOR(int32_t, 2))(0x5CD97642L, 0L), (VECTOR(int32_t, 2))(0x5CD97642L, 0L), 0x5CD97642L, 0L, 0x5CD97642L, 0L);
                VECTOR(int32_t, 2) l_25 = (VECTOR(int32_t, 2))(0x5FABF039L, (-4L));
                VECTOR(int32_t, 8) l_26 = (VECTOR(int32_t, 8))(0x3E424006L, (VECTOR(int32_t, 4))(0x3E424006L, (VECTOR(int32_t, 2))(0x3E424006L, (-3L)), (-3L)), (-3L), 0x3E424006L, (-3L));
                VECTOR(int32_t, 2) l_27 = (VECTOR(int32_t, 2))(0x2E7D9AD9L, (-1L));
                int i;
                for (l_10 = 0; (l_10 == 1); l_10 = safe_add_func_int32_t_s_s(l_10, 9))
                { /* block id: 15 */
                    uint32_t l_13 = 0UL;
                    l_13--;
                }
                l_18++;
                l_9 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_21.s13d13968748fad17)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_22.yxxxxzzyzxyzyzzy)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_23.yxyxyyxx)).s4237543736416425, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_24.s1dd72c8aee2d86ae)).sc8e1, ((VECTOR(int32_t, 4))(l_25.yxxx))))).wywywwzxzwzwxyxx, ((VECTOR(int32_t, 2))((-8L), 5L)).yxyxyxxyxyxxxyxy)))))).s2d4c)).wzwyxxwzzwwwxwwy, ((VECTOR(int32_t, 8))(l_26.s03750032)).s6521306606143445))).sdc91, ((VECTOR(int32_t, 16))(l_27.xxyyyxyxyyyxyyyx)).s096b))))).z;
            }
            else
            { /* block id: 20 */
                uint32_t l_28 = 0x16DD76C8L;
                int16_t l_29 = 0x13E5L;
                struct S6 l_55 = {-1L,0UL,0UL,0x35L,0x61822EBEL,0x496A5D4AL,{9L,3L,0x7A92L},1UL};/* VOLATILE GLOBAL l_55 */
                VECTOR(int32_t, 16) l_56 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x558D1388L), 0x558D1388L), 0x558D1388L, (-1L), 0x558D1388L, (VECTOR(int32_t, 2))((-1L), 0x558D1388L), (VECTOR(int32_t, 2))((-1L), 0x558D1388L), (-1L), 0x558D1388L, (-1L), 0x558D1388L);
                int i;
                l_9 = (l_29 |= l_28);
                for (l_29 = 0; (l_29 >= 10); l_29 = safe_add_func_uint32_t_u_u(l_29, 4))
                { /* block id: 25 */
                    struct S9 *l_32 = (void*)0;
                    struct S9 *l_33 = (void*)0;
                    int32_t l_35 = 1L;
                    int32_t *l_34 = &l_35;
                    int32_t *l_36 = &l_35;
                    uint8_t l_37 = 0xC5L;
                    l_33 = l_32;
                    l_36 = l_34;
                    --l_37;
                    for (l_37 = 11; (l_37 == 1); l_37--)
                    { /* block id: 31 */
                        struct S10 l_43 = {0x9911E249L,{0x38C88683L,0x52ADE4A584054535L,7UL,0x79L,1L,1UL,{0x6A5C4247L,4L,0x0480L},4294967295UL},{0x730455FDL,0L,65535UL},{0xCDC455A6L,0x4F4C4C94L,0x5672CF6FB23EE19FL,4UL},{4294967293UL,{0xB5FD3493L,0x6CB42A34L,0x6A020803FA2AEE08L,0x72L},0x8EAA45E9L,-1L,1L}};/* VOLATILE GLOBAL l_43 */
                        struct S10 *l_42 = &l_43;
                        struct S10 *l_44[3];
                        int32_t l_45 = 1L;
                        uint32_t l_46 = 4294967295UL;
                        struct S0 *l_49[9][9] = {{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3},{&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,&l_43.f3,&l_43.f4.f1,&l_43.f4.f1,&l_43.f3,(void*)0,&l_43.f3}};
                        struct S0 *l_50 = &l_43.f4.f1;
                        VECTOR(int32_t, 16) l_51 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x1C4A6462L), 0x1C4A6462L), 0x1C4A6462L, (-3L), 0x1C4A6462L, (VECTOR(int32_t, 2))((-3L), 0x1C4A6462L), (VECTOR(int32_t, 2))((-3L), 0x1C4A6462L), (-3L), 0x1C4A6462L, (-3L), 0x1C4A6462L);
                        VECTOR(int32_t, 16) l_52 = (VECTOR(int32_t, 16))(0x62AC31A6L, (VECTOR(int32_t, 4))(0x62AC31A6L, (VECTOR(int32_t, 2))(0x62AC31A6L, 0x2DB2C631L), 0x2DB2C631L), 0x2DB2C631L, 0x62AC31A6L, 0x2DB2C631L, (VECTOR(int32_t, 2))(0x62AC31A6L, 0x2DB2C631L), (VECTOR(int32_t, 2))(0x62AC31A6L, 0x2DB2C631L), 0x62AC31A6L, 0x2DB2C631L, 0x62AC31A6L, 0x2DB2C631L);
                        VECTOR(int32_t, 2) l_53 = (VECTOR(int32_t, 2))(0x296053B2L, 0x3236F7AEL);
                        VECTOR(int32_t, 8) l_54 = (VECTOR(int32_t, 8))(0x4CB20B97L, (VECTOR(int32_t, 4))(0x4CB20B97L, (VECTOR(int32_t, 2))(0x4CB20B97L, 1L), 1L), 1L, 0x4CB20B97L, 1L);
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_44[i] = (void*)0;
                        l_42 = (l_44[1] = l_42);
                        --l_46;
                        l_50 = l_49[6][6];
                        (*l_36) = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x4646FAD0L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_51.s671f2c1b0ff881d6)).s7f, ((VECTOR(int32_t, 8))(1L, 0x7E067558L, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_52.s65c84563)).hi))))), 1L, 0x5956BBA8L)).s31))), 0x7C873536L)).xwwwzzzzwxywwxyy)))), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_53.xx)).yxyxxxxx, ((VECTOR(int32_t, 2))(0x0E3EB907L, 0x47CA1AE9L)).xyyyyxyx, ((VECTOR(int32_t, 2))(l_54.s46)).yyyxyxxx))).s0103431345614010))).s8;
                    }
                }
                l_9 &= (l_55 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_56.s90a1c03b69b80324)))).sd);
            }
            unsigned int result = 0;
            result += l_5;
            result += l_6;
            int l_7_i0, l_7_i1, l_7_i2;
            for (l_7_i0 = 0; l_7_i0 < 5; l_7_i0++) {
                for (l_7_i1 = 0; l_7_i1 < 10; l_7_i1++) {
                    for (l_7_i2 = 0; l_7_i2 < 1; l_7_i2++) {
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f0;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f1;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f2;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f3;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f4;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f5;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f6.f0;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f6.f1;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f6.f2;
                        result += l_7[l_7_i0][l_7_i1][l_7_i2].f6.f3;
                    }
                }
            }
            result += l_8;
            result += l_9;
            atomic_add(&p_58->g_special_values[23 * get_linear_group_id() + 9], result);
        }
        else
        { /* block id: 41 */
            (1 + 1);
        }
    }
    return p_58->g_57;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[209];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 209; i++)
            l_comm_values[i] = 1;
    struct S11 c_59;
    struct S11* p_58 = &c_59;
    struct S11 c_60 = {
        0x54D14B71L, // p_58->g_2
        {{1UL,0x1B3545FEL,18446744073709551609UL,0x95L},-1L,{0x756AD3AFEE91EC5DL,0x4112L,0xE6111B43L,0UL,7UL,0UL,{0xCFA090A7L,-1L,0x776F44E0973C7994L,246UL}},4294967286UL,0x90A2E68B52A41E83L}, // p_58->g_57
        0, // p_58->v_collective
        sequence_input[get_global_id(0)], // p_58->global_0_offset
        sequence_input[get_global_id(1)], // p_58->global_1_offset
        sequence_input[get_global_id(2)], // p_58->global_2_offset
        sequence_input[get_local_id(0)], // p_58->local_0_offset
        sequence_input[get_local_id(1)], // p_58->local_1_offset
        sequence_input[get_local_id(2)], // p_58->local_2_offset
        sequence_input[get_group_id(0)], // p_58->group_0_offset
        sequence_input[get_group_id(1)], // p_58->group_1_offset
        sequence_input[get_group_id(2)], // p_58->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 209)), permutations[0][get_linear_local_id()])), // p_58->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_59 = c_60;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_58);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_58->g_2, "p_58->g_2", print_hash_value);
    transparent_crc(p_58->g_57.f0.f0, "p_58->g_57.f0.f0", print_hash_value);
    transparent_crc(p_58->g_57.f0.f1, "p_58->g_57.f0.f1", print_hash_value);
    transparent_crc(p_58->g_57.f0.f2, "p_58->g_57.f0.f2", print_hash_value);
    transparent_crc(p_58->g_57.f0.f3, "p_58->g_57.f0.f3", print_hash_value);
    transparent_crc(p_58->g_57.f1, "p_58->g_57.f1", print_hash_value);
    transparent_crc(p_58->g_57.f2.f0, "p_58->g_57.f2.f0", print_hash_value);
    transparent_crc(p_58->g_57.f2.f1, "p_58->g_57.f2.f1", print_hash_value);
    transparent_crc(p_58->g_57.f2.f2, "p_58->g_57.f2.f2", print_hash_value);
    transparent_crc(p_58->g_57.f2.f3, "p_58->g_57.f2.f3", print_hash_value);
    transparent_crc(p_58->g_57.f2.f4, "p_58->g_57.f2.f4", print_hash_value);
    transparent_crc(p_58->g_57.f2.f5, "p_58->g_57.f2.f5", print_hash_value);
    transparent_crc(p_58->g_57.f2.f6.f0, "p_58->g_57.f2.f6.f0", print_hash_value);
    transparent_crc(p_58->g_57.f2.f6.f1, "p_58->g_57.f2.f6.f1", print_hash_value);
    transparent_crc(p_58->g_57.f2.f6.f2, "p_58->g_57.f2.f6.f2", print_hash_value);
    transparent_crc(p_58->g_57.f2.f6.f3, "p_58->g_57.f2.f6.f3", print_hash_value);
    transparent_crc(p_58->g_57.f3, "p_58->g_57.f3", print_hash_value);
    transparent_crc(p_58->g_57.f4, "p_58->g_57.f4", print_hash_value);
    transparent_crc(p_58->v_collective, "p_58->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 23; i++)
            transparent_crc(p_58->g_special_values[i + 23 * get_linear_group_id()], "p_58->g_special_values[i + 23 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_58->l_comm_values[get_linear_local_id()], "p_58->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_58->g_comm_values[get_linear_group_id() * 209 + get_linear_local_id()], "p_58->g_comm_values[get_linear_group_id() * 209 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
