// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,25,3 -l 87,1,1
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

__constant uint32_t permutations[10][87] = {
{46,56,47,29,72,80,9,60,11,6,36,53,24,16,26,25,57,75,86,68,2,39,48,69,70,64,13,17,12,84,19,22,27,23,66,61,21,34,59,33,74,1,76,45,54,28,10,81,0,3,49,67,8,78,15,40,52,71,18,63,44,79,43,82,62,51,42,85,14,50,58,83,35,73,31,55,32,20,37,4,38,5,30,41,7,65,77}, // permutation 0
{46,65,13,8,55,15,70,79,57,41,14,10,5,69,32,47,72,3,49,39,51,78,1,34,62,16,24,50,23,17,22,25,76,58,18,73,38,84,9,80,12,33,11,82,60,36,30,2,77,81,64,35,0,21,27,26,44,53,56,75,86,4,66,61,43,31,19,28,74,59,42,37,52,7,45,20,54,85,63,67,6,71,29,40,48,83,68}, // permutation 1
{52,8,82,7,44,10,86,80,66,24,81,15,55,42,74,72,78,23,34,43,29,59,56,5,22,4,77,58,64,48,1,46,9,39,76,47,30,79,71,53,37,18,41,67,57,19,75,36,3,54,20,0,31,65,16,85,28,68,14,49,17,26,32,45,21,84,63,25,83,13,51,73,69,33,40,38,11,35,62,12,50,70,61,27,6,2,60}, // permutation 2
{45,39,80,44,52,9,49,40,36,60,84,67,3,51,75,22,8,20,12,81,58,0,82,56,14,71,64,72,2,7,24,48,68,53,47,65,29,74,69,26,78,15,66,27,61,86,28,4,33,59,6,11,76,21,57,54,13,30,63,83,25,10,41,55,43,1,35,62,42,17,38,73,79,19,23,16,85,37,50,31,46,32,77,5,18,34,70}, // permutation 3
{24,68,6,33,55,44,8,18,79,19,22,23,69,34,30,50,70,14,26,81,59,62,86,16,60,3,12,65,82,11,38,46,58,31,76,1,66,25,47,73,74,43,52,32,78,71,27,51,57,56,45,49,77,63,48,53,21,35,40,75,13,9,84,29,10,37,15,64,39,54,80,72,83,2,36,28,61,85,20,0,67,17,5,42,4,7,41}, // permutation 4
{26,38,64,63,57,59,17,28,4,22,35,19,76,5,50,34,2,53,84,41,29,13,78,12,21,69,33,75,36,48,7,58,81,54,0,73,27,9,24,62,68,14,25,83,66,8,61,10,74,67,86,15,30,44,55,1,79,65,82,46,16,60,20,71,32,56,85,3,42,39,70,23,40,77,11,47,49,80,6,37,52,43,51,31,18,72,45}, // permutation 5
{82,79,62,12,36,40,26,56,28,44,25,81,55,2,86,7,53,66,21,27,83,29,64,73,43,6,34,61,3,54,8,16,14,32,69,71,45,20,11,60,68,9,30,58,10,38,67,85,84,23,46,17,59,48,18,19,24,78,75,49,52,80,1,57,76,42,15,33,51,63,13,72,4,77,50,37,65,5,41,0,31,35,22,39,47,74,70}, // permutation 6
{36,63,18,4,59,82,39,35,26,67,58,32,49,50,8,51,2,54,84,52,9,75,10,66,56,68,78,40,29,70,37,15,73,76,34,38,25,45,69,48,74,0,23,71,20,85,55,43,21,1,33,41,60,5,64,83,53,44,6,61,46,79,65,14,47,42,22,80,3,31,27,24,11,57,86,77,12,7,72,81,30,16,17,28,19,62,13}, // permutation 7
{34,5,76,74,17,35,55,23,84,28,26,0,9,41,4,42,16,45,50,64,12,19,29,71,66,86,8,58,46,81,3,15,69,59,37,40,27,18,22,52,75,53,67,30,38,63,48,6,56,68,54,49,24,31,47,85,82,62,44,7,51,80,33,61,57,77,13,20,21,43,10,1,32,14,73,11,36,83,25,72,70,79,2,60,39,78,65}, // permutation 8
{80,59,24,78,22,31,73,76,54,20,45,69,51,60,1,9,29,56,16,30,50,41,32,38,79,81,66,63,3,26,0,12,86,57,23,8,36,47,71,85,15,68,74,46,5,35,33,48,34,82,14,75,27,77,37,6,28,58,40,83,52,2,62,19,44,25,13,67,39,43,61,7,11,42,18,70,53,4,49,65,64,72,55,21,84,17,10} // permutation 9
};

// Seed: 1684925344

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
   volatile uint64_t  f1;
};

struct S1 {
    int32_t g_25;
    int32_t g_29;
    int64_t g_33;
    VECTOR(uint8_t, 2) g_44;
    volatile uint32_t g_68;
    uint64_t g_91;
    uint32_t g_103;
    VECTOR(int16_t, 8) g_108;
    VECTOR(int8_t, 2) g_113;
    volatile VECTOR(int8_t, 4) g_129;
    int32_t g_138;
    volatile VECTOR(uint64_t, 16) g_152;
    VECTOR(int64_t, 16) g_157;
    volatile VECTOR(int64_t, 4) g_158;
    VECTOR(int32_t, 8) g_161;
    int32_t g_165;
    VECTOR(int32_t, 2) g_166;
    volatile VECTOR(int8_t, 2) g_294;
    uint8_t g_299;
    uint32_t g_323[9];
    uint32_t g_325;
    uint32_t g_327;
    uint16_t g_360;
    volatile VECTOR(uint32_t, 8) g_392;
    uint16_t g_393;
    int32_t *g_411;
    int32_t ** volatile g_410[4][4];
    int32_t ** volatile g_412[3];
    int32_t ** volatile g_413;
    volatile VECTOR(uint32_t, 8) g_431;
    int32_t *g_433;
    int32_t *g_434;
    union U0 g_437[7];
    union U0 g_439;
    union U0 g_440[6][9];
    union U0 g_441;
    union U0 g_442;
    union U0 g_443;
    union U0 g_444;
    union U0 g_445;
    union U0 g_446[8];
    union U0 g_447;
    union U0 g_448;
    union U0 g_449;
    union U0 g_450;
    union U0 g_451;
    union U0 g_452;
    union U0 g_453;
    union U0 g_454[2];
    union U0 g_455;
    union U0 *g_438[3][10][8];
    union U0 g_457;
    volatile uint64_t g_460;
    volatile uint64_t g_461[3];
    volatile uint64_t *g_459[10][1];
    volatile uint64_t **g_458;
    VECTOR(uint64_t, 2) g_467;
    int32_t ** volatile g_485[1];
    VECTOR(int32_t, 4) g_490;
    uint32_t g_491;
    uint32_t g_497;
    int64_t g_507;
    volatile VECTOR(uint16_t, 16) g_536;
    uint16_t g_541;
    union U0 g_565;
    VECTOR(int64_t, 2) g_590;
    VECTOR(int16_t, 2) g_598;
    VECTOR(int8_t, 16) g_599;
    VECTOR(int16_t, 16) g_600;
    uint16_t *g_603;
    uint8_t g_606;
    volatile int32_t g_608;
    VECTOR(int8_t, 16) g_645;
    volatile VECTOR(uint8_t, 2) g_648;
    volatile VECTOR(int8_t, 4) g_668;
    VECTOR(uint32_t, 8) g_701;
    int32_t * volatile g_711;
    volatile VECTOR(uint64_t, 16) g_726;
    volatile VECTOR(uint64_t, 4) g_727;
    volatile VECTOR(uint64_t, 2) g_734;
    int32_t g_741[9];
    VECTOR(int32_t, 16) g_744;
    volatile int8_t * volatile g_754;
    volatile VECTOR(int8_t, 8) g_789;
    VECTOR(uint8_t, 4) g_790;
    VECTOR(int16_t, 8) g_791;
    uint32_t *g_802;
    uint32_t **g_801;
    volatile VECTOR(uint64_t, 2) g_805;
    int32_t * volatile g_818;
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
uint32_t  func_1(struct S1 * p_820);
int8_t  func_2(int16_t  p_3, int32_t  p_4, uint32_t  p_5, int16_t  p_6, struct S1 * p_820);
uint16_t  func_7(int64_t  p_8, int8_t  p_9, uint64_t  p_10, int32_t  p_11, uint32_t  p_12, struct S1 * p_820);
int16_t  func_19(int32_t  p_20, int8_t  p_21, uint64_t  p_22, struct S1 * p_820);
int32_t  func_37(uint16_t  p_38, int8_t  p_39, struct S1 * p_820);
union U0  func_47(int64_t  p_48, uint64_t  p_49, int32_t * p_50, uint8_t  p_51, int64_t  p_52, struct S1 * p_820);
uint16_t  func_55(int32_t * p_56, struct S1 * p_820);
int8_t  func_57(uint32_t  p_58, int32_t * p_59, uint16_t  p_60, int16_t  p_61, uint8_t  p_62, struct S1 * p_820);
uint32_t  func_73(uint8_t  p_74, int8_t  p_75, int32_t * p_76, struct S1 * p_820);
int32_t  func_77(int32_t * p_78, uint32_t  p_79, uint64_t  p_80, int8_t  p_81, int32_t * p_82, struct S1 * p_820);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_820->g_comm_values p_820->l_comm_values p_820->g_44 p_820->g_68 p_820->g_91 p_820->g_25 p_820->g_108 p_820->g_113 p_820->g_129 p_820->g_138 p_820->g_33 p_820->g_103 p_820->g_152 p_820->g_157 p_820->g_158 p_820->g_161 p_820->g_165 p_820->g_166 p_820->g_294 p_820->g_458 p_820->g_467 p_820->g_411 p_820->g_439.f0 p_820->g_29 p_820->g_327 p_820->g_434 p_820->g_451.f0 p_820->g_444.f0 p_820->g_497 p_820->g_536 p_820->g_393 p_820->g_490 p_820->g_447.f0 p_820->g_431 p_820->g_323 p_820->g_565 p_820->g_299 p_820->g_590 p_820->g_437.f0 p_820->g_598 p_820->g_599 p_820->g_600 p_820->g_507 p_820->g_606 p_820->g_459 p_820->g_413 p_820->g_645 p_820->g_648 p_820->g_541 p_820->g_668 p_820->g_701 p_820->g_726 p_820->g_727 p_820->g_734 p_820->g_450.f0 p_820->g_741 p_820->g_325 p_820->g_744 p_820->g_754 p_820->g_789 p_820->g_790 p_820->g_791 p_820->g_801 p_820->g_805 p_820->g_818
 * writes: p_820->g_68 p_820->g_91 p_820->g_103 p_820->g_33 p_820->g_25 p_820->g_138 p_820->g_165 p_820->g_44 p_820->g_438 p_820->g_29 p_820->g_360 p_820->g_327 p_820->g_491 p_820->g_507 p_820->g_497 p_820->g_393 p_820->g_161 p_820->g_299 p_820->g_108 p_820->g_603 p_820->g_606 p_820->g_599 p_820->g_411 p_820->g_541 p_820->l_comm_values p_820->g_434 p_820->g_741
 */
uint32_t  func_1(struct S1 * p_820)
{ /* block id: 4 */
    uint8_t l_15[1][7] = {{0xF3L,0x60L,0xF3L,0xF3L,0x60L,0xF3L,0xF3L}};
    uint64_t l_18[3];
    uint32_t l_23[3];
    int32_t l_819 = (-1L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_18[i] = 18446744073709551613UL;
    for (i = 0; i < 3; i++)
        l_23[i] = 1UL;
    l_819 ^= (((~func_2(p_820->g_comm_values[p_820->tid], (func_7(p_820->g_comm_values[p_820->tid], (((0L >= (p_820->g_comm_values[p_820->tid] ^ (safe_mul_func_int8_t_s_s(l_15[0][1], (((p_820->g_comm_values[p_820->tid] , l_15[0][1]) >= (safe_rshift_func_int16_t_s_s((l_18[0] >= func_19(l_23[1], p_820->l_comm_values[(safe_mod_func_uint32_t_u_u(p_820->tid, 87))], l_23[2], p_820)), p_820->g_599.s9))) | p_820->g_490.y))))) || p_820->g_439.f0) >= l_18[0]), p_820->l_comm_values[(safe_mod_func_uint32_t_u_u(p_820->tid, 87))], l_18[2], p_820->g_590.x, p_820) && 4UL), l_18[0], p_820->g_590.x, p_820)) || l_15[0][5]) < l_15[0][1]);
    return l_18[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_165 p_820->g_91 p_820->g_668 p_820->g_541 p_820->g_103 p_820->g_598 p_820->g_701 p_820->g_25 p_820->g_138 p_820->g_437.f0 p_820->g_726 p_820->g_727 p_820->g_734 p_820->g_450.f0 p_820->g_741 p_820->g_129 p_820->g_325 p_820->g_108 p_820->g_744 p_820->g_754 p_820->g_599 p_820->g_327 p_820->g_33 p_820->g_497 p_820->g_789 p_820->g_790 p_820->g_791 p_820->g_801 p_820->g_805 p_820->g_818
 * writes: p_820->g_165 p_820->g_541 p_820->g_103 p_820->l_comm_values p_820->g_33 p_820->g_327 p_820->g_434 p_820->g_138 p_820->g_25 p_820->g_497 p_820->g_741
 */
int8_t  func_2(int16_t  p_3, int32_t  p_4, uint32_t  p_5, int16_t  p_6, struct S1 * p_820)
{ /* block id: 285 */
    uint32_t l_661 = 0UL;
    VECTOR(int8_t, 8) l_666 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6FL), 0x6FL), 0x6FL, 1L, 0x6FL);
    VECTOR(int8_t, 8) l_667 = (VECTOR(int8_t, 8))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 1L), 1L), 1L, 0x60L, 1L);
    int64_t *l_671 = &p_820->g_33;
    uint8_t l_678[6];
    VECTOR(int32_t, 8) l_742 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x04C36BA2L), 0x04C36BA2L), 0x04C36BA2L, 0L, 0x04C36BA2L);
    VECTOR(uint64_t, 4) l_756 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xEE614006988E91A0L), 0xEE614006988E91A0L);
    uint32_t l_784 = 0xDFF20239L;
    int i;
    for (i = 0; i < 6; i++)
        l_678[i] = 0xCDL;
    for (p_820->g_165 = 0; (p_820->g_165 > 8); p_820->g_165++)
    { /* block id: 288 */
        uint32_t l_660 = 0x8CECA744L;
        int64_t *l_673 = (void*)0;
        int64_t **l_672 = &l_673;
        VECTOR(uint8_t, 4) l_674 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xBCL), 0xBCL);
        VECTOR(uint8_t, 16) l_675 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
        int32_t l_707[5][6] = {{0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L},{0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L},{0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L},{0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L},{0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L,0x01FD6F89L}};
        int32_t l_710 = (-4L);
        VECTOR(uint64_t, 8) l_755 = (VECTOR(uint64_t, 8))(0x20BADA56C28672E6L, (VECTOR(uint64_t, 4))(0x20BADA56C28672E6L, (VECTOR(uint64_t, 2))(0x20BADA56C28672E6L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x20BADA56C28672E6L, 18446744073709551615UL);
        int64_t l_766[5] = {0x2C95A241F0BB705CL,0x2C95A241F0BB705CL,0x2C95A241F0BB705CL,0x2C95A241F0BB705CL,0x2C95A241F0BB705CL};
        uint32_t l_777 = 1UL;
        VECTOR(uint64_t, 16) l_807 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL);
        int i, j;
        if ((((safe_mod_func_int8_t_s_s(((l_660 > p_820->g_91) < l_661), 0x78L)) , 0UL) != ((((!(safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 2))(l_666.s24)).yyxxxyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0x59L, 0L, ((VECTOR(int8_t, 8))(l_667.s26752201)), 0x2DL, ((VECTOR(int8_t, 2))(p_820->g_668.yy)), (safe_mul_func_uint16_t_u_u((l_671 == ((*l_672) = &p_820->g_33)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x167BL, 65535UL)))).yxxyyyyxyyxyxyyx)).s3f)).odd)), 0x00L, 0x33L)).s7695)).zwzzyxwz))), ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_674.xwwzyxzz)).even)).wwzxwwyzyzzzyxzx)).seb)), 0x83L, 0xD1L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x70L, 0xC9L)), 255UL, 0x62L)).hi)).xxxx, ((VECTOR(uint8_t, 2))(l_675.s40)).xxxy))).zxzxwwzw))).s4, 4)), (safe_rshift_func_uint16_t_u_u(1UL, l_674.y))))) & 0xB94BL) , (-8L)) || l_678[5])))
        { /* block id: 290 */
            int16_t l_684 = 0x2E09L;
            uint32_t l_689 = 0x44D2722DL;
            int32_t l_714 = 0x5502A664L;
            VECTOR(uint64_t, 8) l_733 = (VECTOR(uint64_t, 8))(0x40F246D99224F7BAL, (VECTOR(uint64_t, 4))(0x40F246D99224F7BAL, (VECTOR(uint64_t, 2))(0x40F246D99224F7BAL, 0UL), 0UL), 0UL, 0x40F246D99224F7BAL, 0UL);
            int32_t l_775 = (-8L);
            VECTOR(uint64_t, 16) l_806 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x78069EE284F24592L), 0x78069EE284F24592L), 0x78069EE284F24592L, 1UL, 0x78069EE284F24592L, (VECTOR(uint64_t, 2))(1UL, 0x78069EE284F24592L), (VECTOR(uint64_t, 2))(1UL, 0x78069EE284F24592L), 1UL, 0x78069EE284F24592L, 1UL, 0x78069EE284F24592L);
            int i;
            for (p_820->g_541 = (-27); (p_820->g_541 <= 51); p_820->g_541 = safe_add_func_uint8_t_u_u(p_820->g_541, 1))
            { /* block id: 293 */
                VECTOR(int8_t, 8) l_698 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x63L), 0x63L), 0x63L, 2L, 0x63L);
                VECTOR(uint64_t, 4) l_732 = (VECTOR(uint64_t, 4))(0xDFED57C63DE5B5A3L, (VECTOR(uint64_t, 2))(0xDFED57C63DE5B5A3L, 0xC8A7DC41BA2361D7L), 0xC8A7DC41BA2361D7L);
                VECTOR(int32_t, 8) l_743 = (VECTOR(int32_t, 8))(0x500207ADL, (VECTOR(int32_t, 4))(0x500207ADL, (VECTOR(int32_t, 2))(0x500207ADL, 1L), 1L), 1L, 0x500207ADL, 1L);
                uint16_t **l_749 = &p_820->g_603;
                int8_t *l_752[1][4][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_768 = (void*)0;
                uint32_t *l_799 = &l_689;
                uint32_t **l_798 = &l_799;
                int16_t l_813 = 0x71EDL;
                int i, j, k;
                for (p_820->g_103 = 25; (p_820->g_103 < 58); p_820->g_103 = safe_add_func_uint8_t_u_u(p_820->g_103, 7))
                { /* block id: 296 */
                    int16_t *l_683[2];
                    int32_t l_704 = 0x5FCD59AAL;
                    int32_t l_709 = 1L;
                    uint32_t *l_730[4] = {&p_820->g_103,&p_820->g_103,&p_820->g_103,&p_820->g_103};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_683[i] = (void*)0;
                    if (((l_684 = (0x49CFL <= 0x5D02L)) > (p_6 & p_820->g_598.y)))
                    { /* block id: 298 */
                        uint32_t l_702[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        int8_t *l_703 = (void*)0;
                        int8_t *l_705 = (void*)0;
                        int8_t *l_706 = (void*)0;
                        int64_t *l_708[8][1][9] = {{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}},{{&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507,&p_820->g_507,&p_820->g_507,(void*)0,&p_820->g_507}}};
                        int32_t *l_712 = (void*)0;
                        int32_t *l_713[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_713[i] = (void*)0;
                        l_714 ^= ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((l_710 |= (l_709 = ((4294967295UL & p_3) == (((l_689 || (safe_sub_func_int64_t_s_s(((l_689 & 0x1F76L) , (safe_sub_func_uint8_t_u_u(0x0CL, (l_707[0][2] &= ((+(safe_rshift_func_int8_t_s_s((l_704 = (safe_mul_func_int8_t_s_s(((l_684 , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_698.s74)), ((safe_lshift_func_uint8_t_u_u(l_675.sc, (((VECTOR(uint32_t, 4))(p_820->g_701.s2004)).w & (l_702[4] |= 0L)))) <= (-1L)), p_4, 0x1BL, (-1L), (-1L), 0x0AL)))).s3) | l_674.z), p_6))), 3))) && 255UL))))), l_689))) >= l_698.s4) , l_707[1][3])))) , p_820->g_25) , l_678[5]), p_820->g_138)), 0UL)) > l_666.s5);
                        return p_3;
                    }
                    else
                    { /* block id: 306 */
                        int32_t l_715[5];
                        int32_t *l_716 = (void*)0;
                        int32_t *l_717 = &l_710;
                        VECTOR(uint64_t, 2) l_731 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x62640BE447A7EEC6L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_715[i] = 0x10472ABDL;
                        (*l_717) |= (!l_715[1]);
                        (*l_717) = (safe_add_func_int64_t_s_s(((*l_673) = ((p_820->g_437[2].f0 , (safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((p_820->l_comm_values[(safe_mod_func_uint32_t_u_u(p_820->tid, 87))] = ((safe_rshift_func_uint16_t_u_u(0x9ABEL, 6)) , 0x5774CA18A6471DF2L)), p_6)), ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_820->g_726.s96f2)).even)).xyyxxyxyyyxxyyyx, ((VECTOR(uint64_t, 16))(p_820->g_727.zzxyxxwyxxyxyxyw))))).sf309, ((VECTOR(uint64_t, 16))((safe_div_func_uint8_t_u_u((&p_820->g_497 != l_730[1]), GROUP_DIVERGE(1, 1))), ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(l_731.xxyx)).yzxywyxz, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(l_732.wxyy)).odd, ((VECTOR(uint64_t, 4))(l_733.s1274)).hi))).yyxyxyyxyyyxxyxx)).hi))), ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_820->g_734.yyxyyxyx)).odd)), (uint64_t)((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_6, p_820->g_450.f0)) > (-3L)), p_820->g_741[5])), 5)) && GROUP_DIVERGE(1, 1)), (uint64_t)l_667.s7))), ((VECTOR(uint64_t, 4))(0UL))))), ((VECTOR(uint64_t, 2))(7UL)), 6UL)).sf791, ((VECTOR(uint64_t, 4))(0UL))))).z))) , p_820->g_129.y)), p_820->g_325));
                    }
                }
                if (((-8L) < p_820->g_108.s2))
                { /* block id: 313 */
                    int8_t **l_753[5] = {&l_752[0][2][3],&l_752[0][2][3],&l_752[0][2][3],&l_752[0][2][3],&l_752[0][2][3]};
                    uint64_t *l_757[10];
                    int32_t l_767 = 0L;
                    int32_t l_776[2][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_757[i] = (void*)0;
                    l_714 = ((VECTOR(int32_t, 8))(0x3935F9BFL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(l_742.s43)).yxxyyxxxyyxxyyyx, ((VECTOR(int32_t, 4))(l_743.s5413)).wxxyzzwyxwyyyyyw, ((VECTOR(int32_t, 16))(p_820->g_744.seb3c137f261a81b1))))).s8672)).w, 0x3C818409L, (~l_743.s2), p_4, ((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(((void*)0 == l_749), (l_742.s5 &= ((l_684 >= ((l_752[0][2][0] = l_752[0][2][5]) != p_820->g_754)) && ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_755.s1504501275557724)).s152f)), ((VECTOR(uint64_t, 4))(l_756.xxzx))))).x)))), (safe_add_func_uint8_t_u_u((p_820->g_599.sa != ((((safe_mul_func_uint8_t_u_u(p_3, p_6)) < 0x4FL) | p_4) >= p_820->g_598.x)), l_675.se)))) == 0x3CBE04F95D7E642BL), 0L, 0L)).s4;
                    if ((0x2E31L & p_4))
                    { /* block id: 317 */
                        uint32_t *l_762 = &p_820->g_327;
                        int32_t **l_769 = &p_820->g_434;
                        l_767 &= (((*l_762)++) , (p_5 ^ (safe_unary_minus_func_uint64_t_u(l_766[0]))));
                        (*l_769) = ((((p_5 == (p_3 , (l_768 == (void*)0))) , 0x09ABL) || (p_3 <= (-1L))) , &l_767);
                        return p_6;
                    }
                    else
                    { /* block id: 322 */
                        int32_t *l_770 = (void*)0;
                        int32_t *l_771 = &p_820->g_138;
                        (*l_771) = 0x48E4D0B4L;
                    }
                    for (p_820->g_33 = (-2); (p_820->g_33 > 27); p_820->g_33 = safe_add_func_uint16_t_u_u(p_820->g_33, 8))
                    { /* block id: 327 */
                        int32_t *l_774[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_777++;
                        if (p_4)
                            continue;
                        if (p_5)
                            continue;
                    }
                    for (p_820->g_25 = (-19); (p_820->g_25 == 5); p_820->g_25++)
                    { /* block id: 334 */
                        return p_4;
                    }
                }
                else
                { /* block id: 337 */
                    int32_t l_812 = 0x59891E5BL;
                    for (p_820->g_497 = 0; (p_820->g_497 > 19); p_820->g_497 = safe_add_func_int16_t_s_s(p_820->g_497, 2))
                    { /* block id: 340 */
                        uint32_t ***l_800 = &l_798;
                        VECTOR(uint64_t, 4) l_808 = (VECTOR(uint64_t, 4))(0x10DB07679B60132CL, (VECTOR(uint64_t, 2))(0x10DB07679B60132CL, 0UL), 0UL);
                        VECTOR(int32_t, 16) l_811 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x2C465D96L), 0x2C465D96L), 0x2C465D96L, 9L, 0x2C465D96L, (VECTOR(int32_t, 2))(9L, 0x2C465D96L), (VECTOR(int32_t, 2))(9L, 0x2C465D96L), 9L, 0x2C465D96L, 9L, 0x2C465D96L);
                        int32_t *l_814[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_814[i] = &p_820->g_138;
                        l_812 = ((((p_4 && l_784) < FAKE_DIVERGE(p_820->group_1_offset, get_group_id(1), 10)) || FAKE_DIVERGE(p_820->global_2_offset, get_global_id(2), 10)) | ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((((l_684 < p_4) | ((safe_mod_func_uint8_t_u_u(((((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))((safe_div_func_int64_t_s_s(((((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_820->g_789.s6102707764111710)).s83)), ((VECTOR(uint8_t, 2))(p_820->g_790.zz))))), 1L, (-1L))).odd, ((VECTOR(int16_t, 16))(0x6BACL, 0x63A5L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(p_820->g_791.s50)), (int16_t)p_3))), 3L, 1L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x5251L, (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((l_811.s7 = ((((*l_800) = l_798) != p_820->g_801) & (+(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x4E29FFEF797DE336L, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_820->g_805.yyyxyyyx)).s6677231700552110)).s205d))).lo, ((VECTOR(uint64_t, 16))(l_806.s4ee33b6610869683)).s30, ((VECTOR(uint64_t, 8))(l_807.s9bc143de)).s60))), ((VECTOR(uint64_t, 4))(l_808.zyxy)), 0xAB719506ED7C771DL)))).s40)).even, p_820->g_327)) , (safe_rshift_func_int16_t_s_s(p_6, l_808.w))) <= p_6)))) <= 1UL), 0)) , l_675.s3), FAKE_DIVERGE(p_820->group_0_offset, get_group_id(0), 10))) != FAKE_DIVERGE(p_820->local_1_offset, get_local_id(1), 10)), 0x8C9A6846L)), (-4L), ((VECTOR(int16_t, 4))(0x0463L)), p_820->g_789.s2, ((VECTOR(int16_t, 4))(1L)), p_5, l_733.s3, 1L, 0x5B74L)).s74e2)), l_812, ((VECTOR(int16_t, 4))(0x4260L)), (-1L))).s7a))).lo <= 0x5140L) == 0x99CCD9EDL), GROUP_DIVERGE(0, 1))), (-1L), 0x763C247EC472636FL, 0x7E93C14E4D80E542L, ((VECTOR(int64_t, 2))(2L)), (-1L), 0x55B2F88DAC27C143L)).s36, ((VECTOR(int64_t, 2))(0x07F5BF164DA5E7E3L))))), 0x557E04E91260AA08L)).z <= l_812) > l_742.s1), 1UL)) >= GROUP_DIVERGE(2, 1))) != p_6), l_813, 0x3BA5L, 65535UL)).yxzwyyzy)).s36)).odd);
                    }
                    return p_820->g_497;
                }
            }
            return p_5;
        }
        else
        { /* block id: 349 */
            uint32_t l_817 = 0x9D8FD563L;
            (*p_820->g_818) = (l_756.w ^ (safe_mul_func_int16_t_s_s(0x3E4AL, (l_817 ^= 0UL))));
            if (l_817)
                break;
        }
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_411 p_820->g_458 p_820->g_459 p_820->g_29 p_820->g_413 p_820->g_25 p_820->g_434 p_820->g_165 p_820->g_645 p_820->g_648 p_820->g_541 p_820->g_497
 * writes: p_820->g_25 p_820->g_599 p_820->g_165 p_820->g_411
 */
uint16_t  func_7(int64_t  p_8, int8_t  p_9, uint64_t  p_10, int32_t  p_11, uint32_t  p_12, struct S1 * p_820)
{ /* block id: 274 */
    VECTOR(int32_t, 2) l_613 = (VECTOR(int32_t, 2))(0x3AFFBA4EL, (-1L));
    uint16_t *l_614 = &p_820->g_541;
    uint16_t **l_615 = &p_820->g_603;
    uint16_t **l_616 = &l_614;
    uint64_t l_623 = 1UL;
    VECTOR(uint32_t, 16) l_632 = (VECTOR(uint32_t, 16))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967295UL), 4294967295UL), 4294967295UL, 9UL, 4294967295UL, (VECTOR(uint32_t, 2))(9UL, 4294967295UL), (VECTOR(uint32_t, 2))(9UL, 4294967295UL), 9UL, 4294967295UL, 9UL, 4294967295UL);
    uint32_t l_633 = 8UL;
    uint64_t *l_640 = &l_623;
    int16_t *l_643[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_644 = 1L;
    VECTOR(int8_t, 4) l_646 = (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 0x1BL), 0x1BL);
    VECTOR(uint8_t, 16) l_647 = (VECTOR(uint8_t, 16))(0x85L, (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 0x1FL), 0x1FL), 0x1FL, 0x85L, 0x1FL, (VECTOR(uint8_t, 2))(0x85L, 0x1FL), (VECTOR(uint8_t, 2))(0x85L, 0x1FL), 0x85L, 0x1FL, 0x85L, 0x1FL);
    int32_t **l_655[5][8] = {{(void*)0,(void*)0,&p_820->g_433,(void*)0,(void*)0,(void*)0,(void*)0,&p_820->g_433},{(void*)0,(void*)0,&p_820->g_433,(void*)0,(void*)0,(void*)0,(void*)0,&p_820->g_433},{(void*)0,(void*)0,&p_820->g_433,(void*)0,(void*)0,(void*)0,(void*)0,&p_820->g_433},{(void*)0,(void*)0,&p_820->g_433,(void*)0,(void*)0,(void*)0,(void*)0,&p_820->g_433},{(void*)0,(void*)0,&p_820->g_433,(void*)0,(void*)0,(void*)0,(void*)0,&p_820->g_433}};
    int i, j;
    (*p_820->g_411) = p_11;
    (*p_820->g_434) ^= ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_613.yxxx)).even)).yxxxyyxxyyyxyxxx, (int32_t)(&p_820->g_393 == ((*l_616) = l_614)), (int32_t)((safe_add_func_int32_t_s_s(((&p_820->g_299 == &p_820->g_299) < ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))(0x6A97C7D70910284DL, 0x6C1702C90B5F5081L)).xyxyyxxx, ((VECTOR(int64_t, 4))((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((p_820->g_599.s7 = (((FAKE_DIVERGE(p_820->local_2_offset, get_local_id(2), 10) , ((p_10 = l_623) , (*p_820->g_458))) == &l_623) < (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_623, ((safe_sub_func_uint64_t_u_u((((((safe_sub_func_uint8_t_u_u(p_12, 0x18L)) > l_623) && p_820->g_29) , l_632.se) < (-10L)), l_613.y)) , FAKE_DIVERGE(p_820->global_0_offset, get_global_id(0), 10)))), 1)))), 0x57L)) == p_9), l_632.sd)), ((VECTOR(int64_t, 2))(0x71410287E2B82EEAL)), 0x39066BF22E5FF14EL)).yxwzyxzz))).s4), (**p_820->g_413))) == l_633)))).sef31)).xxxywyxz, ((VECTOR(int32_t, 8))(0x0E9C3088L))))).s6;
    (*p_820->g_413) = (((VECTOR(uint8_t, 16))(p_10, (safe_rshift_func_int16_t_s_s(l_613.x, (safe_lshift_func_int16_t_s_s(l_632.s2, (l_644 ^= (l_633 & ((++(*l_640)) > l_613.y))))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(p_820->g_645.sac4329c5)).s77, ((VECTOR(int8_t, 4))(l_646.xyyy)).even))).xyxyxxxx, ((VECTOR(uint8_t, 16))((l_613.x = l_623), 0x9DL, ((VECTOR(uint8_t, 8))(l_647.s402f5634)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_8, 0x81L, ((VECTOR(uint8_t, 2))(p_820->g_648.yy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x69L, 0UL, 9UL, 0x92L)))))))).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x01L, (((safe_div_func_uint16_t_u_u(((void*)0 == l_655[3][5]), p_12)) && p_9) == p_8))), p_10)), ((VECTOR(uint8_t, 2))(0x4EL)), 9UL)).odd)).yyxxyyxy)), 4UL, p_820->g_541, ((VECTOR(uint8_t, 2))(0x35L)), 255UL, 0x44L, 0x87L, 0x99L)).sf7be))).zxxzyxxzyyzzxzwz)).sc4)))).xxyy)), 1UL, 0x23L)).hi, ((VECTOR(uint8_t, 8))(1UL))))).s70, (uint8_t)GROUP_DIVERGE(2, 1)))))), p_820->g_497, ((VECTOR(uint8_t, 8))(0x21L)), ((VECTOR(uint8_t, 2))(0x17L)), 255UL)).s0 , (void*)0);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_44 p_820->g_68 p_820->g_91 p_820->g_25 p_820->g_comm_values p_820->l_comm_values p_820->g_108 p_820->g_113 p_820->g_129 p_820->g_138 p_820->g_33 p_820->g_103 p_820->g_152 p_820->g_157 p_820->g_158 p_820->g_161 p_820->g_165 p_820->g_166 p_820->g_294 p_820->g_458 p_820->g_467 p_820->g_411 p_820->g_439.f0 p_820->g_29 p_820->g_327 p_820->g_434 p_820->g_451.f0 p_820->g_444.f0 p_820->g_497 p_820->g_536 p_820->g_393 p_820->g_490 p_820->g_447.f0 p_820->g_431 p_820->g_323 p_820->g_565 p_820->g_299 p_820->g_590 p_820->g_437.f0 p_820->g_598 p_820->g_599 p_820->g_600 p_820->g_507 p_820->g_606
 * writes: p_820->g_68 p_820->g_91 p_820->g_103 p_820->g_33 p_820->g_25 p_820->g_138 p_820->g_165 p_820->g_44 p_820->g_438 p_820->g_29 p_820->g_360 p_820->g_327 p_820->g_491 p_820->g_507 p_820->g_497 p_820->g_393 p_820->g_161 p_820->g_299 p_820->g_108 p_820->g_603 p_820->g_606
 */
int16_t  func_19(int32_t  p_20, int8_t  p_21, uint64_t  p_22, struct S1 * p_820)
{ /* block id: 5 */
    int32_t *l_24 = &p_820->g_25;
    int32_t *l_26[4][8][6] = {{{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25}},{{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25}},{{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25}},{{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25},{&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25,&p_820->g_25}}};
    int64_t l_27 = 0x62699FF93F8DE905L;
    int8_t l_28 = 0x45L;
    uint32_t l_30[2][3];
    uint8_t l_34 = 4UL;
    uint32_t l_566 = 7UL;
    int64_t l_607 = (-8L);
    int8_t l_609 = 0x08L;
    uint8_t l_610 = 255UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_30[i][j] = 1UL;
    }
    l_30[0][0]++;
    l_34--;
    p_820->g_606 |= (&p_820->g_29 == (func_37(((FAKE_DIVERGE(p_820->local_0_offset, get_local_id(0), 10) , ((0x58B9E079L > (safe_mod_func_uint64_t_u_u(((l_566 ^= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(0xC3L, 0xA3L, 0xE8L, 0UL)).zwyyyyzzyxyxxyxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_820->g_44.xxyx)).zwzwxzyw)).s3046247543213166, (uint8_t)(safe_lshift_func_int8_t_s_s(((&p_820->g_29 == (func_47(((safe_mul_func_uint16_t_u_u(func_55(((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x25L, func_57(p_20, &p_820->g_29, (~65534UL), p_20, p_21, p_820), 0x72L, 0x1BL)).even)).lo || 0x64L) , l_24), p_820), 65533UL)) == p_820->g_comm_values[p_820->tid]), p_22, p_820->g_411, p_20, p_820->g_323[6], p_820) , l_24)) || p_21), 1)), (uint8_t)0xBCL))).s6344)), 0x0AL, ((VECTOR(uint8_t, 2))(0x2DL)), 0x12L)).s4740025663454066, ((VECTOR(uint8_t, 16))(0UL))))).s41)).xxxxxxyyyxxyxyxx)).s6, 3))) > p_22), p_820->l_comm_values[(safe_mod_func_uint32_t_u_u(p_820->tid, 87))]))) , p_20)) <= 18446744073709551612UL), p_820->g_467.x, p_820) , l_26[1][5][2]));
    ++l_610;
    return p_820->g_165;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_299 p_820->g_91 p_820->g_590 p_820->g_437.f0 p_820->g_44 p_820->g_157 p_820->g_598 p_820->g_599 p_820->g_600 p_820->g_467 p_820->g_507 p_820->g_327 p_820->g_113 p_820->g_411 p_820->g_497
 * writes: p_820->g_299 p_820->g_91 p_820->g_108 p_820->g_33 p_820->g_603 p_820->g_25
 */
int32_t  func_37(uint16_t  p_38, int8_t  p_39, struct S1 * p_820)
{ /* block id: 249 */
    uint16_t l_569[4];
    uint64_t *l_576 = (void*)0;
    uint64_t *l_577 = (void*)0;
    uint64_t *l_578 = &p_820->g_91;
    int64_t *l_581 = (void*)0;
    int64_t *l_582 = (void*)0;
    int32_t l_583 = 9L;
    uint16_t l_584[9][6][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
    int32_t l_585 = 0x7E0DDD13L;
    int16_t *l_586[1];
    VECTOR(int32_t, 8) l_589 = (VECTOR(int32_t, 8))(0x3A3EF8DCL, (VECTOR(int32_t, 4))(0x3A3EF8DCL, (VECTOR(int32_t, 2))(0x3A3EF8DCL, (-1L)), (-1L)), (-1L), 0x3A3EF8DCL, (-1L));
    int64_t *l_591 = &p_820->g_33;
    VECTOR(int8_t, 16) l_601 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 0x32L), 0x32L), 0x32L, 0x24L, 0x32L, (VECTOR(int8_t, 2))(0x24L, 0x32L), (VECTOR(int8_t, 2))(0x24L, 0x32L), 0x24L, 0x32L, 0x24L, 0x32L);
    uint16_t *l_602 = &l_584[3][2][0];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_569[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_586[i] = (void*)0;
    for (p_820->g_299 = (-23); (p_820->g_299 < 25); p_820->g_299 = safe_add_func_int8_t_s_s(p_820->g_299, 6))
    { /* block id: 252 */
        VECTOR(int32_t, 4) l_570 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L));
        int32_t l_571[4][4][7] = {{{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)}},{{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)}},{{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)}},{{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)},{0x377DE0AAL,0x6DD76205L,(-1L),3L,0x59FCDCEEL,(-5L),(-1L)}}};
        int i, j, k;
        if (l_569[3])
            break;
        l_571[1][0][1] &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x1E8B9C85L, 0L)).xyxy, ((VECTOR(int32_t, 4))(l_570.wxwz))))))).x;
        l_570.x &= p_38;
    }
    (*p_820->g_411) = ((p_820->g_603 = (((p_820->g_108.s3 = (safe_lshift_func_int8_t_s_u((~(((*l_578)++) < ((l_585 = (l_584[5][1][0] = (l_583 |= (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-2L), (-1L))), (-3L), (-1L))).z == 0xD0D8L)))) <= l_569[2]))), 3))) < (!(0x6D1B473BL & (safe_div_func_int8_t_s_s(((((l_569[3] < ((!((*l_591) = (((VECTOR(int32_t, 2))(l_589.s72)).lo , ((VECTOR(int64_t, 2))(p_820->g_590.yy)).lo))) | ((safe_mod_func_uint8_t_u_u(p_820->g_437[2].f0, p_820->g_44.y)) > (safe_mul_func_int16_t_s_s(((((+p_39) | (safe_lshift_func_int8_t_s_s((p_820->g_157.s5 , ((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_820->g_598.xxxy)).wwzxzwxyywxzxxzw)).hi, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(p_820->g_599.s240fbf02ce495b93)).odd, ((VECTOR(uint8_t, 2))(248UL, 0xE9L)).yxyxxyxy)))))).s77)))), ((VECTOR(int16_t, 8))(p_820->g_600.s2b8f9aa5)).s53))).yxyy, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))((-9L), 0x6902L)).yxyyxyxxxxyyxyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 0x7C39L)), ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(l_601.sa39a7a36278f2500)).s81, ((VECTOR(int8_t, 16))(6L, ((VECTOR(int8_t, 8))((p_820->g_467.x , 0x26L), l_601.s6, 1L, 0x73L, p_820->g_507, 0L, 1L, 0x0CL)), p_820->g_327, ((VECTOR(int8_t, 4))(4L)), 0x1EL, 1L)).s9b))).yyxx)), ((VECTOR(uint8_t, 4))(248UL))))), 0x2FC8L, 0x1740L)).s4066125112562521, ((VECTOR(int16_t, 16))((-1L)))))).lo)).s22, ((VECTOR(int16_t, 2))((-5L)))))).yxyy, ((VECTOR(int16_t, 4))(0L))))).odd)))).lo && p_820->g_44.x) , 251UL) ^ l_569[2]) || p_820->g_113.x)), 4))) , p_38) != 0x108CL), 0x2019L))))) ^ l_601.s1) == p_38) ^ p_39), p_820->g_600.sb))))) , l_602)) == &p_820->g_541);
    for (l_583 = (-24); (l_583 <= (-28)); l_583 = safe_sub_func_uint32_t_u_u(l_583, 4))
    { /* block id: 267 */
        return p_820->g_497;
    }
    return l_584[8][5][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_91 p_820->g_25 p_820->g_565
 * writes: p_820->g_91 p_820->g_25
 */
union U0  func_47(int64_t  p_48, uint64_t  p_49, int32_t * p_50, uint8_t  p_51, int64_t  p_52, struct S1 * p_820)
{ /* block id: 234 */
    int32_t *l_546 = &p_820->g_138;
    int32_t *l_547[8][1][5] = {{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}},{{&p_820->g_25,&p_820->g_25,(void*)0,(void*)0,&p_820->g_138}}};
    int8_t l_548 = 9L;
    uint8_t l_549[10][6] = {{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L},{0x46L,0x69L,0x1CL,0x69L,0x46L,0x46L}};
    uint64_t *l_561[9][2][4] = {{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}},{{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0},{(void*)0,&p_820->g_91,&p_820->g_91,(void*)0}}};
    uint64_t **l_560 = &l_561[1][1][1];
    uint64_t ***l_562 = &l_560;
    int i, j, k;
    l_549[1][0]++;
    if ((atomic_inc(&p_820->g_atomic_input[30 * get_linear_group_id() + 12]) == 5))
    { /* block id: 237 */
        uint8_t l_552 = 6UL;
        int8_t l_553 = 0x7DL;
        int32_t l_555 = (-1L);
        int32_t *l_554 = &l_555;
        int32_t *l_556 = &l_555;
        uint16_t l_557 = 0x991BL;
        uint64_t l_558 = 1UL;
        int16_t l_559 = 0x5C3FL;
        l_553 = l_552;
        l_556 = l_554;
        l_559 = (l_557 , l_558);
        unsigned int result = 0;
        result += l_552;
        result += l_553;
        result += l_555;
        result += l_557;
        result += l_558;
        result += l_559;
        atomic_add(&p_820->g_special_values[30 * get_linear_group_id() + 12], result);
    }
    else
    { /* block id: 241 */
        (1 + 1);
    }
    (*l_562) = l_560;
    (*p_50) &= (p_51 < (p_820->g_91++));
    return p_820->g_565;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_68 p_820->g_91 p_820->g_25 p_820->g_comm_values p_820->l_comm_values p_820->g_108 p_820->g_113 p_820->g_129 p_820->g_138 p_820->g_44 p_820->g_33 p_820->g_103 p_820->g_152 p_820->g_157 p_820->g_158 p_820->g_161 p_820->g_165 p_820->g_166 p_820->g_294 p_820->g_458 p_820->g_467 p_820->g_411 p_820->g_439.f0 p_820->g_29 p_820->g_327 p_820->g_434 p_820->g_451.f0 p_820->g_444.f0 p_820->g_497 p_820->g_536 p_820->g_393 p_820->g_490 p_820->g_447.f0 p_820->g_431
 * writes: p_820->g_91 p_820->g_103 p_820->g_33 p_820->g_25 p_820->g_138 p_820->g_165 p_820->g_44 p_820->g_438 p_820->g_29 p_820->g_360 p_820->g_327 p_820->g_491 p_820->g_507 p_820->g_497 p_820->g_393 p_820->g_161
 */
uint16_t  func_55(int32_t * p_56, struct S1 * p_820)
{ /* block id: 11 */
    int64_t l_87[6][8][3] = {{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}},{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}},{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}},{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}},{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}},{{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL},{4L,0x4D024A44AA9F20BBL,0x234CB066DBB316AAL}}};
    uint64_t *l_90 = &p_820->g_91;
    VECTOR(int16_t, 4) l_96 = (VECTOR(int16_t, 4))(0x714FL, (VECTOR(int16_t, 2))(0x714FL, 0x6E32L), 0x6E32L);
    int32_t l_97 = 9L;
    uint32_t *l_102 = &p_820->g_103;
    uint32_t l_104 = 0x6CD9D43CL;
    int32_t *l_105 = &p_820->g_25;
    uint8_t *l_504 = &p_820->g_299;
    uint8_t l_508 = 3UL;
    VECTOR(uint64_t, 4) l_529 = (VECTOR(uint64_t, 4))(0x47A9E6469B5EE45EL, (VECTOR(uint64_t, 2))(0x47A9E6469B5EE45EL, 7UL), 7UL);
    VECTOR(int32_t, 4) l_542 = (VECTOR(int32_t, 4))(0x258FD17BL, (VECTOR(int32_t, 2))(0x258FD17BL, 0x4E5BAE4DL), 0x4E5BAE4DL);
    int32_t **l_544 = &p_820->g_434;
    int32_t ***l_543 = &l_544;
    uint64_t l_545[7][9][4] = {{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}},{{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL},{0UL,0x87AABD8BFE49486CL,18446744073709551606UL,0UL}}};
    int i, j, k;
    p_820->g_29 ^= (safe_sub_func_uint32_t_u_u(func_73(((func_77(p_56, ((((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((8L | ((*l_102) = (p_820->g_68 == (((l_87[1][5][2] || ((safe_lshift_func_uint16_t_u_u((((++(*l_90)) >= (l_97 |= (safe_mul_func_uint16_t_u_u(l_87[5][5][0], ((VECTOR(int16_t, 8))(l_96.xzxzwzyx)).s6)))) , ((((((((l_87[1][5][2] <= ((l_96.x , ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(l_96.y, (0x8EA3L & l_96.y))) | l_96.y), l_96.w)) ^ 0x7419DF02555567A9L)) >= l_87[4][4][2])) , l_96.z) > l_87[1][5][2]) , 0x74L) && p_820->g_25) , l_96.z) && (-6L)) ^ 0x45A54E76L)), p_820->g_comm_values[p_820->tid])) >= 0xDD4A88B036ACEBE3L)) || 0x07CFD9A5CC0B3D1FL) & p_820->g_comm_values[p_820->tid])))), l_96.x)) | l_104), 0x016FL)) & l_96.w) >= 0x57L) || l_96.z), p_820->l_comm_values[(safe_mod_func_uint32_t_u_u(p_820->tid, 87))], l_96.z, l_105, p_820) | 0x7757BED9L) , 0x0AL), p_820->g_44.y, &p_820->g_138, p_820), 6L));
    for (p_820->g_103 = 18; (p_820->g_103 < 37); p_820->g_103 = safe_add_func_int8_t_s_s(p_820->g_103, 9))
    { /* block id: 192 */
        int32_t l_494 = 0x00960AD2L;
        uint32_t **l_495 = &l_102;
        uint32_t *l_496[7];
        uint8_t *l_505 = &p_820->g_299;
        int64_t *l_506[2][3] = {{&p_820->g_507,&p_820->g_507,&p_820->g_507},{&p_820->g_507,&p_820->g_507,&p_820->g_507}};
        int32_t **l_509[2][3] = {{&p_820->g_411,&p_820->g_411,&p_820->g_411},{&p_820->g_411,&p_820->g_411,&p_820->g_411}};
        int8_t *l_510 = (void*)0;
        int8_t *l_511 = (void*)0;
        int8_t *l_512 = (void*)0;
        int8_t *l_513 = (void*)0;
        int8_t *l_514 = (void*)0;
        int8_t *l_515 = (void*)0;
        VECTOR(int8_t, 2) l_537 = (VECTOR(int8_t, 2))((-8L), 0x58L);
        uint16_t *l_538 = &p_820->g_393;
        uint16_t *l_539 = &p_820->g_360;
        uint16_t *l_540[3][9] = {{&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541},{&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541},{&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541,&p_820->g_541}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_496[i] = &p_820->g_497;
        for (l_97 = 0; (l_97 <= (-14)); l_97 = safe_sub_func_int8_t_s_s(l_97, 5))
        { /* block id: 195 */
            uint8_t l_476 = 0UL;
            int8_t *l_481 = (void*)0;
            int32_t l_482 = 1L;
            VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L));
            int i;
            --l_476;
            if ((safe_rshift_func_int8_t_s_s((l_482 = 0L), 6)))
            { /* block id: 198 */
                for (p_820->g_360 = 12; (p_820->g_360 > 36); p_820->g_360++)
                { /* block id: 201 */
                    int32_t **l_486 = &l_105;
                    (*l_486) = p_56;
                    for (p_820->g_327 = 0; (p_820->g_327 != 35); p_820->g_327 = safe_add_func_int64_t_s_s(p_820->g_327, 5))
                    { /* block id: 205 */
                        (*p_820->g_434) &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_489.xx)).yyyyyyyyxyxxxxxx)).sf929)).y;
                    }
                    (*p_56) = (*p_56);
                }
                if ((*p_56))
                    break;
            }
            else
            { /* block id: 211 */
                return p_820->g_451.f0;
            }
            (*p_820->g_434) |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_820->g_490.zx)), (-1L), 0L)))).z;
            if (l_482)
                break;
        }
        l_105 = (((((p_820->g_491 = p_820->g_157.sa) ^ ((safe_add_func_uint64_t_u_u(l_494, (((l_496[1] = ((*l_495) = &p_820->g_103)) == p_56) == 0x4308C313L))) | ((((((safe_mul_func_int16_t_s_s((-1L), (safe_lshift_func_uint8_t_u_s(((p_820->g_507 = (safe_rshift_func_uint16_t_u_u(p_820->g_138, (l_504 == l_505)))) , l_494), 4)))) != l_508) >= p_820->g_444.f0) | l_494) , (*l_105)) , 0x25EC14DC0C14756DL))) , l_496[1]) != p_56) , l_496[1]);
        l_105 = &l_97;
        p_820->g_161.s4 ^= (((l_542.w = ((((((*l_105) || ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((*l_105) = ((VECTOR(int8_t, 2))((-1L), (-2L))).hi), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-1L), 0x52L, (safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(0x1280E2EEL)) , (safe_lshift_func_uint16_t_u_s(((*l_105) = ((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((1L || (++p_820->g_497)), ((((safe_mul_func_int16_t_s_s(((!(*l_105)) >= ((0xBA1CD3E25E155DF4L && ((*l_105) == ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_529.xwxyywywwzxwxywz)).lo)).s2)) & (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_820->g_536.sdcff6e80)).s00)))).lo, (*l_105))) > ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(l_537.yxxyxxyyyxyyxyyy))))).lo)).s6), ((*l_539) = ((*l_538) |= p_820->g_113.y)))) ^ 0x433E5C6776FDDD9EL), 0xC685L)))), 0UL)) < p_820->g_157.sb) ^ (*p_56)) || (*l_105)))) != p_820->g_157.sa), 1L)) && (*l_105))), 1))), p_820->g_490.y)), ((VECTOR(int8_t, 2))(0x68L)), 0L, 3L, 5L, (-1L), 0x03L, ((VECTOR(int8_t, 4))(0x24L)), 0x2FL, (-4L))).s5e)).yyyx)).even, ((VECTOR(int8_t, 2))(0x72L)), ((VECTOR(int8_t, 2))((-1L)))))), 0L, 0L)), p_820->g_68, (*l_105), ((VECTOR(int8_t, 2))((-1L))), p_820->g_447.f0, (-1L), p_820->g_108.s0, 9L, 0x56L, (-2L), (-1L))).s2d))))).hi) > p_820->g_157.s7) , (*p_820->g_434)) || p_820->g_431.s0) ^ p_820->g_25)) | p_820->g_490.y) >= l_87[0][1][0]);
    }
    (*p_56) = (*p_820->g_434);
    (*l_543) = &l_105;
    return l_545[5][0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_68 p_820->g_44
 * writes: p_820->g_68
 */
int8_t  func_57(uint32_t  p_58, int32_t * p_59, uint16_t  p_60, int16_t  p_61, uint8_t  p_62, struct S1 * p_820)
{ /* block id: 8 */
    int32_t *l_63 = &p_820->g_29;
    int32_t *l_64 = &p_820->g_25;
    int32_t l_65 = 0x1293870BL;
    VECTOR(int32_t, 16) l_66 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x2EF76CAFL), 0x2EF76CAFL), 0x2EF76CAFL, 3L, 0x2EF76CAFL, (VECTOR(int32_t, 2))(3L, 0x2EF76CAFL), (VECTOR(int32_t, 2))(3L, 0x2EF76CAFL), 3L, 0x2EF76CAFL, 3L, 0x2EF76CAFL);
    int32_t *l_67[5][6][5] = {{{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65}},{{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65}},{{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65}},{{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65}},{{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65},{&p_820->g_29,&p_820->g_25,&p_820->g_29,&l_65,&l_65}}};
    int i, j, k;
    p_820->g_68--;
    return p_820->g_44.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_152 p_820->g_157 p_820->g_158 p_820->g_161 p_820->g_138 p_820->g_103 p_820->g_165 p_820->g_166 p_820->g_113 p_820->g_44 p_820->g_108 p_820->g_33 p_820->g_294 p_820->g_458 p_820->g_91 p_820->g_467 p_820->g_411 p_820->g_439.f0
 * writes: p_820->g_138 p_820->g_165 p_820->g_44 p_820->g_438 p_820->g_91 p_820->g_25
 */
uint32_t  func_73(uint8_t  p_74, int8_t  p_75, int32_t * p_76, struct S1 * p_820)
{ /* block id: 24 */
    int64_t *l_145 = &p_820->g_33;
    VECTOR(int64_t, 8) l_153 = (VECTOR(int64_t, 8))(0x0E80D330B072DD7AL, (VECTOR(int64_t, 4))(0x0E80D330B072DD7AL, (VECTOR(int64_t, 2))(0x0E80D330B072DD7AL, (-5L)), (-5L)), (-5L), 0x0E80D330B072DD7AL, (-5L));
    VECTOR(int64_t, 16) l_154 = (VECTOR(int64_t, 16))(0x5D5B2D086A49EC65L, (VECTOR(int64_t, 4))(0x5D5B2D086A49EC65L, (VECTOR(int64_t, 2))(0x5D5B2D086A49EC65L, 0x113343AA511DFB01L), 0x113343AA511DFB01L), 0x113343AA511DFB01L, 0x5D5B2D086A49EC65L, 0x113343AA511DFB01L, (VECTOR(int64_t, 2))(0x5D5B2D086A49EC65L, 0x113343AA511DFB01L), (VECTOR(int64_t, 2))(0x5D5B2D086A49EC65L, 0x113343AA511DFB01L), 0x5D5B2D086A49EC65L, 0x113343AA511DFB01L, 0x5D5B2D086A49EC65L, 0x113343AA511DFB01L);
    VECTOR(int64_t, 8) l_155 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
    VECTOR(int64_t, 16) l_156 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x36CD964B614F71B6L), 0x36CD964B614F71B6L), 0x36CD964B614F71B6L, 3L, 0x36CD964B614F71B6L, (VECTOR(int64_t, 2))(3L, 0x36CD964B614F71B6L), (VECTOR(int64_t, 2))(3L, 0x36CD964B614F71B6L), 3L, 0x36CD964B614F71B6L, 3L, 0x36CD964B614F71B6L);
    VECTOR(int32_t, 8) l_159 = (VECTOR(int32_t, 8))(0x5CD96861L, (VECTOR(int32_t, 4))(0x5CD96861L, (VECTOR(int32_t, 2))(0x5CD96861L, 0x6B5E7ADDL), 0x6B5E7ADDL), 0x6B5E7ADDL, 0x5CD96861L, 0x6B5E7ADDL);
    VECTOR(int32_t, 4) l_160 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 6L), 6L);
    uint32_t *l_164[6] = {(void*)0,&p_820->g_103,(void*)0,(void*)0,&p_820->g_103,(void*)0};
    int32_t *l_167 = (void*)0;
    int32_t l_172 = 0x342FEDE2L;
    int64_t *l_173 = (void*)0;
    VECTOR(uint8_t, 4) l_291 = (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 255UL), 255UL);
    int8_t l_297[7] = {0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL};
    uint16_t l_300 = 1UL;
    uint64_t *l_309[7] = {&p_820->g_91,&p_820->g_91,&p_820->g_91,&p_820->g_91,&p_820->g_91,&p_820->g_91,&p_820->g_91};
    uint64_t **l_308 = &l_309[2];
    VECTOR(int16_t, 2) l_319 = (VECTOR(int16_t, 2))(0L, 0L);
    VECTOR(int16_t, 4) l_320 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x32D0L), 0x32D0L);
    VECTOR(int16_t, 4) l_321 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x675CL), 0x675CL);
    int16_t *l_373 = (void*)0;
    union U0 *l_436 = &p_820->g_437[2];
    int i;
    if ((l_145 != ((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((((l_172 &= (((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((((VECTOR(uint64_t, 16))(p_820->g_152.s1ec8d3978347abf4)).s1 < 18446744073709551611UL), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_153.s0706)).zywwyxwxwxyzzxzz)).s56)), ((VECTOR(int64_t, 4))(l_154.sf2df)).even))), 0x3D4D54A4C857A191L, 0x16EE17F405F90CA2L)))), ((VECTOR(int64_t, 4))(l_155.s5062)), ((VECTOR(int64_t, 2))(l_156.s75)), ((VECTOR(int64_t, 2))(p_820->g_157.sfd)), ((VECTOR(int64_t, 2))(p_820->g_158.zz)), (-1L))).s6b7a)))).yzwwywyx)).s3, ((l_159.s2 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_159.s0621)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0x755C6AC7L, ((VECTOR(int32_t, 4))(l_160.xzzz)), (-2L), 5L, (-4L))).s7342314006312275, ((VECTOR(int32_t, 4))(1L, (-5L), 7L, 5L)).zxywzyxwxzywzwxw, ((VECTOR(int32_t, 4))(((*p_76) = (-7L)), 5L, (-7L), 1L)).yyywywyxzzyzxxxx))).sda91, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_820->g_161.s5530)).zxxxwywz)))).hi))), (int32_t)(*p_76), (int32_t)(safe_sub_func_int32_t_s_s(((p_820->g_165 |= p_820->g_103) <= l_156.s3), 1UL))))).w, 0x2F3A6FA7L, 0x4E5C6B99L, ((VECTOR(int32_t, 4))(p_820->g_166.xxxy)), 0x17761125L)).s5) , 18446744073709551611UL))) <= FAKE_DIVERGE(p_820->local_0_offset, get_local_id(0), 10)) && (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((-8L), p_820->g_113.y)), 1)))) < p_820->g_166.x) , p_820->g_44.x), 0x1AE7CB9A90DBD7C4L)), p_820->g_108.s2)) , l_173)))
    { /* block id: 29 */
        uint8_t *l_298[9] = {&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299,&p_820->g_299};
        VECTOR(int64_t, 2) l_314 = (VECTOR(int64_t, 2))((-10L), 0x426B1E962D3FBA25L);
        uint16_t *l_383 = &l_300;
        uint16_t **l_382 = &l_383;
        int32_t l_418[9] = {0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L,0x1E2B68E3L};
        int32_t l_427[8];
        uint32_t l_428 = 5UL;
        int i;
        for (i = 0; i < 8; i++)
            l_427[i] = 0x596CE941L;
        if ((atomic_inc(&p_820->l_atomic_input[22]) == 9))
        { /* block id: 31 */
            uint8_t l_174 = 4UL;
            int8_t l_175[4];
            VECTOR(int32_t, 2) l_176 = (VECTOR(int32_t, 2))((-9L), 0x0A905584L);
            uint64_t l_230 = 18446744073709551615UL;
            int i;
            for (i = 0; i < 4; i++)
                l_175[i] = (-1L);
            l_175[0] |= (l_174 , 0L);
            if (((VECTOR(int32_t, 8))(l_176.yxyyxxxy)).s7)
            { /* block id: 33 */
                int64_t l_177 = 0x7C4D6C543C7B79E9L;
                int64_t l_178 = 1L;
                uint16_t l_179 = 0UL;
                int8_t l_180 = (-8L);
                uint32_t l_181 = 0x7DDB6465L;
                VECTOR(int32_t, 8) l_190 = (VECTOR(int32_t, 8))(0x252909BAL, (VECTOR(int32_t, 4))(0x252909BAL, (VECTOR(int32_t, 2))(0x252909BAL, 0x112AE39DL), 0x112AE39DL), 0x112AE39DL, 0x252909BAL, 0x112AE39DL);
                int i;
                l_179 ^= (l_178 = l_177);
                ++l_181;
                for (l_178 = 0; (l_178 != 5); l_178 = safe_add_func_int64_t_s_s(l_178, 7))
                { /* block id: 39 */
                    int32_t l_186 = 0x02C48DB3L;
                    uint32_t l_187[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_187[i] = 1UL;
                    l_186 = (l_186 , (l_176.x ^= 0x3CD69BB4L));
                    l_187[6]--;
                }
                l_176.x |= ((VECTOR(int32_t, 8))(0x7A561810L, 0x15FF81F1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(0x0DEDF795L, 0x58BD1D58L)).xyyyyyyxyyyyyyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_190.s76574465)))).s2363725526614321))).s7ef7)), 0x425CC560L, (-1L))).s3;
            }
            else
            { /* block id: 45 */
                VECTOR(int32_t, 2) l_191 = (VECTOR(int32_t, 2))((-3L), 0x136C5640L);
                uint8_t l_192 = 0x29L;
                int32_t l_193[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_193[i] = 0x632C8324L;
                l_192 |= ((VECTOR(int32_t, 8))(l_191.xyxyyyyx)).s3;
                if ((l_193[5] |= 0x37FF1DA4L))
                { /* block id: 48 */
                    int8_t l_194 = 0x39L;
                    uint64_t l_195 = 18446744073709551615UL;
                    uint64_t l_196 = 18446744073709551615UL;
                    l_195 |= l_194;
                    l_191.y = 1L;
                    l_191.y = l_196;
                }
                else
                { /* block id: 52 */
                    uint32_t l_197 = 1UL;
                    if ((l_193[2] = (l_197 , 0x38BF16BDL)))
                    { /* block id: 54 */
                        int64_t l_198 = 0L;
                        int16_t l_199 = 1L;
                        uint64_t l_200 = 0x3FE90797314FEBEBL;
                        int32_t l_203[3];
                        uint8_t l_204 = 0x47L;
                        uint32_t l_205 = 4294967287UL;
                        uint32_t l_206 = 0xA9D15133L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_203[i] = 0x0DFB2D17L;
                        l_200++;
                        l_204 |= (l_191.x = l_203[1]);
                        l_176.x = l_205;
                        l_193[3] = l_206;
                    }
                    else
                    { /* block id: 60 */
                        VECTOR(int32_t, 4) l_207 = (VECTOR(int32_t, 4))(0x617FD771L, (VECTOR(int32_t, 2))(0x617FD771L, (-1L)), (-1L));
                        VECTOR(int32_t, 2) l_208 = (VECTOR(int32_t, 2))(0x08C05FBDL, 0x5206A442L);
                        uint32_t l_209 = 0xC099B40CL;
                        uint64_t l_210 = 0xC855315CE64B5874L;
                        VECTOR(int32_t, 16) l_211 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x71AB90A9L), 0x71AB90A9L), 0x71AB90A9L, 2L, 0x71AB90A9L, (VECTOR(int32_t, 2))(2L, 0x71AB90A9L), (VECTOR(int32_t, 2))(2L, 0x71AB90A9L), 2L, 0x71AB90A9L, 2L, 0x71AB90A9L);
                        VECTOR(int32_t, 16) l_212 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 1L), 1L), 1L, 5L, 1L, (VECTOR(int32_t, 2))(5L, 1L), (VECTOR(int32_t, 2))(5L, 1L), 5L, 1L, 5L, 1L);
                        VECTOR(int32_t, 16) l_213 = (VECTOR(int32_t, 16))(0x16D66131L, (VECTOR(int32_t, 4))(0x16D66131L, (VECTOR(int32_t, 2))(0x16D66131L, 0L), 0L), 0L, 0x16D66131L, 0L, (VECTOR(int32_t, 2))(0x16D66131L, 0L), (VECTOR(int32_t, 2))(0x16D66131L, 0L), 0x16D66131L, 0L, 0x16D66131L, 0L);
                        int64_t l_214 = 9L;
                        VECTOR(int32_t, 2) l_215 = (VECTOR(int32_t, 2))((-1L), 8L);
                        uint16_t l_216 = 2UL;
                        VECTOR(int32_t, 2) l_217 = (VECTOR(int32_t, 2))(0x0779B6EAL, (-1L));
                        VECTOR(int32_t, 8) l_218 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        VECTOR(int32_t, 2) l_219 = (VECTOR(int32_t, 2))(0x081E8D3FL, 0x6087C829L);
                        VECTOR(int32_t, 16) l_220 = (VECTOR(int32_t, 16))(0x73235E0EL, (VECTOR(int32_t, 4))(0x73235E0EL, (VECTOR(int32_t, 2))(0x73235E0EL, (-2L)), (-2L)), (-2L), 0x73235E0EL, (-2L), (VECTOR(int32_t, 2))(0x73235E0EL, (-2L)), (VECTOR(int32_t, 2))(0x73235E0EL, (-2L)), 0x73235E0EL, (-2L), 0x73235E0EL, (-2L));
                        int32_t l_221 = 0x61197493L;
                        VECTOR(int32_t, 16) l_222 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        VECTOR(int32_t, 8) l_223 = (VECTOR(int32_t, 8))(0x702A8A96L, (VECTOR(int32_t, 4))(0x702A8A96L, (VECTOR(int32_t, 2))(0x702A8A96L, 0x7FBF402CL), 0x7FBF402CL), 0x7FBF402CL, 0x702A8A96L, 0x7FBF402CL);
                        uint32_t l_224 = 0UL;
                        int32_t l_225 = 0x411F7702L;
                        int32_t l_226 = (-1L);
                        VECTOR(uint32_t, 16) l_227 = (VECTOR(uint32_t, 16))(0x8A175456L, (VECTOR(uint32_t, 4))(0x8A175456L, (VECTOR(uint32_t, 2))(0x8A175456L, 0UL), 0UL), 0UL, 0x8A175456L, 0UL, (VECTOR(uint32_t, 2))(0x8A175456L, 0UL), (VECTOR(uint32_t, 2))(0x8A175456L, 0UL), 0x8A175456L, 0UL, 0x8A175456L, 0UL);
                        uint64_t l_228 = 0x1E248C8C4592B0D4L;
                        uint32_t l_229 = 0x1BBDACEEL;
                        int i;
                        l_229 ^= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x69410477L, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_207.zyyzzwxwyyyzwxyx)).s4d, ((VECTOR(int32_t, 16))(l_208.xxyyxxyyxxxxxxxy)).sd8))).yxyyxxxx)).s1701054423552014, (int32_t)l_209, (int32_t)0x460C495EL))).s9e, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_210, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_211.sb597)).odd, ((VECTOR(int32_t, 4))(l_212.s47bf)).lo))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_213.sbce47eab302b97f0)).s8b36)).x, 0x1DD38E61L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5C434A21L, 0x48C0B111L)).xyyy)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))((l_214 , 0x4BAE0D68L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_215.yx)))), (l_176.x ^= (l_191.x = l_216)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_217.xx)).xyyxyyxyxyxxxxyx)).s6f, ((VECTOR(int32_t, 16))(l_218.s5523120324243432)).s3f))).xxyy)))))).hi, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_219.xyxy)), (-2L), 1L, (-9L), 1L)).s61, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_220.s70f3924317f4e93b)).s77, (int32_t)l_221))).xyyx)).odd))), 1L, 0x5E07FD64L)).even))).xyyy))))).xwyzxwxy)).s21)).xxxxyxxy)).s57, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(7L, 0L, ((VECTOR(int32_t, 4))(l_222.s4600)), (-1L), 0x073444A4L)))).s1126621507474461, ((VECTOR(int32_t, 8))(l_223.s64612215)).s1727351130277131))).sac4b, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_224, 0L, 0x74894D46L, l_225, 1L, l_226, ((VECTOR(int32_t, 4))(0L)), l_227.s9, 0x5E84D267L, 2L, ((VECTOR(int32_t, 2))((-6L))), 0x4BE646FAL)).even, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(1L))))).s1606204257766220)).s7291)))))).odd))).xyyx))).even, ((VECTOR(int32_t, 2))((-3L))), ((VECTOR(int32_t, 2))(0x012CA253L))))))), (-1L))).s4601346247345176)).s80))), (int32_t)l_228))).yyxx, ((VECTOR(int32_t, 4))(2L))))), ((VECTOR(int32_t, 8))(0x1BEBC32CL)), ((VECTOR(int32_t, 2))(0x6C65BDC4L)), 0x5BAB2BB5L, 0x64D3B09AL)).odd))).s1, 0x6397EF2EL, (-1L))))).xzwzywxx, ((VECTOR(int32_t, 8))(0x73A99ED4L)), ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 8))(0x3247C13DL)))), ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x7412C3F3L))))).odd, ((VECTOR(int32_t, 8))(0x47E578F9L))))).s0173171143743047, ((VECTOR(int32_t, 16))(8L))))).sd;
                    }
                }
            }
            if (l_230)
            { /* block id: 67 */
                uint32_t l_231[9][4][2] = {{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}},{{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL},{4294967295UL,4294967289UL}}};
                VECTOR(int32_t, 4) l_233 = (VECTOR(int32_t, 4))(0x77BD04F5L, (VECTOR(int32_t, 2))(0x77BD04F5L, (-8L)), (-8L));
                int32_t *l_232 = (void*)0;
                int32_t *l_234[8];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_234[i] = (void*)0;
                l_234[7] = (l_231[6][2][0] , l_232);
            }
            else
            { /* block id: 69 */
                int32_t l_235 = 1L;
                uint64_t l_254 = 0x104AFCE3093133CEL;
                uint64_t *l_253 = &l_254;
                uint64_t **l_252 = &l_253;
                uint64_t **l_255[10] = {&l_253,&l_253,&l_253,&l_253,&l_253,&l_253,&l_253,&l_253,&l_253,&l_253};
                uint64_t **l_256 = &l_253;
                VECTOR(int32_t, 8) l_257 = (VECTOR(int32_t, 8))(0x229DE70FL, (VECTOR(int32_t, 4))(0x229DE70FL, (VECTOR(int32_t, 2))(0x229DE70FL, (-1L)), (-1L)), (-1L), 0x229DE70FL, (-1L));
                int i;
                for (l_235 = 0; (l_235 >= (-18)); l_235 = safe_sub_func_uint64_t_u_u(l_235, 1))
                { /* block id: 72 */
                    int64_t l_238[5][8] = {{0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L},{0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L},{0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L},{0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L},{0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L,0x5251EB5ED7D3D8F7L}};
                    uint64_t l_239 = 0x72DA2DBFFCE8DC02L;
                    int64_t l_242 = 0x72926F0E8B8BF441L;
                    int i, j;
                    l_239--;
                    l_242 = (l_176.x = 0x43ADBA4FL);
                    for (l_238[3][0] = 0; (l_238[3][0] <= (-1)); l_238[3][0] = safe_sub_func_uint16_t_u_u(l_238[3][0], 1))
                    { /* block id: 78 */
                        int16_t l_245 = 0L;
                        int8_t l_246 = 0x7EL;
                        int64_t l_247 = 0x3E9092F00DD55F45L;
                        uint32_t l_248 = 4UL;
                        uint32_t l_251 = 0x27323745L;
                        l_246 ^= (l_176.y = l_245);
                        ++l_248;
                        l_176.x = l_251;
                    }
                }
                l_256 = (l_255[4] = l_252);
                if (((VECTOR(int32_t, 8))(l_257.s17402031)).s5)
                { /* block id: 87 */
                    uint8_t l_258[8][6] = {{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL},{255UL,246UL,1UL,248UL,7UL,248UL}};
                    VECTOR(int32_t, 8) l_259 = (VECTOR(int32_t, 8))(0x296C2F90L, (VECTOR(int32_t, 4))(0x296C2F90L, (VECTOR(int32_t, 2))(0x296C2F90L, (-5L)), (-5L)), (-5L), 0x296C2F90L, (-5L));
                    int i, j;
                    l_176.y |= (l_235 |= (l_258[6][0] , (l_257.s3 &= ((VECTOR(int32_t, 2))(l_259.s24)).hi)));
                    for (l_258[4][5] = 7; (l_258[4][5] >= 10); l_258[4][5] = safe_add_func_uint32_t_u_u(l_258[4][5], 1))
                    { /* block id: 93 */
                        VECTOR(int32_t, 8) l_262 = (VECTOR(int32_t, 8))(0x55E2A7E6L, (VECTOR(int32_t, 4))(0x55E2A7E6L, (VECTOR(int32_t, 2))(0x55E2A7E6L, 1L), 1L), 1L, 0x55E2A7E6L, 1L);
                        int i;
                        l_235 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_262.s20401561)).s0063200620673151)).sa;
                    }
                }
                else
                { /* block id: 96 */
                    VECTOR(uint16_t, 2) l_263 = (VECTOR(uint16_t, 2))(0UL, 0xF1C7L);
                    VECTOR(uint16_t, 8) l_264 = (VECTOR(uint16_t, 8))(0xF8ADL, (VECTOR(uint16_t, 4))(0xF8ADL, (VECTOR(uint16_t, 2))(0xF8ADL, 0xCE8AL), 0xCE8AL), 0xCE8AL, 0xF8ADL, 0xCE8AL);
                    uint64_t l_265 = 0x7DD9766D7FA70DFFL;
                    VECTOR(int32_t, 4) l_266 = (VECTOR(int32_t, 4))(0x649D72B7L, (VECTOR(int32_t, 2))(0x649D72B7L, 0x4EEC597CL), 0x4EEC597CL);
                    VECTOR(int32_t, 2) l_267 = (VECTOR(int32_t, 2))(0x004FEDB6L, (-4L));
                    VECTOR(int32_t, 8) l_268 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
                    VECTOR(int32_t, 2) l_269 = (VECTOR(int32_t, 2))(1L, 0x65276CBAL);
                    VECTOR(int32_t, 4) l_270 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                    VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x77D47C41L), 0x77D47C41L), 0x77D47C41L, 1L, 0x77D47C41L, (VECTOR(int32_t, 2))(1L, 0x77D47C41L), (VECTOR(int32_t, 2))(1L, 0x77D47C41L), 1L, 0x77D47C41L, 1L, 0x77D47C41L);
                    VECTOR(int32_t, 16) l_272 = (VECTOR(int32_t, 16))(0x73F6BD6BL, (VECTOR(int32_t, 4))(0x73F6BD6BL, (VECTOR(int32_t, 2))(0x73F6BD6BL, 0L), 0L), 0L, 0x73F6BD6BL, 0L, (VECTOR(int32_t, 2))(0x73F6BD6BL, 0L), (VECTOR(int32_t, 2))(0x73F6BD6BL, 0L), 0x73F6BD6BL, 0L, 0x73F6BD6BL, 0L);
                    VECTOR(int32_t, 2) l_273 = (VECTOR(int32_t, 2))(0x2F96E513L, 0L);
                    VECTOR(int32_t, 8) l_274 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x446D2E92L), 0x446D2E92L), 0x446D2E92L, 0L, 0x446D2E92L);
                    VECTOR(int32_t, 4) l_275 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L);
                    uint32_t l_276 = 0x1353104DL;
                    int16_t l_277 = 0x0FACL;
                    VECTOR(int32_t, 8) l_278 = (VECTOR(int32_t, 8))(0x17FD844EL, (VECTOR(int32_t, 4))(0x17FD844EL, (VECTOR(int32_t, 2))(0x17FD844EL, 1L), 1L), 1L, 0x17FD844EL, 1L);
                    int16_t l_279[4][7][4] = {{{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L}},{{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L}},{{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L}},{{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L},{0L,0x01DAL,0x267BL,0x1A76L}}};
                    int16_t l_280 = 0L;
                    VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L));
                    uint32_t l_282[2];
                    uint8_t l_283 = 0x79L;
                    uint32_t l_284 = 0UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_282[i] = 4294967294UL;
                    l_235 |= (((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(l_263.yxyyyyyx)), ((VECTOR(uint16_t, 2))(l_264.s12)).yxyyyxyx))).s0 , ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(0x3D3E55AAL, (l_176.y = ((l_265 = 0x9B2EL) , 5L)), 4L, 0x4253AB80L, ((VECTOR(int32_t, 2))(l_266.zx)), 0x11350084L, 0x61A4851CL)).s3324535132742003, ((VECTOR(int32_t, 4))(l_267.yxxy)).zwxywwzwwwzzyyyy))))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_268.s60)).yyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x4D231ED3L, 0x3127619CL)).xyxyxyxx)).s30)), 0x366C52A4L, (-1L)))))))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_269.yy)))), 0L, ((VECTOR(int32_t, 4))(l_270.zwzy)), 0x145D16D5L)).s14, ((VECTOR(int32_t, 16))(l_271.s0bdac23d5a6eb08d)).s93))).yxyxxxyyyyyxyyyy, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_272.s914f0b8e9d4f16ca)).s5dc3, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_273.xxyyyxyxyyyxyxyy)))).s56fe, ((VECTOR(int32_t, 8))(l_274.s31073141)).hi))), ((VECTOR(int32_t, 16))(l_275.zwwzywxywzyxyyzz)).s1fda)))))).zxxyyyywxyxxyxyy))).s8bdf, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x47B696B4L, 0L, 0L, 0x3746F688L)), 3L, ((VECTOR(int32_t, 2))(0x10BD9C6BL, 0L)), 0x035C08C9L)), (int32_t)l_276, (int32_t)0L))).odd))).wzxxzxwywxwzxywx, ((VECTOR(int32_t, 8))(l_277, 0L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_278.s2742)).hi)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6E74D68AL, 1L)).yxxyyxyyyxyyyyyx)).sb0))), (l_280 ^= l_279[3][6][3]), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_281.s04)), (int32_t)l_282[1], (int32_t)(l_283 , (l_257.s2 |= l_284))))), 1L)).s2763345053760670))).sa595)).xyzwxxwz))), ((VECTOR(int32_t, 8))(1L))))).s7);
                }
            }
            unsigned int result = 0;
            result += l_174;
            int l_175_i0;
            for (l_175_i0 = 0; l_175_i0 < 4; l_175_i0++) {
                result += l_175[l_175_i0];
            }
            result += l_176.y;
            result += l_176.x;
            result += l_230;
            atomic_add(&p_820->l_special_values[22], result);
        }
        else
        { /* block id: 104 */
            (1 + 1);
        }
        l_300 ^= (((((0L | (p_75 && (+FAKE_DIVERGE(p_820->global_0_offset, get_global_id(0), 10)))) , (safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_291.zywz)).y, ((VECTOR(uint8_t, 4))(0x1BL, ((VECTOR(uint8_t, 2))(0x97L, 1UL)), 0UL)).x)), p_820->g_33)) == (4294967295UL && (safe_mod_func_uint16_t_u_u(0UL, (((VECTOR(int8_t, 2))(p_820->g_294.yy)).odd , ((l_159.s2 &= ((VECTOR(uint8_t, 16))((p_820->g_44.y = 1UL), 255UL, 0x84L, 1UL, (((safe_add_func_int16_t_s_s(((void*)0 != &p_820->g_103), p_74)) && p_820->g_33) , l_297[0]), 246UL, 253UL, 0x5FL, 1UL, ((VECTOR(uint8_t, 2))(0x96L)), GROUP_DIVERGE(2, 1), 0x1DL, 0xB5L, 0x9CL, 255UL)).s0) & p_74)))))) == p_820->g_108.s1), 14))) | l_153.s4) ^ p_820->g_33) == 3L);
        for (l_172 = 29; (l_172 < (-10)); l_172 = safe_sub_func_uint16_t_u_u(l_172, 2))
        { /* block id: 112 */
            uint64_t **l_307 = (void*)0;
            int32_t l_315 = 0L;
            uint32_t *l_322 = &p_820->g_323[6];
            uint32_t *l_324 = &p_820->g_325;
            uint32_t *l_326 = &p_820->g_327;
            int16_t *l_328 = (void*)0;
            int16_t *l_329 = (void*)0;
            int16_t *l_330 = (void*)0;
            int16_t *l_331 = (void*)0;
            int16_t *l_332 = (void*)0;
            int16_t *l_333[1];
            VECTOR(int32_t, 4) l_347 = (VECTOR(int32_t, 4))(0x49FF2264L, (VECTOR(int32_t, 2))(0x49FF2264L, 0x59A9F4F7L), 0x59A9F4F7L);
            int i;
            for (i = 0; i < 1; i++)
                l_333[i] = (void*)0;
            (1 + 1);
        }
    }
    else
    { /* block id: 178 */
        int16_t l_435[10][5][2] = {{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}},{{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)},{3L,(-2L)}}};
        union U0 *l_456 = &p_820->g_457;
        int32_t l_464 = 0x05FC9237L;
        uint32_t *l_469 = (void*)0;
        uint32_t **l_468 = &l_469;
        uint32_t *l_471 = &p_820->g_323[6];
        uint32_t **l_470 = &l_471;
        int i, j, k;
        l_435[3][2][1] ^= ((void*)0 == &p_820->g_299);
        (*p_820->g_411) = ((((p_820->g_158.w & (p_74 == (((*p_76) |= (((p_820->g_438[0][0][0] = l_436) != l_456) != (l_464 = (((void*)0 == p_820->g_458) , (++(**l_308)))))) && ((((safe_sub_func_int64_t_s_s((((VECTOR(uint64_t, 4))(p_820->g_467.yxxx)).z && l_435[6][2][1]), (((*l_470) = ((*l_468) = p_76)) != p_76))) , p_820->g_108.s5) , l_435[3][2][1]) | p_75)))) || l_435[3][1][1]) , p_76) == &p_820->g_103);
    }
    return p_820->g_439.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_820->g_108 p_820->g_113 p_820->g_68 p_820->g_129 p_820->g_138 p_820->g_25 p_820->g_44 p_820->g_33 p_820->g_91 p_820->g_103 p_820->g_comm_values
 * writes: p_820->g_33 p_820->g_25
 */
int32_t  func_77(int32_t * p_78, uint32_t  p_79, uint64_t  p_80, int8_t  p_81, int32_t * p_82, struct S1 * p_820)
{ /* block id: 15 */
    uint32_t l_111 = 1UL;
    uint32_t l_139[3][3][7] = {{{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL}},{{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL}},{{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL},{4294967295UL,0UL,1UL,0x486CFEE3L,0x397D913FL,0x486CFEE3L,1UL}}};
    int64_t l_140 = 0x14CE61BCC1DD9ACFL;
    int32_t l_142 = 1L;
    int i, j, k;
    for (p_81 = 8; (p_81 != (-29)); p_81 = safe_sub_func_uint16_t_u_u(p_81, 5))
    { /* block id: 18 */
        VECTOR(int8_t, 8) l_112 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 1L), 1L), 1L, 3L, 1L);
        VECTOR(int16_t, 8) l_126 = (VECTOR(int16_t, 8))(0x5007L, (VECTOR(int16_t, 4))(0x5007L, (VECTOR(int16_t, 2))(0x5007L, 0x36A8L), 0x36A8L), 0x36A8L, 0x5007L, 0x36A8L);
        VECTOR(int8_t, 4) l_127 = (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x04L), 0x04L);
        VECTOR(int8_t, 16) l_128 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int8_t, 2))(6L, 1L), (VECTOR(int8_t, 2))(6L, 1L), 6L, 1L, 6L, 1L);
        int64_t *l_141 = &p_820->g_33;
        uint64_t l_143[2][6] = {{0x70816E1F836BFB3EL,6UL,0x70816E1F836BFB3EL,0x70816E1F836BFB3EL,6UL,0x70816E1F836BFB3EL},{0x70816E1F836BFB3EL,6UL,0x70816E1F836BFB3EL,0x70816E1F836BFB3EL,6UL,0x70816E1F836BFB3EL}};
        uint64_t l_144 = 2UL;
        int i, j;
        (*p_82) = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(p_820->g_108.s54656362)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((safe_mul_func_int8_t_s_s((l_111 >= (FAKE_DIVERGE(p_820->global_1_offset, get_global_id(1), 10) && ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_112.s4723)).lo)).xyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x0DL)).xxxxyyyyxyxxxyxy)).odd)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_820->g_113.xy)).xyxy)).zxzxywxwzxyywzzz, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x27L, ((((safe_lshift_func_int8_t_s_s((+((safe_add_func_int32_t_s_s((((*l_141) |= (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(0x1BL, ((safe_mul_func_int8_t_s_s(((p_820->g_68 && (((l_140 &= ((safe_lshift_func_uint16_t_u_u((((VECTOR(int16_t, 16))(l_126.s0461421560653133)).sc | (p_80 || (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_127.zyywxwyxzyyxyxxz)).odd)), 0x08L, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(l_128.s696d6245)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_820->g_129.zzzz)).xywyyxwyzxwzywwx)).s08d3))), (safe_rshift_func_uint8_t_u_s(l_111, (((safe_sub_func_uint32_t_u_u(l_111, ((p_80 > (safe_sub_func_int16_t_s_s((l_111 && (safe_sub_func_uint16_t_u_u((1UL && 8L), p_80))), 0x04B3L))) > l_126.s2))) && 0x3549B09EDA30AC00L) && p_820->g_138))), 0x6BL, (-6L))).se && FAKE_DIVERGE(p_820->local_1_offset, get_local_id(1), 10)))), p_81)) | l_139[0][2][5])) && (-1L)) < (*p_78))) == FAKE_DIVERGE(p_820->global_1_offset, get_global_id(1), 10)), p_820->g_44.y)) , p_81))), l_127.y))) & l_142), p_820->g_91)) , l_111)), p_820->g_103)) , l_127.w) , l_143[1][1]) , 9L), (-9L), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 2))((-6L))), (-7L), 0x45L, ((VECTOR(int8_t, 2))((-6L))), 1L)).lo)).s1155153724552163))).s9e25)).hi))).xyyy, ((VECTOR(int8_t, 4))(1L)))))))))))), (int8_t)p_820->g_108.s6))).z)), l_144)) != p_820->g_113.x), l_128.s0, 0UL, p_820->g_113.y, ((VECTOR(uint16_t, 2))(0xF26FL)), 0x603BL, 0x7BE2L)).s7677742152000021)).s9a21))), (int32_t)l_142))))), (-8L), ((VECTOR(int32_t, 2))(0x7A6C11A0L)), (-10L))).s53)).xyxyxyyyxyxxyyyx)).s5220)).wwyyyxyz, ((VECTOR(int32_t, 8))(0L))))).hi, (int32_t)p_820->g_comm_values[p_820->tid]))).ywxxwzwwxxxwyywz, ((VECTOR(int32_t, 16))(0x78BC908AL))))).se;
    }
    return (*p_82);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_comm_values[i] = 1;
    struct S1 c_821;
    struct S1* p_820 = &c_821;
    struct S1 c_822 = {
        0L, // p_820->g_25
        0x4684CA67L, // p_820->g_29
        (-9L), // p_820->g_33
        (VECTOR(uint8_t, 2))(253UL, 0xF1L), // p_820->g_44
        4294967291UL, // p_820->g_68
        0xF23DC045D86B4661L, // p_820->g_91
        0x97D859D8L, // p_820->g_103
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_820->g_108
        (VECTOR(int8_t, 2))((-6L), 0x41L), // p_820->g_113
        (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-4L)), (-4L)), // p_820->g_129
        0x4E8CAA09L, // p_820->g_138
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xC80103624ADBFCEAL), 0xC80103624ADBFCEAL), 0xC80103624ADBFCEAL, 1UL, 0xC80103624ADBFCEAL, (VECTOR(uint64_t, 2))(1UL, 0xC80103624ADBFCEAL), (VECTOR(uint64_t, 2))(1UL, 0xC80103624ADBFCEAL), 1UL, 0xC80103624ADBFCEAL, 1UL, 0xC80103624ADBFCEAL), // p_820->g_152
        (VECTOR(int64_t, 16))(0x17F0F52E07C21493L, (VECTOR(int64_t, 4))(0x17F0F52E07C21493L, (VECTOR(int64_t, 2))(0x17F0F52E07C21493L, 3L), 3L), 3L, 0x17F0F52E07C21493L, 3L, (VECTOR(int64_t, 2))(0x17F0F52E07C21493L, 3L), (VECTOR(int64_t, 2))(0x17F0F52E07C21493L, 3L), 0x17F0F52E07C21493L, 3L, 0x17F0F52E07C21493L, 3L), // p_820->g_157
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x262993E52E987CD8L), 0x262993E52E987CD8L), // p_820->g_158
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L)), // p_820->g_161
        (-1L), // p_820->g_165
        (VECTOR(int32_t, 2))(0x7905CFCBL, 0x1700A65AL), // p_820->g_166
        (VECTOR(int8_t, 2))(0x04L, 0L), // p_820->g_294
        0x47L, // p_820->g_299
        {0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L,0x99503C98L}, // p_820->g_323
        0xD2D8EEC5L, // p_820->g_325
        0x7FA05AC4L, // p_820->g_327
        6UL, // p_820->g_360
        (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 7UL), 7UL), 7UL, 6UL, 7UL), // p_820->g_392
        1UL, // p_820->g_393
        &p_820->g_25, // p_820->g_411
        {{&p_820->g_411,&p_820->g_411,&p_820->g_411,&p_820->g_411},{&p_820->g_411,&p_820->g_411,&p_820->g_411,&p_820->g_411},{&p_820->g_411,&p_820->g_411,&p_820->g_411,&p_820->g_411},{&p_820->g_411,&p_820->g_411,&p_820->g_411,&p_820->g_411}}, // p_820->g_410
        {&p_820->g_411,&p_820->g_411,&p_820->g_411}, // p_820->g_412
        &p_820->g_411, // p_820->g_413
        (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0x20222B3BL), 0x20222B3BL), 0x20222B3BL, 9UL, 0x20222B3BL), // p_820->g_431
        (void*)0, // p_820->g_433
        &p_820->g_165, // p_820->g_434
        {{-1L},{0x0DFEA1CEL},{-1L},{-1L},{0x0DFEA1CEL},{-1L},{-1L}}, // p_820->g_437
        {0x317746CDL}, // p_820->g_439
        {{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}},{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}},{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}},{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}},{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}},{{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L},{0x4971E435L},{5L},{0x4971E435L}}}, // p_820->g_440
        {-8L}, // p_820->g_441
        {0x05D347A7L}, // p_820->g_442
        {4L}, // p_820->g_443
        {-10L}, // p_820->g_444
        {0x281AFFFFL}, // p_820->g_445
        {{0x453D6AC7L},{1L},{0x453D6AC7L},{0x453D6AC7L},{1L},{0x453D6AC7L},{0x453D6AC7L},{1L}}, // p_820->g_446
        {1L}, // p_820->g_447
        {4L}, // p_820->g_448
        {0x6E3F14D9L}, // p_820->g_449
        {0x402D9BB6L}, // p_820->g_450
        {0x26E7BFB8L}, // p_820->g_451
        {0L}, // p_820->g_452
        {0L}, // p_820->g_453
        {{0x594162B7L},{0x594162B7L}}, // p_820->g_454
        {0x229DA7EAL}, // p_820->g_455
        {{{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455}},{{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455}},{{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455},{&p_820->g_442,&p_820->g_448,&p_820->g_448,&p_820->g_442,&p_820->g_450,(void*)0,&p_820->g_447,&p_820->g_455}}}, // p_820->g_438
        {0x529130FEL}, // p_820->g_457
        7UL, // p_820->g_460
        {0UL,0UL,0UL}, // p_820->g_461
        {{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]},{&p_820->g_461[2]}}, // p_820->g_459
        &p_820->g_459[4][0], // p_820->g_458
        (VECTOR(uint64_t, 2))(0xFF632590158AE40BL, 0UL), // p_820->g_467
        {&p_820->g_434}, // p_820->g_485
        (VECTOR(int32_t, 4))(0x37115AAFL, (VECTOR(int32_t, 2))(0x37115AAFL, 0x14F80F26L), 0x14F80F26L), // p_820->g_490
        0x7A05F558L, // p_820->g_491
        0x2C768674L, // p_820->g_497
        0x5E573AF27243BFB2L, // p_820->g_507
        (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0xA643L), 0xA643L), 0xA643L, 9UL, 0xA643L, (VECTOR(uint16_t, 2))(9UL, 0xA643L), (VECTOR(uint16_t, 2))(9UL, 0xA643L), 9UL, 0xA643L, 9UL, 0xA643L), // p_820->g_536
        0xC13CL, // p_820->g_541
        {0x69DFB147L}, // p_820->g_565
        (VECTOR(int64_t, 2))(0L, 0x233245FDCFD71823L), // p_820->g_590
        (VECTOR(int16_t, 2))(0x26B8L, 0x7B05L), // p_820->g_598
        (VECTOR(int8_t, 16))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 7L), 7L), 7L, 0x40L, 7L, (VECTOR(int8_t, 2))(0x40L, 7L), (VECTOR(int8_t, 2))(0x40L, 7L), 0x40L, 7L, 0x40L, 7L), // p_820->g_599
        (VECTOR(int16_t, 16))(0x3EACL, (VECTOR(int16_t, 4))(0x3EACL, (VECTOR(int16_t, 2))(0x3EACL, 0x3E53L), 0x3E53L), 0x3E53L, 0x3EACL, 0x3E53L, (VECTOR(int16_t, 2))(0x3EACL, 0x3E53L), (VECTOR(int16_t, 2))(0x3EACL, 0x3E53L), 0x3EACL, 0x3E53L, 0x3EACL, 0x3E53L), // p_820->g_600
        &p_820->g_360, // p_820->g_603
        0x4DL, // p_820->g_606
        0L, // p_820->g_608
        (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 0x2AL), 0x2AL), 0x2AL, 0x42L, 0x2AL, (VECTOR(int8_t, 2))(0x42L, 0x2AL), (VECTOR(int8_t, 2))(0x42L, 0x2AL), 0x42L, 0x2AL, 0x42L, 0x2AL), // p_820->g_645
        (VECTOR(uint8_t, 2))(0x35L, 0xB6L), // p_820->g_648
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L), // p_820->g_668
        (VECTOR(uint32_t, 8))(0xBEFDA491L, (VECTOR(uint32_t, 4))(0xBEFDA491L, (VECTOR(uint32_t, 2))(0xBEFDA491L, 1UL), 1UL), 1UL, 0xBEFDA491L, 1UL), // p_820->g_701
        (void*)0, // p_820->g_711
        (VECTOR(uint64_t, 16))(0x2585D394ADBED453L, (VECTOR(uint64_t, 4))(0x2585D394ADBED453L, (VECTOR(uint64_t, 2))(0x2585D394ADBED453L, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0x2585D394ADBED453L, 18446744073709551609UL, (VECTOR(uint64_t, 2))(0x2585D394ADBED453L, 18446744073709551609UL), (VECTOR(uint64_t, 2))(0x2585D394ADBED453L, 18446744073709551609UL), 0x2585D394ADBED453L, 18446744073709551609UL, 0x2585D394ADBED453L, 18446744073709551609UL), // p_820->g_726
        (VECTOR(uint64_t, 4))(0x3D5918D44DA3B66EL, (VECTOR(uint64_t, 2))(0x3D5918D44DA3B66EL, 0xDDA6C8A2ED0F5CF4L), 0xDDA6C8A2ED0F5CF4L), // p_820->g_727
        (VECTOR(uint64_t, 2))(1UL, 8UL), // p_820->g_734
        {0x54532481L,1L,0x54532481L,0x54532481L,1L,0x54532481L,0x54532481L,1L,0x54532481L}, // p_820->g_741
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x17A488C8L), 0x17A488C8L), 0x17A488C8L, 8L, 0x17A488C8L, (VECTOR(int32_t, 2))(8L, 0x17A488C8L), (VECTOR(int32_t, 2))(8L, 0x17A488C8L), 8L, 0x17A488C8L, 8L, 0x17A488C8L), // p_820->g_744
        (void*)0, // p_820->g_754
        (VECTOR(int8_t, 8))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 0x2BL), 0x2BL), 0x2BL, 0x24L, 0x2BL), // p_820->g_789
        (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 0xCDL), 0xCDL), // p_820->g_790
        (VECTOR(int16_t, 8))(0x716DL, (VECTOR(int16_t, 4))(0x716DL, (VECTOR(int16_t, 2))(0x716DL, (-2L)), (-2L)), (-2L), 0x716DL, (-2L)), // p_820->g_791
        &p_820->g_323[6], // p_820->g_802
        &p_820->g_802, // p_820->g_801
        (VECTOR(uint64_t, 2))(0x7C90AA8ACF782D30L, 18446744073709551612UL), // p_820->g_805
        &p_820->g_741[5], // p_820->g_818
        0, // p_820->v_collective
        sequence_input[get_global_id(0)], // p_820->global_0_offset
        sequence_input[get_global_id(1)], // p_820->global_1_offset
        sequence_input[get_global_id(2)], // p_820->global_2_offset
        sequence_input[get_local_id(0)], // p_820->local_0_offset
        sequence_input[get_local_id(1)], // p_820->local_1_offset
        sequence_input[get_local_id(2)], // p_820->local_2_offset
        sequence_input[get_group_id(0)], // p_820->group_0_offset
        sequence_input[get_group_id(1)], // p_820->group_1_offset
        sequence_input[get_group_id(2)], // p_820->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 87)), permutations[0][get_linear_local_id()])), // p_820->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_821 = c_822;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_820);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_820->g_25, "p_820->g_25", print_hash_value);
    transparent_crc(p_820->g_29, "p_820->g_29", print_hash_value);
    transparent_crc(p_820->g_33, "p_820->g_33", print_hash_value);
    transparent_crc(p_820->g_44.x, "p_820->g_44.x", print_hash_value);
    transparent_crc(p_820->g_44.y, "p_820->g_44.y", print_hash_value);
    transparent_crc(p_820->g_68, "p_820->g_68", print_hash_value);
    transparent_crc(p_820->g_91, "p_820->g_91", print_hash_value);
    transparent_crc(p_820->g_103, "p_820->g_103", print_hash_value);
    transparent_crc(p_820->g_108.s0, "p_820->g_108.s0", print_hash_value);
    transparent_crc(p_820->g_108.s1, "p_820->g_108.s1", print_hash_value);
    transparent_crc(p_820->g_108.s2, "p_820->g_108.s2", print_hash_value);
    transparent_crc(p_820->g_108.s3, "p_820->g_108.s3", print_hash_value);
    transparent_crc(p_820->g_108.s4, "p_820->g_108.s4", print_hash_value);
    transparent_crc(p_820->g_108.s5, "p_820->g_108.s5", print_hash_value);
    transparent_crc(p_820->g_108.s6, "p_820->g_108.s6", print_hash_value);
    transparent_crc(p_820->g_108.s7, "p_820->g_108.s7", print_hash_value);
    transparent_crc(p_820->g_113.x, "p_820->g_113.x", print_hash_value);
    transparent_crc(p_820->g_113.y, "p_820->g_113.y", print_hash_value);
    transparent_crc(p_820->g_129.x, "p_820->g_129.x", print_hash_value);
    transparent_crc(p_820->g_129.y, "p_820->g_129.y", print_hash_value);
    transparent_crc(p_820->g_129.z, "p_820->g_129.z", print_hash_value);
    transparent_crc(p_820->g_129.w, "p_820->g_129.w", print_hash_value);
    transparent_crc(p_820->g_138, "p_820->g_138", print_hash_value);
    transparent_crc(p_820->g_152.s0, "p_820->g_152.s0", print_hash_value);
    transparent_crc(p_820->g_152.s1, "p_820->g_152.s1", print_hash_value);
    transparent_crc(p_820->g_152.s2, "p_820->g_152.s2", print_hash_value);
    transparent_crc(p_820->g_152.s3, "p_820->g_152.s3", print_hash_value);
    transparent_crc(p_820->g_152.s4, "p_820->g_152.s4", print_hash_value);
    transparent_crc(p_820->g_152.s5, "p_820->g_152.s5", print_hash_value);
    transparent_crc(p_820->g_152.s6, "p_820->g_152.s6", print_hash_value);
    transparent_crc(p_820->g_152.s7, "p_820->g_152.s7", print_hash_value);
    transparent_crc(p_820->g_152.s8, "p_820->g_152.s8", print_hash_value);
    transparent_crc(p_820->g_152.s9, "p_820->g_152.s9", print_hash_value);
    transparent_crc(p_820->g_152.sa, "p_820->g_152.sa", print_hash_value);
    transparent_crc(p_820->g_152.sb, "p_820->g_152.sb", print_hash_value);
    transparent_crc(p_820->g_152.sc, "p_820->g_152.sc", print_hash_value);
    transparent_crc(p_820->g_152.sd, "p_820->g_152.sd", print_hash_value);
    transparent_crc(p_820->g_152.se, "p_820->g_152.se", print_hash_value);
    transparent_crc(p_820->g_152.sf, "p_820->g_152.sf", print_hash_value);
    transparent_crc(p_820->g_157.s0, "p_820->g_157.s0", print_hash_value);
    transparent_crc(p_820->g_157.s1, "p_820->g_157.s1", print_hash_value);
    transparent_crc(p_820->g_157.s2, "p_820->g_157.s2", print_hash_value);
    transparent_crc(p_820->g_157.s3, "p_820->g_157.s3", print_hash_value);
    transparent_crc(p_820->g_157.s4, "p_820->g_157.s4", print_hash_value);
    transparent_crc(p_820->g_157.s5, "p_820->g_157.s5", print_hash_value);
    transparent_crc(p_820->g_157.s6, "p_820->g_157.s6", print_hash_value);
    transparent_crc(p_820->g_157.s7, "p_820->g_157.s7", print_hash_value);
    transparent_crc(p_820->g_157.s8, "p_820->g_157.s8", print_hash_value);
    transparent_crc(p_820->g_157.s9, "p_820->g_157.s9", print_hash_value);
    transparent_crc(p_820->g_157.sa, "p_820->g_157.sa", print_hash_value);
    transparent_crc(p_820->g_157.sb, "p_820->g_157.sb", print_hash_value);
    transparent_crc(p_820->g_157.sc, "p_820->g_157.sc", print_hash_value);
    transparent_crc(p_820->g_157.sd, "p_820->g_157.sd", print_hash_value);
    transparent_crc(p_820->g_157.se, "p_820->g_157.se", print_hash_value);
    transparent_crc(p_820->g_157.sf, "p_820->g_157.sf", print_hash_value);
    transparent_crc(p_820->g_158.x, "p_820->g_158.x", print_hash_value);
    transparent_crc(p_820->g_158.y, "p_820->g_158.y", print_hash_value);
    transparent_crc(p_820->g_158.z, "p_820->g_158.z", print_hash_value);
    transparent_crc(p_820->g_158.w, "p_820->g_158.w", print_hash_value);
    transparent_crc(p_820->g_161.s0, "p_820->g_161.s0", print_hash_value);
    transparent_crc(p_820->g_161.s1, "p_820->g_161.s1", print_hash_value);
    transparent_crc(p_820->g_161.s2, "p_820->g_161.s2", print_hash_value);
    transparent_crc(p_820->g_161.s3, "p_820->g_161.s3", print_hash_value);
    transparent_crc(p_820->g_161.s4, "p_820->g_161.s4", print_hash_value);
    transparent_crc(p_820->g_161.s5, "p_820->g_161.s5", print_hash_value);
    transparent_crc(p_820->g_161.s6, "p_820->g_161.s6", print_hash_value);
    transparent_crc(p_820->g_161.s7, "p_820->g_161.s7", print_hash_value);
    transparent_crc(p_820->g_165, "p_820->g_165", print_hash_value);
    transparent_crc(p_820->g_166.x, "p_820->g_166.x", print_hash_value);
    transparent_crc(p_820->g_166.y, "p_820->g_166.y", print_hash_value);
    transparent_crc(p_820->g_294.x, "p_820->g_294.x", print_hash_value);
    transparent_crc(p_820->g_294.y, "p_820->g_294.y", print_hash_value);
    transparent_crc(p_820->g_299, "p_820->g_299", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_820->g_323[i], "p_820->g_323[i]", print_hash_value);

    }
    transparent_crc(p_820->g_325, "p_820->g_325", print_hash_value);
    transparent_crc(p_820->g_327, "p_820->g_327", print_hash_value);
    transparent_crc(p_820->g_360, "p_820->g_360", print_hash_value);
    transparent_crc(p_820->g_392.s0, "p_820->g_392.s0", print_hash_value);
    transparent_crc(p_820->g_392.s1, "p_820->g_392.s1", print_hash_value);
    transparent_crc(p_820->g_392.s2, "p_820->g_392.s2", print_hash_value);
    transparent_crc(p_820->g_392.s3, "p_820->g_392.s3", print_hash_value);
    transparent_crc(p_820->g_392.s4, "p_820->g_392.s4", print_hash_value);
    transparent_crc(p_820->g_392.s5, "p_820->g_392.s5", print_hash_value);
    transparent_crc(p_820->g_392.s6, "p_820->g_392.s6", print_hash_value);
    transparent_crc(p_820->g_392.s7, "p_820->g_392.s7", print_hash_value);
    transparent_crc(p_820->g_393, "p_820->g_393", print_hash_value);
    transparent_crc(p_820->g_431.s0, "p_820->g_431.s0", print_hash_value);
    transparent_crc(p_820->g_431.s1, "p_820->g_431.s1", print_hash_value);
    transparent_crc(p_820->g_431.s2, "p_820->g_431.s2", print_hash_value);
    transparent_crc(p_820->g_431.s3, "p_820->g_431.s3", print_hash_value);
    transparent_crc(p_820->g_431.s4, "p_820->g_431.s4", print_hash_value);
    transparent_crc(p_820->g_431.s5, "p_820->g_431.s5", print_hash_value);
    transparent_crc(p_820->g_431.s6, "p_820->g_431.s6", print_hash_value);
    transparent_crc(p_820->g_431.s7, "p_820->g_431.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_820->g_437[i].f0, "p_820->g_437[i].f0", print_hash_value);

    }
    transparent_crc(p_820->g_439.f0, "p_820->g_439.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_820->g_440[i][j].f0, "p_820->g_440[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_820->g_441.f0, "p_820->g_441.f0", print_hash_value);
    transparent_crc(p_820->g_442.f0, "p_820->g_442.f0", print_hash_value);
    transparent_crc(p_820->g_443.f0, "p_820->g_443.f0", print_hash_value);
    transparent_crc(p_820->g_444.f0, "p_820->g_444.f0", print_hash_value);
    transparent_crc(p_820->g_445.f0, "p_820->g_445.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_820->g_446[i].f0, "p_820->g_446[i].f0", print_hash_value);

    }
    transparent_crc(p_820->g_447.f0, "p_820->g_447.f0", print_hash_value);
    transparent_crc(p_820->g_448.f0, "p_820->g_448.f0", print_hash_value);
    transparent_crc(p_820->g_449.f0, "p_820->g_449.f0", print_hash_value);
    transparent_crc(p_820->g_450.f0, "p_820->g_450.f0", print_hash_value);
    transparent_crc(p_820->g_451.f0, "p_820->g_451.f0", print_hash_value);
    transparent_crc(p_820->g_452.f0, "p_820->g_452.f0", print_hash_value);
    transparent_crc(p_820->g_453.f0, "p_820->g_453.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_820->g_454[i].f0, "p_820->g_454[i].f0", print_hash_value);

    }
    transparent_crc(p_820->g_455.f0, "p_820->g_455.f0", print_hash_value);
    transparent_crc(p_820->g_457.f0, "p_820->g_457.f0", print_hash_value);
    transparent_crc(p_820->g_460, "p_820->g_460", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_820->g_461[i], "p_820->g_461[i]", print_hash_value);

    }
    transparent_crc(p_820->g_467.x, "p_820->g_467.x", print_hash_value);
    transparent_crc(p_820->g_467.y, "p_820->g_467.y", print_hash_value);
    transparent_crc(p_820->g_490.x, "p_820->g_490.x", print_hash_value);
    transparent_crc(p_820->g_490.y, "p_820->g_490.y", print_hash_value);
    transparent_crc(p_820->g_490.z, "p_820->g_490.z", print_hash_value);
    transparent_crc(p_820->g_490.w, "p_820->g_490.w", print_hash_value);
    transparent_crc(p_820->g_491, "p_820->g_491", print_hash_value);
    transparent_crc(p_820->g_497, "p_820->g_497", print_hash_value);
    transparent_crc(p_820->g_507, "p_820->g_507", print_hash_value);
    transparent_crc(p_820->g_536.s0, "p_820->g_536.s0", print_hash_value);
    transparent_crc(p_820->g_536.s1, "p_820->g_536.s1", print_hash_value);
    transparent_crc(p_820->g_536.s2, "p_820->g_536.s2", print_hash_value);
    transparent_crc(p_820->g_536.s3, "p_820->g_536.s3", print_hash_value);
    transparent_crc(p_820->g_536.s4, "p_820->g_536.s4", print_hash_value);
    transparent_crc(p_820->g_536.s5, "p_820->g_536.s5", print_hash_value);
    transparent_crc(p_820->g_536.s6, "p_820->g_536.s6", print_hash_value);
    transparent_crc(p_820->g_536.s7, "p_820->g_536.s7", print_hash_value);
    transparent_crc(p_820->g_536.s8, "p_820->g_536.s8", print_hash_value);
    transparent_crc(p_820->g_536.s9, "p_820->g_536.s9", print_hash_value);
    transparent_crc(p_820->g_536.sa, "p_820->g_536.sa", print_hash_value);
    transparent_crc(p_820->g_536.sb, "p_820->g_536.sb", print_hash_value);
    transparent_crc(p_820->g_536.sc, "p_820->g_536.sc", print_hash_value);
    transparent_crc(p_820->g_536.sd, "p_820->g_536.sd", print_hash_value);
    transparent_crc(p_820->g_536.se, "p_820->g_536.se", print_hash_value);
    transparent_crc(p_820->g_536.sf, "p_820->g_536.sf", print_hash_value);
    transparent_crc(p_820->g_541, "p_820->g_541", print_hash_value);
    transparent_crc(p_820->g_565.f0, "p_820->g_565.f0", print_hash_value);
    transparent_crc(p_820->g_590.x, "p_820->g_590.x", print_hash_value);
    transparent_crc(p_820->g_590.y, "p_820->g_590.y", print_hash_value);
    transparent_crc(p_820->g_598.x, "p_820->g_598.x", print_hash_value);
    transparent_crc(p_820->g_598.y, "p_820->g_598.y", print_hash_value);
    transparent_crc(p_820->g_599.s0, "p_820->g_599.s0", print_hash_value);
    transparent_crc(p_820->g_599.s1, "p_820->g_599.s1", print_hash_value);
    transparent_crc(p_820->g_599.s2, "p_820->g_599.s2", print_hash_value);
    transparent_crc(p_820->g_599.s3, "p_820->g_599.s3", print_hash_value);
    transparent_crc(p_820->g_599.s4, "p_820->g_599.s4", print_hash_value);
    transparent_crc(p_820->g_599.s5, "p_820->g_599.s5", print_hash_value);
    transparent_crc(p_820->g_599.s6, "p_820->g_599.s6", print_hash_value);
    transparent_crc(p_820->g_599.s7, "p_820->g_599.s7", print_hash_value);
    transparent_crc(p_820->g_599.s8, "p_820->g_599.s8", print_hash_value);
    transparent_crc(p_820->g_599.s9, "p_820->g_599.s9", print_hash_value);
    transparent_crc(p_820->g_599.sa, "p_820->g_599.sa", print_hash_value);
    transparent_crc(p_820->g_599.sb, "p_820->g_599.sb", print_hash_value);
    transparent_crc(p_820->g_599.sc, "p_820->g_599.sc", print_hash_value);
    transparent_crc(p_820->g_599.sd, "p_820->g_599.sd", print_hash_value);
    transparent_crc(p_820->g_599.se, "p_820->g_599.se", print_hash_value);
    transparent_crc(p_820->g_599.sf, "p_820->g_599.sf", print_hash_value);
    transparent_crc(p_820->g_600.s0, "p_820->g_600.s0", print_hash_value);
    transparent_crc(p_820->g_600.s1, "p_820->g_600.s1", print_hash_value);
    transparent_crc(p_820->g_600.s2, "p_820->g_600.s2", print_hash_value);
    transparent_crc(p_820->g_600.s3, "p_820->g_600.s3", print_hash_value);
    transparent_crc(p_820->g_600.s4, "p_820->g_600.s4", print_hash_value);
    transparent_crc(p_820->g_600.s5, "p_820->g_600.s5", print_hash_value);
    transparent_crc(p_820->g_600.s6, "p_820->g_600.s6", print_hash_value);
    transparent_crc(p_820->g_600.s7, "p_820->g_600.s7", print_hash_value);
    transparent_crc(p_820->g_600.s8, "p_820->g_600.s8", print_hash_value);
    transparent_crc(p_820->g_600.s9, "p_820->g_600.s9", print_hash_value);
    transparent_crc(p_820->g_600.sa, "p_820->g_600.sa", print_hash_value);
    transparent_crc(p_820->g_600.sb, "p_820->g_600.sb", print_hash_value);
    transparent_crc(p_820->g_600.sc, "p_820->g_600.sc", print_hash_value);
    transparent_crc(p_820->g_600.sd, "p_820->g_600.sd", print_hash_value);
    transparent_crc(p_820->g_600.se, "p_820->g_600.se", print_hash_value);
    transparent_crc(p_820->g_600.sf, "p_820->g_600.sf", print_hash_value);
    transparent_crc(p_820->g_606, "p_820->g_606", print_hash_value);
    transparent_crc(p_820->g_608, "p_820->g_608", print_hash_value);
    transparent_crc(p_820->g_645.s0, "p_820->g_645.s0", print_hash_value);
    transparent_crc(p_820->g_645.s1, "p_820->g_645.s1", print_hash_value);
    transparent_crc(p_820->g_645.s2, "p_820->g_645.s2", print_hash_value);
    transparent_crc(p_820->g_645.s3, "p_820->g_645.s3", print_hash_value);
    transparent_crc(p_820->g_645.s4, "p_820->g_645.s4", print_hash_value);
    transparent_crc(p_820->g_645.s5, "p_820->g_645.s5", print_hash_value);
    transparent_crc(p_820->g_645.s6, "p_820->g_645.s6", print_hash_value);
    transparent_crc(p_820->g_645.s7, "p_820->g_645.s7", print_hash_value);
    transparent_crc(p_820->g_645.s8, "p_820->g_645.s8", print_hash_value);
    transparent_crc(p_820->g_645.s9, "p_820->g_645.s9", print_hash_value);
    transparent_crc(p_820->g_645.sa, "p_820->g_645.sa", print_hash_value);
    transparent_crc(p_820->g_645.sb, "p_820->g_645.sb", print_hash_value);
    transparent_crc(p_820->g_645.sc, "p_820->g_645.sc", print_hash_value);
    transparent_crc(p_820->g_645.sd, "p_820->g_645.sd", print_hash_value);
    transparent_crc(p_820->g_645.se, "p_820->g_645.se", print_hash_value);
    transparent_crc(p_820->g_645.sf, "p_820->g_645.sf", print_hash_value);
    transparent_crc(p_820->g_648.x, "p_820->g_648.x", print_hash_value);
    transparent_crc(p_820->g_648.y, "p_820->g_648.y", print_hash_value);
    transparent_crc(p_820->g_668.x, "p_820->g_668.x", print_hash_value);
    transparent_crc(p_820->g_668.y, "p_820->g_668.y", print_hash_value);
    transparent_crc(p_820->g_668.z, "p_820->g_668.z", print_hash_value);
    transparent_crc(p_820->g_668.w, "p_820->g_668.w", print_hash_value);
    transparent_crc(p_820->g_701.s0, "p_820->g_701.s0", print_hash_value);
    transparent_crc(p_820->g_701.s1, "p_820->g_701.s1", print_hash_value);
    transparent_crc(p_820->g_701.s2, "p_820->g_701.s2", print_hash_value);
    transparent_crc(p_820->g_701.s3, "p_820->g_701.s3", print_hash_value);
    transparent_crc(p_820->g_701.s4, "p_820->g_701.s4", print_hash_value);
    transparent_crc(p_820->g_701.s5, "p_820->g_701.s5", print_hash_value);
    transparent_crc(p_820->g_701.s6, "p_820->g_701.s6", print_hash_value);
    transparent_crc(p_820->g_701.s7, "p_820->g_701.s7", print_hash_value);
    transparent_crc(p_820->g_726.s0, "p_820->g_726.s0", print_hash_value);
    transparent_crc(p_820->g_726.s1, "p_820->g_726.s1", print_hash_value);
    transparent_crc(p_820->g_726.s2, "p_820->g_726.s2", print_hash_value);
    transparent_crc(p_820->g_726.s3, "p_820->g_726.s3", print_hash_value);
    transparent_crc(p_820->g_726.s4, "p_820->g_726.s4", print_hash_value);
    transparent_crc(p_820->g_726.s5, "p_820->g_726.s5", print_hash_value);
    transparent_crc(p_820->g_726.s6, "p_820->g_726.s6", print_hash_value);
    transparent_crc(p_820->g_726.s7, "p_820->g_726.s7", print_hash_value);
    transparent_crc(p_820->g_726.s8, "p_820->g_726.s8", print_hash_value);
    transparent_crc(p_820->g_726.s9, "p_820->g_726.s9", print_hash_value);
    transparent_crc(p_820->g_726.sa, "p_820->g_726.sa", print_hash_value);
    transparent_crc(p_820->g_726.sb, "p_820->g_726.sb", print_hash_value);
    transparent_crc(p_820->g_726.sc, "p_820->g_726.sc", print_hash_value);
    transparent_crc(p_820->g_726.sd, "p_820->g_726.sd", print_hash_value);
    transparent_crc(p_820->g_726.se, "p_820->g_726.se", print_hash_value);
    transparent_crc(p_820->g_726.sf, "p_820->g_726.sf", print_hash_value);
    transparent_crc(p_820->g_727.x, "p_820->g_727.x", print_hash_value);
    transparent_crc(p_820->g_727.y, "p_820->g_727.y", print_hash_value);
    transparent_crc(p_820->g_727.z, "p_820->g_727.z", print_hash_value);
    transparent_crc(p_820->g_727.w, "p_820->g_727.w", print_hash_value);
    transparent_crc(p_820->g_734.x, "p_820->g_734.x", print_hash_value);
    transparent_crc(p_820->g_734.y, "p_820->g_734.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_820->g_741[i], "p_820->g_741[i]", print_hash_value);

    }
    transparent_crc(p_820->g_744.s0, "p_820->g_744.s0", print_hash_value);
    transparent_crc(p_820->g_744.s1, "p_820->g_744.s1", print_hash_value);
    transparent_crc(p_820->g_744.s2, "p_820->g_744.s2", print_hash_value);
    transparent_crc(p_820->g_744.s3, "p_820->g_744.s3", print_hash_value);
    transparent_crc(p_820->g_744.s4, "p_820->g_744.s4", print_hash_value);
    transparent_crc(p_820->g_744.s5, "p_820->g_744.s5", print_hash_value);
    transparent_crc(p_820->g_744.s6, "p_820->g_744.s6", print_hash_value);
    transparent_crc(p_820->g_744.s7, "p_820->g_744.s7", print_hash_value);
    transparent_crc(p_820->g_744.s8, "p_820->g_744.s8", print_hash_value);
    transparent_crc(p_820->g_744.s9, "p_820->g_744.s9", print_hash_value);
    transparent_crc(p_820->g_744.sa, "p_820->g_744.sa", print_hash_value);
    transparent_crc(p_820->g_744.sb, "p_820->g_744.sb", print_hash_value);
    transparent_crc(p_820->g_744.sc, "p_820->g_744.sc", print_hash_value);
    transparent_crc(p_820->g_744.sd, "p_820->g_744.sd", print_hash_value);
    transparent_crc(p_820->g_744.se, "p_820->g_744.se", print_hash_value);
    transparent_crc(p_820->g_744.sf, "p_820->g_744.sf", print_hash_value);
    transparent_crc(p_820->g_789.s0, "p_820->g_789.s0", print_hash_value);
    transparent_crc(p_820->g_789.s1, "p_820->g_789.s1", print_hash_value);
    transparent_crc(p_820->g_789.s2, "p_820->g_789.s2", print_hash_value);
    transparent_crc(p_820->g_789.s3, "p_820->g_789.s3", print_hash_value);
    transparent_crc(p_820->g_789.s4, "p_820->g_789.s4", print_hash_value);
    transparent_crc(p_820->g_789.s5, "p_820->g_789.s5", print_hash_value);
    transparent_crc(p_820->g_789.s6, "p_820->g_789.s6", print_hash_value);
    transparent_crc(p_820->g_789.s7, "p_820->g_789.s7", print_hash_value);
    transparent_crc(p_820->g_790.x, "p_820->g_790.x", print_hash_value);
    transparent_crc(p_820->g_790.y, "p_820->g_790.y", print_hash_value);
    transparent_crc(p_820->g_790.z, "p_820->g_790.z", print_hash_value);
    transparent_crc(p_820->g_790.w, "p_820->g_790.w", print_hash_value);
    transparent_crc(p_820->g_791.s0, "p_820->g_791.s0", print_hash_value);
    transparent_crc(p_820->g_791.s1, "p_820->g_791.s1", print_hash_value);
    transparent_crc(p_820->g_791.s2, "p_820->g_791.s2", print_hash_value);
    transparent_crc(p_820->g_791.s3, "p_820->g_791.s3", print_hash_value);
    transparent_crc(p_820->g_791.s4, "p_820->g_791.s4", print_hash_value);
    transparent_crc(p_820->g_791.s5, "p_820->g_791.s5", print_hash_value);
    transparent_crc(p_820->g_791.s6, "p_820->g_791.s6", print_hash_value);
    transparent_crc(p_820->g_791.s7, "p_820->g_791.s7", print_hash_value);
    transparent_crc(p_820->g_805.x, "p_820->g_805.x", print_hash_value);
    transparent_crc(p_820->g_805.y, "p_820->g_805.y", print_hash_value);
    transparent_crc(p_820->v_collective, "p_820->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_820->g_special_values[i + 30 * get_linear_group_id()], "p_820->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_820->l_special_values[i], "p_820->l_special_values[i]", print_hash_value);
    transparent_crc(p_820->l_comm_values[get_linear_local_id()], "p_820->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_820->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()], "p_820->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
