// --atomics 87 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 64,18,4 -l 1,9,2
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

__constant uint32_t permutations[10][18] = {
{12,9,13,1,6,2,0,11,10,7,16,4,14,8,17,3,5,15}, // permutation 0
{10,12,2,3,8,7,17,16,14,15,5,13,9,11,1,0,6,4}, // permutation 1
{10,15,5,9,2,3,4,12,8,7,11,1,13,0,17,6,16,14}, // permutation 2
{12,8,15,7,5,10,6,17,13,0,9,11,14,3,1,16,2,4}, // permutation 3
{9,7,14,2,13,1,12,17,16,15,10,5,0,8,3,4,11,6}, // permutation 4
{9,6,11,1,17,12,0,8,14,2,3,7,16,10,15,5,4,13}, // permutation 5
{4,8,3,15,2,13,0,14,7,1,16,10,11,12,6,5,17,9}, // permutation 6
{15,16,13,1,12,6,2,3,10,0,11,17,14,5,9,7,4,8}, // permutation 7
{12,3,11,13,14,0,16,15,7,8,6,9,4,10,1,5,17,2}, // permutation 8
{14,9,0,13,10,2,16,11,3,17,5,15,7,6,1,12,8,4} // permutation 9
};

// Seed: 2936806954

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    VECTOR(int16_t, 2) g_19;
    VECTOR(int8_t, 4) g_25;
    int16_t g_43[7][9][1];
    uint16_t g_64;
    int16_t *g_83;
    int16_t g_85;
    uint8_t g_92;
    int32_t g_94;
    volatile VECTOR(int16_t, 8) g_454;
    int32_t g_458[3][1];
    uint8_t g_483[7][8];
    uint32_t g_487;
    int64_t g_489;
    uint16_t g_505[8][5][4];
    int32_t *g_507;
    int32_t ** volatile g_506;
    int32_t ** volatile g_521;
    int32_t ** volatile g_522;
    volatile VECTOR(int64_t, 16) g_530;
    VECTOR(uint16_t, 2) g_544;
    volatile int32_t g_549;
    uint16_t *g_558;
    uint16_t ** volatile g_557[7];
    int32_t ** volatile g_560;
    volatile int32_t g_572;
    volatile uint32_t g_573;
    int32_t g_582;
    uint64_t g_584[1];
    int16_t g_599;
    VECTOR(int16_t, 4) g_604;
    uint32_t g_619;
    int32_t ** volatile g_626;
    int32_t * volatile g_630;
    int32_t ** volatile g_638;
    int32_t * volatile g_639;
    volatile VECTOR(int8_t, 8) g_653;
    uint64_t g_655;
    VECTOR(uint32_t, 8) g_682;
    int32_t ** volatile g_685;
    int64_t g_708;
    volatile uint16_t g_711;
    volatile uint32_t g_715;
    volatile VECTOR(int64_t, 4) g_720;
    VECTOR(int64_t, 16) g_721;
    volatile uint8_t g_745;
    volatile uint8_t * volatile g_744;
    volatile uint8_t * volatile *g_743;
    VECTOR(int16_t, 8) g_746;
    volatile int16_t * volatile g_767[1];
    volatile int16_t * volatile * volatile g_766;
    volatile int16_t * volatile * volatile *g_765[1][6];
    int32_t g_768;
    VECTOR(uint32_t, 2) g_770;
    int32_t ** volatile g_775;
    VECTOR(uint32_t, 2) g_789;
    int8_t g_795[2][6][5];
    uint32_t g_807;
    int16_t **g_819;
    int16_t ***g_818[9][3];
    int32_t ** volatile g_837[7];
    int32_t ** volatile g_838[2][3][9];
    VECTOR(int32_t, 4) g_850;
    VECTOR(int16_t, 8) g_883;
    VECTOR(int16_t, 8) g_884;
    VECTOR(int16_t, 4) g_886;
    volatile VECTOR(uint8_t, 2) g_894;
    VECTOR(uint8_t, 4) g_917;
    VECTOR(uint8_t, 4) g_923;
    volatile VECTOR(uint16_t, 16) g_929;
    VECTOR(uint32_t, 8) g_938;
    VECTOR(uint64_t, 16) g_961;
    VECTOR(uint8_t, 8) g_1000;
    volatile VECTOR(int32_t, 16) g_1019;
    VECTOR(int8_t, 2) g_1035;
    uint32_t g_1049;
    int32_t g_1094;
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
int8_t  func_1(struct S0 * p_1095);
uint16_t  func_8(uint32_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, uint16_t  p_13, struct S0 * p_1095);
uint16_t  func_20(int32_t  p_21, uint32_t  p_22, struct S0 * p_1095);
int8_t  func_31(uint32_t  p_32, uint8_t  p_33, uint32_t  p_34, int32_t  p_35, struct S0 * p_1095);
uint8_t  func_36(int8_t  p_37, int32_t  p_38, uint32_t  p_39, int8_t  p_40, int32_t  p_41, struct S0 * p_1095);
uint32_t  func_45(int32_t  p_46, int16_t * p_47, int32_t  p_48, struct S0 * p_1095);
int32_t  func_51(uint32_t  p_52, int16_t * p_53, int8_t  p_54, int16_t * p_55, int16_t * p_56, struct S0 * p_1095);
int16_t * func_58(uint32_t  p_59, uint32_t  p_60, int32_t  p_61, int64_t  p_62, struct S0 * p_1095);
uint16_t  func_71(int16_t * p_72, uint8_t  p_73, int16_t * p_74, int16_t * p_75, int32_t  p_76, struct S0 * p_1095);
int16_t * func_77(int16_t * p_78, uint8_t  p_79, int8_t  p_80, uint64_t  p_81, int16_t * p_82, struct S0 * p_1095);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1095->g_2 p_1095->g_19 p_1095->g_25 p_1095->g_454 p_1095->g_557 p_1095->g_573 p_1095->g_544 p_1095->g_521 p_1095->g_507 p_1095->g_626 p_1095->g_630 p_1095->g_584 p_1095->g_582 p_1095->g_558 p_1095->g_638 p_1095->g_639 p_1095->l_comm_values p_1095->g_655 p_1095->g_458 p_1095->g_653 p_1095->g_94 p_1095->g_549 p_1095->g_682 p_1095->g_64 p_1095->g_489 p_1095->g_715 p_1095->g_720 p_1095->g_721 p_1095->g_comm_values p_1095->g_487 p_1095->g_530 p_1095->g_505 p_1095->g_743 p_1095->g_746 p_1095->g_483 p_1095->g_744 p_1095->g_745 p_1095->g_765 p_1095->g_619 p_1095->g_775 p_1095->g_92 p_1095->g_599 p_1095->g_807 p_1095->g_883 p_1095->g_884 p_1095->g_886 p_1095->g_894 p_1095->g_85 p_1095->g_917 p_1095->g_43 p_1095->g_923 p_1095->g_929 p_1095->g_938 p_1095->g_961 p_1095->g_768 p_1095->g_708 p_1095->g_1000 p_1095->g_1019 p_1095->g_83 p_1095->g_1035 p_1095->g_1049 p_1095->g_850 p_1095->g_795 p_1095->g_604 p_1095->g_1094
 * writes: p_1095->g_2 p_1095->g_43 p_1095->g_94 p_1095->g_92 p_1095->g_64 p_1095->g_557 p_1095->g_507 p_1095->g_573 p_1095->g_85 p_1095->g_487 p_1095->g_604 p_1095->g_599 p_1095->g_619 p_1095->g_584 p_1095->g_582 p_1095->g_655 p_1095->g_483 p_1095->g_489 p_1095->g_715 p_1095->g_768 p_1095->g_807 p_1095->g_558 p_1095->g_25 p_1095->g_789 p_1095->g_708 p_1095->g_850 p_1095->g_1094
 */
int8_t  func_1(struct S0 * p_1095)
{ /* block id: 4 */
    uint16_t l_5 = 0x609CL;
    uint32_t l_14[10][6] = {{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL},{0x9CD49FCFL,1UL,4294967292UL,0xCE008FB0L,4294967292UL,1UL}};
    uint64_t l_30 = 0xFC167656540F213EL;
    int16_t *l_42 = &p_1095->g_43[3][2][0];
    VECTOR(int32_t, 16) l_44 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-3L)), (-3L)), (-3L), (-2L), (-3L), (VECTOR(int32_t, 2))((-2L), (-3L)), (VECTOR(int32_t, 2))((-2L), (-3L)), (-2L), (-3L), (-2L), (-3L));
    int32_t *l_1093 = &p_1095->g_1094;
    int i, j;
    for (p_1095->g_2 = (-18); (p_1095->g_2 >= (-4)); p_1095->g_2 = safe_add_func_uint64_t_u_u(p_1095->g_2, 6))
    { /* block id: 7 */
        if (l_5)
            break;
    }
    (*l_1093) |= ((safe_mul_func_uint16_t_u_u(func_8(p_1095->g_2, p_1095->g_2, l_14[3][0], l_14[0][3], (safe_rshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1095->g_19.xyyx)).wyzyxxzy)).s6, (l_5 < ((func_20((safe_rshift_func_uint16_t_u_u((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_1095->g_25.xzzx)).even)), 0x70L, 0x4DL)).y , (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_30, 4)), (func_31((func_36(p_1095->g_25.y, (((*l_42) = (-10L)) >= (((VECTOR(int32_t, 4))(0x7A332A5BL, ((VECTOR(int32_t, 2))(l_44.s17)), 0x1919139FL)).x != func_45(l_14[9][2], l_42, l_5, p_1095))), p_1095->g_505[1][2][0], l_44.s6, p_1095->g_25.x, p_1095) != 0x09L), p_1095->g_544.y, p_1095->g_746.s0, l_44.sb, p_1095) <= (-1L))))), p_1095->g_19.y)), p_1095->g_883.s6, p_1095) | p_1095->g_746.s4) , p_1095->g_883.s4)))) == p_1095->g_795[1][0][1]) <= l_14[8][5]), l_14[9][0])), p_1095), l_14[3][0])) && p_1095->g_604.w);
    (*l_1093) |= ((void*)0 != &p_1095->g_584[0]);
    return p_1095->g_682.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_894 p_1095->g_604 p_1095->g_744 p_1095->g_745 p_1095->g_655 p_1095->g_454 p_1095->g_708 p_1095->g_19 p_1095->g_1019 p_1095->g_558 p_1095->g_64 p_1095->g_599 p_1095->g_85 p_1095->g_619 p_1095->g_25
 * writes:
 */
uint16_t  func_8(uint32_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, uint16_t  p_13, struct S0 * p_1095)
{ /* block id: 492 */
    int32_t *l_1051 = (void*)0;
    int16_t *l_1060 = &p_1095->g_43[3][2][0];
    int16_t *l_1061[4][8][3] = {{{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85}},{{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85}},{{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85}},{{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85},{&p_1095->g_43[6][7][0],(void*)0,&p_1095->g_85}}};
    uint8_t *l_1065 = (void*)0;
    uint8_t **l_1064 = &l_1065;
    uint8_t ***l_1066 = &l_1064;
    int32_t l_1071 = (-2L);
    uint32_t l_1072[9] = {0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L,0x449631E9L};
    uint32_t l_1073 = 4294967294UL;
    uint8_t **l_1079 = &l_1065;
    uint8_t ***l_1078 = &l_1079;
    uint16_t l_1092 = 3UL;
    int i, j, k;
    l_1051 = l_1051;
    l_1071 = (p_1095->g_894.x || (safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((p_1095->g_604.z >= (((safe_div_func_int16_t_s_s((l_1060 != (l_1061[1][5][1] = l_1060)), ((safe_mul_func_uint16_t_u_u(((((*l_1066) = l_1064) == &p_1095->g_744) , ((*p_1095->g_744) < ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((p_1095->g_655 , p_9) & l_1071), l_1071)), 0x40EC2FEBL)) , 0x3EL))), p_9)) , l_1072[0]))) || l_1072[1]) || p_1095->g_454.s0)), p_9)) , &p_13) == &p_1095->g_505[1][2][0]), p_9)) < l_1072[5]), l_1073)));
    l_1092 &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((((*l_1066) == ((*l_1078) = (*l_1066))) < (((((p_1095->g_708 ^ p_1095->g_19.x) ^ p_11) == ((((l_1072[2] , (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 != &p_13), ((VECTOR(int8_t, 2))(5L, 0x27L)).odd)), (safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(p_1095->g_655, p_1095->g_1019.s3)), FAKE_DIVERGE(p_1095->group_0_offset, get_group_id(0), 10))) >= p_9) & 0x6704L), (*p_1095->g_558)))))) | p_10) , l_1061[0][1][1]) == (void*)0)) || p_1095->g_619) && 0UL)) , (void*)0) == (void*)0), p_1095->g_25.x)), (*p_1095->g_558)));
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_489 p_1095->g_94 p_1095->g_768 p_1095->g_708 p_1095->g_744 p_1095->g_745 p_1095->g_1000 p_1095->g_558 p_1095->g_64 p_1095->g_599 p_1095->g_85 p_1095->g_comm_values p_1095->g_19 p_1095->g_1019 p_1095->g_83 p_1095->g_619 p_1095->g_582 p_1095->g_630 p_1095->g_1035 p_1095->g_505 p_1095->g_549 p_1095->g_743 p_1095->g_1049 p_1095->g_850
 * writes: p_1095->g_489 p_1095->g_94 p_1095->g_768 p_1095->g_708 p_1095->g_619 p_1095->g_582 p_1095->g_850
 */
uint16_t  func_20(int32_t  p_21, uint32_t  p_22, struct S0 * p_1095)
{ /* block id: 451 */
    uint8_t l_1015 = 0x19L;
    int16_t *l_1025 = &p_1095->g_43[4][5][0];
    VECTOR(int32_t, 16) l_1043 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x090A7EDEL), 0x090A7EDEL), 0x090A7EDEL, (-10L), 0x090A7EDEL, (VECTOR(int32_t, 2))((-10L), 0x090A7EDEL), (VECTOR(int32_t, 2))((-10L), 0x090A7EDEL), (-10L), 0x090A7EDEL, (-10L), 0x090A7EDEL);
    int8_t l_1048 = 0x4EL;
    int i;
    for (p_1095->g_489 = 4; (p_1095->g_489 != (-15)); p_1095->g_489 = safe_sub_func_uint8_t_u_u(p_1095->g_489, 5))
    { /* block id: 454 */
        int16_t **l_1001 = &p_1095->g_83;
        int32_t l_1018 = 0L;
        VECTOR(int32_t, 16) l_1024 = (VECTOR(int32_t, 16))(0x32CE7539L, (VECTOR(int32_t, 4))(0x32CE7539L, (VECTOR(int32_t, 2))(0x32CE7539L, 0x30E9B774L), 0x30E9B774L), 0x30E9B774L, 0x32CE7539L, 0x30E9B774L, (VECTOR(int32_t, 2))(0x32CE7539L, 0x30E9B774L), (VECTOR(int32_t, 2))(0x32CE7539L, 0x30E9B774L), 0x32CE7539L, 0x30E9B774L, 0x32CE7539L, 0x30E9B774L);
        uint64_t *l_1036[3][6][10] = {{{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655}},{{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655}},{{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655},{&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,&p_1095->g_655,(void*)0,&p_1095->g_655,&p_1095->g_655}}};
        uint32_t *l_1047[3];
        int32_t *l_1050[1][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1047[i] = &p_1095->g_619;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1050[i][j] = &p_1095->g_582;
        }
        for (p_1095->g_94 = 0; (p_1095->g_94 <= 27); p_1095->g_94 = safe_add_func_uint64_t_u_u(p_1095->g_94, 4))
        { /* block id: 457 */
            int8_t l_993 = 0x22L;
            int32_t l_1013 = 0x62DBB05CL;
            uint32_t l_1014 = 0xCD7961F9L;
            for (p_1095->g_768 = (-30); (p_1095->g_768 >= (-27)); p_1095->g_768 = safe_add_func_int8_t_s_s(p_1095->g_768, 3))
            { /* block id: 460 */
                int16_t ***l_1002 = (void*)0;
                int16_t ***l_1003 = &l_1001;
                int8_t *l_1008 = (void*)0;
                int8_t *l_1009 = (void*)0;
                int8_t *l_1010 = &l_993;
                int32_t l_1011[3];
                uint64_t *l_1012 = (void*)0;
                int32_t *l_1016 = (void*)0;
                int32_t *l_1017 = (void*)0;
                uint32_t *l_1027 = &p_1095->g_619;
                int32_t *l_1030 = &l_1011[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_1011[i] = 0x22101481L;
                for (p_1095->g_708 = 0; (p_1095->g_708 >= (-7)); p_1095->g_708 = safe_sub_func_int8_t_s_s(p_1095->g_708, 3))
                { /* block id: 463 */
                    if (l_993)
                        break;
                }
                if (p_21)
                    break;
                l_1018 ^= (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((*p_1095->g_744), ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_1095->g_1000.s1665072766462557)).sc, (((*l_1003) = l_1001) == (void*)0))) , (p_21 <= (0x43A6365BA2F44B90L <= (((l_1013 = (((safe_mul_func_int8_t_s_s(((&p_1095->g_507 != &p_1095->g_507) , ((0x259D1946L ^ (((*l_1010) |= (((safe_sub_func_uint8_t_u_u((0xAB96L < 0L), 1L)) == 0x758D2C48L) >= (*p_1095->g_558))) >= p_1095->g_comm_values[p_1095->tid])) , p_1095->g_489)), p_1095->g_19.x)) == l_1011[0]) & 254UL)) || (-7L)) && l_1014)))))) <= p_21), l_1015));
                (*l_1030) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x6761EB12L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 1L)), (-10L), 0x7D64A7D0L)).y, 0x6FB8CAE3L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x46F45AB9L, 5L)).xyxxyyxyxyyxxxxy)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(4L, 0x6DD4365FL, (-2L), 0x34953016L)).xyxzyzwy)), ((VECTOR(int32_t, 4))(p_1095->g_1019.s8ecb)).zwwxwzyz))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x224A7AB4L, 0x066E5B39L)), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((((VECTOR(int32_t, 16))(l_1024.s8262bc6d68bb3edf)).s0 , ((*l_1010) = l_1024.s7)) == 1UL), (-3L))), ((*l_1001) == l_1025))), ((VECTOR(int32_t, 2))((-1L), 0L)), (-9L), l_1015, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((safe_unary_minus_func_int8_t_s(((*l_1010) = l_1014))) < (((*l_1027)++) < 3UL)), ((VECTOR(int16_t, 4))(1L)), p_22, 0x38FEL, 0x2F4EL)).odd, ((VECTOR(uint16_t, 4))(65531UL))))), ((VECTOR(int32_t, 4))(2L))))).even, (int32_t)p_21, (int32_t)p_22))).yyyxyyyyxxxyxyxx)).sd3)), 0x73A7A50EL)).lo, ((VECTOR(int32_t, 4))(0x38E1D296L)), ((VECTOR(int32_t, 4))(0x27233611L))))).xzyyxzzx, ((VECTOR(int32_t, 8))(4L))))).s4, ((VECTOR(int32_t, 8))(0x6A6CED64L)), p_22, (-9L), p_21, 0x208D70F1L, 1L)).s94, ((VECTOR(int32_t, 2))(0L))))).hi, 0x53384E0EL, ((VECTOR(int32_t, 4))((-1L))), (-5L), 0x35D21EFDL)).even)), (-1L))).s0269, ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 4))(0L))))), (-1L), ((VECTOR(int32_t, 2))(1L)), (-1L), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x10E21647L)))).sa;
            }
        }
        if (p_21)
            continue;
        for (p_1095->g_582 = (-6); (p_1095->g_582 < (-19)); p_1095->g_582 = safe_sub_func_uint16_t_u_u(p_1095->g_582, 1))
        { /* block id: 480 */
            int64_t l_1033 = (-1L);
            int32_t *l_1034 = &p_1095->g_94;
            atomic_add(&p_1095->l_atomic_reduction[0], ((*l_1034) = l_1033) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1095->v_collective += p_1095->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((*p_1095->g_630))
                break;
            if (p_22)
                break;
        }
        p_1095->g_850.z &= (((((VECTOR(uint16_t, 4))(((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(0L, 0x3DL)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1095->g_1035.yxxxyxxx)).s5406706524541237)).s8c))), 1L, (-1L))).y > (&p_1095->g_655 != l_1036[0][5][7])) & (safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((!p_1095->g_505[1][2][0]), (safe_lshift_func_int8_t_s_u(0x54L, 7)))), 3))), (p_22 , (((VECTOR(int32_t, 2))(l_1043.s0c)).lo , ((l_1018 |= p_1095->g_549) != (safe_unary_minus_func_uint8_t_u(0x94L))))), 3UL, 0x7A16L)).x < FAKE_DIVERGE(p_1095->group_1_offset, get_group_id(1), 10)) || ((safe_add_func_uint32_t_u_u((l_1043.s7 = (((p_21 && ((l_1024.s6 ^= p_1095->g_505[6][2][1]) < (-1L))) && l_1048) & (**p_1095->g_743))), 0x687B56D4L)) || 0x73F988C341C1AC82L)) <= p_1095->g_1049);
    }
    return l_1015;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_626 p_1095->g_507 p_1095->g_582 p_1095->g_2 p_1095->g_765 p_1095->g_619 p_1095->g_744 p_1095->g_775 p_1095->g_745 p_1095->g_64 p_1095->g_715 p_1095->g_639 p_1095->g_92 p_1095->g_483 p_1095->g_599 p_1095->g_807 p_1095->g_544 p_1095->g_682 p_1095->g_454 p_1095->g_25 p_1095->g_557 p_1095->g_573 p_1095->g_521 p_1095->g_630 p_1095->g_584 p_1095->g_19 p_1095->g_489 p_1095->g_487 p_1095->g_458 p_1095->g_883 p_1095->g_884 p_1095->g_886 p_1095->g_894 p_1095->g_558 p_1095->g_85 p_1095->g_917 p_1095->g_43 p_1095->g_746 p_1095->g_923 p_1095->g_929 p_1095->g_938 p_1095->g_961
 * writes: p_1095->g_768 p_1095->g_619 p_1095->g_507 p_1095->g_582 p_1095->g_92 p_1095->g_483 p_1095->g_807 p_1095->g_94 p_1095->g_64 p_1095->g_557 p_1095->g_573 p_1095->g_85 p_1095->g_487 p_1095->g_604 p_1095->g_599 p_1095->g_584 p_1095->g_558 p_1095->g_25 p_1095->g_789
 */
int8_t  func_31(uint32_t  p_32, uint8_t  p_33, uint32_t  p_34, int32_t  p_35, struct S0 * p_1095)
{ /* block id: 361 */
    int32_t *l_759[8] = {&p_1095->g_2,&p_1095->g_2,&p_1095->g_2,&p_1095->g_2,&p_1095->g_2,&p_1095->g_2,&p_1095->g_2,&p_1095->g_2};
    uint64_t l_763 = 8UL;
    VECTOR(uint32_t, 4) l_769 = (VECTOR(uint32_t, 4))(0x30C24094L, (VECTOR(uint32_t, 2))(0x30C24094L, 0UL), 0UL);
    VECTOR(uint32_t, 16) l_772 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL, (VECTOR(uint32_t, 2))(2UL, 0UL), (VECTOR(uint32_t, 2))(2UL, 0UL), 2UL, 0UL, 2UL, 0UL);
    int8_t *l_773[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_774 = &p_1095->g_582;
    int64_t *l_866 = (void*)0;
    uint64_t l_875 = 0x2D3BBE0BA0EB2412L;
    uint16_t l_885[7][6][6] = {{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}},{{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL},{65535UL,0x355FL,0xF8F9L,1UL,0x355FL,1UL}}};
    VECTOR(int16_t, 8) l_887 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x545CL), 0x545CL), 0x545CL, (-9L), 0x545CL);
    VECTOR(int16_t, 16) l_889 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2EC8L), 0x2EC8L), 0x2EC8L, 1L, 0x2EC8L, (VECTOR(int16_t, 2))(1L, 0x2EC8L), (VECTOR(int16_t, 2))(1L, 0x2EC8L), 1L, 0x2EC8L, 1L, 0x2EC8L);
    VECTOR(int64_t, 4) l_910 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7259D3D9D745619CL), 0x7259D3D9D745619CL);
    VECTOR(uint8_t, 8) l_918 = (VECTOR(uint8_t, 8))(0x49L, (VECTOR(uint8_t, 4))(0x49L, (VECTOR(uint8_t, 2))(0x49L, 9UL), 9UL), 9UL, 0x49L, 9UL);
    int32_t l_922 = (-3L);
    VECTOR(uint8_t, 8) l_925 = (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 255UL), 255UL), 255UL, 254UL, 255UL);
    uint64_t l_926 = 0xED90506B8AD69D4DL;
    VECTOR(uint32_t, 2) l_933 = (VECTOR(uint32_t, 2))(0x25DE57A7L, 1UL);
    uint64_t l_943 = 0x5278D78272523DD7L;
    int32_t **l_949 = &l_774;
    int32_t ***l_948 = &l_949;
    int64_t l_965 = 4L;
    int i, j, k;
    for (p_34 = 0; (p_34 <= 29); p_34 = safe_add_func_uint8_t_u_u(p_34, 2))
    { /* block id: 364 */
        int32_t **l_760 = &l_759[6];
        (*l_760) = l_759[3];
        if ((**p_1095->g_626))
            continue;
    }
    for (p_32 = 0; (p_32 > 43); p_32++)
    { /* block id: 370 */
        VECTOR(int64_t, 8) l_764 = (VECTOR(int64_t, 8))(0x4A5EAE08F87E96C7L, (VECTOR(int64_t, 4))(0x4A5EAE08F87E96C7L, (VECTOR(int64_t, 2))(0x4A5EAE08F87E96C7L, (-7L)), (-7L)), (-7L), 0x4A5EAE08F87E96C7L, (-7L));
        uint32_t *l_771 = &p_1095->g_619;
        VECTOR(int8_t, 4) l_778 = (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x02L), 0x02L);
        uint32_t l_784[3];
        VECTOR(uint32_t, 2) l_790 = (VECTOR(uint32_t, 2))(4294967294UL, 0x05754715L);
        int8_t *l_845 = &p_1095->g_795[1][3][4];
        int8_t *l_846 = &p_1095->g_795[1][3][2];
        int i;
        for (i = 0; i < 3; i++)
            l_784[i] = 0xEAD8305CL;
        if (l_763)
            break;
        p_1095->g_768 = (l_764.s7 != ((void*)0 == p_1095->g_765[0][0]));
        if ((((((*l_771) &= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(l_769.zxxwwzxzywywzzyz)).s18, ((VECTOR(uint32_t, 2))(p_1095->g_770.yx))))))).hi) & ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_772.s1da7f4d1)))).s0) && 1UL) | (l_773[3][1] != p_1095->g_744)))
        { /* block id: 374 */
            int16_t l_782 = (-6L);
            uint64_t *l_783[9][1][7] = {{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}},{{(void*)0,(void*)0,&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&p_1095->g_584[0],&l_763}}};
            int16_t **l_817 = &p_1095->g_83;
            int16_t ***l_816 = &l_817;
            int32_t *l_836[10][4][6] = {{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}},{{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94},{&p_1095->g_94,&p_1095->g_2,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94}}};
            int i, j, k;
            (*p_1095->g_775) = l_774;
            if (l_764.s6)
            { /* block id: 376 */
                uint8_t l_781 = 0UL;
                uint8_t *l_796 = (void*)0;
                uint8_t *l_797 = &p_1095->g_92;
                uint8_t *l_800 = &p_1095->g_483[2][4];
                int16_t l_808[7] = {0L,0L,0L,0L,0L,0L,0L};
                uint16_t **l_809 = &p_1095->g_558;
                uint16_t *l_811 = &p_1095->g_505[5][3][2];
                uint16_t **l_810 = &l_811;
                int32_t l_826 = 0L;
                int16_t ***l_828 = &p_1095->g_819;
                int16_t ****l_827 = &l_828;
                int32_t l_829 = 0x56B754A7L;
                int32_t *l_835 = &p_1095->g_458[2][0];
                int32_t **l_834 = &l_835;
                int i;
                (*l_774) = ((((safe_div_func_int8_t_s_s(((*p_1095->g_744) || FAKE_DIVERGE(p_1095->global_1_offset, get_global_id(1), 10)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_778.xzwxzzxyxwzyxxxx)).s8a)).hi)) , &p_1095->g_655) == (void*)0) , (6L != ((&p_1095->g_584[0] == ((((safe_mod_func_uint64_t_u_u(p_33, (((l_781 = 4294967295UL) <= (l_782 != (~p_1095->g_64))) , p_1095->g_715))) <= p_34) != 0x4A8F520B1E0EE725L) , l_783[1][0][4])) , l_784[1])));
                (*l_774) = (l_781 & ((safe_lshift_func_int16_t_s_s(((((*l_810) = ((*l_809) = func_58(p_32, (((safe_mod_func_int32_t_s_s((*p_1095->g_639), (((VECTOR(uint32_t, 2))(p_1095->g_789.xx)).even | ((((*l_771) &= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_790.xy)).yxyx)).wyxwzxyz)).s1716513613151110)).sc) || p_34) , ((!p_1095->g_619) , (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((*l_800) |= ((*l_797)--)), (p_1095->g_807 ^= ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(p_1095->g_599, (*p_1095->g_507))), ((safe_sub_func_uint16_t_u_u(65535UL, ((((p_32 || 6L) >= l_781) == p_35) > p_34))) | p_32))) <= l_782)))) < 0x825C0C37L), GROUP_DIVERGE(1, 1)))))))) == p_1095->g_544.y) | 0L), p_1095->g_682.s7, l_808[6], p_1095))) == (void*)0) < l_782), 7)) != 0x7CAEC270E8B7C5F6L));
                (*l_774) = ((((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1095->g_584[0], ((void*)0 == l_771), 0x57L, (l_829 = (safe_div_func_int8_t_s_s((l_784[1] < (safe_lshift_func_int8_t_s_u(((p_1095->g_818[3][2] = l_816) == ((*l_827) = (((((safe_lshift_func_uint16_t_u_u(0xBE78L, 13)) , (((*l_771) = p_34) <= (safe_sub_func_int16_t_s_s(((l_826 = ((safe_rshift_func_uint16_t_u_s(0x8860L, 12)) >= p_1095->g_483[4][3])) | p_33), 0x4A33L)))) || l_782) > (-1L)) , &l_817))), 1))), 1UL))), ((VECTOR(int8_t, 4))(0x5EL)), ((VECTOR(int8_t, 8))(0L)))))))).s9eb9, (int8_t)0x3FL, (int8_t)p_1095->g_711))).z < GROUP_DIVERGE(1, 1)) == l_784[1]);
                l_826 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((*l_774), ((!(((*l_834) = &p_35) == (void*)0)) & l_790.y))), (l_764.s0 && FAKE_DIVERGE(p_1095->global_1_offset, get_global_id(1), 10))));
            }
            else
            { /* block id: 394 */
                int32_t **l_839 = &l_836[5][3][3];
                (*l_839) = l_836[5][3][3];
            }
        }
        else
        { /* block id: 397 */
            VECTOR(uint32_t, 2) l_855 = (VECTOR(uint32_t, 2))(3UL, 1UL);
            int i;
            for (p_34 = 19; (p_34 >= 14); p_34 = safe_sub_func_int16_t_s_s(p_34, 1))
            { /* block id: 400 */
                int8_t *l_844[2][3] = {{&p_1095->g_795[1][0][1],(void*)0,&p_1095->g_795[1][0][1]},{&p_1095->g_795[1][0][1],(void*)0,&p_1095->g_795[1][0][1]}};
                uint8_t *l_849 = &p_1095->g_483[0][0];
                VECTOR(int8_t, 16) l_856 = (VECTOR(int8_t, 16))(0x78L, (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 0x02L), 0x02L), 0x02L, 0x78L, 0x02L, (VECTOR(int8_t, 2))(0x78L, 0x02L), (VECTOR(int8_t, 2))(0x78L, 0x02L), 0x78L, 0x02L, 0x78L, 0x02L);
                int16_t *l_859 = &p_1095->g_599;
                int i, j;
                (*l_774) |= ((0x51A6L ^ ((l_845 = l_844[0][1]) != l_846)) , (((*l_849) = (safe_lshift_func_int8_t_s_s(0x3FL, 5))) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-10L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1095->g_850.zxzy)).hi)), ((VECTOR(int32_t, 8))((((p_1095->g_682.s4 || (safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(l_790.x, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(l_855.xxxxyxxyxyyyyyyy)), ((VECTOR(uint32_t, 4))((((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(l_856.s2ae35145b080b474)).s7394, ((VECTOR(int8_t, 8))(1L, (-1L), ((VECTOR(int8_t, 2))(3L, 4L)), (-5L), ((p_1095->g_721.s4 &= (GROUP_DIVERGE(2, 1) , (-4L))) > ((safe_lshift_func_int8_t_s_u(0x25L, (**p_1095->g_743))) >= p_34)), 1L, (-3L))).lo))).even, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(6L))))).yxyyyxxyxxyyxxyx)), ((VECTOR(int8_t, 16))(0x4EL))))).hi, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))(0x29L))))).s0 || GROUP_DIVERGE(2, 1)), p_1095->g_746.s1, 0x8CE2E113L, 0x924FA822L)).zxxzwwwwxwxxywyx))).even, ((VECTOR(uint32_t, 8))(0x9F7F5FAAL))))).s5)) && p_33), p_34))) , l_859) != l_859), ((VECTOR(int32_t, 2))(1L)), 0x705A8137L, 0L, ((VECTOR(int32_t, 2))((-9L))), 0x4E793F43L)).s5, 1L, (-1L), 0x30BFB3F6L, 0x2BC46209L)).hi)), (-9L), ((VECTOR(int32_t, 8))(1L)), 1L, (-1L))))).s8));
                return p_1095->g_489;
            }
            (*l_774) = p_32;
        }
        for (p_1095->g_487 = 0; (p_1095->g_487 <= 25); ++p_1095->g_487)
        { /* block id: 411 */
            return p_34;
        }
    }
    if ((0x7AL < (safe_lshift_func_uint16_t_u_u(0UL, (&p_1095->g_507 != ((safe_add_func_uint64_t_u_u(((l_866 != (void*)0) & ((*l_774) &= ((p_1095->g_64 , (p_33 >= p_35)) , (safe_add_func_int8_t_s_s(p_1095->g_483[6][7], p_1095->g_458[0][0]))))), 0x0689A423248D3A90L)) , &p_1095->g_507))))))
    { /* block id: 416 */
        int32_t l_869 = 0L;
        int64_t l_870[10][2] = {{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL},{0x3B29F6519F0EB56FL,0x7201D6ED4D2E91EEL}};
        int64_t l_871 = 0x65D2945695EBC4A7L;
        int32_t l_872 = 0x71FE936EL;
        int32_t l_873 = 0x55C3A9A3L;
        int32_t l_874[3][2];
        VECTOR(int16_t, 16) l_882 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x553AL), 0x553AL), 0x553AL, (-3L), 0x553AL, (VECTOR(int16_t, 2))((-3L), 0x553AL), (VECTOR(int16_t, 2))((-3L), 0x553AL), (-3L), 0x553AL, (-3L), 0x553AL);
        VECTOR(int16_t, 2) l_888 = (VECTOR(int16_t, 2))(5L, (-1L));
        uint64_t *l_906 = (void*)0;
        uint32_t l_907 = 4294967289UL;
        VECTOR(int8_t, 16) l_915 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x35L), 0x35L), 0x35L, 0L, 0x35L, (VECTOR(int8_t, 2))(0L, 0x35L), (VECTOR(int8_t, 2))(0L, 0x35L), 0L, 0x35L, 0L, 0x35L);
        VECTOR(int8_t, 2) l_916 = (VECTOR(int8_t, 2))(0x47L, 0x28L);
        int32_t l_921 = 0x34B61F5AL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_874[i][j] = (-1L);
        }
        l_869 = p_33;
        l_875--;
        l_873 ^= (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x3740L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x799AL, 0x5E82L, 0x7B93L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(l_882.s9e2fab411af59b7a)).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(p_1095->g_883.s2276)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(p_1095->g_884.s74706623)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_885[5][2][0], ((VECTOR(int16_t, 2))((-3L), 0x2793L)), 0x20B6L)).even)).yxxyyyyy))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1095->g_886.yxzx)).wwzywxyxzzyxwwxy)))).s23)))), (-1L), 0x11B7L, 2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_887.s1151)).lo)), 0x3AA2L)).odd)).xwwyyzww))).s3007142420321524)).s0810)))))))).xzxzwzwyyzwwyxxx, ((VECTOR(int16_t, 2))(l_888.xx)).xyyxxyyyxyyyxxxx))))).even)).s33)).xyyxxxyx, ((VECTOR(int16_t, 8))(0x67F0L, ((VECTOR(int16_t, 2))((-1L), 0x19F6L)).lo, 0x6CFCL, (-10L), ((VECTOR(int16_t, 2))(l_889.sb9)), 0x6409L, 1L))))).odd)), 0L)).s46)), 0x1873L)).wwwwxwxyzyxzxwxx)).sf, (l_870[5][0] , (safe_div_func_int64_t_s_s((((0x101EEFC6261B6D6AL == 1L) < (safe_lshift_func_int16_t_s_u(((((VECTOR(uint8_t, 4))(p_1095->g_894.xxyy)).y & (safe_unary_minus_func_int8_t_s((p_1095->g_25.z = (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((249UL >= 0x3EL) && ((safe_mul_func_uint16_t_u_u(((((((safe_sub_func_int8_t_s_s((l_874[1][0] = (safe_sub_func_uint64_t_u_u((p_1095->g_584[0] = (++l_907)), ((VECTOR(int64_t, 16))(l_910.wwwyzwzwwyywzyxx)).s6))), ((*p_1095->g_558) != (1L | ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(0x6C95L, ((((safe_mul_func_uint16_t_u_u(((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_915.s82)), ((VECTOR(int8_t, 2))(l_916.xy))))).yxxy)).lo)).odd > (((VECTOR(uint8_t, 2))(p_1095->g_917.yx)).hi , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(l_918.s33)).yyyx, ((VECTOR(uint8_t, 4))(0x3EL, (safe_add_func_int32_t_s_s(((*l_774) ^= ((0UL && 0UL) < 0x2AD6F3B2L)), (-1L))), 247UL, 0xC6L)), ((VECTOR(uint8_t, 4))(254UL))))).zzywyxzy)).hi)).x)) <= l_916.x), p_33)) | l_921) , GROUP_DIVERGE(0, 1)) != p_33), (-1L), p_34, (-4L), 0x7659L, 0x0D9AL, ((VECTOR(int16_t, 8))(0x0D28L)), 0x1D99L)).s6, p_33)) & 0x27A8L))))) ^ l_882.s4) <= p_1095->g_43[6][0][0]) & p_33) <= p_34) , (*p_1095->g_558)), (-1L))) < l_922)), 2)), 4)))))) != l_916.y), 15))) == 0x40L), p_1095->g_746.s5))))), l_888.x));
    }
    else
    { /* block id: 425 */
        uint32_t l_924[1];
        VECTOR(uint32_t, 4) l_932 = (VECTOR(uint32_t, 4))(0xA822ECC7L, (VECTOR(uint32_t, 2))(0xA822ECC7L, 0xD844DD7EL), 0xD844DD7EL);
        VECTOR(uint32_t, 2) l_934 = (VECTOR(uint32_t, 2))(0x4DC6FD91L, 0UL);
        uint32_t *l_935[5][7] = {{(void*)0,(void*)0,&p_1095->g_619,&p_1095->g_619,(void*)0,&p_1095->g_619,&p_1095->g_619},{(void*)0,(void*)0,&p_1095->g_619,&p_1095->g_619,(void*)0,&p_1095->g_619,&p_1095->g_619},{(void*)0,(void*)0,&p_1095->g_619,&p_1095->g_619,(void*)0,&p_1095->g_619,&p_1095->g_619},{(void*)0,(void*)0,&p_1095->g_619,&p_1095->g_619,(void*)0,&p_1095->g_619,&p_1095->g_619},{(void*)0,(void*)0,&p_1095->g_619,&p_1095->g_619,(void*)0,&p_1095->g_619,&p_1095->g_619}};
        int16_t l_944 = 0x1847L;
        VECTOR(uint64_t, 2) l_960 = (VECTOR(uint64_t, 2))(0xE8B22EF65E1A6D66L, 0xF69A51BAF503246EL);
        int32_t l_964 = 0x1BE2E5EDL;
        int32_t l_966 = 0x57DBE4EFL;
        int32_t l_967 = 0x30A8C269L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_924[i] = 0x28FC4EDEL;
        l_759[3] = &l_922;
        if ((((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1095->g_923.zzyzxwxwxzyzxxzw)).s5f12)).yzzzzxxzwzxwyzzw, ((VECTOR(uint8_t, 8))(l_924[0], ((VECTOR(uint8_t, 2))(l_925.s66)), 0x86L, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_32, ((((l_926 != (l_924[0] != (safe_div_func_int16_t_s_s((-10L), ((VECTOR(uint16_t, 16))(p_1095->g_929.see4f6250484f40fb)).s5)))) <= (safe_div_func_int32_t_s_s(1L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(8UL, 0x8786B251L)).yyxy)).wzwxwwwxxyzzzwwx, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(0x76993825L, 0x989BA4ACL)).yyxyyxyyyxxyyyxy, ((VECTOR(uint32_t, 4))(4294967295UL, 0x6A7064E1L, 4294967295UL, 4294967295UL)).zxzzywxxwzzzzyww, ((VECTOR(uint32_t, 4))(l_932.wzzx)).zyyzxxxxzyyzxzxz))).s34, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x367D5A2FL, 0UL)).yxxy)).lo))).yxyxyyyyyxxyxyyx, ((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_933.xxxx)), 0UL, 0UL, 0x476F3D4FL, 4294967293UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(l_934.yyyxyyyxyxyyyyyx)).even))).s13)).xxyyyxyx))), (uint32_t)(++p_34)))).s1345652414427454))).s0088, ((VECTOR(uint32_t, 16))(p_1095->g_938.s2060234272576140)).sec7c, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((p_34 , l_866) != (void*)0), p_35)), p_32)) < 0x2B3E448D5F48E269L), ((VECTOR(uint32_t, 2))(0xE6AD0967L)), 0UL)), ((VECTOR(uint32_t, 2))(0xBC3CA35CL)), 0xA16BF0DEL, 0x75748F2EL)))))).s7032731565315255))))).s86be)), 4294967295UL, p_32, 0xC66C1F0AL, 0xDAD8487AL)).even))), 4294967294UL, l_934.x, 4294967289UL, l_943, 0x9BF9F1F6L, l_944, 4294967292UL, 4294967287UL, ((VECTOR(uint32_t, 2))(0xBA86BF63L)), 0x89B7DF12L, 8UL)), ((VECTOR(uint32_t, 16))(0x9468EE2BL))))).scd9c)).w))) , 0x8AD4A462086C61F9L) == FAKE_DIVERGE(p_1095->local_2_offset, get_local_id(2), 10)), 0x94L, p_33, ((VECTOR(uint8_t, 4))(249UL)))).s0627614467254764)).s7, ((VECTOR(uint8_t, 2))(1UL)), 0xE0L)).s3672666642564455))).even)).s0024132076214216, ((VECTOR(uint8_t, 16))(0xD4L))))), (uint8_t)p_34))).s7 < p_1095->g_43[3][8][0]))
        { /* block id: 428 */
            int32_t **l_946 = &l_759[1];
            int32_t ***l_945 = &l_946;
            int32_t ****l_947[8] = {&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945,&l_945};
            uint64_t *l_962 = &p_1095->g_584[0];
            uint64_t *l_963 = &l_943;
            int i;
            l_967 = (((VECTOR(int8_t, 4))(((((p_1095->g_789.x = (((l_948 = l_945) != &p_1095->g_685) != (l_966 = (p_1095->g_582 , (safe_sub_func_uint8_t_u_u((((**l_949) = (l_965 = (safe_rshift_func_uint16_t_u_s(((0xD1L | ((((*l_774) >= p_34) >= ((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((p_33 <= ((safe_add_func_int32_t_s_s((l_964 = (safe_sub_func_uint64_t_u_u(((*l_963) ^= ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 2))(l_960.xy)).xxyy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_1095->g_961.s3cf7da8d)).odd)), ((VECTOR(uint64_t, 4))(((*l_962) = 18446744073709551612UL), 0x4249B89367391370L, 0xD2A77106A884A1DCL, 18446744073709551610UL))))).xzzzwwxywyxywwyx, ((VECTOR(uint64_t, 16))(FAKE_DIVERGE(p_1095->group_1_offset, get_group_id(1), 10), 9UL, ((VECTOR(uint64_t, 4))(0x668BB3D74EE0E1D3L)), p_1095->g_573, p_1095->g_92, p_34, p_1095->g_682.s6, ((VECTOR(uint64_t, 2))(6UL)), ((VECTOR(uint64_t, 4))(0x2E8AD60DD3CE4447L))))))).sf5)).xyxy, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).y), p_35))), p_1095->g_682.s5)) && p_33)), ((VECTOR(uint16_t, 4))(0x86A7L)), 0x37ADL, 9UL, 0x2752L)).s2, p_32)) != 5UL)) & FAKE_DIVERGE(p_1095->local_1_offset, get_local_id(1), 10))) >= FAKE_DIVERGE(p_1095->global_2_offset, get_global_id(2), 10)), p_33)))) , (*p_1095->g_744)), p_1095->g_544.y)))))) | l_924[0]) , p_35) , p_35), ((VECTOR(int8_t, 2))(0x48L)), (-1L))).z <= p_33);
        }
        else
        { /* block id: 438 */
            if ((atomic_inc(&p_1095->g_atomic_input[87 * get_linear_group_id() + 44]) == 9))
            { /* block id: 440 */
                uint64_t l_968[7][10][1] = {{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}},{{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L},{0x5D42ABAD5C7228C1L}}};
                uint16_t l_969 = 0x5792L;
                uint8_t l_970 = 0x75L;
                uint8_t l_971 = 0x28L;
                uint32_t l_972[5] = {0xD973613BL,0xD973613BL,0xD973613BL,0xD973613BL,0xD973613BL};
                uint32_t l_973 = 0x4DD2D808L;
                uint32_t l_974 = 4294967295UL;
                int32_t l_975 = (-1L);
                VECTOR(uint64_t, 8) l_976 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL);
                VECTOR(uint64_t, 8) l_977 = (VECTOR(uint64_t, 8))(0x0CA6839141EE0315L, (VECTOR(uint64_t, 4))(0x0CA6839141EE0315L, (VECTOR(uint64_t, 2))(0x0CA6839141EE0315L, 0UL), 0UL), 0UL, 0x0CA6839141EE0315L, 0UL);
                VECTOR(uint64_t, 8) l_978 = (VECTOR(uint64_t, 8))(0x4E3DEB70FC097A05L, (VECTOR(uint64_t, 4))(0x4E3DEB70FC097A05L, (VECTOR(uint64_t, 2))(0x4E3DEB70FC097A05L, 0x43E008B580F89F36L), 0x43E008B580F89F36L), 0x43E008B580F89F36L, 0x4E3DEB70FC097A05L, 0x43E008B580F89F36L);
                VECTOR(uint64_t, 16) l_979 = (VECTOR(uint64_t, 16))(0x083890CE4BBA82C7L, (VECTOR(uint64_t, 4))(0x083890CE4BBA82C7L, (VECTOR(uint64_t, 2))(0x083890CE4BBA82C7L, 0xEA963D6707F44A74L), 0xEA963D6707F44A74L), 0xEA963D6707F44A74L, 0x083890CE4BBA82C7L, 0xEA963D6707F44A74L, (VECTOR(uint64_t, 2))(0x083890CE4BBA82C7L, 0xEA963D6707F44A74L), (VECTOR(uint64_t, 2))(0x083890CE4BBA82C7L, 0xEA963D6707F44A74L), 0x083890CE4BBA82C7L, 0xEA963D6707F44A74L, 0x083890CE4BBA82C7L, 0xEA963D6707F44A74L);
                VECTOR(uint64_t, 2) l_980 = (VECTOR(uint64_t, 2))(0x23A72D7A6DFC5919L, 18446744073709551615UL);
                VECTOR(uint64_t, 8) l_981 = (VECTOR(uint64_t, 8))(0xFF71411B9E2CC577L, (VECTOR(uint64_t, 4))(0xFF71411B9E2CC577L, (VECTOR(uint64_t, 2))(0xFF71411B9E2CC577L, 1UL), 1UL), 1UL, 0xFF71411B9E2CC577L, 1UL);
                VECTOR(int32_t, 2) l_982 = (VECTOR(int32_t, 2))(0x02A14BACL, 5L);
                VECTOR(uint32_t, 2) l_983 = (VECTOR(uint32_t, 2))(4294967295UL, 0xFCDF0482L);
                int64_t l_984 = (-9L);
                int i, j, k;
                l_970 ^= (l_969 = l_968[1][8][0]);
                l_984 = ((l_971 , l_972[4]) , (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(l_973, (l_975 &= l_974), 0x0077BBCFF14D32EDL, ((VECTOR(uint64_t, 2))(l_976.s12)), FAKE_DIVERGE(p_1095->global_2_offset, get_global_id(2), 10), 0UL, 18446744073709551610UL, FAKE_DIVERGE(p_1095->group_2_offset, get_group_id(2), 10), FAKE_DIVERGE(p_1095->local_1_offset, get_local_id(1), 10), 0x55B444F7287FE079L, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(l_977.s5674)), ((VECTOR(uint64_t, 4))(l_978.s2555))))))))).s2f))), 4UL, GROUP_DIVERGE(0, 1), 1UL, ((VECTOR(uint64_t, 2))(l_979.s69)), 0x6435629E298EACB1L)), 0x7ADFBBE122B95B84L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_980.yxyx)).even)), 0x98FA5673F4FBA84BL, ((VECTOR(uint64_t, 4))(l_981.s2160)))).s3 , (((VECTOR(int32_t, 16))(l_982.yyyyxxyxxyyyyyyx)).s8 , l_983.x)));
                unsigned int result = 0;
                int l_968_i0, l_968_i1, l_968_i2;
                for (l_968_i0 = 0; l_968_i0 < 7; l_968_i0++) {
                    for (l_968_i1 = 0; l_968_i1 < 10; l_968_i1++) {
                        for (l_968_i2 = 0; l_968_i2 < 1; l_968_i2++) {
                            result += l_968[l_968_i0][l_968_i1][l_968_i2];
                        }
                    }
                }
                result += l_969;
                result += l_970;
                result += l_971;
                int l_972_i0;
                for (l_972_i0 = 0; l_972_i0 < 5; l_972_i0++) {
                    result += l_972[l_972_i0];
                }
                result += l_973;
                result += l_974;
                result += l_975;
                result += l_976.s7;
                result += l_976.s6;
                result += l_976.s5;
                result += l_976.s4;
                result += l_976.s3;
                result += l_976.s2;
                result += l_976.s1;
                result += l_976.s0;
                result += l_977.s7;
                result += l_977.s6;
                result += l_977.s5;
                result += l_977.s4;
                result += l_977.s3;
                result += l_977.s2;
                result += l_977.s1;
                result += l_977.s0;
                result += l_978.s7;
                result += l_978.s6;
                result += l_978.s5;
                result += l_978.s4;
                result += l_978.s3;
                result += l_978.s2;
                result += l_978.s1;
                result += l_978.s0;
                result += l_979.sf;
                result += l_979.se;
                result += l_979.sd;
                result += l_979.sc;
                result += l_979.sb;
                result += l_979.sa;
                result += l_979.s9;
                result += l_979.s8;
                result += l_979.s7;
                result += l_979.s6;
                result += l_979.s5;
                result += l_979.s4;
                result += l_979.s3;
                result += l_979.s2;
                result += l_979.s1;
                result += l_979.s0;
                result += l_980.y;
                result += l_980.x;
                result += l_981.s7;
                result += l_981.s6;
                result += l_981.s5;
                result += l_981.s4;
                result += l_981.s3;
                result += l_981.s2;
                result += l_981.s1;
                result += l_981.s0;
                result += l_982.y;
                result += l_982.x;
                result += l_983.y;
                result += l_983.x;
                result += l_984;
                atomic_add(&p_1095->g_special_values[87 * get_linear_group_id() + 44], result);
            }
            else
            { /* block id: 445 */
                (1 + 1);
            }
        }
    }
    return (**l_949);
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_458 p_1095->g_94 p_1095->g_743 p_1095->g_746 p_1095->g_483 p_1095->g_19 p_1095->g_744 p_1095->g_745
 * writes: p_1095->g_94 p_1095->g_619 p_1095->g_43 p_1095->g_582
 */
uint8_t  func_36(int8_t  p_37, int32_t  p_38, uint32_t  p_39, int8_t  p_40, int32_t  p_41, struct S0 * p_1095)
{ /* block id: 353 */
    int16_t l_736 = 0x07DFL;
    int32_t l_737 = 2L;
    int32_t *l_738 = (void*)0;
    int32_t *l_739 = &p_1095->g_94;
    VECTOR(int16_t, 8) l_742 = (VECTOR(int16_t, 8))(0x79DAL, (VECTOR(int16_t, 4))(0x79DAL, (VECTOR(int16_t, 2))(0x79DAL, 0L), 0L), 0L, 0x79DAL, 0L);
    uint32_t *l_753 = (void*)0;
    uint32_t *l_754 = &p_1095->g_619;
    int16_t *l_755 = &p_1095->g_43[0][7][0];
    int32_t *l_756 = &p_1095->g_582;
    int i;
    l_737 ^= (!((l_736 , p_38) != p_1095->g_458[2][0]));
    (*l_739) |= 0L;
    (*l_756) = ((*l_739) |= (l_739 == (((*l_755) = (safe_sub_func_int16_t_s_s((-1L), (l_742.s0 | ((VECTOR(int8_t, 4))((((void*)0 != p_1095->g_743) >= (((-6L) && (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1095->g_746.s15)).xyxyyxyy)).s5463545232475471)).s2 > (safe_lshift_func_int8_t_s_s((((*l_754) = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((p_38 || (p_38 , p_40)), p_1095->g_483[6][7])) <= 0x01L), 14))) , 4L), p_1095->g_19.y)))) , 0UL)), (-1L), 0L, 1L)).y)))) , l_754)));
    return (*p_1095->g_744);
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_454 p_1095->g_25 p_1095->g_557 p_1095->g_573 p_1095->g_544 p_1095->g_521 p_1095->g_507 p_1095->g_626 p_1095->g_630 p_1095->g_584 p_1095->g_19 p_1095->g_582 p_1095->g_558 p_1095->g_638 p_1095->g_639 p_1095->l_comm_values p_1095->g_655 p_1095->g_458 p_1095->g_653 p_1095->g_94 p_1095->g_549 p_1095->g_682 p_1095->g_64 p_1095->g_489 p_1095->g_715 p_1095->g_720 p_1095->g_721 p_1095->g_2 p_1095->g_comm_values p_1095->g_487 p_1095->g_530
 * writes: p_1095->g_94 p_1095->g_92 p_1095->g_64 p_1095->g_557 p_1095->g_507 p_1095->g_573 p_1095->g_85 p_1095->g_487 p_1095->g_604 p_1095->g_599 p_1095->g_619 p_1095->g_584 p_1095->g_582 p_1095->g_655 p_1095->g_483 p_1095->g_489 p_1095->g_715
 */
uint32_t  func_45(int32_t  p_46, int16_t * p_47, int32_t  p_48, struct S0 * p_1095)
{ /* block id: 11 */
    int32_t l_57 = 0x02AEC7F5L;
    int16_t *l_84[4] = {&p_1095->g_85,&p_1095->g_85,&p_1095->g_85,&p_1095->g_85};
    int16_t *l_636[7][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(int8_t, 2) l_647 = (VECTOR(int8_t, 2))((-1L), 0L);
    int32_t l_651 = 0x60BA4032L;
    VECTOR(int8_t, 4) l_652 = (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x40L), 0x40L);
    int32_t *l_686[10][3] = {{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582},{&p_1095->g_582,(void*)0,&p_1095->g_582}};
    uint64_t l_697 = 0x3B472E01EFAEB0ACL;
    int64_t *l_698[5][5][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_713 = 0x0F5FC176L;
    int8_t l_714 = 0x76L;
    int8_t l_724 = 0x25L;
    int8_t l_734 = 0L;
    int32_t l_735 = 0x0D408DE1L;
    int i, j, k;
    for (p_48 = (-18); (p_48 != (-8)); p_48 = safe_add_func_uint8_t_u_u(p_48, 3))
    { /* block id: 14 */
        uint64_t l_63 = 0xB3FE78DE61175C87L;
        int8_t *l_648 = (void*)0;
        int8_t *l_649 = (void*)0;
        int8_t *l_650 = (void*)0;
        uint64_t *l_654 = &p_1095->g_655;
        int32_t l_662[10] = {0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L,0x49053416L};
        uint8_t *l_663 = &p_1095->g_483[6][7];
        int8_t *l_664 = (void*)0;
        int8_t *l_665[9][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_666 = 0x0BL;
        int32_t *l_667 = &p_1095->g_94;
        uint16_t *l_678 = (void*)0;
        int64_t l_683 = 0x7C08488B717A0359L;
        int i, j, k;
        (*p_1095->g_639) = func_51(l_57, func_58(p_46, (l_63 , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0UL, ((p_1095->g_64++) == FAKE_DIVERGE(p_1095->local_1_offset, get_local_id(1), 10)), 0x79B6842AL, 0x7AFC4999L, 1UL, 0x62101101L, 4UL, 0x3F1863D4L)), ((VECTOR(uint32_t, 8))((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(func_71(func_77((l_84[1] = p_1095->g_83), p_1095->g_comm_values[p_1095->tid], l_57, ((void*)0 == &p_1095->g_85), p_47, p_1095), l_63, p_47, &p_1095->g_85, p_1095->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1095->tid, 18))], p_1095), 4)) == l_63), 0x4DL)), 4294967295UL, 1UL, FAKE_DIVERGE(p_1095->local_2_offset, get_local_id(2), 10), 4294967291UL, ((VECTOR(uint32_t, 2))(0x16FFC1FDL)), 4294967291UL)))).s3), p_48, p_46, p_1095), p_46, l_636[0][2], p_1095->g_558, p_1095);
        (*l_667) |= (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_666 = (((safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_uint64_t_u(l_57)) , ((*l_654) &= (((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(l_647.yxyx)).wzywwyxxwwyxwyyx, (int8_t)(l_651 ^= (0x5AL >= p_1095->g_2))))).s68, ((VECTOR(int8_t, 2))(l_652.yz)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(1L, l_63, (-5L), 2L, (-1L), 0x5AL, 0x03L, 0x60L)).s60, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1095->g_653.s63)).xxyx)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x74L, 0x5AL)).yyyy)).even)))))).even && p_1095->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1095->tid, 18))]))) , (l_63 != ((((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), l_63)) , (p_48 ^ ((((*l_663) = (((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_662[6] = 1L), (**p_1095->g_638))), p_46)) != p_48) && FAKE_DIVERGE(p_1095->local_1_offset, get_local_id(1), 10))) || p_48) || (**p_1095->g_638)))) || 9L) , p_48))) >= l_57), p_46)) | 65533UL) < p_1095->g_458[1][0])), 6)) && p_1095->g_653.s3), p_1095->g_584[0]));
        if ((*l_667))
            break;
        if (((VECTOR(int32_t, 2))(0x412B7CDCL, 0x767A60ACL)).odd)
        { /* block id: 327 */
            int16_t **l_677 = &l_84[1];
            int16_t ***l_676 = &l_677;
            int64_t *l_681 = &p_1095->g_489;
            int32_t l_684[2][6] = {{0L,0x10CA3E33L,0x6DBD3C0DL,0x10CA3E33L,0L,0L},{0L,0x10CA3E33L,0x6DBD3C0DL,0x10CA3E33L,0L,0L}};
            int i, j;
            if (p_46)
                break;
            atomic_max(&p_1095->g_atomic_reduction[get_linear_group_id()], ((((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((9L | (safe_div_func_int64_t_s_s((((((((&p_47 != ((*l_676) = &p_1095->g_83)) , (l_84[1] == l_678)) | (((safe_sub_func_int16_t_s_s(((((*l_681) = p_1095->g_549) && (((((*p_1095->g_507) || (0x18L > (((VECTOR(uint32_t, 4))(p_1095->g_682.s1410)).z <= l_683))) , 0x1FL) <= p_48) <= l_57)) ^ 255UL), p_46)) , 4L) ^ l_684[1][4])) , l_652.x) || l_684[0][4]) , &p_1095->g_599) == (void*)0), 0x61BD575D4F57508BL))), 4294967291UL)) || p_1095->g_19.x), (*p_1095->g_558))), 0)) , 0x180FB35FL) , p_48) ^ l_57));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1095->v_collective += p_1095->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_686[0][1] = &l_651;
            if (l_684[0][0])
                break;
        }
        else
        { /* block id: 334 */
            uint8_t l_703 = 0x33L;
            int64_t *l_712[4][5];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                    l_712[i][j] = &p_1095->g_708;
            }
            if ((atomic_inc(&p_1095->g_atomic_input[87 * get_linear_group_id() + 20]) == 1))
            { /* block id: 336 */
                int8_t l_687 = 5L;
                VECTOR(int32_t, 8) l_688 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1807676DL), 0x1807676DL), 0x1807676DL, (-1L), 0x1807676DL);
                int32_t l_689 = 0x52338556L;
                int64_t l_690 = 0x06EC970E222BEC07L;
                int32_t *l_691 = &l_689;
                int32_t *l_692 = &l_689;
                int i;
                l_687 = 0x412EAF34L;
                l_690 = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_688.s02601644)).s20, (int32_t)l_689))).hi;
                l_692 = (l_691 = (void*)0);
                unsigned int result = 0;
                result += l_687;
                result += l_688.s7;
                result += l_688.s6;
                result += l_688.s5;
                result += l_688.s4;
                result += l_688.s3;
                result += l_688.s2;
                result += l_688.s1;
                result += l_688.s0;
                result += l_689;
                result += l_690;
                atomic_add(&p_1095->g_special_values[87 * get_linear_group_id() + 20], result);
            }
            else
            { /* block id: 341 */
                (1 + 1);
            }
            (*l_667) = ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((*l_667), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0x27L, ((VECTOR(uint8_t, 8))((l_697 | (l_698[4][1][2] == ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))((safe_div_func_uint16_t_u_u(l_703, ((safe_lshift_func_int16_t_s_s(((GROUP_DIVERGE(1, 1) || (safe_mul_func_uint8_t_u_u(p_48, (p_1095->g_708 |= p_48)))) && 0x1FL), (safe_add_func_int8_t_s_s(p_1095->g_19.x, ((*l_663) = 8UL))))) & p_48))), p_1095->g_711, 1L, ((VECTOR(int16_t, 8))(0x2538L)), ((VECTOR(int16_t, 2))(0x3E77L)), 1L, 0x5134L, 0L)).s748b, ((VECTOR(int16_t, 4))(0x4835L))))), (-1L), ((VECTOR(int16_t, 2))(0x5375L)), (-4L))).odd)).z, l_703)) , l_712[2][3]))), 0x21L, (*l_667), ((VECTOR(uint8_t, 4))(8UL)), 0x5BL)), 255UL, 0x69L, ((VECTOR(uint8_t, 2))(9UL)), 251UL, 0x01L, 255UL)).sb872)).hi, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0UL))))))).xxyyxxxxxyxxxyyx)).s6)) , p_1095->g_549), p_46)) == p_1095->g_489);
        }
    }
    p_1095->g_715--;
    p_46 = (((p_46 >= (p_1095->g_458[2][0] , (((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(p_1095->g_720.xxzxzxzxxxxzzzxw)).sc1, ((VECTOR(int64_t, 4))(p_1095->g_721.s336c)).even, ((VECTOR(int64_t, 4))((safe_add_func_uint64_t_u_u(0x971432FF62E9A8C1L, ((((0x08L && (p_48 > ((+0x5B367826L) || ((*p_1095->g_639) = (l_724 , (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((((l_734 > p_48) ^ p_48) , 0x31CBL), 12)) >= 0x6A5735D88ED56FB8L), p_48)) & p_1095->g_25.x))) == 0x7BL) & p_1095->g_715) < p_48), p_1095->g_2)), 0x57L))))))) | p_48) || 0xAEL) <= p_1095->g_comm_values[p_1095->tid]))), p_1095->g_487, 0x6633BC6D89EF1317L, 0x6F7287667A6B9FD5L)).even))).odd, p_1095->g_721.s6)) > l_735) & FAKE_DIVERGE(p_1095->group_2_offset, get_group_id(2), 10)))) , p_1095->g_720.y) & GROUP_DIVERGE(2, 1));
    return p_1095->g_530.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_638 p_1095->g_582
 * writes: p_1095->g_507
 */
int32_t  func_51(uint32_t  p_52, int16_t * p_53, int8_t  p_54, int16_t * p_55, int16_t * p_56, struct S0 * p_1095)
{ /* block id: 316 */
    int32_t *l_637 = &p_1095->g_582;
    (*p_1095->g_638) = l_637;
    return (*l_637);
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_454 p_1095->g_92 p_1095->g_530 p_1095->g_483 p_1095->g_458 p_1095->g_94 p_1095->g_25 p_1095->g_505 p_1095->g_85 p_1095->g_64 p_1095->g_557 p_1095->g_573 p_1095->g_584 p_1095->l_comm_values p_1095->g_599 p_1095->g_544 p_1095->g_521 p_1095->g_507 p_1095->g_19 p_1095->g_582 p_1095->g_626 p_1095->g_630
 * writes: p_1095->g_94 p_1095->g_92 p_1095->g_64 p_1095->g_557 p_1095->g_507 p_1095->g_573 p_1095->g_85 p_1095->g_584 p_1095->g_599 p_1095->g_487 p_1095->g_604 p_1095->g_619
 */
int16_t * func_58(uint32_t  p_59, uint32_t  p_60, int32_t  p_61, int64_t  p_62, struct S0 * p_1095)
{ /* block id: 217 */
    int32_t *l_481[10] = {(void*)0,&p_1095->g_94,&p_1095->g_94,&p_1095->g_94,(void*)0,(void*)0,&p_1095->g_94,&p_1095->g_94,&p_1095->g_94,(void*)0};
    uint16_t *l_501 = &p_1095->g_64;
    VECTOR(uint8_t, 2) l_508 = (VECTOR(uint8_t, 2))(3UL, 0UL);
    VECTOR(int32_t, 4) l_523 = (VECTOR(int32_t, 4))(0x1AF7551AL, (VECTOR(int32_t, 2))(0x1AF7551AL, 5L), 5L);
    VECTOR(int32_t, 2) l_524 = (VECTOR(int32_t, 2))(0x30BECC2DL, (-1L));
    VECTOR(int32_t, 4) l_525 = (VECTOR(int32_t, 4))(0x3124CD32L, (VECTOR(int32_t, 2))(0x3124CD32L, (-1L)), (-1L));
    uint8_t *l_537 = &p_1095->g_92;
    int i;
    if (p_61)
    { /* block id: 218 */
        int32_t **l_468[2];
        int32_t *l_471 = &p_1095->g_94;
        int32_t **l_470 = &l_471;
        int i;
        for (i = 0; i < 2; i++)
            l_468[i] = (void*)0;
        for (p_60 = 0; (p_60 <= 31); p_60++)
        { /* block id: 221 */
            int32_t ***l_469 = (void*)0;
            uint32_t l_472 = 0x9CCFF4EFL;
            (*l_471) = (safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(((l_468[0] = l_468[1]) != l_470), (p_59 , l_472))) && 1L) != ((p_1095->g_454.s3 < ((void*)0 != &p_1095->g_64)) >= (((*l_470) == (*l_470)) ^ 0x02L))), 0x638A26EFB5878AD5L)), p_61));
        }
        return &p_1095->g_85;
    }
    else
    { /* block id: 226 */
        int8_t l_492[10][2][9] = {{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}},{{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L},{9L,0x1DL,0x1DL,9L,0x65L,0x40L,(-1L),0L,0x58L}}};
        uint16_t *l_502 = &p_1095->g_64;
        int32_t l_503[8];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_503[i] = 0L;
        for (p_1095->g_92 = (-27); (p_1095->g_92 != 55); ++p_1095->g_92)
        { /* block id: 229 */
            uint8_t *l_482 = &p_1095->g_483[1][4];
            uint32_t *l_486[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int64_t l_488 = 2L;
            int32_t l_504 = 0L;
            uint8_t l_518 = 0xE0L;
            int i, j;
            (1 + 1);
        }
    }
    if (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_523.yyxyzwzx)).s4633025036264502, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_524.yxxx)).zxzzyyxwzwyyzzyx))))), ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_525.yx)), 0x704DDA42L, 0x0F9248A1L)), 1L, (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_61, (p_61 | (((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(1L, 6L)).yxyyxxyxxyxyyxxx, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(p_1095->g_530.s19fbe80d9cde5533)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(6L, 1L)).xxxyyxxyyxyyxxyy)).even))).s3650616757551576, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(0x6F5D27322B1B3865L, ((((void*)0 == l_501) | (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((p_1095->g_94 ^= ((((((VECTOR(int64_t, 2))(0x5E15FB199A354DA9L, 8L)).even <= p_62) && ((0x4E2CADB15633D058L ^ (((((-1L) < (safe_sub_func_int64_t_s_s((p_62 > (safe_mod_func_int64_t_s_s(0x75A8A4272415BB31L, FAKE_DIVERGE(p_1095->group_0_offset, get_group_id(0), 10)))), p_1095->g_483[1][4]))) , l_537) == l_537) ^ p_1095->g_483[1][4])) , p_60)) ^ p_1095->g_458[2][0]) > p_62)), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x74425F5AL)), p_62, (-1L), (-1L))), ((VECTOR(int32_t, 8))(0x2C73840EL)), ((VECTOR(int32_t, 8))((-1L)))))).s5020446276462127)).s8 <= p_1095->g_25.y)) & p_1095->g_25.z), ((VECTOR(int64_t, 4))(0x5721729C785CD707L)), (-1L), ((VECTOR(int64_t, 4))(1L)), ((VECTOR(int64_t, 2))(0x5C1490A228A39EBDL)), ((VECTOR(int64_t, 2))(0L)), 6L)))).s7705, ((VECTOR(int64_t, 4))(0x020277AD21A18C9EL))))), ((VECTOR(int64_t, 4))(3L)), ((VECTOR(int64_t, 4))((-3L)))))).zxzxxyyy, ((VECTOR(int64_t, 8))((-1L)))))))).s1425353723161326, (int64_t)p_1095->g_505[1][2][0], (int64_t)p_61))).sca03)).yxzzzzwzxyzwxxww))).s0 & p_1095->g_85)))) <= p_1095->g_483[0][6]), 0xEDL)), ((VECTOR(int32_t, 4))(0x5A75E2E6L)), ((VECTOR(int32_t, 4))(0x6969B1ACL)), 0x6316027EL)).sdf, ((VECTOR(int32_t, 2))(0x20F228DCL)), ((VECTOR(int32_t, 2))(0x06838444L))))), ((VECTOR(int32_t, 8))((-8L))), 0x2D33C8AFL, ((VECTOR(int32_t, 4))((-9L))), 1L)), ((VECTOR(int32_t, 16))(0x0AEFE934L)))))))).s5)
    { /* block id: 250 */
        VECTOR(uint32_t, 4) l_552 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL);
        uint8_t *l_555 = (void*)0;
        int32_t l_570 = 6L;
        uint8_t l_605 = 0xCBL;
        int i;
        for (p_1095->g_64 = 0; (p_1095->g_64 != 30); p_1095->g_64 = safe_add_func_int8_t_s_s(p_1095->g_64, 1))
        { /* block id: 253 */
            uint32_t l_540 = 4294967290UL;
            VECTOR(uint16_t, 16) l_543 = (VECTOR(uint16_t, 16))(0x4CEEL, (VECTOR(uint16_t, 4))(0x4CEEL, (VECTOR(uint16_t, 2))(0x4CEEL, 0xA606L), 0xA606L), 0xA606L, 0x4CEEL, 0xA606L, (VECTOR(uint16_t, 2))(0x4CEEL, 0xA606L), (VECTOR(uint16_t, 2))(0x4CEEL, 0xA606L), 0x4CEEL, 0xA606L, 0x4CEEL, 0xA606L);
            VECTOR(uint32_t, 8) l_545 = (VECTOR(uint32_t, 8))(0xBC041FB0L, (VECTOR(uint32_t, 4))(0xBC041FB0L, (VECTOR(uint32_t, 2))(0xBC041FB0L, 4294967295UL), 4294967295UL), 4294967295UL, 0xBC041FB0L, 4294967295UL);
            VECTOR(uint32_t, 16) l_546 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967295UL, 4294967290UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL), 4294967295UL, 4294967290UL, 4294967295UL, 4294967290UL);
            int32_t l_556 = 0x2F633A3EL;
            uint16_t ** volatile *l_559 = &p_1095->g_557[2];
            int32_t **l_561 = &p_1095->g_507;
            int i;
            l_556 &= (l_540 != ((((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(l_543.s3fd1dfc696a04c89)).sd3, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1095->g_544.yy)).yxyxxyxx)).s31))).xxxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_545.s3177)).even)))), 0UL, 0x22CC811CL)), ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(p_62, p_61, 9UL, 0x291546CCL)), ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_546.s11ac456515cc0b53)))).sc166)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(5UL, 0xC9311863L, ((VECTOR(uint32_t, 2))(6UL, 0x979A24E4L)), 4294967289UL, (safe_sub_func_uint16_t_u_u(p_1095->g_549, (safe_lshift_func_uint8_t_u_u(254UL, 0)))), ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(l_552.wzxywzywxyzzwzww)).even, (uint32_t)(((safe_mod_func_int32_t_s_s(((void*)0 != l_555), (**p_1095->g_506))) >= 0x028758CFD21F534AL) < p_1095->g_505[3][3][0])))).lo)), ((VECTOR(uint32_t, 4))(1UL)))), ((VECTOR(uint32_t, 8))(0x42F9B00FL)), ((VECTOR(uint32_t, 8))(0xCF917786L))))), 0xC08165D1L, 4294967287UL)).s72)).xxyy))), ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(1UL))))))))))).w < p_1095->g_25.z) >= 0UL));
            l_481[2] = (void*)0;
            (*l_559) = p_1095->g_557[2];
            (*l_561) = l_481[9];
        }
        for (p_1095->g_94 = 6; (p_1095->g_94 <= (-14)); p_1095->g_94--)
        { /* block id: 261 */
            int32_t l_564 = 4L;
            int32_t l_565 = 6L;
            int32_t l_566 = 2L;
            int32_t l_567 = 0x14AB17F9L;
            int32_t l_568 = 0x1827A50AL;
            int32_t l_569 = 0x6B317E62L;
            int32_t l_571 = 0L;
            p_1095->g_573++;
            l_570 = (p_61 && 4294967295UL);
            for (p_1095->g_85 = 17; (p_1095->g_85 <= 3); p_1095->g_85 = safe_sub_func_uint64_t_u_u(p_1095->g_85, 9))
            { /* block id: 266 */
                int32_t **l_594 = &p_1095->g_507;
                for (p_1095->g_92 = 28; (p_1095->g_92 <= 39); p_1095->g_92++)
                { /* block id: 269 */
                    uint64_t *l_583 = &p_1095->g_584[0];
                    int32_t l_595 = 0x5C5CCBE1L;
                    int16_t *l_598 = &p_1095->g_599;
                    if (((VECTOR(int32_t, 4))((safe_add_func_uint32_t_u_u((((-7L) >= ((*l_583)--)) != ((safe_unary_minus_func_int32_t_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(0x681CL, 12)) , (((0x72CFBF8FL & (l_595 = (((void*)0 == l_594) , p_61))) <= FAKE_DIVERGE(p_1095->local_0_offset, get_local_id(0), 10)) ^ 0x6B421B0F5041E531L)), 4)), (safe_rshift_func_int16_t_s_s((((0xBF82L | ((*l_598) ^= p_1095->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1095->tid, 18))])) , p_62) > 1L), p_59)))))) || (-2L))), GROUP_DIVERGE(0, 1))), 0x2B27FB16L, 0L, (-1L))).y)
                    { /* block id: 273 */
                        uint32_t *l_600 = (void*)0;
                        uint32_t *l_601 = (void*)0;
                        l_568 = ((p_1095->g_487 = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_552.z, 0x2E785630L, 0x4063C3E7L, 0UL)).zywzyyzyxxxwxzyx)).sa1de)).even))).yxxyxyyx)).s3) <= (p_1095->g_544.x < (safe_rshift_func_uint16_t_u_s(p_62, 4))));
                    }
                    else
                    { /* block id: 276 */
                        l_570 ^= ((p_1095->g_604.y = p_61) <= p_59);
                        (*l_594) = (*p_1095->g_521);
                    }
                    l_605--;
                }
            }
        }
        for (l_570 = 0; (l_570 >= 4); l_570++)
        { /* block id: 287 */
            uint8_t **l_612 = &l_555;
            uint8_t **l_613 = &l_537;
            uint8_t *l_615[9];
            uint8_t **l_614 = &l_615[6];
            VECTOR(int16_t, 16) l_618 = (VECTOR(int16_t, 16))(0x72B6L, (VECTOR(int16_t, 4))(0x72B6L, (VECTOR(int16_t, 2))(0x72B6L, 0x3F65L), 0x3F65L), 0x3F65L, 0x72B6L, 0x3F65L, (VECTOR(int16_t, 2))(0x72B6L, 0x3F65L), (VECTOR(int16_t, 2))(0x72B6L, 0x3F65L), 0x72B6L, 0x3F65L, 0x72B6L, 0x3F65L);
            int32_t l_620 = (-1L);
            int16_t *l_623 = &p_1095->g_85;
            int32_t * volatile *l_631 = &l_481[2];
            int i;
            for (i = 0; i < 9; i++)
                l_615[i] = &p_1095->g_483[1][4];
            atomic_sub(&p_1095->g_atomic_reduction[get_linear_group_id()], ((+(p_60 ^ (l_620 = (((safe_add_func_int16_t_s_s(0L, (p_1095->g_584[0] > ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-9L), 4L)), 5L, 0x610C0C9EA56F8840L)).x))) ^ (((*l_613) = ((*l_612) = ((p_1095->g_19.x , p_62) , &l_605))) == ((*l_614) = &p_1095->g_483[1][4]))) > ((VECTOR(uint32_t, 8))(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_618.s71e9)).x, l_618.sf)) < (p_1095->g_619 = 0x1EL)), l_618.sc, 0x40D12F2EL, ((VECTOR(uint32_t, 2))(4294967295UL)), 1UL, 4294967291UL, 1UL)).s5)))) <= p_1095->g_582) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1095->v_collective += p_1095->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_1095->g_92 = 28; (p_1095->g_92 <= 34); p_1095->g_92 = safe_add_func_uint64_t_u_u(p_1095->g_92, 7))
            { /* block id: 296 */
                return l_623;
            }
            for (p_62 = 4; (p_62 < 5); p_62 = safe_add_func_int16_t_s_s(p_62, 5))
            { /* block id: 301 */
                (*p_1095->g_626) = &l_570;
                for (p_1095->g_599 = (-2); (p_1095->g_599 == 28); ++p_1095->g_599)
                { /* block id: 305 */
                    int16_t *l_629[4] = {&p_1095->g_85,&p_1095->g_85,&p_1095->g_85,&p_1095->g_85};
                    int i;
                    return l_629[3];
                }
            }
            (*l_631) = p_1095->g_630;
        }
    }
    else
    { /* block id: 311 */
        uint64_t *l_632 = &p_1095->g_584[0];
        int32_t l_635 = 0L;
        l_635 &= (((*l_632)--) && p_1095->g_582);
    }
    return l_501;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_454 p_1095->g_25
 * writes: p_1095->g_85 p_1095->g_64 p_1095->g_458
 */
uint16_t  func_71(int16_t * p_72, uint8_t  p_73, int16_t * p_74, int16_t * p_75, int32_t  p_76, struct S0 * p_1095)
{ /* block id: 210 */
    int32_t *l_446 = &p_1095->g_94;
    int32_t **l_447 = &l_446;
    uint16_t *l_455 = &p_1095->g_64;
    int32_t *l_456[4];
    int32_t *l_457 = &p_1095->g_458[2][0];
    int32_t **l_459 = (void*)0;
    int i;
    for (i = 0; i < 4; i++)
        l_456[i] = &p_1095->g_2;
    l_456[2] = ((p_73 > 0x04L) , ((((*l_447) = l_446) != ((safe_sub_func_int64_t_s_s(1L, ((((*l_455) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((*p_75) = (+((VECTOR(int16_t, 8))(p_1095->g_454.s01354101)).s0)), 12)), GROUP_DIVERGE(0, 1)))) | (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x99B5B4CDL, 4294967286UL)), 0x4ACF8A82L, 0xC7EBC0B3L)))).y , l_456[2]) == &p_1095->g_94) <= (p_73 == p_1095->g_25.x))) >= ((((*l_457) = (((VECTOR(int16_t, 2))(0x3CD7L, 0x2056L)).hi <= (((void*)0 == l_455) & 0x55F2B67EL))) , p_76) ^ 0x08L)))) , (void*)0)) , &p_1095->g_2));
    return p_73;
}


/* ------------------------------------------ */
/* 
 * reads : p_1095->g_comm_values
 * writes: p_1095->g_92 p_1095->g_94
 */
int16_t * func_77(int16_t * p_78, uint8_t  p_79, int8_t  p_80, uint64_t  p_81, int16_t * p_82, struct S0 * p_1095)
{ /* block id: 17 */
    uint16_t l_86 = 0UL;
    VECTOR(uint32_t, 16) l_89 = (VECTOR(uint32_t, 16))(0xF9D9D8ADL, (VECTOR(uint32_t, 4))(0xF9D9D8ADL, (VECTOR(uint32_t, 2))(0xF9D9D8ADL, 2UL), 2UL), 2UL, 0xF9D9D8ADL, 2UL, (VECTOR(uint32_t, 2))(0xF9D9D8ADL, 2UL), (VECTOR(uint32_t, 2))(0xF9D9D8ADL, 2UL), 0xF9D9D8ADL, 2UL, 0xF9D9D8ADL, 2UL);
    int32_t *l_93 = &p_1095->g_94;
    int64_t l_95 = 0x12FBB161CA2EBD35L;
    int16_t *l_445 = &p_1095->g_85;
    int i;
    (*l_93) = (l_86 == ((1L ^ l_86) && (safe_div_func_uint8_t_u_u(0x67L, ((((p_1095->g_comm_values[p_1095->tid] , (0x76L < (l_86 && (((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(0UL, 0UL, 4294967288UL, 0UL)).xyxxwxxzxywxwxyy, ((VECTOR(uint32_t, 4))(l_89.s0ef1)).xxzywzzwwzwxxwwx))).even)).s5 , l_89.s5) >= (p_1095->g_92 = (((safe_lshift_func_int16_t_s_u(4L, 11)) >= 0x41E2L) || p_1095->g_comm_values[p_1095->tid]))) > (-8L)) > 0x06L) , 0xF2L)))) | l_89.s0) || 4294967295UL) ^ 65532UL)))));
    l_95 = 0x278D6BFDL;
    if ((atomic_inc(&p_1095->l_atomic_input[10]) == 2))
    { /* block id: 22 */
        int8_t l_96[6][1] = {{0x26L},{0x26L},{0x26L},{0x26L},{0x26L},{0x26L}};
        int8_t l_97 = 0x69L;
        uint16_t l_98 = 0x290AL;
        int32_t l_101 = 1L;
        uint32_t l_102 = 0x4F5ABE08L;
        uint32_t l_103 = 4294967295UL;
        uint16_t l_104 = 0x3E80L;
        VECTOR(uint64_t, 2) l_107 = (VECTOR(uint64_t, 2))(0UL, 0x70407C5320B35339L);
        VECTOR(int64_t, 16) l_108 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x690203C69C835A82L), 0x690203C69C835A82L), 0x690203C69C835A82L, 1L, 0x690203C69C835A82L, (VECTOR(int64_t, 2))(1L, 0x690203C69C835A82L), (VECTOR(int64_t, 2))(1L, 0x690203C69C835A82L), 1L, 0x690203C69C835A82L, 1L, 0x690203C69C835A82L);
        int64_t l_109 = (-1L);
        uint64_t l_110 = 0UL;
        int16_t l_111 = 8L;
        int32_t l_112 = 0L;
        VECTOR(int32_t, 16) l_113 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-3L)), (-3L)), (-3L), (-6L), (-3L), (VECTOR(int32_t, 2))((-6L), (-3L)), (VECTOR(int32_t, 2))((-6L), (-3L)), (-6L), (-3L), (-6L), (-3L));
        uint64_t l_114 = 0UL;
        int32_t l_115 = 0x73044D68L;
        int32_t l_116[5];
        VECTOR(uint64_t, 4) l_117 = (VECTOR(uint64_t, 4))(0xEB6F9E293F4BB62BL, (VECTOR(uint64_t, 2))(0xEB6F9E293F4BB62BL, 0x60E86605BB6F065AL), 0x60E86605BB6F065AL);
        VECTOR(uint64_t, 4) l_118 = (VECTOR(uint64_t, 4))(0x7243D409114404B1L, (VECTOR(uint64_t, 2))(0x7243D409114404B1L, 0UL), 0UL);
        VECTOR(uint64_t, 4) l_119 = (VECTOR(uint64_t, 4))(0x561C9B0828E8F0F3L, (VECTOR(uint64_t, 2))(0x561C9B0828E8F0F3L, 0x98420A5A07D0373DL), 0x98420A5A07D0373DL);
        VECTOR(uint64_t, 2) l_120 = (VECTOR(uint64_t, 2))(0UL, 1UL);
        VECTOR(uint64_t, 4) l_121 = (VECTOR(uint64_t, 4))(0xDDE4B234A561BD86L, (VECTOR(uint64_t, 2))(0xDDE4B234A561BD86L, 0xA0BDBF62E6A661FAL), 0xA0BDBF62E6A661FAL);
        VECTOR(uint64_t, 8) l_122 = (VECTOR(uint64_t, 8))(0x4E0B4B7F8BE070EAL, (VECTOR(uint64_t, 4))(0x4E0B4B7F8BE070EAL, (VECTOR(uint64_t, 2))(0x4E0B4B7F8BE070EAL, 0UL), 0UL), 0UL, 0x4E0B4B7F8BE070EAL, 0UL);
        int32_t l_123 = (-1L);
        uint8_t l_124[1][4] = {{0UL,0UL,0UL,0UL}};
        int8_t l_125 = 0x37L;
        uint32_t l_126 = 0x3D30447FL;
        int16_t l_127 = 0x77CCL;
        int16_t l_128 = 1L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_116[i] = (-7L);
        --l_98;
        l_102 = l_101;
        if ((l_113.s1 = (l_103 , (((--l_104) , ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(1UL, 18446744073709551609UL, 1UL, ((VECTOR(uint64_t, 4))(l_107.yxxy)), 0x514D69EA85020063L)).s03, ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 16))(l_108.sd269a62dac39f6c4)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(9L, 0x6BEAEC5E7E41F4A3L)).yxxx)))).yzwywxywxwwxzyyw))).s7cae, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x7B391C6011814A66L, 7L)))), 0x53DE1848A2850EDCL, 0x16DCF8DE9EF314FBL))))).even)))))), (uint64_t)l_109))), ((VECTOR(uint64_t, 16))(18446744073709551614UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((((l_110 , ((VECTOR(int64_t, 4))(0x2BB530338E40FFFFL, 0x5992B028A4BD3C15L, 5L, (-1L))).w) , (l_114 ^= (l_111 , (l_112 , l_113.s6)))) , l_115) , l_116[2]), 0xCAF600D476A2755EL, 0x0C4E49CAF053B50BL, 18446744073709551615UL)).z, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(l_117.yw)), ((VECTOR(uint64_t, 4))(l_118.wxxx)).lo, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(l_119.zz)), ((VECTOR(uint64_t, 16))(l_120.xxxxxyyyyyyxxyxx)).sb9))).xxxy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(l_121.zzwwwywx)).s61))), ((VECTOR(uint64_t, 16))(1UL, ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 2))(l_122.s40)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(GROUP_DIVERGE(1, 1), 0x053F68CE5CF1A071L, 18446744073709551606UL, 3UL)), ((VECTOR(uint64_t, 2))(0xB0195B865CE0FBC7L, 18446744073709551613UL)), 0UL, 0UL)).s7504452426732725)).sc, (l_127 = ((l_126 = (l_125 &= (l_123 , l_124[0][2]))) , 0x76F7154ECD3A2B22L)), 0x920081CEE78AC6A9L, 0x75CE82FDDFC4C5E2L, 0UL)).s26)), ((VECTOR(uint64_t, 8))(0UL)), ((VECTOR(uint64_t, 4))(1UL)), 0xF1995C1D1B06647EL, 0xF93A13EA481B1F86L)).lo, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))), ((VECTOR(uint64_t, 2))(0xAF86A2F89F941FD7L)), FAKE_DIVERGE(p_1095->global_2_offset, get_global_id(2), 10), 0xEEEB2DE199855EAAL, ((VECTOR(uint64_t, 2))(0x51010FFDB434E9FAL)), 18446744073709551615UL)).sc6))).xyxyyyxxxxxxxxyy)).s5ae5))).hi))), (uint64_t)GROUP_DIVERGE(1, 1)))), l_128, 0x9F508D56E007783CL, ((VECTOR(uint64_t, 2))(8UL)), 1UL)), 18446744073709551613UL, ((VECTOR(uint64_t, 4))(0xF485BC65A43AFDC6L)), 0xB5C1620E12151E35L, 0x2B42947B03055D87L)).s51, ((VECTOR(uint64_t, 2))(0x376A86D7796E21E6L))))).hi) , 0x73F74086L))))
        { /* block id: 31 */
            int32_t l_129 = 7L;
            VECTOR(int64_t, 8) l_234 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x25540E2C7BBA4E1FL), 0x25540E2C7BBA4E1FL), 0x25540E2C7BBA4E1FL, 1L, 0x25540E2C7BBA4E1FL);
            uint32_t l_235[1][9];
            int8_t l_236 = (-1L);
            int32_t l_237 = (-3L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_235[i][j] = 4294967295UL;
            }
            for (l_129 = 0; (l_129 > 4); l_129 = safe_add_func_int32_t_s_s(l_129, 9))
            { /* block id: 34 */
                VECTOR(int8_t, 4) l_132 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7AL), 0x7AL);
                int16_t l_183 = 0x53BEL;
                int16_t *l_182[2];
                int16_t **l_181[1][5][10] = {{{&l_182[0],&l_182[0],&l_182[1],&l_182[0],&l_182[1],&l_182[1],&l_182[1],&l_182[1],&l_182[0],&l_182[1]},{&l_182[0],&l_182[0],&l_182[1],&l_182[0],&l_182[1],&l_182[1],&l_182[1],&l_182[1],&l_182[0],&l_182[1]},{&l_182[0],&l_182[0],&l_182[1],&l_182[0],&l_182[1],&l_182[1],&l_182[1],&l_182[1],&l_182[0],&l_182[1]},{&l_182[0],&l_182[0],&l_182[1],&l_182[0],&l_182[1],&l_182[1],&l_182[1],&l_182[1],&l_182[0],&l_182[1]},{&l_182[0],&l_182[0],&l_182[1],&l_182[0],&l_182[1],&l_182[1],&l_182[1],&l_182[1],&l_182[0],&l_182[1]}}};
                int64_t l_184 = (-10L);
                VECTOR(int64_t, 8) l_185 = (VECTOR(int64_t, 8))(0x2CF659339AB5B6C6L, (VECTOR(int64_t, 4))(0x2CF659339AB5B6C6L, (VECTOR(int64_t, 2))(0x2CF659339AB5B6C6L, 0x0C9473A2E64CDA43L), 0x0C9473A2E64CDA43L), 0x0C9473A2E64CDA43L, 0x2CF659339AB5B6C6L, 0x0C9473A2E64CDA43L);
                VECTOR(int32_t, 8) l_186 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 5L), 5L), 5L, (-9L), 5L);
                VECTOR(int32_t, 16) l_187 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                VECTOR(int32_t, 2) l_188 = (VECTOR(int32_t, 2))((-2L), 0x02B31457L);
                VECTOR(int32_t, 4) l_189 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x02195782L), 0x02195782L);
                int32_t l_190 = (-1L);
                VECTOR(int32_t, 2) l_191 = (VECTOR(int32_t, 2))((-4L), 1L);
                VECTOR(uint32_t, 4) l_192 = (VECTOR(uint32_t, 4))(0x0F636BEBL, (VECTOR(uint32_t, 2))(0x0F636BEBL, 0x53036A65L), 0x53036A65L);
                int8_t l_193[7];
                int64_t l_194 = 0x01AA495B3EF35305L;
                uint32_t l_195 = 4294967295UL;
                VECTOR(int32_t, 8) l_196 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                VECTOR(int32_t, 2) l_197 = (VECTOR(int32_t, 2))(0x58232C72L, 2L);
                VECTOR(int8_t, 4) l_198 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 3L), 3L);
                VECTOR(int8_t, 16) l_199 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int8_t, 2))(0L, (-10L)), (VECTOR(int8_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L));
                VECTOR(uint8_t, 4) l_200 = (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 0xDBL), 0xDBL);
                VECTOR(int32_t, 8) l_201 = (VECTOR(int32_t, 8))(0x0C28E455L, (VECTOR(int32_t, 4))(0x0C28E455L, (VECTOR(int32_t, 2))(0x0C28E455L, 0x4D16BD2DL), 0x4D16BD2DL), 0x4D16BD2DL, 0x0C28E455L, 0x4D16BD2DL);
                VECTOR(int32_t, 8) l_202 = (VECTOR(int32_t, 8))(0x79BEF017L, (VECTOR(int32_t, 4))(0x79BEF017L, (VECTOR(int32_t, 2))(0x79BEF017L, 1L), 1L), 1L, 0x79BEF017L, 1L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_182[i] = &l_183;
                for (i = 0; i < 7; i++)
                    l_193[i] = 0x1DL;
                if (l_132.w)
                { /* block id: 35 */
                    uint32_t l_133 = 1UL;
                    int32_t *l_134 = (void*)0;
                    int32_t *l_135 = (void*)0;
                    int16_t l_136 = 1L;
                    int16_t l_137 = (-3L);
                    VECTOR(int8_t, 16) l_138 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 2L), 2L), 2L, 8L, 2L, (VECTOR(int8_t, 2))(8L, 2L), (VECTOR(int8_t, 2))(8L, 2L), 8L, 2L, 8L, 2L);
                    VECTOR(int8_t, 16) l_139 = (VECTOR(int8_t, 16))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 0x26L), 0x26L), 0x26L, 0x2FL, 0x26L, (VECTOR(int8_t, 2))(0x2FL, 0x26L), (VECTOR(int8_t, 2))(0x2FL, 0x26L), 0x2FL, 0x26L, 0x2FL, 0x26L);
                    VECTOR(int8_t, 16) l_140 = (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 1L), 1L), 1L, 0x1DL, 1L, (VECTOR(int8_t, 2))(0x1DL, 1L), (VECTOR(int8_t, 2))(0x1DL, 1L), 0x1DL, 1L, 0x1DL, 1L);
                    int64_t l_141[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_141[i] = 0x31FC9452628C699EL;
                    l_113.s6 = (l_133 , (l_116[1] = (l_112 = (-1L))));
                    l_135 = l_134;
                    if ((((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))((l_97 |= (l_136 , l_137)), 0L, (-1L), (-4L), (-5L), 0x54L, 0x2EL, ((VECTOR(int8_t, 2))(l_138.s09)), 0x6DL, 0x0AL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(l_139.sefe3cf7b)).even, ((VECTOR(int8_t, 8))(l_140.s3f9351e3)).lo))))), 0x36L)).lo))).s0 , l_141[5]))
                    { /* block id: 41 */
                        int32_t l_143 = (-10L);
                        int32_t *l_142 = &l_143;
                        int32_t l_144 = 0x21D07C0FL;
                        uint64_t l_145 = 0x366B1B60A8C9BA8FL;
                        int16_t l_148[10] = {0x5A55L,0x72ADL,0x5A55L,0x5A55L,0x72ADL,0x5A55L,0x5A55L,0x72ADL,0x5A55L,0x5A55L};
                        int i;
                        l_142 = (void*)0;
                        --l_145;
                        l_135 = (void*)0;
                        l_135 = (l_148[7] , (void*)0);
                    }
                    else
                    { /* block id: 46 */
                        uint32_t l_149 = 0x9B02917FL;
                        int32_t l_150[6];
                        int64_t l_151 = 0L;
                        int32_t l_153 = 1L;
                        int32_t *l_152[6];
                        uint32_t l_154 = 4294967293UL;
                        uint16_t l_155[6];
                        uint32_t l_156[3][4];
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_150[i] = 0x00559AC6L;
                        for (i = 0; i < 6; i++)
                            l_152[i] = &l_153;
                        for (i = 0; i < 6; i++)
                            l_155[i] = 0x1C7FL;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_156[i][j] = 4294967295UL;
                        }
                        l_151 = (l_150[1] = (l_149 , 0x56CEE14AL));
                        l_135 = (l_152[0] = l_152[0]);
                        l_113.s0 |= ((*l_135) ^= l_154);
                        l_156[2][1] = ((*l_135) = ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(8L, 3L)).yyxx, (int32_t)l_155[0]))).x);
                    }
                }
                else
                { /* block id: 56 */
                    VECTOR(int32_t, 2) l_157 = (VECTOR(int32_t, 2))(1L, 0x6599F55FL);
                    uint32_t l_158 = 0xD161D8D2L;
                    VECTOR(int32_t, 8) l_159 = (VECTOR(int32_t, 8))(0x0A055764L, (VECTOR(int32_t, 4))(0x0A055764L, (VECTOR(int32_t, 2))(0x0A055764L, 1L), 1L), 1L, 0x0A055764L, 1L);
                    int i;
                    l_123 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_157.yyxx)).even))).yxxy)).hi)).yyyx)))))).z;
                    l_158 = 1L;
                    if (((VECTOR(int32_t, 8))(l_159.s31561135)).s4)
                    { /* block id: 59 */
                        int64_t l_160 = 0x0BB3311CE538C8CDL;
                        int8_t l_161 = 1L;
                        uint32_t l_162 = 4294967291UL;
                        uint16_t l_163[1][8][1] = {{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}}};
                        int32_t l_164 = 0x7570C646L;
                        uint16_t l_165[9][5] = {{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL},{65535UL,0x0B32L,0x9897L,0x4584L,0UL}};
                        uint64_t l_166 = 0xBEC45CF2429CABE6L;
                        int8_t l_167 = 0L;
                        uint64_t l_168 = 0xBA9DFC485CD22159L;
                        VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))(0x383916AAL, (VECTOR(int32_t, 4))(0x383916AAL, (VECTOR(int32_t, 2))(0x383916AAL, 0x3629F83BL), 0x3629F83BL), 0x3629F83BL, 0x383916AAL, 0x3629F83BL, (VECTOR(int32_t, 2))(0x383916AAL, 0x3629F83BL), (VECTOR(int32_t, 2))(0x383916AAL, 0x3629F83BL), 0x383916AAL, 0x3629F83BL, 0x383916AAL, 0x3629F83BL);
                        VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L);
                        int32_t l_171 = 0x5959F263L;
                        uint64_t l_172 = 0xEFDAD2A3BAFCB356L;
                        int32_t l_173 = 0L;
                        int32_t *l_174 = &l_173;
                        int32_t *l_175 = &l_164;
                        uint8_t l_176[1][2][6] = {{{5UL,1UL,253UL,1UL,5UL,5UL},{5UL,1UL,253UL,1UL,5UL,5UL}}};
                        int i, j, k;
                        l_113.s3 = l_160;
                        l_123 &= (l_101 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_161, (-1L), (-9L), 0L, l_162, ((VECTOR(int32_t, 16))((-1L), l_163[0][6][0], (-4L), (l_168 &= (l_167 = (l_166 = (l_165[3][3] = (l_164 = (l_115 ^= 0x4757FEEDL)))))), (-10L), 8L, 0x2A44B1EAL, 0x2BBA1DCAL, 9L, (-1L), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_169.sd3)).yyyx, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_170.wxyzwyxx)))).s55, (int32_t)(l_171 , l_172)))).xyyyxyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 0x0C12B718L)))).xxxxyxyy)).s51)).xyyyxxyy))).even)))))), 2L, (-10L))).s1, 0x7C8DD5CAL, 0x788541ADL)))).s1771612313242734)).s0a)), 8L, 0x7B2AA1FCL)).y , l_173));
                        l_175 = l_174;
                        l_116[2] = l_176[0][1][2];
                    }
                    else
                    { /* block id: 71 */
                        int32_t l_178 = 0x3C54FD3AL;
                        int32_t *l_177 = &l_178;
                        int32_t *l_179[2];
                        int32_t *l_180 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_179[i] = &l_178;
                        l_177 = (void*)0;
                        l_180 = l_179[0];
                    }
                }
                l_181[0][0][7] = (void*)0;
                l_113.s7 = l_184;
                if ((((VECTOR(int64_t, 2))(l_185.s20)).lo , ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_186.s24)).xyyx)))).xzyywwyz, (int32_t)0L))).s13, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_187.s9ce404bd)).s2235076540643027, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_188.xyxxxxyx)).even)).zyzxwywwwzzzwwwz))).s6c, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x3C43A748L, (-1L))).xxyx, ((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((-6L), 0x1E1E6FD7L, 0x2F8E3876L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3BF84625L, (-1L))), (-1L), 0x6A78EDF1L)), (-7L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_189.ww)).xxxy)), 4L, l_190, 0x2189BEC7L, 0x4E92F58AL)).odd)).ywxxzxwx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_191.yyyxyyyy)).s52)).yxxy)).zwzzzwzx))).s00)), ((l_193[4] ^= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_192.wzxzyxzwyzzzzzzw)).sef)).xyxy)).w) , (-2L)), l_194, l_195, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_196.s0165)).xwzwzyyz)), (-4L), 0x51298545L)).s63be, ((VECTOR(int32_t, 2))(l_197.xy)).yxxy))), (int32_t)0x216B741FL, (int32_t)((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(l_198.yywx)).xyyyxwwwzzzwxyzw, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(l_199.s09)), 0x25L)).yyzwwxzw, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-1L), 0x6FL)))).yyyxxxyy))).lo)).xwzyxzzwwywxzxww))))), ((VECTOR(uint8_t, 2))(l_200.wx)).xyxyxxyyyxyyyxyy))).s3a58, ((VECTOR(uint16_t, 4))(0x6219L, ((VECTOR(uint16_t, 2))(0x9368L, 0UL)), 65535UL))))).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_201.s05)).xxxxyxxyxxxyxyxx)).s66))).even))).zywwxyyyxyywzxyx)), ((VECTOR(int32_t, 16))(l_202.s4624353623745424))))).sa4))).hi))
                { /* block id: 79 */
                    uint32_t l_226 = 0xE6A2DAD4L;
                    uint8_t l_227[5];
                    uint32_t l_228 = 6UL;
                    int64_t l_231 = 0x23768B4554AD14B1L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_227[i] = 255UL;
                    if ((l_196.s5 = 0x530CC395L))
                    { /* block id: 81 */
                        int32_t l_205[1];
                        int32_t *l_204 = &l_205[0];
                        int32_t **l_203 = &l_204;
                        int32_t **l_206 = &l_204;
                        uint32_t l_207 = 0xC2A6CF9FL;
                        uint64_t l_210 = 0UL;
                        VECTOR(int32_t, 4) l_211 = (VECTOR(int32_t, 4))(0x68F63AD2L, (VECTOR(int32_t, 2))(0x68F63AD2L, 0x522849E8L), 0x522849E8L);
                        int16_t *l_213 = (void*)0;
                        int16_t **l_212 = &l_213;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_205[i] = 0x43610736L;
                        l_206 = (l_203 = l_203);
                        l_207--;
                        l_202.s6 |= (l_210 , ((VECTOR(int32_t, 16))(l_211.zyzzxxxzywwyyzwz)).s4);
                        l_181[0][4][5] = l_212;
                    }
                    else
                    { /* block id: 87 */
                        uint32_t l_214 = 4294967286UL;
                        int32_t *l_217[1];
                        int32_t l_219 = 0x042449FAL;
                        int32_t *l_218 = &l_219;
                        uint16_t l_220 = 0x3361L;
                        int32_t *l_221 = &l_219;
                        int32_t *l_222 = &l_219;
                        uint32_t l_223[10][6] = {{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL},{4294967292UL,4294967292UL,0xF7D3C1ADL,4294967289UL,0x8AC3DA44L,4294967289UL}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_217[i] = (void*)0;
                        ++l_214;
                        l_218 = l_217[0];
                        l_222 = (l_220 , l_221);
                        l_223[3][4]++;
                    }
                    l_227[0] = l_226;
                    --l_228;
                    l_101 = (l_196.s2 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1FED2C08L, 0x0D95EC47L)).lo, l_231, (-1L), (-7L))).odd)).yxyxxyyx)).s4);
                }
                else
                { /* block id: 97 */
                    uint32_t l_232 = 4294967295UL;
                    uint32_t l_233 = 1UL;
                    l_233 &= l_232;
                }
            }
            l_123 |= (l_112 = (((VECTOR(int64_t, 8))(l_234.s72275750)).s6 , (l_235[0][1] , (l_116[1] ^= (l_237 ^= l_236)))));
        }
        else
        { /* block id: 105 */
            int32_t l_238 = 1L;
            int64_t l_263 = 0x73F658A32A3C2728L;
            VECTOR(int8_t, 2) l_264 = (VECTOR(int8_t, 2))(9L, 0L);
            uint32_t l_265 = 1UL;
            VECTOR(int32_t, 4) l_274 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7851A6A6L), 0x7851A6A6L);
            VECTOR(int32_t, 4) l_275 = (VECTOR(int32_t, 4))(0x2F7C2961L, (VECTOR(int32_t, 2))(0x2F7C2961L, 0x083A8DCCL), 0x083A8DCCL);
            int32_t l_276 = 2L;
            VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L));
            int16_t l_278 = 1L;
            VECTOR(int32_t, 4) l_279 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x222758EDL), 0x222758EDL);
            uint8_t l_280 = 0xF6L;
            VECTOR(int16_t, 16) l_281 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-3L)), (-3L)), (-3L), (-9L), (-3L), (VECTOR(int16_t, 2))((-9L), (-3L)), (VECTOR(int16_t, 2))((-9L), (-3L)), (-9L), (-3L), (-9L), (-3L));
            int32_t l_282 = (-3L);
            VECTOR(int32_t, 8) l_283 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x6B242AB3L), 0x6B242AB3L), 0x6B242AB3L, 3L, 0x6B242AB3L);
            VECTOR(int32_t, 4) l_284 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0F414B34L), 0x0F414B34L);
            VECTOR(int32_t, 8) l_285 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
            VECTOR(int32_t, 2) l_286 = (VECTOR(int32_t, 2))(3L, 0L);
            uint16_t l_287 = 65529UL;
            VECTOR(int32_t, 2) l_288 = (VECTOR(int32_t, 2))(0x57BED89BL, 0x40272817L);
            VECTOR(int32_t, 16) l_289 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x67248802L), 0x67248802L), 0x67248802L, 1L, 0x67248802L, (VECTOR(int32_t, 2))(1L, 0x67248802L), (VECTOR(int32_t, 2))(1L, 0x67248802L), 1L, 0x67248802L, 1L, 0x67248802L);
            VECTOR(int32_t, 4) l_290 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-9L)), (-9L));
            VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))(0x54592D42L, (VECTOR(int32_t, 4))(0x54592D42L, (VECTOR(int32_t, 2))(0x54592D42L, (-6L)), (-6L)), (-6L), 0x54592D42L, (-6L), (VECTOR(int32_t, 2))(0x54592D42L, (-6L)), (VECTOR(int32_t, 2))(0x54592D42L, (-6L)), 0x54592D42L, (-6L), 0x54592D42L, (-6L));
            VECTOR(int32_t, 4) l_292 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6E186793L), 0x6E186793L);
            int16_t l_293 = (-1L);
            int8_t l_294[6] = {0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL};
            int i;
            for (l_238 = 27; (l_238 >= (-13)); l_238 = safe_sub_func_int32_t_s_s(l_238, 9))
            { /* block id: 108 */
                int32_t l_241[7][10][3] = {{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}},{{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L},{1L,0x68DE12CCL,1L}}};
                int32_t *l_261 = &l_241[0][6][0];
                int32_t l_262 = (-8L);
                int i, j, k;
                for (l_241[0][6][0] = 0; (l_241[0][6][0] < (-9)); --l_241[0][6][0])
                { /* block id: 111 */
                    uint32_t l_244 = 0x7E19506FL;
                    VECTOR(int32_t, 8) l_245 = (VECTOR(int32_t, 8))(0x139ED9BCL, (VECTOR(int32_t, 4))(0x139ED9BCL, (VECTOR(int32_t, 2))(0x139ED9BCL, 0x1D0DC95DL), 0x1D0DC95DL), 0x1D0DC95DL, 0x139ED9BCL, 0x1D0DC95DL);
                    VECTOR(int32_t, 16) l_246 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2C419759L), 0x2C419759L), 0x2C419759L, 1L, 0x2C419759L, (VECTOR(int32_t, 2))(1L, 0x2C419759L), (VECTOR(int32_t, 2))(1L, 0x2C419759L), 1L, 0x2C419759L, 1L, 0x2C419759L);
                    VECTOR(int32_t, 4) l_247 = (VECTOR(int32_t, 4))(0x6E1DDF88L, (VECTOR(int32_t, 2))(0x6E1DDF88L, 2L), 2L);
                    VECTOR(int32_t, 2) l_248 = (VECTOR(int32_t, 2))(0x22DBB2E2L, 0x6CB48F3EL);
                    VECTOR(int32_t, 2) l_249 = (VECTOR(int32_t, 2))((-6L), 0x76C98522L);
                    VECTOR(int32_t, 8) l_250 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0DBF972BL), 0x0DBF972BL), 0x0DBF972BL, (-1L), 0x0DBF972BL);
                    VECTOR(int32_t, 16) l_251 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int32_t, 2))(1L, (-6L)), (VECTOR(int32_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L));
                    uint8_t l_252 = 0x53L;
                    int16_t l_253 = 2L;
                    uint8_t l_254 = 0xF2L;
                    VECTOR(int32_t, 16) l_255 = (VECTOR(int32_t, 16))(0x39167741L, (VECTOR(int32_t, 4))(0x39167741L, (VECTOR(int32_t, 2))(0x39167741L, 0x31B951BAL), 0x31B951BAL), 0x31B951BAL, 0x39167741L, 0x31B951BAL, (VECTOR(int32_t, 2))(0x39167741L, 0x31B951BAL), (VECTOR(int32_t, 2))(0x39167741L, 0x31B951BAL), 0x39167741L, 0x31B951BAL, 0x39167741L, 0x31B951BAL);
                    uint16_t l_256 = 0xC830L;
                    int16_t l_257 = 0x1376L;
                    int8_t l_258 = 0x31L;
                    uint8_t l_259[6][2][3] = {{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}},{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}},{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}},{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}},{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}},{{0xC7L,0x83L,0xC7L},{0xC7L,0x83L,0xC7L}}};
                    int16_t l_260[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_260[i] = (-2L);
                    l_112 = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_244, 0x60827B68L, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x275DL, 0x1A93L)).yxxyyxyx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65527UL, 65535UL)), 65535UL, 0x0007L)).xxyxwyzw))), ((VECTOR(int32_t, 2))(l_245.s16)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x33D0057DL, (-7L))).xxyx)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x2765BEE3L, 1L)).xyyxyyyyxyxyxxyy)).s2019)).even)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_246.s45)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, 0x67C9252EL, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_247.xxwxzwyw)).hi, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x50AC017EL, 0x0CF2ABC8L)), ((VECTOR(int32_t, 16))(l_248.xxxyxxyyxxxyyyyx)).s2c))).yxxy))), 0L, 0x571DA718L)).hi)).odd))), 0x4777F7B3L, 5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_249.yy)), 7L, 1L)), ((VECTOR(int32_t, 2))(0x57DEAFFBL, (-5L))), ((VECTOR(int32_t, 4))(l_250.s7304)).x, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_251.s1ca1425d)))).s25)).yyxx)).xyzwxwyw, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(1L, l_252, ((VECTOR(int32_t, 8))(l_253, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x69532768L, 4L)), 0x7F6B8ADBL, 0x6AC055DAL)), l_254, 0L, 0L)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_255.sa9)), ((VECTOR(int32_t, 8))((((l_257 = l_256) , (GROUP_DIVERGE(1, 1) , l_258)) , 0x5C26E1C0L), 0x677555DDL, l_259[2][0][1], 0x7BEBA78AL, 0x24150447L, ((VECTOR(int32_t, 2))((-1L))), (-5L))).s62))), l_260[0], ((VECTOR(int32_t, 2))(6L)), 0x0BEC9C2DL)).even, ((VECTOR(int32_t, 8))(0x460E21C4L)))))))).s50)), ((VECTOR(int32_t, 2))(0x104F76D1L)), ((VECTOR(int32_t, 2))(0L))))).yxxxxyyyyxxxyxyy, (int32_t)5L, (int32_t)0x0210A6BCL))).s4429, ((VECTOR(int32_t, 4))(2L))))).even, ((VECTOR(int32_t, 2))(0x6DBF856EL))))), 0x28F82DB5L))))).s5;
                    l_113.sa ^= 4L;
                }
                l_261 = (void*)0;
                l_112 = (l_123 |= l_262);
            }
            --l_265;
            for (l_263 = (-27); (l_263 <= 21); ++l_263)
            { /* block id: 123 */
                int32_t *l_270 = (void*)0;
                int32_t l_272 = 4L;
                int32_t *l_271 = &l_272;
                int32_t *l_273 = &l_272;
                l_273 = (l_271 = l_270);
            }
            if ((l_113.sa = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x0E1AEA47L, (-3L))).xxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_274.xy)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_275.yy)), ((VECTOR(int32_t, 2))(0x744DAF3DL, 0x54A3294FL))))).xxxx)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_276, 0x41F3F4E8L, 0x06BD36A4L, 0x57FBBE17L)).even, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_277.yxxwxzyyxyzxzxwx)).s54b1)).yyzzxxyw)).lo)).hi, ((VECTOR(int32_t, 16))(8L, ((VECTOR(int32_t, 2))(0x7B58C1B3L, 0x0FF8E4FDL)), 9L, 0x5659D5D0L, ((VECTOR(int32_t, 2))(0x036C0D3BL, (-1L))), l_278, ((VECTOR(int32_t, 2))(l_279.xy)), l_280, l_281.s2, 0L, l_282, 9L, 0x16EBA593L)).sc7, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_283.s12417401)), 0x536EDDF0L, (l_123 |= 0x62C1FEB0L), 1L, 0L, ((VECTOR(int32_t, 2))(l_284.xx)).odd, 4L, 0x3E8B011BL, 1L)), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(l_285.s0266)).xwwzxxwxyzxxwzxz, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_286.yy)).xxxyxxxxyyyyxxxy)).s7, l_287, 0x7DD6E504L, (-10L))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7A9DD4FAL, (-1L))).yyxy)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0L, 0x062001FAL)), ((VECTOR(int32_t, 8))(l_288.yxxxyxyx)).s41))), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_289.sf0)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x781781BEL, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_290.yyywwyywzyxwzwxw)).s1c, (int32_t)0x6D5398EAL))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x16AABE22L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_291.se2)).yyyxyyxx)).s42, ((VECTOR(int32_t, 4))(1L, 2L, 0L, 0L)).hi))))), (-10L), l_292.z, (-8L), (-10L), 0L)).s14)).even, (-1L), ((VECTOR(int32_t, 4))(0x28106793L)), (-3L), (-2L), ((VECTOR(int32_t, 4))(0L)), 0x383F7E49L)).odd)).s0341536776302500)).sa1)))))).xxxyxyxy)).s26))), l_293, l_294[1], ((VECTOR(int32_t, 2))((-8L))), 0L, 0L)).s67))), 0x544BA349L)).yxyxwyyxyyxxywxw)))))).s955b)).odd))))).xxxxxxxyxxxyyxyy, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x5CADD11AL))))).se8))), 0x09196A86L)).even))).z))
            { /* block id: 129 */
                uint16_t l_295 = 65535UL;
                int32_t l_313 = (-1L);
                int32_t *l_312[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_312[i] = &l_313;
                if ((l_274.w = l_295))
                { /* block id: 131 */
                    int32_t l_296 = 0x30340932L;
                    uint32_t l_303 = 4294967287UL;
                    uint32_t l_304[5][5];
                    VECTOR(int64_t, 4) l_305 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-2L)), (-2L));
                    uint32_t l_306 = 0UL;
                    uint32_t l_307[7][9] = {{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L},{1UL,0xEAAFCCFCL,0UL,0xBCAC8381L,0x80E81A89L,4294967295UL,7UL,0UL,0x5DBFB537L}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_304[i][j] = 0xF0828740L;
                    }
                    for (l_296 = 0; (l_296 < 13); l_296++)
                    { /* block id: 134 */
                        int32_t l_300 = (-1L);
                        int32_t *l_299 = &l_300;
                        int32_t *l_301[4];
                        VECTOR(int32_t, 16) l_302 = (VECTOR(int32_t, 16))(0x74D27535L, (VECTOR(int32_t, 4))(0x74D27535L, (VECTOR(int32_t, 2))(0x74D27535L, 0x06FB2C72L), 0x06FB2C72L), 0x06FB2C72L, 0x74D27535L, 0x06FB2C72L, (VECTOR(int32_t, 2))(0x74D27535L, 0x06FB2C72L), (VECTOR(int32_t, 2))(0x74D27535L, 0x06FB2C72L), 0x74D27535L, 0x06FB2C72L, 0x74D27535L, 0x06FB2C72L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_301[i] = &l_300;
                        l_301[1] = l_299;
                        l_274.x |= ((VECTOR(int32_t, 4))(l_302.s2c54)).z;
                    }
                    l_307[3][2] ^= (((l_303 , l_304[4][1]) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_305.ww)), 0x51F539C6CFD2AAB7L, 9L)).x) , l_306);
                }
                else
                { /* block id: 139 */
                    int32_t l_308 = 0x45FF28F2L;
                    for (l_308 = 25; (l_308 < (-5)); --l_308)
                    { /* block id: 142 */
                        uint16_t l_311 = 65535UL;
                        l_290.x &= (l_101 = l_311);
                    }
                }
                l_312[3] = (GROUP_DIVERGE(2, 1) , (void*)0);
                l_291.s3 = ((VECTOR(int32_t, 2))(0x00B2E258L, 9L)).hi;
            }
            else
            { /* block id: 149 */
                int32_t l_315 = 0x5AE5E6DAL;
                int32_t *l_314[5];
                uint8_t l_391 = 248UL;
                int32_t l_392 = (-1L);
                VECTOR(uint32_t, 4) l_393 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967287UL), 4294967287UL);
                VECTOR(uint32_t, 16) l_394 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 4294967289UL), 4294967289UL, 0UL, 4294967289UL, (VECTOR(uint32_t, 2))(0UL, 4294967289UL), (VECTOR(uint32_t, 2))(0UL, 4294967289UL), 0UL, 4294967289UL, 0UL, 4294967289UL);
                VECTOR(uint32_t, 4) l_395 = (VECTOR(uint32_t, 4))(0x95E49E2BL, (VECTOR(uint32_t, 2))(0x95E49E2BL, 0x312FD2C4L), 0x312FD2C4L);
                VECTOR(uint64_t, 16) l_396 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                VECTOR(uint64_t, 16) l_397 = (VECTOR(uint64_t, 16))(0xA1AB3800E44C0F4BL, (VECTOR(uint64_t, 4))(0xA1AB3800E44C0F4BL, (VECTOR(uint64_t, 2))(0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL), 0x22B47FFD1B1BAB4EL), 0x22B47FFD1B1BAB4EL, 0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL, (VECTOR(uint64_t, 2))(0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL), (VECTOR(uint64_t, 2))(0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL), 0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL, 0xA1AB3800E44C0F4BL, 0x22B47FFD1B1BAB4EL);
                VECTOR(uint64_t, 8) l_398 = (VECTOR(uint64_t, 8))(0xCB872D37621463A6L, (VECTOR(uint64_t, 4))(0xCB872D37621463A6L, (VECTOR(uint64_t, 2))(0xCB872D37621463A6L, 0x833CE5758ED20296L), 0x833CE5758ED20296L), 0x833CE5758ED20296L, 0xCB872D37621463A6L, 0x833CE5758ED20296L);
                VECTOR(uint64_t, 8) l_399 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 5UL), 5UL), 5UL, 18446744073709551606UL, 5UL);
                uint64_t l_400 = 0UL;
                uint64_t l_403 = 1UL;
                uint16_t l_404 = 0xD12CL;
                VECTOR(uint32_t, 16) l_407 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967294UL), 4294967294UL), 4294967294UL, 0UL, 4294967294UL, (VECTOR(uint32_t, 2))(0UL, 4294967294UL), (VECTOR(uint32_t, 2))(0UL, 4294967294UL), 0UL, 4294967294UL, 0UL, 4294967294UL);
                VECTOR(uint32_t, 16) l_408 = (VECTOR(uint32_t, 16))(0xC72EE0D2L, (VECTOR(uint32_t, 4))(0xC72EE0D2L, (VECTOR(uint32_t, 2))(0xC72EE0D2L, 0x1979271BL), 0x1979271BL), 0x1979271BL, 0xC72EE0D2L, 0x1979271BL, (VECTOR(uint32_t, 2))(0xC72EE0D2L, 0x1979271BL), (VECTOR(uint32_t, 2))(0xC72EE0D2L, 0x1979271BL), 0xC72EE0D2L, 0x1979271BL, 0xC72EE0D2L, 0x1979271BL);
                VECTOR(uint32_t, 4) l_409 = (VECTOR(uint32_t, 4))(0x20CABAD9L, (VECTOR(uint32_t, 2))(0x20CABAD9L, 0xF4BC9DBFL), 0xF4BC9DBFL);
                VECTOR(uint32_t, 8) l_410 = (VECTOR(uint32_t, 8))(0x9196074EL, (VECTOR(uint32_t, 4))(0x9196074EL, (VECTOR(uint32_t, 2))(0x9196074EL, 0UL), 0UL), 0UL, 0x9196074EL, 0UL);
                VECTOR(uint64_t, 16) l_411 = (VECTOR(uint64_t, 16))(0x3C27A65FFEF23A56L, (VECTOR(uint64_t, 4))(0x3C27A65FFEF23A56L, (VECTOR(uint64_t, 2))(0x3C27A65FFEF23A56L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x3C27A65FFEF23A56L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x3C27A65FFEF23A56L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x3C27A65FFEF23A56L, 18446744073709551615UL), 0x3C27A65FFEF23A56L, 18446744073709551615UL, 0x3C27A65FFEF23A56L, 18446744073709551615UL);
                VECTOR(uint64_t, 8) l_412 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL);
                VECTOR(uint64_t, 8) l_413 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
                uint32_t l_414[4][8] = {{4294967295UL,0x8D6AEC21L,0x5A3A692AL,4294967289UL,0x5A3A692AL,0x8D6AEC21L,4294967295UL,0xEDD2C652L},{4294967295UL,0x8D6AEC21L,0x5A3A692AL,4294967289UL,0x5A3A692AL,0x8D6AEC21L,4294967295UL,0xEDD2C652L},{4294967295UL,0x8D6AEC21L,0x5A3A692AL,4294967289UL,0x5A3A692AL,0x8D6AEC21L,4294967295UL,0xEDD2C652L},{4294967295UL,0x8D6AEC21L,0x5A3A692AL,4294967289UL,0x5A3A692AL,0x8D6AEC21L,4294967295UL,0xEDD2C652L}};
                uint8_t l_415 = 8UL;
                int32_t l_416 = 0x0020F573L;
                int64_t l_417[4] = {(-8L),(-8L),(-8L),(-8L)};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_314[i] = &l_315;
                l_314[3] = (void*)0;
                for (l_315 = 23; (l_315 > 13); l_315--)
                { /* block id: 153 */
                    int64_t l_318 = 9L;
                    int32_t l_319[1];
                    VECTOR(int32_t, 8) l_320 = (VECTOR(int32_t, 8))(0x3C7D3999L, (VECTOR(int32_t, 4))(0x3C7D3999L, (VECTOR(int32_t, 2))(0x3C7D3999L, 0x5EE79E50L), 0x5EE79E50L), 0x5EE79E50L, 0x3C7D3999L, 0x5EE79E50L);
                    uint8_t l_321 = 0x18L;
                    int32_t l_322 = 7L;
                    uint32_t l_323 = 0UL;
                    VECTOR(int32_t, 16) l_324 = (VECTOR(int32_t, 16))(0x17CD70FBL, (VECTOR(int32_t, 4))(0x17CD70FBL, (VECTOR(int32_t, 2))(0x17CD70FBL, 1L), 1L), 1L, 0x17CD70FBL, 1L, (VECTOR(int32_t, 2))(0x17CD70FBL, 1L), (VECTOR(int32_t, 2))(0x17CD70FBL, 1L), 0x17CD70FBL, 1L, 0x17CD70FBL, 1L);
                    int8_t l_325 = 0x34L;
                    int32_t l_326 = 0x6F0FA86CL;
                    VECTOR(int32_t, 16) l_327 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x2DC1CBE0L), 0x2DC1CBE0L), 0x2DC1CBE0L, 9L, 0x2DC1CBE0L, (VECTOR(int32_t, 2))(9L, 0x2DC1CBE0L), (VECTOR(int32_t, 2))(9L, 0x2DC1CBE0L), 9L, 0x2DC1CBE0L, 9L, 0x2DC1CBE0L);
                    int16_t l_328[6][7] = {{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL},{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL},{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL},{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL},{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL},{0x580EL,(-2L),0x562FL,0x21A0L,(-2L),0x21A0L,0x562FL}};
                    VECTOR(int32_t, 2) l_329 = (VECTOR(int32_t, 2))((-2L), 0x7030E3BCL);
                    VECTOR(int32_t, 16) l_330 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L, (VECTOR(int32_t, 2))((-1L), 8L), (VECTOR(int32_t, 2))((-1L), 8L), (-1L), 8L, (-1L), 8L);
                    uint64_t l_331 = 0UL;
                    int16_t l_332[4][2][8];
                    uint16_t l_333 = 0UL;
                    uint32_t l_334 = 0xA8CD03AFL;
                    uint16_t l_389 = 0x52A7L;
                    int32_t *l_390[3][8] = {{&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0},{&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0},{&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0,&l_319[0],&l_319[0],(void*)0}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_319[i] = (-9L);
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_332[i][j][k] = 6L;
                        }
                    }
                    l_319[0] = l_318;
                    if (((VECTOR(int32_t, 8))((-10L), (-5L), (-2L), 0x3644CBA5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x186FF757L, (l_321 |= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_320.s52151310)).s6541201454061074))))).se), 0x1D6B5C08L, ((VECTOR(int32_t, 2))(0x0EF4E7ACL, (-1L))), l_322, 0x10D5B57BL, 1L)).s0, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))((l_326 = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x7026B42FL, 0x4E395418L)).yxxy, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))((l_323 , 2L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_324.s4500)).hi)), 0x221D270BL)), (int32_t)l_325)))))).w), 0L, 0x3911995FL, 0x6537C568L)).wzwxyxyzzywzwzww, ((VECTOR(int32_t, 16))(0x201D7B1EL, 9L, 0x4F13F1ADL, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_327.s6b8d)).zwxwxyzxyxwyzzyx, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_328[1][2], 3L, (l_327.s6 = 0x4A65A85AL), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_329.xy)).yyxxyyxy)).s05, ((VECTOR(int32_t, 8))(l_330.s7747f3b2)).s26))), ((VECTOR(int32_t, 2))(0x359825BBL, 0x5993346FL)), 0x7E080BFEL)).s13, ((VECTOR(int32_t, 2))(0x55F8126BL, 1L))))).yyyxxxxxyxxyyyxx, ((VECTOR(int32_t, 16))(l_331, (-1L), 1L, (-1L), 0x0FAD6F11L, 0x31825EA8L, (-1L), ((VECTOR(int32_t, 8))(0x228A678AL)), 0x1B41CF9AL))))).saea8, ((VECTOR(int32_t, 4))(0x22FDAF06L)), ((VECTOR(int32_t, 4))(0L))))), l_332[2][0][6], l_333, l_334, 0x29322F4BL, ((VECTOR(int32_t, 4))(0x4DD879EEL)), (-1L)))))).scd)), ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x00D95F88L))))), 0L)))).s5)
                    { /* block id: 158 */
                        int8_t l_335 = 0L;
                        uint32_t l_336 = 1UL;
                        int16_t l_337[6][5][4] = {{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}},{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}},{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}},{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}},{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}},{{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL},{0x086BL,0x6FD1L,0L,0x21FFL}}};
                        uint32_t l_338 = 0x82C94AA7L;
                        int64_t l_341 = 1L;
                        int64_t l_342 = 0x5FAAF14233DAA163L;
                        uint16_t l_343 = 1UL;
                        int i, j, k;
                        l_336 = l_335;
                        l_338++;
                        l_343++;
                    }
                    else
                    { /* block id: 162 */
                        int32_t l_346 = 0x28F6DF68L;
                        int8_t l_347 = (-1L);
                        int32_t l_348 = 0x56A1D4DFL;
                        VECTOR(int32_t, 16) l_349 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x78AE8F5BL), 0x78AE8F5BL), 0x78AE8F5BL, 0L, 0x78AE8F5BL, (VECTOR(int32_t, 2))(0L, 0x78AE8F5BL), (VECTOR(int32_t, 2))(0L, 0x78AE8F5BL), 0L, 0x78AE8F5BL, 0L, 0x78AE8F5BL);
                        VECTOR(int32_t, 4) l_350 = (VECTOR(int32_t, 4))(0x1546B4F2L, (VECTOR(int32_t, 2))(0x1546B4F2L, 0x3610229DL), 0x3610229DL);
                        VECTOR(int32_t, 2) l_351 = (VECTOR(int32_t, 2))(0L, 5L);
                        VECTOR(int32_t, 2) l_352 = (VECTOR(int32_t, 2))(0L, (-9L));
                        VECTOR(int32_t, 8) l_353 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x18C518F7L), 0x18C518F7L), 0x18C518F7L, 5L, 0x18C518F7L);
                        VECTOR(int16_t, 16) l_354 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6F70L), 0x6F70L), 0x6F70L, 0L, 0x6F70L, (VECTOR(int16_t, 2))(0L, 0x6F70L), (VECTOR(int16_t, 2))(0L, 0x6F70L), 0L, 0x6F70L, 0L, 0x6F70L);
                        VECTOR(int32_t, 16) l_355 = (VECTOR(int32_t, 16))(0x481817E7L, (VECTOR(int32_t, 4))(0x481817E7L, (VECTOR(int32_t, 2))(0x481817E7L, 0x51946FF8L), 0x51946FF8L), 0x51946FF8L, 0x481817E7L, 0x51946FF8L, (VECTOR(int32_t, 2))(0x481817E7L, 0x51946FF8L), (VECTOR(int32_t, 2))(0x481817E7L, 0x51946FF8L), 0x481817E7L, 0x51946FF8L, 0x481817E7L, 0x51946FF8L);
                        VECTOR(uint8_t, 2) l_356 = (VECTOR(uint8_t, 2))(1UL, 0x4CL);
                        VECTOR(uint8_t, 4) l_357 = (VECTOR(uint8_t, 4))(0xA4L, (VECTOR(uint8_t, 2))(0xA4L, 4UL), 4UL);
                        int32_t l_358 = 0x706192A3L;
                        VECTOR(int8_t, 2) l_359 = (VECTOR(int8_t, 2))((-6L), 0x07L);
                        VECTOR(uint8_t, 4) l_360 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x5EL), 0x5EL);
                        VECTOR(uint8_t, 8) l_361 = (VECTOR(uint8_t, 8))(0x1AL, (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), 255UL), 255UL, 0x1AL, 255UL);
                        VECTOR(uint8_t, 16) l_362 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 255UL), 255UL), 255UL, 6UL, 255UL, (VECTOR(uint8_t, 2))(6UL, 255UL), (VECTOR(uint8_t, 2))(6UL, 255UL), 6UL, 255UL, 6UL, 255UL);
                        uint8_t l_363[2];
                        VECTOR(uint8_t, 2) l_364 = (VECTOR(uint8_t, 2))(0x0FL, 0x3EL);
                        int64_t l_365[5];
                        uint32_t l_366 = 0x52732D65L;
                        int64_t l_367 = 0L;
                        uint8_t l_368[4];
                        uint64_t l_369 = 0UL;
                        int16_t l_370 = 1L;
                        uint16_t l_371 = 0UL;
                        uint32_t l_372 = 0xB1D56724L;
                        uint64_t l_373 = 1UL;
                        uint32_t l_374 = 0xC7AB59A8L;
                        int8_t l_375 = (-3L);
                        uint32_t l_376 = 1UL;
                        int8_t l_377 = (-6L);
                        int32_t l_378 = 0x158DC6ACL;
                        VECTOR(int64_t, 8) l_379 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        VECTOR(int64_t, 2) l_380 = (VECTOR(int64_t, 2))(1L, 0x6F5E5B8AEF16101AL);
                        int16_t l_381 = (-10L);
                        VECTOR(int64_t, 4) l_382 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x470D3573AB670D9BL), 0x470D3573AB670D9BL);
                        int32_t l_383[6] = {0x37E570BAL,0x37E570BAL,0x37E570BAL,0x37E570BAL,0x37E570BAL,0x37E570BAL};
                        int8_t l_384 = 0x18L;
                        VECTOR(int64_t, 2) l_385 = (VECTOR(int64_t, 2))(4L, (-1L));
                        VECTOR(uint16_t, 8) l_386 = (VECTOR(uint16_t, 8))(0xAD81L, (VECTOR(uint16_t, 4))(0xAD81L, (VECTOR(uint16_t, 2))(0xAD81L, 0xD649L), 0xD649L), 0xD649L, 0xAD81L, 0xD649L);
                        VECTOR(int32_t, 8) l_387 = (VECTOR(int32_t, 8))(0x32FC604DL, (VECTOR(int32_t, 4))(0x32FC604DL, (VECTOR(int32_t, 2))(0x32FC604DL, 0x409C723AL), 0x409C723AL), 0x409C723AL, 0x32FC604DL, 0x409C723AL);
                        uint16_t l_388 = 0UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_363[i] = 0x06L;
                        for (i = 0; i < 5; i++)
                            l_365[i] = 0x7322D6B104812903L;
                        for (i = 0; i < 4; i++)
                            l_368[i] = 0xA3L;
                        l_348 &= (l_347 = l_346);
                        l_373 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_349.sad54)), ((VECTOR(int32_t, 2))(l_350.wx)), 0L, (-6L))), ((VECTOR(int32_t, 4))(l_351.xxyy)).zzwxyxzy, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_352.xx)).yyxxxyxy)))))))))).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x531CD4FBL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_353.s4300065523115077)).sbc01)), 0x46A9D3CAL, (-8L), 1L, 0x630AB479L)), (int32_t)l_354.s1))).s42, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(0x7836C7C1L, (-10L))).xyyxxxyxxyxyyxyx, ((VECTOR(int32_t, 4))(l_355.sd6f0)).zyzwzzyyxyzywywz))).lo, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x117BE953L, 0x50D7EB7AL)).yyxx)).wyxzwwxxzxwyxxwy)).lo, (int32_t)(l_350.z = ((l_108.s6 = (((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_356.xyxx)))).odd, ((VECTOR(uint8_t, 16))((l_321 = 0x7BL), ((VECTOR(uint8_t, 2))(l_357.xw)), l_358, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0xE0L, 1UL, 0x65L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_359.yx)).yyyy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x15L)).xyyxxxyxyxxxyxyx)).sef0e))))), 0UL)))), 0x33L, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x92L, 1UL)))))), ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_360.xyyywyyy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0x0DL, 248UL, 0x4BL, ((VECTOR(uint8_t, 8))(l_361.s05744353)), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(l_362.sdd107b1b)).s1157317043363422, (uint8_t)l_363[0]))).even, ((VECTOR(uint8_t, 2))(l_364.yx)).xyxxxxyy))).odd, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))((l_325 &= l_365[3]), ((l_366 , l_367) , l_368[3]), 0x52L, (-1L))).zxwyyxyx, ((VECTOR(int8_t, 8))(0x04L))))).lo)).zxzwzyxywxxyxzxw))), (uint8_t)l_369, (uint8_t)l_370))).s9c71, ((VECTOR(uint8_t, 4))(0x96L))))), 1UL, 250UL, 0x9AL)).odd)).odd, ((VECTOR(uint8_t, 2))(2UL))))), 252UL, 5UL, 255UL)).s1daa)).y, 0x90L, ((VECTOR(uint8_t, 2))(0xEDL)), l_371, 255UL, 0xB2L, 255UL)))), ((VECTOR(uint8_t, 16))(0x36L))))).se8))), 254UL)).s52))).odd , (-10L))) , l_372)))))))).lo)).lo))), 0x56A814C9L)).wyzzwzww)).s21)).yyxy)).yzyxyxww)).s1244744702561673)).s7bcd))), ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))(0L))))))).w;
                        l_352.x = (-5L);
                        l_350.z ^= (((l_325 = l_374) , ((l_375 , (l_378 &= (l_377 = l_376))) , ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(0x29B5EA594716C15AL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_379.s15)))))), 0L)).wxxzxywzzwyyxwyx, ((VECTOR(int64_t, 2))(0x02CCF61E04BBAE1BL, 0x5F5487C410F8ABEDL)).xxyyyyxxyyyyxyyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_380.yx)).xyxy, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(0x3F02F0CA726A1D8CL, l_381, 0x2FD4719B1546D849L, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(0x4D2FAF113294E3F7L, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_382.zwzy)), (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(1UL, 0UL)))).lo , l_383[1]), 0x6C8AD7AD736C492DL, l_384, ((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 4))(l_385.yxxy)).zxxyxwywzxwwyxyx, (int64_t)l_386.s1, (int64_t)(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_387.s17)))), (-1L), 0x3662DB05L)))).x , l_388)))).sa, 0x34E22B8D7A3DE2DDL, 1L, ((VECTOR(int64_t, 4))(0L)), 0x035F8C7000F0D6B5L, 0x4D8964587CBE4CF1L)).sf, ((VECTOR(int64_t, 2))(0x574346C8994D7A9FL)), ((VECTOR(int64_t, 2))(0x4DDD9A3E2C44E361L)), 0L, 0x21785523E72AA353L)), ((VECTOR(int64_t, 8))((-4L)))))).s13, ((VECTOR(int64_t, 2))(0x550A5EE16B43315FL))))), 1L, 2L, ((VECTOR(int64_t, 8))(7L)), 0L)), ((VECTOR(int64_t, 16))(1L))))).scb, ((VECTOR(int64_t, 2))(3L))))).yyyx, ((VECTOR(int64_t, 4))(0L))))).zxyzzzxzxxzwxxzy))))).se)) , 9L);
                    }
                    l_320.s5 &= (l_324.s7 = l_389);
                    l_314[4] = l_390[2][0];
                }
                l_288.x = (FAKE_DIVERGE(p_1095->global_0_offset, get_global_id(0), 10) , ((l_391 , (((VECTOR(uint64_t, 16))(0x6DF1ECDCD1B203E0L, l_392, 7UL, ((VECTOR(uint64_t, 2))(0xA67DD07D604880C1L, 1UL)).lo, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_393.xwyy)).zxzwwwwy)).s17, ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(l_394.see2d)).wzyyyywwywyywzzw, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_395.wzwxxwxxwzywywyz)))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x417F483CL, 5UL)).yyyxxyyx)).s4462064704116161))).scb))), 0x7511771DEC7F297EL, 0x18034684DBDAA540L)).wzyyxyzwyyxwwwxw, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_396.sc564)), 0x9D1BB1C3D6AC9870L, 9UL, 0xB0A91AB7716BC840L, 0x9CB1E7FDA4AFFD4BL)).s17)), 0x1F4F8730F27EBF08L, 0xA2843D53A20C3BD0L)).wwwxxxxyywwwxwyz))).se1)), ((VECTOR(uint64_t, 8))(l_397.s669b91ef)).s26, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(l_398.s2351525571553512)).s29, ((VECTOR(uint64_t, 2))(l_399.s00)))))))), l_400, 7UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0UL, 0xB8828CA612847701L, 18446744073709551615UL, 0xAB867F8A7A63DD0CL, ((--l_110) , l_403), (l_107.x = (l_404 , ((l_104--) , (l_110 = ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 4))(l_407.s56b9)).zzzxyxxz, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0xA8A2FFE7L, 9UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_408.s03e503e0)).lo)))), 5UL, 1UL)).s4101653014505175)).even, (uint32_t)(l_126 = 7UL)))).odd)))).even)), 4294967294UL, ((VECTOR(uint32_t, 2))(l_409.yy)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_410.s2044)).odd)), 0x8DBF9AE2L)).s0130047116610124)).s5e)).xyxxyxxy))).s1)))), 0UL, 0UL)).s46)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_411.s24bdf4553e4a9cc8)))).sa5)), 0x44A66734A3A90594L, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))(18446744073709551614UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_412.s62173421)))).s7403255663234632)).s8560, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(l_413.s6360344647752701)), ((VECTOR(uint64_t, 2))(18446744073709551612UL, 0x278321D2B176795BL)).yyxxyyxyyxxyyyyx))).sa92f))), 0x9889D1834C7ABA18L, ((VECTOR(uint64_t, 2))(0xFD74DED30F8E91E3L, 0xD4D81558201ED892L)), 0x6F5FACCEA86EA4B9L)), (((l_111 = l_414[1][2]) , l_415) , l_416), ((VECTOR(uint64_t, 2))(0x5BA0836B2D6603E8L)), 0xC19BD374F12713DDL, ((VECTOR(uint64_t, 2))(0UL)), 0x2CBAF9A9E991210AL)).s7a, ((VECTOR(uint64_t, 2))(0x829819D59C899F44L)), ((VECTOR(uint64_t, 2))(0x677DC1A4F2CCB98AL))))), 0x1541A2144C835FBCL)).s1 , 0L)) , 0x52E276DAL));
                if (l_417[1])
                { /* block id: 187 */
                    int32_t l_418 = 0x7E7E0AF7L;
                    uint64_t l_419 = 0x38C9E105008FC8D1L;
                    int32_t l_420 = 0x00DB3CBEL;
                    int8_t l_421 = 0L;
                    uint16_t l_422 = 0xCFD7L;
                    int32_t l_426 = 1L;
                    int32_t *l_425 = &l_426;
                    int32_t *l_427[2];
                    int8_t l_428 = 0x58L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_427[i] = &l_426;
                    l_314[0] = ((l_418 , l_419) , ((l_422--) , (void*)0));
                    l_427[0] = l_425;
                    l_428 |= 0x39BA61CDL;
                    for (l_426 = (-20); (l_426 >= 3); l_426 = safe_add_func_uint16_t_u_u(l_426, 6))
                    { /* block id: 194 */
                        int16_t l_431 = 0x4F30L;
                        uint32_t l_432[7][4][1] = {{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}},{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}}};
                        uint16_t l_435 = 0xAA8BL;
                        int32_t l_436 = 0L;
                        VECTOR(int32_t, 8) l_437 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x260B8B3FL), 0x260B8B3FL), 0x260B8B3FL, 3L, 0x260B8B3FL);
                        uint32_t l_438 = 1UL;
                        uint32_t l_439 = 0xA6A89FD6L;
                        int i, j, k;
                        l_432[4][1][0]--;
                        l_436 ^= l_435;
                        l_438 = l_437.s4;
                        l_436 &= l_439;
                    }
                }
                else
                { /* block id: 200 */
                    int32_t l_440 = 6L;
                    uint8_t l_441 = 246UL;
                    int32_t *l_444 = (void*)0;
                    l_441--;
                    l_314[4] = l_444;
                }
            }
        }
        unsigned int result = 0;
        int l_96_i0, l_96_i1;
        for (l_96_i0 = 0; l_96_i0 < 6; l_96_i0++) {
            for (l_96_i1 = 0; l_96_i1 < 1; l_96_i1++) {
                result += l_96[l_96_i0][l_96_i1];
            }
        }
        result += l_97;
        result += l_98;
        result += l_101;
        result += l_102;
        result += l_103;
        result += l_104;
        result += l_107.y;
        result += l_107.x;
        result += l_108.sf;
        result += l_108.se;
        result += l_108.sd;
        result += l_108.sc;
        result += l_108.sb;
        result += l_108.sa;
        result += l_108.s9;
        result += l_108.s8;
        result += l_108.s7;
        result += l_108.s6;
        result += l_108.s5;
        result += l_108.s4;
        result += l_108.s3;
        result += l_108.s2;
        result += l_108.s1;
        result += l_108.s0;
        result += l_109;
        result += l_110;
        result += l_111;
        result += l_112;
        result += l_113.sf;
        result += l_113.se;
        result += l_113.sd;
        result += l_113.sc;
        result += l_113.sb;
        result += l_113.sa;
        result += l_113.s9;
        result += l_113.s8;
        result += l_113.s7;
        result += l_113.s6;
        result += l_113.s5;
        result += l_113.s4;
        result += l_113.s3;
        result += l_113.s2;
        result += l_113.s1;
        result += l_113.s0;
        result += l_114;
        result += l_115;
        int l_116_i0;
        for (l_116_i0 = 0; l_116_i0 < 5; l_116_i0++) {
            result += l_116[l_116_i0];
        }
        result += l_117.w;
        result += l_117.z;
        result += l_117.y;
        result += l_117.x;
        result += l_118.w;
        result += l_118.z;
        result += l_118.y;
        result += l_118.x;
        result += l_119.w;
        result += l_119.z;
        result += l_119.y;
        result += l_119.x;
        result += l_120.y;
        result += l_120.x;
        result += l_121.w;
        result += l_121.z;
        result += l_121.y;
        result += l_121.x;
        result += l_122.s7;
        result += l_122.s6;
        result += l_122.s5;
        result += l_122.s4;
        result += l_122.s3;
        result += l_122.s2;
        result += l_122.s1;
        result += l_122.s0;
        result += l_123;
        int l_124_i0, l_124_i1;
        for (l_124_i0 = 0; l_124_i0 < 1; l_124_i0++) {
            for (l_124_i1 = 0; l_124_i1 < 4; l_124_i1++) {
                result += l_124[l_124_i0][l_124_i1];
            }
        }
        result += l_125;
        result += l_126;
        result += l_127;
        result += l_128;
        atomic_add(&p_1095->l_special_values[10], result);
    }
    else
    { /* block id: 206 */
        (1 + 1);
    }
    return l_445;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_comm_values[i] = 1;
    struct S0 c_1096;
    struct S0* p_1095 = &c_1096;
    struct S0 c_1097 = {
        0x14643CDFL, // p_1095->g_2
        (VECTOR(int16_t, 2))(4L, 0x5F84L), // p_1095->g_19
        (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x5BL), 0x5BL), // p_1095->g_25
        {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}}, // p_1095->g_43
        0x74DCL, // p_1095->g_64
        (void*)0, // p_1095->g_83
        0x39C4L, // p_1095->g_85
        5UL, // p_1095->g_92
        0L, // p_1095->g_94
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2BD5L), 0x2BD5L), 0x2BD5L, 0L, 0x2BD5L), // p_1095->g_454
        {{(-1L)},{(-1L)},{(-1L)}}, // p_1095->g_458
        {{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL,250UL,250UL,250UL,250UL}}, // p_1095->g_483
        4294967292UL, // p_1095->g_487
        0x30E151FD4A638543L, // p_1095->g_489
        {{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}},{{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL},{0x1484L,0x6F97L,65535UL,65532UL}}}, // p_1095->g_505
        &p_1095->g_2, // p_1095->g_507
        &p_1095->g_507, // p_1095->g_506
        &p_1095->g_507, // p_1095->g_521
        (void*)0, // p_1095->g_522
        (VECTOR(int64_t, 16))(0x536BBB234A7DCD59L, (VECTOR(int64_t, 4))(0x536BBB234A7DCD59L, (VECTOR(int64_t, 2))(0x536BBB234A7DCD59L, 0x37852D5F306D92D3L), 0x37852D5F306D92D3L), 0x37852D5F306D92D3L, 0x536BBB234A7DCD59L, 0x37852D5F306D92D3L, (VECTOR(int64_t, 2))(0x536BBB234A7DCD59L, 0x37852D5F306D92D3L), (VECTOR(int64_t, 2))(0x536BBB234A7DCD59L, 0x37852D5F306D92D3L), 0x536BBB234A7DCD59L, 0x37852D5F306D92D3L, 0x536BBB234A7DCD59L, 0x37852D5F306D92D3L), // p_1095->g_530
        (VECTOR(uint16_t, 2))(0xD1C0L, 1UL), // p_1095->g_544
        (-7L), // p_1095->g_549
        &p_1095->g_64, // p_1095->g_558
        {&p_1095->g_558,&p_1095->g_558,&p_1095->g_558,&p_1095->g_558,&p_1095->g_558,&p_1095->g_558,&p_1095->g_558}, // p_1095->g_557
        (void*)0, // p_1095->g_560
        1L, // p_1095->g_572
        5UL, // p_1095->g_573
        0x7CEB465EL, // p_1095->g_582
        {0xE0520B772B298508L}, // p_1095->g_584
        0x0032L, // p_1095->g_599
        (VECTOR(int16_t, 4))(0x5B93L, (VECTOR(int16_t, 2))(0x5B93L, (-1L)), (-1L)), // p_1095->g_604
        0x99BC16A3L, // p_1095->g_619
        &p_1095->g_507, // p_1095->g_626
        &p_1095->g_582, // p_1095->g_630
        &p_1095->g_507, // p_1095->g_638
        &p_1095->g_582, // p_1095->g_639
        (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x27L), 0x27L), 0x27L, (-8L), 0x27L), // p_1095->g_653
        18446744073709551615UL, // p_1095->g_655
        (VECTOR(uint32_t, 8))(0x78B6CCB8L, (VECTOR(uint32_t, 4))(0x78B6CCB8L, (VECTOR(uint32_t, 2))(0x78B6CCB8L, 1UL), 1UL), 1UL, 0x78B6CCB8L, 1UL), // p_1095->g_682
        (void*)0, // p_1095->g_685
        1L, // p_1095->g_708
        65529UL, // p_1095->g_711
        0x683D1F45L, // p_1095->g_715
        (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 3L), 3L), // p_1095->g_720
        (VECTOR(int64_t, 16))(0x02FBD59CBC7B94CDL, (VECTOR(int64_t, 4))(0x02FBD59CBC7B94CDL, (VECTOR(int64_t, 2))(0x02FBD59CBC7B94CDL, 0L), 0L), 0L, 0x02FBD59CBC7B94CDL, 0L, (VECTOR(int64_t, 2))(0x02FBD59CBC7B94CDL, 0L), (VECTOR(int64_t, 2))(0x02FBD59CBC7B94CDL, 0L), 0x02FBD59CBC7B94CDL, 0L, 0x02FBD59CBC7B94CDL, 0L), // p_1095->g_721
        255UL, // p_1095->g_745
        &p_1095->g_745, // p_1095->g_744
        &p_1095->g_744, // p_1095->g_743
        (VECTOR(int16_t, 8))(0x22DEL, (VECTOR(int16_t, 4))(0x22DEL, (VECTOR(int16_t, 2))(0x22DEL, 0x1475L), 0x1475L), 0x1475L, 0x22DEL, 0x1475L), // p_1095->g_746
        {(void*)0}, // p_1095->g_767
        &p_1095->g_767[0], // p_1095->g_766
        {{&p_1095->g_766,&p_1095->g_766,&p_1095->g_766,&p_1095->g_766,&p_1095->g_766,&p_1095->g_766}}, // p_1095->g_765
        0x193A3D21L, // p_1095->g_768
        (VECTOR(uint32_t, 2))(0x61BB97C3L, 4294967291UL), // p_1095->g_770
        &p_1095->g_507, // p_1095->g_775
        (VECTOR(uint32_t, 2))(0UL, 0xA913EC71L), // p_1095->g_789
        {{{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L}},{{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L},{0x36L,0x13L,0x6DL,1L,0x13L}}}, // p_1095->g_795
        0x732BF405L, // p_1095->g_807
        &p_1095->g_83, // p_1095->g_819
        {{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819},{&p_1095->g_819,&p_1095->g_819,&p_1095->g_819}}, // p_1095->g_818
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1095->g_837
        {{{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507},{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507},{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507}},{{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507},{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507},{&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507,&p_1095->g_507}}}, // p_1095->g_838
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), // p_1095->g_850
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3C37L), 0x3C37L), 0x3C37L, 0L, 0x3C37L), // p_1095->g_883
        (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L)), // p_1095->g_884
        (VECTOR(int16_t, 4))(0x5327L, (VECTOR(int16_t, 2))(0x5327L, (-2L)), (-2L)), // p_1095->g_886
        (VECTOR(uint8_t, 2))(1UL, 0x00L), // p_1095->g_894
        (VECTOR(uint8_t, 4))(0x5AL, (VECTOR(uint8_t, 2))(0x5AL, 0x3DL), 0x3DL), // p_1095->g_917
        (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 0xEDL), 0xEDL), // p_1095->g_923
        (VECTOR(uint16_t, 16))(0xA72EL, (VECTOR(uint16_t, 4))(0xA72EL, (VECTOR(uint16_t, 2))(0xA72EL, 0xDFE0L), 0xDFE0L), 0xDFE0L, 0xA72EL, 0xDFE0L, (VECTOR(uint16_t, 2))(0xA72EL, 0xDFE0L), (VECTOR(uint16_t, 2))(0xA72EL, 0xDFE0L), 0xA72EL, 0xDFE0L, 0xA72EL, 0xDFE0L), // p_1095->g_929
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967287UL), 4294967287UL), 4294967287UL, 4294967295UL, 4294967287UL), // p_1095->g_938
        (VECTOR(uint64_t, 16))(0xD4670B3E1F635B52L, (VECTOR(uint64_t, 4))(0xD4670B3E1F635B52L, (VECTOR(uint64_t, 2))(0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L), 0x9285DFBB13A2D032L), 0x9285DFBB13A2D032L, 0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L, (VECTOR(uint64_t, 2))(0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L), (VECTOR(uint64_t, 2))(0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L), 0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L, 0xD4670B3E1F635B52L, 0x9285DFBB13A2D032L), // p_1095->g_961
        (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x55L), 0x55L), 0x55L, 3UL, 0x55L), // p_1095->g_1000
        (VECTOR(int32_t, 16))(0x560094C4L, (VECTOR(int32_t, 4))(0x560094C4L, (VECTOR(int32_t, 2))(0x560094C4L, 2L), 2L), 2L, 0x560094C4L, 2L, (VECTOR(int32_t, 2))(0x560094C4L, 2L), (VECTOR(int32_t, 2))(0x560094C4L, 2L), 0x560094C4L, 2L, 0x560094C4L, 2L), // p_1095->g_1019
        (VECTOR(int8_t, 2))((-3L), (-3L)), // p_1095->g_1035
        0xDEE456ACL, // p_1095->g_1049
        0x50F00A11L, // p_1095->g_1094
        0, // p_1095->v_collective
        sequence_input[get_global_id(0)], // p_1095->global_0_offset
        sequence_input[get_global_id(1)], // p_1095->global_1_offset
        sequence_input[get_global_id(2)], // p_1095->global_2_offset
        sequence_input[get_local_id(0)], // p_1095->local_0_offset
        sequence_input[get_local_id(1)], // p_1095->local_1_offset
        sequence_input[get_local_id(2)], // p_1095->local_2_offset
        sequence_input[get_group_id(0)], // p_1095->group_0_offset
        sequence_input[get_group_id(1)], // p_1095->group_1_offset
        sequence_input[get_group_id(2)], // p_1095->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[0][get_linear_local_id()])), // p_1095->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1096 = c_1097;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1095);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1095->g_2, "p_1095->g_2", print_hash_value);
    transparent_crc(p_1095->g_19.x, "p_1095->g_19.x", print_hash_value);
    transparent_crc(p_1095->g_19.y, "p_1095->g_19.y", print_hash_value);
    transparent_crc(p_1095->g_25.x, "p_1095->g_25.x", print_hash_value);
    transparent_crc(p_1095->g_25.y, "p_1095->g_25.y", print_hash_value);
    transparent_crc(p_1095->g_25.z, "p_1095->g_25.z", print_hash_value);
    transparent_crc(p_1095->g_25.w, "p_1095->g_25.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1095->g_43[i][j][k], "p_1095->g_43[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1095->g_64, "p_1095->g_64", print_hash_value);
    transparent_crc(p_1095->g_85, "p_1095->g_85", print_hash_value);
    transparent_crc(p_1095->g_92, "p_1095->g_92", print_hash_value);
    transparent_crc(p_1095->g_94, "p_1095->g_94", print_hash_value);
    transparent_crc(p_1095->g_454.s0, "p_1095->g_454.s0", print_hash_value);
    transparent_crc(p_1095->g_454.s1, "p_1095->g_454.s1", print_hash_value);
    transparent_crc(p_1095->g_454.s2, "p_1095->g_454.s2", print_hash_value);
    transparent_crc(p_1095->g_454.s3, "p_1095->g_454.s3", print_hash_value);
    transparent_crc(p_1095->g_454.s4, "p_1095->g_454.s4", print_hash_value);
    transparent_crc(p_1095->g_454.s5, "p_1095->g_454.s5", print_hash_value);
    transparent_crc(p_1095->g_454.s6, "p_1095->g_454.s6", print_hash_value);
    transparent_crc(p_1095->g_454.s7, "p_1095->g_454.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1095->g_458[i][j], "p_1095->g_458[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1095->g_483[i][j], "p_1095->g_483[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1095->g_487, "p_1095->g_487", print_hash_value);
    transparent_crc(p_1095->g_489, "p_1095->g_489", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1095->g_505[i][j][k], "p_1095->g_505[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1095->g_530.s0, "p_1095->g_530.s0", print_hash_value);
    transparent_crc(p_1095->g_530.s1, "p_1095->g_530.s1", print_hash_value);
    transparent_crc(p_1095->g_530.s2, "p_1095->g_530.s2", print_hash_value);
    transparent_crc(p_1095->g_530.s3, "p_1095->g_530.s3", print_hash_value);
    transparent_crc(p_1095->g_530.s4, "p_1095->g_530.s4", print_hash_value);
    transparent_crc(p_1095->g_530.s5, "p_1095->g_530.s5", print_hash_value);
    transparent_crc(p_1095->g_530.s6, "p_1095->g_530.s6", print_hash_value);
    transparent_crc(p_1095->g_530.s7, "p_1095->g_530.s7", print_hash_value);
    transparent_crc(p_1095->g_530.s8, "p_1095->g_530.s8", print_hash_value);
    transparent_crc(p_1095->g_530.s9, "p_1095->g_530.s9", print_hash_value);
    transparent_crc(p_1095->g_530.sa, "p_1095->g_530.sa", print_hash_value);
    transparent_crc(p_1095->g_530.sb, "p_1095->g_530.sb", print_hash_value);
    transparent_crc(p_1095->g_530.sc, "p_1095->g_530.sc", print_hash_value);
    transparent_crc(p_1095->g_530.sd, "p_1095->g_530.sd", print_hash_value);
    transparent_crc(p_1095->g_530.se, "p_1095->g_530.se", print_hash_value);
    transparent_crc(p_1095->g_530.sf, "p_1095->g_530.sf", print_hash_value);
    transparent_crc(p_1095->g_544.x, "p_1095->g_544.x", print_hash_value);
    transparent_crc(p_1095->g_544.y, "p_1095->g_544.y", print_hash_value);
    transparent_crc(p_1095->g_549, "p_1095->g_549", print_hash_value);
    transparent_crc(p_1095->g_572, "p_1095->g_572", print_hash_value);
    transparent_crc(p_1095->g_573, "p_1095->g_573", print_hash_value);
    transparent_crc(p_1095->g_582, "p_1095->g_582", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1095->g_584[i], "p_1095->g_584[i]", print_hash_value);

    }
    transparent_crc(p_1095->g_599, "p_1095->g_599", print_hash_value);
    transparent_crc(p_1095->g_604.x, "p_1095->g_604.x", print_hash_value);
    transparent_crc(p_1095->g_604.y, "p_1095->g_604.y", print_hash_value);
    transparent_crc(p_1095->g_604.z, "p_1095->g_604.z", print_hash_value);
    transparent_crc(p_1095->g_604.w, "p_1095->g_604.w", print_hash_value);
    transparent_crc(p_1095->g_619, "p_1095->g_619", print_hash_value);
    transparent_crc(p_1095->g_653.s0, "p_1095->g_653.s0", print_hash_value);
    transparent_crc(p_1095->g_653.s1, "p_1095->g_653.s1", print_hash_value);
    transparent_crc(p_1095->g_653.s2, "p_1095->g_653.s2", print_hash_value);
    transparent_crc(p_1095->g_653.s3, "p_1095->g_653.s3", print_hash_value);
    transparent_crc(p_1095->g_653.s4, "p_1095->g_653.s4", print_hash_value);
    transparent_crc(p_1095->g_653.s5, "p_1095->g_653.s5", print_hash_value);
    transparent_crc(p_1095->g_653.s6, "p_1095->g_653.s6", print_hash_value);
    transparent_crc(p_1095->g_653.s7, "p_1095->g_653.s7", print_hash_value);
    transparent_crc(p_1095->g_655, "p_1095->g_655", print_hash_value);
    transparent_crc(p_1095->g_682.s0, "p_1095->g_682.s0", print_hash_value);
    transparent_crc(p_1095->g_682.s1, "p_1095->g_682.s1", print_hash_value);
    transparent_crc(p_1095->g_682.s2, "p_1095->g_682.s2", print_hash_value);
    transparent_crc(p_1095->g_682.s3, "p_1095->g_682.s3", print_hash_value);
    transparent_crc(p_1095->g_682.s4, "p_1095->g_682.s4", print_hash_value);
    transparent_crc(p_1095->g_682.s5, "p_1095->g_682.s5", print_hash_value);
    transparent_crc(p_1095->g_682.s6, "p_1095->g_682.s6", print_hash_value);
    transparent_crc(p_1095->g_682.s7, "p_1095->g_682.s7", print_hash_value);
    transparent_crc(p_1095->g_708, "p_1095->g_708", print_hash_value);
    transparent_crc(p_1095->g_711, "p_1095->g_711", print_hash_value);
    transparent_crc(p_1095->g_715, "p_1095->g_715", print_hash_value);
    transparent_crc(p_1095->g_720.x, "p_1095->g_720.x", print_hash_value);
    transparent_crc(p_1095->g_720.y, "p_1095->g_720.y", print_hash_value);
    transparent_crc(p_1095->g_720.z, "p_1095->g_720.z", print_hash_value);
    transparent_crc(p_1095->g_720.w, "p_1095->g_720.w", print_hash_value);
    transparent_crc(p_1095->g_721.s0, "p_1095->g_721.s0", print_hash_value);
    transparent_crc(p_1095->g_721.s1, "p_1095->g_721.s1", print_hash_value);
    transparent_crc(p_1095->g_721.s2, "p_1095->g_721.s2", print_hash_value);
    transparent_crc(p_1095->g_721.s3, "p_1095->g_721.s3", print_hash_value);
    transparent_crc(p_1095->g_721.s4, "p_1095->g_721.s4", print_hash_value);
    transparent_crc(p_1095->g_721.s5, "p_1095->g_721.s5", print_hash_value);
    transparent_crc(p_1095->g_721.s6, "p_1095->g_721.s6", print_hash_value);
    transparent_crc(p_1095->g_721.s7, "p_1095->g_721.s7", print_hash_value);
    transparent_crc(p_1095->g_721.s8, "p_1095->g_721.s8", print_hash_value);
    transparent_crc(p_1095->g_721.s9, "p_1095->g_721.s9", print_hash_value);
    transparent_crc(p_1095->g_721.sa, "p_1095->g_721.sa", print_hash_value);
    transparent_crc(p_1095->g_721.sb, "p_1095->g_721.sb", print_hash_value);
    transparent_crc(p_1095->g_721.sc, "p_1095->g_721.sc", print_hash_value);
    transparent_crc(p_1095->g_721.sd, "p_1095->g_721.sd", print_hash_value);
    transparent_crc(p_1095->g_721.se, "p_1095->g_721.se", print_hash_value);
    transparent_crc(p_1095->g_721.sf, "p_1095->g_721.sf", print_hash_value);
    transparent_crc(p_1095->g_745, "p_1095->g_745", print_hash_value);
    transparent_crc(p_1095->g_746.s0, "p_1095->g_746.s0", print_hash_value);
    transparent_crc(p_1095->g_746.s1, "p_1095->g_746.s1", print_hash_value);
    transparent_crc(p_1095->g_746.s2, "p_1095->g_746.s2", print_hash_value);
    transparent_crc(p_1095->g_746.s3, "p_1095->g_746.s3", print_hash_value);
    transparent_crc(p_1095->g_746.s4, "p_1095->g_746.s4", print_hash_value);
    transparent_crc(p_1095->g_746.s5, "p_1095->g_746.s5", print_hash_value);
    transparent_crc(p_1095->g_746.s6, "p_1095->g_746.s6", print_hash_value);
    transparent_crc(p_1095->g_746.s7, "p_1095->g_746.s7", print_hash_value);
    transparent_crc(p_1095->g_768, "p_1095->g_768", print_hash_value);
    transparent_crc(p_1095->g_770.x, "p_1095->g_770.x", print_hash_value);
    transparent_crc(p_1095->g_770.y, "p_1095->g_770.y", print_hash_value);
    transparent_crc(p_1095->g_789.x, "p_1095->g_789.x", print_hash_value);
    transparent_crc(p_1095->g_789.y, "p_1095->g_789.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1095->g_795[i][j][k], "p_1095->g_795[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1095->g_807, "p_1095->g_807", print_hash_value);
    transparent_crc(p_1095->g_850.x, "p_1095->g_850.x", print_hash_value);
    transparent_crc(p_1095->g_850.y, "p_1095->g_850.y", print_hash_value);
    transparent_crc(p_1095->g_850.z, "p_1095->g_850.z", print_hash_value);
    transparent_crc(p_1095->g_850.w, "p_1095->g_850.w", print_hash_value);
    transparent_crc(p_1095->g_883.s0, "p_1095->g_883.s0", print_hash_value);
    transparent_crc(p_1095->g_883.s1, "p_1095->g_883.s1", print_hash_value);
    transparent_crc(p_1095->g_883.s2, "p_1095->g_883.s2", print_hash_value);
    transparent_crc(p_1095->g_883.s3, "p_1095->g_883.s3", print_hash_value);
    transparent_crc(p_1095->g_883.s4, "p_1095->g_883.s4", print_hash_value);
    transparent_crc(p_1095->g_883.s5, "p_1095->g_883.s5", print_hash_value);
    transparent_crc(p_1095->g_883.s6, "p_1095->g_883.s6", print_hash_value);
    transparent_crc(p_1095->g_883.s7, "p_1095->g_883.s7", print_hash_value);
    transparent_crc(p_1095->g_884.s0, "p_1095->g_884.s0", print_hash_value);
    transparent_crc(p_1095->g_884.s1, "p_1095->g_884.s1", print_hash_value);
    transparent_crc(p_1095->g_884.s2, "p_1095->g_884.s2", print_hash_value);
    transparent_crc(p_1095->g_884.s3, "p_1095->g_884.s3", print_hash_value);
    transparent_crc(p_1095->g_884.s4, "p_1095->g_884.s4", print_hash_value);
    transparent_crc(p_1095->g_884.s5, "p_1095->g_884.s5", print_hash_value);
    transparent_crc(p_1095->g_884.s6, "p_1095->g_884.s6", print_hash_value);
    transparent_crc(p_1095->g_884.s7, "p_1095->g_884.s7", print_hash_value);
    transparent_crc(p_1095->g_886.x, "p_1095->g_886.x", print_hash_value);
    transparent_crc(p_1095->g_886.y, "p_1095->g_886.y", print_hash_value);
    transparent_crc(p_1095->g_886.z, "p_1095->g_886.z", print_hash_value);
    transparent_crc(p_1095->g_886.w, "p_1095->g_886.w", print_hash_value);
    transparent_crc(p_1095->g_894.x, "p_1095->g_894.x", print_hash_value);
    transparent_crc(p_1095->g_894.y, "p_1095->g_894.y", print_hash_value);
    transparent_crc(p_1095->g_917.x, "p_1095->g_917.x", print_hash_value);
    transparent_crc(p_1095->g_917.y, "p_1095->g_917.y", print_hash_value);
    transparent_crc(p_1095->g_917.z, "p_1095->g_917.z", print_hash_value);
    transparent_crc(p_1095->g_917.w, "p_1095->g_917.w", print_hash_value);
    transparent_crc(p_1095->g_923.x, "p_1095->g_923.x", print_hash_value);
    transparent_crc(p_1095->g_923.y, "p_1095->g_923.y", print_hash_value);
    transparent_crc(p_1095->g_923.z, "p_1095->g_923.z", print_hash_value);
    transparent_crc(p_1095->g_923.w, "p_1095->g_923.w", print_hash_value);
    transparent_crc(p_1095->g_929.s0, "p_1095->g_929.s0", print_hash_value);
    transparent_crc(p_1095->g_929.s1, "p_1095->g_929.s1", print_hash_value);
    transparent_crc(p_1095->g_929.s2, "p_1095->g_929.s2", print_hash_value);
    transparent_crc(p_1095->g_929.s3, "p_1095->g_929.s3", print_hash_value);
    transparent_crc(p_1095->g_929.s4, "p_1095->g_929.s4", print_hash_value);
    transparent_crc(p_1095->g_929.s5, "p_1095->g_929.s5", print_hash_value);
    transparent_crc(p_1095->g_929.s6, "p_1095->g_929.s6", print_hash_value);
    transparent_crc(p_1095->g_929.s7, "p_1095->g_929.s7", print_hash_value);
    transparent_crc(p_1095->g_929.s8, "p_1095->g_929.s8", print_hash_value);
    transparent_crc(p_1095->g_929.s9, "p_1095->g_929.s9", print_hash_value);
    transparent_crc(p_1095->g_929.sa, "p_1095->g_929.sa", print_hash_value);
    transparent_crc(p_1095->g_929.sb, "p_1095->g_929.sb", print_hash_value);
    transparent_crc(p_1095->g_929.sc, "p_1095->g_929.sc", print_hash_value);
    transparent_crc(p_1095->g_929.sd, "p_1095->g_929.sd", print_hash_value);
    transparent_crc(p_1095->g_929.se, "p_1095->g_929.se", print_hash_value);
    transparent_crc(p_1095->g_929.sf, "p_1095->g_929.sf", print_hash_value);
    transparent_crc(p_1095->g_938.s0, "p_1095->g_938.s0", print_hash_value);
    transparent_crc(p_1095->g_938.s1, "p_1095->g_938.s1", print_hash_value);
    transparent_crc(p_1095->g_938.s2, "p_1095->g_938.s2", print_hash_value);
    transparent_crc(p_1095->g_938.s3, "p_1095->g_938.s3", print_hash_value);
    transparent_crc(p_1095->g_938.s4, "p_1095->g_938.s4", print_hash_value);
    transparent_crc(p_1095->g_938.s5, "p_1095->g_938.s5", print_hash_value);
    transparent_crc(p_1095->g_938.s6, "p_1095->g_938.s6", print_hash_value);
    transparent_crc(p_1095->g_938.s7, "p_1095->g_938.s7", print_hash_value);
    transparent_crc(p_1095->g_961.s0, "p_1095->g_961.s0", print_hash_value);
    transparent_crc(p_1095->g_961.s1, "p_1095->g_961.s1", print_hash_value);
    transparent_crc(p_1095->g_961.s2, "p_1095->g_961.s2", print_hash_value);
    transparent_crc(p_1095->g_961.s3, "p_1095->g_961.s3", print_hash_value);
    transparent_crc(p_1095->g_961.s4, "p_1095->g_961.s4", print_hash_value);
    transparent_crc(p_1095->g_961.s5, "p_1095->g_961.s5", print_hash_value);
    transparent_crc(p_1095->g_961.s6, "p_1095->g_961.s6", print_hash_value);
    transparent_crc(p_1095->g_961.s7, "p_1095->g_961.s7", print_hash_value);
    transparent_crc(p_1095->g_961.s8, "p_1095->g_961.s8", print_hash_value);
    transparent_crc(p_1095->g_961.s9, "p_1095->g_961.s9", print_hash_value);
    transparent_crc(p_1095->g_961.sa, "p_1095->g_961.sa", print_hash_value);
    transparent_crc(p_1095->g_961.sb, "p_1095->g_961.sb", print_hash_value);
    transparent_crc(p_1095->g_961.sc, "p_1095->g_961.sc", print_hash_value);
    transparent_crc(p_1095->g_961.sd, "p_1095->g_961.sd", print_hash_value);
    transparent_crc(p_1095->g_961.se, "p_1095->g_961.se", print_hash_value);
    transparent_crc(p_1095->g_961.sf, "p_1095->g_961.sf", print_hash_value);
    transparent_crc(p_1095->g_1000.s0, "p_1095->g_1000.s0", print_hash_value);
    transparent_crc(p_1095->g_1000.s1, "p_1095->g_1000.s1", print_hash_value);
    transparent_crc(p_1095->g_1000.s2, "p_1095->g_1000.s2", print_hash_value);
    transparent_crc(p_1095->g_1000.s3, "p_1095->g_1000.s3", print_hash_value);
    transparent_crc(p_1095->g_1000.s4, "p_1095->g_1000.s4", print_hash_value);
    transparent_crc(p_1095->g_1000.s5, "p_1095->g_1000.s5", print_hash_value);
    transparent_crc(p_1095->g_1000.s6, "p_1095->g_1000.s6", print_hash_value);
    transparent_crc(p_1095->g_1000.s7, "p_1095->g_1000.s7", print_hash_value);
    transparent_crc(p_1095->g_1019.s0, "p_1095->g_1019.s0", print_hash_value);
    transparent_crc(p_1095->g_1019.s1, "p_1095->g_1019.s1", print_hash_value);
    transparent_crc(p_1095->g_1019.s2, "p_1095->g_1019.s2", print_hash_value);
    transparent_crc(p_1095->g_1019.s3, "p_1095->g_1019.s3", print_hash_value);
    transparent_crc(p_1095->g_1019.s4, "p_1095->g_1019.s4", print_hash_value);
    transparent_crc(p_1095->g_1019.s5, "p_1095->g_1019.s5", print_hash_value);
    transparent_crc(p_1095->g_1019.s6, "p_1095->g_1019.s6", print_hash_value);
    transparent_crc(p_1095->g_1019.s7, "p_1095->g_1019.s7", print_hash_value);
    transparent_crc(p_1095->g_1019.s8, "p_1095->g_1019.s8", print_hash_value);
    transparent_crc(p_1095->g_1019.s9, "p_1095->g_1019.s9", print_hash_value);
    transparent_crc(p_1095->g_1019.sa, "p_1095->g_1019.sa", print_hash_value);
    transparent_crc(p_1095->g_1019.sb, "p_1095->g_1019.sb", print_hash_value);
    transparent_crc(p_1095->g_1019.sc, "p_1095->g_1019.sc", print_hash_value);
    transparent_crc(p_1095->g_1019.sd, "p_1095->g_1019.sd", print_hash_value);
    transparent_crc(p_1095->g_1019.se, "p_1095->g_1019.se", print_hash_value);
    transparent_crc(p_1095->g_1019.sf, "p_1095->g_1019.sf", print_hash_value);
    transparent_crc(p_1095->g_1035.x, "p_1095->g_1035.x", print_hash_value);
    transparent_crc(p_1095->g_1035.y, "p_1095->g_1035.y", print_hash_value);
    transparent_crc(p_1095->g_1049, "p_1095->g_1049", print_hash_value);
    transparent_crc(p_1095->g_1094, "p_1095->g_1094", print_hash_value);
    transparent_crc(p_1095->v_collective, "p_1095->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 87; i++)
            transparent_crc(p_1095->g_special_values[i + 87 * get_linear_group_id()], "p_1095->g_special_values[i + 87 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 87; i++)
            transparent_crc(p_1095->l_special_values[i], "p_1095->l_special_values[i]", print_hash_value);
    transparent_crc(p_1095->l_comm_values[get_linear_local_id()], "p_1095->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1095->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()], "p_1095->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
