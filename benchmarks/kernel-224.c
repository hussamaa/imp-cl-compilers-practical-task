// --atomics 45 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 1,15,77 -l 1,3,1
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

__constant uint32_t permutations[10][3] = {
{2,0,1}, // permutation 0
{2,0,1}, // permutation 1
{2,0,1}, // permutation 2
{1,0,2}, // permutation 3
{1,2,0}, // permutation 4
{1,0,2}, // permutation 5
{1,0,2}, // permutation 6
{1,2,0}, // permutation 7
{2,0,1}, // permutation 8
{2,0,1} // permutation 9
};

// Seed: 1996429132

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

struct S1 {
    VECTOR(uint16_t, 16) g_24;
    int32_t g_26;
    int16_t g_28;
    volatile int32_t g_36;
    volatile int32_t g_39;
    uint64_t g_40;
    volatile int32_t *g_76;
    volatile int32_t **g_75;
    VECTOR(uint8_t, 2) g_88;
    volatile VECTOR(uint64_t, 2) g_91;
    int32_t *g_99;
    uint64_t g_106;
    uint64_t g_108;
    uint16_t g_115;
    int32_t *g_117[9];
    int32_t **g_116;
    VECTOR(int64_t, 8) g_362;
    int8_t g_379;
    union U0 g_390;
    union U0 * volatile g_389;
    int32_t g_396;
    VECTOR(int32_t, 16) g_426;
    uint32_t g_432;
    uint32_t g_435;
    VECTOR(int16_t, 2) g_443;
    int32_t ***g_479;
    VECTOR(uint64_t, 2) g_482;
    volatile VECTOR(int64_t, 4) g_515;
    VECTOR(uint8_t, 2) g_526;
    VECTOR(int8_t, 8) g_555;
    uint8_t g_578;
    uint16_t g_603;
    volatile VECTOR(uint64_t, 4) g_615;
    VECTOR(int32_t, 16) g_616;
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
int64_t  func_1(struct S1 * p_631);
int32_t  func_2(uint8_t  p_3, uint32_t  p_4, uint32_t  p_5, struct S1 * p_631);
uint8_t  func_6(uint64_t  p_7, int16_t  p_8, uint16_t  p_9, uint16_t  p_10, uint16_t  p_11, struct S1 * p_631);
uint8_t  func_15(int64_t  p_16, int8_t  p_17, int32_t  p_18, int32_t  p_19, struct S1 * p_631);
int8_t  func_20(uint32_t  p_21, struct S1 * p_631);
int8_t  func_43(int32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t * p_47, struct S1 * p_631);
int32_t * func_48(int32_t * p_49, uint64_t  p_50, int32_t * p_51, uint64_t  p_52, struct S1 * p_631);
int32_t ** func_55(int16_t  p_56, struct S1 * p_631);
int16_t  func_57(uint32_t  p_58, uint32_t  p_59, int32_t ** p_60, int32_t ** p_61, uint16_t  p_62, struct S1 * p_631);
int32_t ** func_69(uint64_t  p_70, uint16_t  p_71, int32_t  p_72, struct S1 * p_631);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_631->l_comm_values p_631->g_24 p_631->g_comm_values p_631->g_40 p_631->g_36 p_631->g_26 p_631->g_75 p_631->g_76 p_631->g_39 p_631->g_88 p_631->g_91 p_631->g_28 p_631->g_99 p_631->g_115 p_631->g_116 p_631->g_108 p_631->g_362 p_631->g_379 p_631->g_389 p_631->g_443 p_631->g_396 p_631->g_432 p_631->g_482 p_631->g_515 p_631->g_526 p_631->g_426 p_631->g_106 p_631->g_435 p_631->g_479 p_631->g_117 p_631->g_578 p_631->g_390.f0 p_631->g_603 p_631->g_615 p_631->g_616
 * writes: p_631->g_40 p_631->g_76 p_631->g_99 p_631->g_39 p_631->g_106 p_631->g_108 p_631->g_117 p_631->g_379 p_631->g_115 p_631->g_26 p_631->g_28 p_631->g_362 p_631->g_396 p_631->g_432 p_631->g_435 p_631->g_578 p_631->g_555 p_631->g_603 p_631->l_comm_values p_631->g_443
 */
int64_t  func_1(struct S1 * p_631)
{ /* block id: 4 */
    uint16_t l_12[5];
    int32_t *l_54 = (void*)0;
    int64_t *l_501 = (void*)0;
    int64_t *l_502 = (void*)0;
    int64_t *l_503 = (void*)0;
    int64_t *l_504 = (void*)0;
    int64_t *l_505 = (void*)0;
    int64_t *l_506 = (void*)0;
    int64_t *l_507 = (void*)0;
    int64_t l_508[2][10];
    int32_t *l_577 = (void*)0;
    VECTOR(uint32_t, 8) l_582 = (VECTOR(uint32_t, 8))(0x5A8B4412L, (VECTOR(uint32_t, 4))(0x5A8B4412L, (VECTOR(uint32_t, 2))(0x5A8B4412L, 0UL), 0UL), 0UL, 0x5A8B4412L, 0UL);
    int32_t l_606[10][4] = {{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L},{0L,0x10CB1CB3L,1L,0x62A3BC41L}};
    int32_t l_617[3];
    int32_t ***l_622 = &p_631->g_116;
    int i, j;
    for (i = 0; i < 5; i++)
        l_12[i] = 65535UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
            l_508[i][j] = 0x6556627892624E33L;
    }
    for (i = 0; i < 3; i++)
        l_617[i] = 2L;
    p_631->g_578 |= func_2(func_6(p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))], (((p_631->g_362.s3 = ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(l_12[3], ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(1L, 0L, ((safe_sub_func_uint8_t_u_u(func_15((func_20((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_631->g_24.s16f93bd5de1fc657)).s8, p_631->g_comm_values[p_631->tid])), p_631) & l_12[3]), func_43(p_631->g_36, (p_631->g_26 , p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))]), func_48(&p_631->g_26, l_12[3], &p_631->g_26, l_12[3], p_631), l_54, p_631), p_631->g_396, l_12[1], p_631), 0x50L)) && FAKE_DIVERGE(p_631->group_2_offset, get_group_id(2), 10)), ((VECTOR(int64_t, 4))((-3L))), 0x7D4DC08132580720L, 0x0AF55DB09391D9F9L, 0x2B9C834FB33DAC6BL, p_631->g_443.y, ((VECTOR(int64_t, 2))(0L)), 0x7F377FF2E8658A57L, 0x2A7A50744A4F9BC4L, 0x4B57FED63F579506L)).odd, ((VECTOR(int64_t, 8))(0x3D0007790016B80FL))))))).s76)), ((VECTOR(int64_t, 2))(1L))))).yxyy, (int64_t)p_631->g_40))), ((VECTOR(int64_t, 2))(0x0CD98FA9A83281B3L)), 0x529C741AD4D5704AL)).s1325544666633110, ((VECTOR(int64_t, 16))(0x7CB186C5E696D70EL))))).sa) , l_508[0][3]) , p_631->g_379), p_631->g_88.x, p_631->g_432, p_631->g_482.y, p_631), l_508[0][3], p_631->g_526.x, p_631);
    for (p_631->g_396 = 0; (p_631->g_396 >= 2); p_631->g_396 = safe_add_func_int64_t_s_s(p_631->g_396, 1))
    { /* block id: 296 */
        VECTOR(uint32_t, 4) l_581 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 1UL), 1UL);
        int32_t **l_585 = &l_54;
        uint32_t l_600[1];
        int8_t *l_601 = &p_631->g_379;
        int8_t *l_602[2];
        uint32_t *l_604 = (void*)0;
        uint32_t *l_605[2];
        int16_t *l_607 = (void*)0;
        int16_t *l_608 = (void*)0;
        int16_t *l_609 = (void*)0;
        int16_t *l_610 = (void*)0;
        uint64_t *l_618 = &p_631->g_106;
        int32_t ****l_621[9][10] = {{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479},{&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479,&p_631->g_479}};
        int32_t ***l_623 = &l_585;
        int16_t *l_624 = (void*)0;
        int16_t *l_625 = &p_631->g_28;
        union U0 *l_627 = (void*)0;
        union U0 **l_626 = &l_627;
        uint16_t l_630 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_600[i] = 7UL;
        for (i = 0; i < 2; i++)
            l_602[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_605[i] = (void*)0;
        (**p_631->g_75) = (((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(l_581.xwzy)).wyxyxzzxwwxxxzzw, ((VECTOR(uint32_t, 16))(l_582.s5645132231500534))))).s8 >= ((((~(safe_rshift_func_uint16_t_u_u(p_631->g_390.f0, 14))) != (p_631->g_443.x = (((l_585 == (void*)0) , ((((l_606[2][3] = (p_631->g_432 |= (safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))] = ((safe_mul_func_int16_t_s_s((-1L), (safe_sub_func_int8_t_s_s((p_631->g_603 ^= ((l_581.w != (safe_mul_func_int8_t_s_s((((-1L) && (p_631->g_555.s1 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((void*)0 != (*p_631->g_75)) > ((*l_601) |= (l_600[0] ^= 0L))), 0xCC1825B4L)), p_631->g_40)))) , p_631->g_26), 0x3EL))) & l_581.y)), p_631->g_362.s7)))) > l_581.z)), p_631->g_24.s8)), p_631->g_482.x)))) < 1L) <= 4294967286UL) && 0x7448DF9EL)) && 1L))) || l_581.z) | l_581.x));
        (*l_626) = ((FAKE_DIVERGE(p_631->group_2_offset, get_group_id(2), 10) || ((safe_mul_func_int8_t_s_s(((p_631->g_482.x & (safe_add_func_uint16_t_u_u((0x0AAFDAF81E6480EFL | ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_631->g_615.zz)), 18446744073709551612UL, 18446744073709551612UL)))).zyxwwwyz))).s1), (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(p_631->g_616.s24)).xyxyyyxxyxyyxxxx, (int32_t)l_617[0]))).s4 , (l_600[0] < (((*l_618) = l_508[0][2]) < (safe_mul_func_uint8_t_u_u(((1UL | ((*l_625) = ((l_622 = &p_631->g_116) == l_623))) > 0x23C6BB37CA7F6FECL), p_631->g_24.s4)))))))) < 0x1BL), p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))])) >= 0x405DL)) , (void*)0);
        (**p_631->g_75) &= (safe_lshift_func_uint16_t_u_s(0xC687L, 14));
        if (l_630)
            break;
    }
    return p_631->g_482.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_435 p_631->g_76 p_631->g_479 p_631->g_116 p_631->g_99 p_631->g_117 p_631->g_75
 * writes: p_631->g_435 p_631->g_39 p_631->g_99 p_631->g_117
 */
int32_t  func_2(uint8_t  p_3, uint32_t  p_4, uint32_t  p_5, struct S1 * p_631)
{ /* block id: 281 */
    int32_t l_535 = 0x1595A60FL;
    int32_t *l_536 = (void*)0;
    int32_t *l_537 = (void*)0;
    int32_t *l_538 = (void*)0;
    int32_t l_539 = (-1L);
    int32_t *l_540 = (void*)0;
    int32_t *l_541 = (void*)0;
    int32_t *l_542[6][2] = {{&p_631->g_396,(void*)0},{&p_631->g_396,(void*)0},{&p_631->g_396,(void*)0},{&p_631->g_396,(void*)0},{&p_631->g_396,(void*)0},{&p_631->g_396,(void*)0}};
    uint32_t l_543 = 0x364ECBFBL;
    VECTOR(int64_t, 4) l_550 = (VECTOR(int64_t, 4))(0x214260C805BC600FL, (VECTOR(int64_t, 2))(0x214260C805BC600FL, 0x0A8C87C79DF4E6E8L), 0x0A8C87C79DF4E6E8L);
    int8_t *l_560 = &p_631->g_379;
    uint64_t *l_576 = (void*)0;
    int i, j;
    --l_543;
    for (p_631->g_435 = 7; (p_631->g_435 >= 28); ++p_631->g_435)
    { /* block id: 285 */
        int32_t l_556 = 0x3A44E566L;
        int8_t *l_559 = (void*)0;
        uint8_t l_575 = 4UL;
        (*p_631->g_76) = ((((((safe_lshift_func_uint16_t_u_s(((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_550.yzzwwzzyzwwyxzzx)).even)).s1 || (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((p_4 & (((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((l_556 ^= ((VECTOR(int8_t, 4))(p_631->g_555.s3465)).y) && ((safe_lshift_func_uint16_t_u_s(((l_559 = l_559) == l_560), 15)) <= (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(((p_3 < (p_3 != FAKE_DIVERGE(p_631->group_0_offset, get_group_id(0), 10))) , (((safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 4))(((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((p_631->g_515.x | (safe_div_func_int32_t_s_s(l_575, 0xF056E824L))) && (0x90B9L <= (-1L))), (*p_631->g_99))), p_5)), 0)) > l_575), 18446744073709551608UL, 5UL, 0xA7B8C8D204B47DB5L)).y && 0UL), 0x33L)) != 0UL) == p_5)), p_5)), 0x6AL)))), ((VECTOR(int8_t, 4))(9L)), 0x3CL, 0x58L, 4L)).s7, p_631->g_106)) >= GROUP_DIVERGE(2, 1)) <= p_631->g_482.y)), 0x6B73B2E8B8F3544FL, 0x594C3FCC48918AD2L, 0x1528167CB32E67DAL)))).w > 1UL)) != GROUP_DIVERGE(1, 1)), p_5)) , &p_631->g_106) != l_576) , l_575) , GROUP_DIVERGE(0, 1)) | 0x3FL);
        (*p_631->g_116) = (**p_631->g_479);
    }
    (**p_631->g_75) = 0x0BBD4485L;
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_379 p_631->g_99 p_631->g_26 p_631->g_515 p_631->g_526 p_631->g_426 p_631->g_88 p_631->g_432 p_631->g_106 p_631->g_362 p_631->g_116
 * writes: p_631->g_379 p_631->g_396 p_631->g_432 p_631->g_99 p_631->g_117
 */
uint8_t  func_6(uint64_t  p_7, int16_t  p_8, uint16_t  p_9, uint16_t  p_10, uint16_t  p_11, struct S1 * p_631)
{ /* block id: 266 */
    uint64_t l_511 = 0xE6A153E324EA7123L;
    int32_t *l_512 = &p_631->g_396;
    uint32_t *l_534 = &p_631->g_432;
    for (p_631->g_379 = 0; (p_631->g_379 <= 6); p_631->g_379 = safe_add_func_uint64_t_u_u(p_631->g_379, 7))
    { /* block id: 269 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_631->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u(0UL, 10))][(safe_mod_func_uint32_t_u_u(p_631->tid, 3))]));
        if ((*p_631->g_99))
            break;
        if (l_511)
            break;
        if (l_511)
            break;
    }
    (*p_631->g_116) = func_48(l_512, (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_631->g_515.xwyw)).y, p_631->g_26)), l_512, ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*l_512) = p_8), (((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(l_511, ((VECTOR(int16_t, 8))(0x0F88L, (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x580FL, 0x7A8FL)).xxyy)), (-6L), 0x5CE9L)).s2)), (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_631->g_526.xx)), 0x20L, 0xAAL)), ((safe_add_func_int8_t_s_s((p_631->g_426.sf , 0x65L), (((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u((safe_add_func_uint32_t_u_u(((*l_534) ^= (p_631->g_88.x , FAKE_DIVERGE(p_631->group_2_offset, get_group_id(2), 10))), (+p_7))))), l_511)) , p_8) , 0xD8L))) > 0L), FAKE_DIVERGE(p_631->group_1_offset, get_group_id(1), 10), 0x1DL, 0xEAL)), ((VECTOR(uint8_t, 8))(0x96L))))).s7, p_631->g_106)))) & p_631->g_362.s7) | p_8))), l_511)) | 0x42L), p_631);
    return p_631->g_362.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_396
 * writes:
 */
uint8_t  func_15(int64_t  p_16, int8_t  p_17, int32_t  p_18, int32_t  p_19, struct S1 * p_631)
{ /* block id: 262 */
    int32_t *l_494 = &p_631->g_26;
    int32_t *l_495 = &p_631->g_396;
    int32_t *l_496 = &p_631->g_26;
    int32_t *l_497 = &p_631->g_396;
    uint32_t l_498 = 0x25C6EDAEL;
    --l_498;
    return (*l_495);
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_40 p_631->g_24
 * writes: p_631->g_40
 */
int8_t  func_20(uint32_t  p_21, struct S1 * p_631)
{ /* block id: 5 */
    int32_t *l_25 = &p_631->g_26;
    int32_t *l_27 = &p_631->g_26;
    int32_t l_29 = (-1L);
    int32_t *l_30 = &l_29;
    int32_t *l_31 = &l_29;
    int32_t *l_32 = &p_631->g_26;
    int32_t *l_33 = &l_29;
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = (void*)0;
    int32_t *l_37 = &l_29;
    int32_t *l_38 = &p_631->g_26;
    ++p_631->g_40;
    return p_631->g_24.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_75 p_631->g_76 p_631->g_39 p_631->g_88 p_631->g_91 p_631->g_24 p_631->g_36 p_631->l_comm_values p_631->g_28 p_631->g_26 p_631->g_99 p_631->g_115 p_631->g_116 p_631->g_108 p_631->g_362 p_631->g_comm_values p_631->g_379 p_631->g_389 p_631->g_443
 * writes: p_631->g_76 p_631->g_99 p_631->g_39 p_631->g_106 p_631->g_108 p_631->g_117 p_631->g_379 p_631->g_115 p_631->g_26 p_631->g_28
 */
int8_t  func_43(int32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t * p_47, struct S1 * p_631)
{ /* block id: 10 */
    uint64_t l_73 = 0UL;
    int32_t **l_102 = &p_631->g_99;
    int32_t ***l_101 = &l_102;
    int32_t *l_104 = &p_631->g_26;
    int32_t **l_103 = &l_104;
    uint64_t *l_105 = &p_631->g_106;
    uint64_t *l_107 = &p_631->g_108;
    int32_t **l_110 = &l_104;
    int32_t ***l_109 = &l_110;
    int32_t ***l_111 = (void*)0;
    int32_t ***l_112 = (void*)0;
    int32_t **l_114 = &l_104;
    int32_t ***l_113 = &l_114;
    int16_t *l_398 = &p_631->g_28;
    uint16_t l_429 = 0xB07BL;
    VECTOR(int32_t, 2) l_438 = (VECTOR(int32_t, 2))(0x340FC719L, 0x635677C2L);
    uint16_t *l_473 = &p_631->g_115;
    VECTOR(uint64_t, 8) l_481 = (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL), 1UL, 18446744073709551608UL, 1UL);
    VECTOR(uint64_t, 4) l_483 = (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 4UL), 4UL);
    int i;
    (*l_109) = func_55(((*l_398) = func_57((FAKE_DIVERGE(p_631->local_2_offset, get_local_id(2), 10) , (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((*l_101) = func_69(l_73, (safe_unary_minus_func_int32_t_s(((void*)0 != p_631->g_75))), (*p_631->g_76), p_631)) != (l_103 = &p_47)), 5)) == ((*l_107) = ((*l_105) = p_631->g_28))), (((*l_109) = &p_47) == ((*l_113) = &p_46)))), 2)) && (***l_113)), ((VECTOR(uint32_t, 8))(6UL)), ((VECTOR(uint32_t, 2))(2UL)), (***l_101), p_45, ((VECTOR(uint32_t, 2))(0UL)), 0xB77237ECL)).lo)).lo)).y , 4294967290UL)), p_631->g_115, p_631->g_116, &p_631->g_117[0], p_45, p_631)), p_631);
    for (p_631->g_26 = 10; (p_631->g_26 == 18); p_631->g_26 = safe_add_func_int64_t_s_s(p_631->g_26, 9))
    { /* block id: 225 */
        uint64_t l_410 = 0x889E4DC1ACA80307L;
        VECTOR(int8_t, 2) l_418 = (VECTOR(int8_t, 2))(0x11L, 0x5DL);
        int16_t *l_423 = &p_631->g_28;
        int32_t l_430 = 8L;
        uint32_t *l_431 = &p_631->g_432;
        uint32_t *l_433 = (void*)0;
        uint32_t *l_434 = &p_631->g_435;
        int8_t *l_436 = (void*)0;
        int8_t *l_437 = &p_631->g_379;
        int8_t *l_450[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_451 = 8L;
        int16_t l_452 = (-1L);
        int8_t l_490 = (-5L);
        int i;
        (**p_631->g_75) = (((*l_437) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((+(0x7E74D237L == (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((((((*l_434) = ((*l_431) = (safe_add_func_uint16_t_u_u(l_410, ((safe_unary_minus_func_int32_t_s(((((safe_rshift_func_uint8_t_u_u((((l_410 , (~GROUP_DIVERGE(2, 1))) && (safe_mod_func_int32_t_s_s((**l_110), (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(l_418.xyxxxyyxxxyxyxxy)).hi))).s44)), 0x8EL, 0xC7L)).y, 4))))) , FAKE_DIVERGE(p_631->group_1_offset, get_group_id(1), 10)), ((l_418.y || (((safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 4))((safe_add_func_int64_t_s_s((((void*)0 == l_423) | (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (l_430 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_631->g_426.s6d287245da1ea6eb)).s077d)).y & (safe_add_func_int8_t_s_s(l_429, p_631->g_115))))))), 0x9A064169B32522DAL)), 248UL, 0x68L, 0x08L)).y && 0x13L), p_631->g_comm_values[p_631->tid])) >= 0x1332L) != 0UL)) < 65535UL))) > (**l_114)) , p_631->g_91.y) == p_631->g_396))) != p_631->g_115))))) != l_418.x) != (-2L)) , p_45) || 0x9A0B733C382A99E1L), p_631->g_26)), p_631->g_362.s2)))), (-6L), ((VECTOR(int8_t, 4))(0x3EL)), (-5L), (-8L))).s03)), ((VECTOR(int8_t, 2))(0x4BL)), ((VECTOR(int8_t, 2))(0x6FL))))).xyyxyxxx)).lo)))).yyzxzzxz, (int8_t)0x6FL))), ((VECTOR(int8_t, 8))(0x46L))))))).s2) > p_631->g_108);
        p_631->g_117[0] = ((*l_102) = func_48(&l_430, (((VECTOR(int32_t, 2))(l_438.yx)).hi | (safe_sub_func_int64_t_s_s((p_44 == (safe_sub_func_int8_t_s_s((((VECTOR(int16_t, 4))((-7L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_631->g_443.xyxyxyxxxxxxxxxy)).s5c)), 1L)).w >= ((*l_398) = (((VECTOR(uint64_t, 4))(0UL, ((((l_451 &= ((((safe_mod_func_uint64_t_u_u(p_44, 0x05D5D54A946F482BL)) > ((p_44 < ((VECTOR(uint16_t, 16))(((p_631->g_379 = p_44) | (l_430 &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((~(((*l_109) = &p_46) != (p_631->g_116 = &p_631->g_99))), 8)), (l_104 != &p_631->g_435))))), 0x635AL, 0x95BDL, 0xF635L, p_44, ((VECTOR(uint16_t, 4))(0x717BL)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 2))(0x053CL)), 1UL)).se) || l_418.x)) || (*p_631->g_99)) && 7UL)) ^ (-1L)) , &l_429) != (void*)0), 18446744073709551615UL, 0xF312E624F9B19E21L)).y & GROUP_DIVERGE(0, 1)))), l_452))), p_631->g_362.s5))), (*l_103), (**l_102), p_631));
        for (l_452 = (-13); (l_452 >= (-26)); l_452 = safe_sub_func_uint16_t_u_u(l_452, 3))
        { /* block id: 241 */
            int64_t l_465 = 0x605787FA0C74303AL;
            int64_t l_472 = 0x41F835EB180E80D5L;
            int32_t ***l_480 = (void*)0;
            (1 + 1);
        }
    }
    return p_631->g_443.y;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_48(int32_t * p_49, uint64_t  p_50, int32_t * p_51, uint64_t  p_52, struct S1 * p_631)
{ /* block id: 8 */
    int32_t *l_53 = &p_631->g_26;
    return l_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_55(int16_t  p_56, struct S1 * p_631)
{ /* block id: 218 */
    union U0 *l_399[10];
    union U0 **l_400 = &l_399[7];
    int32_t l_401 = 0x561C1FCBL;
    int i;
    for (i = 0; i < 10; i++)
        l_399[i] = (void*)0;
    (*l_400) = l_399[7];
    l_401 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x426D02DDL, 0x15B1DCF6L)), 0L, (-4L))).x;
    return &p_631->g_99;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_108 p_631->g_116 p_631->g_362 p_631->g_88 p_631->g_comm_values p_631->g_379 p_631->g_389 p_631->g_24 p_631->g_76 p_631->g_39 p_631->g_99 p_631->l_comm_values p_631->g_91
 * writes: p_631->g_108 p_631->g_117 p_631->g_379 p_631->g_115 p_631->g_26
 */
int16_t  func_57(uint32_t  p_58, uint32_t  p_59, int32_t ** p_60, int32_t ** p_61, uint16_t  p_62, struct S1 * p_631)
{ /* block id: 23 */
    int32_t l_363 = 0x68237D19L;
    VECTOR(uint16_t, 2) l_370 = (VECTOR(uint16_t, 2))(0xAB7AL, 0x2912L);
    VECTOR(uint8_t, 8) l_373 = (VECTOR(uint8_t, 8))(0x0EL, (VECTOR(uint8_t, 4))(0x0EL, (VECTOR(uint8_t, 2))(0x0EL, 0xE1L), 0xE1L), 0xE1L, 0x0EL, 0xE1L);
    VECTOR(uint8_t, 8) l_374 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xC3L), 0xC3L), 0xC3L, 1UL, 0xC3L);
    int8_t *l_377 = (void*)0;
    int8_t *l_378 = &p_631->g_379;
    int32_t ***l_388 = &p_631->g_116;
    uint16_t *l_391 = &p_631->g_115;
    int64_t l_392 = 0x63EF94E310CE17E4L;
    uint64_t *l_393[4] = {&p_631->g_108,&p_631->g_108,&p_631->g_108,&p_631->g_108};
    int32_t *l_394 = (void*)0;
    int32_t *l_395[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_397 = 4L;
    int i;
    if ((atomic_inc(&p_631->l_atomic_input[28]) == 3))
    { /* block id: 25 */
        VECTOR(uint16_t, 16) l_118 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65533UL), 65533UL), 65533UL, 1UL, 65533UL, (VECTOR(uint16_t, 2))(1UL, 65533UL), (VECTOR(uint16_t, 2))(1UL, 65533UL), 1UL, 65533UL, 1UL, 65533UL);
        VECTOR(uint8_t, 4) l_119 = (VECTOR(uint8_t, 4))(0x9AL, (VECTOR(uint8_t, 2))(0x9AL, 0x64L), 0x64L);
        VECTOR(uint8_t, 8) l_120 = (VECTOR(uint8_t, 8))(0x78L, (VECTOR(uint8_t, 4))(0x78L, (VECTOR(uint8_t, 2))(0x78L, 0x87L), 0x87L), 0x87L, 0x78L, 0x87L);
        int32_t l_121 = 0x2BBD4C00L;
        uint16_t l_122[7] = {0xC349L,65530UL,0xC349L,0xC349L,65530UL,0xC349L,0xC349L};
        VECTOR(int64_t, 16) l_123 = (VECTOR(int64_t, 16))(0x303959C9A882A549L, (VECTOR(int64_t, 4))(0x303959C9A882A549L, (VECTOR(int64_t, 2))(0x303959C9A882A549L, (-1L)), (-1L)), (-1L), 0x303959C9A882A549L, (-1L), (VECTOR(int64_t, 2))(0x303959C9A882A549L, (-1L)), (VECTOR(int64_t, 2))(0x303959C9A882A549L, (-1L)), 0x303959C9A882A549L, (-1L), 0x303959C9A882A549L, (-1L));
        int64_t l_124 = 0L;
        uint8_t l_125[7] = {255UL,0xCCL,255UL,255UL,0xCCL,255UL,255UL};
        uint64_t l_128 = 0UL;
        int16_t l_129 = (-4L);
        int8_t l_130 = 0x7AL;
        VECTOR(int8_t, 8) l_131 = (VECTOR(int8_t, 8))(0x27L, (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, 1L), 1L), 1L, 0x27L, 1L);
        VECTOR(int8_t, 8) l_132 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 5L), 5L), 5L, 1L, 5L);
        VECTOR(int8_t, 2) l_133 = (VECTOR(int8_t, 2))(6L, 1L);
        VECTOR(int8_t, 8) l_134 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
        int32_t l_135 = 0x5E0D53B3L;
        uint32_t l_136 = 6UL;
        int8_t l_137 = 0L;
        VECTOR(uint8_t, 8) l_138 = (VECTOR(uint8_t, 8))(0xF3L, (VECTOR(uint8_t, 4))(0xF3L, (VECTOR(uint8_t, 2))(0xF3L, 0x62L), 0x62L), 0x62L, 0xF3L, 0x62L);
        VECTOR(uint8_t, 16) l_139 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x46L), 0x46L), 0x46L, 6UL, 0x46L, (VECTOR(uint8_t, 2))(6UL, 0x46L), (VECTOR(uint8_t, 2))(6UL, 0x46L), 6UL, 0x46L, 6UL, 0x46L);
        VECTOR(uint8_t, 8) l_140 = (VECTOR(uint8_t, 8))(0xC0L, (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 5UL), 5UL), 5UL, 0xC0L, 5UL);
        VECTOR(uint8_t, 4) l_141 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 6UL), 6UL);
        uint16_t l_142 = 0x0D5DL;
        uint16_t l_143 = 0x9044L;
        uint32_t l_144 = 0x2556593AL;
        uint16_t l_145 = 0xEF6EL;
        uint32_t l_146 = 0x7A455DDAL;
        uint8_t l_147 = 255UL;
        int64_t l_148[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_149 = 9UL;
        int16_t l_150 = 0L;
        int i;
        l_150 |= (l_149 |= ((VECTOR(int32_t, 8))((l_148[2] = (((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0xFF3CL, FAKE_DIVERGE(p_631->local_2_offset, get_local_id(2), 10), 0UL, 0x8B24L)).hi)), 0x93FBL, 0xEBAEL)).zyzzwwwwzxzzyzyx)).s0a)).xyxyyxxy, ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_631->group_2_offset, get_group_id(2), 10), 4UL, ((VECTOR(uint16_t, 4))(l_118.s3638)), 0UL, 0xCE02L)).s15, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_119.zzwxyyzx)).s53)).xyyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_120.s41365445)).hi)), ((VECTOR(uint8_t, 4))(0x50L, 0xDCL, 0x71L, 0x40L)), ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xD7L, 0x18L)), 0x93L, (l_122[1] ^= l_121), (++l_125[5]), (((l_129 = l_128) , 4294967295UL) , l_130), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(l_131.s2702427525467754)), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_132.s1746224272575200)).s344c)).odd, ((VECTOR(int8_t, 16))(l_133.yxxyxxxxxyxxxxxx)).s78))))).yyyx)).hi, ((VECTOR(int8_t, 2))(0x69L, 1L))))).yxyyyyyxxxyxyxyy, ((VECTOR(int8_t, 16))(l_134.s0075117222715051))))), (int8_t)(l_135 , (l_137 = l_136)), (int8_t)(l_137 &= 3L))))))), ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(254UL, 0x86L)).yxyxyxxyyyyyxxxy)).s776a, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(l_138.s44376665)).s66, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_139.s9cfb)).xwxwxxzw)).s35))).yyyx))).wzzxywzzxxxxxzwy))).s3, ((VECTOR(uint8_t, 2))(0xB5L, 0x66L)).odd, ((VECTOR(uint8_t, 2))(0x7EL, 3UL)), 0xC1L, ((VECTOR(uint8_t, 4))(l_140.s7011)), 1UL)).odd))).odd))).yxwwzxxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_141.zxxw)), (l_142 , 0xADL), 255UL, ((VECTOR(uint8_t, 2))(0x76L)), ((VECTOR(uint8_t, 2))(255UL)), l_143, 0x99L, l_144, 1UL, 0x89L, 0xA6L)).se6)), 0x55L, 0UL)).zzyzzyyw))), (uint8_t)251UL, (uint8_t)l_145))).s5673240372472246)).s987c))).lo)).xyyyyxxxyyyyxyxx, ((VECTOR(uint8_t, 16))(0UL))))).hi, ((VECTOR(uint16_t, 8))(1UL))))).s44))).yyxxxxxx, (uint16_t)l_146))))))))).s3 , l_147)), (-1L), ((VECTOR(int32_t, 4))(1L)), 0x2A44792AL, (-3L))).s0);
        unsigned int result = 0;
        result += l_118.sf;
        result += l_118.se;
        result += l_118.sd;
        result += l_118.sc;
        result += l_118.sb;
        result += l_118.sa;
        result += l_118.s9;
        result += l_118.s8;
        result += l_118.s7;
        result += l_118.s6;
        result += l_118.s5;
        result += l_118.s4;
        result += l_118.s3;
        result += l_118.s2;
        result += l_118.s1;
        result += l_118.s0;
        result += l_119.w;
        result += l_119.z;
        result += l_119.y;
        result += l_119.x;
        result += l_120.s7;
        result += l_120.s6;
        result += l_120.s5;
        result += l_120.s4;
        result += l_120.s3;
        result += l_120.s2;
        result += l_120.s1;
        result += l_120.s0;
        result += l_121;
        int l_122_i0;
        for (l_122_i0 = 0; l_122_i0 < 7; l_122_i0++) {
            result += l_122[l_122_i0];
        }
        result += l_123.sf;
        result += l_123.se;
        result += l_123.sd;
        result += l_123.sc;
        result += l_123.sb;
        result += l_123.sa;
        result += l_123.s9;
        result += l_123.s8;
        result += l_123.s7;
        result += l_123.s6;
        result += l_123.s5;
        result += l_123.s4;
        result += l_123.s3;
        result += l_123.s2;
        result += l_123.s1;
        result += l_123.s0;
        result += l_124;
        int l_125_i0;
        for (l_125_i0 = 0; l_125_i0 < 7; l_125_i0++) {
            result += l_125[l_125_i0];
        }
        result += l_128;
        result += l_129;
        result += l_130;
        result += l_131.s7;
        result += l_131.s6;
        result += l_131.s5;
        result += l_131.s4;
        result += l_131.s3;
        result += l_131.s2;
        result += l_131.s1;
        result += l_131.s0;
        result += l_132.s7;
        result += l_132.s6;
        result += l_132.s5;
        result += l_132.s4;
        result += l_132.s3;
        result += l_132.s2;
        result += l_132.s1;
        result += l_132.s0;
        result += l_133.y;
        result += l_133.x;
        result += l_134.s7;
        result += l_134.s6;
        result += l_134.s5;
        result += l_134.s4;
        result += l_134.s3;
        result += l_134.s2;
        result += l_134.s1;
        result += l_134.s0;
        result += l_135;
        result += l_136;
        result += l_137;
        result += l_138.s7;
        result += l_138.s6;
        result += l_138.s5;
        result += l_138.s4;
        result += l_138.s3;
        result += l_138.s2;
        result += l_138.s1;
        result += l_138.s0;
        result += l_139.sf;
        result += l_139.se;
        result += l_139.sd;
        result += l_139.sc;
        result += l_139.sb;
        result += l_139.sa;
        result += l_139.s9;
        result += l_139.s8;
        result += l_139.s7;
        result += l_139.s6;
        result += l_139.s5;
        result += l_139.s4;
        result += l_139.s3;
        result += l_139.s2;
        result += l_139.s1;
        result += l_139.s0;
        result += l_140.s7;
        result += l_140.s6;
        result += l_140.s5;
        result += l_140.s4;
        result += l_140.s3;
        result += l_140.s2;
        result += l_140.s1;
        result += l_140.s0;
        result += l_141.w;
        result += l_141.z;
        result += l_141.y;
        result += l_141.x;
        result += l_142;
        result += l_143;
        result += l_144;
        result += l_145;
        result += l_146;
        result += l_147;
        int l_148_i0;
        for (l_148_i0 = 0; l_148_i0 < 5; l_148_i0++) {
            result += l_148[l_148_i0];
        }
        result += l_149;
        result += l_150;
        atomic_add(&p_631->l_special_values[28], result);
    }
    else
    { /* block id: 34 */
        (1 + 1);
    }
    for (p_631->g_108 = 28; (p_631->g_108 >= 36); p_631->g_108 = safe_add_func_uint16_t_u_u(p_631->g_108, 1))
    { /* block id: 39 */
        if (p_58)
            break;
        (*p_631->g_116) = (void*)0;
        if ((atomic_inc(&p_631->l_atomic_input[41]) == 5))
        { /* block id: 43 */
            int32_t l_153 = 0L;
            uint32_t l_269 = 0x73CDE5C4L;
            union U0 l_357 = {0x82EF53F3L};/* VOLATILE GLOBAL l_357 */
            union U0 *l_356 = &l_357;
            union U0 *l_358 = &l_357;
            for (l_153 = 0; (l_153 > (-23)); --l_153)
            { /* block id: 46 */
                int32_t l_156 = (-7L);
                int64_t l_197 = 0x413450B3EC079514L;
                VECTOR(int32_t, 8) l_198 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2F46B97FL), 0x2F46B97FL), 0x2F46B97FL, (-1L), 0x2F46B97FL);
                uint32_t l_199[6][7] = {{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL},{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL},{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL},{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL},{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL},{7UL,0x4653DA89L,0x5BBE7797L,4294967288UL,0x5BBE7797L,0x4653DA89L,7UL}};
                int i, j;
                for (l_156 = 0; (l_156 >= (-7)); --l_156)
                { /* block id: 49 */
                    int16_t l_159 = (-1L);
                    uint8_t l_160[5][5][4] = {{{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L}},{{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L}},{{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L}},{{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L}},{{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L},{0x66L,0x91L,0x91L,0x66L}}};
                    int32_t *l_161 = (void*)0;
                    int64_t l_162 = 0x38A45CE233F4ACB3L;
                    int32_t l_163 = (-8L);
                    uint32_t l_164 = 0x77E71CC0L;
                    uint32_t l_165 = 0x50CD27CEL;
                    int64_t l_166 = (-1L);
                    int i, j, k;
                    l_160[0][3][3] = l_159;
                    l_161 = l_161;
                    l_166 = ((l_163 |= l_162) , (l_165 = l_164));
                }
                for (l_156 = 0; (l_156 > 27); ++l_156)
                { /* block id: 58 */
                    int8_t l_169 = 4L;
                    int32_t l_194 = 0L;
                    int32_t *l_195 = &l_194;
                    int32_t *l_196 = &l_194;
                    if (l_169)
                    { /* block id: 59 */
                        int16_t l_170[8] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                        VECTOR(int32_t, 16) l_171 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int32_t, 2))((-1L), (-8L)), (VECTOR(int32_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                        VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))(0x4906F29BL, 1L);
                        uint8_t l_173 = 0xD8L;
                        int64_t l_174 = (-2L);
                        VECTOR(int32_t, 8) l_175 = (VECTOR(int32_t, 8))(0x1DC790DAL, (VECTOR(int32_t, 4))(0x1DC790DAL, (VECTOR(int32_t, 2))(0x1DC790DAL, 0L), 0L), 0L, 0x1DC790DAL, 0L);
                        uint8_t l_176 = 1UL;
                        int32_t *l_177 = (void*)0;
                        int32_t *l_178 = (void*)0;
                        union U0 *l_179 = (void*)0;
                        union U0 l_181 = {0xA509527EL};/* VOLATILE GLOBAL l_181 */
                        union U0 *l_180 = &l_181;
                        int32_t l_182 = 0x087B7656L;
                        uint64_t l_183 = 0x9B61A9AB88E0C3C7L;
                        int i;
                        l_176 ^= ((l_170[5] = GROUP_DIVERGE(2, 1)) , ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_171.sb0aaa760)).s21, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(2L, ((VECTOR(int32_t, 4))(0x45DEAE1BL, (-1L), 0x127660C2L, 2L)), 0L, 0x1C3764CFL, (-6L))).even, (int32_t)(l_174 ^= (l_172.x = (l_173 = ((VECTOR(int32_t, 4))(l_172.yxyx)).w)))))).lo))).xxyx, ((VECTOR(int32_t, 4))(l_175.s2233))))).x);
                        l_178 = l_177;
                        l_180 = l_179;
                        l_183 |= (l_182 = 0x6B916965L);
                    }
                    else
                    { /* block id: 69 */
                        int32_t l_184 = 0x74AC35BFL;
                        VECTOR(int32_t, 8) l_185 = (VECTOR(int32_t, 8))(0x108BF7B5L, (VECTOR(int32_t, 4))(0x108BF7B5L, (VECTOR(int32_t, 2))(0x108BF7B5L, 0x503D3159L), 0x503D3159L), 0x503D3159L, 0x108BF7B5L, 0x503D3159L);
                        uint16_t l_186 = 0xE3D8L;
                        int32_t l_189 = (-4L);
                        int64_t l_190 = 0x19CDBA808484B6C8L;
                        int32_t *l_191[6];
                        int32_t *l_192 = (void*)0;
                        int32_t *l_193 = &l_184;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_191[i] = &l_184;
                        l_185.s3 = l_184;
                        l_186--;
                        l_190 = l_189;
                        l_193 = (l_192 = l_191[0]);
                    }
                    l_194 = 0x7146C403L;
                    l_196 = (l_195 = (void*)0);
                }
                l_199[1][3] = ((l_197 = 0x2B0FFD9DDA32BF4EL) , ((VECTOR(int32_t, 4))(l_198.s0572)).x);
                for (l_199[1][3] = 0; (l_199[1][3] >= 27); l_199[1][3]++)
                { /* block id: 84 */
                    uint64_t l_202 = 1UL;
                    int32_t l_234[10][4][6] = {{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}},{{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L},{0x7DD19256L,(-1L),0x5139A763L,0x293A8304L,0x1ECCFDFDL,2L}}};
                    int i, j, k;
                    l_198.s7 |= l_202;
                    for (l_202 = (-19); (l_202 <= 52); l_202 = safe_add_func_int16_t_s_s(l_202, 5))
                    { /* block id: 88 */
                        int32_t l_206[5] = {0x272C5433L,0x272C5433L,0x272C5433L,0x272C5433L,0x272C5433L};
                        int32_t *l_205 = &l_206[0];
                        int32_t *l_207[2];
                        VECTOR(int32_t, 2) l_208 = (VECTOR(int32_t, 2))(0x0D98CD05L, 0x2CBAC9F7L);
                        VECTOR(int32_t, 4) l_209 = (VECTOR(int32_t, 4))(0x0E812EFDL, (VECTOR(int32_t, 2))(0x0E812EFDL, (-1L)), (-1L));
                        int32_t l_210 = 0x78092CFCL;
                        int8_t l_211 = (-2L);
                        uint8_t l_212[2][9][8] = {{{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL}},{{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL},{3UL,0x44L,0xFBL,0x9AL,246UL,1UL,3UL,7UL}}};
                        uint64_t l_213 = 7UL;
                        int64_t l_214 = 0x42C3B88169B939C0L;
                        uint64_t l_215 = 0x6B83E55CF61EEE09L;
                        uint32_t l_216 = 4294967295UL;
                        int64_t l_217 = 0L;
                        uint8_t l_218[7][3][4] = {{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}},{{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL},{0UL,0xF7L,0x68L,0x3EL}}};
                        int8_t l_219 = (-10L);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_207[i] = &l_206[0];
                        l_207[1] = l_205;
                        l_156 |= (l_198.s7 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_208.yyxy)), ((VECTOR(int32_t, 4))(0x25A16B7DL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_209.xw)))), 0x76282E64L)))).s67)), (-1L), 3L)).x);
                        l_198.s7 ^= ((((l_210 , l_211) , (l_216 = ((l_214 |= (l_212[1][0][6] , l_213)) , l_215))) , l_217) , l_218[3][0][1]);
                        l_198.s7 = l_219;
                    }
                    for (l_202 = 0; (l_202 == 18); l_202 = safe_add_func_int64_t_s_s(l_202, 1))
                    { /* block id: 99 */
                        int64_t l_222 = 0L;
                        uint64_t l_223 = 18446744073709551614UL;
                        int32_t l_227 = 1L;
                        int32_t *l_226 = &l_227;
                        int32_t *l_228 = &l_227;
                        uint16_t l_229 = 0x1823L;
                        int64_t l_230 = 0x1C7AF72FF09BE1A6L;
                        uint16_t l_231 = 1UL;
                        union U0 l_232[7][3][1] = {{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}},{{{0xE327F2DCL}},{{0xE327F2DCL}},{{0xE327F2DCL}}}};
                        int32_t l_233 = (-2L);
                        int i, j, k;
                        l_222 = 0x58338CC7L;
                        l_223++;
                        l_228 = l_226;
                        l_156 = (((l_229 = 2UL) , ((l_231 = l_230) , l_232[5][0][0])) , l_233);
                    }
                    if (l_234[1][2][4])
                    { /* block id: 107 */
                        VECTOR(int32_t, 16) l_235 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        int i;
                        l_156 = l_235.s5;
                    }
                    else
                    { /* block id: 109 */
                        uint32_t l_236 = 0x3E0FBC3BL;
                        int32_t l_237 = 2L;
                        l_237 ^= l_236;
                    }
                }
            }
            for (l_153 = (-9); (l_153 <= (-6)); l_153++)
            { /* block id: 116 */
                int32_t l_240 = 0x52D06EF4L;
                for (l_240 = (-11); (l_240 >= 11); l_240 = safe_add_func_int8_t_s_s(l_240, 8))
                { /* block id: 119 */
                    VECTOR(int32_t, 16) l_243 = (VECTOR(int32_t, 16))(0x0FCD6BA3L, (VECTOR(int32_t, 4))(0x0FCD6BA3L, (VECTOR(int32_t, 2))(0x0FCD6BA3L, 0L), 0L), 0L, 0x0FCD6BA3L, 0L, (VECTOR(int32_t, 2))(0x0FCD6BA3L, 0L), (VECTOR(int32_t, 2))(0x0FCD6BA3L, 0L), 0x0FCD6BA3L, 0L, 0x0FCD6BA3L, 0L);
                    int8_t l_251 = 0L;
                    VECTOR(uint32_t, 2) l_252 = (VECTOR(uint32_t, 2))(4UL, 0xC4CD5952L);
                    int32_t l_253 = 0L;
                    int32_t *l_254 = (void*)0;
                    uint64_t l_268 = 0x45B127DF0E0FF557L;
                    int i;
                    if (((VECTOR(int32_t, 16))(l_243.s33f7443fe62051e7)).sd)
                    { /* block id: 120 */
                        int32_t l_245[10] = {0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL,0x5ACF115DL};
                        int32_t *l_244[7];
                        int32_t *l_246 = &l_245[6];
                        uint64_t l_247 = 0x3C25BD731839F909L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_244[i] = &l_245[6];
                        l_246 = l_244[6];
                        ++l_247;
                    }
                    else
                    { /* block id: 123 */
                        int64_t l_250 = 5L;
                        l_243.s6 = l_250;
                    }
                    l_254 = (l_251 , ((l_253 &= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_252.xxxx)).zxwxxwwwyxyywwwy)).se) , l_254));
                    for (l_251 = 14; (l_251 >= 3); l_251--)
                    { /* block id: 130 */
                        int8_t l_257 = 0x03L;
                        uint32_t l_258 = 0UL;
                        union U0 l_261 = {0x323F1752L};/* VOLATILE GLOBAL l_261 */
                        int32_t l_263[10][3][7] = {{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}},{{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L},{0x655EE233L,0x700F83C9L,7L,0x688D637EL,0x5C5043CAL,(-1L),0L}}};
                        int32_t *l_262[2][4] = {{&l_263[4][0][6],&l_263[4][0][6],&l_263[4][0][6],&l_263[4][0][6]},{&l_263[4][0][6],&l_263[4][0][6],&l_263[4][0][6],&l_263[4][0][6]}};
                        int64_t l_264 = 0x3BB352B36915950CL;
                        uint64_t l_265 = 0xCBDDB987CA8C57EAL;
                        int i, j, k;
                        l_258--;
                        l_262[1][1] = (l_261 , (l_254 = (void*)0));
                        l_265--;
                    }
                    l_268 &= 0L;
                }
            }
            if (l_269)
            { /* block id: 139 */
                uint16_t l_270 = 0x3352L;
                int32_t l_302[4][4] = {{0L,(-3L),(-3L),0L},{0L,(-3L),(-3L),0L},{0L,(-3L),(-3L),0L},{0L,(-3L),(-3L),0L}};
                int32_t l_303[1];
                uint32_t l_304 = 1UL;
                VECTOR(uint32_t, 4) l_305 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD2B4CA8EL), 0xD2B4CA8EL);
                int i, j;
                for (i = 0; i < 1; i++)
                    l_303[i] = 0x3278D9F8L;
                if (l_270)
                { /* block id: 140 */
                    int32_t l_272 = 0x1CE2A3B5L;
                    int32_t *l_271[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_273 = &l_272;
                    int32_t *l_274 = &l_272;
                    int32_t *l_275 = &l_272;
                    uint8_t l_276 = 3UL;
                    int32_t l_295 = 0x51A9EF4CL;
                    uint16_t l_296 = 1UL;
                    int i;
                    l_273 = l_271[1];
                    l_275 = (l_274 = (l_271[2] = (void*)0));
                    if (l_276)
                    { /* block id: 145 */
                        int32_t l_277 = 3L;
                        uint32_t l_278 = 4294967295UL;
                        VECTOR(int32_t, 16) l_279 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        int16_t l_280 = (-1L);
                        int i;
                        l_277 = l_277;
                        l_280 &= (l_278 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_279.s8d)).yxyy)), ((VECTOR(int32_t, 2))(0L, (-2L))), 9L, 0x7EE490E6L)).s4);
                    }
                    else
                    { /* block id: 148 */
                        int32_t l_281 = 6L;
                        uint32_t l_282[10][6] = {{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL},{1UL,5UL,5UL,5UL,1UL,1UL}};
                        VECTOR(int32_t, 4) l_283 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-9L)), (-9L));
                        VECTOR(int32_t, 4) l_284 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 3L), 3L);
                        VECTOR(int32_t, 4) l_285 = (VECTOR(int32_t, 4))(0x691DC7A7L, (VECTOR(int32_t, 2))(0x691DC7A7L, 1L), 1L);
                        VECTOR(int32_t, 8) l_286 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        uint32_t l_287 = 8UL;
                        VECTOR(int32_t, 8) l_288 = (VECTOR(int32_t, 8))(0x4BF9E9B8L, (VECTOR(int32_t, 4))(0x4BF9E9B8L, (VECTOR(int32_t, 2))(0x4BF9E9B8L, 0x75B89259L), 0x75B89259L), 0x75B89259L, 0x4BF9E9B8L, 0x75B89259L);
                        VECTOR(int32_t, 8) l_289 = (VECTOR(int32_t, 8))(0x06A77335L, (VECTOR(int32_t, 4))(0x06A77335L, (VECTOR(int32_t, 2))(0x06A77335L, 0x2A7677E9L), 0x2A7677E9L), 0x2A7677E9L, 0x06A77335L, 0x2A7677E9L);
                        uint64_t l_290[5] = {0xC7C9A296DCEA92A1L,0xC7C9A296DCEA92A1L,0xC7C9A296DCEA92A1L,0xC7C9A296DCEA92A1L,0xC7C9A296DCEA92A1L};
                        int8_t l_291 = 8L;
                        uint16_t l_292 = 0xDD36L;
                        int i, j;
                        l_282[2][2] &= (l_281 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 0L)).yyxxxyyy)).s5);
                        l_281 |= (l_290[2] ^= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_283.xyzxzzywwxxwzzzy)).lo, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_284.yxyyyxxw)))).s7375771524376535, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_285.xy)).xyxx)))).lo)).yxyy, (int32_t)0x51F85CFFL))), (l_285.z = 1L), ((VECTOR(int32_t, 2))(l_286.s05)), 0x10D7AD23L)).s0726025771474147))).hi))).s5723374337210143)).sfd)).yyyyyxyx, ((VECTOR(int32_t, 8))((l_287 |= 0x2BA6EB3FL), 0x7AD69ECFL, 9L, 0x0BB21BDCL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_288.s16543734)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(0x4B8CF01FL, (-7L))).xyyy, ((VECTOR(int32_t, 2))(0x0FF86941L, 7L)).xyyx))).odd)))).xyyx))))))))), ((VECTOR(int32_t, 2))(l_289.s35)).xyyyxxyy))).s0);
                        l_274 = (l_291 , (void*)0);
                        l_292--;
                    }
                    ++l_296;
                }
                else
                { /* block id: 158 */
                    uint32_t l_299 = 7UL;
                    uint16_t l_300 = 0xB29CL;
                    uint32_t l_301 = 0x4AD92432L;
                    l_153 = l_299;
                    l_153 = (l_300 , l_301);
                }
                l_302[0][0] = 0x27D5859FL;
                if (((l_304 = l_303[0]) , l_305.x))
                { /* block id: 164 */
                    uint8_t l_306 = 0xDEL;
                    uint64_t l_318 = 0x8FD1D01273C4C20AL;
                    int32_t l_319 = 0x2BED9113L;
                    if ((l_306 = 0x27C7C07CL))
                    { /* block id: 166 */
                        int8_t l_307 = 1L;
                        int8_t l_308[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_308[i] = 0x44L;
                        l_303[0] = 0x25747459L;
                        l_308[2] = l_307;
                    }
                    else
                    { /* block id: 169 */
                        uint8_t l_309 = 0x02L;
                        int32_t l_312 = 0x57F034A1L;
                        int16_t l_313 = (-1L);
                        uint16_t l_314 = 0xB09EL;
                        int8_t l_317 = 0x3AL;
                        --l_309;
                        ++l_314;
                        l_302[3][1] = l_317;
                    }
                    l_303[0] = ((VECTOR(int32_t, 2))(2L, (-1L))).even;
                    l_319 = l_318;
                }
                else
                { /* block id: 176 */
                    uint32_t l_320 = 0x305C4B03L;
                    union U0 l_321[2][2] = {{{0xAC1AF508L},{0xAC1AF508L}},{{0xAC1AF508L},{0xAC1AF508L}}};
                    uint32_t l_322 = 4294967288UL;
                    uint64_t l_323 = 6UL;
                    VECTOR(int64_t, 4) l_324 = (VECTOR(int64_t, 4))(0x36825E6CC2278E11L, (VECTOR(int64_t, 2))(0x36825E6CC2278E11L, 0L), 0L);
                    VECTOR(int64_t, 2) l_325 = (VECTOR(int64_t, 2))(1L, 0x778D70F31F02A5E1L);
                    uint64_t l_326 = 18446744073709551615UL;
                    uint32_t l_327[3][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
                    uint64_t l_328 = 6UL;
                    uint32_t l_329[1][1][9];
                    union U0 l_330 = {4294967293UL};/* VOLATILE GLOBAL l_330 */
                    union U0 l_331[2][10] = {{{4294967295UL},{1UL},{4294967295UL},{1UL},{4294967295UL},{4294967295UL},{1UL},{4294967295UL},{1UL},{4294967295UL}},{{4294967295UL},{1UL},{4294967295UL},{1UL},{4294967295UL},{4294967295UL},{1UL},{4294967295UL},{1UL},{4294967295UL}}};
                    uint64_t l_332 = 4UL;
                    int8_t l_333[5];
                    int64_t l_334 = 0L;
                    uint32_t l_335 = 0UL;
                    int8_t l_336 = 0x19L;
                    int16_t l_337 = 0x3648L;
                    int64_t l_349 = (-1L);
                    int64_t l_350[4][4] = {{6L,(-1L),6L,6L},{6L,(-1L),6L,6L},{6L,(-1L),6L,6L},{6L,(-1L),6L,6L}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 9; k++)
                                l_329[i][j][k] = 4294967292UL;
                        }
                    }
                    for (i = 0; i < 5; i++)
                        l_333[i] = 0x54L;
                    l_303[0] = (l_153 = l_320);
                    l_303[0] = (l_337 = (l_302[0][0] = (l_321[0][0] , (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))((l_323 = l_322), 0x65EF2AA02D725E3DL, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(l_324.yxywxywxwywzyxxw)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x1C6D6E9268ECCA2DL, 0x52031F29B8753A32L)).xxxx)).wyyxzwyz))), ((VECTOR(int64_t, 16))(l_325.xyyxxyxxxxxxxyyy)).odd))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0L, (l_326 , l_327[2][0]), 0x4B385071BD91A236L, 0L, ((VECTOR(int64_t, 2))(0L, (-5L))), 6L, 0L))))))).s12, ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 2))(1L, (-6L))).xxyxyyxyyyxxxxxy, (int64_t)l_328))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x7FE9A1CB9BC567CDL, (l_334 |= (l_333[2] = ((((l_329[0][0][4] , l_330) , l_331[0][7]) , l_332) , 0x4F39F880B69557BFL))), 0x14CE7F4098CC03F7L, ((VECTOR(int64_t, 8))(0x75422D324052EEA0L)), ((VECTOR(int64_t, 4))(0x4F48B9D188328968L)), 0x205A77881DCCE8D1L)).s95f2)).wyxxxywxyxzwxzwy))).s17, ((VECTOR(int64_t, 2))(0L))))).xxxxxyxy)).even, ((VECTOR(int64_t, 4))(0x250311C4F684961CL))))).w, 0x4A6CB469FE3B559AL, l_335, ((VECTOR(int64_t, 2))(0x771FBF82BC9B478EL)), 0L)).s2420244200650106, ((VECTOR(int64_t, 16))(0L))))))).s3 , l_336))));
                    for (l_325.x = 0; (l_325.x >= (-21)); l_325.x = safe_sub_func_uint8_t_u_u(l_325.x, 3))
                    { /* block id: 187 */
                        VECTOR(int64_t, 4) l_340 = (VECTOR(int64_t, 4))(0x23FCD32961FFB1C1L, (VECTOR(int64_t, 2))(0x23FCD32961FFB1C1L, 0x66E49509F36BA644L), 0x66E49509F36BA644L);
                        VECTOR(uint64_t, 4) l_341 = (VECTOR(uint64_t, 4))(0x51D359E2882098F8L, (VECTOR(uint64_t, 2))(0x51D359E2882098F8L, 0x7E936421B8291A4FL), 0x7E936421B8291A4FL);
                        VECTOR(int8_t, 2) l_342 = (VECTOR(int8_t, 2))((-1L), 0x71L);
                        VECTOR(uint32_t, 4) l_343 = (VECTOR(uint32_t, 4))(0xA0883D93L, (VECTOR(uint32_t, 2))(0xA0883D93L, 0xF3AD39A4L), 0xF3AD39A4L);
                        uint32_t l_344 = 0x0919BC36L;
                        uint32_t l_345 = 4294967295UL;
                        uint16_t l_346 = 65526UL;
                        int i;
                        l_302[0][0] &= (((VECTOR(int64_t, 4))(l_340.xxxy)).w , (((VECTOR(uint64_t, 2))(l_341.xx)).lo , (((l_305.y = (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_342.yxyyyxyyyxyxyxxx)).lo)).s5 , (l_329[0][0][4] |= GROUP_DIVERGE(0, 1)))) , (l_344 = (l_343.x = 0x3D730355L))) , l_345)));
                        l_346++;
                    }
                    l_302[0][0] = (l_349 , l_350[2][2]);
                }
            }
            else
            { /* block id: 197 */
                int32_t l_351 = 0L;
                for (l_351 = 0; (l_351 > (-26)); l_351--)
                { /* block id: 200 */
                    VECTOR(int32_t, 2) l_354 = (VECTOR(int32_t, 2))((-1L), 0x5FC19357L);
                    int64_t l_355 = 6L;
                    int i;
                    l_153 |= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(3L, 1L)), (-1L), 1L)).yxzyzyxz, ((VECTOR(int32_t, 16))(l_354.xyyyxyxxyyxyxyyy)).even))).s5;
                    l_153 |= l_355;
                }
            }
            l_358 = l_356;
            unsigned int result = 0;
            result += l_153;
            result += l_269;
            result += l_357.f0;
            atomic_add(&p_631->l_special_values[41], result);
        }
        else
        { /* block id: 206 */
            (1 + 1);
        }
    }
    l_397 |= (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((!(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_631->g_362.s6133430722534107)))).s2 | ((VECTOR(uint64_t, 16))((l_363 , (p_631->g_108 = (((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((((*p_631->g_99) = (((p_631->g_108 ^ 2UL) && (0x650C411EL >= ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(0x0E43L, 0x8B40L, p_631->g_88.y, ((VECTOR(uint16_t, 2))(0x46EBL, 1UL)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_370.yx)))), 0x35CDL)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0UL, p_631->g_comm_values[p_631->tid], 0x1ED2L, 1UL)))).yyzyzxwx)).hi))).x)) | (((*l_391) = ((safe_mod_func_uint64_t_u_u((!((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(5UL, 0xADL)).yxxy, ((VECTOR(uint8_t, 4))(l_373.s6362))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_374.s0541100561006623)).se4)).xyxy))), ((((((safe_sub_func_int8_t_s_s((((*l_378) &= l_363) , (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u(((FAKE_DIVERGE(p_631->group_2_offset, get_group_id(2), 10) <= (&p_631->g_75 == (l_388 = &p_631->g_116))) , p_59), 0x37L)) , (void*)0) == p_631->g_389) >= l_374.s0) != 0x50028AEEL), p_631->g_comm_values[p_631->tid])), 0x16B0L)), p_631->g_24.sf))), l_370.x)) | l_373.s6) != l_370.x) , (*p_631->g_76)) && p_631->g_88.x) ^ 0x4FL), 0x78L, 255UL, 1UL)).s4 || p_631->g_24.s2) , GROUP_DIVERGE(0, 1))), 0x0346CEE050E780B2L)) >= p_631->g_88.x)) | l_363))) && l_370.y), p_631->g_comm_values[p_631->tid])) , p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))]), l_370.y)), l_392)) < 0L) ^ 0xCBF5B8F5L))), p_59, ((VECTOR(uint64_t, 4))(4UL)), l_374.s3, ((VECTOR(uint64_t, 4))(0xDE2CD437CF3C3DFBL)), p_62, 9UL, 0x67CA7E5A90CAF590L, 0UL, 4UL)).sb)))), 8));
    return p_631->g_91.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_631->g_75 p_631->g_76 p_631->g_88 p_631->g_91 p_631->g_24 p_631->g_36 p_631->l_comm_values
 * writes: p_631->g_76 p_631->g_99 p_631->g_39
 */
int32_t ** func_69(uint64_t  p_70, uint16_t  p_71, int32_t  p_72, struct S1 * p_631)
{ /* block id: 11 */
    VECTOR(uint8_t, 2) l_77 = (VECTOR(uint8_t, 2))(0x22L, 0x51L);
    int32_t *l_78[5][5] = {{&p_631->g_26,(void*)0,&p_631->g_26,&p_631->g_26,&p_631->g_26},{&p_631->g_26,(void*)0,&p_631->g_26,&p_631->g_26,&p_631->g_26},{&p_631->g_26,(void*)0,&p_631->g_26,&p_631->g_26,&p_631->g_26},{&p_631->g_26,(void*)0,&p_631->g_26,&p_631->g_26,&p_631->g_26},{&p_631->g_26,(void*)0,&p_631->g_26,&p_631->g_26,&p_631->g_26}};
    VECTOR(int8_t, 16) l_79 = (VECTOR(int8_t, 16))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x34L), 0x34L), 0x34L, 0x55L, 0x34L, (VECTOR(int8_t, 2))(0x55L, 0x34L), (VECTOR(int8_t, 2))(0x55L, 0x34L), 0x55L, 0x34L, 0x55L, 0x34L);
    VECTOR(int8_t, 4) l_80 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x22L), 0x22L);
    VECTOR(int8_t, 2) l_81 = (VECTOR(int8_t, 2))(7L, 0x3FL);
    VECTOR(uint16_t, 2) l_84 = (VECTOR(uint16_t, 2))(0xD664L, 65531UL);
    VECTOR(uint16_t, 4) l_85 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 8UL), 8UL);
    VECTOR(uint16_t, 2) l_86 = (VECTOR(uint16_t, 2))(9UL, 0xD7B9L);
    VECTOR(uint16_t, 16) l_87 = (VECTOR(uint16_t, 16))(0xA298L, (VECTOR(uint16_t, 4))(0xA298L, (VECTOR(uint16_t, 2))(0xA298L, 0x365BL), 0x365BL), 0x365BL, 0xA298L, 0x365BL, (VECTOR(uint16_t, 2))(0xA298L, 0x365BL), (VECTOR(uint16_t, 2))(0xA298L, 0x365BL), 0xA298L, 0x365BL, 0xA298L, 0x365BL);
    VECTOR(uint8_t, 16) l_89 = (VECTOR(uint8_t, 16))(0x25L, (VECTOR(uint8_t, 4))(0x25L, (VECTOR(uint8_t, 2))(0x25L, 1UL), 1UL), 1UL, 0x25L, 1UL, (VECTOR(uint8_t, 2))(0x25L, 1UL), (VECTOR(uint8_t, 2))(0x25L, 1UL), 0x25L, 1UL, 0x25L, 1UL);
    VECTOR(uint8_t, 16) l_90 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x03L), 0x03L), 0x03L, 5UL, 0x03L, (VECTOR(uint8_t, 2))(5UL, 0x03L), (VECTOR(uint8_t, 2))(5UL, 0x03L), 5UL, 0x03L, 5UL, 0x03L);
    uint16_t *l_92 = (void*)0;
    uint16_t *l_93 = (void*)0;
    uint16_t *l_94 = (void*)0;
    uint16_t *l_95 = (void*)0;
    uint16_t *l_96[7][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_97 = (-1L);
    int32_t **l_98[8][4][8] = {{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}},{{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]},{&l_78[2][3],&l_78[3][2],&l_78[3][2],&l_78[3][2],&l_78[1][1],&l_78[3][2],&l_78[3][2],&l_78[3][2]}}};
    int32_t **l_100 = &p_631->g_99;
    int i, j, k;
    (*p_631->g_75) = (*p_631->g_75);
    (*p_631->g_76) = (+((p_631->g_99 = func_48(&p_631->g_26, (((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_77.yyxx)).xxyzwwwwxwwzwzwz)).sbd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(3UL, 252UL)), 0xE1L, ((void*)0 != l_78[3][2]), 255UL, 0x90L, 250UL, 0xD7L)).s31))).xxyxyyxxxxyxyxxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))((-1L), 0x2DL, 0x45L, ((VECTOR(int8_t, 4))(l_79.sd09d)), 0x7FL)), ((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))(l_80.xz)), ((VECTOR(int8_t, 2))(l_81.xx)), ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 16))(l_84.yyyyyyxyyyyxxyxy)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(l_85.yxwxwyxwxyxyxzyy)).sae, ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(l_86.yy)).xxxxxyxy)))))).s2651600062773601)).even, ((VECTOR(uint16_t, 8))(l_87.s212f019d))))).s46))).yyxxxyyyyyxxyxyx)), ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(p_631->g_88.yyxy)).yyzyywzzwzxyxyzx, ((VECTOR(uint8_t, 16))(0xA4L, 0xDBL, ((VECTOR(uint8_t, 2))(0x74L, 0x3FL)), 1UL, ((VECTOR(uint8_t, 2))(l_89.s31)), ((VECTOR(uint8_t, 2))(l_90.s15)), (((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_631->g_91.xyyxxxyy)).even)).hi))).xxyy, (uint64_t)GROUP_DIVERGE(2, 1)))).hi)).lo , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((p_71 = ((2L <= (~(0L < 0x33783651L))) , ((void*)0 == &l_78[1][0]))), (&p_631->g_76 == &l_78[3][2]), 0xFC4AL, 8UL)).odd)).hi) , p_631->g_91.y) > p_631->g_24.s8), p_631->g_36, ((VECTOR(uint8_t, 4))(0xB5L)), 0UL))))).lo, ((VECTOR(uint8_t, 8))(0UL))))).s1240654174133576))).sa, 0x4B06L)) , l_97), 0x57L, 0x68L)), ((VECTOR(int8_t, 8))(0x02L))))))).lo, ((VECTOR(int8_t, 4))(0x07L))))).yxzyyzzzyyyyxzzy))))).s9 , 0UL), l_78[4][1], p_631->l_comm_values[(safe_mod_func_uint32_t_u_u(p_631->tid, 3))], p_631)) != (void*)0));
    return l_100;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[45];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 45; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[45];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 45; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S1 c_632;
    struct S1* p_631 = &c_632;
    struct S1 c_633 = {
        (VECTOR(uint16_t, 16))(0x917AL, (VECTOR(uint16_t, 4))(0x917AL, (VECTOR(uint16_t, 2))(0x917AL, 0xDAD8L), 0xDAD8L), 0xDAD8L, 0x917AL, 0xDAD8L, (VECTOR(uint16_t, 2))(0x917AL, 0xDAD8L), (VECTOR(uint16_t, 2))(0x917AL, 0xDAD8L), 0x917AL, 0xDAD8L, 0x917AL, 0xDAD8L), // p_631->g_24
        5L, // p_631->g_26
        0L, // p_631->g_28
        0x422D5FBAL, // p_631->g_36
        (-6L), // p_631->g_39
        0UL, // p_631->g_40
        &p_631->g_39, // p_631->g_76
        &p_631->g_76, // p_631->g_75
        (VECTOR(uint8_t, 2))(0x0FL, 0xB4L), // p_631->g_88
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), // p_631->g_91
        &p_631->g_26, // p_631->g_99
        6UL, // p_631->g_106
        0UL, // p_631->g_108
        0xEE27L, // p_631->g_115
        {(void*)0,&p_631->g_26,(void*)0,(void*)0,&p_631->g_26,(void*)0,(void*)0,&p_631->g_26,(void*)0}, // p_631->g_117
        &p_631->g_117[0], // p_631->g_116
        (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x02CF8605339CE0BAL), 0x02CF8605339CE0BAL), 0x02CF8605339CE0BAL, (-2L), 0x02CF8605339CE0BAL), // p_631->g_362
        0L, // p_631->g_379
        {0x386C42F3L}, // p_631->g_390
        &p_631->g_390, // p_631->g_389
        0x43AD1329L, // p_631->g_396
        (VECTOR(int32_t, 16))(0x43964D85L, (VECTOR(int32_t, 4))(0x43964D85L, (VECTOR(int32_t, 2))(0x43964D85L, 1L), 1L), 1L, 0x43964D85L, 1L, (VECTOR(int32_t, 2))(0x43964D85L, 1L), (VECTOR(int32_t, 2))(0x43964D85L, 1L), 0x43964D85L, 1L, 0x43964D85L, 1L), // p_631->g_426
        0x474208F3L, // p_631->g_432
        0x8B54624DL, // p_631->g_435
        (VECTOR(int16_t, 2))(1L, 0x5E2BL), // p_631->g_443
        &p_631->g_116, // p_631->g_479
        (VECTOR(uint64_t, 2))(1UL, 0UL), // p_631->g_482
        (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 4L), 4L), // p_631->g_515
        (VECTOR(uint8_t, 2))(9UL, 0UL), // p_631->g_526
        (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x1EL), 0x1EL), 0x1EL, (-9L), 0x1EL), // p_631->g_555
        0x11L, // p_631->g_578
        0UL, // p_631->g_603
        (VECTOR(uint64_t, 4))(0xDE7CB6298873CB7AL, (VECTOR(uint64_t, 2))(0xDE7CB6298873CB7AL, 18446744073709551615UL), 18446744073709551615UL), // p_631->g_615
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x49CD3A57L), 0x49CD3A57L), 0x49CD3A57L, 1L, 0x49CD3A57L, (VECTOR(int32_t, 2))(1L, 0x49CD3A57L), (VECTOR(int32_t, 2))(1L, 0x49CD3A57L), 1L, 0x49CD3A57L, 1L, 0x49CD3A57L), // p_631->g_616
        0, // p_631->v_collective
        sequence_input[get_global_id(0)], // p_631->global_0_offset
        sequence_input[get_global_id(1)], // p_631->global_1_offset
        sequence_input[get_global_id(2)], // p_631->global_2_offset
        sequence_input[get_local_id(0)], // p_631->local_0_offset
        sequence_input[get_local_id(1)], // p_631->local_1_offset
        sequence_input[get_local_id(2)], // p_631->local_2_offset
        sequence_input[get_group_id(0)], // p_631->group_0_offset
        sequence_input[get_group_id(1)], // p_631->group_1_offset
        sequence_input[get_group_id(2)], // p_631->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_631->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_632 = c_633;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_631);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_631->g_24.s0, "p_631->g_24.s0", print_hash_value);
    transparent_crc(p_631->g_24.s1, "p_631->g_24.s1", print_hash_value);
    transparent_crc(p_631->g_24.s2, "p_631->g_24.s2", print_hash_value);
    transparent_crc(p_631->g_24.s3, "p_631->g_24.s3", print_hash_value);
    transparent_crc(p_631->g_24.s4, "p_631->g_24.s4", print_hash_value);
    transparent_crc(p_631->g_24.s5, "p_631->g_24.s5", print_hash_value);
    transparent_crc(p_631->g_24.s6, "p_631->g_24.s6", print_hash_value);
    transparent_crc(p_631->g_24.s7, "p_631->g_24.s7", print_hash_value);
    transparent_crc(p_631->g_24.s8, "p_631->g_24.s8", print_hash_value);
    transparent_crc(p_631->g_24.s9, "p_631->g_24.s9", print_hash_value);
    transparent_crc(p_631->g_24.sa, "p_631->g_24.sa", print_hash_value);
    transparent_crc(p_631->g_24.sb, "p_631->g_24.sb", print_hash_value);
    transparent_crc(p_631->g_24.sc, "p_631->g_24.sc", print_hash_value);
    transparent_crc(p_631->g_24.sd, "p_631->g_24.sd", print_hash_value);
    transparent_crc(p_631->g_24.se, "p_631->g_24.se", print_hash_value);
    transparent_crc(p_631->g_24.sf, "p_631->g_24.sf", print_hash_value);
    transparent_crc(p_631->g_26, "p_631->g_26", print_hash_value);
    transparent_crc(p_631->g_28, "p_631->g_28", print_hash_value);
    transparent_crc(p_631->g_36, "p_631->g_36", print_hash_value);
    transparent_crc(p_631->g_39, "p_631->g_39", print_hash_value);
    transparent_crc(p_631->g_40, "p_631->g_40", print_hash_value);
    transparent_crc(p_631->g_88.x, "p_631->g_88.x", print_hash_value);
    transparent_crc(p_631->g_88.y, "p_631->g_88.y", print_hash_value);
    transparent_crc(p_631->g_91.x, "p_631->g_91.x", print_hash_value);
    transparent_crc(p_631->g_91.y, "p_631->g_91.y", print_hash_value);
    transparent_crc(p_631->g_106, "p_631->g_106", print_hash_value);
    transparent_crc(p_631->g_108, "p_631->g_108", print_hash_value);
    transparent_crc(p_631->g_115, "p_631->g_115", print_hash_value);
    transparent_crc(p_631->g_362.s0, "p_631->g_362.s0", print_hash_value);
    transparent_crc(p_631->g_362.s1, "p_631->g_362.s1", print_hash_value);
    transparent_crc(p_631->g_362.s2, "p_631->g_362.s2", print_hash_value);
    transparent_crc(p_631->g_362.s3, "p_631->g_362.s3", print_hash_value);
    transparent_crc(p_631->g_362.s4, "p_631->g_362.s4", print_hash_value);
    transparent_crc(p_631->g_362.s5, "p_631->g_362.s5", print_hash_value);
    transparent_crc(p_631->g_362.s6, "p_631->g_362.s6", print_hash_value);
    transparent_crc(p_631->g_362.s7, "p_631->g_362.s7", print_hash_value);
    transparent_crc(p_631->g_379, "p_631->g_379", print_hash_value);
    transparent_crc(p_631->g_390.f0, "p_631->g_390.f0", print_hash_value);
    transparent_crc(p_631->g_396, "p_631->g_396", print_hash_value);
    transparent_crc(p_631->g_426.s0, "p_631->g_426.s0", print_hash_value);
    transparent_crc(p_631->g_426.s1, "p_631->g_426.s1", print_hash_value);
    transparent_crc(p_631->g_426.s2, "p_631->g_426.s2", print_hash_value);
    transparent_crc(p_631->g_426.s3, "p_631->g_426.s3", print_hash_value);
    transparent_crc(p_631->g_426.s4, "p_631->g_426.s4", print_hash_value);
    transparent_crc(p_631->g_426.s5, "p_631->g_426.s5", print_hash_value);
    transparent_crc(p_631->g_426.s6, "p_631->g_426.s6", print_hash_value);
    transparent_crc(p_631->g_426.s7, "p_631->g_426.s7", print_hash_value);
    transparent_crc(p_631->g_426.s8, "p_631->g_426.s8", print_hash_value);
    transparent_crc(p_631->g_426.s9, "p_631->g_426.s9", print_hash_value);
    transparent_crc(p_631->g_426.sa, "p_631->g_426.sa", print_hash_value);
    transparent_crc(p_631->g_426.sb, "p_631->g_426.sb", print_hash_value);
    transparent_crc(p_631->g_426.sc, "p_631->g_426.sc", print_hash_value);
    transparent_crc(p_631->g_426.sd, "p_631->g_426.sd", print_hash_value);
    transparent_crc(p_631->g_426.se, "p_631->g_426.se", print_hash_value);
    transparent_crc(p_631->g_426.sf, "p_631->g_426.sf", print_hash_value);
    transparent_crc(p_631->g_432, "p_631->g_432", print_hash_value);
    transparent_crc(p_631->g_435, "p_631->g_435", print_hash_value);
    transparent_crc(p_631->g_443.x, "p_631->g_443.x", print_hash_value);
    transparent_crc(p_631->g_443.y, "p_631->g_443.y", print_hash_value);
    transparent_crc(p_631->g_482.x, "p_631->g_482.x", print_hash_value);
    transparent_crc(p_631->g_482.y, "p_631->g_482.y", print_hash_value);
    transparent_crc(p_631->g_515.x, "p_631->g_515.x", print_hash_value);
    transparent_crc(p_631->g_515.y, "p_631->g_515.y", print_hash_value);
    transparent_crc(p_631->g_515.z, "p_631->g_515.z", print_hash_value);
    transparent_crc(p_631->g_515.w, "p_631->g_515.w", print_hash_value);
    transparent_crc(p_631->g_526.x, "p_631->g_526.x", print_hash_value);
    transparent_crc(p_631->g_526.y, "p_631->g_526.y", print_hash_value);
    transparent_crc(p_631->g_555.s0, "p_631->g_555.s0", print_hash_value);
    transparent_crc(p_631->g_555.s1, "p_631->g_555.s1", print_hash_value);
    transparent_crc(p_631->g_555.s2, "p_631->g_555.s2", print_hash_value);
    transparent_crc(p_631->g_555.s3, "p_631->g_555.s3", print_hash_value);
    transparent_crc(p_631->g_555.s4, "p_631->g_555.s4", print_hash_value);
    transparent_crc(p_631->g_555.s5, "p_631->g_555.s5", print_hash_value);
    transparent_crc(p_631->g_555.s6, "p_631->g_555.s6", print_hash_value);
    transparent_crc(p_631->g_555.s7, "p_631->g_555.s7", print_hash_value);
    transparent_crc(p_631->g_578, "p_631->g_578", print_hash_value);
    transparent_crc(p_631->g_603, "p_631->g_603", print_hash_value);
    transparent_crc(p_631->g_615.x, "p_631->g_615.x", print_hash_value);
    transparent_crc(p_631->g_615.y, "p_631->g_615.y", print_hash_value);
    transparent_crc(p_631->g_615.z, "p_631->g_615.z", print_hash_value);
    transparent_crc(p_631->g_615.w, "p_631->g_615.w", print_hash_value);
    transparent_crc(p_631->g_616.s0, "p_631->g_616.s0", print_hash_value);
    transparent_crc(p_631->g_616.s1, "p_631->g_616.s1", print_hash_value);
    transparent_crc(p_631->g_616.s2, "p_631->g_616.s2", print_hash_value);
    transparent_crc(p_631->g_616.s3, "p_631->g_616.s3", print_hash_value);
    transparent_crc(p_631->g_616.s4, "p_631->g_616.s4", print_hash_value);
    transparent_crc(p_631->g_616.s5, "p_631->g_616.s5", print_hash_value);
    transparent_crc(p_631->g_616.s6, "p_631->g_616.s6", print_hash_value);
    transparent_crc(p_631->g_616.s7, "p_631->g_616.s7", print_hash_value);
    transparent_crc(p_631->g_616.s8, "p_631->g_616.s8", print_hash_value);
    transparent_crc(p_631->g_616.s9, "p_631->g_616.s9", print_hash_value);
    transparent_crc(p_631->g_616.sa, "p_631->g_616.sa", print_hash_value);
    transparent_crc(p_631->g_616.sb, "p_631->g_616.sb", print_hash_value);
    transparent_crc(p_631->g_616.sc, "p_631->g_616.sc", print_hash_value);
    transparent_crc(p_631->g_616.sd, "p_631->g_616.sd", print_hash_value);
    transparent_crc(p_631->g_616.se, "p_631->g_616.se", print_hash_value);
    transparent_crc(p_631->g_616.sf, "p_631->g_616.sf", print_hash_value);
    transparent_crc(p_631->v_collective, "p_631->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 45; i++)
            transparent_crc(p_631->l_special_values[i], "p_631->l_special_values[i]", print_hash_value);
    transparent_crc(p_631->l_comm_values[get_linear_local_id()], "p_631->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_631->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_631->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
