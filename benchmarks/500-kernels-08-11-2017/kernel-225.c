// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,77,1 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{18,53,58,71,22,35,0,13,28,10,76,62,31,39,45,54,34,56,69,24,70,59,61,38,23,65,44,55,48,60,8,36,41,74,73,21,52,4,6,32,43,51,72,64,42,11,14,27,26,9,12,63,1,29,25,66,16,5,47,40,33,17,3,49,7,67,15,78,2,57,68,46,75,37,20,19,77,50,30}, // permutation 0
{13,62,65,10,26,35,43,60,58,29,32,11,25,14,21,4,40,47,78,53,37,45,16,38,5,52,59,9,30,42,75,15,23,28,33,49,73,39,56,50,19,27,7,3,24,1,74,6,63,72,68,0,51,2,61,70,48,22,12,31,54,55,44,41,17,66,71,8,18,36,20,57,46,69,76,64,77,67,34}, // permutation 1
{25,72,14,3,64,5,28,17,52,9,23,26,71,74,0,49,58,42,65,47,73,8,13,22,1,67,37,39,41,46,7,40,33,78,20,36,31,38,57,70,51,30,75,43,10,50,45,68,27,55,53,15,56,4,48,11,63,16,34,6,54,29,32,12,21,76,62,60,77,66,24,69,18,35,19,59,2,44,61}, // permutation 2
{66,16,20,40,42,57,35,74,24,53,38,67,22,15,73,21,78,76,55,39,48,51,14,1,8,30,11,72,47,29,61,12,64,32,62,9,28,69,33,0,5,10,36,17,27,41,70,49,59,37,19,75,7,34,2,44,77,4,18,13,6,71,50,65,23,68,58,46,3,54,45,31,43,25,60,56,63,26,52}, // permutation 3
{6,68,38,55,67,41,23,63,12,51,69,39,19,47,22,37,20,0,4,28,15,11,62,76,56,10,29,64,14,78,40,54,16,9,70,26,52,32,5,2,3,66,31,1,50,60,75,8,18,30,35,59,61,58,48,44,25,34,72,46,27,74,7,13,36,73,24,77,65,71,17,45,42,57,43,21,49,33,53}, // permutation 4
{36,3,45,64,8,41,78,61,40,50,26,9,47,57,55,27,14,76,65,69,51,28,67,5,0,39,17,29,48,25,10,46,19,74,59,34,31,2,12,52,63,23,56,54,15,24,6,13,21,38,16,75,66,20,18,68,4,77,7,22,1,58,37,33,43,70,71,35,60,53,72,30,44,62,73,11,42,32,49}, // permutation 5
{12,74,47,77,17,68,66,57,34,59,75,6,39,49,26,28,31,69,56,72,20,10,40,3,67,25,0,45,53,9,50,5,65,38,2,54,58,60,30,78,52,42,4,55,46,36,15,21,41,76,23,61,33,64,8,71,7,22,19,14,13,48,11,18,16,29,44,24,70,51,32,1,73,62,27,37,35,63,43}, // permutation 6
{66,23,3,35,32,54,75,60,37,22,70,10,67,49,47,65,28,12,36,16,17,50,33,55,45,52,68,77,61,40,30,26,58,2,9,1,56,21,6,8,64,4,73,38,57,19,20,43,41,63,15,71,29,14,24,53,74,34,72,27,25,5,51,69,59,42,76,62,0,46,31,48,13,44,39,7,18,78,11}, // permutation 7
{63,33,24,57,77,51,15,28,36,38,72,35,25,27,76,30,55,70,6,19,54,43,61,52,67,31,48,59,78,29,14,0,44,7,13,56,22,47,37,4,60,42,39,64,1,45,62,66,10,16,2,50,73,58,11,75,26,20,9,32,18,49,34,69,12,8,17,53,68,3,40,46,74,21,71,65,5,23,41}, // permutation 8
{22,27,65,73,58,43,70,36,44,34,26,59,16,48,71,30,41,57,55,1,46,78,68,47,60,69,56,62,4,31,76,19,17,14,28,77,66,33,24,54,32,40,8,63,42,39,25,15,7,51,67,64,13,52,37,53,75,74,50,12,45,29,35,18,20,11,21,10,49,9,0,3,5,72,38,61,6,23,2} // permutation 9
};

// Seed: 2069461792

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int8_t * f0;
   volatile int8_t * f1;
   int32_t  f2;
   int32_t  f3;
};

union U1 {
   uint32_t  f0;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_7;
    volatile int8_t g_12;
    int8_t g_14;
    volatile uint16_t g_15[3][4][2];
    volatile VECTOR(int16_t, 8) g_18;
    int8_t *g_28[8];
    VECTOR(int64_t, 2) g_29;
    volatile VECTOR(uint8_t, 2) g_34;
    volatile int32_t g_45;
    union U1 g_46;
    volatile VECTOR(int32_t, 8) g_47;
    uint8_t g_54;
    int32_t * volatile g_73;
    int8_t **g_102;
    VECTOR(int64_t, 16) g_103;
    int8_t g_113;
    uint32_t g_114;
    int32_t *g_119;
    int32_t ** volatile g_118[3];
    uint32_t g_129;
    VECTOR(int64_t, 4) g_140;
    volatile VECTOR(uint8_t, 8) g_143;
    uint16_t g_148;
    uint64_t g_149;
    VECTOR(int8_t, 8) g_177;
    VECTOR(int8_t, 8) g_178;
    int32_t g_193;
    int16_t g_194;
    VECTOR(int8_t, 4) g_202;
    VECTOR(int64_t, 4) g_210;
    VECTOR(uint16_t, 4) g_215;
    VECTOR(uint32_t, 8) g_221;
    int8_t ***g_226;
    volatile VECTOR(int8_t, 4) g_233;
    VECTOR(uint32_t, 4) g_238;
    union U0 g_251;
    uint8_t g_253;
    union U1 *g_257;
    VECTOR(int16_t, 2) g_273;
    VECTOR(uint64_t, 8) g_299;
    VECTOR(uint64_t, 4) g_300;
    int8_t ****g_319[1][3][8];
    int32_t g_327;
    VECTOR(int16_t, 16) g_343;
    int32_t * volatile g_419;
    volatile uint32_t g_425;
    int32_t ** volatile g_432;
    int64_t *g_438;
    int64_t **g_437[2];
    int64_t *** volatile g_436;
    uint16_t g_443;
    volatile union U1 g_447[3];
    volatile union U1 *g_446;
    VECTOR(int16_t, 2) g_460;
    VECTOR(int8_t, 4) g_464;
    volatile VECTOR(uint64_t, 4) g_470;
    VECTOR(uint8_t, 4) g_499;
    volatile VECTOR(uint32_t, 4) g_512;
    uint64_t g_532;
    int64_t ***g_539;
    int64_t ****g_538[5][5];
    int32_t * volatile g_544[8][7][2];
    int32_t * volatile g_545;
    VECTOR(uint16_t, 2) g_557;
    VECTOR(int32_t, 2) g_582;
    VECTOR(int32_t, 4) g_584;
    volatile VECTOR(int16_t, 8) g_600;
    VECTOR(int16_t, 8) g_601;
    int64_t *****g_604;
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
int32_t  func_1(struct S2 * p_647);
int32_t * func_21(int8_t * p_22, int8_t * p_23, union U1  p_24, int32_t * p_25, struct S2 * p_647);
int32_t  func_49(uint8_t  p_50, int16_t  p_51, uint16_t  p_52, struct S2 * p_647);
uint8_t  func_60(int32_t  p_61, struct S2 * p_647);
int32_t  func_62(int8_t * p_63, int8_t ** p_64, struct S2 * p_647);
int8_t ** func_66(int32_t  p_67, struct S2 * p_647);
int16_t  func_74(int16_t  p_75, uint32_t  p_76, int8_t * p_77, struct S2 * p_647);
int16_t  func_78(int8_t * p_79, struct S2 * p_647);
int32_t  func_86(int16_t  p_87, int8_t  p_88, int32_t * p_89, int64_t  p_90, struct S2 * p_647);
int16_t  func_93(int8_t  p_94, int32_t * p_95, int64_t  p_96, int64_t  p_97, struct S2 * p_647);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_647->g_3 p_647->g_15 p_647->g_12 p_647->g_18 p_647->g_7 p_647->g_29 p_647->g_34 p_647->g_45 p_647->g_46 p_647->g_47 p_647->g_54 p_647->g_73 p_647->g_14 p_647->g_103 p_647->l_comm_values p_647->g_113 p_647->g_114 p_647->g_46.f0 p_647->g_140 p_647->g_143 p_647->g_119 p_647->g_149 p_647->g_177 p_647->g_178 p_647->g_148 p_647->g_202 p_647->g_215 p_647->g_238 p_647->g_251 p_647->g_253 p_647->g_273 p_647->g_193 p_647->g_299 p_647->g_300 p_647->g_251.f2 p_647->g_327 p_647->g_343 p_647->g_221 p_647->g_419 p_647->g_425 p_647->g_432 p_647->g_436 p_647->g_443 p_647->g_446 p_647->g_460 p_647->g_464 p_647->g_470 p_647->g_499 p_647->g_512 p_647->g_532 p_647->g_538 p_647->g_557 p_647->g_582 p_647->g_584 p_647->g_194
 * writes: p_647->g_3 p_647->g_15 p_647->g_7 p_647->g_28 p_647->g_54 p_647->g_102 p_647->g_14 p_647->g_113 p_647->g_119 p_647->g_46 p_647->g_129 p_647->g_148 p_647->g_149 p_647->g_193 p_647->g_194 p_647->g_253 p_647->g_257 p_647->g_251.f2 p_647->g_327 p_647->g_103 p_647->g_273 p_647->g_425 p_647->g_437 p_647->g_443 p_647->g_532 p_647->g_251.f3 p_647->g_538
 */
int32_t  func_1(struct S2 * p_647)
{ /* block id: 4 */
    uint8_t l_19[1];
    int32_t *l_20 = &p_647->g_7;
    int8_t *l_27[2][6] = {{&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14},{&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14}};
    int8_t **l_26[2];
    VECTOR(uint64_t, 8) l_37 = (VECTOR(uint64_t, 8))(0xD6D23037D9CC1323L, (VECTOR(uint64_t, 4))(0xD6D23037D9CC1323L, (VECTOR(uint64_t, 2))(0xD6D23037D9CC1323L, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0xD6D23037D9CC1323L, 18446744073709551607UL);
    int32_t l_44 = 8L;
    int32_t **l_514 = &p_647->g_119;
    int32_t **l_515 = &p_647->g_119;
    int32_t **l_516 = &p_647->g_119;
    int32_t **l_517 = &p_647->g_119;
    int32_t *l_518 = (void*)0;
    VECTOR(uint64_t, 2) l_530 = (VECTOR(uint64_t, 2))(0UL, 0xAB0855C47C55F600L);
    uint64_t *l_531[7][4] = {{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532},{(void*)0,&p_647->g_532,(void*)0,&p_647->g_532}};
    int32_t *l_533 = &p_647->g_251.f3;
    uint8_t *l_534[8] = {&p_647->g_253,&l_19[0],&p_647->g_253,&p_647->g_253,&l_19[0],&p_647->g_253,&p_647->g_253,&l_19[0]};
    uint64_t l_535 = 1UL;
    int64_t ****l_541 = &p_647->g_539;
    VECTOR(uint64_t, 2) l_543 = (VECTOR(uint64_t, 2))(0x009D6631C7B4695BL, 0x3694FDF2B2CC251EL);
    VECTOR(uint64_t, 2) l_571 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL);
    VECTOR(uint64_t, 16) l_572 = (VECTOR(uint64_t, 16))(0xC3F02AC3C29EC319L, (VECTOR(uint64_t, 4))(0xC3F02AC3C29EC319L, (VECTOR(uint64_t, 2))(0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L), 0x02C49AEC3C3FEB69L), 0x02C49AEC3C3FEB69L, 0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L, (VECTOR(uint64_t, 2))(0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L), (VECTOR(uint64_t, 2))(0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L), 0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L, 0xC3F02AC3C29EC319L, 0x02C49AEC3C3FEB69L);
    VECTOR(int32_t, 16) l_583 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L, (VECTOR(int32_t, 2))((-1L), 8L), (VECTOR(int32_t, 2))((-1L), 8L), (-1L), 8L, (-1L), 8L);
    int8_t ***l_593 = &p_647->g_102;
    int32_t *l_623 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_19[i] = 0xBFL;
    for (i = 0; i < 2; i++)
        l_26[i] = &l_27[0][1];
    for (p_647->g_3 = 0; (p_647->g_3 > 7); p_647->g_3 = safe_add_func_int16_t_s_s(p_647->g_3, 9))
    { /* block id: 7 */
        int32_t *l_6 = &p_647->g_7;
        int32_t *l_8 = &p_647->g_7;
        int32_t *l_9 = &p_647->g_7;
        int32_t *l_10 = &p_647->g_7;
        int32_t *l_11 = &p_647->g_7;
        int32_t *l_13[9][10][2] = {{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}},{{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3},{&p_647->g_7,&p_647->g_3}}};
        int i, j, k;
        --p_647->g_15[1][1][0];
        return p_647->g_12;
    }
    (*l_20) ^= (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_647->g_18.s16)).yxyyyyyxxyyxxxyx)).s6 ^ (l_19[0] , ((VECTOR(int16_t, 2))(0x1276L, 0x690BL)).lo));
    atomic_and(&p_647->l_atomic_reduction[0], (l_20 != (l_518 = func_21((p_647->g_28[5] = (void*)0), &p_647->g_14, (((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(p_647->g_29.xxyyyyxxyyxxyyxy)).s4ab1, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0L)).yxyx))))).zxxwyxyy, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(0x0A4122E7DFE98D7EL, (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))((*l_20), (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_647->g_18.s2, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(p_647->g_34.yx)), ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(1UL, 0xD7L, 252UL, ((safe_add_func_int8_t_s_s((*l_20), (((VECTOR(uint64_t, 2))(l_37.s77)).lo ^ ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(0x0ED6L, l_44)), 12)), (p_647->g_45 & p_647->g_29.y))) < 0x63780627DBD1BD9FL) >= 9L) <= FAKE_DIVERGE(p_647->global_0_offset, get_global_id(0), 10))))) >= (*l_20)), p_647->g_45, ((VECTOR(uint8_t, 2))(0x02L)), 0UL)).lo, ((VECTOR(uint8_t, 4))(0xA4L))))).hi, ((VECTOR(uint8_t, 2))(0x8BL))))), 9UL)).y, (*l_20))), (-1L), 0x38L)).z, 2)), 3L, 5L, p_647->g_34.x, 0x52618108949E3B93L, 0x6A1EA5693CDB7CFFL, 0x45CA36B4E1338462L)).odd))).wyxwzywy))).s6 , p_647->g_46), &p_647->g_3, p_647))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_647->v_collective += p_647->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((safe_unary_minus_func_int16_t_s(((!((*l_20) = p_647->g_54)) && ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_647->g_54 = ((*l_20) || (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0UL, 0xFDC7DAAEL)).lo, p_647->g_3)), GROUP_DIVERGE(0, 1))), (p_647->g_299.s5 < ((((((*l_533) = (((p_647->g_532 ^= ((VECTOR(uint64_t, 8))(l_530.xxyxxxyy)).s7) , 0x61A2L) , (0x1B8DL == 65530UL))) , (l_44 |= ((*l_20) | (*l_518)))) & p_647->g_238.w) , (void*)0) == &p_647->g_437[0])))))), l_535)), 65534UL)) != p_647->g_221.s6)))))
    { /* block id: 207 */
        int64_t *****l_540 = &p_647->g_538[2][4];
        VECTOR(uint64_t, 4) l_542 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
        int32_t *l_546 = &p_647->g_327;
        int16_t *l_547 = (void*)0;
        int i;
        l_44 ^= ((safe_mul_func_int8_t_s_s((*l_20), (((*l_540) = p_647->g_538[1][2]) == l_541))) != ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 8))(l_542.xxzwwwwz)).s7246734113762152, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_543.xx)), 3UL, 0x1640A174A56E3C01L)).yzwxzwwyxxywwzzw))).sd);
        (*l_515) = l_546;
        (*l_518) ^= (l_547 == l_547);
    }
    else
    { /* block id: 212 */
        int32_t *l_548 = &p_647->g_327;
        int8_t **l_560 = (void*)0;
        int8_t ***l_561 = &l_26[1];
        VECTOR(int32_t, 2) l_581 = (VECTOR(int32_t, 2))(0x57EC2F8CL, 0x566B4300L);
        int32_t *l_594 = &p_647->g_251.f2;
        uint32_t l_644 = 4294967293UL;
        int i;
        (*l_516) = l_548;
        (*l_594) = (safe_mul_func_uint16_t_u_u((((*l_548) = (safe_div_func_int32_t_s_s((*l_548), (safe_mul_func_int16_t_s_s((p_647->g_299.s6 , (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(1L, 0x6AL, ((((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(p_647->g_557.yyxyxxxx)).hi))), (uint16_t)((safe_sub_func_int8_t_s_s(((((*l_561) = l_560) != &l_27[0][1]) | (safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(l_571.yxyx)).ywyyzxwx, ((VECTOR(uint64_t, 16))(l_572.s477fab1856c8a499)).odd))).s0 | p_647->g_300.y) ^ (safe_rshift_func_int8_t_s_s(((((*l_518) = (safe_mod_func_int32_t_s_s(0x42A4DF53L, (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_581.yyxxyxyx)), ((VECTOR(int32_t, 2))(p_647->g_582.xy)).yyxyxxyx))).odd)).yywywywz)).hi, ((VECTOR(int32_t, 8))(l_583.sc3927d9f)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_647->g_584.wz)), 0x189D0BE5L, 0x3CC6B557L)).xzwyzwzx)).lo))))).y , (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((p_647->g_47.s6 , (safe_mul_func_uint8_t_u_u((l_593 == (void*)0), p_647->g_343.s6))) ^ 7UL), 0x70BDB899F896D043L)), FAKE_DIVERGE(p_647->global_0_offset, get_global_id(0), 10))), 4))), 6)) > (*l_548)), p_647->g_194))))) > (*p_647->g_119)) < p_647->g_443), (*l_548)))), 0xCA4DF84EL)), 0xECE5L)) ^ p_647->g_557.x), 0x3BF5L)), (*l_548)))))), 0x2EL)) <= GROUP_DIVERGE(1, 1)), (uint16_t)p_647->g_143.s6))).z , 0x56CDB31C03DBE2F8L) >= 0xD4D0D83BC5D9009AL), ((VECTOR(int8_t, 4))(0x77L)), ((VECTOR(int8_t, 4))(0x56L)), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0L)), 2L)).hi, ((VECTOR(int8_t, 8))((-5L)))))).s5, 0))), 9UL))))) == p_647->g_29.y), p_647->g_300.y));
        (*l_20) &= (**l_516);
        for (p_647->g_149 = 19; (p_647->g_149 < 43); ++p_647->g_149)
        { /* block id: 221 */
            VECTOR(int16_t, 2) l_599 = (VECTOR(int16_t, 2))((-1L), 0x2AA3L);
            int64_t *****l_606 = (void*)0;
            int64_t ******l_605 = &l_606;
            uint16_t l_617 = 0UL;
            int32_t *l_620 = &p_647->g_251.f2;
            union U0 l_637[9][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
            int i, j;
            (1 + 1);
        }
    }
    return p_647->g_46.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_47 p_647->g_54 p_647->g_73 p_647->g_3 p_647->g_12 p_647->g_14 p_647->g_103 p_647->l_comm_values p_647->g_29 p_647->g_7 p_647->g_113 p_647->g_114 p_647->g_46.f0 p_647->g_140 p_647->g_143 p_647->g_45 p_647->g_15 p_647->g_119 p_647->g_149 p_647->g_177 p_647->g_178 p_647->g_148 p_647->g_202 p_647->g_215 p_647->g_238 p_647->g_251 p_647->g_253 p_647->g_273 p_647->g_193 p_647->g_299 p_647->g_300 p_647->g_251.f2 p_647->g_327 p_647->g_343 p_647->g_221 p_647->g_419 p_647->g_425 p_647->g_432 p_647->g_436 p_647->g_443 p_647->g_446 p_647->g_460 p_647->g_464 p_647->g_470 p_647->g_499 p_647->g_512
 * writes: p_647->g_54 p_647->g_3 p_647->g_102 p_647->g_14 p_647->g_7 p_647->g_113 p_647->g_119 p_647->g_46 p_647->g_129 p_647->g_148 p_647->g_149 p_647->g_193 p_647->g_194 p_647->g_253 p_647->g_257 p_647->g_251.f2 p_647->g_327 p_647->g_103 p_647->g_273 p_647->g_425 p_647->g_437 p_647->g_443
 */
int32_t * func_21(int8_t * p_22, int8_t * p_23, union U1  p_24, int32_t * p_25, struct S2 * p_647)
{ /* block id: 13 */
    VECTOR(int32_t, 4) l_48 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
    uint8_t *l_53[4] = {&p_647->g_54,&p_647->g_54,&p_647->g_54,&p_647->g_54};
    int32_t l_55 = (-1L);
    int8_t *l_65 = (void*)0;
    VECTOR(int8_t, 4) l_442 = (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 7L), 7L);
    VECTOR(int8_t, 8) l_463 = (VECTOR(int8_t, 8))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 1L), 1L), 1L, 0x47L, 1L);
    int64_t ****l_467 = (void*)0;
    int64_t ***l_469 = (void*)0;
    int64_t ****l_468 = &l_469;
    VECTOR(uint64_t, 8) l_471 = (VECTOR(uint64_t, 8))(0x883879A0458D6C72L, (VECTOR(uint64_t, 4))(0x883879A0458D6C72L, (VECTOR(uint64_t, 2))(0x883879A0458D6C72L, 0x3701DE3194642FA6L), 0x3701DE3194642FA6L), 0x3701DE3194642FA6L, 0x883879A0458D6C72L, 0x3701DE3194642FA6L);
    int32_t *l_478 = (void*)0;
    int32_t *l_479 = &l_55;
    int16_t l_480 = 0x32FFL;
    uint32_t l_481 = 0x8A0D48A5L;
    int32_t *l_509 = &p_647->g_7;
    int i;
    l_48.x = ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(p_647->g_47.s70)).xyxyxxxyxxyxxxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_48.zz)).yyxx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x6C6A45D3L, func_49((p_647->g_54++), (safe_lshift_func_uint8_t_u_u(func_60(func_62((l_65 = (void*)0), func_66(l_48.x, p_647), p_647), p_647), ((((((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_442.wwywxxzxzzwzxyzx)).sa, (p_647->g_443++))) == l_55) > l_48.x) >= (p_647->g_446 != &p_24)) || 0xCAE0L) <= p_24.f0))), l_48.w, p_647), (*p_25), (*p_25), ((VECTOR(int32_t, 4))((-1L))))))).hi))).wyxyyxxy)).s3021420420005660))).s33)).xyyxyxyxxyxxxyyx, ((VECTOR(int32_t, 16))(3L))))).sb;
    if (((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((p_647->g_149 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 16))((((VECTOR(int16_t, 8))(p_647->g_460.yyyxyyyy)).s2 > (safe_mod_func_uint64_t_u_u((p_24.f0 , 0xA64407A79DDECCE4L), ((((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(l_463.s3036025065411767)).odd, ((VECTOR(int8_t, 8))(p_647->g_464.wwzxzywz))))).s2 < (safe_mul_func_uint16_t_u_u(p_24.f0, p_647->g_443))) & ((((*l_468) = &p_647->g_437[0]) == (FAKE_DIVERGE(p_647->group_1_offset, get_group_id(1), 10) , &p_647->g_437[0])) || l_442.z))))), ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x971BF20BC572A219L, 1UL)).xyxx)).hi, ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 2))(p_647->g_470.xz)).yyyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xE34FEFF9A643DCFFL, 18446744073709551610UL)))).xxyy))).odd, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_471.s62474237)).even)).xwzzzyywzwyzwxxx)).sed))), 5UL, 8UL, (safe_mul_func_int16_t_s_s(((*p_25) & ((*l_479) = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_55, p_647->g_215.x)) && p_647->g_178.s1), 0x3DL)) || 0xDFD2232DE3BA6889L))), p_24.f0)), ((VECTOR(uint64_t, 8))(18446744073709551615UL)), 18446744073709551607UL, 2UL)).odd, (uint64_t)(*l_479), (uint64_t)p_647->g_343.s3))).hi)).w | GROUP_DIVERGE(1, 1)) != p_24.f0), (*p_23))), p_647->g_464.y))) , 1UL), 1)) & 0L), p_24.f0)) >= l_480) , 0x597326A47E8BC910L) < l_481))
    { /* block id: 181 */
        uint16_t l_482 = 65535UL;
        int32_t l_483[5] = {0x0703CA05L,0x0703CA05L,0x0703CA05L,0x0703CA05L,0x0703CA05L};
        int i;
        l_483[1] ^= l_482;
        for (p_647->g_54 = 0; (p_647->g_54 < 35); p_647->g_54 = safe_add_func_int8_t_s_s(p_647->g_54, 1))
        { /* block id: 185 */
            uint64_t l_496 = 0x95983751043381CAL;
            int8_t ***l_500 = &p_647->g_102;
            int64_t *l_501 = (void*)0;
            int64_t **l_502 = &l_501;
            uint16_t *l_505 = &p_647->g_148;
            uint32_t *l_506[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_506[i] = &p_647->g_129;
            (*p_25) ^= ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(251UL, ((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((*l_505) = ((l_496 && ((((((*l_502) = ((safe_lshift_func_uint8_t_u_u((p_647->g_253 &= ((VECTOR(uint8_t, 2))(p_647->g_499.xz)).lo), ((void*)0 == l_500))) , l_501)) != (void*)0) , (safe_add_func_int8_t_s_s(0x20L, p_24.f0))) | p_24.f0) & 0x20F6B03414001578L)) ^ l_483[1])), 3L)), p_24.f0)), p_647->g_343.s0)) != FAKE_DIVERGE(p_647->local_0_offset, get_local_id(0), 10)))), 0x49L)) , l_482);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_647->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[(safe_mod_func_uint32_t_u_u((p_24.f0++), 10))][(safe_mod_func_uint32_t_u_u(p_647->tid, 79))]));
        }
        return l_509;
    }
    else
    { /* block id: 196 */
        int64_t l_513[9][4] = {{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL},{0x232260CB54A543ABL,9L,0x232260CB54A543ABL,0x232260CB54A543ABL}};
        int i, j;
        (*l_509) = (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_647->g_512.ywzyzwyx)).s4, l_513[0][0]));
        return p_25;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_46.f0
 * writes: p_647->g_46.f0
 */
int32_t  func_49(uint8_t  p_50, int16_t  p_51, uint16_t  p_52, struct S2 * p_647)
{ /* block id: 170 */
    uint32_t l_450 = 4294967289UL;
    int32_t l_451 = 0x131588D7L;
    for (p_647->g_46.f0 = 0; (p_647->g_46.f0 < 31); p_647->g_46.f0 = safe_add_func_uint8_t_u_u(p_647->g_46.f0, 6))
    { /* block id: 173 */
        l_451 = (l_450 > ((VECTOR(int32_t, 2))((-1L), 0x0F3FABB4L)).hi);
    }
    return l_450;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_432 p_647->g_436
 * writes: p_647->g_119 p_647->g_437
 */
uint8_t  func_60(int32_t  p_61, struct S2 * p_647)
{ /* block id: 165 */
    int64_t *l_434 = (void*)0;
    int64_t **l_433 = &l_434;
    int64_t ***l_435 = (void*)0;
    VECTOR(int32_t, 4) l_439 = (VECTOR(int32_t, 4))(0x6952E570L, (VECTOR(int32_t, 2))(0x6952E570L, 0x79C85E57L), 0x79C85E57L);
    int i;
    (*p_647->g_432) = &p_61;
    (*p_647->g_436) = l_433;
    return l_439.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_343 p_647->g_221 p_647->g_419 p_647->g_113 p_647->g_425
 * writes: p_647->g_103 p_647->g_273 p_647->g_327 p_647->g_113 p_647->g_425
 */
int32_t  func_62(int8_t * p_63, int8_t ** p_64, struct S2 * p_647)
{ /* block id: 94 */
    uint64_t l_334 = 0UL;
    int8_t **l_344 = &p_647->g_28[5];
    union U0 l_351[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
    int64_t *l_358 = (void*)0;
    int64_t *l_359 = (void*)0;
    int64_t *l_360 = (void*)0;
    int64_t *l_361 = (void*)0;
    int64_t *l_362 = (void*)0;
    int64_t *l_363 = (void*)0;
    int64_t *l_364 = (void*)0;
    int16_t *l_365 = (void*)0;
    int16_t *l_366[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_367[4][8] = {{&p_647->g_113,(void*)0,&p_647->g_14,&p_647->g_14,(void*)0,&p_647->g_113,&p_647->g_14,(void*)0},{&p_647->g_113,(void*)0,&p_647->g_14,&p_647->g_14,(void*)0,&p_647->g_113,&p_647->g_14,(void*)0},{&p_647->g_113,(void*)0,&p_647->g_14,&p_647->g_14,(void*)0,&p_647->g_113,&p_647->g_14,(void*)0},{&p_647->g_113,(void*)0,&p_647->g_14,&p_647->g_14,(void*)0,&p_647->g_113,&p_647->g_14,(void*)0}};
    int32_t l_368[5];
    int32_t l_369 = (-4L);
    int i, j;
    for (i = 0; i < 5; i++)
        l_368[i] = (-5L);
    l_369 |= ((safe_lshift_func_int8_t_s_s((l_368[4] = (0x9429L < (safe_add_func_uint32_t_u_u(l_334, (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_647->g_343.sba82)))), l_334, (-1L), 0L)).s6, ((l_344 == (void*)0) == (safe_lshift_func_uint8_t_u_u(((!(safe_mul_func_int16_t_s_s(l_334, (p_647->g_273.x = (safe_mod_func_int64_t_s_s((l_351[3].f2 = (l_351[3] , ((((((safe_sub_func_int64_t_s_s((-4L), (safe_add_func_int16_t_s_s(((p_647->g_103.sb = (safe_add_func_int8_t_s_s((l_334 & p_647->g_221.s6), l_334))) & (-3L)), 65532UL)))) && 0x3875E01DL) , (-6L)) & 1UL) ^ 4L) , l_334))), (-6L))))))) & l_334), 5))))), 12)) > GROUP_DIVERGE(2, 1)), FAKE_DIVERGE(p_647->group_2_offset, get_group_id(2), 10))), FAKE_DIVERGE(p_647->local_2_offset, get_local_id(2), 10))))))), 7)) , 0x4DB7E52BL);
    if (l_368[4])
    { /* block id: 100 */
        if ((atomic_inc(&p_647->g_atomic_input[26 * get_linear_group_id() + 5]) == 7))
        { /* block id: 102 */
            int32_t l_370 = 1L;
            int8_t **l_381 = (void*)0;
            int8_t l_384 = (-8L);
            int8_t *l_383 = &l_384;
            int8_t **l_382 = &l_383;
            int32_t *l_417 = &l_370;
            int32_t *l_418 = &l_370;
            for (l_370 = 0; (l_370 == 7); l_370 = safe_add_func_uint64_t_u_u(l_370, 7))
            { /* block id: 105 */
                int32_t l_374 = 0L;
                int32_t *l_373[4];
                VECTOR(int64_t, 8) l_375 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x6CE8CAD33EABC971L), 0x6CE8CAD33EABC971L), 0x6CE8CAD33EABC971L, 1L, 0x6CE8CAD33EABC971L);
                uint8_t l_376 = 0UL;
                int64_t l_377[2];
                uint64_t l_378 = 18446744073709551608UL;
                int8_t l_379 = 0x1AL;
                uint32_t l_380 = 1UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_373[i] = &l_374;
                for (i = 0; i < 2; i++)
                    l_377[i] = 0x0E92E7584166A81AL;
                l_373[1] = l_373[2];
                l_377[1] = ((((VECTOR(int64_t, 4))(l_375.s6435)).w , 0x74L) , l_376);
                l_380 = (l_378 , l_379);
            }
            l_382 = l_381;
            for (l_384 = 0; (l_384 >= 10); l_384 = safe_add_func_uint32_t_u_u(l_384, 1))
            { /* block id: 113 */
                int32_t l_387 = (-1L);
                int64_t l_408 = 0x4E1DC2F76559F092L;
                uint16_t l_409 = 4UL;
                uint32_t l_410 = 0x943A9FCFL;
                uint32_t l_411 = 4294967295UL;
                int8_t l_412 = 0x4CL;
                int32_t l_413 = 0x5E786681L;
                uint16_t *l_415 = &l_409;
                uint16_t **l_414 = &l_415;
                uint16_t **l_416[4][4] = {{&l_415,&l_415,(void*)0,(void*)0},{&l_415,&l_415,(void*)0,(void*)0},{&l_415,&l_415,(void*)0,(void*)0},{&l_415,&l_415,(void*)0,(void*)0}};
                int i, j;
                for (l_387 = 0; (l_387 <= (-8)); l_387 = safe_sub_func_int32_t_s_s(l_387, 1))
                { /* block id: 116 */
                    int32_t l_390 = 3L;
                    uint8_t l_400 = 0x2BL;
                    int32_t l_401 = (-5L);
                    union U1 l_402 = {0x7A95B488L};
                    union U1 l_403 = {0xB5330C3FL};
                    union U1 l_404 = {1UL};
                    uint16_t *l_406 = (void*)0;
                    uint16_t **l_405 = &l_406;
                    uint16_t **l_407 = &l_406;
                    for (l_390 = 21; (l_390 >= 15); l_390 = safe_sub_func_uint16_t_u_u(l_390, 8))
                    { /* block id: 119 */
                        union U1 l_393 = {1UL};
                        int32_t l_395[7][3][1] = {{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}},{{(-7L)},{(-7L)},{(-7L)}}};
                        int32_t *l_394[2][6] = {{&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0]},{&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0],&l_395[3][1][0]}};
                        uint32_t l_396 = 0xFF632590L;
                        uint16_t l_399 = 0x64A1L;
                        int i, j, k;
                        l_370 = 4L;
                        l_394[1][0] = (l_393 , (void*)0);
                        ++l_396;
                        l_370 &= l_399;
                    }
                    l_401 = (l_370 = l_400);
                    l_407 = ((l_404 = (l_403 = l_402)) , l_405);
                }
                l_411 = (l_410 = (l_409 = (l_370 = l_408)));
                l_413 |= (l_370 = l_412);
                l_416[3][2] = l_414;
            }
            l_418 = l_417;
            unsigned int result = 0;
            result += l_370;
            result += l_384;
            atomic_add(&p_647->g_special_values[26 * get_linear_group_id() + 5], result);
        }
        else
        { /* block id: 140 */
            (1 + 1);
        }
        (*p_647->g_419) = l_368[4];
        if ((atomic_inc(&p_647->l_atomic_input[14]) == 3))
        { /* block id: 145 */
            uint64_t l_420 = 0UL;
            l_420 ^= 5L;
            unsigned int result = 0;
            result += l_420;
            atomic_add(&p_647->l_special_values[14], result);
        }
        else
        { /* block id: 147 */
            (1 + 1);
        }
        return l_368[3];
    }
    else
    { /* block id: 151 */
        int32_t *l_428 = (void*)0;
        int32_t **l_429 = &l_428;
        for (p_647->g_113 = 7; (p_647->g_113 <= 15); ++p_647->g_113)
        { /* block id: 154 */
            int32_t *l_423 = (void*)0;
            int32_t *l_424[5][5] = {{&l_368[4],&p_647->g_7,&l_368[4],&l_368[4],&p_647->g_7},{&l_368[4],&p_647->g_7,&l_368[4],&l_368[4],&p_647->g_7},{&l_368[4],&p_647->g_7,&l_368[4],&l_368[4],&p_647->g_7},{&l_368[4],&p_647->g_7,&l_368[4],&l_368[4],&p_647->g_7},{&l_368[4],&p_647->g_7,&l_368[4],&l_368[4],&p_647->g_7}};
            int i, j;
            ++p_647->g_425;
        }
        (*l_429) = l_428;
        for (l_334 = 0; (l_334 > 24); l_334++)
        { /* block id: 160 */
            (*l_429) = (*l_429);
        }
    }
    return l_368[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_73 p_647->g_3 p_647->g_12 p_647->g_14 p_647->g_103 p_647->l_comm_values p_647->g_29 p_647->g_7 p_647->g_113 p_647->g_114 p_647->g_46.f0 p_647->g_140 p_647->g_143 p_647->g_45 p_647->g_15 p_647->g_119 p_647->g_149 p_647->g_177 p_647->g_178 p_647->g_148 p_647->g_202 p_647->g_215 p_647->g_238 p_647->g_251 p_647->g_253 p_647->g_273 p_647->g_193 p_647->g_299 p_647->g_300 p_647->g_251.f2 p_647->g_327
 * writes: p_647->g_3 p_647->g_102 p_647->g_14 p_647->g_7 p_647->g_113 p_647->g_119 p_647->g_46 p_647->g_129 p_647->g_148 p_647->g_149 p_647->g_193 p_647->g_194 p_647->g_253 p_647->g_257 p_647->g_251.f2 p_647->g_327
 */
int8_t ** func_66(int32_t  p_67, struct S2 * p_647)
{ /* block id: 16 */
    int8_t *l_70 = &p_647->g_14;
    uint32_t l_71 = 0UL;
    int32_t *l_72 = (void*)0;
    union U0 l_237 = {0};
    VECTOR(uint8_t, 4) l_241 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL);
    uint8_t *l_252 = &p_647->g_253;
    int8_t l_254 = 0L;
    int32_t *l_326 = &p_647->g_327;
    int8_t **l_328 = &l_70;
    int8_t **l_329 = &p_647->g_28[5];
    int i;
    (*p_647->g_73) |= ((safe_rshift_func_int16_t_s_u(((void*)0 != l_70), l_71)) == p_67);
    (*l_326) &= (p_67 <= func_74(func_78(l_70, p_647), p_67, ((safe_add_func_uint32_t_u_u(p_647->g_215.x, ((l_237 , (((VECTOR(uint32_t, 8))(p_647->g_238.xxyxwxzw)).s0 ^ (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_241.ywwxyxxw)).s7, ((((~p_647->g_103.s7) >= (safe_unary_minus_func_uint8_t_u(((p_647->g_103.s6 > ((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(18446744073709551607UL, (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*l_252) |= (p_647->g_251 , 0UL)), p_67)), 1)), 1UL, 18446744073709551615UL, 7UL, l_254, 3UL, 0x8F8D0A345A6B2173L)).s72)).yxyyxxxxxxyyxyyx)).s5, 0x2DDDC65759DA75A7L)), p_67)) , p_67)) | p_67)))) < p_647->g_178.s4) , p_67))))) == p_67))) , (void*)0), p_647));
    return l_329;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_15 p_647->g_148 p_647->g_273 p_647->g_3 p_647->g_14 p_647->g_193 p_647->g_251 p_647->g_299 p_647->g_300 p_647->g_103 p_647->g_251.f2
 * writes: p_647->g_257 p_647->g_3 p_647->g_193 p_647->g_194 p_647->g_251.f2
 */
int16_t  func_74(int16_t  p_75, uint32_t  p_76, int8_t * p_77, struct S2 * p_647)
{ /* block id: 67 */
    union U1 *l_255[8] = {&p_647->g_46,&p_647->g_46,&p_647->g_46,&p_647->g_46,&p_647->g_46,&p_647->g_46,&p_647->g_46,&p_647->g_46};
    union U1 **l_256[9][3][7] = {{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}},{{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]},{&l_255[0],&l_255[6],&l_255[0],&l_255[6],&l_255[4],&l_255[1],&l_255[6]}}};
    int64_t *l_260 = (void*)0;
    int64_t *l_261 = (void*)0;
    int64_t *l_262 = (void*)0;
    int32_t l_263 = (-4L);
    int32_t l_264 = 2L;
    VECTOR(uint64_t, 8) l_265 = (VECTOR(uint64_t, 8))(0x5BD3AAB8DFD85F67L, (VECTOR(uint64_t, 4))(0x5BD3AAB8DFD85F67L, (VECTOR(uint64_t, 2))(0x5BD3AAB8DFD85F67L, 0x8CF34C46E58AC447L), 0x8CF34C46E58AC447L), 0x8CF34C46E58AC447L, 0x5BD3AAB8DFD85F67L, 0x8CF34C46E58AC447L);
    uint8_t l_266 = 0xDBL;
    VECTOR(int8_t, 16) l_274 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x60L), 0x60L), 0x60L, (-3L), 0x60L, (VECTOR(int8_t, 2))((-3L), 0x60L), (VECTOR(int8_t, 2))((-3L), 0x60L), (-3L), 0x60L, (-3L), 0x60L);
    int32_t *l_275 = &p_647->g_3;
    VECTOR(int32_t, 4) l_309 = (VECTOR(int32_t, 4))(0x01A53E0AL, (VECTOR(int32_t, 2))(0x01A53E0AL, 0x1600E4EEL), 0x1600E4EEL);
    int8_t ****l_320 = (void*)0;
    int32_t *l_325 = &p_647->g_3;
    int i, j, k;
    (*l_275) = ((+p_647->g_15[1][1][0]) <= ((((p_647->g_257 = l_255[6]) == &p_647->g_46) , (((safe_div_func_int64_t_s_s((l_264 ^= (l_263 = p_647->g_148)), ((VECTOR(uint64_t, 16))(l_265.s5337635501345041)).s1)) >= l_266) && (safe_sub_func_uint8_t_u_u(((((~(((VECTOR(int16_t, 8))((safe_unary_minus_func_int32_t_s((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(p_75)), 1UL)))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(p_647->g_273.yy)).xyxx, (int16_t)p_75))).even, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_274.s2fbbf1c5)).s32)), ((VECTOR(uint8_t, 8))(((void*)0 != &p_647->g_102), 0xFFL, 255UL, 0x36L, 0x82L, 249UL, 0x41L, 255UL)).s56))).xyyxyyyy)).even)).lo))).xyxyyyyy, (int16_t)l_265.s7))).s06)), ((VECTOR(int16_t, 2))(0x28D1L)), p_75, 1L, (-3L))).s2 > p_647->g_3)) == 0UL) && p_76) && l_265.s5), p_76)))) , p_647->g_14));
    for (p_647->g_193 = 6; (p_647->g_193 > (-15)); p_647->g_193 = safe_sub_func_uint8_t_u_u(p_647->g_193, 5))
    { /* block id: 74 */
        int16_t *l_282 = &p_647->g_194;
        VECTOR(uint64_t, 8) l_301 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 1UL, 18446744073709551614UL);
        int8_t ****l_302[3];
        int64_t *l_303 = (void*)0;
        int64_t *l_304[1];
        int32_t *l_305 = &p_647->g_251.f2;
        union U1 l_321[5][4][3] = {{{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}}},{{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}}},{{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}}},{{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}}},{{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}},{{1UL},{1UL},{0x7BA37954L}}}};
        union U1 *l_323 = &l_321[3][3][1];
        int32_t **l_324[5][9] = {{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_302[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_304[i] = (void*)0;
        (*l_305) = (0xABL ^ (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(9UL, ((*l_282) = (~0x3E98L)))), (safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((((1L > (p_647->g_251 , ((l_263 = (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x9DL, (((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))(0UL, 18446744073709551615UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0xDC753CE2FE9EABBBL, 0UL)), ((((*l_275) = ((GROUP_DIVERGE(2, 1) > (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(p_647->g_299.s25070057)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_647->g_300.zy)).yyyxxyxyxxyxyxyy)).hi))).s60)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_301.s1215)), 0xF4D23520F130FAF2L, ((((((*l_275) == (GROUP_DIVERGE(1, 1) >= l_301.s6)) , (((void*)0 != l_302[1]) != p_647->g_47.s2)) , (*l_275)) ^ p_76) | l_301.s5), 0xB7DA97F44B5EA751L, 1UL)), ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 4))(0x99855E0243832213L)), 0UL, 1UL)).sf2))).lo ^ FAKE_DIVERGE(p_647->local_2_offset, get_local_id(2), 10)), p_76)), 6))) , p_75)) <= 18446744073709551606UL) <= l_301.s2), p_76, 0xDEDDCC7810A82951L, (*l_275), p_75, 0xA1002B68F0E9AA10L, 4UL, ((VECTOR(uint64_t, 4))(1UL)))), (uint64_t)FAKE_DIVERGE(p_647->group_1_offset, get_group_id(1), 10)))).sb || p_647->g_15[1][1][0]))), p_647->g_299.s2)), p_647->g_300.w)), 0UL))) | 0x242F9841DA2F49FAL))) != p_647->g_103.s9) && l_301.s6), p_647->g_299.s7)), p_75)))));
        if ((*l_275))
        { /* block id: 79 */
            int32_t *l_306 = &p_647->g_3;
            int8_t ***l_308 = (void*)0;
            l_306 = &l_264;
            (*l_306) ^= (FAKE_DIVERGE(p_647->group_1_offset, get_group_id(1), 10) <= (((VECTOR(int64_t, 2))(0x0F7222C98856A357L, 0x4201F7759E872F02L)).odd & (safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(1L, 0x1FC85A52L, (-6L), (((void*)0 == l_308) <= p_647->g_14), (-9L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-7L), ((VECTOR(int32_t, 2))(0x5A3ABB5DL, 0x194364CBL)), 0x3521C5DCL)).odd)), 0x7A84A016L)).even, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_309.yyxyzxww)).odd)).hi, (int32_t)(safe_add_func_uint64_t_u_u(0x6A3F41C0306E1B25L, (safe_rshift_func_uint8_t_u_u((p_647->g_177.s7 || (safe_sub_func_int32_t_s_s(p_75, (safe_unary_minus_func_uint32_t_u(1UL))))), ((safe_mul_func_uint8_t_u_u(p_75, (((p_647->g_319[0][2][2] = &p_647->g_226) != l_320) > 0x1098F471FAD2DBD1L))) <= (*l_275))))))))).xyyyyyxy, ((VECTOR(int32_t, 8))((-1L)))))).hi))), (*p_647->g_73), (-1L), (-5L), (-1L), ((VECTOR(int32_t, 4))(0L)), 0x46FE51E9L, 0L, 0x205DFC3FL, 0L)).s9))));
            return (*l_305);
        }
        else
        { /* block id: 84 */
            union U1 *l_322 = &l_321[3][3][1];
            (*l_305) ^= (&p_647->g_46 == (l_321[3][3][1] , l_322));
        }
        l_323 = &p_647->g_46;
        l_325 = (l_275 = &l_263);
    }
    return p_76;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_12 p_647->g_14 p_647->g_3 p_647->g_103 p_647->l_comm_values p_647->g_29 p_647->g_7 p_647->g_113 p_647->g_114 p_647->g_73 p_647->g_46.f0 p_647->g_140 p_647->g_143 p_647->g_45 p_647->g_15 p_647->g_119 p_647->g_149 p_647->g_177 p_647->g_178 p_647->g_148 p_647->g_202
 * writes: p_647->g_102 p_647->g_14 p_647->g_7 p_647->g_3 p_647->g_113 p_647->g_119 p_647->g_46 p_647->g_129 p_647->g_148 p_647->g_149 p_647->g_193 p_647->g_194
 */
int16_t  func_78(int8_t * p_79, struct S2 * p_647)
{ /* block id: 18 */
    int32_t *l_80 = &p_647->g_3;
    int32_t *l_81[9][5][5] = {{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}},{{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3},{&p_647->g_7,&p_647->g_7,&p_647->g_7,&p_647->g_3,&p_647->g_3}}};
    int64_t l_82 = 1L;
    uint8_t l_83 = 0x91L;
    int8_t **l_100 = &p_647->g_28[5];
    int8_t ***l_101 = (void*)0;
    union U1 l_108 = {1UL};
    int32_t l_109[3][7][4] = {{{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L}},{{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L}},{{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L},{0x219A2165L,1L,1L,0x46825806L}}};
    int8_t *l_112 = &p_647->g_113;
    uint16_t *l_199 = (void*)0;
    VECTOR(uint8_t, 16) l_207 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    VECTOR(uint16_t, 2) l_216 = (VECTOR(uint16_t, 2))(0x5834L, 0x31D8L);
    VECTOR(uint32_t, 16) l_220 = (VECTOR(uint32_t, 16))(0xD7FA70DFL, (VECTOR(uint32_t, 4))(0xD7FA70DFL, (VECTOR(uint32_t, 2))(0xD7FA70DFL, 1UL), 1UL), 1UL, 0xD7FA70DFL, 1UL, (VECTOR(uint32_t, 2))(0xD7FA70DFL, 1UL), (VECTOR(uint32_t, 2))(0xD7FA70DFL, 1UL), 0xD7FA70DFL, 1UL, 0xD7FA70DFL, 1UL);
    VECTOR(uint16_t, 16) l_222 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x4651L), 0x4651L), 0x4651L, 65531UL, 0x4651L, (VECTOR(uint16_t, 2))(65531UL, 0x4651L), (VECTOR(uint16_t, 2))(65531UL, 0x4651L), 65531UL, 0x4651L, 65531UL, 0x4651L);
    uint64_t l_234 = 0xF99BD179C09EB90CL;
    int i, j, k;
    l_83--;
    if (func_86(p_647->g_12, ((*l_112) ^= (safe_add_func_int16_t_s_s(func_93(((*p_79) = ((safe_mul_func_int8_t_s_s((*p_79), ((((p_647->g_102 = l_100) == ((*l_80) , &p_79)) >= (((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(p_647->g_103.s9c749325)).s04, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((*l_80) || FAKE_DIVERGE(p_647->group_0_offset, get_group_id(0), 10)), 0x72A7C57E4F707354L, 0x09EDA30AC000487FL, 0x788430C375795804L)), 0x4AA09B46BF440EA3L, 0x4377C8831FD11E18L, 0x08709DC6AD9C61CCL, 0x3296149393C069BDL)).lo, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(0x06CFEE31L, 8L)).xxyxxyxx, ((VECTOR(uint32_t, 8))(4294967291UL, 0x7FF7C57EL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(1UL, 0UL)).yxxyyxyyxyxyyyyy)).s13fa)), 0xBFFE4561L, 0UL))))).lo))).lo))).lo != (safe_unary_minus_func_uint32_t_u(((safe_mul_func_int16_t_s_s((*l_80), (((safe_unary_minus_func_int64_t_s((0xEA26L != ((p_79 != p_79) <= p_647->l_comm_values[(safe_mod_func_uint32_t_u_u(p_647->tid, 79))])))) , l_108) , FAKE_DIVERGE(p_647->local_0_offset, get_local_id(0), 10)))) <= p_647->g_29.x))))) , l_109[0][0][1]))) && (*l_80))), &p_647->g_7, (*l_80), (*l_80), p_647), 0xE869L))), &l_109[0][0][1], p_647->g_114, p_647))
    { /* block id: 41 */
        int8_t ***l_151 = &l_100;
        int32_t *l_152 = &l_109[0][3][3];
        int32_t **l_153 = &p_647->g_119;
        int32_t l_154 = (-7L);
        int32_t l_155 = (-6L);
        int32_t l_156 = 0x0A70D411L;
        int32_t l_157 = (-1L);
        int8_t l_158 = 0x18L;
        uint8_t l_159 = 0xD7L;
        (*l_151) = &p_79;
        (*l_153) = l_152;
        l_159--;
        (*l_153) = (*l_153);
    }
    else
    { /* block id: 46 */
        uint8_t *l_162 = &l_83;
        int32_t l_169[4][2][8] = {{{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)},{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)}},{{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)},{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)}},{{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)},{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)}},{{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)},{(-7L),0x495E9E3DL,(-1L),0x01EBDC43L,(-3L),(-4L),(-4L),(-3L)}}};
        uint16_t l_174 = 1UL;
        VECTOR(uint8_t, 8) l_179 = (VECTOR(uint8_t, 8))(0xC1L, (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 1UL), 1UL), 1UL, 0xC1L, 1UL);
        uint8_t *l_192[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_195[1][5][10] = {{{(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L)},{(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L)},{(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L)},{(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L)},{(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L),0x7E578F98L,(-1L),(-1L)}}};
        VECTOR(uint32_t, 2) l_214 = (VECTOR(uint32_t, 2))(4294967295UL, 0xDFB4A65AL);
        VECTOR(uint16_t, 8) l_218 = (VECTOR(uint16_t, 8))(0x11F8L, (VECTOR(uint16_t, 4))(0x11F8L, (VECTOR(uint16_t, 2))(0x11F8L, 1UL), 1UL), 1UL, 0x11F8L, 1UL);
        VECTOR(uint16_t, 8) l_219 = (VECTOR(uint16_t, 8))(0xA21FL, (VECTOR(uint16_t, 4))(0xA21FL, (VECTOR(uint16_t, 2))(0xA21FL, 0x4867L), 0x4867L), 0x4867L, 0xA21FL, 0x4867L);
        int i, j, k;
        (*p_647->g_73) = (3UL != (((*l_162) = p_647->g_12) , (safe_div_func_int32_t_s_s(0x27871D96L, (*l_80)))));
        l_195[0][0][3] = (p_647->g_149 > ((l_169[1][0][5] = (safe_mod_func_uint8_t_u_u((p_647->g_194 = ((safe_rshift_func_int16_t_s_s((((l_169[0][1][1] == ((safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((-1L), 0x71E6L)), l_174)) , ((++(*l_162)) != ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(p_647->g_177.s21335173)).s72, ((VECTOR(int8_t, 16))(p_647->g_178.s2006014427550070)).sbc))), 0x81L, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_179.s24)), 0x6FL, 251UL)), 0UL, (p_647->g_193 = (safe_mul_func_uint8_t_u_u(p_647->g_15[0][0][1], ((~(safe_mul_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((0x9004L ^ (((safe_div_func_uint8_t_u_u((p_647->g_113 | ((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_647->local_2_offset, get_local_id(2), 10), 6)) ^ (0xE07FD64A67530FD6L > GROUP_DIVERGE(2, 1)))), p_647->g_148)) | l_169[2][1][6]) , (-9L))), p_647->g_177.s7)), 1UL)) , l_179.s4) == (*l_80)), 0x7DL))) <= p_647->g_113)))), 0x7FL, 0x22L)))).hi)).wzyywzyy, ((VECTOR(uint8_t, 8))(0xFFL))))), 0x78L, l_179.s2, ((VECTOR(uint8_t, 2))(255UL)), 0x46L)).s2))) , GROUP_DIVERGE(1, 1)) | 3UL), p_647->g_177.s0)) >= (*l_80))), 0x67L))) != (*p_79)));
        for (p_647->g_149 = 0; (p_647->g_149 != 37); p_647->g_149++)
        { /* block id: 56 */
            int8_t l_198 = 3L;
            uint16_t *l_200 = (void*)0;
            uint16_t *l_201 = &l_174;
            VECTOR(uint64_t, 2) l_211 = (VECTOR(uint64_t, 2))(0xFE5F7D3A1E4A6710L, 0xFCE3093133CE66FDL);
            VECTOR(uint16_t, 8) l_217 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
            int8_t ****l_225[7][10] = {{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101},{&l_101,(void*)0,&l_101,(void*)0,&l_101,&l_101,(void*)0,&l_101,(void*)0,&l_101}};
            int i, j;
            (*l_80) = (l_198 == ((0UL >= ((l_199 = l_199) == &p_647->g_15[1][3][1])) >= ((*l_201) = p_647->l_comm_values[(safe_mod_func_uint32_t_u_u(p_647->tid, 79))])));
            p_647->g_7 |= ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x4AL, ((VECTOR(int8_t, 2))(p_647->g_202.zy)), (-5L))).xwwxxxyy)).s1445024653772522)).sd != (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 16))(l_207.sb8bf441bdddd1249)).s2 != (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_647->global_0_offset, get_global_id(0), 10), (((l_169[3][0][6] && ((VECTOR(int64_t, 8))(p_647->g_210.wxyyxwww)).s3) | (((l_174 < 255UL) < ((VECTOR(uint64_t, 16))(l_211.yxyyyxxxyyyyyxxx)).se) & (safe_rshift_func_int16_t_s_u((l_195[0][0][3] & (((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(l_214.yyxy)).even, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_647->g_215.xxxxxwwzzzywzyww)).sc625)).zxzzyxyxywxzxxyz, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(l_216.xyxyyyyy)).s4441116456522530, ((VECTOR(uint16_t, 8))(l_217.s22332040)).s1561006320062067, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(3UL, 1UL)), 1UL, 1UL)).wwxzxxzyyxxzwyxw))))).s367f, ((VECTOR(uint16_t, 16))(l_218.s4602127417303201)).s7bef))).zyzzwzxywzwxwzzw))).odd, ((VECTOR(uint16_t, 16))(l_219.s0542220211326114)).odd))), ((VECTOR(uint32_t, 16))(l_220.s54d59c3c41984293)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x1649D72BL, 1UL)))).xxxyyyxxxxyyyyyx))).lo))))).s04, ((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 8))(p_647->g_221.s04765364)), p_647->g_140.y, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(l_222.s075f8e6d)).s0742777756574603, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((l_211.y && (safe_div_func_int32_t_s_s(((((p_647->g_226 = &l_100) != &p_647->g_102) < ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))((safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_647->g_233.wyzxzywyzwxwwwxw)).se, ((0x69L || (*p_79)) < p_647->g_210.z))) & l_217.s6) & l_218.s4) || 0xC181L), 8)), 0x7ED1B261DA1847B6L, 1L, (-1L))).z, FAKE_DIVERGE(p_647->local_2_offset, get_local_id(2), 10))) && 2UL)) <= 0x0BD9C6B6L), l_198))) && l_211.x), 0xC85CL, ((VECTOR(uint16_t, 4))(0x0BA0L)), 0x4F53L, 6UL)).s1746232774257216))))), ((VECTOR(uint32_t, 16))(4294967292UL)), ((VECTOR(uint32_t, 16))(4294967290UL))))).sfac8, ((VECTOR(uint32_t, 4))(0x36606581L))))), 6UL, 0x7FD844EAL)).s4f, ((VECTOR(uint32_t, 2))(1UL)))))))), ((VECTOR(uint32_t, 2))(4294967295UL))))).lo <= 1L)), l_198)))) >= (*l_80))))), 248UL)), (*p_79)))) , 1L);
        }
    }
    (*l_80) = (!l_234);
    return p_647->g_202.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_7 p_647->g_73 p_647->g_3 p_647->g_46.f0 p_647->g_140 p_647->g_143 p_647->g_45 p_647->g_14 p_647->g_15
 * writes: p_647->g_7 p_647->g_119 p_647->g_46 p_647->g_129 p_647->g_148 p_647->g_149 p_647->g_3
 */
int32_t  func_86(int16_t  p_87, int8_t  p_88, int32_t * p_89, int64_t  p_90, struct S2 * p_647)
{ /* block id: 27 */
    int32_t *l_117 = (void*)0;
    union U1 l_121 = {1UL};
    union U1 *l_122[2];
    VECTOR(uint32_t, 16) l_134 = (VECTOR(uint32_t, 16))(0xD54A4C85L, (VECTOR(uint32_t, 4))(0xD54A4C85L, (VECTOR(uint32_t, 2))(0xD54A4C85L, 0x1910C96EL), 0x1910C96EL), 0x1910C96EL, 0xD54A4C85L, 0x1910C96EL, (VECTOR(uint32_t, 2))(0xD54A4C85L, 0x1910C96EL), (VECTOR(uint32_t, 2))(0xD54A4C85L, 0x1910C96EL), 0xD54A4C85L, 0x1910C96EL, 0xD54A4C85L, 0x1910C96EL);
    VECTOR(uint32_t, 8) l_135 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAED0E2EEL), 0xAED0E2EEL), 0xAED0E2EEL, 4294967295UL, 0xAED0E2EEL);
    VECTOR(uint8_t, 16) l_144 = (VECTOR(uint8_t, 16))(0x2AL, (VECTOR(uint8_t, 4))(0x2AL, (VECTOR(uint8_t, 2))(0x2AL, 0x50L), 0x50L), 0x50L, 0x2AL, 0x50L, (VECTOR(uint8_t, 2))(0x2AL, 0x50L), (VECTOR(uint8_t, 2))(0x2AL, 0x50L), 0x2AL, 0x50L, 0x2AL, 0x50L);
    int32_t l_145 = 2L;
    uint16_t *l_146 = (void*)0;
    uint16_t *l_147 = &p_647->g_148;
    int32_t *l_150[6][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_122[i] = &l_121;
    for (p_647->g_7 = (-30); (p_647->g_7 >= (-26)); p_647->g_7 = safe_add_func_int8_t_s_s(p_647->g_7, 6))
    { /* block id: 30 */
        int32_t **l_120 = &p_647->g_119;
        (*l_120) = l_117;
    }
    (*p_89) |= (((p_647->g_46 = l_121) , 5L) , (*p_647->g_73));
    p_647->g_3 &= ((*p_89) = (safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((p_647->g_129 = (&l_121 != &l_121)) > (safe_div_func_uint16_t_u_u(((p_647->g_149 = ((VECTOR(uint16_t, 16))(p_87, ((*l_147) = (((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(p_87, 4294967295UL, ((VECTOR(uint32_t, 4))(l_134.se17f)), 1UL, 0UL)).s24, ((VECTOR(uint32_t, 4))(l_135.s7620)).hi))).xyyy, ((VECTOR(uint32_t, 16))((l_135.s1 , (safe_add_func_int16_t_s_s((GROUP_DIVERGE(2, 1) ^ (safe_div_func_int64_t_s_s(((0x2993L || p_647->g_46.f0) == (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(p_647->g_140.xzyz)).yzwyzwzyyxzzywww, ((VECTOR(int64_t, 8))(((safe_rshift_func_uint16_t_u_u(0x14A0L, 14)) & ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(p_647->g_143.s23)), ((VECTOR(uint8_t, 4))(l_144.s1939)).even))).lo), ((VECTOR(int64_t, 4))((((0xA3FD36FCL ^ 0x0C4DA91AL) <= (*p_89)) > p_647->g_45), 4L, 0x5E41467E5DD02931L, 0x52019D5596D2B076L)), (-7L), 0x00657D72F3A6FA7AL, 0x65C6B9971AD17905L)).s4743051700265220))).sab48)).y || p_87)), p_647->g_14))), l_145))), 0xE575A53CL, p_90, 0xAABCE9E3L, FAKE_DIVERGE(p_647->local_0_offset, get_local_id(0), 10), l_145, ((VECTOR(uint32_t, 4))(0xE0442374L)), ((VECTOR(uint32_t, 2))(0x2E6D5923L)), ((VECTOR(uint32_t, 4))(1UL)))).scb9a))).y, 0x5A6610234A52FFC3L)) >= l_144.sc) , p_90)), ((VECTOR(uint16_t, 4))(8UL)), 0x7227L, p_647->g_15[1][1][0], 65535UL, ((VECTOR(uint16_t, 4))(1UL)), 0xA70EL, 0x6E2DL, 65535UL)).s9) <= p_88), 65533UL))), (-6L))) || GROUP_DIVERGE(2, 1)), p_88)), 0x04L)));
    return (*p_647->g_73);
}


/* ------------------------------------------ */
/* 
 * reads : p_647->g_3 p_647->g_7
 * writes: p_647->g_7 p_647->g_3
 */
int16_t  func_93(int8_t  p_94, int32_t * p_95, int64_t  p_96, int64_t  p_97, struct S2 * p_647)
{ /* block id: 22 */
    uint8_t l_110 = 0xC6L;
    int32_t *l_111 = &p_647->g_3;
    (*l_111) &= ((*p_95) = l_110);
    return p_647->g_7;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S2 c_648;
    struct S2* p_647 = &c_648;
    struct S2 c_649 = {
        0L, // p_647->g_2
        0x5B8FAAAEL, // p_647->g_3
        0L, // p_647->g_7
        1L, // p_647->g_12
        7L, // p_647->g_14
        {{{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL}},{{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL}},{{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL},{65535UL,0xD23CL}}}, // p_647->g_15
        (VECTOR(int16_t, 8))(0x362BL, (VECTOR(int16_t, 4))(0x362BL, (VECTOR(int16_t, 2))(0x362BL, 0L), 0L), 0L, 0x362BL, 0L), // p_647->g_18
        {&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14,&p_647->g_14}, // p_647->g_28
        (VECTOR(int64_t, 2))((-10L), 0L), // p_647->g_29
        (VECTOR(uint8_t, 2))(0x11L, 0x2EL), // p_647->g_34
        0L, // p_647->g_45
        {0xF168E5B4L}, // p_647->g_46
        (VECTOR(int32_t, 8))(0x3DB030F3L, (VECTOR(int32_t, 4))(0x3DB030F3L, (VECTOR(int32_t, 2))(0x3DB030F3L, (-1L)), (-1L)), (-1L), 0x3DB030F3L, (-1L)), // p_647->g_47
        255UL, // p_647->g_54
        &p_647->g_3, // p_647->g_73
        (void*)0, // p_647->g_102
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2FFF13C767B02383L), 0x2FFF13C767B02383L), 0x2FFF13C767B02383L, 0L, 0x2FFF13C767B02383L, (VECTOR(int64_t, 2))(0L, 0x2FFF13C767B02383L), (VECTOR(int64_t, 2))(0L, 0x2FFF13C767B02383L), 0L, 0x2FFF13C767B02383L, 0L, 0x2FFF13C767B02383L), // p_647->g_103
        0x6FL, // p_647->g_113
        4294967295UL, // p_647->g_114
        &p_647->g_7, // p_647->g_119
        {&p_647->g_119,&p_647->g_119,&p_647->g_119}, // p_647->g_118
        0x80D330B0L, // p_647->g_129
        (VECTOR(int64_t, 4))(0x1C3501AD261E8159L, (VECTOR(int64_t, 2))(0x1C3501AD261E8159L, 0x1452917B7F45CD96L), 0x1452917B7F45CD96L), // p_647->g_140
        (VECTOR(uint8_t, 8))(0x87L, (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 0x3CL), 0x3CL), 0x3CL, 0x87L, 0x3CL), // p_647->g_143
        1UL, // p_647->g_148
        1UL, // p_647->g_149
        (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x3EL), 0x3EL), 0x3EL, 0x4CL, 0x3EL), // p_647->g_177
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x19L), 0x19L), 0x19L, 8L, 0x19L), // p_647->g_178
        0x09606A0CL, // p_647->g_193
        4L, // p_647->g_194
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x35L), 0x35L), // p_647->g_202
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), // p_647->g_210
        (VECTOR(uint16_t, 4))(0x6862L, (VECTOR(uint16_t, 2))(0x6862L, 0x8D41L), 0x8D41L), // p_647->g_215
        (VECTOR(uint32_t, 8))(0xD351BAF4L, (VECTOR(uint32_t, 4))(0xD351BAF4L, (VECTOR(uint32_t, 2))(0xD351BAF4L, 0x0B5DEE58L), 0x0B5DEE58L), 0x0B5DEE58L, 0xD351BAF4L, 0x0B5DEE58L), // p_647->g_221
        (void*)0, // p_647->g_226
        (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 6L), 6L), // p_647->g_233
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x7B2373D0L), 0x7B2373D0L), // p_647->g_238
        {0}, // p_647->g_251
        0xCDL, // p_647->g_253
        &p_647->g_46, // p_647->g_257
        (VECTOR(int16_t, 2))(0x2F48L, 0L), // p_647->g_273
        (VECTOR(uint64_t, 8))(0x4594DEE00CD75C92L, (VECTOR(uint64_t, 4))(0x4594DEE00CD75C92L, (VECTOR(uint64_t, 2))(0x4594DEE00CD75C92L, 0xA90821E2B530F2C1L), 0xA90821E2B530F2C1L), 0xA90821E2B530F2C1L, 0x4594DEE00CD75C92L, 0xA90821E2B530F2C1L), // p_647->g_299
        (VECTOR(uint64_t, 4))(0x857359EE0047E0BEL, (VECTOR(uint64_t, 2))(0x857359EE0047E0BEL, 18446744073709551611UL), 18446744073709551611UL), // p_647->g_300
        {{{&p_647->g_226,&p_647->g_226,&p_647->g_226,(void*)0,&p_647->g_226,(void*)0,&p_647->g_226,&p_647->g_226},{&p_647->g_226,&p_647->g_226,&p_647->g_226,(void*)0,&p_647->g_226,(void*)0,&p_647->g_226,&p_647->g_226},{&p_647->g_226,&p_647->g_226,&p_647->g_226,(void*)0,&p_647->g_226,(void*)0,&p_647->g_226,&p_647->g_226}}}, // p_647->g_319
        0L, // p_647->g_327
        (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x1F78L), 0x1F78L), 0x1F78L, 9L, 0x1F78L, (VECTOR(int16_t, 2))(9L, 0x1F78L), (VECTOR(int16_t, 2))(9L, 0x1F78L), 9L, 0x1F78L, 9L, 0x1F78L), // p_647->g_343
        &p_647->g_327, // p_647->g_419
        0x27329E1CL, // p_647->g_425
        &p_647->g_119, // p_647->g_432
        (void*)0, // p_647->g_438
        {&p_647->g_438,&p_647->g_438}, // p_647->g_437
        &p_647->g_437[0], // p_647->g_436
        0x0A80L, // p_647->g_443
        {{0x54F009D1L},{0x54F009D1L},{0x54F009D1L}}, // p_647->g_447
        &p_647->g_447[1], // p_647->g_446
        (VECTOR(int16_t, 2))(6L, 0x1D77L), // p_647->g_460
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 9L), 9L), // p_647->g_464
        (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x76E90A6F3A9C3C25L), 0x76E90A6F3A9C3C25L), // p_647->g_470
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 7UL), 7UL), // p_647->g_499
        (VECTOR(uint32_t, 4))(0x7BB6B80CL, (VECTOR(uint32_t, 2))(0x7BB6B80CL, 0x8F008899L), 0x8F008899L), // p_647->g_512
        0xBEBB7DCF79EFB9E7L, // p_647->g_532
        (void*)0, // p_647->g_539
        {{&p_647->g_539,(void*)0,&p_647->g_539,&p_647->g_539,(void*)0},{&p_647->g_539,(void*)0,&p_647->g_539,&p_647->g_539,(void*)0},{&p_647->g_539,(void*)0,&p_647->g_539,&p_647->g_539,(void*)0},{&p_647->g_539,(void*)0,&p_647->g_539,&p_647->g_539,(void*)0},{&p_647->g_539,(void*)0,&p_647->g_539,&p_647->g_539,(void*)0}}, // p_647->g_538
        {{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}},{{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7},{&p_647->g_3,&p_647->g_7}}}, // p_647->g_544
        (void*)0, // p_647->g_545
        (VECTOR(uint16_t, 2))(65535UL, 65530UL), // p_647->g_557
        (VECTOR(int32_t, 2))(0x0260DB43L, (-4L)), // p_647->g_582
        (VECTOR(int32_t, 4))(0x152CC96AL, (VECTOR(int32_t, 2))(0x152CC96AL, 0x18130A9CL), 0x18130A9CL), // p_647->g_584
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0DCEL), 0x0DCEL), 0x0DCEL, 0L, 0x0DCEL), // p_647->g_600
        (VECTOR(int16_t, 8))(0x2C44L, (VECTOR(int16_t, 4))(0x2C44L, (VECTOR(int16_t, 2))(0x2C44L, 0x1019L), 0x1019L), 0x1019L, 0x2C44L, 0x1019L), // p_647->g_601
        &p_647->g_538[1][2], // p_647->g_604
        0, // p_647->v_collective
        sequence_input[get_global_id(0)], // p_647->global_0_offset
        sequence_input[get_global_id(1)], // p_647->global_1_offset
        sequence_input[get_global_id(2)], // p_647->global_2_offset
        sequence_input[get_local_id(0)], // p_647->local_0_offset
        sequence_input[get_local_id(1)], // p_647->local_1_offset
        sequence_input[get_local_id(2)], // p_647->local_2_offset
        sequence_input[get_group_id(0)], // p_647->group_0_offset
        sequence_input[get_group_id(1)], // p_647->group_1_offset
        sequence_input[get_group_id(2)], // p_647->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_647->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_648 = c_649;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_647);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_647->g_2, "p_647->g_2", print_hash_value);
    transparent_crc(p_647->g_3, "p_647->g_3", print_hash_value);
    transparent_crc(p_647->g_7, "p_647->g_7", print_hash_value);
    transparent_crc(p_647->g_12, "p_647->g_12", print_hash_value);
    transparent_crc(p_647->g_14, "p_647->g_14", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_647->g_15[i][j][k], "p_647->g_15[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_647->g_18.s0, "p_647->g_18.s0", print_hash_value);
    transparent_crc(p_647->g_18.s1, "p_647->g_18.s1", print_hash_value);
    transparent_crc(p_647->g_18.s2, "p_647->g_18.s2", print_hash_value);
    transparent_crc(p_647->g_18.s3, "p_647->g_18.s3", print_hash_value);
    transparent_crc(p_647->g_18.s4, "p_647->g_18.s4", print_hash_value);
    transparent_crc(p_647->g_18.s5, "p_647->g_18.s5", print_hash_value);
    transparent_crc(p_647->g_18.s6, "p_647->g_18.s6", print_hash_value);
    transparent_crc(p_647->g_18.s7, "p_647->g_18.s7", print_hash_value);
    transparent_crc(p_647->g_29.x, "p_647->g_29.x", print_hash_value);
    transparent_crc(p_647->g_29.y, "p_647->g_29.y", print_hash_value);
    transparent_crc(p_647->g_34.x, "p_647->g_34.x", print_hash_value);
    transparent_crc(p_647->g_34.y, "p_647->g_34.y", print_hash_value);
    transparent_crc(p_647->g_45, "p_647->g_45", print_hash_value);
    transparent_crc(p_647->g_46.f0, "p_647->g_46.f0", print_hash_value);
    transparent_crc(p_647->g_47.s0, "p_647->g_47.s0", print_hash_value);
    transparent_crc(p_647->g_47.s1, "p_647->g_47.s1", print_hash_value);
    transparent_crc(p_647->g_47.s2, "p_647->g_47.s2", print_hash_value);
    transparent_crc(p_647->g_47.s3, "p_647->g_47.s3", print_hash_value);
    transparent_crc(p_647->g_47.s4, "p_647->g_47.s4", print_hash_value);
    transparent_crc(p_647->g_47.s5, "p_647->g_47.s5", print_hash_value);
    transparent_crc(p_647->g_47.s6, "p_647->g_47.s6", print_hash_value);
    transparent_crc(p_647->g_47.s7, "p_647->g_47.s7", print_hash_value);
    transparent_crc(p_647->g_54, "p_647->g_54", print_hash_value);
    transparent_crc(p_647->g_103.s0, "p_647->g_103.s0", print_hash_value);
    transparent_crc(p_647->g_103.s1, "p_647->g_103.s1", print_hash_value);
    transparent_crc(p_647->g_103.s2, "p_647->g_103.s2", print_hash_value);
    transparent_crc(p_647->g_103.s3, "p_647->g_103.s3", print_hash_value);
    transparent_crc(p_647->g_103.s4, "p_647->g_103.s4", print_hash_value);
    transparent_crc(p_647->g_103.s5, "p_647->g_103.s5", print_hash_value);
    transparent_crc(p_647->g_103.s6, "p_647->g_103.s6", print_hash_value);
    transparent_crc(p_647->g_103.s7, "p_647->g_103.s7", print_hash_value);
    transparent_crc(p_647->g_103.s8, "p_647->g_103.s8", print_hash_value);
    transparent_crc(p_647->g_103.s9, "p_647->g_103.s9", print_hash_value);
    transparent_crc(p_647->g_103.sa, "p_647->g_103.sa", print_hash_value);
    transparent_crc(p_647->g_103.sb, "p_647->g_103.sb", print_hash_value);
    transparent_crc(p_647->g_103.sc, "p_647->g_103.sc", print_hash_value);
    transparent_crc(p_647->g_103.sd, "p_647->g_103.sd", print_hash_value);
    transparent_crc(p_647->g_103.se, "p_647->g_103.se", print_hash_value);
    transparent_crc(p_647->g_103.sf, "p_647->g_103.sf", print_hash_value);
    transparent_crc(p_647->g_113, "p_647->g_113", print_hash_value);
    transparent_crc(p_647->g_114, "p_647->g_114", print_hash_value);
    transparent_crc(p_647->g_129, "p_647->g_129", print_hash_value);
    transparent_crc(p_647->g_140.x, "p_647->g_140.x", print_hash_value);
    transparent_crc(p_647->g_140.y, "p_647->g_140.y", print_hash_value);
    transparent_crc(p_647->g_140.z, "p_647->g_140.z", print_hash_value);
    transparent_crc(p_647->g_140.w, "p_647->g_140.w", print_hash_value);
    transparent_crc(p_647->g_143.s0, "p_647->g_143.s0", print_hash_value);
    transparent_crc(p_647->g_143.s1, "p_647->g_143.s1", print_hash_value);
    transparent_crc(p_647->g_143.s2, "p_647->g_143.s2", print_hash_value);
    transparent_crc(p_647->g_143.s3, "p_647->g_143.s3", print_hash_value);
    transparent_crc(p_647->g_143.s4, "p_647->g_143.s4", print_hash_value);
    transparent_crc(p_647->g_143.s5, "p_647->g_143.s5", print_hash_value);
    transparent_crc(p_647->g_143.s6, "p_647->g_143.s6", print_hash_value);
    transparent_crc(p_647->g_143.s7, "p_647->g_143.s7", print_hash_value);
    transparent_crc(p_647->g_148, "p_647->g_148", print_hash_value);
    transparent_crc(p_647->g_149, "p_647->g_149", print_hash_value);
    transparent_crc(p_647->g_177.s0, "p_647->g_177.s0", print_hash_value);
    transparent_crc(p_647->g_177.s1, "p_647->g_177.s1", print_hash_value);
    transparent_crc(p_647->g_177.s2, "p_647->g_177.s2", print_hash_value);
    transparent_crc(p_647->g_177.s3, "p_647->g_177.s3", print_hash_value);
    transparent_crc(p_647->g_177.s4, "p_647->g_177.s4", print_hash_value);
    transparent_crc(p_647->g_177.s5, "p_647->g_177.s5", print_hash_value);
    transparent_crc(p_647->g_177.s6, "p_647->g_177.s6", print_hash_value);
    transparent_crc(p_647->g_177.s7, "p_647->g_177.s7", print_hash_value);
    transparent_crc(p_647->g_178.s0, "p_647->g_178.s0", print_hash_value);
    transparent_crc(p_647->g_178.s1, "p_647->g_178.s1", print_hash_value);
    transparent_crc(p_647->g_178.s2, "p_647->g_178.s2", print_hash_value);
    transparent_crc(p_647->g_178.s3, "p_647->g_178.s3", print_hash_value);
    transparent_crc(p_647->g_178.s4, "p_647->g_178.s4", print_hash_value);
    transparent_crc(p_647->g_178.s5, "p_647->g_178.s5", print_hash_value);
    transparent_crc(p_647->g_178.s6, "p_647->g_178.s6", print_hash_value);
    transparent_crc(p_647->g_178.s7, "p_647->g_178.s7", print_hash_value);
    transparent_crc(p_647->g_193, "p_647->g_193", print_hash_value);
    transparent_crc(p_647->g_194, "p_647->g_194", print_hash_value);
    transparent_crc(p_647->g_202.x, "p_647->g_202.x", print_hash_value);
    transparent_crc(p_647->g_202.y, "p_647->g_202.y", print_hash_value);
    transparent_crc(p_647->g_202.z, "p_647->g_202.z", print_hash_value);
    transparent_crc(p_647->g_202.w, "p_647->g_202.w", print_hash_value);
    transparent_crc(p_647->g_210.x, "p_647->g_210.x", print_hash_value);
    transparent_crc(p_647->g_210.y, "p_647->g_210.y", print_hash_value);
    transparent_crc(p_647->g_210.z, "p_647->g_210.z", print_hash_value);
    transparent_crc(p_647->g_210.w, "p_647->g_210.w", print_hash_value);
    transparent_crc(p_647->g_215.x, "p_647->g_215.x", print_hash_value);
    transparent_crc(p_647->g_215.y, "p_647->g_215.y", print_hash_value);
    transparent_crc(p_647->g_215.z, "p_647->g_215.z", print_hash_value);
    transparent_crc(p_647->g_215.w, "p_647->g_215.w", print_hash_value);
    transparent_crc(p_647->g_221.s0, "p_647->g_221.s0", print_hash_value);
    transparent_crc(p_647->g_221.s1, "p_647->g_221.s1", print_hash_value);
    transparent_crc(p_647->g_221.s2, "p_647->g_221.s2", print_hash_value);
    transparent_crc(p_647->g_221.s3, "p_647->g_221.s3", print_hash_value);
    transparent_crc(p_647->g_221.s4, "p_647->g_221.s4", print_hash_value);
    transparent_crc(p_647->g_221.s5, "p_647->g_221.s5", print_hash_value);
    transparent_crc(p_647->g_221.s6, "p_647->g_221.s6", print_hash_value);
    transparent_crc(p_647->g_221.s7, "p_647->g_221.s7", print_hash_value);
    transparent_crc(p_647->g_233.x, "p_647->g_233.x", print_hash_value);
    transparent_crc(p_647->g_233.y, "p_647->g_233.y", print_hash_value);
    transparent_crc(p_647->g_233.z, "p_647->g_233.z", print_hash_value);
    transparent_crc(p_647->g_233.w, "p_647->g_233.w", print_hash_value);
    transparent_crc(p_647->g_238.x, "p_647->g_238.x", print_hash_value);
    transparent_crc(p_647->g_238.y, "p_647->g_238.y", print_hash_value);
    transparent_crc(p_647->g_238.z, "p_647->g_238.z", print_hash_value);
    transparent_crc(p_647->g_238.w, "p_647->g_238.w", print_hash_value);
    transparent_crc(p_647->g_253, "p_647->g_253", print_hash_value);
    transparent_crc(p_647->g_273.x, "p_647->g_273.x", print_hash_value);
    transparent_crc(p_647->g_273.y, "p_647->g_273.y", print_hash_value);
    transparent_crc(p_647->g_299.s0, "p_647->g_299.s0", print_hash_value);
    transparent_crc(p_647->g_299.s1, "p_647->g_299.s1", print_hash_value);
    transparent_crc(p_647->g_299.s2, "p_647->g_299.s2", print_hash_value);
    transparent_crc(p_647->g_299.s3, "p_647->g_299.s3", print_hash_value);
    transparent_crc(p_647->g_299.s4, "p_647->g_299.s4", print_hash_value);
    transparent_crc(p_647->g_299.s5, "p_647->g_299.s5", print_hash_value);
    transparent_crc(p_647->g_299.s6, "p_647->g_299.s6", print_hash_value);
    transparent_crc(p_647->g_299.s7, "p_647->g_299.s7", print_hash_value);
    transparent_crc(p_647->g_300.x, "p_647->g_300.x", print_hash_value);
    transparent_crc(p_647->g_300.y, "p_647->g_300.y", print_hash_value);
    transparent_crc(p_647->g_300.z, "p_647->g_300.z", print_hash_value);
    transparent_crc(p_647->g_300.w, "p_647->g_300.w", print_hash_value);
    transparent_crc(p_647->g_327, "p_647->g_327", print_hash_value);
    transparent_crc(p_647->g_343.s0, "p_647->g_343.s0", print_hash_value);
    transparent_crc(p_647->g_343.s1, "p_647->g_343.s1", print_hash_value);
    transparent_crc(p_647->g_343.s2, "p_647->g_343.s2", print_hash_value);
    transparent_crc(p_647->g_343.s3, "p_647->g_343.s3", print_hash_value);
    transparent_crc(p_647->g_343.s4, "p_647->g_343.s4", print_hash_value);
    transparent_crc(p_647->g_343.s5, "p_647->g_343.s5", print_hash_value);
    transparent_crc(p_647->g_343.s6, "p_647->g_343.s6", print_hash_value);
    transparent_crc(p_647->g_343.s7, "p_647->g_343.s7", print_hash_value);
    transparent_crc(p_647->g_343.s8, "p_647->g_343.s8", print_hash_value);
    transparent_crc(p_647->g_343.s9, "p_647->g_343.s9", print_hash_value);
    transparent_crc(p_647->g_343.sa, "p_647->g_343.sa", print_hash_value);
    transparent_crc(p_647->g_343.sb, "p_647->g_343.sb", print_hash_value);
    transparent_crc(p_647->g_343.sc, "p_647->g_343.sc", print_hash_value);
    transparent_crc(p_647->g_343.sd, "p_647->g_343.sd", print_hash_value);
    transparent_crc(p_647->g_343.se, "p_647->g_343.se", print_hash_value);
    transparent_crc(p_647->g_343.sf, "p_647->g_343.sf", print_hash_value);
    transparent_crc(p_647->g_425, "p_647->g_425", print_hash_value);
    transparent_crc(p_647->g_443, "p_647->g_443", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_647->g_447[i].f0, "p_647->g_447[i].f0", print_hash_value);

    }
    transparent_crc(p_647->g_460.x, "p_647->g_460.x", print_hash_value);
    transparent_crc(p_647->g_460.y, "p_647->g_460.y", print_hash_value);
    transparent_crc(p_647->g_464.x, "p_647->g_464.x", print_hash_value);
    transparent_crc(p_647->g_464.y, "p_647->g_464.y", print_hash_value);
    transparent_crc(p_647->g_464.z, "p_647->g_464.z", print_hash_value);
    transparent_crc(p_647->g_464.w, "p_647->g_464.w", print_hash_value);
    transparent_crc(p_647->g_470.x, "p_647->g_470.x", print_hash_value);
    transparent_crc(p_647->g_470.y, "p_647->g_470.y", print_hash_value);
    transparent_crc(p_647->g_470.z, "p_647->g_470.z", print_hash_value);
    transparent_crc(p_647->g_470.w, "p_647->g_470.w", print_hash_value);
    transparent_crc(p_647->g_499.x, "p_647->g_499.x", print_hash_value);
    transparent_crc(p_647->g_499.y, "p_647->g_499.y", print_hash_value);
    transparent_crc(p_647->g_499.z, "p_647->g_499.z", print_hash_value);
    transparent_crc(p_647->g_499.w, "p_647->g_499.w", print_hash_value);
    transparent_crc(p_647->g_512.x, "p_647->g_512.x", print_hash_value);
    transparent_crc(p_647->g_512.y, "p_647->g_512.y", print_hash_value);
    transparent_crc(p_647->g_512.z, "p_647->g_512.z", print_hash_value);
    transparent_crc(p_647->g_512.w, "p_647->g_512.w", print_hash_value);
    transparent_crc(p_647->g_532, "p_647->g_532", print_hash_value);
    transparent_crc(p_647->g_557.x, "p_647->g_557.x", print_hash_value);
    transparent_crc(p_647->g_557.y, "p_647->g_557.y", print_hash_value);
    transparent_crc(p_647->g_582.x, "p_647->g_582.x", print_hash_value);
    transparent_crc(p_647->g_582.y, "p_647->g_582.y", print_hash_value);
    transparent_crc(p_647->g_584.x, "p_647->g_584.x", print_hash_value);
    transparent_crc(p_647->g_584.y, "p_647->g_584.y", print_hash_value);
    transparent_crc(p_647->g_584.z, "p_647->g_584.z", print_hash_value);
    transparent_crc(p_647->g_584.w, "p_647->g_584.w", print_hash_value);
    transparent_crc(p_647->g_600.s0, "p_647->g_600.s0", print_hash_value);
    transparent_crc(p_647->g_600.s1, "p_647->g_600.s1", print_hash_value);
    transparent_crc(p_647->g_600.s2, "p_647->g_600.s2", print_hash_value);
    transparent_crc(p_647->g_600.s3, "p_647->g_600.s3", print_hash_value);
    transparent_crc(p_647->g_600.s4, "p_647->g_600.s4", print_hash_value);
    transparent_crc(p_647->g_600.s5, "p_647->g_600.s5", print_hash_value);
    transparent_crc(p_647->g_600.s6, "p_647->g_600.s6", print_hash_value);
    transparent_crc(p_647->g_600.s7, "p_647->g_600.s7", print_hash_value);
    transparent_crc(p_647->g_601.s0, "p_647->g_601.s0", print_hash_value);
    transparent_crc(p_647->g_601.s1, "p_647->g_601.s1", print_hash_value);
    transparent_crc(p_647->g_601.s2, "p_647->g_601.s2", print_hash_value);
    transparent_crc(p_647->g_601.s3, "p_647->g_601.s3", print_hash_value);
    transparent_crc(p_647->g_601.s4, "p_647->g_601.s4", print_hash_value);
    transparent_crc(p_647->g_601.s5, "p_647->g_601.s5", print_hash_value);
    transparent_crc(p_647->g_601.s6, "p_647->g_601.s6", print_hash_value);
    transparent_crc(p_647->g_601.s7, "p_647->g_601.s7", print_hash_value);
    transparent_crc(p_647->v_collective, "p_647->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 26; i++)
            transparent_crc(p_647->g_special_values[i + 26 * get_linear_group_id()], "p_647->g_special_values[i + 26 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 26; i++)
            transparent_crc(p_647->l_special_values[i], "p_647->l_special_values[i]", print_hash_value);
    transparent_crc(p_647->l_comm_values[get_linear_local_id()], "p_647->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_647->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_647->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
