// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,94,2 -l 2,47,2
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

__constant uint32_t permutations[10][188] = {
{181,8,21,116,36,107,182,24,100,28,54,14,150,117,56,169,125,53,128,6,33,114,39,37,82,129,151,15,59,186,185,34,11,154,27,68,178,64,136,84,138,13,16,0,45,145,115,63,155,148,92,168,10,179,87,139,52,43,173,89,61,69,30,120,158,112,48,167,23,94,109,67,60,143,137,77,133,126,25,157,106,12,131,101,72,172,142,170,156,160,152,57,176,20,9,105,149,32,31,175,2,17,47,86,85,119,166,35,163,62,171,76,93,184,40,121,78,153,102,97,108,177,111,22,147,49,81,146,38,134,70,161,83,5,183,140,91,144,187,29,42,71,162,4,66,7,55,51,73,18,124,88,98,80,180,135,19,90,44,165,110,58,122,127,113,159,141,164,50,118,99,130,123,46,26,104,96,75,132,65,79,174,95,103,74,1,3,41}, // permutation 0
{52,13,183,18,129,95,152,39,124,181,187,131,100,171,154,96,68,180,170,92,125,138,40,12,32,72,87,63,59,75,149,127,119,105,36,53,14,139,145,1,5,140,128,34,157,77,94,146,101,147,148,85,117,184,126,91,163,90,84,93,153,30,3,33,79,38,123,164,71,132,8,97,44,182,0,103,37,99,50,61,24,22,7,54,25,111,83,150,35,78,76,86,175,64,42,185,177,161,179,186,156,155,151,17,82,121,74,112,114,108,31,20,21,113,122,167,142,4,160,110,80,135,70,168,173,16,169,67,43,116,19,178,6,9,159,45,81,118,26,130,10,89,137,166,47,56,98,133,134,158,136,165,88,102,141,55,106,49,73,11,28,104,15,69,51,66,107,60,48,57,2,109,65,23,144,62,46,174,172,162,143,115,27,41,120,58,176,29}, // permutation 1
{13,136,82,181,69,55,160,40,131,134,7,165,94,119,104,59,88,75,154,37,140,144,17,54,1,125,153,79,0,27,168,45,52,97,176,64,14,65,85,21,178,121,3,50,105,99,86,11,8,56,112,126,179,120,118,150,164,91,142,162,100,159,175,113,63,156,35,51,57,48,172,147,183,117,149,4,129,143,83,145,23,87,60,177,70,132,89,182,174,170,111,152,73,46,26,180,166,18,186,127,67,122,9,110,22,76,133,95,78,28,148,107,130,96,43,151,92,155,124,24,68,137,20,173,58,81,33,123,41,61,84,102,157,171,187,93,184,158,108,44,38,169,163,19,29,138,16,141,36,109,47,31,161,77,42,6,101,80,115,62,66,72,135,116,106,146,34,167,5,10,185,15,25,30,49,90,12,114,139,39,2,32,103,53,71,98,74,128}, // permutation 2
{2,54,62,148,67,187,18,167,47,14,5,97,174,98,58,72,179,168,7,109,22,27,17,139,26,52,51,34,144,105,116,128,126,136,66,70,10,74,6,35,61,68,107,60,151,64,171,1,40,145,33,85,125,16,158,71,82,46,157,146,182,80,184,102,73,56,32,20,8,31,133,101,79,150,162,117,113,170,141,106,93,30,172,49,118,130,140,127,176,38,143,24,115,21,81,178,55,89,152,123,175,180,11,137,12,110,76,122,45,108,50,173,164,159,75,36,114,163,48,78,154,134,4,87,111,169,185,165,53,63,9,88,65,96,183,138,25,44,161,132,29,43,131,37,0,42,23,69,112,39,177,57,129,90,142,41,95,13,104,103,59,84,156,91,28,119,186,86,77,149,15,83,100,181,124,92,153,99,147,19,3,120,135,94,160,121,166,155}, // permutation 3
{50,173,49,140,60,94,76,174,110,99,69,72,64,51,80,90,162,9,23,83,67,156,15,77,155,57,118,157,175,96,8,47,35,39,27,151,21,108,59,63,145,112,181,73,172,119,133,158,97,22,122,89,48,88,148,176,81,116,70,65,132,101,159,161,103,84,142,141,32,160,177,180,129,131,100,33,165,102,61,10,114,68,13,30,98,115,12,11,105,20,163,182,44,7,169,26,152,25,38,138,24,18,36,16,144,149,124,2,187,42,186,143,75,62,127,184,106,92,54,66,82,128,120,37,95,183,55,170,29,117,56,43,6,52,111,154,46,31,164,147,3,179,134,185,74,93,113,109,123,126,125,146,166,14,1,167,71,121,86,58,136,153,91,41,150,171,104,85,45,139,34,168,40,5,53,135,107,137,0,19,28,4,178,78,79,130,17,87}, // permutation 4
{137,67,149,10,44,169,8,130,147,104,166,127,150,24,146,46,19,168,101,31,82,72,41,39,142,98,183,34,64,158,29,105,108,111,134,56,131,63,52,175,38,80,76,97,69,113,165,11,132,167,60,25,126,187,51,28,88,93,83,110,156,54,92,16,155,123,159,181,87,86,95,22,125,47,66,2,9,178,37,100,43,96,55,141,107,90,75,91,81,94,179,13,84,161,133,45,6,1,139,115,68,3,136,154,129,151,116,180,124,85,170,148,182,78,14,145,160,48,77,184,61,164,118,26,185,4,27,106,15,143,174,177,49,30,157,33,50,59,163,103,73,40,120,7,53,21,18,35,102,162,119,121,140,32,0,186,114,65,117,74,176,5,172,138,79,122,153,89,17,36,71,58,144,62,112,109,128,171,152,99,20,70,12,42,173,57,23,135}, // permutation 5
{20,28,98,140,149,183,48,57,6,4,157,30,130,37,69,135,147,78,155,106,79,159,126,92,76,35,144,64,3,44,86,80,169,177,122,26,70,41,8,39,95,5,83,14,165,161,104,174,153,52,151,107,17,154,158,116,101,84,139,120,133,2,61,88,58,173,72,175,18,87,15,166,182,93,46,131,127,124,170,168,56,43,33,13,109,145,47,85,21,180,181,53,121,90,67,141,34,50,142,91,27,132,81,125,100,134,73,12,103,62,138,11,51,97,96,123,31,10,117,112,152,89,40,1,105,179,71,118,82,162,186,128,49,22,16,0,42,167,148,19,45,66,32,163,146,115,77,29,160,129,137,178,176,187,9,185,143,110,164,25,54,23,119,136,184,63,171,65,55,59,114,113,74,156,38,7,108,94,36,24,172,75,111,60,150,99,68,102}, // permutation 6
{39,57,87,36,157,10,93,154,49,45,144,100,136,173,48,129,80,13,111,162,119,175,55,24,130,187,34,139,186,167,125,38,160,4,65,142,2,47,165,18,11,184,53,183,180,91,141,67,43,159,107,35,106,64,26,122,101,114,56,14,153,134,30,152,82,95,41,104,185,25,44,131,176,86,81,90,168,15,128,27,20,33,6,147,109,161,179,97,99,29,69,74,63,108,146,0,127,103,177,135,172,71,112,37,181,132,79,66,3,9,155,110,98,59,46,170,117,7,145,174,182,171,94,126,105,164,137,52,8,40,113,92,17,58,60,1,123,151,163,149,23,150,121,76,178,21,166,5,89,28,75,85,169,32,70,83,72,50,143,88,51,102,96,84,16,158,68,118,19,138,120,133,73,77,42,31,124,12,62,116,156,54,148,61,78,22,140,115}, // permutation 7
{186,173,138,171,130,5,48,172,70,143,112,114,38,155,62,21,36,81,142,75,139,116,161,145,157,140,103,72,147,4,39,42,181,134,12,47,149,78,176,80,8,45,164,10,31,20,162,54,23,156,91,32,150,18,128,106,34,33,60,6,0,113,104,9,17,94,158,87,165,135,110,167,185,175,168,59,111,56,122,11,90,96,3,126,27,123,52,133,51,152,57,77,127,25,183,117,58,174,170,14,86,160,53,66,16,159,163,118,178,69,40,41,177,179,76,30,85,50,71,107,99,101,44,26,24,43,146,46,97,73,95,166,15,49,88,109,55,84,28,63,98,2,35,79,37,124,141,169,102,89,132,65,148,74,29,125,131,100,13,136,105,7,182,67,129,154,82,119,22,61,19,64,93,151,180,144,184,137,83,108,1,120,187,121,115,153,92,68}, // permutation 8
{165,94,152,121,50,85,171,161,157,179,182,30,70,69,111,59,72,123,151,183,119,101,76,19,156,21,27,54,127,8,71,9,38,113,74,147,135,181,146,112,75,102,44,163,78,16,186,122,61,100,87,22,170,139,88,47,79,29,187,117,56,10,138,128,3,169,90,148,153,124,11,178,89,105,158,162,107,28,180,106,62,96,80,103,177,129,36,110,23,34,95,12,64,142,130,116,1,173,26,65,2,46,4,41,99,168,150,174,167,86,58,24,115,40,164,53,17,68,48,136,42,143,114,31,32,81,134,82,66,92,37,49,132,108,13,84,140,91,39,160,104,149,63,98,6,176,67,73,5,155,43,25,20,145,45,55,184,14,159,109,154,126,131,133,93,77,0,137,51,185,33,118,172,35,175,120,60,52,15,141,7,97,144,18,83,57,166,125} // permutation 9
};

// Seed: 2459006730

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_42;
    VECTOR(uint8_t, 8) g_43;
    volatile VECTOR(uint8_t, 16) g_44;
    int32_t g_97[9][1];
    uint8_t *g_288;
    uint64_t g_298;
    int8_t g_308;
    int16_t g_310;
    volatile VECTOR(int32_t, 16) g_314;
    volatile VECTOR(int32_t, 2) g_315;
    VECTOR(int32_t, 2) g_316;
    VECTOR(int32_t, 16) g_317;
    uint16_t g_319;
    uint16_t g_325;
    volatile int8_t g_340;
    volatile int8_t * volatile g_339;
    volatile int8_t * volatile *g_338;
    volatile VECTOR(int32_t, 4) g_354;
    volatile int32_t * volatile * volatile g_362;
    volatile int32_t * volatile * volatile * volatile g_363;
    VECTOR(uint32_t, 16) g_376;
    VECTOR(uint8_t, 16) g_399;
    int32_t *g_403;
    int32_t ** volatile g_402;
    int32_t g_490;
    VECTOR(uint64_t, 16) g_496;
    int8_t *g_525;
    int8_t **g_524;
    int32_t ** volatile g_526[8];
    int64_t *** volatile g_529;
    int64_t *g_531;
    int64_t **g_530;
    VECTOR(uint32_t, 4) g_550;
    VECTOR(uint16_t, 2) g_567;
    int32_t **g_580;
    int32_t ** volatile *g_579[2][6];
    VECTOR(int64_t, 2) g_613;
    volatile VECTOR(int16_t, 16) g_618;
    volatile VECTOR(int16_t, 8) g_620;
    VECTOR(int32_t, 16) g_629;
    uint64_t *g_785;
    uint64_t **g_784;
    VECTOR(int64_t, 2) g_788;
    VECTOR(int8_t, 2) g_795;
    VECTOR(uint16_t, 4) g_846;
    int64_t g_871;
    volatile VECTOR(int8_t, 16) g_872;
    uint32_t g_875[7][1];
    int64_t g_891;
    volatile uint64_t g_895;
    int8_t *g_954;
    uint32_t g_961;
    uint32_t *g_973;
    VECTOR(uint16_t, 4) g_976;
    int32_t g_982;
    int32_t g_1017;
    int32_t g_1022;
    int64_t **g_1053;
    VECTOR(uint16_t, 2) g_1056;
    VECTOR(uint16_t, 4) g_1071;
    volatile VECTOR(int64_t, 8) g_1087;
    uint32_t g_1088[8][2];
    volatile VECTOR(uint32_t, 4) g_1109;
    VECTOR(int16_t, 8) g_1121;
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
int64_t  func_1(struct S0 * p_1130);
int8_t  func_2(uint32_t  p_3, int64_t  p_4, uint32_t  p_5, int64_t  p_6, struct S0 * p_1130);
uint32_t  func_7(int32_t  p_8, uint32_t  p_9, uint16_t  p_10, uint8_t  p_11, uint64_t  p_12, struct S0 * p_1130);
int32_t  func_18(uint64_t  p_19, uint32_t  p_20, uint64_t  p_21, int32_t  p_22, struct S0 * p_1130);
uint8_t  func_33(uint32_t  p_34, uint32_t  p_35, int16_t  p_36, uint32_t  p_37, int32_t  p_38, struct S0 * p_1130);
int32_t * func_69(uint32_t  p_70, int32_t  p_71, uint8_t * p_72, int32_t * p_73, struct S0 * p_1130);
uint16_t  func_74(int64_t  p_75, int8_t  p_76, int32_t  p_77, uint16_t  p_78, int64_t  p_79, struct S0 * p_1130);
int32_t  func_84(uint64_t  p_85, struct S0 * p_1130);
int8_t * func_91(int8_t * p_92, uint8_t  p_93, uint16_t  p_94, uint32_t  p_95, struct S0 * p_1130);
uint32_t  func_284(uint8_t * p_285, int32_t  p_286, int64_t  p_287, struct S0 * p_1130);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1130->g_comm_values p_1130->g_43 p_1130->g_44 p_1130->l_comm_values p_1130->g_97 p_1130->g_42 p_1130->g_288 p_1130->g_308 p_1130->g_314 p_1130->g_315 p_1130->g_316 p_1130->g_317 p_1130->g_310 p_1130->g_319 p_1130->g_496 p_1130->g_399 p_1130->g_354 p_1130->g_524 p_1130->g_403 p_1130->g_402 p_1130->g_363 p_1130->g_362 p_1130->g_550 p_1130->g_567 p_1130->g_579 p_1130->g_525 p_1130->g_298 p_1130->g_580 p_1130->g_613 p_1130->g_618 p_1130->g_620 p_1130->g_629 p_1130->g_325 p_1130->g_338 p_1130->g_339 p_1130->g_340 p_1130->g_784 p_1130->g_788 p_1130->g_795 p_1130->g_785 p_1130->g_490 p_1130->g_846 p_1130->g_871 p_1130->g_872 p_1130->g_973 p_1130->g_961 p_1130->g_954 p_1130->g_1109
 * writes: p_1130->g_42 p_1130->g_97 p_1130->g_298 p_1130->g_308 p_1130->g_310 p_1130->g_319 p_1130->g_314 p_1130->g_490 p_1130->g_524 p_1130->g_530 p_1130->g_403 p_1130->g_550 p_1130->g_325 p_1130->g_399 p_1130->g_871 p_1130->g_875 p_1130->g_961
 */
int64_t  func_1(struct S0 * p_1130)
{ /* block id: 4 */
    uint16_t l_15 = 0x658EL;
    int8_t *l_41 = &p_1130->g_42;
    uint32_t l_47 = 1UL;
    uint32_t *l_827 = &l_47;
    int32_t ***l_863 = (void*)0;
    int32_t ****l_862 = &l_863;
    VECTOR(uint64_t, 16) l_866 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL);
    int64_t ***l_869[6] = {(void*)0,&p_1130->g_530,(void*)0,(void*)0,&p_1130->g_530,(void*)0};
    VECTOR(int16_t, 16) l_873 = (VECTOR(int16_t, 16))(0x6537L, (VECTOR(int16_t, 4))(0x6537L, (VECTOR(int16_t, 2))(0x6537L, 0x5968L), 0x5968L), 0x5968L, 0x6537L, 0x5968L, (VECTOR(int16_t, 2))(0x6537L, 0x5968L), (VECTOR(int16_t, 2))(0x6537L, 0x5968L), 0x6537L, 0x5968L, 0x6537L, 0x5968L);
    int32_t l_992 = 0x05BE0F8BL;
    int16_t l_1007[8];
    int32_t l_1009 = 8L;
    VECTOR(int32_t, 2) l_1019 = (VECTOR(int32_t, 2))(0x2E7A76B8L, 0x20A30852L);
    int8_t l_1023 = 0x55L;
    uint32_t l_1025 = 0x07A704D5L;
    uint64_t l_1036 = 1UL;
    uint32_t *l_1093 = (void*)0;
    uint32_t *l_1094 = (void*)0;
    uint32_t *l_1095 = (void*)0;
    uint32_t *l_1096 = (void*)0;
    uint32_t *l_1097 = (void*)0;
    uint32_t *l_1098 = (void*)0;
    uint32_t *l_1099[2][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    VECTOR(int32_t, 8) l_1100 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L));
    int32_t *l_1105 = &l_992;
    uint32_t l_1108[6][1][7] = {{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}},{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}},{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}},{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}},{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}},{{0x2F8319A1L,4294967295UL,4294967295UL,0x2F8319A1L,0x2F8319A1L,4294967295UL,4294967295UL}}};
    int64_t l_1116 = 8L;
    uint64_t l_1119 = 0UL;
    VECTOR(int16_t, 8) l_1120 = (VECTOR(int16_t, 8))(0x706BL, (VECTOR(int16_t, 4))(0x706BL, (VECTOR(int16_t, 2))(0x706BL, 0L), 0L), 0L, 0x706BL, 0L);
    VECTOR(int16_t, 4) l_1124 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
    int16_t l_1127 = (-9L);
    uint64_t l_1128 = 0UL;
    uint8_t *l_1129 = (void*)0;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1007[i] = 0x2E2BL;
    if ((func_2(((*l_827) = func_7((((safe_rshift_func_int8_t_s_s(p_1130->g_comm_values[p_1130->tid], p_1130->g_comm_values[p_1130->tid])) <= (((+l_15) == (safe_mul_func_int16_t_s_s((func_18(l_15, l_15, (safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1130->global_1_offset, get_global_id(1), 10), ((safe_lshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(func_33(p_1130->g_comm_values[p_1130->tid], (((safe_add_func_int8_t_s_s(((*l_41) = l_15), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(p_1130->g_43.s0155)).hi, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_1130->g_44.s10)))), 255UL, 255UL)).yywxywzz)).s43)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0x40L)).yxyyxyxx)).s34))).yxxx)).x)) | (safe_sub_func_int8_t_s_s(3L, (l_47 && 0x5BL)))) , 4294967287UL), l_47, p_1130->g_43.s5, p_1130->g_43.s3, p_1130), l_47)), (-1L))), p_1130->g_317.sd)) != p_1130->g_567.y))) == p_1130->g_43.s5), p_1130->g_316.x)), l_15, p_1130) , p_1130->g_788.x), l_15))) , l_47)) , l_15), l_47, l_47, l_15, p_1130->g_567.y, p_1130)), l_15, l_15, l_15, p_1130) && l_47))
    { /* block id: 421 */
        int64_t l_856 = 6L;
        int32_t l_857 = 0x3BB3FC74L;
        uint8_t *l_864 = (void*)0;
        uint8_t *l_865[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int64_t *l_870[6][9] = {{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871},{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871},{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871},{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871},{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871},{&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871,&p_1130->g_871}};
        uint32_t *l_874 = &p_1130->g_875[0][0];
        uint32_t l_876 = 4294967295UL;
        int64_t *l_877 = (void*)0;
        int64_t *l_878 = (void*)0;
        int8_t l_892 = 0x0FL;
        int i, j, k;
        (*p_1130->g_403) = (safe_lshift_func_int8_t_s_s(((((l_856 ^= 0x45677E60L) > l_857) < ((l_878 = (((safe_add_func_uint64_t_u_u(((((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x0E6915F19BB7352CL, 18446744073709551615UL)))).even == (safe_add_func_int8_t_s_s((&p_1130->g_579[1][1] == l_862), (p_1130->g_399.s7 &= FAKE_DIVERGE(p_1130->local_1_offset, get_local_id(1), 10))))) != ((VECTOR(uint64_t, 4))(l_866.sd7c1)).y) | ((safe_mul_func_int8_t_s_s((*p_1130->g_339), GROUP_DIVERGE(1, 1))) , ((p_1130->g_871 ^= (&p_1130->g_530 == l_869[0])) , ((((249UL > ((VECTOR(int8_t, 4))(p_1130->g_872.s9dca)).w) <= (((*l_874) = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_873.s867c4356508eb364)))).lo)).s1 & (~1UL))) , 2UL)) && l_15) , 0x1873C92AL)))) < 0x2138F116L), l_876)) , 1L) , l_877)) != p_1130->g_785)) <= 0x0AL), 3));
        for (p_1130->g_319 = 0; (p_1130->g_319 != 43); ++p_1130->g_319)
        { /* block id: 430 */
            int32_t l_881 = 0x5E3E4D2AL;
            int32_t l_888 = 1L;
            (1 + 1);
        }
        l_857 = (l_892 < 0L);
    }
    else
    { /* block id: 440 */
        int64_t *l_947 = (void*)0;
        int8_t *l_951 = (void*)0;
        int32_t l_962 = 0L;
        uint8_t **l_964 = &p_1130->g_288;
        int8_t l_998 = 2L;
        int32_t l_999 = 0x5CC14E35L;
        VECTOR(int32_t, 8) l_1010 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x11F4D195L), 0x11F4D195L), 0x11F4D195L, (-5L), 0x11F4D195L);
        int8_t ***l_1033 = (void*)0;
        VECTOR(int16_t, 2) l_1057 = (VECTOR(int16_t, 2))((-2L), 0x4078L);
        VECTOR(int8_t, 4) l_1063 = (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x21L), 0x21L);
        VECTOR(int16_t, 8) l_1072 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x3B05L), 0x3B05L), 0x3B05L, (-4L), 0x3B05L);
        int i;
        (*p_1130->g_403) = 0x0EB9949DL;
        for (l_15 = 0; (l_15 >= 39); ++l_15)
        { /* block id: 444 */
            uint16_t l_941 = 0x1FFEL;
            int64_t *l_948 = &p_1130->g_891;
            int32_t l_1001 = (-8L);
            int32_t l_1003 = 0x2D1261DEL;
            int32_t l_1005 = 0x604945C8L;
            int32_t l_1006 = 0x506B8AD6L;
            int32_t l_1018 = 0L;
            int32_t l_1020[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
            uint32_t l_1068 = 9UL;
            int i;
            (1 + 1);
        }
    }
    (*l_1105) = (safe_lshift_func_int16_t_s_u((((p_1130->g_550.x = ((*p_1130->g_973)++)) != ((((VECTOR(int32_t, 8))(l_1100.s11727367)).s5 , ((((*p_1130->g_403) = ((**p_1130->g_580) | ((safe_sub_func_uint8_t_u_u((((((*p_1130->g_785) & (l_1023 || 0x6666FE02L)) , ((-1L) ^ l_1007[6])) != (1L >= (safe_rshift_func_uint8_t_u_s(((((0xB215BF41L != 0x57164D97L) && 0x02L) | (**p_1130->g_402)) , l_866.sa), (*p_1130->g_954))))) && (**p_1130->g_784)), 0x77L)) , 0L))) , l_866.s9) <= p_1130->g_399.s5)) == 0UL)) & l_1009), GROUP_DIVERGE(1, 1)));
    (*p_1130->g_580) = &l_992;
    return p_1130->g_1109.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_354 p_1130->g_846 p_1130->g_784 p_1130->g_785 p_1130->g_298 p_1130->g_580 p_1130->g_403 p_1130->g_97 p_1130->g_490
 * writes: p_1130->g_325 p_1130->g_310 p_1130->g_97 p_1130->g_490 p_1130->g_403
 */
int8_t  func_2(uint32_t  p_3, int64_t  p_4, uint32_t  p_5, int64_t  p_6, struct S0 * p_1130)
{ /* block id: 409 */
    int32_t l_828 = (-1L);
    int32_t *l_829 = (void*)0;
    int32_t *l_830[7];
    int8_t l_831 = 8L;
    int32_t l_832 = 0L;
    int8_t l_833[6][10] = {{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L},{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L},{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L},{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L},{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L},{(-1L),0x1EL,1L,(-1L),(-3L),(-1L),0L,1L,(-9L),8L}};
    int16_t l_834 = 0x7213L;
    uint8_t l_835 = 255UL;
    uint64_t **l_838 = &p_1130->g_785;
    int32_t ***l_839 = &p_1130->g_580;
    int32_t ***l_841 = &p_1130->g_580;
    int32_t ****l_840[5][1] = {{&l_841},{&l_841},{&l_841},{&l_841},{&l_841}};
    int32_t ***l_842 = &p_1130->g_580;
    VECTOR(uint16_t, 16) l_845 = (VECTOR(uint16_t, 16))(0xBF48L, (VECTOR(uint16_t, 4))(0xBF48L, (VECTOR(uint16_t, 2))(0xBF48L, 0x7DA2L), 0x7DA2L), 0x7DA2L, 0xBF48L, 0x7DA2L, (VECTOR(uint16_t, 2))(0xBF48L, 0x7DA2L), (VECTOR(uint16_t, 2))(0xBF48L, 0x7DA2L), 0xBF48L, 0x7DA2L, 0xBF48L, 0x7DA2L);
    uint16_t *l_847 = &p_1130->g_325;
    int16_t *l_850[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_851 = 1UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_830[i] = &p_1130->g_490;
    ++l_835;
    (***l_839) &= ((p_1130->g_354.w != (p_1130->g_310 = (((*l_847) = (((((void*)0 != l_838) , l_839) == (l_842 = &p_1130->g_580)) < ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1130->global_0_offset, get_global_id(0), 10), GROUP_DIVERGE(0, 1))) <= (((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(l_845.s6e771716)).s12, ((VECTOR(uint16_t, 4))(p_1130->g_846.xwzz)).odd))).lo , p_4)))) | (safe_div_func_uint64_t_u_u((**p_1130->g_784), 0x6334EF98DEAD196FL))))) , l_851);
    for (p_1130->g_490 = 0; (p_1130->g_490 == (-19)); p_1130->g_490 = safe_sub_func_uint64_t_u_u(p_1130->g_490, 4))
    { /* block id: 417 */
        (**l_841) = (**l_841);
    }
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_550 p_1130->g_580 p_1130->g_403 p_1130->g_399
 * writes: p_1130->g_97
 */
uint32_t  func_7(int32_t  p_8, uint32_t  p_9, uint16_t  p_10, uint8_t  p_11, uint64_t  p_12, struct S0 * p_1130)
{ /* block id: 405 */
    uint32_t l_826 = 4294967295UL;
    (**p_1130->g_580) = ((+p_1130->g_550.z) , (safe_mul_func_uint8_t_u_u(l_826, l_826)));
    return p_1130->g_399.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_490 p_1130->g_43
 * writes:
 */
int32_t  func_18(uint64_t  p_19, uint32_t  p_20, uint64_t  p_21, int32_t  p_22, struct S0 * p_1130)
{ /* block id: 398 */
    for (p_20 = 0; (p_20 >= 7); p_20 = safe_add_func_int16_t_s_s(p_20, 9))
    { /* block id: 401 */
        return p_1130->g_490;
    }
    return p_1130->g_43.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_44 p_1130->g_43 p_1130->l_comm_values p_1130->g_comm_values p_1130->g_97 p_1130->g_42 p_1130->g_288 p_1130->g_308 p_1130->g_314 p_1130->g_315 p_1130->g_316 p_1130->g_317 p_1130->g_310 p_1130->g_319 p_1130->g_496 p_1130->g_399 p_1130->g_354 p_1130->g_524 p_1130->g_403 p_1130->g_402 p_1130->g_363 p_1130->g_362 p_1130->g_550 p_1130->g_567 p_1130->g_579 p_1130->g_525 p_1130->g_298 p_1130->g_580 p_1130->g_613 p_1130->g_618 p_1130->g_620 p_1130->g_629 p_1130->g_325 p_1130->g_338 p_1130->g_339 p_1130->g_340 p_1130->g_784 p_1130->g_788 p_1130->g_795 p_1130->g_785
 * writes: p_1130->g_97 p_1130->g_42 p_1130->g_298 p_1130->g_308 p_1130->g_310 p_1130->g_319 p_1130->g_314 p_1130->g_490 p_1130->g_524 p_1130->g_530 p_1130->g_403 p_1130->g_550 p_1130->g_325
 */
uint8_t  func_33(uint32_t  p_34, uint32_t  p_35, int16_t  p_36, uint32_t  p_37, int32_t  p_38, struct S0 * p_1130)
{ /* block id: 6 */
    VECTOR(uint16_t, 8) l_50 = (VECTOR(uint16_t, 8))(0xF9AAL, (VECTOR(uint16_t, 4))(0xF9AAL, (VECTOR(uint16_t, 2))(0xF9AAL, 1UL), 1UL), 1UL, 0xF9AAL, 1UL);
    VECTOR(uint16_t, 4) l_51 = (VECTOR(uint16_t, 4))(0x236FL, (VECTOR(uint16_t, 2))(0x236FL, 0x4A12L), 0x4A12L);
    int8_t *l_52 = &p_1130->g_42;
    uint8_t *l_57 = (void*)0;
    uint8_t *l_58 = (void*)0;
    uint8_t *l_59 = (void*)0;
    uint8_t *l_60 = (void*)0;
    uint8_t *l_61 = (void*)0;
    uint8_t *l_62 = (void*)0;
    uint8_t *l_63 = (void*)0;
    uint8_t *l_64 = (void*)0;
    uint8_t *l_65[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_66 = 0x1863D476L;
    VECTOR(int8_t, 8) l_67 = (VECTOR(int8_t, 8))(0x01L, (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 7L), 7L), 7L, 0x01L, 7L);
    VECTOR(int16_t, 2) l_68 = (VECTOR(int16_t, 2))(2L, 0x76E5L);
    VECTOR(uint8_t, 16) l_535 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x8EL), 0x8EL), 0x8EL, 254UL, 0x8EL, (VECTOR(uint8_t, 2))(254UL, 0x8EL), (VECTOR(uint8_t, 2))(254UL, 0x8EL), 254UL, 0x8EL, 254UL, 0x8EL);
    VECTOR(uint32_t, 2) l_551 = (VECTOR(uint32_t, 2))(0xD589B541L, 1UL);
    VECTOR(uint32_t, 4) l_552 = (VECTOR(uint32_t, 4))(0xC3A4338FL, (VECTOR(uint32_t, 2))(0xC3A4338FL, 0xAFDAA080L), 0xAFDAA080L);
    VECTOR(uint16_t, 2) l_565 = (VECTOR(uint16_t, 2))(1UL, 0x8CFDL);
    VECTOR(uint16_t, 16) l_566 = (VECTOR(uint16_t, 16))(0x2BB6L, (VECTOR(uint16_t, 4))(0x2BB6L, (VECTOR(uint16_t, 2))(0x2BB6L, 0x7883L), 0x7883L), 0x7883L, 0x2BB6L, 0x7883L, (VECTOR(uint16_t, 2))(0x2BB6L, 0x7883L), (VECTOR(uint16_t, 2))(0x2BB6L, 0x7883L), 0x2BB6L, 0x7883L, 0x2BB6L, 0x7883L);
    VECTOR(uint16_t, 2) l_568 = (VECTOR(uint16_t, 2))(0x90AEL, 1UL);
    VECTOR(int16_t, 8) l_569 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x68B9L), 0x68B9L), 0x68B9L, 1L, 0x68B9L);
    VECTOR(uint16_t, 2) l_572 = (VECTOR(uint16_t, 2))(0UL, 0x0F10L);
    int32_t **l_578 = &p_1130->g_403;
    int32_t ***l_577 = &l_578;
    uint32_t *l_585 = (void*)0;
    int32_t *l_586[8] = {&p_1130->g_490,&p_1130->g_490,&p_1130->g_490,&p_1130->g_490,&p_1130->g_490,&p_1130->g_490,&p_1130->g_490,&p_1130->g_490};
    uint8_t l_587 = 0UL;
    int8_t l_596 = 1L;
    uint16_t l_597 = 0x4C43L;
    int32_t l_598 = 1L;
    VECTOR(int16_t, 8) l_619 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7831L), 0x7831L), 0x7831L, 0L, 0x7831L);
    int16_t l_639 = 1L;
    VECTOR(int64_t, 4) l_786 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0L), 0L);
    VECTOR(int64_t, 4) l_789 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 7L), 7L);
    VECTOR(int64_t, 16) l_791 = (VECTOR(int64_t, 16))(0x35FB587909804E4EL, (VECTOR(int64_t, 4))(0x35FB587909804E4EL, (VECTOR(int64_t, 2))(0x35FB587909804E4EL, 0x240FE093E5200494L), 0x240FE093E5200494L), 0x240FE093E5200494L, 0x35FB587909804E4EL, 0x240FE093E5200494L, (VECTOR(int64_t, 2))(0x35FB587909804E4EL, 0x240FE093E5200494L), (VECTOR(int64_t, 2))(0x35FB587909804E4EL, 0x240FE093E5200494L), 0x35FB587909804E4EL, 0x240FE093E5200494L, 0x35FB587909804E4EL, 0x240FE093E5200494L);
    VECTOR(int64_t, 2) l_792 = (VECTOR(int64_t, 2))(1L, 0x2916F2A56C1D9998L);
    uint8_t l_820 = 0x69L;
    int i;
    if ((safe_rshift_func_int16_t_s_s((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(l_50.s2032)).even, ((VECTOR(uint16_t, 2))(l_51.zy))))).xyxyxyxy)).s3225345633466003)).sc <= (l_52 != l_52)), (+((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_66 ^= p_38), 4)), (((VECTOR(int8_t, 2))(0x74L, 4L)).odd >= ((VECTOR(int8_t, 4))(l_67.s5475)).y))) != ((VECTOR(int16_t, 4))(l_68.yyyy)).x)))))
    { /* block id: 8 */
        int32_t *l_90 = &l_66;
        int8_t *l_99 = &p_1130->g_42;
        int64_t *l_528[7][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int64_t **l_527 = &l_528[2][1][1];
        int i, j, k;
        l_90 = func_69((func_74(p_1130->g_44.s6, p_1130->g_43.s7, (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((0xB9CA2468L >= func_84((safe_lshift_func_uint16_t_u_s(p_1130->g_43.s1, ((-1L) != (((safe_add_func_uint32_t_u_u(((void*)0 == l_90), 1L)) , func_91(l_63, p_1130->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1130->tid, 188))], p_1130->g_comm_values[p_1130->tid], p_37, p_1130)) == l_99)))), p_1130)), 1)), p_36)), p_1130->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1130->tid, 188))], p_37, p_1130) , 0xD37137C2L), l_66, l_52, l_90, p_1130);
        (*p_1130->g_403) ^= l_67.s4;
        p_1130->g_530 = l_527;
    }
    else
    { /* block id: 264 */
        int32_t *l_532 = &l_66;
        l_532 = &l_66;
    }
    l_587 &= (l_66 = (0x8B3FC25CL ^ (safe_lshift_func_uint8_t_u_s(((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(255UL, 4UL)), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(0x89L, 0x69L, 0x48L, 0x42L, 250UL, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(l_535.sa9512987)).s23, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(255UL, 0xA8L, 246UL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(255UL, ((***l_577) = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*p_1130->g_363) == (void*)0), (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_35 = (safe_rshift_func_int8_t_s_s((((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1130->g_550.xxwz)).even)).yxxy, ((VECTOR(uint32_t, 2))(l_551.xy)).yyyy))).yxxyyyzwxyyywyzz, ((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(0x252E4C18L, 0xAA83599BL)), 0x4CD2C9C5L)).wxzxwxzxzwwxwzwx))))).s0b31, ((VECTOR(uint32_t, 4))(l_552.yyyx))))).x ^ ((safe_div_func_uint8_t_u_u(0x80L, GROUP_DIVERGE(0, 1))) > (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(l_565.yy)).yxyyyyxy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_566.sd85b4f84b7a62e57)).s29)), ((VECTOR(uint16_t, 4))(p_1130->g_567.yxxy)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_568.xy)).yyxyyyyyyxxyyxyy)).sd116)).even))))).yxyyyxyx))).s1356311417416713)).s5, ((VECTOR(int16_t, 16))(l_569.s6052110613714171)).se)) , ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_572.xyxy)).ywxyzwyy)).s2022254466114016)))).sd, (((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_577 != p_1130->g_579[1][1]), ((**l_578) || (p_1130->g_317.s3 | (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (safe_lshift_func_int8_t_s_u((((**l_578) , p_37) && p_37), (***l_577))))))))) <= p_1130->g_43.s1), p_38)) || 0x46319EE9L) , 1L))) != p_37) , 3L) | p_1130->g_316.y)) , (void*)0) != (void*)0) & (**l_578)), GROUP_DIVERGE(2, 1))), 0x5DL)), (**l_578))), 4)))), p_36))), FAKE_DIVERGE(p_1130->group_2_offset, get_group_id(2), 10))), (***l_577))), GROUP_DIVERGE(0, 1))) | FAKE_DIVERGE(p_1130->local_2_offset, get_local_id(2), 10)) , p_35), (**l_578))))), p_36))), 0xA2L, ((VECTOR(uint8_t, 4))(255UL)), 0x9BL)).s61, ((VECTOR(uint8_t, 2))(0x50L)), ((VECTOR(uint8_t, 2))(0x3CL))))), 0xCDL, 0x57L)).yxyyxzxyyywzyyxw))).s7b, ((VECTOR(uint8_t, 2))(0x97L)), ((VECTOR(uint8_t, 2))(0UL))))).even, ((VECTOR(uint8_t, 2))(0x5CL)), 255UL, 0x26L)).s3115166265217540, ((VECTOR(uint8_t, 16))(248UL))))).s08, ((VECTOR(uint8_t, 2))(8UL))))), 0x70L)).s7676321745456526, ((VECTOR(uint8_t, 16))(0xC3L)), ((VECTOR(uint8_t, 16))(0x45L))))).s6893))).lo, ((VECTOR(uint8_t, 2))(0x06L))))), 0x1BL, ((VECTOR(uint8_t, 4))(248UL)), 1UL)).s0 , (**l_578)) != p_1130->g_43.s7), p_34))));
    if (((+(*p_1130->g_403)) > ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((void*)0 == (*l_577)), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_598 ^= ((**l_578) & (((((***l_577) , 0x11L) || (safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_597 = (l_596 < (p_1130->g_comm_values[p_1130->tid] & (&l_57 != &l_61)))), p_38)) >= FAKE_DIVERGE(p_1130->local_2_offset, get_local_id(2), 10)), p_1130->g_316.y))) & p_1130->g_550.w) >= 0x25BCL))), p_37)), 0x3719L)), 0x181D2273L, p_37, ((VECTOR(int32_t, 4))(0x47D9BA2BL)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))(0L)), 1L, 0x3A7BC11EL)).s2f0d)), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x51E087BCL))))).lo)).lo))
    { /* block id: 273 */
        int16_t **l_601 = (void*)0;
        int32_t l_602 = (-1L);
        VECTOR(uint16_t, 2) l_621 = (VECTOR(uint16_t, 2))(0x8529L, 0x61A7L);
        uint8_t *l_624 = (void*)0;
        int i;
        (**l_577) = func_69((safe_rshift_func_int16_t_s_u((-1L), 7)), (p_1130->g_399.s3 == ((void*)0 != l_601)), func_91((*p_1130->g_524), l_602, (safe_mul_func_int16_t_s_s(p_1130->g_567.y, (!(safe_add_func_int8_t_s_s(p_38, p_38))))), p_35, p_1130), &l_602, p_1130);
        for (p_1130->g_298 = 0; (p_1130->g_298 <= 30); p_1130->g_298++)
        { /* block id: 277 */
            for (p_1130->g_310 = 0; (p_1130->g_310 == 8); ++p_1130->g_310)
            { /* block id: 280 */
                uint8_t *l_625 = (void*)0;
                uint32_t *l_626 = (void*)0;
                uint32_t *l_627 = (void*)0;
                uint32_t *l_628 = (void*)0;
                int32_t l_638 = 7L;
                int32_t l_640 = 0x74425F5AL;
                (*p_1130->g_580) = (*p_1130->g_580);
                l_640 |= ((l_638 = (safe_div_func_uint8_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_1130->g_613.xyyyxyxx)).odd)).z && ((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), ((*l_52) |= ((safe_div_func_int32_t_s_s(((**l_578) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1130->g_618.sbe80d9cde55330fd)).s06ca)).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_619.s0277)).hi)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1130->g_620.s13)), 0L, 1L)).zywzyywxwywxzzzw)).s5d))).xyyxxyyyyxxyyxyy)).s5e4c, ((VECTOR(uint16_t, 2))(l_621.yx)).xxxy))))).x), p_35)) <= (!0x2EE7L))))) <= (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))((-1L), 0x2F861F3E96C0184CL)).hi, (((p_1130->g_550.w = ((-10L) & (l_624 != l_625))) == ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 1L)).xxxxyxxy)), 0x331A8B88L, (((((p_34 == ((VECTOR(int32_t, 4))(p_1130->g_629.sed9c)).w) ^ ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-7L), (-1L))))).xyyx)).wxzzxzxzxwzwwzxw)).odd)).s2) , (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(p_37, l_638)) & l_638), FAKE_DIVERGE(p_1130->global_1_offset, get_global_id(1), 10))) <= p_38), p_1130->g_399.s4)), 3UL))) == p_38) , l_621.x), 0x0F451998L, ((VECTOR(int32_t, 4))(0x60AD9D8CL)), 0x757FD1ACL)).sd) || 9UL))))), l_639))) && p_35);
                if (l_602)
                    break;
            }
            (***l_577) = (~(p_1130->g_319 < l_621.x));
        }
        for (p_1130->g_325 = 0; (p_1130->g_325 > 27); ++p_1130->g_325)
        { /* block id: 293 */
            int8_t l_645[1][9] = {{0x23L,0L,0x23L,0x23L,0L,0x23L,0x23L,0L,0x23L}};
            uint16_t *l_652[7][2][6];
            int32_t l_653 = 0x444C2D83L;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_652[i][j][k] = (void*)0;
                }
            }
            (**p_1130->g_580) ^= (((safe_lshift_func_int16_t_s_s(l_602, 12)) == ((l_645[0][8] >= (6UL == GROUP_DIVERGE(2, 1))) , p_34)) || ((p_37 | ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x169BAE6AL, 0x6692E4C5L, 7L, ((((safe_rshift_func_int8_t_s_u(((**p_1130->g_338) <= ((((void*)0 != &p_1130->g_319) , (l_653 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_645[0][8], p_1130->g_567.x)), 0x44944866L)))) , 0x41L)), p_1130->g_550.y)) , p_34) > l_645[0][2]) , p_34), ((VECTOR(int32_t, 4))((-1L))), 5L, (-1L), 1L, 0x04C89D32L, p_36, ((VECTOR(int32_t, 2))(5L)), 0x2F243643L)))).s1) > l_602));
            if ((**p_1130->g_402))
            { /* block id: 296 */
                if ((**p_1130->g_402))
                    break;
                (**l_577) = (*l_578);
            }
            else
            { /* block id: 299 */
                return l_602;
            }
        }
        return p_36;
    }
    else
    { /* block id: 304 */
        (**p_1130->g_580) = p_36;
        if ((atomic_inc(&p_1130->l_atomic_input[35]) == 9))
        { /* block id: 307 */
            int8_t l_654[3][1][3] = {{{0x78L,0x78L,0x78L}},{{0x78L,0x78L,0x78L}},{{0x78L,0x78L,0x78L}}};
            int64_t l_655 = 7L;
            uint32_t l_656 = 4294967293UL;
            int i, j, k;
            if ((l_656 = (l_655 = l_654[0][0][2])))
            { /* block id: 310 */
                int32_t l_657 = 0x788C9311L;
                for (l_657 = 0; (l_657 != (-20)); l_657--)
                { /* block id: 313 */
                    int64_t l_660 = 0x5103084B7F3C8F75L;
                    int32_t l_702 = 0x0DD9C06DL;
                    int32_t *l_701 = &l_702;
                    int32_t *l_703[3][5][7] = {{{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702}},{{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702}},{{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702},{&l_702,(void*)0,(void*)0,&l_702,&l_702,&l_702,&l_702}}};
                    int32_t *l_704[7][7] = {{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0},{&l_702,&l_702,&l_702,(void*)0,&l_702,&l_702,(void*)0}};
                    int i, j, k;
                    if (l_660)
                    { /* block id: 314 */
                        uint8_t l_661 = 0xC8L;
                        int32_t l_662 = (-8L);
                        l_662 |= l_661;
                    }
                    else
                    { /* block id: 316 */
                        uint64_t l_663 = 7UL;
                        uint8_t l_664 = 0xFDL;
                        uint16_t l_665 = 0xF618L;
                        uint8_t l_666 = 0xC5L;
                        uint32_t l_669 = 0x34143295L;
                        int8_t l_670[3];
                        uint32_t l_671 = 1UL;
                        VECTOR(int16_t, 4) l_672 = (VECTOR(int16_t, 4))(0x165DL, (VECTOR(int16_t, 2))(0x165DL, 0x6F97L), 0x6F97L);
                        int16_t l_673[6] = {0L,0L,0L,0L,0L,0L};
                        VECTOR(int16_t, 4) l_674 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 2L), 2L);
                        uint32_t l_675 = 0xFD49CC11L;
                        uint8_t l_676 = 0xC1L;
                        VECTOR(int16_t, 4) l_677 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x7108L), 0x7108L);
                        VECTOR(int8_t, 16) l_678 = (VECTOR(int8_t, 16))(0x48L, (VECTOR(int8_t, 4))(0x48L, (VECTOR(int8_t, 2))(0x48L, 7L), 7L), 7L, 0x48L, 7L, (VECTOR(int8_t, 2))(0x48L, 7L), (VECTOR(int8_t, 2))(0x48L, 7L), 0x48L, 7L, 0x48L, 7L);
                        VECTOR(int8_t, 2) l_679 = (VECTOR(int8_t, 2))(0x02L, 0L);
                        VECTOR(int8_t, 8) l_680 = (VECTOR(int8_t, 8))(0x34L, (VECTOR(int8_t, 4))(0x34L, (VECTOR(int8_t, 2))(0x34L, 0x01L), 0x01L), 0x01L, 0x34L, 0x01L);
                        VECTOR(int8_t, 16) l_681 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x63L), 0x63L), 0x63L, (-9L), 0x63L, (VECTOR(int8_t, 2))((-9L), 0x63L), (VECTOR(int8_t, 2))((-9L), 0x63L), (-9L), 0x63L, (-9L), 0x63L);
                        VECTOR(int8_t, 2) l_682 = (VECTOR(int8_t, 2))(0x6CL, 0x3FL);
                        VECTOR(int8_t, 4) l_683 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x6BL), 0x6BL);
                        uint32_t l_684 = 0xE4217DB8L;
                        uint32_t l_685 = 4294967288UL;
                        VECTOR(int8_t, 4) l_686 = (VECTOR(int8_t, 4))(0x0BL, (VECTOR(int8_t, 2))(0x0BL, (-3L)), (-3L));
                        VECTOR(int8_t, 8) l_687 = (VECTOR(int8_t, 8))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x7BL), 0x7BL), 0x7BL, 0x0EL, 0x7BL);
                        VECTOR(int8_t, 4) l_688 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, (-1L)), (-1L));
                        int32_t l_689 = 9L;
                        uint64_t l_690 = 18446744073709551608UL;
                        uint32_t l_691 = 4294967295UL;
                        int8_t l_692 = 0x39L;
                        uint64_t l_693 = 9UL;
                        uint8_t l_694[4][10] = {{0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L},{0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L},{0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L},{0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L,6UL,0x09L,0x09L}};
                        uint8_t l_695 = 0xEAL;
                        uint8_t l_696 = 0x1AL;
                        uint8_t l_697 = 0x97L;
                        int32_t l_698 = 0x3E4E5297L;
                        uint64_t l_699 = 0xAF4063C3E7F4C0E9L;
                        int8_t l_700 = 0L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_670[i] = 5L;
                        l_665 |= (l_664 = (l_663 = 0x5B89267AL));
                        l_666--;
                        l_671 &= (l_670[2] = l_669);
                        l_700 = (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(0x1CF9L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(l_672.zxxwywwzzwxwxwzx)).saed3, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(l_673[5], (l_675 = (((VECTOR(int16_t, 2))(l_674.yw)).lo , 0x15F0L)), 1L, 8L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x7A66L, 0x10E8L, l_676, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(l_677.zxxxzzxyxwwzwwyz)).sd28d, ((VECTOR(int16_t, 2))(0x29E9L, 0x5BC8L)).xxyx))), 0x5851L)), 1L, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))((-7L), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_678.s94a1862aade02888)).sca, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_679.xxxyxyxy)).hi)).hi, ((VECTOR(int8_t, 4))(0x1BL, ((VECTOR(int8_t, 2))(0x36L, 0x7BL)), 0x20L)).hi))).yyxxyyxx)).s3177131421044410)).s27a5, (int8_t)((VECTOR(int8_t, 16))(l_680.s5425364633176627)).s0))).y, ((VECTOR(int8_t, 8))(l_681.sf1db46fc)), 1L, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_682.xyxyxxyy)), 0x27L, (l_654[1][0][2] |= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_683.yw)).xyxx)).x), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x1AL)).xxxxxyxyyxyyxyyy)).s10, ((VECTOR(int8_t, 4))(l_684, l_685, 4L, 0x32L)).lo))), 0x7AL, 0x64L, 0x6EL, 0x08L)).s04b5)).hi, ((VECTOR(int8_t, 2))(l_686.zx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_687.s5516)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1EL, 1L)).xyyx)))).s75))), ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_688.yzyx)).yzzxxwww, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x3BL, (-10L))), (-10L), ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))((-8L), (-2L), (l_689 , 8L), 0x15L, 1L, l_690, l_691, ((VECTOR(int8_t, 2))(0x08L)), 1L, 1L, (-1L), ((VECTOR(int8_t, 4))(0x2FL)))), ((VECTOR(int8_t, 16))((-5L)))))).s5, ((VECTOR(int8_t, 4))(0L)))).s5642037463465606)).hi)).s4, (-1L), l_692, 0x4CL, (-8L), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0x6AL)), l_693, l_694[1][4], ((VECTOR(int8_t, 2))(0x08L)), (-1L))).sff28, (int8_t)l_695))).ywxxxzyy, ((VECTOR(int8_t, 8))(0L))))), ((VECTOR(int8_t, 8))((-1L)))))).s67))).xyyxxxxyxxxxxyxy, ((VECTOR(int8_t, 16))((-6L)))))).sc, ((VECTOR(int8_t, 2))(0x6BL)), ((VECTOR(int8_t, 2))((-1L))), (-6L))).s21b0, (int8_t)l_696))).xyyyyxyzzyzxxxyy, ((VECTOR(int8_t, 16))(0x21L))))).se1))), ((VECTOR(int8_t, 2))(1L))))), 0x56L)), ((VECTOR(uint8_t, 4))(0UL))))), l_697, 0x2B13L, 0x3380L)).s3220))).hi)), ((VECTOR(int16_t, 2))(0x6CFAL)), ((VECTOR(int16_t, 2))(0x3446L))))), 0x7928L, 0x7BD8L))))), ((VECTOR(int16_t, 4))(0x514AL)), l_698, ((VECTOR(int16_t, 2))(0L)), 0x1638L, ((VECTOR(int16_t, 2))(0x48D9L)), 0x2F12L)).lo, ((VECTOR(int16_t, 8))((-8L)))))).s5676476620465113))), ((VECTOR(int16_t, 16))(0x19EFL)), ((VECTOR(int16_t, 16))(0x0DD6L))))))).sa , l_699);
                    }
                    l_704[3][0] = (l_703[1][3][6] = l_701);
                }
            }
            else
            { /* block id: 330 */
                int32_t l_705[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                uint16_t l_713[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_713[i] = 9UL;
                for (l_705[0] = 0; (l_705[0] >= 5); l_705[0]++)
                { /* block id: 333 */
                    int32_t l_708 = 0x4A992F65L;
                    int16_t l_709 = 0x378DL;
                    int32_t l_710 = (-6L);
                    uint32_t l_711 = 7UL;
                    int32_t l_712 = (-1L);
                    l_710 &= (l_708 , l_709);
                    l_712 &= l_711;
                }
                l_713[3]--;
                for (l_713[3] = (-30); (l_713[3] >= 41); l_713[3]++)
                { /* block id: 340 */
                    int32_t l_718 = (-1L);
                    uint16_t l_747 = 0UL;
                    int8_t l_748 = 3L;
                    int16_t l_749 = 1L;
                    int32_t *l_750[10] = {&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718};
                    int32_t *l_751[9][5][5] = {{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}},{{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0},{&l_718,&l_718,&l_718,(void*)0,(void*)0}}};
                    int i, j, k;
                    for (l_718 = 0; (l_718 >= (-25)); l_718--)
                    { /* block id: 343 */
                        int32_t l_722 = 5L;
                        int32_t *l_721[9][5] = {{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722,&l_722}};
                        int32_t *l_723 = (void*)0;
                        int32_t *l_724[7] = {&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722};
                        int32_t *l_725 = &l_722;
                        int32_t *l_726 = &l_722;
                        uint64_t l_727[10] = {18446744073709551606UL,18446744073709551615UL,0xCBA9490EE047B022L,18446744073709551615UL,18446744073709551606UL,18446744073709551606UL,18446744073709551615UL,0xCBA9490EE047B022L,18446744073709551615UL,18446744073709551606UL};
                        VECTOR(int32_t, 8) l_728 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5D72B639L), 0x5D72B639L), 0x5D72B639L, (-1L), 0x5D72B639L);
                        int64_t l_729[4][3][1];
                        uint32_t l_730[5];
                        uint32_t l_731[8] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
                        uint16_t l_732[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                        uint8_t l_733 = 250UL;
                        VECTOR(int8_t, 8) l_734 = (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 9L), 9L), 9L, 0x79L, 9L);
                        VECTOR(int8_t, 16) l_735 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x33L), 0x33L), 0x33L, (-5L), 0x33L, (VECTOR(int8_t, 2))((-5L), 0x33L), (VECTOR(int8_t, 2))((-5L), 0x33L), (-5L), 0x33L, (-5L), 0x33L);
                        VECTOR(int8_t, 2) l_736 = (VECTOR(int8_t, 2))(3L, 0x01L);
                        VECTOR(int8_t, 4) l_737 = (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 1L), 1L);
                        int64_t l_738[9][9][3] = {{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}},{{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L},{0L,0L,3L}}};
                        int8_t l_739 = (-1L);
                        uint8_t l_740 = 246UL;
                        uint8_t l_741 = 1UL;
                        uint16_t l_742[2][2][1] = {{{0x8293L},{0x8293L}},{{0x8293L},{0x8293L}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_729[i][j][k] = 0x53973A6DDDE21D78L;
                            }
                        }
                        for (i = 0; i < 5; i++)
                            l_730[i] = 4294967288UL;
                        l_724[6] = (l_723 = l_721[8][4]);
                        l_726 = l_725;
                        l_705[0] ^= ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(0x039BC9CDL, (-7L), l_727[7], 0x360F0EACL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_728.s37657161)))).s4, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x16L, 6L)), ((FAKE_DIVERGE(p_1130->local_2_offset, get_local_id(2), 10) , l_729[1][2][0]) , 1L), 0x35L, (-7L), (l_731[7] = (l_654[0][0][2] = l_730[4])), (l_732[5] , l_733), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_734.s5610)))))), 0x6DL, 0L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(l_735.s2de4)).even, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_736.xy)).yxyxyyxxyyyyyxxy, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(l_737.wy)).yxxy, ((VECTOR(int8_t, 16))(4L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-1L), (-7L), l_738[4][3][2], 0x48L, ((VECTOR(int8_t, 4))((l_739 , (l_654[0][0][2] = (l_740 , 0x12L))), 8L, 1L, 0x51L)))).even)).ywzwyxzz)))))).even)), 9L, ((VECTOR(int8_t, 4))(0x18L)), 0x39L, ((VECTOR(int8_t, 2))(1L)), l_741, 0x6AL, 7L)).s2dbd))).even, ((VECTOR(int8_t, 2))(0x30L)), ((VECTOR(int8_t, 2))(1L))))).yyyyxxyyyxxyyyxx))).s42))), 1L)).lo, ((VECTOR(int8_t, 8))(0x2DL))))).odd, ((VECTOR(uint8_t, 4))(0x10L))))).hi)), ((VECTOR(uint16_t, 2))(0x7903L))))), 0x44AB1A01L, 0x300A5D5AL)), 0x5F49B214L, 0x57000320L, 0x2AA53986L)), 1L, l_742[0][0][0], (-1L), 0x32680006L)).hi))).s3;
                    }
                    for (l_718 = 0; (l_718 < (-17)); --l_718)
                    { /* block id: 354 */
                        VECTOR(int32_t, 4) l_745 = (VECTOR(int32_t, 4))(0x17CB97D8L, (VECTOR(int32_t, 2))(0x17CB97D8L, 0L), 0L);
                        int8_t l_746 = 0x48L;
                        int i;
                        l_705[2] ^= ((VECTOR(int32_t, 16))(l_745.wxwxyzxzxyzxwwyz)).s4;
                        l_745.x &= l_746;
                    }
                    l_751[4][2][2] = (((l_747 &= 0x0D4CL) , l_748) , (l_749 , l_750[6]));
                }
                for (l_713[3] = 0; (l_713[3] > 29); ++l_713[3])
                { /* block id: 363 */
                    VECTOR(int32_t, 8) l_754 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x7E9BA19AL), 0x7E9BA19AL), 0x7E9BA19AL, 7L, 0x7E9BA19AL);
                    int32_t *l_774[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_775 = (void*)0;
                    int32_t *l_776[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    if (((VECTOR(int32_t, 8))(l_754.s44062770)).s2)
                    { /* block id: 364 */
                        uint8_t l_755 = 255UL;
                        int32_t l_757 = 1L;
                        int32_t *l_756 = &l_757;
                        int32_t l_758[4][7] = {{(-5L),4L,0x35C8018EL,4L,(-5L),(-5L),4L},{(-5L),4L,0x35C8018EL,4L,(-5L),(-5L),4L},{(-5L),4L,0x35C8018EL,4L,(-5L),(-5L),4L},{(-5L),4L,0x35C8018EL,4L,(-5L),(-5L),4L}};
                        uint8_t *l_760 = &l_755;
                        uint8_t **l_759 = &l_760;
                        uint8_t **l_761 = (void*)0;
                        uint8_t **l_762 = (void*)0;
                        int i, j;
                        l_705[0] = l_755;
                        l_756 = l_756;
                        (*l_756) |= l_758[0][2];
                        l_762 = (l_761 = l_759);
                    }
                    else
                    { /* block id: 370 */
                        int16_t l_763 = 0x405EL;
                        uint8_t l_764 = 253UL;
                        int32_t l_767 = (-1L);
                        uint32_t l_768 = 0xF1303593L;
                        int8_t l_771 = 3L;
                        int32_t *l_772[9][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
                        int32_t *l_773 = &l_767;
                        int i, j, k;
                        l_754.s7 |= ((l_764++) , (-5L));
                        ++l_768;
                        l_767 = l_771;
                        l_773 = l_772[1][0][0];
                    }
                    l_775 = l_774[1][0];
                    l_776[7] = (void*)0;
                }
            }
            unsigned int result = 0;
            int l_654_i0, l_654_i1, l_654_i2;
            for (l_654_i0 = 0; l_654_i0 < 3; l_654_i0++) {
                for (l_654_i1 = 0; l_654_i1 < 1; l_654_i1++) {
                    for (l_654_i2 = 0; l_654_i2 < 3; l_654_i2++) {
                        result += l_654[l_654_i0][l_654_i1][l_654_i2];
                    }
                }
            }
            result += l_655;
            result += l_656;
            atomic_add(&p_1130->l_special_values[35], result);
        }
        else
        { /* block id: 381 */
            (1 + 1);
        }
    }
    for (l_598 = (-9); (l_598 > (-22)); l_598--)
    { /* block id: 387 */
        VECTOR(uint8_t, 2) l_783 = (VECTOR(uint8_t, 2))(0x08L, 0x8BL);
        uint64_t **l_787 = &p_1130->g_785;
        int32_t l_790 = 0x001A5322L;
        int64_t **l_796[3][2];
        uint32_t *l_805 = (void*)0;
        uint32_t *l_806 = (void*)0;
        VECTOR(uint16_t, 4) l_819 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x939DL), 0x939DL);
        uint64_t l_821[4][6][10] = {{{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL}},{{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL}},{{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL}},{{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL},{0UL,0x826BA2BAB33E4386L,0x3E998F30EB4172AFL,1UL,0x826BA2BAB33E4386L,1UL,0x3E998F30EB4172AFL,0x826BA2BAB33E4386L,0UL,0UL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_796[i][j] = &p_1130->g_531;
        }
        (**p_1130->g_580) = ((((((**p_1130->g_402) <= (l_790 ^= ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_783.yy)).yxxy)).even)), 3UL)).yyyyxwzw)).s0, 1)) < (((p_1130->g_784 == (((VECTOR(int64_t, 4))(l_786.yzxz)).z , l_787)) < ((VECTOR(int64_t, 2))(p_1130->g_788.xx)).lo) && (**p_1130->g_580))), 7)) != ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(l_789.wyyw))))).y))) != p_1130->g_613.y) >= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_791.sf9)).yyxxyxxx)).s0, ((VECTOR(int64_t, 8))(l_792.yyxxxyxx)).s2, (-1L), 7L)))), ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((&p_1130->g_531 != ((safe_lshift_func_uint16_t_u_u(65531UL, (!(+((((*l_577) = ((p_36 && ((VECTOR(int8_t, 2))(p_1130->g_795.xy)).hi) , (*l_577))) == (void*)0) == l_783.y))))) , l_796[2][0])), 0x78FB2FA2DAD30777L, 1L, ((VECTOR(int64_t, 2))(0L)), p_37, 0x6F3889FDE245D8C9L, 0L)).s01)).xxxy, ((VECTOR(int64_t, 4))(0x0021FA4D966C7F71L)), ((VECTOR(int64_t, 4))(0L)))))))).odd)))).hi) >= p_37) >= 0x11BCC8A687DF9344L);
        l_790 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((p_36 & ((l_790 , ((**p_1130->g_784)++)) , (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((+((void*)0 != (*p_1130->g_580))), ((VECTOR(int64_t, 8))((((safe_add_func_uint32_t_u_u((--p_1130->g_550.x), p_35)) < ((**l_578) = (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((p_36 ^ (safe_div_func_uint32_t_u_u(((p_1130->g_629.sa , (p_37 >= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_819.wxyx)))).w)) >= (8UL >= l_790)), l_820))), (***l_577))) == p_38), l_821[3][0][1])) || 0x6321L), 255UL)), 1L)))) > (*p_1130->g_339)), 0x12A6D0B40B08E226L, ((VECTOR(int64_t, 2))(0x1E7C07376CA6F791L)), 0x025457B12998211AL, p_37, (-1L), 0L)), ((VECTOR(int64_t, 2))((-1L))), 8L, ((VECTOR(int64_t, 2))(0x2A878B9D40228263L)), 0x4F97BA828CAC99B1L, 0L)).s9c06)).odd)).hi || l_790))) < FAKE_DIVERGE(p_1130->group_2_offset, get_group_id(2), 10)), 4)), l_819.w));
        if (p_37)
            continue;
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_42 p_1130->g_comm_values p_1130->g_288 p_1130->g_97 p_1130->g_308 p_1130->g_314 p_1130->g_315 p_1130->g_316 p_1130->g_317 p_1130->g_310 p_1130->g_319 p_1130->g_496 p_1130->g_399 p_1130->g_354 p_1130->g_524 p_1130->g_403 p_1130->g_402
 * writes: p_1130->g_42 p_1130->g_97 p_1130->g_298 p_1130->g_308 p_1130->g_310 p_1130->g_319 p_1130->g_314 p_1130->g_490 p_1130->g_524
 */
int32_t * func_69(uint32_t  p_70, int32_t  p_71, uint8_t * p_72, int32_t * p_73, struct S0 * p_1130)
{ /* block id: 17 */
    int32_t ***l_482 = (void*)0;
    VECTOR(int16_t, 2) l_485 = (VECTOR(int16_t, 2))(0x6B60L, 0x22D6L);
    int8_t *l_523 = &p_1130->g_42;
    int8_t **l_522 = &l_523;
    int i;
    for (p_1130->g_42 = 0; (p_1130->g_42 <= (-26)); p_1130->g_42--)
    { /* block id: 20 */
        if ((atomic_inc(&p_1130->l_atomic_input[37]) == 4))
        { /* block id: 22 */
            uint32_t l_104[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            int32_t l_276 = 0x23DA9A9FL;
            int32_t *l_275 = &l_276;
            int32_t *l_277 = &l_276;
            uint8_t l_278[5] = {255UL,255UL,255UL,255UL,255UL};
            int16_t l_279 = 0x7067L;
            int i;
            if ((l_104[3] , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x78952EB5L, 0x57037A9EL)).xyxxyxyxyyyxyyyx)).sb1)).lo))
            { /* block id: 23 */
                uint32_t l_105 = 0x10A650A9L;
                int32_t l_106 = (-4L);
                int64_t l_107 = (-1L);
                int16_t l_163 = 0L;
                uint32_t l_164 = 0x155BC6D3L;
                if (((l_105 , 0x721BA6C3C0C88640L) , (((l_106 , ((VECTOR(int64_t, 2))((-5L), (-2L))).hi) , l_107) , ((VECTOR(int32_t, 4))(0x2479274DL, ((VECTOR(int32_t, 2))(0x199AA20CL, 1L)), (-6L))).x)))
                { /* block id: 24 */
                    int32_t l_108 = (-5L);
                    for (l_108 = 0; (l_108 >= 21); l_108 = safe_add_func_int32_t_s_s(l_108, 3))
                    { /* block id: 27 */
                        int32_t l_112 = 0x0B35339FL;
                        int32_t *l_111[1];
                        int32_t *l_113[6][1] = {{&l_112},{&l_112},{&l_112},{&l_112},{&l_112},{&l_112}};
                        int32_t *l_114 = (void*)0;
                        int32_t *l_115[6] = {&l_112,&l_112,&l_112,&l_112,&l_112,&l_112};
                        int32_t *l_116 = (void*)0;
                        int32_t *l_117 = &l_112;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_111[i] = &l_112;
                        l_117 = (l_116 = (l_115[1] = (l_114 = (l_113[4][0] = (l_111[0] = (void*)0)))));
                    }
                    for (l_108 = 0; (l_108 < (-23)); l_108 = safe_sub_func_int16_t_s_s(l_108, 9))
                    { /* block id: 37 */
                        uint32_t l_120 = 0x5A82D269L;
                        ++l_120;
                    }
                }
                else
                { /* block id: 40 */
                    int8_t l_123 = 0x1CL;
                    uint64_t l_147 = 0xC9B0828E8F0F39A9L;
                    int32_t l_161 = (-4L);
                    int32_t *l_160 = &l_161;
                    int32_t *l_162 = (void*)0;
                    if (l_123)
                    { /* block id: 41 */
                        VECTOR(int32_t, 16) l_124 = (VECTOR(int32_t, 16))(0x6C5E7E41L, (VECTOR(int32_t, 4))(0x6C5E7E41L, (VECTOR(int32_t, 2))(0x6C5E7E41L, 0x2390401AL), 0x2390401AL), 0x2390401AL, 0x6C5E7E41L, 0x2390401AL, (VECTOR(int32_t, 2))(0x6C5E7E41L, 0x2390401AL), (VECTOR(int32_t, 2))(0x6C5E7E41L, 0x2390401AL), 0x6C5E7E41L, 0x2390401AL, 0x6C5E7E41L, 0x2390401AL);
                        VECTOR(int32_t, 16) l_125 = (VECTOR(int32_t, 16))(0x47D00C9FL, (VECTOR(int32_t, 4))(0x47D00C9FL, (VECTOR(int32_t, 2))(0x47D00C9FL, 0x11C60118L), 0x11C60118L), 0x11C60118L, 0x47D00C9FL, 0x11C60118L, (VECTOR(int32_t, 2))(0x47D00C9FL, 0x11C60118L), (VECTOR(int32_t, 2))(0x47D00C9FL, 0x11C60118L), 0x47D00C9FL, 0x11C60118L, 0x47D00C9FL, 0x11C60118L);
                        int16_t l_126 = 0L;
                        uint16_t l_127[6] = {65535UL,0x401EL,65535UL,65535UL,0x401EL,65535UL};
                        int8_t l_130 = (-10L);
                        int8_t *l_129 = &l_130;
                        int8_t **l_128 = &l_129;
                        int8_t **l_131 = &l_129;
                        int i;
                        l_106 = ((VECTOR(int32_t, 4))(l_124.s71b0)).y;
                        l_106 |= ((VECTOR(int32_t, 2))(l_125.s14)).hi;
                        l_131 = ((l_125.s9 = l_126) , (l_127[0] , l_128));
                    }
                    else
                    { /* block id: 46 */
                        int8_t l_134 = 0x3BL;
                        int8_t *l_133 = &l_134;
                        int8_t **l_132[10] = {&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133};
                        int8_t **l_135 = &l_133;
                        int64_t l_136[8][5] = {{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL},{0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL,0x7B1AC98C3E2E3E2AL,0x7B1AC98C3E2E3E2AL,0x42EBA3859457360CL}};
                        int16_t l_137 = 6L;
                        int32_t l_138 = 0x0673044DL;
                        VECTOR(int8_t, 16) l_139 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                        int64_t l_140 = (-10L);
                        int32_t l_141[5][5] = {{(-1L),5L,(-1L),(-1L),5L},{(-1L),5L,(-1L),(-1L),5L},{(-1L),5L,(-1L),(-1L),5L},{(-1L),5L,(-1L),(-1L),5L},{(-1L),5L,(-1L),(-1L),5L}};
                        uint8_t l_142 = 0x0EL;
                        int64_t l_145 = 0x1757D9B7243D4091L;
                        uint8_t l_146 = 252UL;
                        int i, j;
                        l_135 = l_132[5];
                        ++l_142;
                        l_106 = l_145;
                        l_106 = l_146;
                    }
                    if (l_147)
                    { /* block id: 52 */
                        int16_t l_148 = 1L;
                        uint8_t l_149 = 0xF9L;
                        l_149 = (l_106 |= l_148);
                    }
                    else
                    { /* block id: 55 */
                        int32_t l_151 = 0x234A561BL;
                        int32_t *l_150 = &l_151;
                        uint32_t l_152 = 0x26FBF5F8L;
                        int32_t *l_153 = &l_151;
                        int32_t *l_154[2][5][4] = {{{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0}},{{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0},{&l_151,(void*)0,&l_151,(void*)0}}};
                        int32_t *l_155 = (void*)0;
                        uint32_t l_156 = 0x2C85B7FFL;
                        VECTOR(int32_t, 4) l_157 = (VECTOR(int32_t, 4))(0x768CE5CFL, (VECTOR(int32_t, 2))(0x768CE5CFL, (-7L)), (-7L));
                        VECTOR(int32_t, 16) l_158 = (VECTOR(int32_t, 16))(0x4E0FBC7DL, (VECTOR(int32_t, 4))(0x4E0FBC7DL, (VECTOR(int32_t, 2))(0x4E0FBC7DL, 0x3CF29791L), 0x3CF29791L), 0x3CF29791L, 0x4E0FBC7DL, 0x3CF29791L, (VECTOR(int32_t, 2))(0x4E0FBC7DL, 0x3CF29791L), (VECTOR(int32_t, 2))(0x4E0FBC7DL, 0x3CF29791L), 0x4E0FBC7DL, 0x3CF29791L, 0x4E0FBC7DL, 0x3CF29791L);
                        VECTOR(int32_t, 4) l_159 = (VECTOR(int32_t, 4))(0x73AF25C9L, (VECTOR(int32_t, 2))(0x73AF25C9L, 1L), 1L);
                        int i, j, k;
                        l_150 = (void*)0;
                        l_155 = (l_152 , (l_154[0][2][3] = l_153));
                        l_106 ^= l_156;
                        l_106 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_157.yzxz)).x, 0x49A6D21BL, ((VECTOR(int32_t, 4))(l_158.s9fd8)).x, ((VECTOR(int32_t, 4))(l_159.ywxx)), 0x4A65C328L)).s2;
                    }
                    l_162 = l_160;
                }
                ++l_164;
            }
            else
            { /* block id: 65 */
                int32_t l_167 = (-8L);
                int16_t l_168 = (-3L);
                uint8_t l_169 = 0xCEL;
                uint32_t l_170 = 0x7375CE82L;
                int16_t l_171 = 0x44C5L;
                int16_t l_172 = (-1L);
                uint32_t l_173 = 0x6CF93A13L;
                int64_t l_174 = (-3L);
                VECTOR(uint8_t, 4) l_175 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD7L), 0xD7L);
                VECTOR(uint8_t, 16) l_176 = (VECTOR(uint8_t, 16))(0xEEL, (VECTOR(uint8_t, 4))(0xEEL, (VECTOR(uint8_t, 2))(0xEEL, 0xDEL), 0xDEL), 0xDEL, 0xEEL, 0xDEL, (VECTOR(uint8_t, 2))(0xEEL, 0xDEL), (VECTOR(uint8_t, 2))(0xEEL, 0xDEL), 0xEEL, 0xDEL, 0xEEL, 0xDEL);
                int i;
                l_171 = (((l_167 , l_168) , (l_169 = 4294967295UL)) , l_170);
                l_172 = 0x6B872B59L;
                l_174 = l_173;
                if ((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_175.wzyzwzyw)))), ((VECTOR(uint8_t, 2))(l_176.s19)).yxyyxxxx))).s13)).lo , 0x5B434E9FL))
                { /* block id: 70 */
                    VECTOR(int32_t, 4) l_177 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-6L)), (-6L));
                    uint64_t l_178 = 0x007783C7BDA22505L;
                    uint32_t l_179 = 0x2151E35FL;
                    uint16_t l_180 = 2UL;
                    int16_t l_183 = 0x21E6L;
                    VECTOR(int32_t, 2) l_184 = (VECTOR(int32_t, 2))(0x701113C7L, 0x292DAE4FL);
                    VECTOR(int32_t, 16) l_185 = (VECTOR(int32_t, 16))(0x01AD3E3CL, (VECTOR(int32_t, 4))(0x01AD3E3CL, (VECTOR(int32_t, 2))(0x01AD3E3CL, 6L), 6L), 6L, 0x01AD3E3CL, 6L, (VECTOR(int32_t, 2))(0x01AD3E3CL, 6L), (VECTOR(int32_t, 2))(0x01AD3E3CL, 6L), 0x01AD3E3CL, 6L, 0x01AD3E3CL, 6L);
                    VECTOR(int32_t, 2) l_186 = (VECTOR(int32_t, 2))((-1L), 9L);
                    VECTOR(int32_t, 4) l_187 = (VECTOR(int32_t, 4))(0x552DC662L, (VECTOR(int32_t, 2))(0x552DC662L, 9L), 9L);
                    VECTOR(int32_t, 4) l_188 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7DAE833BL), 0x7DAE833BL);
                    VECTOR(int32_t, 4) l_189 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x1703F935L), 0x1703F935L);
                    VECTOR(int32_t, 2) l_190 = (VECTOR(int32_t, 2))(0x49452628L, 0x19ED955FL);
                    uint64_t l_191 = 0x0FF9DDB29366B1B6L;
                    VECTOR(int16_t, 8) l_192 = (VECTOR(int16_t, 8))(0x1848L, (VECTOR(int16_t, 4))(0x1848L, (VECTOR(int16_t, 2))(0x1848L, 9L), 9L), 9L, 0x1848L, 9L);
                    int16_t l_193 = 1L;
                    uint16_t l_194 = 0x0E43L;
                    int64_t l_195 = (-2L);
                    uint32_t l_196 = 0x00589329L;
                    uint32_t l_197[2];
                    int8_t l_198 = 0x64L;
                    VECTOR(int32_t, 4) l_199 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x48879A0FL), 0x48879A0FL);
                    uint64_t l_200 = 0xD332A9F6D975CF2BL;
                    int8_t l_201 = 1L;
                    int32_t *l_202 = (void*)0;
                    int32_t *l_203 = (void*)0;
                    int32_t *l_204 = (void*)0;
                    int32_t l_205[5][9] = {{(-1L),5L,(-7L),0x62A7540FL,5L,0x62A7540FL,(-7L),5L,(-1L)},{(-1L),5L,(-7L),0x62A7540FL,5L,0x62A7540FL,(-7L),5L,(-1L)},{(-1L),5L,(-7L),0x62A7540FL,5L,0x62A7540FL,(-7L),5L,(-1L)},{(-1L),5L,(-7L),0x62A7540FL,5L,0x62A7540FL,(-7L),5L,(-1L)},{(-1L),5L,(-7L),0x62A7540FL,5L,0x62A7540FL,(-7L),5L,(-1L)}};
                    uint32_t l_206 = 0xA2C95388L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_197[i] = 4294967286UL;
                    l_201 = (l_200 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_177.zy)).xxxyxyxx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_178, 0x5F11EF48L, 0L, ((l_179 , (l_180++)) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_183, 0x50EEE4F3L, ((VECTOR(int32_t, 4))(l_184.yyyx)), ((VECTOR(int32_t, 8))(l_185.s1b653921)), 5L, (-6L))).s34)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-9L), 0x7E599A2CL, 0L, 0x75F8867BL)).xzxwwzyz)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_186.xxyy)).yzyyxwyz)).s7317400430577676)).s5e, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_187.wzzyyyzy)))).s65))), ((VECTOR(int32_t, 8))(l_188.wwxzwwwx)).s0, 8L, 0L, 0x5F3E0A31L, 0x35E54AC5L, 0x2F3FA6EFL)))).hi)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_189.yzwz)).xzwzwxwyyxxxwyxw)).s62))))), ((VECTOR(int32_t, 2))(l_190.yx)), 0x46D9DE4CL, 1L)).se), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0C768C17L, 0x62E04F2EL)))), l_191, (-1L), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(l_192.s3026117660102576)).s65, (int16_t)((l_197[1] = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_193, 0x76F27FDAL, 0x62416D9BL, 4294967295UL)), ((GROUP_DIVERGE(0, 1) , 1UL) , (l_196 = (l_194 , l_195))), 0xA70242F9L, 5UL, 1UL)).s7) , 1L)))), l_198, 0x58EEL, l_199.w, 0x2035L, 0L, (-8L))).s0167230175515550, ((VECTOR(int16_t, 16))(0L)), ((VECTOR(int16_t, 16))((-1L)))))).s94, ((VECTOR(uint16_t, 2))(65535UL))))), ((VECTOR(int32_t, 2))(0x66599F55L)), (-1L), 0x3B0A3500L, 0L)).s82)).xxxxyxyy))).s61)).odd);
                    l_204 = (l_203 = l_202);
                    l_206 = l_205[0][5];
                }
                else
                { /* block id: 79 */
                    uint64_t l_207 = 0x5E34AC4052702D28L;
                    uint32_t l_208 = 0xA109FDD9L;
                    int32_t l_209 = 0x75C477D8L;
                    uint32_t l_210 = 3UL;
                    int64_t l_211[7];
                    uint32_t l_212[6];
                    VECTOR(int32_t, 2) l_213 = (VECTOR(int32_t, 2))(0L, (-9L));
                    uint64_t l_214 = 18446744073709551607UL;
                    VECTOR(int8_t, 2) l_215 = (VECTOR(int8_t, 2))(2L, 0x54L);
                    int64_t l_216 = 0x7DAD2A3BAFCB3562L;
                    uint16_t l_217 = 1UL;
                    int8_t l_218 = 1L;
                    uint16_t l_219 = 65535UL;
                    uint32_t l_220 = 4294967295UL;
                    VECTOR(int8_t, 16) l_221 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int8_t, 2))((-3L), (-1L)), (VECTOR(int8_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
                    uint32_t l_222[7][1] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
                    uint8_t l_223 = 0UL;
                    int32_t l_224 = (-1L);
                    uint32_t l_225[1][2];
                    int16_t l_226[1][6][3] = {{{0x05FFL,0x05FFL,0x05FFL},{0x05FFL,0x05FFL,0x05FFL},{0x05FFL,0x05FFL,0x05FFL},{0x05FFL,0x05FFL,0x05FFL},{0x05FFL,0x05FFL,0x05FFL},{0x05FFL,0x05FFL,0x05FFL}}};
                    VECTOR(int32_t, 2) l_227 = (VECTOR(int32_t, 2))(0x2E64E466L, (-1L));
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_211[i] = 1L;
                    for (i = 0; i < 6; i++)
                        l_212[i] = 0UL;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_225[i][j] = 3UL;
                    }
                    l_226[0][4][2] = ((((l_208 = l_207) , (((l_210 = l_209) , FAKE_DIVERGE(p_1130->local_1_offset, get_local_id(1), 10)) , l_211[0])) , (((VECTOR(int16_t, 2))(0x26B5L, 0L)).even , ((VECTOR(int8_t, 16))((l_212[0] = (-1L)), (-1L), 0x2CL, (l_224 = (l_223 = ((((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x485CD221L, ((VECTOR(int32_t, 2))(0x4982E622L, (-7L))), 0L)).zwxzwwzyyxzzyxwy)))).sab, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_213.xxxyyyxx)).hi)).wxwwywyyyzyyxzyy)).hi)).s43))).lo , l_214) , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_215.xyyxyxxx)), (l_218 = (l_217 |= l_216)), (l_220 |= l_219), 0x23L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_221.s5c9f24154fc8dd5c)).even)).s2, ((l_171 &= 0x2C27L) , l_222[3][0]), ((VECTOR(int8_t, 2))(0x6AL)), 0x16L)).s5))), ((VECTOR(int8_t, 4))(6L)), 0x51L, 0x07L, ((VECTOR(int8_t, 4))(7L)), 0x31L, 0x4DL)).sa)) , l_225[0][1]);
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_227.yyxyxxyyxyxxxxxy)).s152d)).xwwywzxxywwzwyyz)).sc)
                    { /* block id: 90 */
                        int8_t l_228 = (-1L);
                        uint8_t l_229[8][5][3] = {{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}},{{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL},{0x12L,0UL,9UL}}};
                        uint8_t l_230 = 0UL;
                        uint64_t l_231 = 9UL;
                        uint32_t l_232 = 0xCCC3BF84L;
                        VECTOR(int8_t, 8) l_233 = (VECTOR(int8_t, 8))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, (-1L)), (-1L)), (-1L), 0x78L, (-1L));
                        VECTOR(int8_t, 8) l_234 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L);
                        VECTOR(uint8_t, 8) l_235 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x6FL), 0x6FL), 0x6FL, 255UL, 0x6FL);
                        VECTOR(uint8_t, 2) l_236 = (VECTOR(uint8_t, 2))(0x62L, 0x71L);
                        uint16_t l_237 = 0xBD65L;
                        VECTOR(uint8_t, 8) l_238 = (VECTOR(uint8_t, 8))(0x53L, (VECTOR(uint8_t, 4))(0x53L, (VECTOR(uint8_t, 2))(0x53L, 247UL), 247UL), 247UL, 0x53L, 247UL);
                        VECTOR(uint8_t, 2) l_239 = (VECTOR(uint8_t, 2))(0UL, 0x12L);
                        uint32_t l_240 = 4294967287UL;
                        int64_t l_241 = 7L;
                        uint32_t l_242 = 4294967295UL;
                        int i, j, k;
                        l_227.x = ((((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))((((FAKE_DIVERGE(p_1130->global_1_offset, get_global_id(1), 10) , (l_221.sc = l_228)) , l_229[4][1][0]) , 8L), (l_230 , (l_232 &= (l_221.s6 ^= l_231))), ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_233.s5777)).even)), 0x19L, 0L)).yxwxxywx, (int8_t)6L))), ((VECTOR(int8_t, 4))(l_234.s1666)), 0L, 9L)).s5a03, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(255UL, 0x24L, 0x15L, 1UL)).zyzzzxzx)))).hi)).hi))).yyxy, ((VECTOR(uint8_t, 4))(l_235.s6263)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_236.yy)), ((VECTOR(uint8_t, 2))(1UL, 0UL)), l_237, ((VECTOR(uint8_t, 2))(l_238.s06)), 4UL)).odd))).zzzwzwxy, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(0UL, 247UL)), 1UL)).odd)), ((VECTOR(uint8_t, 8))(l_239.yxyxyxxx)).s15))).yyxyyyyx))).lo))).y , l_240) , 0x16816D0BL);
                        l_227.x = (l_209 = l_241);
                        --l_242;
                    }
                    else
                    { /* block id: 98 */
                        VECTOR(uint32_t, 16) l_245 = (VECTOR(uint32_t, 16))(0xE36697B6L, (VECTOR(uint32_t, 4))(0xE36697B6L, (VECTOR(uint32_t, 2))(0xE36697B6L, 0xF128CB9AL), 0xF128CB9AL), 0xF128CB9AL, 0xE36697B6L, 0xF128CB9AL, (VECTOR(uint32_t, 2))(0xE36697B6L, 0xF128CB9AL), (VECTOR(uint32_t, 2))(0xE36697B6L, 0xF128CB9AL), 0xE36697B6L, 0xF128CB9AL, 0xE36697B6L, 0xF128CB9AL);
                        VECTOR(uint32_t, 2) l_246 = (VECTOR(uint32_t, 2))(0x455FA8C2L, 1UL);
                        VECTOR(uint16_t, 8) l_247 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL);
                        VECTOR(int16_t, 16) l_248 = (VECTOR(int16_t, 16))(0x459DL, (VECTOR(int16_t, 4))(0x459DL, (VECTOR(int16_t, 2))(0x459DL, 0x4C39L), 0x4C39L), 0x4C39L, 0x459DL, 0x4C39L, (VECTOR(int16_t, 2))(0x459DL, 0x4C39L), (VECTOR(int16_t, 2))(0x459DL, 0x4C39L), 0x459DL, 0x4C39L, 0x459DL, 0x4C39L);
                        VECTOR(uint16_t, 2) l_249 = (VECTOR(uint16_t, 2))(0x96BAL, 1UL);
                        int8_t l_250 = (-3L);
                        VECTOR(uint16_t, 16) l_251 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xB68FL), 0xB68FL), 0xB68FL, 65533UL, 0xB68FL, (VECTOR(uint16_t, 2))(65533UL, 0xB68FL), (VECTOR(uint16_t, 2))(65533UL, 0xB68FL), 65533UL, 0xB68FL, 65533UL, 0xB68FL);
                        VECTOR(uint16_t, 4) l_252 = (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 4UL), 4UL);
                        VECTOR(uint16_t, 8) l_253 = (VECTOR(uint16_t, 8))(0xB648L, (VECTOR(uint16_t, 4))(0xB648L, (VECTOR(uint16_t, 2))(0xB648L, 0x68A1L), 0x68A1L), 0x68A1L, 0xB648L, 0x68A1L);
                        int32_t l_254 = 0x63778AA8L;
                        uint8_t l_255 = 0x03L;
                        uint16_t l_256 = 1UL;
                        VECTOR(uint32_t, 4) l_257 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0xE9A8AC3DL), 0xE9A8AC3DL);
                        int64_t l_258 = 0x795D60C054E6A2DAL;
                        int16_t l_259 = 0x2222L;
                        int8_t l_260[2];
                        int8_t *l_262 = &l_260[0];
                        int8_t **l_261 = &l_262;
                        int8_t **l_263[9] = {&l_262,&l_262,&l_262,&l_262,&l_262,&l_262,&l_262,&l_262,&l_262};
                        uint8_t *l_265 = &l_255;
                        uint8_t **l_264 = &l_265;
                        uint8_t **l_266 = &l_265;
                        uint8_t **l_267 = (void*)0;
                        uint8_t **l_268[5] = {&l_265,&l_265,&l_265,&l_265,&l_265};
                        uint8_t **l_269 = &l_265;
                        int8_t **l_270 = &l_262;
                        int8_t **l_271 = &l_262;
                        uint8_t l_272 = 0xE5L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_260[i] = 0x5BL;
                        l_263[1] = ((l_258 = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x9C0A555EL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_245.scbe982e7)))), 4294967295UL, 0xFBC9ECE6L, ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(0x921C0D93L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))(l_246.yxyx)), ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_247.s04)).yxyxxxxx)).s2173055101576050)).s35da, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(0UL, 0x462CL, 65535UL, 65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(l_248.s55)).xyyyyyxx))).s44, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(l_249.xyyxyxyx))))).s7364766062550560)).s27))))), 0xDF3CL, 0x6CF9L, l_250, ((VECTOR(uint16_t, 4))(l_251.s63ad)), ((VECTOR(uint16_t, 2))(l_252.yz)), 65535UL)))).sed, ((VECTOR(uint16_t, 16))(l_253.s0666211606240162)).s64))).xxxy)))))).hi)), (l_225[0][1] = l_254), 5UL, l_255, 0xA45FE1D2L, 1UL, 0x65BBCBE8L, GROUP_DIVERGE(1, 1), 0UL, 0xB5DBAF20L, (l_246.y &= ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 4))((l_222[3][0] = l_256), 0xCEAFF0F1L, 0x0DDCE62AL, 0x4237FCBAL)), ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(l_257.zxxyzzyx)).hi, (uint32_t)6UL)))))).wzyxwwxy)).lo, (uint32_t)l_258))).y), 4294967295UL, 4294967295UL, 0x6BF2B0ECL)).s60, ((VECTOR(uint32_t, 2))(4294967289UL))))).yyxx)).hi)).xyxyxxxxxyxyxyxx))).sd, 0xFED2C084L, ((VECTOR(uint32_t, 2))(0x95EC47EEL)), 0x8DCDA376L)).hi)).s3455425143171702)).sbc, ((VECTOR(uint32_t, 2))(0x3D4B22B3L))))), 1UL, 0x7874170AL)).w , l_259) , l_260[0])) , l_261);
                        l_269 = (l_268[1] = (l_267 = (l_264 = (l_266 = l_264))));
                        l_271 = l_270;
                        l_272++;
                    }
                }
            }
            l_277 = l_275;
            l_279 = l_278[1];
            unsigned int result = 0;
            int l_104_i0;
            for (l_104_i0 = 0; l_104_i0 < 9; l_104_i0++) {
                result += l_104[l_104_i0];
            }
            result += l_276;
            int l_278_i0;
            for (l_278_i0 = 0; l_278_i0 < 5; l_278_i0++) {
                result += l_278[l_278_i0];
            }
            result += l_279;
            atomic_add(&p_1130->l_special_values[37], result);
        }
        else
        { /* block id: 116 */
            (1 + 1);
        }
        return &p_1130->g_97[1][0];
    }
    for (p_1130->g_42 = 0; (p_1130->g_42 >= 26); p_1130->g_42++)
    { /* block id: 123 */
        int16_t *l_486[8][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int32_t l_487[6][5] = {{7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L},{7L,7L,7L,7L,7L}};
        int16_t *l_489[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int16_t **l_488 = &l_489[3][0];
        VECTOR(int64_t, 8) l_491 = (VECTOR(int64_t, 8))(0x737A84487C8DBF9AL, (VECTOR(int64_t, 4))(0x737A84487C8DBF9AL, (VECTOR(int64_t, 2))(0x737A84487C8DBF9AL, 0x1B80C791EE181A45L), 0x1B80C791EE181A45L), 0x1B80C791EE181A45L, 0x737A84487C8DBF9AL, 0x1B80C791EE181A45L);
        int i, j, k;
        l_491.s6 |= (((p_1130->g_comm_values[p_1130->tid] < func_284(p_1130->g_288, (*p_73), p_70, p_1130)) >= (l_482 == (void*)0)) | ((safe_lshift_func_int16_t_s_u((p_1130->g_490 = ((((VECTOR(int16_t, 2))(l_485.xx)).hi , l_486[0][4][1]) != ((*l_488) = (l_487[1][0] , (void*)0)))), l_487[1][0])) > 18446744073709551615UL));
        if ((*p_73))
            break;
    }
    if ((*p_73))
    { /* block id: 248 */
        uint16_t l_499 = 2UL;
        int32_t l_510[3][2][7] = {{{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L},{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L}},{{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L},{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L}},{{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L},{(-3L),6L,0x6AEC2192L,0x4B948803L,6L,0x4B948803L,0x6AEC2192L}}};
        int8_t *l_521 = &p_1130->g_42;
        int8_t **l_520[5][4] = {{&l_521,(void*)0,&l_521,&l_521},{&l_521,(void*)0,&l_521,&l_521},{&l_521,(void*)0,&l_521,&l_521},{&l_521,(void*)0,&l_521,&l_521},{&l_521,(void*)0,&l_521,&l_521}};
        int8_t ***l_519[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_519[i] = &l_520[2][1];
        (*p_73) = (safe_lshift_func_uint8_t_u_u(((p_1130->g_314.sa , (((p_1130->g_308 ^= (safe_div_func_int8_t_s_s(((((VECTOR(uint64_t, 16))(p_1130->g_496.s20ab6b7d62571e29)).sf != 0x17C83ADDE6BAB463L) , (safe_rshift_func_uint16_t_u_u((FAKE_DIVERGE(p_1130->local_0_offset, get_local_id(0), 10) > l_499), 3))), (*p_72)))) | (p_1130->g_399.s9 == (safe_sub_func_uint16_t_u_u(0x91B1L, p_1130->g_314.s9)))) & (((1L == (FAKE_DIVERGE(p_1130->global_2_offset, get_global_id(2), 10) != (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_510[1][1][2] ^= (safe_add_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (l_499 | p_1130->g_316.x))) && 0UL) ^ p_70), p_1130->g_317.s7))), l_499)), 0x8020L)))) != 0xCAF5BA08L) == p_1130->g_496.s9))) && p_70), FAKE_DIVERGE(p_1130->global_2_offset, get_global_id(2), 10)));
        (*p_73) = ((*p_1130->g_403) = ((safe_add_func_uint16_t_u_u((0xE677L < (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1130->group_2_offset, get_group_id(2), 10), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-2L), 0x35L)), 0x41L, 0x28L)).y))), ((((safe_rshift_func_uint8_t_u_u((0xD00FL ^ p_1130->g_354.y), 5)) > 0x4267L) || (safe_add_func_uint32_t_u_u(p_70, p_1130->g_319))) , 0x41FFL))) > ((l_522 = (void*)0) != (p_1130->g_524 = p_1130->g_524))));
        (*p_73) &= (*p_1130->g_403);
    }
    else
    { /* block id: 257 */
        return (*p_1130->g_402);
    }
    return (*p_1130->g_402);
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_97
 * writes: p_1130->g_97
 */
uint16_t  func_74(int64_t  p_75, int8_t  p_76, int32_t  p_77, uint16_t  p_78, int64_t  p_79, struct S0 * p_1130)
{ /* block id: 14 */
    int32_t *l_101 = &p_1130->g_97[8][0];
    (*l_101) ^= ((void*)0 != l_101);
    return p_77;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_84(uint64_t  p_85, struct S0 * p_1130)
{ /* block id: 12 */
    int16_t l_100 = 4L;
    return l_100;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1130->g_97
 */
int8_t * func_91(int8_t * p_92, uint8_t  p_93, uint16_t  p_94, uint32_t  p_95, struct S0 * p_1130)
{ /* block id: 9 */
    int32_t *l_96 = &p_1130->g_97[8][0];
    int8_t *l_98 = &p_1130->g_42;
    (*l_96) = (&p_1130->g_42 != p_92);
    return l_98;
}


/* ------------------------------------------ */
/* 
 * reads : p_1130->g_42 p_1130->g_97 p_1130->g_308 p_1130->g_314 p_1130->g_315 p_1130->g_316 p_1130->g_317 p_1130->g_310 p_1130->g_319
 * writes: p_1130->g_97 p_1130->g_298 p_1130->g_308 p_1130->g_310 p_1130->g_319 p_1130->g_314
 */
uint32_t  func_284(uint8_t * p_285, int32_t  p_286, int64_t  p_287, struct S0 * p_1130)
{ /* block id: 124 */
    int32_t *l_289[2];
    VECTOR(int32_t, 4) l_290 = (VECTOR(int32_t, 4))(0x6BD939EDL, (VECTOR(int32_t, 2))(0x6BD939EDL, 0x4621D0DCL), 0x4621D0DCL);
    uint32_t l_291 = 4294967291UL;
    VECTOR(uint16_t, 4) l_296 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL);
    uint64_t *l_297[2][7] = {{&p_1130->g_298,&p_1130->g_298,&p_1130->g_298,&p_1130->g_298,(void*)0,&p_1130->g_298,&p_1130->g_298},{&p_1130->g_298,&p_1130->g_298,&p_1130->g_298,&p_1130->g_298,(void*)0,&p_1130->g_298,&p_1130->g_298}};
    int8_t *l_307[9][3][9] = {{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}},{{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0},{(void*)0,&p_1130->g_308,(void*)0,(void*)0,&p_1130->g_308,(void*)0,&p_1130->g_42,&p_1130->g_42,(void*)0}}};
    int16_t *l_309 = &p_1130->g_310;
    VECTOR(int32_t, 8) l_313 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L);
    VECTOR(uint16_t, 2) l_318 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
    uint8_t l_320[5][4] = {{0x05L,0x02L,0x48L,0x75L},{0x05L,0x02L,0x48L,0x75L},{0x05L,0x02L,0x48L,0x75L},{0x05L,0x02L,0x48L,0x75L},{0x05L,0x02L,0x48L,0x75L}};
    VECTOR(int8_t, 8) l_333 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x05L), 0x05L), 0x05L, (-1L), 0x05L);
    uint16_t l_409 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_289[i] = (void*)0;
    p_1130->g_319 ^= ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(1L, 0x342D1C9BL)).yxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x619506F3L, 0x0827B687L)))), (-1L), (-8L))), (p_1130->g_97[7][0] = p_1130->g_42), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x64866000L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_290.yyyyzxyxxzxwwwyx)).s057d)))), (l_291 != (safe_div_func_int64_t_s_s(p_286, (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_296.yy)).even, ((p_1130->g_298 = p_1130->g_97[8][0]) == (((safe_add_func_int16_t_s_s(((*l_309) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0x63L, 4)), (p_1130->g_308 |= ((safe_lshift_func_int16_t_s_u(p_287, 2)) ^ GROUP_DIVERGE(0, 1)))))), (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_313.s3624055524206377)).s7e, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1130->g_314.s7741f731)).even)).yyywzzyzyyxwwywx, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(p_1130->g_315.yyyxyxxxyxxyxxyx)), ((VECTOR(int32_t, 2))(p_1130->g_316.yy)).yyxxyyyyxxyxxxyy)))))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1130->g_317.s8925)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((&p_1130->g_288 == &p_1130->g_288) == (p_1130->g_314.s4 | p_1130->g_316.y)), ((VECTOR(int32_t, 2))(0x72EFAD2FL)), 0x6A8B989AL)), ((VECTOR(int32_t, 4))(0x66CA84D6L))))), l_318.x, ((VECTOR(int32_t, 2))(1L)), 0x776D1B61L, p_1130->g_97[5][0], p_286, 0x71425821L, ((VECTOR(int32_t, 2))(0L)), 1L, (-1L), 1L)).sb5)), 0x2A6E4B28L, 0L)).s4247502005754010, (int32_t)(-9L)))).s18)).xyxyyyxy, ((VECTOR(int32_t, 8))(0x61289C79L))))).hi, ((VECTOR(int32_t, 4))((-1L)))))).odd))).lo, p_287)))) != p_1130->g_97[4][0]) ^ p_287))))))), 0x04DB12DDL, 0x775A03B7L, 0x2C7D45E9L, p_1130->g_310, (-6L), ((VECTOR(int32_t, 4))(0x20EA622FL)), (-9L))).see)), 0L)).s52)), 0x1F9F9BACL, 0x50E1AEA4L)).odd, ((VECTOR(int32_t, 2))(0x54BE2A8EL))))), 1L))))))).xywyxwzy)))).even, ((VECTOR(int32_t, 4))(0x051A6A6CL))))).y;
    p_1130->g_314.s8 = 0x48ED7FBBL;
    l_320[3][2]++;
    for (p_287 = (-20); (p_287 < 29); ++p_287)
    { /* block id: 134 */
        int8_t *l_330 = &p_1130->g_308;
        int32_t l_336 = 0x616A5420L;
        int8_t **l_337 = &l_307[1][0][8];
        uint32_t l_341 = 4294967292UL;
        int32_t l_343 = 0x54B43B3CL;
        int32_t *l_448 = (void*)0;
        int32_t **l_449 = &p_1130->g_403;
        int32_t *l_454 = &p_1130->g_97[8][0];
        volatile int32_t *l_481 = (void*)0;
        volatile int32_t * volatile * volatile l_480[6][5][8] = {{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}},{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}},{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}},{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}},{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}},{{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481},{(void*)0,&l_481,&l_481,&l_481,(void*)0,(void*)0,&l_481,&l_481}}};
        int i, j, k;
        (1 + 1);
    }
    return p_1130->g_308;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[188];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 188; i++)
            l_comm_values[i] = 1;
    struct S0 c_1131;
    struct S0* p_1130 = &c_1131;
    struct S0 c_1132 = {
        1L, // p_1130->g_42
        (VECTOR(uint8_t, 8))(0xE6L, (VECTOR(uint8_t, 4))(0xE6L, (VECTOR(uint8_t, 2))(0xE6L, 0UL), 0UL), 0UL, 0xE6L, 0UL), // p_1130->g_43
        (VECTOR(uint8_t, 16))(0x87L, (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 1UL), 1UL), 1UL, 0x87L, 1UL, (VECTOR(uint8_t, 2))(0x87L, 1UL), (VECTOR(uint8_t, 2))(0x87L, 1UL), 0x87L, 1UL, 0x87L, 1UL), // p_1130->g_44
        {{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)},{(-3L)}}, // p_1130->g_97
        (void*)0, // p_1130->g_288
        0x6D0909EED68367C9L, // p_1130->g_298
        (-7L), // p_1130->g_308
        0x316DL, // p_1130->g_310
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L, (VECTOR(int32_t, 2))((-1L), 8L), (VECTOR(int32_t, 2))((-1L), 8L), (-1L), 8L, (-1L), 8L), // p_1130->g_314
        (VECTOR(int32_t, 2))(0x39BBD57EL, 5L), // p_1130->g_315
        (VECTOR(int32_t, 2))(4L, (-4L)), // p_1130->g_316
        (VECTOR(int32_t, 16))(0x0C4DEAE7L, (VECTOR(int32_t, 4))(0x0C4DEAE7L, (VECTOR(int32_t, 2))(0x0C4DEAE7L, 0x55DD1EE3L), 0x55DD1EE3L), 0x55DD1EE3L, 0x0C4DEAE7L, 0x55DD1EE3L, (VECTOR(int32_t, 2))(0x0C4DEAE7L, 0x55DD1EE3L), (VECTOR(int32_t, 2))(0x0C4DEAE7L, 0x55DD1EE3L), 0x0C4DEAE7L, 0x55DD1EE3L, 0x0C4DEAE7L, 0x55DD1EE3L), // p_1130->g_317
        1UL, // p_1130->g_319
        65530UL, // p_1130->g_325
        0x5CL, // p_1130->g_340
        &p_1130->g_340, // p_1130->g_339
        &p_1130->g_339, // p_1130->g_338
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), // p_1130->g_354
        (void*)0, // p_1130->g_362
        &p_1130->g_362, // p_1130->g_363
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD9840CDFL), 0xD9840CDFL), 0xD9840CDFL, 0UL, 0xD9840CDFL, (VECTOR(uint32_t, 2))(0UL, 0xD9840CDFL), (VECTOR(uint32_t, 2))(0UL, 0xD9840CDFL), 0UL, 0xD9840CDFL, 0UL, 0xD9840CDFL), // p_1130->g_376
        (VECTOR(uint8_t, 16))(0xE4L, (VECTOR(uint8_t, 4))(0xE4L, (VECTOR(uint8_t, 2))(0xE4L, 0x62L), 0x62L), 0x62L, 0xE4L, 0x62L, (VECTOR(uint8_t, 2))(0xE4L, 0x62L), (VECTOR(uint8_t, 2))(0xE4L, 0x62L), 0xE4L, 0x62L, 0xE4L, 0x62L), // p_1130->g_399
        &p_1130->g_97[8][0], // p_1130->g_403
        &p_1130->g_403, // p_1130->g_402
        0x2F20CABAL, // p_1130->g_490
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xDB152E0C0317D572L), 0xDB152E0C0317D572L), 0xDB152E0C0317D572L, 1UL, 0xDB152E0C0317D572L, (VECTOR(uint64_t, 2))(1UL, 0xDB152E0C0317D572L), (VECTOR(uint64_t, 2))(1UL, 0xDB152E0C0317D572L), 1UL, 0xDB152E0C0317D572L, 1UL, 0xDB152E0C0317D572L), // p_1130->g_496
        (void*)0, // p_1130->g_525
        &p_1130->g_525, // p_1130->g_524
        {&p_1130->g_403,&p_1130->g_403,&p_1130->g_403,&p_1130->g_403,&p_1130->g_403,&p_1130->g_403,&p_1130->g_403,&p_1130->g_403}, // p_1130->g_526
        (void*)0, // p_1130->g_529
        (void*)0, // p_1130->g_531
        &p_1130->g_531, // p_1130->g_530
        (VECTOR(uint32_t, 4))(0x2287CE34L, (VECTOR(uint32_t, 2))(0x2287CE34L, 0xDFA32D45L), 0xDFA32D45L), // p_1130->g_550
        (VECTOR(uint16_t, 2))(0x777DL, 2UL), // p_1130->g_567
        &p_1130->g_403, // p_1130->g_580
        {{&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580},{&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580,&p_1130->g_580}}, // p_1130->g_579
        (VECTOR(int64_t, 2))((-1L), (-10L)), // p_1130->g_613
        (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-7L)), (-7L)), (-7L), (-9L), (-7L), (VECTOR(int16_t, 2))((-9L), (-7L)), (VECTOR(int16_t, 2))((-9L), (-7L)), (-9L), (-7L), (-9L), (-7L)), // p_1130->g_618
        (VECTOR(int16_t, 8))(0x595FL, (VECTOR(int16_t, 4))(0x595FL, (VECTOR(int16_t, 2))(0x595FL, 1L), 1L), 1L, 0x595FL, 1L), // p_1130->g_620
        (VECTOR(int32_t, 16))(0x705095ECL, (VECTOR(int32_t, 4))(0x705095ECL, (VECTOR(int32_t, 2))(0x705095ECL, 9L), 9L), 9L, 0x705095ECL, 9L, (VECTOR(int32_t, 2))(0x705095ECL, 9L), (VECTOR(int32_t, 2))(0x705095ECL, 9L), 0x705095ECL, 9L, 0x705095ECL, 9L), // p_1130->g_629
        &p_1130->g_298, // p_1130->g_785
        &p_1130->g_785, // p_1130->g_784
        (VECTOR(int64_t, 2))(0x23E3336DBD3C0DD4L, 0x2211EA6C6C005145L), // p_1130->g_788
        (VECTOR(int8_t, 2))((-8L), 1L), // p_1130->g_795
        (VECTOR(uint16_t, 4))(0xDE88L, (VECTOR(uint16_t, 2))(0xDE88L, 0xFB42L), 0xFB42L), // p_1130->g_846
        0x1B816CE5DB702A1EL, // p_1130->g_871
        (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x70L), 0x70L), 0x70L, (-6L), 0x70L, (VECTOR(int8_t, 2))((-6L), 0x70L), (VECTOR(int8_t, 2))((-6L), 0x70L), (-6L), 0x70L, (-6L), 0x70L), // p_1130->g_872
        {{0xE3CE20C3L},{0xE3CE20C3L},{0xE3CE20C3L},{0xE3CE20C3L},{0xE3CE20C3L},{0xE3CE20C3L},{0xE3CE20C3L}}, // p_1130->g_875
        (-1L), // p_1130->g_891
        0UL, // p_1130->g_895
        &p_1130->g_42, // p_1130->g_954
        0UL, // p_1130->g_961
        &p_1130->g_961, // p_1130->g_973
        (VECTOR(uint16_t, 4))(0xE91BL, (VECTOR(uint16_t, 2))(0xE91BL, 0xDFA7L), 0xDFA7L), // p_1130->g_976
        (-2L), // p_1130->g_982
        0x4534F39FL, // p_1130->g_1017
        0x3E3F68CDL, // p_1130->g_1022
        &p_1130->g_531, // p_1130->g_1053
        (VECTOR(uint16_t, 2))(0UL, 0x8206L), // p_1130->g_1056
        (VECTOR(uint16_t, 4))(0x2F22L, (VECTOR(uint16_t, 2))(0x2F22L, 0x1481L), 0x1481L), // p_1130->g_1071
        (VECTOR(int64_t, 8))(0x4748823D3E651C06L, (VECTOR(int64_t, 4))(0x4748823D3E651C06L, (VECTOR(int64_t, 2))(0x4748823D3E651C06L, 0x69A4B03D65DE5C50L), 0x69A4B03D65DE5C50L), 0x69A4B03D65DE5C50L, 0x4748823D3E651C06L, 0x69A4B03D65DE5C50L), // p_1130->g_1087
        {{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL},{0x880403F0L,4294967295UL}}, // p_1130->g_1088
        (VECTOR(uint32_t, 4))(0x6AF01CC8L, (VECTOR(uint32_t, 2))(0x6AF01CC8L, 1UL), 1UL), // p_1130->g_1109
        (VECTOR(int16_t, 8))(0x684BL, (VECTOR(int16_t, 4))(0x684BL, (VECTOR(int16_t, 2))(0x684BL, 2L), 2L), 2L, 0x684BL, 2L), // p_1130->g_1121
        0, // p_1130->v_collective
        sequence_input[get_global_id(0)], // p_1130->global_0_offset
        sequence_input[get_global_id(1)], // p_1130->global_1_offset
        sequence_input[get_global_id(2)], // p_1130->global_2_offset
        sequence_input[get_local_id(0)], // p_1130->local_0_offset
        sequence_input[get_local_id(1)], // p_1130->local_1_offset
        sequence_input[get_local_id(2)], // p_1130->local_2_offset
        sequence_input[get_group_id(0)], // p_1130->group_0_offset
        sequence_input[get_group_id(1)], // p_1130->group_1_offset
        sequence_input[get_group_id(2)], // p_1130->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 188)), permutations[0][get_linear_local_id()])), // p_1130->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1131 = c_1132;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1130);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1130->g_42, "p_1130->g_42", print_hash_value);
    transparent_crc(p_1130->g_43.s0, "p_1130->g_43.s0", print_hash_value);
    transparent_crc(p_1130->g_43.s1, "p_1130->g_43.s1", print_hash_value);
    transparent_crc(p_1130->g_43.s2, "p_1130->g_43.s2", print_hash_value);
    transparent_crc(p_1130->g_43.s3, "p_1130->g_43.s3", print_hash_value);
    transparent_crc(p_1130->g_43.s4, "p_1130->g_43.s4", print_hash_value);
    transparent_crc(p_1130->g_43.s5, "p_1130->g_43.s5", print_hash_value);
    transparent_crc(p_1130->g_43.s6, "p_1130->g_43.s6", print_hash_value);
    transparent_crc(p_1130->g_43.s7, "p_1130->g_43.s7", print_hash_value);
    transparent_crc(p_1130->g_44.s0, "p_1130->g_44.s0", print_hash_value);
    transparent_crc(p_1130->g_44.s1, "p_1130->g_44.s1", print_hash_value);
    transparent_crc(p_1130->g_44.s2, "p_1130->g_44.s2", print_hash_value);
    transparent_crc(p_1130->g_44.s3, "p_1130->g_44.s3", print_hash_value);
    transparent_crc(p_1130->g_44.s4, "p_1130->g_44.s4", print_hash_value);
    transparent_crc(p_1130->g_44.s5, "p_1130->g_44.s5", print_hash_value);
    transparent_crc(p_1130->g_44.s6, "p_1130->g_44.s6", print_hash_value);
    transparent_crc(p_1130->g_44.s7, "p_1130->g_44.s7", print_hash_value);
    transparent_crc(p_1130->g_44.s8, "p_1130->g_44.s8", print_hash_value);
    transparent_crc(p_1130->g_44.s9, "p_1130->g_44.s9", print_hash_value);
    transparent_crc(p_1130->g_44.sa, "p_1130->g_44.sa", print_hash_value);
    transparent_crc(p_1130->g_44.sb, "p_1130->g_44.sb", print_hash_value);
    transparent_crc(p_1130->g_44.sc, "p_1130->g_44.sc", print_hash_value);
    transparent_crc(p_1130->g_44.sd, "p_1130->g_44.sd", print_hash_value);
    transparent_crc(p_1130->g_44.se, "p_1130->g_44.se", print_hash_value);
    transparent_crc(p_1130->g_44.sf, "p_1130->g_44.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1130->g_97[i][j], "p_1130->g_97[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1130->g_298, "p_1130->g_298", print_hash_value);
    transparent_crc(p_1130->g_308, "p_1130->g_308", print_hash_value);
    transparent_crc(p_1130->g_310, "p_1130->g_310", print_hash_value);
    transparent_crc(p_1130->g_314.s0, "p_1130->g_314.s0", print_hash_value);
    transparent_crc(p_1130->g_314.s1, "p_1130->g_314.s1", print_hash_value);
    transparent_crc(p_1130->g_314.s2, "p_1130->g_314.s2", print_hash_value);
    transparent_crc(p_1130->g_314.s3, "p_1130->g_314.s3", print_hash_value);
    transparent_crc(p_1130->g_314.s4, "p_1130->g_314.s4", print_hash_value);
    transparent_crc(p_1130->g_314.s5, "p_1130->g_314.s5", print_hash_value);
    transparent_crc(p_1130->g_314.s6, "p_1130->g_314.s6", print_hash_value);
    transparent_crc(p_1130->g_314.s7, "p_1130->g_314.s7", print_hash_value);
    transparent_crc(p_1130->g_314.s8, "p_1130->g_314.s8", print_hash_value);
    transparent_crc(p_1130->g_314.s9, "p_1130->g_314.s9", print_hash_value);
    transparent_crc(p_1130->g_314.sa, "p_1130->g_314.sa", print_hash_value);
    transparent_crc(p_1130->g_314.sb, "p_1130->g_314.sb", print_hash_value);
    transparent_crc(p_1130->g_314.sc, "p_1130->g_314.sc", print_hash_value);
    transparent_crc(p_1130->g_314.sd, "p_1130->g_314.sd", print_hash_value);
    transparent_crc(p_1130->g_314.se, "p_1130->g_314.se", print_hash_value);
    transparent_crc(p_1130->g_314.sf, "p_1130->g_314.sf", print_hash_value);
    transparent_crc(p_1130->g_315.x, "p_1130->g_315.x", print_hash_value);
    transparent_crc(p_1130->g_315.y, "p_1130->g_315.y", print_hash_value);
    transparent_crc(p_1130->g_316.x, "p_1130->g_316.x", print_hash_value);
    transparent_crc(p_1130->g_316.y, "p_1130->g_316.y", print_hash_value);
    transparent_crc(p_1130->g_317.s0, "p_1130->g_317.s0", print_hash_value);
    transparent_crc(p_1130->g_317.s1, "p_1130->g_317.s1", print_hash_value);
    transparent_crc(p_1130->g_317.s2, "p_1130->g_317.s2", print_hash_value);
    transparent_crc(p_1130->g_317.s3, "p_1130->g_317.s3", print_hash_value);
    transparent_crc(p_1130->g_317.s4, "p_1130->g_317.s4", print_hash_value);
    transparent_crc(p_1130->g_317.s5, "p_1130->g_317.s5", print_hash_value);
    transparent_crc(p_1130->g_317.s6, "p_1130->g_317.s6", print_hash_value);
    transparent_crc(p_1130->g_317.s7, "p_1130->g_317.s7", print_hash_value);
    transparent_crc(p_1130->g_317.s8, "p_1130->g_317.s8", print_hash_value);
    transparent_crc(p_1130->g_317.s9, "p_1130->g_317.s9", print_hash_value);
    transparent_crc(p_1130->g_317.sa, "p_1130->g_317.sa", print_hash_value);
    transparent_crc(p_1130->g_317.sb, "p_1130->g_317.sb", print_hash_value);
    transparent_crc(p_1130->g_317.sc, "p_1130->g_317.sc", print_hash_value);
    transparent_crc(p_1130->g_317.sd, "p_1130->g_317.sd", print_hash_value);
    transparent_crc(p_1130->g_317.se, "p_1130->g_317.se", print_hash_value);
    transparent_crc(p_1130->g_317.sf, "p_1130->g_317.sf", print_hash_value);
    transparent_crc(p_1130->g_319, "p_1130->g_319", print_hash_value);
    transparent_crc(p_1130->g_325, "p_1130->g_325", print_hash_value);
    transparent_crc(p_1130->g_340, "p_1130->g_340", print_hash_value);
    transparent_crc(p_1130->g_354.x, "p_1130->g_354.x", print_hash_value);
    transparent_crc(p_1130->g_354.y, "p_1130->g_354.y", print_hash_value);
    transparent_crc(p_1130->g_354.z, "p_1130->g_354.z", print_hash_value);
    transparent_crc(p_1130->g_354.w, "p_1130->g_354.w", print_hash_value);
    transparent_crc(p_1130->g_376.s0, "p_1130->g_376.s0", print_hash_value);
    transparent_crc(p_1130->g_376.s1, "p_1130->g_376.s1", print_hash_value);
    transparent_crc(p_1130->g_376.s2, "p_1130->g_376.s2", print_hash_value);
    transparent_crc(p_1130->g_376.s3, "p_1130->g_376.s3", print_hash_value);
    transparent_crc(p_1130->g_376.s4, "p_1130->g_376.s4", print_hash_value);
    transparent_crc(p_1130->g_376.s5, "p_1130->g_376.s5", print_hash_value);
    transparent_crc(p_1130->g_376.s6, "p_1130->g_376.s6", print_hash_value);
    transparent_crc(p_1130->g_376.s7, "p_1130->g_376.s7", print_hash_value);
    transparent_crc(p_1130->g_376.s8, "p_1130->g_376.s8", print_hash_value);
    transparent_crc(p_1130->g_376.s9, "p_1130->g_376.s9", print_hash_value);
    transparent_crc(p_1130->g_376.sa, "p_1130->g_376.sa", print_hash_value);
    transparent_crc(p_1130->g_376.sb, "p_1130->g_376.sb", print_hash_value);
    transparent_crc(p_1130->g_376.sc, "p_1130->g_376.sc", print_hash_value);
    transparent_crc(p_1130->g_376.sd, "p_1130->g_376.sd", print_hash_value);
    transparent_crc(p_1130->g_376.se, "p_1130->g_376.se", print_hash_value);
    transparent_crc(p_1130->g_376.sf, "p_1130->g_376.sf", print_hash_value);
    transparent_crc(p_1130->g_399.s0, "p_1130->g_399.s0", print_hash_value);
    transparent_crc(p_1130->g_399.s1, "p_1130->g_399.s1", print_hash_value);
    transparent_crc(p_1130->g_399.s2, "p_1130->g_399.s2", print_hash_value);
    transparent_crc(p_1130->g_399.s3, "p_1130->g_399.s3", print_hash_value);
    transparent_crc(p_1130->g_399.s4, "p_1130->g_399.s4", print_hash_value);
    transparent_crc(p_1130->g_399.s5, "p_1130->g_399.s5", print_hash_value);
    transparent_crc(p_1130->g_399.s6, "p_1130->g_399.s6", print_hash_value);
    transparent_crc(p_1130->g_399.s7, "p_1130->g_399.s7", print_hash_value);
    transparent_crc(p_1130->g_399.s8, "p_1130->g_399.s8", print_hash_value);
    transparent_crc(p_1130->g_399.s9, "p_1130->g_399.s9", print_hash_value);
    transparent_crc(p_1130->g_399.sa, "p_1130->g_399.sa", print_hash_value);
    transparent_crc(p_1130->g_399.sb, "p_1130->g_399.sb", print_hash_value);
    transparent_crc(p_1130->g_399.sc, "p_1130->g_399.sc", print_hash_value);
    transparent_crc(p_1130->g_399.sd, "p_1130->g_399.sd", print_hash_value);
    transparent_crc(p_1130->g_399.se, "p_1130->g_399.se", print_hash_value);
    transparent_crc(p_1130->g_399.sf, "p_1130->g_399.sf", print_hash_value);
    transparent_crc(p_1130->g_490, "p_1130->g_490", print_hash_value);
    transparent_crc(p_1130->g_496.s0, "p_1130->g_496.s0", print_hash_value);
    transparent_crc(p_1130->g_496.s1, "p_1130->g_496.s1", print_hash_value);
    transparent_crc(p_1130->g_496.s2, "p_1130->g_496.s2", print_hash_value);
    transparent_crc(p_1130->g_496.s3, "p_1130->g_496.s3", print_hash_value);
    transparent_crc(p_1130->g_496.s4, "p_1130->g_496.s4", print_hash_value);
    transparent_crc(p_1130->g_496.s5, "p_1130->g_496.s5", print_hash_value);
    transparent_crc(p_1130->g_496.s6, "p_1130->g_496.s6", print_hash_value);
    transparent_crc(p_1130->g_496.s7, "p_1130->g_496.s7", print_hash_value);
    transparent_crc(p_1130->g_496.s8, "p_1130->g_496.s8", print_hash_value);
    transparent_crc(p_1130->g_496.s9, "p_1130->g_496.s9", print_hash_value);
    transparent_crc(p_1130->g_496.sa, "p_1130->g_496.sa", print_hash_value);
    transparent_crc(p_1130->g_496.sb, "p_1130->g_496.sb", print_hash_value);
    transparent_crc(p_1130->g_496.sc, "p_1130->g_496.sc", print_hash_value);
    transparent_crc(p_1130->g_496.sd, "p_1130->g_496.sd", print_hash_value);
    transparent_crc(p_1130->g_496.se, "p_1130->g_496.se", print_hash_value);
    transparent_crc(p_1130->g_496.sf, "p_1130->g_496.sf", print_hash_value);
    transparent_crc(p_1130->g_550.x, "p_1130->g_550.x", print_hash_value);
    transparent_crc(p_1130->g_550.y, "p_1130->g_550.y", print_hash_value);
    transparent_crc(p_1130->g_550.z, "p_1130->g_550.z", print_hash_value);
    transparent_crc(p_1130->g_550.w, "p_1130->g_550.w", print_hash_value);
    transparent_crc(p_1130->g_567.x, "p_1130->g_567.x", print_hash_value);
    transparent_crc(p_1130->g_567.y, "p_1130->g_567.y", print_hash_value);
    transparent_crc(p_1130->g_613.x, "p_1130->g_613.x", print_hash_value);
    transparent_crc(p_1130->g_613.y, "p_1130->g_613.y", print_hash_value);
    transparent_crc(p_1130->g_618.s0, "p_1130->g_618.s0", print_hash_value);
    transparent_crc(p_1130->g_618.s1, "p_1130->g_618.s1", print_hash_value);
    transparent_crc(p_1130->g_618.s2, "p_1130->g_618.s2", print_hash_value);
    transparent_crc(p_1130->g_618.s3, "p_1130->g_618.s3", print_hash_value);
    transparent_crc(p_1130->g_618.s4, "p_1130->g_618.s4", print_hash_value);
    transparent_crc(p_1130->g_618.s5, "p_1130->g_618.s5", print_hash_value);
    transparent_crc(p_1130->g_618.s6, "p_1130->g_618.s6", print_hash_value);
    transparent_crc(p_1130->g_618.s7, "p_1130->g_618.s7", print_hash_value);
    transparent_crc(p_1130->g_618.s8, "p_1130->g_618.s8", print_hash_value);
    transparent_crc(p_1130->g_618.s9, "p_1130->g_618.s9", print_hash_value);
    transparent_crc(p_1130->g_618.sa, "p_1130->g_618.sa", print_hash_value);
    transparent_crc(p_1130->g_618.sb, "p_1130->g_618.sb", print_hash_value);
    transparent_crc(p_1130->g_618.sc, "p_1130->g_618.sc", print_hash_value);
    transparent_crc(p_1130->g_618.sd, "p_1130->g_618.sd", print_hash_value);
    transparent_crc(p_1130->g_618.se, "p_1130->g_618.se", print_hash_value);
    transparent_crc(p_1130->g_618.sf, "p_1130->g_618.sf", print_hash_value);
    transparent_crc(p_1130->g_620.s0, "p_1130->g_620.s0", print_hash_value);
    transparent_crc(p_1130->g_620.s1, "p_1130->g_620.s1", print_hash_value);
    transparent_crc(p_1130->g_620.s2, "p_1130->g_620.s2", print_hash_value);
    transparent_crc(p_1130->g_620.s3, "p_1130->g_620.s3", print_hash_value);
    transparent_crc(p_1130->g_620.s4, "p_1130->g_620.s4", print_hash_value);
    transparent_crc(p_1130->g_620.s5, "p_1130->g_620.s5", print_hash_value);
    transparent_crc(p_1130->g_620.s6, "p_1130->g_620.s6", print_hash_value);
    transparent_crc(p_1130->g_620.s7, "p_1130->g_620.s7", print_hash_value);
    transparent_crc(p_1130->g_629.s0, "p_1130->g_629.s0", print_hash_value);
    transparent_crc(p_1130->g_629.s1, "p_1130->g_629.s1", print_hash_value);
    transparent_crc(p_1130->g_629.s2, "p_1130->g_629.s2", print_hash_value);
    transparent_crc(p_1130->g_629.s3, "p_1130->g_629.s3", print_hash_value);
    transparent_crc(p_1130->g_629.s4, "p_1130->g_629.s4", print_hash_value);
    transparent_crc(p_1130->g_629.s5, "p_1130->g_629.s5", print_hash_value);
    transparent_crc(p_1130->g_629.s6, "p_1130->g_629.s6", print_hash_value);
    transparent_crc(p_1130->g_629.s7, "p_1130->g_629.s7", print_hash_value);
    transparent_crc(p_1130->g_629.s8, "p_1130->g_629.s8", print_hash_value);
    transparent_crc(p_1130->g_629.s9, "p_1130->g_629.s9", print_hash_value);
    transparent_crc(p_1130->g_629.sa, "p_1130->g_629.sa", print_hash_value);
    transparent_crc(p_1130->g_629.sb, "p_1130->g_629.sb", print_hash_value);
    transparent_crc(p_1130->g_629.sc, "p_1130->g_629.sc", print_hash_value);
    transparent_crc(p_1130->g_629.sd, "p_1130->g_629.sd", print_hash_value);
    transparent_crc(p_1130->g_629.se, "p_1130->g_629.se", print_hash_value);
    transparent_crc(p_1130->g_629.sf, "p_1130->g_629.sf", print_hash_value);
    transparent_crc(p_1130->g_788.x, "p_1130->g_788.x", print_hash_value);
    transparent_crc(p_1130->g_788.y, "p_1130->g_788.y", print_hash_value);
    transparent_crc(p_1130->g_795.x, "p_1130->g_795.x", print_hash_value);
    transparent_crc(p_1130->g_795.y, "p_1130->g_795.y", print_hash_value);
    transparent_crc(p_1130->g_846.x, "p_1130->g_846.x", print_hash_value);
    transparent_crc(p_1130->g_846.y, "p_1130->g_846.y", print_hash_value);
    transparent_crc(p_1130->g_846.z, "p_1130->g_846.z", print_hash_value);
    transparent_crc(p_1130->g_846.w, "p_1130->g_846.w", print_hash_value);
    transparent_crc(p_1130->g_871, "p_1130->g_871", print_hash_value);
    transparent_crc(p_1130->g_872.s0, "p_1130->g_872.s0", print_hash_value);
    transparent_crc(p_1130->g_872.s1, "p_1130->g_872.s1", print_hash_value);
    transparent_crc(p_1130->g_872.s2, "p_1130->g_872.s2", print_hash_value);
    transparent_crc(p_1130->g_872.s3, "p_1130->g_872.s3", print_hash_value);
    transparent_crc(p_1130->g_872.s4, "p_1130->g_872.s4", print_hash_value);
    transparent_crc(p_1130->g_872.s5, "p_1130->g_872.s5", print_hash_value);
    transparent_crc(p_1130->g_872.s6, "p_1130->g_872.s6", print_hash_value);
    transparent_crc(p_1130->g_872.s7, "p_1130->g_872.s7", print_hash_value);
    transparent_crc(p_1130->g_872.s8, "p_1130->g_872.s8", print_hash_value);
    transparent_crc(p_1130->g_872.s9, "p_1130->g_872.s9", print_hash_value);
    transparent_crc(p_1130->g_872.sa, "p_1130->g_872.sa", print_hash_value);
    transparent_crc(p_1130->g_872.sb, "p_1130->g_872.sb", print_hash_value);
    transparent_crc(p_1130->g_872.sc, "p_1130->g_872.sc", print_hash_value);
    transparent_crc(p_1130->g_872.sd, "p_1130->g_872.sd", print_hash_value);
    transparent_crc(p_1130->g_872.se, "p_1130->g_872.se", print_hash_value);
    transparent_crc(p_1130->g_872.sf, "p_1130->g_872.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1130->g_875[i][j], "p_1130->g_875[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1130->g_891, "p_1130->g_891", print_hash_value);
    transparent_crc(p_1130->g_895, "p_1130->g_895", print_hash_value);
    transparent_crc(p_1130->g_961, "p_1130->g_961", print_hash_value);
    transparent_crc(p_1130->g_976.x, "p_1130->g_976.x", print_hash_value);
    transparent_crc(p_1130->g_976.y, "p_1130->g_976.y", print_hash_value);
    transparent_crc(p_1130->g_976.z, "p_1130->g_976.z", print_hash_value);
    transparent_crc(p_1130->g_976.w, "p_1130->g_976.w", print_hash_value);
    transparent_crc(p_1130->g_982, "p_1130->g_982", print_hash_value);
    transparent_crc(p_1130->g_1017, "p_1130->g_1017", print_hash_value);
    transparent_crc(p_1130->g_1022, "p_1130->g_1022", print_hash_value);
    transparent_crc(p_1130->g_1056.x, "p_1130->g_1056.x", print_hash_value);
    transparent_crc(p_1130->g_1056.y, "p_1130->g_1056.y", print_hash_value);
    transparent_crc(p_1130->g_1071.x, "p_1130->g_1071.x", print_hash_value);
    transparent_crc(p_1130->g_1071.y, "p_1130->g_1071.y", print_hash_value);
    transparent_crc(p_1130->g_1071.z, "p_1130->g_1071.z", print_hash_value);
    transparent_crc(p_1130->g_1071.w, "p_1130->g_1071.w", print_hash_value);
    transparent_crc(p_1130->g_1087.s0, "p_1130->g_1087.s0", print_hash_value);
    transparent_crc(p_1130->g_1087.s1, "p_1130->g_1087.s1", print_hash_value);
    transparent_crc(p_1130->g_1087.s2, "p_1130->g_1087.s2", print_hash_value);
    transparent_crc(p_1130->g_1087.s3, "p_1130->g_1087.s3", print_hash_value);
    transparent_crc(p_1130->g_1087.s4, "p_1130->g_1087.s4", print_hash_value);
    transparent_crc(p_1130->g_1087.s5, "p_1130->g_1087.s5", print_hash_value);
    transparent_crc(p_1130->g_1087.s6, "p_1130->g_1087.s6", print_hash_value);
    transparent_crc(p_1130->g_1087.s7, "p_1130->g_1087.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1130->g_1088[i][j], "p_1130->g_1088[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1130->g_1109.x, "p_1130->g_1109.x", print_hash_value);
    transparent_crc(p_1130->g_1109.y, "p_1130->g_1109.y", print_hash_value);
    transparent_crc(p_1130->g_1109.z, "p_1130->g_1109.z", print_hash_value);
    transparent_crc(p_1130->g_1109.w, "p_1130->g_1109.w", print_hash_value);
    transparent_crc(p_1130->g_1121.s0, "p_1130->g_1121.s0", print_hash_value);
    transparent_crc(p_1130->g_1121.s1, "p_1130->g_1121.s1", print_hash_value);
    transparent_crc(p_1130->g_1121.s2, "p_1130->g_1121.s2", print_hash_value);
    transparent_crc(p_1130->g_1121.s3, "p_1130->g_1121.s3", print_hash_value);
    transparent_crc(p_1130->g_1121.s4, "p_1130->g_1121.s4", print_hash_value);
    transparent_crc(p_1130->g_1121.s5, "p_1130->g_1121.s5", print_hash_value);
    transparent_crc(p_1130->g_1121.s6, "p_1130->g_1121.s6", print_hash_value);
    transparent_crc(p_1130->g_1121.s7, "p_1130->g_1121.s7", print_hash_value);
    transparent_crc(p_1130->v_collective, "p_1130->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 59; i++)
            transparent_crc(p_1130->l_special_values[i], "p_1130->l_special_values[i]", print_hash_value);
    transparent_crc(p_1130->l_comm_values[get_linear_local_id()], "p_1130->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1130->g_comm_values[get_linear_group_id() * 188 + get_linear_local_id()], "p_1130->g_comm_values[get_linear_group_id() * 188 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
