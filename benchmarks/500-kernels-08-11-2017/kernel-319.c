// --atomics 74 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,25,5 -l 15,1,1
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
{2,14,7,10,3,6,4,1,12,8,5,11,9,0,13}, // permutation 0
{2,7,4,6,5,13,12,0,3,11,9,1,8,10,14}, // permutation 1
{4,2,6,5,12,11,8,1,0,10,13,3,14,7,9}, // permutation 2
{3,2,0,4,14,7,5,9,8,6,13,12,10,1,11}, // permutation 3
{4,0,9,8,11,7,1,3,14,6,5,10,12,2,13}, // permutation 4
{2,9,12,5,10,4,14,7,13,11,3,8,1,6,0}, // permutation 5
{10,12,14,2,3,8,7,1,9,6,5,0,4,13,11}, // permutation 6
{12,13,7,6,11,3,4,0,14,10,5,8,1,9,2}, // permutation 7
{2,3,9,12,4,13,14,6,5,7,10,11,0,8,1}, // permutation 8
{11,12,2,4,0,6,7,9,3,14,8,5,10,1,13} // permutation 9
};

// Seed: 353404920

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
};

struct S1 {
    int32_t g_3;
    uint64_t g_13;
    volatile int32_t g_62;
    volatile int32_t *g_61;
    volatile int32_t * volatile *g_60;
    uint64_t g_71[8];
    int32_t **g_72;
    VECTOR(int8_t, 4) g_81;
    VECTOR(int32_t, 8) g_87;
    VECTOR(int8_t, 8) g_88;
    VECTOR(int16_t, 8) g_94;
    VECTOR(int16_t, 2) g_101;
    int32_t g_106;
    uint16_t g_112;
    VECTOR(uint16_t, 2) g_117;
    union U0 g_142;
    union U0 * volatile g_141;
    union U0 * volatile * volatile g_143;
    VECTOR(uint64_t, 2) g_148;
    uint8_t g_161;
    uint8_t g_163;
    uint8_t g_167;
    VECTOR(uint8_t, 2) g_169;
    uint8_t *g_181;
    volatile VECTOR(int32_t, 4) g_222;
    int32_t ** volatile g_247[5];
    int64_t g_294;
    volatile VECTOR(int8_t, 8) g_298;
    union U0 **g_335;
    VECTOR(int32_t, 8) g_391;
    VECTOR(int8_t, 2) g_406;
    VECTOR(int8_t, 16) g_408;
    uint32_t g_416;
    uint32_t *g_415;
    int32_t g_419;
    int8_t *g_450;
    int8_t **g_449;
    uint32_t g_463;
    volatile VECTOR(int16_t, 4) g_477;
    VECTOR(int8_t, 16) g_480;
    VECTOR(uint32_t, 16) g_484;
    VECTOR(uint32_t, 8) g_485;
    VECTOR(int32_t, 16) g_535;
    int32_t *g_575;
    int32_t ** volatile g_574;
    VECTOR(int16_t, 4) g_630;
    volatile VECTOR(int8_t, 2) g_636;
    volatile VECTOR(int32_t, 16) g_641;
    volatile int32_t * volatile g_688;
    VECTOR(uint32_t, 8) g_693;
    volatile VECTOR(uint32_t, 8) g_694;
    volatile VECTOR(uint32_t, 16) g_696;
    volatile VECTOR(uint32_t, 4) g_698;
    volatile VECTOR(uint16_t, 16) g_707;
    uint16_t *g_733;
    uint16_t **g_732;
    uint16_t *** volatile g_731;
    VECTOR(int8_t, 8) g_748;
    VECTOR(uint16_t, 4) g_756;
    volatile VECTOR(uint32_t, 2) g_774;
    volatile VECTOR(uint32_t, 8) g_775;
    volatile VECTOR(int16_t, 4) g_827;
    volatile VECTOR(int16_t, 4) g_881;
    volatile uint64_t * volatile * volatile g_895;
    VECTOR(int8_t, 4) g_925;
    VECTOR(int8_t, 8) g_926;
    union U0 *g_933;
    VECTOR(int16_t, 8) g_947;
    volatile VECTOR(int16_t, 4) g_963;
    int16_t *g_970;
    int16_t **g_969;
    VECTOR(int64_t, 2) g_972;
    volatile VECTOR(int64_t, 16) g_984;
    volatile VECTOR(int32_t, 8) g_991;
    VECTOR(int8_t, 8) g_1012;
    VECTOR(int8_t, 4) g_1019;
    VECTOR(int8_t, 16) g_1020;
    VECTOR(int8_t, 2) g_1021;
    int16_t g_1026;
    volatile VECTOR(uint64_t, 8) g_1064;
    volatile uint8_t *g_1124;
    volatile uint8_t **g_1123[6];
    volatile uint8_t *** volatile g_1122;
    union U0 ** volatile g_1126;
    int32_t *g_1130;
    VECTOR(uint64_t, 2) g_1150;
    int16_t g_1171;
    volatile uint16_t g_1173;
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
uint32_t  func_1(struct S1 * p_1182);
uint16_t  func_18(int32_t * p_19, int32_t * p_20, int64_t  p_21, struct S1 * p_1182);
int32_t * func_22(int32_t * p_23, int64_t  p_24, union U0  p_25, uint32_t  p_26, int32_t * p_27, struct S1 * p_1182);
int32_t * func_28(int32_t * p_29, int32_t * p_30, uint8_t  p_31, uint32_t  p_32, struct S1 * p_1182);
int32_t * func_33(int32_t * p_34, int32_t * p_35, int16_t  p_36, int32_t * p_37, uint16_t  p_38, struct S1 * p_1182);
int32_t * func_39(uint8_t  p_40, int32_t * p_41, struct S1 * p_1182);
int32_t * func_46(uint32_t  p_47, union U0  p_48, int32_t  p_49, uint32_t  p_50, int64_t  p_51, struct S1 * p_1182);
int16_t  func_58(int64_t  p_59, struct S1 * p_1182);
int64_t  func_63(int32_t ** p_64, int32_t * p_65, uint32_t  p_66, uint32_t  p_67, int32_t ** p_68, struct S1 * p_1182);
int32_t  func_77(uint64_t * p_78, uint32_t  p_79, struct S1 * p_1182);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1182->g_13 p_1182->g_60 p_1182->g_3 p_1182->g_71 p_1182->g_72 p_1182->g_61 p_1182->g_62 p_1182->g_106 p_1182->g_117 p_1182->g_87 p_1182->g_141 p_1182->g_143 p_1182->g_81 p_1182->g_94 p_1182->g_169 p_1182->g_112 p_1182->g_88 p_1182->g_222 p_1182->g_163 p_1182->g_161 p_1182->g_335 p_1182->g_101 p_1182->g_449 p_1182->l_comm_values p_1182->g_535 p_1182->g_463 p_1182->g_148 p_1182->g_484 p_1182->g_480 p_1182->g_574 p_1182->g_391 p_1182->g_630 p_1182->g_636 p_1182->g_641 p_1182->g_485 p_1182->g_575 p_1182->g_693 p_1182->g_694 p_1182->g_696 p_1182->g_698 p_1182->g_707 p_1182->g_294 p_1182->g_731 p_1182->g_406 p_1182->g_748 p_1182->g_298 p_1182->g_756 p_1182->g_142 p_1182->g_774 p_1182->g_775 p_1182->g_733 p_1182->g_408 p_1182->g_827 p_1182->g_416 p_1182->g_895 p_1182->g_1122 p_1182->g_1126 p_1182->g_1019 p_1182->g_1130 p_1182->g_991 p_1182->g_1150 p_1182->g_1171 p_1182->g_1173 p_1182->g_477
 * writes: p_1182->g_13 p_1182->g_71 p_1182->g_3 p_1182->g_106 p_1182->g_62 p_1182->g_141 p_1182->g_161 p_1182->g_87 p_1182->g_61 p_1182->g_117 p_1182->g_112 p_1182->g_72 p_1182->l_comm_values p_1182->g_294 p_1182->g_101 p_1182->g_575 p_1182->g_391 p_1182->g_88 p_1182->g_416 p_1182->g_463 p_1182->g_535 p_1182->g_732 p_1182->g_167 p_1182->g_94 p_1182->g_408 p_1182->g_163 p_1182->g_933 p_1182->g_926 p_1182->g_1171 p_1182->g_1173
 */
uint32_t  func_1(struct S1 * p_1182)
{ /* block id: 4 */
    int32_t *l_2 = &p_1182->g_3;
    int32_t *l_4 = &p_1182->g_3;
    int32_t *l_5 = &p_1182->g_3;
    int32_t *l_6 = &p_1182->g_3;
    int32_t *l_7 = &p_1182->g_3;
    int32_t *l_8 = &p_1182->g_3;
    int32_t *l_9 = &p_1182->g_3;
    int32_t *l_10 = &p_1182->g_3;
    int32_t *l_11 = &p_1182->g_3;
    int32_t *l_12 = &p_1182->g_3;
    int32_t *l_44[9] = {&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3,&p_1182->g_3};
    int32_t **l_45 = &l_2;
    uint64_t *l_70 = &p_1182->g_71[0];
    union U0 l_567 = {-2L};
    int32_t l_1166[8][2] = {{0L,(-2L)},{0L,(-2L)},{0L,(-2L)},{0L,(-2L)},{0L,(-2L)},{0L,(-2L)},{0L,(-2L)},{0L,(-2L)}};
    int64_t l_1172[5] = {0x42A6452FFAD50D5CL,0x42A6452FFAD50D5CL,0x42A6452FFAD50D5CL,0x42A6452FFAD50D5CL,0x42A6452FFAD50D5CL};
    int8_t l_1176 = 0x13L;
    int8_t l_1177 = 0x42L;
    int64_t l_1178 = 0x77B509C419336C10L;
    uint32_t l_1179 = 1UL;
    int i, j;
    --p_1182->g_13;
    p_1182->g_1171 |= (safe_lshift_func_uint16_t_u_s(func_18(func_22(func_28(func_33(&p_1182->g_3, ((*l_45) = func_39((safe_sub_func_int16_t_s_s((((*l_45) = l_44[8]) == &p_1182->g_3), 0x3A60L)), (l_6 = func_46((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(func_58(((&l_4 != p_1182->g_60) != func_63(((safe_unary_minus_func_int8_t_s(((*l_5) | (((VECTOR(uint64_t, 8))(5UL, ((*l_70) ^= p_1182->g_3), ((*l_70) = (*l_6)), 0xDA3BB1D4416DA84BL, ((VECTOR(uint64_t, 2))(0xD01CD43A1E2510A7L)), 18446744073709551608UL, 0x5BFEB1EC6C04840CL)).s2 , 1UL)))) , p_1182->g_72), l_4, (*l_4), (*l_5), &l_44[5], p_1182)), p_1182), (-1L))) == 0x26B98396L), 2)), p_1182->g_484.s3)), l_567, p_1182->g_94.s4, p_1182->g_484.se, p_1182->g_480.s5, p_1182)), p_1182)), p_1182->g_406.x, l_44[6], p_1182->g_406.x, p_1182), l_11, p_1182->g_630.w, p_1182->g_748.s7, p_1182), p_1182->g_756.w, l_567, p_1182->g_1019.w, p_1182->g_1130, p_1182), p_1182->g_1130, l_1166[4][1], p_1182), 4));
    --p_1182->g_1173;
    l_1179--;
    return p_1182->g_477.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_18(int32_t * p_19, int32_t * p_20, int64_t  p_21, struct S1 * p_1182)
{ /* block id: 412 */
    uint16_t l_1170 = 0x7090L;
    if ((atomic_inc(&p_1182->g_atomic_input[74 * get_linear_group_id() + 61]) == 2))
    { /* block id: 414 */
        VECTOR(int32_t, 2) l_1167 = (VECTOR(int32_t, 2))(0x38863C5FL, 0x7FA5D7C5L);
        VECTOR(int32_t, 8) l_1168 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x12A693D8L), 0x12A693D8L), 0x12A693D8L, (-4L), 0x12A693D8L);
        uint64_t l_1169 = 1UL;
        int i;
        l_1169 = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1167.xxyyxyxyyyyyxyyx)).hi)).s57, ((VECTOR(int32_t, 2))(l_1168.s33))))).lo;
        unsigned int result = 0;
        result += l_1167.y;
        result += l_1167.x;
        result += l_1168.s7;
        result += l_1168.s6;
        result += l_1168.s5;
        result += l_1168.s4;
        result += l_1168.s3;
        result += l_1168.s2;
        result += l_1168.s1;
        result += l_1168.s0;
        result += l_1169;
        atomic_add(&p_1182->g_special_values[74 * get_linear_group_id() + 61], result);
    }
    else
    { /* block id: 416 */
        (1 + 1);
    }
    return l_1170;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_60 p_1182->g_61 p_1182->g_62 p_1182->g_148 p_1182->g_991 p_1182->g_1150 p_1182->g_143 p_1182->g_141 p_1182->g_748 p_1182->g_733 p_1182->g_112 p_1182->g_3 p_1182->g_480
 * writes: p_1182->g_62 p_1182->g_926 p_1182->g_294 p_1182->g_13 p_1182->g_3
 */
int32_t * func_22(int32_t * p_23, int64_t  p_24, union U0  p_25, uint32_t  p_26, int32_t * p_27, struct S1 * p_1182)
{ /* block id: 402 */
    int32_t *l_1131 = (void*)0;
    int32_t *l_1132 = &p_1182->g_3;
    int32_t *l_1133 = (void*)0;
    int32_t *l_1134 = (void*)0;
    int32_t *l_1135 = (void*)0;
    int32_t *l_1136 = (void*)0;
    int32_t *l_1137[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1182->g_3,&p_1182->g_106}};
    uint64_t l_1138[4] = {0x191C64B2D4ED6961L,0x191C64B2D4ED6961L,0x191C64B2D4ED6961L,0x191C64B2D4ED6961L};
    int64_t l_1141 = 1L;
    int64_t l_1144[2];
    VECTOR(uint64_t, 8) l_1147 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x8A92BA3AC81F6FAAL), 0x8A92BA3AC81F6FAAL), 0x8A92BA3AC81F6FAAL, 1UL, 0x8A92BA3AC81F6FAAL);
    int8_t *l_1148 = (void*)0;
    int8_t *l_1149 = (void*)0;
    VECTOR(uint16_t, 16) l_1153 = (VECTOR(uint16_t, 16))(0x03B2L, (VECTOR(uint16_t, 4))(0x03B2L, (VECTOR(uint16_t, 2))(0x03B2L, 0xDA6FL), 0xDA6FL), 0xDA6FL, 0x03B2L, 0xDA6FL, (VECTOR(uint16_t, 2))(0x03B2L, 0xDA6FL), (VECTOR(uint16_t, 2))(0x03B2L, 0xDA6FL), 0x03B2L, 0xDA6FL, 0x03B2L, 0xDA6FL);
    int64_t *l_1156 = (void*)0;
    int64_t *l_1157 = &p_1182->g_294;
    union U0 l_1162 = {-1L};
    uint64_t *l_1163 = &p_1182->g_13;
    uint64_t *l_1164 = &l_1138[3];
    int16_t l_1165[1][5][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1144[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_1165[i][j][k] = 0x24FDL;
        }
    }
    l_1138[0]--;
    (**p_1182->g_60) ^= (~l_1141);
    (**p_1182->g_60) = (p_1182->g_148.x , (safe_sub_func_int64_t_s_s((l_1144[1] || p_24), (GROUP_DIVERGE(0, 1) == (((1L <= (((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 2))(l_1147.s57)), ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))((4L < (p_1182->g_926.s0 = p_1182->g_991.s4)), ((VECTOR(uint64_t, 2))(p_1182->g_1150.yx)), 0x8C831E27E5A7D807L)).lo, ((VECTOR(uint64_t, 16))(((*l_1164) ^= ((*l_1132) = ((*l_1163) = ((((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_1153.s4bb1985f)).s6333337745657230)).s254b, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x0D37L, (((*p_1182->g_143) != ((safe_rshift_func_uint16_t_u_s((((*l_1157) = (-1L)) >= (safe_lshift_func_int16_t_s_u((((safe_div_func_uint64_t_u_u(p_24, 1L)) < p_25.f0) & p_1182->g_748.s3), FAKE_DIVERGE(p_1182->local_2_offset, get_local_id(2), 10)))), p_24)) , &p_1182->g_142)) , p_25.f0), 65528UL, 65535UL)).zywzyxwx)).odd))))).odd, (uint16_t)(*p_1182->g_733)))), ((VECTOR(uint16_t, 2))(0x4C2EL))))).yyyxxyyx, (uint32_t)0x6CA721ABL))).s7, (*l_1132))) == 0x5406L) , l_1162) , p_1182->g_480.sc) , p_23) == p_27)))), 0x0A8018A84CC75E35L, ((VECTOR(uint64_t, 8))(0xFE0B350EBA123F41L)), ((VECTOR(uint64_t, 4))(0xD09F10802DFA4221L)), 0xE94C35C29AC33E74L, 0x87FA8FB5924EF9EDL)).sf7))).xxyxyyxyyyyyyyyx, (uint64_t)l_1165[0][2][0]))).sd0))).odd != GROUP_DIVERGE(1, 1))) == 0x1812L) != p_26)))));
    return l_1133;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_294 p_1182->g_61 p_1182->g_148 p_1182->g_94 p_1182->g_416 p_1182->g_3 p_1182->g_60 p_1182->g_62 p_1182->g_895 p_1182->g_574 p_1182->g_575 p_1182->g_1122 p_1182->g_1126
 * writes: p_1182->g_294 p_1182->g_163 p_1182->g_3 p_1182->g_62 p_1182->g_161 p_1182->g_575 p_1182->g_106 p_1182->g_933
 */
int32_t * func_28(int32_t * p_29, int32_t * p_30, uint8_t  p_31, uint32_t  p_32, struct S1 * p_1182)
{ /* block id: 309 */
    int64_t l_898 = 1L;
    uint8_t **l_906[9][9] = {{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181},{&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181,&p_1182->g_181}};
    uint8_t ***l_905[3][7] = {{&l_906[5][4],&l_906[1][1],&l_906[2][0],&l_906[4][1],&l_906[1][1],&l_906[4][1],&l_906[2][0]},{&l_906[5][4],&l_906[1][1],&l_906[2][0],&l_906[4][1],&l_906[1][1],&l_906[4][1],&l_906[2][0]},{&l_906[5][4],&l_906[1][1],&l_906[2][0],&l_906[4][1],&l_906[1][1],&l_906[4][1],&l_906[2][0]}};
    int32_t l_910[9][4];
    union U0 *l_929 = &p_1182->g_142;
    union U0 *l_931 = &p_1182->g_142;
    VECTOR(uint64_t, 2) l_1005 = (VECTOR(uint64_t, 2))(1UL, 0x27FEC3270826891DL);
    VECTOR(int8_t, 2) l_1014 = (VECTOR(int8_t, 2))(1L, 0x43L);
    VECTOR(int8_t, 4) l_1015 = (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, (-6L)), (-6L));
    int8_t l_1024 = 0L;
    VECTOR(uint16_t, 8) l_1044 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xA6F6L), 0xA6F6L), 0xA6F6L, 1UL, 0xA6F6L);
    int32_t l_1068 = 0x35C77963L;
    uint8_t l_1069 = 0xC0L;
    volatile uint64_t * volatile * volatile l_1089 = (void*)0;/* VOLATILE GLOBAL l_1089 */
    uint32_t l_1113[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int32_t *l_1129 = (void*)0;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
            l_910[i][j] = 6L;
    }
    for (p_1182->g_294 = 12; (p_1182->g_294 == (-2)); p_1182->g_294 = safe_sub_func_int32_t_s_s(p_1182->g_294, 7))
    { /* block id: 312 */
        uint64_t *l_878 = (void*)0;
        int32_t l_887 = (-7L);
        uint64_t *l_894[5][5] = {{&p_1182->g_71[0],&p_1182->g_71[5],&p_1182->g_71[0],(void*)0,&p_1182->g_71[0]},{&p_1182->g_71[0],&p_1182->g_71[5],&p_1182->g_71[0],(void*)0,&p_1182->g_71[0]},{&p_1182->g_71[0],&p_1182->g_71[5],&p_1182->g_71[0],(void*)0,&p_1182->g_71[0]},{&p_1182->g_71[0],&p_1182->g_71[5],&p_1182->g_71[0],(void*)0,&p_1182->g_71[0]},{&p_1182->g_71[0],&p_1182->g_71[5],&p_1182->g_71[0],(void*)0,&p_1182->g_71[0]}};
        uint64_t **l_893 = &l_894[2][0];
        VECTOR(int8_t, 8) l_924 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x46L), 0x46L), 0x46L, 3L, 0x46L);
        int32_t l_948[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        VECTOR(int32_t, 16) l_992 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-2L)), (-2L)), (-2L), 9L, (-2L), (VECTOR(int32_t, 2))(9L, (-2L)), (VECTOR(int32_t, 2))(9L, (-2L)), 9L, (-2L), 9L, (-2L));
        union U0 *l_999 = &p_1182->g_142;
        int8_t **l_1066 = &p_1182->g_450;
        VECTOR(uint16_t, 8) l_1074 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xE629L), 0xE629L), 0xE629L, 2UL, 0xE629L);
        int8_t l_1087 = (-8L);
        int i, j;
        for (p_1182->g_163 = 0; (p_1182->g_163 <= 17); p_1182->g_163 = safe_add_func_int8_t_s_s(p_1182->g_163, 3))
        { /* block id: 315 */
            uint64_t *l_886 = (void*)0;
            uint64_t *l_888 = (void*)0;
            int32_t l_899 = 0x37CA8EABL;
            uint8_t **l_907 = &p_1182->g_181;
            VECTOR(uint64_t, 2) l_908 = (VECTOR(uint64_t, 2))(0xDE01BCD30CAAC088L, 0x2308B51630FF5E37L);
            VECTOR(int32_t, 2) l_964 = (VECTOR(int32_t, 2))(0x2260B99DL, 0L);
            int16_t **l_971 = &p_1182->g_970;
            VECTOR(uint64_t, 16) l_973 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint64_t, 2))(8UL, 0UL), (VECTOR(uint64_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL);
            union U0 *l_1000 = &p_1182->g_142;
            VECTOR(int8_t, 8) l_1022 = (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 1L), 1L), 1L, 0x50L, 1L);
            int8_t l_1023 = 1L;
            uint32_t l_1036 = 4294967294UL;
            VECTOR(int32_t, 8) l_1037 = (VECTOR(int32_t, 8))(0x29775037L, (VECTOR(int32_t, 4))(0x29775037L, (VECTOR(int32_t, 2))(0x29775037L, (-1L)), (-1L)), (-1L), 0x29775037L, (-1L));
            VECTOR(int32_t, 4) l_1041 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x756E801CL), 0x756E801CL);
            VECTOR(uint64_t, 16) l_1063 = (VECTOR(uint64_t, 16))(0x8D9998B3FB52371DL, (VECTOR(uint64_t, 4))(0x8D9998B3FB52371DL, (VECTOR(uint64_t, 2))(0x8D9998B3FB52371DL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 0x8D9998B3FB52371DL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(0x8D9998B3FB52371DL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(0x8D9998B3FB52371DL, 18446744073709551613UL), 0x8D9998B3FB52371DL, 18446744073709551613UL, 0x8D9998B3FB52371DL, 18446744073709551613UL);
            int32_t **l_1088 = &p_1182->g_575;
            int i;
            if (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((*p_30) = (((safe_mul_func_uint8_t_u_u((l_878 == ((safe_mul_func_uint16_t_u_u((p_32 , ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1182->g_881.zz)), 0x1731L, (-5L), 1L, 0L, ((VECTOR(int16_t, 2))(1L, (-1L))), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(0x5D19L, 5L, 0x2F23L, 0L)).even, ((VECTOR(int16_t, 16))((p_1182->g_630.y = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(0x2A97L, ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((p_1182->g_13--), ((((((safe_lshift_func_int16_t_s_u((l_893 != p_1182->g_895), (((safe_mod_func_int16_t_s_s(p_32, 65535UL)) | p_1182->g_463) , l_898))) <= p_1182->g_169.x) >= 0x76L) | l_887) >= l_899) & 6UL))), p_32)) || 0UL), (-8L), (-1L), (-1L), 8L, 0x4459L, 0L)).odd, ((VECTOR(int16_t, 4))(8L))))).hi)).hi), l_899, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 4))(9L)), l_898, 0x63D7L, 0x7710L, l_898, 0L, ((VECTOR(int16_t, 2))(0x7B46L)), 5L)).sec, ((VECTOR(int16_t, 2))((-7L)))))), 0x78A7L, 0x7CF6L, 1L, ((VECTOR(int16_t, 2))(0x431FL)), (-1L)))))).s1f, (uint16_t)65527UL))).lo), l_898)) , (void*)0)), p_32)) & p_31) <= 18446744073709551606UL)), 0L, 3L, 0L)).zzyyywzz, ((VECTOR(int32_t, 8))(4L))))).s1)
            { /* block id: 319 */
                uint8_t **l_904 = &p_1182->g_181;
                uint8_t ***l_903 = &l_904;
                uint8_t ****l_902[10][10][2] = {{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}},{{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0},{&l_903,(void*)0}}};
                int16_t *l_909 = (void*)0;
                union U0 **l_930 = &l_929;
                union U0 **l_932 = (void*)0;
                VECTOR(uint8_t, 16) l_934 = (VECTOR(uint8_t, 16))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 1UL), 1UL), 1UL, 0xE7L, 1UL, (VECTOR(uint8_t, 2))(0xE7L, 1UL), (VECTOR(uint8_t, 2))(0xE7L, 1UL), 0xE7L, 1UL, 0xE7L, 1UL);
                int16_t *l_949 = (void*)0;
                VECTOR(int32_t, 2) l_950 = (VECTOR(int32_t, 2))((-6L), 1L);
                int i, j, k;
                (*p_30) = (((safe_rshift_func_uint8_t_u_s((l_899 = ((l_905[0][0] = (void*)0) == (void*)0)), 5)) , (l_907 != (void*)0)) && p_32);
                (*p_1182->g_61) = (((l_899 > ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(l_908.xxyx)).xwzwxzzxwxwyxwxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((((l_910[0][2] ^= 0x462CL) , (((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((((FAKE_DIVERGE(p_1182->group_2_offset, get_group_id(2), 10) ^ p_1182->g_148.y) >= (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_924.s7522)).even)).xxyx, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(0x3FL, 7L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1182->g_925.ww)))), ((VECTOR(int8_t, 16))(p_1182->g_926.s7402300442702723)).s2, 0x62L, 0x3EL, (-1L))).s2536356100243025, (int8_t)(safe_mul_func_int8_t_s_s((((((*l_930) = l_929) != (p_1182->g_933 = l_931)) > ((VECTOR(uint8_t, 4))(l_934.s1586)).z) <= 0xEB957599L), (safe_rshift_func_int8_t_s_s(((**p_1182->g_143) , (safe_sub_func_uint16_t_u_u(((l_950.y |= ((l_948[6] = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_887 = ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1182->g_947.s61)).xxyy)).y), (0x7A1ACE0DL & (*p_30)))), 0)), l_899)) && 0x6349B42BL) & 0xDA688875L), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 2))(1UL)), 1UL)).s4417246163132060, ((VECTOR(uint32_t, 16))(4294967288UL))))).sa, l_898))) , 0x3CCEL)) < 65533UL), FAKE_DIVERGE(p_1182->group_1_offset, get_group_id(1), 10)))), l_899))))))).sca5c))).w, p_31)) , 0x1DL) <= l_908.y)) || p_31), 5)))), 1)) ^ l_908.y), 8UL)) | p_1182->g_112) != l_924.s0) <= p_31) <= p_32), FAKE_DIVERGE(p_1182->local_0_offset, get_local_id(0), 10))), l_924.s5)) ^ (*p_1182->g_733)) , &l_903)) == (void*)0), 0x349F7E067FA11632L, ((VECTOR(uint64_t, 2))(0x0050A4CDC0F1A185L)), 18446744073709551615UL, 0UL, 0x6B9F8890FF7A101EL, 18446744073709551615UL)).s0710415776356765)), ((VECTOR(uint64_t, 16))(0UL))))))).s4cdd, ((VECTOR(uint64_t, 4))(1UL))))).y) != 0L) & p_31);
            }
            else
            { /* block id: 330 */
                int32_t l_953[4];
                VECTOR(int16_t, 8) l_965 = (VECTOR(int16_t, 8))(0x219CL, (VECTOR(int16_t, 4))(0x219CL, (VECTOR(int16_t, 2))(0x219CL, 0x0DA6L), 0x0DA6L), 0x0DA6L, 0x219CL, 0x0DA6L);
                int16_t *l_968 = (void*)0;
                int16_t **l_967 = &l_968;
                int16_t ***l_966 = &l_967;
                VECTOR(int8_t, 4) l_1017 = (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x7DL), 0x7DL);
                VECTOR(int32_t, 2) l_1040 = (VECTOR(int32_t, 2))(0x5E74F4B8L, 9L);
                union U0 *l_1065 = &p_1182->g_142;
                int16_t *l_1070 = (void*)0;
                int16_t *l_1071[6][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                VECTOR(uint16_t, 16) l_1085 = (VECTOR(uint16_t, 16))(0x6494L, (VECTOR(uint16_t, 4))(0x6494L, (VECTOR(uint16_t, 2))(0x6494L, 0xE7DEL), 0xE7DEL), 0xE7DEL, 0x6494L, 0xE7DEL, (VECTOR(uint16_t, 2))(0x6494L, 0xE7DEL), (VECTOR(uint16_t, 2))(0x6494L, 0xE7DEL), 0x6494L, 0xE7DEL, 0x6494L, 0xE7DEL);
                int64_t *l_1086 = &l_898;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_953[i] = 1L;
                (*p_1182->g_61) = ((safe_div_func_uint32_t_u_u((l_953[2] && (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_953[2] = (((p_1182->g_148.y && (safe_rshift_func_uint16_t_u_u(p_31, ((safe_mul_func_uint16_t_u_u(0x7EFAL, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))((*p_30), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_1182->g_963.yxxwwyxwzyzywyyy)).s84)).hi)), 0x4DF78193L, 0x2D0AFC64L, (-2L))))), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_964.yyxyyyyx)).s6205550704406147)).hi, (int32_t)(((VECTOR(int16_t, 4))(l_965.s3154)).z || (((p_1182->g_969 = ((*l_966) = (void*)0)) != l_971) == (FAKE_DIVERGE(p_1182->local_1_offset, get_local_id(1), 10) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1182->g_972.yx)).yyxx)).w > ((((((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_973.s57)), 0x2F7BF7DB2D116141L, 0x50D1FE618DCCAD60L)), ((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551606UL)), 0x7D687CEC7D2FEA90L)).s2 || (safe_rshift_func_int8_t_s_u(l_973.se, 5))) , l_907) == &p_1182->g_181) > 0x4238L)))))))), (-8L), 0x663BEC51L)).s26, ((VECTOR(int32_t, 2))(0x719BFF94L))))).xyyyxyyy)).s15, ((VECTOR(int32_t, 2))((-3L)))))), 0L, 0x68365EA7L)).z <= 0x517E2ECAL))) >= p_1182->g_94.s2)))) && p_32) || p_1182->g_416)), p_31)), p_32))), l_964.x)) , l_965.s4);
                for (p_1182->g_161 = 0; (p_1182->g_161 > 39); p_1182->g_161++)
                { /* block id: 337 */
                    uint32_t *l_987 = &p_1182->g_463;
                    VECTOR(uint32_t, 2) l_990 = (VECTOR(uint32_t, 2))(0UL, 0xB3196538L);
                    union U0 **l_1001 = (void*)0;
                    union U0 **l_1002 = &l_929;
                    VECTOR(int8_t, 4) l_1013 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0L), 0L);
                    VECTOR(int8_t, 8) l_1016 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 5L), 5L), 5L, (-2L), 5L);
                    VECTOR(int8_t, 8) l_1018 = (VECTOR(int8_t, 8))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x3CL), 0x3CL), 0x3CL, 0x30L, 0x3CL);
                    int64_t *l_1025 = &l_898;
                    int64_t *l_1027 = (void*)0;
                    int64_t *l_1028 = (void*)0;
                    int64_t *l_1029 = (void*)0;
                    int64_t *l_1030 = (void*)0;
                    int64_t *l_1031 = (void*)0;
                    int64_t *l_1032 = (void*)0;
                    int64_t *l_1033 = (void*)0;
                    int64_t *l_1034 = (void*)0;
                    int64_t *l_1035 = (void*)0;
                    int32_t ***l_1047 = &p_1182->g_72;
                    int i;
                    if ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(p_1182->g_984.s64)).yyyx, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(0x75916AC00D206D55L, 2L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_32, ((l_1036 = (safe_mod_func_int16_t_s_s((((*l_987)--) < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_990.xx)).yyyxyyxy)).s6), ((((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1182->g_991.s4246072352637373)).s76e6)).lo)).xxxy)).even, ((VECTOR(int32_t, 8))(0x35F1A44FL, 0x677CB05EL, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_992.sbd)))), 2L)), 0x5B48C2CEL, 0x5216C4C5L)).s72))).hi , (((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((l_999 == ((*l_1002) = (l_1000 = &p_1182->g_142))), ((GROUP_DIVERGE(2, 1) && (safe_div_func_uint64_t_u_u(((**p_1182->g_143) , ((VECTOR(uint64_t, 4))(l_1005.xyyx)).w), (safe_add_func_int64_t_s_s(l_908.y, (((l_910[6][1] = ((*l_1025) ^= (l_990.y & (safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(p_1182->g_1012.s2741)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))((-7L), 0x68L)).xyyyxxxxyxxxyxyx, ((VECTOR(int8_t, 4))(l_1013.wwzz)).ywywzywyzxzzzzzy))).s9e))))))), ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_1014.yxxy)).yxzzzwwzzzzwzzxw)).s82)).yyxy, ((VECTOR(int8_t, 4))(l_1015.ywxw)), ((VECTOR(int8_t, 2))(l_1016.s53)).xxxx))), (-1L), ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(0L, (-3L), 8L, (-1L))).xzxyzwwyywzxxwxy, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(l_1017.zx)), ((VECTOR(int8_t, 4))(l_1018.s5772)).lo, ((VECTOR(int8_t, 16))(0x4BL, 0L, (-1L), ((VECTOR(int8_t, 8))((-4L), ((*l_999) , ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(p_1182->g_1019.zz)).xyyxyxxyxyxxyyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(p_1182->g_1020.sa4)).yyxy, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(p_1182->g_1021.yyxxyyyx)).s16, ((VECTOR(int8_t, 4))(l_1022.s0437)).odd))).yxyx))).even)), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_964.y, 0x57L, 0x72L, 7L, ((VECTOR(int8_t, 2))(5L)), ((VECTOR(int8_t, 2))((-1L))), p_32, ((VECTOR(int8_t, 2))((-6L))), ((VECTOR(int8_t, 4))(7L)), 1L)).sfa, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0L))))), (-1L), ((VECTOR(int8_t, 8))(1L)), 0x24L, 0x42L, 0x56L))))).s5), l_1023, l_1024, 0x01L, ((VECTOR(int8_t, 2))((-1L))), 0x67L)), ((VECTOR(int8_t, 4))(0L)), (-7L))).s94))).yyxx))).zywzzyyzzyxxwxwz))).sc3, ((VECTOR(int8_t, 2))(0x05L)), ((VECTOR(int8_t, 2))(0x0AL))))).xxxyyxxy, ((VECTOR(int8_t, 8))(1L))))), (-1L))).s7e)).odd > 0L), (*p_1182->g_733))) | p_32) >= p_32), l_910[0][2]))))) , l_1017.y) < p_31)))))) && 0x2D9BL))) || l_1022.s7) < p_31), (-1L))) | (-10L)), p_1182->g_1026)) , GROUP_DIVERGE(0, 1)) >= l_1016.s6)) , (*p_1182->g_733))))) == (-1L)), 0L, p_32, ((VECTOR(int64_t, 8))(0x678CA92EFBD3FD16L)), l_990.y, p_1182->g_391.s5, 0x57B3B5E527E9BCB7L, 7L)).sc, (-6L), 0x15F3CED8021868F8L, 1L)).hi))).yxyx))).zzyzwzwzzzxzyxww, ((VECTOR(int64_t, 16))(0x5E7F72904C1822D4L)), ((VECTOR(int64_t, 16))(1L))))).s76)).odd || l_965.s2) & l_1024) <= p_32) & l_992.sc), p_32)) , p_32), l_1016.s7)), 1L)))
                    { /* block id: 344 */
                        uint64_t *l_1048 = (void*)0;
                        uint64_t *l_1049 = (void*)0;
                        uint64_t *l_1050 = (void*)0;
                        uint64_t *l_1051 = &p_1182->g_13;
                        VECTOR(int32_t, 4) l_1062 = (VECTOR(int32_t, 4))(0x73CFBA33L, (VECTOR(int32_t, 2))(0x73CFBA33L, 5L), 5L);
                        int8_t ***l_1067 = (void*)0;
                        int i;
                        (*p_30) = (l_910[0][2] &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_1037.s04023116)).s50, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((safe_mod_func_int16_t_s_s(0x6966L, l_1022.s7)) , (!(*p_30))), ((VECTOR(int32_t, 8))(l_1040.yyxxyyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(5L, (-1L))).yxxy)), ((VECTOR(int32_t, 2))(0x570B1E7CL, 1L)), 0x23E376CBL)).se144)))).even)), ((VECTOR(int32_t, 4))(l_1041.xwzy)).lo))))).odd);
                        (*p_30) ^= (safe_div_func_int16_t_s_s(l_1015.x, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1044.s14)), ((p_1182->g_148.y = (((*l_1051) ^= (safe_lshift_func_uint8_t_u_s((l_1047 == &p_1182->g_247[4]), 3))) <= (safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(l_1062.w, 5)), ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(l_1063.s46a3ba584e0fecc7)).se004, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1182->g_1064.s27401334)).s5004241711164422)).scaa2))).z)) , (((**p_1182->g_60) && (p_32 < (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((void*)0 != l_1065), (((p_1182->g_449 = l_1066) != &p_1182->g_450) || p_31), 7L, 0x0CA6E582L)).hi, ((VECTOR(int32_t, 2))(0x1E409CD2L))))).xyxxyxyy)).s5 == 0x25B94A11L))) , p_31)) <= l_1062.w), 0UL)), l_908.y)) , 0x7D5F0B2D545D296CL) && (-1L)) & 9UL), 3)))) || l_1017.x), ((VECTOR(uint16_t, 8))(0x8B54L)), 0x83CEL, p_32, 0xBC87L, 9UL, 0xB5D0L)).sd));
                        (**p_1182->g_60) |= l_1068;
                    }
                    else
                    { /* block id: 352 */
                        p_1182->g_3 &= (**p_1182->g_60);
                        if (l_965.s5)
                            break;
                        (*p_1182->g_61) |= l_1040.x;
                        if (l_1069)
                            continue;
                    }
                    if ((*p_30))
                        break;
                }
                (*p_1182->g_61) |= (((l_1040.x ^= 0x385AL) >= (safe_lshift_func_int8_t_s_s((((VECTOR(uint16_t, 16))(l_1074.s4533462172421212)).s3 <= (((((void*)0 != &p_1182->g_732) < (~(((safe_add_func_uint16_t_u_u(0x009BL, (safe_mod_func_int16_t_s_s((1L <= (safe_lshift_func_int16_t_s_s((((*p_30) = 0x54FCE10FL) < (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(l_1085.s6647b3e343c9ffdb)).hi, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x5DL, 0xACL)), (0x042FA084785FA5D4L | ((*l_1086) = ((VECTOR(int64_t, 2))(0x49F3AB375A821D00L, 0x118D4972B20D0C1CL)).odd)), p_32, ((VECTOR(uint8_t, 2))(1UL, 1UL)), (((*l_999) , 0x2582L) < l_1063.s9), ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(0x80L)), 0xA9L)), ((VECTOR(uint8_t, 16))(0UL))))).se2, ((VECTOR(uint8_t, 2))(0x29L))))).yyyyyyyx))).s1, 0x22E9L)), p_31))), l_1044.s7))), p_32)))) , 0x31495E32L) & l_1085.s4))) >= p_32) == l_908.y)), l_1087))) ^ GROUP_DIVERGE(1, 1));
            }
            (*l_1088) = p_29;
            l_1089 = p_1182->g_895;
            for (l_1087 = (-16); (l_1087 == 22); ++l_1087)
            { /* block id: 369 */
                int32_t *l_1092[10] = {&l_948[6],&l_887,&l_948[2],&l_887,&l_948[6],&l_948[6],&l_887,&l_948[2],&l_887,&l_948[6]};
                int i;
                return (*p_1182->g_574);
            }
        }
    }
    l_910[0][2] |= 1L;
    for (p_1182->g_294 = 0; (p_1182->g_294 == (-23)); p_1182->g_294--)
    { /* block id: 377 */
        int64_t l_1110 = 1L;
        int32_t l_1112 = (-1L);
        uint16_t l_1125 = 65533UL;
        int32_t **l_1128[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1128[i] = &p_1182->g_575;
        for (l_898 = 0; (l_898 != (-20)); l_898 = safe_sub_func_int32_t_s_s(l_898, 6))
        { /* block id: 380 */
            uint64_t l_1105 = 0x8FA1A9DFFA11F8BCL;
            int32_t l_1109 = 1L;
            int32_t l_1111 = 0x0C8836C7L;
            for (p_1182->g_106 = 0; (p_1182->g_106 < (-9)); p_1182->g_106 = safe_sub_func_int16_t_s_s(p_1182->g_106, 5))
            { /* block id: 383 */
                int32_t *l_1099 = (void*)0;
                int32_t *l_1100 = &l_910[0][3];
                int32_t *l_1101 = &l_910[0][2];
                int32_t *l_1102 = &l_1068;
                int32_t *l_1103 = &l_910[3][0];
                int32_t *l_1104[6][2] = {{&p_1182->g_3,&l_910[0][2]},{&p_1182->g_3,&l_910[0][2]},{&p_1182->g_3,&l_910[0][2]},{&p_1182->g_3,&l_910[0][2]},{&p_1182->g_3,&l_910[0][2]},{&p_1182->g_3,&l_910[0][2]}};
                int i, j;
                --l_1105;
            }
            (*p_30) = 0x4021221EL;
            if ((*p_30))
                break;
            if (l_1014.x)
            { /* block id: 388 */
                int32_t *l_1108[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1108[i] = &p_1182->g_106;
                ++l_1113[0];
            }
            else
            { /* block id: 390 */
                uint8_t ****l_1118 = (void*)0;
                uint8_t ****l_1119 = &l_905[0][0];
                uint8_t ***l_1121 = (void*)0;
                uint8_t ****l_1120 = &l_1121;
                int32_t *l_1127 = &l_1109;
                (**p_1182->g_60) = (safe_mul_func_int8_t_s_s((p_31 || 65529UL), ((p_31 & (((void*)0 == &l_1110) , (-1L))) | (l_1125 ^= (((*l_1120) = ((*l_1119) = &l_906[1][8])) != p_1182->g_1122)))));
                (*p_1182->g_1126) = l_931;
                return p_29;
            }
        }
        l_1129 = &l_1068;
    }
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_748 p_1182->g_298 p_1182->g_756 p_1182->g_294 p_1182->g_391 p_1182->g_3 p_1182->g_81 p_1182->g_143 p_1182->g_141 p_1182->g_142 p_1182->g_774 p_1182->g_775 p_1182->g_733 p_1182->g_112 p_1182->g_707 p_1182->l_comm_values p_1182->g_61 p_1182->g_408 p_1182->g_827 p_1182->g_60 p_1182->g_62 p_1182->g_163 p_1182->g_574 p_1182->g_575
 * writes: p_1182->g_3 p_1182->g_575 p_1182->g_167 p_1182->g_94 p_1182->g_62 p_1182->g_408 p_1182->l_comm_values p_1182->g_294 p_1182->g_391 p_1182->g_416
 */
int32_t * func_33(int32_t * p_34, int32_t * p_35, int16_t  p_36, int32_t * p_37, uint16_t  p_38, struct S1 * p_1182)
{ /* block id: 269 */
    VECTOR(int32_t, 8) l_734 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0014D361L), 0x0014D361L), 0x0014D361L, 0L, 0x0014D361L);
    VECTOR(uint8_t, 2) l_739 = (VECTOR(uint8_t, 2))(1UL, 255UL);
    uint8_t *l_749 = &p_1182->g_167;
    int32_t l_750 = (-1L);
    uint32_t l_751[1];
    union U0 l_754 = {1L};
    VECTOR(uint64_t, 2) l_755 = (VECTOR(uint64_t, 2))(1UL, 8UL);
    uint8_t l_759[4];
    VECTOR(uint8_t, 16) l_762 = (VECTOR(uint8_t, 16))(0xD5L, (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 1UL), 1UL), 1UL, 0xD5L, 1UL, (VECTOR(uint8_t, 2))(0xD5L, 1UL), (VECTOR(uint8_t, 2))(0xD5L, 1UL), 0xD5L, 1UL, 0xD5L, 1UL);
    int32_t **l_765 = &p_1182->g_575;
    uint16_t l_766 = 0UL;
    uint32_t l_767[5] = {0x916DD4ECL,0x916DD4ECL,0x916DD4ECL,0x916DD4ECL,0x916DD4ECL};
    uint8_t l_799 = 0xB3L;
    VECTOR(int32_t, 16) l_806 = (VECTOR(int32_t, 16))(0x403535C4L, (VECTOR(int32_t, 4))(0x403535C4L, (VECTOR(int32_t, 2))(0x403535C4L, 0x67A41431L), 0x67A41431L), 0x67A41431L, 0x403535C4L, 0x67A41431L, (VECTOR(int32_t, 2))(0x403535C4L, 0x67A41431L), (VECTOR(int32_t, 2))(0x403535C4L, 0x67A41431L), 0x403535C4L, 0x67A41431L, 0x403535C4L, 0x67A41431L);
    uint32_t l_809 = 0xB652D693L;
    VECTOR(int16_t, 8) l_822 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x020FL), 0x020FL), 0x020FL, (-1L), 0x020FL);
    VECTOR(int8_t, 2) l_828 = (VECTOR(int8_t, 2))((-2L), 0x37L);
    int i;
    for (i = 0; i < 1; i++)
        l_751[i] = 0x5784F953L;
    for (i = 0; i < 4; i++)
        l_759[i] = 0xD7L;
    (*p_37) = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_734.s7520045045266166)), (int32_t)((VECTOR(int32_t, 8))((safe_sub_func_int8_t_s_s(p_38, (safe_div_func_uint32_t_u_u((l_734.s3 | p_38), (((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(l_739.xx)).yxxx, (uint8_t)(((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((l_734.s7 | ((VECTOR(int8_t, 2))(p_1182->g_748.s44)).odd), (l_750 |= ((void*)0 != l_749)))) < l_751[0]) <= (safe_mul_func_uint8_t_u_u(l_739.y, 0x4BL))), p_36)), FAKE_DIVERGE(p_1182->group_0_offset, get_group_id(0), 10))), 255UL)) , l_734.s7) | l_739.y)))).ywxxzxwz)).s6 & (-7L)) , l_754) , FAKE_DIVERGE(p_1182->group_2_offset, get_group_id(2), 10)))))), l_739.y, ((VECTOR(int32_t, 2))(0x26223235L)), 0x4B99FD99L, l_739.x, 0x3BD916EAL, 0x58BDC991L)).s7))).s3;
    if (((((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(l_755.xxyyyxxyyyyxyyxx)).s38, ((VECTOR(uint64_t, 4))(p_1182->g_298.s4, ((VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL)), 1UL)).hi))).even == ((((VECTOR(uint16_t, 16))(p_1182->g_756.yywxxzxwzyyxyyxy)).s4 && (((safe_lshift_func_int16_t_s_s(l_739.x, (((!(((l_759[3] ^ (~(0x1F90A4A91C983F87L & (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(l_762.sf4)).yxxy, (uint8_t)((((+p_1182->g_294) >= (((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 8))(8L, (-1L), 0x44C49430L, (safe_rshift_func_uint16_t_u_s((((VECTOR(int16_t, 2))(0x2E82L, 0x4EB9L)).odd ^ ((((*l_765) = (void*)0) == p_35) ^ p_1182->g_391.s4)), 5)), 0x4BA38D5AL, ((VECTOR(int32_t, 2))(0x4CA0E39AL)), (-7L))).hi))).y , l_766)) == l_734.s4) < (*p_37)), (uint8_t)0xB7L))).wwwyzxyz, ((VECTOR(uint8_t, 8))(0x20L))))).s3, p_1182->g_81.x))))) , (*p_34)) != 0x68B34E9FL)) >= l_767[1]) != p_36))) , l_762.sc) == 0x2F7E3BAFL)) > 253UL)) ^ p_38))
    { /* block id: 273 */
        VECTOR(uint8_t, 4) l_780 = (VECTOR(uint8_t, 4))(0xACL, (VECTOR(uint8_t, 2))(0xACL, 0x11L), 0x11L);
        VECTOR(int8_t, 16) l_781 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x30L), 0x30L), 0x30L, (-1L), 0x30L, (VECTOR(int8_t, 2))((-1L), 0x30L), (VECTOR(int8_t, 2))((-1L), 0x30L), (-1L), 0x30L, (-1L), 0x30L);
        uint16_t ***l_790 = (void*)0;
        int32_t l_795 = 0x0685853EL;
        uint32_t *l_796 = &l_751[0];
        int32_t *l_800 = &l_750;
        int16_t *l_801 = (void*)0;
        int16_t *l_802 = (void*)0;
        int16_t *l_803[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int8_t *l_812 = (void*)0;
        int8_t *l_813 = (void*)0;
        int8_t *l_814 = (void*)0;
        int8_t *l_815 = (void*)0;
        int8_t *l_816 = (void*)0;
        int8_t *l_817[5][1];
        int64_t *l_833 = &p_1182->g_294;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_817[i][j] = (void*)0;
        }
        (*p_1182->g_61) = (safe_rshift_func_int16_t_s_u((p_1182->g_94.s2 = (~((**p_1182->g_143) , (l_734.s2 |= (p_36 = (((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(0x3168021952368EB9L, ((VECTOR(uint64_t, 2))(6UL, 0UL)).odd)), 15)) | (((*p_37) ^= (l_754 , ((VECTOR(int32_t, 2))(6L, (-8L))).odd)) ^ ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1182->g_774.yxxx)), ((VECTOR(uint32_t, 4))(p_1182->g_775.s3617)))), ((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_1182->global_1_offset, get_global_id(1), 10), 0x45DA1705L, 4294967292UL, 0x1FA360B9L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0x3924B255L)).xxyy)).z, 0UL, 0xE3178B73L, 9UL)).s33)).hi)) && (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((~(((*l_749) = ((VECTOR(uint8_t, 2))(l_780.wz)).odd) != ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(0x52L, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x2CL, (-9L), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_36, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(7L, 1L)))).yxyyyxxyyyxxyyyx, ((VECTOR(int8_t, 4))(l_781.sd353)).wzyzyxxywyzyyzww))).s6, 0x51L, 0x46L)), ((VECTOR(int8_t, 4))((-4L), (safe_sub_func_int64_t_s_s((((VECTOR(uint64_t, 16))(((((*l_800) |= (((VECTOR(int16_t, 8))((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((0x4E6AE1C1L || (((((((p_38 , (safe_div_func_int64_t_s_s(((((void*)0 != l_790) >= (safe_div_func_uint64_t_u_u(((++(*l_796)) & ((p_34 = p_37) != &l_795)), p_1182->g_774.x))) & (*p_37)), l_780.w))) >= 0x7EL) < l_739.x) != p_1182->g_391.s0) , l_799) || (*p_37)) ^ p_38)), p_38)), (*p_1182->g_733))), p_38, 0x11CEL, ((VECTOR(int16_t, 2))(0x089FL)), p_1182->g_707.s0, 0L, 1L)).s0 && l_780.y)) == p_36) <= GROUP_DIVERGE(0, 1)), ((VECTOR(uint64_t, 2))(0x5F7DCE06C2AC8637L)), 0x571A0366341D2E10L, ((VECTOR(uint64_t, 4))(0x6FA04D71B67FE1D8L)), 0xFA406BAB526B434EL, (*l_800), ((VECTOR(uint64_t, 4))(0xFB0194E5DAE12296L)), 0x450E16ADE906B76CL, 18446744073709551610UL)).sf && p_1182->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1182->tid, 15))]), 0UL)), 0x22L, (-7L))))).s66)).xyyxyyyx, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))((-1L)))))), 0x4CL, ((VECTOR(int8_t, 4))(0x5FL)), 0x37L)))).sd883, ((VECTOR(int8_t, 4))(0x2EL))))).w, 0x4BL, (*l_800), ((VECTOR(int8_t, 2))((-4L))), p_36, ((VECTOR(int8_t, 2))(0x05L)), ((VECTOR(int8_t, 2))(0x71L)), ((VECTOR(int8_t, 2))(0x57L)), p_36, 5L, 1L)).lo))).s51, ((VECTOR(uint8_t, 2))(0UL))))).yyxxxyyyyxxxxxxx, ((VECTOR(uint8_t, 16))(0x7EL))))).sa)), p_36)), 1L)))))))), 12));
        (*p_37) = (safe_add_func_uint32_t_u_u((p_38 > (*p_37)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_806.sbc41)).yywxwzzz)).s6));
        (*l_765) = func_46(((*l_800) , ((((safe_sub_func_uint32_t_u_u((p_38 | l_809), (safe_rshift_func_int8_t_s_u((p_1182->g_408.s9 ^= p_36), 5)))) | (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(6L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(l_822.s2533000507715626)).s07, (int16_t)l_822.s6, (int16_t)p_38))), 0x3680L)))).y, 15)), (safe_add_func_uint64_t_u_u(((*l_800) , ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1182->g_827.yxxwxyxxzwwzwwxz)).s3, ((*l_800) == (((VECTOR(int8_t, 2))(l_828.yy)).even > ((safe_div_func_int64_t_s_s(((*l_833) = (p_1182->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1182->tid, 15))] = ((safe_mod_func_int8_t_s_s((~(*l_800)), p_36)) && p_36))), (*l_800))) & (*l_800)))))) >= p_36)), (-7L)))))) || (*l_800)) && p_38)), l_754, (*l_800), (*l_800), p_36, p_1182);
    }
    else
    { /* block id: 288 */
        if ((atomic_inc(&p_1182->l_atomic_input[14]) == 6))
        { /* block id: 290 */
            VECTOR(int32_t, 2) l_834 = (VECTOR(int32_t, 2))((-10L), 9L);
            uint64_t l_835 = 0UL;
            uint64_t l_836 = 18446744073709551608UL;
            uint32_t **l_866 = (void*)0;
            uint32_t l_869 = 0x16B6E51AL;
            uint32_t *l_868[7][6][6] = {{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}},{{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869},{&l_869,(void*)0,&l_869,&l_869,&l_869,&l_869}}};
            uint32_t **l_867 = &l_868[3][5][5];
            int16_t l_870 = 1L;
            uint32_t l_871[4][9] = {{4294967288UL,0xCFFBE94FL,0xDAB33F6FL,0x0A54513CL,0xDAB33F6FL,0xCFFBE94FL,4294967288UL,3UL,0UL},{4294967288UL,0xCFFBE94FL,0xDAB33F6FL,0x0A54513CL,0xDAB33F6FL,0xCFFBE94FL,4294967288UL,3UL,0UL},{4294967288UL,0xCFFBE94FL,0xDAB33F6FL,0x0A54513CL,0xDAB33F6FL,0xCFFBE94FL,4294967288UL,3UL,0UL},{4294967288UL,0xCFFBE94FL,0xDAB33F6FL,0x0A54513CL,0xDAB33F6FL,0xCFFBE94FL,4294967288UL,3UL,0UL}};
            int i, j, k;
            l_836 = (l_835 = ((VECTOR(int32_t, 4))(l_834.yyyy)).w);
            for (l_835 = 0; (l_835 > 32); l_835 = safe_add_func_int16_t_s_s(l_835, 1))
            { /* block id: 295 */
                int8_t l_839 = 7L;
                int32_t *l_840 = (void*)0;
                int32_t l_842 = 1L;
                int32_t *l_841[7][5] = {{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842},{&l_842,&l_842,&l_842,&l_842,&l_842}};
                int32_t *l_843 = &l_842;
                int32_t *l_844 = &l_842;
                int32_t *l_845 = &l_842;
                int32_t l_846 = (-1L);
                int16_t l_847 = (-1L);
                VECTOR(uint8_t, 2) l_848 = (VECTOR(uint8_t, 2))(1UL, 0xACL);
                int16_t l_849[3];
                VECTOR(uint8_t, 4) l_850 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x0CL), 0x0CL);
                VECTOR(uint8_t, 2) l_851 = (VECTOR(uint8_t, 2))(0xE9L, 254UL);
                int64_t l_852 = 0x1409438D441273DEL;
                VECTOR(uint8_t, 8) l_853 = (VECTOR(uint8_t, 8))(0x20L, (VECTOR(uint8_t, 4))(0x20L, (VECTOR(uint8_t, 2))(0x20L, 248UL), 248UL), 248UL, 0x20L, 248UL);
                VECTOR(uint8_t, 2) l_854 = (VECTOR(uint8_t, 2))(2UL, 255UL);
                int32_t l_855 = 0L;
                VECTOR(uint8_t, 4) l_856 = (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 0x3DL), 0x3DL);
                VECTOR(uint8_t, 2) l_857 = (VECTOR(uint8_t, 2))(3UL, 1UL);
                VECTOR(uint8_t, 2) l_858 = (VECTOR(uint8_t, 2))(0x70L, 0x56L);
                uint16_t l_859 = 65533UL;
                uint16_t l_860 = 65534UL;
                VECTOR(uint8_t, 4) l_861 = (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 1UL), 1UL);
                VECTOR(uint8_t, 8) l_862 = (VECTOR(uint8_t, 8))(0x83L, (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 255UL), 255UL), 255UL, 0x83L, 255UL);
                VECTOR(uint8_t, 2) l_863 = (VECTOR(uint8_t, 2))(0x45L, 5UL);
                int64_t l_864[1];
                uint32_t l_865 = 0x819A9EBCL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_849[i] = 0x5125L;
                for (i = 0; i < 1; i++)
                    l_864[i] = 0x1132C33BE88E5DCBL;
                l_843 = (l_839 , (l_841[0][2] = l_840));
                l_845 = l_844;
                l_834.x = (((VECTOR(uint32_t, 4))(4294967286UL, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(6UL, 5UL, 1UL, 1UL, 0x05L, 3UL, (l_846 , l_847), 0x91L, ((VECTOR(uint8_t, 8))(0x07L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_848.xxyy)))), (l_849[2] , ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(l_850.yy)).xxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_851.xxxyyxxy)).s20, ((VECTOR(uint8_t, 4))((l_852 , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_853.s15)))).xxxyxxxxyyxyyxyy)).s9), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_854.xxxxyxyx)).s52, ((VECTOR(uint8_t, 4))(l_855, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(l_856.wywx)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_857.yyxyyyxyyxyxyxxy)).s6cd2)).z, ((VECTOR(uint8_t, 2))(l_858.xx)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0xD9L, 0x8DL, 0x48L, 0xE9L)).zyzxzxzx)).s5, l_859, 0xE6L, l_860, 252UL, ((VECTOR(uint8_t, 8))(l_861.yxzwzwxy)))).sd6, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(l_862.s4476)).odd, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(l_863.xx)).xyxyyxyyyyyxyyyx))).sec)))))))))), 255UL)).lo))), 0x31L)).odd))).yyxyyyxx))).lo))))))), 248UL, l_864[0], 0UL, 248UL)).odd, ((VECTOR(uint8_t, 4))(0x76L))))), ((VECTOR(uint8_t, 4))(0x35L))))).z), 0x8DL, 0x5BL)))).hi)).s15, ((VECTOR(uint8_t, 2))(255UL))))).xyyyyxyyyxxyxxxx, ((VECTOR(uint16_t, 16))(0xC73FL))))).s6677, ((VECTOR(uint16_t, 4))(0x721CL))))).yyzxxywxxywywzzz)).s86, ((VECTOR(uint16_t, 2))(65535UL))))), 0UL)).z , l_865);
            }
            l_867 = l_866;
            l_871[2][8] = l_870;
            unsigned int result = 0;
            result += l_834.y;
            result += l_834.x;
            result += l_835;
            result += l_836;
            result += l_869;
            result += l_870;
            int l_871_i0, l_871_i1;
            for (l_871_i0 = 0; l_871_i0 < 4; l_871_i0++) {
                for (l_871_i1 = 0; l_871_i1 < 9; l_871_i1++) {
                    result += l_871[l_871_i0][l_871_i1];
                }
            }
            atomic_add(&p_1182->l_special_values[14], result);
        }
        else
        { /* block id: 303 */
            (1 + 1);
        }
        return p_35;
    }
    return (*l_765);
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_693 p_1182->g_694 p_1182->g_696 p_1182->g_698 p_1182->g_463 p_1182->g_707 p_1182->g_294 p_1182->g_94 p_1182->g_13 p_1182->g_3 p_1182->g_535 p_1182->g_112 p_1182->g_60 p_1182->g_61 p_1182->g_731
 * writes: p_1182->g_463 p_1182->g_13 p_1182->g_3 p_1182->g_535 p_1182->g_112 p_1182->g_62 p_1182->g_732
 */
int32_t * func_39(uint8_t  p_40, int32_t * p_41, struct S1 * p_1182)
{ /* block id: 248 */
    VECTOR(uint32_t, 4) l_692 = (VECTOR(uint32_t, 4))(0xF602CFCDL, (VECTOR(uint32_t, 2))(0xF602CFCDL, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 16) l_695 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x16267472L), 0x16267472L), 0x16267472L, 4294967287UL, 0x16267472L, (VECTOR(uint32_t, 2))(4294967287UL, 0x16267472L), (VECTOR(uint32_t, 2))(4294967287UL, 0x16267472L), 4294967287UL, 0x16267472L, 4294967287UL, 0x16267472L);
    VECTOR(uint32_t, 2) l_697 = (VECTOR(uint32_t, 2))(0xE6B45163L, 4294967292UL);
    int32_t l_699[9][6] = {{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)},{0x306E8D8CL,0x306E8D8CL,(-3L),(-8L),(-1L),(-8L)}};
    uint32_t *l_700 = (void*)0;
    uint32_t *l_701 = &p_1182->g_463;
    VECTOR(uint8_t, 16) l_704 = (VECTOR(uint8_t, 16))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x3AL), 0x3AL), 0x3AL, 246UL, 0x3AL, (VECTOR(uint8_t, 2))(246UL, 0x3AL), (VECTOR(uint8_t, 2))(246UL, 0x3AL), 246UL, 0x3AL, 246UL, 0x3AL);
    uint64_t *l_714 = &p_1182->g_13;
    int32_t *l_715 = &p_1182->g_3;
    int32_t *l_716 = (void*)0;
    int32_t *l_717[1][8][1];
    uint32_t l_726 = 0UL;
    uint16_t *l_730 = (void*)0;
    uint16_t **l_729 = &l_730;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
                l_717[i][j][k] = (void*)0;
        }
    }
    p_1182->g_535.s2 &= ((*l_715) |= (safe_sub_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(8UL, 0xDC0536C4L)).xxyxxxyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_692.zz)))).yyxxyxyx))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(4294967290UL, ((VECTOR(uint32_t, 2))(3UL, 0x1F63AF72L)), 1UL)))).yywyyzwz))).s10, (uint32_t)(&p_1182->g_335 != (void*)0), (uint32_t)(p_40 >= p_40)))).xyxyxxyxyxyxxxyx)).hi))).odd)), ((VECTOR(uint32_t, 4))(p_1182->g_693.s6433))))), ((VECTOR(uint32_t, 4))(p_1182->g_694.s2702)), ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(l_695.s46)).yxxx, ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(p_1182->g_696.sc4)).xyyxxyxy, ((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 2))((-9L), 8L)).yxxxyyxy)))))).hi, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(9UL, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_697.xyxyxxyx)), ((VECTOR(uint32_t, 4))(p_1182->g_698.zyxy)).wwyywyzw))).s6, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x0F77441DL, 0xFEBBA3F9L, 0xD490096FL, (--(*l_701)), (p_40 < (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_704.sa8)), 0xA5L, 255UL)).lo)).even , ((*l_714) |= (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1182->g_707.s716f)).y, ((p_1182->g_294 && ((l_699[2][0] &= p_1182->g_94.s5) && (((safe_mul_func_int16_t_s_s((-3L), (!(safe_div_func_uint16_t_u_u((l_699[7][3] = (+(safe_div_func_uint64_t_u_u(0x8FB154FB93975BB2L, GROUP_DIVERGE(1, 1))))), l_692.z))))) ^ l_704.s4) , 0x12L))) ^ 255UL)))))), ((VECTOR(uint32_t, 2))(0x6CF1D320L)), 3UL, ((VECTOR(uint32_t, 8))(4294967288UL)))).sd3)), ((VECTOR(uint32_t, 2))(1UL)), 4294967295UL, 0xA18603FBL)))))).odd, ((VECTOR(uint32_t, 4))(0x1F1B40F8L)))))))).xzywzzzzyxxyzyzw)).scde6, ((VECTOR(uint32_t, 4))(1UL))))), ((VECTOR(uint32_t, 4))(5UL))))), ((VECTOR(uint32_t, 2))(0xC375F1B5L)), 4294967295UL, 0x9F23C4F1L)).lo)).s5 , l_695.s2), 0x21L)));
    for (p_1182->g_112 = (-28); (p_1182->g_112 >= 32); p_1182->g_112++)
    { /* block id: 257 */
        uint64_t l_720 = 18446744073709551607UL;
        --l_720;
    }
    (**p_1182->g_60) = 1L;
    if ((*l_715))
    { /* block id: 261 */
        int64_t l_723 = 0x175B3917BD2A1FECL;
        int32_t l_724 = 0x0D1EB14AL;
        int32_t l_725[10][5] = {{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)},{0x5FE1004CL,0x0FF899E3L,(-1L),0x657EC125L,(-9L)}};
        int i, j;
        (*l_715) = p_40;
        --l_726;
    }
    else
    { /* block id: 264 */
        (*p_1182->g_731) = l_729;
    }
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_60 p_1182->g_61 p_1182->g_62 p_1182->g_163 p_1182->g_574 p_1182->g_391 p_1182->g_630 p_1182->g_636 p_1182->g_87 p_1182->g_641 p_1182->g_484 p_1182->g_485 p_1182->g_575
 * writes: p_1182->g_62 p_1182->g_575 p_1182->g_391 p_1182->g_88 p_1182->g_416
 */
int32_t * func_46(uint32_t  p_47, union U0  p_48, int32_t  p_49, uint32_t  p_50, int64_t  p_51, struct S1 * p_1182)
{ /* block id: 186 */
    int16_t l_568[2][1][1];
    int32_t *l_569 = (void*)0;
    int32_t l_581 = 0x4FCC5922L;
    int32_t l_587 = 0x4BDCF325L;
    int32_t l_589 = 0x6466D24DL;
    int32_t l_591 = 0x7C31D033L;
    int32_t l_592 = 0x4CD758F9L;
    int64_t l_598 = 0x4E6B84BA530C0CAAL;
    int8_t l_602[10][4][6] = {{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}},{{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)},{(-1L),0x0AL,0x2CL,0x2CL,0x0AL,(-1L)}}};
    int32_t l_603 = (-7L);
    int32_t l_604 = (-1L);
    int32_t l_605 = 0x691B2CDBL;
    int32_t l_615 = (-7L);
    int32_t l_616 = 0x6325C8DBL;
    VECTOR(int32_t, 4) l_617 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x00B7B3ECL), 0x00B7B3ECL);
    VECTOR(uint8_t, 4) l_635 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 255UL), 255UL);
    VECTOR(int8_t, 4) l_637 = (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0x7BL), 0x7BL);
    int32_t **l_676 = &p_1182->g_575;
    int32_t **l_678[6][8][1] = {{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}},{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}},{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}},{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}},{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}},{{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569},{&l_569}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_568[i][j][k] = (-2L);
        }
    }
    (**p_1182->g_60) &= l_568[0][0][0];
    l_569 = l_569;
    for (p_50 = (-18); (p_50 >= 29); ++p_50)
    { /* block id: 191 */
        uint16_t l_572 = 0x5D47L;
        int32_t l_579 = (-8L);
        int32_t l_582 = 0x4ABF9889L;
        int32_t l_584 = (-9L);
        int32_t l_585 = 0x14CBE120L;
        int32_t l_590 = 2L;
        int32_t l_593 = (-9L);
        int32_t l_599 = 0x453C3BA1L;
        int32_t l_600 = 0x6775F116L;
        int32_t l_601[1];
        VECTOR(uint8_t, 2) l_661 = (VECTOR(uint8_t, 2))(1UL, 8UL);
        int32_t **l_677 = &p_1182->g_575;
        int16_t *l_685[7][10] = {{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0},{&l_568[0][0][0],&l_568[0][0][0],(void*)0,(void*)0,&l_568[1][0][0],(void*)0,(void*)0,&l_568[0][0][0],&l_568[0][0][0],(void*)0}};
        int16_t **l_684[4] = {&l_685[1][8],&l_685[1][8],&l_685[1][8],&l_685[1][8]};
        int16_t ***l_683 = &l_684[0];
        int16_t ***l_686[9] = {&l_684[0],&l_684[0],&l_684[0],&l_684[0],&l_684[0],&l_684[0],&l_684[0],&l_684[0],&l_684[0]};
        int i, j;
        for (i = 0; i < 1; i++)
            l_601[i] = 0x1F9E2C57L;
        if ((l_572 < p_1182->g_163))
        { /* block id: 192 */
            int32_t **l_573 = &l_569;
            int32_t l_577 = 0x2118CC53L;
            int32_t l_578 = 1L;
            int32_t l_583 = 0L;
            int32_t l_586 = 0x3E305F96L;
            int32_t l_588[8][9][3] = {{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}},{{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL},{0L,(-8L),0x5E4F4FFDL}}};
            uint32_t l_606 = 0x47C24805L;
            int32_t *l_611 = &l_591;
            int32_t *l_612 = &l_590;
            int32_t *l_613 = &l_601[0];
            int32_t *l_614[4][5] = {{&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0]},{&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0]},{&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0]},{&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0],&l_588[1][5][0]}};
            uint32_t l_618[1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_618[i][j] = 0xD4F09B74L;
            }
            (*p_1182->g_574) = ((*l_573) = (p_48.f0 , l_569));
            if ((**p_1182->g_60))
            { /* block id: 195 */
                int32_t *l_576[5][9][3] = {{{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0}},{{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0}},{{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0}},{{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0}},{{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0},{&p_1182->g_3,&p_1182->g_106,(void*)0}}};
                int32_t l_580 = (-7L);
                uint64_t l_594 = 0x7B35992549AC3B31L;
                int16_t l_597 = (-10L);
                int i, j, k;
                if (p_49)
                    break;
                l_594++;
                --l_606;
                p_1182->g_391.s1 |= (**p_1182->g_60);
            }
            else
            { /* block id: 200 */
                union U0 *l_609[4];
                union U0 **l_610 = &l_609[3];
                int i;
                for (i = 0; i < 4; i++)
                    l_609[i] = &p_1182->g_142;
                (*l_610) = l_609[3];
            }
            l_618[0][0]++;
            for (l_605 = 0; (l_605 != (-3)); l_605 = safe_sub_func_uint64_t_u_u(l_605, 2))
            { /* block id: 206 */
                uint64_t l_623 = 6UL;
                l_623--;
            }
        }
        else
        { /* block id: 209 */
            int8_t *l_638 = (void*)0;
            int8_t *l_639 = (void*)0;
            int32_t l_640 = 0x065421C8L;
            int64_t *l_644[1][9][8] = {{{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598},{(void*)0,&p_1182->g_294,&p_1182->g_294,(void*)0,&l_598,(void*)0,(void*)0,&l_598}}};
            uint16_t *l_645[4];
            int32_t l_646 = 5L;
            uint32_t *l_647 = (void*)0;
            uint32_t *l_648 = &p_1182->g_416;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_645[i] = &p_1182->g_112;
            (*p_1182->g_61) = (safe_add_func_int32_t_s_s(p_47, ((*l_648) = (safe_sub_func_int16_t_s_s(0L, (((VECTOR(int16_t, 8))(p_1182->g_630.wzxywwxw)).s7 >= (safe_sub_func_uint64_t_u_u(((((p_48 = p_48) , ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(l_635.xwxzyyzxxwzwwzxx)).s00bd, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0UL, 0xDBL, 0xEBL, 254UL)), ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(p_1182->g_636.yxxyxyyxyyyxyyxy)).s4ad8))), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))((((VECTOR(uint64_t, 2))(0x00BF1163214AFC9CL, 0xCEC0CD670A49B1F4L)).odd , (p_1182->g_88.s4 = ((VECTOR(int8_t, 4))(l_637.zwxy)).y)), (-1L), 0x35L, 1L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((p_1182->g_87.s5 , ((l_640 ^ (((VECTOR(int32_t, 2))(p_1182->g_641.sca)).even || (**p_1182->g_60))) == (p_48.f0 || (p_47 <= (l_646 |= ((safe_div_func_int64_t_s_s((p_51 |= p_1182->g_484.s0), 0x54B10C3677C1E483L)) || p_1182->g_485.s6)))))), ((VECTOR(int8_t, 2))((-1L))), 0x12L)), ((VECTOR(int8_t, 4))(0x76L)))).s0244564601543061)).s73b7))))).hi))).zwwxyzzwxwwzzyzy)).s1f)).yyxxyyyx, ((VECTOR(uint8_t, 8))(255UL))))), 247UL, p_47, 0x2BL, 248UL)).sc4a7, ((VECTOR(uint8_t, 4))(0x93L)))))))).x, 7)) || p_51)) & 1UL) , l_599), l_601[0]))))))));
            (*p_1182->g_61) = (l_601[0] , p_48.f0);
            for (l_579 = 14; (l_579 <= (-2)); l_579 = safe_sub_func_uint64_t_u_u(l_579, 7))
            { /* block id: 219 */
                int16_t l_681 = (-10L);
                (1 + 1);
            }
        }
    }
    (*l_676) = (*l_676);
    return (*p_1182->g_574);
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_148
 * writes:
 */
int16_t  func_58(int64_t  p_59, struct S1 * p_1182)
{ /* block id: 183 */
    int32_t *l_553 = &p_1182->g_3;
    int32_t *l_554 = &p_1182->g_106;
    int32_t *l_555 = (void*)0;
    int32_t *l_556 = &p_1182->g_106;
    int32_t *l_557 = (void*)0;
    int32_t *l_558 = (void*)0;
    int32_t l_559[5][6][4] = {{{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L}},{{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L}},{{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L}},{{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L}},{{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L},{(-4L),0x7D229A88L,0x286B3819L,0x7D229A88L}}};
    int32_t *l_560 = &p_1182->g_3;
    int32_t *l_561 = &p_1182->g_106;
    int32_t *l_562 = &p_1182->g_3;
    int32_t *l_563[4][4];
    uint16_t l_564 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_563[i][j] = &l_559[1][4][1];
    }
    ++l_564;
    return p_1182->g_148.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_13 p_1182->g_60 p_1182->g_61 p_1182->g_62 p_1182->g_3 p_1182->g_106 p_1182->g_117 p_1182->g_87 p_1182->g_141 p_1182->g_143 p_1182->g_81 p_1182->g_71 p_1182->g_94 p_1182->g_169 p_1182->g_112 p_1182->g_72 p_1182->g_88 p_1182->g_222 p_1182->g_163 p_1182->g_161 p_1182->g_335 p_1182->g_101 p_1182->g_449 p_1182->l_comm_values p_1182->g_535 p_1182->g_463
 * writes: p_1182->g_13 p_1182->g_3 p_1182->g_106 p_1182->g_62 p_1182->g_141 p_1182->g_161 p_1182->g_87 p_1182->g_61 p_1182->g_117 p_1182->g_112 p_1182->g_72 p_1182->l_comm_values p_1182->g_294 p_1182->g_101
 */
int64_t  func_63(int32_t ** p_64, int32_t * p_65, uint32_t  p_66, uint32_t  p_67, int32_t ** p_68, struct S1 * p_1182)
{ /* block id: 9 */
    int8_t l_109 = 0x09L;
    int32_t l_110 = 0x6065F2B7L;
    int32_t l_113 = (-5L);
    uint16_t *l_116 = &p_1182->g_112;
    uint64_t l_127 = 0xD9615D0954A6F35BL;
    int64_t l_210 = 0x1D35C18B874153CCL;
    uint16_t *l_245[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t **l_292 = (void*)0;
    int8_t l_308 = 0x5DL;
    union U0 **l_337 = (void*)0;
    int16_t *l_438 = (void*)0;
    int16_t **l_437 = &l_438;
    VECTOR(uint64_t, 8) l_458 = (VECTOR(uint64_t, 8))(0xFB2496E7423A7828L, (VECTOR(uint64_t, 4))(0xFB2496E7423A7828L, (VECTOR(uint64_t, 2))(0xFB2496E7423A7828L, 8UL), 8UL), 8UL, 0xFB2496E7423A7828L, 8UL);
    VECTOR(uint64_t, 8) l_461 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0x5998A3CF447DEA4AL), 0x5998A3CF447DEA4AL), 0x5998A3CF447DEA4AL, 2UL, 0x5998A3CF447DEA4AL);
    int8_t *l_530 = (void*)0;
    VECTOR(int8_t, 16) l_531 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x38L), 0x38L), 0x38L, 1L, 0x38L, (VECTOR(int8_t, 2))(1L, 0x38L), (VECTOR(int8_t, 2))(1L, 0x38L), 1L, 0x38L, 1L, 0x38L);
    VECTOR(uint32_t, 16) l_534 = (VECTOR(uint32_t, 16))(0xD85B1CA9L, (VECTOR(uint32_t, 4))(0xD85B1CA9L, (VECTOR(uint32_t, 2))(0xD85B1CA9L, 4294967295UL), 4294967295UL), 4294967295UL, 0xD85B1CA9L, 4294967295UL, (VECTOR(uint32_t, 2))(0xD85B1CA9L, 4294967295UL), (VECTOR(uint32_t, 2))(0xD85B1CA9L, 4294967295UL), 0xD85B1CA9L, 4294967295UL, 0xD85B1CA9L, 4294967295UL);
    uint64_t *l_540 = &p_1182->g_71[2];
    int16_t l_551 = (-10L);
    int32_t l_552 = 5L;
    int i;
    for (p_1182->g_13 = 0; (p_1182->g_13 == 13); p_1182->g_13 = safe_add_func_int32_t_s_s(p_1182->g_13, 5))
    { /* block id: 12 */
        int32_t l_82 = 0x1EFCF395L;
        uint16_t *l_111[5][2][9] = {{{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112},{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112}},{{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112},{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112}},{{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112},{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112}},{{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112},{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112}},{{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112},{&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112,&p_1182->g_112}}};
        VECTOR(uint32_t, 16) l_123 = (VECTOR(uint32_t, 16))(0x671F1E86L, (VECTOR(uint32_t, 4))(0x671F1E86L, (VECTOR(uint32_t, 2))(0x671F1E86L, 0x0918AE13L), 0x0918AE13L), 0x0918AE13L, 0x671F1E86L, 0x0918AE13L, (VECTOR(uint32_t, 2))(0x671F1E86L, 0x0918AE13L), (VECTOR(uint32_t, 2))(0x671F1E86L, 0x0918AE13L), 0x671F1E86L, 0x0918AE13L, 0x671F1E86L, 0x0918AE13L);
        int32_t ***l_126 = &p_1182->g_72;
        uint16_t l_128 = 0xC643L;
        int8_t *l_130 = &l_109;
        int8_t **l_129 = &l_130;
        uint64_t *l_131[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint8_t, 2) l_168 = (VECTOR(uint8_t, 2))(9UL, 0UL);
        int32_t l_204 = 0x1FF9CF07L;
        VECTOR(int8_t, 16) l_295 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int8_t, 2))(8L, (-1L)), (VECTOR(int8_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
        uint8_t **l_373 = &p_1182->g_181;
        union U0 *l_376 = (void*)0;
        VECTOR(uint64_t, 8) l_459 = (VECTOR(uint64_t, 8))(0x764E136AC7434473L, (VECTOR(uint64_t, 4))(0x764E136AC7434473L, (VECTOR(uint64_t, 2))(0x764E136AC7434473L, 4UL), 4UL), 4UL, 0x764E136AC7434473L, 4UL);
        VECTOR(uint64_t, 8) l_462 = (VECTOR(uint64_t, 8))(0x3CA1EC198CED105AL, (VECTOR(uint64_t, 4))(0x3CA1EC198CED105AL, (VECTOR(uint64_t, 2))(0x3CA1EC198CED105AL, 0x24AF6CA7FEBF36BCL), 0x24AF6CA7FEBF36BCL), 0x24AF6CA7FEBF36BCL, 0x3CA1EC198CED105AL, 0x24AF6CA7FEBF36BCL);
        VECTOR(int32_t, 16) l_466 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4696CC4AL), 0x4696CC4AL), 0x4696CC4AL, 1L, 0x4696CC4AL, (VECTOR(int32_t, 2))(1L, 0x4696CC4AL), (VECTOR(int32_t, 2))(1L, 0x4696CC4AL), 1L, 0x4696CC4AL, 1L, 0x4696CC4AL);
        VECTOR(int32_t, 4) l_474 = (VECTOR(int32_t, 4))(0x42804E4CL, (VECTOR(int32_t, 2))(0x42804E4CL, 0x0BEE59BBL), 0x0BEE59BBL);
        VECTOR(uint8_t, 8) l_514 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x60L), 0x60L), 0x60L, 0UL, 0x60L);
        union U0 l_515 = {0x3A3CB1FAL};
        int i, j, k;
        for (p_67 = 0; (p_67 > 34); p_67++)
        { /* block id: 15 */
            int8_t *l_80[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_105[10][6][4] = {{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}},{{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106},{(void*)0,(void*)0,(void*)0,&p_1182->g_106}}};
            int i, j, k;
            p_1182->g_106 |= ((**p_68) = func_77(&p_1182->g_71[7], (p_66 == (l_82 = 1L)), p_1182));
        }
        if (((l_113 |= ((((((*l_129) = ((safe_lshift_func_int16_t_s_u(l_109, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((--p_1182->g_112), ((l_116 != (p_67 , &p_1182->g_112)) , FAKE_DIVERGE(p_1182->local_1_offset, get_local_id(1), 10)), 0xF0AAL, ((VECTOR(uint16_t, 2))(p_1182->g_117.xy)), (p_67 >= ((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((1L < 0x53DDAA5EL), ((VECTOR(uint8_t, 16))((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_123.s07c177fa)).even, ((VECTOR(uint32_t, 4))((safe_div_func_int64_t_s_s((((*l_126) = (void*)0) == (void*)0), l_127)), 4294967295UL, 0UL, 0x439DAF5BL)), ((VECTOR(uint32_t, 4))(2UL))))).odd, ((VECTOR(uint32_t, 2))(2UL))))).yyyy)).z || p_1182->g_71[5]), p_67, 255UL, 250UL, ((VECTOR(uint8_t, 4))(1UL)), 5UL, ((VECTOR(uint8_t, 4))(255UL)), l_110, 0x30L, 1UL)).s9)), 15)))) > l_128)), 0x8661L, 0UL)).s0232171512541040)).s3)) , &l_109)) == &l_109) | 18446744073709551607UL) , 0xB04C5D88C5394159L) , l_110)) && p_1182->g_117.y))
        { /* block id: 28 */
            int8_t *l_134 = (void*)0;
            uint64_t *l_153 = (void*)0;
            int32_t l_176 = 0x20F33844L;
            int32_t *l_193 = &l_176;
            int32_t *l_194 = &l_110;
            int32_t *l_195 = &p_1182->g_3;
            int32_t *l_196[2];
            uint32_t l_197 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_196[i] = &l_82;
            (*p_1182->g_61) = ((**p_68) |= ((p_67 ^ (safe_add_func_uint32_t_u_u((0x4843688BL || ((65535UL ^ ((void*)0 != l_134)) > (*p_1182->g_61))), (safe_div_func_int64_t_s_s(0x021A72EEF0ED02C9L, p_1182->g_87.s7))))) < p_67));
            for (p_67 = (-12); (p_67 == 19); p_67++)
            { /* block id: 33 */
                uint8_t *l_160 = &p_1182->g_161;
                uint8_t *l_162 = &p_1182->g_163;
                uint8_t *l_166 = &p_1182->g_167;
                int16_t *l_172 = (void*)0;
                int16_t *l_173 = (void*)0;
                int16_t *l_174[1][3];
                int32_t l_175 = 0x4B7D5238L;
                uint8_t **l_182 = (void*)0;
                uint8_t **l_183 = (void*)0;
                uint8_t **l_184 = &l_160;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_174[i][j] = (void*)0;
                }
                for (l_113 = 0; (l_113 > 14); l_113 = safe_add_func_uint32_t_u_u(l_113, 1))
                { /* block id: 36 */
                    (*p_1182->g_143) = p_1182->g_141;
                    (*p_65) ^= (-1L);
                    (**p_68) = (&l_113 == ((safe_div_func_uint8_t_u_u(255UL, ((safe_mul_func_uint8_t_u_u(p_1182->g_106, 0x5BL)) || (!((VECTOR(uint64_t, 4))(p_1182->g_148.yxxy)).x)))) , (void*)0));
                }
                l_176 &= (safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 4))(((safe_rshift_func_uint8_t_u_s(((l_175 ^= (l_153 == ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((~(safe_add_func_uint8_t_u_u((((*l_162) = ((*l_160) = (0xECL > 0x92L))) < 255UL), (safe_lshift_func_uint8_t_u_u(p_67, 4))))), 0x2514L)) & (((*l_166) = 252UL) != ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_168.xyyxxxxx)))).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1182->g_169.yyxx)).xywyzwxy)).lo))).y)), (FAKE_DIVERGE(p_1182->local_1_offset, get_local_id(1), 10) != (safe_sub_func_uint64_t_u_u(l_127, 0xD5062BB3BD2D3370L))))) , l_131[8]))) || 0xC1BEL), p_66)) > p_66), p_67, (-1L), 0x0FC8L)).w < p_1182->g_81.z), p_66));
                (**p_68) = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((safe_add_func_int8_t_s_s(((*l_130) = (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(1UL, 0xAFD22C2485C87E2EL)).xxxyyxxy)).odd, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(8UL, (0x07BBA012D08A2D78L >= (((l_175 <= ((((l_176 , p_1182->g_181) == ((*l_184) = l_162)) && (((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((p_1182->g_81.y , p_67), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x466BL, 0L)), (-7L), 0x3ED3L)).ywxwzxyx)).s5)) | 65535UL), 0xC4L)), p_67)) , p_1182->g_comm_values[p_1182->tid]) , p_67)) >= l_176)) & l_175) > p_1182->g_169.x)), 0xD99D97B6L, 0x1ED2F5AEL)).yxxwyyxw, (uint32_t)FAKE_DIVERGE(p_1182->local_1_offset, get_local_id(1), 10)))), ((VECTOR(uint32_t, 8))(1UL))))).s4657216023240115, ((VECTOR(uint64_t, 16))(0x82994EBA6C6404DCL))))).s0f, ((VECTOR(uint64_t, 2))(0xC83726D5457A2E97L))))).xxyxxyxyxxyyxxyy)), ((VECTOR(uint64_t, 16))(0xE32BB306596C44C6L)), ((VECTOR(uint64_t, 16))(0x56ED219E0C19E018L))))))).s1d)).xxyxyxxxyyxxxyxx)).s1fcd))).xwzwwwzyzzywwxyz)).odd)).s4, p_1182->g_87.s5))), 0x73L)), ((VECTOR(int32_t, 2))(0x44C7829FL)), 0x3ABB484FL)).yywzwwxwxyxxzzxy)).s85)))).xxxy, ((VECTOR(int32_t, 4))(8L))))).z;
                for (p_1182->g_161 = (-25); (p_1182->g_161 == 45); ++p_1182->g_161)
                { /* block id: 51 */
                    if ((*p_65))
                        break;
                }
            }
            l_197--;
        }
        else
        { /* block id: 56 */
            uint16_t l_205 = 0xFF0FL;
            VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))((-1L), 4L);
            int16_t *l_207 = (void*)0;
            int16_t *l_208 = (void*)0;
            int16_t *l_209[8][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            uint32_t *l_211 = (void*)0;
            uint32_t *l_212 = (void*)0;
            uint32_t *l_213 = (void*)0;
            uint32_t *l_214[8][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_215 = 0x5DE6AF59L;
            int32_t *l_269 = &p_1182->g_106;
            int32_t **l_268 = &l_269;
            uint64_t *l_272 = &p_1182->g_71[0];
            VECTOR(uint64_t, 16) l_291 = (VECTOR(uint64_t, 16))(0x2FDCEC06D11D72D7L, (VECTOR(uint64_t, 4))(0x2FDCEC06D11D72D7L, (VECTOR(uint64_t, 2))(0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL), 0xD771F6875FBCA4FFL), 0xD771F6875FBCA4FFL, 0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL, (VECTOR(uint64_t, 2))(0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL), (VECTOR(uint64_t, 2))(0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL), 0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL, 0x2FDCEC06D11D72D7L, 0xD771F6875FBCA4FFL);
            uint32_t l_326 = 4294967292UL;
            uint8_t **l_372 = &p_1182->g_181;
            union U0 ***l_385 = &l_337;
            VECTOR(uint8_t, 4) l_401 = (VECTOR(uint8_t, 4))(0xF4L, (VECTOR(uint8_t, 2))(0xF4L, 246UL), 246UL);
            VECTOR(int8_t, 2) l_407 = (VECTOR(int8_t, 2))(0x4AL, 1L);
            uint32_t l_431[1];
            VECTOR(uint64_t, 8) l_457 = (VECTOR(uint64_t, 8))(0x1CBB4EB2ADA4E3D2L, (VECTOR(uint64_t, 4))(0x1CBB4EB2ADA4E3D2L, (VECTOR(uint64_t, 2))(0x1CBB4EB2ADA4E3D2L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x1CBB4EB2ADA4E3D2L, 18446744073709551614UL);
            VECTOR(int32_t, 2) l_464 = (VECTOR(int32_t, 2))(4L, 0x4EEE7F7BL);
            VECTOR(int32_t, 16) l_465 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3B0CB27FL), 0x3B0CB27FL), 0x3B0CB27FL, 0L, 0x3B0CB27FL, (VECTOR(int32_t, 2))(0L, 0x3B0CB27FL), (VECTOR(int32_t, 2))(0L, 0x3B0CB27FL), 0L, 0x3B0CB27FL, 0L, 0x3B0CB27FL);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_431[i] = 1UL;
            if (((((safe_lshift_func_int16_t_s_u(p_67, 5)) < 65535UL) && (l_215 = (safe_mod_func_uint8_t_u_u(((l_204 || (l_113 , ((-1L) == (l_210 = (l_206.y = l_205))))) <= p_66), 255UL)))) , (*p_65)))
            { /* block id: 60 */
                VECTOR(int32_t, 4) l_223 = (VECTOR(int32_t, 4))(0x62C63C90L, (VECTOR(int32_t, 2))(0x62C63C90L, 1L), 1L);
                uint16_t *l_243 = &p_1182->g_112;
                union U0 *l_334 = &p_1182->g_142;
                union U0 **l_333 = &l_334;
                uint8_t ***l_367 = (void*)0;
                uint8_t ***l_368 = (void*)0;
                uint8_t ***l_369 = (void*)0;
                uint8_t **l_371 = (void*)0;
                uint8_t ***l_370[10][3][6] = {{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}},{{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0},{&l_371,&l_371,(void*)0,&l_371,&l_371,(void*)0}}};
                int i, j, k;
                if ((p_1182->g_87.s7 &= (p_67 & (p_1182->g_106 || (safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((1L || ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-1L), (-1L), 0x684FE09BL, (-4L), 0x6C6A78CFL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1182->g_222.xwxx)))).hi)), 0x7D3ECDBFL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_223.zy)).xyxxyxyy)))).odd)))).s27)).even) < 0x3CE6440DL), ((void*)0 != &p_68))), (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(p_1182->g_13, (safe_add_func_int64_t_s_s((!1L), 0x07469C53B7783CCCL)))), l_109)))), 13))))))
                { /* block id: 62 */
                    uint32_t l_238[10][1];
                    uint16_t **l_244 = &l_116;
                    uint64_t l_246 = 0UL;
                    uint64_t *l_270 = &p_1182->g_71[0];
                    int16_t *l_307 = (void*)0;
                    int32_t l_324 = 0x76E28B10L;
                    int32_t l_325 = 5L;
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_238[i][j] = 0x3DE9391AL;
                    }
                    if (((((safe_lshift_func_int16_t_s_s((-1L), 11)) , (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_1182->g_71[0], (safe_add_func_uint64_t_u_u(9UL, l_238[3][0])))), (0x2956860F1069EAF5L & (safe_add_func_int8_t_s_s(p_66, ((*l_130) = l_206.y))))))) , (l_223.w = (safe_sub_func_uint32_t_u_u(p_66, (((**l_129) |= (((((((((((((((*l_244) = l_243) != l_245[3]) ^ p_67) ^ 0x5970L) <= p_1182->g_71[7]) <= p_66) < p_67) >= 0x3C599F4AL) ^ l_238[3][0]) <= l_246) || 0L) , l_113) & p_67) > (**p_1182->g_60))) < p_66))))) , l_206.y))
                    { /* block id: 67 */
                        (*p_1182->g_60) = (*p_1182->g_60);
                        if (l_246)
                            continue;
                    }
                    else
                    { /* block id: 70 */
                        int32_t *l_249 = &l_110;
                        int32_t **l_248 = &l_249;
                        (*l_248) = &l_215;
                    }
                    (**p_1182->g_60) ^= (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(0UL, ((p_1182->g_117.y = GROUP_DIVERGE(2, 1)) || ((l_206.y != l_110) <= p_1182->g_94.s4)))), (((l_113 = l_223.z) , p_1182->g_169.y) && (safe_add_func_uint32_t_u_u((((0UL <= ((safe_sub_func_uint64_t_u_u((((((l_215 = (++(**l_244))) , l_238[6][0]) , p_1182->g_71[1]) , p_1182->g_94.s0) , l_206.x), 0x1CB8B082DA7392BCL)) >= l_238[7][0])) | p_67) && l_223.w), (-2L))))));
                    for (l_82 = 0; (l_82 == 5); ++l_82)
                    { /* block id: 80 */
                        uint64_t **l_271 = &l_270;
                        int64_t *l_287 = (void*)0;
                        int64_t *l_288[5][1] = {{&l_210},{&l_210},{&l_210},{&l_210},{&l_210}};
                        VECTOR(int32_t, 8) l_293 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x466E59A3L), 0x466E59A3L), 0x466E59A3L, 1L, 0x466E59A3L);
                        int16_t **l_306 = &l_207;
                        int32_t *l_309 = (void*)0;
                        int32_t *l_310 = (void*)0;
                        int32_t *l_311 = (void*)0;
                        int32_t *l_312 = &l_110;
                        int32_t *l_313 = &p_1182->g_106;
                        int32_t *l_314 = &p_1182->g_3;
                        int32_t *l_315 = (void*)0;
                        int32_t *l_316 = &l_110;
                        int32_t *l_317 = &p_1182->g_3;
                        int32_t *l_318 = (void*)0;
                        int32_t *l_319 = &l_110;
                        int32_t *l_320 = &l_110;
                        int32_t *l_321 = &l_110;
                        int32_t *l_322 = &l_215;
                        int32_t *l_323[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_323[i] = &l_215;
                        (**l_268) = (safe_sub_func_uint8_t_u_u((&p_1182->g_61 != ((*l_126) = l_268)), p_1182->g_94.s6));
                        (*p_1182->g_61) = (((((*l_271) = l_270) != l_272) , (l_223.z = p_66)) > (p_1182->g_294 = (safe_sub_func_int32_t_s_s(0L, ((((-6L) && (safe_mod_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(((GROUP_DIVERGE(2, 1) < (safe_div_func_uint64_t_u_u(((((***l_126) = (safe_sub_func_uint16_t_u_u(((***l_126) != ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(18446744073709551609UL, (p_1182->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1182->tid, 15))] = p_67))) ^ (~(safe_sub_func_int16_t_s_s((l_293.s4 |= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(l_291.scf)).yyyyyyxx, ((VECTOR(uint64_t, 16))(18446744073709551610UL, 0x07905F4BA04C1C44L, 0UL, (p_1182->g_148.y ^= (((FAKE_DIVERGE(p_1182->global_1_offset, get_global_id(1), 10) , (l_292 == (void*)0)) , 0x17BB8A498CEFA681L) == (-1L))), ((VECTOR(uint64_t, 8))(0x747B00D79999DE05L)), 1UL, ((VECTOR(uint64_t, 2))(3UL)), 18446744073709551606UL)).hi))).even)).x || 0x3A083E5D9B5BCDB7L)), p_66)))), 8UL)) > 0xC5L)), 0x72C8L))) , 0x6318096DA207F862L) <= p_1182->g_88.s4), p_1182->g_222.w))) != p_1182->g_169.y), p_1182->g_163)) == 0x5CL) <= p_66) && FAKE_DIVERGE(p_1182->global_2_offset, get_global_id(2), 10)), FAKE_DIVERGE(p_1182->local_2_offset, get_local_id(2), 10)))) , p_1182->g_161) , p_1182->g_169.x)))));
                        (**p_1182->g_72) &= (((((((*l_130) = 0x28L) && ((VECTOR(int8_t, 2))(l_295.sde)).even) , (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(p_1182->g_298.s72325227)).s20, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(252UL, 5)) >= ((((**l_129) = ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, (-4L))).yxxy)).even, (int8_t)((((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_unary_minus_func_int16_t_s(p_1182->g_117.x)) ^ (p_1182->g_163 , 0xC0BA9720ECE5EC5EL)))) < ((((*l_306) = l_245[2]) == l_307) ^ ((+((p_1182->g_148.y &= p_67) && ((*p_1182->g_143) == (void*)0))) == p_66))) > (*p_65)) || 0UL)))).yyxy)), ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x5BL))))).w) ^ (-7L)) >= p_1182->g_169.y)), l_293.s0)), p_67, 2UL, 255UL)), 5UL, l_308, 0xC7L, 0UL)).hi)).odd))))).even, 8))) , FAKE_DIVERGE(p_1182->local_0_offset, get_local_id(0), 10)) , p_1182->g_71[3]) <= p_66);
                        l_326++;
                    }
                }
                else
                { /* block id: 98 */
                    for (l_326 = 0; (l_326 == 23); l_326++)
                    { /* block id: 101 */
                        union U0 ***l_336 = (void*)0;
                        (*p_65) = (safe_div_func_uint64_t_u_u((l_333 == (l_337 = p_1182->g_335)), l_210));
                    }
                    if ((atomic_inc(&p_1182->g_atomic_input[74 * get_linear_group_id() + 38]) == 5))
                    { /* block id: 106 */
                        int16_t l_338 = 0x7B47L;
                        VECTOR(int32_t, 4) l_339 = (VECTOR(int32_t, 4))(0x2C0322A8L, (VECTOR(int32_t, 2))(0x2C0322A8L, 0x1AB813E8L), 0x1AB813E8L);
                        VECTOR(int32_t, 16) l_340 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L), (VECTOR(int32_t, 2))(1L, (-10L)), (VECTOR(int32_t, 2))(1L, (-10L)), 1L, (-10L), 1L, (-10L));
                        VECTOR(int32_t, 2) l_341 = (VECTOR(int32_t, 2))((-3L), 0x7DB5C110L);
                        uint32_t l_342[8] = {0x57B7ADCCL,0x00F242D7L,0x57B7ADCCL,0x57B7ADCCL,0x00F242D7L,0x57B7ADCCL,0x57B7ADCCL,0x00F242D7L};
                        int64_t l_343 = 0L;
                        VECTOR(int32_t, 4) l_344 = (VECTOR(int32_t, 4))(0x29AF8862L, (VECTOR(int32_t, 2))(0x29AF8862L, 0x570AFE82L), 0x570AFE82L);
                        int16_t l_345 = 1L;
                        VECTOR(int32_t, 8) l_346 = (VECTOR(int32_t, 8))(0x5B9472ADL, (VECTOR(int32_t, 4))(0x5B9472ADL, (VECTOR(int32_t, 2))(0x5B9472ADL, (-8L)), (-8L)), (-8L), 0x5B9472ADL, (-8L));
                        int32_t l_347 = 0x403C21F8L;
                        int32_t l_348 = 0L;
                        VECTOR(int32_t, 2) l_349 = (VECTOR(int32_t, 2))((-2L), 0x2F981BDBL);
                        VECTOR(int32_t, 16) l_350 = (VECTOR(int32_t, 16))(0x0E2A946EL, (VECTOR(int32_t, 4))(0x0E2A946EL, (VECTOR(int32_t, 2))(0x0E2A946EL, (-1L)), (-1L)), (-1L), 0x0E2A946EL, (-1L), (VECTOR(int32_t, 2))(0x0E2A946EL, (-1L)), (VECTOR(int32_t, 2))(0x0E2A946EL, (-1L)), 0x0E2A946EL, (-1L), 0x0E2A946EL, (-1L));
                        int32_t l_351 = (-10L);
                        VECTOR(uint32_t, 8) l_352 = (VECTOR(uint32_t, 8))(0xF6C273DCL, (VECTOR(uint32_t, 4))(0xF6C273DCL, (VECTOR(uint32_t, 2))(0xF6C273DCL, 0xD470F29FL), 0xD470F29FL), 0xD470F29FL, 0xF6C273DCL, 0xD470F29FL);
                        int32_t l_353 = 0x580B17C5L;
                        int32_t l_354 = 0x1485D0A2L;
                        int32_t l_355 = 0x0D6175FAL;
                        VECTOR(uint16_t, 4) l_356 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3E05L), 0x3E05L);
                        int8_t l_357[10][5][5] = {{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}},{{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL},{5L,0x5EL,0x31L,(-2L),0x5EL}}};
                        int32_t l_358 = (-6L);
                        uint64_t l_359 = 0x4C37FB32BE0F94A6L;
                        uint16_t l_362 = 0xD85FL;
                        int32_t *l_363 = &l_351;
                        uint32_t l_364 = 4294967294UL;
                        int i, j, k;
                        l_357[8][3][2] = (l_338 , ((VECTOR(int32_t, 8))(0x5A5A3F1FL, (l_356.z &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_339.wwxzzywz)).s51)))), 0x34A355E9L, (-1L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_340.s9f)).yxxxyxxyyyxyxyxx, ((VECTOR(int32_t, 16))(l_341.xyyyyyyxyxxyyyxx))))).hi)).s7325554341467016, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-5L), 0x4377F9DDL)))), ((VECTOR(int32_t, 2))(2L, 0x31596316L))))), 0x21E987ACL, 0x4CD29A4EL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_342[3], l_343, ((VECTOR(int32_t, 4))(l_344.xxxy)), 0x1DA09434L, 0x00E8BD0BL)).hi)), 0x0F47F983L, 0x520BA394L, l_345, ((VECTOR(int32_t, 2))(0x03442A80L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_346.s7517)).zxwxxwxx)).s6422003333061750))).s71)), 0L)).s89)), 0x2C4933A0L, 0x0531F4C5L)).zwyyzwyz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-3L), (-1L), (l_348 = l_347), 7L, ((VECTOR(int32_t, 4))(0x46F42F22L, 0x1DF43732L, 0x50092FE0L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_349.xyyxyxyy)).hi, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_350.s25)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(l_351, 0x69F76C22L, l_352.s1, 0x741BC76CL, l_353, ((VECTOR(int32_t, 2))(0x707B9D86L)), 0x6F9496C1L)).hi, ((VECTOR(int32_t, 4))(0x73016CAAL))))).odd)).xyyy)).hi, ((VECTOR(int32_t, 2))(0x6AF4B799L))))).xyyyyxxx)).s31, ((VECTOR(int32_t, 2))((-3L)))))).xxyxyyyxyyxyxxxx, ((VECTOR(int32_t, 16))((-2L)))))).s802a))), 0x680039FFL, l_354, 0L, 0x53211B9BL, (-1L), ((VECTOR(int32_t, 2))(0x6A51FDE6L)), 0x47B3D953L, ((VECTOR(int32_t, 4))((-8L))))).sbd)), l_355, (-1L), (-1L), 7L, 0x08B90AEBL, 0x40E27DA5L)).s2e9f)).wwzzyxzw))).s4664063055667322))))).sce)).yyyy))).y), 0L, ((VECTOR(int32_t, 4))(0x203617F2L)), 0x4E2F47A9L)).s0);
                        ++l_359;
                        l_363 = (l_362 , (void*)0);
                        ++l_364;
                        unsigned int result = 0;
                        result += l_338;
                        result += l_339.w;
                        result += l_339.z;
                        result += l_339.y;
                        result += l_339.x;
                        result += l_340.sf;
                        result += l_340.se;
                        result += l_340.sd;
                        result += l_340.sc;
                        result += l_340.sb;
                        result += l_340.sa;
                        result += l_340.s9;
                        result += l_340.s8;
                        result += l_340.s7;
                        result += l_340.s6;
                        result += l_340.s5;
                        result += l_340.s4;
                        result += l_340.s3;
                        result += l_340.s2;
                        result += l_340.s1;
                        result += l_340.s0;
                        result += l_341.y;
                        result += l_341.x;
                        int l_342_i0;
                        for (l_342_i0 = 0; l_342_i0 < 8; l_342_i0++) {
                            result += l_342[l_342_i0];
                        }
                        result += l_343;
                        result += l_344.w;
                        result += l_344.z;
                        result += l_344.y;
                        result += l_344.x;
                        result += l_345;
                        result += l_346.s7;
                        result += l_346.s6;
                        result += l_346.s5;
                        result += l_346.s4;
                        result += l_346.s3;
                        result += l_346.s2;
                        result += l_346.s1;
                        result += l_346.s0;
                        result += l_347;
                        result += l_348;
                        result += l_349.y;
                        result += l_349.x;
                        result += l_350.sf;
                        result += l_350.se;
                        result += l_350.sd;
                        result += l_350.sc;
                        result += l_350.sb;
                        result += l_350.sa;
                        result += l_350.s9;
                        result += l_350.s8;
                        result += l_350.s7;
                        result += l_350.s6;
                        result += l_350.s5;
                        result += l_350.s4;
                        result += l_350.s3;
                        result += l_350.s2;
                        result += l_350.s1;
                        result += l_350.s0;
                        result += l_351;
                        result += l_352.s7;
                        result += l_352.s6;
                        result += l_352.s5;
                        result += l_352.s4;
                        result += l_352.s3;
                        result += l_352.s2;
                        result += l_352.s1;
                        result += l_352.s0;
                        result += l_353;
                        result += l_354;
                        result += l_355;
                        result += l_356.w;
                        result += l_356.z;
                        result += l_356.y;
                        result += l_356.x;
                        int l_357_i0, l_357_i1, l_357_i2;
                        for (l_357_i0 = 0; l_357_i0 < 10; l_357_i0++) {
                            for (l_357_i1 = 0; l_357_i1 < 5; l_357_i1++) {
                                for (l_357_i2 = 0; l_357_i2 < 5; l_357_i2++) {
                                    result += l_357[l_357_i0][l_357_i1][l_357_i2];
                                }
                            }
                        }
                        result += l_358;
                        result += l_359;
                        result += l_362;
                        result += l_364;
                        atomic_add(&p_1182->g_special_values[74 * get_linear_group_id() + 38], result);
                    }
                    else
                    { /* block id: 113 */
                        (1 + 1);
                    }
                }
                (*l_269) |= ((l_372 = &p_1182->g_181) == l_373);
            }
            else
            { /* block id: 119 */
                union U0 *l_378 = &p_1182->g_142;
                int32_t l_390 = (-1L);
                VECTOR(int32_t, 4) l_392 = (VECTOR(int32_t, 4))(0x3BEE2011L, (VECTOR(int32_t, 2))(0x3BEE2011L, 0x65B0B300L), 0x65B0B300L);
                uint32_t *l_413 = &l_326;
                VECTOR(uint64_t, 2) l_460 = (VECTOR(uint64_t, 2))(0x452413C0FBA9DEC9L, 18446744073709551608UL);
                uint64_t **l_519 = &l_272;
                int i;
                if ((safe_unary_minus_func_uint16_t_u(0xB6C1L)))
                { /* block id: 120 */
                    VECTOR(int32_t, 8) l_375 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x56878A80L), 0x56878A80L), 0x56878A80L, (-1L), 0x56878A80L);
                    union U0 **l_377 = &l_376;
                    uint8_t *l_399 = (void*)0;
                    uint8_t *l_400 = &p_1182->g_161;
                    int16_t *l_404 = (void*)0;
                    int16_t **l_405 = &l_207;
                    uint32_t **l_414[10] = {&l_214[6][0][7],&l_213,&l_214[6][0][7],&l_214[6][0][7],&l_213,&l_214[6][0][7],&l_214[6][0][7],&l_213,&l_214[6][0][7],&l_214[6][0][7]};
                    int32_t *l_417 = (void*)0;
                    int32_t *l_418 = &p_1182->g_419;
                    uint8_t *l_420 = &p_1182->g_163;
                    uint32_t *l_436 = &l_431[0];
                    int8_t **l_448 = &l_130;
                    int16_t l_473 = 0x2C89L;
                    int i;
                    (*p_1182->g_61) &= (((((VECTOR(int32_t, 16))(l_375.s1674416475606315)).s3 < (p_1182->g_81.z & (l_113 = (((*l_377) = l_376) == l_378)))) < (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((**l_268) = (safe_rshift_func_uint16_t_u_s((l_385 == &p_1182->g_335), p_1182->g_88.s1))) != (l_110 |= (p_1182->g_101.x &= p_1182->g_169.x))) > (((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0x896220E6L, p_66)), l_390)) || p_66) & p_66)), 9)), 4UL))) == GROUP_DIVERGE(0, 1));
                    if (((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(p_1182->g_391.s37)).yyxyyxxxxyxyxxyy, ((VECTOR(int32_t, 16))(l_392.wzzwzwwwyxxyzxxx))))).s36aa, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(3L, (l_375.s1 && (safe_div_func_uint16_t_u_u(((*l_116) = 0x3548L), (safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((l_390 = (((*l_400) |= 0x52L) || ((VECTOR(uint8_t, 8))(l_401.zzyxxzwz)).s4)), ((VECTOR(uint8_t, 2))(0UL, 255UL)).odd)) ^ ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, 0x6DL)).yxyxxyyy)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(0x64L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x0BL, 0x7DL)).xyyy)), (safe_div_func_int8_t_s_s((((*l_405) = l_404) != l_111[2][0][5]), l_375.s4)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1182->g_406.yyyy)))))), (-7L), ((VECTOR(int8_t, 4))(l_407.yyyx)), 0x07L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(p_1182->g_408.s41152da7eacac37d)).even, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))((safe_rshift_func_uint8_t_u_s(((*l_420) = (((*l_418) = (safe_sub_func_uint64_t_u_u(((p_1182->g_415 = l_413) == (void*)0), p_1182->g_298.s3))) , p_66)), l_375.s1)), p_66, 0x2AL, 0x40L)), ((VECTOR(int8_t, 4))(0x12L))))).yzzxxwxx))), ((VECTOR(int8_t, 8))((-1L)))))).s6172461652442022)), (int8_t)0x32L))))))).s4073)).hi)).xyxxyyxyxxyxxxyy, ((VECTOR(int8_t, 16))((-4L)))))).even)).odd, ((VECTOR(int8_t, 4))(0x4EL))))))).wzxyzzyx)), ((VECTOR(int8_t, 8))(0L))))).s1) == p_1182->g_406.x), l_392.z))))), 0x5A6E032BL, (-1L), 0L, 0x44FC3A3BL, (-5L), ((VECTOR(int32_t, 2))((-1L))), 0x3299E8ACL, 2L, ((VECTOR(int32_t, 4))(0x0B64A7C3L)), 0L)).s1d, ((VECTOR(int32_t, 2))((-1L)))))).xyyyxyxyxyxxyxxy)).s1cab))).zwxxzxxyyxzxxwzy)).hi, ((VECTOR(int32_t, 8))(7L)), ((VECTOR(int32_t, 8))((-10L)))))).s1)
                    { /* block id: 134 */
                        int16_t ***l_439 = &l_437;
                        int32_t l_451 = 0x4399E850L;
                        VECTOR(int32_t, 8) l_452 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        uint8_t ***l_471 = &l_373;
                        uint16_t l_472 = 0x7AA6L;
                        int i;
                        l_451 |= ((((safe_lshift_func_int16_t_s_u((0x1A59974B571E8849L >= FAKE_DIVERGE(p_1182->local_2_offset, get_local_id(2), 10)), (--(*l_116)))) == (safe_lshift_func_int8_t_s_s(((--p_1182->g_117.x) | (safe_div_func_uint32_t_u_u(l_431[0], (p_67 && ((((++(*l_400)) , l_436) == &p_1182->g_416) == (((*l_439) = l_437) != (GROUP_DIVERGE(1, 1) , &l_404))))))), 1))) && (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((p_67 | (safe_sub_func_int8_t_s_s((l_448 != p_1182->g_449), l_375.s4))), p_1182->g_71[2])), p_67)), 0L))) >= GROUP_DIVERGE(1, 1));
                        (**l_268) = ((VECTOR(int32_t, 2))(l_452.s10)).odd;
                        (**p_68) = (safe_rshift_func_uint16_t_u_s(p_67, 9));
                        (**p_1182->g_60) ^= (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(l_457.s56564061)), ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 8))(l_458.s52700616)).s10, (uint64_t)(l_452.s1 = (p_1182->g_148.x |= (((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL)).xxxxyxxy, (uint64_t)0xB186D42293F854D8L))).odd, ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(18446744073709551615UL, 1UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(1UL, 7UL)))), ((VECTOR(uint64_t, 4))(l_459.s6435)), ((VECTOR(uint64_t, 8))(l_460.xyyyxxxy)))).sab97)).wxyywwxw, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_461.s75044014)))), ((VECTOR(uint64_t, 8))(l_462.s12014307))))).s4574367213764621, ((VECTOR(uint64_t, 16))(18446744073709551615UL, ((VECTOR(uint64_t, 8))(p_1182->g_117.y, 0xBB0F48CC1ED53F31L, p_1182->g_463, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(18446744073709551615UL, (l_451 & (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_464.yy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_465.s9189eab94f431acd)).s9aad, ((VECTOR(int32_t, 2))(l_466.s8f)).yxyy, ((VECTOR(int32_t, 8))(((0x28EED96941FA8719L < (*l_269)) != (safe_lshift_func_uint16_t_u_s(65535UL, 12))), ((VECTOR(int32_t, 8))((((p_1182->g_112 | ((safe_sub_func_int16_t_s_s((l_471 != (void*)0), p_66)) , l_375.s3)) || 0x5EL) , 0x52C072C9L), (-3L), (**p_68), 1L, ((VECTOR(int32_t, 4))((-1L))))).s3, (**p_68), 0x4EECA381L, (*p_65), 0x0A2468CEL, 1L, 5L)).odd))).even))))).xxyyxyyx, ((VECTOR(int32_t, 8))(0x168DE097L))))).s32, ((VECTOR(int32_t, 2))(0x67BE7361L)), ((VECTOR(int32_t, 2))(0x24E49D37L))))).xxxyxxxy)).s7 , 1UL)), 0xC9DEA17399357E33L, 0x90187AFE24482644L)))), 0xA6D8A54C4FB27D33L)), l_472, ((VECTOR(uint64_t, 2))(0xA4869FFA67853DA0L)), p_1182->g_142.f0, 0x8CA5EA3140D2264DL, 0xBBBB207A452E01F9L, 18446744073709551613UL)), ((VECTOR(uint64_t, 16))(18446744073709551612UL))))).s688a, ((VECTOR(uint64_t, 4))(5UL))))))).zzwzyzyz)).s2735015772046157, ((VECTOR(uint64_t, 16))(0x2E4B62A37B7406EEL))))).sb & p_1182->g_13))), (uint64_t)p_1182->g_71[0]))).xyyxyxxx))).s4, l_473));
                    }
                    else
                    { /* block id: 145 */
                        (*l_268) = (*p_68);
                        return l_392.z;
                    }
                    (**l_268) ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_474.yxxz)).odd)).even;
                }
                else
                { /* block id: 150 */
                    VECTOR(uint32_t, 8) l_483 = (VECTOR(uint32_t, 8))(0xA86F650FL, (VECTOR(uint32_t, 4))(0xA86F650FL, (VECTOR(uint32_t, 2))(0xA86F650FL, 0xB8B17ABCL), 0xB8B17ABCL), 0xB8B17ABCL, 0xA86F650FL, 0xB8B17ABCL);
                    int i;
                    for (l_204 = 27; (l_204 != (-22)); l_204 = safe_sub_func_int8_t_s_s(l_204, 6))
                    { /* block id: 153 */
                        int32_t *l_496 = (void*)0;
                        int64_t *l_497 = &l_210;
                        (**p_1182->g_60) = (((VECTOR(int16_t, 16))(p_1182->g_477.ywwwyzwyzzwyzyyz)).s0 > (((((safe_mod_func_uint64_t_u_u((((**l_129) = ((p_66 , p_1182->g_87.s3) ^ 0L)) & ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(p_1182->g_480.sc8fb8f4ee3749249)).s59, (int8_t)(safe_div_func_int64_t_s_s(((*l_497) = (((((VECTOR(uint32_t, 16))(0x58AD98EBL, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_483.s41703014)).even)).wxwxwxxzxxywyzwx)).s224d, ((VECTOR(uint32_t, 8))(p_1182->g_484.sf9a1335a)).even))), 0xC66FAF08L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1182->g_485.s77)), 4294967290UL, 7UL)), ((VECTOR(uint32_t, 4))((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0D563B01L, (-2L))), 0x09DE20C9L, 0x7DBF7E3AL)).hi)).even , (p_1182->g_408.s2 >= 65535UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x38CED714L, ((safe_rshift_func_uint16_t_u_s((((+(((((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((((*l_116)++) || 0UL), p_1182->g_88.s2)) && ((VECTOR(uint32_t, 4))(0x69CC52C6L, ((*l_413) = ((safe_mul_func_int8_t_s_s(p_66, p_66)) && p_1182->g_167)), 0x0582363DL, 4294967292UL)).z), p_1182->g_416)) , (*l_268)) == l_496) , 8L) > p_1182->g_94.s6)) | p_1182->g_87.s5) | (**p_68)), 14)) < p_1182->g_408.sb), (*p_1182->g_415), (*p_1182->g_415), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 2))(0UL)), 0xDB9CD5B8L, 1UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(8UL)), 0xC919B584L)).s1a)))), 0xF6BE3E0FL)), 0x7E6508FAL, 0UL)).s0 <= p_66) > l_483.s1) > FAKE_DIVERGE(p_1182->local_2_offset, get_local_id(2), 10))), p_1182->g_101.x))))), 0x64L, (-1L))).x), 0x1A8D098C8D031299L)) != p_66) != p_66) , l_460.y) > p_1182->g_101.x));
                        p_65 = (*p_68);
                    }
                    if ((atomic_inc(&p_1182->l_atomic_input[72]) == 8))
                    { /* block id: 162 */
                        int64_t l_498[7][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                        VECTOR(uint32_t, 16) l_499 = (VECTOR(uint32_t, 16))(0xC538C58EL, (VECTOR(uint32_t, 4))(0xC538C58EL, (VECTOR(uint32_t, 2))(0xC538C58EL, 0x23056B84L), 0x23056B84L), 0x23056B84L, 0xC538C58EL, 0x23056B84L, (VECTOR(uint32_t, 2))(0xC538C58EL, 0x23056B84L), (VECTOR(uint32_t, 2))(0xC538C58EL, 0x23056B84L), 0xC538C58EL, 0x23056B84L, 0xC538C58EL, 0x23056B84L);
                        int64_t l_500 = 0L;
                        uint8_t l_501 = 0x27L;
                        int i, j;
                        l_498[2][1] |= (-1L);
                        l_501 &= (l_500 |= l_499.sa);
                        unsigned int result = 0;
                        int l_498_i0, l_498_i1;
                        for (l_498_i0 = 0; l_498_i0 < 7; l_498_i0++) {
                            for (l_498_i1 = 0; l_498_i1 < 2; l_498_i1++) {
                                result += l_498[l_498_i0][l_498_i1];
                            }
                        }
                        result += l_499.sf;
                        result += l_499.se;
                        result += l_499.sd;
                        result += l_499.sc;
                        result += l_499.sb;
                        result += l_499.sa;
                        result += l_499.s9;
                        result += l_499.s8;
                        result += l_499.s7;
                        result += l_499.s6;
                        result += l_499.s5;
                        result += l_499.s4;
                        result += l_499.s3;
                        result += l_499.s2;
                        result += l_499.s1;
                        result += l_499.s0;
                        result += l_500;
                        result += l_501;
                        atomic_add(&p_1182->l_special_values[72], result);
                    }
                    else
                    { /* block id: 166 */
                        (1 + 1);
                    }
                }
                (*p_65) |= (safe_rshift_func_uint16_t_u_u(((**l_268) != (((safe_add_func_int64_t_s_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((-1L), (*l_269), 1L, 0x490F310D540DF4E5L)), ((p_1182->g_117.x++) < (l_460.y <= ((((((VECTOR(int16_t, 16))(((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(l_514.s5252743600572710)).sd, p_66)) , GROUP_DIVERGE(0, 1)), (l_515 , p_66))) & 0UL) ^ (safe_unary_minus_func_uint8_t_u(GROUP_DIVERGE(2, 1)))) ^ (((l_460.x || (((*l_519) = l_272) == (void*)0)) & 0xBAL) >= 0x7576D89FAE1AD119L)), 0L, 1L, (-7L), (-1L), p_66, ((VECTOR(int16_t, 4))(2L)), ((VECTOR(int16_t, 4))((-10L))), 0x0365L, 0x0257L)).s1 ^ p_66) && (**l_268)) >= p_1182->g_81.y) < p_67))), ((VECTOR(int64_t, 8))(0x25C62BF658F8E186L)), (-7L), 0x20F98BB2A4C44917L, 0x5DA1FE42344F4356L)).sc && 0xE6DF3CD9AFD5020EL), 0x0386735836EA15F2L)) ^ p_1182->g_222.w) , 0x332B9995A0C38ECFL)), 3));
            }
        }
    }
    (*p_1182->g_61) = ((l_458.s2 && (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1182->local_0_offset, get_local_id(0), 10), 4))) & ((l_110 = (~(safe_sub_func_uint64_t_u_u(p_1182->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1182->tid, 15))], ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_113 = p_67), (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_531.s6d3d)))).w ^ (p_1182->g_161 = (FAKE_DIVERGE(p_1182->group_0_offset, get_group_id(0), 10) ^ (safe_sub_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_534.sef7e)))).x <= ((VECTOR(int32_t, 8))(p_1182->g_535.s56e27ba8)).s7), (((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x5C7832AFL, ((&p_1182->g_71[4] == l_540) , l_110))), ((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_552 = (((safe_lshift_func_int16_t_s_u((0xBABE01E0L >= (safe_div_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((1UL <= l_551), p_1182->g_463)) == 7L) , (void*)0) == (*p_1182->g_143)), 0xA00EL))), 15)) || l_458.s2) >= 0xF0L)), 0x5A14L)), p_67)) || l_458.s4) , p_66) != p_1182->g_87.s6))) , 8L) ^ l_109)))))))), p_67)), l_531.s1)) != p_1182->g_94.s1))))) >= l_127));
    (*p_1182->g_60) = (*p_1182->g_60);
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1182->g_60 p_1182->g_61 p_1182->g_62 p_1182->g_87 p_1182->g_88 p_1182->g_81 p_1182->g_94 p_1182->g_101 p_1182->g_3
 * writes: p_1182->g_3
 */
int32_t  func_77(uint64_t * p_78, uint32_t  p_79, struct S1 * p_1182)
{ /* block id: 17 */
    VECTOR(int16_t, 4) l_93 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-1L)), (-1L));
    VECTOR(int16_t, 2) l_95 = (VECTOR(int16_t, 2))(0x7FBAL, 0L);
    VECTOR(int16_t, 2) l_96 = (VECTOR(int16_t, 2))((-5L), 0x2F75L);
    uint64_t *l_97 = &p_1182->g_71[7];
    int32_t l_100[1];
    int32_t *l_104[10][4] = {{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3},{&p_1182->g_3,&p_1182->g_3,(void*)0,&p_1182->g_3}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_100[i] = (-2L);
    p_1182->g_3 |= (FAKE_DIVERGE(p_1182->global_1_offset, get_global_id(1), 10) < (safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((**p_1182->g_60) <= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1182->g_87.s0550)).lo)).hi), p_79)) < ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(p_1182->g_88.s32615066)).s6275756627712171, (int8_t)(safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_1182->g_81.x, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(l_93.wz)).xyyx, (int16_t)p_1182->g_88.s1))).wxxzwxwyzzzxwyxw)).s5a, ((VECTOR(int16_t, 2))(p_1182->g_94.s07))))), 0x3746L, 0L)).yyyxzwyxxxxzwwxx)), ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_95.xxyy)).even, (int16_t)((VECTOR(int16_t, 8))(l_96.yyyxxyxx)).s1, (int16_t)(((l_97 = l_97) != p_78) ^ (safe_lshift_func_uint8_t_u_u(l_100[0], 0)))))).xyyyyxxxxyxxyyyy, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(p_1182->g_101.yxxyyyxx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 0L)), 0x6ECCL, 0x0260L)).yywyzzyw, ((VECTOR(int16_t, 8))((-10L), 0x108CL, 0x42A3L, 1L, (-1L), (safe_mod_func_int16_t_s_s(0x3063L, l_96.y)), 0L, 0x15B5L))))), 0x271BL, (-1L), p_79, ((VECTOR(int16_t, 4))((-6L))))).sf9)).yxyy)).wwzzwwzx, ((VECTOR(int16_t, 8))(0x3001L))))).s12, ((VECTOR(int16_t, 2))(8L))))).xxyxxyxyyxyyxyxy)))))).s2a, ((VECTOR(int16_t, 2))(0x1E04L))))), (-7L), (-8L))).z)), p_79)), (int8_t)0x47L))).s5587, ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 4))(3L))))).x), (-4L))));
    return p_79;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S1 c_1183;
    struct S1* p_1182 = &c_1183;
    struct S1 c_1184 = {
        0L, // p_1182->g_3
        18446744073709551608UL, // p_1182->g_13
        0L, // p_1182->g_62
        &p_1182->g_62, // p_1182->g_61
        &p_1182->g_61, // p_1182->g_60
        {0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L,0x21F997EC53A21B78L}, // p_1182->g_71
        (void*)0, // p_1182->g_72
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x09L), 0x09L), // p_1182->g_81
        (VECTOR(int32_t, 8))(0x3BB579ABL, (VECTOR(int32_t, 4))(0x3BB579ABL, (VECTOR(int32_t, 2))(0x3BB579ABL, 0L), 0L), 0L, 0x3BB579ABL, 0L), // p_1182->g_87
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 5L), 5L), 5L, 0L, 5L), // p_1182->g_88
        (VECTOR(int16_t, 8))(0x53E8L, (VECTOR(int16_t, 4))(0x53E8L, (VECTOR(int16_t, 2))(0x53E8L, (-3L)), (-3L)), (-3L), 0x53E8L, (-3L)), // p_1182->g_94
        (VECTOR(int16_t, 2))(1L, 0x0D3BL), // p_1182->g_101
        (-9L), // p_1182->g_106
        0x6E93L, // p_1182->g_112
        (VECTOR(uint16_t, 2))(0xF98CL, 65535UL), // p_1182->g_117
        {-5L}, // p_1182->g_142
        &p_1182->g_142, // p_1182->g_141
        &p_1182->g_141, // p_1182->g_143
        (VECTOR(uint64_t, 2))(1UL, 1UL), // p_1182->g_148
        247UL, // p_1182->g_161
        255UL, // p_1182->g_163
        0UL, // p_1182->g_167
        (VECTOR(uint8_t, 2))(8UL, 251UL), // p_1182->g_169
        (void*)0, // p_1182->g_181
        (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5D05D671L), 0x5D05D671L), // p_1182->g_222
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1182->g_247
        0L, // p_1182->g_294
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1182->g_298
        (void*)0, // p_1182->g_335
        (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x04A4188CL), 0x04A4188CL), 0x04A4188CL, (-9L), 0x04A4188CL), // p_1182->g_391
        (VECTOR(int8_t, 2))(0x45L, 0x0AL), // p_1182->g_406
        (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int8_t, 2))(3L, 0L), (VECTOR(int8_t, 2))(3L, 0L), 3L, 0L, 3L, 0L), // p_1182->g_408
        0xD92066DBL, // p_1182->g_416
        &p_1182->g_416, // p_1182->g_415
        0x25C257B2L, // p_1182->g_419
        (void*)0, // p_1182->g_450
        &p_1182->g_450, // p_1182->g_449
        0x0AF045A9L, // p_1182->g_463
        (VECTOR(int16_t, 4))(0x6C20L, (VECTOR(int16_t, 2))(0x6C20L, (-1L)), (-1L)), // p_1182->g_477
        (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x7FL), 0x7FL), 0x7FL, 7L, 0x7FL, (VECTOR(int8_t, 2))(7L, 0x7FL), (VECTOR(int8_t, 2))(7L, 0x7FL), 7L, 0x7FL, 7L, 0x7FL), // p_1182->g_480
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x2B4DF5DAL), 0x2B4DF5DAL), 0x2B4DF5DAL, 1UL, 0x2B4DF5DAL, (VECTOR(uint32_t, 2))(1UL, 0x2B4DF5DAL), (VECTOR(uint32_t, 2))(1UL, 0x2B4DF5DAL), 1UL, 0x2B4DF5DAL, 1UL, 0x2B4DF5DAL), // p_1182->g_484
        (VECTOR(uint32_t, 8))(0x9888401FL, (VECTOR(uint32_t, 4))(0x9888401FL, (VECTOR(uint32_t, 2))(0x9888401FL, 0x952A29BBL), 0x952A29BBL), 0x952A29BBL, 0x9888401FL, 0x952A29BBL), // p_1182->g_485
        (VECTOR(int32_t, 16))(0x1AFFBA6FL, (VECTOR(int32_t, 4))(0x1AFFBA6FL, (VECTOR(int32_t, 2))(0x1AFFBA6FL, 0x0A889526L), 0x0A889526L), 0x0A889526L, 0x1AFFBA6FL, 0x0A889526L, (VECTOR(int32_t, 2))(0x1AFFBA6FL, 0x0A889526L), (VECTOR(int32_t, 2))(0x1AFFBA6FL, 0x0A889526L), 0x1AFFBA6FL, 0x0A889526L, 0x1AFFBA6FL, 0x0A889526L), // p_1182->g_535
        (void*)0, // p_1182->g_575
        &p_1182->g_575, // p_1182->g_574
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x09C0L), 0x09C0L), // p_1182->g_630
        (VECTOR(int8_t, 2))(0x37L, 0x5FL), // p_1182->g_636
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L), (VECTOR(int32_t, 2))((-1L), (-7L)), (VECTOR(int32_t, 2))((-1L), (-7L)), (-1L), (-7L), (-1L), (-7L)), // p_1182->g_641
        (void*)0, // p_1182->g_688
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL), // p_1182->g_693
        (VECTOR(uint32_t, 8))(0x78C2BBDFL, (VECTOR(uint32_t, 4))(0x78C2BBDFL, (VECTOR(uint32_t, 2))(0x78C2BBDFL, 0xDC03E679L), 0xDC03E679L), 0xDC03E679L, 0x78C2BBDFL, 0xDC03E679L), // p_1182->g_694
        (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 1UL), 1UL), 1UL, 4294967294UL, 1UL, (VECTOR(uint32_t, 2))(4294967294UL, 1UL), (VECTOR(uint32_t, 2))(4294967294UL, 1UL), 4294967294UL, 1UL, 4294967294UL, 1UL), // p_1182->g_696
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x19F50697L), 0x19F50697L), // p_1182->g_698
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL), // p_1182->g_707
        &p_1182->g_112, // p_1182->g_733
        &p_1182->g_733, // p_1182->g_732
        &p_1182->g_732, // p_1182->g_731
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L)), // p_1182->g_748
        (VECTOR(uint16_t, 4))(0xF5BFL, (VECTOR(uint16_t, 2))(0xF5BFL, 2UL), 2UL), // p_1182->g_756
        (VECTOR(uint32_t, 2))(7UL, 0x1553A219L), // p_1182->g_774
        (VECTOR(uint32_t, 8))(0x8973030AL, (VECTOR(uint32_t, 4))(0x8973030AL, (VECTOR(uint32_t, 2))(0x8973030AL, 4294967293UL), 4294967293UL), 4294967293UL, 0x8973030AL, 4294967293UL), // p_1182->g_775
        (VECTOR(int16_t, 4))(0x6E9EL, (VECTOR(int16_t, 2))(0x6E9EL, 0x5A18L), 0x5A18L), // p_1182->g_827
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6594L), 0x6594L), // p_1182->g_881
        (void*)0, // p_1182->g_895
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x07L), 0x07L), // p_1182->g_925
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_1182->g_926
        (void*)0, // p_1182->g_933
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1182->g_947
        (VECTOR(int16_t, 4))(0x69BEL, (VECTOR(int16_t, 2))(0x69BEL, 0x4BD0L), 0x4BD0L), // p_1182->g_963
        (void*)0, // p_1182->g_970
        &p_1182->g_970, // p_1182->g_969
        (VECTOR(int64_t, 2))(0x68132F1988B946C7L, 0L), // p_1182->g_972
        (VECTOR(int64_t, 16))(0x1B43351F60DD491EL, (VECTOR(int64_t, 4))(0x1B43351F60DD491EL, (VECTOR(int64_t, 2))(0x1B43351F60DD491EL, 0x4D26BA268F3F307AL), 0x4D26BA268F3F307AL), 0x4D26BA268F3F307AL, 0x1B43351F60DD491EL, 0x4D26BA268F3F307AL, (VECTOR(int64_t, 2))(0x1B43351F60DD491EL, 0x4D26BA268F3F307AL), (VECTOR(int64_t, 2))(0x1B43351F60DD491EL, 0x4D26BA268F3F307AL), 0x1B43351F60DD491EL, 0x4D26BA268F3F307AL, 0x1B43351F60DD491EL, 0x4D26BA268F3F307AL), // p_1182->g_984
        (VECTOR(int32_t, 8))(0x4ED07CAAL, (VECTOR(int32_t, 4))(0x4ED07CAAL, (VECTOR(int32_t, 2))(0x4ED07CAAL, 1L), 1L), 1L, 0x4ED07CAAL, 1L), // p_1182->g_991
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1AL), 0x1AL), 0x1AL, 1L, 0x1AL), // p_1182->g_1012
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x53L), 0x53L), // p_1182->g_1019
        (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x17L), 0x17L), 0x17L, (-6L), 0x17L, (VECTOR(int8_t, 2))((-6L), 0x17L), (VECTOR(int8_t, 2))((-6L), 0x17L), (-6L), 0x17L, (-6L), 0x17L), // p_1182->g_1020
        (VECTOR(int8_t, 2))(1L, 0x7FL), // p_1182->g_1021
        0x79D4L, // p_1182->g_1026
        (VECTOR(uint64_t, 8))(0xCBCDCF462341D2AAL, (VECTOR(uint64_t, 4))(0xCBCDCF462341D2AAL, (VECTOR(uint64_t, 2))(0xCBCDCF462341D2AAL, 0x6B2EF67251D56FD1L), 0x6B2EF67251D56FD1L), 0x6B2EF67251D56FD1L, 0xCBCDCF462341D2AAL, 0x6B2EF67251D56FD1L), // p_1182->g_1064
        (void*)0, // p_1182->g_1124
        {&p_1182->g_1124,&p_1182->g_1124,&p_1182->g_1124,&p_1182->g_1124,&p_1182->g_1124,&p_1182->g_1124}, // p_1182->g_1123
        &p_1182->g_1123[5], // p_1182->g_1122
        &p_1182->g_933, // p_1182->g_1126
        (void*)0, // p_1182->g_1130
        (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x1AF515DA2E501E2FL), // p_1182->g_1150
        0x5443L, // p_1182->g_1171
        65535UL, // p_1182->g_1173
        0, // p_1182->v_collective
        sequence_input[get_global_id(0)], // p_1182->global_0_offset
        sequence_input[get_global_id(1)], // p_1182->global_1_offset
        sequence_input[get_global_id(2)], // p_1182->global_2_offset
        sequence_input[get_local_id(0)], // p_1182->local_0_offset
        sequence_input[get_local_id(1)], // p_1182->local_1_offset
        sequence_input[get_local_id(2)], // p_1182->local_2_offset
        sequence_input[get_group_id(0)], // p_1182->group_0_offset
        sequence_input[get_group_id(1)], // p_1182->group_1_offset
        sequence_input[get_group_id(2)], // p_1182->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_1182->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1183 = c_1184;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1182);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1182->g_3, "p_1182->g_3", print_hash_value);
    transparent_crc(p_1182->g_13, "p_1182->g_13", print_hash_value);
    transparent_crc(p_1182->g_62, "p_1182->g_62", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1182->g_71[i], "p_1182->g_71[i]", print_hash_value);

    }
    transparent_crc(p_1182->g_81.x, "p_1182->g_81.x", print_hash_value);
    transparent_crc(p_1182->g_81.y, "p_1182->g_81.y", print_hash_value);
    transparent_crc(p_1182->g_81.z, "p_1182->g_81.z", print_hash_value);
    transparent_crc(p_1182->g_81.w, "p_1182->g_81.w", print_hash_value);
    transparent_crc(p_1182->g_87.s0, "p_1182->g_87.s0", print_hash_value);
    transparent_crc(p_1182->g_87.s1, "p_1182->g_87.s1", print_hash_value);
    transparent_crc(p_1182->g_87.s2, "p_1182->g_87.s2", print_hash_value);
    transparent_crc(p_1182->g_87.s3, "p_1182->g_87.s3", print_hash_value);
    transparent_crc(p_1182->g_87.s4, "p_1182->g_87.s4", print_hash_value);
    transparent_crc(p_1182->g_87.s5, "p_1182->g_87.s5", print_hash_value);
    transparent_crc(p_1182->g_87.s6, "p_1182->g_87.s6", print_hash_value);
    transparent_crc(p_1182->g_87.s7, "p_1182->g_87.s7", print_hash_value);
    transparent_crc(p_1182->g_88.s0, "p_1182->g_88.s0", print_hash_value);
    transparent_crc(p_1182->g_88.s1, "p_1182->g_88.s1", print_hash_value);
    transparent_crc(p_1182->g_88.s2, "p_1182->g_88.s2", print_hash_value);
    transparent_crc(p_1182->g_88.s3, "p_1182->g_88.s3", print_hash_value);
    transparent_crc(p_1182->g_88.s4, "p_1182->g_88.s4", print_hash_value);
    transparent_crc(p_1182->g_88.s5, "p_1182->g_88.s5", print_hash_value);
    transparent_crc(p_1182->g_88.s6, "p_1182->g_88.s6", print_hash_value);
    transparent_crc(p_1182->g_88.s7, "p_1182->g_88.s7", print_hash_value);
    transparent_crc(p_1182->g_94.s0, "p_1182->g_94.s0", print_hash_value);
    transparent_crc(p_1182->g_94.s1, "p_1182->g_94.s1", print_hash_value);
    transparent_crc(p_1182->g_94.s2, "p_1182->g_94.s2", print_hash_value);
    transparent_crc(p_1182->g_94.s3, "p_1182->g_94.s3", print_hash_value);
    transparent_crc(p_1182->g_94.s4, "p_1182->g_94.s4", print_hash_value);
    transparent_crc(p_1182->g_94.s5, "p_1182->g_94.s5", print_hash_value);
    transparent_crc(p_1182->g_94.s6, "p_1182->g_94.s6", print_hash_value);
    transparent_crc(p_1182->g_94.s7, "p_1182->g_94.s7", print_hash_value);
    transparent_crc(p_1182->g_101.x, "p_1182->g_101.x", print_hash_value);
    transparent_crc(p_1182->g_101.y, "p_1182->g_101.y", print_hash_value);
    transparent_crc(p_1182->g_106, "p_1182->g_106", print_hash_value);
    transparent_crc(p_1182->g_112, "p_1182->g_112", print_hash_value);
    transparent_crc(p_1182->g_117.x, "p_1182->g_117.x", print_hash_value);
    transparent_crc(p_1182->g_117.y, "p_1182->g_117.y", print_hash_value);
    transparent_crc(p_1182->g_142.f0, "p_1182->g_142.f0", print_hash_value);
    transparent_crc(p_1182->g_148.x, "p_1182->g_148.x", print_hash_value);
    transparent_crc(p_1182->g_148.y, "p_1182->g_148.y", print_hash_value);
    transparent_crc(p_1182->g_161, "p_1182->g_161", print_hash_value);
    transparent_crc(p_1182->g_163, "p_1182->g_163", print_hash_value);
    transparent_crc(p_1182->g_167, "p_1182->g_167", print_hash_value);
    transparent_crc(p_1182->g_169.x, "p_1182->g_169.x", print_hash_value);
    transparent_crc(p_1182->g_169.y, "p_1182->g_169.y", print_hash_value);
    transparent_crc(p_1182->g_222.x, "p_1182->g_222.x", print_hash_value);
    transparent_crc(p_1182->g_222.y, "p_1182->g_222.y", print_hash_value);
    transparent_crc(p_1182->g_222.z, "p_1182->g_222.z", print_hash_value);
    transparent_crc(p_1182->g_222.w, "p_1182->g_222.w", print_hash_value);
    transparent_crc(p_1182->g_294, "p_1182->g_294", print_hash_value);
    transparent_crc(p_1182->g_298.s0, "p_1182->g_298.s0", print_hash_value);
    transparent_crc(p_1182->g_298.s1, "p_1182->g_298.s1", print_hash_value);
    transparent_crc(p_1182->g_298.s2, "p_1182->g_298.s2", print_hash_value);
    transparent_crc(p_1182->g_298.s3, "p_1182->g_298.s3", print_hash_value);
    transparent_crc(p_1182->g_298.s4, "p_1182->g_298.s4", print_hash_value);
    transparent_crc(p_1182->g_298.s5, "p_1182->g_298.s5", print_hash_value);
    transparent_crc(p_1182->g_298.s6, "p_1182->g_298.s6", print_hash_value);
    transparent_crc(p_1182->g_298.s7, "p_1182->g_298.s7", print_hash_value);
    transparent_crc(p_1182->g_391.s0, "p_1182->g_391.s0", print_hash_value);
    transparent_crc(p_1182->g_391.s1, "p_1182->g_391.s1", print_hash_value);
    transparent_crc(p_1182->g_391.s2, "p_1182->g_391.s2", print_hash_value);
    transparent_crc(p_1182->g_391.s3, "p_1182->g_391.s3", print_hash_value);
    transparent_crc(p_1182->g_391.s4, "p_1182->g_391.s4", print_hash_value);
    transparent_crc(p_1182->g_391.s5, "p_1182->g_391.s5", print_hash_value);
    transparent_crc(p_1182->g_391.s6, "p_1182->g_391.s6", print_hash_value);
    transparent_crc(p_1182->g_391.s7, "p_1182->g_391.s7", print_hash_value);
    transparent_crc(p_1182->g_406.x, "p_1182->g_406.x", print_hash_value);
    transparent_crc(p_1182->g_406.y, "p_1182->g_406.y", print_hash_value);
    transparent_crc(p_1182->g_408.s0, "p_1182->g_408.s0", print_hash_value);
    transparent_crc(p_1182->g_408.s1, "p_1182->g_408.s1", print_hash_value);
    transparent_crc(p_1182->g_408.s2, "p_1182->g_408.s2", print_hash_value);
    transparent_crc(p_1182->g_408.s3, "p_1182->g_408.s3", print_hash_value);
    transparent_crc(p_1182->g_408.s4, "p_1182->g_408.s4", print_hash_value);
    transparent_crc(p_1182->g_408.s5, "p_1182->g_408.s5", print_hash_value);
    transparent_crc(p_1182->g_408.s6, "p_1182->g_408.s6", print_hash_value);
    transparent_crc(p_1182->g_408.s7, "p_1182->g_408.s7", print_hash_value);
    transparent_crc(p_1182->g_408.s8, "p_1182->g_408.s8", print_hash_value);
    transparent_crc(p_1182->g_408.s9, "p_1182->g_408.s9", print_hash_value);
    transparent_crc(p_1182->g_408.sa, "p_1182->g_408.sa", print_hash_value);
    transparent_crc(p_1182->g_408.sb, "p_1182->g_408.sb", print_hash_value);
    transparent_crc(p_1182->g_408.sc, "p_1182->g_408.sc", print_hash_value);
    transparent_crc(p_1182->g_408.sd, "p_1182->g_408.sd", print_hash_value);
    transparent_crc(p_1182->g_408.se, "p_1182->g_408.se", print_hash_value);
    transparent_crc(p_1182->g_408.sf, "p_1182->g_408.sf", print_hash_value);
    transparent_crc(p_1182->g_416, "p_1182->g_416", print_hash_value);
    transparent_crc(p_1182->g_419, "p_1182->g_419", print_hash_value);
    transparent_crc(p_1182->g_463, "p_1182->g_463", print_hash_value);
    transparent_crc(p_1182->g_477.x, "p_1182->g_477.x", print_hash_value);
    transparent_crc(p_1182->g_477.y, "p_1182->g_477.y", print_hash_value);
    transparent_crc(p_1182->g_477.z, "p_1182->g_477.z", print_hash_value);
    transparent_crc(p_1182->g_477.w, "p_1182->g_477.w", print_hash_value);
    transparent_crc(p_1182->g_480.s0, "p_1182->g_480.s0", print_hash_value);
    transparent_crc(p_1182->g_480.s1, "p_1182->g_480.s1", print_hash_value);
    transparent_crc(p_1182->g_480.s2, "p_1182->g_480.s2", print_hash_value);
    transparent_crc(p_1182->g_480.s3, "p_1182->g_480.s3", print_hash_value);
    transparent_crc(p_1182->g_480.s4, "p_1182->g_480.s4", print_hash_value);
    transparent_crc(p_1182->g_480.s5, "p_1182->g_480.s5", print_hash_value);
    transparent_crc(p_1182->g_480.s6, "p_1182->g_480.s6", print_hash_value);
    transparent_crc(p_1182->g_480.s7, "p_1182->g_480.s7", print_hash_value);
    transparent_crc(p_1182->g_480.s8, "p_1182->g_480.s8", print_hash_value);
    transparent_crc(p_1182->g_480.s9, "p_1182->g_480.s9", print_hash_value);
    transparent_crc(p_1182->g_480.sa, "p_1182->g_480.sa", print_hash_value);
    transparent_crc(p_1182->g_480.sb, "p_1182->g_480.sb", print_hash_value);
    transparent_crc(p_1182->g_480.sc, "p_1182->g_480.sc", print_hash_value);
    transparent_crc(p_1182->g_480.sd, "p_1182->g_480.sd", print_hash_value);
    transparent_crc(p_1182->g_480.se, "p_1182->g_480.se", print_hash_value);
    transparent_crc(p_1182->g_480.sf, "p_1182->g_480.sf", print_hash_value);
    transparent_crc(p_1182->g_484.s0, "p_1182->g_484.s0", print_hash_value);
    transparent_crc(p_1182->g_484.s1, "p_1182->g_484.s1", print_hash_value);
    transparent_crc(p_1182->g_484.s2, "p_1182->g_484.s2", print_hash_value);
    transparent_crc(p_1182->g_484.s3, "p_1182->g_484.s3", print_hash_value);
    transparent_crc(p_1182->g_484.s4, "p_1182->g_484.s4", print_hash_value);
    transparent_crc(p_1182->g_484.s5, "p_1182->g_484.s5", print_hash_value);
    transparent_crc(p_1182->g_484.s6, "p_1182->g_484.s6", print_hash_value);
    transparent_crc(p_1182->g_484.s7, "p_1182->g_484.s7", print_hash_value);
    transparent_crc(p_1182->g_484.s8, "p_1182->g_484.s8", print_hash_value);
    transparent_crc(p_1182->g_484.s9, "p_1182->g_484.s9", print_hash_value);
    transparent_crc(p_1182->g_484.sa, "p_1182->g_484.sa", print_hash_value);
    transparent_crc(p_1182->g_484.sb, "p_1182->g_484.sb", print_hash_value);
    transparent_crc(p_1182->g_484.sc, "p_1182->g_484.sc", print_hash_value);
    transparent_crc(p_1182->g_484.sd, "p_1182->g_484.sd", print_hash_value);
    transparent_crc(p_1182->g_484.se, "p_1182->g_484.se", print_hash_value);
    transparent_crc(p_1182->g_484.sf, "p_1182->g_484.sf", print_hash_value);
    transparent_crc(p_1182->g_485.s0, "p_1182->g_485.s0", print_hash_value);
    transparent_crc(p_1182->g_485.s1, "p_1182->g_485.s1", print_hash_value);
    transparent_crc(p_1182->g_485.s2, "p_1182->g_485.s2", print_hash_value);
    transparent_crc(p_1182->g_485.s3, "p_1182->g_485.s3", print_hash_value);
    transparent_crc(p_1182->g_485.s4, "p_1182->g_485.s4", print_hash_value);
    transparent_crc(p_1182->g_485.s5, "p_1182->g_485.s5", print_hash_value);
    transparent_crc(p_1182->g_485.s6, "p_1182->g_485.s6", print_hash_value);
    transparent_crc(p_1182->g_485.s7, "p_1182->g_485.s7", print_hash_value);
    transparent_crc(p_1182->g_535.s0, "p_1182->g_535.s0", print_hash_value);
    transparent_crc(p_1182->g_535.s1, "p_1182->g_535.s1", print_hash_value);
    transparent_crc(p_1182->g_535.s2, "p_1182->g_535.s2", print_hash_value);
    transparent_crc(p_1182->g_535.s3, "p_1182->g_535.s3", print_hash_value);
    transparent_crc(p_1182->g_535.s4, "p_1182->g_535.s4", print_hash_value);
    transparent_crc(p_1182->g_535.s5, "p_1182->g_535.s5", print_hash_value);
    transparent_crc(p_1182->g_535.s6, "p_1182->g_535.s6", print_hash_value);
    transparent_crc(p_1182->g_535.s7, "p_1182->g_535.s7", print_hash_value);
    transparent_crc(p_1182->g_535.s8, "p_1182->g_535.s8", print_hash_value);
    transparent_crc(p_1182->g_535.s9, "p_1182->g_535.s9", print_hash_value);
    transparent_crc(p_1182->g_535.sa, "p_1182->g_535.sa", print_hash_value);
    transparent_crc(p_1182->g_535.sb, "p_1182->g_535.sb", print_hash_value);
    transparent_crc(p_1182->g_535.sc, "p_1182->g_535.sc", print_hash_value);
    transparent_crc(p_1182->g_535.sd, "p_1182->g_535.sd", print_hash_value);
    transparent_crc(p_1182->g_535.se, "p_1182->g_535.se", print_hash_value);
    transparent_crc(p_1182->g_535.sf, "p_1182->g_535.sf", print_hash_value);
    transparent_crc(p_1182->g_630.x, "p_1182->g_630.x", print_hash_value);
    transparent_crc(p_1182->g_630.y, "p_1182->g_630.y", print_hash_value);
    transparent_crc(p_1182->g_630.z, "p_1182->g_630.z", print_hash_value);
    transparent_crc(p_1182->g_630.w, "p_1182->g_630.w", print_hash_value);
    transparent_crc(p_1182->g_636.x, "p_1182->g_636.x", print_hash_value);
    transparent_crc(p_1182->g_636.y, "p_1182->g_636.y", print_hash_value);
    transparent_crc(p_1182->g_641.s0, "p_1182->g_641.s0", print_hash_value);
    transparent_crc(p_1182->g_641.s1, "p_1182->g_641.s1", print_hash_value);
    transparent_crc(p_1182->g_641.s2, "p_1182->g_641.s2", print_hash_value);
    transparent_crc(p_1182->g_641.s3, "p_1182->g_641.s3", print_hash_value);
    transparent_crc(p_1182->g_641.s4, "p_1182->g_641.s4", print_hash_value);
    transparent_crc(p_1182->g_641.s5, "p_1182->g_641.s5", print_hash_value);
    transparent_crc(p_1182->g_641.s6, "p_1182->g_641.s6", print_hash_value);
    transparent_crc(p_1182->g_641.s7, "p_1182->g_641.s7", print_hash_value);
    transparent_crc(p_1182->g_641.s8, "p_1182->g_641.s8", print_hash_value);
    transparent_crc(p_1182->g_641.s9, "p_1182->g_641.s9", print_hash_value);
    transparent_crc(p_1182->g_641.sa, "p_1182->g_641.sa", print_hash_value);
    transparent_crc(p_1182->g_641.sb, "p_1182->g_641.sb", print_hash_value);
    transparent_crc(p_1182->g_641.sc, "p_1182->g_641.sc", print_hash_value);
    transparent_crc(p_1182->g_641.sd, "p_1182->g_641.sd", print_hash_value);
    transparent_crc(p_1182->g_641.se, "p_1182->g_641.se", print_hash_value);
    transparent_crc(p_1182->g_641.sf, "p_1182->g_641.sf", print_hash_value);
    transparent_crc(p_1182->g_693.s0, "p_1182->g_693.s0", print_hash_value);
    transparent_crc(p_1182->g_693.s1, "p_1182->g_693.s1", print_hash_value);
    transparent_crc(p_1182->g_693.s2, "p_1182->g_693.s2", print_hash_value);
    transparent_crc(p_1182->g_693.s3, "p_1182->g_693.s3", print_hash_value);
    transparent_crc(p_1182->g_693.s4, "p_1182->g_693.s4", print_hash_value);
    transparent_crc(p_1182->g_693.s5, "p_1182->g_693.s5", print_hash_value);
    transparent_crc(p_1182->g_693.s6, "p_1182->g_693.s6", print_hash_value);
    transparent_crc(p_1182->g_693.s7, "p_1182->g_693.s7", print_hash_value);
    transparent_crc(p_1182->g_694.s0, "p_1182->g_694.s0", print_hash_value);
    transparent_crc(p_1182->g_694.s1, "p_1182->g_694.s1", print_hash_value);
    transparent_crc(p_1182->g_694.s2, "p_1182->g_694.s2", print_hash_value);
    transparent_crc(p_1182->g_694.s3, "p_1182->g_694.s3", print_hash_value);
    transparent_crc(p_1182->g_694.s4, "p_1182->g_694.s4", print_hash_value);
    transparent_crc(p_1182->g_694.s5, "p_1182->g_694.s5", print_hash_value);
    transparent_crc(p_1182->g_694.s6, "p_1182->g_694.s6", print_hash_value);
    transparent_crc(p_1182->g_694.s7, "p_1182->g_694.s7", print_hash_value);
    transparent_crc(p_1182->g_696.s0, "p_1182->g_696.s0", print_hash_value);
    transparent_crc(p_1182->g_696.s1, "p_1182->g_696.s1", print_hash_value);
    transparent_crc(p_1182->g_696.s2, "p_1182->g_696.s2", print_hash_value);
    transparent_crc(p_1182->g_696.s3, "p_1182->g_696.s3", print_hash_value);
    transparent_crc(p_1182->g_696.s4, "p_1182->g_696.s4", print_hash_value);
    transparent_crc(p_1182->g_696.s5, "p_1182->g_696.s5", print_hash_value);
    transparent_crc(p_1182->g_696.s6, "p_1182->g_696.s6", print_hash_value);
    transparent_crc(p_1182->g_696.s7, "p_1182->g_696.s7", print_hash_value);
    transparent_crc(p_1182->g_696.s8, "p_1182->g_696.s8", print_hash_value);
    transparent_crc(p_1182->g_696.s9, "p_1182->g_696.s9", print_hash_value);
    transparent_crc(p_1182->g_696.sa, "p_1182->g_696.sa", print_hash_value);
    transparent_crc(p_1182->g_696.sb, "p_1182->g_696.sb", print_hash_value);
    transparent_crc(p_1182->g_696.sc, "p_1182->g_696.sc", print_hash_value);
    transparent_crc(p_1182->g_696.sd, "p_1182->g_696.sd", print_hash_value);
    transparent_crc(p_1182->g_696.se, "p_1182->g_696.se", print_hash_value);
    transparent_crc(p_1182->g_696.sf, "p_1182->g_696.sf", print_hash_value);
    transparent_crc(p_1182->g_698.x, "p_1182->g_698.x", print_hash_value);
    transparent_crc(p_1182->g_698.y, "p_1182->g_698.y", print_hash_value);
    transparent_crc(p_1182->g_698.z, "p_1182->g_698.z", print_hash_value);
    transparent_crc(p_1182->g_698.w, "p_1182->g_698.w", print_hash_value);
    transparent_crc(p_1182->g_707.s0, "p_1182->g_707.s0", print_hash_value);
    transparent_crc(p_1182->g_707.s1, "p_1182->g_707.s1", print_hash_value);
    transparent_crc(p_1182->g_707.s2, "p_1182->g_707.s2", print_hash_value);
    transparent_crc(p_1182->g_707.s3, "p_1182->g_707.s3", print_hash_value);
    transparent_crc(p_1182->g_707.s4, "p_1182->g_707.s4", print_hash_value);
    transparent_crc(p_1182->g_707.s5, "p_1182->g_707.s5", print_hash_value);
    transparent_crc(p_1182->g_707.s6, "p_1182->g_707.s6", print_hash_value);
    transparent_crc(p_1182->g_707.s7, "p_1182->g_707.s7", print_hash_value);
    transparent_crc(p_1182->g_707.s8, "p_1182->g_707.s8", print_hash_value);
    transparent_crc(p_1182->g_707.s9, "p_1182->g_707.s9", print_hash_value);
    transparent_crc(p_1182->g_707.sa, "p_1182->g_707.sa", print_hash_value);
    transparent_crc(p_1182->g_707.sb, "p_1182->g_707.sb", print_hash_value);
    transparent_crc(p_1182->g_707.sc, "p_1182->g_707.sc", print_hash_value);
    transparent_crc(p_1182->g_707.sd, "p_1182->g_707.sd", print_hash_value);
    transparent_crc(p_1182->g_707.se, "p_1182->g_707.se", print_hash_value);
    transparent_crc(p_1182->g_707.sf, "p_1182->g_707.sf", print_hash_value);
    transparent_crc(p_1182->g_748.s0, "p_1182->g_748.s0", print_hash_value);
    transparent_crc(p_1182->g_748.s1, "p_1182->g_748.s1", print_hash_value);
    transparent_crc(p_1182->g_748.s2, "p_1182->g_748.s2", print_hash_value);
    transparent_crc(p_1182->g_748.s3, "p_1182->g_748.s3", print_hash_value);
    transparent_crc(p_1182->g_748.s4, "p_1182->g_748.s4", print_hash_value);
    transparent_crc(p_1182->g_748.s5, "p_1182->g_748.s5", print_hash_value);
    transparent_crc(p_1182->g_748.s6, "p_1182->g_748.s6", print_hash_value);
    transparent_crc(p_1182->g_748.s7, "p_1182->g_748.s7", print_hash_value);
    transparent_crc(p_1182->g_756.x, "p_1182->g_756.x", print_hash_value);
    transparent_crc(p_1182->g_756.y, "p_1182->g_756.y", print_hash_value);
    transparent_crc(p_1182->g_756.z, "p_1182->g_756.z", print_hash_value);
    transparent_crc(p_1182->g_756.w, "p_1182->g_756.w", print_hash_value);
    transparent_crc(p_1182->g_774.x, "p_1182->g_774.x", print_hash_value);
    transparent_crc(p_1182->g_774.y, "p_1182->g_774.y", print_hash_value);
    transparent_crc(p_1182->g_775.s0, "p_1182->g_775.s0", print_hash_value);
    transparent_crc(p_1182->g_775.s1, "p_1182->g_775.s1", print_hash_value);
    transparent_crc(p_1182->g_775.s2, "p_1182->g_775.s2", print_hash_value);
    transparent_crc(p_1182->g_775.s3, "p_1182->g_775.s3", print_hash_value);
    transparent_crc(p_1182->g_775.s4, "p_1182->g_775.s4", print_hash_value);
    transparent_crc(p_1182->g_775.s5, "p_1182->g_775.s5", print_hash_value);
    transparent_crc(p_1182->g_775.s6, "p_1182->g_775.s6", print_hash_value);
    transparent_crc(p_1182->g_775.s7, "p_1182->g_775.s7", print_hash_value);
    transparent_crc(p_1182->g_827.x, "p_1182->g_827.x", print_hash_value);
    transparent_crc(p_1182->g_827.y, "p_1182->g_827.y", print_hash_value);
    transparent_crc(p_1182->g_827.z, "p_1182->g_827.z", print_hash_value);
    transparent_crc(p_1182->g_827.w, "p_1182->g_827.w", print_hash_value);
    transparent_crc(p_1182->g_881.x, "p_1182->g_881.x", print_hash_value);
    transparent_crc(p_1182->g_881.y, "p_1182->g_881.y", print_hash_value);
    transparent_crc(p_1182->g_881.z, "p_1182->g_881.z", print_hash_value);
    transparent_crc(p_1182->g_881.w, "p_1182->g_881.w", print_hash_value);
    transparent_crc(p_1182->g_925.x, "p_1182->g_925.x", print_hash_value);
    transparent_crc(p_1182->g_925.y, "p_1182->g_925.y", print_hash_value);
    transparent_crc(p_1182->g_925.z, "p_1182->g_925.z", print_hash_value);
    transparent_crc(p_1182->g_925.w, "p_1182->g_925.w", print_hash_value);
    transparent_crc(p_1182->g_926.s0, "p_1182->g_926.s0", print_hash_value);
    transparent_crc(p_1182->g_926.s1, "p_1182->g_926.s1", print_hash_value);
    transparent_crc(p_1182->g_926.s2, "p_1182->g_926.s2", print_hash_value);
    transparent_crc(p_1182->g_926.s3, "p_1182->g_926.s3", print_hash_value);
    transparent_crc(p_1182->g_926.s4, "p_1182->g_926.s4", print_hash_value);
    transparent_crc(p_1182->g_926.s5, "p_1182->g_926.s5", print_hash_value);
    transparent_crc(p_1182->g_926.s6, "p_1182->g_926.s6", print_hash_value);
    transparent_crc(p_1182->g_926.s7, "p_1182->g_926.s7", print_hash_value);
    transparent_crc(p_1182->g_947.s0, "p_1182->g_947.s0", print_hash_value);
    transparent_crc(p_1182->g_947.s1, "p_1182->g_947.s1", print_hash_value);
    transparent_crc(p_1182->g_947.s2, "p_1182->g_947.s2", print_hash_value);
    transparent_crc(p_1182->g_947.s3, "p_1182->g_947.s3", print_hash_value);
    transparent_crc(p_1182->g_947.s4, "p_1182->g_947.s4", print_hash_value);
    transparent_crc(p_1182->g_947.s5, "p_1182->g_947.s5", print_hash_value);
    transparent_crc(p_1182->g_947.s6, "p_1182->g_947.s6", print_hash_value);
    transparent_crc(p_1182->g_947.s7, "p_1182->g_947.s7", print_hash_value);
    transparent_crc(p_1182->g_963.x, "p_1182->g_963.x", print_hash_value);
    transparent_crc(p_1182->g_963.y, "p_1182->g_963.y", print_hash_value);
    transparent_crc(p_1182->g_963.z, "p_1182->g_963.z", print_hash_value);
    transparent_crc(p_1182->g_963.w, "p_1182->g_963.w", print_hash_value);
    transparent_crc(p_1182->g_972.x, "p_1182->g_972.x", print_hash_value);
    transparent_crc(p_1182->g_972.y, "p_1182->g_972.y", print_hash_value);
    transparent_crc(p_1182->g_984.s0, "p_1182->g_984.s0", print_hash_value);
    transparent_crc(p_1182->g_984.s1, "p_1182->g_984.s1", print_hash_value);
    transparent_crc(p_1182->g_984.s2, "p_1182->g_984.s2", print_hash_value);
    transparent_crc(p_1182->g_984.s3, "p_1182->g_984.s3", print_hash_value);
    transparent_crc(p_1182->g_984.s4, "p_1182->g_984.s4", print_hash_value);
    transparent_crc(p_1182->g_984.s5, "p_1182->g_984.s5", print_hash_value);
    transparent_crc(p_1182->g_984.s6, "p_1182->g_984.s6", print_hash_value);
    transparent_crc(p_1182->g_984.s7, "p_1182->g_984.s7", print_hash_value);
    transparent_crc(p_1182->g_984.s8, "p_1182->g_984.s8", print_hash_value);
    transparent_crc(p_1182->g_984.s9, "p_1182->g_984.s9", print_hash_value);
    transparent_crc(p_1182->g_984.sa, "p_1182->g_984.sa", print_hash_value);
    transparent_crc(p_1182->g_984.sb, "p_1182->g_984.sb", print_hash_value);
    transparent_crc(p_1182->g_984.sc, "p_1182->g_984.sc", print_hash_value);
    transparent_crc(p_1182->g_984.sd, "p_1182->g_984.sd", print_hash_value);
    transparent_crc(p_1182->g_984.se, "p_1182->g_984.se", print_hash_value);
    transparent_crc(p_1182->g_984.sf, "p_1182->g_984.sf", print_hash_value);
    transparent_crc(p_1182->g_991.s0, "p_1182->g_991.s0", print_hash_value);
    transparent_crc(p_1182->g_991.s1, "p_1182->g_991.s1", print_hash_value);
    transparent_crc(p_1182->g_991.s2, "p_1182->g_991.s2", print_hash_value);
    transparent_crc(p_1182->g_991.s3, "p_1182->g_991.s3", print_hash_value);
    transparent_crc(p_1182->g_991.s4, "p_1182->g_991.s4", print_hash_value);
    transparent_crc(p_1182->g_991.s5, "p_1182->g_991.s5", print_hash_value);
    transparent_crc(p_1182->g_991.s6, "p_1182->g_991.s6", print_hash_value);
    transparent_crc(p_1182->g_991.s7, "p_1182->g_991.s7", print_hash_value);
    transparent_crc(p_1182->g_1012.s0, "p_1182->g_1012.s0", print_hash_value);
    transparent_crc(p_1182->g_1012.s1, "p_1182->g_1012.s1", print_hash_value);
    transparent_crc(p_1182->g_1012.s2, "p_1182->g_1012.s2", print_hash_value);
    transparent_crc(p_1182->g_1012.s3, "p_1182->g_1012.s3", print_hash_value);
    transparent_crc(p_1182->g_1012.s4, "p_1182->g_1012.s4", print_hash_value);
    transparent_crc(p_1182->g_1012.s5, "p_1182->g_1012.s5", print_hash_value);
    transparent_crc(p_1182->g_1012.s6, "p_1182->g_1012.s6", print_hash_value);
    transparent_crc(p_1182->g_1012.s7, "p_1182->g_1012.s7", print_hash_value);
    transparent_crc(p_1182->g_1019.x, "p_1182->g_1019.x", print_hash_value);
    transparent_crc(p_1182->g_1019.y, "p_1182->g_1019.y", print_hash_value);
    transparent_crc(p_1182->g_1019.z, "p_1182->g_1019.z", print_hash_value);
    transparent_crc(p_1182->g_1019.w, "p_1182->g_1019.w", print_hash_value);
    transparent_crc(p_1182->g_1020.s0, "p_1182->g_1020.s0", print_hash_value);
    transparent_crc(p_1182->g_1020.s1, "p_1182->g_1020.s1", print_hash_value);
    transparent_crc(p_1182->g_1020.s2, "p_1182->g_1020.s2", print_hash_value);
    transparent_crc(p_1182->g_1020.s3, "p_1182->g_1020.s3", print_hash_value);
    transparent_crc(p_1182->g_1020.s4, "p_1182->g_1020.s4", print_hash_value);
    transparent_crc(p_1182->g_1020.s5, "p_1182->g_1020.s5", print_hash_value);
    transparent_crc(p_1182->g_1020.s6, "p_1182->g_1020.s6", print_hash_value);
    transparent_crc(p_1182->g_1020.s7, "p_1182->g_1020.s7", print_hash_value);
    transparent_crc(p_1182->g_1020.s8, "p_1182->g_1020.s8", print_hash_value);
    transparent_crc(p_1182->g_1020.s9, "p_1182->g_1020.s9", print_hash_value);
    transparent_crc(p_1182->g_1020.sa, "p_1182->g_1020.sa", print_hash_value);
    transparent_crc(p_1182->g_1020.sb, "p_1182->g_1020.sb", print_hash_value);
    transparent_crc(p_1182->g_1020.sc, "p_1182->g_1020.sc", print_hash_value);
    transparent_crc(p_1182->g_1020.sd, "p_1182->g_1020.sd", print_hash_value);
    transparent_crc(p_1182->g_1020.se, "p_1182->g_1020.se", print_hash_value);
    transparent_crc(p_1182->g_1020.sf, "p_1182->g_1020.sf", print_hash_value);
    transparent_crc(p_1182->g_1021.x, "p_1182->g_1021.x", print_hash_value);
    transparent_crc(p_1182->g_1021.y, "p_1182->g_1021.y", print_hash_value);
    transparent_crc(p_1182->g_1026, "p_1182->g_1026", print_hash_value);
    transparent_crc(p_1182->g_1064.s0, "p_1182->g_1064.s0", print_hash_value);
    transparent_crc(p_1182->g_1064.s1, "p_1182->g_1064.s1", print_hash_value);
    transparent_crc(p_1182->g_1064.s2, "p_1182->g_1064.s2", print_hash_value);
    transparent_crc(p_1182->g_1064.s3, "p_1182->g_1064.s3", print_hash_value);
    transparent_crc(p_1182->g_1064.s4, "p_1182->g_1064.s4", print_hash_value);
    transparent_crc(p_1182->g_1064.s5, "p_1182->g_1064.s5", print_hash_value);
    transparent_crc(p_1182->g_1064.s6, "p_1182->g_1064.s6", print_hash_value);
    transparent_crc(p_1182->g_1064.s7, "p_1182->g_1064.s7", print_hash_value);
    transparent_crc(p_1182->g_1150.x, "p_1182->g_1150.x", print_hash_value);
    transparent_crc(p_1182->g_1150.y, "p_1182->g_1150.y", print_hash_value);
    transparent_crc(p_1182->g_1171, "p_1182->g_1171", print_hash_value);
    transparent_crc(p_1182->g_1173, "p_1182->g_1173", print_hash_value);
    transparent_crc(p_1182->v_collective, "p_1182->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 74; i++)
            transparent_crc(p_1182->g_special_values[i + 74 * get_linear_group_id()], "p_1182->g_special_values[i + 74 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 74; i++)
            transparent_crc(p_1182->l_special_values[i], "p_1182->l_special_values[i]", print_hash_value);
    transparent_crc(p_1182->l_comm_values[get_linear_local_id()], "p_1182->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1182->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_1182->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
