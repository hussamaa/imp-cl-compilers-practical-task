// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 2,76,36 -l 1,76,1
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

__constant uint32_t permutations[10][76] = {
{42,52,34,62,55,18,61,0,71,21,66,26,73,36,32,64,13,45,23,2,53,29,58,11,57,8,51,30,4,35,49,40,20,3,7,16,24,28,48,19,60,1,25,72,12,56,15,27,65,67,10,59,69,54,33,31,70,38,47,63,46,43,50,75,22,41,6,44,37,68,39,9,74,14,5,17}, // permutation 0
{23,5,53,39,67,52,46,42,33,25,47,61,32,41,38,4,45,57,7,1,31,10,49,19,72,29,74,28,65,71,13,36,30,9,2,66,48,27,68,70,26,75,43,8,73,56,0,12,35,51,18,14,62,55,11,17,24,34,64,22,37,59,50,54,69,15,20,21,60,63,40,16,3,44,6,58}, // permutation 1
{16,54,22,13,46,66,43,8,18,36,35,47,31,44,65,32,12,73,42,5,21,63,25,9,17,0,53,37,60,71,50,29,57,33,11,4,69,27,30,14,26,20,41,6,64,10,61,51,34,59,40,48,19,55,3,62,70,45,75,49,58,15,52,72,39,38,68,2,7,28,74,24,56,1,67,23}, // permutation 2
{15,30,28,26,3,29,72,10,74,46,33,59,8,14,45,32,67,41,13,75,71,57,42,53,49,64,6,7,61,38,16,4,55,12,66,1,20,2,44,39,62,18,68,0,48,19,70,73,58,52,5,65,23,43,17,54,47,21,25,50,60,9,22,56,31,11,35,69,24,27,63,34,36,40,37,51}, // permutation 3
{53,70,40,29,37,69,30,51,36,44,61,24,4,55,45,59,8,13,14,62,0,35,54,38,56,42,34,15,3,74,68,60,75,46,41,22,18,27,33,50,7,67,49,12,19,25,2,26,23,9,58,57,5,63,73,65,48,17,43,32,64,31,10,21,6,16,66,52,28,47,39,72,20,1,11,71}, // permutation 4
{57,41,66,36,29,52,35,17,72,6,2,68,11,8,23,40,47,54,60,70,39,30,71,69,75,61,73,5,10,42,13,38,32,31,65,26,62,7,59,19,28,49,44,58,25,4,27,18,16,12,64,51,33,3,22,15,63,14,45,21,67,37,9,53,1,46,34,43,24,50,0,55,20,74,48,56}, // permutation 5
{9,64,50,62,7,51,10,63,55,56,38,34,17,74,36,24,4,58,72,67,71,37,21,18,39,2,54,49,48,43,46,1,75,5,15,57,61,25,66,30,12,32,16,22,6,26,14,65,59,52,31,40,3,29,13,53,35,41,23,47,45,70,33,69,19,68,11,27,0,42,73,8,44,28,60,20}, // permutation 6
{22,0,46,56,43,31,16,48,74,34,6,30,75,11,68,14,72,59,24,45,67,39,69,5,23,71,38,52,7,57,3,17,10,15,58,9,32,60,12,64,18,19,8,61,50,55,25,73,36,63,54,47,51,42,49,13,27,4,26,35,37,20,40,2,44,1,66,41,28,29,70,65,21,33,53,62}, // permutation 7
{33,51,61,73,13,69,58,26,46,30,71,70,62,35,14,74,67,49,40,42,65,34,15,22,5,19,24,32,28,64,0,36,55,4,41,44,60,18,2,8,3,54,10,7,1,68,31,38,9,21,25,29,11,53,20,47,39,59,56,57,75,50,12,17,66,72,63,52,37,48,43,45,27,6,23,16}, // permutation 8
{70,15,5,48,67,22,16,6,60,55,35,30,66,62,12,42,19,49,0,28,33,51,44,20,37,40,54,9,29,53,75,36,61,71,1,24,59,38,31,4,26,32,56,8,46,13,72,39,27,73,7,21,65,14,11,64,58,17,45,3,50,69,2,47,41,10,25,63,52,68,57,18,23,74,43,34} // permutation 9
};

// Seed: 2692509918

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile uint32_t  f1;
   uint64_t  f2;
   volatile uint64_t  f3;
   uint64_t  f4;
   volatile int8_t  f5;
   int8_t  f6;
   volatile int32_t  f7;
   int64_t  f8;
   uint64_t  f9;
};

struct S1 {
   volatile int64_t  f0;
   volatile int64_t  f1;
   volatile struct S0  f2;
   struct S0  f3;
   volatile int8_t  f4;
   uint32_t  f5;
   int64_t  f6;
};

struct S3 {
    volatile VECTOR(int16_t, 16) g_11;
    uint8_t g_46;
    int32_t g_55[6][1];
    int32_t *g_54;
    int32_t g_139;
    int8_t g_197[5];
    int8_t g_200;
    int16_t g_215;
    int32_t g_217;
    uint32_t g_234;
    VECTOR(uint8_t, 8) g_235;
    VECTOR(uint8_t, 2) g_237;
    VECTOR(uint8_t, 8) g_239;
    VECTOR(uint8_t, 8) g_240;
    VECTOR(uint8_t, 2) g_241;
    VECTOR(uint8_t, 2) g_251;
    VECTOR(uint8_t, 2) g_252;
    int16_t g_274;
    int8_t g_277;
    uint16_t g_279;
    VECTOR(int8_t, 8) g_299;
    int32_t *g_307;
    VECTOR(int16_t, 16) g_313;
    int32_t **g_319[1];
    int32_t ** volatile *g_318[2][7][6];
    int64_t g_346;
    volatile int16_t g_391;
    volatile int16_t * volatile g_390;
    volatile int16_t g_393;
    volatile int16_t *g_392;
    volatile int16_t * volatile *g_389[9][9];
    VECTOR(uint32_t, 8) g_402;
    VECTOR(int64_t, 4) g_403;
    uint8_t *g_405;
    uint8_t **g_404[3];
    uint8_t **g_409;
    uint64_t g_425;
    int32_t g_447;
    uint16_t g_463;
    struct S1 g_473;
    struct S1 *g_472;
    int32_t g_482[1][6];
    struct S1 g_501;
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
uint64_t  func_1(struct S3 * p_564);
uint8_t  func_14(uint32_t  p_15, uint64_t  p_16, int64_t  p_17, int8_t  p_18, uint64_t  p_19, struct S3 * p_564);
int16_t  func_20(int8_t  p_21, int16_t  p_22, int32_t  p_23, uint32_t  p_24, int32_t  p_25, struct S3 * p_564);
int8_t  func_26(int16_t  p_27, uint32_t  p_28, struct S3 * p_564);
int32_t * func_56(int32_t * p_57, struct S3 * p_564);
int32_t  func_58(uint32_t  p_59, int64_t  p_60, int32_t  p_61, uint32_t  p_62, struct S3 * p_564);
uint8_t  func_135(int64_t  p_136, struct S3 * p_564);
uint32_t  func_145(uint32_t  p_146, int32_t * p_147, int64_t  p_148, struct S3 * p_564);
int32_t * func_149(int32_t ** p_150, uint32_t  p_151, uint32_t  p_152, uint16_t  p_153, struct S3 * p_564);
uint8_t * func_172(uint64_t  p_173, int16_t  p_174, int32_t * p_175, struct S3 * p_564);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_564->g_11 p_564->g_comm_values p_564->l_comm_values p_564->g_46 p_564->g_54 p_564->g_55 p_564->g_473.f3.f6 p_564->g_403 p_564->g_402 p_564->g_252 p_564->g_473.f5 p_564->g_501.f3.f6 p_564->g_473.f3.f4 p_564->g_234 p_564->g_501.f1 p_564->g_241 p_564->g_307 p_564->g_215 p_564->g_473.f6 p_564->g_501.f6 p_564->g_482 p_564->g_139 p_564->g_313
 * writes: p_564->g_46 p_564->g_comm_values p_564->g_55 p_564->g_215 p_564->g_473.f3.f4 p_564->g_139 p_564->g_501.f3.f6 p_564->g_473.f6 p_564->g_501.f6
 */
uint64_t  func_1(struct S3 * p_564)
{ /* block id: 4 */
    int32_t l_53 = 2L;
    int32_t *l_63 = &p_564->g_55[3][0];
    int32_t **l_90 = &l_63;
    uint8_t l_91 = 248UL;
    int16_t l_502 = 5L;
    int16_t *l_503 = &p_564->g_215;
    uint64_t *l_504 = (void*)0;
    uint64_t *l_505 = &p_564->g_473.f3.f4;
    uint32_t l_506 = 4294967293UL;
    struct S1 **l_511 = &p_564->g_472;
    uint32_t *l_514 = &l_506;
    int32_t l_525 = 0x502E2588L;
    int32_t l_526 = 0x1ABA647EL;
    int32_t l_527 = 0x2179F7E8L;
    uint32_t l_528 = 0x35A22F4AL;
    uint32_t l_558 = 0xCDFDFB97L;
    (*p_564->g_307) = ((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((((safe_add_func_uint64_t_u_u(4UL, (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(p_564->g_11.s82)).hi, (safe_mul_func_int8_t_s_s(((((*l_505) |= ((((*l_503) = (((func_14(((~func_20(func_26(p_564->g_comm_values[p_564->tid], p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))], p_564), ((l_53 , p_564->g_54) == ((*l_90) = func_56((func_58((l_63 == l_63), p_564->g_comm_values[p_564->tid], (*p_564->g_54), (*l_63), p_564) , (void*)0), p_564))), l_53, p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))], l_91, p_564)) == p_564->g_403.y), p_564->g_402.s3, p_564->g_403.y, p_564->g_252.y, p_564->g_473.f5, p_564) < l_502) >= p_564->g_501.f3.f6) <= FAKE_DIVERGE(p_564->local_1_offset, get_local_id(1), 10))) > 0x6C09L) < (-1L))) & p_564->g_234) & 0x64L), l_53)))) > l_53), 5L)))) , p_564->g_501.f1) > p_564->g_241.y))), GROUP_DIVERGE(2, 1))) , l_506);
    atomic_and(&p_564->g_atomic_reduction[get_linear_group_id()], ((void*)0 == &l_502) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_564->v_collective += p_564->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(0x3EL, (&p_564->g_472 != l_511))) || p_564->g_11.s4), (0x3C2FL | (safe_mul_func_uint16_t_u_u(0x1963L, (-1L)))))) , &l_63) != (((*l_514) = p_564->g_215) , (void*)0)))
    { /* block id: 278 */
        int32_t l_517 = (-1L);
        for (p_564->g_501.f3.f6 = 0; (p_564->g_501.f3.f6 >= 25); p_564->g_501.f3.f6 = safe_add_func_uint8_t_u_u(p_564->g_501.f3.f6, 9))
        { /* block id: 281 */
            int32_t *l_518 = (void*)0;
            int32_t *l_519 = &p_564->g_473.f3.f0;
            int32_t *l_520 = (void*)0;
            int32_t *l_521 = &p_564->g_139;
            int32_t *l_522 = &p_564->g_55[3][0];
            int32_t *l_523 = &p_564->g_447;
            int32_t *l_524[2];
            int i;
            for (i = 0; i < 2; i++)
                l_524[i] = &p_564->g_447;
            (*l_90) = func_56((l_517 , (void*)0), p_564);
            l_528--;
            for (p_564->g_473.f6 = 13; (p_564->g_473.f6 != (-29)); p_564->g_473.f6 = safe_sub_func_int32_t_s_s(p_564->g_473.f6, 3))
            { /* block id: 286 */
                if ((atomic_inc(&p_564->g_atomic_input[15 * get_linear_group_id() + 7]) == 7))
                { /* block id: 288 */
                    VECTOR(int32_t, 2) l_533 = (VECTOR(int32_t, 2))(0x6D3632B3L, 1L);
                    int32_t l_534 = (-1L);
                    int16_t l_535 = (-1L);
                    int8_t l_536 = 0L;
                    uint32_t l_537 = 8UL;
                    int32_t *l_540[9] = {&l_534,&l_534,&l_534,&l_534,&l_534,&l_534,&l_534,&l_534,&l_534};
                    int32_t *l_541 = &l_534;
                    int32_t l_542 = 0x495EB384L;
                    VECTOR(int32_t, 8) l_543 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L));
                    int8_t l_544 = (-7L);
                    VECTOR(uint64_t, 16) l_545 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0UL, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551611UL), 0UL, 18446744073709551611UL, 0UL, 18446744073709551611UL);
                    int i;
                    l_534 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_533.xyyyyxyyxyxxxyyy))))).s6d35)).w;
                    l_537++;
                    l_541 = l_540[6];
                    l_545.s7 ^= (l_544 = (l_542 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_543.s60550577)).lo)).w));
                    unsigned int result = 0;
                    result += l_533.y;
                    result += l_533.x;
                    result += l_534;
                    result += l_535;
                    result += l_536;
                    result += l_537;
                    result += l_542;
                    result += l_543.s7;
                    result += l_543.s6;
                    result += l_543.s5;
                    result += l_543.s4;
                    result += l_543.s3;
                    result += l_543.s2;
                    result += l_543.s1;
                    result += l_543.s0;
                    result += l_544;
                    result += l_545.sf;
                    result += l_545.se;
                    result += l_545.sd;
                    result += l_545.sc;
                    result += l_545.sb;
                    result += l_545.sa;
                    result += l_545.s9;
                    result += l_545.s8;
                    result += l_545.s7;
                    result += l_545.s6;
                    result += l_545.s5;
                    result += l_545.s4;
                    result += l_545.s3;
                    result += l_545.s2;
                    result += l_545.s1;
                    result += l_545.s0;
                    atomic_add(&p_564->g_special_values[15 * get_linear_group_id() + 7], result);
                }
                else
                { /* block id: 294 */
                    (1 + 1);
                }
                for (p_564->g_501.f6 = 6; (p_564->g_501.f6 == (-16)); p_564->g_501.f6--)
                { /* block id: 299 */
                    return p_564->g_482[0][3];
                }
                (*p_564->g_54) = 0x1D2506ECL;
            }
        }
    }
    else
    { /* block id: 305 */
        uint32_t l_548 = 0UL;
        int32_t *l_549 = &p_564->g_447;
        int32_t *l_550 = &p_564->g_501.f3.f0;
        int32_t *l_551 = &p_564->g_217;
        int32_t *l_552 = (void*)0;
        int32_t *l_553 = &l_525;
        int32_t *l_554 = &l_525;
        int32_t *l_555 = &p_564->g_55[5][0];
        int32_t *l_556 = &l_526;
        int32_t *l_557[3];
        int i;
        for (i = 0; i < 3; i++)
            l_557[i] = (void*)0;
        (*p_564->g_307) ^= ((+((void*)0 != p_564->g_54)) <= l_548);
        --l_558;
        for (p_564->g_139 = 28; (p_564->g_139 <= 12); p_564->g_139 = safe_sub_func_uint64_t_u_u(p_564->g_139, 7))
        { /* block id: 310 */
            int32_t *l_563 = &l_525;
            (*l_90) = (l_563 = l_552);
        }
    }
    return p_564->g_313.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_comm_values p_564->g_54
 * writes: p_564->g_comm_values p_564->g_55
 */
uint8_t  func_14(uint32_t  p_15, uint64_t  p_16, int64_t  p_17, int8_t  p_18, uint64_t  p_19, struct S3 * p_564)
{ /* block id: 269 */
    int32_t l_484 = 0x3CEA1C22L;
    VECTOR(int64_t, 2) l_489 = (VECTOR(int64_t, 2))(3L, 6L);
    struct S1 *l_500 = &p_564->g_501;
    int i;
    (*p_564->g_54) = ((l_484 & l_484) , (safe_mod_func_int16_t_s_s(0x0287L, (safe_mod_func_int64_t_s_s((p_564->g_comm_values[p_564->tid] ^= ((VECTOR(int64_t, 16))(0x09C26405D54714FAL, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(l_489.yyxxyxxxyyxxxyxy)).s2e, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(0x1EE539BF445D0519L, (safe_sub_func_uint16_t_u_u((p_19 , (+(safe_mod_func_uint16_t_u_u(l_484, p_18)))), (((safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((l_500 == (p_16 , l_500)), l_484)), p_16)), p_17)) != 5UL) >= 65535UL))), 0L, 0L, 2L, p_19, 0x23D84212981854B1L, 1L)).s07, ((VECTOR(int64_t, 2))(0x01ED2E70A35D0A86L))))), 0x5B528CAF19268616L, 1L)), ((VECTOR(int64_t, 4))(0x71CC4C9951ECC11DL))))).even))).xyyy, ((VECTOR(int64_t, 4))(8L)), ((VECTOR(int64_t, 4))(0x1F11836BE1B5F3A4L))))), ((VECTOR(int64_t, 8))(1L)), 0L, (-5L), 4L)).sd), l_489.x)))));
    return l_489.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_473.f3.f6
 * writes:
 */
int16_t  func_20(int8_t  p_21, int16_t  p_22, int32_t  p_23, uint32_t  p_24, int32_t  p_25, struct S3 * p_564)
{ /* block id: 44 */
    VECTOR(uint8_t, 8) l_122 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xB7L), 0xB7L), 0xB7L, 255UL, 0xB7L);
    int32_t l_444 = 0x7518C3E8L;
    int32_t **l_475[4][10][5] = {{{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307}},{{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307}},{{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307}},{{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307},{&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307,&p_564->g_307}}};
    VECTOR(uint16_t, 4) l_478 = (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65526UL), 65526UL);
    int8_t *l_480 = (void*)0;
    int8_t **l_479[3][5] = {{&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480}};
    uint32_t *l_481[10] = {&p_564->g_473.f5,(void*)0,&p_564->g_473.f5,&p_564->g_473.f5,(void*)0,&p_564->g_473.f5,&p_564->g_473.f5,(void*)0,&p_564->g_473.f5,&p_564->g_473.f5};
    int32_t *l_483[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (p_22 = (-13); (p_22 != (-16)); p_22--)
    { /* block id: 47 */
        uint8_t l_96 = 0x3BL;
        int16_t *l_443[2];
        int64_t l_445 = 0x7F1B7FD7344329D8L;
        int32_t *l_446 = &p_564->g_447;
        int32_t *l_448 = &p_564->g_217;
        int32_t l_465 = 0x1B0CB956L;
        int32_t l_468[2];
        int i;
        for (i = 0; i < 2; i++)
            l_443[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_468[i] = 0x238F2BCEL;
        (1 + 1);
    }
    l_483[9][0] = func_56(&p_23, p_564);
    return p_564->g_473.f3.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->l_comm_values p_564->g_46
 * writes: p_564->g_46
 */
int8_t  func_26(int16_t  p_27, uint32_t  p_28, struct S3 * p_564)
{ /* block id: 5 */
    int32_t l_52 = (-1L);
    for (p_28 = 0; (p_28 == 55); p_28 = safe_add_func_int32_t_s_s(p_28, 5))
    { /* block id: 8 */
        return p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))];
    }
    for (p_28 = 0; (p_28 >= 38); ++p_28)
    { /* block id: 13 */
        int32_t l_49 = 0x314648A5L;
        for (p_27 = (-23); (p_27 != (-30)); p_27--)
        { /* block id: 16 */
            int32_t *l_35 = (void*)0;
            int32_t l_36 = (-2L);
            int32_t *l_37 = (void*)0;
            int32_t *l_38 = &l_36;
            int32_t *l_39 = (void*)0;
            int32_t *l_40 = (void*)0;
            int32_t *l_41 = &l_36;
            int32_t *l_42 = &l_36;
            int32_t *l_43 = &l_36;
            int32_t *l_44 = &l_36;
            int32_t *l_45[9][7] = {{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36},{&l_36,&l_36,(void*)0,(void*)0,(void*)0,&l_36,&l_36}};
            int i, j;
            p_564->g_46--;
            return l_49;
        }
    }
    for (p_27 = (-25); (p_27 < (-21)); p_27 = safe_add_func_uint32_t_u_u(p_27, 1))
    { /* block id: 23 */
        return l_52;
    }
    return l_52;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_56(int32_t * p_57, struct S3 * p_564)
{ /* block id: 40 */
    int32_t *l_80 = (void*)0;
    int32_t *l_81 = &p_564->g_55[4][0];
    int32_t *l_82 = &p_564->g_55[0][0];
    int32_t *l_83[8][7][4] = {{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}},{{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]},{(void*)0,&p_564->g_55[4][0],(void*)0,&p_564->g_55[1][0]}}};
    int32_t l_84 = (-1L);
    VECTOR(int8_t, 16) l_85 = (VECTOR(int8_t, 16))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, 0x7AL), 0x7AL), 0x7AL, 0x2DL, 0x7AL, (VECTOR(int8_t, 2))(0x2DL, 0x7AL), (VECTOR(int8_t, 2))(0x2DL, 0x7AL), 0x2DL, 0x7AL, 0x2DL, 0x7AL);
    int32_t l_86 = 1L;
    uint32_t l_87 = 0xCAD6F74CL;
    int i, j, k;
    --l_87;
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_58(uint32_t  p_59, int64_t  p_60, int32_t  p_61, uint32_t  p_62, struct S3 * p_564)
{ /* block id: 27 */
    uint32_t l_64 = 0UL;
    int32_t *l_72 = &p_564->g_55[1][0];
    int32_t *l_73 = &p_564->g_55[2][0];
    int32_t *l_74 = &p_564->g_55[4][0];
    int32_t l_75 = 0x50D794A3L;
    int32_t *l_76[10][10] = {{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75},{&l_75,&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&p_564->g_55[3][0],&l_75,&l_75,&l_75}};
    uint64_t l_77 = 0x96C7BFB9E2BF2DCFL;
    int i, j;
    l_64--;
    if ((atomic_inc(&p_564->l_atomic_input[1]) == 1))
    { /* block id: 30 */
        uint32_t l_67 = 0xFBDD2A48L;
        int8_t l_68 = 0x01L;
        uint8_t l_69 = 1UL;
        uint64_t l_70 = 0x9F19B52D9B6EF542L;
        uint32_t l_71[7][4] = {{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL},{0x3A3B2B4BL,4294967286UL,4294967295UL,9UL}};
        int i, j;
        l_67 = 0x4D244069L;
        l_71[4][3] |= (l_70 |= (l_69 = l_68));
        unsigned int result = 0;
        result += l_67;
        result += l_68;
        result += l_69;
        result += l_70;
        int l_71_i0, l_71_i1;
        for (l_71_i0 = 0; l_71_i0 < 7; l_71_i0++) {
            for (l_71_i1 = 0; l_71_i1 < 4; l_71_i1++) {
                result += l_71[l_71_i0][l_71_i1];
            }
        }
        atomic_add(&p_564->l_special_values[1], result);
    }
    else
    { /* block id: 35 */
        (1 + 1);
    }
    l_77++;
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_55 p_564->l_comm_values p_564->g_46 p_564->g_comm_values p_564->g_200 p_564->g_139 p_564->g_197 p_564->g_279 p_564->g_54 p_564->g_277 p_564->g_252 p_564->g_307 p_564->g_217 p_564->g_234 p_564->g_241 p_564->g_346 p_564->g_237 p_564->g_389 p_564->g_402 p_564->g_403 p_564->g_235 p_564->g_299 p_564->g_239
 * writes: p_564->g_46 p_564->g_139 p_564->g_197 p_564->g_200 p_564->g_215 p_564->g_217 p_564->g_54 p_564->g_279 p_564->g_277 p_564->g_307 p_564->g_234 p_564->g_425
 */
uint8_t  func_135(int64_t  p_136, struct S3 * p_564)
{ /* block id: 74 */
    int32_t l_137 = 2L;
    int32_t *l_138[10];
    uint32_t l_140[1];
    int16_t l_156 = 0x3A99L;
    VECTOR(uint8_t, 16) l_159 = (VECTOR(uint8_t, 16))(0x62L, (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 0x88L), 0x88L), 0x88L, 0x62L, 0x88L, (VECTOR(uint8_t, 2))(0x62L, 0x88L), (VECTOR(uint8_t, 2))(0x62L, 0x88L), 0x62L, 0x88L, 0x62L, 0x88L);
    uint16_t l_160 = 0xFC2EL;
    uint8_t *l_161 = (void*)0;
    uint8_t *l_162 = &p_564->g_46;
    int8_t l_163[10][3][4] = {{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}},{{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L},{(-1L),0x56L,0x7EL,0x56L}}};
    uint64_t *l_424 = &p_564->g_425;
    int32_t l_426 = 1L;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_138[i] = &p_564->g_139;
    for (i = 0; i < 1; i++)
        l_140[i] = 0UL;
    --l_140[0];
    l_426 |= ((((*l_424) = ((safe_sub_func_int32_t_s_s(((p_136 != func_145(p_564->g_55[4][0], (l_138[9] = func_149(&l_138[5], p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))], ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x03C2L, (((*l_162) = func_58(p_136, l_156, (safe_mod_func_uint8_t_u_u(p_564->g_46, ((VECTOR(uint8_t, 4))(l_159.s447c)).w)), l_160, p_564)) != p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))]), ((VECTOR(uint16_t, 4))(9UL)), p_564->g_46, 0x2390L, 0UL, l_163[0][1][3], FAKE_DIVERGE(p_564->global_0_offset, get_global_id(0), 10), 3UL, ((VECTOR(uint16_t, 2))(65535UL)), 0x7499L, 0xE312L)).s4, 0x2718L)) == p_564->l_comm_values[(safe_mod_func_uint32_t_u_u(p_564->tid, 76))]), p_136, p_564)), p_564->g_299.s5, p_564)) <= 3L), (-5L))) , 0x570CF7D08B4D5217L)) || 0x7857436F2B06FA1EL) <= l_140[0]);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_564->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[(safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((*l_162) = ((p_136 < 0x96L) <= (safe_rshift_func_uint8_t_u_s((p_136 | 0x9B15L), 6)))), (safe_rshift_func_uint16_t_u_u((p_136 || p_564->g_235.s1), 8)))) || (((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))((+p_136), 0x030E39B3L, ((VECTOR(uint32_t, 4))((((((*l_162) = ((p_136 || (&l_163[4][2][1] == &l_163[0][1][3])) , p_136)) >= p_564->g_239.s1) , 1UL) | 1UL), 1UL, 0x5C9F554AL, 0xF01BAD77L)), 0x85511FB9L, 8UL)).lo))), ((VECTOR(uint32_t, 4))(0x91E24DE4L)), ((VECTOR(uint32_t, 4))(1UL))))).x, GROUP_DIVERGE(2, 1))) == p_136) >= p_136)), p_136)) , p_136) < p_136), 10))][(safe_mod_func_uint32_t_u_u(p_564->tid, 76))]));
    return p_136;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_241
 * writes:
 */
uint32_t  func_145(uint32_t  p_146, int32_t * p_147, int64_t  p_148, struct S3 * p_564)
{ /* block id: 240 */
    return p_564->g_241.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_55 p_564->g_comm_values p_564->g_200 p_564->g_139 p_564->g_46 p_564->g_197 p_564->g_279 p_564->g_54 p_564->g_277 p_564->g_252 p_564->g_307 p_564->g_217 p_564->g_234 p_564->g_241 p_564->g_346 p_564->g_237 p_564->g_389 p_564->g_402 p_564->g_403 p_564->g_235
 * writes: p_564->g_139 p_564->g_197 p_564->g_200 p_564->g_46 p_564->g_215 p_564->g_217 p_564->g_54 p_564->g_279 p_564->g_277 p_564->g_307 p_564->g_234
 */
int32_t * func_149(int32_t ** p_150, uint32_t  p_151, uint32_t  p_152, uint16_t  p_153, struct S3 * p_564)
{ /* block id: 77 */
    uint8_t *l_164 = &p_564->g_46;
    VECTOR(uint8_t, 16) l_165 = (VECTOR(uint8_t, 16))(0x79L, (VECTOR(uint8_t, 4))(0x79L, (VECTOR(uint8_t, 2))(0x79L, 0x03L), 0x03L), 0x03L, 0x79L, 0x03L, (VECTOR(uint8_t, 2))(0x79L, 0x03L), (VECTOR(uint8_t, 2))(0x79L, 0x03L), 0x79L, 0x03L, 0x79L, 0x03L);
    VECTOR(int64_t, 2) l_180 = (VECTOR(int64_t, 2))((-1L), 8L);
    VECTOR(int32_t, 8) l_183 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
    VECTOR(int32_t, 16) l_184 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x33B32C04L), 0x33B32C04L), 0x33B32C04L, 2L, 0x33B32C04L, (VECTOR(int32_t, 2))(2L, 0x33B32C04L), (VECTOR(int32_t, 2))(2L, 0x33B32C04L), 2L, 0x33B32C04L, 2L, 0x33B32C04L);
    int32_t *l_201 = &p_564->g_139;
    int32_t l_355[8][9] = {{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL},{0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL,0x5EB2513FL,0x60BA2815L,0x5EB2513FL}};
    int32_t l_362 = 0x55BD3E60L;
    int32_t l_365 = (-10L);
    int16_t *l_368 = &p_564->g_274;
    int16_t **l_369 = (void*)0;
    int16_t *l_371[9];
    int16_t **l_370 = &l_371[5];
    VECTOR(uint16_t, 2) l_372 = (VECTOR(uint16_t, 2))(0x4587L, 1UL);
    uint64_t l_386 = 7UL;
    int16_t **l_394 = &l_371[0];
    int32_t *l_396 = &p_564->g_55[5][0];
    VECTOR(int32_t, 16) l_401 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int32_t, 2))(0L, (-10L)), (VECTOR(int32_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L));
    int i, j;
    for (i = 0; i < 9; i++)
        l_371[i] = &p_564->g_274;
    if (((**p_150) = (&p_564->g_46 == l_164)))
    { /* block id: 79 */
        int32_t *l_185 = (void*)0;
        int32_t *l_186 = (void*)0;
        int32_t l_187 = 0x0C3727E3L;
        int32_t **l_189[2];
        int32_t ***l_188[1];
        int8_t *l_196 = &p_564->g_197[4];
        int8_t *l_198 = (void*)0;
        int8_t *l_199 = &p_564->g_200;
        uint8_t **l_345 = &l_164;
        int8_t *l_347 = (void*)0;
        int8_t *l_348 = (void*)0;
        int8_t *l_349 = (void*)0;
        int8_t *l_350 = (void*)0;
        int8_t *l_351 = (void*)0;
        int8_t *l_352 = (void*)0;
        int8_t *l_353[10][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        uint64_t l_354 = 0x1135BB8A3C5331D8L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_189[i] = &p_564->g_54;
        for (i = 0; i < 1; i++)
            l_188[i] = &l_189[1];
        l_355[6][4] |= (((VECTOR(uint8_t, 16))(l_165.sd4dd608b5a751367)).s1 | ((*l_201) = ((safe_sub_func_int32_t_s_s(0x1E74730EL, (safe_lshift_func_uint8_t_u_u(0x7BL, 1)))) & (safe_sub_func_int8_t_s_s((l_354 ^= (((VECTOR(int16_t, 16))(0x4357L, func_58((((&p_564->g_46 == ((*l_345) = func_172(p_564->g_55[2][0], (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(p_564->g_comm_values[p_564->tid], 3)), (((VECTOR(int64_t, 8))(l_180.xxyyyxxx)).s2 && ((safe_sub_func_int8_t_s_s(((((l_187 = (!((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_183.s20)).xxxxxyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_184.sde)).xxyy)).yxyxwzyx, ((VECTOR(int32_t, 2))(0x2510BBF2L, 6L)).xxxxyyxx))).s1)) , (p_150 = p_150)) != (void*)0) , ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((*l_199) = ((VECTOR(int8_t, 8))((+((*l_196) = ((-1L) == ((safe_lshift_func_uint8_t_u_s(p_564->g_55[4][0], l_180.y)) & l_180.y)))), 0x1CL, ((VECTOR(int8_t, 4))((-5L))), (-2L), 0x7DL)).s5), 4)), 14)) || GROUP_DIVERGE(1, 1))), 0x49L)) , 0x25CE069E19111DD0L)))), l_201, p_564))) , 0x7862L) || p_564->g_241.y), p_152, p_564->g_346, p_564->g_237.x, p_564), ((VECTOR(int16_t, 2))((-2L))), ((VECTOR(int16_t, 8))(0x0710L)), 0x494CL, ((VECTOR(int16_t, 2))(0x309EL)), 0x7A06L)).s7 && 0x7725L)), p_151)))));
    }
    else
    { /* block id: 197 */
        if ((atomic_inc(&p_564->l_atomic_input[6]) == 6))
        { /* block id: 199 */
            uint16_t l_356 = 0UL;
            int8_t l_357 = (-1L);
            uint16_t l_358[9] = {0x1225L,0UL,0x1225L,0x1225L,0UL,0x1225L,0x1225L,0UL,0x1225L};
            uint16_t l_359 = 1UL;
            int i;
            l_358[7] = (l_357 = l_356);
            --l_359;
            unsigned int result = 0;
            result += l_356;
            result += l_357;
            int l_358_i0;
            for (l_358_i0 = 0; l_358_i0 < 9; l_358_i0++) {
                result += l_358[l_358_i0];
            }
            result += l_359;
            atomic_add(&p_564->l_special_values[6], result);
        }
        else
        { /* block id: 203 */
            (1 + 1);
        }
    }
    l_355[3][3] &= (((*l_201) != ((l_362 == (safe_mul_func_int8_t_s_s((*l_201), l_365))) >= (((p_150 != (void*)0) ^ ((((safe_add_func_int16_t_s_s((l_368 == ((*l_370) = l_368)), ((VECTOR(uint16_t, 16))(l_372.xxxyyyyyxyyyyyyy)).sc)) == p_564->g_237.y) ^ p_151) < p_152)) , p_564->g_comm_values[p_564->tid]))) , (**p_150));
    if ((**p_150))
    { /* block id: 209 */
        for (p_564->g_200 = (-5); (p_564->g_200 >= (-8)); --p_564->g_200)
        { /* block id: 212 */
            for (p_564->g_217 = 8; (p_564->g_217 >= 12); p_564->g_217++)
            { /* block id: 215 */
                uint32_t l_381 = 4294967286UL;
                uint32_t l_382 = 0x3264F657L;
                int32_t *l_395 = &l_365;
                for (p_564->g_277 = 14; (p_564->g_277 != (-23)); p_564->g_277 = safe_sub_func_int64_t_s_s(p_564->g_277, 3))
                { /* block id: 218 */
                    for (p_153 = (-19); (p_153 != 35); ++p_153)
                    { /* block id: 221 */
                        uint32_t l_383 = 0x4388ADB9L;
                        int32_t *l_384 = &p_564->g_139;
                        int32_t *l_385 = &l_355[0][7];
                        if (l_381)
                            break;
                        l_383 = ((**p_150) , l_382);
                        ++l_386;
                    }
                }
                (*l_395) &= ((((-1L) < (*l_201)) | (p_564->g_389[2][3] != l_394)) <= p_153);
            }
        }
        return l_396;
    }
    else
    { /* block id: 231 */
        uint8_t ***l_406 = (void*)0;
        uint8_t **l_408 = &l_164;
        uint8_t ***l_407[4][10] = {{(void*)0,(void*)0,&l_408,(void*)0,&l_408,(void*)0,&l_408,(void*)0,(void*)0,&l_408},{(void*)0,(void*)0,&l_408,(void*)0,&l_408,(void*)0,&l_408,(void*)0,(void*)0,&l_408},{(void*)0,(void*)0,&l_408,(void*)0,&l_408,(void*)0,&l_408,(void*)0,(void*)0,&l_408},{(void*)0,(void*)0,&l_408,(void*)0,&l_408,(void*)0,&l_408,(void*)0,(void*)0,&l_408}};
        int8_t **l_420 = (void*)0;
        int8_t *l_422[3];
        int8_t **l_421 = &l_422[0];
        int32_t l_423 = (-5L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_422[i] = (void*)0;
        (*p_150) = (*p_150);
        (**p_150) = ((((((safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(0x0CDC5DD903A9DC99L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_401.sf2)).xxxx)).wwzwzxxzyyyxxzwz)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_564->g_402.s6374666636756102)).s8f07)).wwxwwxyz))).s64)), 0x504DFF21F62B22ACL)).lo, ((VECTOR(int64_t, 8))(p_564->g_403.wywywywz)).s21))).xxyx)).y, (6UL >= p_564->g_235.s0))), 7)) & ((void*)0 != p_150)) ^ (&p_564->g_277 != ((*l_421) = l_164))) & 0x6BL) | l_423) >= p_564->g_200);
    }
    return (*p_150);
}


/* ------------------------------------------ */
/* 
 * reads : p_564->g_200 p_564->g_139 p_564->g_55 p_564->g_46 p_564->g_197 p_564->g_279 p_564->g_54 p_564->g_277 p_564->g_252 p_564->g_307 p_564->g_217 p_564->g_234
 * writes: p_564->g_200 p_564->g_139 p_564->g_46 p_564->g_215 p_564->g_217 p_564->g_54 p_564->g_197 p_564->g_279 p_564->g_277 p_564->g_307 p_564->g_234
 */
uint8_t * func_172(uint64_t  p_173, int16_t  p_174, int32_t * p_175, struct S3 * p_564)
{ /* block id: 84 */
    uint8_t *l_227 = (void*)0;
    int32_t l_266[9][3] = {{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L},{0x49CAB9FEL,(-1L),4L}};
    VECTOR(int8_t, 4) l_270 = (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, (-10L)), (-10L));
    VECTOR(int8_t, 8) l_297 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L));
    VECTOR(int8_t, 4) l_302 = (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, (-1L)), (-1L));
    VECTOR(uint64_t, 2) l_310 = (VECTOR(uint64_t, 2))(0xF2F8CF585C511FBBL, 18446744073709551615UL);
    int32_t ***l_326 = (void*)0;
    int32_t **l_344 = &p_564->g_307;
    int i, j;
    for (p_564->g_200 = 0; (p_564->g_200 <= (-24)); --p_564->g_200)
    { /* block id: 87 */
        uint16_t l_224 = 65535UL;
        uint16_t l_247 = 1UL;
        int32_t ***l_254 = (void*)0;
        int32_t l_275 = 9L;
        int32_t l_276 = 0L;
        int32_t l_278 = 1L;
        int32_t **l_282 = (void*)0;
        int32_t **l_283 = &p_564->g_54;
        (*p_175) = (*p_175);
        for (p_174 = 0; (p_174 < 17); p_174 = safe_add_func_uint32_t_u_u(p_174, 9))
        { /* block id: 91 */
            int32_t **l_221 = &p_564->g_54;
            VECTOR(uint8_t, 2) l_238 = (VECTOR(uint8_t, 2))(1UL, 253UL);
            uint32_t l_259 = 4294967289UL;
            VECTOR(int16_t, 16) l_260 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 3L), 3L), 3L, (-9L), 3L, (VECTOR(int16_t, 2))((-9L), 3L), (VECTOR(int16_t, 2))((-9L), 3L), (-9L), 3L, (-9L), 3L);
            int32_t l_267 = 1L;
            int32_t *l_272 = &p_564->g_217;
            int32_t *l_273[2];
            int i;
            for (i = 0; i < 2; i++)
                l_273[i] = &p_564->g_139;
            for (p_564->g_46 = (-25); (p_564->g_46 <= 25); p_564->g_46 = safe_add_func_uint64_t_u_u(p_564->g_46, 1))
            { /* block id: 94 */
                VECTOR(uint8_t, 4) l_236 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL);
                VECTOR(uint8_t, 16) l_250 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0UL), 0UL), 0UL, 249UL, 0UL, (VECTOR(uint8_t, 2))(249UL, 0UL), (VECTOR(uint8_t, 2))(249UL, 0UL), 249UL, 0UL, 249UL, 0UL);
                int i;
                for (p_173 = 0; (p_173 > 50); ++p_173)
                { /* block id: 97 */
                    uint16_t l_218 = 65535UL;
                    int32_t l_223 = 0x17F77FB0L;
                    for (p_564->g_139 = 15; (p_564->g_139 > 26); p_564->g_139++)
                    { /* block id: 100 */
                        int16_t *l_214 = &p_564->g_215;
                        int32_t *l_216[10][2][8] = {{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}},{{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]},{&p_564->g_55[3][0],&p_564->g_217,(void*)0,(void*)0,&p_564->g_139,&p_564->g_139,&p_564->g_55[0][0],&p_564->g_55[5][0]}}};
                        int32_t ***l_222 = &l_221;
                        int i, j, k;
                        p_564->g_217 = (1UL | (safe_mod_func_uint64_t_u_u(p_564->g_55[4][0], (p_564->g_46 & ((*l_214) = p_564->g_46)))));
                        ++l_218;
                        (*l_222) = l_221;
                        ++l_224;
                    }
                    return l_227;
                }
                for (p_173 = 0; (p_173 == 37); p_173++)
                { /* block id: 111 */
                    VECTOR(uint8_t, 2) l_253 = (VECTOR(uint8_t, 2))(0x3FL, 0x09L);
                    int32_t ***l_263 = &l_221;
                    int32_t l_265 = 0x7729D41FL;
                    int i;
                    for (p_564->g_215 = 9; (p_564->g_215 < 14); p_564->g_215++)
                    { /* block id: 114 */
                        uint8_t *l_243 = (void*)0;
                        uint8_t *l_244 = (void*)0;
                        uint8_t *l_245 = (void*)0;
                        uint8_t *l_246 = (void*)0;
                        int32_t l_261 = 0L;
                        int8_t *l_262 = &p_564->g_197[0];
                        int32_t ****l_264 = &l_263;
                        (*p_175) |= ((!((safe_add_func_uint8_t_u_u((l_265 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xBBL, 255UL)), 3UL, 7UL)).zwwwxwyxyzywxzyy, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(8UL, ((VECTOR(uint8_t, 8))(p_564->g_234, 0x8BL, 251UL, ((VECTOR(uint8_t, 4))(p_564->g_235.s6142)).z, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 0x3AL)).xxxxxxyyxxyxyyyx)).sfa)), 0x42L, 0UL)), ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_236.zzwy)).yyyxwzxyxxyzxyxz))))).s4ecb, ((VECTOR(uint8_t, 8))(p_564->g_237.yyyyxxxx)).lo))), 1UL, 0xEFL, 249UL)).odd)).s5211742551555172, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(6UL, 0xB6L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(l_238.xyyxxxyx)).s67, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0x0BL, 0xCEL, 0xFEL, 0x44L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_564->g_239.s4127340406740762)).saa)), 0x1EL, 0x11L)), 0xB0L, 255UL, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(p_564->g_240.s74157277)).hi, (uint8_t)((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(p_564->g_241.xyyx)).lo))), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(2UL, (p_564->g_241.y = (safe_unary_minus_func_int8_t_s(p_174))), 255UL, 255UL, 0xD7L, (++l_247), ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(l_250.s11d4)).zyxzzwyy, ((VECTOR(uint8_t, 2))(p_564->g_251.yy)).yyxyxyyy))), 0xB9L, 7UL)).s72, ((VECTOR(uint8_t, 2))(p_564->g_252.xy)), ((VECTOR(uint8_t, 2))(l_253.yx))))), (l_254 != (((*l_262) = (safe_mod_func_int8_t_s_s(((0UL == (safe_div_func_uint64_t_u_u(p_173, l_259))) & ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_260.s6f8aa3a5)).s74)).hi), l_261))) , ((*l_264) = l_263))), ((VECTOR(uint8_t, 2))(0x0BL)), 9UL)).s50)).hi, (uint8_t)0UL))), 1UL, 1UL)).odd, ((VECTOR(uint8_t, 8))(0xDEL))))).s34))))), 254UL, 0xFCL)).lo)))), ((VECTOR(uint8_t, 4))(0xFBL)))).odd)).xwwyxzwyxzyzwwxw)))))).even, ((VECTOR(uint8_t, 8))(0xECL))))).s5700652246315744)).s6), 0x61L)) , 0L)) , 0x640594B7L);
                        (**l_263) = &p_564->g_139;
                        if (l_266[2][2])
                            continue;
                    }
                }
            }
            l_267 ^= 0x35029D74L;
            for (p_173 = 0; (p_173 <= 5); ++p_173)
            { /* block id: 129 */
                int8_t *l_271[6];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_271[i] = &p_564->g_197[1];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_564->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), 10))][(safe_mod_func_uint32_t_u_u(p_564->tid, 76))]));
                (*p_175) = (p_564->g_200 || (p_564->g_197[4] |= ((VECTOR(int8_t, 2))(l_270.xz)).even));
                (*l_221) = p_175;
            }
            ++p_564->g_279;
        }
        (*l_283) = (p_175 = p_175);
        if ((*p_564->g_54))
            continue;
    }
    for (p_174 = 0; (p_174 != (-20)); --p_174)
    { /* block id: 145 */
        VECTOR(int8_t, 16) l_296 = (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x0BL), 0x0BL), 0x0BL, 0x1AL, 0x0BL, (VECTOR(int8_t, 2))(0x1AL, 0x0BL), (VECTOR(int8_t, 2))(0x1AL, 0x0BL), 0x1AL, 0x0BL, 0x1AL, 0x0BL);
        VECTOR(int8_t, 16) l_298 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        VECTOR(int8_t, 2) l_301 = (VECTOR(int8_t, 2))(0x69L, (-10L));
        uint8_t *l_303[1];
        VECTOR(uint64_t, 16) l_308 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x7146322EF10296D8L), 0x7146322EF10296D8L), 0x7146322EF10296D8L, 1UL, 0x7146322EF10296D8L, (VECTOR(uint64_t, 2))(1UL, 0x7146322EF10296D8L), (VECTOR(uint64_t, 2))(1UL, 0x7146322EF10296D8L), 1UL, 0x7146322EF10296D8L, 1UL, 0x7146322EF10296D8L);
        VECTOR(uint64_t, 4) l_309 = (VECTOR(uint64_t, 4))(0xFF112030E4694892L, (VECTOR(uint64_t, 2))(0xFF112030E4694892L, 18446744073709551615UL), 18446744073709551615UL);
        int i;
        for (i = 0; i < 1; i++)
            l_303[i] = &p_564->g_46;
        for (p_564->g_277 = 0; (p_564->g_277 < (-14)); p_564->g_277 = safe_sub_func_int64_t_s_s(p_564->g_277, 8))
        { /* block id: 148 */
            int32_t *l_300[2];
            int8_t *l_304 = (void*)0;
            int8_t *l_305 = &p_564->g_197[4];
            uint64_t l_311 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_300[i] = &p_564->g_217;
            if ((safe_div_func_uint8_t_u_u((!p_173), (safe_sub_func_uint64_t_u_u(p_564->g_252.y, (!(safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 4))(l_296.s30dd)), (-1L), p_174, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_297.s6262)).hi)).xxxxxxyy, ((VECTOR(int8_t, 2))(l_298.s6d)).yyxyyyyy))), 4L)).s1744, (int8_t)(0x3B5BA0EBL > p_564->g_55[4][0])))).zxxzxxwxyzzxyzzy)).odd, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_564->g_299.s30)))), ((VECTOR(int8_t, 16))((l_296.s9 || (p_564->g_217 |= (*p_175))), 0x58L, (-3L), ((VECTOR(int8_t, 16))(l_301.yxyxxxxyxxyyxyyx)).sa, 6L, 1L, ((VECTOR(int8_t, 2))(l_302.ww)), p_564->g_279, 0x05L, ((*l_305) = ((void*)0 != l_303[0])), 0x0BL, 0L, ((VECTOR(int8_t, 2))(0L)), 0L)).sa1))).yxxxyxxx, ((VECTOR(int8_t, 8))((-1L)))))))))).s07, ((VECTOR(int8_t, 2))(0L))))).lo, 1L)), 0xF00F43E6A64C0B98L))))))))
            { /* block id: 151 */
                int32_t **l_306[2][6][5] = {{{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]}},{{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]},{&p_564->g_54,&p_564->g_54,&l_300[0],&l_300[0],&l_300[1]}}};
                int i, j, k;
                p_564->g_307 = (p_564->g_54 = (((GROUP_DIVERGE(1, 1) , (void*)0) == &l_300[0]) , &l_266[3][2]));
            }
            else
            { /* block id: 154 */
                uint16_t *l_312[2][3][8] = {{{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279},{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279},{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279}},{{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279},{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279},{&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279,&p_564->g_279}}};
                int16_t *l_314 = &p_564->g_274;
                VECTOR(uint64_t, 16) l_315 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 18446744073709551615UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), 18446744073709551615UL, 18446744073709551607UL, 18446744073709551615UL, 18446744073709551607UL);
                int32_t **l_327 = &p_564->g_307;
                int i, j, k;
                (*p_564->g_307) |= (((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(0x246FB89A40DE4944L, 18446744073709551609UL)).yxyxyxxy, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_308.s5f6880b504e31e79)))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x6F2AADE44BFC9AD3L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_309.zzzw)))).wxwywwwwwwyyyxwy, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(l_310.yy)).yxyx, ((VECTOR(uint64_t, 8))(18446744073709551615UL, ((VECTOR(uint64_t, 4))(((FAKE_DIVERGE(p_564->local_1_offset, get_local_id(1), 10) & p_564->g_215) >= ((*l_314) = ((l_311 & (p_564->g_279 = (p_173 || p_564->g_252.y))) , ((VECTOR(int16_t, 8))(p_564->g_313.s75a4e4e9)).s5))), ((VECTOR(uint64_t, 2))(l_315.s07)), 5UL)), (254UL >= (((p_564->g_274 == l_310.y) <= (safe_rshift_func_uint16_t_u_s(((p_564->g_318[1][4][3] == ((+(safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_298.sb, p_564->g_251.x)), l_309.w)), 0x04A6L))) , l_326)) != p_564->g_235.s4), 12))) > l_308.sf)), 1UL, 0UL)).odd))).ywyywzyzywwzxxxy))).sfb, ((VECTOR(uint64_t, 2))(0xEAA696D3643DDD8BL))))).yyyy)).even)), 0x4A6FA541254BD4C1L)), 3UL, 1UL, 4UL, 0x84CE56A27BF12A16L)).s0070335151564202))).even))).s7 == 18446744073709551615UL);
                (*l_327) = p_175;
            }
            if ((*p_175))
                continue;
            for (p_564->g_217 = 0; (p_564->g_217 >= 10); p_564->g_217++)
            { /* block id: 163 */
                for (l_311 = (-23); (l_311 == 26); l_311 = safe_add_func_uint16_t_u_u(l_311, 5))
                { /* block id: 166 */
                    uint32_t l_334 = 0x9C4815D5L;
                    for (p_564->g_234 = 0; (p_564->g_234 == 42); ++p_564->g_234)
                    { /* block id: 169 */
                        l_334--;
                    }
                }
                for (p_564->g_234 = 0; (p_564->g_234 > 16); p_564->g_234 = safe_add_func_int8_t_s_s(p_564->g_234, 7))
                { /* block id: 175 */
                    for (l_311 = 23; (l_311 < 32); l_311++)
                    { /* block id: 178 */
                        return &p_564->g_46;
                    }
                    for (p_564->g_139 = (-19); (p_564->g_139 != (-17)); p_564->g_139 = safe_add_func_int8_t_s_s(p_564->g_139, 8))
                    { /* block id: 183 */
                        int64_t l_343 = 5L;
                        l_343 = (*p_175);
                    }
                }
            }
        }
        return l_227;
    }
    (*l_344) = func_56(func_56(p_175, p_564), p_564);
    return &p_564->g_46;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_comm_values[i] = 1;
    struct S3 c_565;
    struct S3* p_564 = &c_565;
    struct S3 c_566 = {
        (VECTOR(int16_t, 16))(0x3E76L, (VECTOR(int16_t, 4))(0x3E76L, (VECTOR(int16_t, 2))(0x3E76L, 0x615EL), 0x615EL), 0x615EL, 0x3E76L, 0x615EL, (VECTOR(int16_t, 2))(0x3E76L, 0x615EL), (VECTOR(int16_t, 2))(0x3E76L, 0x615EL), 0x3E76L, 0x615EL, 0x3E76L, 0x615EL), // p_564->g_11
        0x70L, // p_564->g_46
        {{0L},{0L},{0L},{0L},{0L},{0L}}, // p_564->g_55
        &p_564->g_55[4][0], // p_564->g_54
        0x62ACBDBDL, // p_564->g_139
        {0x62L,0x62L,0x62L,0x62L,0x62L}, // p_564->g_197
        0x1DL, // p_564->g_200
        0x2341L, // p_564->g_215
        0x7DB87A81L, // p_564->g_217
        0UL, // p_564->g_234
        (VECTOR(uint8_t, 8))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 248UL), 248UL), 248UL, 6UL, 248UL), // p_564->g_235
        (VECTOR(uint8_t, 2))(0x0CL, 246UL), // p_564->g_237
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_564->g_239
        (VECTOR(uint8_t, 8))(0x5EL, (VECTOR(uint8_t, 4))(0x5EL, (VECTOR(uint8_t, 2))(0x5EL, 1UL), 1UL), 1UL, 0x5EL, 1UL), // p_564->g_240
        (VECTOR(uint8_t, 2))(0x5AL, 0x3DL), // p_564->g_241
        (VECTOR(uint8_t, 2))(0x0BL, 0UL), // p_564->g_251
        (VECTOR(uint8_t, 2))(0x86L, 0x77L), // p_564->g_252
        1L, // p_564->g_274
        0x1CL, // p_564->g_277
        0xE4F7L, // p_564->g_279
        (VECTOR(int8_t, 8))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x37L), 0x37L), 0x37L, 0x66L, 0x37L), // p_564->g_299
        &p_564->g_139, // p_564->g_307
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x46CFL), 0x46CFL), 0x46CFL, 1L, 0x46CFL, (VECTOR(int16_t, 2))(1L, 0x46CFL), (VECTOR(int16_t, 2))(1L, 0x46CFL), 1L, 0x46CFL, 1L, 0x46CFL), // p_564->g_313
        {&p_564->g_307}, // p_564->g_319
        {{{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]}},{{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]},{&p_564->g_319[0],(void*)0,&p_564->g_319[0],(void*)0,&p_564->g_319[0],&p_564->g_319[0]}}}, // p_564->g_318
        0L, // p_564->g_346
        (-10L), // p_564->g_391
        &p_564->g_391, // p_564->g_390
        0x028CL, // p_564->g_393
        &p_564->g_393, // p_564->g_392
        {{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392},{&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392,&p_564->g_392}}, // p_564->g_389
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL), // p_564->g_402
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 6L), 6L), // p_564->g_403
        (void*)0, // p_564->g_405
        {&p_564->g_405,&p_564->g_405,&p_564->g_405}, // p_564->g_404
        &p_564->g_405, // p_564->g_409
        1UL, // p_564->g_425
        0x2C5A099AL, // p_564->g_447
        0x296AL, // p_564->g_463
        {0L,0x744BFCDC0BCC96DEL,{-1L,0x298F7468L,0x40AB2B74D94DFC18L,0x994A784064BBC94AL,1UL,-1L,1L,-9L,-1L,18446744073709551615UL},{-9L,0UL,0x11D936EBE300F2AAL,7UL,0x9DE41FD42250DCF0L,0x25L,0x2EL,9L,9L,8UL},0x3CL,0xB57F156BL,0x1146D413C303BB4BL}, // p_564->g_473
        &p_564->g_473, // p_564->g_472
        {{0x3A14D9B1L,0x3A14D9B1L,0x3A14D9B1L,0x3A14D9B1L,0x3A14D9B1L,0x3A14D9B1L}}, // p_564->g_482
        {0x5374C387488A5B82L,0x43B28B59BEB13818L,{-1L,0x0724C6E1L,1UL,0x0AD5FC675931AD29L,18446744073709551615UL,0x0AL,0x10L,-6L,-1L,0UL},{0x7C3BDAF8L,0xBB4A44CFL,0x688B36A30F1F9751L,18446744073709551615UL,0x4E59491E3107FB6EL,-4L,-1L,0x2A8B36D1L,0x4B2AD70F7938935FL,0xBD9379824479375CL},-1L,3UL,1L}, // p_564->g_501
        0, // p_564->v_collective
        sequence_input[get_global_id(0)], // p_564->global_0_offset
        sequence_input[get_global_id(1)], // p_564->global_1_offset
        sequence_input[get_global_id(2)], // p_564->global_2_offset
        sequence_input[get_local_id(0)], // p_564->local_0_offset
        sequence_input[get_local_id(1)], // p_564->local_1_offset
        sequence_input[get_local_id(2)], // p_564->local_2_offset
        sequence_input[get_group_id(0)], // p_564->group_0_offset
        sequence_input[get_group_id(1)], // p_564->group_1_offset
        sequence_input[get_group_id(2)], // p_564->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 76)), permutations[0][get_linear_local_id()])), // p_564->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_565 = c_566;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_564);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_564->g_11.s0, "p_564->g_11.s0", print_hash_value);
    transparent_crc(p_564->g_11.s1, "p_564->g_11.s1", print_hash_value);
    transparent_crc(p_564->g_11.s2, "p_564->g_11.s2", print_hash_value);
    transparent_crc(p_564->g_11.s3, "p_564->g_11.s3", print_hash_value);
    transparent_crc(p_564->g_11.s4, "p_564->g_11.s4", print_hash_value);
    transparent_crc(p_564->g_11.s5, "p_564->g_11.s5", print_hash_value);
    transparent_crc(p_564->g_11.s6, "p_564->g_11.s6", print_hash_value);
    transparent_crc(p_564->g_11.s7, "p_564->g_11.s7", print_hash_value);
    transparent_crc(p_564->g_11.s8, "p_564->g_11.s8", print_hash_value);
    transparent_crc(p_564->g_11.s9, "p_564->g_11.s9", print_hash_value);
    transparent_crc(p_564->g_11.sa, "p_564->g_11.sa", print_hash_value);
    transparent_crc(p_564->g_11.sb, "p_564->g_11.sb", print_hash_value);
    transparent_crc(p_564->g_11.sc, "p_564->g_11.sc", print_hash_value);
    transparent_crc(p_564->g_11.sd, "p_564->g_11.sd", print_hash_value);
    transparent_crc(p_564->g_11.se, "p_564->g_11.se", print_hash_value);
    transparent_crc(p_564->g_11.sf, "p_564->g_11.sf", print_hash_value);
    transparent_crc(p_564->g_46, "p_564->g_46", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_564->g_55[i][j], "p_564->g_55[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_564->g_139, "p_564->g_139", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_564->g_197[i], "p_564->g_197[i]", print_hash_value);

    }
    transparent_crc(p_564->g_200, "p_564->g_200", print_hash_value);
    transparent_crc(p_564->g_215, "p_564->g_215", print_hash_value);
    transparent_crc(p_564->g_217, "p_564->g_217", print_hash_value);
    transparent_crc(p_564->g_234, "p_564->g_234", print_hash_value);
    transparent_crc(p_564->g_235.s0, "p_564->g_235.s0", print_hash_value);
    transparent_crc(p_564->g_235.s1, "p_564->g_235.s1", print_hash_value);
    transparent_crc(p_564->g_235.s2, "p_564->g_235.s2", print_hash_value);
    transparent_crc(p_564->g_235.s3, "p_564->g_235.s3", print_hash_value);
    transparent_crc(p_564->g_235.s4, "p_564->g_235.s4", print_hash_value);
    transparent_crc(p_564->g_235.s5, "p_564->g_235.s5", print_hash_value);
    transparent_crc(p_564->g_235.s6, "p_564->g_235.s6", print_hash_value);
    transparent_crc(p_564->g_235.s7, "p_564->g_235.s7", print_hash_value);
    transparent_crc(p_564->g_237.x, "p_564->g_237.x", print_hash_value);
    transparent_crc(p_564->g_237.y, "p_564->g_237.y", print_hash_value);
    transparent_crc(p_564->g_239.s0, "p_564->g_239.s0", print_hash_value);
    transparent_crc(p_564->g_239.s1, "p_564->g_239.s1", print_hash_value);
    transparent_crc(p_564->g_239.s2, "p_564->g_239.s2", print_hash_value);
    transparent_crc(p_564->g_239.s3, "p_564->g_239.s3", print_hash_value);
    transparent_crc(p_564->g_239.s4, "p_564->g_239.s4", print_hash_value);
    transparent_crc(p_564->g_239.s5, "p_564->g_239.s5", print_hash_value);
    transparent_crc(p_564->g_239.s6, "p_564->g_239.s6", print_hash_value);
    transparent_crc(p_564->g_239.s7, "p_564->g_239.s7", print_hash_value);
    transparent_crc(p_564->g_240.s0, "p_564->g_240.s0", print_hash_value);
    transparent_crc(p_564->g_240.s1, "p_564->g_240.s1", print_hash_value);
    transparent_crc(p_564->g_240.s2, "p_564->g_240.s2", print_hash_value);
    transparent_crc(p_564->g_240.s3, "p_564->g_240.s3", print_hash_value);
    transparent_crc(p_564->g_240.s4, "p_564->g_240.s4", print_hash_value);
    transparent_crc(p_564->g_240.s5, "p_564->g_240.s5", print_hash_value);
    transparent_crc(p_564->g_240.s6, "p_564->g_240.s6", print_hash_value);
    transparent_crc(p_564->g_240.s7, "p_564->g_240.s7", print_hash_value);
    transparent_crc(p_564->g_241.x, "p_564->g_241.x", print_hash_value);
    transparent_crc(p_564->g_241.y, "p_564->g_241.y", print_hash_value);
    transparent_crc(p_564->g_251.x, "p_564->g_251.x", print_hash_value);
    transparent_crc(p_564->g_251.y, "p_564->g_251.y", print_hash_value);
    transparent_crc(p_564->g_252.x, "p_564->g_252.x", print_hash_value);
    transparent_crc(p_564->g_252.y, "p_564->g_252.y", print_hash_value);
    transparent_crc(p_564->g_274, "p_564->g_274", print_hash_value);
    transparent_crc(p_564->g_277, "p_564->g_277", print_hash_value);
    transparent_crc(p_564->g_279, "p_564->g_279", print_hash_value);
    transparent_crc(p_564->g_299.s0, "p_564->g_299.s0", print_hash_value);
    transparent_crc(p_564->g_299.s1, "p_564->g_299.s1", print_hash_value);
    transparent_crc(p_564->g_299.s2, "p_564->g_299.s2", print_hash_value);
    transparent_crc(p_564->g_299.s3, "p_564->g_299.s3", print_hash_value);
    transparent_crc(p_564->g_299.s4, "p_564->g_299.s4", print_hash_value);
    transparent_crc(p_564->g_299.s5, "p_564->g_299.s5", print_hash_value);
    transparent_crc(p_564->g_299.s6, "p_564->g_299.s6", print_hash_value);
    transparent_crc(p_564->g_299.s7, "p_564->g_299.s7", print_hash_value);
    transparent_crc(p_564->g_313.s0, "p_564->g_313.s0", print_hash_value);
    transparent_crc(p_564->g_313.s1, "p_564->g_313.s1", print_hash_value);
    transparent_crc(p_564->g_313.s2, "p_564->g_313.s2", print_hash_value);
    transparent_crc(p_564->g_313.s3, "p_564->g_313.s3", print_hash_value);
    transparent_crc(p_564->g_313.s4, "p_564->g_313.s4", print_hash_value);
    transparent_crc(p_564->g_313.s5, "p_564->g_313.s5", print_hash_value);
    transparent_crc(p_564->g_313.s6, "p_564->g_313.s6", print_hash_value);
    transparent_crc(p_564->g_313.s7, "p_564->g_313.s7", print_hash_value);
    transparent_crc(p_564->g_313.s8, "p_564->g_313.s8", print_hash_value);
    transparent_crc(p_564->g_313.s9, "p_564->g_313.s9", print_hash_value);
    transparent_crc(p_564->g_313.sa, "p_564->g_313.sa", print_hash_value);
    transparent_crc(p_564->g_313.sb, "p_564->g_313.sb", print_hash_value);
    transparent_crc(p_564->g_313.sc, "p_564->g_313.sc", print_hash_value);
    transparent_crc(p_564->g_313.sd, "p_564->g_313.sd", print_hash_value);
    transparent_crc(p_564->g_313.se, "p_564->g_313.se", print_hash_value);
    transparent_crc(p_564->g_313.sf, "p_564->g_313.sf", print_hash_value);
    transparent_crc(p_564->g_346, "p_564->g_346", print_hash_value);
    transparent_crc(p_564->g_391, "p_564->g_391", print_hash_value);
    transparent_crc(p_564->g_393, "p_564->g_393", print_hash_value);
    transparent_crc(p_564->g_402.s0, "p_564->g_402.s0", print_hash_value);
    transparent_crc(p_564->g_402.s1, "p_564->g_402.s1", print_hash_value);
    transparent_crc(p_564->g_402.s2, "p_564->g_402.s2", print_hash_value);
    transparent_crc(p_564->g_402.s3, "p_564->g_402.s3", print_hash_value);
    transparent_crc(p_564->g_402.s4, "p_564->g_402.s4", print_hash_value);
    transparent_crc(p_564->g_402.s5, "p_564->g_402.s5", print_hash_value);
    transparent_crc(p_564->g_402.s6, "p_564->g_402.s6", print_hash_value);
    transparent_crc(p_564->g_402.s7, "p_564->g_402.s7", print_hash_value);
    transparent_crc(p_564->g_403.x, "p_564->g_403.x", print_hash_value);
    transparent_crc(p_564->g_403.y, "p_564->g_403.y", print_hash_value);
    transparent_crc(p_564->g_403.z, "p_564->g_403.z", print_hash_value);
    transparent_crc(p_564->g_403.w, "p_564->g_403.w", print_hash_value);
    transparent_crc(p_564->g_425, "p_564->g_425", print_hash_value);
    transparent_crc(p_564->g_447, "p_564->g_447", print_hash_value);
    transparent_crc(p_564->g_463, "p_564->g_463", print_hash_value);
    transparent_crc(p_564->g_473.f0, "p_564->g_473.f0", print_hash_value);
    transparent_crc(p_564->g_473.f1, "p_564->g_473.f1", print_hash_value);
    transparent_crc(p_564->g_473.f2.f0, "p_564->g_473.f2.f0", print_hash_value);
    transparent_crc(p_564->g_473.f2.f1, "p_564->g_473.f2.f1", print_hash_value);
    transparent_crc(p_564->g_473.f2.f2, "p_564->g_473.f2.f2", print_hash_value);
    transparent_crc(p_564->g_473.f2.f3, "p_564->g_473.f2.f3", print_hash_value);
    transparent_crc(p_564->g_473.f2.f4, "p_564->g_473.f2.f4", print_hash_value);
    transparent_crc(p_564->g_473.f2.f5, "p_564->g_473.f2.f5", print_hash_value);
    transparent_crc(p_564->g_473.f2.f6, "p_564->g_473.f2.f6", print_hash_value);
    transparent_crc(p_564->g_473.f2.f7, "p_564->g_473.f2.f7", print_hash_value);
    transparent_crc(p_564->g_473.f2.f8, "p_564->g_473.f2.f8", print_hash_value);
    transparent_crc(p_564->g_473.f2.f9, "p_564->g_473.f2.f9", print_hash_value);
    transparent_crc(p_564->g_473.f3.f0, "p_564->g_473.f3.f0", print_hash_value);
    transparent_crc(p_564->g_473.f3.f1, "p_564->g_473.f3.f1", print_hash_value);
    transparent_crc(p_564->g_473.f3.f2, "p_564->g_473.f3.f2", print_hash_value);
    transparent_crc(p_564->g_473.f3.f3, "p_564->g_473.f3.f3", print_hash_value);
    transparent_crc(p_564->g_473.f3.f4, "p_564->g_473.f3.f4", print_hash_value);
    transparent_crc(p_564->g_473.f3.f5, "p_564->g_473.f3.f5", print_hash_value);
    transparent_crc(p_564->g_473.f3.f6, "p_564->g_473.f3.f6", print_hash_value);
    transparent_crc(p_564->g_473.f3.f7, "p_564->g_473.f3.f7", print_hash_value);
    transparent_crc(p_564->g_473.f3.f8, "p_564->g_473.f3.f8", print_hash_value);
    transparent_crc(p_564->g_473.f3.f9, "p_564->g_473.f3.f9", print_hash_value);
    transparent_crc(p_564->g_473.f4, "p_564->g_473.f4", print_hash_value);
    transparent_crc(p_564->g_473.f5, "p_564->g_473.f5", print_hash_value);
    transparent_crc(p_564->g_473.f6, "p_564->g_473.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_564->g_482[i][j], "p_564->g_482[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_564->g_501.f0, "p_564->g_501.f0", print_hash_value);
    transparent_crc(p_564->g_501.f1, "p_564->g_501.f1", print_hash_value);
    transparent_crc(p_564->g_501.f2.f0, "p_564->g_501.f2.f0", print_hash_value);
    transparent_crc(p_564->g_501.f2.f1, "p_564->g_501.f2.f1", print_hash_value);
    transparent_crc(p_564->g_501.f2.f2, "p_564->g_501.f2.f2", print_hash_value);
    transparent_crc(p_564->g_501.f2.f3, "p_564->g_501.f2.f3", print_hash_value);
    transparent_crc(p_564->g_501.f2.f4, "p_564->g_501.f2.f4", print_hash_value);
    transparent_crc(p_564->g_501.f2.f5, "p_564->g_501.f2.f5", print_hash_value);
    transparent_crc(p_564->g_501.f2.f6, "p_564->g_501.f2.f6", print_hash_value);
    transparent_crc(p_564->g_501.f2.f7, "p_564->g_501.f2.f7", print_hash_value);
    transparent_crc(p_564->g_501.f2.f8, "p_564->g_501.f2.f8", print_hash_value);
    transparent_crc(p_564->g_501.f2.f9, "p_564->g_501.f2.f9", print_hash_value);
    transparent_crc(p_564->g_501.f3.f0, "p_564->g_501.f3.f0", print_hash_value);
    transparent_crc(p_564->g_501.f3.f1, "p_564->g_501.f3.f1", print_hash_value);
    transparent_crc(p_564->g_501.f3.f2, "p_564->g_501.f3.f2", print_hash_value);
    transparent_crc(p_564->g_501.f3.f3, "p_564->g_501.f3.f3", print_hash_value);
    transparent_crc(p_564->g_501.f3.f4, "p_564->g_501.f3.f4", print_hash_value);
    transparent_crc(p_564->g_501.f3.f5, "p_564->g_501.f3.f5", print_hash_value);
    transparent_crc(p_564->g_501.f3.f6, "p_564->g_501.f3.f6", print_hash_value);
    transparent_crc(p_564->g_501.f3.f7, "p_564->g_501.f3.f7", print_hash_value);
    transparent_crc(p_564->g_501.f3.f8, "p_564->g_501.f3.f8", print_hash_value);
    transparent_crc(p_564->g_501.f3.f9, "p_564->g_501.f3.f9", print_hash_value);
    transparent_crc(p_564->g_501.f4, "p_564->g_501.f4", print_hash_value);
    transparent_crc(p_564->g_501.f5, "p_564->g_501.f5", print_hash_value);
    transparent_crc(p_564->g_501.f6, "p_564->g_501.f6", print_hash_value);
    transparent_crc(p_564->v_collective, "p_564->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 15; i++)
            transparent_crc(p_564->g_special_values[i + 15 * get_linear_group_id()], "p_564->g_special_values[i + 15 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 15; i++)
            transparent_crc(p_564->l_special_values[i], "p_564->l_special_values[i]", print_hash_value);
    transparent_crc(p_564->l_comm_values[get_linear_local_id()], "p_564->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_564->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()], "p_564->g_comm_values[get_linear_group_id() * 76 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
