// --atomics 23 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,60,8 -l 1,20,4
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

__constant uint32_t permutations[10][80] = {
{73,3,27,35,14,33,72,24,11,15,9,52,13,40,43,61,76,7,78,25,54,65,70,63,1,64,75,62,22,68,48,50,31,42,16,55,0,79,10,56,18,32,37,44,2,69,47,26,34,12,28,71,36,4,39,5,23,67,74,19,58,57,46,17,51,21,30,20,53,59,41,60,8,6,29,45,49,77,38,66}, // permutation 0
{40,46,27,53,37,66,38,15,61,25,60,72,55,62,50,2,45,41,58,22,33,43,35,13,42,19,34,54,56,31,1,14,0,63,8,11,9,73,65,3,57,21,47,75,64,24,68,18,48,71,29,79,67,12,26,69,77,51,74,17,20,7,70,39,49,78,16,76,10,23,44,28,36,6,52,59,4,5,32,30}, // permutation 1
{59,3,7,26,61,31,77,9,67,54,37,52,16,56,74,36,6,50,30,24,1,2,4,33,73,49,44,47,51,69,64,25,20,19,71,28,46,43,17,22,29,55,34,10,45,68,12,21,41,60,53,11,23,39,58,27,48,70,13,40,14,15,75,62,18,35,38,5,63,8,42,0,76,66,78,57,72,65,79,32}, // permutation 2
{57,8,38,17,3,79,55,59,45,67,72,6,26,76,64,75,66,65,21,20,34,33,74,35,47,22,13,68,69,32,37,36,14,0,62,56,49,42,11,15,40,24,1,41,39,28,52,77,18,31,7,53,51,48,9,29,71,4,25,50,58,12,2,70,5,16,73,23,60,27,10,30,43,44,78,54,61,19,63,46}, // permutation 3
{67,20,18,75,49,16,21,74,71,40,7,8,4,6,77,54,68,62,22,56,23,55,59,0,28,24,2,52,41,10,29,60,51,46,76,17,66,5,12,19,39,14,64,27,45,79,61,44,3,36,1,30,65,35,25,70,15,48,69,37,53,42,38,50,33,58,34,43,11,32,13,31,63,72,57,9,26,73,47,78}, // permutation 4
{41,42,4,74,34,48,28,62,75,15,78,51,22,20,31,67,14,77,72,65,21,60,32,37,25,54,16,71,1,44,64,43,33,9,26,7,63,30,6,49,24,36,3,19,61,59,38,70,40,68,0,12,23,17,29,79,46,11,50,27,47,73,76,66,39,8,53,45,13,56,57,2,58,69,55,18,35,5,52,10}, // permutation 5
{38,49,30,3,18,22,34,52,79,1,41,7,62,5,47,48,17,9,37,36,27,11,76,66,21,56,70,39,72,53,25,35,26,77,13,51,63,58,73,33,0,2,64,71,31,16,59,45,42,23,65,10,54,20,29,74,32,75,28,19,4,40,15,44,60,8,50,69,78,12,46,68,24,57,55,67,14,43,6,61}, // permutation 6
{73,51,52,39,76,10,8,59,19,79,53,60,65,15,43,17,42,63,35,75,18,30,46,40,28,20,74,11,50,33,45,67,3,71,6,14,44,0,24,1,22,62,54,2,25,9,61,31,23,36,77,34,68,12,48,4,66,70,27,64,32,21,55,49,5,16,26,78,47,37,29,57,13,58,38,7,41,56,72,69}, // permutation 7
{61,25,16,14,62,20,0,42,35,32,39,72,24,36,46,57,50,45,23,48,68,33,12,73,78,21,47,19,26,49,10,1,52,63,34,7,75,8,5,3,17,76,74,60,51,9,41,58,64,53,79,31,66,67,77,2,69,37,30,44,28,59,70,38,6,15,29,11,27,65,22,13,43,56,54,4,55,18,71,40}, // permutation 8
{60,70,78,1,16,15,58,7,20,67,69,8,63,51,30,64,12,38,74,71,32,73,22,75,33,54,45,4,52,59,79,49,11,68,9,24,41,76,18,5,21,27,50,36,77,62,31,66,6,14,57,19,25,23,35,46,42,37,26,55,65,34,43,44,56,17,61,48,40,13,47,72,53,10,3,39,2,0,29,28} // permutation 9
};

// Seed: 1717668933

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int8_t  f0;
   uint32_t  f1;
   int16_t  f2;
};

union U1 {
   volatile int32_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
};

union U2 {
   uint8_t  f0;
};

struct S3 {
    VECTOR(int8_t, 8) g_4;
    uint32_t g_9;
    int32_t g_11[2][10][7];
    int32_t *g_13;
    volatile VECTOR(int32_t, 4) g_31;
    int32_t g_40;
    int8_t g_67;
    uint8_t g_69;
    VECTOR(int32_t, 2) g_82;
    uint64_t g_86;
    int32_t g_244;
    uint16_t g_252;
    int8_t *g_266[1];
    int8_t **g_265;
    int8_t ***g_264;
    int8_t ***g_267;
    VECTOR(int8_t, 8) g_273;
    int8_t g_277;
    uint32_t g_279;
    int32_t g_302[8][9];
    VECTOR(uint32_t, 8) g_313;
    VECTOR(int32_t, 8) g_331;
    volatile union U1 g_334[10];
    volatile union U1 *g_333;
    int64_t g_337;
    union U2 g_343;
    int32_t *g_345;
    int32_t **g_344;
    union U1 g_350;
    union U1 g_374;
    VECTOR(int64_t, 16) g_375;
    int16_t g_384;
    VECTOR(int16_t, 8) g_405;
    VECTOR(int32_t, 16) g_425;
    uint32_t g_433;
    int32_t * volatile g_452;
    int32_t * volatile g_453;
    struct S0 g_463;
    struct S0 g_464;
    volatile VECTOR(int32_t, 16) g_476;
    struct S0 g_493;
    struct S0 *g_492;
    union U1 *g_509[9][9];
    union U1 ** volatile g_508;
    VECTOR(int32_t, 2) g_614;
    union U2 ** volatile g_619[1][2];
    volatile VECTOR(uint16_t, 8) g_643;
    int32_t ** volatile g_652[5][1];
    int32_t ** volatile g_653;
    volatile struct S0 g_662;
    uint64_t g_676;
    uint32_t g_704;
    uint32_t *g_736;
    VECTOR(uint16_t, 8) g_777;
    volatile VECTOR(uint16_t, 8) g_778;
    VECTOR(uint16_t, 4) g_779;
    VECTOR(uint16_t, 4) g_780;
    VECTOR(uint16_t, 2) g_818;
    VECTOR(int32_t, 8) g_825;
    union U1 g_828;
    volatile union U1 g_829;
    volatile int32_t * volatile g_837;
    volatile int32_t * volatile *g_836;
    volatile int32_t * volatile * volatile *g_835;
    volatile int32_t * volatile * volatile ** volatile g_834;
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
struct S0  func_1(struct S3 * p_847);
int64_t  func_6(uint32_t  p_7, int64_t  p_8, struct S3 * p_847);
int8_t  func_18(int32_t ** p_19, uint32_t  p_20, struct S3 * p_847);
int32_t ** func_21(int32_t * p_22, int32_t  p_23, int64_t  p_24, struct S3 * p_847);
uint32_t  func_32(uint32_t  p_33, uint64_t  p_34, int32_t ** p_35, uint32_t  p_36, struct S3 * p_847);
uint16_t  func_37(int32_t ** p_38, struct S3 * p_847);
int16_t  func_41(int32_t ** p_42, int32_t * p_43, uint16_t  p_44, int32_t * p_45, struct S3 * p_847);
int32_t ** func_46(uint8_t  p_47, int32_t ** p_48, int64_t  p_49, uint64_t  p_50, int32_t * p_51, struct S3 * p_847);
union U2  func_55(int64_t  p_56, struct S3 * p_847);
uint16_t  func_93(uint64_t  p_94, int32_t  p_95, uint32_t  p_96, union U2  p_97, struct S3 * p_847);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_847->g_comm_values p_847->g_4 p_847->g_9 p_847->g_13 p_847->g_31 p_847->g_11 p_847->g_40 p_847->g_69 p_847->g_82 p_847->g_252 p_847->g_264 p_847->g_265 p_847->g_266 p_847->g_277 p_847->g_279 p_847->g_244 p_847->g_302 p_847->g_313 p_847->g_331 p_847->g_333 p_847->g_337 p_847->l_comm_values p_847->g_343 p_847->g_344 p_847->g_345 p_847->g_273 p_847->g_375 p_847->g_405 p_847->g_343.f0 p_847->g_425 p_847->g_453 p_847->g_350.f1 p_847->g_463 p_847->g_464.f1 p_847->g_492 p_847->g_508 p_847->g_493.f2 p_847->g_86 p_847->g_643 p_847->g_653 p_847->g_662 p_847->g_676 p_847->g_67 p_847->g_433 p_847->g_704 p_847->g_334 p_847->g_384 p_847->g_509 p_847->g_777 p_847->g_818 p_847->g_493
 * writes: p_847->g_13 p_847->g_11 p_847->g_40 p_847->g_69 p_847->g_86 p_847->g_244 p_847->g_252 p_847->g_67 p_847->g_264 p_847->g_267 p_847->g_277 p_847->g_279 p_847->l_comm_values p_847->g_302 p_847->g_337 p_847->g_345 p_847->g_384 p_847->g_331 p_847->g_9 p_847->g_343.f0 p_847->g_425 p_847->g_433 p_847->g_350.f1 p_847->g_464 p_847->g_509 p_847->g_463.f1 p_847->g_493.f2 p_847->g_313 p_847->g_676 p_847->g_704 p_847->g_736 p_847->g_818 p_847->g_493
 */
struct S0  func_1(struct S3 * p_847)
{ /* block id: 4 */
    VECTOR(int8_t, 16) l_5 = (VECTOR(int8_t, 16))(0x33L, (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, (-3L)), (-3L)), (-3L), 0x33L, (-3L), (VECTOR(int8_t, 2))(0x33L, (-3L)), (VECTOR(int8_t, 2))(0x33L, (-3L)), 0x33L, (-3L), 0x33L, (-3L));
    int i;
    if ((((p_847->g_818.y ^= (p_847->g_comm_values[p_847->tid] || (safe_sub_func_uint64_t_u_u((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_847->g_4.s44403164)))).s7 & ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_5.s2a17d0b0)).s23)).odd) , func_6((((VECTOR(uint32_t, 4))(1UL, 1UL, 0xCCFD66C4L, 0x7FCE6BB2L)).w , p_847->g_9), l_5.s3, p_847)) | ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 0xB9297F395A39E74FL)))).yyxx)).lo)), 0x92FE39F816A7E30CL, 0UL)).z), p_847->g_82.x)))) > l_5.s8) || l_5.sd))
    { /* block id: 359 */
        return (*p_847->g_492);
    }
    else
    { /* block id: 361 */
        union U2 l_846 = {0UL};
        for (p_847->g_244 = 5; (p_847->g_244 != 7); p_847->g_244 = safe_add_func_int8_t_s_s(p_847->g_244, 1))
        { /* block id: 364 */
            (*p_847->g_344) = (*p_847->g_344);
            return (*p_847->g_492);
        }
        (*p_847->g_492) = (l_846 , (*p_847->g_492));
        return (*p_847->g_492);
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_13 p_847->g_31 p_847->g_11 p_847->g_40 p_847->g_69 p_847->g_82 p_847->g_4 p_847->g_252 p_847->g_264 p_847->g_265 p_847->g_266 p_847->g_277 p_847->g_279 p_847->g_244 p_847->g_9 p_847->g_302 p_847->g_313 p_847->g_331 p_847->g_333 p_847->g_337 p_847->l_comm_values p_847->g_343 p_847->g_344 p_847->g_comm_values p_847->g_345 p_847->g_273 p_847->g_375 p_847->g_405 p_847->g_343.f0 p_847->g_425 p_847->g_453 p_847->g_350.f1 p_847->g_463 p_847->g_464.f1 p_847->g_492 p_847->g_508 p_847->g_493.f2 p_847->g_86 p_847->g_643 p_847->g_653 p_847->g_662 p_847->g_676 p_847->g_67 p_847->g_433 p_847->g_704 p_847->g_334 p_847->g_384 p_847->g_509 p_847->g_777
 * writes: p_847->g_13 p_847->g_11 p_847->g_40 p_847->g_69 p_847->g_86 p_847->g_244 p_847->g_252 p_847->g_67 p_847->g_264 p_847->g_267 p_847->g_277 p_847->g_279 p_847->l_comm_values p_847->g_302 p_847->g_337 p_847->g_345 p_847->g_384 p_847->g_331 p_847->g_9 p_847->g_343.f0 p_847->g_425 p_847->g_433 p_847->g_350.f1 p_847->g_464 p_847->g_509 p_847->g_463.f1 p_847->g_493.f2 p_847->g_313 p_847->g_676 p_847->g_704 p_847->g_736
 */
int64_t  func_6(uint32_t  p_7, int64_t  p_8, struct S3 * p_847)
{ /* block id: 5 */
    int32_t *l_10[6];
    int32_t **l_12 = &l_10[0];
    VECTOR(uint32_t, 2) l_434 = (VECTOR(uint32_t, 2))(0x51116C4FL, 0xCAE3DFC1L);
    int32_t l_435 = 0x47348962L;
    uint32_t l_839[7];
    int i;
    for (i = 0; i < 6; i++)
        l_10[i] = &p_847->g_11[1][5][6];
    for (i = 0; i < 7; i++)
        l_839[i] = 0xF1987CFFL;
    p_847->g_13 = ((*l_12) = l_10[0]);
    (*p_847->g_13) = 0x025EC560L;
    (**l_12) = (((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(func_18(func_21(((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 0x854C3EBEL)).yyyxyyxy)).s25)).odd || (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(p_847->g_31.xyxwwwyz)).s5, func_32(p_847->g_11[0][5][1], p_7, &l_10[0], (func_37(&l_10[1], p_847) & ((VECTOR(int16_t, 2))((-1L), 0x3DEFL)).hi), p_847))), (p_847->g_433 = p_847->g_4.s7))), ((VECTOR(int16_t, 16))((((l_434.y | (p_8 , 0xB78692F0243F0681L)) >= l_435) >= p_7), p_8, ((VECTOR(int16_t, 4))(0L)), 8L, ((VECTOR(int16_t, 4))(0L)), (-1L), (-2L), 0x5AACL, 0x15E0L, 0x53F6L)).sf))) , (*l_12)), p_847->g_4.s0, p_847->g_11[1][5][6], p_847), p_847->g_82.x, p_847), p_7)) && 0x436CE43BC18C195CL), p_7)) | 7UL) > GROUP_DIVERGE(0, 1));
    l_839[0]--;
    return p_847->g_777.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_453 p_847->g_40 p_847->g_350.f1 p_847->g_463 p_847->g_302 p_847->l_comm_values p_847->g_464.f1 p_847->g_492 p_847->g_9 p_847->g_508 p_847->g_493.f2 p_847->g_86 p_847->g_331 p_847->g_273 p_847->g_31 p_847->g_279 p_847->g_643 p_847->g_11 p_847->g_653 p_847->g_662 p_847->g_4 p_847->g_676 p_847->g_67 p_847->g_433 p_847->g_337 p_847->g_344 p_847->g_704 p_847->g_333 p_847->g_334 p_847->g_345 p_847->g_343 p_847->g_313 p_847->g_384 p_847->g_509
 * writes: p_847->g_40 p_847->g_350.f1 p_847->g_11 p_847->g_252 p_847->g_464 p_847->g_509 p_847->g_343.f0 p_847->g_463.f1 p_847->g_337 p_847->g_86 p_847->g_384 p_847->g_493.f2 p_847->g_313 p_847->g_345 p_847->g_13 p_847->g_676 p_847->g_704 p_847->g_736 p_847->g_302 p_847->g_69
 */
int8_t  func_18(int32_t ** p_19, uint32_t  p_20, struct S3 * p_847)
{ /* block id: 204 */
    uint16_t l_454 = 1UL;
    int32_t *l_457 = &p_847->g_40;
    VECTOR(uint8_t, 8) l_483 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x29L), 0x29L), 0x29L, 5UL, 0x29L);
    uint32_t l_490 = 0xA4E15613L;
    union U1 **l_552 = &p_847->g_509[7][2];
    int8_t ****l_562 = (void*)0;
    int32_t l_609 = (-1L);
    uint32_t l_672 = 4294967286UL;
    int32_t l_679 = 0x02D17FA1L;
    uint32_t l_683 = 1UL;
    uint16_t l_684[4][10];
    int32_t *l_701 = &p_847->g_302[0][4];
    int64_t **l_727 = (void*)0;
    int64_t *l_729 = (void*)0;
    int64_t **l_728 = &l_729;
    int32_t ***l_772 = (void*)0;
    VECTOR(uint16_t, 8) l_776 = (VECTOR(uint16_t, 8))(0x787CL, (VECTOR(uint16_t, 4))(0x787CL, (VECTOR(uint16_t, 2))(0x787CL, 4UL), 4UL), 4UL, 0x787CL, 4UL);
    int32_t l_795 = (-1L);
    int16_t l_796 = 3L;
    int32_t l_798 = 0x05596F8FL;
    int32_t l_803 = (-1L);
    int32_t l_804 = 0x7B07E476L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
            l_684[i][j] = 0xFE30L;
    }
    (*p_847->g_453) &= p_20;
    l_454--;
    (*l_457) = 0x776070B1L;
    for (p_847->g_350.f1 = 0; (p_847->g_350.f1 <= (-15)); p_847->g_350.f1 = safe_sub_func_uint8_t_u_u(p_847->g_350.f1, 6))
    { /* block id: 210 */
        int32_t *l_460 = &p_847->g_11[1][5][6];
        int64_t *l_472 = &p_847->g_337;
        int64_t *l_475[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 *l_491[4][6][7] = {{{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0}},{{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0}},{{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0}},{{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0},{&p_847->g_464,(void*)0,(void*)0,(void*)0,&p_847->g_464,&p_847->g_464,(void*)0}}};
        union U2 l_503 = {0UL};
        int32_t l_506 = 0x2C2B844CL;
        uint32_t l_572 = 4294967295UL;
        uint64_t l_681 = 0x495B4D304026A0FCL;
        VECTOR(uint32_t, 2) l_702 = (VECTOR(uint32_t, 2))(0x2C6E676FL, 0x42BE52A9L);
        uint32_t l_761[6][5][4] = {{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}},{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}},{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}},{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}},{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}},{{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL},{4294967292UL,2UL,4294967294UL,0UL}}};
        int32_t l_785 = 4L;
        int32_t l_786 = 0x5A776078L;
        int32_t l_792 = 0L;
        int32_t l_794 = 0x1CA1CE64L;
        int32_t l_800 = 0x588447DDL;
        int32_t l_802[10][6][4] = {{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}},{{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL},{0L,9L,(-4L),0x769ADA0BL}}};
        int i, j, k;
        if ((*l_457))
            break;
        (*l_460) = ((*l_457) = p_20);
        for (p_847->g_252 = 0; (p_847->g_252 >= 7); p_847->g_252++)
        { /* block id: 216 */
            int32_t l_469 = (-1L);
            VECTOR(int8_t, 2) l_489 = (VECTOR(int8_t, 2))(0x36L, (-1L));
            union U2 l_553 = {0xBDL};
            int8_t ****l_560 = (void*)0;
            union U2 *l_620 = &l_553;
            VECTOR(uint16_t, 4) l_642 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x52ABL), 0x52ABL);
            int64_t l_649 = 0x09F67EC33EE660C2L;
            uint8_t l_650[6] = {0x78L,1UL,0x78L,0x78L,1UL,0x78L};
            uint8_t *l_668 = &l_553.f0;
            uint32_t *l_669 = (void*)0;
            uint32_t *l_670 = (void*)0;
            uint32_t *l_671[5];
            uint64_t *l_673 = &p_847->g_86;
            uint64_t *l_674 = (void*)0;
            uint64_t *l_675 = &p_847->g_676;
            int8_t *l_677 = (void*)0;
            int8_t *l_678 = (void*)0;
            uint8_t l_680 = 1UL;
            int32_t *l_682[8] = {&l_609,&p_847->g_244,&l_609,&l_609,&p_847->g_244,&l_609,&l_609,&p_847->g_244};
            VECTOR(uint64_t, 4) l_693 = (VECTOR(uint64_t, 4))(0xC32774F16738DB39L, (VECTOR(uint64_t, 2))(0xC32774F16738DB39L, 18446744073709551615UL), 18446744073709551615UL);
            int32_t ***l_773 = &p_847->g_344;
            VECTOR(uint16_t, 8) l_781 = (VECTOR(uint16_t, 8))(0x123DL, (VECTOR(uint16_t, 4))(0x123DL, (VECTOR(uint16_t, 2))(0x123DL, 0UL), 0UL), 0UL, 0x123DL, 0UL);
            int32_t l_791 = 1L;
            int8_t l_801 = 1L;
            uint32_t l_805 = 0xD1B414C3L;
            VECTOR(uint16_t, 4) l_817 = (VECTOR(uint16_t, 4))(0xEEABL, (VECTOR(uint16_t, 2))(0xEEABL, 0x63B4L), 0x63B4L);
            int i;
            for (i = 0; i < 5; i++)
                l_671[i] = (void*)0;
            p_847->g_464 = p_847->g_463;
            if ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(p_20, 0)), l_469)))
            { /* block id: 218 */
                int64_t **l_473 = (void*)0;
                int64_t **l_474 = &l_472;
                VECTOR(int8_t, 8) l_484 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0L), 0L), 0L, 0x15L, 0L);
                int i;
                l_469 = (((safe_lshift_func_int16_t_s_s((((*l_474) = l_472) == l_475[3]), 15)) && ((((((VECTOR(int32_t, 4))(p_847->g_476.s1466)).y , (safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((((*l_457) = ((*l_460) = p_20)) == (safe_mul_func_uint8_t_u_u((((!p_847->g_302[5][7]) || ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(l_483.s11)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(l_484.s63302071)).s36, ((VECTOR(int8_t, 16))(0x3EL, 0x62L, ((VECTOR(int8_t, 4))((p_847->g_463.f2 | ((safe_mod_func_int32_t_s_s(l_484.s4, l_469)) <= (safe_rshift_func_int16_t_s_s((((p_847->g_331.s2 < ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_489.yyyyxyxyyyxxyxxx)).s46)).odd , ((p_20 > (-4L)) , l_484.s4)) != 2UL)) , GROUP_DIVERGE(1, 1)) || p_20), 15)))), ((VECTOR(int8_t, 2))(0x19L)), 0L)), ((VECTOR(int8_t, 8))((-1L))), (-9L), 0x55L)).sfd))).xyyxxyxy, ((VECTOR(int8_t, 8))((-5L)))))).even, ((VECTOR(int8_t, 4))(0x78L))))).y, ((VECTOR(uint8_t, 2))(253UL)), 0xF4L)).lo))), ((VECTOR(uint16_t, 4))(0UL)), 0xC071L, 65533UL, ((VECTOR(uint16_t, 8))(65535UL)))).sbf82)).y) != p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 80))]), p_20))) && p_847->g_464.f1) , FAKE_DIVERGE(p_847->group_0_offset, get_group_id(0), 10)), l_489.y)), l_490))) , l_491[1][3][1]) != p_847->g_492) & p_20)) > p_20);
            }
            else
            { /* block id: 223 */
                uint16_t l_502[2];
                union U2 *l_504[1];
                union U1 *l_507 = &p_847->g_374;
                int32_t l_569 = 0x60B12173L;
                int32_t l_570 = (-1L);
                int i;
                for (i = 0; i < 2; i++)
                    l_502[i] = 65530UL;
                for (i = 0; i < 1; i++)
                    l_504[i] = &p_847->g_343;
                if ((safe_add_func_int32_t_s_s(((p_20 , (p_20 , &p_847->g_13)) != (void*)0), ((~(safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((*l_457), l_489.x)) , (safe_div_func_int8_t_s_s(((l_502[1] ^ (((l_503 = l_503) , &p_847->g_337) == (void*)0)) >= l_502[1]), l_489.y))), p_847->g_9))) , 0L))))
                { /* block id: 225 */
                    int32_t l_505 = (-1L);
                    if (l_505)
                        break;
                    if (l_506)
                        continue;
                }
                else
                { /* block id: 228 */
                    int8_t *****l_561 = &l_560;
                    uint32_t *l_563 = (void*)0;
                    uint32_t *l_564[6][3][4] = {{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}},{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}},{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}},{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}},{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}},{{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279},{(void*)0,&p_847->g_279,&p_847->g_279,&p_847->g_279}}};
                    uint8_t *l_565 = (void*)0;
                    uint8_t *l_566 = &p_847->g_343.f0;
                    uint8_t *l_567 = (void*)0;
                    uint8_t *l_568 = (void*)0;
                    int8_t l_571 = (-8L);
                    int32_t l_608[3][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_608[i][j] = 0x36D8106FL;
                    }
                    (*p_847->g_508) = l_507;
                    if ((atomic_inc(&p_847->g_atomic_input[23 * get_linear_group_id() + 7]) == 7))
                    { /* block id: 231 */
                        int32_t l_511 = 0x13F241A4L;
                        int32_t *l_510 = &l_511;
                        int32_t *l_512 = &l_511;
                        VECTOR(int32_t, 4) l_513 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-10L)), (-10L));
                        VECTOR(int32_t, 2) l_514 = (VECTOR(int32_t, 2))(0x3FB4AF3BL, 0x2558843EL);
                        VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))(1L, (-2L));
                        VECTOR(int32_t, 16) l_516 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
                        uint16_t l_517[10][6][2] = {{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}},{{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL},{0xDC46L,0xDFEFL}}};
                        int8_t l_518 = 0L;
                        VECTOR(int32_t, 16) l_519 = (VECTOR(int32_t, 16))(0x2DCA5247L, (VECTOR(int32_t, 4))(0x2DCA5247L, (VECTOR(int32_t, 2))(0x2DCA5247L, (-7L)), (-7L)), (-7L), 0x2DCA5247L, (-7L), (VECTOR(int32_t, 2))(0x2DCA5247L, (-7L)), (VECTOR(int32_t, 2))(0x2DCA5247L, (-7L)), 0x2DCA5247L, (-7L), 0x2DCA5247L, (-7L));
                        VECTOR(int32_t, 4) l_520 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x77466CC7L), 0x77466CC7L);
                        VECTOR(int32_t, 4) l_521 = (VECTOR(int32_t, 4))(0x627D703FL, (VECTOR(int32_t, 2))(0x627D703FL, (-2L)), (-2L));
                        int32_t l_522 = 0x08898784L;
                        int8_t l_523 = 0x1CL;
                        int64_t l_524 = (-4L);
                        union U1 l_525 = {5L};/* VOLATILE GLOBAL l_525 */
                        uint32_t l_526 = 4294967293UL;
                        uint8_t l_527 = 0x93L;
                        VECTOR(int32_t, 2) l_528 = (VECTOR(int32_t, 2))(1L, 0x3E8DEA2EL);
                        VECTOR(int32_t, 2) l_529 = (VECTOR(int32_t, 2))((-5L), 8L);
                        VECTOR(int16_t, 4) l_530 = (VECTOR(int16_t, 4))(0x7CCBL, (VECTOR(int16_t, 2))(0x7CCBL, (-5L)), (-5L));
                        VECTOR(uint16_t, 8) l_531 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x9C72L), 0x9C72L), 0x9C72L, 5UL, 0x9C72L);
                        VECTOR(int32_t, 4) l_532 = (VECTOR(int32_t, 4))(0x532F9CB8L, (VECTOR(int32_t, 2))(0x532F9CB8L, 0x017F740EL), 0x017F740EL);
                        uint32_t l_533 = 1UL;
                        int16_t l_534 = 0x2A39L;
                        int32_t l_535 = 1L;
                        uint64_t l_536 = 0xF3AFD7B9664ED70FL;
                        uint32_t l_537 = 4294967295UL;
                        VECTOR(int16_t, 2) l_538 = (VECTOR(int16_t, 2))((-3L), 0x25FAL);
                        int32_t l_539 = (-1L);
                        uint32_t l_540 = 3UL;
                        uint32_t l_541 = 0x84114C79L;
                        int64_t l_542 = 0x152493F95B5FFC3AL;
                        uint8_t l_543 = 0xF3L;
                        int64_t l_544 = 0x1376DFE3E09F4FB1L;
                        uint16_t l_545 = 65532UL;
                        int i, j, k;
                        l_512 = l_510;
                        l_545 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_513.xxyw)), ((VECTOR(int32_t, 8))(l_514.yxyxxxxx)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_515.yxxx)).hi, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_516.s5d2c2d56)).s4651316205444771, (int32_t)(l_518 ^= l_517[4][0][0])))).sb7, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_519.sbda6)).yzwzzwyyzywzxwww, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_520.yxwx)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_521.zzzywyxz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_522, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x323C14DCL, l_523, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_524, (-10L), 0x6F1832A5L, 0x61EC8B92L, ((*l_512) = ((l_525 , l_526) , l_527)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_528.xx)).xxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_529.yyyxxxyx)).odd))))).xxzzxyzwwwxyxyzx, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_530.zzzzyxyw)).s4704563622631704)).even, ((VECTOR(uint16_t, 4))(l_531.s6417)).yxywwwww))).s6651646634113022, ((VECTOR(int32_t, 2))(l_532.wx)).yxxyxxyxxxyxxxxy))).sc3)).yxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(9L, 0L, ((*l_512) = (l_537 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), (-1L), 0x3107F309L, 0x5B292E5EL)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((l_535 = (l_534 |= l_533)) , 1L), l_536, 0x71755DBAL, 6L)), ((VECTOR(int32_t, 4))(0x7F0B4190L))))))))).even, ((VECTOR(int32_t, 4))(0L))))).hi)).xxxxyyyyxyxxyyyy)).s9)), ((VECTOR(int32_t, 2))(0x20ADDFEFL)), l_538.x, 0x5753C6C0L, 1L)).s60)).xxxyxxxxxyxyxyxy, ((VECTOR(int32_t, 16))(0x78AA0588L)), ((VECTOR(int32_t, 16))(0x0AB3332FL))))))).s248b))).lo, ((VECTOR(int32_t, 2))(4L))))).yxyxxxxy)).s2212016675756405, ((VECTOR(int32_t, 16))((-2L))), ((VECTOR(int32_t, 16))(0x323FC18AL))))))).even, (int32_t)l_539, (int32_t)l_540))).even, ((VECTOR(int32_t, 4))(1L))))).wzywyyzxzyyxyzxy)).se191, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-1L)))))), 1L, 0x06DC6EFCL, l_541, l_542, ((VECTOR(int32_t, 2))(0L)), 0x11841823L)).hi, ((VECTOR(int32_t, 8))((-10L)))))).s6714434760312436)).s46)), ((VECTOR(int32_t, 4))(0x72766D94L)))).s76)).hi, 6L, 0x6FA9C45BL, ((VECTOR(int32_t, 4))((-6L))))).s62)).yyyyxyyy))).odd))).xzxzywxzwxxyxwyw, ((VECTOR(int32_t, 16))(0x131DD2DCL))))).se3, (int32_t)l_543, (int32_t)l_544)))))).xyxxxyyy)))).odd))).yyxzzxxywzxyyzzx)).s19a6)).x;
                        unsigned int result = 0;
                        result += l_511;
                        result += l_513.w;
                        result += l_513.z;
                        result += l_513.y;
                        result += l_513.x;
                        result += l_514.y;
                        result += l_514.x;
                        result += l_515.y;
                        result += l_515.x;
                        result += l_516.sf;
                        result += l_516.se;
                        result += l_516.sd;
                        result += l_516.sc;
                        result += l_516.sb;
                        result += l_516.sa;
                        result += l_516.s9;
                        result += l_516.s8;
                        result += l_516.s7;
                        result += l_516.s6;
                        result += l_516.s5;
                        result += l_516.s4;
                        result += l_516.s3;
                        result += l_516.s2;
                        result += l_516.s1;
                        result += l_516.s0;
                        int l_517_i0, l_517_i1, l_517_i2;
                        for (l_517_i0 = 0; l_517_i0 < 10; l_517_i0++) {
                            for (l_517_i1 = 0; l_517_i1 < 6; l_517_i1++) {
                                for (l_517_i2 = 0; l_517_i2 < 2; l_517_i2++) {
                                    result += l_517[l_517_i0][l_517_i1][l_517_i2];
                                }
                            }
                        }
                        result += l_518;
                        result += l_519.sf;
                        result += l_519.se;
                        result += l_519.sd;
                        result += l_519.sc;
                        result += l_519.sb;
                        result += l_519.sa;
                        result += l_519.s9;
                        result += l_519.s8;
                        result += l_519.s7;
                        result += l_519.s6;
                        result += l_519.s5;
                        result += l_519.s4;
                        result += l_519.s3;
                        result += l_519.s2;
                        result += l_519.s1;
                        result += l_519.s0;
                        result += l_520.w;
                        result += l_520.z;
                        result += l_520.y;
                        result += l_520.x;
                        result += l_521.w;
                        result += l_521.z;
                        result += l_521.y;
                        result += l_521.x;
                        result += l_522;
                        result += l_523;
                        result += l_524;
                        result += l_525.f0;
                        result += l_525.f1;
                        result += l_525.f2;
                        result += l_526;
                        result += l_527;
                        result += l_528.y;
                        result += l_528.x;
                        result += l_529.y;
                        result += l_529.x;
                        result += l_530.w;
                        result += l_530.z;
                        result += l_530.y;
                        result += l_530.x;
                        result += l_531.s7;
                        result += l_531.s6;
                        result += l_531.s5;
                        result += l_531.s4;
                        result += l_531.s3;
                        result += l_531.s2;
                        result += l_531.s1;
                        result += l_531.s0;
                        result += l_532.w;
                        result += l_532.z;
                        result += l_532.y;
                        result += l_532.x;
                        result += l_533;
                        result += l_534;
                        result += l_535;
                        result += l_536;
                        result += l_537;
                        result += l_538.y;
                        result += l_538.x;
                        result += l_539;
                        result += l_540;
                        result += l_541;
                        result += l_542;
                        result += l_543;
                        result += l_544;
                        result += l_545;
                        atomic_add(&p_847->g_special_values[23 * get_linear_group_id() + 7], result);
                    }
                    else
                    { /* block id: 240 */
                        (1 + 1);
                    }
                    if (((safe_sub_func_int64_t_s_s(((((safe_div_func_int32_t_s_s((((((*p_847->g_453) == (((safe_mul_func_uint16_t_u_u(((void*)0 != l_552), (l_553 , (((l_570 = (l_569 &= ((*l_566) = (safe_mod_func_uint32_t_u_u(((*l_460) = (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0x24555105B7CBBC40L, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xDD1264F7EFA0EA45L)), 18446744073709551610UL, (safe_sub_func_int16_t_s_s((((*l_561) = l_560) != l_562), p_20)), ((*l_460) == 0x8DL), 0xBD25078D5E4D5F38L, 1UL)).odd)).y, (-1L)))), p_20))))) && p_20) , p_20)))) && (-5L)) > p_20)) <= p_20) , l_553.f0) ^ 0UL), p_847->g_493.f2)) != 3L) & (*l_457)) < l_503.f0), l_571)) , l_572))
                    { /* block id: 248 */
                        uint32_t *l_573 = &p_847->g_463.f1;
                        uint64_t *l_576 = &p_847->g_86;
                        int32_t l_581[4];
                        int16_t *l_615 = &p_847->g_384;
                        int16_t l_616 = 0x2549L;
                        int16_t *l_617 = &p_847->g_493.f2;
                        uint16_t *l_618 = &l_502[1];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_581[i] = (-1L);
                        (*l_460) = ((((*l_573) = ((VECTOR(uint32_t, 2))(0x09781AE2L, 0x173190C1L)).lo) , (-1L)) < (l_503 , ((~((*l_457) = ((~GROUP_DIVERGE(2, 1)) || ((*l_472) = p_20)))) && (safe_mod_func_int32_t_s_s(0L, (((*l_576) &= p_20) | (p_20 , (((*l_457) = (l_502[1] >= ((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(((p_20 == ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((((*l_472) = (l_581[3] , (-1L))) || p_847->g_273.s4), (*p_847->g_453), 0L, ((VECTOR(int32_t, 8))(0x6D8164EAL)), 0x49DF7A1FL, 0x1777A272L, (-3L), 0L, 0x4D18E3E5L)))).s2) > p_847->g_82.y), 0x6DL, p_847->g_4.s4, 0xEBL, ((VECTOR(uint8_t, 4))(0x67L)))).even, ((VECTOR(uint8_t, 4))(0x3DL))))).w, p_20)) < p_847->g_331.s2), (*l_457))) , l_570))) || 0xE5A32981400A1CF5L))))))));
                        l_569 = ((safe_sub_func_uint64_t_u_u(p_20, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((((*l_576) = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(p_20, 1)) ^ (!(~0x3716156AL))) | (safe_add_func_uint16_t_u_u((~((*l_618) |= (((((*l_617) = ((l_616 = ((*l_615) = (safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s(65527UL, ((*l_460) = l_489.x))) , FAKE_DIVERGE(p_847->group_0_offset, get_group_id(0), 10)) , (l_576 == ((p_20 & ((VECTOR(int8_t, 16))((((252UL | ((*l_457) = (((p_847->g_313.s0--) != (safe_sub_func_int16_t_s_s(0x1A73L, 3UL))) < p_20))) ^ 0xD5CF58A5L) ^ p_847->g_614.y), (-1L), 0x28L, 0L, ((VECTOR(int8_t, 4))(0x4AL)), ((VECTOR(int8_t, 2))(1L)), p_20, ((VECTOR(int8_t, 2))((-10L))), ((VECTOR(int8_t, 2))(0x13L)), 8L)).s0) , l_576))), p_20)))) | l_469)) == p_20) , p_20) || l_608[2][0]))), 0UL))), 4L)), 3))) & p_847->g_273.s7), p_847->g_31.y)) , p_847->g_40), 0xFA62L)), 7)), 2)), p_20)))) , 0x69D9A320L);
                        l_620 = &p_847->g_343;
                    }
                    else
                    { /* block id: 266 */
                        uint32_t l_621 = 0x62909038L;
                        union U1 **l_648 = &l_507;
                        int32_t l_651[1][4][9] = {{{0x64BDDC88L,0x40FE781CL,0x60FC6691L,0x06AB243FL,0x60FC6691L,0x40FE781CL,0x64BDDC88L,0x50D87000L,0x355191AEL},{0x64BDDC88L,0x40FE781CL,0x60FC6691L,0x06AB243FL,0x60FC6691L,0x40FE781CL,0x64BDDC88L,0x50D87000L,0x355191AEL},{0x64BDDC88L,0x40FE781CL,0x60FC6691L,0x06AB243FL,0x60FC6691L,0x40FE781CL,0x64BDDC88L,0x50D87000L,0x355191AEL},{0x64BDDC88L,0x40FE781CL,0x60FC6691L,0x06AB243FL,0x60FC6691L,0x40FE781CL,0x64BDDC88L,0x50D87000L,0x355191AEL}}};
                        int i, j, k;
                        (*l_457) = ((*l_460) = l_621);
                        (*l_460) = (safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_847->g_279, 0)), (((p_847->g_313.s1 = p_20) <= ((-1L) && (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(0x22ECL, p_20)) | (GROUP_DIVERGE(0, 1) >= p_20)), 1)))) && (safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((!(safe_lshift_func_uint8_t_u_s((l_651[0][3][1] = ((safe_rshift_func_int8_t_s_s((!(safe_lshift_func_int16_t_s_s(((((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(l_642.wz)).yyyx, ((VECTOR(uint16_t, 8))(0x2CABL, (((*l_566) |= ((void*)0 == l_460)) <= (((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 0xA473L)).xxxxyyyy)), ((VECTOR(uint16_t, 16))(p_847->g_643.s1341675332047620)).lo))).s4 > (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((((*l_648) = (p_847->g_509[4][0] = p_847->g_509[5][6])) == p_847->g_333) , p_847->g_337), 0xF221L)) , p_20), 1)))), p_20, p_847->g_9, 0xD702L, (*l_457), 9UL, 0x462DL)).odd))).wzzxxzywxyzyxwyy, ((VECTOR(uint16_t, 16))(0xF84DL))))).s39))), ((VECTOR(uint16_t, 4))(0x75A3L)), 0xE3C4L)).s7 <= (*l_457)) || l_649), l_650[3]))), l_621)) , p_847->g_643.s4)), l_642.y))), p_20)), l_502[1]))))), p_847->g_11[0][1][2]));
                        (*p_847->g_653) = ((*p_19) = (void*)0);
                    }
                }
                if (l_642.z)
                    continue;
                if ((*l_457))
                    break;
            }
            if ((l_683 = (((safe_mod_func_int32_t_s_s(p_20, (((((VECTOR(int64_t, 2))((-5L), 0x585553BB672D270AL)).hi != ((*l_472) = 0x1AE639CBC6E5A1FDL)) && (((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((p_847->g_662 , ((*l_457) = (((l_469 = (safe_unary_minus_func_uint64_t_u(((*l_675) &= ((*l_673) = (((((*l_460) = ((!((0x3089413D72E158ADL > (((-3L) & (*l_460)) , p_20)) != l_650[3])) || (safe_div_func_uint8_t_u_u((FAKE_DIVERGE(p_847->group_2_offset, get_group_id(2), 10) != ((safe_mul_func_uint8_t_u_u(((*l_668) |= p_847->g_463.f0), p_847->g_4.s0)) >= 0xC314BC35B477C7F1L)), p_20)))) & (*l_457)) <= l_650[2]) > l_672)))))) > p_847->g_67) > (*l_457)))), p_20)), 7)) && (*l_457)), l_679)) > 0UL) < l_680) > p_847->g_433) <= 0xF5903D51C13E0F22L)) , 0x4294AACCL))) || p_20) > l_681)))
            { /* block id: 290 */
                int8_t *****l_694[3];
                int32_t l_695 = (-1L);
                int16_t *l_696 = &p_847->g_493.f2;
                int i;
                for (i = 0; i < 3; i++)
                    l_694[i] = &l_562;
                if (((*l_460) = (l_684[2][2] <= (GROUP_DIVERGE(1, 1) & (((*l_696) = (p_20 & (safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((-8L) >= (safe_lshift_func_uint8_t_u_u((*l_460), 7))), (((((((VECTOR(uint64_t, 8))(l_693.zzzwwzxz)).s1 != ((*l_472) |= 0x537ED5ABBABED060L)) & 0x3F06EA8EL) , GROUP_DIVERGE(1, 1)) , l_560) == (l_562 = l_560)))), l_695)), 7)))) > 1UL)))))
                { /* block id: 295 */
                    int16_t l_700 = 0x27F0L;
                    if ((*l_457))
                        break;
                    for (l_681 = 7; (l_681 == 40); ++l_681)
                    { /* block id: 299 */
                        uint16_t l_699 = 7UL;
                        if (l_699)
                            break;
                        return l_700;
                    }
                    (*p_847->g_344) = l_701;
                }
                else
                { /* block id: 304 */
                    int64_t l_703 = 0x6C4844DB29CF6467L;
                    (*l_457) &= (((VECTOR(uint32_t, 4))(l_702.xxyy)).x >= (l_703 , p_847->g_662.f1));
                    p_847->g_704--;
                }
                if ((atomic_inc(&p_847->g_atomic_input[23 * get_linear_group_id() + 20]) == 5))
                { /* block id: 309 */
                    struct S0 l_707[3][6] = {{{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L}},{{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L}},{{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L},{0L,9UL,0x19D4L}}};
                    uint8_t l_708 = 9UL;
                    int32_t l_716[1][7][2] = {{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}}};
                    uint32_t l_717 = 0xAC36A846L;
                    struct S0 l_720 = {7L,0UL,0x12DBL};/* VOLATILE GLOBAL l_720 */
                    struct S0 l_721[6][1][2] = {{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}},{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}},{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}},{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}},{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}},{{{0x55L,0xC8AE8A65L,-4L},{0x55L,0xC8AE8A65L,-4L}}}};
                    int i, j, k;
                    if ((l_708 |= ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))((-1L), 0x425EA4C241A74915L))))))).lo , l_707[1][0]) , 2L)))
                    { /* block id: 311 */
                        uint32_t l_709 = 4294967295UL;
                        int64_t l_710 = (-1L);
                        l_710 |= l_709;
                    }
                    else
                    { /* block id: 313 */
                        uint16_t l_711 = 0x2945L;
                        uint8_t l_712 = 252UL;
                        uint32_t l_713 = 0xFFECF021L;
                        l_712 &= l_711;
                        l_713--;
                    }
                    l_717++;
                    l_721[3][0][0] = l_720;
                    unsigned int result = 0;
                    int l_707_i0, l_707_i1;
                    for (l_707_i0 = 0; l_707_i0 < 3; l_707_i0++) {
                        for (l_707_i1 = 0; l_707_i1 < 6; l_707_i1++) {
                            result += l_707[l_707_i0][l_707_i1].f0;
                            result += l_707[l_707_i0][l_707_i1].f1;
                            result += l_707[l_707_i0][l_707_i1].f2;
                        }
                    }
                    result += l_708;
                    int l_716_i0, l_716_i1, l_716_i2;
                    for (l_716_i0 = 0; l_716_i0 < 1; l_716_i0++) {
                        for (l_716_i1 = 0; l_716_i1 < 7; l_716_i1++) {
                            for (l_716_i2 = 0; l_716_i2 < 2; l_716_i2++) {
                                result += l_716[l_716_i0][l_716_i1][l_716_i2];
                            }
                        }
                    }
                    result += l_717;
                    result += l_720.f0;
                    result += l_720.f1;
                    result += l_720.f2;
                    int l_721_i0, l_721_i1, l_721_i2;
                    for (l_721_i0 = 0; l_721_i0 < 6; l_721_i0++) {
                        for (l_721_i1 = 0; l_721_i1 < 1; l_721_i1++) {
                            for (l_721_i2 = 0; l_721_i2 < 2; l_721_i2++) {
                                result += l_721[l_721_i0][l_721_i1][l_721_i2].f0;
                                result += l_721[l_721_i0][l_721_i1][l_721_i2].f1;
                                result += l_721[l_721_i0][l_721_i1][l_721_i2].f2;
                            }
                        }
                    }
                    atomic_add(&p_847->g_special_values[23 * get_linear_group_id() + 20], result);
                }
                else
                { /* block id: 319 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 322 */
                int64_t ***l_724 = (void*)0;
                int64_t **l_726 = (void*)0;
                int64_t ***l_725[6] = {&l_726,&l_726,&l_726,&l_726,&l_726,&l_726};
                int32_t l_737 = (-1L);
                int64_t l_760 = 0x37D5FF30FAA32141L;
                int32_t l_787 = 0L;
                int32_t l_788 = 0x25C6F80AL;
                int32_t l_789 = 0x12BAD21EL;
                int32_t l_790 = 0L;
                int32_t l_793[5][6][8] = {{{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)}},{{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)}},{{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)}},{{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)}},{{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)},{0x3E6AA540L,(-1L),(-1L),0x736CCA29L,(-1L),0x736CCA29L,(-1L),(-1L)}}};
                int i, j, k;
                if ((l_737 = (p_20 <= (safe_mod_func_uint8_t_u_u((((l_727 = &l_475[3]) == l_728) && p_20), (safe_sub_func_uint8_t_u_u((!((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((*l_457) && (&p_847->g_279 != (p_847->g_736 = &p_847->g_279))), 0)) > (18446744073709551615UL && (+0x631FC61B84BD1334L))), FAKE_DIVERGE(p_847->group_2_offset, get_group_id(2), 10))) && p_20)), l_737)))))))
                { /* block id: 326 */
                    uint32_t l_738 = 0x5B0412BDL;
                    int32_t ***l_755[8] = {&p_847->g_344,&p_847->g_344,&p_847->g_344,&p_847->g_344,&p_847->g_344,&p_847->g_344,&p_847->g_344,&p_847->g_344};
                    uint16_t *l_756 = &l_684[0][6];
                    int16_t *l_757 = (void*)0;
                    int16_t *l_758 = (void*)0;
                    int i;
                    --l_738;
                    (*l_457) &= ((safe_mul_func_uint8_t_u_u(l_737, 255UL)) != (((p_847->g_384 ^= ((-1L) >= ((*l_472) = ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_20, ((*l_756) = (((*p_847->g_333) , (p_19 = func_46(((-3L) <= ((p_20 && (safe_add_func_int16_t_s_s(0L, ((safe_lshift_func_int16_t_s_u(p_20, GROUP_DIVERGE(1, 1))) > p_20)))) > p_20)), &p_847->g_345, p_20, (*l_460), (*p_19), p_847))) != &l_460)))), 4)), p_20)) <= p_847->g_493.f2)))) , (*l_460)) > p_847->g_464.f1));
                }
                else
                { /* block id: 333 */
                    VECTOR(int32_t, 8) l_759 = (VECTOR(int32_t, 8))(0x3A3474DDL, (VECTOR(int32_t, 4))(0x3A3474DDL, (VECTOR(int32_t, 2))(0x3A3474DDL, 0L), 0L), 0L, 0x3A3474DDL, 0L);
                    int8_t l_797 = (-7L);
                    int32_t l_799 = 0L;
                    VECTOR(uint16_t, 8) l_816 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL);
                    int16_t *l_838[7][3] = {{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2},{&p_847->g_464.f2,(void*)0,&p_847->g_464.f2}};
                    int i, j;
                    l_761[0][0][0]++;
                    if ((safe_lshift_func_uint8_t_u_u((p_847->g_69 = (safe_rshift_func_uint16_t_u_u(p_847->g_433, 10))), 3)))
                    { /* block id: 336 */
                        int32_t ***l_771 = &p_847->g_344;
                        int32_t ****l_770[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_770[i] = &l_771;
                        (*l_460) = (safe_sub_func_int32_t_s_s(((l_772 = &p_847->g_344) == l_773), (safe_mul_func_int16_t_s_s(p_20, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(l_776.s3121)).zzywyyxx, ((VECTOR(uint16_t, 2))(p_847->g_777.s04)).xyyyyxyy))).s3772535027260246, ((VECTOR(uint16_t, 4))(0xEF29L, (!0x3429L), 0UL, 0xBFDAL)).zwzxyyxywxzywxwy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(p_847->g_778.s6665)).zywyxwxz, ((VECTOR(uint16_t, 16))(p_847->g_779.xwyyyzzxwyywxwyy)).hi))).s16)).xxyy)), ((VECTOR(uint16_t, 4))(p_847->g_780.wwxw)))).even)).yywwwyyxyywzzyzy))))).sef15, (uint16_t)((l_760 || (+((void*)0 == &p_847->g_69))) && ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0xA4E175ECL, 4294967295UL, 9UL, 0x9C695342L)))).w)))).odd, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_781.s5237)), ((VECTOR(uint16_t, 4))(GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 0xEF5DL)))).s4456461166737572)).sf7, (uint16_t)l_737, (uint16_t)(*l_460))))))).hi))));
                        (*l_552) = (*p_847->g_508);
                    }
                    else
                    { /* block id: 340 */
                        uint16_t l_782 = 0xCCACL;
                        if ((*p_847->g_453))
                            break;
                        --l_782;
                        if (l_759.s3)
                            break;
                    }
                    ++l_805;
                    (*l_460) = (safe_lshift_func_uint8_t_u_s((0x4143L <= (p_847->g_464.f2 = ((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(65531UL, ((VECTOR(uint16_t, 2))(l_816.s41)), 0x2C74L)), 1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_817.wx)))), 0x1B4EL, ((VECTOR(uint16_t, 4))(p_847->g_818.yxxy)).z, (safe_mod_func_uint64_t_u_u(((((*p_847->g_736) = ((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_847->g_825.s6514533221505723)).s76)).hi, 9L)), 1)) , (*l_457))) == 0xFEF62498L) , ((((((*l_675) = ((safe_lshift_func_int8_t_s_s((p_847->g_828 , (((void*)0 == &l_790) , ((VECTOR(int8_t, 8))(0x78L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x66L, 6L)), ((p_847->g_829 , ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(18446744073709551612UL, p_847->g_777.s0)) <= (*l_460)), p_20)) , p_847->g_834)) != (void*)0), 0L, ((VECTOR(int8_t, 2))(0x50L)), 5L, 0x34L)).s7420736645377273)).even)).s6, l_737, p_20, 0x1BL, l_759.s5, (-4L), 0x4DL)).s6)), l_759.s1)) | p_20)) | p_20) & 4294967287UL) > p_20) == p_847->g_9)), p_847->g_818.y)), 0UL, ((VECTOR(uint16_t, 4))(65535UL)), 9UL)).sd, 6)), p_20)), l_759.s3)) < l_816.s7))), p_20));
                }
            }
        }
    }
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_345 p_847->g_11 p_847->g_244 p_847->g_344
 * writes: p_847->g_244 p_847->g_345
 */
int32_t ** func_21(int32_t * p_22, int32_t  p_23, int64_t  p_24, struct S3 * p_847)
{ /* block id: 197 */
    uint16_t l_436 = 0x5281L;
    int16_t *l_443 = &p_847->g_384;
    union U2 l_444 = {1UL};
    int32_t *l_451 = (void*)0;
    l_436 ^= (*p_847->g_345);
    p_847->g_244 |= ((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_444 , 2UL), (((*p_22) >= 0x527E2CB7L) ^ ((((((safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(4L, ((safe_mul_func_uint16_t_u_u(l_444.f0, l_436)) && p_847->g_11[1][6][5]))) , 0x77682C088D801FD1L), p_23)) , l_436) >= 0x2270L) <= 0x61L) , (void*)0) != &l_444)))), p_24)) | GROUP_DIVERGE(0, 1)) < 9L) >= l_444.f0);
    (*p_847->g_344) = l_451;
    l_451 = (*p_847->g_344);
    return &p_847->g_345;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_4
 * writes:
 */
uint32_t  func_32(uint32_t  p_33, uint64_t  p_34, int32_t ** p_35, uint32_t  p_36, struct S3 * p_847)
{ /* block id: 193 */
    int32_t *l_427 = &p_847->g_302[7][0];
    int32_t *l_428[10] = {&p_847->g_11[0][6][0],&p_847->g_11[1][5][6],&p_847->g_11[0][6][0],&p_847->g_11[0][6][0],&p_847->g_11[1][5][6],&p_847->g_11[0][6][0],&p_847->g_11[0][6][0],&p_847->g_11[1][5][6],&p_847->g_11[0][6][0],&p_847->g_11[0][6][0]};
    int16_t l_429 = 0x0833L;
    uint32_t l_430[9][1][5] = {{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}},{{0x88B10890L,4294967295UL,0UL,0UL,0x84DF82A0L}}};
    int i, j, k;
    l_430[8][0][3]--;
    return p_847->g_4.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_11 p_847->g_40 p_847->g_13 p_847->g_69 p_847->g_82 p_847->g_4 p_847->g_252 p_847->g_264 p_847->g_265 p_847->g_266 p_847->g_277 p_847->g_279 p_847->g_244 p_847->g_9 p_847->g_302 p_847->g_313 p_847->g_331 p_847->g_333 p_847->g_337 p_847->l_comm_values p_847->g_343 p_847->g_344 p_847->g_comm_values p_847->g_345 p_847->g_273 p_847->g_375 p_847->g_405 p_847->g_343.f0 p_847->g_425
 * writes: p_847->g_40 p_847->g_69 p_847->g_13 p_847->g_86 p_847->g_244 p_847->g_252 p_847->g_67 p_847->g_264 p_847->g_267 p_847->g_277 p_847->g_279 p_847->l_comm_values p_847->g_302 p_847->g_337 p_847->g_345 p_847->g_384 p_847->g_331 p_847->g_9 p_847->g_343.f0 p_847->g_425
 */
uint16_t  func_37(int32_t ** p_38, struct S3 * p_847)
{ /* block id: 9 */
    int32_t *l_39 = &p_847->g_40;
    int32_t l_364 = 1L;
    int16_t l_423 = (-1L);
    int32_t *l_424 = (void*)0;
    (*l_39) |= (**p_38);
    p_847->g_425.s7 &= (func_41(func_46(((*p_847->g_13) , (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((func_55((*l_39), p_847) , (*l_39)))), p_847->g_331.s1))), p_847->g_344, p_847->g_comm_values[p_847->tid], p_847->g_11[0][0][0], (*p_38), p_847), l_39, l_364, (*p_38), p_847) == l_423);
    (*l_39) ^= (*p_847->g_345);
    (*l_39) |= (0x5821AED0L | (safe_unary_minus_func_uint8_t_u(GROUP_DIVERGE(0, 1))));
    return (*l_39);
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_252 p_847->g_69 p_847->g_375 p_847->g_302 p_847->g_337 p_847->g_40 p_847->g_9 p_847->g_345 p_847->g_344 p_847->g_405 p_847->g_343.f0 p_847->g_11 p_847->g_277 p_847->g_273 p_847->g_313
 * writes: p_847->g_252 p_847->g_69 p_847->g_40 p_847->g_384 p_847->g_331 p_847->g_9 p_847->g_345 p_847->g_343.f0 p_847->g_67 p_847->g_277
 */
int16_t  func_41(int32_t ** p_42, int32_t * p_43, uint16_t  p_44, int32_t * p_45, struct S3 * p_847)
{ /* block id: 156 */
    union U1 *l_373 = &p_847->g_374;
    int16_t *l_383 = &p_847->g_384;
    int32_t l_385 = 0x4E34533AL;
    int32_t *l_396 = (void*)0;
    int32_t *l_397 = &l_385;
    int32_t *l_398 = &p_847->g_40;
    int32_t *l_399[1][6];
    int32_t l_400 = 0x10F0B258L;
    int16_t l_401 = (-1L);
    uint16_t l_402 = 0x0506L;
    VECTOR(int16_t, 16) l_406 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x4810L), 0x4810L), 0x4810L, (-9L), 0x4810L, (VECTOR(int16_t, 2))((-9L), 0x4810L), (VECTOR(int16_t, 2))((-9L), 0x4810L), (-9L), 0x4810L, (-9L), 0x4810L);
    VECTOR(int16_t, 2) l_407 = (VECTOR(int16_t, 2))(3L, 2L);
    uint8_t *l_410 = &p_847->g_343.f0;
    int64_t l_413 = 0x51CA03301A813939L;
    int8_t *l_414 = &p_847->g_67;
    int8_t *l_415 = &p_847->g_277;
    int8_t l_422 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_399[i][j] = &p_847->g_302[7][0];
    }
    for (p_847->g_252 = 0; (p_847->g_252 >= 1); p_847->g_252++)
    { /* block id: 159 */
        uint8_t *l_367 = (void*)0;
        int32_t l_368 = 0x27ADA7AEL;
        uint32_t l_382 = 1UL;
        int32_t *l_386 = &l_368;
        int32_t *l_387 = (void*)0;
        int32_t *l_388[3];
        int i;
        for (i = 0; i < 3; i++)
            l_388[i] = (void*)0;
        p_847->g_331.s5 = (+(((--p_847->g_69) >= (safe_rshift_func_int16_t_s_u(((*l_383) = (((((*l_386) = ((*p_43) &= (((void*)0 != l_373) < (((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(5L, ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(p_847->g_375.sebfe72a0bcbd6955)).sb3, (int64_t)(safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(p_847->g_302[3][6], (((safe_lshift_func_int16_t_s_s(p_847->g_337, p_847->g_302[7][0])) != (((-1L) > l_368) ^ ((l_382 & (l_383 == (void*)0)) != 65534UL))) & l_385))), p_44))))), 0x6C433ED1D1D9E5E4L)).xyyzyxxy, ((VECTOR(int64_t, 8))(0x4BC052F4E06555FDL))))).s5 && FAKE_DIVERGE(p_847->global_2_offset, get_global_id(2), 10))))) ^ GROUP_DIVERGE(1, 1)) >= 0x6EC9403019182367L) != p_44)), 12))) ^ p_44));
        for (p_847->g_40 = 0; (p_847->g_40 != 23); p_847->g_40 = safe_add_func_uint16_t_u_u(p_847->g_40, 7))
        { /* block id: 167 */
            for (p_44 = 0; (p_44 != 42); p_44++)
            { /* block id: 170 */
                VECTOR(int32_t, 8) l_395 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
                int i;
                for (p_847->g_9 = 0; (p_847->g_9 > 4); p_847->g_9 = safe_add_func_uint16_t_u_u(p_847->g_9, 7))
                { /* block id: 173 */
                    (*l_386) &= 0L;
                    (*l_386) &= ((VECTOR(int32_t, 2))(l_395.s64)).hi;
                    (*p_847->g_344) = (*p_42);
                }
            }
        }
    }
    l_402--;
    (*l_397) = (((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(p_847->g_405.s3617164256760351)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_406.scbc3e00e01059da6)).odd)).s0134374765202066, ((VECTOR(int16_t, 16))(l_407.yxxyxyyyyyxyxxyy))))).sc | ((safe_add_func_uint8_t_u_u((((0UL <= p_44) < GROUP_DIVERGE(0, 1)) & (((++(*l_410)) , &p_847->g_69) == ((((0xF3674490L != (**p_42)) == (~((*l_398) = ((*l_415) |= ((*l_414) = l_413))))) >= (safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(0x21L, (((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1E90L, 0x175DL)))).hi < p_847->g_273.s2) || ((l_422 = (p_44 >= ((-7L) >= p_847->g_313.s2))) >= p_44)) > (*p_45)) & (-1L)) >= GROUP_DIVERGE(2, 1)), 0x72L, 6L)).zzwxwxyz, ((VECTOR(int8_t, 8))(0x67L))))).s6 , 0L), p_44)) >= p_44), 0UL))) , l_415))), FAKE_DIVERGE(p_847->local_1_offset, get_local_id(1), 10))) , p_44));
    return p_847->g_375.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_345 p_847->g_344 p_847->g_343 p_847->g_331 p_847->g_279 p_847->g_313 p_847->g_273 p_847->g_302
 * writes: p_847->g_345 p_847->g_302
 */
int32_t ** func_46(uint8_t  p_47, int32_t ** p_48, int64_t  p_49, uint64_t  p_50, int32_t * p_51, struct S3 * p_847)
{ /* block id: 149 */
    union U2 *l_346 = (void*)0;
    union U2 **l_347 = &l_346;
    int32_t l_348 = 1L;
    union U1 *l_349 = &p_847->g_350;
    uint32_t *l_359 = (void*)0;
    int32_t l_362 = 0L;
    int32_t *l_363 = &p_847->g_302[7][0];
    (*p_847->g_344) = (*p_48);
    (*l_347) = l_346;
    (*l_363) &= (l_362 &= (((l_348 != ((p_847->g_343 , ((l_349 != (void*)0) ^ (((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((0x4DL & l_348), (l_359 != l_359))), GROUP_DIVERGE(1, 1))), ((((safe_rshift_func_int16_t_s_s(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x28D8FB97L, 0x005E1196L, (-4L), ((&p_847->g_337 == &p_847->g_337) , l_348), (-10L), p_847->g_331.s0, 0x3C78678FL, 0x243ECDC7L)).even)).w , p_50) ^ l_348), p_49)) , (void*)0) == &p_847->g_86) > p_847->g_279))), p_49)) > p_847->g_313.s0) != p_847->g_273.s6))) <= p_50)) ^ 0x77557BE8L) & p_50));
    l_363 = &l_362;
    return &p_847->g_345;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_69 p_847->g_40 p_847->g_82 p_847->g_4 p_847->g_11 p_847->g_252 p_847->g_264 p_847->g_265 p_847->g_266 p_847->g_277 p_847->g_279 p_847->g_244 p_847->g_9 p_847->g_302 p_847->g_313 p_847->g_331 p_847->g_333 p_847->g_337 p_847->l_comm_values p_847->g_343
 * writes: p_847->g_69 p_847->g_13 p_847->g_86 p_847->g_244 p_847->g_252 p_847->g_67 p_847->g_264 p_847->g_267 p_847->g_277 p_847->g_279 p_847->l_comm_values p_847->g_302 p_847->g_40 p_847->g_337
 */
union U2  func_55(int64_t  p_56, struct S3 * p_847)
{ /* block id: 11 */
    VECTOR(int32_t, 16) l_61 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    VECTOR(int8_t, 16) l_62 = (VECTOR(int8_t, 16))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x39L), 0x39L), 0x39L, 0x71L, 0x39L, (VECTOR(int8_t, 2))(0x71L, 0x39L), (VECTOR(int8_t, 2))(0x71L, 0x39L), 0x71L, 0x39L, 0x71L, 0x39L);
    int8_t *l_63 = (void*)0;
    int8_t *l_64 = (void*)0;
    int8_t *l_65[3];
    int32_t l_66 = 0x358ECE9EL;
    uint8_t *l_68 = &p_847->g_69;
    VECTOR(uint32_t, 16) l_83 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL, (VECTOR(uint32_t, 2))(5UL, 0UL), (VECTOR(uint32_t, 2))(5UL, 0UL), 5UL, 0UL, 5UL, 0UL);
    int32_t **l_84 = &p_847->g_13;
    uint64_t *l_85 = &p_847->g_86;
    union U2 l_100 = {0xCFL};
    int32_t *l_299 = (void*)0;
    int32_t *l_300 = &p_847->g_244;
    int32_t *l_301 = &p_847->g_302[7][0];
    int32_t *l_303[5][8] = {{&p_847->g_11[1][2][2],&p_847->g_11[1][2][2],&p_847->g_11[1][5][6],&p_847->g_40,(void*)0,&p_847->g_40,&p_847->g_11[1][5][6],&p_847->g_11[1][2][2]},{&p_847->g_11[1][2][2],&p_847->g_11[1][2][2],&p_847->g_11[1][5][6],&p_847->g_40,(void*)0,&p_847->g_40,&p_847->g_11[1][5][6],&p_847->g_11[1][2][2]},{&p_847->g_11[1][2][2],&p_847->g_11[1][2][2],&p_847->g_11[1][5][6],&p_847->g_40,(void*)0,&p_847->g_40,&p_847->g_11[1][5][6],&p_847->g_11[1][2][2]},{&p_847->g_11[1][2][2],&p_847->g_11[1][2][2],&p_847->g_11[1][5][6],&p_847->g_40,(void*)0,&p_847->g_40,&p_847->g_11[1][5][6],&p_847->g_11[1][2][2]},{&p_847->g_11[1][2][2],&p_847->g_11[1][2][2],&p_847->g_11[1][5][6],&p_847->g_40,(void*)0,&p_847->g_40,&p_847->g_11[1][5][6],&p_847->g_11[1][2][2]}};
    int32_t l_304 = 0x155E8402L;
    int32_t l_305 = (-8L);
    uint16_t l_306[9];
    VECTOR(int16_t, 8) l_332 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x21BCL), 0x21BCL), 0x21BCL, (-1L), 0x21BCL);
    int i, j;
    for (i = 0; i < 3; i++)
        l_65[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_306[i] = 65526UL;
    (*l_301) &= ((*l_300) = (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((l_66 &= (((VECTOR(int32_t, 2))(l_61.sdf)).lo , ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(l_62.s8c3d34e0bb69233c)).s9e, ((VECTOR(int8_t, 2))((-1L), 0x46L))))).odd)) >= (l_62.s2 >= ((*l_68)++))), (safe_div_func_uint64_t_u_u(0xCD553B787D1A38ADL, (safe_div_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(((&p_847->g_67 != (void*)0) | ((safe_mod_func_uint64_t_u_u(p_847->g_40, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(p_847->g_82.yyxyyyyx)).s16, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(l_83.sa9e7339a)).s2005100432442567, ((VECTOR(uint32_t, 2))(4294967294UL, 0x26164A3CL)).xxyyxyxyxxyyyyxy))).odd)).even)).even))).hi)) , ((*l_85) = (!(((*l_84) = (void*)0) != &p_847->g_11[1][5][6]))))), p_847->g_4.s3)) && GROUP_DIVERGE(2, 1)) ^ (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(func_93((safe_lshift_func_uint16_t_u_u(0xD9B2L, GROUP_DIVERGE(2, 1))), p_847->g_4.s7, p_56, l_100, p_847), GROUP_DIVERGE(1, 1))), 0x1B9E9F541C69828AL)), p_56))), 1UL)))))) <= p_56), FAKE_DIVERGE(p_847->group_0_offset, get_group_id(0), 10))));
    l_306[4]++;
    for (p_847->g_40 = (-8); (p_847->g_40 >= 6); p_847->g_40++)
    { /* block id: 139 */
        VECTOR(int8_t, 2) l_316 = (VECTOR(int8_t, 2))(0x2DL, (-2L));
        uint32_t *l_325 = (void*)0;
        uint32_t *l_326 = &p_847->g_279;
        VECTOR(int16_t, 16) l_327 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x0408L), 0x0408L), 0x0408L, 8L, 0x0408L, (VECTOR(int16_t, 2))(8L, 0x0408L), (VECTOR(int16_t, 2))(8L, 0x0408L), 8L, 0x0408L, 8L, 0x0408L);
        VECTOR(uint8_t, 8) l_328 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        int16_t *l_335 = (void*)0;
        int16_t *l_336 = (void*)0;
        int16_t *l_338 = (void*)0;
        int32_t l_339 = (-5L);
        uint8_t l_340 = 0xD3L;
        int32_t l_341 = (-1L);
        uint32_t l_342 = 0x601CC68FL;
        int i;
        (*l_300) |= ((((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_847->g_313.s06)), ((((l_341 ^= ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_316.yy)).hi, (safe_div_func_int8_t_s_s(((l_339 = ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((GROUP_DIVERGE(2, 1) < (((*l_326) = p_56) & 0UL)), ((VECTOR(int16_t, 8))(p_847->g_11[1][6][2], ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_327.s63df6af8)).s1, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(1L, 4L)).xxyxxyyyxyxxyyxx)).even, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_328.s44201545)).even)).xyxzwwwz))).s20)), 0L)), 0x0551L, 0x4FCDL, 0L)).s1)), (0UL && (safe_lshift_func_int16_t_s_s((((*l_301) = p_56) > ((VECTOR(int32_t, 2))(p_847->g_331.s21)).even), ((void*)0 == &p_847->g_13)))))), (~((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6E7AL, 0x6916L)), (-1L), 0x0A81L)), ((VECTOR(int16_t, 2))(l_332.s00)), (p_847->g_337 = (((void*)0 == p_847->g_333) != 0x2AL)), l_328.s5, 0x316EL, ((VECTOR(int16_t, 4))(0x5688L)), p_847->g_337, 7L, 0x483EL)).s4714, ((VECTOR(int16_t, 4))(0x07E6L)), ((VECTOR(int16_t, 4))((-10L)))))).z))) < l_328.s7)) , p_56), p_56)))) < l_340)) & p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 80))]) , l_328.s5) , p_56), 0x47C0D00FL, 4294967295UL, ((VECTOR(uint32_t, 2))(0x648C1168L)), 4294967295UL)).s6, p_847->g_40)) , (void*)0) == (void*)0) & 4294967294UL);
        if (l_342)
            continue;
    }
    return p_847->g_343;
}


/* ------------------------------------------ */
/* 
 * reads : p_847->g_11 p_847->g_252 p_847->g_264 p_847->g_265 p_847->g_266 p_847->g_277 p_847->g_82 p_847->g_279 p_847->g_244 p_847->g_9
 * writes: p_847->g_244 p_847->g_252 p_847->g_67 p_847->g_264 p_847->g_267 p_847->g_277 p_847->g_279 p_847->l_comm_values
 */
uint16_t  func_93(uint64_t  p_94, int32_t  p_95, uint32_t  p_96, union U2  p_97, struct S3 * p_847)
{ /* block id: 16 */
    int8_t *l_246 = &p_847->g_67;
    int8_t **l_245 = &l_246;
    VECTOR(int16_t, 4) l_281 = (VECTOR(int16_t, 4))(0x7809L, (VECTOR(int16_t, 2))(0x7809L, 0x1975L), 0x1975L);
    VECTOR(uint16_t, 4) l_287 = (VECTOR(uint16_t, 4))(0xE2F4L, (VECTOR(uint16_t, 2))(0xE2F4L, 8UL), 8UL);
    VECTOR(uint8_t, 4) l_293 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL);
    int i, j;
    if ((atomic_inc(&p_847->l_atomic_input[3]) == 4))
    { /* block id: 18 */
        int32_t l_101 = 1L;
        union U2 l_140[1] = {{0x70L}};
        union U2 l_141 = {0x1AL};
        uint64_t l_142 = 18446744073709551614UL;
        int64_t l_143 = 0x55932648B246ADE1L;
        uint32_t l_144 = 0x32A718D1L;
        uint8_t l_145 = 1UL;
        VECTOR(int32_t, 8) l_146 = (VECTOR(int32_t, 8))(0x334B0AA6L, (VECTOR(int32_t, 4))(0x334B0AA6L, (VECTOR(int32_t, 2))(0x334B0AA6L, (-6L)), (-6L)), (-6L), 0x334B0AA6L, (-6L));
        VECTOR(int32_t, 16) l_147 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L, (VECTOR(int32_t, 2))((-1L), 8L), (VECTOR(int32_t, 2))((-1L), 8L), (-1L), 8L, (-1L), 8L);
        int32_t l_148 = 6L;
        VECTOR(int16_t, 4) l_149 = (VECTOR(int16_t, 4))(0x3DA2L, (VECTOR(int16_t, 2))(0x3DA2L, (-1L)), (-1L));
        int32_t l_150[5][5][5] = {{{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL}},{{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL}},{{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL}},{{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL}},{{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL},{0x7190DC9CL,0x4F9D2C0AL,0x5AD93155L,2L,0x362D161AL}}};
        uint32_t l_151[8][2][1];
        uint64_t l_154 = 0x55F038DD45185051L;
        VECTOR(uint16_t, 16) l_155 = (VECTOR(uint16_t, 16))(0x009EL, (VECTOR(uint16_t, 4))(0x009EL, (VECTOR(uint16_t, 2))(0x009EL, 1UL), 1UL), 1UL, 0x009EL, 1UL, (VECTOR(uint16_t, 2))(0x009EL, 1UL), (VECTOR(uint16_t, 2))(0x009EL, 1UL), 0x009EL, 1UL, 0x009EL, 1UL);
        VECTOR(uint16_t, 4) l_156 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCCC6L), 0xCCC6L);
        uint32_t l_157 = 0x02025CEFL;
        union U2 l_158 = {255UL};
        union U2 l_159 = {1UL};
        VECTOR(uint16_t, 16) l_160 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x7DA9L), 0x7DA9L), 0x7DA9L, 65535UL, 0x7DA9L, (VECTOR(uint16_t, 2))(65535UL, 0x7DA9L), (VECTOR(uint16_t, 2))(65535UL, 0x7DA9L), 65535UL, 0x7DA9L, 65535UL, 0x7DA9L);
        int32_t l_161 = 9L;
        int32_t *l_238 = &l_148;
        uint64_t l_239 = 18446744073709551609UL;
        uint64_t l_240 = 0x49A5E17958A9C512L;
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_151[i][j][k] = 0x7F26B115L;
            }
        }
        for (l_101 = (-6); (l_101 <= (-28)); l_101 = safe_sub_func_uint16_t_u_u(l_101, 2))
        { /* block id: 21 */
            uint8_t l_104 = 254UL;
            uint32_t l_105 = 0xD429592AL;
            VECTOR(int32_t, 16) l_106 = (VECTOR(int32_t, 16))(0x567D2F72L, (VECTOR(int32_t, 4))(0x567D2F72L, (VECTOR(int32_t, 2))(0x567D2F72L, 0x2B6CB16CL), 0x2B6CB16CL), 0x2B6CB16CL, 0x567D2F72L, 0x2B6CB16CL, (VECTOR(int32_t, 2))(0x567D2F72L, 0x2B6CB16CL), (VECTOR(int32_t, 2))(0x567D2F72L, 0x2B6CB16CL), 0x567D2F72L, 0x2B6CB16CL, 0x567D2F72L, 0x2B6CB16CL);
            VECTOR(int32_t, 8) l_107 = (VECTOR(int32_t, 8))(0x125C1F9AL, (VECTOR(int32_t, 4))(0x125C1F9AL, (VECTOR(int32_t, 2))(0x125C1F9AL, 0L), 0L), 0L, 0x125C1F9AL, 0L);
            VECTOR(int16_t, 4) l_108 = (VECTOR(int16_t, 4))(0x1B23L, (VECTOR(int16_t, 2))(0x1B23L, (-1L)), (-1L));
            VECTOR(int8_t, 8) l_109 = (VECTOR(int8_t, 8))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x3FL), 0x3FL), 0x3FL, 0x41L, 0x3FL);
            VECTOR(uint8_t, 2) l_110 = (VECTOR(uint8_t, 2))(251UL, 3UL);
            VECTOR(uint16_t, 16) l_111 = (VECTOR(uint16_t, 16))(0xFCEDL, (VECTOR(uint16_t, 4))(0xFCEDL, (VECTOR(uint16_t, 2))(0xFCEDL, 0x61A1L), 0x61A1L), 0x61A1L, 0xFCEDL, 0x61A1L, (VECTOR(uint16_t, 2))(0xFCEDL, 0x61A1L), (VECTOR(uint16_t, 2))(0xFCEDL, 0x61A1L), 0xFCEDL, 0x61A1L, 0xFCEDL, 0x61A1L);
            VECTOR(int32_t, 16) l_112 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x2875F205L), 0x2875F205L), 0x2875F205L, 6L, 0x2875F205L, (VECTOR(int32_t, 2))(6L, 0x2875F205L), (VECTOR(int32_t, 2))(6L, 0x2875F205L), 6L, 0x2875F205L, 6L, 0x2875F205L);
            VECTOR(int32_t, 4) l_113 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-5L)), (-5L));
            VECTOR(int32_t, 8) l_114 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
            VECTOR(int32_t, 2) l_115 = (VECTOR(int32_t, 2))((-1L), (-1L));
            VECTOR(int32_t, 8) l_116 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x1D7DECAEL), 0x1D7DECAEL), 0x1D7DECAEL, (-3L), 0x1D7DECAEL);
            VECTOR(int32_t, 4) l_117 = (VECTOR(int32_t, 4))(0x1F827A0CL, (VECTOR(int32_t, 2))(0x1F827A0CL, 0x299528C7L), 0x299528C7L);
            VECTOR(int32_t, 8) l_118 = (VECTOR(int32_t, 8))(0x4353B009L, (VECTOR(int32_t, 4))(0x4353B009L, (VECTOR(int32_t, 2))(0x4353B009L, 1L), 1L), 1L, 0x4353B009L, 1L);
            VECTOR(int32_t, 4) l_119 = (VECTOR(int32_t, 4))(0x799B685FL, (VECTOR(int32_t, 2))(0x799B685FL, 0x158D97F9L), 0x158D97F9L);
            VECTOR(int32_t, 2) l_120 = (VECTOR(int32_t, 2))(2L, 0x1694381BL);
            VECTOR(int32_t, 16) l_121 = (VECTOR(int32_t, 16))(0x43A5C4F2L, (VECTOR(int32_t, 4))(0x43A5C4F2L, (VECTOR(int32_t, 2))(0x43A5C4F2L, 0x047AAFFFL), 0x047AAFFFL), 0x047AAFFFL, 0x43A5C4F2L, 0x047AAFFFL, (VECTOR(int32_t, 2))(0x43A5C4F2L, 0x047AAFFFL), (VECTOR(int32_t, 2))(0x43A5C4F2L, 0x047AAFFFL), 0x43A5C4F2L, 0x047AAFFFL, 0x43A5C4F2L, 0x047AAFFFL);
            VECTOR(int32_t, 8) l_122 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x521B86E8L), 0x521B86E8L), 0x521B86E8L, 5L, 0x521B86E8L);
            VECTOR(uint16_t, 2) l_123 = (VECTOR(uint16_t, 2))(0x6335L, 1UL);
            uint8_t l_124 = 255UL;
            int32_t l_125 = 0x36DC0836L;
            VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))((-1L), 0x1996AC18L);
            VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
            uint32_t l_128[1][7][6] = {{{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL},{0xA10622CDL,0xA10622CDL,0xB06CC583L,0xC4C41C8DL,8UL,0xC4C41C8DL}}};
            VECTOR(int64_t, 8) l_129 = (VECTOR(int64_t, 8))(0x427F6C6AD0378701L, (VECTOR(int64_t, 4))(0x427F6C6AD0378701L, (VECTOR(int64_t, 2))(0x427F6C6AD0378701L, (-4L)), (-4L)), (-4L), 0x427F6C6AD0378701L, (-4L));
            VECTOR(int32_t, 8) l_130 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5343E278L), 0x5343E278L), 0x5343E278L, 1L, 0x5343E278L);
            VECTOR(int32_t, 8) l_131 = (VECTOR(int32_t, 8))(0x38B5D02CL, (VECTOR(int32_t, 4))(0x38B5D02CL, (VECTOR(int32_t, 2))(0x38B5D02CL, 4L), 4L), 4L, 0x38B5D02CL, 4L);
            VECTOR(int32_t, 16) l_132 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6FE41880L), 0x6FE41880L), 0x6FE41880L, (-1L), 0x6FE41880L, (VECTOR(int32_t, 2))((-1L), 0x6FE41880L), (VECTOR(int32_t, 2))((-1L), 0x6FE41880L), (-1L), 0x6FE41880L, (-1L), 0x6FE41880L);
            VECTOR(int16_t, 2) l_133 = (VECTOR(int16_t, 2))(0x4EE2L, (-1L));
            VECTOR(uint16_t, 4) l_134 = (VECTOR(uint16_t, 4))(0xDDA3L, (VECTOR(uint16_t, 2))(0xDDA3L, 0UL), 0UL);
            VECTOR(uint16_t, 2) l_135 = (VECTOR(uint16_t, 2))(2UL, 7UL);
            uint64_t l_136[10][8][3] = {{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}},{{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL},{6UL,0xC174B8878B811774L,0xA793FF94C2ECEAEFL}}};
            uint8_t l_137 = 255UL;
            uint32_t l_138[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            int16_t l_139 = (-1L);
            int i, j, k;
            l_105 ^= (FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10) , l_104);
            l_138[5] &= ((VECTOR(int32_t, 8))(1L, (-3L), 0x6FA44EC1L, ((VECTOR(int32_t, 2))(l_106.s62)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_107.s05242234)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_108.xxwzwxywyyywzyyw)).sfd74, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_109.s56)))).xyyx, ((VECTOR(uint8_t, 2))(l_110.xy)).xxxx)))))).ywywzywx, ((VECTOR(uint16_t, 4))(l_111.se5f5)).zxyzyxxx))).s6552607762700130)).sad39, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_112.sd52aeb3c)).s2, ((VECTOR(int32_t, 2))(l_113.zy)), ((VECTOR(int32_t, 2))(0x17392D2AL, (-1L))), 0L, 0x565FABB5L, 1L)).odd)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_114.s5444677537205002)).sea21, ((VECTOR(int32_t, 2))(l_115.xy)).xxxx))))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_116.s00)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_117.ywwx)), 0L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_118.s5013)).odd)).yyyxxyxx, ((VECTOR(int32_t, 16))(l_119.zyzyxwyxxxxzzyzx)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_120.xx)).xxyyyxyyyxxyxxxy)).s12)).yyyy)).yxyxyywzxzwywwyy)))).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-4L), 8L)).xxxxyyyyxxyyxyyx)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), 1L, 0x2FAF418CL, 0x3B82127FL)))).yxwzyxzw)))))))).s41, ((VECTOR(int32_t, 2))(l_121.s4f))))), 0x61B5AB6CL)).s24))))).xxxx)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(l_122.s6143445541172062)).odd, (int32_t)(((VECTOR(uint16_t, 4))(l_123.xxyx)).w , (l_124 , (l_125 , (-2L)))), (int32_t)0x44CDA38EL))).odd))).hi, (int32_t)0x2BCF927AL, (int32_t)0x46DEB764L))).yxyyyxxy)).odd))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x6927BAF6L, 0x35B974B4L, ((VECTOR(int32_t, 4))(l_126.yxxx)), 0x0B9DA256L, 0x50C8DCDBL)).s57)), 5L, 0x7C78F562L, 4L, ((VECTOR(int32_t, 8))(l_127.wwxxyywy)).s6, (l_129.s5 = l_128[0][4][2]), ((VECTOR(int32_t, 2))(l_130.s72)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_131.s6251)).wxywxyzz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(l_132.sd0cb5f59df16ffca)), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(l_133.xy)).yxyxyyyyxxxyyyyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(1UL, 0x54C0L)), (uint16_t)((((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(2UL, ((VECTOR(uint16_t, 2))(l_134.yw)), 1UL)).yzxxyzzxxzxwyxxw)).s974f, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_135.xxyxyyyx)))).s26)).xxyxxxxx)).s42)).xxxx))).z , (l_136[8][7][0] , l_137)) , 0x62D1L)))), 0x3320L, 65535UL)).odd)).xxyyyyxxyyyxxxxy))), ((VECTOR(int32_t, 16))(1L)))))))).s30)).yyxyxxxx)), ((VECTOR(int32_t, 8))(3L))))).s21)), 9L)).s3a87)).wzwzwwzz, ((VECTOR(int32_t, 8))(0x63A1466AL))))).lo))).xyyxxzwzwyxwxwxw, (int32_t)0L, (int32_t)1L))).lo)).s65)), (-1L))).s0;
            l_139 ^= (-7L);
        }
        if ((l_161 &= (((l_141 = l_140[0]) , (l_143 = l_142)) , (l_144 , (l_145 , ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_146.s5505)).ywxxyxzy)))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_147.s03293bdcd76eb741)).sd2)).xyxyyxxyyxyxxyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(0x6E99L, 0L, 0L, 0L)), ((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_847->global_1_offset, get_global_id(1), 10), (l_148 , (l_154 = (l_151[2][0][0]++))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_155.sa5918f5825647fe7)).saa4a)).y, ((VECTOR(uint16_t, 2))(l_156.yy)).hi, 0x43CCL, ((l_157 , (l_159 = l_158)) , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_160.sc454e90a)).s0130122173025247)).s8), 0x8FEBL, 65535UL)).hi))).odd)).xxxyxxxyyyxyxxyy))).sdb)).xxxy))).z)))))
        { /* block id: 33 */
            int32_t l_162 = (-1L);
            VECTOR(int32_t, 16) l_192 = (VECTOR(int32_t, 16))(0x537C6442L, (VECTOR(int32_t, 4))(0x537C6442L, (VECTOR(int32_t, 2))(0x537C6442L, (-8L)), (-8L)), (-8L), 0x537C6442L, (-8L), (VECTOR(int32_t, 2))(0x537C6442L, (-8L)), (VECTOR(int32_t, 2))(0x537C6442L, (-8L)), 0x537C6442L, (-8L), 0x537C6442L, (-8L));
            int i;
            for (l_162 = 0; (l_162 == (-9)); l_162--)
            { /* block id: 36 */
                int32_t l_166 = 0x608B5220L;
                int32_t *l_165 = &l_166;
                int32_t *l_167 = &l_166;
                l_167 = (l_165 = (void*)0);
                for (l_166 = 0; (l_166 < 29); l_166 = safe_add_func_int16_t_s_s(l_166, 1))
                { /* block id: 41 */
                    int32_t l_170 = 0x48D88053L;
                    for (l_170 = 3; (l_170 >= (-19)); l_170 = safe_sub_func_uint16_t_u_u(l_170, 9))
                    { /* block id: 44 */
                        uint32_t l_173 = 1UL;
                        uint64_t l_174 = 1UL;
                        VECTOR(int32_t, 4) l_175 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1C58A5EDL), 0x1C58A5EDL);
                        VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(0x775F1AE5L, (VECTOR(int32_t, 2))(0x775F1AE5L, 6L), 6L);
                        int32_t l_177 = 0L;
                        uint16_t l_178 = 65527UL;
                        VECTOR(int32_t, 16) l_179 = (VECTOR(int32_t, 16))(0x489D1CEEL, (VECTOR(int32_t, 4))(0x489D1CEEL, (VECTOR(int32_t, 2))(0x489D1CEEL, 0x39E092BEL), 0x39E092BEL), 0x39E092BEL, 0x489D1CEEL, 0x39E092BEL, (VECTOR(int32_t, 2))(0x489D1CEEL, 0x39E092BEL), (VECTOR(int32_t, 2))(0x489D1CEEL, 0x39E092BEL), 0x489D1CEEL, 0x39E092BEL, 0x489D1CEEL, 0x39E092BEL);
                        VECTOR(int32_t, 16) l_180 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-10L)), (-10L)), (-10L), (-4L), (-10L), (VECTOR(int32_t, 2))((-4L), (-10L)), (VECTOR(int32_t, 2))((-4L), (-10L)), (-4L), (-10L), (-4L), (-10L));
                        VECTOR(int32_t, 8) l_181 = (VECTOR(int32_t, 8))(0x670D45C5L, (VECTOR(int32_t, 4))(0x670D45C5L, (VECTOR(int32_t, 2))(0x670D45C5L, 0L), 0L), 0L, 0x670D45C5L, 0L);
                        VECTOR(int16_t, 2) l_182 = (VECTOR(int16_t, 2))((-1L), 0x1C38L);
                        VECTOR(uint16_t, 16) l_183 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL);
                        int32_t l_184 = (-1L);
                        VECTOR(uint32_t, 4) l_185 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x8084E144L), 0x8084E144L);
                        uint8_t l_186 = 1UL;
                        union U1 l_188 = {0x322501F1L};/* VOLATILE GLOBAL l_188 */
                        union U1 *l_187 = &l_188;
                        union U1 l_190 = {0L};/* VOLATILE GLOBAL l_190 */
                        union U1 *l_189[2][3];
                        int32_t *l_191 = (void*)0;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_189[i][j] = &l_190;
                        }
                        l_147.s7 ^= (l_174 &= l_173);
                        l_189[0][2] = ((l_148 &= (l_147.sc = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_175.zyxwwyzw)), ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_176.xzxwywxzwzzzxzwz)).s2d)), l_177, l_178, 0x43470E8CL, 0x7B57AB89L, 0x25E6F1A9L, 0L)).s24)), 0L, 0x46D99D8FL, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_179.s84d8)).xzxwzyxw)).s37, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_180.se6b40d53)).s5272364563342713)).lo)).s6, 0L, 0L)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_181.s31741221)).s47)), 0x510EEAB1L, 0x7B878282L)).s2476224374500532)).sf3, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(l_182.yxxy)).xwxxywwxywxzzyzw, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_183.s8d6b9283)))).s4101546141244534))).s35))), 0x6F4F3722L))))).lo, ((VECTOR(int32_t, 4))((l_184 , (((VECTOR(uint32_t, 16))(l_185.zyxzwxwzwxxxyzyw)).se , 0x2C76D7A7L)), 0x44FC2E01L, (-7L), 0x23FFF8E1L))))).odd)).lo)) , ((l_186 = 0xC1735F61B82DB4B4L) , l_187));
                        l_165 = l_191;
                    }
                }
            }
            l_101 = ((VECTOR(int32_t, 4))(l_192.s0f7f)).x;
            for (l_192.s0 = 27; (l_192.s0 < 26); l_192.s0 = safe_sub_func_uint16_t_u_u(l_192.s0, 4))
            { /* block id: 58 */
                int32_t l_195 = 0L;
                uint64_t l_196[4][5][6] = {{{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L}},{{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L}},{{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L}},{{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L},{18446744073709551614UL,4UL,18446744073709551615UL,0x986F86244AF00ECBL,1UL,0x0CB5C31CDA9944A5L}}};
                uint16_t l_204 = 0UL;
                int i, j, k;
                if (((l_155.sd = l_195) , l_196[1][4][1]))
                { /* block id: 60 */
                    int32_t l_197 = 0L;
                    int8_t l_198 = 0x34L;
                    l_146.s2 = l_197;
                    l_146.s2 = (l_147.s2 |= l_198);
                }
                else
                { /* block id: 64 */
                    int32_t *l_199 = (void*)0;
                    int32_t l_201[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t *l_200 = &l_201[5];
                    int32_t *l_202[1];
                    uint16_t l_203 = 2UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_202[i] = &l_201[8];
                    l_202[0] = (l_200 = l_199);
                    l_147.s9 |= l_203;
                }
                if (l_204)
                { /* block id: 69 */
                    int32_t l_205 = 7L;
                    for (l_205 = 0; (l_205 >= (-2)); --l_205)
                    { /* block id: 72 */
                        VECTOR(int32_t, 4) l_208 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        int i;
                        l_147.s3 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_208.yx)), 0x2895EEB2L, 1L)).w;
                        l_208.x = 0x385B255EL;
                    }
                }
                else
                { /* block id: 76 */
                    uint64_t l_209 = 1UL;
                    int8_t l_210 = 0x6BL;
                    int32_t l_211 = 0L;
                    uint32_t l_212 = 1UL;
                    int32_t l_213 = 0x209FDA40L;
                    int8_t l_214 = 1L;
                    VECTOR(int64_t, 8) l_215 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
                    int32_t l_216 = 0x4CFC0930L;
                    int8_t l_217 = 0x74L;
                    int8_t *l_219 = &l_214;
                    int8_t **l_218[6][3][6] = {{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}},{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}},{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}},{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}},{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}},{{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219},{&l_219,&l_219,(void*)0,&l_219,&l_219,&l_219}}};
                    int8_t **l_220[5];
                    struct S0 l_222[4][10] = {{{8L,0x5D46BA36L,0x7A10L},{0x1FL,0xD86D647EL,0x0A2CL},{9L,4294967290UL,0x7AFCL},{1L,4294967295UL,0x4FC6L},{0x1FL,0xD86D647EL,0x0A2CL},{1L,4294967295UL,0x4FC6L},{9L,4294967290UL,0x7AFCL},{0x1FL,0xD86D647EL,0x0A2CL},{8L,0x5D46BA36L,0x7A10L},{8L,0x5D46BA36L,0x7A10L}},{{8L,0x5D46BA36L,0x7A10L},{0x1FL,0xD86D647EL,0x0A2CL},{9L,4294967290UL,0x7AFCL},{1L,4294967295UL,0x4FC6L},{0x1FL,0xD86D647EL,0x0A2CL},{1L,4294967295UL,0x4FC6L},{9L,4294967290UL,0x7AFCL},{0x1FL,0xD86D647EL,0x0A2CL},{8L,0x5D46BA36L,0x7A10L},{8L,0x5D46BA36L,0x7A10L}},{{8L,0x5D46BA36L,0x7A10L},{0x1FL,0xD86D647EL,0x0A2CL},{9L,4294967290UL,0x7AFCL},{1L,4294967295UL,0x4FC6L},{0x1FL,0xD86D647EL,0x0A2CL},{1L,4294967295UL,0x4FC6L},{9L,4294967290UL,0x7AFCL},{0x1FL,0xD86D647EL,0x0A2CL},{8L,0x5D46BA36L,0x7A10L},{8L,0x5D46BA36L,0x7A10L}},{{8L,0x5D46BA36L,0x7A10L},{0x1FL,0xD86D647EL,0x0A2CL},{9L,4294967290UL,0x7AFCL},{1L,4294967295UL,0x4FC6L},{0x1FL,0xD86D647EL,0x0A2CL},{1L,4294967295UL,0x4FC6L},{9L,4294967290UL,0x7AFCL},{0x1FL,0xD86D647EL,0x0A2CL},{8L,0x5D46BA36L,0x7A10L},{8L,0x5D46BA36L,0x7A10L}}};
                    struct S0 *l_221 = &l_222[3][2];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_220[i] = &l_219;
                    l_213 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_209, l_210, l_211, 9L, 0x43CEC6AEL, (l_101 = l_212), 3L, 1L)).s7736517676741604)).s7;
                    l_220[1] = ((((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((l_214 = (l_143 = 9L)), 0x7C5F3B778325A374L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_215.s51401360)).lo)), 0x78ED7A292EE644F4L, 0x59C2F6A369502C5DL)).hi)).zzyyzzyw, (int64_t)l_216))).s6 , l_217) , l_218[4][2][0]);
                    l_221 = (void*)0;
                }
                for (l_196[2][3][0] = (-28); (l_196[2][3][0] == 4); l_196[2][3][0] = safe_add_func_uint8_t_u_u(l_196[2][3][0], 3))
                { /* block id: 86 */
                    union U1 *l_225 = (void*)0;
                    VECTOR(int32_t, 8) l_226 = (VECTOR(int32_t, 8))(0x1D7FDA7FL, (VECTOR(int32_t, 4))(0x1D7FDA7FL, (VECTOR(int32_t, 2))(0x1D7FDA7FL, 1L), 1L), 1L, 0x1D7FDA7FL, 1L);
                    int32_t *l_231 = (void*)0;
                    int32_t *l_232 = (void*)0;
                    uint32_t l_233 = 0UL;
                    int i;
                    l_225 = l_225;
                    if (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_226.s2256125414040364)).odd, ((VECTOR(int32_t, 2))(0x01858CDBL, 0x68EBB756L)).yxxxxyyy))).s4)
                    { /* block id: 88 */
                        uint8_t l_227 = 251UL;
                        l_146.s5 = (l_226.s5 = l_227);
                    }
                    else
                    { /* block id: 91 */
                        uint16_t l_228[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_228[i] = 65528UL;
                        l_228[7]--;
                    }
                    l_232 = l_231;
                    l_148 ^= l_233;
                }
            }
        }
        else
        { /* block id: 98 */
            uint16_t l_234 = 3UL;
            uint32_t l_235 = 4294967293UL;
            VECTOR(int32_t, 8) l_236 = (VECTOR(int32_t, 8))(0x38A99B17L, (VECTOR(int32_t, 4))(0x38A99B17L, (VECTOR(int32_t, 2))(0x38A99B17L, 0L), 0L), 0L, 0x38A99B17L, 0L);
            VECTOR(int32_t, 16) l_237 = (VECTOR(int32_t, 16))(0x1FB503A6L, (VECTOR(int32_t, 4))(0x1FB503A6L, (VECTOR(int32_t, 2))(0x1FB503A6L, 0x6A79FF92L), 0x6A79FF92L), 0x6A79FF92L, 0x1FB503A6L, 0x6A79FF92L, (VECTOR(int32_t, 2))(0x1FB503A6L, 0x6A79FF92L), (VECTOR(int32_t, 2))(0x1FB503A6L, 0x6A79FF92L), 0x1FB503A6L, 0x6A79FF92L, 0x1FB503A6L, 0x6A79FF92L);
            int i;
            l_147.s7 ^= ((l_235 |= l_234) , ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(9L, 0L)))).yyxxxyyy, ((VECTOR(int32_t, 8))(l_236.s63637523)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3FDCEB12L, (-7L))), 0L, 0L)).xyyyzxww))), ((VECTOR(int32_t, 2))(l_237.s8e)).yyyxyxyx))).s1);
        }
        l_238 = l_238;
        l_240 = l_239;
        unsigned int result = 0;
        result += l_101;
        int l_140_i0;
        for (l_140_i0 = 0; l_140_i0 < 1; l_140_i0++) {
            result += l_140[l_140_i0].f0;
        }
        result += l_141.f0;
        result += l_142;
        result += l_143;
        result += l_144;
        result += l_145;
        result += l_146.s7;
        result += l_146.s6;
        result += l_146.s5;
        result += l_146.s4;
        result += l_146.s3;
        result += l_146.s2;
        result += l_146.s1;
        result += l_146.s0;
        result += l_147.sf;
        result += l_147.se;
        result += l_147.sd;
        result += l_147.sc;
        result += l_147.sb;
        result += l_147.sa;
        result += l_147.s9;
        result += l_147.s8;
        result += l_147.s7;
        result += l_147.s6;
        result += l_147.s5;
        result += l_147.s4;
        result += l_147.s3;
        result += l_147.s2;
        result += l_147.s1;
        result += l_147.s0;
        result += l_148;
        result += l_149.w;
        result += l_149.z;
        result += l_149.y;
        result += l_149.x;
        int l_150_i0, l_150_i1, l_150_i2;
        for (l_150_i0 = 0; l_150_i0 < 5; l_150_i0++) {
            for (l_150_i1 = 0; l_150_i1 < 5; l_150_i1++) {
                for (l_150_i2 = 0; l_150_i2 < 5; l_150_i2++) {
                    result += l_150[l_150_i0][l_150_i1][l_150_i2];
                }
            }
        }
        int l_151_i0, l_151_i1, l_151_i2;
        for (l_151_i0 = 0; l_151_i0 < 8; l_151_i0++) {
            for (l_151_i1 = 0; l_151_i1 < 2; l_151_i1++) {
                for (l_151_i2 = 0; l_151_i2 < 1; l_151_i2++) {
                    result += l_151[l_151_i0][l_151_i1][l_151_i2];
                }
            }
        }
        result += l_154;
        result += l_155.sf;
        result += l_155.se;
        result += l_155.sd;
        result += l_155.sc;
        result += l_155.sb;
        result += l_155.sa;
        result += l_155.s9;
        result += l_155.s8;
        result += l_155.s7;
        result += l_155.s6;
        result += l_155.s5;
        result += l_155.s4;
        result += l_155.s3;
        result += l_155.s2;
        result += l_155.s1;
        result += l_155.s0;
        result += l_156.w;
        result += l_156.z;
        result += l_156.y;
        result += l_156.x;
        result += l_157;
        result += l_158.f0;
        result += l_159.f0;
        result += l_160.sf;
        result += l_160.se;
        result += l_160.sd;
        result += l_160.sc;
        result += l_160.sb;
        result += l_160.sa;
        result += l_160.s9;
        result += l_160.s8;
        result += l_160.s7;
        result += l_160.s6;
        result += l_160.s5;
        result += l_160.s4;
        result += l_160.s3;
        result += l_160.s2;
        result += l_160.s1;
        result += l_160.s0;
        result += l_161;
        result += l_239;
        result += l_240;
        atomic_add(&p_847->l_special_values[3], result);
    }
    else
    { /* block id: 104 */
        (1 + 1);
    }
    if (p_847->g_11[1][5][6])
    { /* block id: 107 */
        int8_t *l_241 = &p_847->g_67;
        int8_t *l_243[10] = {&p_847->g_67,&p_847->g_67,(void*)0,&p_847->g_67,&p_847->g_67,&p_847->g_67,&p_847->g_67,(void*)0,&p_847->g_67,&p_847->g_67};
        int8_t **l_242 = &l_243[5];
        int8_t ***l_247 = (void*)0;
        int8_t ***l_248 = &l_242;
        int i;
        p_847->g_244 = (l_241 == ((*l_242) = (void*)0));
        (*l_248) = l_245;
    }
    else
    { /* block id: 111 */
        int16_t l_270 = 0x7324L;
        int64_t *l_282 = (void*)0;
        int64_t *l_283 = (void*)0;
        int64_t *l_284 = (void*)0;
        VECTOR(int16_t, 8) l_292 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
        VECTOR(uint8_t, 2) l_294 = (VECTOR(uint8_t, 2))(255UL, 0xFFL);
        int32_t *l_297 = &p_847->g_244;
        int32_t **l_298 = &l_297;
        int i;
        for (p_95 = 27; (p_95 != 18); --p_95)
        { /* block id: 114 */
            uint16_t *l_251 = &p_847->g_252;
            VECTOR(int8_t, 2) l_257 = (VECTOR(int8_t, 2))((-3L), 0L);
            int8_t ***l_263[10] = {&l_245,&l_245,(void*)0,&l_245,&l_245,&l_245,&l_245,(void*)0,&l_245,&l_245};
            int8_t ****l_262 = &l_263[5];
            int8_t *l_272 = (void*)0;
            int8_t **l_271 = &l_272;
            int8_t *l_274 = (void*)0;
            int8_t *l_275 = (void*)0;
            int8_t *l_276 = &p_847->g_277;
            uint32_t *l_278 = &p_847->g_279;
            int32_t *l_280 = &p_847->g_244;
            int i;
            (*l_280) &= (p_94 , ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xBBE8L, 1UL)), 9UL, 8UL)).x && ((*l_251)++)) , (safe_sub_func_int8_t_s_s(((*l_246) = (!((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_257.yxxx)).wzxwzyxz)).s4)), ((((((p_96 && (safe_add_func_uint32_t_u_u((p_96++), ((p_847->g_264 = ((*l_262) = &l_245)) == (p_847->g_267 = &l_245))))) == (safe_mod_func_uint16_t_u_u(l_270, GROUP_DIVERGE(2, 1)))) , (**p_847->g_264)) == ((*l_271) = (*p_847->g_265))) == ((*l_278) &= ((((*l_276) ^= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_847->g_273.s55)).yxyxxyxx)).s2) != p_95) ^ (p_847->g_82.x | p_95)))) != p_94)))));
        }
        (*l_297) = ((0x786AL | ((VECTOR(int16_t, 16))(l_281.zxwwywyzwxxwxzyw)).s3) , ((p_847->l_comm_values[(safe_mod_func_uint32_t_u_u(p_847->tid, 80))] = p_847->g_82.y) , (l_270 >= ((safe_lshift_func_int16_t_s_s(l_270, (0x3236715A556B9F28L >= (((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_287.xxxwwzyx)).lo)).zzxxzzyy)).s4 == (safe_rshift_func_uint16_t_u_s(p_97.f0, l_287.z))) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0UL, 0x1A19L)).xyyxxyxyxxyyyxxy)).even)).s7) ^ ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_292.s75611777)).s42)).lo, (FAKE_DIVERGE(p_847->local_0_offset, get_local_id(0), 10) && ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(l_293.yzyzxzwz)).lo, ((VECTOR(uint8_t, 8))(l_294.xyyyxxyy)).hi))).wxyxzwwz)).s52))), 246UL, 0UL)).hi)))))).hi))) , (p_847->g_9 && (safe_div_func_int8_t_s_s(p_96, l_281.w)))))))) && GROUP_DIVERGE(0, 1)))));
        (*l_298) = &p_847->g_11[1][5][6];
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_847->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x54BB9ECAL, 0UL)).hi, 10))][(safe_mod_func_uint32_t_u_u(p_847->tid, 80))]));
    return p_847->g_279;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_comm_values[i] = 1;
    struct S3 c_848;
    struct S3* p_847 = &c_848;
    struct S3 c_849 = {
        (VECTOR(int8_t, 8))(0x7EL, (VECTOR(int8_t, 4))(0x7EL, (VECTOR(int8_t, 2))(0x7EL, 0x1DL), 0x1DL), 0x1DL, 0x7EL, 0x1DL), // p_847->g_4
        0xEF906D8BL, // p_847->g_9
        {{{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L}},{{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L},{0x5F860956L,0x01DBDAE4L,0x01DBDAE4L,0x5F860956L,0x5F860956L,0x01DBDAE4L,0x01DBDAE4L}}}, // p_847->g_11
        (void*)0, // p_847->g_13
        (VECTOR(int32_t, 4))(0x14AD4DB1L, (VECTOR(int32_t, 2))(0x14AD4DB1L, 0x0F3F8502L), 0x0F3F8502L), // p_847->g_31
        (-1L), // p_847->g_40
        0x35L, // p_847->g_67
        248UL, // p_847->g_69
        (VECTOR(int32_t, 2))(1L, 0x05588CB3L), // p_847->g_82
        0UL, // p_847->g_86
        (-1L), // p_847->g_244
        0xFA76L, // p_847->g_252
        {(void*)0}, // p_847->g_266
        &p_847->g_266[0], // p_847->g_265
        &p_847->g_265, // p_847->g_264
        &p_847->g_265, // p_847->g_267
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_847->g_273
        0x29L, // p_847->g_277
        0x88411622L, // p_847->g_279
        {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}}, // p_847->g_302
        (VECTOR(uint32_t, 8))(0x27171BC5L, (VECTOR(uint32_t, 4))(0x27171BC5L, (VECTOR(uint32_t, 2))(0x27171BC5L, 0UL), 0UL), 0UL, 0x27171BC5L, 0UL), // p_847->g_313
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6FDEDEA7L), 0x6FDEDEA7L), 0x6FDEDEA7L, 1L, 0x6FDEDEA7L), // p_847->g_331
        {{0L},{6L},{0L},{0L},{6L},{0L},{0L},{6L},{0L},{0L}}, // p_847->g_334
        &p_847->g_334[3], // p_847->g_333
        0x5B08C5AB1CBFD89FL, // p_847->g_337
        {1UL}, // p_847->g_343
        &p_847->g_11[1][8][1], // p_847->g_345
        &p_847->g_345, // p_847->g_344
        {0x7B2CD559L}, // p_847->g_350
        {-7L}, // p_847->g_374
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_847->g_375
        0x55A7L, // p_847->g_384
        (VECTOR(int16_t, 8))(0x1BCFL, (VECTOR(int16_t, 4))(0x1BCFL, (VECTOR(int16_t, 2))(0x1BCFL, 0x1623L), 0x1623L), 0x1623L, 0x1BCFL, 0x1623L), // p_847->g_405
        (VECTOR(int32_t, 16))(0x7F8CB2A0L, (VECTOR(int32_t, 4))(0x7F8CB2A0L, (VECTOR(int32_t, 2))(0x7F8CB2A0L, 0x391FD239L), 0x391FD239L), 0x391FD239L, 0x7F8CB2A0L, 0x391FD239L, (VECTOR(int32_t, 2))(0x7F8CB2A0L, 0x391FD239L), (VECTOR(int32_t, 2))(0x7F8CB2A0L, 0x391FD239L), 0x7F8CB2A0L, 0x391FD239L, 0x7F8CB2A0L, 0x391FD239L), // p_847->g_425
        0x6F8632EEL, // p_847->g_433
        (void*)0, // p_847->g_452
        &p_847->g_40, // p_847->g_453
        {0x61L,0x8A0F5BF3L,0x141DL}, // p_847->g_463
        {0x1BL,0x9EB1BD8DL,1L}, // p_847->g_464
        (VECTOR(int32_t, 16))(0x5F6AA401L, (VECTOR(int32_t, 4))(0x5F6AA401L, (VECTOR(int32_t, 2))(0x5F6AA401L, 1L), 1L), 1L, 0x5F6AA401L, 1L, (VECTOR(int32_t, 2))(0x5F6AA401L, 1L), (VECTOR(int32_t, 2))(0x5F6AA401L, 1L), 0x5F6AA401L, 1L, 0x5F6AA401L, 1L), // p_847->g_476
        {0x7AL,0x404759BEL,0x5534L}, // p_847->g_493
        &p_847->g_493, // p_847->g_492
        {{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350},{&p_847->g_350,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_374,&p_847->g_374,(void*)0,&p_847->g_350}}, // p_847->g_509
        &p_847->g_509[7][2], // p_847->g_508
        (VECTOR(int32_t, 2))(1L, 0x532B2189L), // p_847->g_614
        {{(void*)0,(void*)0}}, // p_847->g_619
        (VECTOR(uint16_t, 8))(0x09EDL, (VECTOR(uint16_t, 4))(0x09EDL, (VECTOR(uint16_t, 2))(0x09EDL, 0x4B22L), 0x4B22L), 0x4B22L, 0x09EDL, 0x4B22L), // p_847->g_643
        {{&p_847->g_13},{&p_847->g_13},{&p_847->g_13},{&p_847->g_13},{&p_847->g_13}}, // p_847->g_652
        &p_847->g_13, // p_847->g_653
        {0x4FL,4294967287UL,1L}, // p_847->g_662
        0x51D8D6D7341EE270L, // p_847->g_676
        4294967295UL, // p_847->g_704
        &p_847->g_279, // p_847->g_736
        (VECTOR(uint16_t, 8))(0xE742L, (VECTOR(uint16_t, 4))(0xE742L, (VECTOR(uint16_t, 2))(0xE742L, 0x46B6L), 0x46B6L), 0x46B6L, 0xE742L, 0x46B6L), // p_847->g_777
        (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL), // p_847->g_778
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 9UL), 9UL), // p_847->g_779
        (VECTOR(uint16_t, 4))(0xAEBFL, (VECTOR(uint16_t, 2))(0xAEBFL, 0x1C0DL), 0x1C0DL), // p_847->g_780
        (VECTOR(uint16_t, 2))(0UL, 0UL), // p_847->g_818
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L)), // p_847->g_825
        {1L}, // p_847->g_828
        {0x57078536L}, // p_847->g_829
        (void*)0, // p_847->g_837
        &p_847->g_837, // p_847->g_836
        &p_847->g_836, // p_847->g_835
        &p_847->g_835, // p_847->g_834
        0, // p_847->v_collective
        sequence_input[get_global_id(0)], // p_847->global_0_offset
        sequence_input[get_global_id(1)], // p_847->global_1_offset
        sequence_input[get_global_id(2)], // p_847->global_2_offset
        sequence_input[get_local_id(0)], // p_847->local_0_offset
        sequence_input[get_local_id(1)], // p_847->local_1_offset
        sequence_input[get_local_id(2)], // p_847->local_2_offset
        sequence_input[get_group_id(0)], // p_847->group_0_offset
        sequence_input[get_group_id(1)], // p_847->group_1_offset
        sequence_input[get_group_id(2)], // p_847->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 80)), permutations[0][get_linear_local_id()])), // p_847->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_848 = c_849;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_847);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_847->g_4.s0, "p_847->g_4.s0", print_hash_value);
    transparent_crc(p_847->g_4.s1, "p_847->g_4.s1", print_hash_value);
    transparent_crc(p_847->g_4.s2, "p_847->g_4.s2", print_hash_value);
    transparent_crc(p_847->g_4.s3, "p_847->g_4.s3", print_hash_value);
    transparent_crc(p_847->g_4.s4, "p_847->g_4.s4", print_hash_value);
    transparent_crc(p_847->g_4.s5, "p_847->g_4.s5", print_hash_value);
    transparent_crc(p_847->g_4.s6, "p_847->g_4.s6", print_hash_value);
    transparent_crc(p_847->g_4.s7, "p_847->g_4.s7", print_hash_value);
    transparent_crc(p_847->g_9, "p_847->g_9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_847->g_11[i][j][k], "p_847->g_11[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_847->g_31.x, "p_847->g_31.x", print_hash_value);
    transparent_crc(p_847->g_31.y, "p_847->g_31.y", print_hash_value);
    transparent_crc(p_847->g_31.z, "p_847->g_31.z", print_hash_value);
    transparent_crc(p_847->g_31.w, "p_847->g_31.w", print_hash_value);
    transparent_crc(p_847->g_40, "p_847->g_40", print_hash_value);
    transparent_crc(p_847->g_67, "p_847->g_67", print_hash_value);
    transparent_crc(p_847->g_69, "p_847->g_69", print_hash_value);
    transparent_crc(p_847->g_82.x, "p_847->g_82.x", print_hash_value);
    transparent_crc(p_847->g_82.y, "p_847->g_82.y", print_hash_value);
    transparent_crc(p_847->g_86, "p_847->g_86", print_hash_value);
    transparent_crc(p_847->g_244, "p_847->g_244", print_hash_value);
    transparent_crc(p_847->g_252, "p_847->g_252", print_hash_value);
    transparent_crc(p_847->g_273.s0, "p_847->g_273.s0", print_hash_value);
    transparent_crc(p_847->g_273.s1, "p_847->g_273.s1", print_hash_value);
    transparent_crc(p_847->g_273.s2, "p_847->g_273.s2", print_hash_value);
    transparent_crc(p_847->g_273.s3, "p_847->g_273.s3", print_hash_value);
    transparent_crc(p_847->g_273.s4, "p_847->g_273.s4", print_hash_value);
    transparent_crc(p_847->g_273.s5, "p_847->g_273.s5", print_hash_value);
    transparent_crc(p_847->g_273.s6, "p_847->g_273.s6", print_hash_value);
    transparent_crc(p_847->g_273.s7, "p_847->g_273.s7", print_hash_value);
    transparent_crc(p_847->g_277, "p_847->g_277", print_hash_value);
    transparent_crc(p_847->g_279, "p_847->g_279", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_847->g_302[i][j], "p_847->g_302[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_847->g_313.s0, "p_847->g_313.s0", print_hash_value);
    transparent_crc(p_847->g_313.s1, "p_847->g_313.s1", print_hash_value);
    transparent_crc(p_847->g_313.s2, "p_847->g_313.s2", print_hash_value);
    transparent_crc(p_847->g_313.s3, "p_847->g_313.s3", print_hash_value);
    transparent_crc(p_847->g_313.s4, "p_847->g_313.s4", print_hash_value);
    transparent_crc(p_847->g_313.s5, "p_847->g_313.s5", print_hash_value);
    transparent_crc(p_847->g_313.s6, "p_847->g_313.s6", print_hash_value);
    transparent_crc(p_847->g_313.s7, "p_847->g_313.s7", print_hash_value);
    transparent_crc(p_847->g_331.s0, "p_847->g_331.s0", print_hash_value);
    transparent_crc(p_847->g_331.s1, "p_847->g_331.s1", print_hash_value);
    transparent_crc(p_847->g_331.s2, "p_847->g_331.s2", print_hash_value);
    transparent_crc(p_847->g_331.s3, "p_847->g_331.s3", print_hash_value);
    transparent_crc(p_847->g_331.s4, "p_847->g_331.s4", print_hash_value);
    transparent_crc(p_847->g_331.s5, "p_847->g_331.s5", print_hash_value);
    transparent_crc(p_847->g_331.s6, "p_847->g_331.s6", print_hash_value);
    transparent_crc(p_847->g_331.s7, "p_847->g_331.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_847->g_334[i].f0, "p_847->g_334[i].f0", print_hash_value);

    }
    transparent_crc(p_847->g_337, "p_847->g_337", print_hash_value);
    transparent_crc(p_847->g_343.f0, "p_847->g_343.f0", print_hash_value);
    transparent_crc(p_847->g_350.f0, "p_847->g_350.f0", print_hash_value);
    transparent_crc(p_847->g_374.f0, "p_847->g_374.f0", print_hash_value);
    transparent_crc(p_847->g_375.s0, "p_847->g_375.s0", print_hash_value);
    transparent_crc(p_847->g_375.s1, "p_847->g_375.s1", print_hash_value);
    transparent_crc(p_847->g_375.s2, "p_847->g_375.s2", print_hash_value);
    transparent_crc(p_847->g_375.s3, "p_847->g_375.s3", print_hash_value);
    transparent_crc(p_847->g_375.s4, "p_847->g_375.s4", print_hash_value);
    transparent_crc(p_847->g_375.s5, "p_847->g_375.s5", print_hash_value);
    transparent_crc(p_847->g_375.s6, "p_847->g_375.s6", print_hash_value);
    transparent_crc(p_847->g_375.s7, "p_847->g_375.s7", print_hash_value);
    transparent_crc(p_847->g_375.s8, "p_847->g_375.s8", print_hash_value);
    transparent_crc(p_847->g_375.s9, "p_847->g_375.s9", print_hash_value);
    transparent_crc(p_847->g_375.sa, "p_847->g_375.sa", print_hash_value);
    transparent_crc(p_847->g_375.sb, "p_847->g_375.sb", print_hash_value);
    transparent_crc(p_847->g_375.sc, "p_847->g_375.sc", print_hash_value);
    transparent_crc(p_847->g_375.sd, "p_847->g_375.sd", print_hash_value);
    transparent_crc(p_847->g_375.se, "p_847->g_375.se", print_hash_value);
    transparent_crc(p_847->g_375.sf, "p_847->g_375.sf", print_hash_value);
    transparent_crc(p_847->g_384, "p_847->g_384", print_hash_value);
    transparent_crc(p_847->g_405.s0, "p_847->g_405.s0", print_hash_value);
    transparent_crc(p_847->g_405.s1, "p_847->g_405.s1", print_hash_value);
    transparent_crc(p_847->g_405.s2, "p_847->g_405.s2", print_hash_value);
    transparent_crc(p_847->g_405.s3, "p_847->g_405.s3", print_hash_value);
    transparent_crc(p_847->g_405.s4, "p_847->g_405.s4", print_hash_value);
    transparent_crc(p_847->g_405.s5, "p_847->g_405.s5", print_hash_value);
    transparent_crc(p_847->g_405.s6, "p_847->g_405.s6", print_hash_value);
    transparent_crc(p_847->g_405.s7, "p_847->g_405.s7", print_hash_value);
    transparent_crc(p_847->g_425.s0, "p_847->g_425.s0", print_hash_value);
    transparent_crc(p_847->g_425.s1, "p_847->g_425.s1", print_hash_value);
    transparent_crc(p_847->g_425.s2, "p_847->g_425.s2", print_hash_value);
    transparent_crc(p_847->g_425.s3, "p_847->g_425.s3", print_hash_value);
    transparent_crc(p_847->g_425.s4, "p_847->g_425.s4", print_hash_value);
    transparent_crc(p_847->g_425.s5, "p_847->g_425.s5", print_hash_value);
    transparent_crc(p_847->g_425.s6, "p_847->g_425.s6", print_hash_value);
    transparent_crc(p_847->g_425.s7, "p_847->g_425.s7", print_hash_value);
    transparent_crc(p_847->g_425.s8, "p_847->g_425.s8", print_hash_value);
    transparent_crc(p_847->g_425.s9, "p_847->g_425.s9", print_hash_value);
    transparent_crc(p_847->g_425.sa, "p_847->g_425.sa", print_hash_value);
    transparent_crc(p_847->g_425.sb, "p_847->g_425.sb", print_hash_value);
    transparent_crc(p_847->g_425.sc, "p_847->g_425.sc", print_hash_value);
    transparent_crc(p_847->g_425.sd, "p_847->g_425.sd", print_hash_value);
    transparent_crc(p_847->g_425.se, "p_847->g_425.se", print_hash_value);
    transparent_crc(p_847->g_425.sf, "p_847->g_425.sf", print_hash_value);
    transparent_crc(p_847->g_433, "p_847->g_433", print_hash_value);
    transparent_crc(p_847->g_463.f0, "p_847->g_463.f0", print_hash_value);
    transparent_crc(p_847->g_463.f1, "p_847->g_463.f1", print_hash_value);
    transparent_crc(p_847->g_463.f2, "p_847->g_463.f2", print_hash_value);
    transparent_crc(p_847->g_464.f0, "p_847->g_464.f0", print_hash_value);
    transparent_crc(p_847->g_464.f1, "p_847->g_464.f1", print_hash_value);
    transparent_crc(p_847->g_464.f2, "p_847->g_464.f2", print_hash_value);
    transparent_crc(p_847->g_476.s0, "p_847->g_476.s0", print_hash_value);
    transparent_crc(p_847->g_476.s1, "p_847->g_476.s1", print_hash_value);
    transparent_crc(p_847->g_476.s2, "p_847->g_476.s2", print_hash_value);
    transparent_crc(p_847->g_476.s3, "p_847->g_476.s3", print_hash_value);
    transparent_crc(p_847->g_476.s4, "p_847->g_476.s4", print_hash_value);
    transparent_crc(p_847->g_476.s5, "p_847->g_476.s5", print_hash_value);
    transparent_crc(p_847->g_476.s6, "p_847->g_476.s6", print_hash_value);
    transparent_crc(p_847->g_476.s7, "p_847->g_476.s7", print_hash_value);
    transparent_crc(p_847->g_476.s8, "p_847->g_476.s8", print_hash_value);
    transparent_crc(p_847->g_476.s9, "p_847->g_476.s9", print_hash_value);
    transparent_crc(p_847->g_476.sa, "p_847->g_476.sa", print_hash_value);
    transparent_crc(p_847->g_476.sb, "p_847->g_476.sb", print_hash_value);
    transparent_crc(p_847->g_476.sc, "p_847->g_476.sc", print_hash_value);
    transparent_crc(p_847->g_476.sd, "p_847->g_476.sd", print_hash_value);
    transparent_crc(p_847->g_476.se, "p_847->g_476.se", print_hash_value);
    transparent_crc(p_847->g_476.sf, "p_847->g_476.sf", print_hash_value);
    transparent_crc(p_847->g_493.f0, "p_847->g_493.f0", print_hash_value);
    transparent_crc(p_847->g_493.f1, "p_847->g_493.f1", print_hash_value);
    transparent_crc(p_847->g_493.f2, "p_847->g_493.f2", print_hash_value);
    transparent_crc(p_847->g_614.x, "p_847->g_614.x", print_hash_value);
    transparent_crc(p_847->g_614.y, "p_847->g_614.y", print_hash_value);
    transparent_crc(p_847->g_643.s0, "p_847->g_643.s0", print_hash_value);
    transparent_crc(p_847->g_643.s1, "p_847->g_643.s1", print_hash_value);
    transparent_crc(p_847->g_643.s2, "p_847->g_643.s2", print_hash_value);
    transparent_crc(p_847->g_643.s3, "p_847->g_643.s3", print_hash_value);
    transparent_crc(p_847->g_643.s4, "p_847->g_643.s4", print_hash_value);
    transparent_crc(p_847->g_643.s5, "p_847->g_643.s5", print_hash_value);
    transparent_crc(p_847->g_643.s6, "p_847->g_643.s6", print_hash_value);
    transparent_crc(p_847->g_643.s7, "p_847->g_643.s7", print_hash_value);
    transparent_crc(p_847->g_662.f0, "p_847->g_662.f0", print_hash_value);
    transparent_crc(p_847->g_662.f1, "p_847->g_662.f1", print_hash_value);
    transparent_crc(p_847->g_662.f2, "p_847->g_662.f2", print_hash_value);
    transparent_crc(p_847->g_676, "p_847->g_676", print_hash_value);
    transparent_crc(p_847->g_704, "p_847->g_704", print_hash_value);
    transparent_crc(p_847->g_777.s0, "p_847->g_777.s0", print_hash_value);
    transparent_crc(p_847->g_777.s1, "p_847->g_777.s1", print_hash_value);
    transparent_crc(p_847->g_777.s2, "p_847->g_777.s2", print_hash_value);
    transparent_crc(p_847->g_777.s3, "p_847->g_777.s3", print_hash_value);
    transparent_crc(p_847->g_777.s4, "p_847->g_777.s4", print_hash_value);
    transparent_crc(p_847->g_777.s5, "p_847->g_777.s5", print_hash_value);
    transparent_crc(p_847->g_777.s6, "p_847->g_777.s6", print_hash_value);
    transparent_crc(p_847->g_777.s7, "p_847->g_777.s7", print_hash_value);
    transparent_crc(p_847->g_778.s0, "p_847->g_778.s0", print_hash_value);
    transparent_crc(p_847->g_778.s1, "p_847->g_778.s1", print_hash_value);
    transparent_crc(p_847->g_778.s2, "p_847->g_778.s2", print_hash_value);
    transparent_crc(p_847->g_778.s3, "p_847->g_778.s3", print_hash_value);
    transparent_crc(p_847->g_778.s4, "p_847->g_778.s4", print_hash_value);
    transparent_crc(p_847->g_778.s5, "p_847->g_778.s5", print_hash_value);
    transparent_crc(p_847->g_778.s6, "p_847->g_778.s6", print_hash_value);
    transparent_crc(p_847->g_778.s7, "p_847->g_778.s7", print_hash_value);
    transparent_crc(p_847->g_779.x, "p_847->g_779.x", print_hash_value);
    transparent_crc(p_847->g_779.y, "p_847->g_779.y", print_hash_value);
    transparent_crc(p_847->g_779.z, "p_847->g_779.z", print_hash_value);
    transparent_crc(p_847->g_779.w, "p_847->g_779.w", print_hash_value);
    transparent_crc(p_847->g_780.x, "p_847->g_780.x", print_hash_value);
    transparent_crc(p_847->g_780.y, "p_847->g_780.y", print_hash_value);
    transparent_crc(p_847->g_780.z, "p_847->g_780.z", print_hash_value);
    transparent_crc(p_847->g_780.w, "p_847->g_780.w", print_hash_value);
    transparent_crc(p_847->g_818.x, "p_847->g_818.x", print_hash_value);
    transparent_crc(p_847->g_818.y, "p_847->g_818.y", print_hash_value);
    transparent_crc(p_847->g_825.s0, "p_847->g_825.s0", print_hash_value);
    transparent_crc(p_847->g_825.s1, "p_847->g_825.s1", print_hash_value);
    transparent_crc(p_847->g_825.s2, "p_847->g_825.s2", print_hash_value);
    transparent_crc(p_847->g_825.s3, "p_847->g_825.s3", print_hash_value);
    transparent_crc(p_847->g_825.s4, "p_847->g_825.s4", print_hash_value);
    transparent_crc(p_847->g_825.s5, "p_847->g_825.s5", print_hash_value);
    transparent_crc(p_847->g_825.s6, "p_847->g_825.s6", print_hash_value);
    transparent_crc(p_847->g_825.s7, "p_847->g_825.s7", print_hash_value);
    transparent_crc(p_847->g_828.f0, "p_847->g_828.f0", print_hash_value);
    transparent_crc(p_847->g_829.f0, "p_847->g_829.f0", print_hash_value);
    transparent_crc(p_847->v_collective, "p_847->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 23; i++)
            transparent_crc(p_847->g_special_values[i + 23 * get_linear_group_id()], "p_847->g_special_values[i + 23 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 23; i++)
            transparent_crc(p_847->l_special_values[i], "p_847->l_special_values[i]", print_hash_value);
    transparent_crc(p_847->l_comm_values[get_linear_local_id()], "p_847->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_847->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()], "p_847->g_comm_values[get_linear_group_id() * 80 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
