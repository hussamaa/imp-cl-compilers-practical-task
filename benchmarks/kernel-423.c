// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 15,61,3 -l 15,1,1
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

__constant uint32_t permutations[10][15] = {
{3,8,2,9,5,10,13,7,14,11,6,4,0,1,12}, // permutation 0
{5,8,10,13,4,3,0,9,2,12,6,11,7,1,14}, // permutation 1
{5,0,4,7,8,2,11,13,10,14,1,3,12,6,9}, // permutation 2
{9,2,5,1,12,0,7,3,6,13,10,8,4,11,14}, // permutation 3
{1,12,7,6,2,4,5,8,14,10,13,11,0,9,3}, // permutation 4
{13,0,8,4,14,12,1,3,7,11,2,10,5,6,9}, // permutation 5
{8,14,4,1,7,9,13,3,2,10,11,12,0,5,6}, // permutation 6
{6,5,9,3,2,13,11,10,8,14,1,7,4,0,12}, // permutation 7
{3,8,14,10,4,13,12,0,11,2,6,7,5,9,1}, // permutation 8
{9,4,14,3,11,8,1,7,5,10,12,0,13,2,6} // permutation 9
};

// Seed: 271367088

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   volatile int32_t  f2;
   uint8_t  f3;
   volatile int64_t  f4;
   uint16_t  f5;
   uint64_t  f6;
};

struct S1 {
   uint64_t  f0;
   volatile int16_t  f1;
   volatile uint32_t  f2;
   int8_t  f3;
   uint8_t  f4;
};

struct S2 {
   int64_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
   int32_t  f3;
   volatile struct S1  f4;
   uint32_t  f5;
   volatile uint8_t  f6;
   volatile int16_t  f7;
};

struct S3 {
    int32_t g_2;
    volatile VECTOR(int64_t, 2) g_34;
    int32_t g_46;
    uint32_t g_55;
    int32_t g_59;
    uint8_t g_90;
    int64_t g_92;
    volatile int64_t g_99;
    volatile int64_t *g_98;
    VECTOR(uint16_t, 16) g_101;
    VECTOR(uint16_t, 16) g_102;
    uint8_t *g_113;
    uint8_t *g_114;
    int8_t g_118[3][5][1];
    uint32_t g_120;
    uint16_t g_123;
    int32_t g_129;
    int32_t g_318;
    uint16_t g_321;
    volatile struct S1 g_322[2][5];
    VECTOR(uint8_t, 8) g_329;
    int32_t *g_338;
    int32_t **g_337;
    VECTOR(int8_t, 2) g_370;
    struct S2 g_403;
    VECTOR(uint64_t, 8) g_427;
    volatile struct S0 g_443;
    volatile struct S0 * volatile g_445;
    struct S2 g_451;
    VECTOR(int8_t, 2) g_454;
    uint32_t g_465;
    int32_t g_467;
    volatile struct S0 g_471;
    volatile struct S0 * volatile g_472;
    VECTOR(uint32_t, 8) g_492;
    VECTOR(uint16_t, 8) g_514;
    VECTOR(int32_t, 2) g_523;
    struct S2 g_542;
    int8_t *g_572;
    int8_t **g_571[10];
    int8_t **g_575;
    uint8_t g_581;
    volatile VECTOR(int32_t, 2) g_605;
    VECTOR(int32_t, 4) g_609;
    VECTOR(int32_t, 4) g_611;
    VECTOR(int32_t, 4) g_614;
    volatile VECTOR(uint32_t, 2) g_615;
    struct S2 g_617;
    volatile struct S0 g_618;
    volatile VECTOR(int64_t, 4) g_623;
    VECTOR(uint8_t, 4) g_630;
    struct S0 g_643;
    uint32_t g_655;
    VECTOR(int32_t, 2) g_732;
    VECTOR(int32_t, 16) g_733;
    struct S0 *g_749;
    struct S2 g_751;
    struct S2 *g_750;
    volatile VECTOR(int16_t, 4) g_779;
    struct S0 g_793;
    volatile struct S0 g_808;
    struct S1 g_815;
    struct S1 *g_817[1];
    struct S1 ** volatile g_816[2];
    VECTOR(int32_t, 4) g_820;
    VECTOR(int32_t, 4) g_821;
    struct S0 g_824;
    struct S0 g_825;
    struct S2 g_828;
    struct S2 ** volatile g_831[8][9][3];
    struct S2 ** volatile g_832;
    volatile struct S0 g_844;
    volatile VECTOR(uint32_t, 16) g_864;
    int64_t g_866[2][10];
    struct S0 * volatile g_869[1];
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
uint8_t  func_1(struct S3 * p_884);
struct S0  func_5(uint32_t  p_6, int32_t  p_7, int16_t  p_8, int32_t  p_9, int64_t  p_10, struct S3 * p_884);
uint16_t  func_13(uint32_t  p_14, int32_t  p_15, uint16_t  p_16, uint16_t  p_17, uint64_t  p_18, struct S3 * p_884);
uint8_t  func_21(uint8_t  p_22, int16_t  p_23, struct S3 * p_884);
uint64_t  func_24(uint16_t  p_25, uint16_t  p_26, uint64_t  p_27, int32_t  p_28, uint32_t  p_29, struct S3 * p_884);
uint16_t  func_30(uint32_t  p_31, uint64_t  p_32, uint16_t  p_33, struct S3 * p_884);
int32_t * func_60(int64_t  p_61, int32_t * p_62, struct S3 * p_884);
uint32_t  func_63(uint64_t  p_64, int32_t * p_65, struct S3 * p_884);
int8_t  func_76(int32_t * p_77, int32_t  p_78, int32_t  p_79, struct S3 * p_884);
uint16_t  func_93(uint32_t * p_94, uint32_t * p_95, int64_t * p_96, int64_t  p_97, struct S3 * p_884);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_884->g_2 p_884->g_comm_values p_884->l_comm_values p_884->g_55 p_884->g_59 p_884->g_443 p_884->g_445 p_884->g_471 p_884->g_472 p_884->g_451 p_884->g_370 p_884->g_129 p_884->g_46 p_884->g_101 p_884->g_102 p_884->g_337 p_884->g_90 p_884->g_321 p_884->g_329 p_884->g_403.f0 p_884->g_492 p_884->g_403.f2 p_884->g_454 p_884->g_403.f1 p_884->g_113 p_884->g_318 p_884->g_99 p_884->g_403.f3 p_884->g_118 p_884->g_338 p_884->g_542 p_884->g_581 p_884->g_655 p_884->g_643.f2 p_884->g_749 p_884->g_824 p_884->g_832 p_884->g_750 p_884->g_751 p_884->g_403.f5 p_884->g_611
 * writes: p_884->g_2 p_884->g_46 p_884->g_55 p_884->g_59 p_884->g_443 p_884->g_403.f2 p_884->g_370 p_884->g_338 p_884->g_427 p_884->g_90 p_884->g_102 p_884->g_581 p_884->g_542.f0 p_884->g_542.f3 p_884->g_451.f3 p_884->g_655 p_884->g_617.f0 p_884->g_451.f0 p_884->g_749 p_884->g_825 p_884->g_611
 */
uint8_t  func_1(struct S3 * p_884)
{ /* block id: 4 */
    int8_t l_11 = 0x2BL;
    VECTOR(int16_t, 16) l_38 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x495DL), 0x495DL), 0x495DL, 1L, 0x495DL, (VECTOR(int16_t, 2))(1L, 0x495DL), (VECTOR(int16_t, 2))(1L, 0x495DL), 1L, 0x495DL, 1L, 0x495DL);
    int32_t l_534 = 0x652DC74BL;
    int32_t l_597 = 0x53975FB4L;
    int32_t l_872 = 0x36DE957DL;
    int32_t l_873 = 0x1FA03772L;
    int32_t l_874 = 0x16FC1C93L;
    uint16_t l_875 = 4UL;
    struct S0 **l_880[6][2][10] = {{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}},{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}},{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}},{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}},{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}},{{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749},{&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749,&p_884->g_749}}};
    volatile struct S0 *l_883 = (void*)0;
    volatile struct S0 **l_882 = &l_883;
    int i, j, k;
    for (p_884->g_2 = 23; (p_884->g_2 < 29); p_884->g_2 = safe_add_func_int64_t_s_s(p_884->g_2, 9))
    { /* block id: 7 */
        int16_t l_12 = 0x770BL;
        VECTOR(int16_t, 4) l_37 = (VECTOR(int16_t, 4))(0x3DC4L, (VECTOR(int16_t, 2))(0x3DC4L, 0x63C2L), 0x63C2L);
        int32_t *l_45 = (void*)0;
        VECTOR(uint16_t, 8) l_47 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xF696L), 0xF696L), 0xF696L, 5UL, 0xF696L);
        uint32_t *l_654 = &p_884->g_655;
        struct S0 *l_870 = &p_884->g_825;
        int32_t *l_871[9][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S0 ***l_881 = &l_880[2][0][1];
        int i, j;
        (*l_870) = func_5(p_884->g_comm_values[p_884->tid], p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))], l_11, l_12, ((p_884->g_2 ^ func_13(((*l_654) |= (safe_rshift_func_int16_t_s_u((func_21(((((~func_24(func_30(((l_12 > ((VECTOR(int64_t, 8))(0x527720104353EA3AL, 0L, 0L, p_884->g_2, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(p_884->g_34.xxyxyxyxxyyyyyxx)).sae, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x0D7C584EDB553A81L, 0x6D734895C4B79A97L)).xxyyyyyxyyxyxyyy)).sd900, (int64_t)(0xD8L != (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_37.wyywxxyy)))).s03, ((VECTOR(int16_t, 16))(l_38.sd68647d02c9aa6f5)).s76))).yxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))((safe_lshift_func_uint8_t_u_s((((p_884->g_46 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_12 , (-2L)), p_884->g_2)), 0x42L))) && l_37.z) > 18446744073709551611UL), l_47.s7)), 5L, ((VECTOR(int8_t, 8))(0x77L)), 7L, l_38.s3, p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))], 1L, 0x62L, 8L)), (int8_t)p_884->g_46))).odd, ((VECTOR(uint8_t, 8))(0xCCL))))))).s47)), (-6L), 0x1351L, 1L, ((VECTOR(int16_t, 2))(0x0947L)), 0x68BDL)).even, ((VECTOR(int16_t, 4))(0x5709L))))).wyywwyxwzyzywzyz, ((VECTOR(int16_t, 16))((-7L)))))).sac3f)).xxxwwywxxzwxwyzz)).s2c)), ((VECTOR(int16_t, 8))(0x3168L)), 0x539FL, l_38.s9, 8L, ((VECTOR(int16_t, 2))((-1L))), 0L)).sc, p_884->g_2)))))).even))), 0L, 0x01C16B31B79E2962L)))).s5) < 0x7477944DL), l_47.s3, p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))], p_884), l_38.sb, p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))], l_38.s7, l_534, p_884)) & 0UL) >= 0x0BC5730D32533AD5L) >= l_597), p_884->g_321, p_884) && FAKE_DIVERGE(p_884->local_0_offset, get_local_id(0), 10)), 4))), l_597, p_884->g_101.s8, l_11, l_534, p_884)) >= 65535UL), p_884);
        l_875++;
        if ((**p_884->g_337))
            break;
        p_884->g_611.y &= ((safe_mod_func_int64_t_s_s(((((*l_881) = l_880[2][0][1]) == ((**p_884->g_832) , &p_884->g_749)) >= p_884->g_403.f5), (p_884->g_118[1][3][0] , 0x48C6F5529C8257D1L))) || 0x7FF7402B5D692A52L);
    }
    (*l_882) = &p_884->g_844;
    return l_873;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_617.f0 p_884->g_451.f0 p_884->g_749 p_884->g_824
 * writes: p_884->g_617.f0 p_884->g_451.f0 p_884->g_749
 */
struct S0  func_5(uint32_t  p_6, int32_t  p_7, int16_t  p_8, int32_t  p_9, int64_t  p_10, struct S3 * p_884)
{ /* block id: 296 */
    int8_t l_687 = 0x6BL;
    int32_t *l_688 = &p_884->g_403.f3;
    int32_t *l_689 = &p_884->g_59;
    int32_t *l_690 = (void*)0;
    int32_t l_691 = (-1L);
    int32_t l_692[1];
    int32_t *l_693 = &p_884->g_129;
    int32_t *l_694 = &p_884->g_46;
    int32_t *l_695 = &p_884->g_617.f3;
    int32_t *l_696 = &p_884->g_617.f3;
    int32_t *l_697 = &p_884->g_59;
    int32_t *l_698 = &l_692[0];
    int32_t *l_699 = &l_691;
    int32_t *l_700 = &p_884->g_59;
    int32_t *l_701[3][4][2] = {{{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59}},{{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59}},{{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59},{(void*)0,&p_884->g_59}}};
    uint8_t l_702 = 0x11L;
    int32_t l_735 = 0x31680C92L;
    int64_t *l_810 = &p_884->g_751.f0;
    int64_t **l_809 = &l_810;
    int32_t *l_819 = &p_884->g_59;
    struct S0 *l_868 = &p_884->g_824;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_692[i] = 0x6430EFA3L;
    l_702--;
    for (p_884->g_617.f0 = 27; (p_884->g_617.f0 != 19); p_884->g_617.f0 = safe_sub_func_int64_t_s_s(p_884->g_617.f0, 6))
    { /* block id: 300 */
        uint32_t l_709[1][10] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
        int32_t l_790[4][2][3] = {{{1L,1L,0x65DD88B5L},{1L,1L,0x65DD88B5L}},{{1L,1L,0x65DD88B5L},{1L,1L,0x65DD88B5L}},{{1L,1L,0x65DD88B5L},{1L,1L,0x65DD88B5L}},{{1L,1L,0x65DD88B5L},{1L,1L,0x65DD88B5L}}};
        int32_t *l_794 = &p_884->g_403.f3;
        int64_t **l_798 = (void*)0;
        VECTOR(int32_t, 8) l_822 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int32_t *l_867 = &p_884->g_2;
        int i, j, k;
        for (p_884->g_451.f0 = 12; (p_884->g_451.f0 >= 9); p_884->g_451.f0 = safe_sub_func_uint8_t_u_u(p_884->g_451.f0, 4))
        { /* block id: 303 */
            int16_t l_712 = 0x7B5DL;
            int32_t l_737 = 0x6B82E040L;
            int32_t l_791 = 0L;
            uint32_t l_792 = 4294967295UL;
            VECTOR(int32_t, 16) l_802 = (VECTOR(int32_t, 16))(0x32C8CDB2L, (VECTOR(int32_t, 4))(0x32C8CDB2L, (VECTOR(int32_t, 2))(0x32C8CDB2L, 0x137829F2L), 0x137829F2L), 0x137829F2L, 0x32C8CDB2L, 0x137829F2L, (VECTOR(int32_t, 2))(0x32C8CDB2L, 0x137829F2L), (VECTOR(int32_t, 2))(0x32C8CDB2L, 0x137829F2L), 0x32C8CDB2L, 0x137829F2L, 0x32C8CDB2L, 0x137829F2L);
            uint8_t l_807 = 9UL;
            int i;
            (1 + 1);
        }
        p_884->g_749 = l_868;
        return (*p_884->g_749);
    }
    return (*l_868);
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_643.f2
 * writes:
 */
uint16_t  func_13(uint32_t  p_14, int32_t  p_15, uint16_t  p_16, uint16_t  p_17, uint64_t  p_18, struct S3 * p_884)
{ /* block id: 279 */
    if ((atomic_inc(&p_884->l_atomic_input[13]) == 7))
    { /* block id: 281 */
        int64_t l_656 = 0x42EDC8491A4EF41CL;
        uint32_t l_657 = 0x1EECED55L;
        uint32_t l_658 = 0UL;
        uint64_t l_659 = 1UL;
        uint64_t l_682 = 1UL;
        uint16_t l_683 = 65531UL;
        struct S2 l_684[1] = {{-1L,0x3EBE2A37L,0x5940F316L,4L,{5UL,0x7176L,0x755B955EL,-1L,0x2AL},4UL,0xFFL,-1L}};
        int64_t l_685 = 4L;
        int16_t l_686[6][8] = {{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL},{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL},{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL},{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL},{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL},{0x065DL,0x6ACEL,5L,(-1L),0x6ACEL,(-1L),5L,0x6ACEL}};
        int i, j;
        l_657 = ((VECTOR(int32_t, 4))(l_656, 2L, (-7L), 0x1E4ACC75L)).z;
        if ((l_658 , l_659))
        { /* block id: 283 */
            int64_t l_660[4][6][10] = {{{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L}},{{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L}},{{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L}},{{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L},{1L,0x28CCE8031618003CL,0x260B1693373810E1L,0x38AC8C48788AF495L,(-1L),(-7L),(-9L),0x1C2A700AD3E871E0L,(-1L),1L}}};
            uint8_t l_661 = 0x69L;
            struct S1 l_664 = {0x786CF5EC74525324L,0x6C19L,9UL,1L,255UL};/* VOLATILE GLOBAL l_664 */
            uint32_t l_665 = 0x918CC20EL;
            int32_t l_667[6][1][3] = {{{1L,1L,1L}},{{1L,1L,1L}},{{1L,1L,1L}},{{1L,1L,1L}},{{1L,1L,1L}},{{1L,1L,1L}}};
            int32_t *l_666 = &l_667[3][0][2];
            int32_t *l_668 = &l_667[3][0][2];
            int i, j, k;
            --l_661;
            l_668 = (l_664 , (l_665 , l_666));
        }
        else
        { /* block id: 286 */
            int8_t l_669 = 0x45L;
            VECTOR(uint32_t, 16) l_670 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x3D621340L), 0x3D621340L), 0x3D621340L, 4294967287UL, 0x3D621340L, (VECTOR(uint32_t, 2))(4294967287UL, 0x3D621340L), (VECTOR(uint32_t, 2))(4294967287UL, 0x3D621340L), 4294967287UL, 0x3D621340L, 4294967287UL, 0x3D621340L);
            int16_t l_673 = (-8L);
            int8_t l_674 = (-3L);
            int32_t l_675 = (-7L);
            int32_t l_676 = 4L;
            int64_t l_677 = 0x03D1EF79A0DE76B8L;
            VECTOR(int16_t, 4) l_678 = (VECTOR(int16_t, 4))(0x7505L, (VECTOR(int16_t, 2))(0x7505L, (-1L)), (-1L));
            uint8_t l_679 = 255UL;
            int i;
            l_670.sb++;
            --l_679;
        }
        l_683 &= l_682;
        l_686[1][7] = (l_684[0] , l_685);
        unsigned int result = 0;
        result += l_656;
        result += l_657;
        result += l_658;
        result += l_659;
        result += l_682;
        result += l_683;
        int l_684_i0;
        for (l_684_i0 = 0; l_684_i0 < 1; l_684_i0++) {
            result += l_684[l_684_i0].f0;
            result += l_684[l_684_i0].f1;
            result += l_684[l_684_i0].f2;
            result += l_684[l_684_i0].f3;
            result += l_684[l_684_i0].f4.f0;
            result += l_684[l_684_i0].f4.f1;
            result += l_684[l_684_i0].f4.f2;
            result += l_684[l_684_i0].f4.f3;
            result += l_684[l_684_i0].f4.f4;
            result += l_684[l_684_i0].f5;
            result += l_684[l_684_i0].f6;
            result += l_684[l_684_i0].f7;
        }
        result += l_685;
        int l_686_i0, l_686_i1;
        for (l_686_i0 = 0; l_686_i0 < 6; l_686_i0++) {
            for (l_686_i1 = 0; l_686_i1 < 8; l_686_i1++) {
                result += l_686[l_686_i0][l_686_i1];
            }
        }
        atomic_add(&p_884->l_special_values[13], result);
    }
    else
    { /* block id: 292 */
        (1 + 1);
    }
    return p_884->g_643.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_542.f0 p_884->g_605 p_884->g_609 p_884->g_611 p_884->g_451.f3 p_884->g_614 p_884->g_615 p_884->g_618 p_884->g_113 p_884->g_90 p_884->g_623 p_884->g_102 p_884->g_338 p_884->g_59 p_884->g_2 p_884->g_542.f3 p_884->g_337 p_884->g_118 p_884->g_630 p_884->l_comm_values
 * writes: p_884->g_542.f0 p_884->g_451.f3 p_884->g_467 p_884->g_542.f3 p_884->g_92
 */
uint8_t  func_21(uint8_t  p_22, int16_t  p_23, struct S3 * p_884)
{ /* block id: 260 */
    uint16_t l_600 = 65535UL;
    VECTOR(int32_t, 16) l_610 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x30954730L), 0x30954730L), 0x30954730L, 1L, 0x30954730L, (VECTOR(int32_t, 2))(1L, 0x30954730L), (VECTOR(int32_t, 2))(1L, 0x30954730L), 1L, 0x30954730L, 1L, 0x30954730L);
    int32_t l_638 = 0L;
    VECTOR(int64_t, 16) l_639 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x0C5A2EF1F4B5F44FL), 0x0C5A2EF1F4B5F44FL), 0x0C5A2EF1F4B5F44FL, 0L, 0x0C5A2EF1F4B5F44FL, (VECTOR(int64_t, 2))(0L, 0x0C5A2EF1F4B5F44FL), (VECTOR(int64_t, 2))(0L, 0x0C5A2EF1F4B5F44FL), 0L, 0x0C5A2EF1F4B5F44FL, 0L, 0x0C5A2EF1F4B5F44FL);
    struct S0 *l_642 = &p_884->g_643;
    int i;
    for (p_884->g_542.f0 = 0; (p_884->g_542.f0 > (-15)); --p_884->g_542.f0)
    { /* block id: 263 */
        uint8_t l_608 = 0xCCL;
        int32_t *l_612 = (void*)0;
        int32_t *l_613 = &p_884->g_451.f3;
        struct S2 *l_616 = &p_884->g_617;
        int32_t *l_624 = (void*)0;
        int32_t *l_625 = &p_884->g_542.f3;
        uint64_t *l_633 = (void*)0;
        uint64_t *l_634 = (void*)0;
        uint64_t *l_635 = (void*)0;
        uint64_t *l_636 = (void*)0;
        uint64_t *l_637[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 **l_644[10] = {&l_642,&l_642,&l_642,&l_642,&l_642,&l_642,&l_642,&l_642,&l_642,&l_642};
        int64_t *l_645 = &p_884->g_92;
        uint32_t ***l_648 = (void*)0;
        uint32_t *l_651 = &p_884->g_465;
        uint32_t **l_650[4][3] = {{&l_651,&l_651,&l_651},{&l_651,&l_651,&l_651},{&l_651,&l_651,&l_651},{&l_651,&l_651,&l_651}};
        uint32_t ***l_649 = &l_650[0][2];
        uint32_t **l_653 = &l_651;
        uint32_t ***l_652 = &l_653;
        int i, j;
        if (l_600)
            break;
        l_610.sf = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((*l_625) |= (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(0x58CFA09FL, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(p_884->g_605.xyyy)).zyzyyzxz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), 0x7F13BA3EL, ((p_884->g_467 = (safe_sub_func_int32_t_s_s(l_608, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(p_884->g_609.zw)).xxyyxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_610.s81bdc23e)).hi)), ((VECTOR(int32_t, 2))(p_884->g_611.yy)), ((*l_613) ^= 0x1CC7BDD2L), p_22, 0x3C6057DBL, ((VECTOR(int32_t, 2))(p_884->g_614.wz)), 1L, ((((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(0x34E79A54L, 1UL)), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_884->g_615.xyxxyxyyyyyxxxyx)).hi)).s72, ((VECTOR(uint32_t, 4))(0x65CD52C2L, 0xED847E7DL, 0xC6F0C76DL, 0x8BB41F86L)).even)))))).hi ^ ((void*)0 == l_616)) , (p_884->g_618 , (((VECTOR(int64_t, 2))((-1L), (-5L))).odd | (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((((*p_884->g_113) != ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_884->g_623.ywwxxzxw)).s03)), (p_22 > l_600), ((VECTOR(int64_t, 2))(0x472C165C7C388A25L)), 1L, ((VECTOR(int64_t, 8))(0L)), 0x7C481CBD23934D12L, 8L)).sa > (*l_613)) || p_22)) <= l_600) , 0x71L), 4UL)), p_884->g_102.s8))))), 0x712B6498L, 0x571E96B2L, (-1L))).lo))).s5451070314327047)).s2))) , (*p_884->g_338)), ((VECTOR(int32_t, 2))(2L)), ((VECTOR(int32_t, 2))(0x0FE9EF38L)), (-9L))).s2231572536367303)).odd))), ((VECTOR(int32_t, 4))(0x08B63BFEL)), (-3L), 0x10B25E65L, 0x3BF055E4L)).s7, 4294967293UL)), p_22))), 7L, ((VECTOR(int32_t, 2))(0x3BF88F41L)), p_22, 0x271808C4L, l_610.s6, 4L, p_22, (*l_613), ((VECTOR(int32_t, 4))(0x0FC38AB3L)), (-7L), 0x7AA6CAA8L)).sf2)), 1L, 5L)).y , (**p_884->g_337));
        (*l_625) = (((p_884->g_118[0][0][0] , (((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x5DL, p_22, 0x36L, (-1L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_884->g_630.yywxzwyy)).s1, 2)), 0x36L, (((((safe_mul_func_uint8_t_u_u(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 16))(18446744073709551613UL, (l_610.s6 = ((*l_613) >= p_22)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 8))(0L, (((!l_638) , 0UL) == p_23), 1L, (-8L), 0x73C766EC97A6BF5EL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x73DDF96935EC4EF6L, 0x73071AF95587ADB7L)).xyxyyyxxyyyxyyyy)).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x6806B072923B2ABBL, 0x70C984382ACD745DL, 0x22B4C9C16920E374L, 1L, 0L, (-10L), 0x5E70141EF85F04FDL, ((VECTOR(int64_t, 8))(l_639.sa923658f)), 1L)).lo)).even)), (int64_t)(~((*l_645) = ((safe_lshift_func_uint16_t_u_s(p_22, ((l_642 = l_642) != &p_884->g_471))) <= p_22)))))).wyzwxzyy))))).lo)).x, 9L, (-5L))).lo, ((VECTOR(int64_t, 4))(0L))))))), ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 2UL, p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))], 8UL, 0xB9CD83835CB2F280L)).s2b, (uint64_t)0UL, (uint64_t)p_23))), ((VECTOR(uint64_t, 2))(0xF12360EF825FFC42L))))))).lo , 0xFCA5L) ^ p_22), l_638)) != p_23) | FAKE_DIVERGE(p_884->local_0_offset, get_local_id(0), 10)) & 0x1EL) ^ 0xDCB3L), 0x0DL, ((VECTOR(int8_t, 8))(0x3AL)), 0L, ((VECTOR(int8_t, 2))(1L)), 1L)), ((VECTOR(int8_t, 16))(0x2BL))))).s3ee6)), 0x26L, ((VECTOR(int8_t, 2))(0x54L)), ((VECTOR(int8_t, 2))(0L)), l_638, 6L, 4L)).s898d, ((VECTOR(int8_t, 4))(0x60L))))).x, (*l_613))) , 1UL) < 0L)) && l_600) && (-1L));
        (*l_613) &= (((safe_rshift_func_int8_t_s_u((((*l_649) = (void*)0) != ((*l_652) = &l_651)), 4)) , &p_884->g_467) != &p_884->g_467);
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_542 p_884->g_571 p_884->g_120 p_884->g_451.f3 p_884->g_581 p_884->g_55 p_884->g_59
 * writes: p_884->g_102 p_884->g_113 p_884->g_571 p_884->g_575 p_884->g_451.f0 p_884->g_581 p_884->g_59
 */
uint64_t  func_24(uint16_t  p_25, uint16_t  p_26, uint64_t  p_27, int32_t  p_28, uint32_t  p_29, struct S3 * p_884)
{ /* block id: 240 */
    uint16_t *l_541 = (void*)0;
    int32_t l_543 = (-8L);
    int32_t l_550 = 0x3CD3F2B6L;
    uint64_t *l_551[5];
    uint8_t l_552 = 0x64L;
    VECTOR(int16_t, 8) l_555 = (VECTOR(int16_t, 8))(0x3FCEL, (VECTOR(int16_t, 4))(0x3FCEL, (VECTOR(int16_t, 2))(0x3FCEL, (-1L)), (-1L)), (-1L), 0x3FCEL, (-1L));
    VECTOR(int16_t, 2) l_556 = (VECTOR(int16_t, 2))(3L, 0x39E7L);
    uint8_t **l_560 = &p_884->g_113;
    uint8_t *l_561[1][1];
    uint8_t *l_562 = &p_884->g_90;
    VECTOR(uint32_t, 16) l_566 = (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 3UL), 3UL), 3UL, 4294967289UL, 3UL, (VECTOR(uint32_t, 2))(4294967289UL, 3UL), (VECTOR(uint32_t, 2))(4294967289UL, 3UL), 4294967289UL, 3UL, 4294967289UL, 3UL);
    int8_t *l_568 = (void*)0;
    int8_t **l_567 = &l_568;
    int8_t ***l_569 = (void*)0;
    int8_t ***l_570 = &l_567;
    int8_t **l_574[10] = {&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572,&p_884->g_572};
    int8_t ***l_573 = &l_574[8];
    int16_t *l_576 = (void*)0;
    int16_t *l_577 = (void*)0;
    int16_t *l_578 = (void*)0;
    int16_t *l_579 = (void*)0;
    int64_t *l_580 = &p_884->g_451.f0;
    uint32_t l_582 = 0xD80C2A8CL;
    int32_t l_583 = 0x1B4368FAL;
    int32_t *l_584 = &p_884->g_59;
    int32_t l_589 = (-1L);
    int32_t l_590 = 0x4BEC2918L;
    int32_t l_591 = 0x34E3136FL;
    int32_t l_592 = (-10L);
    int32_t l_593[1][5] = {{0x196F3EBCL,0x196F3EBCL,0x196F3EBCL,0x196F3EBCL,0x196F3EBCL}};
    uint32_t l_594 = 0xD9DCE8BDL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_551[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_561[i][j] = &p_884->g_90;
    }
    (*l_584) &= (+((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((p_884->g_102.s8 = ((VECTOR(uint16_t, 2))(1UL, 0UL)).lo) <= ((p_884->g_542 , l_543) == ((((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_int16_t_s_s(l_543, (p_884->g_581 |= (((--l_552) ^ l_550) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(0x2766L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x6B90L)), 0x0B5CL, 0L)).zzxzyyyzwxzwwyyy, ((VECTOR(int16_t, 4))(1L, (-1L), 1L, 0x358AL)).wxwwzxyyzwwwzzwy))).sfc07, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_555.s03760165)), ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_556.yxyyxxxyxyyyyyyy)).sf6)).yyxxxyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((safe_unary_minus_func_uint8_t_u(9UL)) | (((((*l_580) = (safe_rshift_func_int16_t_s_u((((((*l_560) = &p_884->g_90) == (l_562 = l_561[0][0])) , ((GROUP_DIVERGE(2, 1) ^ (+(safe_sub_func_int16_t_s_s((l_550 = (((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 4))(l_566.s7057)).z)) || (((*l_570) = l_567) == (p_884->g_575 = ((*l_573) = (p_884->g_571[1] = p_884->g_571[1]))))) < 0x57L)), p_884->g_120)))) , 0UL)) >= p_25), 9))) == p_884->g_451.f3) <= FAKE_DIVERGE(p_884->group_2_offset, get_group_id(2), 10)) > l_543)), ((VECTOR(int16_t, 2))((-10L))), 9L)).xzywwwzwyyywzwxw)).even)))))).lo))).wzyxyzxy, ((VECTOR(int16_t, 8))(0x1949L))))), ((VECTOR(int16_t, 8))(0x7142L))))).s3607701460534040)), ((VECTOR(int16_t, 16))(0x0558L))))).s13)).yyxx, ((VECTOR(int16_t, 4))(6L)), ((VECTOR(int16_t, 4))(0x0CF1L))))).lo, ((VECTOR(int16_t, 2))(0x490CL)), ((VECTOR(int16_t, 2))((-1L)))))), 0x3947L)).even, ((VECTOR(int16_t, 2))((-1L)))))).xxyyyxxx)).s2362376157371321, ((VECTOR(int16_t, 16))(0x2F39L)), ((VECTOR(int16_t, 16))(0x1EC9L))))).s37, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x37CBL))))).xxyyxxxxxxxxyyyx)).sa)))))), p_29)) && 0x64965F58L) != l_582) > 0x5DBDDAF05675E771L))), l_555.s0)), l_583)), 0)) != p_884->g_55));
    for (l_543 = 14; (l_543 == 17); l_543 = safe_add_func_int16_t_s_s(l_543, 7))
    { /* block id: 255 */
        int8_t l_587 = (-6L);
        int32_t *l_588[10][1][3] = {{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}},{{&l_543,&l_583,(void*)0}}};
        int i, j, k;
        l_594++;
        return (*l_584);
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_46 p_884->g_55 p_884->g_59 p_884->g_443 p_884->g_445 p_884->g_403.f2 p_884->g_454 p_884->g_98 p_884->g_99 p_884->g_465 p_884->g_467 p_884->g_471 p_884->g_472 p_884->g_451 p_884->g_2 p_884->g_492 p_884->g_403.f1 p_884->g_113 p_884->g_318 p_884->g_403.f3 p_884->g_118 p_884->g_338 p_884->g_370 p_884->g_129 p_884->g_101 p_884->g_102 p_884->g_337 p_884->g_90 p_884->g_321 p_884->g_329 p_884->g_403.f0
 * writes: p_884->g_46 p_884->g_55 p_884->g_59 p_884->g_443 p_884->g_403.f2 p_884->g_118 p_884->g_465 p_884->g_467 p_884->g_90 p_884->g_370 p_884->g_338 p_884->g_427
 */
uint16_t  func_30(uint32_t  p_31, uint64_t  p_32, uint16_t  p_33, struct S3 * p_884)
{ /* block id: 9 */
    VECTOR(int8_t, 2) l_82 = (VECTOR(int8_t, 2))(0x37L, 0x6AL);
    int32_t *l_87 = &p_884->g_2;
    int64_t *l_416 = &p_884->g_92;
    uint32_t l_418 = 4294967290UL;
    int32_t l_419[10][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
    VECTOR(int8_t, 2) l_434 = (VECTOR(int8_t, 2))(0x3AL, 0x42L);
    volatile struct S0 *l_444 = (void*)0;
    struct S2 *l_450 = &p_884->g_451;
    VECTOR(int64_t, 2) l_459 = (VECTOR(int64_t, 2))((-1L), 0x5DFB355A3633F547L);
    int8_t *l_468 = (void*)0;
    uint32_t l_477 = 4UL;
    uint32_t l_528 = 1UL;
    uint16_t l_529 = 0x5E5FL;
    int i, j;
    for (p_884->g_46 = 24; (p_884->g_46 <= 23); p_884->g_46 = safe_sub_func_int64_t_s_s(p_884->g_46, 1))
    { /* block id: 12 */
        uint32_t *l_52 = (void*)0;
        uint32_t *l_53 = (void*)0;
        uint32_t *l_54 = &p_884->g_55;
        int32_t *l_58 = &p_884->g_59;
        VECTOR(int8_t, 8) l_80 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x16L), 0x16L), 0x16L, 1L, 0x16L);
        VECTOR(int8_t, 16) l_81 = (VECTOR(int8_t, 16))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0L), 0L), 0L, 0x73L, 0L, (VECTOR(int8_t, 2))(0x73L, 0L), (VECTOR(int8_t, 2))(0x73L, 0L), 0x73L, 0L, 0x73L, 0L);
        uint8_t *l_88 = (void*)0;
        uint8_t *l_89 = &p_884->g_90;
        struct S2 *l_404 = &p_884->g_403;
        VECTOR(uint8_t, 4) l_409 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xA9L), 0xA9L);
        int32_t l_417 = (-2L);
        VECTOR(uint64_t, 16) l_426 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x132945B6AD69DD57L), 0x132945B6AD69DD57L), 0x132945B6AD69DD57L, 18446744073709551609UL, 0x132945B6AD69DD57L, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x132945B6AD69DD57L), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x132945B6AD69DD57L), 18446744073709551609UL, 0x132945B6AD69DD57L, 18446744073709551609UL, 0x132945B6AD69DD57L);
        VECTOR(int8_t, 16) l_436 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        int i;
        (*l_58) |= (safe_add_func_int16_t_s_s(p_32, (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xAA93538BL, 1UL)).yyyyxxyxyxxxyxxy)))).hi)).odd)).z <= (--(*l_54)))));
    }
    (*p_884->g_445) = p_884->g_443;
    for (p_884->g_403.f2 = (-21); (p_884->g_403.f2 == 27); p_884->g_403.f2 = safe_add_func_int32_t_s_s(p_884->g_403.f2, 3))
    { /* block id: 217 */
        struct S2 *l_449 = &p_884->g_403;
        struct S2 **l_448[3][8][8] = {{{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449}},{{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449}},{{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_449,(void*)0,&l_449,&l_449,&l_449,&l_449}}};
        VECTOR(int64_t, 2) l_457 = (VECTOR(int64_t, 2))(0x23A66873560EAD43L, 0x28E447D6662754F5L);
        VECTOR(int64_t, 4) l_458 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x1AB48150AE814B6CL), 0x1AB48150AE814B6CL);
        int8_t *l_462 = &p_884->g_118[2][0][0];
        int32_t *l_466 = &p_884->g_467;
        int i, j, k;
        l_450 = (void*)0;
        l_419[4][0] ^= (((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 8))(p_884->g_454.yyyxxxxx)).s3 && p_31), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))((*p_884->g_98), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(l_457.xxxxyyyy)).s62, ((VECTOR(int64_t, 8))((-2L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_458.xzzzzwyz)).hi)), 0x1F5A4A6A1E1B71E0L, 1L, (-1L))).s44, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_459.yy)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((0x05L > (((((*l_466) ^= (p_884->g_465 |= (l_457.x | ((safe_rshift_func_int8_t_s_s(((*l_462) = p_32), ((((VECTOR(int32_t, 4))((l_457.x || (safe_mod_func_int16_t_s_s(p_884->g_46, p_33))), 1L, 0x50E3FC21L, 0x5D4031ADL)).x == l_458.z) <= p_31))) & 254UL)))) , l_468) != (void*)0) , 0x95L)) & 1UL), 1L, ((VECTOR(int64_t, 2))(0x3B484452D899CB0CL)), (*p_884->g_98), (-8L), 1L, 0x25BE226CBEEE5968L)).s42)))), (int64_t)l_458.x)))))), (*p_884->g_98), p_32, 0x1F75F7483395F495L, (-1L), 0L, 0x75770EC9E574D30CL)), (*p_884->g_98), ((VECTOR(int64_t, 4))((-1L))), (-1L))).s73))), 0x7AB91DB81921F776L, (-3L), (*p_884->g_98), 0x121F997343D702D7L, 1L)).s7, p_884->g_55)))) <= 18446744073709551615UL) || p_33);
    }
    for (p_884->g_403.f2 = (-20); (p_884->g_403.f2 == (-13)); ++p_884->g_403.f2)
    { /* block id: 226 */
        int8_t **l_473[1];
        int8_t ***l_474 = &l_473[0];
        int32_t l_489 = (-9L);
        uint16_t *l_490 = (void*)0;
        uint16_t *l_491[7][9] = {{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123},{&p_884->g_123,&p_884->g_123,(void*)0,&p_884->g_321,(void*)0,&p_884->g_321,(void*)0,&p_884->g_123,&p_884->g_123}};
        int32_t l_507[1];
        uint32_t *l_510[7];
        uint64_t l_511 = 1UL;
        VECTOR(uint32_t, 16) l_524 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC866D267L), 0xC866D267L), 0xC866D267L, 4294967295UL, 0xC866D267L, (VECTOR(uint32_t, 2))(4294967295UL, 0xC866D267L), (VECTOR(uint32_t, 2))(4294967295UL, 0xC866D267L), 4294967295UL, 0xC866D267L, 4294967295UL, 0xC866D267L);
        VECTOR(uint32_t, 4) l_525 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967291UL), 4294967291UL);
        uint16_t l_530 = 65535UL;
        int64_t l_531 = 0x2D350C47D7B46F81L;
        uint64_t *l_532[4][4] = {{(void*)0,&l_511,(void*)0,(void*)0},{(void*)0,&l_511,(void*)0,(void*)0},{(void*)0,&l_511,(void*)0,(void*)0},{(void*)0,&l_511,(void*)0,(void*)0}};
        uint64_t l_533 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_473[i] = &l_468;
        for (i = 0; i < 1; i++)
            l_507[i] = 0L;
        for (i = 0; i < 7; i++)
            l_510[i] = &l_418;
        (*p_884->g_472) = p_884->g_471;
        (*l_474) = (p_884->g_451 , l_473[0]);
        atomic_xor(&p_884->g_atomic_reduction[get_linear_group_id()], (p_884->g_454.x >= ((*l_87) < ((*p_884->g_338) = (safe_mod_func_int32_t_s_s((l_477 >= GROUP_DIVERGE(1, 1)), (safe_unary_minus_func_uint64_t_u(((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((0x1CL > ((((((safe_mul_func_uint16_t_u_u((((FAKE_DIVERGE(p_884->global_1_offset, get_global_id(1), 10) <= (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((p_33 |= l_489), 15)) >= (4294967293UL <= ((VECTOR(uint32_t, 2))(p_884->g_492.s41)).hi)), ((safe_rshift_func_int16_t_s_u((((l_511 = (+(safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*p_884->g_113) = (safe_add_func_uint64_t_u_u((((+l_507[0]) <= (((safe_sub_func_uint64_t_u_u((l_507[0] , p_32), (*l_87))) , 0x3BB3DA56L) , (*l_87))) , p_884->g_403.f1), p_31))), (*l_87))), p_31)), 4)), (-1L))))))) < p_884->g_318) && p_31), 3)) == 0x3DD6L)))) && p_32) || p_884->g_99), p_31)) == p_31) <= 0x7A7EACA2L) ^ (*l_87)) < 0xB8L) == 255UL)), p_884->g_403.f3)), 0x0DF64A704455EE3CL)) > p_884->g_118[1][2][0])))))))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_884->v_collective += p_884->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_533 = (safe_rshift_func_uint16_t_u_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(p_884->g_514.s5466)).ywywwxxz))).hi)).y && (((p_884->g_427.s4 = ((((void*)0 != &p_884->g_118[1][3][0]) < (((*p_884->g_337) = func_60(p_884->g_451.f5, &l_507[0], p_884)) != ((safe_mod_func_uint8_t_u_u(((((l_444 == l_444) , (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))((safe_add_func_uint16_t_u_u((((VECTOR(int32_t, 2))(p_884->g_523.xy)).lo != (p_884->g_465 = ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(4294967292UL, 4294967287UL)).xyyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_524.sbd)), ((VECTOR(uint32_t, 2))(2UL, 0x71AA8AF2L)), 0x6D188803L, ((VECTOR(uint32_t, 2))(5UL, 0UL)), 1UL)).odd))), ((VECTOR(uint32_t, 16))(l_525.zwwyzyzyzyzwyxxw)).s3a6a))), 0xAC865821L, 0x2783863EL, 0x346146BAL, (safe_lshift_func_int16_t_s_u((((p_884->g_59 == (((p_884->g_403.f5 , 1L) , l_528) <= (*l_87))) < l_529) != p_884->g_403.f0), l_530)), ((VECTOR(uint32_t, 2))(0xC9B18893L)), ((VECTOR(uint32_t, 2))(1UL)), 0x685DD96CL, 4294967295UL, 0x85B03924L, 0x1A58E19BL)).se593, ((VECTOR(uint32_t, 4))(1UL))))).w)), l_524.sf)), p_884->g_427.s6, l_507[0], 0UL, 18446744073709551612UL, p_884->g_46, ((VECTOR(uint64_t, 2))(18446744073709551606UL)), ((VECTOR(uint64_t, 4))(0x89D32B6705466897L)), 0xF542FB140EABBACDL, p_884->g_90, 18446744073709551615UL, 0x1224CC231891B3FFL)).s4, p_884->g_90)), p_31))) <= p_884->g_321) > l_525.y), p_884->g_329.s3)) , (void*)0))) || l_531)) >= p_884->g_403.f0) , p_884->g_492.s2)), p_884->g_403.f2));
    }
    return p_884->g_492.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_370 p_884->g_129 p_884->g_46 p_884->g_101 p_884->g_102
 * writes: p_884->g_370
 */
int32_t * func_60(int64_t  p_61, int32_t * p_62, struct S3 * p_884)
{ /* block id: 155 */
    VECTOR(int8_t, 16) l_371 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int8_t, 2))((-3L), (-1L)), (VECTOR(int8_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
    VECTOR(uint16_t, 2) l_376 = (VECTOR(uint16_t, 2))(0x48AEL, 0xCA38L);
    VECTOR(int8_t, 4) l_377 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, (-1L)), (-1L));
    int8_t *l_382 = (void*)0;
    int32_t *l_383 = &p_884->g_2;
    int i;
    if ((atomic_inc(&p_884->g_atomic_input[92 * get_linear_group_id() + 51]) == 7))
    { /* block id: 157 */
        int32_t l_339[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
        int i;
        for (l_339[7] = 24; (l_339[7] <= (-5)); --l_339[7])
        { /* block id: 160 */
            int32_t l_343 = 0x256753B8L;
            int32_t *l_342[2];
            int i;
            for (i = 0; i < 2; i++)
                l_342[i] = &l_343;
            l_342[1] = (void*)0;
        }
        for (l_339[7] = 15; (l_339[7] >= (-12)); l_339[7]--)
        { /* block id: 165 */
            struct S1 l_346 = {1UL,0x6DA8L,0x548A9DC1L,-7L,0x06L};/* VOLATILE GLOBAL l_346 */
            VECTOR(int32_t, 16) l_347 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x30488DA9L), 0x30488DA9L), 0x30488DA9L, (-1L), 0x30488DA9L, (VECTOR(int32_t, 2))((-1L), 0x30488DA9L), (VECTOR(int32_t, 2))((-1L), 0x30488DA9L), (-1L), 0x30488DA9L, (-1L), 0x30488DA9L);
            uint64_t l_348[9] = {0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L,0xD1E461C9425C8754L};
            int8_t l_349 = 0x28L;
            int32_t l_350 = 3L;
            struct S1 l_351 = {0xFFDEF3D8D72F7C87L,0x3B5DL,0x5A6750B0L,0x56L,0x95L};/* VOLATILE GLOBAL l_351 */
            uint32_t l_352 = 0UL;
            int32_t l_353 = 0x181BCEC0L;
            VECTOR(int16_t, 8) l_354 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x4B30L), 0x4B30L), 0x4B30L, 7L, 0x4B30L);
            VECTOR(int16_t, 2) l_355 = (VECTOR(int16_t, 2))(0x6B45L, 1L);
            VECTOR(int16_t, 2) l_356 = (VECTOR(int16_t, 2))(0L, 1L);
            int64_t l_357 = 0x5E2BB9EBD29D54ADL;
            uint32_t l_358 = 0UL;
            struct S0 l_359[8] = {{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL},{0x6DA37A3F2DC60A05L,0xF34E2BC6L,-7L,0xFDL,1L,0xA859L,3UL}};
            uint32_t l_360 = 0xCDB5E24FL;
            int16_t l_361 = 0x62EFL;
            int32_t *l_362 = (void*)0;
            int32_t *l_363 = (void*)0;
            uint16_t l_364 = 65532UL;
            int32_t l_365 = (-2L);
            int i;
            l_363 = ((l_346 , ((l_350 ^= (l_349 |= (((VECTOR(int32_t, 16))(l_347.s1fbfd6dccf661b9c)).s6 , l_348[0]))) , (l_361 = (l_351 , ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(0x2A95L, (l_352 = 1L), l_353, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_354.s31212177)).s0510533420156162)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_355.yx)).yxxx)).ywzywxyzwwzwzxxw, ((VECTOR(int16_t, 16))(l_356.yxyxyxyyxxxyxxyy))))))).sb373)), (-10L), 0x24C7L, 0x5E02L, ((VECTOR(int16_t, 2))(7L, (-1L))), (l_358 ^= l_357), (l_360 &= ((GROUP_DIVERGE(2, 1) , l_359[3]) , (-4L))), 0x6244L, (-8L), 0x6B79L, 0x1BBEL, (-5L))).even, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0x072EL))))).s67)), 0x30C2L, (-4L), 2L)).s51, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0x49EAL))))))).yyyyyyyy)).s23, (int16_t)(-4L), (int16_t)0x1590L))), ((VECTOR(uint16_t, 2))(0x845AL))))).hi)))) , l_362);
            l_365 ^= l_364;
        }
        unsigned int result = 0;
        int l_339_i0;
        for (l_339_i0 = 0; l_339_i0 < 8; l_339_i0++) {
            result += l_339[l_339_i0];
        }
        atomic_add(&p_884->g_special_values[92 * get_linear_group_id() + 51], result);
    }
    else
    { /* block id: 175 */
        (1 + 1);
    }
    atomic_xor(&p_884->l_atomic_reduction[0], (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(p_884->g_370.xy)).yxyx, ((VECTOR(int8_t, 16))(l_371.sca8ec19b957f39ef)).s162f, ((VECTOR(int8_t, 4))(5L, (safe_div_func_int16_t_s_s((+p_884->g_129), (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_376.xyxx)).x, (p_61 > (((void*)0 != p_62) == ((VECTOR(int8_t, 8))((-7L), ((VECTOR(int8_t, 2))(1L, 1L)), p_884->g_46, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x41L, 0x71L, ((VECTOR(int8_t, 2))(l_377.yz)).lo, 7L, ((VECTOR(int8_t, 4))(0x54L, (p_884->g_370.y ^= (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(l_376.y, FAKE_DIVERGE(p_884->group_0_offset, get_group_id(0), 10))), ((VECTOR(int8_t, 2))((-7L), 0x02L)).even))), 0x60L, (-10L))))).s3, 5L, 1L, ((VECTOR(int8_t, 4))(1L)), p_884->g_129, 4L, l_376.x, ((VECTOR(int8_t, 2))(0x36L)), 0x1EL, p_884->g_101.s2, (-1L), 0x2BL)).s776c, ((VECTOR(int8_t, 4))((-5L)))))))).s4)))))), 0x17L, 1L))))).w, l_371.sc)), p_884->g_102.s7)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_884->v_collective += p_884->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_383;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_90 p_884->g_98 p_884->g_99 p_884->g_129 p_884->g_322 p_884->g_329 p_884->g_337 p_884->g_113 p_884->g_34 p_884->g_338 p_884->g_2
 * writes: p_884->g_318 p_884->g_129 p_884->g_59 p_884->g_321 p_884->g_90
 */
uint32_t  func_63(uint64_t  p_64, int32_t * p_65, struct S3 * p_884)
{ /* block id: 34 */
    int8_t l_316 = 0x47L;
    int32_t *l_317 = &p_884->g_318;
    struct S2 *l_319 = (void*)0;
    int32_t *l_320[4];
    VECTOR(uint8_t, 16) l_330 = (VECTOR(uint8_t, 16))(0xD8L, (VECTOR(uint8_t, 4))(0xD8L, (VECTOR(uint8_t, 2))(0xD8L, 0x81L), 0x81L), 0x81L, 0xD8L, 0x81L, (VECTOR(uint8_t, 2))(0xD8L, 0x81L), (VECTOR(uint8_t, 2))(0xD8L, 0x81L), 0xD8L, 0x81L, 0xD8L, 0x81L);
    int64_t l_331 = 0x3189EFC511829AB1L;
    int32_t *l_335 = (void*)0;
    int32_t **l_334 = &l_335;
    VECTOR(uint8_t, 16) l_336 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x05L), 0x05L), 0x05L, 255UL, 0x05L, (VECTOR(uint8_t, 2))(255UL, 0x05L), (VECTOR(uint8_t, 2))(255UL, 0x05L), 255UL, 0x05L, 255UL, 0x05L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_320[i] = (void*)0;
    if ((atomic_inc(&p_884->g_atomic_input[92 * get_linear_group_id() + 87]) == 0))
    { /* block id: 36 */
        uint32_t l_130 = 1UL;
        int64_t l_131 = 0x0AF15EAAFD925828L;
        struct S0 l_132 = {0x862B190C61538398L,0x1D098C66L,1L,255UL,0x001326FF569DE83EL,0xDE1EL,0xEACDDF55BC5006F5L};/* VOLATILE GLOBAL l_132 */
        struct S0 l_133[9] = {{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL},{0UL,4UL,0x1AD12339L,0xFCL,0x57A91C2E77F79E9FL,65535UL,4UL}};
        int64_t l_134 = 0x4683A1E9C1B1B48EL;
        uint8_t l_280 = 0x7BL;
        int8_t l_281 = 0x4DL;
        int i;
        l_133[8] = (l_130 , (l_131 , l_132));
        if (l_134)
        { /* block id: 38 */
            struct S2 l_135 = {0L,0x6041843AL,1L,0L,{4UL,0x77F4L,4UL,0x53L,0xB0L},0UL,0x92L,-1L};/* VOLATILE GLOBAL l_135 */
            int32_t l_136 = 0x044EFE06L;
            uint16_t l_137[2][8][7] = {{{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL}},{{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL},{0x005FL,0x005FL,0x2F29L,0UL,0xBB7FL,0x260FL,9UL}}};
            struct S0 l_138 = {1UL,0xA9FD3CF2L,0x1C91009CL,9UL,0x09E6970BE373B64EL,0UL,0x3A1794BD295D964BL};/* VOLATILE GLOBAL l_138 */
            VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))(0x7E45A536L, (VECTOR(int32_t, 4))(0x7E45A536L, (VECTOR(int32_t, 2))(0x7E45A536L, 0x293EDA46L), 0x293EDA46L), 0x293EDA46L, 0x7E45A536L, 0x293EDA46L);
            int i, j, k;
            l_137[0][2][3] = (l_135 , l_136);
            if ((l_138 , ((VECTOR(int32_t, 2))(l_139.s76)).hi))
            { /* block id: 40 */
                uint64_t l_140 = 2UL;
                l_139.s2 = (l_135.f3 |= l_140);
            }
            else
            { /* block id: 43 */
                int32_t l_142[6];
                int32_t *l_141 = &l_142[5];
                int32_t *l_143 = &l_142[5];
                uint32_t l_144 = 0xD5AC8D5AL;
                int i;
                for (i = 0; i < 6; i++)
                    l_142[i] = 1L;
                l_143 = l_141;
                if (l_144)
                { /* block id: 45 */
                    uint8_t l_145 = 0xDBL;
                    VECTOR(int32_t, 2) l_146 = (VECTOR(int32_t, 2))(6L, 2L);
                    uint32_t l_147 = 0UL;
                    VECTOR(int32_t, 8) l_148 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
                    VECTOR(int32_t, 8) l_149 = (VECTOR(int32_t, 8))(0x3CF0600BL, (VECTOR(int32_t, 4))(0x3CF0600BL, (VECTOR(int32_t, 2))(0x3CF0600BL, 1L), 1L), 1L, 0x3CF0600BL, 1L);
                    VECTOR(int32_t, 8) l_150 = (VECTOR(int32_t, 8))(0x6AC25374L, (VECTOR(int32_t, 4))(0x6AC25374L, (VECTOR(int32_t, 2))(0x6AC25374L, (-1L)), (-1L)), (-1L), 0x6AC25374L, (-1L));
                    VECTOR(int32_t, 16) l_151 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7A55F229L), 0x7A55F229L), 0x7A55F229L, (-1L), 0x7A55F229L, (VECTOR(int32_t, 2))((-1L), 0x7A55F229L), (VECTOR(int32_t, 2))((-1L), 0x7A55F229L), (-1L), 0x7A55F229L, (-1L), 0x7A55F229L);
                    uint8_t l_152 = 0xC7L;
                    VECTOR(int32_t, 4) l_153 = (VECTOR(int32_t, 4))(0x3A580E2CL, (VECTOR(int32_t, 2))(0x3A580E2CL, 0x4ED7519BL), 0x4ED7519BL);
                    uint64_t l_154 = 6UL;
                    VECTOR(uint64_t, 16) l_155 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), 1UL), 1UL, 18446744073709551609UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), 18446744073709551609UL, 1UL, 18446744073709551609UL, 1UL);
                    VECTOR(int32_t, 4) l_156 = (VECTOR(int32_t, 4))(0x6C84C521L, (VECTOR(int32_t, 2))(0x6C84C521L, 0x5AD5565FL), 0x5AD5565FL);
                    int32_t l_157 = (-1L);
                    uint16_t l_158 = 0x259FL;
                    uint32_t l_159 = 4294967295UL;
                    uint16_t l_160 = 65532UL;
                    int16_t l_161 = 4L;
                    int32_t l_162 = (-6L);
                    uint8_t l_163 = 0UL;
                    int i;
                    l_163 |= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_145, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_146.xy)))))), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(1L, 1L)).yxyxxxxx, (int32_t)l_147))).s22, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_148.s4670247211634505)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_149.s20)).yxyy)))).zxzywxyx)).s12)).yxxyxyyxxxxyxxxx))).se2))), ((VECTOR(int32_t, 2))(0x2737E1BAL, 0x0159CCD5L)), 0x0BAC6151L, 0x7D7D1BF0L)).lo))).zxwzywxzwzywwwyx, ((VECTOR(int32_t, 2))(l_150.s40)).yyyyxyxyxyyxyxyx))).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x69AE68F2L, ((VECTOR(int32_t, 2))(l_151.s59)), (GROUP_DIVERGE(2, 1) , l_152), ((VECTOR(int32_t, 4))(l_153.wxwz)))))).even)))))).yyyywwxy))), 0x575B735CL, ((VECTOR(int32_t, 4))((-6L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x669F7C8DL, 0x042AC9BBL)), 0x5C222626L, 8L)).hi)), 0x62014B1BL)), (-10L), (-2L), 0x1C7F93EFL)).sde07)).y, ((VECTOR(int32_t, 4))(1L, 0x5A68F4A9L, 0x3F1E5758L, (-1L))), 0x2D552EA1L, 0x6DA610F4L, (((VECTOR(uint64_t, 16))(0x4BD8925AE9609D19L, 0xCDA19F3F7CD451E0L, 0x2558EA937B62A77DL, (l_138.f6 = l_154), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_155.s1400)).odd)), ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(1L, (-1L), 0x685B977AC5F61C7CL, 0L)).wxwyxyzx))), 18446744073709551615UL, 0x75BE74CFF9A101D9L)).sb , ((VECTOR(int32_t, 4))(l_156.wwzw)).w), (-1L), 1L, 0x572883F1L, ((*l_141) ^= l_157), 0x103DA891L, 0L, 5L, 1L)).s37bb, (int32_t)((*l_141) |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_158, l_159, 0x7882ED2AL, ((VECTOR(int32_t, 8))(0L)), l_160, ((VECTOR(int32_t, 2))((-1L))), 0x4D3094BAL, 0x184DD8C9L)))).sb)))), l_161, 1L, (-1L))).s6571577621707505)).s0 , l_162);
                }
                else
                { /* block id: 50 */
                    VECTOR(int32_t, 4) l_164 = (VECTOR(int32_t, 4))(0x440FA6E5L, (VECTOR(int32_t, 2))(0x440FA6E5L, 5L), 5L);
                    VECTOR(int32_t, 16) l_165 = (VECTOR(int32_t, 16))(0x42DA774BL, (VECTOR(int32_t, 4))(0x42DA774BL, (VECTOR(int32_t, 2))(0x42DA774BL, 0x04856239L), 0x04856239L), 0x04856239L, 0x42DA774BL, 0x04856239L, (VECTOR(int32_t, 2))(0x42DA774BL, 0x04856239L), (VECTOR(int32_t, 2))(0x42DA774BL, 0x04856239L), 0x42DA774BL, 0x04856239L, 0x42DA774BL, 0x04856239L);
                    uint32_t l_204 = 0x29064456L;
                    struct S0 l_207 = {0x3640A0DB183B725FL,1UL,1L,0x88L,0x405448FBCCC2C11AL,65532UL,0x58747C4E963F5E78L};/* VOLATILE GLOBAL l_207 */
                    int i;
                    if (((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_164.xy)).xxyxyyxyxyyyyxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_165.s6b67929d)))).even)).zzyzxzxywwzxywzy))).s8b, ((VECTOR(int32_t, 4))(0x2AF09B1DL, ((VECTOR(int32_t, 2))((-1L), (-1L))), 0x202F86E1L)).even))).even)
                    { /* block id: 51 */
                        uint64_t l_166 = 0UL;
                        uint32_t l_169 = 2UL;
                        struct S1 l_172 = {0xC1A74C5E4DCB4F3FL,0x61F6L,9UL,0x7EL,0UL};/* VOLATILE GLOBAL l_172 */
                        l_166--;
                        l_169++;
                        l_135.f4 = l_172;
                    }
                    else
                    { /* block id: 55 */
                        uint32_t l_173 = 0x8B080ABBL;
                        VECTOR(int32_t, 4) l_174 = (VECTOR(int32_t, 4))(0x53BF6E99L, (VECTOR(int32_t, 2))(0x53BF6E99L, 0x1E83345EL), 0x1E83345EL);
                        VECTOR(int32_t, 4) l_175 = (VECTOR(int32_t, 4))(0x56D78E63L, (VECTOR(int32_t, 2))(0x56D78E63L, 5L), 5L);
                        VECTOR(int32_t, 8) l_176 = (VECTOR(int32_t, 8))(0x7F016268L, (VECTOR(int32_t, 4))(0x7F016268L, (VECTOR(int32_t, 2))(0x7F016268L, (-1L)), (-1L)), (-1L), 0x7F016268L, (-1L));
                        VECTOR(int32_t, 16) l_177 = (VECTOR(int32_t, 16))(0x02E40565L, (VECTOR(int32_t, 4))(0x02E40565L, (VECTOR(int32_t, 2))(0x02E40565L, (-1L)), (-1L)), (-1L), 0x02E40565L, (-1L), (VECTOR(int32_t, 2))(0x02E40565L, (-1L)), (VECTOR(int32_t, 2))(0x02E40565L, (-1L)), 0x02E40565L, (-1L), 0x02E40565L, (-1L));
                        int32_t l_178[8] = {0x322219A2L,0x322219A2L,0x322219A2L,0x322219A2L,0x322219A2L,0x322219A2L,0x322219A2L,0x322219A2L};
                        VECTOR(int32_t, 4) l_179 = (VECTOR(int32_t, 4))(0x3E4DEC8AL, (VECTOR(int32_t, 2))(0x3E4DEC8AL, 0x5F752B4EL), 0x5F752B4EL);
                        VECTOR(int16_t, 8) l_180 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3A40L), 0x3A40L), 0x3A40L, (-1L), 0x3A40L);
                        VECTOR(int16_t, 8) l_181 = (VECTOR(int16_t, 8))(0x716EL, (VECTOR(int16_t, 4))(0x716EL, (VECTOR(int16_t, 2))(0x716EL, (-5L)), (-5L)), (-5L), 0x716EL, (-5L));
                        struct S0 l_182[1][2][4] = {{{{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL}},{{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL},{5UL,6UL,-10L,0xE1L,0x72E30379E35B24F8L,0x200CL,1UL}}}};
                        uint16_t l_183[2][9] = {{0x5D61L,1UL,0x6E25L,0x2CBDL,1UL,0x2CBDL,0x6E25L,1UL,0x5D61L},{0x5D61L,1UL,0x6E25L,0x2CBDL,1UL,0x2CBDL,0x6E25L,1UL,0x5D61L}};
                        uint64_t l_184 = 0xE9F75FF9D7EAA556L;
                        VECTOR(uint32_t, 2) l_185 = (VECTOR(uint32_t, 2))(0x54C5F1AEL, 0x048D7354L);
                        VECTOR(uint32_t, 8) l_186 = (VECTOR(uint32_t, 8))(0x2613CCD5L, (VECTOR(uint32_t, 4))(0x2613CCD5L, (VECTOR(uint32_t, 2))(0x2613CCD5L, 0x48C06950L), 0x48C06950L), 0x48C06950L, 0x2613CCD5L, 0x48C06950L);
                        int16_t l_187 = 0x4D65L;
                        uint32_t l_188 = 4294967286UL;
                        uint32_t l_189 = 0x6F923182L;
                        uint64_t l_190 = 18446744073709551608UL;
                        uint32_t l_191 = 0x54CBC2A9L;
                        uint32_t l_192 = 0x2B6A1B35L;
                        int64_t l_195 = (-1L);
                        int64_t *l_194 = &l_195;
                        int64_t **l_193[3][3];
                        int64_t **l_196 = &l_194;
                        uint16_t l_197 = 0xE7B3L;
                        struct S1 *l_198 = (void*)0;
                        struct S1 l_200[2] = {{0UL,-7L,0x72009605L,0x78L,0x68L},{0UL,-7L,0x72009605L,0x78L,0x68L}};
                        struct S1 *l_199 = &l_200[0];
                        struct S1 *l_201 = &l_200[0];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_193[i][j] = &l_194;
                        }
                        (*l_141) ^= ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_173 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_174.yw)))).even), ((VECTOR(int32_t, 2))(0L, 0x7229B259L)), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_175.zx)).xyxxxyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_176.s5610106015770171)).s4d, ((VECTOR(int32_t, 4))(l_177.s9f50)).lo))), (-1L), (-1L))).yywwxyyywwwyxzxz)).lo))), l_178[7], 5L, 3L, 0x694BA9F6L, 0x17CAD44DL)).odd)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(8L, 0L, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_179.wxyxzyzzyxxyzxxz)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(l_180.s3245)).wwyyzzwzxzzwxxwy, ((VECTOR(int16_t, 4))(l_181.s4114)).yyzwyxwxxyxywywz))).lo, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))((l_182[0][1][0] , 8UL), (l_138.f5 = ((l_188 = ((VECTOR(uint32_t, 16))((l_183[0][7] = 0xEF78231FL), 6UL, l_184, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 4))(l_185.xyxx)), ((VECTOR(uint32_t, 8))(l_186.s54550640)).lo))), 0x90D4C23DL, l_187, 0x8113C847L, ((VECTOR(uint32_t, 2))(0xF4E84C1DL)), 4294967287UL, ((VECTOR(uint32_t, 2))(0x8BEF140DL)), 0UL)).s4) , l_189)), 65533UL, l_190, 0xEE9BL, 0xCCF3L, ((VECTOR(uint16_t, 8))(0xF623L)), 9UL, 0x7803L)).sbe8f)).xyyywxzz))).s17, (int32_t)l_191))).xxxxxxyyyyxyyyxx))).sa1e9, ((VECTOR(int32_t, 4))((-8L))), ((VECTOR(int32_t, 4))(0x5D9FBA2DL))))), 0x0F96E117L, (-1L))).s17)).xyyxyxxx))), 0x0CE5C9CAL, 1L, l_192, 1L, ((VECTOR(int32_t, 2))(0x07689AE3L)), 2L)).s8;
                        l_196 = l_193[1][2];
                        l_175.y &= l_197;
                        l_201 = (l_199 = (l_198 = (void*)0));
                    }
                    for (l_165.s6 = 0; (l_165.s6 > 27); l_165.s6 = safe_add_func_uint16_t_u_u(l_165.s6, 9))
                    { /* block id: 68 */
                        (*l_141) = 5L;
                    }
                    l_204--;
                    l_138 = l_207;
                }
            }
        }
        else
        { /* block id: 75 */
            int16_t l_208[10][5][4] = {{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}},{{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L},{(-9L),(-9L),0x5FFCL,0x23A3L}}};
            int i, j, k;
            if (l_208[8][1][1])
            { /* block id: 76 */
                int32_t l_209 = 0x1143F4B0L;
                for (l_209 = 25; (l_209 > 17); l_209 = safe_sub_func_uint16_t_u_u(l_209, 9))
                { /* block id: 79 */
                    struct S2 l_213 = {0x465E760D366C35C3L,9L,0L,0x7350D279L,{1UL,0x278DL,0x8D93EB98L,0x0CL,0x9DL},0x93E933A9L,0x3DL,-1L};/* VOLATILE GLOBAL l_213 */
                    struct S2 *l_212 = &l_213;
                    struct S2 *l_214 = &l_213;
                    uint16_t l_215 = 0x6054L;
                    int64_t l_216 = (-1L);
                    struct S2 **l_217 = &l_212;
                    struct S2 **l_218 = &l_212;
                    VECTOR(int32_t, 4) l_219 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x2C1A0D15L), 0x2C1A0D15L);
                    int i;
                    l_214 = l_212;
                    l_213.f1 = (l_215 , l_216);
                    l_218 = (l_217 = (void*)0);
                    if (((VECTOR(int32_t, 2))(l_219.zw)).odd)
                    { /* block id: 84 */
                        uint32_t l_220 = 0x1F6C4FA1L;
                        int16_t l_221 = 0x0973L;
                        l_221 = l_220;
                    }
                    else
                    { /* block id: 86 */
                        uint16_t l_222 = 0xB761L;
                        VECTOR(uint64_t, 2) l_223 = (VECTOR(uint64_t, 2))(0xEF98C2746B81B9BBL, 0UL);
                        int16_t l_224[8] = {0x3E84L,0x3E84L,0x3E84L,0x3E84L,0x3E84L,0x3E84L,0x3E84L,0x3E84L};
                        VECTOR(uint64_t, 2) l_225 = (VECTOR(uint64_t, 2))(0xFAEB5FE0EA1205C9L, 0UL);
                        VECTOR(uint64_t, 2) l_226 = (VECTOR(uint64_t, 2))(0xC41B950C5E9977FCL, 18446744073709551615UL);
                        int8_t l_227 = 0x5EL;
                        VECTOR(uint64_t, 8) l_228 = (VECTOR(uint64_t, 8))(0xC1F02B386482958CL, (VECTOR(uint64_t, 4))(0xC1F02B386482958CL, (VECTOR(uint64_t, 2))(0xC1F02B386482958CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xC1F02B386482958CL, 18446744073709551615UL);
                        VECTOR(uint64_t, 8) l_229 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 2UL), 2UL), 2UL, 1UL, 2UL);
                        VECTOR(uint64_t, 8) l_230 = (VECTOR(uint64_t, 8))(0x14B4C910CA1BCADBL, (VECTOR(uint64_t, 4))(0x14B4C910CA1BCADBL, (VECTOR(uint64_t, 2))(0x14B4C910CA1BCADBL, 0x0814F4F9EC15FA3FL), 0x0814F4F9EC15FA3FL), 0x0814F4F9EC15FA3FL, 0x14B4C910CA1BCADBL, 0x0814F4F9EC15FA3FL);
                        VECTOR(uint64_t, 4) l_231 = (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0UL), 0UL);
                        int64_t l_232 = 0x47653ECA8A1A81AFL;
                        VECTOR(uint64_t, 8) l_233 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x515971137CED98FDL), 0x515971137CED98FDL), 0x515971137CED98FDL, 0UL, 0x515971137CED98FDL);
                        VECTOR(uint64_t, 4) l_234 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x0C5AB965B3739AFEL), 0x0C5AB965B3739AFEL);
                        VECTOR(uint64_t, 4) l_235 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x9C8A47113E96B69FL), 0x9C8A47113E96B69FL);
                        VECTOR(uint64_t, 16) l_236 = (VECTOR(uint64_t, 16))(0x4BD7E9FFF4F0F042L, (VECTOR(uint64_t, 4))(0x4BD7E9FFF4F0F042L, (VECTOR(uint64_t, 2))(0x4BD7E9FFF4F0F042L, 1UL), 1UL), 1UL, 0x4BD7E9FFF4F0F042L, 1UL, (VECTOR(uint64_t, 2))(0x4BD7E9FFF4F0F042L, 1UL), (VECTOR(uint64_t, 2))(0x4BD7E9FFF4F0F042L, 1UL), 0x4BD7E9FFF4F0F042L, 1UL, 0x4BD7E9FFF4F0F042L, 1UL);
                        VECTOR(uint64_t, 16) l_237 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x7651DE7662D703F6L), 0x7651DE7662D703F6L), 0x7651DE7662D703F6L, 0UL, 0x7651DE7662D703F6L, (VECTOR(uint64_t, 2))(0UL, 0x7651DE7662D703F6L), (VECTOR(uint64_t, 2))(0UL, 0x7651DE7662D703F6L), 0UL, 0x7651DE7662D703F6L, 0UL, 0x7651DE7662D703F6L);
                        int8_t l_238 = 7L;
                        int8_t l_239 = 0x52L;
                        uint32_t l_240 = 0xF604BCCBL;
                        uint8_t l_241 = 249UL;
                        int i;
                        l_213.f1 ^= ((l_219.y = (l_222 , (((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 8))(18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(l_223.yyyxyyyx)).s02, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(0x2A156F8766C397C8L, ((VECTOR(uint64_t, 2))(1UL, 1UL)), l_224[7], 3UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_225.xy)).yxxxyyxyyyxxxyxx)).lo)).s65)), 0x05746449A1E4A718L)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_226.yx)).xyxy)), 0xDB8AA7565D6A2F6EL, l_227, 8UL, 1UL))))).s6206731512220161, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_228.s7367737120411170)).lo)).s5674602127417303))).sa89f)).odd))), 18446744073709551615UL, 0xBECDB6F072E3335BL)), ((VECTOR(uint64_t, 2))(l_229.s67)), 18446744073709551608UL)), 0x02113A691C5F551FL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 8))(l_230.s53466451)), 0x282519BD880C3669L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_231.wzwx)).odd)), l_232, ((VECTOR(uint64_t, 2))(l_233.s70)), 0x587C2F7F7D65FC68L)), ((VECTOR(uint64_t, 16))(2UL, ((VECTOR(uint64_t, 8))(l_234.yyxzwzyz)), (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 254UL)).xyxxxxxx)).s4 , FAKE_DIVERGE(p_884->local_0_offset, get_local_id(0), 10)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(l_235.wyxyyyzyyyxwzwzy))))).s1779)), 0x5CF4C983524AB5D2L, 18446744073709551615UL))))).s05)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x8DD1170371D9B870L, 0UL)).yyxy)))).lo)).s6374061147030615, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(l_236.sd9b8b5a0)).s61, ((VECTOR(uint64_t, 16))(l_237.s34ce5a61a3907394)).s19))).yxyxyxyyxxyxyyxy))).sf , (((l_238 , l_239) , l_240) , (-1L))))) , l_241);
                    }
                }
            }
            else
            { /* block id: 91 */
                int32_t l_242[7][5][4] = {{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}},{{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L},{0x2FB93677L,0x60959EE6L,1L,0x2FB93677L}}};
                int i, j, k;
                for (l_242[1][3][3] = (-16); (l_242[1][3][3] > 28); l_242[1][3][3]++)
                { /* block id: 94 */
                    int32_t l_245[7];
                    int64_t l_253 = 3L;
                    struct S0 *l_263 = (void*)0;
                    int16_t l_264 = (-9L);
                    int i;
                    for (i = 0; i < 7; i++)
                        l_245[i] = 0x02D1D452L;
                    for (l_245[6] = (-3); (l_245[6] != 7); l_245[6] = safe_add_func_uint16_t_u_u(l_245[6], 1))
                    { /* block id: 97 */
                        uint16_t l_248 = 0x69B7L;
                        uint64_t l_249 = 0x070582BCD2E3A9FBL;
                        int32_t *l_250 = (void*)0;
                        int32_t l_252 = 0L;
                        int32_t *l_251 = &l_252;
                        l_249 = l_248;
                        l_251 = l_250;
                    }
                    if (l_253)
                    { /* block id: 101 */
                        int64_t l_254 = 0x68FA089E560A1FF2L;
                        int16_t l_255 = 0L;
                        uint8_t l_256[4][7][5] = {{{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L}},{{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L}},{{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L}},{{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L},{0xB4L,255UL,255UL,0xB4L,0xF0L}}};
                        int i, j, k;
                        l_245[6] |= l_254;
                        l_256[2][0][2]++;
                    }
                    else
                    { /* block id: 104 */
                        uint16_t l_259 = 65535UL;
                        struct S0 l_261 = {0UL,1UL,0L,0x15L,0x68788BC8206E4477L,0x7C2DL,0x943D29F545C8E805L};/* VOLATILE GLOBAL l_261 */
                        struct S0 *l_260 = &l_261;
                        struct S0 *l_262 = &l_261;
                        l_259 &= 0x614E08D8L;
                        l_262 = l_260;
                    }
                    l_263 = (FAKE_DIVERGE(p_884->global_1_offset, get_global_id(1), 10) , (void*)0);
                    if ((l_264 = 0x4D056996L))
                    { /* block id: 110 */
                        int64_t l_265 = 1L;
                        int8_t l_266 = 0x2CL;
                        uint64_t l_267 = 0x305BE12F43C11021L;
                        VECTOR(int32_t, 8) l_270 = (VECTOR(int32_t, 8))(0x43362B28L, (VECTOR(int32_t, 4))(0x43362B28L, (VECTOR(int32_t, 2))(0x43362B28L, (-1L)), (-1L)), (-1L), 0x43362B28L, (-1L));
                        uint32_t l_271 = 0x1E7EB0D7L;
                        int8_t l_272 = 1L;
                        struct S2 l_274[8][2][3] = {{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}},{{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}},{{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L},{3L,0x728D24CAL,0x257BD63FL,1L,{18446744073709551615UL,4L,0x6162333DL,0L,0x0BL},4294967295UL,2UL,0x464CL},{0x6B561A88BAE4642CL,-10L,0x28723A0CL,3L,{0xA08F3B7FE7ACB506L,3L,0UL,0x03L,255UL},6UL,0xA5L,8L}}}};
                        struct S2 *l_273 = &l_274[0][0][0];
                        int i, j, k;
                        l_267--;
                        l_272 = (l_245[2] = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_270.s06211034)).even, (int32_t)l_271))).x);
                        l_273 = (void*)0;
                    }
                    else
                    { /* block id: 115 */
                        uint16_t l_275 = 0xB60AL;
                        uint16_t l_276 = 1UL;
                        uint8_t l_277 = 0x32L;
                        l_276 ^= l_275;
                        l_277++;
                    }
                }
            }
        }
        if ((l_281 |= l_280))
        { /* block id: 123 */
            uint64_t l_282 = 0x794DED783F521F7CL;
            uint16_t l_283 = 0x2FD9L;
            uint16_t l_284 = 65526UL;
            uint16_t l_285 = 0xACB0L;
            int32_t l_286[9][7] = {{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL},{0x460CBB4FL,7L,(-1L),0x580A7928L,(-1L),7L,0x460CBB4FL}};
            int i, j;
            l_284 = (l_283 = l_282);
            l_286[0][1] ^= l_285;
        }
        else
        { /* block id: 127 */
            int8_t l_287 = 0L;
            int16_t l_288 = 0x2AECL;
            int8_t l_289 = 0x6BL;
            int32_t l_290 = 0x0565544FL;
            int64_t l_291 = 0x21D9EA8684DB05A4L;
            int64_t l_292 = 8L;
            uint8_t l_293 = 255UL;
            --l_293;
        }
        for (l_132.f3 = 0; (l_132.f3 != 42); l_132.f3++)
        { /* block id: 132 */
            int32_t *l_298 = (void*)0;
            int32_t l_300 = 0L;
            int32_t *l_299[10][9] = {{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,(void*)0,&l_300,&l_300,&l_300,&l_300,&l_300}};
            int32_t *l_301 = &l_300;
            uint32_t l_302 = 0x3086DBE9L;
            uint64_t l_303 = 2UL;
            uint32_t l_304 = 6UL;
            int32_t *l_305 = &l_300;
            int32_t *l_306 = &l_300;
            uint8_t l_307 = 0UL;
            int i, j;
            l_301 = (l_299[9][8] = l_298);
            l_303 = l_302;
            l_306 = (l_304 , l_305);
            l_307 = (-6L);
        }
        unsigned int result = 0;
        result += l_130;
        result += l_131;
        result += l_132.f0;
        result += l_132.f1;
        result += l_132.f2;
        result += l_132.f3;
        result += l_132.f4;
        result += l_132.f5;
        result += l_132.f6;
        int l_133_i0;
        for (l_133_i0 = 0; l_133_i0 < 9; l_133_i0++) {
            result += l_133[l_133_i0].f0;
            result += l_133[l_133_i0].f1;
            result += l_133[l_133_i0].f2;
            result += l_133[l_133_i0].f3;
            result += l_133[l_133_i0].f4;
            result += l_133[l_133_i0].f5;
            result += l_133[l_133_i0].f6;
        }
        result += l_134;
        result += l_280;
        result += l_281;
        atomic_add(&p_884->g_special_values[92 * get_linear_group_id() + 87], result);
    }
    else
    { /* block id: 139 */
        (1 + 1);
    }
    p_884->g_321 = (p_884->g_59 = (p_884->g_129 &= (+(safe_div_func_uint16_t_u_u(((0x39L >= ((p_64 & (p_884->g_90 , ((*p_884->g_98) >= (~((FAKE_DIVERGE(p_884->local_2_offset, get_local_id(2), 10) || (+(safe_sub_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u(p_64, 0x0C472A42C80E682FL)) && 0UL) >= ((l_319 = (((*l_317) = ((+((((safe_mod_func_int8_t_s_s(((65535UL || ((l_316 & p_64) , p_64)) < 0x27L), 7L)) , GROUP_DIVERGE(0, 1)) | (-1L)) | 0x7DL)) > l_316)) , l_319)) != (void*)0)), 0x30E1D867L)))) && p_64))))) && 0xD3L)) > GROUP_DIVERGE(0, 1)), l_316)))));
    (**p_884->g_337) = (p_884->g_322[0][4] , (((p_884->g_129 = (4294967293UL != ((VECTOR(uint32_t, 2))(0x1B17D30FL, 0x35CB5F3DL)).hi)) | (safe_rshift_func_int8_t_s_s((((0x072CF7CFL == (~((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_884->g_329.s30444352)).s6, ((VECTOR(uint8_t, 4))(l_330.s0b0f)).y)) | (p_65 != l_320[3])))) & ((l_331 , (safe_sub_func_uint8_t_u_u((l_317 == ((*l_334) = &p_884->g_59)), ((VECTOR(uint8_t, 4))(l_336.s2a30)).z))) >= ((*p_884->g_113) = ((p_64 , p_884->g_337) == &l_320[3])))) <= p_884->g_34.x), 3))) || p_64));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_884->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u(p_884->g_322[0][4].f3, 10))][(safe_mod_func_uint32_t_u_u(p_884->tid, 15))]));
    return p_884->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->g_46 p_884->g_98 p_884->g_101 p_884->g_102 p_884->g_comm_values p_884->l_comm_values p_884->g_123 p_884->g_129
 * writes: p_884->g_92 p_884->g_113 p_884->g_114 p_884->g_118 p_884->g_120 p_884->g_101 p_884->g_123 p_884->g_129
 */
int8_t  func_76(int32_t * p_77, int32_t  p_78, int32_t  p_79, struct S3 * p_884)
{ /* block id: 16 */
    int64_t *l_91 = &p_884->g_92;
    VECTOR(uint16_t, 8) l_100 = (VECTOR(uint16_t, 8))(0xC438L, (VECTOR(uint16_t, 4))(0xC438L, (VECTOR(uint16_t, 2))(0xC438L, 5UL), 5UL), 5UL, 0xC438L, 5UL);
    VECTOR(uint16_t, 8) l_103 = (VECTOR(uint16_t, 8))(0x9726L, (VECTOR(uint16_t, 4))(0x9726L, (VECTOR(uint16_t, 2))(0x9726L, 1UL), 1UL), 1UL, 0x9726L, 1UL);
    VECTOR(uint32_t, 8) l_104 = (VECTOR(uint32_t, 8))(0xB3E8CBBEL, (VECTOR(uint32_t, 4))(0xB3E8CBBEL, (VECTOR(uint32_t, 2))(0xB3E8CBBEL, 0x33D09B33L), 0x33D09B33L), 0x33D09B33L, 0xB3E8CBBEL, 0x33D09B33L);
    uint16_t *l_121 = (void*)0;
    uint8_t l_122 = 0x16L;
    int i;
    p_884->g_123 |= (p_884->g_46 || (((((*l_91) = (+p_79)) <= (((p_884->g_101.s6 = func_93(p_77, (((((void*)0 != p_884->g_98) > ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0xA352L, 5UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(65533UL, 0x7AE2L)).xyyxxxyxyyyyyxxx, ((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_100.s3316)).zzzxywxw)), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(p_884->g_101.s9e)).xxxy, ((VECTOR(uint16_t, 2))(0xDCB7L, 0x6171L)).xxyy, ((VECTOR(uint16_t, 16))(p_884->g_102.sde520ed3b4235e97)).sbc7e))))).yyyzxxyyywwwywxw, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(0x6B16L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_103.s5201142236211605)).s5353)), 0UL, 0xDAF9L, 0UL)).even, (uint16_t)(((VECTOR(uint32_t, 16))(l_104.s0731120543423757)).s1 & (safe_add_func_int8_t_s_s(1L, (safe_mod_func_int32_t_s_s(l_103.s3, l_104.s6))))), (uint16_t)p_884->g_comm_values[p_884->tid]))).xzywzwwzxwwyzzyw))).odd))), ((VECTOR(uint16_t, 4))(0UL)), 0xAC94L, 8UL, 0x7105L)), ((VECTOR(uint16_t, 16))(2UL))))).s79)).xyyy)), 0xA2DDL, 0UL, 0UL, ((VECTOR(uint16_t, 2))(0x3A66L)), 65535UL, ((VECTOR(uint16_t, 4))(0x9EDEL)))).sd60b)).odd)).hi) <= 4UL) , &p_884->g_55), l_91, p_79, p_884)) > l_104.s7) != (-1L))) , (-10L)) >= l_122));
    for (p_884->g_123 = 0; (p_884->g_123 < 13); p_884->g_123 = safe_add_func_int8_t_s_s(p_884->g_123, 1))
    { /* block id: 30 */
        int32_t *l_128 = &p_884->g_129;
        (*l_128) |= (safe_div_func_uint32_t_u_u(0xF3EC7EDDL, 0x60234389L));
    }
    return p_884->g_102.sb;
}


/* ------------------------------------------ */
/* 
 * reads : p_884->l_comm_values
 * writes: p_884->g_113 p_884->g_114 p_884->g_118 p_884->g_120
 */
uint16_t  func_93(uint32_t * p_94, uint32_t * p_95, int64_t * p_96, int64_t  p_97, struct S3 * p_884)
{ /* block id: 18 */
    int64_t *l_109[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t *l_110[9];
    uint8_t *l_111 = &p_884->g_90;
    uint8_t **l_112[2];
    int8_t *l_117[5][8][3] = {{{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]}},{{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]}},{{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]}},{{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]}},{{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]},{&p_884->g_118[1][3][0],&p_884->g_118[1][3][0],&p_884->g_118[1][3][0]}}};
    int32_t l_119[6][5] = {{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)},{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)},{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)},{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)},{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)},{0x6D63EAABL,(-5L),0x6D63EAABL,0x6D63EAABL,(-5L)}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_110[i] = &p_884->g_90;
    for (i = 0; i < 2; i++)
        l_112[i] = &l_111;
    p_884->g_120 = ((p_884->g_118[1][3][0] = ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x39L, 1L, (((~((l_109[0][2] != (void*)0) & ((((l_110[8] = &p_884->g_90) == (p_884->g_113 = l_111)) , &p_884->g_90) == (p_884->g_114 = &p_884->g_90)))) == (safe_div_func_int8_t_s_s((l_119[0][2] = 1L), (GROUP_DIVERGE(1, 1) , p_884->l_comm_values[(safe_mod_func_uint32_t_u_u(p_884->tid, 15))])))) & GROUP_DIVERGE(0, 1)), ((VECTOR(int8_t, 2))(3L, 0x4AL)), (-10L), p_97, ((VECTOR(int8_t, 4))(0x3FL)), 9L, ((VECTOR(int8_t, 4))(0L)))).sc1)), ((VECTOR(int8_t, 2))((-10L)))))).yxxyyyyyyyyyxyyx)).scf23)).odd))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))((-1L)))))).odd) , p_97);
    return p_97;
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
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S3 c_885;
    struct S3* p_884 = &c_885;
    struct S3 c_886 = {
        (-6L), // p_884->g_2
        (VECTOR(int64_t, 2))(0x3137D3709E8E548EL, 1L), // p_884->g_34
        9L, // p_884->g_46
        4294967295UL, // p_884->g_55
        (-1L), // p_884->g_59
        1UL, // p_884->g_90
        2L, // p_884->g_92
        0x2B061D97AAA56D44L, // p_884->g_99
        &p_884->g_99, // p_884->g_98
        (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0xEBEBL), 0xEBEBL), 0xEBEBL, 9UL, 0xEBEBL, (VECTOR(uint16_t, 2))(9UL, 0xEBEBL), (VECTOR(uint16_t, 2))(9UL, 0xEBEBL), 9UL, 0xEBEBL, 9UL, 0xEBEBL), // p_884->g_101
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_884->g_102
        &p_884->g_90, // p_884->g_113
        (void*)0, // p_884->g_114
        {{{0x51L},{0x51L},{0x51L},{0x51L},{0x51L}},{{0x51L},{0x51L},{0x51L},{0x51L},{0x51L}},{{0x51L},{0x51L},{0x51L},{0x51L},{0x51L}}}, // p_884->g_118
        1UL, // p_884->g_120
        65529UL, // p_884->g_123
        (-2L), // p_884->g_129
        0L, // p_884->g_318
        0x562DL, // p_884->g_321
        {{{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L}},{{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L},{18446744073709551615UL,4L,0UL,1L,0x22L}}}, // p_884->g_322
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL), // p_884->g_329
        &p_884->g_59, // p_884->g_338
        &p_884->g_338, // p_884->g_337
        (VECTOR(int8_t, 2))((-1L), 0L), // p_884->g_370
        {0x60EFC14EF2F9845EL,0x34FCB804L,1L,0x14385355L,{0xCA9F399BD997242DL,0x02E4L,0x0AFEA872L,-6L,1UL},0x9E69DEA8L,246UL,0x1724L}, // p_884->g_403
        (VECTOR(uint64_t, 8))(0x937A834DFA2A91BAL, (VECTOR(uint64_t, 4))(0x937A834DFA2A91BAL, (VECTOR(uint64_t, 2))(0x937A834DFA2A91BAL, 0x85AA118F45BC19C8L), 0x85AA118F45BC19C8L), 0x85AA118F45BC19C8L, 0x937A834DFA2A91BAL, 0x85AA118F45BC19C8L), // p_884->g_427
        {18446744073709551610UL,0UL,1L,0x7BL,0x55BC7DE7D91D2207L,3UL,0x8EECDED7C7988611L}, // p_884->g_443
        &p_884->g_443, // p_884->g_445
        {0x4F94FDA8D4C7CE3AL,0L,0x52F33E30L,0x49407880L,{0x115F61235C44683DL,0x678BL,4294967295UL,1L,0x53L},4294967295UL,0xB9L,0x3AAEL}, // p_884->g_451
        (VECTOR(int8_t, 2))(0x1FL, 3L), // p_884->g_454
        3UL, // p_884->g_465
        0x7D803551L, // p_884->g_467
        {0xCC6BF423096DD488L,0xF49BC30AL,0x1973BEFAL,0xACL,-1L,0xDACCL,6UL}, // p_884->g_471
        &p_884->g_443, // p_884->g_472
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL), // p_884->g_492
        (VECTOR(uint16_t, 8))(0x64B1L, (VECTOR(uint16_t, 4))(0x64B1L, (VECTOR(uint16_t, 2))(0x64B1L, 0x5174L), 0x5174L), 0x5174L, 0x64B1L, 0x5174L), // p_884->g_514
        (VECTOR(int32_t, 2))(0x00F01413L, 1L), // p_884->g_523
        {0x04CA16465F3A4665L,0x6FA3E13DL,1L,0x060A2740L,{0x61FC8C8669AD912DL,0x2DA9L,0xED52AF9DL,0x07L,0x74L},4294967295UL,0xFFL,0x5C15L}, // p_884->g_542
        &p_884->g_118[2][3][0], // p_884->g_572
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_884->g_571
        &p_884->g_572, // p_884->g_575
        0UL, // p_884->g_581
        (VECTOR(int32_t, 2))((-1L), 0x061B56D9L), // p_884->g_605
        (VECTOR(int32_t, 4))(0x33D143F0L, (VECTOR(int32_t, 2))(0x33D143F0L, 0x497C8A7DL), 0x497C8A7DL), // p_884->g_609
        (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x69405B7FL), 0x69405B7FL), // p_884->g_611
        (VECTOR(int32_t, 4))(0x46557905L, (VECTOR(int32_t, 2))(0x46557905L, (-1L)), (-1L)), // p_884->g_614
        (VECTOR(uint32_t, 2))(0x899CF0E1L, 0x7C115EDCL), // p_884->g_615
        {-1L,0x54C36DFCL,0x020F7B11L,1L,{0UL,0x294CL,4294967295UL,0x20L,255UL},0xCA41B875L,255UL,-1L}, // p_884->g_617
        {0UL,0x44257EF9L,-10L,0xA6L,1L,1UL,0x46889A02459874A5L}, // p_884->g_618
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x542416CC876B4921L), 0x542416CC876B4921L), // p_884->g_623
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x6BL), 0x6BL), // p_884->g_630
        {0x58B0962232F3820EL,0x0678B2CEL,0x3895E1AEL,1UL,3L,65528UL,1UL}, // p_884->g_643
        0x0BB6DF36L, // p_884->g_655
        (VECTOR(int32_t, 2))(0x501AE309L, (-3L)), // p_884->g_732
        (VECTOR(int32_t, 16))(0x3548FD02L, (VECTOR(int32_t, 4))(0x3548FD02L, (VECTOR(int32_t, 2))(0x3548FD02L, 9L), 9L), 9L, 0x3548FD02L, 9L, (VECTOR(int32_t, 2))(0x3548FD02L, 9L), (VECTOR(int32_t, 2))(0x3548FD02L, 9L), 0x3548FD02L, 9L, 0x3548FD02L, 9L), // p_884->g_733
        (void*)0, // p_884->g_749
        {0x4B9929CECBE17744L,0x1C33D92EL,9L,0x6F080CA3L,{18446744073709551613UL,0x3724L,0x1AB0E892L,1L,3UL},4294967295UL,255UL,0x0E09L}, // p_884->g_751
        &p_884->g_751, // p_884->g_750
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-1L)), (-1L)), // p_884->g_779
        {0x48A56C4326C427BEL,0x192EADF3L,0x5D1D4D57L,0UL,0L,0x6396L,18446744073709551614UL}, // p_884->g_793
        {2UL,0xA0543AFEL,0x20612A41L,0x82L,0x4EAE71D7B00FBE0FL,0UL,18446744073709551615UL}, // p_884->g_808
        {0x3B1A86C1099D53B5L,5L,1UL,0x69L,246UL}, // p_884->g_815
        {&p_884->g_815}, // p_884->g_817
        {&p_884->g_817[0],&p_884->g_817[0]}, // p_884->g_816
        (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), // p_884->g_820
        (VECTOR(int32_t, 4))(0x657B29A9L, (VECTOR(int32_t, 2))(0x657B29A9L, 0x14AD3593L), 0x14AD3593L), // p_884->g_821
        {18446744073709551613UL,0xC38AC4E9L,0x13D58A33L,0x59L,1L,0xA08AL,0x75131557BA02CBBFL}, // p_884->g_824
        {18446744073709551611UL,9UL,-8L,9UL,1L,5UL,6UL}, // p_884->g_825
        {1L,-10L,-1L,-1L,{0xBB0D8B5A1B400912L,0L,3UL,0x5BL,0x24L},4294967287UL,0x85L,0L}, // p_884->g_828
        {{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}},{{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750},{&p_884->g_750,&p_884->g_750,&p_884->g_750}}}, // p_884->g_831
        &p_884->g_750, // p_884->g_832
        {0x190F50F38446CD39L,0xAB5A3B5FL,0x111F1532L,0x1CL,-5L,0x62D0L,18446744073709551613UL}, // p_884->g_844
        (VECTOR(uint32_t, 16))(0xB28137B0L, (VECTOR(uint32_t, 4))(0xB28137B0L, (VECTOR(uint32_t, 2))(0xB28137B0L, 4294967289UL), 4294967289UL), 4294967289UL, 0xB28137B0L, 4294967289UL, (VECTOR(uint32_t, 2))(0xB28137B0L, 4294967289UL), (VECTOR(uint32_t, 2))(0xB28137B0L, 4294967289UL), 0xB28137B0L, 4294967289UL, 0xB28137B0L, 4294967289UL), // p_884->g_864
        {{(-9L),(-10L),(-10L),(-9L),(-9L),(-10L),(-10L),(-9L),(-9L),(-10L)},{(-9L),(-10L),(-10L),(-9L),(-9L),(-10L),(-10L),(-9L),(-9L),(-10L)}}, // p_884->g_866
        {(void*)0}, // p_884->g_869
        0, // p_884->v_collective
        sequence_input[get_global_id(0)], // p_884->global_0_offset
        sequence_input[get_global_id(1)], // p_884->global_1_offset
        sequence_input[get_global_id(2)], // p_884->global_2_offset
        sequence_input[get_local_id(0)], // p_884->local_0_offset
        sequence_input[get_local_id(1)], // p_884->local_1_offset
        sequence_input[get_local_id(2)], // p_884->local_2_offset
        sequence_input[get_group_id(0)], // p_884->group_0_offset
        sequence_input[get_group_id(1)], // p_884->group_1_offset
        sequence_input[get_group_id(2)], // p_884->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_884->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_885 = c_886;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_884);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_884->g_2, "p_884->g_2", print_hash_value);
    transparent_crc(p_884->g_34.x, "p_884->g_34.x", print_hash_value);
    transparent_crc(p_884->g_34.y, "p_884->g_34.y", print_hash_value);
    transparent_crc(p_884->g_46, "p_884->g_46", print_hash_value);
    transparent_crc(p_884->g_55, "p_884->g_55", print_hash_value);
    transparent_crc(p_884->g_59, "p_884->g_59", print_hash_value);
    transparent_crc(p_884->g_90, "p_884->g_90", print_hash_value);
    transparent_crc(p_884->g_92, "p_884->g_92", print_hash_value);
    transparent_crc(p_884->g_99, "p_884->g_99", print_hash_value);
    transparent_crc(p_884->g_101.s0, "p_884->g_101.s0", print_hash_value);
    transparent_crc(p_884->g_101.s1, "p_884->g_101.s1", print_hash_value);
    transparent_crc(p_884->g_101.s2, "p_884->g_101.s2", print_hash_value);
    transparent_crc(p_884->g_101.s3, "p_884->g_101.s3", print_hash_value);
    transparent_crc(p_884->g_101.s4, "p_884->g_101.s4", print_hash_value);
    transparent_crc(p_884->g_101.s5, "p_884->g_101.s5", print_hash_value);
    transparent_crc(p_884->g_101.s6, "p_884->g_101.s6", print_hash_value);
    transparent_crc(p_884->g_101.s7, "p_884->g_101.s7", print_hash_value);
    transparent_crc(p_884->g_101.s8, "p_884->g_101.s8", print_hash_value);
    transparent_crc(p_884->g_101.s9, "p_884->g_101.s9", print_hash_value);
    transparent_crc(p_884->g_101.sa, "p_884->g_101.sa", print_hash_value);
    transparent_crc(p_884->g_101.sb, "p_884->g_101.sb", print_hash_value);
    transparent_crc(p_884->g_101.sc, "p_884->g_101.sc", print_hash_value);
    transparent_crc(p_884->g_101.sd, "p_884->g_101.sd", print_hash_value);
    transparent_crc(p_884->g_101.se, "p_884->g_101.se", print_hash_value);
    transparent_crc(p_884->g_101.sf, "p_884->g_101.sf", print_hash_value);
    transparent_crc(p_884->g_102.s0, "p_884->g_102.s0", print_hash_value);
    transparent_crc(p_884->g_102.s1, "p_884->g_102.s1", print_hash_value);
    transparent_crc(p_884->g_102.s2, "p_884->g_102.s2", print_hash_value);
    transparent_crc(p_884->g_102.s3, "p_884->g_102.s3", print_hash_value);
    transparent_crc(p_884->g_102.s4, "p_884->g_102.s4", print_hash_value);
    transparent_crc(p_884->g_102.s5, "p_884->g_102.s5", print_hash_value);
    transparent_crc(p_884->g_102.s6, "p_884->g_102.s6", print_hash_value);
    transparent_crc(p_884->g_102.s7, "p_884->g_102.s7", print_hash_value);
    transparent_crc(p_884->g_102.s8, "p_884->g_102.s8", print_hash_value);
    transparent_crc(p_884->g_102.s9, "p_884->g_102.s9", print_hash_value);
    transparent_crc(p_884->g_102.sa, "p_884->g_102.sa", print_hash_value);
    transparent_crc(p_884->g_102.sb, "p_884->g_102.sb", print_hash_value);
    transparent_crc(p_884->g_102.sc, "p_884->g_102.sc", print_hash_value);
    transparent_crc(p_884->g_102.sd, "p_884->g_102.sd", print_hash_value);
    transparent_crc(p_884->g_102.se, "p_884->g_102.se", print_hash_value);
    transparent_crc(p_884->g_102.sf, "p_884->g_102.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_884->g_118[i][j][k], "p_884->g_118[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_884->g_120, "p_884->g_120", print_hash_value);
    transparent_crc(p_884->g_123, "p_884->g_123", print_hash_value);
    transparent_crc(p_884->g_129, "p_884->g_129", print_hash_value);
    transparent_crc(p_884->g_318, "p_884->g_318", print_hash_value);
    transparent_crc(p_884->g_321, "p_884->g_321", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_884->g_322[i][j].f0, "p_884->g_322[i][j].f0", print_hash_value);
            transparent_crc(p_884->g_322[i][j].f1, "p_884->g_322[i][j].f1", print_hash_value);
            transparent_crc(p_884->g_322[i][j].f2, "p_884->g_322[i][j].f2", print_hash_value);
            transparent_crc(p_884->g_322[i][j].f3, "p_884->g_322[i][j].f3", print_hash_value);
            transparent_crc(p_884->g_322[i][j].f4, "p_884->g_322[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_884->g_329.s0, "p_884->g_329.s0", print_hash_value);
    transparent_crc(p_884->g_329.s1, "p_884->g_329.s1", print_hash_value);
    transparent_crc(p_884->g_329.s2, "p_884->g_329.s2", print_hash_value);
    transparent_crc(p_884->g_329.s3, "p_884->g_329.s3", print_hash_value);
    transparent_crc(p_884->g_329.s4, "p_884->g_329.s4", print_hash_value);
    transparent_crc(p_884->g_329.s5, "p_884->g_329.s5", print_hash_value);
    transparent_crc(p_884->g_329.s6, "p_884->g_329.s6", print_hash_value);
    transparent_crc(p_884->g_329.s7, "p_884->g_329.s7", print_hash_value);
    transparent_crc(p_884->g_370.x, "p_884->g_370.x", print_hash_value);
    transparent_crc(p_884->g_370.y, "p_884->g_370.y", print_hash_value);
    transparent_crc(p_884->g_403.f0, "p_884->g_403.f0", print_hash_value);
    transparent_crc(p_884->g_403.f1, "p_884->g_403.f1", print_hash_value);
    transparent_crc(p_884->g_403.f2, "p_884->g_403.f2", print_hash_value);
    transparent_crc(p_884->g_403.f3, "p_884->g_403.f3", print_hash_value);
    transparent_crc(p_884->g_403.f4.f0, "p_884->g_403.f4.f0", print_hash_value);
    transparent_crc(p_884->g_403.f4.f1, "p_884->g_403.f4.f1", print_hash_value);
    transparent_crc(p_884->g_403.f4.f2, "p_884->g_403.f4.f2", print_hash_value);
    transparent_crc(p_884->g_403.f4.f3, "p_884->g_403.f4.f3", print_hash_value);
    transparent_crc(p_884->g_403.f4.f4, "p_884->g_403.f4.f4", print_hash_value);
    transparent_crc(p_884->g_403.f5, "p_884->g_403.f5", print_hash_value);
    transparent_crc(p_884->g_403.f6, "p_884->g_403.f6", print_hash_value);
    transparent_crc(p_884->g_403.f7, "p_884->g_403.f7", print_hash_value);
    transparent_crc(p_884->g_427.s0, "p_884->g_427.s0", print_hash_value);
    transparent_crc(p_884->g_427.s1, "p_884->g_427.s1", print_hash_value);
    transparent_crc(p_884->g_427.s2, "p_884->g_427.s2", print_hash_value);
    transparent_crc(p_884->g_427.s3, "p_884->g_427.s3", print_hash_value);
    transparent_crc(p_884->g_427.s4, "p_884->g_427.s4", print_hash_value);
    transparent_crc(p_884->g_427.s5, "p_884->g_427.s5", print_hash_value);
    transparent_crc(p_884->g_427.s6, "p_884->g_427.s6", print_hash_value);
    transparent_crc(p_884->g_427.s7, "p_884->g_427.s7", print_hash_value);
    transparent_crc(p_884->g_443.f0, "p_884->g_443.f0", print_hash_value);
    transparent_crc(p_884->g_443.f1, "p_884->g_443.f1", print_hash_value);
    transparent_crc(p_884->g_443.f2, "p_884->g_443.f2", print_hash_value);
    transparent_crc(p_884->g_443.f3, "p_884->g_443.f3", print_hash_value);
    transparent_crc(p_884->g_443.f4, "p_884->g_443.f4", print_hash_value);
    transparent_crc(p_884->g_443.f5, "p_884->g_443.f5", print_hash_value);
    transparent_crc(p_884->g_443.f6, "p_884->g_443.f6", print_hash_value);
    transparent_crc(p_884->g_451.f0, "p_884->g_451.f0", print_hash_value);
    transparent_crc(p_884->g_451.f1, "p_884->g_451.f1", print_hash_value);
    transparent_crc(p_884->g_451.f2, "p_884->g_451.f2", print_hash_value);
    transparent_crc(p_884->g_451.f3, "p_884->g_451.f3", print_hash_value);
    transparent_crc(p_884->g_451.f4.f0, "p_884->g_451.f4.f0", print_hash_value);
    transparent_crc(p_884->g_451.f4.f1, "p_884->g_451.f4.f1", print_hash_value);
    transparent_crc(p_884->g_451.f4.f2, "p_884->g_451.f4.f2", print_hash_value);
    transparent_crc(p_884->g_451.f4.f3, "p_884->g_451.f4.f3", print_hash_value);
    transparent_crc(p_884->g_451.f4.f4, "p_884->g_451.f4.f4", print_hash_value);
    transparent_crc(p_884->g_451.f5, "p_884->g_451.f5", print_hash_value);
    transparent_crc(p_884->g_451.f6, "p_884->g_451.f6", print_hash_value);
    transparent_crc(p_884->g_451.f7, "p_884->g_451.f7", print_hash_value);
    transparent_crc(p_884->g_454.x, "p_884->g_454.x", print_hash_value);
    transparent_crc(p_884->g_454.y, "p_884->g_454.y", print_hash_value);
    transparent_crc(p_884->g_465, "p_884->g_465", print_hash_value);
    transparent_crc(p_884->g_467, "p_884->g_467", print_hash_value);
    transparent_crc(p_884->g_471.f0, "p_884->g_471.f0", print_hash_value);
    transparent_crc(p_884->g_471.f1, "p_884->g_471.f1", print_hash_value);
    transparent_crc(p_884->g_471.f2, "p_884->g_471.f2", print_hash_value);
    transparent_crc(p_884->g_471.f3, "p_884->g_471.f3", print_hash_value);
    transparent_crc(p_884->g_471.f4, "p_884->g_471.f4", print_hash_value);
    transparent_crc(p_884->g_471.f5, "p_884->g_471.f5", print_hash_value);
    transparent_crc(p_884->g_471.f6, "p_884->g_471.f6", print_hash_value);
    transparent_crc(p_884->g_492.s0, "p_884->g_492.s0", print_hash_value);
    transparent_crc(p_884->g_492.s1, "p_884->g_492.s1", print_hash_value);
    transparent_crc(p_884->g_492.s2, "p_884->g_492.s2", print_hash_value);
    transparent_crc(p_884->g_492.s3, "p_884->g_492.s3", print_hash_value);
    transparent_crc(p_884->g_492.s4, "p_884->g_492.s4", print_hash_value);
    transparent_crc(p_884->g_492.s5, "p_884->g_492.s5", print_hash_value);
    transparent_crc(p_884->g_492.s6, "p_884->g_492.s6", print_hash_value);
    transparent_crc(p_884->g_492.s7, "p_884->g_492.s7", print_hash_value);
    transparent_crc(p_884->g_514.s0, "p_884->g_514.s0", print_hash_value);
    transparent_crc(p_884->g_514.s1, "p_884->g_514.s1", print_hash_value);
    transparent_crc(p_884->g_514.s2, "p_884->g_514.s2", print_hash_value);
    transparent_crc(p_884->g_514.s3, "p_884->g_514.s3", print_hash_value);
    transparent_crc(p_884->g_514.s4, "p_884->g_514.s4", print_hash_value);
    transparent_crc(p_884->g_514.s5, "p_884->g_514.s5", print_hash_value);
    transparent_crc(p_884->g_514.s6, "p_884->g_514.s6", print_hash_value);
    transparent_crc(p_884->g_514.s7, "p_884->g_514.s7", print_hash_value);
    transparent_crc(p_884->g_523.x, "p_884->g_523.x", print_hash_value);
    transparent_crc(p_884->g_523.y, "p_884->g_523.y", print_hash_value);
    transparent_crc(p_884->g_542.f0, "p_884->g_542.f0", print_hash_value);
    transparent_crc(p_884->g_542.f1, "p_884->g_542.f1", print_hash_value);
    transparent_crc(p_884->g_542.f2, "p_884->g_542.f2", print_hash_value);
    transparent_crc(p_884->g_542.f3, "p_884->g_542.f3", print_hash_value);
    transparent_crc(p_884->g_542.f4.f0, "p_884->g_542.f4.f0", print_hash_value);
    transparent_crc(p_884->g_542.f4.f1, "p_884->g_542.f4.f1", print_hash_value);
    transparent_crc(p_884->g_542.f4.f2, "p_884->g_542.f4.f2", print_hash_value);
    transparent_crc(p_884->g_542.f4.f3, "p_884->g_542.f4.f3", print_hash_value);
    transparent_crc(p_884->g_542.f4.f4, "p_884->g_542.f4.f4", print_hash_value);
    transparent_crc(p_884->g_542.f5, "p_884->g_542.f5", print_hash_value);
    transparent_crc(p_884->g_542.f6, "p_884->g_542.f6", print_hash_value);
    transparent_crc(p_884->g_542.f7, "p_884->g_542.f7", print_hash_value);
    transparent_crc(p_884->g_581, "p_884->g_581", print_hash_value);
    transparent_crc(p_884->g_605.x, "p_884->g_605.x", print_hash_value);
    transparent_crc(p_884->g_605.y, "p_884->g_605.y", print_hash_value);
    transparent_crc(p_884->g_609.x, "p_884->g_609.x", print_hash_value);
    transparent_crc(p_884->g_609.y, "p_884->g_609.y", print_hash_value);
    transparent_crc(p_884->g_609.z, "p_884->g_609.z", print_hash_value);
    transparent_crc(p_884->g_609.w, "p_884->g_609.w", print_hash_value);
    transparent_crc(p_884->g_611.x, "p_884->g_611.x", print_hash_value);
    transparent_crc(p_884->g_611.y, "p_884->g_611.y", print_hash_value);
    transparent_crc(p_884->g_611.z, "p_884->g_611.z", print_hash_value);
    transparent_crc(p_884->g_611.w, "p_884->g_611.w", print_hash_value);
    transparent_crc(p_884->g_614.x, "p_884->g_614.x", print_hash_value);
    transparent_crc(p_884->g_614.y, "p_884->g_614.y", print_hash_value);
    transparent_crc(p_884->g_614.z, "p_884->g_614.z", print_hash_value);
    transparent_crc(p_884->g_614.w, "p_884->g_614.w", print_hash_value);
    transparent_crc(p_884->g_615.x, "p_884->g_615.x", print_hash_value);
    transparent_crc(p_884->g_615.y, "p_884->g_615.y", print_hash_value);
    transparent_crc(p_884->g_617.f0, "p_884->g_617.f0", print_hash_value);
    transparent_crc(p_884->g_617.f1, "p_884->g_617.f1", print_hash_value);
    transparent_crc(p_884->g_617.f2, "p_884->g_617.f2", print_hash_value);
    transparent_crc(p_884->g_617.f3, "p_884->g_617.f3", print_hash_value);
    transparent_crc(p_884->g_617.f4.f0, "p_884->g_617.f4.f0", print_hash_value);
    transparent_crc(p_884->g_617.f4.f1, "p_884->g_617.f4.f1", print_hash_value);
    transparent_crc(p_884->g_617.f4.f2, "p_884->g_617.f4.f2", print_hash_value);
    transparent_crc(p_884->g_617.f4.f3, "p_884->g_617.f4.f3", print_hash_value);
    transparent_crc(p_884->g_617.f4.f4, "p_884->g_617.f4.f4", print_hash_value);
    transparent_crc(p_884->g_617.f5, "p_884->g_617.f5", print_hash_value);
    transparent_crc(p_884->g_617.f6, "p_884->g_617.f6", print_hash_value);
    transparent_crc(p_884->g_617.f7, "p_884->g_617.f7", print_hash_value);
    transparent_crc(p_884->g_618.f0, "p_884->g_618.f0", print_hash_value);
    transparent_crc(p_884->g_618.f1, "p_884->g_618.f1", print_hash_value);
    transparent_crc(p_884->g_618.f2, "p_884->g_618.f2", print_hash_value);
    transparent_crc(p_884->g_618.f3, "p_884->g_618.f3", print_hash_value);
    transparent_crc(p_884->g_618.f4, "p_884->g_618.f4", print_hash_value);
    transparent_crc(p_884->g_618.f5, "p_884->g_618.f5", print_hash_value);
    transparent_crc(p_884->g_618.f6, "p_884->g_618.f6", print_hash_value);
    transparent_crc(p_884->g_623.x, "p_884->g_623.x", print_hash_value);
    transparent_crc(p_884->g_623.y, "p_884->g_623.y", print_hash_value);
    transparent_crc(p_884->g_623.z, "p_884->g_623.z", print_hash_value);
    transparent_crc(p_884->g_623.w, "p_884->g_623.w", print_hash_value);
    transparent_crc(p_884->g_630.x, "p_884->g_630.x", print_hash_value);
    transparent_crc(p_884->g_630.y, "p_884->g_630.y", print_hash_value);
    transparent_crc(p_884->g_630.z, "p_884->g_630.z", print_hash_value);
    transparent_crc(p_884->g_630.w, "p_884->g_630.w", print_hash_value);
    transparent_crc(p_884->g_643.f0, "p_884->g_643.f0", print_hash_value);
    transparent_crc(p_884->g_643.f1, "p_884->g_643.f1", print_hash_value);
    transparent_crc(p_884->g_643.f2, "p_884->g_643.f2", print_hash_value);
    transparent_crc(p_884->g_643.f3, "p_884->g_643.f3", print_hash_value);
    transparent_crc(p_884->g_643.f4, "p_884->g_643.f4", print_hash_value);
    transparent_crc(p_884->g_643.f5, "p_884->g_643.f5", print_hash_value);
    transparent_crc(p_884->g_643.f6, "p_884->g_643.f6", print_hash_value);
    transparent_crc(p_884->g_655, "p_884->g_655", print_hash_value);
    transparent_crc(p_884->g_732.x, "p_884->g_732.x", print_hash_value);
    transparent_crc(p_884->g_732.y, "p_884->g_732.y", print_hash_value);
    transparent_crc(p_884->g_733.s0, "p_884->g_733.s0", print_hash_value);
    transparent_crc(p_884->g_733.s1, "p_884->g_733.s1", print_hash_value);
    transparent_crc(p_884->g_733.s2, "p_884->g_733.s2", print_hash_value);
    transparent_crc(p_884->g_733.s3, "p_884->g_733.s3", print_hash_value);
    transparent_crc(p_884->g_733.s4, "p_884->g_733.s4", print_hash_value);
    transparent_crc(p_884->g_733.s5, "p_884->g_733.s5", print_hash_value);
    transparent_crc(p_884->g_733.s6, "p_884->g_733.s6", print_hash_value);
    transparent_crc(p_884->g_733.s7, "p_884->g_733.s7", print_hash_value);
    transparent_crc(p_884->g_733.s8, "p_884->g_733.s8", print_hash_value);
    transparent_crc(p_884->g_733.s9, "p_884->g_733.s9", print_hash_value);
    transparent_crc(p_884->g_733.sa, "p_884->g_733.sa", print_hash_value);
    transparent_crc(p_884->g_733.sb, "p_884->g_733.sb", print_hash_value);
    transparent_crc(p_884->g_733.sc, "p_884->g_733.sc", print_hash_value);
    transparent_crc(p_884->g_733.sd, "p_884->g_733.sd", print_hash_value);
    transparent_crc(p_884->g_733.se, "p_884->g_733.se", print_hash_value);
    transparent_crc(p_884->g_733.sf, "p_884->g_733.sf", print_hash_value);
    transparent_crc(p_884->g_751.f0, "p_884->g_751.f0", print_hash_value);
    transparent_crc(p_884->g_751.f1, "p_884->g_751.f1", print_hash_value);
    transparent_crc(p_884->g_751.f2, "p_884->g_751.f2", print_hash_value);
    transparent_crc(p_884->g_751.f3, "p_884->g_751.f3", print_hash_value);
    transparent_crc(p_884->g_751.f4.f0, "p_884->g_751.f4.f0", print_hash_value);
    transparent_crc(p_884->g_751.f4.f1, "p_884->g_751.f4.f1", print_hash_value);
    transparent_crc(p_884->g_751.f4.f2, "p_884->g_751.f4.f2", print_hash_value);
    transparent_crc(p_884->g_751.f4.f3, "p_884->g_751.f4.f3", print_hash_value);
    transparent_crc(p_884->g_751.f4.f4, "p_884->g_751.f4.f4", print_hash_value);
    transparent_crc(p_884->g_751.f5, "p_884->g_751.f5", print_hash_value);
    transparent_crc(p_884->g_751.f6, "p_884->g_751.f6", print_hash_value);
    transparent_crc(p_884->g_751.f7, "p_884->g_751.f7", print_hash_value);
    transparent_crc(p_884->g_779.x, "p_884->g_779.x", print_hash_value);
    transparent_crc(p_884->g_779.y, "p_884->g_779.y", print_hash_value);
    transparent_crc(p_884->g_779.z, "p_884->g_779.z", print_hash_value);
    transparent_crc(p_884->g_779.w, "p_884->g_779.w", print_hash_value);
    transparent_crc(p_884->g_793.f0, "p_884->g_793.f0", print_hash_value);
    transparent_crc(p_884->g_793.f1, "p_884->g_793.f1", print_hash_value);
    transparent_crc(p_884->g_793.f2, "p_884->g_793.f2", print_hash_value);
    transparent_crc(p_884->g_793.f3, "p_884->g_793.f3", print_hash_value);
    transparent_crc(p_884->g_793.f4, "p_884->g_793.f4", print_hash_value);
    transparent_crc(p_884->g_793.f5, "p_884->g_793.f5", print_hash_value);
    transparent_crc(p_884->g_793.f6, "p_884->g_793.f6", print_hash_value);
    transparent_crc(p_884->g_808.f0, "p_884->g_808.f0", print_hash_value);
    transparent_crc(p_884->g_808.f1, "p_884->g_808.f1", print_hash_value);
    transparent_crc(p_884->g_808.f2, "p_884->g_808.f2", print_hash_value);
    transparent_crc(p_884->g_808.f3, "p_884->g_808.f3", print_hash_value);
    transparent_crc(p_884->g_808.f4, "p_884->g_808.f4", print_hash_value);
    transparent_crc(p_884->g_808.f5, "p_884->g_808.f5", print_hash_value);
    transparent_crc(p_884->g_808.f6, "p_884->g_808.f6", print_hash_value);
    transparent_crc(p_884->g_815.f0, "p_884->g_815.f0", print_hash_value);
    transparent_crc(p_884->g_815.f1, "p_884->g_815.f1", print_hash_value);
    transparent_crc(p_884->g_815.f2, "p_884->g_815.f2", print_hash_value);
    transparent_crc(p_884->g_815.f3, "p_884->g_815.f3", print_hash_value);
    transparent_crc(p_884->g_815.f4, "p_884->g_815.f4", print_hash_value);
    transparent_crc(p_884->g_820.x, "p_884->g_820.x", print_hash_value);
    transparent_crc(p_884->g_820.y, "p_884->g_820.y", print_hash_value);
    transparent_crc(p_884->g_820.z, "p_884->g_820.z", print_hash_value);
    transparent_crc(p_884->g_820.w, "p_884->g_820.w", print_hash_value);
    transparent_crc(p_884->g_821.x, "p_884->g_821.x", print_hash_value);
    transparent_crc(p_884->g_821.y, "p_884->g_821.y", print_hash_value);
    transparent_crc(p_884->g_821.z, "p_884->g_821.z", print_hash_value);
    transparent_crc(p_884->g_821.w, "p_884->g_821.w", print_hash_value);
    transparent_crc(p_884->g_824.f0, "p_884->g_824.f0", print_hash_value);
    transparent_crc(p_884->g_824.f1, "p_884->g_824.f1", print_hash_value);
    transparent_crc(p_884->g_824.f2, "p_884->g_824.f2", print_hash_value);
    transparent_crc(p_884->g_824.f3, "p_884->g_824.f3", print_hash_value);
    transparent_crc(p_884->g_824.f4, "p_884->g_824.f4", print_hash_value);
    transparent_crc(p_884->g_824.f5, "p_884->g_824.f5", print_hash_value);
    transparent_crc(p_884->g_824.f6, "p_884->g_824.f6", print_hash_value);
    transparent_crc(p_884->g_825.f0, "p_884->g_825.f0", print_hash_value);
    transparent_crc(p_884->g_825.f1, "p_884->g_825.f1", print_hash_value);
    transparent_crc(p_884->g_825.f2, "p_884->g_825.f2", print_hash_value);
    transparent_crc(p_884->g_825.f3, "p_884->g_825.f3", print_hash_value);
    transparent_crc(p_884->g_825.f4, "p_884->g_825.f4", print_hash_value);
    transparent_crc(p_884->g_825.f5, "p_884->g_825.f5", print_hash_value);
    transparent_crc(p_884->g_825.f6, "p_884->g_825.f6", print_hash_value);
    transparent_crc(p_884->g_828.f0, "p_884->g_828.f0", print_hash_value);
    transparent_crc(p_884->g_828.f1, "p_884->g_828.f1", print_hash_value);
    transparent_crc(p_884->g_828.f2, "p_884->g_828.f2", print_hash_value);
    transparent_crc(p_884->g_828.f3, "p_884->g_828.f3", print_hash_value);
    transparent_crc(p_884->g_828.f4.f0, "p_884->g_828.f4.f0", print_hash_value);
    transparent_crc(p_884->g_828.f4.f1, "p_884->g_828.f4.f1", print_hash_value);
    transparent_crc(p_884->g_828.f4.f2, "p_884->g_828.f4.f2", print_hash_value);
    transparent_crc(p_884->g_828.f4.f3, "p_884->g_828.f4.f3", print_hash_value);
    transparent_crc(p_884->g_828.f4.f4, "p_884->g_828.f4.f4", print_hash_value);
    transparent_crc(p_884->g_828.f5, "p_884->g_828.f5", print_hash_value);
    transparent_crc(p_884->g_828.f6, "p_884->g_828.f6", print_hash_value);
    transparent_crc(p_884->g_828.f7, "p_884->g_828.f7", print_hash_value);
    transparent_crc(p_884->g_844.f0, "p_884->g_844.f0", print_hash_value);
    transparent_crc(p_884->g_844.f1, "p_884->g_844.f1", print_hash_value);
    transparent_crc(p_884->g_844.f2, "p_884->g_844.f2", print_hash_value);
    transparent_crc(p_884->g_844.f3, "p_884->g_844.f3", print_hash_value);
    transparent_crc(p_884->g_844.f4, "p_884->g_844.f4", print_hash_value);
    transparent_crc(p_884->g_844.f5, "p_884->g_844.f5", print_hash_value);
    transparent_crc(p_884->g_844.f6, "p_884->g_844.f6", print_hash_value);
    transparent_crc(p_884->g_864.s0, "p_884->g_864.s0", print_hash_value);
    transparent_crc(p_884->g_864.s1, "p_884->g_864.s1", print_hash_value);
    transparent_crc(p_884->g_864.s2, "p_884->g_864.s2", print_hash_value);
    transparent_crc(p_884->g_864.s3, "p_884->g_864.s3", print_hash_value);
    transparent_crc(p_884->g_864.s4, "p_884->g_864.s4", print_hash_value);
    transparent_crc(p_884->g_864.s5, "p_884->g_864.s5", print_hash_value);
    transparent_crc(p_884->g_864.s6, "p_884->g_864.s6", print_hash_value);
    transparent_crc(p_884->g_864.s7, "p_884->g_864.s7", print_hash_value);
    transparent_crc(p_884->g_864.s8, "p_884->g_864.s8", print_hash_value);
    transparent_crc(p_884->g_864.s9, "p_884->g_864.s9", print_hash_value);
    transparent_crc(p_884->g_864.sa, "p_884->g_864.sa", print_hash_value);
    transparent_crc(p_884->g_864.sb, "p_884->g_864.sb", print_hash_value);
    transparent_crc(p_884->g_864.sc, "p_884->g_864.sc", print_hash_value);
    transparent_crc(p_884->g_864.sd, "p_884->g_864.sd", print_hash_value);
    transparent_crc(p_884->g_864.se, "p_884->g_864.se", print_hash_value);
    transparent_crc(p_884->g_864.sf, "p_884->g_864.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_884->g_866[i][j], "p_884->g_866[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_884->v_collective, "p_884->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 92; i++)
            transparent_crc(p_884->g_special_values[i + 92 * get_linear_group_id()], "p_884->g_special_values[i + 92 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_884->l_special_values[i], "p_884->l_special_values[i]", print_hash_value);
    transparent_crc(p_884->l_comm_values[get_linear_local_id()], "p_884->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_884->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_884->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
