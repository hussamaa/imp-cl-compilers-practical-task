// --atomics 71 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 24,46,8 -l 1,46,4
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

__constant uint32_t permutations[10][184] = {
{21,139,109,43,93,159,136,57,8,161,70,100,2,7,154,116,42,169,47,23,77,166,160,103,172,106,101,11,112,135,155,74,173,35,171,72,53,182,157,132,141,114,99,39,148,138,3,85,151,27,176,92,13,15,82,48,156,4,130,177,111,165,19,18,63,97,78,45,89,143,32,181,55,133,94,34,81,128,124,142,40,179,96,44,50,54,144,87,122,37,125,113,22,180,140,52,131,80,60,24,65,164,79,6,120,145,66,62,26,105,90,59,31,129,86,33,69,83,162,75,16,163,137,147,104,174,91,20,183,107,30,12,28,119,51,41,64,98,49,149,38,29,14,95,17,67,153,76,108,150,158,9,10,170,84,168,25,123,102,152,167,134,178,68,61,126,1,71,5,0,46,56,88,175,118,146,115,73,127,121,36,58,110,117}, // permutation 0
{38,33,66,26,133,4,51,124,72,157,146,18,74,119,69,113,21,169,172,8,56,57,130,147,148,97,70,22,86,7,96,93,43,25,99,19,156,11,180,174,162,15,49,95,100,182,150,128,0,67,144,63,105,153,28,103,176,84,82,131,2,88,62,58,141,117,50,90,179,17,80,46,55,48,181,115,94,73,129,37,112,35,71,178,126,145,34,164,142,42,59,29,16,54,85,76,47,75,154,45,160,167,44,31,135,110,81,101,24,158,98,41,36,163,104,139,173,177,132,40,39,175,127,138,64,123,10,118,111,20,52,91,102,137,108,107,92,159,151,125,23,68,87,166,143,165,83,27,161,171,53,89,155,134,140,12,152,5,106,109,61,79,168,9,32,6,149,120,114,77,122,136,78,3,1,60,65,121,30,14,183,116,13,170}, // permutation 1
{102,37,135,38,170,49,115,28,114,103,82,84,4,106,10,62,24,153,128,168,109,88,162,183,151,139,68,147,141,29,81,155,127,33,20,6,145,89,110,34,136,158,7,51,60,178,27,156,163,121,119,182,13,79,69,104,86,134,107,22,21,169,35,64,157,123,0,32,52,55,70,43,26,149,90,166,96,112,36,57,78,74,25,129,46,173,124,176,92,101,160,99,138,122,94,73,40,56,54,41,87,3,154,91,175,19,144,39,165,85,18,111,95,58,17,5,177,30,53,97,93,31,140,15,63,146,131,75,132,171,137,126,100,172,71,164,105,167,47,11,67,59,117,174,50,61,83,72,133,66,23,118,150,16,116,77,44,12,1,179,9,8,42,45,152,130,181,120,48,2,113,14,180,76,161,98,80,108,148,125,142,143,159,65}, // permutation 2
{61,135,157,169,65,99,12,116,162,103,23,13,94,117,154,102,122,59,82,90,134,52,136,48,131,14,1,31,33,64,141,112,181,158,130,3,174,109,120,80,5,55,142,175,10,69,164,125,27,156,96,71,18,145,70,28,42,97,46,180,11,110,139,57,133,83,63,118,105,39,78,66,143,95,172,91,124,49,35,176,86,168,40,153,147,74,50,44,51,126,114,81,106,179,76,171,75,167,177,148,72,22,41,165,4,149,144,104,183,9,73,36,58,129,132,127,85,166,62,138,47,79,159,92,89,101,88,7,160,25,150,29,17,60,119,170,30,113,182,123,111,6,2,121,178,173,77,53,8,54,24,45,107,19,146,56,152,20,151,38,161,15,108,26,43,68,32,37,128,98,0,67,137,87,115,163,155,16,34,140,84,93,21,100}, // permutation 3
{161,177,115,54,137,106,41,50,90,116,174,167,146,140,53,46,37,16,128,48,51,19,91,78,13,101,121,97,4,166,110,65,154,26,80,82,79,127,88,69,5,63,104,180,150,155,156,33,70,25,71,113,114,118,34,14,147,124,89,143,175,42,182,43,163,30,61,49,148,122,142,141,76,111,23,10,132,22,56,105,62,164,64,31,28,44,159,102,77,119,32,7,1,129,152,45,72,29,73,15,55,160,130,93,178,131,157,59,103,172,24,173,3,35,81,87,176,151,94,67,68,40,83,120,84,12,8,162,92,98,145,21,170,136,181,138,134,6,109,52,153,149,57,36,168,86,117,74,38,58,133,107,144,39,112,126,100,179,171,2,125,135,66,75,95,11,85,139,123,20,169,17,158,165,96,99,183,27,18,47,9,108,0,60}, // permutation 4
{54,10,38,60,0,25,178,122,44,57,165,48,99,39,179,137,85,127,13,71,79,146,78,173,84,81,20,114,11,164,52,155,8,135,134,141,151,158,170,142,30,154,42,58,112,82,70,80,56,73,168,34,3,19,24,169,26,147,117,153,72,163,121,176,22,130,104,119,102,111,68,138,159,64,77,171,125,5,2,14,55,131,183,88,181,113,156,126,69,97,31,110,172,23,133,115,90,7,9,75,41,28,182,129,45,15,107,124,166,150,87,53,103,62,136,132,94,101,74,100,123,116,157,98,18,148,21,63,86,140,109,145,105,33,167,1,27,66,95,106,37,89,180,160,17,139,43,161,4,149,49,47,108,83,40,162,32,46,120,152,16,61,6,93,65,91,174,29,12,177,92,51,76,36,144,96,59,143,50,67,118,128,35,175}, // permutation 5
{63,25,127,49,166,135,174,136,180,154,52,128,169,39,29,48,64,1,60,161,162,163,11,75,16,94,73,123,46,126,62,10,56,58,3,41,181,42,21,168,165,155,113,103,80,144,173,26,9,90,32,27,150,121,57,104,51,24,45,111,22,158,67,54,116,183,44,35,118,156,17,114,20,160,172,97,38,31,81,157,71,148,125,36,178,109,98,74,131,59,47,140,153,99,115,152,65,0,159,69,129,89,107,175,92,30,106,130,86,119,102,66,182,84,112,55,33,91,19,171,133,146,43,170,83,167,139,14,82,87,85,96,7,117,79,6,2,100,141,34,5,122,23,61,179,105,177,132,37,149,18,28,147,110,151,78,120,8,53,101,88,164,68,138,124,50,108,95,40,4,176,145,13,72,70,143,142,93,77,76,12,134,137,15}, // permutation 6
{71,44,149,161,140,179,129,40,53,84,3,139,167,181,75,9,103,138,38,49,13,54,155,97,69,1,119,33,112,2,42,37,58,77,176,67,154,66,14,59,166,152,35,74,109,86,83,126,128,32,175,148,5,116,70,91,121,52,47,93,141,145,56,101,0,150,147,130,110,111,174,16,55,62,182,61,82,108,172,153,118,163,57,20,34,60,81,125,6,51,127,65,15,132,68,23,63,88,10,27,165,169,104,26,106,7,8,18,43,102,158,151,171,123,24,90,48,94,168,31,180,80,78,79,64,85,30,146,36,89,96,107,45,157,143,50,105,135,164,113,41,100,160,87,137,177,133,162,72,12,173,21,46,120,4,183,115,122,17,22,156,11,39,144,170,178,99,29,142,76,159,73,19,28,92,114,134,136,95,25,124,98,117,131}, // permutation 7
{60,173,123,59,143,53,72,101,8,171,71,114,73,29,136,152,14,87,113,124,22,49,104,63,165,122,166,98,57,144,38,170,33,5,46,168,156,126,27,182,106,183,24,80,164,65,90,108,2,86,91,121,40,82,95,37,70,62,109,172,169,157,140,133,39,76,119,102,26,161,69,96,15,83,130,61,17,179,21,41,115,75,43,174,139,19,16,159,0,20,103,107,147,158,180,74,88,34,50,141,154,79,137,117,42,23,175,176,56,85,153,150,58,25,54,48,52,112,44,100,31,148,132,9,138,93,1,129,97,111,149,181,110,18,10,146,77,30,36,145,178,94,131,127,35,125,3,6,142,64,67,118,135,12,4,105,66,45,163,47,81,7,128,160,120,116,84,167,177,99,151,78,134,155,92,11,68,13,32,162,28,89,51,55}, // permutation 8
{115,11,179,30,1,81,47,54,37,119,3,162,164,62,163,154,129,45,7,88,104,156,121,0,48,43,148,171,59,128,23,181,99,93,97,175,131,82,21,27,19,92,33,105,77,165,53,106,91,15,134,117,150,110,67,39,86,141,123,109,111,49,24,2,55,157,183,118,143,72,151,73,124,177,125,40,158,70,178,34,56,58,80,76,29,113,112,170,140,160,6,136,25,16,64,74,135,51,84,26,108,28,172,155,107,44,168,116,174,79,95,13,38,69,180,147,126,114,146,41,22,176,159,182,61,173,90,42,63,31,103,87,68,137,57,122,5,71,130,144,12,8,153,120,102,133,18,149,14,78,96,85,100,4,20,17,65,169,94,10,152,66,35,98,32,145,142,127,36,138,166,75,167,83,46,89,50,101,161,52,132,9,139,60} // permutation 9
};

// Seed: 1401029266

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int64_t, 2) g_17;
    VECTOR(uint64_t, 4) g_18;
    int32_t g_26[4][2][9];
    int32_t g_30;
    int32_t *g_29;
    int32_t g_43;
    uint16_t g_45;
    VECTOR(uint64_t, 2) g_52;
    uint32_t g_60;
    volatile VECTOR(int16_t, 4) g_67;
    VECTOR(int16_t, 4) g_68;
    VECTOR(int16_t, 2) g_79;
    VECTOR(int16_t, 4) g_80;
    int64_t g_85;
    uint32_t g_102;
    volatile int32_t * volatile *g_139;
    volatile int32_t * volatile ** volatile g_138;
    int8_t g_183;
    volatile VECTOR(int64_t, 16) g_186;
    uint16_t *g_187;
    int32_t ** volatile g_229;
    int16_t g_289;
    uint8_t g_302[9][8];
    int32_t g_303;
    uint16_t g_308;
    VECTOR(int32_t, 8) g_311;
    int32_t *g_310;
    int32_t **g_309[2][7];
    uint16_t **g_328;
    uint8_t g_360;
    volatile VECTOR(uint16_t, 8) g_374;
    int32_t g_377;
    VECTOR(uint64_t, 2) g_398;
    int32_t g_414;
    VECTOR(uint32_t, 8) g_438;
    VECTOR(uint32_t, 16) g_439;
    uint32_t g_498[8];
    uint8_t *g_572;
    uint8_t **g_571;
    uint64_t * volatile g_581;
    int32_t * volatile g_603;
    volatile uint32_t g_616;
    volatile uint32_t *g_615;
    volatile uint32_t * volatile * volatile g_614;
    uint32_t *g_618;
    uint32_t **g_617;
    VECTOR(int8_t, 16) g_629;
    volatile VECTOR(int8_t, 8) g_630;
    VECTOR(int8_t, 4) g_634;
    VECTOR(int64_t, 8) g_672;
    VECTOR(int8_t, 16) g_699;
    volatile VECTOR(uint16_t, 4) g_703;
    VECTOR(uint32_t, 16) g_708;
    VECTOR(int16_t, 2) g_710;
    volatile VECTOR(int16_t, 2) g_738;
    uint32_t g_747;
    VECTOR(int16_t, 16) g_758;
    volatile VECTOR(int16_t, 2) g_759;
    uint32_t g_781;
    uint32_t g_795;
    VECTOR(uint16_t, 16) g_804;
    VECTOR(uint32_t, 16) g_813;
    uint32_t g_829[9];
    int32_t ** volatile g_832;
    uint32_t g_840;
    VECTOR(uint64_t, 4) g_864;
    uint32_t g_885;
    int64_t *g_922;
    volatile VECTOR(uint16_t, 2) g_925;
    VECTOR(int8_t, 16) g_928;
    VECTOR(int8_t, 4) g_929;
    volatile VECTOR(int32_t, 4) g_1010;
    volatile int32_t g_1021;
    int16_t *g_1029[1];
    volatile VECTOR(int64_t, 2) g_1041;
    uint32_t ***g_1043;
    uint32_t ***g_1044[6];
    uint64_t g_1045;
    VECTOR(int16_t, 4) g_1047;
    volatile VECTOR(uint8_t, 8) g_1050;
    VECTOR(uint8_t, 8) g_1052;
    volatile VECTOR(int8_t, 8) g_1097;
    int32_t **g_1142[8];
    int32_t * volatile g_1164[4];
    int32_t * volatile g_1165;
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
uint16_t  func_1(struct S0 * p_1218);
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, uint8_t  p_5, int16_t  p_6, struct S0 * p_1218);
uint32_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, struct S0 * p_1218);
int16_t  func_70(uint32_t * p_71, int32_t * p_72, struct S0 * p_1218);
uint32_t * func_73(int64_t  p_74, uint32_t  p_75, int32_t * p_76, struct S0 * p_1218);
int64_t  func_88(int16_t  p_89, uint32_t * p_90, struct S0 * p_1218);
int16_t  func_91(int32_t *** p_92, struct S0 * p_1218);
int32_t * func_95(uint32_t * p_96, int64_t * p_97, uint32_t  p_98, int32_t ** p_99, int32_t ** p_100, struct S0 * p_1218);
int64_t * func_103(int32_t ** p_104, int32_t * p_105, uint16_t  p_106, int32_t ** p_107, struct S0 * p_1218);
int32_t * func_108(int32_t  p_109, struct S0 * p_1218);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1218->l_comm_values p_1218->g_17 p_1218->g_18 p_1218->g_29 p_1218->g_30 p_1218->g_45 p_1218->g_52 p_1218->g_67 p_1218->g_68 p_1218->g_79 p_1218->g_80 p_1218->g_85 p_1218->g_138 p_1218->g_26 p_1218->g_43 p_1218->g_186 p_1218->g_187 p_1218->g_183 p_1218->g_229 p_1218->g_309 p_1218->g_308 p_1218->g_360 p_1218->g_102 p_1218->g_374 p_1218->g_377 p_1218->g_302 p_1218->g_398 p_1218->g_438 p_1218->g_439 p_1218->g_310 p_1218->g_414 p_1218->g_498 p_1218->g_289 p_1218->g_comm_values p_1218->g_328 p_1218->g_581 p_1218->g_311 p_1218->g_603 p_1218->g_614 p_1218->g_617 p_1218->g_618 p_1218->g_629 p_1218->g_630 p_1218->g_634 p_1218->g_572 p_1218->g_672 p_1218->g_571 p_1218->g_699 p_1218->g_703 p_1218->g_708 p_1218->g_710 p_1218->g_738 p_1218->g_747 p_1218->g_303 p_1218->g_795 p_1218->g_781 p_1218->g_804 p_1218->g_813 p_1218->g_758 p_1218->g_832 p_1218->g_840 p_1218->g_759 p_1218->g_864 p_1218->g_615 p_1218->g_616 p_1218->g_925 p_1218->g_928 p_1218->g_929 p_1218->g_922 p_1218->g_1010 p_1218->g_1045 p_1218->g_1165
 * writes: p_1218->g_26 p_1218->g_45 p_1218->g_60 p_1218->g_85 p_1218->g_30 p_1218->g_43 p_1218->g_183 p_1218->g_29 p_1218->g_302 p_1218->g_303 p_1218->g_308 p_1218->g_328 p_1218->g_377 p_1218->g_310 p_1218->g_102 p_1218->g_360 p_1218->g_68 p_1218->g_187 p_1218->g_289 p_1218->g_571 p_1218->g_414 p_1218->g_617 p_1218->g_comm_values p_1218->g_309 p_1218->g_498 p_1218->g_829 p_1218->g_840 p_1218->g_629 p_1218->g_79 p_1218->g_804 p_1218->g_885 p_1218->g_52 p_1218->l_comm_values p_1218->g_618 p_1218->g_922 p_1218->g_1043 p_1218->g_1044 p_1218->g_1029 p_1218->g_1045
 */
uint16_t  func_1(struct S0 * p_1218)
{ /* block id: 4 */
    uint32_t l_7 = 0xEA66E58DL;
    VECTOR(int64_t, 2) l_16 = (VECTOR(int64_t, 2))(0x21EC2184E5A945CBL, 0x6CA6C84902314AF1L);
    VECTOR(uint64_t, 16) l_19 = (VECTOR(uint64_t, 16))(0x448110CBBBC254E7L, (VECTOR(uint64_t, 4))(0x448110CBBBC254E7L, (VECTOR(uint64_t, 2))(0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L), 0x3BCF59F89F2E0723L), 0x3BCF59F89F2E0723L, 0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L, (VECTOR(uint64_t, 2))(0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L), (VECTOR(uint64_t, 2))(0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L), 0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L, 0x448110CBBBC254E7L, 0x3BCF59F89F2E0723L);
    VECTOR(int8_t, 16) l_24 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-4L)), (-4L)), (-4L), (-4L), (-4L), (VECTOR(int8_t, 2))((-4L), (-4L)), (VECTOR(int8_t, 2))((-4L), (-4L)), (-4L), (-4L), (-4L), (-4L));
    int32_t *l_25 = &p_1218->g_26[1][0][7];
    int32_t *l_32 = &p_1218->g_30;
    int32_t **l_31[2];
    int32_t *l_33 = &p_1218->g_30;
    uint32_t *l_884 = &p_1218->g_885;
    uint8_t l_1166 = 254UL;
    int32_t *l_1217 = &p_1218->g_26[2][0][6];
    int i;
    for (i = 0; i < 2; i++)
        l_31[i] = &l_32;
    l_1166 ^= func_2(((*l_884) = ((l_7 < (((safe_add_func_uint64_t_u_u(p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))], (((*p_1218->g_618) = func_10((((((safe_div_func_uint64_t_u_u(p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))], ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(l_16.xxxy)).even, ((VECTOR(int64_t, 2))(p_1218->g_17.xx))))).yyxxyyyxxxyyxyyx)).s5)) > (p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))] > ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(p_1218->g_18.xx)).xyxx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0x95CD1D2A6F9A4D91L, ((VECTOR(uint64_t, 2))(l_19.s05)), 0xA9A9843657218670L)), ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((~((*l_25) = (((VECTOR(int8_t, 2))(l_24.s55)).hi != l_7))) == l_24.s2), (safe_sub_func_int16_t_s_s((p_1218->g_29 == (l_33 = &p_1218->g_30)), ((safe_sub_func_uint64_t_u_u((p_1218->g_30 , FAKE_DIVERGE(p_1218->local_0_offset, get_local_id(0), 10)), p_1218->g_18.z)) <= (*l_32)))))), 0x18L)) , 18446744073709551615UL), ((VECTOR(uint64_t, 2))(0x8C8ECA74B80CDE21L)), 0UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x153D57951F1B003BL)), 0x937BBCEC63F78CAFL, 2UL)).even)).even))).yyxwxxyywwxzxzzx)).sa > 0L) , p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))]))) | p_1218->g_18.w) , 0x7D08915CL) <= p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))]), p_1218->g_18.x, p_1218->g_18.x, p_1218)) <= p_1218->g_18.w))) < p_1218->g_311.s2) , 0x6954497BL)) == p_1218->g_439.s8)), p_1218->g_864.w, p_1218->g_795, p_1218->g_52.y, p_1218);
    if ((atomic_inc(&p_1218->l_atomic_input[64]) == 0))
    { /* block id: 460 */
        VECTOR(int32_t, 8) l_1167 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
        int i;
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1167.s3456642746164044)))).s0)
        { /* block id: 461 */
            int32_t l_1168 = 1L;
            VECTOR(int64_t, 4) l_1169 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L);
            uint32_t l_1170 = 0UL;
            VECTOR(int32_t, 8) l_1174 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x26839E90L), 0x26839E90L), 0x26839E90L, (-1L), 0x26839E90L);
            int32_t *l_1173 = (void*)0;
            int32_t *l_1175 = (void*)0;
            int i;
            l_1170++;
            l_1175 = l_1173;
        }
        else
        { /* block id: 464 */
            int32_t l_1176 = 0L;
            uint64_t l_1177 = 4UL;
            int32_t *l_1215 = &l_1176;
            int32_t *l_1216 = &l_1176;
            l_1177++;
            for (l_1177 = 0; (l_1177 <= 13); l_1177 = safe_add_func_uint64_t_u_u(l_1177, 4))
            { /* block id: 468 */
                VECTOR(int32_t, 2) l_1182 = (VECTOR(int32_t, 2))(4L, (-6L));
                uint32_t l_1213 = 0x0AC60683L;
                uint32_t l_1214 = 0xA76840C3L;
                int i;
                l_1167.s2 = ((VECTOR(int32_t, 8))(l_1182.yxyxyyxx)).s7;
                for (l_1182.y = 0; (l_1182.y >= 2); ++l_1182.y)
                { /* block id: 472 */
                    uint16_t l_1185 = 65529UL;
                    uint32_t l_1188 = 0x2B2A65CDL;
                    l_1185++;
                    if (l_1188)
                    { /* block id: 474 */
                        int16_t l_1189 = 0L;
                        uint32_t l_1190 = 4294967295UL;
                        uint32_t l_1191 = 0xC9FF4217L;
                        uint8_t l_1192 = 0xCDL;
                        int32_t l_1193 = 0L;
                        int32_t l_1194 = 1L;
                        int32_t l_1195 = (-1L);
                        int32_t l_1197 = 8L;
                        int32_t *l_1196 = &l_1197;
                        int32_t *l_1198[6][10][3] = {{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}},{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}},{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}},{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}},{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}},{{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197},{&l_1197,&l_1197,&l_1197}}};
                        int32_t *l_1199[1];
                        VECTOR(uint16_t, 2) l_1200 = (VECTOR(uint16_t, 2))(65526UL, 0UL);
                        VECTOR(int32_t, 2) l_1201 = (VECTOR(int32_t, 2))(1L, 0x0B76A038L);
                        int8_t l_1202[9][5][5] = {{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}},{{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL},{0x3DL,0x3DL,0x3DL,0x3DL,0x3DL}}};
                        int32_t l_1203 = 0L;
                        uint16_t l_1204 = 0x5140L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1199[i] = &l_1197;
                        l_1199[0] = ((l_1189 , (l_1191 = l_1190)) , (l_1198[3][1][0] = (l_1196 = ((((l_1193 |= l_1192) , l_1194) , l_1195) , (void*)0))));
                        l_1167.s7 &= ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x2C38L, 1L)), 0x1A98L, (-10L))).zxzyxxzyywzzyxyz)).even, ((VECTOR(uint16_t, 8))(l_1200.yyyxyyxx))))).s5331764151317142, ((VECTOR(int32_t, 16))(l_1201.xyyxxyyxxyyxxyyx)), ((VECTOR(int32_t, 2))((-4L), 0x409EA260L)).xyxyyyxxyxyyyyyy))).se;
                        l_1203 &= l_1202[2][4][1];
                        l_1167.s7 ^= l_1204;
                    }
                    else
                    { /* block id: 483 */
                        uint64_t l_1205[9][3][4] = {{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}},{{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L},{0x4FBE3A530F51115EL,0x680C5E090DDC5BC6L,0UL,0x8FF83AC9CF1F48C4L}}};
                        VECTOR(int64_t, 8) l_1206 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x4A5FF4FBFAF04E22L), 0x4A5FF4FBFAF04E22L), 0x4A5FF4FBFAF04E22L, (-1L), 0x4A5FF4FBFAF04E22L);
                        VECTOR(int64_t, 8) l_1207 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L));
                        int16_t l_1208 = 0x2B03L;
                        int16_t l_1209 = 4L;
                        uint16_t l_1210[5] = {65526UL,65526UL,65526UL,65526UL,65526UL};
                        int i, j, k;
                        l_1208 = (l_1167.s7 = (l_1205[2][0][0] , (l_1176 = (l_1206.s4 , (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_1207.s4555)).even)).odd , 0x5CEF9D3FL)))));
                        l_1210[1]++;
                    }
                }
                l_1176 ^= l_1213;
                l_1214 |= 0x5A4589E3L;
            }
            l_1216 = (l_1215 = (void*)0);
        }
        unsigned int result = 0;
        result += l_1167.s7;
        result += l_1167.s6;
        result += l_1167.s5;
        result += l_1167.s4;
        result += l_1167.s3;
        result += l_1167.s2;
        result += l_1167.s1;
        result += l_1167.s0;
        atomic_add(&p_1218->l_special_values[64], result);
    }
    else
    { /* block id: 496 */
        (1 + 1);
    }
    l_1217 = (void*)0;
    (*l_33) &= 0L;
    return (*l_32);
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_229 p_1218->g_29 p_1218->g_498 p_1218->g_52 p_1218->g_618 p_1218->g_79 p_1218->g_813 p_1218->g_603 p_1218->g_617 p_1218->g_17 p_1218->g_183 p_1218->g_925 p_1218->g_45 p_1218->g_928 p_1218->g_929 p_1218->g_747 p_1218->g_398 p_1218->g_572 p_1218->g_comm_values p_1218->g_186 p_1218->g_922 p_1218->g_360 p_1218->g_832 p_1218->g_1010 p_1218->g_43 p_1218->g_414 p_1218->g_1045 p_1218->g_68 p_1218->g_308 p_1218->g_1165 p_1218->g_26
 * writes: p_1218->g_498 p_1218->g_52 p_1218->l_comm_values p_1218->g_414 p_1218->g_618 p_1218->g_183 p_1218->g_922 p_1218->g_45 p_1218->g_360 p_1218->g_289 p_1218->g_1029 p_1218->g_1043 p_1218->g_1044 p_1218->g_309 p_1218->g_328 p_1218->g_302 p_1218->g_26 p_1218->g_1045 p_1218->g_43
 */
int32_t  func_2(uint32_t  p_3, uint16_t  p_4, uint8_t  p_5, int16_t  p_6, struct S0 * p_1218)
{ /* block id: 328 */
    uint16_t **l_886 = &p_1218->g_187;
    int32_t l_889 = 0x6E1A37F6L;
    int16_t l_890 = 0x0F48L;
    int32_t l_902 = 1L;
    int32_t l_903 = (-1L);
    int32_t l_912 = 0x42283A69L;
    uint16_t l_933 = 0x64E7L;
    int32_t *l_935 = &l_902;
    int32_t l_939[5][2][3] = {{{0x5D478CE8L,0x402CF662L,0x5D478CE8L},{0x5D478CE8L,0x402CF662L,0x5D478CE8L}},{{0x5D478CE8L,0x402CF662L,0x5D478CE8L},{0x5D478CE8L,0x402CF662L,0x5D478CE8L}},{{0x5D478CE8L,0x402CF662L,0x5D478CE8L},{0x5D478CE8L,0x402CF662L,0x5D478CE8L}},{{0x5D478CE8L,0x402CF662L,0x5D478CE8L},{0x5D478CE8L,0x402CF662L,0x5D478CE8L}},{{0x5D478CE8L,0x402CF662L,0x5D478CE8L},{0x5D478CE8L,0x402CF662L,0x5D478CE8L}}};
    int8_t l_942 = 9L;
    int32_t l_945 = (-3L);
    uint64_t l_959 = 0UL;
    int16_t *l_1030 = &l_890;
    uint32_t ***l_1037 = &p_1218->g_617;
    int32_t *l_1080 = &p_1218->g_43;
    uint16_t l_1121 = 0xA9E0L;
    uint64_t l_1127 = 0xC07E289E7FA27A3CL;
    uint32_t l_1138 = 4294967287UL;
    int64_t *l_1141[1][10] = {{&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85}};
    int64_t l_1155 = 0x576DAE4159A5F84CL;
    int i, j, k;
    if ((**p_1218->g_229))
    { /* block id: 329 */
        (*p_1218->g_29) |= (&p_1218->g_187 != l_886);
    }
    else
    { /* block id: 331 */
        int8_t l_899 = 1L;
        VECTOR(int64_t, 16) l_900 = (VECTOR(int64_t, 16))(0x338E6CCD94CB942AL, (VECTOR(int64_t, 4))(0x338E6CCD94CB942AL, (VECTOR(int64_t, 2))(0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L), 0x46F14BA4D34C9005L), 0x46F14BA4D34C9005L, 0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L, (VECTOR(int64_t, 2))(0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L), (VECTOR(int64_t, 2))(0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L), 0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L, 0x338E6CCD94CB942AL, 0x46F14BA4D34C9005L);
        uint64_t *l_901[2][3];
        int32_t l_904 = 0L;
        uint8_t *l_911 = &p_1218->g_302[2][5];
        int64_t *l_913 = (void*)0;
        int64_t *l_914 = (void*)0;
        int64_t *l_915 = (void*)0;
        int64_t *l_916 = (void*)0;
        int64_t *l_917 = (void*)0;
        uint32_t *l_918 = (void*)0;
        int8_t *l_919 = &p_1218->g_183;
        VECTOR(int8_t, 8) l_930 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L));
        VECTOR(int8_t, 8) l_931 = (VECTOR(int8_t, 8))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x1CL), 0x1CL), 0x1CL, 0x59L, 0x1CL);
        VECTOR(int8_t, 8) l_932 = (VECTOR(int8_t, 8))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 1L), 1L), 1L, 0x40L, 1L);
        int32_t l_938 = (-1L);
        int32_t l_943[4];
        VECTOR(int8_t, 2) l_975 = (VECTOR(int8_t, 2))(0x5DL, 0x7DL);
        int32_t l_1007 = 0x214378F1L;
        VECTOR(int32_t, 8) l_1011 = (VECTOR(int32_t, 8))(0x787D9316L, (VECTOR(int32_t, 4))(0x787D9316L, (VECTOR(int32_t, 2))(0x787D9316L, (-10L)), (-10L)), (-10L), 0x787D9316L, (-10L));
        int32_t **l_1081 = &l_1080;
        int64_t *l_1083 = &p_1218->g_85;
        VECTOR(int32_t, 8) l_1117 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
        VECTOR(int32_t, 4) l_1122 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-4L)), (-4L));
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_901[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_943[i] = 0x6D2304D8L;
        if ((safe_sub_func_uint16_t_u_u((l_889 <= 4UL), (((l_890 || (safe_mul_func_int8_t_s_s(((*l_919) ^= (safe_sub_func_int64_t_s_s(((0x695FL && (~(l_904 = (((~(safe_lshift_func_int8_t_s_u((((((*p_1218->g_617) = func_73(((safe_mul_func_uint8_t_u_u(l_899, (((void*)0 == &p_1218->g_377) < (((VECTOR(int64_t, 8))(l_900.s8279a67f)).s6 ^ (l_903 = (++p_1218->g_52.y)))))) ^ ((p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))] = ((safe_lshift_func_uint8_t_u_s(((((l_902 &= ((+(((((safe_rshift_func_uint16_t_u_u((((void*)0 == l_911) & (*p_1218->g_618)), FAKE_DIVERGE(p_1218->global_2_offset, get_global_id(2), 10))) , l_912) <= p_1218->g_79.y) <= 0x18L) , p_6)) || p_3)) , FAKE_DIVERGE(p_1218->global_1_offset, get_global_id(1), 10)) | l_904) != p_1218->g_813.s8), l_912)) >= FAKE_DIVERGE(p_1218->group_1_offset, get_group_id(1), 10))) || p_4)), p_4, &l_904, p_1218)) != l_918) & p_4) , p_1218->g_17.y), 4))) != (-8L)) & l_899)))) <= l_912), p_1218->g_813.s1))), 0x56L))) > l_900.s7) | 0x5FL))))
        { /* block id: 339 */
            int32_t l_926 = 0L;
            VECTOR(int8_t, 16) l_927 = (VECTOR(int8_t, 16))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 7L), 7L), 7L, 0x2FL, 7L, (VECTOR(int8_t, 2))(0x2FL, 7L), (VECTOR(int8_t, 2))(0x2FL, 7L), 0x2FL, 7L, 0x2FL, 7L);
            int16_t l_936 = 0x07F4L;
            int32_t l_937 = 0L;
            int32_t l_940 = 0x1718AB4FL;
            int32_t l_941[5][10][2] = {{{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L}},{{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L}},{{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L}},{{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L}},{{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L},{0x0F95C603L,2L}}};
            int32_t l_944 = 7L;
            uint32_t l_976[2];
            VECTOR(int32_t, 16) l_981 = (VECTOR(int32_t, 16))(0x0F86173CL, (VECTOR(int32_t, 4))(0x0F86173CL, (VECTOR(int32_t, 2))(0x0F86173CL, 0x6BE942FEL), 0x6BE942FEL), 0x6BE942FEL, 0x0F86173CL, 0x6BE942FEL, (VECTOR(int32_t, 2))(0x0F86173CL, 0x6BE942FEL), (VECTOR(int32_t, 2))(0x0F86173CL, 0x6BE942FEL), 0x0F86173CL, 0x6BE942FEL, 0x0F86173CL, 0x6BE942FEL);
            uint64_t *l_993 = (void*)0;
            int8_t l_1020 = (-10L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_976[i] = 0xC81EEB60L;
            if ((safe_mod_func_uint64_t_u_u(((p_1218->g_922 = &p_1218->g_85) != ((safe_add_func_uint16_t_u_u((p_1218->g_45 ^= (((VECTOR(uint8_t, 8))(((void*)0 == &l_886), l_890, 0UL, ((VECTOR(uint8_t, 2))(248UL, 0xBDL)), 0xF9L, 0xC3L, 0UL)).s3 >= (((VECTOR(uint16_t, 16))(p_1218->g_925.xyxxxxxyyxxxxxxx)).s3 == l_926))), (((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(l_927.sc4de)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1218->g_928.s35c8d1db)))).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1218->g_929.yz)).yyxxyyxxyyxxyyxx)).s807b))))), ((VECTOR(int8_t, 4))(l_930.s1367))))), l_927.s9, p_1218->g_747, 5L, 0x2EL)).hi, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(9L, (-1L), 0x2FL, 0x12L)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_931.s2725)), 0x69L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_932.s34)).xxyyxyxx)).s43)).hi, 0x70L, ((VECTOR(int8_t, 4))(p_1218->g_398.x, ((VECTOR(int8_t, 2))(0x70L)), 0x0BL)), l_933, l_903, 1L, 0x34L, 0x73L)).sd3, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))((-3L)))))).yyxy, ((VECTOR(int8_t, 4))(0x44L))))).lo))))), ((VECTOR(int8_t, 2))(1L))))).xxyx, ((VECTOR(int8_t, 4))(0x38L))))).w , 0L))) , &p_1218->g_85)), GROUP_DIVERGE(1, 1))))
            { /* block id: 342 */
                int32_t **l_934[2][4] = {{&p_1218->g_310,&p_1218->g_310,&p_1218->g_310,&p_1218->g_310},{&p_1218->g_310,&p_1218->g_310,&p_1218->g_310,&p_1218->g_310}};
                uint8_t l_946 = 1UL;
                int i, j;
                l_935 = (void*)0;
                --l_946;
            }
            else
            { /* block id: 345 */
                int32_t *l_949 = &l_938;
                int32_t *l_950 = &p_1218->g_30;
                int32_t *l_951 = &p_1218->g_26[1][0][7];
                int32_t *l_952 = &l_889;
                int32_t *l_953 = (void*)0;
                int32_t *l_954 = &p_1218->g_43;
                int32_t *l_955 = &p_1218->g_43;
                int32_t *l_956 = &l_941[3][9][1];
                int32_t *l_957 = &p_1218->g_43;
                int32_t *l_958[10][7] = {{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889},{&l_945,(void*)0,&l_889,(void*)0,(void*)0,(void*)0,&l_889}};
                VECTOR(int8_t, 2) l_966 = (VECTOR(int8_t, 2))(0x2AL, 0x5BL);
                VECTOR(int32_t, 2) l_1013 = (VECTOR(int32_t, 2))(0x524F0579L, 0x1031E2A1L);
                uint64_t l_1022 = 1UL;
                int i, j;
                l_959--;
                for (l_933 = 0; (l_933 >= 1); ++l_933)
                { /* block id: 349 */
                    return p_4;
                }
                if ((safe_sub_func_int8_t_s_s((-1L), ((*p_1218->g_572) = ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(l_966.xxxxxyyy)).even))).y))))
                { /* block id: 353 */
                    uint32_t l_986 = 0xB708DC34L;
                    int32_t l_987[8] = {2L,2L,2L,2L,2L,2L,2L,2L};
                    int i;
                    if (p_6)
                    { /* block id: 354 */
                        int8_t l_988 = (-1L);
                        VECTOR(int32_t, 4) l_989 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L);
                        int i;
                        (*l_956) ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((((p_1218->g_comm_values[p_1218->tid] , (&p_1218->g_289 != &p_1218->g_289)) , (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(l_975.xyyxxxyxxxxyxyyy)).s6, 6)) == (l_976[1] != ((p_6 != ((safe_lshift_func_int16_t_s_s(((((*l_919) = (FAKE_DIVERGE(p_1218->local_1_offset, get_local_id(1), 10) > (safe_div_func_int32_t_s_s((l_976[0] <= (((VECTOR(int32_t, 8))((-1L), p_6, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_981.s7c25)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_988 = (1L < (safe_add_func_int8_t_s_s(((l_987[2] = (safe_mul_func_int8_t_s_s(l_986, p_6))) || p_1218->g_186.se), p_3)))), ((VECTOR(int32_t, 8))(0x1DB016A7L)), ((VECTOR(int32_t, 4))(0x265A8BE1L)), ((VECTOR(int32_t, 2))(1L)), 0x37649737L)))).odd, ((VECTOR(int32_t, 8))((-1L)))))).lo, ((VECTOR(int32_t, 4))(0x785EE878L)))))))), 0x418B261EL, 0x6F1D09A0L)).s5 == l_989.w)), p_6)))) == 0x32L) ^ 8UL), 15)) && 0x535A29D65B2A47D7L)) <= 0x19C265EFL))), (*l_935)))) > 65533UL), 0UL)), l_986));
                        return p_4;
                    }
                    else
                    { /* block id: 360 */
                        uint64_t **l_992[9][1];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_992[i][j] = &l_901[0][1];
                        }
                        (*l_956) = ((*p_1218->g_29) |= (~(safe_mul_func_uint8_t_u_u(((l_993 = p_1218->g_922) != (void*)0), (*p_1218->g_572)))));
                        (*l_956) = 0x7D9DC55EL;
                    }
                    (**p_1218->g_832) |= 0L;
                }
                else
                { /* block id: 367 */
                    int16_t *l_998 = &p_1218->g_289;
                    VECTOR(uint16_t, 8) l_1012 = (VECTOR(uint16_t, 8))(0xB127L, (VECTOR(uint16_t, 4))(0xB127L, (VECTOR(uint16_t, 2))(0xB127L, 0x23C0L), 0x23C0L), 0x23C0L, 0xB127L, 0x23C0L);
                    uint16_t *l_1014 = (void*)0;
                    uint16_t *l_1015 = &p_1218->g_45;
                    uint16_t *l_1016 = (void*)0;
                    uint16_t *l_1017 = (void*)0;
                    uint16_t *l_1018 = &l_933;
                    int32_t l_1019[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1019[i] = 1L;
                    (*l_935) = (((FAKE_DIVERGE(p_1218->group_1_offset, get_group_id(1), 10) < (0xF9F3L && (((safe_div_func_uint32_t_u_u(4294967292UL, (**p_1218->g_617))) , ((safe_mul_func_int16_t_s_s(((*l_998) = (*l_956)), (((VECTOR(int64_t, 2))((-4L), 0x7C253CD9ECE13B54L)).odd && 0x75BB6B0A8958D8E6L))) , ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((**p_1218->g_617)--) < (safe_rshift_func_uint8_t_u_u((((l_1007 <= ((*l_1018) = (safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 16))(0x435910D6L, ((VECTOR(int32_t, 2))(p_1218->g_1010.yw)), 0L, 0x269ADE8FL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1011.s4046)), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(2L, (-1L))).xxxyyxyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_1012.s05)))).yxxyxyxy))).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((*l_957), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_1013.yyxxxxyy)), (int32_t)((((*l_1015) = ((p_3 < (((VECTOR(int64_t, 4))(9L, 0L, 6L, 1L)).x , (p_1218->g_45 , 0x3B2D41358EF0353AL))) > p_4)) < p_3) , (-7L))))).s35)), ((VECTOR(int32_t, 4))((-1L))))), ((VECTOR(int32_t, 2))(0x39044096L)), (-2L), ((VECTOR(int32_t, 2))(0x06D4B592L)), l_938, 0x3ED274C2L, (-7L))).s494f))), 0x2044DCEEL, (*p_1218->g_603), (-1L), (-5L))).hi)).even, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x7AEC227CL))))), 1L, 5L)), 0x06272516L, (-1L), 0x6D3F48A1L)).sd >= 2L), p_6)))) , p_4) >= p_3), (*p_1218->g_572)))), p_3)) ^ p_5), p_1218->g_813.s4)) && 5L))) ^ p_4))) || (-5L)) <= FAKE_DIVERGE(p_1218->group_0_offset, get_group_id(0), 10));
                    --l_1022;
                }
            }
        }
        else
        { /* block id: 376 */
            int16_t *l_1028 = (void*)0;
            int32_t l_1063[7] = {0x436D497AL,0x02F27EC7L,0x436D497AL,0x436D497AL,0x02F27EC7L,0x436D497AL,0x436D497AL};
            int32_t *l_1065 = &p_1218->g_43;
            int64_t *l_1076[1];
            int64_t **l_1077 = (void*)0;
            int64_t **l_1078 = &l_1076[0];
            int32_t ***l_1079 = &p_1218->g_309[0][6];
            int64_t **l_1082[5];
            int32_t *l_1099 = &l_1007;
            VECTOR(int32_t, 16) l_1118 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6F1B4B6BL), 0x6F1B4B6BL), 0x6F1B4B6BL, 0L, 0x6F1B4B6BL, (VECTOR(int32_t, 2))(0L, 0x6F1B4B6BL), (VECTOR(int32_t, 2))(0L, 0x6F1B4B6BL), 0L, 0x6F1B4B6BL, 0L, 0x6F1B4B6BL);
            int i;
            for (i = 0; i < 1; i++)
                l_1076[i] = &p_1218->g_85;
            for (i = 0; i < 5; i++)
                l_1082[i] = &p_1218->g_922;
            for (p_1218->g_360 = 0; (p_1218->g_360 > 46); p_1218->g_360 = safe_add_func_int8_t_s_s(p_1218->g_360, 1))
            { /* block id: 379 */
                int16_t **l_1027[5];
                uint16_t ***l_1033 = &l_886;
                int32_t l_1036 = 0x5356DF5BL;
                uint32_t ***l_1038 = &p_1218->g_617;
                uint32_t ****l_1042[9] = {&l_1038,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038};
                VECTOR(int16_t, 16) l_1046 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                VECTOR(uint8_t, 4) l_1051 = (VECTOR(uint8_t, 4))(0x19L, (VECTOR(uint8_t, 2))(0x19L, 255UL), 255UL);
                int8_t l_1064 = 0x5FL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1027[i] = (void*)0;
                atomic_sub(&p_1218->g_atomic_reduction[get_linear_group_id()], ((((p_3 && (&p_6 != (l_1030 = (p_1218->g_1029[0] = (l_1028 = (void*)0))))) , ((VECTOR(int32_t, 16))((safe_mul_func_uint8_t_u_u(((p_5 & (*l_935)) >= (((void*)0 == l_1033) != (((safe_add_func_uint8_t_u_u((*p_1218->g_572), (l_1036 = ((VECTOR(int8_t, 2))((-9L), 0L)).lo))) , ((((((**p_1218->g_617) = 4294967293UL) != p_4) , 0xA9L) , l_1037) != l_1038)) < 0x5F9098AB6C74809AL))), 3UL)), (*l_935), (-7L), ((VECTOR(int32_t, 2))((-7L))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x0D52F02DL)), ((VECTOR(int32_t, 4))(0x6503E710L)), p_5, 0L, 0L)).sb) , (*l_935)) , (**p_1218->g_832)) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1218->v_collective += p_1218->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_1065 = (((safe_div_func_int16_t_s_s((((+((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(p_1218->g_1041.yxyy)), ((VECTOR(int64_t, 2))(1L, 0L)).xxyx))).w) & ((&p_1218->g_617 != (p_1218->g_1044[1] = (p_1218->g_1043 = &p_1218->g_617))) >= p_1218->g_1045)) , (p_6 = ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(0x1451L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(1L, (-1L), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(l_1046.s07)), ((VECTOR(int16_t, 2))(p_1218->g_1047.yy))))), ((VECTOR(int16_t, 4))(((((*p_1218->g_29) = (safe_mul_func_int8_t_s_s((-7L), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(p_1218->g_1050.s30)).xxyyyyyyxxyyxxyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(0xB5L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_1051.yzzywyzw)).odd)).y, 0xBEL, 1UL)).wwxwzywywywzyyzx, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(p_1218->g_1052.s4177625213227275)).lo, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 8))(0x04L, 4UL, (((*l_935) = (((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(p_6, ((((((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(9UL, l_1046.sa)) || p_3), (*l_935))), p_5)) == (*l_935)) , l_1063[2]) < p_5) < p_4) , l_1063[2]))), p_5)) & p_4) , (*l_935))) < p_3), ((VECTOR(uint8_t, 2))(0x1FL)), 0xFCL, 247UL, 255UL)).s5724067442271715, ((VECTOR(uint8_t, 16))(252UL))))).hi))).s5765322555666150))).sbd, (uint8_t)l_1064, (uint8_t)255UL))), 0UL, 4UL)).yyxyyxxzzzzyyzzz))).se))) == 0x4065D781L) != (*p_1218->g_572)), (-1L), 1L, 0x2EFDL)), 1L, l_1063[6], ((VECTOR(int16_t, 4))(1L)), 0x5D31L, 0x16A2L)).s08fb)).even)), 0x532FL)).wyyxywxzzxwxwxzy, ((VECTOR(int16_t, 16))(9L))))).sd)), l_1051.y)) <= 0xC034L) , (void*)0);
                if ((atomic_inc(&p_1218->l_atomic_input[26]) == 5))
                { /* block id: 393 */
                    int8_t l_1066 = 0x5FL;
                    int64_t l_1067 = (-7L);
                    int32_t l_1068[4][7][9] = {{{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL}},{{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL}},{{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL}},{{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL},{(-8L),(-4L),2L,0L,(-1L),(-8L),0x09C1E663L,0L,0x34424A4EL}}};
                    uint32_t l_1069 = 0x1F029DD4L;
                    uint32_t l_1072 = 4294967286UL;
                    uint64_t l_1073 = 7UL;
                    int32_t l_1075[3];
                    int32_t *l_1074 = &l_1075[0];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1075[i] = 0x446D381BL;
                    --l_1069;
                    l_1073 &= l_1072;
                    l_1074 = (void*)0;
                    unsigned int result = 0;
                    result += l_1066;
                    result += l_1067;
                    int l_1068_i0, l_1068_i1, l_1068_i2;
                    for (l_1068_i0 = 0; l_1068_i0 < 4; l_1068_i0++) {
                        for (l_1068_i1 = 0; l_1068_i1 < 7; l_1068_i1++) {
                            for (l_1068_i2 = 0; l_1068_i2 < 9; l_1068_i2++) {
                                result += l_1068[l_1068_i0][l_1068_i1][l_1068_i2];
                            }
                        }
                    }
                    result += l_1069;
                    result += l_1072;
                    result += l_1073;
                    int l_1075_i0;
                    for (l_1075_i0 = 0; l_1075_i0 < 3; l_1075_i0++) {
                        result += l_1075[l_1075_i0];
                    }
                    atomic_add(&p_1218->l_special_values[26], result);
                }
                else
                { /* block id: 397 */
                    (1 + 1);
                }
                if (l_1036)
                    continue;
            }
            if (((p_4 , ((*l_1078) = l_1076[0])) != (l_1083 = func_103(((*l_1079) = &l_1065), l_1080, (l_943[0] = ((void*)0 == l_915)), l_1081, p_1218))))
            { /* block id: 406 */
                int64_t l_1100 = (-1L);
                if ((atomic_inc(&p_1218->g_atomic_input[71 * get_linear_group_id() + 56]) == 4))
                { /* block id: 408 */
                    int32_t l_1085 = (-7L);
                    int32_t *l_1084[8][1] = {{&l_1085},{&l_1085},{&l_1085},{&l_1085},{&l_1085},{&l_1085},{&l_1085},{&l_1085}};
                    int32_t *l_1086[6][9][4] = {{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}},{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}},{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}},{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}},{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}},{{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,(void*)0,&l_1085,&l_1085}}};
                    int16_t l_1087 = 0x5346L;
                    uint32_t l_1088 = 0x979C2AF9L;
                    int32_t l_1089 = 0x37978FF2L;
                    int16_t l_1090 = 0x7760L;
                    int32_t l_1091 = 0L;
                    uint64_t l_1092[1][1][7] = {{{1UL,18446744073709551613UL,1UL,1UL,18446744073709551613UL,1UL,1UL}}};
                    int i, j, k;
                    l_1086[1][6][1] = l_1084[3][0];
                    l_1088 &= l_1087;
                    ++l_1092[0][0][6];
                    unsigned int result = 0;
                    result += l_1085;
                    result += l_1087;
                    result += l_1088;
                    result += l_1089;
                    result += l_1090;
                    result += l_1091;
                    int l_1092_i0, l_1092_i1, l_1092_i2;
                    for (l_1092_i0 = 0; l_1092_i0 < 1; l_1092_i0++) {
                        for (l_1092_i1 = 0; l_1092_i1 < 1; l_1092_i1++) {
                            for (l_1092_i2 = 0; l_1092_i2 < 7; l_1092_i2++) {
                                result += l_1092[l_1092_i0][l_1092_i1][l_1092_i2];
                            }
                        }
                    }
                    atomic_add(&p_1218->g_special_values[71 * get_linear_group_id() + 56], result);
                }
                else
                { /* block id: 412 */
                    (1 + 1);
                }
                for (p_4 = 0; (p_4 == 49); p_4 = safe_add_func_int64_t_s_s(p_4, 6))
                { /* block id: 417 */
                    int32_t *l_1098[10][10][2] = {{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}},{{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]},{&p_1218->g_26[1][0][7],&p_1218->g_26[1][0][7]}}};
                    int i, j, k;
                    (*l_1081) = (*l_1081);
                    (*l_1081) = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1218->g_1097.s01)).yyyy)).zyyywyzzzxwwzzyw)).se , (l_1098[0][3][1] = (void*)0));
                    (*l_1081) = l_1099;
                    (*l_1065) ^= ((~((void*)0 != l_918)) > (++p_1218->g_1045));
                }
                (**l_1081) = (*l_1065);
            }
            else
            { /* block id: 426 */
                if ((atomic_inc(&p_1218->l_atomic_input[4]) == 1))
                { /* block id: 428 */
                    VECTOR(int32_t, 8) l_1103 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 3L), 3L), 3L, 3L, 3L);
                    uint32_t l_1104 = 6UL;
                    int32_t l_1105[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1105[i] = (-1L);
                    l_1104 ^= ((VECTOR(int32_t, 2))(l_1103.s72)).hi;
                    if (l_1105[3])
                    { /* block id: 430 */
                        uint32_t l_1106 = 4294967295UL;
                        uint16_t l_1109[6][8] = {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}};
                        int i, j;
                        --l_1106;
                        l_1109[3][1] ^= ((VECTOR(int32_t, 2))(0L, 0x777F18F8L)).even;
                    }
                    else
                    { /* block id: 433 */
                        int32_t l_1111 = 0x1B76A021L;
                        int32_t *l_1110 = &l_1111;
                        int32_t *l_1112 = &l_1111;
                        int16_t l_1113 = 0x3D20L;
                        int32_t l_1114 = 2L;
                        l_1112 = l_1110;
                        l_1103.s7 |= 0L;
                        l_1103.s1 &= l_1113;
                        l_1114 &= (l_1103.s6 = 1L);
                    }
                    unsigned int result = 0;
                    result += l_1103.s7;
                    result += l_1103.s6;
                    result += l_1103.s5;
                    result += l_1103.s4;
                    result += l_1103.s3;
                    result += l_1103.s2;
                    result += l_1103.s1;
                    result += l_1103.s0;
                    result += l_1104;
                    int l_1105_i0;
                    for (l_1105_i0 = 0; l_1105_i0 < 4; l_1105_i0++) {
                        result += l_1105[l_1105_i0];
                    }
                    atomic_add(&p_1218->l_special_values[4], result);
                }
                else
                { /* block id: 440 */
                    (1 + 1);
                }
            }
            for (p_1218->g_45 = 0; (p_1218->g_45 > 39); ++p_1218->g_45)
            { /* block id: 446 */
                int32_t l_1128 = 0x64A1846DL;
                int32_t *l_1129 = (void*)0;
                int32_t *l_1130 = (void*)0;
                int32_t *l_1131 = &p_1218->g_30;
                int32_t *l_1132 = (void*)0;
                int32_t *l_1133 = &l_904;
                int32_t *l_1134 = (void*)0;
                int32_t *l_1135 = &l_902;
                int32_t *l_1136 = (void*)0;
                int32_t *l_1137[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1137[i] = &p_1218->g_30;
                (*l_1099) = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_1117.s1330)).odd, ((VECTOR(int32_t, 8))(l_1118.s80ba166f)).s77))).yxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x13A1C986L, ((VECTOR(int32_t, 2))(0x0650EE28L, 1L)), ((VECTOR(int32_t, 4))(0x7BA7D009L, (-1L), 0x65170EC0L, (-6L))), 0L, ((VECTOR(int32_t, 2))(0x337F5CC2L, 0x79E71F67L)), ((*p_1218->g_29) = p_4), 0x10AF0E46L, (safe_mod_func_uint64_t_u_u(l_1121, p_4)), 0x4B1B7264L, 3L, 0x1BEB9C8FL)))).s4d64)).lo, ((VECTOR(int32_t, 2))(l_1122.wz))))), 0x7BCD609EL, 0x026C4B30L)).zwywwwxx)), (-9L), (-5L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(0x64D2226FL, 0L)).yyyyxyxxxxxyxxyx, ((VECTOR(int32_t, 16))((**l_1081), 0L, 0x240F95E2L, (*p_1218->g_603), ((*l_935) |= (safe_mod_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u(((l_1127 ^ ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((l_1128 >= p_6), (p_4 & 0xD55DL), 1L, 0x51AF60DCC74351ADL)).odd)).odd) > p_3), (*l_1099))) || FAKE_DIVERGE(p_1218->group_2_offset, get_group_id(2), 10)) , &l_919) != (void*)0) & p_4), p_4))), 5L, 2L, 0x18C6EBA8L, ((VECTOR(int32_t, 8))(0x6354F919L))))))).s9a4f, ((VECTOR(int32_t, 4))(0x67C54815L))))).zwxzzywzwyzwzxyw, ((VECTOR(int32_t, 16))(0x7E0C6148L)), ((VECTOR(int32_t, 16))(0x5F214A51L))))).s09, (int32_t)p_3))), 1L, ((VECTOR(int32_t, 2))((-3L))), 0x784BAE5EL)).odd)).lo))), 6L, 1L, 8L, 0L)).s47, (int32_t)(-6L)))).lo;
                l_1138--;
            }
            (*l_1081) = (*p_1218->g_832);
        }
        (*l_1081) = (*p_1218->g_832);
    }
    (*p_1218->g_1165) ^= (safe_sub_func_uint8_t_u_u(252UL, ((*l_1080) != (safe_rshift_func_int16_t_s_u(((0xB5A53062L && 3L) != l_1155), ((p_6 > (((*l_1080) & ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_5, (safe_div_func_uint8_t_u_u((*l_1080), 248UL)))), 3)), (*l_1080))) != 4294967288UL)) <= p_5)) < (*l_1080)))))));
    return (**p_1218->g_229);
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_45 p_1218->g_52 p_1218->g_67 p_1218->g_68 p_1218->g_79 p_1218->g_80 p_1218->g_85 p_1218->g_29 p_1218->g_30 p_1218->g_138 p_1218->g_26 p_1218->g_18 p_1218->g_17 p_1218->g_43 p_1218->g_186 p_1218->g_187 p_1218->l_comm_values p_1218->g_183 p_1218->g_229 p_1218->g_309 p_1218->g_308 p_1218->g_360 p_1218->g_102 p_1218->g_374 p_1218->g_377 p_1218->g_302 p_1218->g_398 p_1218->g_438 p_1218->g_439 p_1218->g_310 p_1218->g_414 p_1218->g_498 p_1218->g_289 p_1218->g_comm_values p_1218->g_328 p_1218->g_581 p_1218->g_311 p_1218->g_603 p_1218->g_614 p_1218->g_617 p_1218->g_618 p_1218->g_629 p_1218->g_630 p_1218->g_634 p_1218->g_572 p_1218->g_672 p_1218->g_571 p_1218->g_699 p_1218->g_703 p_1218->g_708 p_1218->g_710 p_1218->g_738 p_1218->g_747 p_1218->g_303 p_1218->g_795 p_1218->g_781 p_1218->g_804 p_1218->g_813 p_1218->g_758 p_1218->g_832 p_1218->g_840 p_1218->g_759 p_1218->g_864 p_1218->g_615 p_1218->g_616
 * writes: p_1218->g_45 p_1218->g_60 p_1218->g_85 p_1218->g_30 p_1218->g_26 p_1218->g_43 p_1218->g_183 p_1218->g_29 p_1218->g_302 p_1218->g_303 p_1218->g_308 p_1218->g_328 p_1218->g_377 p_1218->g_310 p_1218->g_102 p_1218->g_360 p_1218->g_68 p_1218->g_187 p_1218->g_289 p_1218->g_571 p_1218->g_414 p_1218->g_617 p_1218->g_comm_values p_1218->g_309 p_1218->g_498 p_1218->g_829 p_1218->g_840 p_1218->g_629 p_1218->g_79 p_1218->g_804
 */
uint32_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, struct S0 * p_1218)
{ /* block id: 7 */
    uint16_t *l_44 = &p_1218->g_45;
    VECTOR(uint32_t, 16) l_55 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x3D1D1CE1L), 0x3D1D1CE1L), 0x3D1D1CE1L, 4294967295UL, 0x3D1D1CE1L, (VECTOR(uint32_t, 2))(4294967295UL, 0x3D1D1CE1L), (VECTOR(uint32_t, 2))(4294967295UL, 0x3D1D1CE1L), 4294967295UL, 0x3D1D1CE1L, 4294967295UL, 0x3D1D1CE1L);
    int32_t **l_56[10] = {&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29};
    int32_t ***l_57 = &l_56[8];
    uint32_t *l_58 = (void*)0;
    uint32_t *l_59 = &p_1218->g_60;
    VECTOR(uint64_t, 2) l_61 = (VECTOR(uint64_t, 2))(0x3D6BDADCC66F1EAAL, 18446744073709551615UL);
    VECTOR(int16_t, 8) l_64 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(int16_t, 16) l_69 = (VECTOR(int16_t, 16))(0x4C76L, (VECTOR(int16_t, 4))(0x4C76L, (VECTOR(int16_t, 2))(0x4C76L, 0x1E79L), 0x1E79L), 0x1E79L, 0x4C76L, 0x1E79L, (VECTOR(int16_t, 2))(0x4C76L, 0x1E79L), (VECTOR(int16_t, 2))(0x4C76L, 0x1E79L), 0x4C76L, 0x1E79L, 0x4C76L, 0x1E79L);
    uint32_t **l_830 = &l_58;
    uint32_t l_873 = 0x67F03074L;
    int32_t *l_874[8] = {&p_1218->g_30,&p_1218->g_414,&p_1218->g_30,&p_1218->g_30,&p_1218->g_414,&p_1218->g_30,&p_1218->g_30,&p_1218->g_414};
    uint8_t *l_882 = (void*)0;
    uint8_t *l_883 = &p_1218->g_302[2][5];
    int i;
    l_874[0] = ((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((-1L), ((*l_44)++))) != ((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1218->g_52.xx)), (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_55.s75e042358cedf6e7)))).s7, ((*l_59) = (((*l_57) = l_56[3]) != &p_1218->g_29)))), ((VECTOR(uint64_t, 2))(l_61.yx)), 18446744073709551606UL, 0UL, 0x03636CD8D4AE9C24L)).s1 == (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 4))(l_64.s2311)), p_13, (-9L), (-1L), (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(p_1218->g_67.yx)).xyyxyxyyxxyxxyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x2839L, 0x24C4L)).yyxxyyyyxxyxxxxx)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1218->g_68.xxww)), 0x1F84L, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_69.s67)))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-1L), 0x0976L, 0x7977L, func_70(((*l_830) = func_73((p_11 , 0x470AD0C79EC616ADL), p_11, l_58, p_1218)), p_1218->g_618, p_1218), p_1218->g_630.s7, l_873, 0x6AC9L, 3L)).s57)).yyxyyyxy, ((VECTOR(int16_t, 8))(0x7C1AL)), ((VECTOR(int16_t, 8))(0x292BL))))).s46)), ((VECTOR(int16_t, 4))(0x66BDL)))).s44)), ((VECTOR(int16_t, 2))(0x3740L))))), (-1L), 4L)))).xwzywyzwwzwywzyx, ((VECTOR(int16_t, 16))(0x4A30L)), ((VECTOR(int16_t, 16))(0x08B0L))))).sc, 0x3A17L, ((VECTOR(int16_t, 2))((-1L))), 0x6F70L, p_1218->g_360, ((VECTOR(int16_t, 4))(0L)), 0L))))).even))).lo)).y, 7)) , p_12) ^ p_13), 0x3016L, ((VECTOR(int16_t, 4))(0x4EE4L)), 0x11A2L, 0x3BB5L)).lo))).lo, ((VECTOR(int16_t, 4))(0L))))).x, 10))), 1UL)), l_69.s9)) < l_64.s5)) , 6UL), (-1L))) == p_1218->g_813.s9) >= (-1L)), p_13)))) , (void*)0);
    (*p_1218->g_832) = func_73(p_11, p_1218->g_864.z, (*p_1218->g_229), p_1218);
    return (*p_1218->g_615);
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_832 p_1218->g_840 p_1218->g_229 p_1218->g_398 p_1218->g_414 p_1218->g_759 p_1218->g_311 p_1218->g_864 p_1218->g_572 p_1218->g_360 p_1218->g_672 p_1218->g_30 p_1218->g_738
 * writes: p_1218->g_29 p_1218->g_840 p_1218->g_629 p_1218->g_79 p_1218->g_comm_values p_1218->g_360 p_1218->g_308 p_1218->g_804 p_1218->g_414
 */
int16_t  func_70(uint32_t * p_71, int32_t * p_72, struct S0 * p_1218)
{ /* block id: 308 */
    int32_t *l_831 = &p_1218->g_414;
    int32_t *l_833[8][1] = {{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43},{&p_1218->g_43}};
    int8_t l_834 = 0x23L;
    int32_t l_835 = 0x7190FDAAL;
    VECTOR(int32_t, 4) l_836 = (VECTOR(int32_t, 4))(0x0B49B98BL, (VECTOR(int32_t, 2))(0x0B49B98BL, (-1L)), (-1L));
    int32_t l_837 = 1L;
    int32_t l_838[1][3];
    int64_t l_839 = 0x178BA9F806CE959EL;
    int32_t **l_843[7] = {&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29};
    VECTOR(int32_t, 16) l_848 = (VECTOR(int32_t, 16))(0x52215781L, (VECTOR(int32_t, 4))(0x52215781L, (VECTOR(int32_t, 2))(0x52215781L, 1L), 1L), 1L, 0x52215781L, 1L, (VECTOR(int32_t, 2))(0x52215781L, 1L), (VECTOR(int32_t, 2))(0x52215781L, 1L), 0x52215781L, 1L, 0x52215781L, 1L);
    int8_t *l_855[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t *l_865[5];
    int32_t *l_868 = (void*)0;
    int8_t l_869 = 6L;
    uint16_t *l_870 = &p_1218->g_308;
    int64_t *l_871 = (void*)0;
    int64_t *l_872 = &l_839;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_838[i][j] = (-1L);
    }
    for (i = 0; i < 5; i++)
        l_865[i] = (void*)0;
    (*p_1218->g_832) = l_831;
    ++p_1218->g_840;
    (*p_1218->g_229) = p_71;
    (*l_831) = (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((*l_872) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_848.s237c555c65136a77)).see, ((VECTOR(int32_t, 8))((safe_mod_func_uint16_t_u_u((~(p_1218->g_804.sb = ((*l_870) = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((p_1218->g_629.s6 = p_1218->g_398.y), 7)), (FAKE_DIVERGE(p_1218->group_1_offset, get_group_id(1), 10) | (safe_mul_func_uint16_t_u_u((*l_831), ((safe_rshift_func_int16_t_s_s((0x377002501BDBFB53L && ((((p_1218->g_759.x , GROUP_DIVERGE(0, 1)) < ((*p_1218->g_572) ^= (p_1218->g_311.s2 && (p_1218->g_comm_values[p_1218->tid] = (safe_mul_func_uint8_t_u_u((*l_831), (((VECTOR(uint64_t, 2))(p_1218->g_864.zx)).hi , (0x16BDAB36L < ((p_1218->g_79.y = 0x4AFFL) == GROUP_DIVERGE(0, 1)))))))))) < (safe_add_func_int32_t_s_s(((GROUP_DIVERGE(2, 1) , (p_1218->g_672.s6 , l_868)) != p_71), 1UL))) >= 0UL)), 6)) > l_869))))))))), p_1218->g_30)), ((VECTOR(int32_t, 2))((-7L))), 0x57818A70L, ((VECTOR(int32_t, 4))(0L)))).s36))).yyyyyyyyxyxxyxyx)).s5 < 0x1DFBEBC8L)) | (*l_831)), 1L)), (*l_831)));
    return p_1218->g_738.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_79 p_1218->g_80 p_1218->g_85 p_1218->g_29 p_1218->g_30 p_1218->g_138 p_1218->g_52 p_1218->g_26 p_1218->g_68 p_1218->g_18 p_1218->g_17 p_1218->g_67 p_1218->g_43 p_1218->g_186 p_1218->g_187 p_1218->l_comm_values p_1218->g_183 p_1218->g_229 p_1218->g_309 p_1218->g_308 p_1218->g_360 p_1218->g_102 p_1218->g_374 p_1218->g_377 p_1218->g_302 p_1218->g_398 p_1218->g_438 p_1218->g_439 p_1218->g_310 p_1218->g_414 p_1218->g_498 p_1218->g_289 p_1218->g_comm_values p_1218->g_328 p_1218->g_581 p_1218->g_311 p_1218->g_603 p_1218->g_614 p_1218->g_617 p_1218->g_618 p_1218->g_629 p_1218->g_630 p_1218->g_634 p_1218->g_572 p_1218->g_672 p_1218->g_571 p_1218->g_699 p_1218->g_703 p_1218->g_708 p_1218->g_710 p_1218->g_738 p_1218->g_747 p_1218->g_303 p_1218->g_795 p_1218->g_781 p_1218->g_804 p_1218->g_813 p_1218->g_758
 * writes: p_1218->g_85 p_1218->g_30 p_1218->g_26 p_1218->g_43 p_1218->g_183 p_1218->g_29 p_1218->g_302 p_1218->g_303 p_1218->g_308 p_1218->g_328 p_1218->g_377 p_1218->g_310 p_1218->g_102 p_1218->g_360 p_1218->g_68 p_1218->g_187 p_1218->g_289 p_1218->g_571 p_1218->g_414 p_1218->g_617 p_1218->g_comm_values p_1218->g_309 p_1218->g_498 p_1218->g_829
 */
uint32_t * func_73(int64_t  p_74, uint32_t  p_75, int32_t * p_76, struct S0 * p_1218)
{ /* block id: 11 */
    VECTOR(int8_t, 16) l_83 = (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 1L), 1L), 1L, 0x3EL, 1L, (VECTOR(int8_t, 2))(0x3EL, 1L), (VECTOR(int8_t, 2))(0x3EL, 1L), 0x3EL, 1L, 0x3EL, 1L);
    int64_t *l_84 = &p_1218->g_85;
    int32_t **l_94[5];
    int32_t ***l_93 = &l_94[0];
    uint32_t *l_828 = &p_1218->g_829[1];
    int i;
    for (i = 0; i < 5; i++)
        l_94[i] = &p_1218->g_29;
    (*p_1218->g_603) = ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))((-1L), (-1L))).yxyyxxyy, ((VECTOR(int16_t, 16))(p_1218->g_79.yyyxxxyyxyxxxxyy)).hi))).s1, 12)) == ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1218->g_80.yx)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((safe_sub_func_uint8_t_u_u(p_74, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(0x74L, 0x66L, 1L, 0L)).yywxyyzw, ((VECTOR(int8_t, 2))(l_83.s5e)).yxxyxyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(0x4EL, 0x17L, (((*l_84) |= ((void*)0 == p_76)) , (safe_add_func_uint64_t_u_u((~p_75), (func_88(func_91(l_93, p_1218), &p_1218->g_781, p_1218) < (safe_add_func_uint32_t_u_u(((*l_828) = ((safe_lshift_func_uint8_t_u_u(p_1218->g_758.se, p_1218->g_708.s7)) >= p_1218->g_672.s2)), p_74)))))), 0x27L, ((VECTOR(int8_t, 2))(0x3EL)), 1L, 0x22L)), ((VECTOR(int8_t, 8))(0x7BL))))).s3402106126244343)).s2d)), ((VECTOR(int8_t, 4))(4L)), 0x3BL, p_74, 4L, (-1L), ((VECTOR(int8_t, 4))(0x7BL)), 6L)))).odd))).s1)), (-5L), p_74, ((VECTOR(int16_t, 2))(5L)), ((VECTOR(int16_t, 2))(0x0311L)), 0L)))).odd, (int16_t)1L))).odd)), (-2L))).xwywxzxx)).s60)))).yyxx, ((VECTOR(uint16_t, 4))(0x9531L))))).x);
    return (*p_1218->g_617);
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_414 p_1218->g_781 p_1218->g_43 p_1218->g_804 p_1218->g_813 p_1218->g_618 p_1218->g_498 p_1218->g_308 p_1218->g_186 p_1218->g_68 p_1218->g_183 p_1218->g_229 p_1218->g_29 p_1218->g_52 p_1218->g_360 p_1218->g_398
 * writes: p_1218->g_414 p_1218->g_308 p_1218->g_328 p_1218->g_183 p_1218->g_302 p_1218->g_26
 */
int64_t  func_88(int16_t  p_89, uint32_t * p_90, struct S0 * p_1218)
{ /* block id: 291 */
    int32_t *l_800 = &p_1218->g_43;
    VECTOR(uint32_t, 16) l_811 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL);
    VECTOR(uint32_t, 8) l_812 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x277F850DL), 0x277F850DL), 0x277F850DL, 4294967293UL, 0x277F850DL);
    VECTOR(uint32_t, 8) l_814 = (VECTOR(uint32_t, 8))(0x344683F3L, (VECTOR(uint32_t, 4))(0x344683F3L, (VECTOR(uint32_t, 2))(0x344683F3L, 0UL), 0UL), 0UL, 0x344683F3L, 0UL);
    VECTOR(int32_t, 16) l_815 = (VECTOR(int32_t, 16))(0x6AEA8B45L, (VECTOR(int32_t, 4))(0x6AEA8B45L, (VECTOR(int32_t, 2))(0x6AEA8B45L, 0L), 0L), 0L, 0x6AEA8B45L, 0L, (VECTOR(int32_t, 2))(0x6AEA8B45L, 0L), (VECTOR(int32_t, 2))(0x6AEA8B45L, 0L), 0x6AEA8B45L, 0L, 0x6AEA8B45L, 0L);
    int64_t l_820 = (-9L);
    uint64_t *l_821 = (void*)0;
    int32_t *l_822[8][2][3] = {{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}},{{&p_1218->g_414,(void*)0,&p_1218->g_30},{&p_1218->g_414,(void*)0,&p_1218->g_30}}};
    uint8_t l_823[10] = {0x83L,0xD4L,0x83L,0x83L,0xD4L,0x83L,0x83L,0xD4L,0x83L,0x83L};
    int i, j, k;
    for (p_1218->g_414 = 0; (p_1218->g_414 <= 12); p_1218->g_414 = safe_add_func_int8_t_s_s(p_1218->g_414, 4))
    { /* block id: 294 */
        int32_t **l_801[5] = {&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29,&p_1218->g_29};
        int i;
        l_800 = l_800;
        if (p_89)
            break;
        l_800 = p_90;
        l_800 = l_800;
    }
    l_823[6] ^= (l_815.s9 = (((*l_800) , func_103(&l_800, (((0x91L && (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(p_1218->g_804.s8e)).yxxxyyxy, ((VECTOR(uint16_t, 8))(0x962AL, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(0xDE95L, 0xA27DL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x2F40L, 0x786AL)).yyyyxxyx)).s40))), (p_1218->g_308 |= (((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((*l_800), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).xyyxyxyy))).s5176511077656423, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(9UL, (safe_mul_func_uint8_t_u_u(p_89, (*l_800))), 0x7C5F8283L, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(l_811.s9b791cc219a3fc88)).hi, ((VECTOR(uint32_t, 16))(l_812.s5261604235020115)).lo, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(4294967292UL, 4294967295UL)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1218->g_813.se6)).yyxyxyxxxxxxyyxx)).sf8, ((VECTOR(uint32_t, 8))(l_814.s76157627)).s11))).yyyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_815.sefcc)), ((+(FAKE_DIVERGE(p_1218->group_0_offset, get_group_id(0), 10) ^ 0xFEL)) && ((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((*p_1218->g_618), l_820)), 13)) && p_1218->g_804.sa) , (*l_800)) < p_89)), ((VECTOR(int32_t, 2))((-1L))), (-1L))).hi, ((VECTOR(int32_t, 4))(0x7836A051L)), ((VECTOR(int32_t, 4))(0x5BB9B69CL))))).xyxyxwyyxzzzxwwy, ((VECTOR(int32_t, 16))((-4L)))))).sa2)).xyyy))).yyyyxyyw, (uint32_t)0xCBAABEAFL, (uint32_t)1UL))).hi)).xwzxxwxw))).lo, ((VECTOR(uint32_t, 4))(9UL))))), 4294967292UL)).s4253372423240756)).sef31)), ((VECTOR(uint32_t, 2))(0x84C12578L)), 6UL, 0UL)).s71)).xxyxyxyyyxxxxyxy, ((VECTOR(uint32_t, 16))(0UL))))))).sb)), 0x1433L)) , p_89) <= (*l_800))), ((VECTOR(uint16_t, 2))(1UL)), 65535UL, 0x5D34L))))).s24, ((VECTOR(uint16_t, 2))(0x6411L))))))).odd != 0L)) == p_89) , p_90), p_89, &p_1218->g_29, p_1218)) != l_821));
    return p_1218->g_398.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_29 p_1218->g_30 p_1218->g_85 p_1218->g_138 p_1218->g_52 p_1218->g_26 p_1218->g_68 p_1218->g_18 p_1218->g_17 p_1218->g_67 p_1218->g_43 p_1218->g_80 p_1218->g_186 p_1218->g_187 p_1218->l_comm_values p_1218->g_183 p_1218->g_229 p_1218->g_309 p_1218->g_308 p_1218->g_360 p_1218->g_102 p_1218->g_374 p_1218->g_377 p_1218->g_302 p_1218->g_398 p_1218->g_79 p_1218->g_438 p_1218->g_439 p_1218->g_310 p_1218->g_414 p_1218->g_498 p_1218->g_289 p_1218->g_comm_values p_1218->g_328 p_1218->g_581 p_1218->g_311 p_1218->g_603 p_1218->g_614 p_1218->g_617 p_1218->g_618 p_1218->g_629 p_1218->g_630 p_1218->g_634 p_1218->g_572 p_1218->g_672 p_1218->g_571 p_1218->g_699 p_1218->g_703 p_1218->g_708 p_1218->g_710 p_1218->g_738 p_1218->g_747 p_1218->g_303 p_1218->g_795
 * writes: p_1218->g_30 p_1218->g_26 p_1218->g_43 p_1218->g_183 p_1218->g_29 p_1218->g_302 p_1218->g_303 p_1218->g_308 p_1218->g_328 p_1218->g_377 p_1218->g_310 p_1218->g_85 p_1218->g_102 p_1218->g_360 p_1218->g_68 p_1218->g_187 p_1218->g_289 p_1218->g_571 p_1218->g_414 p_1218->g_617 p_1218->g_comm_values p_1218->g_309 p_1218->g_498
 */
int16_t  func_91(int32_t *** p_92, struct S0 * p_1218)
{ /* block id: 13 */
    uint32_t *l_101 = &p_1218->g_102;
    int32_t l_279 = 0x59C4D771L;
    int64_t *l_286 = (void*)0;
    int64_t *l_287 = (void*)0;
    uint64_t *l_288[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_290[7][1][10] = {{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}},{{0x12E2BB99L,0x12E2BB99L,0x227CD694L,0x6ACF2E70L,0x6A25049EL,0x6ACF2E70L,0x227CD694L,0x12E2BB99L,0x12E2BB99L,0x227CD694L}}};
    uint8_t *l_301 = &p_1218->g_302[2][5];
    int32_t *l_304 = (void*)0;
    int32_t l_305[3];
    int32_t l_306 = 1L;
    uint16_t *l_307 = &p_1218->g_308;
    int64_t *l_365 = &p_1218->g_85;
    int64_t **l_364 = &l_365;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_305[i] = 0x2EA66312L;
    (*p_1218->g_29) = (***p_92);
    (**p_92) = func_95(l_101, ((*l_364) = func_103(&p_1218->g_29, func_108((***p_92), p_1218), ((*l_307) = ((safe_lshift_func_uint8_t_u_u((l_279 || (safe_lshift_func_int16_t_s_u((((((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int64_t_s_s(((l_286 = l_286) == l_287), (l_290[5][0][9]--))) > (l_279 = (safe_lshift_func_uint8_t_u_s((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xF2FEBCE8B87F2F1DL, 18446744073709551615UL)).xxyyxxxy)).s6 && (p_1218->g_303 = ((((VECTOR(uint32_t, 2))(0x7D088855L, 0UL)).even <= ((safe_add_func_int16_t_s_s((((*l_301) = (safe_sub_func_int8_t_s_s(0x17L, ((l_279 , (void*)0) != l_288[1])))) > l_279), p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))])) , 0x6D0415D2L)) > 0L))), l_279)))) != l_305[2]) <= (-1L)), p_1218->g_18.y)) ^ 0UL) != 0x3CL) > l_306) && p_1218->g_80.z), l_306))), 0)) <= 0x7C2DDF097816C640L)), p_1218->g_309[0][6], p_1218)), p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))], &p_1218->g_310, &p_1218->g_310, p_1218);
    return p_1218->g_79.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_102 p_1218->g_374 p_1218->g_377 p_1218->g_52 p_1218->g_308 p_1218->g_302 p_1218->g_30 p_1218->g_43 p_1218->g_398 p_1218->g_80 p_1218->g_85 p_1218->g_79 p_1218->g_438 p_1218->g_439 p_1218->g_310 p_1218->g_229 p_1218->g_29 p_1218->g_26 p_1218->g_183 p_1218->g_414 p_1218->g_498 p_1218->l_comm_values p_1218->g_18 p_1218->g_186 p_1218->g_360 p_1218->g_289 p_1218->g_68 p_1218->g_comm_values p_1218->g_328 p_1218->g_187 p_1218->g_581 p_1218->g_311 p_1218->g_603 p_1218->g_614 p_1218->g_617 p_1218->g_618 p_1218->g_629 p_1218->g_630 p_1218->g_634 p_1218->g_572 p_1218->g_17 p_1218->g_672 p_1218->g_571 p_1218->g_699 p_1218->g_703 p_1218->g_708 p_1218->g_710 p_1218->g_738 p_1218->g_747 p_1218->g_303 p_1218->g_795
 * writes: p_1218->g_377 p_1218->g_308 p_1218->g_310 p_1218->g_85 p_1218->g_29 p_1218->g_102 p_1218->g_183 p_1218->g_360 p_1218->g_302 p_1218->g_68 p_1218->g_187 p_1218->g_289 p_1218->g_43 p_1218->g_571 p_1218->g_414 p_1218->g_617 p_1218->g_comm_values p_1218->g_26 p_1218->g_309 p_1218->g_498 p_1218->g_303
 */
int32_t * func_95(uint32_t * p_96, int64_t * p_97, uint32_t  p_98, int32_t ** p_99, int32_t ** p_100, struct S0 * p_1218)
{ /* block id: 145 */
    uint32_t l_370 = 1UL;
    uint16_t ***l_375 = &p_1218->g_328;
    VECTOR(uint32_t, 2) l_399 = (VECTOR(uint32_t, 2))(9UL, 4294967289UL);
    int32_t l_401 = (-9L);
    int32_t l_405 = 4L;
    int32_t l_412[9] = {0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL,0x6919E9BAL};
    VECTOR(int32_t, 4) l_437 = (VECTOR(int32_t, 4))(0x0EC7540BL, (VECTOR(int32_t, 2))(0x0EC7540BL, 0x0901219BL), 0x0901219BL);
    VECTOR(int32_t, 16) l_476 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x3178EFF5L), 0x3178EFF5L), 0x3178EFF5L, (-7L), 0x3178EFF5L, (VECTOR(int32_t, 2))((-7L), 0x3178EFF5L), (VECTOR(int32_t, 2))((-7L), 0x3178EFF5L), (-7L), 0x3178EFF5L, (-7L), 0x3178EFF5L);
    VECTOR(uint64_t, 2) l_494 = (VECTOR(uint64_t, 2))(0x9CB0F280353BE89BL, 0x8A0CDD81BED38450L);
    int64_t l_544 = 8L;
    uint32_t l_551 = 1UL;
    uint32_t *l_555 = &p_1218->g_102;
    uint8_t *l_569 = &p_1218->g_360;
    uint8_t **l_568 = &l_569;
    uint32_t l_598 = 0x09BEB763L;
    VECTOR(int64_t, 2) l_670 = (VECTOR(int64_t, 2))(0x5C94C584567DE380L, 1L);
    int32_t l_671 = 0x3336C644L;
    uint8_t *l_676 = &p_1218->g_302[2][5];
    uint16_t *l_679 = &p_1218->g_308;
    int64_t *l_684 = (void*)0;
    int64_t *l_685 = (void*)0;
    int64_t *l_686 = (void*)0;
    int64_t *l_687 = (void*)0;
    int64_t *l_688 = (void*)0;
    int64_t *l_689 = (void*)0;
    int8_t l_690 = (-9L);
    VECTOR(uint16_t, 16) l_709 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x93D8L), 0x93D8L), 0x93D8L, 1UL, 0x93D8L, (VECTOR(uint16_t, 2))(1UL, 0x93D8L), (VECTOR(uint16_t, 2))(1UL, 0x93D8L), 1UL, 0x93D8L, 1UL, 0x93D8L);
    VECTOR(uint32_t, 2) l_713 = (VECTOR(uint32_t, 2))(2UL, 0x0752EE92L);
    int64_t l_731 = 4L;
    int32_t l_751 = 0L;
    VECTOR(uint64_t, 2) l_768 = (VECTOR(uint64_t, 2))(0x24523E2F4E04FA37L, 0xD3126891C0D739FCL);
    VECTOR(uint64_t, 4) l_769 = (VECTOR(uint64_t, 4))(0xE9DE17E818E5DE07L, (VECTOR(uint64_t, 2))(0xE9DE17E818E5DE07L, 0x32ABDC153E4F7755L), 0x32ABDC153E4F7755L);
    VECTOR(int32_t, 2) l_776 = (VECTOR(int32_t, 2))(0x7C289FE4L, 0x6E0E97CEL);
    int i;
    if ((safe_div_func_int8_t_s_s(((*p_96) && 1L), (safe_add_func_uint16_t_u_u(p_98, l_370)))))
    { /* block id: 146 */
        uint32_t l_371 = 0x3EC666F8L;
        int16_t l_393 = 0x72E1L;
        int32_t l_394 = (-8L);
        int32_t l_406 = 0x2A79D004L;
        int32_t l_409[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        int16_t l_429 = 0x40FBL;
        uint8_t l_448 = 0xE9L;
        uint64_t l_464[7] = {0xBA498BDA5A5898E8L,0xEF60EE6D7A2C672CL,0xBA498BDA5A5898E8L,0xBA498BDA5A5898E8L,0xEF60EE6D7A2C672CL,0xBA498BDA5A5898E8L,0xBA498BDA5A5898E8L};
        uint16_t **l_469 = &p_1218->g_187;
        int8_t l_499[1];
        int64_t *l_516[4];
        VECTOR(int8_t, 4) l_517 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L);
        int16_t *l_530[2];
        int8_t *l_531[2][8][7] = {{{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0}},{{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0},{&p_1218->g_183,&l_499[0],&l_499[0],&l_499[0],&p_1218->g_183,(void*)0,(void*)0}}};
        uint32_t **l_532 = (void*)0;
        uint32_t *l_534 = &p_1218->g_498[1];
        uint32_t **l_533 = &l_534;
        uint64_t *l_535 = &l_464[2];
        uint16_t *l_554[9][10] = {{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308},{&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,(void*)0,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308,&p_1218->g_308}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_499[i] = 0x26L;
        for (i = 0; i < 4; i++)
            l_516[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_530[i] = &p_1218->g_289;
        if (l_371)
        { /* block id: 147 */
            int32_t *l_376 = &p_1218->g_377;
            uint16_t *l_388 = &p_1218->g_308;
            VECTOR(uint64_t, 4) l_397 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 6UL), 6UL);
            uint32_t *l_400 = (void*)0;
            int32_t l_403 = 0x26BC5BDBL;
            int32_t l_404 = 0x408D5C7EL;
            int32_t l_407 = 0x02660F84L;
            int32_t l_408 = 0x67A444E4L;
            int16_t l_410[9] = {0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L,0x4EF3L};
            VECTOR(int32_t, 16) l_411 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int32_t, 2))(8L, 1L), (VECTOR(int32_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
            uint8_t l_415 = 0x7BL;
            int32_t *l_449 = &l_408;
            int i;
            l_394 = ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_1218->g_374.s7607654601171642)).s5, (l_375 == ((((((*l_376) |= 3L) , ((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_1218->g_377, (((((safe_rshift_func_uint8_t_u_u(p_98, ((safe_mul_func_int16_t_s_s(l_370, (p_1218->g_52.y | ((safe_sub_func_uint16_t_u_u(l_370, ((*l_388)--))) && ((safe_sub_func_int16_t_s_s(l_370, (((VECTOR(int16_t, 8))(((p_1218->g_377 >= p_98) == l_370), ((VECTOR(int16_t, 4))((-4L))), ((VECTOR(int16_t, 2))((-1L))), 0L)).s6 >= 0xFDA9L))) , p_1218->g_302[2][5]))))) | p_98))) == p_98) < p_1218->g_30) && 7UL) ^ l_371))), l_370)) && p_1218->g_43)) <= 0UL) || l_393) , (void*)0)))) , 0x54F16E10L);
            if ((safe_lshift_func_uint8_t_u_s(((l_371 , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(0x2E18E0E99FCE0E03L, 0x564E5E474B999885L)), ((VECTOR(uint64_t, 4))(l_397.xxwx)).even, ((VECTOR(uint64_t, 8))(p_1218->g_398.yxyyxxyx)).s20))).xxxyyxxy)))).s7) > p_98), (l_401 |= ((l_394 = ((VECTOR(uint32_t, 16))(l_399.yxxyyxyxyxyxxxxy)).s3) , p_1218->g_80.z)))))
            { /* block id: 153 */
                int32_t *l_402[10] = {&p_1218->g_43,&p_1218->g_26[1][0][7],&p_1218->g_43,&p_1218->g_43,&p_1218->g_26[1][0][7],&p_1218->g_43,&p_1218->g_43,&p_1218->g_26[1][0][7],&p_1218->g_43,&p_1218->g_43};
                int8_t l_413 = 0x71L;
                int32_t *l_418[10][1];
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_418[i][j] = &l_409[3];
                }
                ++l_415;
                (*p_99) = l_418[1][0];
            }
            else
            { /* block id: 156 */
                int32_t l_447 = 1L;
                for (l_401 = 0; (l_401 <= (-7)); l_401--)
                { /* block id: 159 */
                    int32_t ***l_440[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_440[i] = &p_1218->g_309[1][4];
                    l_412[0] &= l_393;
                    for (p_1218->g_85 = (-28); (p_1218->g_85 != 26); p_1218->g_85 = safe_add_func_int16_t_s_s(p_1218->g_85, 2))
                    { /* block id: 163 */
                        int8_t *l_430[1][9][10] = {{{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183},{&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183,&p_1218->g_183}}};
                        int32_t l_431[10] = {0x6B1DEE50L,0x727A3A77L,0x74EF8BDCL,0x727A3A77L,0x6B1DEE50L,0x6B1DEE50L,0x727A3A77L,0x74EF8BDCL,0x727A3A77L,0x6B1DEE50L};
                        int32_t l_434 = (-4L);
                        uint8_t *l_445 = (void*)0;
                        uint8_t *l_446 = &l_415;
                        int i, j, k;
                        l_434 = (safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((l_431[2] = l_429), ((p_1218->g_79.x && ((((l_434 > ((*p_96) < (p_98 < (safe_mul_func_uint16_t_u_u(((((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(l_437.zzyxwyxxzwyzwzwx)).s3c83, ((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(p_1218->g_438.s0245436245374335)).s7d, ((VECTOR(uint32_t, 2))(p_1218->g_439.sd6))))), 0x568F124DL, ((l_440[1] == ((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((*l_446) = 1UL) ^ (p_1218->g_30 <= l_447)), 65532UL)), l_448)) , (void*)0)) , p_98), ((VECTOR(uint32_t, 8))(8UL)), l_409[3], 0xB57360E7L, 0UL)).scb09))).y | p_98) ^ 1L), GROUP_DIVERGE(2, 1)))))) , p_1218->g_398.x) < FAKE_DIVERGE(p_1218->local_1_offset, get_local_id(1), 10)) >= l_412[7])) | p_98))), 0x0719BDABL)), 0x51DAL));
                    }
                    (*p_1218->g_229) = (*p_100);
                }
            }
            return (*p_1218->g_229);
        }
        else
        { /* block id: 172 */
            int32_t l_470 = 2L;
            int16_t l_471 = 0x1C10L;
            int32_t *l_472[1][3];
            int16_t *l_502[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_515 = (-1L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_472[i][j] = &l_394;
            }
            l_405 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((p_1218->g_26[1][0][7] == ((safe_lshift_func_uint8_t_u_u(p_98, (safe_mul_func_uint16_t_u_u(0xC854L, (safe_mul_func_int16_t_s_s((((void*)0 == &p_1218->g_102) && (safe_div_func_int64_t_s_s((l_464[6] != (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((*p_96) &= (l_405 && (&p_1218->g_187 != ((((0L && l_394) <= FAKE_DIVERGE(p_1218->global_1_offset, get_global_id(1), 10)) ^ 0x27A6E8E7L) , l_469)))) ^ l_409[1]) , 0UL), l_470)), p_98))), p_1218->g_43))), l_437.w)))))) , GROUP_DIVERGE(2, 1))) || l_471), l_471)), p_98)), 5));
            for (p_1218->g_183 = 0; (p_1218->g_183 <= (-16)); p_1218->g_183--)
            { /* block id: 177 */
                VECTOR(int32_t, 8) l_475 = (VECTOR(int32_t, 8))(0x36AE51C0L, (VECTOR(int32_t, 4))(0x36AE51C0L, (VECTOR(int32_t, 2))(0x36AE51C0L, 0x2B816EADL), 0x2B816EADL), 0x2B816EADL, 0x36AE51C0L, 0x2B816EADL);
                uint32_t *l_484[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t **l_483 = &l_484[0];
                uint64_t *l_485[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                VECTOR(int32_t, 16) l_497 = (VECTOR(int32_t, 16))(0x4A690154L, (VECTOR(int32_t, 4))(0x4A690154L, (VECTOR(int32_t, 2))(0x4A690154L, 0x790FD3DBL), 0x790FD3DBL), 0x790FD3DBL, 0x4A690154L, 0x790FD3DBL, (VECTOR(int32_t, 2))(0x4A690154L, 0x790FD3DBL), (VECTOR(int32_t, 2))(0x4A690154L, 0x790FD3DBL), 0x4A690154L, 0x790FD3DBL, 0x4A690154L, 0x790FD3DBL);
                int i, j;
                l_409[3] &= (-10L);
                l_409[0] |= ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_475.s3630241706631035)).sdf59, ((VECTOR(int32_t, 2))(l_476.s81)).xyxy, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x73B4D8BCL, 0x756F381BL, (safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((((l_475.s0 = (((*l_483) = p_96) == p_96)) & (l_429 < (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((void*)0 == &p_1218->g_377), (0x816604D0B67E537DL > (safe_div_func_int32_t_s_s(((((((p_98 >= (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_494.yyyy)).z, p_1218->g_26[1][0][7]))) <= (safe_mul_func_int8_t_s_s(0x46L, p_1218->g_43))) == 0xFE19L) == l_401) <= l_497.s7) & l_429), 0x744A128FL))))), p_1218->g_414)))) < p_98) , p_1218->g_302[2][5]) , p_1218->g_498[1]), 5)), 0xDFL)) | l_499[0]), p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))])), 0x21E8CCA5L, (-1L), ((VECTOR(int32_t, 2))(0x7BBA4CB4L)), 0x06C88854L)).even, ((VECTOR(int32_t, 4))(4L)))))))).z;
            }
            (*p_100) = (*p_99);
            l_515 = (((safe_mod_func_uint64_t_u_u(l_412[3], p_1218->g_26[1][0][3])) || ((l_394 = p_1218->g_18.y) == (safe_rshift_func_uint8_t_u_s(l_476.s1, (((p_1218->g_186.s8 ^ 0x79L) , &l_471) != &l_429))))) , (((~(safe_add_func_uint64_t_u_u((((((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((--p_1218->g_360), ((l_394 ^= (safe_mul_func_uint8_t_u_u(p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))], 0xB3L))) & p_98))), 0UL)) , p_1218->g_439.sf) == p_1218->g_289) , l_401) || l_370), 0xF53B95383CB7436BL))) <= 0x7197E6407F14B37CL) == p_1218->g_68.w));
        }
        l_412[5] &= (((l_406 &= (FAKE_DIVERGE(p_1218->local_1_offset, get_local_id(1), 10) == p_98)) , (void*)0) != ((((VECTOR(int8_t, 16))(l_517.yzxwyzxyzwxxzxxz)).sa | (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((GROUP_DIVERGE(1, 1) || (-2L)), (p_1218->g_302[2][5]++))), 3))) , ((*l_469) = ((!(+((void*)0 == l_469))) , ((safe_mul_func_int8_t_s_s(((l_394 = (safe_add_func_int8_t_s_s(p_98, (((((p_1218->g_68.y |= ((safe_add_func_int16_t_s_s(p_1218->g_186.s1, ((l_494.y && l_370) & (*p_96)))) > p_1218->g_80.y)) <= l_494.x) <= p_1218->g_comm_values[p_1218->tid]) , (**l_375)) == (void*)0)))) | p_1218->g_377), (-1L))) , (**l_375))))));
        (*p_100) = (*p_100);
    }
    else
    { /* block id: 203 */
        int64_t l_601 = 0x6C8E2FFF613E1428L;
        int16_t *l_602[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        VECTOR(int8_t, 4) l_632 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, (-1L)), (-1L));
        int16_t l_640 = 0x7706L;
        int32_t l_647 = 1L;
        int32_t l_648 = (-3L);
        int32_t l_649 = 0x5AE480CDL;
        int32_t l_650 = 0L;
        int32_t l_651 = 6L;
        int32_t l_652 = 0x6FDCE0BFL;
        int32_t l_653 = 5L;
        int32_t l_654 = 0x70914F60L;
        int32_t l_655 = 0L;
        int32_t l_656 = (-1L);
        int32_t l_658 = (-8L);
        int32_t l_659 = 0x5954DC3EL;
        uint64_t l_665 = 1UL;
        int8_t l_673 = 0L;
        int32_t *l_674 = &p_1218->g_43;
        int32_t ***l_675 = &p_1218->g_309[1][6];
        int i, j, k;
        for (p_1218->g_289 = 0; (p_1218->g_289 < 5); ++p_1218->g_289)
        { /* block id: 206 */
            int32_t l_564[5][10] = {{0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL},{0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL},{0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL},{0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL},{0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL,0x0031B0BAL}};
            int32_t *l_604 = &p_1218->g_26[2][1][6];
            VECTOR(int8_t, 8) l_628 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x41L), 0x41L), 0x41L, 1L, 0x41L);
            int32_t l_657[1][6][6] = {{{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L},{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L},{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L},{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L},{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L},{0x53C826A2L,1L,1L,0x53C826A2L,0L,0x1F825459L}}};
            int i, j, k;
            for (l_551 = 0; (l_551 <= 54); l_551 = safe_add_func_int16_t_s_s(l_551, 2))
            { /* block id: 209 */
                uint64_t l_565 = 18446744073709551615UL;
                VECTOR(int16_t, 8) l_607 = (VECTOR(int16_t, 8))(0x6A09L, (VECTOR(int16_t, 4))(0x6A09L, (VECTOR(int16_t, 2))(0x6A09L, (-1L)), (-1L)), (-1L), 0x6A09L, (-1L));
                VECTOR(int32_t, 16) l_625 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x112EF00CL), 0x112EF00CL), 0x112EF00CL, 0L, 0x112EF00CL, (VECTOR(int32_t, 2))(0L, 0x112EF00CL), (VECTOR(int32_t, 2))(0L, 0x112EF00CL), 0L, 0x112EF00CL, 0L, 0x112EF00CL);
                VECTOR(int8_t, 4) l_631 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6DL), 0x6DL);
                VECTOR(int8_t, 8) l_633 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
                int32_t *l_641 = &l_405;
                int32_t *l_642 = (void*)0;
                int32_t *l_643 = (void*)0;
                int32_t *l_644 = &l_564[2][3];
                int32_t *l_645 = &p_1218->g_26[3][1][8];
                int32_t *l_646[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_660 = 0xD4F1CDFEL;
                int i;
                for (p_1218->g_360 = 8; (p_1218->g_360 < 10); ++p_1218->g_360)
                { /* block id: 212 */
                    uint16_t l_567 = 0UL;
                    uint32_t ***l_619 = (void*)0;
                    uint32_t ***l_620 = &p_1218->g_617;
                    int64_t l_623 = 4L;
                    int64_t *l_624[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t l_635[5][8][6] = {{{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL}},{{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL}},{{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL}},{{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL}},{{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL},{65535UL,0x72DAL,5UL,8UL,8UL,5UL}}};
                    int i, j, k;
                    for (p_1218->g_43 = 12; (p_1218->g_43 < 8); p_1218->g_43 = safe_sub_func_int64_t_s_s(p_1218->g_43, 4))
                    { /* block id: 215 */
                        int32_t *l_566 = &l_412[8];
                        uint8_t ***l_570[8][6] = {{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568},{&l_568,&l_568,&l_568,&l_568,&l_568,&l_568}};
                        int i, j;
                        l_565 = l_564[2][3];
                        if (l_564[2][3])
                            break;
                        l_567 = ((*l_566) = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xF957L, 0xD60CL)), ((VECTOR(uint16_t, 2))(0x66ADL, 5UL)), 0xEDA2L, 0UL, 0x8113L, 0x151AL)).s1 >= 0L));
                        p_1218->g_571 = l_568;
                    }
                    for (p_1218->g_102 = (-26); (p_1218->g_102 <= 15); p_1218->g_102 = safe_add_func_uint32_t_u_u(p_1218->g_102, 8))
                    { /* block id: 224 */
                        int64_t *l_599 = (void*)0;
                        int64_t *l_600 = &l_544;
                        (*p_1218->g_603) = (safe_add_func_int32_t_s_s(((p_98 <= (0x4D311543L == ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1218->group_0_offset, get_group_id(0), 10), GROUP_DIVERGE(1, 1))), (p_1218->g_581 == (((1L != ((safe_sub_func_int8_t_s_s(((((VECTOR(int32_t, 8))(((((safe_add_func_uint64_t_u_u(((&p_99 != (FAKE_DIVERGE(p_1218->local_2_offset, get_local_id(2), 10) , &p_1218->g_309[0][6])) == ((safe_div_func_int32_t_s_s(((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((((*l_600) = (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(65526UL, 10)) == (p_1218->g_18.w , ((((l_598 < (-7L)) , p_98) , l_567) == p_98))), p_1218->g_18.z))) >= 0x52DF5E8CBEC45E6DL), ((VECTOR(int8_t, 2))(0x54L)), (-6L))))).w, 3)), p_98)), (*p_96))) < l_601) <= 0x69L) , 0x65AB36E5L), p_1218->g_302[8][5])) <= p_98)), p_1218->g_311.s0)) ^ l_564[2][3]) , l_602[5][2][1]) != (void*)0), (-6L), 0L, ((VECTOR(int32_t, 2))(0x3084A131L)), p_98, 0x63BF303BL, 0x086393BAL)).s5 , l_565) , l_567), 0x00L)) < 0x0EL)) <= 0x99EE5BB1L) , p_97)))) == (-5L)))) ^ 0x23L), (-4L)));
                    }
                    (*l_604) = ((((~(((0xE1BC5621L | ((l_625.sd = (l_604 != ((*p_100) = (((safe_div_func_uint8_t_u_u((((VECTOR(int16_t, 16))(l_607.s2637444503007145)).s9 >= ((p_1218->g_comm_values[p_1218->tid] &= ((safe_div_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s((((*l_555) = ((safe_mul_func_int8_t_s_s((p_1218->g_614 != ((*l_620) = p_1218->g_617)), p_1218->g_398.x)) , (((safe_lshift_func_int16_t_s_s((((*p_1218->g_328) != (*p_1218->g_328)) , (((((-1L) | (FAKE_DIVERGE(p_1218->local_0_offset, get_local_id(0), 10) | l_567)) || 0x223BL) == p_98) > l_623)), 8)) & (*p_96)) < 0x0DB5L))) ^ (*p_1218->g_618)), 0xA2EB5DB8L)) , &p_1218->g_85) != (void*)0), l_399.x)) || (-6L))) || 0x72A0376AB80FB667L)), p_98)) | l_601) , (*p_99))))) ^ 18446744073709551610UL)) <= l_544) , l_370)) ^ 0x5BE8FD8DL) <= p_98) ^ l_623);
                    (*l_604) |= ((0x69L > (!p_1218->g_311.s0)) , ((p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))] , ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(p_98, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(l_628.s2076546430315766)).sf7, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(p_1218->g_629.s5263)), ((VECTOR(int8_t, 2))(p_1218->g_630.s70)).xyyx))).even)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_631.wxwy)))).yxyzwzxx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(6L, 0x63L)))), 5L, 0x63L)), 0L, 7L)).s4c))), 0x5CL))))).zzzxzzyy, ((VECTOR(int8_t, 2))(0x55L, 6L)).yxxyxxyy))).s5035352527171161, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(l_632.wx)).xyyxxxxxxyyxxxxy, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_633.s3302361314773606)).s069f)).wywxxyxz, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(p_1218->g_634.zx)), (int8_t)p_98, (int8_t)(!(((*p_97) , (l_635[3][5][5] || (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x62L, 0x5DL)).lo, ((safe_add_func_int32_t_s_s((*p_1218->g_603), l_601)) >= 0x21D0L))))) >= l_640))))).xyxy)).wzwxzzxz))).s0207273243262740, ((VECTOR(int8_t, 16))(0x77L))))).s14)).xyxxxxyxyyyxxxxx))).sd) <= (*p_1218->g_572)));
                }
                (*l_604) |= 0x469665CBL;
                (*l_604) ^= l_632.z;
                l_660--;
            }
            if ((*p_1218->g_603))
                continue;
            return (*p_99);
        }
        (*l_674) &= ((safe_div_func_uint16_t_u_u((l_665 > (((p_1218->g_17.y , p_1218->g_630.s4) == (((*p_1218->g_572)--) == ((((((VECTOR(int16_t, 4))(((safe_lshift_func_uint8_t_u_u(((l_648 |= ((*p_96) && (((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x0F4C78CD19D0E386L, 5L)).xxyyxxxx)).s7302702124240724, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(l_670.xxyxxxxxxxyyyxyy)).scb56, ((VECTOR(int64_t, 8))(0x54B46FDF361F56ACL, l_653, 0x3353137C00744D68L, ((*p_96) ^ (l_671 <= p_1218->g_498[1])), 0x5F008A195C235BA3L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1218->g_672.s62127065)).s74)), 6L)).hi))).zywyzxyyyyxyzzyz))).s4 > p_1218->g_comm_values[p_1218->tid]))) , l_673), 4)) > p_1218->g_102), p_1218->g_498[7], 0x4442L, 0x60F8L)).x < 0xCC2BL) <= l_649) || 0x23B2F28296DB16F6L) , l_655))) == p_98)), l_671)) , 0x3DD23941L);
        (*l_675) = (void*)0;
    }
    if ((((*p_1218->g_572) & (0x08L & (0x1DL <= ((*l_676) = p_98)))) , ((safe_rshift_func_uint8_t_u_s(((*l_676) |= (**p_1218->g_571)), (p_1218->g_629.s2 , (((l_476.s4 ^= (+(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0L, 0x66577BC1F5CC90C8L, 0x214200F0FD61B2CAL, 0x1BBA4D87F574A5AEL)).yzxwyxxy)).s2 && (((++(*l_679)) != (p_98 & l_412[8])) , (((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(0x7AL, ((VECTOR(uint8_t, 2))(254UL, 0xE9L)), 1UL, 252UL, ((VECTOR(uint8_t, 2))(1UL)), 7UL)).s7, l_405)) || (*p_96)) == FAKE_DIVERGE(p_1218->group_2_offset, get_group_id(2), 10)))))) ^ p_1218->g_68.z) , p_1218->g_52.y)))) != l_690)))
    { /* block id: 252 */
        VECTOR(uint16_t, 4) l_702 = (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xB237L), 0xB237L);
        int64_t *l_712[5] = {&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85};
        int64_t **l_711 = &l_712[4];
        int32_t l_732 = (-1L);
        int32_t *l_733[3][1][8] = {{{&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30}},{{&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30}},{{&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30,&l_412[8],&l_412[8],&p_1218->g_30}}};
        int i, j, k;
        l_412[8] = ((safe_mul_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((~((safe_sub_func_uint32_t_u_u((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1218->g_699.sef5e)))).z & (GROUP_DIVERGE(0, 1) & (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(l_702.xw)).yxxyxxyx, ((VECTOR(uint16_t, 4))(p_1218->g_703.ywzz)).wwxxywwz))))).s3, (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1218->global_0_offset, get_global_id(0), 10), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(p_1218->g_708.s8d7ea3c4)).hi, (uint32_t)(((VECTOR(uint16_t, 16))(l_709.s2b86c990f0a51ec8)).s5 <= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1218->g_710.yxxx)).hi)).lo)))).even, ((VECTOR(uint32_t, 8))(0x65F19F60L, 0x3BEC5C1AL, ((((*l_711) = p_97) != l_684) | 0x0EL), ((VECTOR(uint32_t, 4))(l_713.xxyy)), 0x1265ACAAL)).s31))).even, ((((safe_mul_func_int16_t_s_s(((((!(p_1218->g_85 = (((0x3BL ^ l_702.x) <= (p_1218->g_26[1][0][7] , ((**p_1218->g_571) , (((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((p_98 | ((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((((safe_sub_func_int32_t_s_s((((**p_1218->g_617) = (safe_lshift_func_uint8_t_u_u((**p_1218->g_571), 4))) > l_702.x), l_437.z)) ^ p_98) <= l_702.x))), (**p_1218->g_571))), l_731)) , p_1218->g_699.sf) , FAKE_DIVERGE(p_1218->group_0_offset, get_group_id(0), 10)), 0x3F90L)) , l_732)), 0x4FD2CCC5F13A0636L)), l_702.x)) , p_1218->g_414) | 0x1AA6L)))) , p_1218->g_699.s5))) , 0x564D6019702F8534L) , p_98) <= 0x2DC4L), l_709.s9)) , p_98) < 0xE5DEL) , p_1218->g_634.z), 0xDD265188623C7213L, 18446744073709551611UL)).w)), p_98)))))), l_702.z)) && p_98)), l_713.x)), p_98)) && 0x08DB9F90C45C252EL) , (void*)0) != (void*)0), p_98)) , 0x5C7AAD98L);
    }
    else
    { /* block id: 257 */
        uint32_t l_750 = 0xDE3E2C0DL;
        int32_t *l_752[4][10][4] = {{{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405}},{{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405}},{{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405}},{{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405},{(void*)0,(void*)0,&p_1218->g_26[0][0][8],&l_405}}};
        uint8_t ***l_779 = &l_568;
        int16_t l_782 = 0x3981L;
        VECTOR(int16_t, 2) l_788 = (VECTOR(int16_t, 2))(7L, 0L);
        int64_t l_797[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_797[i] = 2L;
        l_405 = (l_476.s1 = ((p_98 , (((((void*)0 != &l_551) <= (((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1218->g_738.xxyyxxxxxyyxyxyx)).sf, (safe_rshift_func_uint16_t_u_u(((*l_679) |= (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((p_1218->g_comm_values[p_1218->tid] | ((p_1218->g_398.x | p_1218->g_747) | ((((((~l_401) & (GROUP_DIVERGE(1, 1) , (safe_rshift_func_uint8_t_u_u((((p_98 < l_750) > 0UL) <= p_1218->g_439.s5), p_98)))) == 0x25CD01DBL) == p_1218->g_52.y) | p_1218->g_398.y) , (-1L)))), p_98)) && p_1218->g_710.x) ^ p_98), 7)), p_98))), l_750)))), l_751)) || l_494.y) == 0xD316L)) , l_412[8]) , (void*)0)) == (void*)0));
        for (p_1218->g_303 = 0; (p_1218->g_303 >= (-1)); p_1218->g_303 = safe_sub_func_uint8_t_u_u(p_1218->g_303, 3))
        { /* block id: 263 */
            if (l_370)
                break;
        }
        for (l_598 = 0; (l_598 > 22); ++l_598)
        { /* block id: 268 */
            int32_t *l_757 = &p_1218->g_377;
            int8_t *l_771 = &p_1218->g_183;
            int8_t **l_770 = &l_771;
            int8_t *l_773 = (void*)0;
            int8_t **l_772 = &l_773;
            uint8_t ***l_778 = &p_1218->g_571;
            uint8_t ****l_777[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_780[5] = {&p_1218->g_781,&p_1218->g_781,&p_1218->g_781,&p_1218->g_781,&p_1218->g_781};
            int16_t *l_783 = (void*)0;
            int32_t l_784 = 1L;
            int32_t l_785 = 0x7A4CADA7L;
            int i;
            l_785 &= ((((l_757 = p_96) != &p_1218->g_377) ^ (((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((-1L), ((VECTOR(int16_t, 2))(p_1218->g_758.s6a)), (-6L))))).xzxxyxwwwwwyzwwx, ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(p_1218->g_759.xx)), 0x7AB7L)).zxxxzzzxwwyzyzyx))).sc | ((safe_mul_func_uint8_t_u_u(((**p_1218->g_571) = p_98), p_98)) >= (l_405 &= (safe_lshift_func_int16_t_s_u((l_776.y = ((((((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(l_768.yxxxyyxxxyyxxyyx)).sa, ((VECTOR(uint64_t, 16))(l_769.wxxxzzxwywywxxyy)).sf)) <= (((((248UL && (((*l_770) = &l_690) == ((*l_772) = &p_1218->g_183))) , ((**p_1218->g_617) &= (++(*l_555)))) , (0x14AF06EAL >= ((VECTOR(int32_t, 16))(l_776.xyyxyyyxxxyyyyyx)).s9)) < GROUP_DIVERGE(2, 1)) == (l_782 |= ((((l_779 = &p_1218->g_571) != &l_568) ^ p_1218->g_747) | p_1218->g_708.s3)))) , 0x2FC7AEE4EBA93F03L) == 6UL) != 0L) < p_1218->g_398.y)), 5)))))) >= l_784);
        }
        for (p_1218->g_85 = (-21); (p_1218->g_85 < (-7)); p_1218->g_85++)
        { /* block id: 283 */
            int64_t l_796 = 0x01706368EF4A9197L;
            l_476.s7 ^= ((-1L) | ((p_1218->g_710.y , l_598) , ((l_788.x != ((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(0x2BA2A765L, ((p_1218->g_581 != (void*)0) ^ ((((p_98 != ((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((*p_1218->g_572) = (p_1218->g_79.x && 0L)), ((VECTOR(uint8_t, 2))(0xFEL)), 0UL)).z, p_98)) && p_1218->g_795) & l_796) >= 0L)) || 0x1091CB97L) , &p_1218->g_139) == (void*)0)))) < (**p_1218->g_617)), 0xD4L)) & l_797[0])) , l_796)));
        }
    }
    return (*p_99);
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_186 p_1218->g_68 p_1218->g_183 p_1218->g_308 p_1218->g_229 p_1218->g_29 p_1218->g_52 p_1218->g_360
 * writes: p_1218->g_328 p_1218->g_183 p_1218->g_29 p_1218->g_302 p_1218->g_26
 */
int64_t * func_103(int32_t ** p_104, int32_t * p_105, uint16_t  p_106, int32_t ** p_107, struct S0 * p_1218)
{ /* block id: 121 */
    int64_t *l_318 = (void*)0;
    int64_t *l_320 = &p_1218->g_85;
    int64_t **l_319 = &l_320;
    int64_t *l_322[7][1];
    int64_t **l_321 = &l_322[6][0];
    uint16_t **l_325 = &p_1218->g_187;
    uint16_t **l_327[8][10] = {{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187},{&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,&p_1218->g_187,&p_1218->g_187,(void*)0,&p_1218->g_187,(void*)0,&p_1218->g_187}};
    uint16_t ***l_326[6][2] = {{&l_327[1][0],&l_327[1][0]},{&l_327[1][0],&l_327[1][0]},{&l_327[1][0],&l_327[1][0]},{&l_327[1][0],&l_327[1][0]},{&l_327[1][0],&l_327[1][0]},{&l_327[1][0],&l_327[1][0]}};
    int32_t l_329 = 0x6F9AA07CL;
    int8_t *l_330 = &p_1218->g_183;
    uint8_t *l_338 = &p_1218->g_302[2][5];
    int32_t *l_357 = (void*)0;
    int32_t l_358 = 0L;
    uint16_t **l_359 = &p_1218->g_187;
    int32_t *l_361 = &p_1218->g_26[0][1][5];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_322[i][j] = &p_1218->g_85;
    }
    if ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x5DL, (safe_add_func_uint64_t_u_u(5UL, ((((((((((p_106 , l_318) == ((*l_321) = ((*l_319) = l_318))) <= (safe_mul_func_int8_t_s_s((((*l_330) ^= ((p_1218->g_186.s4 <= (((!((((l_325 != (p_1218->g_328 = l_325)) , (l_329 <= l_329)) , 0xA1D19CB76B11A294L) < 0x64F013D18E2FBED1L)) , l_329) >= (-5L))) >= p_1218->g_68.x)) && (-1L)), 253UL))) || 0x5B90CCFE56050230L) != FAKE_DIVERGE(p_1218->global_2_offset, get_global_id(2), 10)) || l_329) , p_106) , p_106) , l_329) <= p_106))))), 0x172DL)))
    { /* block id: 126 */
        if ((atomic_inc(&p_1218->g_atomic_input[71 * get_linear_group_id() + 16]) == 7))
        { /* block id: 128 */
            uint32_t l_331 = 4294967292UL;
            int32_t l_335[6][9] = {{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L},{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L},{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L},{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L},{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L},{4L,7L,7L,4L,0x0E969956L,(-7L),(-7L),0x0E969956L,4L}};
            int32_t *l_334[1][3];
            int32_t *l_336 = &l_335[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_334[i][j] = &l_335[1][5];
            }
            l_336 = ((l_331--) , l_334[0][0]);
            unsigned int result = 0;
            result += l_331;
            int l_335_i0, l_335_i1;
            for (l_335_i0 = 0; l_335_i0 < 6; l_335_i0++) {
                for (l_335_i1 = 0; l_335_i1 < 9; l_335_i1++) {
                    result += l_335[l_335_i0][l_335_i1];
                }
            }
            atomic_add(&p_1218->g_special_values[71 * get_linear_group_id() + 16], result);
        }
        else
        { /* block id: 131 */
            (1 + 1);
        }
    }
    else
    { /* block id: 134 */
        int32_t *l_337 = (void*)0;
        (*p_104) = l_337;
    }
    (*l_361) = (((*l_338) = 0x47L) || ((safe_sub_func_int32_t_s_s(((p_1218->g_308 ^ 0x25L) == (-6L)), (safe_lshift_func_int8_t_s_s((((l_358 |= ((safe_add_func_uint8_t_u_u((l_329 = FAKE_DIVERGE(p_1218->group_0_offset, get_group_id(0), 10)), (((safe_rshift_func_uint16_t_u_u((p_106 , GROUP_DIVERGE(1, 1)), 1)) , (!0x55DAECA4L)) && (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(p_106, ((((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((*p_104) = (*p_1218->g_229)) != l_357), 5)), 0x44EFL)), p_106)) || p_1218->g_68.w) ^ (-2L)) && 0xA99EF825D80198F8L))) || p_1218->g_52.x), p_1218->g_68.y))))) || (-1L))) , l_359) != &p_1218->g_187), p_1218->g_360)))) , p_106));
    (*p_104) = (*p_1218->g_229);
    return &p_1218->g_85;
}


/* ------------------------------------------ */
/* 
 * reads : p_1218->g_30 p_1218->g_85 p_1218->g_138 p_1218->g_52 p_1218->g_29 p_1218->g_26 p_1218->g_68 p_1218->g_18 p_1218->g_17 p_1218->g_67 p_1218->g_43 p_1218->g_80 p_1218->g_186 p_1218->g_187 p_1218->l_comm_values p_1218->g_183 p_1218->g_229
 * writes: p_1218->g_30 p_1218->g_26 p_1218->g_43 p_1218->g_183 p_1218->g_29
 */
int32_t * func_108(int32_t  p_109, struct S0 * p_1218)
{ /* block id: 15 */
    int32_t l_142 = (-1L);
    VECTOR(int32_t, 8) l_144 = (VECTOR(int32_t, 8))(0x6967E9F4L, (VECTOR(int32_t, 4))(0x6967E9F4L, (VECTOR(int32_t, 2))(0x6967E9F4L, 0L), 0L), 0L, 0x6967E9F4L, 0L);
    int32_t *l_165[7][9][4] = {{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}},{{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30},{&p_1218->g_30,&p_1218->g_26[1][0][7],&p_1218->g_26[0][0][3],&p_1218->g_30}}};
    VECTOR(int32_t, 16) l_167 = (VECTOR(int32_t, 16))(0x4D23E7C5L, (VECTOR(int32_t, 4))(0x4D23E7C5L, (VECTOR(int32_t, 2))(0x4D23E7C5L, (-1L)), (-1L)), (-1L), 0x4D23E7C5L, (-1L), (VECTOR(int32_t, 2))(0x4D23E7C5L, (-1L)), (VECTOR(int32_t, 2))(0x4D23E7C5L, (-1L)), 0x4D23E7C5L, (-1L), 0x4D23E7C5L, (-1L));
    uint32_t l_189 = 0xF5FE06BFL;
    VECTOR(int8_t, 2) l_204 = (VECTOR(int8_t, 2))(0x39L, 0x79L);
    int32_t *l_227 = &p_1218->g_26[0][0][0];
    int i, j, k;
    for (p_1218->g_30 = 19; (p_1218->g_30 != 10); p_1218->g_30 = safe_sub_func_uint8_t_u_u(p_1218->g_30, 1))
    { /* block id: 18 */
        int32_t *l_112 = &p_1218->g_26[1][0][7];
        VECTOR(int32_t, 8) l_119 = (VECTOR(int32_t, 8))(0x4F1F3A62L, (VECTOR(int32_t, 4))(0x4F1F3A62L, (VECTOR(int32_t, 2))(0x4F1F3A62L, 0x2A53E6A3L), 0x2A53E6A3L), 0x2A53E6A3L, 0x4F1F3A62L, 0x2A53E6A3L);
        uint16_t l_143 = 4UL;
        uint32_t l_145 = 0x28373B84L;
        uint32_t l_168 = 0UL;
        int i;
        if (((*l_112) = 0x64B147B7L))
        { /* block id: 20 */
            if ((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_119.s7313425750477330)).lo)))).s0307602567272754, ((VECTOR(int32_t, 16))(((safe_div_func_int64_t_s_s(0L, p_1218->g_85)) , (safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0L, ((((safe_rshift_func_uint8_t_u_u(p_109, 7)) < (((safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint64_t_u((((void*)0 == &p_1218->g_102) , 0x717488B34D06322BL))) || (p_1218->g_138 == (((safe_mul_func_int8_t_s_s((l_142 , 0x41L), p_1218->g_52.y)) && l_142) , (void*)0))) , (*p_1218->g_29)) != l_143), l_144.s2)) == l_144.s1), 0xF9L)) & p_109), p_109)) >= 1UL) > (*l_112))) | p_1218->g_68.y) , 0x6D666DE7L))), (*l_112))), 0x4CL))))), (-8L), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 2))(6L)), 0x01355238L, 0x70A9E87EL)), ((VECTOR(int32_t, 16))(1L))))).lo)).s6 || FAKE_DIVERGE(p_1218->local_0_offset, get_local_id(0), 10)), (-1L))) > 3UL), l_142)), 0xCAL)))
            { /* block id: 21 */
                int64_t l_163 = 0L;
                l_145 |= (*p_1218->g_29);
                for (p_109 = 6; (p_109 >= 15); ++p_109)
                { /* block id: 25 */
                    uint32_t l_148 = 4294967295UL;
                    int32_t *l_149 = (void*)0;
                    int32_t *l_150 = &p_1218->g_43;
                    if (((l_148 , (p_1218->g_26[3][0][2] ^ p_1218->g_18.y)) >= (p_1218->g_17.y != (((void*)0 != &p_1218->g_85) >= ((*l_150) = (*p_1218->g_29))))))
                    { /* block id: 27 */
                        uint16_t *l_164 = &l_143;
                        int32_t **l_166 = &l_165[3][7][2];
                        (*l_150) |= (safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((void*)0 == l_112), (p_1218->g_67.y ^ (safe_mul_func_int16_t_s_s(0x5E81L, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*l_164) = ((VECTOR(uint16_t, 8))(0x24E7L, 0UL, (&p_1218->g_85 != &p_1218->g_85), 3UL, (p_109 && (((l_144.s6 >= l_163) | p_1218->g_68.x) & p_109)), 0UL, 0UL, 0x05BCL)).s0), p_1218->g_18.w)), 4))))))) , p_1218->g_67.w), p_109)) <= 0xC3L), 3));
                        (*l_166) = l_165[2][8][3];
                    }
                    else
                    { /* block id: 31 */
                        (*l_150) &= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_167.s11)).yxxy)).xxyyyxyy, ((VECTOR(int32_t, 2))(0x2A9DD399L, (-1L))).xyyxxyyy))).s7;
                    }
                    (*l_112) = l_168;
                }
            }
            else
            { /* block id: 36 */
                VECTOR(uint32_t, 2) l_169 = (VECTOR(uint32_t, 2))(4294967295UL, 0x499BA862L);
                int64_t *l_172 = (void*)0;
                int32_t *l_173 = &p_1218->g_26[1][1][6];
                int32_t **l_174 = (void*)0;
                int32_t **l_175 = (void*)0;
                int32_t **l_176 = (void*)0;
                int32_t **l_177 = &l_173;
                int i;
                (*l_112) |= l_169.y;
                (*l_112) &= (safe_mod_func_uint64_t_u_u(((void*)0 != l_172), (((&p_109 == ((*l_177) = (l_165[2][8][3] = l_173))) <= p_1218->g_68.y) & p_1218->g_80.y)));
                if (p_109)
                    break;
            }
        }
        else
        { /* block id: 43 */
            int8_t *l_182 = &p_1218->g_183;
            int64_t l_188 = 0x3672675DE231E16EL;
            VECTOR(uint32_t, 8) l_200 = (VECTOR(uint32_t, 8))(0x1166651EL, (VECTOR(uint32_t, 4))(0x1166651EL, (VECTOR(uint32_t, 2))(0x1166651EL, 0x098317EEL), 0x098317EEL), 0x098317EEL, 0x1166651EL, 0x098317EEL);
            VECTOR(uint32_t, 2) l_201 = (VECTOR(uint32_t, 2))(4294967287UL, 3UL);
            VECTOR(uint32_t, 16) l_203 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL);
            VECTOR(uint64_t, 16) l_207 = (VECTOR(uint64_t, 16))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x39EEE24A96F26880L), 0x39EEE24A96F26880L), 0x39EEE24A96F26880L, 18446744073709551613UL, 0x39EEE24A96F26880L, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x39EEE24A96F26880L), (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x39EEE24A96F26880L), 18446744073709551613UL, 0x39EEE24A96F26880L, 18446744073709551613UL, 0x39EEE24A96F26880L);
            int64_t *l_210 = (void*)0;
            int32_t *l_226 = &p_1218->g_30;
            int32_t *l_228 = &p_1218->g_30;
            int i;
            p_1218->g_43 &= (safe_mul_func_uint8_t_u_u(p_109, (((((safe_mul_func_int8_t_s_s(((*l_182) = 1L), (&p_1218->g_102 == &p_1218->g_102))) & (*p_1218->g_29)) != ((safe_add_func_int16_t_s_s(((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1218->g_186.s80)))).yxxxxxxx)).s0 , p_1218->g_187) == p_1218->g_187) ^ ((p_109 , ((&p_109 == (void*)0) == 0x4BL)) != p_1218->g_26[1][0][7])) | p_109), l_188)) <= p_109)) >= 0x9A6BD1659E81E94FL) == l_188)));
            if ((l_189 != (safe_add_func_int32_t_s_s((*l_112), (safe_sub_func_int8_t_s_s((-1L), p_109))))))
            { /* block id: 46 */
                VECTOR(uint32_t, 2) l_202 = (VECTOR(uint32_t, 2))(0x6CB2FF31L, 0xDF592409L);
                int64_t *l_212[10] = {&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85,&p_1218->g_85};
                int64_t **l_211 = &l_212[6];
                int64_t *l_223 = &l_188;
                int32_t **l_224 = (void*)0;
                VECTOR(int32_t, 4) l_225 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-7L)), (-7L));
                int i;
                (*l_112) = (safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0xBBCB4933L, ((VECTOR(uint32_t, 2))(l_200.s62)), 0x28AA00DFL)), 0x0FE09707L, ((VECTOR(uint32_t, 4))(l_201.yxxx)), 0xF2B5DE02L, 4294967290UL, 4294967291UL, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_202.xyxyxxxy)))).odd, ((VECTOR(uint32_t, 8))(7UL, (+0xD05ABF9FL), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(1UL, 1UL)).yyyyyxyy)).s72, ((VECTOR(uint32_t, 2))(l_203.sa8))))), 1UL, p_109, 0x591A87AEL, 0x5E7B768CL)).even))))).s5 <= ((((VECTOR(int8_t, 8))(((1UL ^ ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(l_204.xx)).xxxyxxyyyxyyxyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x5AL, ((safe_mul_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_207.s45252a31)))).s3 || (((safe_rshift_func_int8_t_s_u((l_210 == (GROUP_DIVERGE(2, 1) , ((*l_211) = &p_1218->g_85))), (((*l_223) ^= (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(l_202.x, 0)) || (*l_112)), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((-4L), p_109)), p_1218->g_186.s6)) , 0x389C7B44L), p_109))))) != p_1218->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1218->tid, 184))]))) , 0x77L) != 8UL)) | 0xE11BL), p_109)) > 0x4F6FAD5AL), 0x56L, (-9L), (-1L), (*l_112), 0L, ((VECTOR(int8_t, 2))(4L)), p_1218->g_183, (-4L), ((VECTOR(int8_t, 2))(0x38L)), ((VECTOR(int8_t, 2))(0x3CL)), 1L)).s4f)).xyyyxxyyxyyyxyxy))), ((VECTOR(int8_t, 16))(0x59L))))).lo)).s00, ((VECTOR(int8_t, 2))(0L))))))).hi) , 0x77L), 1L, 0x56L, p_109, ((VECTOR(int8_t, 2))(1L)), 0x30L, (-1L))).s0 == (-1L)) , 0L)), p_1218->g_68.y)) > p_109) == 0x1746C3F0D202A2DCL), 0x23L));
                l_112 = (void*)0;
                p_109 &= (l_225.x &= (*p_1218->g_29));
            }
            else
            { /* block id: 53 */
                p_1218->g_29 = l_226;
                l_165[5][0][2] = l_227;
            }
            (*p_1218->g_229) = l_228;
        }
        if ((atomic_inc(&p_1218->g_atomic_input[71 * get_linear_group_id() + 27]) == 2))
        { /* block id: 60 */
            uint32_t l_230[7][5][7] = {{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}},{{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL},{1UL,4UL,4294967295UL,4294967293UL,4294967287UL,0x4B63F948L,4294967292UL}}};
            int8_t l_231 = 8L;
            int i, j, k;
            l_231 = (l_230[6][2][0] , (-4L));
            unsigned int result = 0;
            int l_230_i0, l_230_i1, l_230_i2;
            for (l_230_i0 = 0; l_230_i0 < 7; l_230_i0++) {
                for (l_230_i1 = 0; l_230_i1 < 5; l_230_i1++) {
                    for (l_230_i2 = 0; l_230_i2 < 7; l_230_i2++) {
                        result += l_230[l_230_i0][l_230_i1][l_230_i2];
                    }
                }
            }
            result += l_231;
            atomic_add(&p_1218->g_special_values[71 * get_linear_group_id() + 27], result);
        }
        else
        { /* block id: 62 */
            (1 + 1);
        }
        if ((atomic_inc(&p_1218->l_atomic_input[5]) == 1))
        { /* block id: 66 */
            uint32_t l_232 = 6UL;
            VECTOR(uint32_t, 2) l_233 = (VECTOR(uint32_t, 2))(0x18F66F7AL, 4294967289UL);
            uint16_t l_234 = 0x8253L;
            VECTOR(int32_t, 16) l_235 = (VECTOR(int32_t, 16))(0x13942DFEL, (VECTOR(int32_t, 4))(0x13942DFEL, (VECTOR(int32_t, 2))(0x13942DFEL, 8L), 8L), 8L, 0x13942DFEL, 8L, (VECTOR(int32_t, 2))(0x13942DFEL, 8L), (VECTOR(int32_t, 2))(0x13942DFEL, 8L), 0x13942DFEL, 8L, 0x13942DFEL, 8L);
            uint16_t l_236 = 0xBB95L;
            int32_t l_238 = 0x51BFF649L;
            int32_t *l_237 = &l_238;
            int i;
            l_232 = 1L;
            l_237 = (l_233.y , ((l_236 = ((VECTOR(int32_t, 8))((l_234 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x50D2704CL)).xyxxxxyxyxyyxxxx)).s0), ((VECTOR(int32_t, 2))(l_235.sa5)), 0x1F3D8131L, 0x68C6C8EEL, 1L, 0x33C94A2AL, 0L)).s1) , (void*)0));
            for (l_233.y = 0; (l_233.y < 12); ++l_233.y)
            { /* block id: 73 */
                int32_t l_241[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_241[i] = (-1L);
                for (l_241[0] = (-24); (l_241[0] <= (-27)); l_241[0] = safe_sub_func_int32_t_s_s(l_241[0], 9))
                { /* block id: 76 */
                    int32_t l_245 = 0x19DE6B23L;
                    int32_t *l_244 = &l_245;
                    l_237 = l_244;
                    for (l_245 = (-4); (l_245 == 18); l_245++)
                    { /* block id: 80 */
                        int64_t l_248[2];
                        int8_t l_249 = 1L;
                        uint8_t l_250 = 0UL;
                        int32_t l_254 = 0x567AFB20L;
                        int32_t *l_253 = &l_254;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_248[i] = 0L;
                        --l_250;
                        l_237 = l_253;
                    }
                    l_237 = (void*)0;
                }
                for (l_241[0] = 0; (l_241[0] >= 11); l_241[0] = safe_add_func_int32_t_s_s(l_241[0], 4))
                { /* block id: 88 */
                    VECTOR(int32_t, 16) l_259 = (VECTOR(int32_t, 16))(0x2670ACDFL, (VECTOR(int32_t, 4))(0x2670ACDFL, (VECTOR(int32_t, 2))(0x2670ACDFL, 0x7ED0B2EAL), 0x7ED0B2EAL), 0x7ED0B2EAL, 0x2670ACDFL, 0x7ED0B2EAL, (VECTOR(int32_t, 2))(0x2670ACDFL, 0x7ED0B2EAL), (VECTOR(int32_t, 2))(0x2670ACDFL, 0x7ED0B2EAL), 0x2670ACDFL, 0x7ED0B2EAL, 0x2670ACDFL, 0x7ED0B2EAL);
                    int i;
                    if ((((l_236++) , 4L) , ((VECTOR(int32_t, 4))(l_259.s24c7)).w))
                    { /* block id: 90 */
                        int32_t l_260 = 0L;
                        uint16_t l_263 = 0UL;
                        uint16_t *l_262 = &l_263;
                        uint16_t **l_261 = &l_262;
                        uint16_t **l_264 = &l_262;
                        uint16_t **l_265 = (void*)0;
                        int32_t l_266 = (-1L);
                        uint64_t l_267 = 0UL;
                        uint16_t l_270 = 1UL;
                        l_265 = ((l_234 = l_260) , (l_264 = (l_261 = (void*)0)));
                        ++l_267;
                        l_238 ^= l_270;
                    }
                    else
                    { /* block id: 97 */
                        uint32_t l_271 = 9UL;
                        l_259.s4 = l_271;
                    }
                }
            }
            unsigned int result = 0;
            result += l_232;
            result += l_233.y;
            result += l_233.x;
            result += l_234;
            result += l_235.sf;
            result += l_235.se;
            result += l_235.sd;
            result += l_235.sc;
            result += l_235.sb;
            result += l_235.sa;
            result += l_235.s9;
            result += l_235.s8;
            result += l_235.s7;
            result += l_235.s6;
            result += l_235.s5;
            result += l_235.s4;
            result += l_235.s3;
            result += l_235.s2;
            result += l_235.s1;
            result += l_235.s0;
            result += l_236;
            result += l_238;
            atomic_add(&p_1218->l_special_values[5], result);
        }
        else
        { /* block id: 102 */
            (1 + 1);
        }
        for (l_143 = 0; (l_143 >= 53); l_143 = safe_add_func_uint16_t_u_u(l_143, 3))
        { /* block id: 107 */
            uint16_t l_274 = 0UL;
            --l_274;
            return l_165[2][8][3];
        }
    }
    atomic_or(&p_1218->g_atomic_reduction[get_linear_group_id()], p_109 + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1218->v_collective += p_1218->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*p_1218->g_29) = (**p_1218->g_229);
    return l_165[0][1][2];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[184];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 184; i++)
            l_comm_values[i] = 1;
    struct S0 c_1219;
    struct S0* p_1218 = &c_1219;
    struct S0 c_1220 = {
        (VECTOR(int64_t, 2))((-4L), 2L), // p_1218->g_17
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), // p_1218->g_18
        {{{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L},{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L}},{{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L},{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L}},{{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L},{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L}},{{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L},{0x338A83A5L,0x0268D9A6L,0x65D3E8EAL,(-9L),1L,0x5AD8BE77L,0x770AACC7L,(-1L),0x0268D9A6L}}}, // p_1218->g_26
        0x732BC12AL, // p_1218->g_30
        &p_1218->g_30, // p_1218->g_29
        1L, // p_1218->g_43
        65535UL, // p_1218->g_45
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 4UL), // p_1218->g_52
        4UL, // p_1218->g_60
        (VECTOR(int16_t, 4))(0x2DFAL, (VECTOR(int16_t, 2))(0x2DFAL, 0L), 0L), // p_1218->g_67
        (VECTOR(int16_t, 4))(0x72DDL, (VECTOR(int16_t, 2))(0x72DDL, (-8L)), (-8L)), // p_1218->g_68
        (VECTOR(int16_t, 2))(0x30B1L, 0x0D3FL), // p_1218->g_79
        (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x5237L), 0x5237L), // p_1218->g_80
        0x3F5E0DC07262726EL, // p_1218->g_85
        0xA49FFA34L, // p_1218->g_102
        (void*)0, // p_1218->g_139
        &p_1218->g_139, // p_1218->g_138
        0x5BL, // p_1218->g_183
        (VECTOR(int64_t, 16))(0x0EF2AE6F9C14EDB9L, (VECTOR(int64_t, 4))(0x0EF2AE6F9C14EDB9L, (VECTOR(int64_t, 2))(0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L), 0x51308C9016659D93L), 0x51308C9016659D93L, 0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L, (VECTOR(int64_t, 2))(0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L), (VECTOR(int64_t, 2))(0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L), 0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L, 0x0EF2AE6F9C14EDB9L, 0x51308C9016659D93L), // p_1218->g_186
        (void*)0, // p_1218->g_187
        &p_1218->g_29, // p_1218->g_229
        0x2DD8L, // p_1218->g_289
        {{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL},{4UL,250UL,246UL,255UL,0UL,0xF6L,0xF6L,0UL}}, // p_1218->g_302
        0L, // p_1218->g_303
        7UL, // p_1218->g_308
        (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x37BEEB05L), 0x37BEEB05L), 0x37BEEB05L, (-3L), 0x37BEEB05L), // p_1218->g_311
        (void*)0, // p_1218->g_310
        {{&p_1218->g_310,&p_1218->g_310,(void*)0,&p_1218->g_310,&p_1218->g_310,&p_1218->g_310,(void*)0},{&p_1218->g_310,&p_1218->g_310,(void*)0,&p_1218->g_310,&p_1218->g_310,&p_1218->g_310,(void*)0}}, // p_1218->g_309
        &p_1218->g_187, // p_1218->g_328
        254UL, // p_1218->g_360
        (VECTOR(uint16_t, 8))(0x8432L, (VECTOR(uint16_t, 4))(0x8432L, (VECTOR(uint16_t, 2))(0x8432L, 1UL), 1UL), 1UL, 0x8432L, 1UL), // p_1218->g_374
        0x4922BD29L, // p_1218->g_377
        (VECTOR(uint64_t, 2))(0x55E217BEBA8F6605L, 0UL), // p_1218->g_398
        (-1L), // p_1218->g_414
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4423FD80L), 0x4423FD80L), 0x4423FD80L, 4294967295UL, 0x4423FD80L), // p_1218->g_438
        (VECTOR(uint32_t, 16))(0xF2CB2827L, (VECTOR(uint32_t, 4))(0xF2CB2827L, (VECTOR(uint32_t, 2))(0xF2CB2827L, 0x31B1B4A5L), 0x31B1B4A5L), 0x31B1B4A5L, 0xF2CB2827L, 0x31B1B4A5L, (VECTOR(uint32_t, 2))(0xF2CB2827L, 0x31B1B4A5L), (VECTOR(uint32_t, 2))(0xF2CB2827L, 0x31B1B4A5L), 0xF2CB2827L, 0x31B1B4A5L, 0xF2CB2827L, 0x31B1B4A5L), // p_1218->g_439
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_1218->g_498
        &p_1218->g_360, // p_1218->g_572
        &p_1218->g_572, // p_1218->g_571
        (void*)0, // p_1218->g_581
        &p_1218->g_414, // p_1218->g_603
        4294967295UL, // p_1218->g_616
        &p_1218->g_616, // p_1218->g_615
        &p_1218->g_615, // p_1218->g_614
        &p_1218->g_498[1], // p_1218->g_618
        &p_1218->g_618, // p_1218->g_617
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1218->g_629
        (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x4BL), 0x4BL), 0x4BL, (-9L), 0x4BL), // p_1218->g_630
        (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0L), 0L), // p_1218->g_634
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x47C10900F25AF5ECL), 0x47C10900F25AF5ECL), 0x47C10900F25AF5ECL, (-1L), 0x47C10900F25AF5ECL), // p_1218->g_672
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x34L), 0x34L), 0x34L, (-1L), 0x34L, (VECTOR(int8_t, 2))((-1L), 0x34L), (VECTOR(int8_t, 2))((-1L), 0x34L), (-1L), 0x34L, (-1L), 0x34L), // p_1218->g_699
        (VECTOR(uint16_t, 4))(0xED11L, (VECTOR(uint16_t, 2))(0xED11L, 65527UL), 65527UL), // p_1218->g_703
        (VECTOR(uint32_t, 16))(0x2469D79FL, (VECTOR(uint32_t, 4))(0x2469D79FL, (VECTOR(uint32_t, 2))(0x2469D79FL, 0UL), 0UL), 0UL, 0x2469D79FL, 0UL, (VECTOR(uint32_t, 2))(0x2469D79FL, 0UL), (VECTOR(uint32_t, 2))(0x2469D79FL, 0UL), 0x2469D79FL, 0UL, 0x2469D79FL, 0UL), // p_1218->g_708
        (VECTOR(int16_t, 2))(0x75A9L, 0x592EL), // p_1218->g_710
        (VECTOR(int16_t, 2))((-1L), 0x5250L), // p_1218->g_738
        0xF9DF8728L, // p_1218->g_747
        (VECTOR(int16_t, 16))(0x3DC4L, (VECTOR(int16_t, 4))(0x3DC4L, (VECTOR(int16_t, 2))(0x3DC4L, 0x3A14L), 0x3A14L), 0x3A14L, 0x3DC4L, 0x3A14L, (VECTOR(int16_t, 2))(0x3DC4L, 0x3A14L), (VECTOR(int16_t, 2))(0x3DC4L, 0x3A14L), 0x3DC4L, 0x3A14L, 0x3DC4L, 0x3A14L), // p_1218->g_758
        (VECTOR(int16_t, 2))((-3L), 0x666FL), // p_1218->g_759
        0x79661742L, // p_1218->g_781
        0x7E7231A8L, // p_1218->g_795
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1218->g_804
        (VECTOR(uint32_t, 16))(0x135FC3BFL, (VECTOR(uint32_t, 4))(0x135FC3BFL, (VECTOR(uint32_t, 2))(0x135FC3BFL, 0UL), 0UL), 0UL, 0x135FC3BFL, 0UL, (VECTOR(uint32_t, 2))(0x135FC3BFL, 0UL), (VECTOR(uint32_t, 2))(0x135FC3BFL, 0UL), 0x135FC3BFL, 0UL, 0x135FC3BFL, 0UL), // p_1218->g_813
        {0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL,0xBBF44C2AL}, // p_1218->g_829
        &p_1218->g_29, // p_1218->g_832
        0x70479846L, // p_1218->g_840
        (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551612UL), 18446744073709551612UL), // p_1218->g_864
        0x603911E8L, // p_1218->g_885
        &p_1218->g_85, // p_1218->g_922
        (VECTOR(uint16_t, 2))(1UL, 65535UL), // p_1218->g_925
        (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, (-5L)), (-5L)), (-5L), 0x15L, (-5L), (VECTOR(int8_t, 2))(0x15L, (-5L)), (VECTOR(int8_t, 2))(0x15L, (-5L)), 0x15L, (-5L), 0x15L, (-5L)), // p_1218->g_928
        (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x21L), 0x21L), // p_1218->g_929
        (VECTOR(int32_t, 4))(0x513DD40DL, (VECTOR(int32_t, 2))(0x513DD40DL, 0x08B8CC67L), 0x08B8CC67L), // p_1218->g_1010
        0x15142ADBL, // p_1218->g_1021
        {&p_1218->g_289}, // p_1218->g_1029
        (VECTOR(int64_t, 2))(0x6B3EC7C47084A48FL, 0x6B8AF7AB70857985L), // p_1218->g_1041
        &p_1218->g_617, // p_1218->g_1043
        {&p_1218->g_617,&p_1218->g_617,&p_1218->g_617,&p_1218->g_617,&p_1218->g_617,&p_1218->g_617}, // p_1218->g_1044
        0x3807884AA8B04504L, // p_1218->g_1045
        (VECTOR(int16_t, 4))(0x3EA5L, (VECTOR(int16_t, 2))(0x3EA5L, 0x112DL), 0x112DL), // p_1218->g_1047
        (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x9AL), 0x9AL), 0x9AL, 250UL, 0x9AL), // p_1218->g_1050
        (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 1UL), 1UL), 1UL, 249UL, 1UL), // p_1218->g_1052
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1218->g_1097
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1218->g_1142
        {&p_1218->g_30,&p_1218->g_30,&p_1218->g_30,&p_1218->g_30}, // p_1218->g_1164
        &p_1218->g_26[1][0][7], // p_1218->g_1165
        0, // p_1218->v_collective
        sequence_input[get_global_id(0)], // p_1218->global_0_offset
        sequence_input[get_global_id(1)], // p_1218->global_1_offset
        sequence_input[get_global_id(2)], // p_1218->global_2_offset
        sequence_input[get_local_id(0)], // p_1218->local_0_offset
        sequence_input[get_local_id(1)], // p_1218->local_1_offset
        sequence_input[get_local_id(2)], // p_1218->local_2_offset
        sequence_input[get_group_id(0)], // p_1218->group_0_offset
        sequence_input[get_group_id(1)], // p_1218->group_1_offset
        sequence_input[get_group_id(2)], // p_1218->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 184)), permutations[0][get_linear_local_id()])), // p_1218->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1219 = c_1220;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1218);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1218->g_17.x, "p_1218->g_17.x", print_hash_value);
    transparent_crc(p_1218->g_17.y, "p_1218->g_17.y", print_hash_value);
    transparent_crc(p_1218->g_18.x, "p_1218->g_18.x", print_hash_value);
    transparent_crc(p_1218->g_18.y, "p_1218->g_18.y", print_hash_value);
    transparent_crc(p_1218->g_18.z, "p_1218->g_18.z", print_hash_value);
    transparent_crc(p_1218->g_18.w, "p_1218->g_18.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1218->g_26[i][j][k], "p_1218->g_26[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1218->g_30, "p_1218->g_30", print_hash_value);
    transparent_crc(p_1218->g_43, "p_1218->g_43", print_hash_value);
    transparent_crc(p_1218->g_45, "p_1218->g_45", print_hash_value);
    transparent_crc(p_1218->g_52.x, "p_1218->g_52.x", print_hash_value);
    transparent_crc(p_1218->g_52.y, "p_1218->g_52.y", print_hash_value);
    transparent_crc(p_1218->g_60, "p_1218->g_60", print_hash_value);
    transparent_crc(p_1218->g_67.x, "p_1218->g_67.x", print_hash_value);
    transparent_crc(p_1218->g_67.y, "p_1218->g_67.y", print_hash_value);
    transparent_crc(p_1218->g_67.z, "p_1218->g_67.z", print_hash_value);
    transparent_crc(p_1218->g_67.w, "p_1218->g_67.w", print_hash_value);
    transparent_crc(p_1218->g_68.x, "p_1218->g_68.x", print_hash_value);
    transparent_crc(p_1218->g_68.y, "p_1218->g_68.y", print_hash_value);
    transparent_crc(p_1218->g_68.z, "p_1218->g_68.z", print_hash_value);
    transparent_crc(p_1218->g_68.w, "p_1218->g_68.w", print_hash_value);
    transparent_crc(p_1218->g_79.x, "p_1218->g_79.x", print_hash_value);
    transparent_crc(p_1218->g_79.y, "p_1218->g_79.y", print_hash_value);
    transparent_crc(p_1218->g_80.x, "p_1218->g_80.x", print_hash_value);
    transparent_crc(p_1218->g_80.y, "p_1218->g_80.y", print_hash_value);
    transparent_crc(p_1218->g_80.z, "p_1218->g_80.z", print_hash_value);
    transparent_crc(p_1218->g_80.w, "p_1218->g_80.w", print_hash_value);
    transparent_crc(p_1218->g_85, "p_1218->g_85", print_hash_value);
    transparent_crc(p_1218->g_102, "p_1218->g_102", print_hash_value);
    transparent_crc(p_1218->g_183, "p_1218->g_183", print_hash_value);
    transparent_crc(p_1218->g_186.s0, "p_1218->g_186.s0", print_hash_value);
    transparent_crc(p_1218->g_186.s1, "p_1218->g_186.s1", print_hash_value);
    transparent_crc(p_1218->g_186.s2, "p_1218->g_186.s2", print_hash_value);
    transparent_crc(p_1218->g_186.s3, "p_1218->g_186.s3", print_hash_value);
    transparent_crc(p_1218->g_186.s4, "p_1218->g_186.s4", print_hash_value);
    transparent_crc(p_1218->g_186.s5, "p_1218->g_186.s5", print_hash_value);
    transparent_crc(p_1218->g_186.s6, "p_1218->g_186.s6", print_hash_value);
    transparent_crc(p_1218->g_186.s7, "p_1218->g_186.s7", print_hash_value);
    transparent_crc(p_1218->g_186.s8, "p_1218->g_186.s8", print_hash_value);
    transparent_crc(p_1218->g_186.s9, "p_1218->g_186.s9", print_hash_value);
    transparent_crc(p_1218->g_186.sa, "p_1218->g_186.sa", print_hash_value);
    transparent_crc(p_1218->g_186.sb, "p_1218->g_186.sb", print_hash_value);
    transparent_crc(p_1218->g_186.sc, "p_1218->g_186.sc", print_hash_value);
    transparent_crc(p_1218->g_186.sd, "p_1218->g_186.sd", print_hash_value);
    transparent_crc(p_1218->g_186.se, "p_1218->g_186.se", print_hash_value);
    transparent_crc(p_1218->g_186.sf, "p_1218->g_186.sf", print_hash_value);
    transparent_crc(p_1218->g_289, "p_1218->g_289", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1218->g_302[i][j], "p_1218->g_302[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1218->g_303, "p_1218->g_303", print_hash_value);
    transparent_crc(p_1218->g_308, "p_1218->g_308", print_hash_value);
    transparent_crc(p_1218->g_311.s0, "p_1218->g_311.s0", print_hash_value);
    transparent_crc(p_1218->g_311.s1, "p_1218->g_311.s1", print_hash_value);
    transparent_crc(p_1218->g_311.s2, "p_1218->g_311.s2", print_hash_value);
    transparent_crc(p_1218->g_311.s3, "p_1218->g_311.s3", print_hash_value);
    transparent_crc(p_1218->g_311.s4, "p_1218->g_311.s4", print_hash_value);
    transparent_crc(p_1218->g_311.s5, "p_1218->g_311.s5", print_hash_value);
    transparent_crc(p_1218->g_311.s6, "p_1218->g_311.s6", print_hash_value);
    transparent_crc(p_1218->g_311.s7, "p_1218->g_311.s7", print_hash_value);
    transparent_crc(p_1218->g_360, "p_1218->g_360", print_hash_value);
    transparent_crc(p_1218->g_374.s0, "p_1218->g_374.s0", print_hash_value);
    transparent_crc(p_1218->g_374.s1, "p_1218->g_374.s1", print_hash_value);
    transparent_crc(p_1218->g_374.s2, "p_1218->g_374.s2", print_hash_value);
    transparent_crc(p_1218->g_374.s3, "p_1218->g_374.s3", print_hash_value);
    transparent_crc(p_1218->g_374.s4, "p_1218->g_374.s4", print_hash_value);
    transparent_crc(p_1218->g_374.s5, "p_1218->g_374.s5", print_hash_value);
    transparent_crc(p_1218->g_374.s6, "p_1218->g_374.s6", print_hash_value);
    transparent_crc(p_1218->g_374.s7, "p_1218->g_374.s7", print_hash_value);
    transparent_crc(p_1218->g_377, "p_1218->g_377", print_hash_value);
    transparent_crc(p_1218->g_398.x, "p_1218->g_398.x", print_hash_value);
    transparent_crc(p_1218->g_398.y, "p_1218->g_398.y", print_hash_value);
    transparent_crc(p_1218->g_414, "p_1218->g_414", print_hash_value);
    transparent_crc(p_1218->g_438.s0, "p_1218->g_438.s0", print_hash_value);
    transparent_crc(p_1218->g_438.s1, "p_1218->g_438.s1", print_hash_value);
    transparent_crc(p_1218->g_438.s2, "p_1218->g_438.s2", print_hash_value);
    transparent_crc(p_1218->g_438.s3, "p_1218->g_438.s3", print_hash_value);
    transparent_crc(p_1218->g_438.s4, "p_1218->g_438.s4", print_hash_value);
    transparent_crc(p_1218->g_438.s5, "p_1218->g_438.s5", print_hash_value);
    transparent_crc(p_1218->g_438.s6, "p_1218->g_438.s6", print_hash_value);
    transparent_crc(p_1218->g_438.s7, "p_1218->g_438.s7", print_hash_value);
    transparent_crc(p_1218->g_439.s0, "p_1218->g_439.s0", print_hash_value);
    transparent_crc(p_1218->g_439.s1, "p_1218->g_439.s1", print_hash_value);
    transparent_crc(p_1218->g_439.s2, "p_1218->g_439.s2", print_hash_value);
    transparent_crc(p_1218->g_439.s3, "p_1218->g_439.s3", print_hash_value);
    transparent_crc(p_1218->g_439.s4, "p_1218->g_439.s4", print_hash_value);
    transparent_crc(p_1218->g_439.s5, "p_1218->g_439.s5", print_hash_value);
    transparent_crc(p_1218->g_439.s6, "p_1218->g_439.s6", print_hash_value);
    transparent_crc(p_1218->g_439.s7, "p_1218->g_439.s7", print_hash_value);
    transparent_crc(p_1218->g_439.s8, "p_1218->g_439.s8", print_hash_value);
    transparent_crc(p_1218->g_439.s9, "p_1218->g_439.s9", print_hash_value);
    transparent_crc(p_1218->g_439.sa, "p_1218->g_439.sa", print_hash_value);
    transparent_crc(p_1218->g_439.sb, "p_1218->g_439.sb", print_hash_value);
    transparent_crc(p_1218->g_439.sc, "p_1218->g_439.sc", print_hash_value);
    transparent_crc(p_1218->g_439.sd, "p_1218->g_439.sd", print_hash_value);
    transparent_crc(p_1218->g_439.se, "p_1218->g_439.se", print_hash_value);
    transparent_crc(p_1218->g_439.sf, "p_1218->g_439.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1218->g_498[i], "p_1218->g_498[i]", print_hash_value);

    }
    transparent_crc(p_1218->g_616, "p_1218->g_616", print_hash_value);
    transparent_crc(p_1218->g_629.s0, "p_1218->g_629.s0", print_hash_value);
    transparent_crc(p_1218->g_629.s1, "p_1218->g_629.s1", print_hash_value);
    transparent_crc(p_1218->g_629.s2, "p_1218->g_629.s2", print_hash_value);
    transparent_crc(p_1218->g_629.s3, "p_1218->g_629.s3", print_hash_value);
    transparent_crc(p_1218->g_629.s4, "p_1218->g_629.s4", print_hash_value);
    transparent_crc(p_1218->g_629.s5, "p_1218->g_629.s5", print_hash_value);
    transparent_crc(p_1218->g_629.s6, "p_1218->g_629.s6", print_hash_value);
    transparent_crc(p_1218->g_629.s7, "p_1218->g_629.s7", print_hash_value);
    transparent_crc(p_1218->g_629.s8, "p_1218->g_629.s8", print_hash_value);
    transparent_crc(p_1218->g_629.s9, "p_1218->g_629.s9", print_hash_value);
    transparent_crc(p_1218->g_629.sa, "p_1218->g_629.sa", print_hash_value);
    transparent_crc(p_1218->g_629.sb, "p_1218->g_629.sb", print_hash_value);
    transparent_crc(p_1218->g_629.sc, "p_1218->g_629.sc", print_hash_value);
    transparent_crc(p_1218->g_629.sd, "p_1218->g_629.sd", print_hash_value);
    transparent_crc(p_1218->g_629.se, "p_1218->g_629.se", print_hash_value);
    transparent_crc(p_1218->g_629.sf, "p_1218->g_629.sf", print_hash_value);
    transparent_crc(p_1218->g_630.s0, "p_1218->g_630.s0", print_hash_value);
    transparent_crc(p_1218->g_630.s1, "p_1218->g_630.s1", print_hash_value);
    transparent_crc(p_1218->g_630.s2, "p_1218->g_630.s2", print_hash_value);
    transparent_crc(p_1218->g_630.s3, "p_1218->g_630.s3", print_hash_value);
    transparent_crc(p_1218->g_630.s4, "p_1218->g_630.s4", print_hash_value);
    transparent_crc(p_1218->g_630.s5, "p_1218->g_630.s5", print_hash_value);
    transparent_crc(p_1218->g_630.s6, "p_1218->g_630.s6", print_hash_value);
    transparent_crc(p_1218->g_630.s7, "p_1218->g_630.s7", print_hash_value);
    transparent_crc(p_1218->g_634.x, "p_1218->g_634.x", print_hash_value);
    transparent_crc(p_1218->g_634.y, "p_1218->g_634.y", print_hash_value);
    transparent_crc(p_1218->g_634.z, "p_1218->g_634.z", print_hash_value);
    transparent_crc(p_1218->g_634.w, "p_1218->g_634.w", print_hash_value);
    transparent_crc(p_1218->g_672.s0, "p_1218->g_672.s0", print_hash_value);
    transparent_crc(p_1218->g_672.s1, "p_1218->g_672.s1", print_hash_value);
    transparent_crc(p_1218->g_672.s2, "p_1218->g_672.s2", print_hash_value);
    transparent_crc(p_1218->g_672.s3, "p_1218->g_672.s3", print_hash_value);
    transparent_crc(p_1218->g_672.s4, "p_1218->g_672.s4", print_hash_value);
    transparent_crc(p_1218->g_672.s5, "p_1218->g_672.s5", print_hash_value);
    transparent_crc(p_1218->g_672.s6, "p_1218->g_672.s6", print_hash_value);
    transparent_crc(p_1218->g_672.s7, "p_1218->g_672.s7", print_hash_value);
    transparent_crc(p_1218->g_699.s0, "p_1218->g_699.s0", print_hash_value);
    transparent_crc(p_1218->g_699.s1, "p_1218->g_699.s1", print_hash_value);
    transparent_crc(p_1218->g_699.s2, "p_1218->g_699.s2", print_hash_value);
    transparent_crc(p_1218->g_699.s3, "p_1218->g_699.s3", print_hash_value);
    transparent_crc(p_1218->g_699.s4, "p_1218->g_699.s4", print_hash_value);
    transparent_crc(p_1218->g_699.s5, "p_1218->g_699.s5", print_hash_value);
    transparent_crc(p_1218->g_699.s6, "p_1218->g_699.s6", print_hash_value);
    transparent_crc(p_1218->g_699.s7, "p_1218->g_699.s7", print_hash_value);
    transparent_crc(p_1218->g_699.s8, "p_1218->g_699.s8", print_hash_value);
    transparent_crc(p_1218->g_699.s9, "p_1218->g_699.s9", print_hash_value);
    transparent_crc(p_1218->g_699.sa, "p_1218->g_699.sa", print_hash_value);
    transparent_crc(p_1218->g_699.sb, "p_1218->g_699.sb", print_hash_value);
    transparent_crc(p_1218->g_699.sc, "p_1218->g_699.sc", print_hash_value);
    transparent_crc(p_1218->g_699.sd, "p_1218->g_699.sd", print_hash_value);
    transparent_crc(p_1218->g_699.se, "p_1218->g_699.se", print_hash_value);
    transparent_crc(p_1218->g_699.sf, "p_1218->g_699.sf", print_hash_value);
    transparent_crc(p_1218->g_703.x, "p_1218->g_703.x", print_hash_value);
    transparent_crc(p_1218->g_703.y, "p_1218->g_703.y", print_hash_value);
    transparent_crc(p_1218->g_703.z, "p_1218->g_703.z", print_hash_value);
    transparent_crc(p_1218->g_703.w, "p_1218->g_703.w", print_hash_value);
    transparent_crc(p_1218->g_708.s0, "p_1218->g_708.s0", print_hash_value);
    transparent_crc(p_1218->g_708.s1, "p_1218->g_708.s1", print_hash_value);
    transparent_crc(p_1218->g_708.s2, "p_1218->g_708.s2", print_hash_value);
    transparent_crc(p_1218->g_708.s3, "p_1218->g_708.s3", print_hash_value);
    transparent_crc(p_1218->g_708.s4, "p_1218->g_708.s4", print_hash_value);
    transparent_crc(p_1218->g_708.s5, "p_1218->g_708.s5", print_hash_value);
    transparent_crc(p_1218->g_708.s6, "p_1218->g_708.s6", print_hash_value);
    transparent_crc(p_1218->g_708.s7, "p_1218->g_708.s7", print_hash_value);
    transparent_crc(p_1218->g_708.s8, "p_1218->g_708.s8", print_hash_value);
    transparent_crc(p_1218->g_708.s9, "p_1218->g_708.s9", print_hash_value);
    transparent_crc(p_1218->g_708.sa, "p_1218->g_708.sa", print_hash_value);
    transparent_crc(p_1218->g_708.sb, "p_1218->g_708.sb", print_hash_value);
    transparent_crc(p_1218->g_708.sc, "p_1218->g_708.sc", print_hash_value);
    transparent_crc(p_1218->g_708.sd, "p_1218->g_708.sd", print_hash_value);
    transparent_crc(p_1218->g_708.se, "p_1218->g_708.se", print_hash_value);
    transparent_crc(p_1218->g_708.sf, "p_1218->g_708.sf", print_hash_value);
    transparent_crc(p_1218->g_710.x, "p_1218->g_710.x", print_hash_value);
    transparent_crc(p_1218->g_710.y, "p_1218->g_710.y", print_hash_value);
    transparent_crc(p_1218->g_738.x, "p_1218->g_738.x", print_hash_value);
    transparent_crc(p_1218->g_738.y, "p_1218->g_738.y", print_hash_value);
    transparent_crc(p_1218->g_747, "p_1218->g_747", print_hash_value);
    transparent_crc(p_1218->g_758.s0, "p_1218->g_758.s0", print_hash_value);
    transparent_crc(p_1218->g_758.s1, "p_1218->g_758.s1", print_hash_value);
    transparent_crc(p_1218->g_758.s2, "p_1218->g_758.s2", print_hash_value);
    transparent_crc(p_1218->g_758.s3, "p_1218->g_758.s3", print_hash_value);
    transparent_crc(p_1218->g_758.s4, "p_1218->g_758.s4", print_hash_value);
    transparent_crc(p_1218->g_758.s5, "p_1218->g_758.s5", print_hash_value);
    transparent_crc(p_1218->g_758.s6, "p_1218->g_758.s6", print_hash_value);
    transparent_crc(p_1218->g_758.s7, "p_1218->g_758.s7", print_hash_value);
    transparent_crc(p_1218->g_758.s8, "p_1218->g_758.s8", print_hash_value);
    transparent_crc(p_1218->g_758.s9, "p_1218->g_758.s9", print_hash_value);
    transparent_crc(p_1218->g_758.sa, "p_1218->g_758.sa", print_hash_value);
    transparent_crc(p_1218->g_758.sb, "p_1218->g_758.sb", print_hash_value);
    transparent_crc(p_1218->g_758.sc, "p_1218->g_758.sc", print_hash_value);
    transparent_crc(p_1218->g_758.sd, "p_1218->g_758.sd", print_hash_value);
    transparent_crc(p_1218->g_758.se, "p_1218->g_758.se", print_hash_value);
    transparent_crc(p_1218->g_758.sf, "p_1218->g_758.sf", print_hash_value);
    transparent_crc(p_1218->g_759.x, "p_1218->g_759.x", print_hash_value);
    transparent_crc(p_1218->g_759.y, "p_1218->g_759.y", print_hash_value);
    transparent_crc(p_1218->g_781, "p_1218->g_781", print_hash_value);
    transparent_crc(p_1218->g_795, "p_1218->g_795", print_hash_value);
    transparent_crc(p_1218->g_804.s0, "p_1218->g_804.s0", print_hash_value);
    transparent_crc(p_1218->g_804.s1, "p_1218->g_804.s1", print_hash_value);
    transparent_crc(p_1218->g_804.s2, "p_1218->g_804.s2", print_hash_value);
    transparent_crc(p_1218->g_804.s3, "p_1218->g_804.s3", print_hash_value);
    transparent_crc(p_1218->g_804.s4, "p_1218->g_804.s4", print_hash_value);
    transparent_crc(p_1218->g_804.s5, "p_1218->g_804.s5", print_hash_value);
    transparent_crc(p_1218->g_804.s6, "p_1218->g_804.s6", print_hash_value);
    transparent_crc(p_1218->g_804.s7, "p_1218->g_804.s7", print_hash_value);
    transparent_crc(p_1218->g_804.s8, "p_1218->g_804.s8", print_hash_value);
    transparent_crc(p_1218->g_804.s9, "p_1218->g_804.s9", print_hash_value);
    transparent_crc(p_1218->g_804.sa, "p_1218->g_804.sa", print_hash_value);
    transparent_crc(p_1218->g_804.sb, "p_1218->g_804.sb", print_hash_value);
    transparent_crc(p_1218->g_804.sc, "p_1218->g_804.sc", print_hash_value);
    transparent_crc(p_1218->g_804.sd, "p_1218->g_804.sd", print_hash_value);
    transparent_crc(p_1218->g_804.se, "p_1218->g_804.se", print_hash_value);
    transparent_crc(p_1218->g_804.sf, "p_1218->g_804.sf", print_hash_value);
    transparent_crc(p_1218->g_813.s0, "p_1218->g_813.s0", print_hash_value);
    transparent_crc(p_1218->g_813.s1, "p_1218->g_813.s1", print_hash_value);
    transparent_crc(p_1218->g_813.s2, "p_1218->g_813.s2", print_hash_value);
    transparent_crc(p_1218->g_813.s3, "p_1218->g_813.s3", print_hash_value);
    transparent_crc(p_1218->g_813.s4, "p_1218->g_813.s4", print_hash_value);
    transparent_crc(p_1218->g_813.s5, "p_1218->g_813.s5", print_hash_value);
    transparent_crc(p_1218->g_813.s6, "p_1218->g_813.s6", print_hash_value);
    transparent_crc(p_1218->g_813.s7, "p_1218->g_813.s7", print_hash_value);
    transparent_crc(p_1218->g_813.s8, "p_1218->g_813.s8", print_hash_value);
    transparent_crc(p_1218->g_813.s9, "p_1218->g_813.s9", print_hash_value);
    transparent_crc(p_1218->g_813.sa, "p_1218->g_813.sa", print_hash_value);
    transparent_crc(p_1218->g_813.sb, "p_1218->g_813.sb", print_hash_value);
    transparent_crc(p_1218->g_813.sc, "p_1218->g_813.sc", print_hash_value);
    transparent_crc(p_1218->g_813.sd, "p_1218->g_813.sd", print_hash_value);
    transparent_crc(p_1218->g_813.se, "p_1218->g_813.se", print_hash_value);
    transparent_crc(p_1218->g_813.sf, "p_1218->g_813.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1218->g_829[i], "p_1218->g_829[i]", print_hash_value);

    }
    transparent_crc(p_1218->g_840, "p_1218->g_840", print_hash_value);
    transparent_crc(p_1218->g_864.x, "p_1218->g_864.x", print_hash_value);
    transparent_crc(p_1218->g_864.y, "p_1218->g_864.y", print_hash_value);
    transparent_crc(p_1218->g_864.z, "p_1218->g_864.z", print_hash_value);
    transparent_crc(p_1218->g_864.w, "p_1218->g_864.w", print_hash_value);
    transparent_crc(p_1218->g_885, "p_1218->g_885", print_hash_value);
    transparent_crc(p_1218->g_925.x, "p_1218->g_925.x", print_hash_value);
    transparent_crc(p_1218->g_925.y, "p_1218->g_925.y", print_hash_value);
    transparent_crc(p_1218->g_928.s0, "p_1218->g_928.s0", print_hash_value);
    transparent_crc(p_1218->g_928.s1, "p_1218->g_928.s1", print_hash_value);
    transparent_crc(p_1218->g_928.s2, "p_1218->g_928.s2", print_hash_value);
    transparent_crc(p_1218->g_928.s3, "p_1218->g_928.s3", print_hash_value);
    transparent_crc(p_1218->g_928.s4, "p_1218->g_928.s4", print_hash_value);
    transparent_crc(p_1218->g_928.s5, "p_1218->g_928.s5", print_hash_value);
    transparent_crc(p_1218->g_928.s6, "p_1218->g_928.s6", print_hash_value);
    transparent_crc(p_1218->g_928.s7, "p_1218->g_928.s7", print_hash_value);
    transparent_crc(p_1218->g_928.s8, "p_1218->g_928.s8", print_hash_value);
    transparent_crc(p_1218->g_928.s9, "p_1218->g_928.s9", print_hash_value);
    transparent_crc(p_1218->g_928.sa, "p_1218->g_928.sa", print_hash_value);
    transparent_crc(p_1218->g_928.sb, "p_1218->g_928.sb", print_hash_value);
    transparent_crc(p_1218->g_928.sc, "p_1218->g_928.sc", print_hash_value);
    transparent_crc(p_1218->g_928.sd, "p_1218->g_928.sd", print_hash_value);
    transparent_crc(p_1218->g_928.se, "p_1218->g_928.se", print_hash_value);
    transparent_crc(p_1218->g_928.sf, "p_1218->g_928.sf", print_hash_value);
    transparent_crc(p_1218->g_929.x, "p_1218->g_929.x", print_hash_value);
    transparent_crc(p_1218->g_929.y, "p_1218->g_929.y", print_hash_value);
    transparent_crc(p_1218->g_929.z, "p_1218->g_929.z", print_hash_value);
    transparent_crc(p_1218->g_929.w, "p_1218->g_929.w", print_hash_value);
    transparent_crc(p_1218->g_1010.x, "p_1218->g_1010.x", print_hash_value);
    transparent_crc(p_1218->g_1010.y, "p_1218->g_1010.y", print_hash_value);
    transparent_crc(p_1218->g_1010.z, "p_1218->g_1010.z", print_hash_value);
    transparent_crc(p_1218->g_1010.w, "p_1218->g_1010.w", print_hash_value);
    transparent_crc(p_1218->g_1021, "p_1218->g_1021", print_hash_value);
    transparent_crc(p_1218->g_1041.x, "p_1218->g_1041.x", print_hash_value);
    transparent_crc(p_1218->g_1041.y, "p_1218->g_1041.y", print_hash_value);
    transparent_crc(p_1218->g_1045, "p_1218->g_1045", print_hash_value);
    transparent_crc(p_1218->g_1047.x, "p_1218->g_1047.x", print_hash_value);
    transparent_crc(p_1218->g_1047.y, "p_1218->g_1047.y", print_hash_value);
    transparent_crc(p_1218->g_1047.z, "p_1218->g_1047.z", print_hash_value);
    transparent_crc(p_1218->g_1047.w, "p_1218->g_1047.w", print_hash_value);
    transparent_crc(p_1218->g_1050.s0, "p_1218->g_1050.s0", print_hash_value);
    transparent_crc(p_1218->g_1050.s1, "p_1218->g_1050.s1", print_hash_value);
    transparent_crc(p_1218->g_1050.s2, "p_1218->g_1050.s2", print_hash_value);
    transparent_crc(p_1218->g_1050.s3, "p_1218->g_1050.s3", print_hash_value);
    transparent_crc(p_1218->g_1050.s4, "p_1218->g_1050.s4", print_hash_value);
    transparent_crc(p_1218->g_1050.s5, "p_1218->g_1050.s5", print_hash_value);
    transparent_crc(p_1218->g_1050.s6, "p_1218->g_1050.s6", print_hash_value);
    transparent_crc(p_1218->g_1050.s7, "p_1218->g_1050.s7", print_hash_value);
    transparent_crc(p_1218->g_1052.s0, "p_1218->g_1052.s0", print_hash_value);
    transparent_crc(p_1218->g_1052.s1, "p_1218->g_1052.s1", print_hash_value);
    transparent_crc(p_1218->g_1052.s2, "p_1218->g_1052.s2", print_hash_value);
    transparent_crc(p_1218->g_1052.s3, "p_1218->g_1052.s3", print_hash_value);
    transparent_crc(p_1218->g_1052.s4, "p_1218->g_1052.s4", print_hash_value);
    transparent_crc(p_1218->g_1052.s5, "p_1218->g_1052.s5", print_hash_value);
    transparent_crc(p_1218->g_1052.s6, "p_1218->g_1052.s6", print_hash_value);
    transparent_crc(p_1218->g_1052.s7, "p_1218->g_1052.s7", print_hash_value);
    transparent_crc(p_1218->g_1097.s0, "p_1218->g_1097.s0", print_hash_value);
    transparent_crc(p_1218->g_1097.s1, "p_1218->g_1097.s1", print_hash_value);
    transparent_crc(p_1218->g_1097.s2, "p_1218->g_1097.s2", print_hash_value);
    transparent_crc(p_1218->g_1097.s3, "p_1218->g_1097.s3", print_hash_value);
    transparent_crc(p_1218->g_1097.s4, "p_1218->g_1097.s4", print_hash_value);
    transparent_crc(p_1218->g_1097.s5, "p_1218->g_1097.s5", print_hash_value);
    transparent_crc(p_1218->g_1097.s6, "p_1218->g_1097.s6", print_hash_value);
    transparent_crc(p_1218->g_1097.s7, "p_1218->g_1097.s7", print_hash_value);
    transparent_crc(p_1218->v_collective, "p_1218->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 71; i++)
            transparent_crc(p_1218->g_special_values[i + 71 * get_linear_group_id()], "p_1218->g_special_values[i + 71 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 71; i++)
            transparent_crc(p_1218->l_special_values[i], "p_1218->l_special_values[i]", print_hash_value);
    transparent_crc(p_1218->l_comm_values[get_linear_local_id()], "p_1218->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1218->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()], "p_1218->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
