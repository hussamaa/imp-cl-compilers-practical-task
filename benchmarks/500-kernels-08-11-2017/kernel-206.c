// --atomics 65 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,93,1 -l 1,3,1
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
{1,0,2}, // permutation 0
{1,2,0}, // permutation 1
{2,0,1}, // permutation 2
{1,2,0}, // permutation 3
{1,2,0}, // permutation 4
{0,2,1}, // permutation 5
{1,2,0}, // permutation 6
{2,0,1}, // permutation 7
{1,2,0}, // permutation 8
{2,0,1} // permutation 9
};

// Seed: 827647279

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint64_t  f1;
   volatile uint8_t  f2;
   volatile int8_t  f3;
};

union U1 {
   int32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
};

struct S2 {
    VECTOR(int8_t, 8) g_37;
    VECTOR(int8_t, 8) g_38;
    int32_t g_61;
    int16_t g_67[6];
    int16_t *g_79;
    int32_t g_92;
    volatile union U1 g_95[10];
    VECTOR(uint8_t, 8) g_103;
    volatile VECTOR(uint32_t, 16) g_109;
    uint16_t g_116;
    int32_t g_119;
    volatile int32_t g_130;
    volatile uint8_t g_133[6][1][3];
    VECTOR(uint8_t, 4) g_143;
    uint16_t g_161;
    volatile VECTOR(int16_t, 4) g_177;
    uint64_t g_200;
    uint64_t g_202;
    uint16_t *g_213[9];
    uint16_t * volatile *g_212;
    uint16_t **g_214[4];
    VECTOR(uint8_t, 16) g_220;
    VECTOR(int32_t, 2) g_238;
    union U0 g_240;
    int64_t g_283;
    uint8_t g_284;
    volatile VECTOR(int16_t, 16) g_291;
    int8_t g_306;
    volatile int32_t g_312;
    volatile int32_t *g_311;
    volatile int32_t * volatile * volatile g_310;
    volatile VECTOR(uint64_t, 8) g_318;
    VECTOR(int32_t, 8) g_325;
    volatile int32_t **g_330;
    uint32_t *g_393;
    uint32_t **g_392;
    VECTOR(int32_t, 8) g_405;
    volatile VECTOR(uint8_t, 2) g_417;
    VECTOR(int8_t, 16) g_458;
    VECTOR(int64_t, 2) g_471;
    int32_t *g_479;
    VECTOR(int32_t, 2) g_517;
    VECTOR(int8_t, 2) g_547;
    int8_t *g_564;
    int8_t *g_578;
    int32_t ** volatile g_599;
    volatile VECTOR(int16_t, 8) g_666;
    volatile int32_t * volatile * volatile g_750;
    VECTOR(uint64_t, 16) g_776;
    int16_t g_785;
    int16_t g_790;
    volatile VECTOR(int64_t, 4) g_808;
    VECTOR(uint64_t, 4) g_824;
    union U0 g_829;
    union U1 g_830;
    int64_t g_863;
    volatile VECTOR(int16_t, 2) g_872;
    volatile VECTOR(int32_t, 2) g_894;
    volatile VECTOR(int8_t, 2) g_897;
    uint32_t g_922;
    VECTOR(int64_t, 16) g_975;
    VECTOR(int64_t, 8) g_984;
    volatile VECTOR(int32_t, 4) g_986;
    VECTOR(int32_t, 4) g_991;
    volatile VECTOR(int16_t, 4) g_1001;
    uint64_t *g_1003;
    uint64_t * volatile * volatile g_1002;
    uint64_t * volatile * volatile * volatile g_1004;
    volatile VECTOR(uint64_t, 4) g_1013;
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
int64_t  func_1(struct S2 * p_1050);
int32_t  func_2(uint8_t  p_3, struct S2 * p_1050);
uint8_t  func_4(uint64_t  p_5, int32_t  p_6, int16_t  p_7, uint8_t  p_8, int32_t  p_9, struct S2 * p_1050);
int32_t  func_12(int16_t  p_13, int64_t  p_14, union U1  p_15, int32_t  p_16, union U1  p_17, struct S2 * p_1050);
uint16_t  func_29(int64_t  p_30, uint32_t  p_31, int32_t  p_32, uint32_t  p_33, uint32_t  p_34, struct S2 * p_1050);
int8_t  func_39(uint64_t  p_40, int32_t  p_41, int64_t  p_42, struct S2 * p_1050);
uint8_t  func_43(int16_t  p_44, uint32_t  p_45, int16_t  p_46, union U1  p_47, uint32_t  p_48, struct S2 * p_1050);
union U0  func_50(uint64_t  p_51, int64_t  p_52, struct S2 * p_1050);
int64_t  func_54(uint8_t  p_55, int32_t  p_56, int64_t  p_57, int16_t  p_58, struct S2 * p_1050);
int32_t * func_68(uint32_t  p_69, int32_t * p_70, uint8_t  p_71, int16_t  p_72, int32_t * p_73, struct S2 * p_1050);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1050->g_37 p_1050->g_38 p_1050->l_comm_values p_1050->g_67 p_1050->g_95 p_1050->g_103 p_1050->g_comm_values p_1050->g_109 p_1050->g_95.f0 p_1050->g_92 p_1050->g_119 p_1050->g_116 p_1050->g_133 p_1050->g_177 p_1050->g_143 p_1050->g_202 p_1050->g_212 p_1050->g_220 p_1050->g_213 p_1050->g_161 p_1050->g_238 p_1050->g_240 p_1050->g_61 p_1050->g_200 p_1050->g_240.f0 p_1050->g_284 p_1050->g_291 p_1050->g_79 p_1050->g_310 p_1050->g_318 p_1050->g_325 p_1050->g_330 p_1050->g_283 p_1050->g_130 p_1050->g_392 p_1050->g_417 p_1050->g_311 p_1050->g_312 p_1050->g_306 p_1050->g_458 p_1050->g_517 p_1050->g_547 p_1050->g_393 p_1050->g_479 p_1050->g_599 p_1050->g_666 p_1050->g_471 p_1050->g_405 p_1050->g_750 p_1050->g_776 p_1050->g_785 p_1050->g_790 p_1050->g_829 p_1050->g_830 p_1050->g_922 p_1050->g_975 p_1050->g_984 p_1050->g_986 p_1050->g_991 p_1050->g_894 p_1050->g_1001 p_1050->g_1002 p_1050->g_1013 p_1050->g_829.f0
 * writes: p_1050->g_61 p_1050->g_67 p_1050->g_79 p_1050->g_116 p_1050->g_119 p_1050->g_133 p_1050->g_92 p_1050->g_200 p_1050->g_202 p_1050->g_38 p_1050->g_214 p_1050->g_37 p_1050->g_284 p_1050->g_240.f0 p_1050->g_306 p_1050->g_392 p_1050->g_283 p_1050->g_161 p_1050->g_325 p_1050->g_479 p_1050->g_312 p_1050->g_564 p_1050->g_578 p_1050->g_143 p_1050->g_517 p_1050->g_311 p_1050->g_785 p_1050->g_790 p_1050->l_comm_values p_1050->g_863 p_1050->g_922 p_1050->g_830.f1
 */
int64_t  func_1(struct S2 * p_1050)
{ /* block id: 4 */
    int32_t l_18[9][1];
    VECTOR(int32_t, 2) l_49 = (VECTOR(int32_t, 2))(2L, 0L);
    uint32_t l_53 = 0xE7721CA7L;
    int32_t l_59 = (-5L);
    int32_t *l_60 = &p_1050->g_61;
    int16_t *l_66 = &p_1050->g_67[5];
    union U1 l_307 = {1L};
    int64_t l_637 = 0x0732BDFBE3CA875EL;
    uint32_t l_683 = 4294967295UL;
    int32_t *l_703 = &l_18[3][0];
    uint16_t ***l_753 = &p_1050->g_214[1];
    uint64_t *l_756 = (void*)0;
    uint64_t *l_757 = &p_1050->g_202;
    VECTOR(uint16_t, 4) l_761 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
    VECTOR(int32_t, 2) l_766 = (VECTOR(int32_t, 2))(0L, 0x7CAFEFEAL);
    VECTOR(int32_t, 4) l_767 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
    uint64_t l_781 = 18446744073709551615UL;
    int8_t l_786[6];
    VECTOR(int16_t, 2) l_821 = (VECTOR(int16_t, 2))(0x2594L, 0x0F26L);
    VECTOR(int32_t, 2) l_833 = (VECTOR(int32_t, 2))(0L, 0L);
    int64_t l_862[1];
    VECTOR(uint64_t, 16) l_919 = (VECTOR(uint64_t, 16))(0x6D6F91FDC3B98685L, (VECTOR(uint64_t, 4))(0x6D6F91FDC3B98685L, (VECTOR(uint64_t, 2))(0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L), 0xED8E0896BAF3B9A1L), 0xED8E0896BAF3B9A1L, 0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L, (VECTOR(uint64_t, 2))(0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L), (VECTOR(uint64_t, 2))(0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L), 0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L, 0x6D6F91FDC3B98685L, 0xED8E0896BAF3B9A1L);
    uint64_t l_955 = 0x21197DD138375601L;
    uint32_t l_972 = 0UL;
    VECTOR(int32_t, 8) l_988 = (VECTOR(int32_t, 8))(0x7F0DF2ACL, (VECTOR(int32_t, 4))(0x7F0DF2ACL, (VECTOR(int32_t, 2))(0x7F0DF2ACL, 0L), 0L), 0L, 0x7F0DF2ACL, 0L);
    VECTOR(int32_t, 4) l_989 = (VECTOR(int32_t, 4))(0x48A4BF6AL, (VECTOR(int32_t, 2))(0x48A4BF6AL, 0x607F3AB7L), 0x607F3AB7L);
    VECTOR(uint64_t, 4) l_1014 = (VECTOR(uint64_t, 4))(0xF8972A16F0922DCAL, (VECTOR(uint64_t, 2))(0xF8972A16F0922DCAL, 0UL), 0UL);
    uint8_t l_1024 = 255UL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_18[i][j] = (-3L);
    }
    for (i = 0; i < 6; i++)
        l_786[i] = 0x4AL;
    for (i = 0; i < 1; i++)
        l_862[i] = 0x7E339FE0AF9D033FL;
    (*l_703) = func_2(func_4((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10), 8)), ((*l_703) = func_12(l_18[4][0], (((((safe_div_func_int64_t_s_s((((((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(0x3403CA955A63A74AL, 1L)).xyyxxxxx, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(func_29((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1050->g_37.s34)), (-2L), ((VECTOR(int8_t, 8))(p_1050->g_38.s43421257)).s3, func_39((func_43(l_18[4][0], l_18[4][0], ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_49.yyxy)).zzyzxyzy))).s14)).even , func_50((l_53 , (func_54(p_1050->g_37.s0, (((*l_60) = (l_59 != p_1050->g_37.s5)) , ((safe_lshift_func_int16_t_s_s(((*l_66) = (safe_div_func_int32_t_s_s(((l_18[2][0] | p_1050->g_37.s2) , p_1050->g_37.s1), p_1050->g_38.s0))), l_59)) ^ 0x225D8BACL)), p_1050->g_37.s5, p_1050->g_37.s4, p_1050) > l_59)), l_49.y, p_1050)) , (*p_1050->g_79)), l_307, p_1050->g_220.s4, p_1050) <= l_53), p_1050->g_547.y, p_1050->g_143.x, p_1050), 0x02L, 0x72L, 0x25L)).s73, ((VECTOR(int8_t, 2))(0x08L)), ((VECTOR(int8_t, 2))(0x6BL))))).hi, l_53)), l_18[4][0], l_637, p_1050->g_458.s9, l_59, p_1050), l_49.x)), 0x7CL)), 14)), 0L, (-1L), 0x4C8C15A8C0C845C0L)).xwzwzxxyyxzyywwy, ((VECTOR(int64_t, 16))(0x50834FE8117C4619L))))).odd, ((VECTOR(int64_t, 8))((-5L)))))), ((VECTOR(int64_t, 2))(0x52301AF8F803731FL)), l_18[4][0], 0L, ((VECTOR(int64_t, 4))((-4L))))).s95)).odd)) | 0xD550F588F029CEA6L) , p_1050->g_471.x) , l_53) > GROUP_DIVERGE(1, 1)), 0x180DC6C2F31C3904L)) <= 0x8934DCCCL) , l_683) , FAKE_DIVERGE(p_1050->local_2_offset, get_local_id(2), 10)) != 65529UL), l_307, p_1050->g_405.s2, l_307, p_1050)), l_49.y, l_49.x, p_1050->g_547.y, p_1050), p_1050);
    (*p_1050->g_750) = (*p_1050->g_310);
    if (((*l_703) = (FAKE_DIVERGE(p_1050->local_0_offset, get_local_id(0), 10) && ((safe_add_func_uint32_t_u_u(((p_1050->g_95[6] , &l_66) == (((void*)0 != l_753) , (((*l_703) | (safe_sub_func_uint64_t_u_u(p_1050->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))], ((*l_757) |= (*l_703))))) , &p_1050->g_79))), (((*p_1050->g_393) = ((safe_rshift_func_uint16_t_u_s(7UL, (*l_703))) || (*l_703))) ^ (*l_703)))) > p_1050->g_103.s6))))
    { /* block id: 255 */
        VECTOR(uint16_t, 8) l_760 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xEB13L), 0xEB13L), 0xEB13L, 1UL, 0xEB13L);
        VECTOR(int32_t, 2) l_768 = (VECTOR(int32_t, 2))(0x193B6084L, 0x6D749EFAL);
        uint8_t *l_782 = (void*)0;
        uint8_t *l_783 = &p_1050->g_284;
        int16_t *l_784 = &p_1050->g_785;
        uint64_t l_787[9][4][7] = {{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}},{{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL},{0x6AC341F497C1AA5DL,8UL,18446744073709551615UL,18446744073709551613UL,0xBD6348B6F89BC2E4L,0x2411D1E910F28B81L,0x6AC341F497C1AA5DL}}};
        VECTOR(int64_t, 4) l_788 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L);
        int16_t *l_789 = &p_1050->g_790;
        int8_t **l_813 = (void*)0;
        int64_t l_846 = 0L;
        VECTOR(uint32_t, 4) l_920 = (VECTOR(uint32_t, 4))(0xF56B3B18L, (VECTOR(uint32_t, 2))(0xF56B3B18L, 0x858DBB57L), 0x858DBB57L);
        union U1 *l_934 = (void*)0;
        union U1 *l_966 = &p_1050->g_830;
        VECTOR(int16_t, 16) l_971 = (VECTOR(int16_t, 16))(0x22DCL, (VECTOR(int16_t, 4))(0x22DCL, (VECTOR(int16_t, 2))(0x22DCL, 0L), 0L), 0L, 0x22DCL, 0L, (VECTOR(int16_t, 2))(0x22DCL, 0L), (VECTOR(int16_t, 2))(0x22DCL, 0L), 0x22DCL, 0L, 0x22DCL, 0L);
        int i, j, k;
        if (((*l_703) = (0x72E44CDAL ^ ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(l_760.s77)).yyyxyxxyxyyyyxxx, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(l_761.wxxzzwyzzyzzxwxz)).odd, ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(0x7B2EL, ((VECTOR(int16_t, 4))((-4L), ((*l_789) |= (safe_rshift_func_uint16_t_u_s(((((safe_add_func_int32_t_s_s((**p_1050->g_310), (((((VECTOR(int32_t, 4))(l_766.xyxy)).y || ((((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(0x0FC44FBAL, ((VECTOR(int32_t, 4))(l_767.xyzz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(l_760.s3, 0x234CADA5L, 0x10E063C1L, (-5L), ((VECTOR(int32_t, 2))(l_768.yy)).lo, (safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((*l_66) = (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 8))(0x3A6EBD5EDF65D812L, 18446744073709551608UL, ((VECTOR(uint64_t, 4))(p_1050->g_776.s7915)), 18446744073709551615UL, 0x174CD6B0E4979F82L)).s1))))) < ((safe_div_func_int16_t_s_s(((*l_703) <= (**p_1050->g_212)), ((*l_784) |= (((*l_783) = (safe_lshift_func_int16_t_s_s((((((*p_1050->g_393) <= ((((void*)0 == &l_637) , 7UL) ^ l_781)) ^ 1L) && (*l_703)) == GROUP_DIVERGE(0, 1)), 13))) , 0x43DDL)))) <= (-5L))) > l_786[4]), l_787[0][3][5])) > FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10)), 0x66L)), 0x36C41A3FL, ((VECTOR(int32_t, 2))((-3L))), ((VECTOR(int32_t, 4))(0x6716C430L)), l_788.x, 0x71E02A96L, 0x09E0A47BL)), (int32_t)0x0183A3C8L, (int32_t)(-1L)))).s90)).xxxyyyxxxxyxxxxx)).s5d)), (-1L))).s00, ((VECTOR(int32_t, 2))(0L))))).yxxyyyxxxyxxyxyx, ((VECTOR(int32_t, 16))(0x15AB1E3FL))))).s5 != l_768.x) , p_1050->g_161)) , p_1050->g_202) || (*l_703)))) < p_1050->g_200) != 4294967295UL) >= l_768.x), 7))), 0L, 0x2046L)), ((VECTOR(int16_t, 8))(3L)), ((VECTOR(int16_t, 2))((-8L))), 0x605AL)), ((VECTOR(int16_t, 16))(0x55DBL))))).sb, ((VECTOR(int16_t, 2))(0x12A8L)), 0x13E6L)), 0x5475L, (*p_1050->g_79), 6L, 9L, (-1L), ((VECTOR(int16_t, 2))(0x2B02L)), l_760.s4, 0x30A0L, ((VECTOR(int16_t, 2))(1L)), 0x60C0L)).hi, ((VECTOR(int16_t, 8))(0x05A8L))))).s06)).xyxyxxyxyxxyyxyx))), ((VECTOR(uint16_t, 16))(0UL)), ((VECTOR(uint16_t, 16))(65530UL))))).hi, ((VECTOR(uint16_t, 8))(0x12D8L)), ((VECTOR(uint16_t, 8))(0x4D9AL))))).s4457555353725043, ((VECTOR(uint16_t, 16))(0UL)), ((VECTOR(uint16_t, 16))(0UL))))).even))).s4642074707753510, ((VECTOR(uint16_t, 16))(0x353FL))))).lo, ((VECTOR(uint16_t, 8))(0UL))))).s3)))
        { /* block id: 261 */
            int64_t l_825 = 0x678A8DEF3FC2E887L;
            int32_t l_828 = 0x2585356FL;
            int32_t l_861 = 0x4EFB3EE0L;
            int32_t l_866[8] = {0x3629485EL,0x5B48AD77L,0x3629485EL,0x3629485EL,0x5B48AD77L,0x3629485EL,0x3629485EL,0x5B48AD77L};
            int32_t l_887 = 0x57F7A745L;
            VECTOR(uint8_t, 4) l_892 = (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 246UL), 246UL);
            int8_t l_929 = (-6L);
            int32_t *l_937 = &p_1050->g_119;
            int32_t *l_938 = (void*)0;
            int32_t *l_939 = &p_1050->g_119;
            int32_t *l_940 = &l_59;
            int32_t *l_941 = (void*)0;
            int32_t *l_942 = (void*)0;
            int32_t *l_943 = (void*)0;
            int32_t *l_944 = (void*)0;
            int32_t *l_945 = (void*)0;
            int32_t *l_946 = &l_866[2];
            int32_t *l_947 = (void*)0;
            int32_t *l_948 = &l_18[6][0];
            int32_t *l_949 = &l_887;
            int32_t *l_950 = &l_59;
            int32_t *l_951 = &l_18[7][0];
            int32_t *l_952 = &l_59;
            int32_t *l_953 = &l_861;
            int32_t *l_954[3];
            int i;
            for (i = 0; i < 3; i++)
                l_954[i] = &p_1050->g_119;
            for (l_637 = 2; (l_637 <= 1); l_637--)
            { /* block id: 264 */
                int32_t **l_793 = &l_60;
                VECTOR(uint8_t, 4) l_803 = (VECTOR(uint8_t, 4))(0x9DL, (VECTOR(uint8_t, 2))(0x9DL, 0x63L), 0x63L);
                uint16_t *l_816 = (void*)0;
                uint16_t *l_817 = (void*)0;
                uint16_t *l_818 = (void*)0;
                uint16_t *l_819 = &l_307.f2;
                int32_t l_820 = 0x131AF812L;
                uint32_t l_826 = 0xB0380C2FL;
                int64_t *l_827 = (void*)0;
                int64_t l_860 = 0L;
                int32_t l_864 = 0x4619BCE0L;
                int32_t l_865[5] = {0L,0L,0L,0L,0L};
                VECTOR(int64_t, 4) l_877 = (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x586242A2743A4D3CL), 0x586242A2743A4D3CL);
                int64_t l_886 = 4L;
                uint16_t ***l_918[3][9] = {{&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0]},{&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0]},{&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0],&p_1050->g_214[0],(void*)0,&p_1050->g_214[0]}};
                uint16_t l_931 = 0xA501L;
                int i, j;
                (*l_703) &= ((l_793 = &l_60) != p_1050->g_330);
                if (((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(250UL, 0UL)).odd < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xE9L, 0x66L)).yxyxxxyxxyxxyxyx)).s5), ((*l_783) = (safe_lshift_func_int16_t_s_s((l_760.s6 && ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_803.yz)).yxyyyyyxyxxyxxyx)).s5 , ((((((((((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((VECTOR(int64_t, 8))(p_1050->g_808.yzxwzyxw)).s1 >= (*l_703)), l_788.x)), ((safe_div_func_int64_t_s_s((p_1050->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))] |= (safe_mod_func_uint8_t_u_u(((((l_813 == ((safe_div_func_uint16_t_u_u((l_820 |= (**p_1050->g_212)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_821.xy)).xyxxyxyy)).s3)) , &p_1050->g_564)) , (safe_div_func_uint16_t_u_u((((*l_757) = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_1050->g_824.xz)).xyxy)).w) > (&p_1050->g_578 == (void*)0)), l_825))) && l_768.y) && p_1050->g_67[5]), l_826))), p_1050->g_103.s5)) <= 8L))) || l_825) > l_825) | 0x59AEA2AF098E4626L) >= 0x06L) == (*l_703)) || (*p_1050->g_393)) == 0x523DL) , &p_1050->g_213[8]) == &p_1050->g_213[2])) , (*l_703))), l_828))))))), l_787[6][0][4])), l_803.z)) != 0x2BEC1908B8EE7559L))
                { /* block id: 271 */
                    VECTOR(int64_t, 2) l_847 = (VECTOR(int64_t, 2))((-1L), 0x35AACDD63868B0E7L);
                    int32_t *l_848 = &l_59;
                    int i;
                    (*l_848) |= (p_1050->g_829 , (((**p_1050->g_310) & (((p_1050->g_830 , (safe_sub_func_uint8_t_u_u(((((void*)0 == p_1050->g_330) == (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_833.yx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_lshift_func_int16_t_s_s(l_760.s0, ((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((-3L), (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_846, (*l_703))) < GROUP_DIVERGE(2, 1)), l_847.x)))), 0x584BB33D1A865C67L)), 0x2AL)) && (-1L)))), ((VECTOR(int32_t, 2))(0x1A8E856DL)), (-7L))).xyzzzxyy)).s21))), ((VECTOR(int32_t, 2))(0L)), 0x2E3A17A4L, (*l_703), 0x434ECF5CL, (-8L))).s0 , (*p_1050->g_79)) == 0x6E63L) == l_847.y)) , 0x5CL), p_1050->g_143.z))) , &p_1050->g_67[5]) == (void*)0)) ^ 0xCAL));
                }
                else
                { /* block id: 273 */
                    int32_t *l_849 = &l_18[4][0];
                    int32_t *l_850 = &l_59;
                    int32_t *l_851 = (void*)0;
                    int32_t *l_852 = &l_828;
                    int32_t *l_853 = (void*)0;
                    int32_t *l_854 = (void*)0;
                    int32_t *l_855 = (void*)0;
                    int32_t *l_856 = &p_1050->g_119;
                    int32_t *l_857 = &l_59;
                    int32_t *l_858 = &l_59;
                    int32_t *l_859[8][3][4] = {{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}},{{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0},{(void*)0,&p_1050->g_92,&l_828,(void*)0}}};
                    uint64_t l_867 = 0xF0F38D6E932C88A7L;
                    VECTOR(int8_t, 8) l_898 = (VECTOR(int8_t, 8))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, (-1L)), (-1L)), (-1L), 0x3EL, (-1L));
                    VECTOR(int8_t, 16) l_917 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x6FL), 0x6FL), 0x6FL, 2L, 0x6FL, (VECTOR(int8_t, 2))(2L, 0x6FL), (VECTOR(int8_t, 2))(2L, 0x6FL), 2L, 0x6FL, 2L, 0x6FL);
                    int i, j, k;
                    l_867--;
                    (*l_856) = l_760.s3;
                    for (p_1050->g_863 = (-19); (p_1050->g_863 < 6); p_1050->g_863++)
                    { /* block id: 278 */
                        int32_t l_884 = 3L;
                        int64_t *l_885[5][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        uint32_t l_893 = 4294967295UL;
                        uint32_t *l_921[1];
                        uint64_t *l_927 = (void*)0;
                        uint64_t *l_928 = &l_787[0][3][3];
                        int32_t l_930[5][9];
                        union U1 *l_935 = &l_307;
                        union U1 **l_936 = &l_934;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_921[i] = &p_1050->g_922;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_930[i][j] = 0x044A063FL;
                        }
                        l_828 = (((VECTOR(int16_t, 8))(p_1050->g_872.yyyyyxxy)).s7 <= (safe_lshift_func_int16_t_s_s(((*l_66) = ((1L ^ (((((VECTOR(int8_t, 16))(0x25L, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(0x11L, 0L)).yxxyxyyy, (int8_t)(safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 2))(l_877.wx)).hi <= (safe_add_func_int16_t_s_s(((*l_789) &= ((void*)0 != &p_1050->g_92)), 1UL))), (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_852), l_865[3])) > l_884), (+((*p_1050->g_393) = (0x1DE41C9BECFE3A22L ^ (p_1050->g_comm_values[p_1050->tid] |= (l_886 = (((*l_819) = (l_866[6] == p_1050->g_38.s5)) == l_788.z))))))))))))), l_768.y, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 4))(0x42L)))).s0 , (-9L)) & (*l_852)) ^ l_887)) ^ 0x4498A994CDAE0A21L)), 11)));
                        (*l_852) = (((*p_1050->g_393) <= ((l_820 &= (((safe_div_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(l_892.x, l_893)) | ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1050->g_894.xx)).xyxx)).even)).even) || (((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(p_1050->g_897.yyyyyxyyxxxxyxyy)).sf677, ((VECTOR(int8_t, 4))(l_898.s7351))))).x, 4)) >= p_1050->g_67[0]) == (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((*l_703), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((*l_784) = ((((l_865[4] = (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_917.s4a)).yyyyxyxx)))).s3, (l_918[0][6] != (void*)0)))) != ((VECTOR(uint64_t, 2))(l_919.sda)).lo) >= (((((p_1050->g_922 |= ((VECTOR(uint32_t, 8))(l_920.xxzzzwww)).s0) , (void*)0) != (((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (((*l_928) = ((*l_757) = ((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 2)) <= (((*l_703) & l_866[6]) & (-1L))))) , 0x4147BD00L))) ^ 0xA3CCL) , &p_1050->g_119)) & 0x8CL) | GROUP_DIVERGE(2, 1))) | l_788.w)) , l_787[3][1][5]) != p_1050->g_547.y), 3)), p_1050->g_119)), 1)), l_893)))), GROUP_DIVERGE(0, 1))), 1)), 0x0017L)))), 0xFC82719460BB61DEL)) != l_884) & l_892.x)) <= 0x457B6E4AA155DA95L)) || 0x42892EF65F769687L);
                        ++l_931;
                        (*l_936) = (l_935 = l_934);
                    }
                }
            }
            ++l_955;
        }
        else
        { /* block id: 300 */
            int16_t l_958 = 0x5E05L;
            return l_958;
        }
        for (l_307.f2 = 24; (l_307.f2 >= 49); l_307.f2 = safe_add_func_int64_t_s_s(l_307.f2, 4))
        { /* block id: 305 */
            union U1 **l_965[8][5] = {{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934},{&l_934,&l_934,&l_934,&l_934,&l_934}};
            int32_t l_967 = (-8L);
            int8_t *l_968 = &p_1050->g_306;
            uint16_t *l_980 = (void*)0;
            uint16_t *l_981 = &p_1050->g_830.f1;
            int i, j;
            atomic_add(&p_1050->l_atomic_reduction[0], (l_788.z < (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((**p_1050->g_750), (&p_1050->g_830 == (l_966 = l_934)))), (((*l_981) = (+((((*l_968) &= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, 0L)), 7L, (-6L), 0x54L, l_967, (-1L), 0x6AL)).s7) < ((safe_lshift_func_int16_t_s_u((((VECTOR(int16_t, 8))(l_971.s2f716808)).s2 <= l_972), (--(**p_1050->g_212)))) || ((((VECTOR(int64_t, 16))(p_1050->g_975.s6b3890235f36739c)).s1 < (safe_add_func_uint64_t_u_u((l_307 , ((*p_1050->g_393) <= (l_813 != &l_968))), 18446744073709551609UL))) , l_967))) != 0x46779C00C3CAD83FL))) , l_788.z)))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1050->v_collective += p_1050->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    else
    { /* block id: 312 */
        VECTOR(int64_t, 16) l_985 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x52AB47F78B77A554L), 0x52AB47F78B77A554L), 0x52AB47F78B77A554L, 0L, 0x52AB47F78B77A554L, (VECTOR(int64_t, 2))(0L, 0x52AB47F78B77A554L), (VECTOR(int64_t, 2))(0L, 0x52AB47F78B77A554L), 0L, 0x52AB47F78B77A554L, 0L, 0x52AB47F78B77A554L);
        VECTOR(int32_t, 2) l_987 = (VECTOR(int32_t, 2))((-1L), 1L);
        VECTOR(int32_t, 8) l_990 = (VECTOR(int32_t, 8))(0x10DD08E4L, (VECTOR(int32_t, 4))(0x10DD08E4L, (VECTOR(int32_t, 2))(0x10DD08E4L, 0L), 0L), 0L, 0x10DD08E4L, 0L);
        VECTOR(uint32_t, 4) l_992 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7233A9A2L), 0x7233A9A2L);
        union U1 *l_997 = &p_1050->g_830;
        VECTOR(int32_t, 16) l_998 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7B6921A6L), 0x7B6921A6L), 0x7B6921A6L, 1L, 0x7B6921A6L, (VECTOR(int32_t, 2))(1L, 0x7B6921A6L), (VECTOR(int32_t, 2))(1L, 0x7B6921A6L), 1L, 0x7B6921A6L, 1L, 0x7B6921A6L);
        VECTOR(int16_t, 16) l_1015 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 7L), 7L), 7L, 0L, 7L, (VECTOR(int16_t, 2))(0L, 7L), (VECTOR(int16_t, 2))(0L, 7L), 0L, 7L, 0L, 7L);
        uint32_t l_1025 = 0x62AB7783L;
        int8_t *l_1026 = (void*)0;
        int8_t *l_1027 = &l_786[4];
        int32_t *l_1028 = (void*)0;
        uint16_t l_1029[8];
        int i;
        for (i = 0; i < 8; i++)
            l_1029[i] = 0x84E7L;
        p_1050->g_119 ^= ((*l_703) , (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((*l_703), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(p_1050->g_790, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1050->g_984.s72)))), 0L)).xxzwzyxzxxxxxyzw, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(l_985.s0900)).zwwzwxyxxzzwyxyy, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1050->g_986.yz)))).yxyy)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_987.xyxyyxxx)).s53, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_988.s23140702)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 9L)).xyxx)))), ((VECTOR(int32_t, 2))(l_989.xy)), (-7L), (-1L))).s7, ((VECTOR(int32_t, 2))(0x478D832AL, 0x7E43BC5AL)), 0x510E7D1CL, 0L, ((VECTOR(int32_t, 2))(l_990.s73)), 0x4A3FFF3DL)).s5, 0L, 0x0D7B0AC6L, (-1L), ((VECTOR(int32_t, 4))(p_1050->g_991.zyzz)), 0x5DC57A64L, (((*l_703) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((((((l_985.sa , (*p_1050->g_393)) <= (*p_1050->g_311)) >= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(l_992.wy)).xxxxyyyxyxyyyyyy))).odd)).s4 , (safe_sub_func_int32_t_s_s((p_1050->g_830 , (safe_add_func_int32_t_s_s(((*l_703) = ((l_997 == &p_1050->g_830) <= l_990.s1)), 2L))), l_985.s6)))) >= l_987.y) > 251UL), (-5L), 6L, 0x243D4E36FB3FA439L)).zwyxwwzyzxxyxzyw)).se) | p_1050->g_405.s1), p_1050->g_894.x, (*l_703), 0x24830E19L, (*l_703), 3L, 0x5BC148E2L)).s76, ((VECTOR(int32_t, 2))((-1L)))))), 0x0A2E647CL, (*l_703), 0x06D07A89L, 0x275E804AL, ((VECTOR(int32_t, 2))(0x09CCB58AL)), ((VECTOR(int32_t, 2))((-6L))), 0x64DE2AD0L, 0x63A7C117L)).s9aad, ((VECTOR(uint32_t, 4))(0x115735D4L))))).ywyyzzzwzxwwywyx))).s33)), ((VECTOR(int64_t, 2))(0x2859291467629C9FL)), ((VECTOR(int64_t, 2))(0x08FC598CFCE03F90L))))).yxxxxyxyxyyyyyxx))).odd)), 0L, ((VECTOR(int64_t, 2))(5L)), ((VECTOR(int64_t, 2))(0x3FC87AD4039BB5ECL)), 0x67542C87BF700747L, 0x227271D247F5386BL)).even)).odd, ((VECTOR(int64_t, 4))(0x746CC27E5F211259L))))).hi, ((VECTOR(int64_t, 2))(7L))))), ((VECTOR(int64_t, 2))(3L))))), ((VECTOR(int64_t, 4))(0x23F14CF037B95508L)), 8L)).hi)).yzzxxxxw, ((VECTOR(int64_t, 8))(8L))))).s5, p_1050->g_143.x)));
        (*l_703) = ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(1L, 6L)).yxyxyyxy, ((VECTOR(int32_t, 8))(l_998.s688ddfd1))))).s5;
        if ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_1050->g_1001.yxwx)).y, 6)))
        { /* block id: 316 */
            (*l_703) = l_987.y;
            return l_987.x;
        }
        else
        { /* block id: 319 */
            uint64_t * volatile * volatile l_1005 = &l_756;/* VOLATILE GLOBAL l_1005 */
            l_1005 = p_1050->g_1002;
        }
        l_1029[2] &= ((*l_703) = (!((safe_add_func_int16_t_s_s((*l_703), ((+GROUP_DIVERGE(0, 1)) | ((((*l_1027) = ((*l_703) != ((0L == ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((0L < (((VECTOR(uint32_t, 2))(0UL, 4UL)).even & ((*p_1050->g_393) ^= (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_1050->g_1013.yyyzyxyw)).s0, ((*l_757) = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 2))(0xC3C18D8D56E77265L, 0xF41405E4D5D25791L)).xxxxxxxyyxxyxyyy, ((VECTOR(uint64_t, 2))(l_1014.xx)).xyyxxxyyyxyxxxyx))).sf9)).odd)))))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(l_1015.sa64e6b2360711fbe)).hi, (int16_t)(*p_1050->g_79), (int16_t)l_1015.sb))).s46)).odd)) != (safe_mul_func_uint16_t_u_u((((&p_1050->g_922 == (void*)0) == (safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_mul_func_uint16_t_u_u(l_1024, 0x1D05L)) & FAKE_DIVERGE(p_1050->global_0_offset, get_global_id(0), 10)))), (*l_703)))) && (-1L)), 0x260FL)))) | l_1025))) | p_1050->g_829.f0) , 0L)))) | l_985.s0)));
    }
    for (l_972 = 0; (l_972 < 53); l_972++)
    { /* block id: 330 */
        uint32_t l_1047 = 4294967288UL;
        for (p_1050->g_119 = 0; (p_1050->g_119 >= (-14)); p_1050->g_119 = safe_sub_func_uint8_t_u_u(p_1050->g_119, 3))
        { /* block id: 333 */
            int32_t *l_1046 = (void*)0;
            (*l_703) = 0x1F00C319L;
            if ((atomic_inc(&p_1050->l_atomic_input[54]) == 3))
            { /* block id: 336 */
                int32_t l_1034 = (-4L);
                uint8_t l_1040 = 255UL;
                uint32_t l_1043 = 4294967286UL;
                int8_t l_1044 = 0x5AL;
                uint16_t l_1045[4][5][3] = {{{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL}},{{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL}},{{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL}},{{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL},{65535UL,0UL,4UL}}};
                int i, j, k;
                for (l_1034 = 0; (l_1034 != (-27)); l_1034 = safe_sub_func_uint32_t_u_u(l_1034, 9))
                { /* block id: 339 */
                    uint32_t l_1037[9] = {0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L,0x061935F6L};
                    int i;
                    l_1037[2]++;
                }
                l_1040++;
                l_1045[1][2][0] = (l_1043 , (l_1044 = 1L));
                unsigned int result = 0;
                result += l_1034;
                result += l_1040;
                result += l_1043;
                result += l_1044;
                int l_1045_i0, l_1045_i1, l_1045_i2;
                for (l_1045_i0 = 0; l_1045_i0 < 4; l_1045_i0++) {
                    for (l_1045_i1 = 0; l_1045_i1 < 5; l_1045_i1++) {
                        for (l_1045_i2 = 0; l_1045_i2 < 3; l_1045_i2++) {
                            result += l_1045[l_1045_i0][l_1045_i1][l_1045_i2];
                        }
                    }
                }
                atomic_add(&p_1050->l_special_values[54], result);
            }
            else
            { /* block id: 345 */
                (1 + 1);
            }
            --l_1047;
        }
    }
    return p_1050->g_975.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_311 p_1050->g_312 p_1050->g_119 p_1050->g_92
 * writes: p_1050->g_119 p_1050->g_92 p_1050->g_578 p_1050->g_312
 */
int32_t  func_2(uint8_t  p_3, struct S2 * p_1050)
{ /* block id: 213 */
    uint16_t l_705 = 0x013EL;
    int32_t l_710 = (-10L);
    int32_t l_715[4];
    int64_t l_716 = (-1L);
    int8_t *l_748 = &p_1050->g_306;
    int i;
    for (i = 0; i < 4; i++)
        l_715[i] = 0L;
    if ((*p_1050->g_311))
    { /* block id: 214 */
        return l_705;
    }
    else
    { /* block id: 216 */
        int32_t l_711 = 2L;
        int32_t l_712 = 0x608F7AB0L;
        int32_t l_713 = (-1L);
        int32_t l_714 = (-1L);
        int32_t l_717 = 2L;
        int32_t l_718 = 2L;
        int32_t l_719 = 0x51837F55L;
        int16_t l_720 = 1L;
        int32_t l_721 = 0x6FD63176L;
        int32_t l_722 = 0x16C2BF73L;
        int32_t l_723 = 0x721FC4A2L;
        uint64_t l_724 = 18446744073709551606UL;
        for (p_1050->g_119 = (-22); (p_1050->g_119 <= 29); p_1050->g_119++)
        { /* block id: 219 */
            int32_t *l_708 = (void*)0;
            int32_t *l_709[9];
            int32_t **l_727 = &l_709[3];
            int i;
            for (i = 0; i < 9; i++)
                l_709[i] = &p_1050->g_92;
            ++l_724;
            (*l_727) = (void*)0;
        }
    }
    if ((atomic_inc(&p_1050->g_atomic_input[65 * get_linear_group_id() + 48]) == 5))
    { /* block id: 225 */
        int32_t l_728[3][2][6] = {{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}}};
        int32_t *l_735 = &l_728[0][1][2];
        uint16_t l_740 = 65535UL;
        int i, j, k;
        for (l_728[0][1][2] = 0; (l_728[0][1][2] == (-3)); l_728[0][1][2] = safe_sub_func_uint16_t_u_u(l_728[0][1][2], 4))
        { /* block id: 228 */
            int16_t l_731 = 1L;
            uint32_t l_732 = 0UL;
            --l_732;
        }
        l_735 = (void*)0;
        for (l_728[0][1][2] = 23; (l_728[0][1][2] == 18); --l_728[0][1][2])
        { /* block id: 234 */
            int32_t l_739 = (-1L);
            int32_t *l_738 = &l_739;
            l_735 = l_738;
        }
        --l_740;
        unsigned int result = 0;
        int l_728_i0, l_728_i1, l_728_i2;
        for (l_728_i0 = 0; l_728_i0 < 3; l_728_i0++) {
            for (l_728_i1 = 0; l_728_i1 < 2; l_728_i1++) {
                for (l_728_i2 = 0; l_728_i2 < 6; l_728_i2++) {
                    result += l_728[l_728_i0][l_728_i1][l_728_i2];
                }
            }
        }
        result += l_740;
        atomic_add(&p_1050->g_special_values[65 * get_linear_group_id() + 48], result);
    }
    else
    { /* block id: 238 */
        (1 + 1);
    }
    for (p_1050->g_92 = 0; (p_1050->g_92 > (-12)); p_1050->g_92--)
    { /* block id: 243 */
        int8_t *l_745[9];
        int8_t **l_746 = &l_745[6];
        int8_t **l_747 = &p_1050->g_564;
        int32_t *l_749[9] = {&l_715[2],&l_715[0],&l_715[2],&l_715[2],&l_715[0],&l_715[2],&l_715[2],&l_715[0],&l_715[2]};
        int i;
        for (i = 0; i < 9; i++)
            l_745[i] = (void*)0;
        (*p_1050->g_311) = ((((l_748 = (p_1050->g_578 = ((*l_746) = l_745[6]))) == (void*)0) , (void*)0) == l_749[1]);
    }
    return l_715[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_311 p_1050->g_312
 * writes:
 */
uint8_t  func_4(uint64_t  p_5, int32_t  p_6, int16_t  p_7, uint8_t  p_8, int32_t  p_9, struct S2 * p_1050)
{ /* block id: 210 */
    uint32_t l_704 = 0x64543E6BL;
    p_6 |= (*p_1050->g_311);
    return l_704;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_92 p_1050->g_311 p_1050->g_312 p_1050->g_547 p_1050->g_284 p_1050->g_103 p_1050->g_220 p_1050->g_119
 * writes: p_1050->g_92 p_1050->g_119
 */
int32_t  func_12(int16_t  p_13, int64_t  p_14, union U1  p_15, int32_t  p_16, union U1  p_17, struct S2 * p_1050)
{ /* block id: 204 */
    int32_t *l_684 = &p_1050->g_92;
    int32_t *l_685 = &p_1050->g_119;
    int32_t *l_686 = (void*)0;
    int32_t *l_687 = &p_1050->g_92;
    int32_t *l_688[8][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    VECTOR(uint16_t, 2) l_689 = (VECTOR(uint16_t, 2))(0x455EL, 65534UL);
    uint32_t l_702 = 0UL;
    int i, j, k;
    ++l_689.x;
    (*l_687) &= p_14;
    (*l_685) ^= (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(9L, 0x0759L)).even, ((((safe_mod_func_uint16_t_u_u((5L && (safe_add_func_int32_t_s_s((*p_1050->g_311), p_1050->g_547.y))), (-5L))) < (safe_add_func_uint64_t_u_u((*l_687), (p_1050->g_284 , (0x4CL >= (((safe_mul_func_int16_t_s_s(((p_1050->g_103.s5 != ((p_1050->g_220.s7 , l_687) == (void*)0)) <= 0x2BE1L), 0x096EL)) >= 1L) || p_14)))))) < l_702) > 0x3F15L)));
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_284 p_1050->g_310 p_1050->g_311 p_1050->g_312 p_1050->g_37 p_1050->g_116 p_1050->g_240.f0 p_1050->g_79 p_1050->g_517 p_1050->g_119 p_1050->g_666 p_1050->g_177 p_1050->g_238 p_1050->g_161 p_1050->g_38 p_1050->g_393 p_1050->g_212 p_1050->g_213
 * writes: p_1050->g_479 p_1050->g_284 p_1050->g_116 p_1050->g_517 p_1050->g_240.f0 p_1050->g_200 p_1050->g_119 p_1050->g_312
 */
uint16_t  func_29(int64_t  p_30, uint32_t  p_31, int32_t  p_32, uint32_t  p_33, uint32_t  p_34, struct S2 * p_1050)
{ /* block id: 186 */
    uint8_t l_638[1];
    int32_t *l_661 = &p_1050->g_119;
    uint64_t *l_681 = &p_1050->g_200;
    int8_t *l_682[6] = {&p_1050->g_306,&p_1050->g_306,&p_1050->g_306,&p_1050->g_306,&p_1050->g_306,&p_1050->g_306};
    int i;
    for (i = 0; i < 1; i++)
        l_638[i] = 0xA2L;
    l_638[0] = 0L;
    for (p_33 = 0; (p_33 > 27); ++p_33)
    { /* block id: 190 */
        int32_t **l_641 = (void*)0;
        int32_t **l_642 = &p_1050->g_479;
        uint8_t *l_648 = (void*)0;
        uint8_t *l_649 = &p_1050->g_284;
        int32_t l_650 = 0x11BC4BA5L;
        int32_t *l_655 = &l_650;
        int32_t *l_660[6][2] = {{&p_1050->g_119,(void*)0},{&p_1050->g_119,(void*)0},{&p_1050->g_119,(void*)0},{&p_1050->g_119,(void*)0},{&p_1050->g_119,(void*)0},{&p_1050->g_119,(void*)0}};
        int i, j;
        (*l_642) = (void*)0;
        if (p_33)
            break;
        p_1050->g_517.x |= (safe_add_func_int64_t_s_s((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s(((*l_649) ^= 0x61L), 4)))) == (p_34 & (l_650 , (((*p_1050->g_79) = ((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_1050->local_2_offset, get_local_id(2), 10), ((251UL <= 0x7FL) , (((((*l_655) &= (**p_1050->g_310)) < ((safe_add_func_int64_t_s_s((p_34 ^ (~p_1050->g_37.s2)), ((safe_mod_func_int64_t_s_s(p_34, p_1050->g_116)) || l_638[0]))) < p_34)) ^ p_31) ^ l_638[0])))) != p_1050->g_240.f0)) == 0UL)))) != 0UL), p_34));
        (*l_642) = l_661;
    }
    (*p_1050->g_311) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((*p_1050->g_79), ((*l_661) , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 4))(p_1050->g_666.s7627)), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(0x5CADL, 0x031DL)).yxyxyyxy))).even, (int16_t)(((*l_661) = (safe_sub_func_int64_t_s_s((p_1050->g_177.x ^ (safe_sub_func_uint32_t_u_u((((((FAKE_DIVERGE(p_1050->group_1_offset, get_group_id(1), 10) <= ((*l_681) = (((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10) < p_1050->g_238.x) | (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((*p_1050->g_393) |= ((p_1050->g_161 != ((void*)0 == &p_1050->g_283)) ^ p_1050->g_38.s0)), (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((-8L), p_1050->g_238.y)), FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10))))), p_34)), 3))), ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0x18L)), ((VECTOR(uint8_t, 2))(255UL)), 255UL)), ((VECTOR(uint8_t, 8))(254UL))))).s1 | (*p_1050->g_79)))) | (*p_1050->g_79)) & (*l_661)) < p_34) >= p_31), p_30))), 1L))) || p_32)))), 0x0C2BL, 1L, 0x0D94L, 0x70C0L, (*l_661), 0x224DL, 0L)).odd)).s1))), 12));
    return (**p_1050->g_212);
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_283 p_1050->g_393 p_1050->g_240.f0 p_1050->g_479 p_1050->g_220 p_1050->g_79 p_1050->g_116 p_1050->g_95 p_1050->g_comm_values p_1050->g_119 p_1050->g_37 p_1050->g_133 p_1050->g_103 p_1050->g_92 p_1050->g_38 p_1050->g_212 p_1050->g_213 p_1050->g_161 p_1050->g_599 p_1050->g_311 p_1050->g_312 p_1050->g_291 p_1050->g_143
 * writes: p_1050->g_116 p_1050->g_119 p_1050->g_133 p_1050->g_92 p_1050->g_214 p_1050->g_37 p_1050->g_79 p_1050->g_479 p_1050->g_240.f0 p_1050->g_143 p_1050->g_312
 */
int8_t  func_39(uint64_t  p_40, int32_t  p_41, int64_t  p_42, struct S2 * p_1050)
{ /* block id: 165 */
    uint32_t *l_580 = &p_1050->g_240.f0;
    uint32_t **l_581 = (void*)0;
    uint32_t **l_582 = &l_580;
    uint64_t l_587 = 0x0C1BA8C0FF477542L;
    int32_t l_588 = 1L;
    VECTOR(int8_t, 2) l_591 = (VECTOR(int8_t, 2))(0x0DL, 0x51L);
    VECTOR(uint64_t, 8) l_592 = (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 1UL), 1UL), 1UL, 5UL, 1UL);
    int8_t *l_596 = (void*)0;
    uint64_t *l_597 = &l_587;
    int32_t *l_598[6];
    int32_t l_608 = 0x42997800L;
    int32_t l_609 = 0x7C9B06F9L;
    int32_t l_610[3][8] = {{1L,4L,1L,1L,4L,1L,1L,4L},{1L,4L,1L,1L,4L,1L,1L,4L},{1L,4L,1L,1L,4L,1L,1L,4L}};
    uint64_t l_633 = 1UL;
    int32_t l_636 = 1L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_598[i] = &p_1050->g_61;
    (*p_1050->g_599) = func_68((((*l_597) = (((((*l_582) = l_580) != (((safe_rshift_func_uint8_t_u_s(0x52L, (safe_mod_func_uint8_t_u_u(p_40, (l_588 = l_587))))) == ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(l_591.yy)).xyxxxyyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-4L), 0x79L)))).yyxx)).ywwwyzzy))).s3652332544406701))).s3, ((((VECTOR(uint64_t, 16))(l_592.s0213366577634716)).sc <= ((4294967295UL && (safe_sub_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(((((p_41 , &p_1050->g_306) != l_596) < l_591.x) || l_592.s4))), l_591.x))) > p_1050->g_283)) ^ (*p_1050->g_393)))) != 0x6E0A3F0968E08BA0L)) , p_1050->g_479)) || p_41) || p_1050->g_220.sf)) , p_40), l_598[2], p_41, (*p_1050->g_79), &p_1050->g_61, p_1050);
    for (p_1050->g_240.f0 = 0; (p_1050->g_240.f0 < 52); p_1050->g_240.f0 = safe_add_func_uint32_t_u_u(p_1050->g_240.f0, 5))
    { /* block id: 172 */
        int32_t **l_602 = &p_1050->g_479;
        int32_t l_603 = 9L;
        int32_t l_607[4][5][4] = {{{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL}},{{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL}},{{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL}},{{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL},{(-3L),0L,(-1L),0x485E88BBL}}};
        uint8_t l_611 = 6UL;
        int32_t l_632[2][3][7] = {{{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L},{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L},{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L}},{{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L},{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L},{0x7E560529L,0x67B03644L,0x10805F7BL,0x67B03644L,0x7E560529L,0x7E560529L,0x67B03644L}}};
        int i, j, k;
        (*l_602) = (void*)0;
        if ((p_40 , (*p_1050->g_311)))
        { /* block id: 174 */
            int32_t *l_604 = &l_588;
            int32_t *l_605 = (void*)0;
            int32_t *l_606[10];
            uint8_t *l_614 = (void*)0;
            uint8_t *l_615 = (void*)0;
            int16_t **l_616 = &p_1050->g_79;
            int i;
            for (i = 0; i < 10; i++)
                l_606[i] = (void*)0;
            l_611--;
            (*l_602) = func_68(p_1050->g_291.s2, ((FAKE_DIVERGE(p_1050->global_1_offset, get_global_id(1), 10) , ((p_1050->g_143.y &= p_41) >= ((void*)0 == &l_606[4]))) , &p_1050->g_61), ((((*l_604) |= (l_591.x & p_1050->g_92)) , l_616) == (void*)0), (*p_1050->g_79), &p_1050->g_61, p_1050);
            (*p_1050->g_311) &= 0x28FCF7C1L;
            if ((*p_1050->g_311))
                break;
        }
        else
        { /* block id: 181 */
            int32_t *l_617 = &l_607[3][0][3];
            int32_t *l_618 = &l_603;
            int32_t *l_619 = &l_609;
            int32_t *l_620 = &p_1050->g_92;
            int32_t *l_621 = (void*)0;
            int32_t *l_622 = (void*)0;
            int32_t *l_623 = &l_607[2][1][2];
            int32_t *l_624 = &l_608;
            int32_t *l_625 = &l_610[0][6];
            int32_t *l_626 = &l_610[2][1];
            int32_t *l_627 = &l_588;
            int32_t *l_628 = &p_1050->g_119;
            int32_t *l_629 = (void*)0;
            int32_t *l_630 = &p_1050->g_92;
            int32_t *l_631[2];
            int i;
            for (i = 0; i < 2; i++)
                l_631[i] = &p_1050->g_92;
            l_633++;
        }
    }
    return l_636;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_310 p_1050->g_103 p_1050->g_318 p_1050->g_325 p_1050->g_240.f0 p_1050->g_330 p_1050->g_284 p_1050->g_240 p_1050->g_67 p_1050->g_79 p_1050->g_116 p_1050->g_202 p_1050->g_283 p_1050->g_143 p_1050->l_comm_values p_1050->g_119 p_1050->g_200 p_1050->g_130 p_1050->g_92 p_1050->g_37 p_1050->g_238 p_1050->g_comm_values p_1050->g_213 p_1050->g_161 p_1050->g_392 p_1050->g_417 p_1050->g_38 p_1050->g_311 p_1050->g_312 p_1050->g_306 p_1050->g_458 p_1050->g_517 p_1050->g_61 p_1050->g_95.f0 p_1050->g_547 p_1050->g_109 p_1050->g_393
 * writes: p_1050->g_306 p_1050->g_284 p_1050->g_214 p_1050->g_116 p_1050->g_119 p_1050->g_200 p_1050->g_240.f0 p_1050->g_392 p_1050->g_61 p_1050->g_283 p_1050->g_161 p_1050->g_325 p_1050->g_92 p_1050->g_479 p_1050->g_312 p_1050->g_564 p_1050->g_578
 */
uint8_t  func_43(int16_t  p_44, uint32_t  p_45, int16_t  p_46, union U1  p_47, uint32_t  p_48, struct S2 * p_1050)
{ /* block id: 80 */
    int8_t *l_313 = &p_1050->g_306;
    int32_t l_319 = 0x40104E8EL;
    int32_t l_332 = (-5L);
    uint16_t **l_352 = &p_1050->g_213[7];
    uint16_t **l_362 = &p_1050->g_213[2];
    int32_t l_363 = 9L;
    VECTOR(uint8_t, 8) l_418 = (VECTOR(uint8_t, 8))(0xC7L, (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 0x0EL), 0x0EL), 0x0EL, 0xC7L, 0x0EL);
    uint16_t l_421[6][6][1] = {{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}}};
    VECTOR(int8_t, 8) l_460 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x43L), 0x43L), 0x43L, 6L, 0x43L);
    int8_t l_474 = 1L;
    uint16_t l_502 = 0x39F0L;
    VECTOR(int8_t, 4) l_543 = (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x08L), 0x08L);
    VECTOR(int8_t, 16) l_546 = (VECTOR(int8_t, 16))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, (-4L)), (-4L)), (-4L), 0x19L, (-4L), (VECTOR(int8_t, 2))(0x19L, (-4L)), (VECTOR(int8_t, 2))(0x19L, (-4L)), 0x19L, (-4L), 0x19L, (-4L));
    int8_t **l_563[3];
    uint8_t *l_565 = &p_1050->g_284;
    int8_t *l_569 = (void*)0;
    int32_t *l_579 = &p_1050->g_119;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_563[i] = (void*)0;
    if (((safe_rshift_func_uint8_t_u_s((0L >= ((void*)0 != p_1050->g_310)), 7)) < ((*l_313) = p_1050->g_103.s1)))
    { /* block id: 82 */
        uint64_t *l_324 = &p_1050->g_200;
        int32_t *l_329 = (void*)0;
        int32_t **l_328 = &l_329;
        int32_t *l_331 = (void*)0;
        uint8_t *l_337 = &p_1050->g_284;
        uint16_t ***l_353 = &p_1050->g_214[2];
        int16_t l_364 = (-2L);
        int32_t *l_365 = &p_1050->g_119;
        VECTOR(int8_t, 2) l_377 = (VECTOR(int8_t, 2))(0x22L, 0x49L);
        int32_t l_398 = 0x68CA4B29L;
        VECTOR(int64_t, 4) l_409 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-4L)), (-4L));
        VECTOR(int8_t, 16) l_419 = (VECTOR(int8_t, 16))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, (-1L)), (-1L)), (-1L), 0x43L, (-1L), (VECTOR(int8_t, 2))(0x43L, (-1L)), (VECTOR(int8_t, 2))(0x43L, (-1L)), 0x43L, (-1L), 0x43L, (-1L));
        VECTOR(int8_t, 4) l_420 = (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x01L), 0x01L);
        VECTOR(int16_t, 8) l_424 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L));
        uint32_t **l_445[8][10][3] = {{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}},{{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0},{&p_1050->g_393,(void*)0,(void*)0}}};
        VECTOR(uint32_t, 4) l_485 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 1UL), 1UL);
        uint32_t l_558 = 0x374A7284L;
        int i, j, k;
        l_332 |= (+(safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1050->global_0_offset, get_global_id(0), 10), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_1050->g_318.s63)), 1UL, 8UL)).y)), ((l_319 && (safe_div_func_int8_t_s_s((-7L), (safe_mul_func_uint8_t_u_u(p_46, ((void*)0 == l_324)))))) | ((0x22L ^ (((VECTOR(int32_t, 4))(p_1050->g_325.s2317)).y > (p_1050->g_240.f0 <= (safe_div_func_uint64_t_u_u(((l_328 == p_1050->g_330) , p_48), 0x58FC13AE100A9DAFL))))) > 0x6F7FA2E7622B3C93L)))));
        (*l_365) |= (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((VECTOR(int8_t, 2))(1L, 0x2DL)).even , ((*l_337) ^= p_46)), (safe_add_func_uint8_t_u_u(p_48, (+(safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_319, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_363 &= (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(((p_45 || (p_1050->g_240 , (l_352 == ((*l_353) = (void*)0)))) | ((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((p_1050->g_67[0] <= ((safe_mod_func_uint64_t_u_u((((*p_1050->g_79) = (safe_mod_func_uint16_t_u_u((p_48 <= 0L), 9UL))) || (*p_1050->g_79)), 1L)) <= p_47.f0)) || p_1050->g_202), 0x40L)), p_48)) | p_1050->g_283) & FAKE_DIVERGE(p_1050->local_0_offset, get_local_id(0), 10)) >= 0xE5BA5BDBBED55680L)), l_332)) , p_44) , l_352) != l_362), p_1050->g_143.y))) & 1L) != p_44), 1)), p_1050->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))])))), p_48))))))) , l_364), FAKE_DIVERGE(p_1050->local_1_offset, get_local_id(1), 10)));
        for (p_1050->g_200 = 0; (p_1050->g_200 <= 45); p_1050->g_200 = safe_add_func_int32_t_s_s(p_1050->g_200, 7))
        { /* block id: 91 */
            uint16_t *l_390[10];
            int32_t l_391[6] = {0L,0L,0L,0L,0L,0L};
            int16_t l_457 = (-1L);
            VECTOR(int8_t, 8) l_459 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x76L), 0x76L), 0x76L, 0x15L, 0x76L);
            VECTOR(int8_t, 2) l_482 = (VECTOR(int8_t, 2))(0x0AL, (-2L));
            VECTOR(uint32_t, 16) l_486 = (VECTOR(uint32_t, 16))(0xDF8FA979L, (VECTOR(uint32_t, 4))(0xDF8FA979L, (VECTOR(uint32_t, 2))(0xDF8FA979L, 0xB59C90DAL), 0xB59C90DAL), 0xB59C90DAL, 0xDF8FA979L, 0xB59C90DAL, (VECTOR(uint32_t, 2))(0xDF8FA979L, 0xB59C90DAL), (VECTOR(uint32_t, 2))(0xDF8FA979L, 0xB59C90DAL), 0xDF8FA979L, 0xB59C90DAL, 0xDF8FA979L, 0xB59C90DAL);
            VECTOR(uint8_t, 8) l_492 = (VECTOR(uint8_t, 8))(0xFFL, (VECTOR(uint8_t, 4))(0xFFL, (VECTOR(uint8_t, 2))(0xFFL, 0xA3L), 0xA3L), 0xA3L, 0xFFL, 0xA3L);
            VECTOR(uint8_t, 16) l_493 = (VECTOR(uint8_t, 16))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0UL), 0UL), 0UL, 0x73L, 0UL, (VECTOR(uint8_t, 2))(0x73L, 0UL), (VECTOR(uint8_t, 2))(0x73L, 0UL), 0x73L, 0UL, 0x73L, 0UL);
            int32_t l_516 = 0x6C623C0EL;
            int8_t *l_556 = (void*)0;
            int8_t *l_557 = (void*)0;
            int i;
            for (i = 0; i < 10; i++)
                l_390[i] = &p_1050->g_161;
            for (p_44 = 25; (p_44 <= 8); --p_44)
            { /* block id: 94 */
                int32_t *l_370[6] = {&l_332,&l_332,&l_332,&l_332,&l_332,&l_332};
                int32_t **l_371 = &l_365;
                uint32_t *l_374 = &p_1050->g_240.f0;
                VECTOR(uint32_t, 8) l_406 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967295UL, 4294967290UL);
                int i;
                if (p_47.f0)
                    break;
                (*l_371) = l_370[5];
                if (((safe_mod_func_int8_t_s_s((((*l_374) = 0x071E49ECL) | ((p_1050->g_130 <= FAKE_DIVERGE(p_1050->global_2_offset, get_global_id(2), 10)) > ((((p_47.f0 ^ (((((((safe_lshift_func_int8_t_s_u((p_1050->g_306 = ((VECTOR(int8_t, 4))(l_377.xyyy)).x), 0)) && (p_1050->g_325.s4 & p_1050->g_92)) & ((*l_337) ^= (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(1UL, 0L)), 6)), ((*p_1050->g_79) = (p_46 ^ (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_1050->g_202, p_1050->g_37.s7)), 0xE8L)))))) | GROUP_DIVERGE(2, 1)), 0x717DL)))) != p_46) , 0x49833553L) , l_390[9]) != (void*)0)) > p_1050->g_325.s5) , l_391[3]) || p_47.f0))), p_1050->g_92)) != p_45))
                { /* block id: 101 */
                    int32_t l_396 = 1L;
                    int32_t l_397[5];
                    VECTOR(int64_t, 4) l_412 = (VECTOR(int64_t, 4))(0x01DD4F0D93EFC1DEL, (VECTOR(int64_t, 2))(0x01DD4F0D93EFC1DEL, 0x3FA797A1178A45FEL), 0x3FA797A1178A45FEL);
                    uint32_t l_437[9][3][2] = {{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}},{{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL},{0x0F76DA6CL,4294967295UL}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_397[i] = (-1L);
                    p_1050->g_392 = &l_374;
                    for (p_1050->g_61 = (-1); (p_1050->g_61 == 12); p_1050->g_61++)
                    { /* block id: 105 */
                        uint32_t l_399[4];
                        uint8_t l_402[10][7] = {{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL},{0x5DL,0UL,255UL,255UL,0xE6L,0xE6L,255UL}};
                        int64_t *l_438 = (void*)0;
                        int64_t *l_439 = (void*)0;
                        int64_t *l_440 = &p_1050->g_283;
                        VECTOR(int8_t, 4) l_456 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
                        uint64_t *l_475 = &p_1050->g_202;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_399[i] = 4294967294UL;
                        --l_399[3];
                        if (l_402[9][5])
                            continue;
                        p_1050->g_119 |= (safe_add_func_int8_t_s_s((((VECTOR(int32_t, 8))(p_1050->g_405.s17577002)).s6 & (((((VECTOR(uint32_t, 16))(l_406.s0633570216143727)).sc >= ((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_409.zw)).yxyxyxxxyyyyxxyx)).s8, (safe_rshift_func_uint8_t_u_u((((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(l_412.xx)).xyxyyyxyyyxxyxyx, ((VECTOR(int64_t, 4))(((**p_1050->g_212) & l_391[4]), (~((void*)0 == &l_391[3])), 1L, (-1L))).zzyzyzzyyzxzwyyz))).se , (safe_div_func_int64_t_s_s(((*l_440) = (((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1050->g_417.yxxyxxyx)).hi)).odd, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(2UL, 1UL)).yxyyyyyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_418.s01005510)).hi)).wyxwxxxx))).s05))).xyyyyxyy)))).odd)).zyxwyxxx)).hi)).w, (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(l_419.sfaea)).even, (int8_t)p_1050->g_200))))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_420.xyxzwwwy)))).s05)), l_421[3][2][0], 0x5AL, ((VECTOR(int8_t, 2))(0x02L, 0x77L)), (-7L), ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_424.s2626571473742764)).sd, 11)) >= (safe_div_func_int32_t_s_s(((l_437[2][2][0] = ((~((((**p_1050->g_392) == ((l_319 = ((*l_337) = (safe_add_func_int16_t_s_s(((*p_1050->g_79) = (safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_48, 3)) && (safe_mod_func_uint8_t_u_u((p_1050->g_220.sf = 0x8AL), l_399[3]))), 4L)) & 0x1B811212L)))), FAKE_DIVERGE(p_1050->global_2_offset, get_global_id(2), 10))))) != p_44)) <= p_1050->g_325.s6) | p_1050->g_comm_values[p_1050->tid])) ^ 0x53166E13537D2407L)) && 1UL), p_44))), p_1050->g_161, 0x2FL, ((VECTOR(int8_t, 4))(7L)))).sd && p_47.f0))) ^ l_412.x) , p_45)), l_391[5]))), 7)))) < p_1050->g_238.x)) & p_1050->g_comm_values[p_1050->tid]) || GROUP_DIVERGE(1, 1))), p_46));
                        p_1050->g_325.s3 ^= (safe_mod_func_uint16_t_u_u(((**l_352)++), ((l_445[3][8][1] != ((~p_46) , &p_1050->g_393)) ^ (safe_sub_func_int64_t_s_s(((++(**p_1050->g_392)) > ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_1050->g_417.y, 6)), 5)), ((((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_456.wzww)).lo)), (-5L), (-3L))).xxxyxyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x56L, (-1L), l_457, ((VECTOR(int8_t, 2))(p_1050->g_458.s3b)), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(l_459.s5737337505207557)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x53L, 0x1DL, ((VECTOR(int8_t, 2))(l_460.s23)), ((VECTOR(int8_t, 4))((((*l_475) = (((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_46, (safe_mul_func_uint8_t_u_u(p_1050->g_38.s3, ((l_402[9][5] == (p_48 = (safe_sub_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(p_1050->g_471.yyxxyyxxxxyxyxyx)).s4, (safe_lshift_func_int8_t_s_s((0xB4131A00L < 4294967293UL), l_402[2][1])))) < p_1050->g_92) != p_45), p_1050->g_103.s6)))) < l_460.s4))))), (-5L))) , p_1050->g_37.s6) < l_474)) & 0x5C3BA326F1AB0378L), ((VECTOR(int8_t, 2))(0x0FL)), 3L)), ((VECTOR(int8_t, 2))(0L)), p_1050->g_238.y, p_1050->g_220.s2, ((VECTOR(int8_t, 4))(0L)))))).lo, ((VECTOR(int8_t, 8))((-9L)))))).s0162565044106411, ((VECTOR(int8_t, 16))(1L))))).odd, ((VECTOR(int8_t, 8))((-2L)))))).s37, ((VECTOR(int8_t, 2))(6L))))), (-1L))).s76)).yyyxxyxy, ((VECTOR(int8_t, 8))(0x7EL))))).s15, ((VECTOR(int8_t, 2))(2L))))).lo , p_44) <= 0x0FL))) >= 0x00396A66L)), p_1050->g_38.s3)))));
                    }
                    for (p_1050->g_92 = 16; (p_1050->g_92 < 4); p_1050->g_92 = safe_sub_func_uint16_t_u_u(p_1050->g_92, 8))
                    { /* block id: 123 */
                        int32_t *l_478 = (void*)0;
                        (*l_371) = (void*)0;
                        (*l_371) = l_478;
                        p_1050->g_479 = (*l_371);
                    }
                    if ((atomic_inc(&p_1050->g_atomic_input[65 * get_linear_group_id() + 55]) == 7))
                    { /* block id: 129 */
                        uint32_t l_480 = 0UL;
                        int32_t l_481 = 3L;
                        l_481 = l_480;
                        unsigned int result = 0;
                        result += l_480;
                        result += l_481;
                        atomic_add(&p_1050->g_special_values[65 * get_linear_group_id() + 55], result);
                    }
                    else
                    { /* block id: 131 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 134 */
                    (*p_1050->g_311) &= l_391[2];
                }
            }
            for (p_1050->g_306 = (-24); (p_1050->g_306 > (-26)); --p_1050->g_306)
            { /* block id: 143 */
                uint32_t l_491 = 1UL;
                VECTOR(int32_t, 4) l_515 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x2493751AL), 0x2493751AL);
                uint16_t l_528 = 0x8975L;
                int i;
                if ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0x56L, 1UL, l_491, 0x92L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_492.s4751)).even)).yxxyxxyy, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(l_493.sa67a99abb8a98eee)).lo)))))).s15)), 6UL, 0x66L)), ((*l_337) = p_1050->g_458.s6), (((p_1050->g_240 , (l_391[3] >= (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_363, (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-7L), (l_502 | p_47.f0))), (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_516 = ((VECTOR(int32_t, 4))(l_515.zyzy)).z), ((VECTOR(int32_t, 8))(0x798790C8L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(p_1050->g_517.yxxxyxyx)).s73))), (l_486.sa , 0x7A952450L), ((VECTOR(int32_t, 4))(0x7017572EL)))).s2)), 0x1AL)), 7UL)) >= 1L) == (*p_1050->g_311)), p_47.f0)), l_492.s3)), p_1050->g_283)))))), p_1050->g_61)))) == (*p_1050->g_79)) & l_482.y), 0x12L, 0xACL, p_1050->g_95[6].f0, p_1050->g_119, 1UL, 248UL)).s4, l_474)))
                { /* block id: 146 */
                    if ((**p_1050->g_310))
                        break;
                }
                else
                { /* block id: 148 */
                    int32_t *l_518 = &p_1050->g_119;
                    int32_t *l_519 = (void*)0;
                    int32_t *l_520 = &l_332;
                    int32_t *l_521 = &p_1050->g_119;
                    int32_t *l_522 = &p_1050->g_92;
                    int32_t *l_523 = &p_1050->g_92;
                    int32_t *l_524 = &l_398;
                    int32_t *l_525 = (void*)0;
                    int32_t *l_526 = &l_516;
                    int32_t *l_527[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_527[i] = &p_1050->g_92;
                    l_528--;
                    (*l_518) = 0x434E24FDL;
                }
            }
            if (p_44)
                break;
            (*p_1050->g_311) = (safe_add_func_int32_t_s_s(((void*)0 != &p_1050->g_213[2]), ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((safe_mul_func_uint16_t_u_u(((((((func_50((~((VECTOR(uint64_t, 16))(0x3125B7EC48A71198L, p_1050->g_318.s1, ((VECTOR(uint64_t, 2))(0xB344B1F34522C803L, 7UL)), ((safe_add_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_543.yzyzyyxzzzzyyyyw)))), (int8_t)(p_1050->g_306 ^ (0x7A307D2086DE3C41L && (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_546.sc9d030717aa6ca4f)).s18, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1050->g_547.yxxyyxyx)).s75)), ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(0x0BL, 0x7BL)).yxxy))).wwxxzwzy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(0x35FD4228BDBAABDBL, 18446744073709551607UL)), p_1050->g_92)), (safe_div_func_int8_t_s_s((l_516 &= 0x3EL), p_1050->g_458.s5)))), 6L, (-1L), 0x7CL)).yywxwyzzwzyyywzz, ((VECTOR(int8_t, 16))(1L)), ((VECTOR(int8_t, 16))(0L))))).s7bad)).zxywxywz))).s5252046162206740, ((VECTOR(int8_t, 16))((-6L)))))).s8b)))))).hi, l_319))))))).s35)).hi, p_48)) , &p_1050->g_133[0][0][0]) != (void*)0) , 0x42L), 1UL)) || p_44), 0xEE2123EA2842536FL, ((VECTOR(uint64_t, 2))(0x277F98B9E5D6C404L)), ((VECTOR(uint64_t, 4))(0x2F6E7D603B471333L)), GROUP_DIVERGE(2, 1), 18446744073709551615UL, 0xFA4201D22E258E49L, 0x63C297416A418F1DL)).s3), p_1050->g_325.s5, p_1050) , l_332) < 0x356D4231F455A96EL) , p_45) , FAKE_DIVERGE(p_1050->group_1_offset, get_group_id(1), 10)) && p_45) , 0xAE45L), GROUP_DIVERGE(1, 1))) && 0L), FAKE_DIVERGE(p_1050->group_0_offset, get_group_id(0), 10), ((VECTOR(uint8_t, 4))(255UL)), 1UL, 0x60L)))).s0, l_558)), (*p_1050->g_79))) <= p_1050->g_37.s7)));
        }
    }
    else
    { /* block id: 157 */
        return l_363;
    }
    (*l_579) &= ((VECTOR(int32_t, 8))((!(safe_rshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((p_1050->g_564 = &l_474) == (p_1050->g_578 = (((((*l_565) &= p_46) , (safe_unary_minus_func_int64_t_s(((((!p_46) < ((safe_rshift_func_uint8_t_u_s(((((&p_1050->g_306 == l_569) < (((safe_sub_func_int16_t_s_s((*p_1050->g_79), (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((&p_1050->g_306 == (void*)0) | (safe_mod_func_uint8_t_u_u(l_502, p_48))) > (*p_1050->g_79)), l_460.s5)), p_47.f0)))) > 1UL) == p_1050->g_109.se)) > p_44) , l_418.s0), p_48)) || 0xD74BL)) && l_546.sc) > 0x6B5D7D16L)))) == (*p_1050->g_393)) , &p_1050->g_306))), l_502)) & p_1050->g_458.se) | p_48), 5))), 0x7EE25211L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x69C53EB0L)), 0x2E6B7442L, 0x30C65D66L)).s4;
    return p_1050->g_143.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_284 p_1050->g_291 p_1050->g_comm_values p_1050->g_119 p_1050->g_61 p_1050->g_143 p_1050->g_116 p_1050->g_92 p_1050->g_240
 * writes: p_1050->g_284 p_1050->g_240.f0 p_1050->g_306 p_1050->g_92
 */
union U0  func_50(uint64_t  p_51, int64_t  p_52, struct S2 * p_1050)
{ /* block id: 74 */
    int32_t *l_278 = &p_1050->g_92;
    int32_t *l_279 = &p_1050->g_119;
    VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))(0x3A769291L, (VECTOR(int32_t, 2))(0x3A769291L, 0L), 0L);
    int32_t *l_281 = &p_1050->g_119;
    int32_t *l_282[1][8];
    int32_t *l_299 = &p_1050->g_61;
    int32_t **l_298 = &l_299;
    int64_t *l_300[10] = {&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283,&p_1050->g_283};
    uint32_t *l_303 = &p_1050->g_240.f0;
    uint32_t *l_304 = (void*)0;
    uint32_t *l_305[3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_282[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_305[i] = (void*)0;
    ++p_1050->g_284;
    p_1050->g_92 ^= (7UL || (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((VECTOR(int16_t, 16))(p_1050->g_291.s9cd686306a98a280)).sa > FAKE_DIVERGE(p_1050->group_1_offset, get_group_id(1), 10)), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((FAKE_DIVERGE(p_1050->local_1_offset, get_local_id(1), 10) || ((p_51 || (p_1050->g_306 = ((*l_303) = (p_1050->g_comm_values[p_1050->tid] != ((((((void*)0 != l_298) , l_300[1]) == (void*)0) | (((safe_sub_func_uint32_t_u_u((((&p_51 == l_300[1]) | (*l_279)) ^ p_1050->g_61), p_52)) , p_1050->g_comm_values[p_1050->tid]) <= 0xA622EBD0L)) & p_1050->g_143.w))))) >= 18446744073709551615UL)), p_1050->g_116)) && (-9L)), 9)))), p_52)));
    return p_1050->g_240;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->l_comm_values p_1050->g_67 p_1050->g_95 p_1050->g_103 p_1050->g_comm_values p_1050->g_109 p_1050->g_95.f0 p_1050->g_92 p_1050->g_119 p_1050->g_37 p_1050->g_116 p_1050->g_133 p_1050->g_177 p_1050->g_143 p_1050->g_202 p_1050->g_38 p_1050->g_212 p_1050->g_220 p_1050->g_213 p_1050->g_161 p_1050->g_238 p_1050->g_240 p_1050->g_61 p_1050->g_200 p_1050->g_240.f0
 * writes: p_1050->g_79 p_1050->g_116 p_1050->g_119 p_1050->g_133 p_1050->g_92 p_1050->g_200 p_1050->g_202 p_1050->g_38 p_1050->g_214 p_1050->g_37 p_1050->g_67
 */
int64_t  func_54(uint8_t  p_55, int32_t  p_56, int64_t  p_57, int16_t  p_58, struct S2 * p_1050)
{ /* block id: 7 */
    union U1 l_74[9] = {{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L},{0x07742427L}};
    VECTOR(int16_t, 4) l_75 = (VECTOR(int16_t, 4))(0x60D3L, (VECTOR(int16_t, 2))(0x60D3L, 0x4BAFL), 0x4BAFL);
    int16_t *l_76 = &p_1050->g_67[5];
    VECTOR(int8_t, 4) l_80 = (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0x73L), 0x73L);
    uint16_t *l_85 = &l_74[4].f2;
    uint16_t *l_86 = &l_74[4].f2;
    uint16_t *l_87 = &l_74[4].f2;
    int32_t l_88 = 1L;
    int32_t *l_89 = &p_1050->g_61;
    uint8_t l_90 = 0xEFL;
    int32_t **l_247 = (void*)0;
    int32_t *l_249 = &p_1050->g_92;
    int32_t **l_248 = &l_249;
    int32_t *l_250[9] = {&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88,&l_88};
    int32_t l_251 = 0x7E961C6CL;
    int32_t l_252 = 0x6FD1BF65L;
    uint16_t l_253 = 0x1838L;
    uint64_t *l_260 = &p_1050->g_200;
    int64_t l_263 = 0x3A211ECB1D280DFAL;
    int i;
    (*l_248) = func_68(((l_74[4] , 4UL) || (((VECTOR(int16_t, 2))(l_75.xx)).even | (((((l_76 != ((safe_add_func_int16_t_s_s((p_1050->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))] != l_75.w), p_55)) , (p_1050->g_79 = &p_1050->g_67[5]))) , (+((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_80.xx)), 0x16L, 0x04L)).x)) | ((safe_add_func_int64_t_s_s(0L, (safe_rshift_func_int16_t_s_u(((((l_88 ^= 6UL) , l_88) == FAKE_DIVERGE(p_1050->local_2_offset, get_local_id(2), 10)) | (-8L)), 12)))) ^ p_58)) , GROUP_DIVERGE(2, 1)) <= GROUP_DIVERGE(0, 1)))), l_89, p_1050->g_67[5], l_90, l_89, p_1050);
    l_253++;
    (*l_249) = (safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((*l_260) ^= ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0UL, 4UL)), 0xD7481D7BF1BFE3D0L, 0xB6B238936EF0B126L)).w), p_55)) , (((l_74[3] = l_74[4]) , (safe_mul_func_uint8_t_u_u((+l_263), (p_1050->g_133[0][0][1] == (safe_div_func_uint64_t_u_u(p_58, (safe_div_func_uint32_t_u_u(p_56, ((0x90L >= 0x85L) || FAKE_DIVERGE(p_1050->group_0_offset, get_group_id(0), 10)))))))))) || ((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((*l_76) = ((!(safe_mod_func_uint8_t_u_u((!((safe_mul_func_int16_t_s_s((((p_1050->g_240.f0 , (**l_248)) || GROUP_DIVERGE(1, 1)) , (**l_248)), (*l_249))) > p_1050->g_177.x)), 1UL))) & p_57)), 3)) , 0x63DCF11FL), 0x5EA36B09L)), 2)) , 0xD4D35EB0D30FA18CL))), (-7L)));
    (*l_248) = (void*)0;
    return p_1050->g_240.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1050->g_95 p_1050->g_103 p_1050->g_comm_values p_1050->g_109 p_1050->g_95.f0 p_1050->g_92 p_1050->g_119 p_1050->g_37 p_1050->g_116 p_1050->g_133 p_1050->g_177 p_1050->g_143 p_1050->g_202 p_1050->g_38 p_1050->g_212 p_1050->g_220 p_1050->g_213 p_1050->g_161 p_1050->g_238 p_1050->g_240 p_1050->g_61
 * writes: p_1050->g_116 p_1050->g_119 p_1050->g_133 p_1050->g_92 p_1050->g_200 p_1050->g_202 p_1050->g_38 p_1050->g_214 p_1050->g_37 p_1050->g_79
 */
int32_t * func_68(uint32_t  p_69, int32_t * p_70, uint8_t  p_71, int16_t  p_72, int32_t * p_73, struct S2 * p_1050)
{ /* block id: 10 */
    int32_t *l_91 = &p_1050->g_92;
    int32_t *l_97 = &p_1050->g_92;
    int32_t **l_96 = &l_97;
    VECTOR(uint8_t, 8) l_98 = (VECTOR(uint8_t, 8))(0x1DL, (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 0x6EL), 0x6EL), 0x6EL, 0x1DL, 0x6EL);
    VECTOR(uint8_t, 4) l_101 = (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 0UL), 0UL);
    VECTOR(uint8_t, 2) l_102 = (VECTOR(uint8_t, 2))(251UL, 0x57L);
    VECTOR(uint8_t, 16) l_104 = (VECTOR(uint8_t, 16))(0xECL, (VECTOR(uint8_t, 4))(0xECL, (VECTOR(uint8_t, 2))(0xECL, 0x28L), 0x28L), 0x28L, 0xECL, 0x28L, (VECTOR(uint8_t, 2))(0xECL, 0x28L), (VECTOR(uint8_t, 2))(0xECL, 0x28L), 0xECL, 0x28L, 0xECL, 0x28L);
    VECTOR(uint8_t, 8) l_105 = (VECTOR(uint8_t, 8))(0x04L, (VECTOR(uint8_t, 4))(0x04L, (VECTOR(uint8_t, 2))(0x04L, 0xD2L), 0xD2L), 0xD2L, 0x04L, 0xD2L);
    VECTOR(uint32_t, 16) l_108 = (VECTOR(uint32_t, 16))(0x1E453246L, (VECTOR(uint32_t, 4))(0x1E453246L, (VECTOR(uint32_t, 2))(0x1E453246L, 4294967295UL), 4294967295UL), 4294967295UL, 0x1E453246L, 4294967295UL, (VECTOR(uint32_t, 2))(0x1E453246L, 4294967295UL), (VECTOR(uint32_t, 2))(0x1E453246L, 4294967295UL), 0x1E453246L, 4294967295UL, 0x1E453246L, 4294967295UL);
    VECTOR(uint32_t, 8) l_110 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2728FC8EL), 0x2728FC8EL), 0x2728FC8EL, 4294967295UL, 0x2728FC8EL);
    uint16_t *l_115 = &p_1050->g_116;
    int32_t *l_117 = (void*)0;
    int32_t *l_118[1];
    VECTOR(uint8_t, 16) l_172 = (VECTOR(uint8_t, 16))(0x47L, (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0x2CL), 0x2CL), 0x2CL, 0x47L, 0x2CL, (VECTOR(uint8_t, 2))(0x47L, 0x2CL), (VECTOR(uint8_t, 2))(0x47L, 0x2CL), 0x47L, 0x2CL, 0x47L, 0x2CL);
    VECTOR(int8_t, 8) l_178 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x64L), 0x64L), 0x64L, 0L, 0x64L);
    VECTOR(int8_t, 4) l_181 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2AL), 0x2AL);
    VECTOR(uint8_t, 2) l_219 = (VECTOR(uint8_t, 2))(0x12L, 2UL);
    int8_t *l_227 = (void*)0;
    union U1 l_232 = {-6L};
    int8_t *l_233 = (void*)0;
    VECTOR(int32_t, 4) l_239 = (VECTOR(int32_t, 4))(0x1D269989L, (VECTOR(int32_t, 2))(0x1D269989L, (-1L)), (-1L));
    int16_t **l_241 = &p_1050->g_79;
    int32_t *l_245 = &p_1050->g_61;
    int32_t **l_244[8] = {&l_245,&l_245,&l_245,&l_245,&l_245,&l_245,&l_245,&l_245};
    int i;
    for (i = 0; i < 1; i++)
        l_118[i] = &p_1050->g_119;
    p_1050->g_119 &= (((void*)0 != l_91) | (safe_div_func_int8_t_s_s(((((p_1050->g_95[6] , l_91) == ((*l_96) = (void*)0)) >= GROUP_DIVERGE(2, 1)) && (((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_98.s17760344)), 0xD1L, (safe_rshift_func_int8_t_s_u(0x3CL, FAKE_DIVERGE(p_1050->local_0_offset, get_local_id(0), 10))), 0UL, ((VECTOR(uint8_t, 4))(p_72, ((VECTOR(uint8_t, 2))(l_101.yw)), 0xDDL)), 0x4EL)), ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_102.xyyyyyxxyxyxxyxx)).sf8)).xyxyyxyyxxyyyyxx)))).lo)).even, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_1050->g_103.s7156567573055057)).s4ae6, ((VECTOR(uint8_t, 8))(l_104.sc89d8701)).odd))).odd, ((VECTOR(uint8_t, 8))(l_105.s51111037)).s56))), (uint8_t)p_1050->g_comm_values[p_1050->tid]))).xyyx))).zyyzwyyzyzxzyxyy))).sf , (((*l_115) = (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_108.se2ca)), ((VECTOR(uint32_t, 16))(p_1050->g_109.s507bd8287126a377)).s0, 0xB5B57A05L, 1UL, 1UL)).hi, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(l_110.s6375674104570443)), ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((((((1L <= 1L) , p_72) & p_1050->g_comm_values[p_1050->tid]) <= p_71) > p_1050->g_95[6].f0), p_69)), (*l_91))) | 0x224AL), ((VECTOR(uint32_t, 2))(0x9282FEEDL)), 4294967286UL)))), ((VECTOR(uint32_t, 4))(0x327E98E5L))))).yyywwzwyzwzwwzxy, ((VECTOR(uint32_t, 16))(8UL))))).s91)).yxyyyyxx)).s11)).xxyx))))).yxyzxwwy, ((VECTOR(uint32_t, 8))(0x80A5080FL))))), ((VECTOR(uint32_t, 8))(4294967289UL))))).s5766360422525224, ((VECTOR(uint32_t, 16))(0x93C24CE6L))))).s2, FAKE_DIVERGE(p_1050->local_1_offset, get_local_id(1), 10)))) == p_1050->g_comm_values[p_1050->tid]))), p_71)));
    for (p_1050->g_119 = 0; (p_1050->g_119 > (-9)); p_1050->g_119 = safe_sub_func_uint16_t_u_u(p_1050->g_119, 7))
    { /* block id: 16 */
        int16_t l_136 = (-3L);
        VECTOR(int8_t, 16) l_153 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-5L)), (-5L)), (-5L), (-7L), (-5L), (VECTOR(int8_t, 2))((-7L), (-5L)), (VECTOR(int8_t, 2))((-7L), (-5L)), (-7L), (-5L), (-7L), (-5L));
        uint16_t *l_160 = &p_1050->g_161;
        uint32_t l_169 = 2UL;
        int32_t l_198 = 0x467EB79DL;
        int32_t l_206 = (-5L);
        int32_t **l_211[10][4] = {{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0},{&l_97,&l_91,(void*)0,(void*)0}};
        int i, j;
        if (p_1050->g_37.s0)
        { /* block id: 17 */
            uint16_t l_126 = 0x0D96L;
            int32_t l_132 = 1L;
            VECTOR(int32_t, 16) l_157 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
            int16_t *l_166 = &p_1050->g_67[5];
            int i;
            for (p_1050->g_116 = 0; (p_1050->g_116 != 31); ++p_1050->g_116)
            { /* block id: 20 */
                uint32_t l_145 = 0x4FEBEC88L;
                int32_t l_146 = 0x50EE913EL;
                int32_t *l_148 = &p_1050->g_61;
                int32_t **l_147 = &l_148;
                uint16_t *l_158 = &p_1050->g_116;
                uint16_t **l_159[6];
                int64_t *l_164 = (void*)0;
                int64_t *l_165 = (void*)0;
                int16_t **l_167 = &l_166;
                int i;
                for (i = 0; i < 6; i++)
                    l_159[i] = &l_115;
                for (p_71 = 0; (p_71 != 4); ++p_71)
                { /* block id: 23 */
                    int16_t l_129 = 0x678BL;
                    int32_t l_131 = 0x12D6E4BEL;
                    int64_t *l_144[2][5][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    l_126++;
                    --p_1050->g_133[4][0][1];
                    if (l_136)
                        continue;
                    (*l_91) = (+((safe_add_func_int32_t_s_s(((l_146 = (+((0x01195FD4EE7BA79BL <= (((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(p_1050->g_143.ww)), 255UL)).y || p_71), p_69)), l_131)) != ((p_70 != (void*)0) && p_69)) != p_1050->g_comm_values[p_1050->tid])) || (l_145 &= p_1050->g_103.s2)))) > p_71), p_72)) <= (-7L)));
                }
                (*l_91) = (((*l_147) = &p_1050->g_61) == (p_1050->g_119 , (((VECTOR(int64_t, 4))((safe_mul_func_int16_t_s_s(((((*p_1050->g_79) = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_153.sb78b)).w, (((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u(l_153.s5, (l_157.se = (FAKE_DIVERGE(p_1050->group_2_offset, get_group_id(2), 10) , (((((VECTOR(int32_t, 4))(l_157.s027b)).y , (((l_158 != (l_160 = (void*)0)) , (p_1050->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))] ^= (safe_mul_func_int16_t_s_s(0x3428L, 0x1DF7L)))) < (p_72 == (((*l_167) = l_166) == &p_1050->g_67[1])))) , p_71) > p_71))))))) >= 0x54632091C42CB54CL) , p_1050->g_comm_values[p_1050->tid])))) || l_132) | p_1050->g_38.s0), p_71)), 0x7992E5D78F825814L, 0x136BB2FC288D6F10L, 0x15947182C73545BEL)).x , p_73)));
            }
        }
        else
        { /* block id: 39 */
            int64_t l_168 = 7L;
            VECTOR(int8_t, 8) l_179 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
            VECTOR(int8_t, 16) l_180 = (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, (-3L)), (-3L)), (-3L), 0x1DL, (-3L), (VECTOR(int8_t, 2))(0x1DL, (-3L)), (VECTOR(int8_t, 2))(0x1DL, (-3L)), 0x1DL, (-3L), 0x1DL, (-3L));
            int32_t l_184 = 6L;
            VECTOR(uint32_t, 4) l_189 = (VECTOR(uint32_t, 4))(0xA33BAAAFL, (VECTOR(uint32_t, 2))(0xA33BAAAFL, 4294967295UL), 4294967295UL);
            uint16_t **l_196[2][2][7] = {{{&l_160,&l_160,&l_115,&l_160,&l_115,&l_160,&l_115},{&l_160,&l_160,&l_115,&l_160,&l_115,&l_160,&l_115}},{{&l_160,&l_160,&l_115,&l_160,&l_115,&l_160,&l_115},{&l_160,&l_160,&l_115,&l_160,&l_115,&l_160,&l_115}}};
            uint8_t *l_197 = (void*)0;
            uint64_t *l_199 = &p_1050->g_200;
            uint64_t *l_201 = &p_1050->g_202;
            uint8_t *l_203 = (void*)0;
            uint8_t *l_204 = (void*)0;
            uint8_t *l_205[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_207[1];
            int32_t **l_208 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_207[i] = 0x6DB27232L;
            (*l_91) &= (l_168 || l_169);
            (*l_91) = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((0x36BDL != ((((VECTOR(uint8_t, 8))(0xE4L, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(l_172.sd2be7945)).odd, (uint8_t)(7UL >= (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1050->g_177.wzxyzzyzzxyyzywz)).s1, ((l_207[0] = ((VECTOR(int8_t, 16))(2L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, (-10L), 1L, 5L)))), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(l_178.s14233722)).s1670107161706571, ((VECTOR(int8_t, 2))(l_179.s42)).xyyyyxyyxxyyyyyy))).s8e, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_180.sd9f1)).wxyyxxyxzzxyzzwy)).s79, ((VECTOR(int8_t, 8))(l_181.yywywyxx)).s22))))), ((VECTOR(int8_t, 8))((p_1050->g_38.s4 &= (safe_lshift_func_uint8_t_u_s((l_206 &= ((l_184 = p_72) && ((safe_mul_func_uint16_t_u_u((+(safe_mod_func_uint64_t_u_u(l_189.y, ((*l_201) |= ((*l_199) = (((safe_mul_func_int8_t_s_s(p_69, 0L)) , ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x7AL, 0xC0L)).lo, 5)), (l_198 &= (((l_196[0][1][1] == (void*)0) , ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(p_69, 0x4DL, ((VECTOR(int8_t, 2))(4L)), 0x65L, 0L, 0x4EL, 0L)).s10, ((VECTOR(int8_t, 2))(0x7CL))))), 0x5FL, 0x12L)))).yzxyxyzy)).s5 != 0x70L) || p_71)) < l_153.s4)))) >= 0x3E6E4037L)) == p_1050->g_143.z)))))), FAKE_DIVERGE(p_1050->local_0_offset, get_local_id(0), 10))) , l_153.s5))), 6))), ((VECTOR(int8_t, 2))((-8L))), (-1L), ((VECTOR(int8_t, 2))(0L)), (-1L), 0x35L)).s50, ((VECTOR(int8_t, 2))(1L))))).hi, ((VECTOR(int8_t, 8))(0x31L)), (-10L), 0x39L)).sb) , p_1050->g_38.s0))), 6)))))).y, 1UL, GROUP_DIVERGE(0, 1), p_1050->g_119, 0x10L, 0xD7L, 0x73L)).s5 , l_208) != (void*)0)), p_1050->g_116, l_136, 1L, (-8L), 0x42725619L, ((VECTOR(int32_t, 2))((-1L))), p_69, ((VECTOR(int32_t, 2))(0x2035A7E5L)), 0x6EE53F05L, ((VECTOR(int32_t, 2))(8L)), (-1L), 0x15B5CB29L)).s808c)).lo))).yxyxyxxxyyxyyxyy, ((VECTOR(int32_t, 16))(0x0B385473L))))), ((VECTOR(int32_t, 16))(0x47DF3491L))))).sae, ((VECTOR(int32_t, 2))(1L))))).even;
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1050->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((((l_211[6][1] = &l_91) != (void*)0) & (((((&p_1050->g_67[0] == (void*)0) <= ((void*)0 != p_73)) & p_1050->g_38.s1) , p_1050->g_212) != (p_1050->g_214[2] = &p_1050->g_213[2]))) < FAKE_DIVERGE(p_1050->group_0_offset, get_group_id(0), 10)) ^ p_71), p_71)) < 0x90A4L), 10))][(safe_mod_func_uint32_t_u_u(p_1050->tid, 3))]));
    }
    p_1050->g_119 |= (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(l_219.yx)).xyyx, ((VECTOR(uint8_t, 2))(p_1050->g_220.s39)).yyyx))).z & 255UL), 3)) & (safe_rshift_func_uint8_t_u_u(255UL, 2))), ((p_69 < (-1L)) & (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((*l_91) &= 0x72L) > ((safe_sub_func_uint16_t_u_u((**p_1050->g_212), (safe_lshift_func_int16_t_s_u(((p_1050->g_37.s0 = (l_232 , p_72)) == (safe_rshift_func_uint16_t_u_s((((*l_241) = ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1050->g_238.yyyx)).lo)).yyxx)).zxzwwzxx, ((VECTOR(uint32_t, 4))(1UL, (((VECTOR(int32_t, 8))(l_239.yyyyxzxw)).s0 <= ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(4294967295UL, (p_1050->g_240 , p_1050->g_61), ((VECTOR(uint32_t, 4))(0UL)), FAKE_DIVERGE(p_1050->global_1_offset, get_global_id(1), 10), 0UL, p_69, p_1050->g_38.s5, p_1050->g_116, ((VECTOR(uint32_t, 2))(0UL)), 0xC595F62DL, 4294967287UL, 0UL)).s37)), ((VECTOR(uint32_t, 2))(0x9577700CL)), ((VECTOR(uint32_t, 2))(4294967295UL))))), ((VECTOR(uint32_t, 2))(1UL))))), ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x326E7695L))))), 4294967290UL, 0x0701759EL)), ((VECTOR(uint32_t, 4))(0x0C56BD4BL))))).zyzzyyyy)).s0 <= 0x650ABEB8L) < 0x3DL)), 4294967289UL, 0UL)).zwyxyzzz))).s2343251555664374, ((VECTOR(int64_t, 16))((-9L))), ((VECTOR(int64_t, 16))((-9L)))))))).sd, 1L)) , l_115)) != &p_72), p_1050->g_116))), 15)))) <= p_71)), p_72)), 15)))));
    for (p_71 = 2; (p_71 > 6); p_71++)
    { /* block id: 62 */
        uint8_t l_246 = 0x8AL;
        l_246 = (l_244[6] != (void*)0);
    }
    return &p_1050->g_119;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S2 c_1051;
    struct S2* p_1050 = &c_1051;
    struct S2 c_1052 = {
        (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 1L), 1L), 1L, 5L, 1L), // p_1050->g_37
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x65L), 0x65L), 0x65L, (-5L), 0x65L), // p_1050->g_38
        0L, // p_1050->g_61
        {8L,8L,8L,8L,8L,8L}, // p_1050->g_67
        &p_1050->g_67[5], // p_1050->g_79
        5L, // p_1050->g_92
        {{0x5C6DFA21L},{-1L},{1L},{-1L},{0x5C6DFA21L},{0x5C6DFA21L},{-1L},{1L},{-1L},{0x5C6DFA21L}}, // p_1050->g_95
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1050->g_103
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF7F3414CL), 0xF7F3414CL), 0xF7F3414CL, 4294967295UL, 0xF7F3414CL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF7F3414CL), (VECTOR(uint32_t, 2))(4294967295UL, 0xF7F3414CL), 4294967295UL, 0xF7F3414CL, 4294967295UL, 0xF7F3414CL), // p_1050->g_109
        1UL, // p_1050->g_116
        (-9L), // p_1050->g_119
        8L, // p_1050->g_130
        {{{0x01L,0x01L,0x01L}},{{0x01L,0x01L,0x01L}},{{0x01L,0x01L,0x01L}},{{0x01L,0x01L,0x01L}},{{0x01L,0x01L,0x01L}},{{0x01L,0x01L,0x01L}}}, // p_1050->g_133
        (VECTOR(uint8_t, 4))(0x2DL, (VECTOR(uint8_t, 2))(0x2DL, 253UL), 253UL), // p_1050->g_143
        0xBAD8L, // p_1050->g_161
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x53F7L), 0x53F7L), // p_1050->g_177
        18446744073709551608UL, // p_1050->g_200
        18446744073709551608UL, // p_1050->g_202
        {&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116,&p_1050->g_116}, // p_1050->g_213
        &p_1050->g_213[2], // p_1050->g_212
        {&p_1050->g_213[2],&p_1050->g_213[2],&p_1050->g_213[2],&p_1050->g_213[2]}, // p_1050->g_214
        (VECTOR(uint8_t, 16))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x6EL), 0x6EL), 0x6EL, 3UL, 0x6EL, (VECTOR(uint8_t, 2))(3UL, 0x6EL), (VECTOR(uint8_t, 2))(3UL, 0x6EL), 3UL, 0x6EL, 3UL, 0x6EL), // p_1050->g_220
        (VECTOR(int32_t, 2))(0x2E4D6ACBL, 0L), // p_1050->g_238
        {7UL}, // p_1050->g_240
        9L, // p_1050->g_283
        255UL, // p_1050->g_284
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int16_t, 2))(0L, (-10L)), (VECTOR(int16_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L)), // p_1050->g_291
        2L, // p_1050->g_306
        0x5B4A1734L, // p_1050->g_312
        &p_1050->g_312, // p_1050->g_311
        &p_1050->g_311, // p_1050->g_310
        (VECTOR(uint64_t, 8))(0xDBF9F70BE9A3CA29L, (VECTOR(uint64_t, 4))(0xDBF9F70BE9A3CA29L, (VECTOR(uint64_t, 2))(0xDBF9F70BE9A3CA29L, 3UL), 3UL), 3UL, 0xDBF9F70BE9A3CA29L, 3UL), // p_1050->g_318
        (VECTOR(int32_t, 8))(0x68230805L, (VECTOR(int32_t, 4))(0x68230805L, (VECTOR(int32_t, 2))(0x68230805L, (-1L)), (-1L)), (-1L), 0x68230805L, (-1L)), // p_1050->g_325
        (void*)0, // p_1050->g_330
        &p_1050->g_240.f0, // p_1050->g_393
        &p_1050->g_393, // p_1050->g_392
        (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L)), // p_1050->g_405
        (VECTOR(uint8_t, 2))(0x80L, 0x58L), // p_1050->g_417
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x15L), 0x15L), 0x15L, 0L, 0x15L, (VECTOR(int8_t, 2))(0L, 0x15L), (VECTOR(int8_t, 2))(0L, 0x15L), 0L, 0x15L, 0L, 0x15L), // p_1050->g_458
        (VECTOR(int64_t, 2))(0x1344F5B647A3EA6DL, 0L), // p_1050->g_471
        (void*)0, // p_1050->g_479
        (VECTOR(int32_t, 2))(0x6EF9FDC2L, 1L), // p_1050->g_517
        (VECTOR(int8_t, 2))(0x35L, 0x20L), // p_1050->g_547
        (void*)0, // p_1050->g_564
        (void*)0, // p_1050->g_578
        &p_1050->g_479, // p_1050->g_599
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x00E6L), 0x00E6L), 0x00E6L, (-1L), 0x00E6L), // p_1050->g_666
        &p_1050->g_311, // p_1050->g_750
        (VECTOR(uint64_t, 16))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL), 0x5CCE4D8DAC1CF2AEL), 0x5CCE4D8DAC1CF2AEL, 18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL), (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL), 18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL, 18446744073709551613UL, 0x5CCE4D8DAC1CF2AEL), // p_1050->g_776
        0x3B63L, // p_1050->g_785
        0x3052L, // p_1050->g_790
        (VECTOR(int64_t, 4))(0x40566763CE256887L, (VECTOR(int64_t, 2))(0x40566763CE256887L, 1L), 1L), // p_1050->g_808
        (VECTOR(uint64_t, 4))(0x83E7177442A01BC8L, (VECTOR(uint64_t, 2))(0x83E7177442A01BC8L, 0x549EC977EB80AFBAL), 0x549EC977EB80AFBAL), // p_1050->g_824
        {0xD7CD2AD8L}, // p_1050->g_829
        {0L}, // p_1050->g_830
        6L, // p_1050->g_863
        (VECTOR(int16_t, 2))(0x51F6L, 9L), // p_1050->g_872
        (VECTOR(int32_t, 2))((-7L), 0x605A2253L), // p_1050->g_894
        (VECTOR(int8_t, 2))(0x04L, (-2L)), // p_1050->g_897
        0UL, // p_1050->g_922
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x49B21F433A2EE3F8L), 0x49B21F433A2EE3F8L), 0x49B21F433A2EE3F8L, (-1L), 0x49B21F433A2EE3F8L, (VECTOR(int64_t, 2))((-1L), 0x49B21F433A2EE3F8L), (VECTOR(int64_t, 2))((-1L), 0x49B21F433A2EE3F8L), (-1L), 0x49B21F433A2EE3F8L, (-1L), 0x49B21F433A2EE3F8L), // p_1050->g_975
        (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L), // p_1050->g_984
        (VECTOR(int32_t, 4))(0x7A6543E9L, (VECTOR(int32_t, 2))(0x7A6543E9L, 1L), 1L), // p_1050->g_986
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_1050->g_991
        (VECTOR(int16_t, 4))(0x04BDL, (VECTOR(int16_t, 2))(0x04BDL, 0x330DL), 0x330DL), // p_1050->g_1001
        &p_1050->g_200, // p_1050->g_1003
        &p_1050->g_1003, // p_1050->g_1002
        (void*)0, // p_1050->g_1004
        (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 18446744073709551615UL), 18446744073709551615UL), // p_1050->g_1013
        0, // p_1050->v_collective
        sequence_input[get_global_id(0)], // p_1050->global_0_offset
        sequence_input[get_global_id(1)], // p_1050->global_1_offset
        sequence_input[get_global_id(2)], // p_1050->global_2_offset
        sequence_input[get_local_id(0)], // p_1050->local_0_offset
        sequence_input[get_local_id(1)], // p_1050->local_1_offset
        sequence_input[get_local_id(2)], // p_1050->local_2_offset
        sequence_input[get_group_id(0)], // p_1050->group_0_offset
        sequence_input[get_group_id(1)], // p_1050->group_1_offset
        sequence_input[get_group_id(2)], // p_1050->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_1050->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1051 = c_1052;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1050);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1050->g_37.s0, "p_1050->g_37.s0", print_hash_value);
    transparent_crc(p_1050->g_37.s1, "p_1050->g_37.s1", print_hash_value);
    transparent_crc(p_1050->g_37.s2, "p_1050->g_37.s2", print_hash_value);
    transparent_crc(p_1050->g_37.s3, "p_1050->g_37.s3", print_hash_value);
    transparent_crc(p_1050->g_37.s4, "p_1050->g_37.s4", print_hash_value);
    transparent_crc(p_1050->g_37.s5, "p_1050->g_37.s5", print_hash_value);
    transparent_crc(p_1050->g_37.s6, "p_1050->g_37.s6", print_hash_value);
    transparent_crc(p_1050->g_37.s7, "p_1050->g_37.s7", print_hash_value);
    transparent_crc(p_1050->g_38.s0, "p_1050->g_38.s0", print_hash_value);
    transparent_crc(p_1050->g_38.s1, "p_1050->g_38.s1", print_hash_value);
    transparent_crc(p_1050->g_38.s2, "p_1050->g_38.s2", print_hash_value);
    transparent_crc(p_1050->g_38.s3, "p_1050->g_38.s3", print_hash_value);
    transparent_crc(p_1050->g_38.s4, "p_1050->g_38.s4", print_hash_value);
    transparent_crc(p_1050->g_38.s5, "p_1050->g_38.s5", print_hash_value);
    transparent_crc(p_1050->g_38.s6, "p_1050->g_38.s6", print_hash_value);
    transparent_crc(p_1050->g_38.s7, "p_1050->g_38.s7", print_hash_value);
    transparent_crc(p_1050->g_61, "p_1050->g_61", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1050->g_67[i], "p_1050->g_67[i]", print_hash_value);

    }
    transparent_crc(p_1050->g_92, "p_1050->g_92", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1050->g_95[i].f0, "p_1050->g_95[i].f0", print_hash_value);

    }
    transparent_crc(p_1050->g_103.s0, "p_1050->g_103.s0", print_hash_value);
    transparent_crc(p_1050->g_103.s1, "p_1050->g_103.s1", print_hash_value);
    transparent_crc(p_1050->g_103.s2, "p_1050->g_103.s2", print_hash_value);
    transparent_crc(p_1050->g_103.s3, "p_1050->g_103.s3", print_hash_value);
    transparent_crc(p_1050->g_103.s4, "p_1050->g_103.s4", print_hash_value);
    transparent_crc(p_1050->g_103.s5, "p_1050->g_103.s5", print_hash_value);
    transparent_crc(p_1050->g_103.s6, "p_1050->g_103.s6", print_hash_value);
    transparent_crc(p_1050->g_103.s7, "p_1050->g_103.s7", print_hash_value);
    transparent_crc(p_1050->g_109.s0, "p_1050->g_109.s0", print_hash_value);
    transparent_crc(p_1050->g_109.s1, "p_1050->g_109.s1", print_hash_value);
    transparent_crc(p_1050->g_109.s2, "p_1050->g_109.s2", print_hash_value);
    transparent_crc(p_1050->g_109.s3, "p_1050->g_109.s3", print_hash_value);
    transparent_crc(p_1050->g_109.s4, "p_1050->g_109.s4", print_hash_value);
    transparent_crc(p_1050->g_109.s5, "p_1050->g_109.s5", print_hash_value);
    transparent_crc(p_1050->g_109.s6, "p_1050->g_109.s6", print_hash_value);
    transparent_crc(p_1050->g_109.s7, "p_1050->g_109.s7", print_hash_value);
    transparent_crc(p_1050->g_109.s8, "p_1050->g_109.s8", print_hash_value);
    transparent_crc(p_1050->g_109.s9, "p_1050->g_109.s9", print_hash_value);
    transparent_crc(p_1050->g_109.sa, "p_1050->g_109.sa", print_hash_value);
    transparent_crc(p_1050->g_109.sb, "p_1050->g_109.sb", print_hash_value);
    transparent_crc(p_1050->g_109.sc, "p_1050->g_109.sc", print_hash_value);
    transparent_crc(p_1050->g_109.sd, "p_1050->g_109.sd", print_hash_value);
    transparent_crc(p_1050->g_109.se, "p_1050->g_109.se", print_hash_value);
    transparent_crc(p_1050->g_109.sf, "p_1050->g_109.sf", print_hash_value);
    transparent_crc(p_1050->g_116, "p_1050->g_116", print_hash_value);
    transparent_crc(p_1050->g_119, "p_1050->g_119", print_hash_value);
    transparent_crc(p_1050->g_130, "p_1050->g_130", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1050->g_133[i][j][k], "p_1050->g_133[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1050->g_143.x, "p_1050->g_143.x", print_hash_value);
    transparent_crc(p_1050->g_143.y, "p_1050->g_143.y", print_hash_value);
    transparent_crc(p_1050->g_143.z, "p_1050->g_143.z", print_hash_value);
    transparent_crc(p_1050->g_143.w, "p_1050->g_143.w", print_hash_value);
    transparent_crc(p_1050->g_161, "p_1050->g_161", print_hash_value);
    transparent_crc(p_1050->g_177.x, "p_1050->g_177.x", print_hash_value);
    transparent_crc(p_1050->g_177.y, "p_1050->g_177.y", print_hash_value);
    transparent_crc(p_1050->g_177.z, "p_1050->g_177.z", print_hash_value);
    transparent_crc(p_1050->g_177.w, "p_1050->g_177.w", print_hash_value);
    transparent_crc(p_1050->g_200, "p_1050->g_200", print_hash_value);
    transparent_crc(p_1050->g_202, "p_1050->g_202", print_hash_value);
    transparent_crc(p_1050->g_220.s0, "p_1050->g_220.s0", print_hash_value);
    transparent_crc(p_1050->g_220.s1, "p_1050->g_220.s1", print_hash_value);
    transparent_crc(p_1050->g_220.s2, "p_1050->g_220.s2", print_hash_value);
    transparent_crc(p_1050->g_220.s3, "p_1050->g_220.s3", print_hash_value);
    transparent_crc(p_1050->g_220.s4, "p_1050->g_220.s4", print_hash_value);
    transparent_crc(p_1050->g_220.s5, "p_1050->g_220.s5", print_hash_value);
    transparent_crc(p_1050->g_220.s6, "p_1050->g_220.s6", print_hash_value);
    transparent_crc(p_1050->g_220.s7, "p_1050->g_220.s7", print_hash_value);
    transparent_crc(p_1050->g_220.s8, "p_1050->g_220.s8", print_hash_value);
    transparent_crc(p_1050->g_220.s9, "p_1050->g_220.s9", print_hash_value);
    transparent_crc(p_1050->g_220.sa, "p_1050->g_220.sa", print_hash_value);
    transparent_crc(p_1050->g_220.sb, "p_1050->g_220.sb", print_hash_value);
    transparent_crc(p_1050->g_220.sc, "p_1050->g_220.sc", print_hash_value);
    transparent_crc(p_1050->g_220.sd, "p_1050->g_220.sd", print_hash_value);
    transparent_crc(p_1050->g_220.se, "p_1050->g_220.se", print_hash_value);
    transparent_crc(p_1050->g_220.sf, "p_1050->g_220.sf", print_hash_value);
    transparent_crc(p_1050->g_238.x, "p_1050->g_238.x", print_hash_value);
    transparent_crc(p_1050->g_238.y, "p_1050->g_238.y", print_hash_value);
    transparent_crc(p_1050->g_240.f0, "p_1050->g_240.f0", print_hash_value);
    transparent_crc(p_1050->g_283, "p_1050->g_283", print_hash_value);
    transparent_crc(p_1050->g_284, "p_1050->g_284", print_hash_value);
    transparent_crc(p_1050->g_291.s0, "p_1050->g_291.s0", print_hash_value);
    transparent_crc(p_1050->g_291.s1, "p_1050->g_291.s1", print_hash_value);
    transparent_crc(p_1050->g_291.s2, "p_1050->g_291.s2", print_hash_value);
    transparent_crc(p_1050->g_291.s3, "p_1050->g_291.s3", print_hash_value);
    transparent_crc(p_1050->g_291.s4, "p_1050->g_291.s4", print_hash_value);
    transparent_crc(p_1050->g_291.s5, "p_1050->g_291.s5", print_hash_value);
    transparent_crc(p_1050->g_291.s6, "p_1050->g_291.s6", print_hash_value);
    transparent_crc(p_1050->g_291.s7, "p_1050->g_291.s7", print_hash_value);
    transparent_crc(p_1050->g_291.s8, "p_1050->g_291.s8", print_hash_value);
    transparent_crc(p_1050->g_291.s9, "p_1050->g_291.s9", print_hash_value);
    transparent_crc(p_1050->g_291.sa, "p_1050->g_291.sa", print_hash_value);
    transparent_crc(p_1050->g_291.sb, "p_1050->g_291.sb", print_hash_value);
    transparent_crc(p_1050->g_291.sc, "p_1050->g_291.sc", print_hash_value);
    transparent_crc(p_1050->g_291.sd, "p_1050->g_291.sd", print_hash_value);
    transparent_crc(p_1050->g_291.se, "p_1050->g_291.se", print_hash_value);
    transparent_crc(p_1050->g_291.sf, "p_1050->g_291.sf", print_hash_value);
    transparent_crc(p_1050->g_306, "p_1050->g_306", print_hash_value);
    transparent_crc(p_1050->g_312, "p_1050->g_312", print_hash_value);
    transparent_crc(p_1050->g_318.s0, "p_1050->g_318.s0", print_hash_value);
    transparent_crc(p_1050->g_318.s1, "p_1050->g_318.s1", print_hash_value);
    transparent_crc(p_1050->g_318.s2, "p_1050->g_318.s2", print_hash_value);
    transparent_crc(p_1050->g_318.s3, "p_1050->g_318.s3", print_hash_value);
    transparent_crc(p_1050->g_318.s4, "p_1050->g_318.s4", print_hash_value);
    transparent_crc(p_1050->g_318.s5, "p_1050->g_318.s5", print_hash_value);
    transparent_crc(p_1050->g_318.s6, "p_1050->g_318.s6", print_hash_value);
    transparent_crc(p_1050->g_318.s7, "p_1050->g_318.s7", print_hash_value);
    transparent_crc(p_1050->g_325.s0, "p_1050->g_325.s0", print_hash_value);
    transparent_crc(p_1050->g_325.s1, "p_1050->g_325.s1", print_hash_value);
    transparent_crc(p_1050->g_325.s2, "p_1050->g_325.s2", print_hash_value);
    transparent_crc(p_1050->g_325.s3, "p_1050->g_325.s3", print_hash_value);
    transparent_crc(p_1050->g_325.s4, "p_1050->g_325.s4", print_hash_value);
    transparent_crc(p_1050->g_325.s5, "p_1050->g_325.s5", print_hash_value);
    transparent_crc(p_1050->g_325.s6, "p_1050->g_325.s6", print_hash_value);
    transparent_crc(p_1050->g_325.s7, "p_1050->g_325.s7", print_hash_value);
    transparent_crc(p_1050->g_405.s0, "p_1050->g_405.s0", print_hash_value);
    transparent_crc(p_1050->g_405.s1, "p_1050->g_405.s1", print_hash_value);
    transparent_crc(p_1050->g_405.s2, "p_1050->g_405.s2", print_hash_value);
    transparent_crc(p_1050->g_405.s3, "p_1050->g_405.s3", print_hash_value);
    transparent_crc(p_1050->g_405.s4, "p_1050->g_405.s4", print_hash_value);
    transparent_crc(p_1050->g_405.s5, "p_1050->g_405.s5", print_hash_value);
    transparent_crc(p_1050->g_405.s6, "p_1050->g_405.s6", print_hash_value);
    transparent_crc(p_1050->g_405.s7, "p_1050->g_405.s7", print_hash_value);
    transparent_crc(p_1050->g_417.x, "p_1050->g_417.x", print_hash_value);
    transparent_crc(p_1050->g_417.y, "p_1050->g_417.y", print_hash_value);
    transparent_crc(p_1050->g_458.s0, "p_1050->g_458.s0", print_hash_value);
    transparent_crc(p_1050->g_458.s1, "p_1050->g_458.s1", print_hash_value);
    transparent_crc(p_1050->g_458.s2, "p_1050->g_458.s2", print_hash_value);
    transparent_crc(p_1050->g_458.s3, "p_1050->g_458.s3", print_hash_value);
    transparent_crc(p_1050->g_458.s4, "p_1050->g_458.s4", print_hash_value);
    transparent_crc(p_1050->g_458.s5, "p_1050->g_458.s5", print_hash_value);
    transparent_crc(p_1050->g_458.s6, "p_1050->g_458.s6", print_hash_value);
    transparent_crc(p_1050->g_458.s7, "p_1050->g_458.s7", print_hash_value);
    transparent_crc(p_1050->g_458.s8, "p_1050->g_458.s8", print_hash_value);
    transparent_crc(p_1050->g_458.s9, "p_1050->g_458.s9", print_hash_value);
    transparent_crc(p_1050->g_458.sa, "p_1050->g_458.sa", print_hash_value);
    transparent_crc(p_1050->g_458.sb, "p_1050->g_458.sb", print_hash_value);
    transparent_crc(p_1050->g_458.sc, "p_1050->g_458.sc", print_hash_value);
    transparent_crc(p_1050->g_458.sd, "p_1050->g_458.sd", print_hash_value);
    transparent_crc(p_1050->g_458.se, "p_1050->g_458.se", print_hash_value);
    transparent_crc(p_1050->g_458.sf, "p_1050->g_458.sf", print_hash_value);
    transparent_crc(p_1050->g_471.x, "p_1050->g_471.x", print_hash_value);
    transparent_crc(p_1050->g_471.y, "p_1050->g_471.y", print_hash_value);
    transparent_crc(p_1050->g_517.x, "p_1050->g_517.x", print_hash_value);
    transparent_crc(p_1050->g_517.y, "p_1050->g_517.y", print_hash_value);
    transparent_crc(p_1050->g_547.x, "p_1050->g_547.x", print_hash_value);
    transparent_crc(p_1050->g_547.y, "p_1050->g_547.y", print_hash_value);
    transparent_crc(p_1050->g_666.s0, "p_1050->g_666.s0", print_hash_value);
    transparent_crc(p_1050->g_666.s1, "p_1050->g_666.s1", print_hash_value);
    transparent_crc(p_1050->g_666.s2, "p_1050->g_666.s2", print_hash_value);
    transparent_crc(p_1050->g_666.s3, "p_1050->g_666.s3", print_hash_value);
    transparent_crc(p_1050->g_666.s4, "p_1050->g_666.s4", print_hash_value);
    transparent_crc(p_1050->g_666.s5, "p_1050->g_666.s5", print_hash_value);
    transparent_crc(p_1050->g_666.s6, "p_1050->g_666.s6", print_hash_value);
    transparent_crc(p_1050->g_666.s7, "p_1050->g_666.s7", print_hash_value);
    transparent_crc(p_1050->g_776.s0, "p_1050->g_776.s0", print_hash_value);
    transparent_crc(p_1050->g_776.s1, "p_1050->g_776.s1", print_hash_value);
    transparent_crc(p_1050->g_776.s2, "p_1050->g_776.s2", print_hash_value);
    transparent_crc(p_1050->g_776.s3, "p_1050->g_776.s3", print_hash_value);
    transparent_crc(p_1050->g_776.s4, "p_1050->g_776.s4", print_hash_value);
    transparent_crc(p_1050->g_776.s5, "p_1050->g_776.s5", print_hash_value);
    transparent_crc(p_1050->g_776.s6, "p_1050->g_776.s6", print_hash_value);
    transparent_crc(p_1050->g_776.s7, "p_1050->g_776.s7", print_hash_value);
    transparent_crc(p_1050->g_776.s8, "p_1050->g_776.s8", print_hash_value);
    transparent_crc(p_1050->g_776.s9, "p_1050->g_776.s9", print_hash_value);
    transparent_crc(p_1050->g_776.sa, "p_1050->g_776.sa", print_hash_value);
    transparent_crc(p_1050->g_776.sb, "p_1050->g_776.sb", print_hash_value);
    transparent_crc(p_1050->g_776.sc, "p_1050->g_776.sc", print_hash_value);
    transparent_crc(p_1050->g_776.sd, "p_1050->g_776.sd", print_hash_value);
    transparent_crc(p_1050->g_776.se, "p_1050->g_776.se", print_hash_value);
    transparent_crc(p_1050->g_776.sf, "p_1050->g_776.sf", print_hash_value);
    transparent_crc(p_1050->g_785, "p_1050->g_785", print_hash_value);
    transparent_crc(p_1050->g_790, "p_1050->g_790", print_hash_value);
    transparent_crc(p_1050->g_808.x, "p_1050->g_808.x", print_hash_value);
    transparent_crc(p_1050->g_808.y, "p_1050->g_808.y", print_hash_value);
    transparent_crc(p_1050->g_808.z, "p_1050->g_808.z", print_hash_value);
    transparent_crc(p_1050->g_808.w, "p_1050->g_808.w", print_hash_value);
    transparent_crc(p_1050->g_824.x, "p_1050->g_824.x", print_hash_value);
    transparent_crc(p_1050->g_824.y, "p_1050->g_824.y", print_hash_value);
    transparent_crc(p_1050->g_824.z, "p_1050->g_824.z", print_hash_value);
    transparent_crc(p_1050->g_824.w, "p_1050->g_824.w", print_hash_value);
    transparent_crc(p_1050->g_829.f0, "p_1050->g_829.f0", print_hash_value);
    transparent_crc(p_1050->g_863, "p_1050->g_863", print_hash_value);
    transparent_crc(p_1050->g_872.x, "p_1050->g_872.x", print_hash_value);
    transparent_crc(p_1050->g_872.y, "p_1050->g_872.y", print_hash_value);
    transparent_crc(p_1050->g_894.x, "p_1050->g_894.x", print_hash_value);
    transparent_crc(p_1050->g_894.y, "p_1050->g_894.y", print_hash_value);
    transparent_crc(p_1050->g_897.x, "p_1050->g_897.x", print_hash_value);
    transparent_crc(p_1050->g_897.y, "p_1050->g_897.y", print_hash_value);
    transparent_crc(p_1050->g_922, "p_1050->g_922", print_hash_value);
    transparent_crc(p_1050->g_975.s0, "p_1050->g_975.s0", print_hash_value);
    transparent_crc(p_1050->g_975.s1, "p_1050->g_975.s1", print_hash_value);
    transparent_crc(p_1050->g_975.s2, "p_1050->g_975.s2", print_hash_value);
    transparent_crc(p_1050->g_975.s3, "p_1050->g_975.s3", print_hash_value);
    transparent_crc(p_1050->g_975.s4, "p_1050->g_975.s4", print_hash_value);
    transparent_crc(p_1050->g_975.s5, "p_1050->g_975.s5", print_hash_value);
    transparent_crc(p_1050->g_975.s6, "p_1050->g_975.s6", print_hash_value);
    transparent_crc(p_1050->g_975.s7, "p_1050->g_975.s7", print_hash_value);
    transparent_crc(p_1050->g_975.s8, "p_1050->g_975.s8", print_hash_value);
    transparent_crc(p_1050->g_975.s9, "p_1050->g_975.s9", print_hash_value);
    transparent_crc(p_1050->g_975.sa, "p_1050->g_975.sa", print_hash_value);
    transparent_crc(p_1050->g_975.sb, "p_1050->g_975.sb", print_hash_value);
    transparent_crc(p_1050->g_975.sc, "p_1050->g_975.sc", print_hash_value);
    transparent_crc(p_1050->g_975.sd, "p_1050->g_975.sd", print_hash_value);
    transparent_crc(p_1050->g_975.se, "p_1050->g_975.se", print_hash_value);
    transparent_crc(p_1050->g_975.sf, "p_1050->g_975.sf", print_hash_value);
    transparent_crc(p_1050->g_984.s0, "p_1050->g_984.s0", print_hash_value);
    transparent_crc(p_1050->g_984.s1, "p_1050->g_984.s1", print_hash_value);
    transparent_crc(p_1050->g_984.s2, "p_1050->g_984.s2", print_hash_value);
    transparent_crc(p_1050->g_984.s3, "p_1050->g_984.s3", print_hash_value);
    transparent_crc(p_1050->g_984.s4, "p_1050->g_984.s4", print_hash_value);
    transparent_crc(p_1050->g_984.s5, "p_1050->g_984.s5", print_hash_value);
    transparent_crc(p_1050->g_984.s6, "p_1050->g_984.s6", print_hash_value);
    transparent_crc(p_1050->g_984.s7, "p_1050->g_984.s7", print_hash_value);
    transparent_crc(p_1050->g_986.x, "p_1050->g_986.x", print_hash_value);
    transparent_crc(p_1050->g_986.y, "p_1050->g_986.y", print_hash_value);
    transparent_crc(p_1050->g_986.z, "p_1050->g_986.z", print_hash_value);
    transparent_crc(p_1050->g_986.w, "p_1050->g_986.w", print_hash_value);
    transparent_crc(p_1050->g_991.x, "p_1050->g_991.x", print_hash_value);
    transparent_crc(p_1050->g_991.y, "p_1050->g_991.y", print_hash_value);
    transparent_crc(p_1050->g_991.z, "p_1050->g_991.z", print_hash_value);
    transparent_crc(p_1050->g_991.w, "p_1050->g_991.w", print_hash_value);
    transparent_crc(p_1050->g_1001.x, "p_1050->g_1001.x", print_hash_value);
    transparent_crc(p_1050->g_1001.y, "p_1050->g_1001.y", print_hash_value);
    transparent_crc(p_1050->g_1001.z, "p_1050->g_1001.z", print_hash_value);
    transparent_crc(p_1050->g_1001.w, "p_1050->g_1001.w", print_hash_value);
    transparent_crc(p_1050->g_1013.x, "p_1050->g_1013.x", print_hash_value);
    transparent_crc(p_1050->g_1013.y, "p_1050->g_1013.y", print_hash_value);
    transparent_crc(p_1050->g_1013.z, "p_1050->g_1013.z", print_hash_value);
    transparent_crc(p_1050->g_1013.w, "p_1050->g_1013.w", print_hash_value);
    transparent_crc(p_1050->v_collective, "p_1050->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 65; i++)
            transparent_crc(p_1050->g_special_values[i + 65 * get_linear_group_id()], "p_1050->g_special_values[i + 65 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 65; i++)
            transparent_crc(p_1050->l_special_values[i], "p_1050->l_special_values[i]", print_hash_value);
    transparent_crc(p_1050->l_comm_values[get_linear_local_id()], "p_1050->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1050->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_1050->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
