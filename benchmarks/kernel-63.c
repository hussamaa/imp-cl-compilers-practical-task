// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 96,2,36 -l 2,2,12
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

__constant uint32_t permutations[10][48] = {
{13,40,30,44,15,43,36,10,34,6,17,35,47,31,16,27,22,7,38,11,20,21,14,8,5,24,45,42,18,4,0,41,37,3,33,46,29,26,39,25,12,28,32,19,23,9,1,2}, // permutation 0
{11,4,17,23,41,43,39,27,36,7,20,30,29,13,47,10,24,44,34,15,35,21,33,16,3,19,40,28,14,9,12,25,42,18,31,1,22,6,8,45,32,5,2,46,38,0,37,26}, // permutation 1
{45,43,19,20,46,18,7,12,30,0,35,10,42,29,11,44,36,39,47,26,40,31,15,14,25,27,8,9,5,3,28,37,38,24,23,6,34,22,32,4,17,16,1,2,21,13,41,33}, // permutation 2
{40,28,38,37,12,19,0,44,15,13,14,25,33,23,9,24,43,17,45,20,41,6,18,11,42,16,47,36,5,27,26,2,1,39,31,10,29,3,46,35,32,34,21,30,8,22,4,7}, // permutation 3
{37,41,34,45,29,21,43,8,2,11,44,30,15,27,36,9,1,13,6,42,39,25,40,16,12,31,38,10,22,19,3,0,4,35,17,18,7,47,14,20,24,46,28,23,33,5,26,32}, // permutation 4
{8,19,47,33,42,32,24,39,46,14,6,29,16,17,10,0,43,25,28,35,15,27,22,30,5,13,20,41,34,2,12,23,9,18,21,44,36,1,38,45,31,37,11,26,40,4,3,7}, // permutation 5
{7,40,2,20,15,30,4,41,25,26,37,23,16,44,17,1,14,38,10,31,12,29,34,11,42,9,3,24,33,28,45,39,6,8,35,43,13,5,46,27,21,19,32,0,36,18,22,47}, // permutation 6
{10,2,12,47,8,29,40,6,18,14,27,33,42,25,23,43,11,32,26,35,31,17,28,1,15,44,20,16,9,4,19,7,39,45,22,21,30,13,0,46,41,3,24,5,34,36,37,38}, // permutation 7
{9,14,37,19,36,18,41,1,2,8,29,31,17,27,28,30,43,16,39,4,12,22,34,15,11,47,5,33,44,7,35,6,0,45,38,46,25,10,40,23,21,20,13,26,3,24,32,42}, // permutation 8
{35,31,14,22,26,1,43,9,40,3,32,30,4,17,6,33,5,36,15,37,42,2,44,29,16,0,10,34,20,25,12,19,8,28,13,45,47,38,7,39,21,24,18,11,46,41,27,23} // permutation 9
};

// Seed: 3300838866

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
   volatile int64_t  f1;
};

struct S1 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t *g_8[3];
    int32_t ** volatile g_7;
    volatile VECTOR(int16_t, 4) g_15;
    uint8_t g_18;
    int32_t g_52;
    int32_t g_68;
    uint64_t g_69;
    uint16_t g_78;
    int8_t g_105;
    int8_t *g_104;
    VECTOR(int16_t, 16) g_109;
    int32_t g_136;
    int16_t *g_152;
    VECTOR(int16_t, 4) g_159;
    VECTOR(int8_t, 4) g_167;
    uint16_t g_175[4][8];
    uint8_t g_177;
    uint8_t g_291;
    uint8_t *g_290;
    int32_t g_302;
    uint32_t g_402;
    volatile VECTOR(int32_t, 16) g_417;
    union U0 g_453;
    int32_t * volatile g_455;
    volatile VECTOR(uint8_t, 2) g_458;
    VECTOR(uint8_t, 16) g_461;
    uint32_t g_477[6][4][8];
    uint32_t *g_485[6][6][4];
    uint32_t ** volatile g_484;
    volatile union U0 g_501;
    uint32_t * volatile * volatile g_524;
    uint32_t * volatile * volatile *g_523[3];
    VECTOR(uint64_t, 4) g_528;
    volatile VECTOR(uint64_t, 2) g_546;
    int32_t * volatile g_554;
    int32_t ** volatile g_556;
    volatile VECTOR(uint64_t, 8) g_568;
    int32_t ** volatile g_608;
    int32_t ** volatile g_609;
    VECTOR(int16_t, 4) g_613;
    int32_t ** volatile g_627;
    int32_t ** volatile g_628;
    int32_t ** volatile g_629;
    volatile VECTOR(uint16_t, 16) g_659;
    VECTOR(uint8_t, 8) g_670;
    int8_t **g_678[2][1];
    volatile VECTOR(uint16_t, 8) g_681;
    union U0 g_689;
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
uint32_t  func_1(struct S1 * p_691);
int32_t * func_9(int64_t  p_10, uint16_t  p_11, struct S1 * p_691);
uint32_t  func_27(uint64_t  p_28, int8_t * p_29, int8_t * p_30, uint8_t * p_31, struct S1 * p_691);
int8_t * func_32(int32_t * p_33, int8_t * p_34, int32_t * p_35, int8_t  p_36, uint64_t  p_37, struct S1 * p_691);
int32_t * func_38(int32_t ** p_39, int32_t * p_40, uint64_t  p_41, int64_t  p_42, struct S1 * p_691);
uint32_t  func_72(int32_t ** p_73, int16_t  p_74, int32_t * p_75, int16_t  p_76, int64_t  p_77, struct S1 * p_691);
int16_t  func_79(int16_t  p_80, struct S1 * p_691);
uint32_t  func_83(int32_t ** p_84, uint16_t  p_85, int16_t  p_86, int8_t  p_87, struct S1 * p_691);
uint8_t  func_90(uint32_t  p_91, uint8_t  p_92, int8_t  p_93, struct S1 * p_691);
int32_t  func_100(int16_t  p_101, int32_t ** p_102, int8_t * p_103, struct S1 * p_691);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_691->g_3 p_691->g_7 p_691->l_comm_values p_691->g_15 p_691->g_18 p_691->g_comm_values p_691->g_8 p_691->g_69 p_691->g_78 p_691->g_52 p_691->g_104 p_691->g_105 p_691->g_109 p_691->g_68 p_691->g_159 p_691->g_167 p_691->g_136 p_691->g_177 p_691->g_175 p_691->g_290 p_691->g_302 p_691->g_291 p_691->g_417 p_691->g_453 p_691->g_455 p_691->g_461 p_691->g_484 p_691->g_523 p_691->g_528 p_691->g_546 p_691->g_554 p_691->g_556 p_691->g_609 p_691->g_458 p_691->g_613 p_691->g_629 p_691->g_568 p_691->g_477 p_691->g_659 p_691->g_670 p_691->g_681 p_691->g_689
 * writes: p_691->g_3 p_691->g_8 p_691->g_18 p_691->g_69 p_691->g_136 p_691->g_109 p_691->g_152 p_691->g_175 p_691->g_177 p_691->g_68 p_691->g_78 p_691->g_104 p_691->g_105 p_691->g_302 p_691->g_402 p_691->g_477 p_691->g_484 p_691->l_comm_values p_691->g_291 p_691->g_comm_values p_691->g_678
 */
uint32_t  func_1(struct S1 * p_691)
{ /* block id: 4 */
    VECTOR(int16_t, 4) l_14 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 3L), 3L);
    uint8_t *l_25[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_26 = 0x072305ABL;
    int32_t **l_43 = &p_691->g_8[2];
    int8_t **l_289 = &p_691->g_104;
    uint16_t *l_296 = (void*)0;
    uint16_t *l_297 = &p_691->g_175[0][2];
    uint64_t *l_298 = &p_691->g_69;
    int8_t *l_299 = (void*)0;
    int8_t *l_300 = (void*)0;
    int8_t *l_301 = &p_691->g_105;
    int16_t l_303 = (-8L);
    int i, j;
    for (p_691->g_3 = 0; (p_691->g_3 != 6); p_691->g_3++)
    { /* block id: 7 */
        int32_t *l_6 = &p_691->g_3;
        (*p_691->g_7) = l_6;
    }
    (*l_43) = func_9((p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))] && (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_14.yyxy)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x6A0DL, ((VECTOR(int16_t, 2))((-7L), (-1L))), ((VECTOR(int16_t, 4))(p_691->g_15.zyzz)), 0x4218L, p_691->g_3, l_14.z, 1L, ((!(safe_lshift_func_int8_t_s_s(((p_691->g_18 = l_14.x) || (p_691->g_302 |= ((*l_301) = (((l_14.x == ((*l_298) = (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((p_691->g_18 ^= p_691->g_15.x), l_26)) > (((*l_297) = ((func_27(p_691->g_comm_values[p_691->tid], ((*l_289) = func_32(func_38(l_43, (*l_43), p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))], l_14.w, p_691), l_25[0][5], &p_691->g_3, l_14.x, l_14.z, p_691)), &p_691->g_105, p_691->g_290, p_691) , 0x35B3EC27L) , p_691->g_69)) & 0xF602L)), FAKE_DIVERGE(p_691->local_2_offset, get_local_id(2), 10))), 0x8DB7E6CEL)))) , l_43) != (void*)0)))), l_303))) , p_691->g_175[0][2]), 0x1F2BL, 0x3456L, 1L, 0x0946L)))).s23))).yxyyxxxyyxyxyxyx)).s0f, ((VECTOR(int16_t, 2))((-1L)))))).xyyyxxyy)).s5, p_691->g_159.z))), p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))], p_691);
    return p_691->g_109.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_104 p_691->g_105 p_691->g_290 p_691->g_291 p_691->g_417 p_691->g_69 p_691->l_comm_values p_691->g_136 p_691->g_78 p_691->g_7 p_691->g_8 p_691->g_453 p_691->g_455 p_691->g_461 p_691->g_484 p_691->g_15 p_691->g_523 p_691->g_528 p_691->g_167 p_691->g_18 p_691->g_546 p_691->g_554 p_691->g_556 p_691->g_302 p_691->g_609 p_691->g_458 p_691->g_613 p_691->g_159 p_691->g_629 p_691->g_3 p_691->g_568 p_691->g_477 p_691->g_659 p_691->g_670 p_691->g_175 p_691->g_681 p_691->g_52 p_691->g_689
 * writes: p_691->g_402 p_691->g_78 p_691->g_136 p_691->g_69 p_691->g_302 p_691->g_477 p_691->g_3 p_691->g_484 p_691->g_8 p_691->g_105 p_691->l_comm_values p_691->g_291 p_691->g_comm_values p_691->g_678
 */
int32_t * func_9(int64_t  p_10, uint16_t  p_11, struct S1 * p_691)
{ /* block id: 136 */
    uint16_t *l_400[1];
    uint32_t *l_401 = &p_691->g_402;
    int8_t **l_409 = (void*)0;
    int32_t l_414 = (-3L);
    int16_t **l_415 = &p_691->g_152;
    int32_t l_416[2];
    int16_t l_425 = (-5L);
    uint64_t l_426 = 18446744073709551613UL;
    int32_t l_431 = 0L;
    int8_t *l_443 = (void*)0;
    VECTOR(int32_t, 2) l_446 = (VECTOR(int32_t, 2))(0x0614C695L, 0x620629D8L);
    VECTOR(uint32_t, 16) l_500 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xAE0C56A5L), 0xAE0C56A5L), 0xAE0C56A5L, 4UL, 0xAE0C56A5L, (VECTOR(uint32_t, 2))(4UL, 0xAE0C56A5L), (VECTOR(uint32_t, 2))(4UL, 0xAE0C56A5L), 4UL, 0xAE0C56A5L, 4UL, 0xAE0C56A5L);
    VECTOR(int64_t, 16) l_515 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x5239411AE862BC9AL), 0x5239411AE862BC9AL), 0x5239411AE862BC9AL, 1L, 0x5239411AE862BC9AL, (VECTOR(int64_t, 2))(1L, 0x5239411AE862BC9AL), (VECTOR(int64_t, 2))(1L, 0x5239411AE862BC9AL), 1L, 0x5239411AE862BC9AL, 1L, 0x5239411AE862BC9AL);
    uint64_t l_588 = 0xCABF2C71832B2F13L;
    int32_t l_593 = (-9L);
    uint32_t l_594 = 1UL;
    uint32_t **l_597 = &p_691->g_485[0][1][0];
    int32_t **l_604 = (void*)0;
    uint8_t l_635[6] = {0xA3L,4UL,0xA3L,0xA3L,4UL,0xA3L};
    uint16_t *l_669 = &p_691->g_175[0][1];
    uint32_t l_676 = 4294967295UL;
    int32_t *l_690 = &l_416[0];
    int i;
    for (i = 0; i < 1; i++)
        l_400[i] = &p_691->g_175[3][2];
    for (i = 0; i < 2; i++)
        l_416[i] = 0x0A75D22DL;
    if ((atomic_inc(&p_691->g_atomic_input[92 * get_linear_group_id() + 29]) == 0))
    { /* block id: 138 */
        int32_t l_305 = (-6L);
        int32_t *l_304 = &l_305;
        int32_t *l_306 = &l_305;
        uint16_t l_314 = 0x453BL;
        uint32_t l_315 = 4294967289UL;
        l_306 = (l_304 = (void*)0);
        for (l_305 = (-15); (l_305 != 22); ++l_305)
        { /* block id: 143 */
            int32_t l_310 = 0x1B8B4179L;
            int32_t *l_309 = &l_310;
            int32_t *l_311 = &l_310;
            int32_t *l_312 = &l_310;
            uint32_t l_313 = 0x8C4A1BEAL;
            l_312 = (l_311 = (l_304 = (l_306 = l_309)));
            (*l_304) = l_313;
        }
        if ((l_315 = l_314))
        { /* block id: 151 */
            VECTOR(int32_t, 2) l_316 = (VECTOR(int32_t, 2))(0x7A3B222DL, 1L);
            int8_t l_317 = (-6L);
            int32_t l_318 = 0L;
            int32_t l_319[10] = {0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L,0x18779842L};
            uint32_t l_320 = 7UL;
            uint8_t l_321 = 0x97L;
            uint32_t l_322 = 4294967295UL;
            uint32_t l_323 = 0xA3515714L;
            uint16_t l_324 = 65535UL;
            int8_t l_325 = 2L;
            int16_t l_326 = 0x5928L;
            int32_t l_327 = 0L;
            uint32_t l_328[1][4];
            int8_t l_329 = 0x1BL;
            VECTOR(uint32_t, 4) l_330 = (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xF53B9538L), 0xF53B9538L);
            VECTOR(int32_t, 8) l_331 = (VECTOR(int32_t, 8))(0x557B7079L, (VECTOR(int32_t, 4))(0x557B7079L, (VECTOR(int32_t, 2))(0x557B7079L, 4L), 4L), 4L, 0x557B7079L, 4L);
            VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(1L, 0x3315F5FEL);
            VECTOR(int32_t, 2) l_333 = (VECTOR(int32_t, 2))((-8L), 1L);
            VECTOR(int32_t, 16) l_334 = (VECTOR(int32_t, 16))(0x715E6D43L, (VECTOR(int32_t, 4))(0x715E6D43L, (VECTOR(int32_t, 2))(0x715E6D43L, 0x20C295B4L), 0x20C295B4L), 0x20C295B4L, 0x715E6D43L, 0x20C295B4L, (VECTOR(int32_t, 2))(0x715E6D43L, 0x20C295B4L), (VECTOR(int32_t, 2))(0x715E6D43L, 0x20C295B4L), 0x715E6D43L, 0x20C295B4L, 0x715E6D43L, 0x20C295B4L);
            VECTOR(int32_t, 16) l_335 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x45F9B56AL), 0x45F9B56AL), 0x45F9B56AL, 1L, 0x45F9B56AL, (VECTOR(int32_t, 2))(1L, 0x45F9B56AL), (VECTOR(int32_t, 2))(1L, 0x45F9B56AL), 1L, 0x45F9B56AL, 1L, 0x45F9B56AL);
            int16_t l_336 = 0x4EBEL;
            uint64_t l_337 = 1UL;
            int32_t l_338 = (-1L);
            VECTOR(uint64_t, 4) l_339 = (VECTOR(uint64_t, 4))(0x95B19ACEB0D73167L, (VECTOR(uint64_t, 2))(0x95B19ACEB0D73167L, 18446744073709551615UL), 18446744073709551615UL);
            int8_t l_340 = 0x7FL;
            uint16_t l_341 = 65535UL;
            int8_t l_342 = (-1L);
            int32_t l_343 = 0x6FE5C6EBL;
            uint8_t l_344 = 255UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_328[i][j] = 0x608BE7CCL;
            }
            l_316.x = (l_317 &= ((VECTOR(int32_t, 4))(l_316.yxyx)).w);
            if ((l_305 |= (l_318 , (l_344 = ((VECTOR(int32_t, 8))(0x07E1C5DAL, (-6L), l_319[2], 1L, (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x134E5D19EDF78266L, 0x1BE712611FAA5677L)).xyyy)).lo, ((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_320, ((VECTOR(int64_t, 2))(0x00353BE89B878A0CL, 3L)), ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(7L, 0x72608827A5103F6CL)).xyyx, (int64_t)l_321))), ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(0x25AF8775938D7134L, 8L)).yxyyxyyyyyxyyyyy))).s73, ((VECTOR(int64_t, 2))((-2L), 0x2A0E40A744A128F8L))))), 0x50348E2523B82901L, (l_323 = l_322), 0x42352991C5B6A719L, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x6D6071C26F647DD3L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x68CCA5A0DB5547BBL, 0x4B45986C88854932L)), 0x63E7514818A72FA4L, (-4L))), 0x48D71EEB2332D144L, 1L, 0x135201015F647245L, 0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(0x5E1EAB114B1A48CCL, 0x5556075902CEBB5CL)).yyyxyyxyyyyxxxxy, ((VECTOR(int64_t, 8))((l_325 = l_324), ((VECTOR(int64_t, 4))((l_328[0][3] = (l_327 = l_326)), 0x5EE00D3385B38C70L, 0x4773D663BE08A6CAL, 0x48D525250F0BB955L)), 0x5120B36DB2D15C47L, (-6L), 4L)).s6104325101635107, ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(5L, 0x4B30D606F1CA09A8L, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(l_329, ((VECTOR(int32_t, 2))(0x55EFBB5AL, (-1L))), (-5L))), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_330.wxwwxwzwzwwxxzyz)).hi)).s40, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_331.s6106656774442000)).s43, ((VECTOR(int32_t, 2))(l_332.yx))))).xxxyyyyxyxxxyxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_333.xxyy)).yxzyzxzyzzwyyyzy, ((VECTOR(int32_t, 4))(l_334.scc59)).wxzyzyzyxyyzwyzx))).sf1, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_335.s82)), ((VECTOR(int32_t, 8))(l_336, 3L, 0x3C766966L, ((VECTOR(int32_t, 4))(0L)), 0x17B653DFL)).s25))), ((VECTOR(int32_t, 2))((-2L)))))), ((VECTOR(int32_t, 2))(0x435533DDL)), 0x6AC8451BL, ((VECTOR(int32_t, 2))(0x60E901A9L)), 0L)).s26))).yxyxxxyyyyyxxxxx, ((VECTOR(int32_t, 16))(0x5809CD3FL))))))), ((VECTOR(int32_t, 16))((-9L)))))).lo))).s7566605402403461, (uint32_t)4294967294UL))).s62, ((VECTOR(uint32_t, 2))(0xE574611BL))))).xxxx))).w, ((VECTOR(int64_t, 2))(0x084FED21FE613C0BL)), l_337, l_338, 2L, l_339.w, ((VECTOR(int64_t, 4))(1L)), 0x26F063640EFE1D17L, 0x70D1F315753D1A51L, 4L)), ((VECTOR(int64_t, 16))(0x382A37BEC88CB0C1L)))))))), ((VECTOR(int64_t, 16))((-1L)))))).se264, ((VECTOR(int64_t, 4))(0x7C40BD5225C5E892L))))).odd)), ((VECTOR(int64_t, 2))(0x1E435D6516633D5EL)), ((VECTOR(int64_t, 2))(0L)), (-2L))).s7b39)).hi, ((VECTOR(int64_t, 2))(0x06BEA9332367E9A7L))))).hi, ((VECTOR(int64_t, 2))(1L)), 0x099728ED00CE9F88L)).s8e)), l_340, ((VECTOR(int64_t, 4))(0L)), 2L, 0x319B664EFAFB1A69L, 0x26D370E5B0C7E112L, l_341, 0x6CEA97A724F08A8BL, 0L, 0x0437FA1A6BC76516L, (-4L))).sbd))).lo , l_342), l_343, 0L, 1L)).s1))))
            { /* block id: 160 */
                uint32_t l_345 = 0x93E002ECL;
                l_318 = l_345;
            }
            else
            { /* block id: 162 */
                uint64_t l_346 = 0x79F5BF237663B5B5L;
                int16_t l_391 = 0x7FA7L;
                if (l_346)
                { /* block id: 163 */
                    int32_t l_347 = (-9L);
                    for (l_347 = 12; (l_347 <= (-21)); l_347 = safe_sub_func_uint32_t_u_u(l_347, 8))
                    { /* block id: 166 */
                        int32_t l_351 = 0x3671632AL;
                        int32_t *l_350 = &l_351;
                        l_318 = (-3L);
                        l_350 = l_350;
                    }
                    for (l_347 = 0; (l_347 > 23); l_347++)
                    { /* block id: 172 */
                        VECTOR(int32_t, 8) l_354 = (VECTOR(int32_t, 8))(0x3F350050L, (VECTOR(int32_t, 4))(0x3F350050L, (VECTOR(int32_t, 2))(0x3F350050L, (-1L)), (-1L)), (-1L), 0x3F350050L, (-1L));
                        int32_t l_355 = 0x370E39FEL;
                        int i;
                        l_355 = (l_354.s4 = (-1L));
                    }
                }
                else
                { /* block id: 176 */
                    uint32_t l_356 = 0xC8A05DF1L;
                    int32_t l_357 = 0L;
                    l_357 = l_356;
                }
                for (l_346 = (-21); (l_346 >= 4); l_346 = safe_add_func_uint32_t_u_u(l_346, 3))
                { /* block id: 181 */
                    VECTOR(int16_t, 4) l_360 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5985L), 0x5985L);
                    VECTOR(int16_t, 2) l_361 = (VECTOR(int16_t, 2))(0L, 0L);
                    VECTOR(int16_t, 4) l_362 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
                    VECTOR(int16_t, 2) l_363 = (VECTOR(int16_t, 2))(0x6DF3L, 0x309AL);
                    VECTOR(int8_t, 4) l_364 = (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 2L), 2L);
                    VECTOR(uint8_t, 4) l_365 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x9AL), 0x9AL);
                    uint32_t l_366 = 0x637540F0L;
                    uint32_t l_367[7];
                    uint32_t l_368 = 4294967288UL;
                    uint16_t l_371 = 0xC891L;
                    VECTOR(int16_t, 4) l_372 = (VECTOR(int16_t, 4))(0x1431L, (VECTOR(int16_t, 2))(0x1431L, 0x4B4AL), 0x4B4AL);
                    uint32_t l_373 = 4294967292UL;
                    VECTOR(int16_t, 4) l_374 = (VECTOR(int16_t, 4))(0x1831L, (VECTOR(int16_t, 2))(0x1831L, (-1L)), (-1L));
                    uint16_t l_375[10] = {65529UL,65528UL,65529UL,65529UL,65528UL,65529UL,65529UL,65528UL,65529UL,65529UL};
                    uint32_t l_376[5] = {9UL,9UL,9UL,9UL,9UL};
                    uint32_t l_377 = 0x24BBAFEEL;
                    VECTOR(int32_t, 2) l_378 = (VECTOR(int32_t, 2))(0x17F44721L, 0L);
                    int32_t *l_385 = (void*)0;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_367[i] = 4UL;
                    l_318 |= ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))((-1L), 0x5D3882ABL)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(l_360.zzyxxxxw)).odd, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(l_361.yx)).xxyxyxxyxyyxxxyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_362.yxxw)).zzyxywwyyywwwxzz))))), ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_363.yxyy)).wxywwzwzxzwwxwxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(0x54L, 0x4CL)).yxxyyyxy, ((VECTOR(int8_t, 16))(l_364.ywwxwzywzzwxxyxx)).hi))).s31, ((VECTOR(uint8_t, 16))(0x7DL, ((VECTOR(uint8_t, 2))(l_365.yx)), 252UL, 0xD6L, 0UL, l_366, 0x05L, ((VECTOR(uint8_t, 8))(GROUP_DIVERGE(1, 1), 0xA8L, l_367[4], l_368, (l_321++), l_371, 0x37L, 0x34L)))).s32))), 0x7E2BL, 1L, ((VECTOR(int16_t, 2))(0L, 0x458BL)), ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(l_372.yzwyywww)).s7113220466476222, ((VECTOR(int16_t, 16))(l_373, (l_336 = (((l_326 = ((VECTOR(int16_t, 2))(l_374.yw)).even) , l_375[5]) , 9L)), 0x3069L, (l_376[4] , l_377), ((VECTOR(int16_t, 2))(0x531AL)), ((VECTOR(int16_t, 4))((-6L))), 0x06D8L, 0x2626L, ((VECTOR(int16_t, 4))(0x507DL))))))).hi, ((VECTOR(int16_t, 8))((-5L)))))), ((VECTOR(int16_t, 8))(1L))))), 0L, 0x5320L)))))))).s6b79))).zwzxzzyxyzzxzxxw, ((VECTOR(uint16_t, 16))(0x85A8L))))).sf3))).yxxxyyxy, ((VECTOR(int32_t, 8))(1L))))).s2;
                    if (((VECTOR(int32_t, 4))(l_378.yyxx)).z)
                    { /* block id: 186 */
                        int32_t l_379[4][6] = {{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L}};
                        VECTOR(int8_t, 2) l_380 = (VECTOR(int8_t, 2))(1L, 0x18L);
                        int32_t l_381 = 0x676189C8L;
                        uint64_t l_382 = 0x54DCCC375D1D049DL;
                        uint64_t l_383 = 0x636962805C59EEC7L;
                        int i, j;
                        l_378.y &= (l_305 = l_379[2][4]);
                        l_381 = ((l_380.y = FAKE_DIVERGE(p_691->group_1_offset, get_group_id(1), 10)) , (l_379[2][4] = l_381));
                        l_381 |= l_382;
                        l_305 ^= l_383;
                    }
                    else
                    { /* block id: 194 */
                        int16_t l_384 = 0x398EL;
                        l_378.y = (((VECTOR(uint32_t, 2))(1UL, 0x2F04F751L)).odd , (l_319[3] = l_384));
                    }
                    l_304 = l_385;
                    for (l_363.x = 2; (l_363.x > (-5)); l_363.x = safe_sub_func_int8_t_s_s(l_363.x, 9))
                    { /* block id: 201 */
                        int64_t l_388 = 0x3E1428946FE93119L;
                        int8_t l_389 = 0L;
                        int32_t l_390 = 0x4031D3BCL;
                        l_389 = l_388;
                        l_318 ^= l_390;
                    }
                }
                l_319[1] ^= l_391;
            }
            l_305 = (l_319[2] |= (l_316.y = (-1L)));
        }
        else
        { /* block id: 211 */
            int32_t l_393 = 5L;
            int32_t *l_392 = &l_393;
            int32_t l_394 = 0x1AFDD8D3L;
            int8_t l_395 = 2L;
            int64_t l_396 = 0x2496DDCA573D8DB5L;
            uint8_t l_397 = 0xBBL;
            l_304 = (l_392 = (void*)0);
            l_397--;
        }
        unsigned int result = 0;
        result += l_305;
        result += l_314;
        result += l_315;
        atomic_add(&p_691->g_special_values[92 * get_linear_group_id() + 29], result);
    }
    else
    { /* block id: 216 */
        (1 + 1);
    }
    l_416[1] = (((*l_401) = ((void*)0 != l_400[0])) , ((safe_add_func_int16_t_s_s(((((*p_691->g_104) , (safe_mul_func_int16_t_s_s(0x3823L, (safe_mul_func_int8_t_s_s((((void*)0 != l_409) == (((safe_sub_func_uint8_t_u_u(((FAKE_DIVERGE(p_691->group_0_offset, get_group_id(0), 10) == (0x41L == (*p_691->g_104))) | (safe_sub_func_uint64_t_u_u((0UL > p_10), 1UL))), l_414)) , &p_691->g_152) == l_415)), (*p_691->g_104)))))) ^ (*p_691->g_290)) || l_416[1]), 0L)) ^ p_11));
    if (((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x10B768DCL)).xxxyxxxxxxyxyyyx)).sca)), ((VECTOR(int32_t, 2))(p_691->g_417.s81))))).lo)
    { /* block id: 221 */
        int32_t *l_418 = &l_416[1];
        int32_t *l_419 = (void*)0;
        int32_t *l_420 = &l_414;
        int32_t *l_421 = &l_416[1];
        int32_t *l_422 = (void*)0;
        int32_t *l_423 = &p_691->g_302;
        int32_t *l_424[2][2] = {{&p_691->g_302,&p_691->g_302},{&p_691->g_302,&p_691->g_302}};
        uint64_t *l_436 = (void*)0;
        uint64_t *l_437[10] = {&l_426,&l_426,&l_426,&l_426,&l_426,&l_426,&l_426,&l_426,&l_426,&l_426};
        int8_t *l_442 = &p_691->g_105;
        VECTOR(int32_t, 16) l_448 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x011E8644L), 0x011E8644L), 0x011E8644L, 4L, 0x011E8644L, (VECTOR(int32_t, 2))(4L, 0x011E8644L), (VECTOR(int32_t, 2))(4L, 0x011E8644L), 4L, 0x011E8644L, 4L, 0x011E8644L);
        int i, j;
        l_426++;
        if (((((safe_div_func_uint64_t_u_u(l_431, GROUP_DIVERGE(1, 1))) | (((p_11 , l_421) != (void*)0) , ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((l_416[1] = p_10) || ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((((FAKE_DIVERGE(p_691->group_2_offset, get_group_id(2), 10) <= (0xFD8DL || 2UL)) != 7UL) > ((l_443 = l_442) != &p_691->g_105)), FAKE_DIVERGE(p_691->local_2_offset, get_local_id(2), 10))) , p_11), p_691->g_69)) != (*l_421))), 2)) >= l_431), 3UL)) & p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))]))) || 0x2634L) || p_691->g_136))
        { /* block id: 225 */
            VECTOR(int32_t, 16) l_447 = (VECTOR(int32_t, 16))(0x1711694EL, (VECTOR(int32_t, 4))(0x1711694EL, (VECTOR(int32_t, 2))(0x1711694EL, 0L), 0L), 0L, 0x1711694EL, 0L, (VECTOR(int32_t, 2))(0x1711694EL, 0L), (VECTOR(int32_t, 2))(0x1711694EL, 0L), 0x1711694EL, 0L, 0x1711694EL, 0L);
            int i;
            for (p_691->g_78 = 8; (p_691->g_78 >= 12); p_691->g_78 = safe_add_func_uint16_t_u_u(p_691->g_78, 8))
            { /* block id: 228 */
                (*l_420) |= 0x530B9D45L;
                (*l_420) |= ((*l_418) = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_446.yxyyyxxy)).s47)).xxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_447.s8017)), ((VECTOR(int32_t, 8))(l_448.s43d68ce5)).odd))).lo)).xyyy))).y);
                if (l_447.sd)
                    continue;
            }
        }
        else
        { /* block id: 234 */
            return (*p_691->g_7);
        }
    }
    else
    { /* block id: 237 */
        uint64_t l_454 = 0xD8CF2D9002AC9F85L;
        int32_t l_478 = 7L;
        int64_t *l_512 = (void*)0;
        int64_t *l_513 = (void*)0;
        int64_t *l_514[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        VECTOR(int64_t, 16) l_516 = (VECTOR(int64_t, 16))(0x205F35D8F881CE61L, (VECTOR(int64_t, 4))(0x205F35D8F881CE61L, (VECTOR(int64_t, 2))(0x205F35D8F881CE61L, 0x154276A0396075BAL), 0x154276A0396075BAL), 0x154276A0396075BAL, 0x205F35D8F881CE61L, 0x154276A0396075BAL, (VECTOR(int64_t, 2))(0x205F35D8F881CE61L, 0x154276A0396075BAL), (VECTOR(int64_t, 2))(0x205F35D8F881CE61L, 0x154276A0396075BAL), 0x205F35D8F881CE61L, 0x154276A0396075BAL, 0x205F35D8F881CE61L, 0x154276A0396075BAL);
        VECTOR(int64_t, 16) l_517 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x4DFDD124FA087A71L), 0x4DFDD124FA087A71L), 0x4DFDD124FA087A71L, 0L, 0x4DFDD124FA087A71L, (VECTOR(int64_t, 2))(0L, 0x4DFDD124FA087A71L), (VECTOR(int64_t, 2))(0L, 0x4DFDD124FA087A71L), 0L, 0x4DFDD124FA087A71L, 0L, 0x4DFDD124FA087A71L);
        VECTOR(int64_t, 4) l_518 = (VECTOR(int64_t, 4))(0x1674E6577BC1F5CCL, (VECTOR(int64_t, 2))(0x1674E6577BC1F5CCL, 1L), 1L);
        VECTOR(uint64_t, 2) l_529 = (VECTOR(uint64_t, 2))(0UL, 0x7E000D841563625CL);
        VECTOR(uint32_t, 4) l_531 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x82756D06L), 0x82756D06L);
        int16_t *l_539 = &l_425;
        VECTOR(int16_t, 2) l_555 = (VECTOR(int16_t, 2))(0x539AL, 0x45B0L);
        int32_t l_573 = 0x11074730L;
        int32_t l_576 = 0x007D40E7L;
        VECTOR(int32_t, 4) l_577 = (VECTOR(int32_t, 4))(0x5F19B918L, (VECTOR(int32_t, 2))(0x5F19B918L, (-2L)), (-2L));
        int16_t l_584 = 0x4ADAL;
        uint8_t l_598[2];
        uint32_t ***l_601[2];
        uint32_t *l_606 = &p_691->g_402;
        int32_t **l_610 = (void*)0;
        int32_t l_655[9] = {0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL,0x43D3A1BFL};
        uint64_t l_656 = 18446744073709551615UL;
        int8_t ***l_677[6];
        VECTOR(int64_t, 16) l_688 = (VECTOR(int64_t, 16))(0x7E4AEDB0C766665FL, (VECTOR(int64_t, 4))(0x7E4AEDB0C766665FL, (VECTOR(int64_t, 2))(0x7E4AEDB0C766665FL, 1L), 1L), 1L, 0x7E4AEDB0C766665FL, 1L, (VECTOR(int64_t, 2))(0x7E4AEDB0C766665FL, 1L), (VECTOR(int64_t, 2))(0x7E4AEDB0C766665FL, 1L), 0x7E4AEDB0C766665FL, 1L, 0x7E4AEDB0C766665FL, 1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_598[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_601[i] = &l_597;
        for (i = 0; i < 6; i++)
            l_677[i] = (void*)0;
        for (p_691->g_136 = 0; (p_691->g_136 >= (-29)); p_691->g_136 = safe_sub_func_uint8_t_u_u(p_691->g_136, 1))
        { /* block id: 240 */
            int32_t **l_471[6] = {&p_691->g_8[1],&p_691->g_8[1],&p_691->g_8[1],&p_691->g_8[1],&p_691->g_8[1],&p_691->g_8[1]};
            int32_t ***l_470 = &l_471[1];
            uint32_t *l_476 = &p_691->g_477[0][3][4];
            uint64_t l_508 = 0x7BC222D0E8177198L;
            int i;
            for (p_691->g_69 = 17; (p_691->g_69 > 41); ++p_691->g_69)
            { /* block id: 243 */
                (*p_691->g_455) = (p_691->g_453 , l_454);
            }
            l_478 = (((+(safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(0x20L, (-10L))).yyxx))), ((VECTOR(uint8_t, 8))(p_691->g_458.xyyyyxyx)).lo))).y, 3))) < ((l_446.y = (FAKE_DIVERGE(p_691->group_0_offset, get_group_id(0), 10) < (safe_div_func_uint8_t_u_u(((&p_691->g_402 == (void*)0) > (((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_691->g_461.s22bb784c0c06f638)).hi)).s53)).odd && p_10) , (((*l_476) = (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_470) = &p_691->g_8[1]) == (void*)0), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((p_11 | (l_454 | p_11)) , ((((l_416[1] && 0x20L) == p_11) | (-7L)) & 0x79L)) ^ l_454), p_11)), 1)))), p_11)) , 0x3A6EL), p_691->g_461.se)), l_416[1]))) && 0xAA6BA563L)) && 0x0CE3L)), FAKE_DIVERGE(p_691->local_2_offset, get_local_id(2), 10))))) > l_454)) & p_10);
            for (p_691->g_302 = 21; (p_691->g_302 != (-10)); p_691->g_302 = safe_sub_func_int8_t_s_s(p_691->g_302, 3))
            { /* block id: 252 */
                uint32_t ** volatile *l_486 = &p_691->g_484;
                int32_t l_491 = 0x0A6793BBL;
                int16_t *l_492 = (void*)0;
                int16_t *l_493 = &l_425;
                int32_t l_509[4][4];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_509[i][j] = (-1L);
                }
                for (p_691->g_3 = 0; (p_691->g_3 > 25); p_691->g_3++)
                { /* block id: 255 */
                    int32_t *l_483 = &p_691->g_302;
                    return l_483;
                }
                (*l_486) = p_691->g_484;
                (*p_691->g_7) = (**l_470);
                l_446.x ^= (safe_mul_func_int8_t_s_s(((*p_691->g_104) = (safe_mod_func_int32_t_s_s(((l_431 , ((*l_493) = l_491)) || ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((p_10 <= (&p_691->g_484 == (l_491 , l_486))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(l_500.s3eff0c8043a956d3)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(0x06F53147L, (p_691->g_501 , (0UL & (l_509[0][0] = (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(0x46CBL, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0xEFB2L, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(0UL, 0UL)).yyyxxyyxyyyyyxxy))).se0)), 0x5A91L, (((safe_mod_func_int16_t_s_s(p_11, p_10)) < l_508) > 0x6BL), ((VECTOR(uint16_t, 8))(0x057AL)), l_491, 0x0318L, 65535UL, 65534UL)).s9, 65528UL, p_10, ((VECTOR(uint16_t, 4))(0x526CL)), ((VECTOR(uint16_t, 8))(65528UL)))).hi)).hi, ((VECTOR(uint16_t, 4))(0x21C0L))))), 65529UL, ((VECTOR(uint16_t, 8))(0UL)), 0x25F3L, 8UL)))).s4, p_11)), p_691->g_78))))), 0xECD9C957L, l_509[2][1], 0UL, ((VECTOR(uint32_t, 2))(8UL)), 0xB8C8C36FL)).s5506542666124644, ((VECTOR(uint32_t, 16))(0x0E8E63E1L))))), ((VECTOR(uint32_t, 16))(0x0524CB07L))))).odd)).s10)), p_10, ((VECTOR(uint32_t, 2))(0x5024A97CL)), ((VECTOR(uint32_t, 2))(1UL)), 0x4B27ADF0L)).lo)).zzzywzwx)).s7372113736645556))).s03)).odd)), (*p_691->g_290))), p_11)) >= p_10)), 0xC826A29BL))), l_414));
            }
        }
        for (l_426 = 0; (l_426 == 15); l_426 = safe_add_func_uint16_t_u_u(l_426, 4))
        { /* block id: 268 */
            return (*p_691->g_7);
        }
        if ((((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 2))(0x049A4161CF230F67L, 0x3E87A83222B94C48L)).yyyx, (int64_t)(p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))] = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x5491342E53F91525L, 0L)), 0x5209DBED1A392F46L, 0x31AB518F91269E98L)))).y), (int64_t)((VECTOR(int64_t, 8))(l_515.s74e384a7)).s0))))), 0x338042D7251ED8C8L, 0x4E51257A050FD073L, 0x11D04A187AB8882CL, 0L)).hi, ((VECTOR(int64_t, 16))(l_516.s8f57616d79f9fd75)).sddb9, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(l_517.s4a34)), ((VECTOR(int64_t, 2))(l_518.zz)).xyxx)))))).x , 0x561B2CA3L))
        { /* block id: 272 */
            VECTOR(uint64_t, 2) l_527 = (VECTOR(uint64_t, 2))(0UL, 0xED8D42248BF46604L);
            int16_t *l_538[10][8] = {{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425},{&l_425,(void*)0,&l_425,(void*)0,&l_425,&l_425,&l_425,&l_425}};
            uint16_t l_543 = 65535UL;
            uint8_t *l_557 = &p_691->g_18;
            int32_t l_558 = 0L;
            int32_t l_574 = 1L;
            int32_t l_575 = 6L;
            int32_t l_578 = (-4L);
            int32_t l_580 = 0x65DE0757L;
            int32_t l_581 = 0x534A41DAL;
            int32_t l_582 = (-1L);
            int32_t l_583 = 0x2DDC3742L;
            int32_t l_585 = 1L;
            int32_t l_586 = 0x3F56DDC6L;
            VECTOR(int32_t, 4) l_587 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7580AAD0L), 0x7580AAD0L);
            int32_t *l_591[3][10];
            int8_t l_592 = (-5L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                    l_591[i][j] = &l_574;
            }
            if (p_11)
            { /* block id: 273 */
                VECTOR(uint32_t, 8) l_530 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x112651BCL), 0x112651BCL), 0x112651BCL, 1UL, 0x112651BCL);
                int32_t *l_542 = &p_691->g_302;
                int i;
                l_446.y = ((!(p_691->g_15.y ^ ((((p_691->g_523[1] != p_691->g_523[0]) != (((safe_add_func_int16_t_s_s((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_527.xyxxyxxyxxxxxxyx)).sd520)), ((VECTOR(uint64_t, 8))(p_691->g_528.ywxzxwxx)), 0xC2F5521ABD1DDF05L, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(l_529.yx)), ((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 2))(l_530.s47)).yxxxyxyyyyxxxxyy, ((VECTOR(uint32_t, 16))(l_531.yzywyzzyzwzxzzyw))))).s81))), 0x216375BB237CFDE4L)).s3 > p_10) > ((*l_542) = (FAKE_DIVERGE(p_691->local_2_offset, get_local_id(2), 10) , (p_691->g_167.w || (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((l_538[8][3] != l_539), p_10)), ((safe_rshift_func_int8_t_s_u(l_478, GROUP_DIVERGE(0, 1))) && 0x62EA8ED6L))), p_11)))))) && FAKE_DIVERGE(p_691->global_2_offset, get_global_id(2), 10)), l_543)) > FAKE_DIVERGE(p_691->global_1_offset, get_global_id(1), 10)) < FAKE_DIVERGE(p_691->global_1_offset, get_global_id(1), 10))) && l_527.y) >= p_691->g_18))) >= (-1L));
            }
            else
            { /* block id: 276 */
                int32_t l_551[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_551[i] = 0x520CA8C7L;
                (*p_691->g_554) = (((*l_539) = l_414) & (((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_691->global_0_offset, get_global_id(0), 10), 12)) < ((((((VECTOR(uint64_t, 8))(p_691->g_546.xxxyxyyx)).s3 , ((safe_rshift_func_uint16_t_u_u(p_10, 15)) , (safe_rshift_func_int16_t_s_s((l_551[0] <= p_10), 5)))) != p_11) & (9L ^ p_11)) > ((8L & ((safe_lshift_func_int16_t_s_u((l_431 , 0L), 1)) && (*p_691->g_290))) , p_11))) & 1UL));
                l_478 = ((((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_555.yxyxyyxxxxyxxxyx))))).s0 && (l_414 || 1L)) , l_529.y);
                (*p_691->g_556) = (*p_691->g_7);
                l_558 ^= ((void*)0 == l_557);
            }
            for (p_691->g_291 = 0; (p_691->g_291 < 37); p_691->g_291 = safe_add_func_int32_t_s_s(p_691->g_291, 6))
            { /* block id: 285 */
                int32_t *l_561[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint16_t **l_567 = &l_400[0];
                int8_t l_579 = 0x6DL;
                int i, j;
                l_478 = (((VECTOR(uint8_t, 4))(0xD5L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0x2CL, 255UL, 0x26L, 1UL)).zxzzyyxw)).s30)), 255UL)).z >= 0x18L);
                l_446.y = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((VECTOR(int16_t, 8))(0x2229L, (p_11 != (safe_unary_minus_func_int32_t_s(0x258A5D0FL))), p_11, ((0xFC76FCADL || (((&p_691->g_78 == ((*l_567) = &p_691->g_78)) > (((VECTOR(uint64_t, 16))(p_691->g_568.s4676374302715707)).s2 == 0x0111B5F8314A7977L)) | p_10)) & (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_691->local_0_offset, get_local_id(0), 10), (safe_mul_func_int16_t_s_s(((l_527.x && 0x8EL) | 0x4DL), 0x131AL))))), 1L, ((VECTOR(int16_t, 2))(0x62C0L)), (-1L))).s0 <= 0x485AL), 0x5672L)), (-8L)));
                ++l_588;
            }
            --l_594;
            l_598[1] = (l_597 != l_597);
        }
        else
        { /* block id: 293 */
            uint32_t ***l_603 = (void*)0;
            uint32_t ****l_602 = &l_603;
            int32_t l_625 = 0x1601B1F2L;
            int32_t l_631 = 0x05597601L;
            int32_t l_632 = (-10L);
            int32_t l_633 = 0x10216993L;
            int32_t l_634 = 0x7B6348AEL;
            if (((*p_691->g_455) &= (safe_add_func_uint64_t_u_u((l_601[0] == ((*l_602) = l_601[1])), (((void*)0 == &l_443) < p_10)))))
            { /* block id: 296 */
                int32_t ***l_605 = &l_604;
                uint32_t *l_607 = (void*)0;
                int32_t l_624 = (-8L);
                int32_t **l_626 = (void*)0;
                int32_t *l_630[10][1][6] = {{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}},{{&p_691->g_68,&l_414,&l_478,(void*)0,&l_625,(void*)0}}};
                uint8_t l_650 = 0UL;
                int i, j, k;
                (*p_691->g_609) = func_38(((*l_605) = l_604), (*p_691->g_7), (l_606 == l_607), p_11, p_691);
                (*p_691->g_629) = func_38((p_691->g_458.y , l_610), func_38(l_610, &p_691->g_3, p_10, (safe_rshift_func_uint16_t_u_s(((((((VECTOR(int16_t, 8))((-5L), 0x73A6L, ((VECTOR(int16_t, 4))((0x484EL <= ((VECTOR(int16_t, 4))(p_691->g_613.wzzx)).w), (-1L), 0x0049L, 0x01ACL)), 0x43EFL, (-1L))).s0 < p_10) < (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((p_691->g_comm_values[p_691->tid] = (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((*p_691->g_104) &= ((!(((((GROUP_DIVERGE(0, 1) | (safe_rshift_func_int16_t_s_u((((VECTOR(int32_t, 2))(5L, (-10L))).hi , (safe_rshift_func_int8_t_s_u(p_10, 6))), 14))) , p_10) ^ p_11) | p_10) && l_624)) <= 0x1A4BB948L))))) >= 0xFDFC5A0291FB46E5L), 7)), 0)) < 0x54138B43F88B8337L) || 4294967294UL)) , l_625) , p_691->g_159.y), p_11)), p_691), l_446.y, p_691->g_159.w, p_691);
                --l_635[5];
                for (p_691->g_3 = 0; (p_691->g_3 > 21); p_691->g_3++)
                { /* block id: 305 */
                    uint32_t *l_645[10][7] = {{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]},{&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[4][3][0],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4],&p_691->g_477[0][3][4]}};
                    int32_t l_648 = 0x7CB1739BL;
                    int32_t l_649 = 1L;
                    int i, j;
                    l_446.x &= ((((safe_unary_minus_func_uint8_t_u((((p_691->g_568.s4 < (l_634 != 0x5D0DL)) <= (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((&p_691->g_477[1][1][3] == l_645[6][0]), (0x0790L & (((+0x38L) > (-4L)) ^ (safe_add_func_uint16_t_u_u(p_691->g_477[4][2][0], 0x7789L)))))) != 0x5CD281EE3E5A3DDDL), 255UL))) <= p_691->g_477[5][3][6]))) == p_11) ^ p_691->g_461.sc) & l_648);
                    ++l_650;
                    if ((*p_691->g_455))
                        continue;
                }
            }
            else
            { /* block id: 310 */
                int32_t *l_653 = (void*)0;
                int32_t *l_654[5][8][6] = {{{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302}},{{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302}},{{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302}},{{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302}},{{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302},{&l_416[1],&l_573,(void*)0,(void*)0,(void*)0,&p_691->g_302}}};
                VECTOR(uint64_t, 16) l_660 = (VECTOR(uint64_t, 16))(0x6272369CB65C834BL, (VECTOR(uint64_t, 4))(0x6272369CB65C834BL, (VECTOR(uint64_t, 2))(0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL), 0xEDC00A82CAADBD4EL), 0xEDC00A82CAADBD4EL, 0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL, (VECTOR(uint64_t, 2))(0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL), (VECTOR(uint64_t, 2))(0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL), 0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL, 0x6272369CB65C834BL, 0xEDC00A82CAADBD4EL);
                uint64_t *l_671 = &l_454;
                int i, j, k;
                ++l_656;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_691->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_691->g_659.s03)).yyyxxyxx)).s6 != (((l_655[7] ^= (p_11 = p_691->g_291)) && (((((((*l_671) = ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(l_660.sd4c80f48)), ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))((safe_rshift_func_uint8_t_u_u((p_11 != (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((*p_691->g_290), (+(safe_lshift_func_uint16_t_u_u(0x8E27L, 7))))) , (p_10 & ((void*)0 == l_669))), ((VECTOR(uint8_t, 4))(p_691->g_670.s7413)).w))), 5)), ((VECTOR(uint64_t, 4))((p_11 , (p_691->g_175[0][2] > p_11)), 0xDB338E6CCD94CB94L, 0xF3C6F14BA4D34C90L, 8UL)), ((VECTOR(uint64_t, 2))(0x67F6C8433A433A50L)), 0UL)), (uint64_t)GROUP_DIVERGE(1, 1), (uint64_t)FAKE_DIVERGE(p_691->local_0_offset, get_local_id(0), 10)))).hi, ((VECTOR(uint64_t, 4))(0x4309DC2AB4D846BCL))))).xywzwyxwxywwyxyx, ((VECTOR(uint64_t, 16))(0x505D02386CB28929L))))).odd))).s7) == l_633) || 0x467DD66CL) == p_10) & p_10) > p_10)) , p_10)), 10))][(safe_mod_func_uint32_t_u_u(p_691->tid, 48))]));
            }
        }
        atomic_xor(&p_691->l_atomic_reduction[0], (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_676 != ((p_691->g_678[1][0] = &p_691->g_104) != &l_443)) < ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(p_691->g_681.s2422)).xwzzyxxxxwxxwwyy, (uint16_t)(safe_div_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((p_691->g_52 ^ (0xF0B09BADD7C69DADL && p_10)), 0x323FL)) < ((((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(l_688.s3c)).xxxxxxxxyyyyxxxy))).s1b27, (int64_t)((!((p_691->g_689 , l_401) != (void*)0)) > p_11), (int64_t)4L))).y == 8L) , p_10)) && 0x29BEB826L), p_691->g_461.sd)) ^ p_11), p_11))))).s88ac, ((VECTOR(uint16_t, 4))(1UL))))), 9UL, 7UL, 1UL, 0xFD63L)).s5, FAKE_DIVERGE(p_691->local_0_offset, get_local_id(0), 10))) & p_10)), p_11)), 0x5B2AL)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_691->v_collective += p_691->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return (*p_691->g_629);
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_136
 * writes:
 */
uint32_t  func_27(uint64_t  p_28, int8_t * p_29, int8_t * p_30, uint8_t * p_31, struct S1 * p_691)
{ /* block id: 129 */
    int32_t *l_292 = &p_691->g_68;
    uint32_t l_293 = 0xE17AA485L;
    l_293++;
    return p_691->g_136;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_69 p_691->g_78 p_691->l_comm_values p_691->g_3 p_691->g_comm_values p_691->g_52 p_691->g_104 p_691->g_105 p_691->g_109 p_691->g_68 p_691->g_159 p_691->g_167 p_691->g_136 p_691->g_177 p_691->g_175
 * writes: p_691->g_69 p_691->g_3 p_691->g_136 p_691->g_109 p_691->g_152 p_691->g_175 p_691->g_177 p_691->g_68 p_691->g_78
 */
int8_t * func_32(int32_t * p_33, int8_t * p_34, int32_t * p_35, int8_t  p_36, uint64_t  p_37, struct S1 * p_691)
{ /* block id: 16 */
    int32_t l_63[6][9] = {{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L},{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L},{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L},{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L},{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L},{0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L,0x5A46D666L}};
    int32_t *l_64 = (void*)0;
    int32_t *l_65[6][1][3] = {{{&p_691->g_3,&p_691->g_3,&p_691->g_3}},{{&p_691->g_3,&p_691->g_3,&p_691->g_3}},{{&p_691->g_3,&p_691->g_3,&p_691->g_3}},{{&p_691->g_3,&p_691->g_3,&p_691->g_3}},{{&p_691->g_3,&p_691->g_3,&p_691->g_3}},{{&p_691->g_3,&p_691->g_3,&p_691->g_3}}};
    VECTOR(int8_t, 2) l_66 = (VECTOR(int8_t, 2))(0x5FL, 0x40L);
    int64_t l_67 = 0x11D30B9B3221AC85L;
    int16_t *l_137 = (void*)0;
    int16_t *l_138 = (void*)0;
    int16_t *l_139 = (void*)0;
    int16_t *l_140 = (void*)0;
    int16_t *l_141 = (void*)0;
    int16_t *l_142 = (void*)0;
    int16_t *l_143[7][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t **l_256 = (void*)0;
    int32_t **l_257 = &l_65[2][0][0];
    VECTOR(uint8_t, 16) l_260 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xDFL), 0xDFL), 0xDFL, 0UL, 0xDFL, (VECTOR(uint8_t, 2))(0UL, 0xDFL), (VECTOR(uint8_t, 2))(0UL, 0xDFL), 0UL, 0xDFL, 0UL, 0xDFL);
    uint16_t *l_269 = &p_691->g_175[0][4];
    uint16_t *l_287[6][10][4] = {{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}},{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}},{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}},{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}},{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}},{{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78},{(void*)0,&p_691->g_78,&p_691->g_78,&p_691->g_78}}};
    int8_t l_288 = 0L;
    int i, j, k;
    p_691->g_69++;
    (*l_257) = (func_72(&l_65[1][0][2], p_691->g_78, &p_691->g_68, func_79((p_691->g_109.s1 = ((-3L) != (p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))] < (p_691->g_136 = func_83(&p_691->g_8[1], p_691->g_3, p_691->g_comm_values[p_691->tid], (safe_rshift_func_uint8_t_u_s(func_90(p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))], p_37, p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))], p_691), 2)), p_691))))), p_691), p_691->g_52, p_691) , p_33);
    (*p_35) = (0xFECCL | (safe_mul_func_uint8_t_u_u((~((VECTOR(uint8_t, 16))(l_260.s5c93d2fd853d1e74)).s5), ((((p_691->g_comm_values[p_691->tid] & p_691->g_109.se) & (((l_288 |= (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_269)--), (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((p_691->g_78 ^= (safe_mul_func_uint8_t_u_u((p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))] & (*p_35)), ((p_37 , ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u(p_691->g_109.s6)) , 0x57B1F635L) ^ GROUP_DIVERGE(0, 1)), (((void*)0 == &p_691->g_68) , p_37))) | (*p_691->g_104)), p_36)), 0x7AAFL)) < p_691->g_69)) , p_37)))), 0)) , 0x5CL), p_36)) >= 0x43C7A0B0L), p_37)))), (-5L))) == FAKE_DIVERGE(p_691->global_0_offset, get_global_id(0), 10)), p_37)) | 0L), (*p_33)))) , l_287[2][6][2]) != l_143[5][3][0])) & p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))]) <= p_36))));
    return &p_691->g_105;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_38(int32_t ** p_39, int32_t * p_40, uint64_t  p_41, int64_t  p_42, struct S1 * p_691)
{ /* block id: 12 */
    int32_t *l_44 = &p_691->g_3;
    int32_t *l_45 = (void*)0;
    int32_t *l_46 = (void*)0;
    int32_t *l_47 = &p_691->g_3;
    int32_t *l_48 = &p_691->g_3;
    int32_t *l_49 = &p_691->g_3;
    int32_t l_50 = 1L;
    int32_t *l_51[2][4] = {{&l_50,&p_691->g_3,&l_50,&l_50},{&l_50,&p_691->g_3,&l_50,&l_50}};
    int8_t l_53 = (-9L);
    int16_t l_54 = 0x7F5AL;
    int16_t l_55 = 0x6DC7L;
    uint32_t l_56[3];
    uint32_t l_59 = 0x222F6125L;
    int32_t *l_62 = &l_50;
    int i, j;
    for (i = 0; i < 3; i++)
        l_56[i] = 0xB902C631L;
    l_56[2]++;
    --l_59;
    return &p_691->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_69 p_691->g_68
 * writes: p_691->g_68 p_691->g_69
 */
uint32_t  func_72(int32_t ** p_73, int16_t  p_74, int32_t * p_75, int16_t  p_76, int64_t  p_77, struct S1 * p_691)
{ /* block id: 44 */
    int32_t l_179 = 0x4BD4F19FL;
    if (l_179)
    { /* block id: 45 */
        int32_t *l_180 = &p_691->g_3;
        (*p_73) = l_180;
        if ((atomic_inc(&p_691->l_atomic_input[74]) == 2))
        { /* block id: 48 */
            int32_t l_181 = 5L;
            uint32_t l_182 = 0xF013A00DL;
            VECTOR(uint32_t, 8) l_183 = (VECTOR(uint32_t, 8))(0xD369DB5FL, (VECTOR(uint32_t, 4))(0xD369DB5FL, (VECTOR(uint32_t, 2))(0xD369DB5FL, 0UL), 0UL), 0UL, 0xD369DB5FL, 0UL);
            uint32_t l_184 = 0x9EF825D8L;
            uint32_t l_185 = 4294967294UL;
            int32_t l_244 = 0x2EC0147EL;
            int64_t l_245 = 0x76638F292811CBD2L;
            uint32_t l_246 = 0x50102660L;
            int64_t l_249 = 0x02A1ADDF37BF064AL;
            uint16_t l_250 = 65535UL;
            int i;
            l_185 = (((l_182 = l_181) , (l_184 = (FAKE_DIVERGE(p_691->local_2_offset, get_local_id(2), 10) , ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(0x881454B1L, ((VECTOR(uint32_t, 2))(1UL, 0x335461C3L)), 0UL)).yyzwwxxz, ((VECTOR(uint32_t, 16))(l_183.s5604344643040426)).lo))).s2))) , 0x07F70153L);
            for (l_184 = 0; (l_184 != 40); l_184++)
            { /* block id: 54 */
                int32_t l_188 = 0x0D75F4FCL;
                int8_t l_214 = 0x17L;
                int16_t l_215 = 0x4922L;
                int32_t l_216 = 0x416D9D7DL;
                uint32_t l_217 = 8UL;
                uint64_t l_220 = 0x51ADBA321759A175L;
                int64_t l_221 = 0x04CA89CF42382BE0L;
                for (l_188 = 0; (l_188 > 0); l_188 = safe_add_func_uint32_t_u_u(l_188, 2))
                { /* block id: 57 */
                    VECTOR(int32_t, 4) l_191 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                    VECTOR(int32_t, 16) l_192 = (VECTOR(int32_t, 16))(0x1CC5E76FL, (VECTOR(int32_t, 4))(0x1CC5E76FL, (VECTOR(int32_t, 2))(0x1CC5E76FL, 0x3F05E449L), 0x3F05E449L), 0x3F05E449L, 0x1CC5E76FL, 0x3F05E449L, (VECTOR(int32_t, 2))(0x1CC5E76FL, 0x3F05E449L), (VECTOR(int32_t, 2))(0x1CC5E76FL, 0x3F05E449L), 0x1CC5E76FL, 0x3F05E449L, 0x1CC5E76FL, 0x3F05E449L);
                    VECTOR(int32_t, 2) l_193 = (VECTOR(int32_t, 2))(0x5442B125L, 0x7A737E91L);
                    uint64_t l_194 = 0x6C36EFDC9B0EAF6BL;
                    int32_t l_195 = (-1L);
                    VECTOR(int8_t, 16) l_196 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x1FL), 0x1FL), 0x1FL, 3L, 0x1FL, (VECTOR(int8_t, 2))(3L, 0x1FL), (VECTOR(int8_t, 2))(3L, 0x1FL), 3L, 0x1FL, 3L, 0x1FL);
                    int32_t l_197 = 0L;
                    uint64_t l_198 = 0x9B853AA252B811C7L;
                    int64_t l_211 = 0x243FA880FE9571D8L;
                    int64_t l_212 = 0x7DCA33B9B0AA2AA1L;
                    uint16_t l_213 = 65535UL;
                    int i;
                    l_197 = (l_196.sf &= (l_195 = (l_194 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_191.xzzy)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_192.s8a)).yxyxyxyx)).s67))).xyxxxxyx)).lo, ((VECTOR(int32_t, 4))(l_193.yyyy))))).wwyyxwwwyzzzwxyz)).s8f)).odd)));
                    --l_198;
                    for (l_195 = 0; (l_195 == (-4)); l_195 = safe_sub_func_uint8_t_u_u(l_195, 1))
                    { /* block id: 65 */
                        uint32_t l_203 = 0x3FEC4F62L;
                        int8_t l_204[8];
                        uint32_t l_205 = 0UL;
                        int32_t l_209[1];
                        int32_t *l_208 = &l_209[0];
                        int32_t *l_210 = &l_209[0];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_204[i] = 0x60L;
                        for (i = 0; i < 1; i++)
                            l_209[i] = 0x473E7E94L;
                        l_192.sc ^= l_203;
                        ++l_205;
                        l_210 = (l_208 = l_208);
                    }
                    l_191.z &= (l_213 = (l_211 , l_212));
                }
                l_217--;
                l_188 = (l_220 = 0L);
                if (l_221)
                { /* block id: 77 */
                    int32_t l_232[2][7][5] = {{{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L}},{{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L},{1L,0x7306DE79L,0x33322A08L,0x29EC9E55L,0x33322A08L}}};
                    VECTOR(uint16_t, 16) l_239 = (VECTOR(uint16_t, 16))(0x3003L, (VECTOR(uint16_t, 4))(0x3003L, (VECTOR(uint16_t, 2))(0x3003L, 0xB4C8L), 0xB4C8L), 0xB4C8L, 0x3003L, 0xB4C8L, (VECTOR(uint16_t, 2))(0x3003L, 0xB4C8L), (VECTOR(uint16_t, 2))(0x3003L, 0xB4C8L), 0x3003L, 0xB4C8L, 0x3003L, 0xB4C8L);
                    VECTOR(uint16_t, 8) l_240 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), 65532UL, 65535UL, 65532UL);
                    VECTOR(uint16_t, 4) l_241 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 5UL), 5UL);
                    uint32_t l_242 = 0xEE8DF850L;
                    int i, j, k;
                    if ((l_188 = ((VECTOR(int32_t, 2))(0x15419F9BL, 1L)).odd))
                    { /* block id: 79 */
                        uint32_t l_222 = 0x035289A4L;
                        VECTOR(uint8_t, 2) l_225 = (VECTOR(uint8_t, 2))(255UL, 1UL);
                        uint8_t *l_224 = (void*)0;
                        uint8_t **l_223 = &l_224;
                        int i;
                        l_223 = (l_222 , l_223);
                    }
                    else
                    { /* block id: 81 */
                        int8_t l_226 = (-3L);
                        int32_t l_228 = 0x01B43F70L;
                        int32_t *l_227[3][7][6] = {{{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228}},{{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228}},{{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228},{&l_228,&l_228,(void*)0,&l_228,&l_228,&l_228}}};
                        int32_t *l_229 = &l_228;
                        int32_t *l_230[3][2][9] = {{{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0}},{{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0}},{{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0},{&l_228,(void*)0,&l_228,(void*)0,&l_228,(void*)0,&l_228,&l_228,(void*)0}}};
                        int64_t l_231 = 6L;
                        int i, j, k;
                        l_230[2][0][2] = (l_226 , (l_229 = l_227[0][5][1]));
                        l_188 = l_231;
                    }
                    for (l_232[1][1][3] = 0; (l_232[1][1][3] > 7); l_232[1][1][3] = safe_add_func_int8_t_s_s(l_232[1][1][3], 9))
                    { /* block id: 88 */
                        int8_t l_235[1][8];
                        uint8_t l_236 = 0xCBL;
                        int16_t l_237 = (-2L);
                        uint32_t l_238 = 0x99DD778AL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_235[i][j] = 1L;
                        }
                        l_235[0][4] |= 0x32A4EBFBL;
                        l_188 &= l_236;
                        l_188 ^= (-1L);
                        l_238 = l_237;
                    }
                    l_232[0][5][4] = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(l_239.s86d2)), ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(l_240.s00)), ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(l_241.yxwz)).xxwwzyww))).s45))).xyxy))).zwyywzwyxzyzzxxx)).sd , l_242);
                }
                else
                { /* block id: 95 */
                    uint64_t l_243[7] = {0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL,0x3D7DBF13F1C3035DL};
                    int i;
                    l_243[4] &= 0x634A7E3DL;
                }
            }
            l_246++;
            l_250 = l_249;
            unsigned int result = 0;
            result += l_181;
            result += l_182;
            result += l_183.s7;
            result += l_183.s6;
            result += l_183.s5;
            result += l_183.s4;
            result += l_183.s3;
            result += l_183.s2;
            result += l_183.s1;
            result += l_183.s0;
            result += l_184;
            result += l_185;
            result += l_244;
            result += l_245;
            result += l_246;
            result += l_249;
            result += l_250;
            atomic_add(&p_691->l_special_values[74], result);
        }
        else
        { /* block id: 101 */
            (1 + 1);
        }
    }
    else
    { /* block id: 104 */
        VECTOR(int32_t, 8) l_251 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-3L)), (-3L)), (-3L), (-10L), (-3L));
        int i;
        (*p_75) = l_251.s6;
        if ((atomic_inc(&p_691->l_atomic_input[62]) == 8))
        { /* block id: 107 */
            int32_t *l_252 = (void*)0;
            int32_t *l_253 = (void*)0;
            l_253 = l_252;
            unsigned int result = 0;
            atomic_add(&p_691->l_special_values[62], result);
        }
        else
        { /* block id: 109 */
            (1 + 1);
        }
        (*p_73) = (*p_73);
        for (p_691->g_69 = (-4); (p_691->g_69 < 10); ++p_691->g_69)
        { /* block id: 115 */
            return p_77;
        }
    }
    (*p_73) = &l_179;
    (*p_75) ^= l_179;
    return p_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->l_comm_values p_691->g_159 p_691->g_167 p_691->g_104 p_691->g_105 p_691->g_136 p_691->g_177 p_691->g_109
 * writes: p_691->g_152 p_691->g_69 p_691->g_175 p_691->g_177
 */
int16_t  func_79(int16_t  p_80, struct S1 * p_691)
{ /* block id: 37 */
    int16_t *l_151 = (void*)0;
    int16_t **l_150[9] = {&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151};
    int32_t l_160[5][4] = {{0x1CE891F9L,0L,0x1CE891F9L,0x1CE891F9L},{0x1CE891F9L,0L,0x1CE891F9L,0x1CE891F9L},{0x1CE891F9L,0L,0x1CE891F9L,0x1CE891F9L},{0x1CE891F9L,0L,0x1CE891F9L,0x1CE891F9L},{0x1CE891F9L,0L,0x1CE891F9L,0x1CE891F9L}};
    VECTOR(uint8_t, 2) l_168 = (VECTOR(uint8_t, 2))(0xD7L, 251UL);
    int64_t *l_169[6];
    VECTOR(int64_t, 16) l_170 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x58F7840E07A67372L), 0x58F7840E07A67372L), 0x58F7840E07A67372L, 2L, 0x58F7840E07A67372L, (VECTOR(int64_t, 2))(2L, 0x58F7840E07A67372L), (VECTOR(int64_t, 2))(2L, 0x58F7840E07A67372L), 2L, 0x58F7840E07A67372L, 2L, 0x58F7840E07A67372L);
    uint16_t *l_173 = (void*)0;
    uint16_t *l_174 = &p_691->g_175[0][2];
    uint32_t *l_176[1][4];
    int32_t l_178 = 0x61155E2CL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_169[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_176[i][j] = (void*)0;
    }
    l_178 ^= ((((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((&p_80 == (p_691->g_152 = &p_80)), (safe_sub_func_int16_t_s_s((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((safe_mod_func_uint32_t_u_u(p_80, p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))])) | ((p_691->g_177 ^= (safe_lshift_func_int8_t_s_s((((VECTOR(int16_t, 2))(p_691->g_159.wz)).odd & ((p_691->l_comm_values[(safe_mod_func_uint32_t_u_u(p_691->tid, 48))] == (l_160[4][0] < (((((*l_174) = ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_mod_func_uint64_t_u_u((p_691->g_69 = ((safe_mod_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(((((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_691->g_167.zzwyzwzw)).odd)).z == FAKE_DIVERGE(p_691->global_1_offset, get_global_id(1), 10)) & (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(l_168.yyyy)).xxzzzwwwyzwzwzxz, ((VECTOR(uint8_t, 8))((l_169[0] != l_169[4]), 1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x2FL, (+(((VECTOR(int64_t, 8))(l_170.scf455fc1)).s2 <= (safe_sub_func_int8_t_s_s(p_80, (*p_691->g_104))))), 255UL, 254UL)))), 3UL, 255UL)).s2061622141562557))).s28)).yyxxyxyyxyxyxxyy)).sa == 0L)) > p_80) & l_160[2][2]), p_80)) != p_691->g_136) || p_80), 0x1183L)) , p_80)), 0x88F0C4BB2AAA4A64L)), p_80, p_691->g_105, p_691->g_159.x, 0x23L, ((VECTOR(uint8_t, 8))(0UL)), p_80, 0x63L, 0x6AL)).even)).even, ((VECTOR(uint8_t, 4))(0x36L)), ((VECTOR(uint8_t, 4))(0xC5L))))).lo, ((VECTOR(uint8_t, 2))(0UL))))).xxyyyxyy)).s1761213211117711)), ((VECTOR(uint16_t, 16))(0x2D43L))))).se) != 0xE969L) , l_160[4][0]) | l_160[4][0]))) & 0x099B265C909B225CL)), (*p_691->g_104)))) > l_160[3][0])), 0x32L, 0x44L, (-1L), ((VECTOR(int8_t, 2))(0x32L)), (-1L), 3L))))), ((VECTOR(int8_t, 8))(6L))))).s3 == p_691->g_109.sa), p_691->g_167.z)))), 255UL)), 7)) , 0xE986L) & (-5L)) == 0x50L) , l_170.s4) <= l_160[4][0]);
    return p_80;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_69 p_691->g_52 p_691->g_104 p_691->g_3 p_691->g_comm_values p_691->g_105 p_691->g_109 p_691->g_68
 * writes: p_691->g_3
 */
uint32_t  func_83(int32_t ** p_84, uint16_t  p_85, int16_t  p_86, int8_t  p_87, struct S1 * p_691)
{ /* block id: 20 */
    uint64_t l_94 = 1UL;
    VECTOR(uint32_t, 16) l_99 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x643A7AF2L), 0x643A7AF2L), 0x643A7AF2L, 4294967286UL, 0x643A7AF2L, (VECTOR(uint32_t, 2))(4294967286UL, 0x643A7AF2L), (VECTOR(uint32_t, 2))(4294967286UL, 0x643A7AF2L), 4294967286UL, 0x643A7AF2L, 4294967286UL, 0x643A7AF2L);
    uint16_t l_120 = 1UL;
    int32_t l_127 = 0x6E1421FCL;
    int32_t l_134 = 1L;
    int i;
    if ((((l_94 != ((safe_mul_func_int16_t_s_s((~(-1L)), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(p_691->g_69, ((func_90(p_691->g_52, p_85, (safe_mul_func_int16_t_s_s(l_99.sf, (func_100(l_99.s4, &p_691->g_8[2], p_691->g_104, p_691) && p_86))), p_691) && l_99.sb) , p_691->g_comm_values[p_691->tid]), ((VECTOR(uint16_t, 4))(0xFAD5L)), 3UL, 0UL)), ((VECTOR(uint16_t, 8))(1UL))))).s41)).xyxyyxxxyxxyxxyx, (uint16_t)GROUP_DIVERGE(2, 1)))).sff, ((VECTOR(uint16_t, 2))(0xC94EL))))).odd)) , p_691->g_69)) & 1L) , 5L))
    { /* block id: 24 */
        VECTOR(uint16_t, 2) l_108 = (VECTOR(uint16_t, 2))(0x2A2DL, 1UL);
        VECTOR(int16_t, 16) l_110 = (VECTOR(int16_t, 16))(0x1AC6L, (VECTOR(int16_t, 4))(0x1AC6L, (VECTOR(int16_t, 2))(0x1AC6L, (-1L)), (-1L)), (-1L), 0x1AC6L, (-1L), (VECTOR(int16_t, 2))(0x1AC6L, (-1L)), (VECTOR(int16_t, 2))(0x1AC6L, (-1L)), 0x1AC6L, (-1L), 0x1AC6L, (-1L));
        int32_t l_121 = 0L;
        VECTOR(int64_t, 2) l_122 = (VECTOR(int64_t, 2))(0x3B41102A6E8E867BL, 0x65EA9AE306D4112DL);
        int32_t *l_123[1];
        uint32_t l_124 = 0x4F69CA4CL;
        int64_t *l_132 = (void*)0;
        int64_t *l_133[9][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_123[i] = (void*)0;
        l_121 = ((*p_691->g_104) >= (((((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(FAKE_DIVERGE(p_691->global_0_offset, get_global_id(0), 10), 0x599EL, 0x73A5L, 0xDF6FL)).xxyxxzyyyzwwxzwx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(1UL, p_87, 65534UL, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_108.xxyxyxxyyyxyyyxy)).s77)), 0xCDB6L, 0x65D6L)).yxxyywzxxyzywxyy)).sb3))).yxyyyxxx)).odd, ((VECTOR(uint16_t, 2))(0x9AF8L, 5UL)).yxyx))), 0x80EFL)).s6036403036622465))))).sb , (void*)0) == p_84) , (l_99.s9 , (((~(65535UL ^ ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_108.y, 0x5174L, ((VECTOR(int16_t, 2))(0x1C1FL, 0x1A48L)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(p_691->g_109.sa5)).xyyxxyxx, ((VECTOR(int16_t, 2))(l_110.s37)).xxxxxyyy, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((p_87 = (safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 6)), 12))))), (safe_add_func_uint8_t_u_u(((p_691->g_3 , (safe_mod_func_int32_t_s_s((p_691->g_68 <= l_110.sb), l_110.s7))) || (*p_691->g_104)), l_108.x)), 0L, 4L)))).wyywzwxx)).s33, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x0FL))))).xxxxxxyy, ((VECTOR(uint8_t, 8))(0xCBL)))))))), ((VECTOR(int16_t, 8))(5L))))).lo, ((VECTOR(int16_t, 4))(1L))))))))), ((VECTOR(int16_t, 8))(0x6482L))))).s3)) < l_120) > (-1L)))));
        ++l_124;
        l_127 &= ((p_86 , 1UL) ^ 0x07718F66F7A08163L);
        l_134 |= (safe_add_func_uint8_t_u_u(((GROUP_DIVERGE(0, 1) == p_86) , l_94), ((l_127 ^= (safe_lshift_func_uint8_t_u_s(p_691->g_109.s4, (*p_691->g_104)))) & p_87)));
    }
    else
    { /* block id: 31 */
        int64_t l_135[7];
        int i;
        for (i = 0; i < 7; i++)
            l_135[i] = 0x004775444CAA32A4L;
        return l_135[0];
    }
    return p_691->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_69
 * writes:
 */
uint8_t  func_90(uint32_t  p_91, uint8_t  p_92, int8_t  p_93, struct S1 * p_691)
{ /* block id: 18 */
    return p_691->g_69;
}


/* ------------------------------------------ */
/* 
 * reads : p_691->g_3
 * writes: p_691->g_3
 */
int32_t  func_100(int16_t  p_101, int32_t ** p_102, int8_t * p_103, struct S1 * p_691)
{ /* block id: 21 */
    int16_t l_106 = 0x0E32L;
    int32_t *l_107 = &p_691->g_3;
    (*l_107) = l_106;
    return (*l_107);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_comm_values[i] = 1;
    struct S1 c_692;
    struct S1* p_691 = &c_692;
    struct S1 c_693 = {
        0x505BA772L, // p_691->g_2
        0x325B3B9DL, // p_691->g_3
        {(void*)0,(void*)0,(void*)0}, // p_691->g_8
        &p_691->g_8[1], // p_691->g_7
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6B9CL), 0x6B9CL), // p_691->g_15
        252UL, // p_691->g_18
        0x4F93D1D1L, // p_691->g_52
        0x2675DE23L, // p_691->g_68
        0UL, // p_691->g_69
        9UL, // p_691->g_78
        6L, // p_691->g_105
        &p_691->g_105, // p_691->g_104
        (VECTOR(int16_t, 16))(0x6C8DL, (VECTOR(int16_t, 4))(0x6C8DL, (VECTOR(int16_t, 2))(0x6C8DL, 0x7107L), 0x7107L), 0x7107L, 0x6C8DL, 0x7107L, (VECTOR(int16_t, 2))(0x6C8DL, 0x7107L), (VECTOR(int16_t, 2))(0x6C8DL, 0x7107L), 0x6C8DL, 0x7107L, 0x6C8DL, 0x7107L), // p_691->g_109
        0x05100DBDL, // p_691->g_136
        (void*)0, // p_691->g_152
        (VECTOR(int16_t, 4))(0x1E37L, (VECTOR(int16_t, 2))(0x1E37L, 0x198EL), 0x198EL), // p_691->g_159
        (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, (-4L)), (-4L)), // p_691->g_167
        {{0x07AAL,0x07AAL,0x4698L,0x8167L,65528UL,0x8167L,0x4698L,0x07AAL},{0x07AAL,0x07AAL,0x4698L,0x8167L,65528UL,0x8167L,0x4698L,0x07AAL},{0x07AAL,0x07AAL,0x4698L,0x8167L,65528UL,0x8167L,0x4698L,0x07AAL},{0x07AAL,0x07AAL,0x4698L,0x8167L,65528UL,0x8167L,0x4698L,0x07AAL}}, // p_691->g_175
        0xABL, // p_691->g_177
        251UL, // p_691->g_291
        &p_691->g_291, // p_691->g_290
        0x086097A6L, // p_691->g_302
        0x429EDD7CL, // p_691->g_402
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_691->g_417
        {0}, // p_691->g_453
        &p_691->g_302, // p_691->g_455
        (VECTOR(uint8_t, 2))(5UL, 2UL), // p_691->g_458
        (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0xEEL), 0xEEL), 0xEEL, 4UL, 0xEEL, (VECTOR(uint8_t, 2))(4UL, 0xEEL), (VECTOR(uint8_t, 2))(4UL, 0xEEL), 4UL, 0xEEL, 4UL, 0xEEL), // p_691->g_461
        {{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}},{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}},{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}},{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}},{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}},{{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L},{0x6EDC8DAEL,0x65E5C0D2L,0x41860962L,4294967295UL,4294967295UL,4294967295UL,4294967289UL,0x69528214L}}}, // p_691->g_477
        {{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}},{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}},{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}},{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}},{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}},{{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0},{(void*)0,(void*)0,&p_691->g_477[0][2][1],(void*)0}}}, // p_691->g_485
        &p_691->g_485[5][3][0], // p_691->g_484
        {0}, // p_691->g_501
        &p_691->g_485[0][4][2], // p_691->g_524
        {&p_691->g_524,&p_691->g_524,&p_691->g_524}, // p_691->g_523
        (VECTOR(uint64_t, 4))(0xAE191B6FA7DF3A9BL, (VECTOR(uint64_t, 2))(0xAE191B6FA7DF3A9BL, 1UL), 1UL), // p_691->g_528
        (VECTOR(uint64_t, 2))(0x18CEE38AD1E533F9L, 0UL), // p_691->g_546
        &p_691->g_3, // p_691->g_554
        &p_691->g_8[2], // p_691->g_556
        (VECTOR(uint64_t, 8))(0xDB626F459E65582EL, (VECTOR(uint64_t, 4))(0xDB626F459E65582EL, (VECTOR(uint64_t, 2))(0xDB626F459E65582EL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0xDB626F459E65582EL, 18446744073709551609UL), // p_691->g_568
        (void*)0, // p_691->g_608
        &p_691->g_8[1], // p_691->g_609
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2269L), 0x2269L), // p_691->g_613
        (void*)0, // p_691->g_627
        (void*)0, // p_691->g_628
        &p_691->g_8[1], // p_691->g_629
        (VECTOR(uint16_t, 16))(0xE834L, (VECTOR(uint16_t, 4))(0xE834L, (VECTOR(uint16_t, 2))(0xE834L, 8UL), 8UL), 8UL, 0xE834L, 8UL, (VECTOR(uint16_t, 2))(0xE834L, 8UL), (VECTOR(uint16_t, 2))(0xE834L, 8UL), 0xE834L, 8UL, 0xE834L, 8UL), // p_691->g_659
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xECL), 0xECL), 0xECL, 0UL, 0xECL), // p_691->g_670
        {{(void*)0},{(void*)0}}, // p_691->g_678
        (VECTOR(uint16_t, 8))(0x8BEBL, (VECTOR(uint16_t, 4))(0x8BEBL, (VECTOR(uint16_t, 2))(0x8BEBL, 0x7A13L), 0x7A13L), 0x7A13L, 0x8BEBL, 0x7A13L), // p_691->g_681
        {0}, // p_691->g_689
        0, // p_691->v_collective
        sequence_input[get_global_id(0)], // p_691->global_0_offset
        sequence_input[get_global_id(1)], // p_691->global_1_offset
        sequence_input[get_global_id(2)], // p_691->global_2_offset
        sequence_input[get_local_id(0)], // p_691->local_0_offset
        sequence_input[get_local_id(1)], // p_691->local_1_offset
        sequence_input[get_local_id(2)], // p_691->local_2_offset
        sequence_input[get_group_id(0)], // p_691->group_0_offset
        sequence_input[get_group_id(1)], // p_691->group_1_offset
        sequence_input[get_group_id(2)], // p_691->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[0][get_linear_local_id()])), // p_691->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_692 = c_693;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_691);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_691->g_2, "p_691->g_2", print_hash_value);
    transparent_crc(p_691->g_3, "p_691->g_3", print_hash_value);
    transparent_crc(p_691->g_15.x, "p_691->g_15.x", print_hash_value);
    transparent_crc(p_691->g_15.y, "p_691->g_15.y", print_hash_value);
    transparent_crc(p_691->g_15.z, "p_691->g_15.z", print_hash_value);
    transparent_crc(p_691->g_15.w, "p_691->g_15.w", print_hash_value);
    transparent_crc(p_691->g_18, "p_691->g_18", print_hash_value);
    transparent_crc(p_691->g_52, "p_691->g_52", print_hash_value);
    transparent_crc(p_691->g_68, "p_691->g_68", print_hash_value);
    transparent_crc(p_691->g_69, "p_691->g_69", print_hash_value);
    transparent_crc(p_691->g_78, "p_691->g_78", print_hash_value);
    transparent_crc(p_691->g_105, "p_691->g_105", print_hash_value);
    transparent_crc(p_691->g_109.s0, "p_691->g_109.s0", print_hash_value);
    transparent_crc(p_691->g_109.s1, "p_691->g_109.s1", print_hash_value);
    transparent_crc(p_691->g_109.s2, "p_691->g_109.s2", print_hash_value);
    transparent_crc(p_691->g_109.s3, "p_691->g_109.s3", print_hash_value);
    transparent_crc(p_691->g_109.s4, "p_691->g_109.s4", print_hash_value);
    transparent_crc(p_691->g_109.s5, "p_691->g_109.s5", print_hash_value);
    transparent_crc(p_691->g_109.s6, "p_691->g_109.s6", print_hash_value);
    transparent_crc(p_691->g_109.s7, "p_691->g_109.s7", print_hash_value);
    transparent_crc(p_691->g_109.s8, "p_691->g_109.s8", print_hash_value);
    transparent_crc(p_691->g_109.s9, "p_691->g_109.s9", print_hash_value);
    transparent_crc(p_691->g_109.sa, "p_691->g_109.sa", print_hash_value);
    transparent_crc(p_691->g_109.sb, "p_691->g_109.sb", print_hash_value);
    transparent_crc(p_691->g_109.sc, "p_691->g_109.sc", print_hash_value);
    transparent_crc(p_691->g_109.sd, "p_691->g_109.sd", print_hash_value);
    transparent_crc(p_691->g_109.se, "p_691->g_109.se", print_hash_value);
    transparent_crc(p_691->g_109.sf, "p_691->g_109.sf", print_hash_value);
    transparent_crc(p_691->g_136, "p_691->g_136", print_hash_value);
    transparent_crc(p_691->g_159.x, "p_691->g_159.x", print_hash_value);
    transparent_crc(p_691->g_159.y, "p_691->g_159.y", print_hash_value);
    transparent_crc(p_691->g_159.z, "p_691->g_159.z", print_hash_value);
    transparent_crc(p_691->g_159.w, "p_691->g_159.w", print_hash_value);
    transparent_crc(p_691->g_167.x, "p_691->g_167.x", print_hash_value);
    transparent_crc(p_691->g_167.y, "p_691->g_167.y", print_hash_value);
    transparent_crc(p_691->g_167.z, "p_691->g_167.z", print_hash_value);
    transparent_crc(p_691->g_167.w, "p_691->g_167.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_691->g_175[i][j], "p_691->g_175[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_691->g_177, "p_691->g_177", print_hash_value);
    transparent_crc(p_691->g_291, "p_691->g_291", print_hash_value);
    transparent_crc(p_691->g_302, "p_691->g_302", print_hash_value);
    transparent_crc(p_691->g_402, "p_691->g_402", print_hash_value);
    transparent_crc(p_691->g_417.s0, "p_691->g_417.s0", print_hash_value);
    transparent_crc(p_691->g_417.s1, "p_691->g_417.s1", print_hash_value);
    transparent_crc(p_691->g_417.s2, "p_691->g_417.s2", print_hash_value);
    transparent_crc(p_691->g_417.s3, "p_691->g_417.s3", print_hash_value);
    transparent_crc(p_691->g_417.s4, "p_691->g_417.s4", print_hash_value);
    transparent_crc(p_691->g_417.s5, "p_691->g_417.s5", print_hash_value);
    transparent_crc(p_691->g_417.s6, "p_691->g_417.s6", print_hash_value);
    transparent_crc(p_691->g_417.s7, "p_691->g_417.s7", print_hash_value);
    transparent_crc(p_691->g_417.s8, "p_691->g_417.s8", print_hash_value);
    transparent_crc(p_691->g_417.s9, "p_691->g_417.s9", print_hash_value);
    transparent_crc(p_691->g_417.sa, "p_691->g_417.sa", print_hash_value);
    transparent_crc(p_691->g_417.sb, "p_691->g_417.sb", print_hash_value);
    transparent_crc(p_691->g_417.sc, "p_691->g_417.sc", print_hash_value);
    transparent_crc(p_691->g_417.sd, "p_691->g_417.sd", print_hash_value);
    transparent_crc(p_691->g_417.se, "p_691->g_417.se", print_hash_value);
    transparent_crc(p_691->g_417.sf, "p_691->g_417.sf", print_hash_value);
    transparent_crc(p_691->g_458.x, "p_691->g_458.x", print_hash_value);
    transparent_crc(p_691->g_458.y, "p_691->g_458.y", print_hash_value);
    transparent_crc(p_691->g_461.s0, "p_691->g_461.s0", print_hash_value);
    transparent_crc(p_691->g_461.s1, "p_691->g_461.s1", print_hash_value);
    transparent_crc(p_691->g_461.s2, "p_691->g_461.s2", print_hash_value);
    transparent_crc(p_691->g_461.s3, "p_691->g_461.s3", print_hash_value);
    transparent_crc(p_691->g_461.s4, "p_691->g_461.s4", print_hash_value);
    transparent_crc(p_691->g_461.s5, "p_691->g_461.s5", print_hash_value);
    transparent_crc(p_691->g_461.s6, "p_691->g_461.s6", print_hash_value);
    transparent_crc(p_691->g_461.s7, "p_691->g_461.s7", print_hash_value);
    transparent_crc(p_691->g_461.s8, "p_691->g_461.s8", print_hash_value);
    transparent_crc(p_691->g_461.s9, "p_691->g_461.s9", print_hash_value);
    transparent_crc(p_691->g_461.sa, "p_691->g_461.sa", print_hash_value);
    transparent_crc(p_691->g_461.sb, "p_691->g_461.sb", print_hash_value);
    transparent_crc(p_691->g_461.sc, "p_691->g_461.sc", print_hash_value);
    transparent_crc(p_691->g_461.sd, "p_691->g_461.sd", print_hash_value);
    transparent_crc(p_691->g_461.se, "p_691->g_461.se", print_hash_value);
    transparent_crc(p_691->g_461.sf, "p_691->g_461.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_691->g_477[i][j][k], "p_691->g_477[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_691->g_528.x, "p_691->g_528.x", print_hash_value);
    transparent_crc(p_691->g_528.y, "p_691->g_528.y", print_hash_value);
    transparent_crc(p_691->g_528.z, "p_691->g_528.z", print_hash_value);
    transparent_crc(p_691->g_528.w, "p_691->g_528.w", print_hash_value);
    transparent_crc(p_691->g_546.x, "p_691->g_546.x", print_hash_value);
    transparent_crc(p_691->g_546.y, "p_691->g_546.y", print_hash_value);
    transparent_crc(p_691->g_568.s0, "p_691->g_568.s0", print_hash_value);
    transparent_crc(p_691->g_568.s1, "p_691->g_568.s1", print_hash_value);
    transparent_crc(p_691->g_568.s2, "p_691->g_568.s2", print_hash_value);
    transparent_crc(p_691->g_568.s3, "p_691->g_568.s3", print_hash_value);
    transparent_crc(p_691->g_568.s4, "p_691->g_568.s4", print_hash_value);
    transparent_crc(p_691->g_568.s5, "p_691->g_568.s5", print_hash_value);
    transparent_crc(p_691->g_568.s6, "p_691->g_568.s6", print_hash_value);
    transparent_crc(p_691->g_568.s7, "p_691->g_568.s7", print_hash_value);
    transparent_crc(p_691->g_613.x, "p_691->g_613.x", print_hash_value);
    transparent_crc(p_691->g_613.y, "p_691->g_613.y", print_hash_value);
    transparent_crc(p_691->g_613.z, "p_691->g_613.z", print_hash_value);
    transparent_crc(p_691->g_613.w, "p_691->g_613.w", print_hash_value);
    transparent_crc(p_691->g_659.s0, "p_691->g_659.s0", print_hash_value);
    transparent_crc(p_691->g_659.s1, "p_691->g_659.s1", print_hash_value);
    transparent_crc(p_691->g_659.s2, "p_691->g_659.s2", print_hash_value);
    transparent_crc(p_691->g_659.s3, "p_691->g_659.s3", print_hash_value);
    transparent_crc(p_691->g_659.s4, "p_691->g_659.s4", print_hash_value);
    transparent_crc(p_691->g_659.s5, "p_691->g_659.s5", print_hash_value);
    transparent_crc(p_691->g_659.s6, "p_691->g_659.s6", print_hash_value);
    transparent_crc(p_691->g_659.s7, "p_691->g_659.s7", print_hash_value);
    transparent_crc(p_691->g_659.s8, "p_691->g_659.s8", print_hash_value);
    transparent_crc(p_691->g_659.s9, "p_691->g_659.s9", print_hash_value);
    transparent_crc(p_691->g_659.sa, "p_691->g_659.sa", print_hash_value);
    transparent_crc(p_691->g_659.sb, "p_691->g_659.sb", print_hash_value);
    transparent_crc(p_691->g_659.sc, "p_691->g_659.sc", print_hash_value);
    transparent_crc(p_691->g_659.sd, "p_691->g_659.sd", print_hash_value);
    transparent_crc(p_691->g_659.se, "p_691->g_659.se", print_hash_value);
    transparent_crc(p_691->g_659.sf, "p_691->g_659.sf", print_hash_value);
    transparent_crc(p_691->g_670.s0, "p_691->g_670.s0", print_hash_value);
    transparent_crc(p_691->g_670.s1, "p_691->g_670.s1", print_hash_value);
    transparent_crc(p_691->g_670.s2, "p_691->g_670.s2", print_hash_value);
    transparent_crc(p_691->g_670.s3, "p_691->g_670.s3", print_hash_value);
    transparent_crc(p_691->g_670.s4, "p_691->g_670.s4", print_hash_value);
    transparent_crc(p_691->g_670.s5, "p_691->g_670.s5", print_hash_value);
    transparent_crc(p_691->g_670.s6, "p_691->g_670.s6", print_hash_value);
    transparent_crc(p_691->g_670.s7, "p_691->g_670.s7", print_hash_value);
    transparent_crc(p_691->g_681.s0, "p_691->g_681.s0", print_hash_value);
    transparent_crc(p_691->g_681.s1, "p_691->g_681.s1", print_hash_value);
    transparent_crc(p_691->g_681.s2, "p_691->g_681.s2", print_hash_value);
    transparent_crc(p_691->g_681.s3, "p_691->g_681.s3", print_hash_value);
    transparent_crc(p_691->g_681.s4, "p_691->g_681.s4", print_hash_value);
    transparent_crc(p_691->g_681.s5, "p_691->g_681.s5", print_hash_value);
    transparent_crc(p_691->g_681.s6, "p_691->g_681.s6", print_hash_value);
    transparent_crc(p_691->g_681.s7, "p_691->g_681.s7", print_hash_value);
    transparent_crc(p_691->v_collective, "p_691->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_691->g_special_values[i + 92 * get_linear_group_id()], "p_691->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_691->l_special_values[i], "p_691->l_special_values[i]", print_hash_value);
    transparent_crc(p_691->l_comm_values[get_linear_local_id()], "p_691->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_691->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()], "p_691->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
