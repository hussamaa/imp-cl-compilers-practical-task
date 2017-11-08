// --atomics 34 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,83,2 -l 11,1,1
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

__constant uint32_t permutations[10][11] = {
{10,7,2,5,8,9,0,6,3,4,1}, // permutation 0
{7,0,6,4,8,1,9,3,5,2,10}, // permutation 1
{1,8,4,9,3,6,5,0,2,7,10}, // permutation 2
{2,9,4,0,5,6,10,1,3,8,7}, // permutation 3
{6,8,5,1,4,9,10,0,2,7,3}, // permutation 4
{2,8,1,4,10,3,6,5,9,7,0}, // permutation 5
{1,3,5,7,9,10,2,8,6,4,0}, // permutation 6
{10,8,0,6,2,5,7,3,4,9,1}, // permutation 7
{2,5,10,8,4,7,0,9,1,6,3}, // permutation 8
{4,0,2,8,1,6,3,5,7,10,9} // permutation 9
};

// Seed: 3891547852

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint8_t  f0;
   uint32_t  f1;
};

struct S1 {
    int32_t * volatile g_3[5];
    int32_t *g_6;
    int32_t g_31;
    int32_t *g_30;
    int32_t **g_29;
    uint64_t g_35[5][6];
    uint16_t g_41;
    int32_t g_60;
    int32_t g_77;
    uint64_t g_473;
    volatile VECTOR(int64_t, 16) g_499;
    volatile VECTOR(int32_t, 4) g_500;
    VECTOR(uint32_t, 16) g_501;
    VECTOR(int64_t, 4) g_504;
    union U0 g_507;
    uint32_t g_510;
    int64_t g_512;
    int64_t g_515;
    int8_t g_517;
    int32_t *g_520;
    int32_t ** volatile g_519;
    VECTOR(int16_t, 16) g_525;
    VECTOR(uint16_t, 4) g_547;
    int32_t g_653;
    uint8_t g_654[10];
    int32_t g_657;
    volatile uint16_t g_660[1][4][9];
    volatile uint16_t *g_659;
    VECTOR(int32_t, 4) g_661;
    VECTOR(int32_t, 4) g_666;
    VECTOR(int64_t, 16) g_714;
    int32_t *g_717[6][3][8];
    volatile uint64_t g_721;
    volatile uint64_t *g_720[3][8];
    volatile uint64_t * volatile *g_719;
    int8_t g_724;
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
uint16_t  func_1(struct S1 * p_762);
int32_t * func_7(uint16_t  p_8, int32_t  p_9, struct S1 * p_762);
uint16_t  func_10(int32_t  p_11, uint64_t  p_12, uint32_t  p_13, int64_t  p_14, struct S1 * p_762);
uint16_t  func_19(int32_t ** p_20, int32_t * p_21, uint32_t  p_22, uint32_t  p_23, int32_t * p_24, struct S1 * p_762);
int32_t ** func_25(uint32_t  p_26, struct S1 * p_762);
int64_t  func_36(uint64_t * p_37, struct S1 * p_762);
uint16_t  func_46(uint16_t * p_47, int32_t  p_48, int32_t  p_49, struct S1 * p_762);
int32_t * func_61(uint64_t * p_62, uint32_t  p_63, struct S1 * p_762);
int32_t * func_65(int32_t * p_66, int64_t  p_67, uint8_t  p_68, int64_t  p_69, uint64_t * p_70, struct S1 * p_762);
int64_t  func_80(uint64_t  p_81, int64_t  p_82, uint32_t  p_83, int64_t  p_84, int32_t ** p_85, struct S1 * p_762);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_762->l_comm_values p_762->g_comm_values p_762->g_29 p_762->g_41 p_762->g_30 p_762->g_60 p_762->g_77 p_762->g_499 p_762->g_500 p_762->g_501 p_762->g_504 p_762->g_507 p_762->g_510 p_762->g_473 p_762->g_517 p_762->g_512 p_762->g_519 p_762->g_525 p_762->g_659 p_762->g_660 p_762->g_547 p_762->g_507.f1 p_762->g_654 p_762->g_661 p_762->g_666 p_762->g_719 p_762->g_31 p_762->g_714 p_762->g_724 p_762->g_657
 * writes: p_762->g_6 p_762->g_35 p_762->g_41 p_762->g_31 p_762->g_60 p_762->g_77 p_762->g_507.f1 p_762->g_510 p_762->g_515 p_762->g_517 p_762->g_520 p_762->g_547 p_762->g_473 p_762->g_653 p_762->g_654 p_762->g_525 p_762->g_661 p_762->g_714 p_762->g_717 p_762->g_30
 */
uint16_t  func_1(struct S1 * p_762)
{ /* block id: 4 */
    int32_t l_2 = 0L;
    int32_t l_4 = (-1L);
    int32_t **l_5 = (void*)0;
    uint64_t *l_64 = (void*)0;
    int32_t **l_716[5] = {&p_762->g_520,&p_762->g_520,&p_762->g_520,&p_762->g_520,&p_762->g_520};
    int32_t *l_725[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint64_t l_761 = 0x6DC6667E1405E42DL;
    int i, j;
    l_4 = l_2;
    l_761 = ((p_762->g_6 = &l_4) != ((*p_762->g_29) = func_7(func_10((safe_lshift_func_int8_t_s_u(1L, 5)), ((7L & (p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))] < p_762->g_comm_values[p_762->tid])) , ((((l_4 != (((safe_lshift_func_int16_t_s_s((func_19(func_25(p_762->g_comm_values[p_762->tid], p_762), (p_762->g_717[0][2][3] = func_61(l_64, p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))], p_762)), p_762->g_666.x, p_762->g_504.w, (*p_762->g_29), p_762) & 0x0D86L), 0)) , 1UL) & p_762->g_501.s4)) == p_762->g_657) , l_725[4][1]) == (void*)0)), p_762->g_504.x, p_762->g_504.y, p_762), p_762->g_724, p_762)));
    return (*p_762->g_659);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_7(uint16_t  p_8, int32_t  p_9, struct S1 * p_762)
{ /* block id: 390 */
    int32_t *l_760 = &p_762->g_77;
    if ((atomic_inc(&p_762->l_atomic_input[15]) == 2))
    { /* block id: 392 */
        int32_t l_740 = (-4L);
        for (l_740 = 0; (l_740 > 2); l_740 = safe_add_func_int64_t_s_s(l_740, 1))
        { /* block id: 395 */
            uint32_t l_743 = 8UL;
            int16_t l_744 = 0x0B19L;
            uint32_t l_745 = 4294967295UL;
            uint16_t l_746 = 0xD6F8L;
            union U0 l_747[6] = {{0x1BL},{0xF9L},{0x1BL},{0x1BL},{0xF9L},{0x1BL}};
            int32_t l_749 = 0x3FD9F80EL;
            int32_t *l_748[1][10][5] = {{{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749},{&l_749,(void*)0,&l_749,(void*)0,&l_749}}};
            int32_t *l_750 = (void*)0;
            union U0 l_751 = {0x74L};/* VOLATILE GLOBAL l_751 */
            VECTOR(uint64_t, 4) l_752 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xF9550CF067976C58L), 0xF9550CF067976C58L);
            int64_t l_753 = 0x6FE2670225957D3FL;
            uint32_t l_754[3][9][2] = {{{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL}},{{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL}},{{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL},{0x3891599FL,4294967295UL}}};
            int32_t l_755 = (-1L);
            uint32_t l_756 = 4294967293UL;
            int32_t l_757 = 3L;
            uint32_t l_758 = 0x7690F645L;
            uint64_t l_759 = 0x1790C80330130A1CL;
            int i, j, k;
            l_744 = l_743;
            l_750 = ((l_745 , (l_746 , l_747[3])) , l_748[0][4][4]);
            l_757 = (l_756 = ((l_751 , (l_754[2][4][1] = (l_753 = l_752.y))) , l_755));
            l_759 ^= l_758;
        }
        unsigned int result = 0;
        result += l_740;
        atomic_add(&p_762->l_special_values[15], result);
    }
    else
    { /* block id: 404 */
        (1 + 1);
    }
    return l_760;
}


/* ------------------------------------------ */
/* 
 * reads : p_762->g_659 p_762->g_660
 * writes:
 */
uint16_t  func_10(int32_t  p_11, uint64_t  p_12, uint32_t  p_13, int64_t  p_14, struct S1 * p_762)
{ /* block id: 373 */
    int32_t **l_739 = &p_762->g_30;
    if ((atomic_inc(&p_762->l_atomic_input[11]) == 0))
    { /* block id: 375 */
        int64_t l_726 = 0x739B7B50DC6691FBL;
        int8_t l_727[9][1];
        int64_t l_728 = 1L;
        int16_t l_729 = 1L;
        int32_t l_737 = 5L;
        uint32_t l_738 = 0UL;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_727[i][j] = 0x44L;
        }
        if ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x14CC793BL, ((VECTOR(int32_t, 2))(6L, 0x5BA52002L)), (-1L), ((l_727[3][0] ^= l_726) , ((VECTOR(int32_t, 4))(0x215B7655L, 0L, 1L, 8L)).y), (-1L), 0x44ACC47CL, 9L)).s1724522127213370)).sb , (l_729 &= l_728)))
        { /* block id: 378 */
            uint64_t l_730 = 0x3252D26D82CBF780L;
            --l_730;
        }
        else
        { /* block id: 380 */
            uint16_t l_733 = 0x9CB5L;
            VECTOR(int32_t, 8) l_734 = (VECTOR(int32_t, 8))(0x40E850B3L, (VECTOR(int32_t, 4))(0x40E850B3L, (VECTOR(int32_t, 2))(0x40E850B3L, 0x6F70869DL), 0x6F70869DL), 0x6F70869DL, 0x40E850B3L, 0x6F70869DL);
            uint32_t l_735 = 4294967295UL;
            uint32_t l_736 = 0xE15BDB17L;
            int i;
            l_734.s6 = l_733;
            l_736 &= l_735;
        }
        l_738 = l_737;
        unsigned int result = 0;
        result += l_726;
        int l_727_i0, l_727_i1;
        for (l_727_i0 = 0; l_727_i0 < 9; l_727_i0++) {
            for (l_727_i1 = 0; l_727_i1 < 1; l_727_i1++) {
                result += l_727[l_727_i0][l_727_i1];
            }
        }
        result += l_728;
        result += l_729;
        result += l_737;
        result += l_738;
        atomic_add(&p_762->l_special_values[11], result);
    }
    else
    { /* block id: 385 */
        (1 + 1);
    }
    l_739 = &p_762->g_520;
    return (*p_762->g_659);
}


/* ------------------------------------------ */
/* 
 * reads : p_762->g_29 p_762->g_30 p_762->g_473 p_762->g_719 p_762->g_517 p_762->g_512 p_762->g_519 p_762->g_31 p_762->g_714 p_762->g_547 p_762->g_501 p_762->g_724
 * writes: p_762->g_517 p_762->g_520
 */
uint16_t  func_19(int32_t ** p_20, int32_t * p_21, uint32_t  p_22, uint32_t  p_23, int32_t * p_24, struct S1 * p_762)
{ /* block id: 369 */
    int32_t l_718 = 0x6CEEC5E9L;
    VECTOR(uint32_t, 2) l_722 = (VECTOR(uint32_t, 2))(0x69D165A8L, 0xCC8BA720L);
    uint64_t *l_723 = &p_762->g_35[3][2];
    int i;
    (*p_762->g_519) = func_65(((*p_762->g_519) = func_65((*p_762->g_29), l_718, (p_762->g_473 , ((void*)0 != p_762->g_719)), (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(l_722.yxyxyxxx)).s74, ((VECTOR(uint32_t, 2))(0xE88C4A8DL, 0UL))))).yyyxxxyxxyxxxyyy)).s1 || l_718), l_723, p_762)), ((**p_762->g_29) , p_762->g_714.se), p_762->g_547.w, p_762->g_501.s8, l_723, p_762);
    return p_762->g_724;
}


/* ------------------------------------------ */
/* 
 * reads : p_762->g_29 p_762->l_comm_values p_762->g_41 p_762->g_30 p_762->g_60
 * writes: p_762->g_35 p_762->g_41 p_762->g_31 p_762->g_60
 */
int32_t ** func_25(uint32_t  p_26, struct S1 * p_762)
{ /* block id: 7 */
    uint64_t *l_34 = &p_762->g_35[3][2];
    uint16_t *l_39 = (void*)0;
    uint16_t *l_40 = &p_762->g_41;
    int32_t l_42 = 0L;
    uint32_t l_45 = 0xF455DBFEL;
    int32_t *l_59 = &p_762->g_60;
    for (p_26 = (-24); (p_26 == 15); p_26 = safe_add_func_int8_t_s_s(p_26, 1))
    { /* block id: 10 */
        return p_762->g_29;
    }
    (*l_59) |= (((*p_762->g_30) = ((safe_mul_func_int16_t_s_s((p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))] || (((*l_34) = GROUP_DIVERGE(2, 1)) == func_36(l_34, p_762))), p_26)) & ((*l_40) &= p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))]))) > (((l_42 , (safe_sub_func_int16_t_s_s(l_45, func_46(l_39, (((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))] == p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))]), p_26)), l_45)), 0x42C102D1L)), l_45)) | p_26) || p_26), p_26, p_762)))) , 0L) <= 0x0B0DEBF6L));
    return &p_762->g_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_36(uint64_t * p_37, struct S1 * p_762)
{ /* block id: 14 */
    uint32_t l_38 = 4294967295UL;
    return l_38;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_46(uint16_t * p_47, int32_t  p_48, int32_t  p_49, struct S1 * p_762)
{ /* block id: 18 */
    uint32_t l_58[7];
    int i;
    for (i = 0; i < 7; i++)
        l_58[i] = 4294967293UL;
    return l_58[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_762->g_29 p_762->g_30 p_762->l_comm_values p_762->g_comm_values p_762->g_77 p_762->g_499 p_762->g_500 p_762->g_501 p_762->g_504 p_762->g_507 p_762->g_510 p_762->g_473 p_762->g_517 p_762->g_512 p_762->g_519 p_762->g_525 p_762->g_547 p_762->g_507.f1 p_762->g_654 p_762->g_659 p_762->g_660 p_762->g_661 p_762->g_666
 * writes: p_762->g_77 p_762->g_507.f1 p_762->g_510 p_762->g_515 p_762->g_517 p_762->g_520 p_762->g_547 p_762->g_473 p_762->g_653 p_762->g_654 p_762->g_525 p_762->g_661 p_762->g_714
 */
int32_t * func_61(uint64_t * p_62, uint32_t  p_63, struct S1 * p_762)
{ /* block id: 22 */
    VECTOR(int64_t, 4) l_75 = (VECTOR(int64_t, 4))(0x2BE4BCA0F96394AEL, (VECTOR(int64_t, 2))(0x2BE4BCA0F96394AEL, 0x22C2642A2CA01DC0L), 0x22C2642A2CA01DC0L);
    int32_t *l_76 = &p_762->g_77;
    int32_t l_471 = (-8L);
    uint64_t *l_472[6] = {&p_762->g_473,&p_762->g_473,&p_762->g_473,&p_762->g_473,&p_762->g_473,&p_762->g_473};
    VECTOR(int32_t, 8) l_523 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x09694E8BL), 0x09694E8BL), 0x09694E8BL, 1L, 0x09694E8BL);
    VECTOR(int64_t, 16) l_526 = (VECTOR(int64_t, 16))(0x10016B80F7652B92L, (VECTOR(int64_t, 4))(0x10016B80F7652B92L, (VECTOR(int64_t, 2))(0x10016B80F7652B92L, 0x2EF2D44768CD98FAL), 0x2EF2D44768CD98FAL), 0x2EF2D44768CD98FAL, 0x10016B80F7652B92L, 0x2EF2D44768CD98FAL, (VECTOR(int64_t, 2))(0x10016B80F7652B92L, 0x2EF2D44768CD98FAL), (VECTOR(int64_t, 2))(0x10016B80F7652B92L, 0x2EF2D44768CD98FAL), 0x10016B80F7652B92L, 0x2EF2D44768CD98FAL, 0x10016B80F7652B92L, 0x2EF2D44768CD98FAL);
    VECTOR(int32_t, 2) l_594 = (VECTOR(int32_t, 2))((-1L), 0x0D3A6110L);
    int16_t l_598 = (-5L);
    uint32_t l_649 = 0UL;
    int32_t l_650 = 4L;
    VECTOR(int32_t, 8) l_662 = (VECTOR(int32_t, 8))(0x79084B03L, (VECTOR(int32_t, 4))(0x79084B03L, (VECTOR(int32_t, 2))(0x79084B03L, 0L), 0L), 0L, 0x79084B03L, 0L);
    VECTOR(int32_t, 2) l_663 = (VECTOR(int32_t, 2))(0x1D11F504L, (-7L));
    int16_t l_679 = (-1L);
    int64_t l_694 = 0x118A31959F33C9BBL;
    uint64_t *l_712 = &p_762->g_473;
    uint64_t *l_713 = &p_762->g_473;
    int i;
    (*p_762->g_519) = func_65((*p_762->g_29), (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_75.ww)))).odd, (((((void*)0 != l_76) == 0x3343DEF5L) , 0x53L) >= GROUP_DIVERGE(2, 1)))), p_63)), (safe_sub_func_uint16_t_u_u((func_80(p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))], ((*l_76) = p_63), p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))], p_762->g_comm_values[p_762->tid], &l_76, p_762) , p_762->g_77), l_471)), p_63, l_472[4], p_762);
    for (l_471 = 0; (l_471 >= 11); l_471 = safe_add_func_uint32_t_u_u(l_471, 3))
    { /* block id: 308 */
        int32_t l_524 = (-1L);
        uint64_t **l_529 = &l_472[5];
        uint32_t *l_530 = &p_762->g_510;
        VECTOR(int64_t, 8) l_531 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 7L), 7L), 7L, (-6L), 7L);
        int8_t l_534 = 1L;
        int64_t l_535 = 0x139798A46FF31BEFL;
        int16_t l_567 = 0x6983L;
        int32_t l_571 = (-1L);
        VECTOR(int32_t, 8) l_576 = (VECTOR(int32_t, 8))(0x32418B91L, (VECTOR(int32_t, 4))(0x32418B91L, (VECTOR(int32_t, 2))(0x32418B91L, 6L), 6L), 6L, 0x32418B91L, 6L);
        uint8_t l_580 = 1UL;
        VECTOR(int32_t, 4) l_595 = (VECTOR(int32_t, 4))(0x69B1C8DEL, (VECTOR(int32_t, 2))(0x69B1C8DEL, 3L), 3L);
        int16_t l_652 = 0x2CD3L;
        int64_t *l_667 = &p_762->g_515;
        VECTOR(int16_t, 16) l_674 = (VECTOR(int16_t, 16))(0x3D1CL, (VECTOR(int16_t, 4))(0x3D1CL, (VECTOR(int16_t, 2))(0x3D1CL, 7L), 7L), 7L, 0x3D1CL, 7L, (VECTOR(int16_t, 2))(0x3D1CL, 7L), (VECTOR(int16_t, 2))(0x3D1CL, 7L), 0x3D1CL, 7L, 0x3D1CL, 7L);
        VECTOR(uint64_t, 8) l_680 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
        VECTOR(uint16_t, 16) l_681 = (VECTOR(uint16_t, 16))(0x952DL, (VECTOR(uint16_t, 4))(0x952DL, (VECTOR(uint16_t, 2))(0x952DL, 0xF040L), 0xF040L), 0xF040L, 0x952DL, 0xF040L, (VECTOR(uint16_t, 2))(0x952DL, 0xF040L), (VECTOR(uint16_t, 2))(0x952DL, 0xF040L), 0x952DL, 0xF040L, 0x952DL, 0xF040L);
        int8_t *l_682 = &p_762->g_517;
        int32_t *l_683[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j;
        l_524 = ((VECTOR(int32_t, 2))(l_523.s64)).lo;
        if ((((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(p_762->g_525.sd9)).yyxyxyyxxyxyyyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_762->g_512, 0L, (((1UL && ((((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_63, ((VECTOR(int64_t, 8))(l_526.s9a83281b)), (safe_add_func_int16_t_s_s(p_762->g_500.y, ((((*l_529) = p_62) == (void*)0) , (l_530 != l_76)))), 0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x45341E6EC383ADA9L, 0L)), (-2L), 0x33742652061A5A51L)).yxxzzzzyyzzzwxyz)).s624e)), 0x21BD20F80B432B35L)))).s9ad2, ((VECTOR(int64_t, 8))(l_531.s67565241)).odd))).y <= ((safe_sub_func_uint32_t_u_u(l_534, p_63)) > 0UL)) < (*l_76))) & p_63) >= l_535), 0x7DF9L, p_762->g_500.z, (-1L), (-1L), 4L)))).s4626430747723043))).sf2, ((VECTOR(int16_t, 2))(0x536CL))))).even ^ 0x5E20L))
        { /* block id: 311 */
            VECTOR(uint8_t, 2) l_538 = (VECTOR(uint8_t, 2))(0x88L, 255UL);
            int32_t l_564 = 5L;
            int32_t l_566 = (-9L);
            int32_t l_570 = 0x06A4D947L;
            int32_t l_572 = 0x0F3544FFL;
            int32_t l_575 = 1L;
            int32_t l_577 = 1L;
            int i;
            if ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_538.xyxxyxyy)).s0, FAKE_DIVERGE(p_762->global_2_offset, get_global_id(2), 10))))
            { /* block id: 312 */
                int8_t l_550 = 1L;
                int32_t l_554 = 0x7B2DAAB2L;
                int32_t l_568 = 0x21E2AFF0L;
                int32_t l_569[3];
                int64_t l_579 = 3L;
                int32_t l_587 = 1L;
                uint8_t l_588 = 0x5EL;
                int i;
                for (i = 0; i < 3; i++)
                    l_569[i] = 0x6197BDA7L;
                l_524 |= l_534;
                for (p_762->g_507.f1 = (-11); (p_762->g_507.f1 == 16); p_762->g_507.f1++)
                { /* block id: 316 */
                    uint16_t *l_553[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_557 = (-1L);
                    int i, j;
                    (*l_76) ^= ((safe_add_func_uint32_t_u_u(p_762->g_525.s0, (((&p_762->g_3[4] != ((safe_rshift_func_int8_t_s_u((~((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(5UL, 0x3ED3L, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 16))(65530UL, ((VECTOR(uint16_t, 8))(p_762->g_547.xzwyzxwy)), (safe_mul_func_int8_t_s_s(l_550, 0UL)), 0x1967L, (p_762->g_473 != ((safe_lshift_func_uint16_t_u_s((l_554 = p_63), (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (l_531.s6 , l_557))))) >= l_550)), p_63, p_63, 0x7D78L, 0x1161L)).s6738, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0x6BEAL))))), 1UL, 0UL)))).s22)).even, 1UL)) , 4L)), 7)) , (void*)0)) || p_63) , GROUP_DIVERGE(2, 1)))) || FAKE_DIVERGE(p_762->group_2_offset, get_group_id(2), 10));
                }
                for (l_524 = 0; (l_524 <= 16); l_524 = safe_add_func_int32_t_s_s(l_524, 1))
                { /* block id: 322 */
                    VECTOR(int32_t, 4) l_565 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x65C59C29L), 0x65C59C29L);
                    int32_t l_573 = 6L;
                    int32_t l_574 = (-2L);
                    int32_t l_578 = (-1L);
                    int32_t *l_583 = &l_573;
                    int32_t *l_584 = &l_578;
                    int32_t *l_585 = &l_564;
                    int32_t *l_586[3][4] = {{(void*)0,&l_566,(void*)0,(void*)0},{(void*)0,&l_566,(void*)0,(void*)0},{(void*)0,&l_566,(void*)0,(void*)0}};
                    int i, j;
                    for (p_63 = (-16); (p_63 > 6); p_63 = safe_add_func_uint64_t_u_u(p_63, 5))
                    { /* block id: 325 */
                        int32_t *l_562 = (void*)0;
                        int32_t *l_563[9][8][3] = {{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}},{{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554},{(void*)0,&p_762->g_77,&l_554}}};
                        int i, j, k;
                        --l_580;
                        if (p_63)
                            break;
                        if ((*l_76))
                            break;
                    }
                    --l_588;
                    return l_76;
                }
            }
            else
            { /* block id: 333 */
                return l_76;
            }
        }
        else
        { /* block id: 336 */
            VECTOR(int32_t, 16) l_591 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 2L), 2L), 2L, (-3L), 2L, (VECTOR(int32_t, 2))((-3L), 2L), (VECTOR(int32_t, 2))((-3L), 2L), (-3L), 2L, (-3L), 2L);
            VECTOR(int32_t, 16) l_592 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int32_t, 2))((-2L), 0L), (VECTOR(int32_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
            VECTOR(int32_t, 2) l_593 = (VECTOR(int32_t, 2))(4L, 0x578060D8L);
            int16_t *l_607 = (void*)0;
            int16_t *l_608 = &l_567;
            uint16_t *l_631 = (void*)0;
            uint16_t *l_632 = (void*)0;
            uint16_t *l_633 = (void*)0;
            uint16_t *l_634 = (void*)0;
            uint16_t *l_635 = (void*)0;
            uint16_t *l_636 = (void*)0;
            uint16_t *l_637 = (void*)0;
            uint16_t *l_638 = (void*)0;
            uint16_t *l_639 = (void*)0;
            uint16_t *l_640 = (void*)0;
            uint16_t *l_641[1];
            VECTOR(int16_t, 4) l_644 = (VECTOR(int16_t, 4))(0x4760L, (VECTOR(int16_t, 2))(0x4760L, (-3L)), (-3L));
            uint32_t *l_651[9][10] = {{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1},{&l_649,&l_649,(void*)0,&p_762->g_507.f1,&p_762->g_507.f1,&p_762->g_507.f1,&l_649,(void*)0,&l_649,&p_762->g_507.f1}};
            int32_t *l_655 = (void*)0;
            int32_t *l_656[10] = {(void*)0,&p_762->g_657,(void*)0,&p_762->g_657,(void*)0,(void*)0,&p_762->g_657,(void*)0,&p_762->g_657,(void*)0};
            uint32_t l_658 = 0x9474D7CBL;
            VECTOR(int32_t, 16) l_664 = (VECTOR(int32_t, 16))(0x69E1D876L, (VECTOR(int32_t, 4))(0x69E1D876L, (VECTOR(int32_t, 2))(0x69E1D876L, 0x2F9F7A78L), 0x2F9F7A78L), 0x2F9F7A78L, 0x69E1D876L, 0x2F9F7A78L, (VECTOR(int32_t, 2))(0x69E1D876L, 0x2F9F7A78L), (VECTOR(int32_t, 2))(0x69E1D876L, 0x2F9F7A78L), 0x69E1D876L, 0x2F9F7A78L, 0x69E1D876L, 0x2F9F7A78L);
            VECTOR(int32_t, 8) l_665 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x6A5F98A7L), 0x6A5F98A7L), 0x6A5F98A7L, 9L, 0x6A5F98A7L);
            int32_t **l_670 = (void*)0;
            int32_t **l_671 = &p_762->g_520;
            int i, j;
            for (i = 0; i < 1; i++)
                l_641[i] = (void*)0;
            atomic_add(&p_762->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_591.s106e5e7271a22107)).s735a, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_592.s7d7dc9cd3a5724ef)).sa757, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(l_593.xxxy)), l_524, 0x130A0A97L, 0x53B479FFL)).even)), ((VECTOR(int32_t, 16))(l_594.xxyxxxxxyxxyxyxy)).s696c, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x472C90B7L, 0L)).xyyy))))).even)).yyxx)))))).even, ((VECTOR(int32_t, 2))(l_595.wx))))), 1L)).lo)), (-1L), 0x376EF8BDL)).odd, (int32_t)(((p_762->g_500.w < l_598) != ((((l_658 = (safe_mul_func_int16_t_s_s((((p_762->g_525.sf = (p_762->g_654[3] |= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551609UL, (p_762->g_653 = (p_762->g_473 = (safe_lshift_func_uint16_t_u_u(((*l_76) & ((*l_608) ^= p_63)), (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s((((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((((*l_530) = GROUP_DIVERGE(2, 1)) == (safe_sub_func_uint32_t_u_u((((p_63 == (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_593.x = ((GROUP_DIVERGE(0, 1) == (safe_div_func_int32_t_s_s(((-1L) || ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(0L, (-3L)))))).yyyx)).z), (safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((--p_762->g_547.x), 13)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_644.xw)), ((VECTOR(int16_t, 4))(((safe_mul_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_u((0L == l_649), p_63)) , p_762->g_comm_values[p_762->tid]) & p_762->g_501.s3) || p_63) | p_63), 0x3686L)) , l_650), ((VECTOR(int16_t, 2))((-6L))), 0x3770L)), p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))], 0L, 5L, ((VECTOR(int16_t, 4))(0L)), 0x1A87L, 0x7A44L, 0x4980L)).s2)), 0x2FDEF2C38BF66290L))))) & p_762->g_507.f1)), l_644.z)), l_592.sb)), l_591.sd)), 1L))) >= p_762->g_525.s9) & p_63), l_652))), 0x8AB7L, 0xBCBAL, 1UL)), 0xECF8L, 0xC4B6L, 0x08F3L, 0xEAFDL)).odd)), ((VECTOR(uint16_t, 4))(0x9B8AL))))), ((VECTOR(uint32_t, 4))(0x06CEDF25L))))).odd))).yyxyyxyx, (uint32_t)0x61EE1324L))).s3 , p_762->g_525.sb), 4)) <= p_63), p_63)))))))), p_762->g_525.s4)))) || l_593.y) == l_591.s4), 0x4F24L))) , p_762->g_659) == (void*)0) == p_63)) == 7L), (int32_t)6L))).odd + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_762->v_collective += p_762->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_595.x &= ((-3L) != (0x1B84L && ((((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x5073C78BL, 0x25FF2A68L)))).xxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_762->g_661.wzzxxwyzzwywyxxy)).s3c1f)), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_662.s5211630270151143)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x2E9C1F4EL)).xxyxxxyyyxyxyxyy)).s4c)).xxxxxxyyyxyyxyyy)))).s24, ((VECTOR(int32_t, 16))(0x0F54CC14L, ((VECTOR(int32_t, 4))(l_663.yyxx)), 0x63BE41D1L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(7L, 3L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_664.sd7)), 6L, (-8L))).odd))), 1L, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_665.s62242441)).hi)), 0x4D9CA4B7L, 0x2809489DL)).sc7, ((VECTOR(int32_t, 16))(p_762->g_666.wywxzwyywxxzyyzy)).s6e))), 0x0AE2E02CL, 0L)).xwxwywzw))).lo))).x >= ((void*)0 != l_667)) == (safe_div_func_int64_t_s_s((GROUP_DIVERGE(2, 1) == (1UL <= ((&l_571 == ((*l_671) = &l_571)) ^ (((0x51D3L | l_576.s1) != (*p_762->g_659)) , 0x53L)))), (*l_76))))));
        }
        p_762->g_661.y &= (safe_add_func_int8_t_s_s(((*l_682) |= ((*p_762->g_659) & ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_674.sb0)), ((&p_762->g_659 != &p_762->g_659) | ((safe_rshift_func_uint16_t_u_u(((((l_680.s4 |= l_679) > ((p_63 , ((void*)0 == l_472[4])) >= (((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_681.s15cec921)).s6504425403147050)).sfc5b)).y | 0x495CL) < l_531.s7) == 0x4DD83E56L))) != (-1L)) || p_63), l_567)) == p_762->g_666.w)), 0x4A87L, ((VECTOR(int16_t, 2))(0L)), (-2L), 0x03ECL)), ((VECTOR(int16_t, 4))(0x1241L)), ((VECTOR(int16_t, 4))((-1L))))).se)), (*l_76)));
    }
    for (p_762->g_77 = 0; (p_762->g_77 == (-4)); p_762->g_77--)
    { /* block id: 356 */
        int8_t l_686 = 0x1AL;
        int32_t l_687 = (-4L);
        int32_t *l_688 = &l_650;
        int32_t *l_689 = &l_650;
        int32_t *l_690[3];
        uint8_t l_691 = 0x0EL;
        uint16_t *l_695[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int16_t *l_708 = &l_679;
        int16_t *l_709 = (void*)0;
        int16_t *l_710[4];
        uint64_t **l_711[3][8][3] = {{{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]}},{{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]}},{{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]},{(void*)0,&l_472[4],&l_472[0]}}};
        int64_t l_715 = 0x08751DB7F54C27ABL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_690[i] = &l_687;
        for (i = 0; i < 4; i++)
            l_710[i] = &l_598;
        l_691++;
        (*l_689) = ((++p_762->g_547.x) ^ (((void*)0 != &p_762->g_473) <= (FAKE_DIVERGE(p_762->global_2_offset, get_global_id(2), 10) == ((VECTOR(uint64_t, 16))(18446744073709551615UL, (p_762->g_77 , (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))], (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_762->g_525.s8 &= ((*l_708) = p_63)), ((*l_76) , (0x79956EDAF51C15A4L | (((p_762->g_714.s1 = ((l_472[4] = p_62) != (l_713 = (l_712 = &p_762->g_473)))) || p_762->g_501.s5) & p_63))))), 1UL)), 5)))), p_762->g_666.w))), 18446744073709551615UL, 18446744073709551614UL, (*l_689), 0x59B5569C4C0C6740L, 18446744073709551615UL, p_63, l_715, 18446744073709551609UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0xA6739C31B20B65E5L, 6UL)).sb)));
    }
    return (*p_762->g_29);
}


/* ------------------------------------------ */
/* 
 * reads : p_762->l_comm_values p_762->g_499 p_762->g_500 p_762->g_501 p_762->g_504 p_762->g_507 p_762->g_510 p_762->g_473 p_762->g_517 p_762->g_512
 * writes: p_762->g_507.f1 p_762->g_510 p_762->g_515 p_762->g_517
 */
int32_t * func_65(int32_t * p_66, int64_t  p_67, uint8_t  p_68, int64_t  p_69, uint64_t * p_70, struct S1 * p_762)
{ /* block id: 295 */
    uint64_t l_478 = 1UL;
    VECTOR(int32_t, 2) l_487 = (VECTOR(int32_t, 2))(1L, 0x6C4EFCDEL);
    uint64_t *l_494 = &p_762->g_473;
    uint32_t *l_508 = &p_762->g_507.f1;
    uint32_t *l_509 = &p_762->g_510;
    int64_t *l_511[2];
    int64_t *l_513 = (void*)0;
    int64_t *l_514 = &p_762->g_515;
    int8_t *l_516 = &p_762->g_517;
    int32_t *l_518 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_511[i] = &p_762->g_512;
    p_66 = p_66;
    l_518 = (p_66 = ((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((l_478 , (((*l_516) &= ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_69, (safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(l_487.yyxx))))).yzxyzwyw, (uint32_t)((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-10L), 0x46066B2A26A39C5BL)))).yxxxyyyy)).s1 == (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((p_762->l_comm_values[(safe_mod_func_uint32_t_u_u(p_762->tid, 11))] >= ((void*)0 == l_494)), ((safe_lshift_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(l_487.x, 0x3B9110ACL)) , ((*l_514) = ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 0L)).yxyyxyyxyyxxxxxy)).s50))).xyyyyxxyxyyxyyyy)).hi)))), ((VECTOR(int64_t, 2))(0x1EDD88C36B34183EL, 0x4E0B86E02A33487EL)).xyyxxxxy, ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_762->g_499.s5bf8ad4e)).even)).hi)))).xyxxyxyyxxyxxyxy, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(p_762->g_500.yywwywww)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(4294967286UL, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(0x34246887L, 0xFB48E062L)).xyyxxyyx, ((VECTOR(uint32_t, 2))(p_762->g_501.sf0)).yxyxyxxy))).s4, 0xEF5B6FFDL, p_68, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(0x38CB56BBL, 0UL, 0xCB59850DL, (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_762->g_504.yxzx)).x, (p_67 ^= (safe_div_func_uint32_t_u_u(((*l_509) &= ((*l_508) = (p_762->g_507 , 4294967295UL))), l_478))))), ((VECTOR(uint32_t, 2))(0xAF3ED9D5L)), 0x08564F3DL, 0xC12292D6L)).s67, ((VECTOR(uint32_t, 2))(6UL))))), 0x7B25E673L, 0x401ECBC0L)).hi)).zzzxwzyy))).s0332520462644457))).even))).s41)).xxyyxxyxxxyxxyxy, ((VECTOR(int64_t, 16))(0x5AEC5E84F475BC0DL))))).sc)) , p_762->g_500.w), p_762->g_501.sc)) || 5UL))) > 1UL), p_762->g_504.w)) , 0xE91C914DEB069CECL), l_487.y))) , 4294967295UL), (uint32_t)l_487.x))))).s4 < l_478), GROUP_DIVERGE(2, 1))) ^ l_487.y), 0xDBL)))), l_487.y)) && p_762->g_473)) == 0x50L)), l_487.x)), p_762->g_512)) , (void*)0));
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_762->g_77
 * writes:
 */
int64_t  func_80(uint64_t  p_81, int64_t  p_82, uint32_t  p_83, int64_t  p_84, int32_t ** p_85, struct S1 * p_762)
{ /* block id: 24 */
    if ((atomic_inc(&p_762->g_atomic_input[34 * get_linear_group_id() + 6]) == 9))
    { /* block id: 26 */
        int64_t l_86 = 0L;
        uint32_t l_362 = 4294967295UL;
        int8_t l_365 = 1L;
        int32_t l_366 = (-1L);
        uint32_t l_367 = 4294967293UL;
        if ((l_86 |= 0x2F019D46L))
        { /* block id: 28 */
            int32_t l_88[2][3];
            int32_t *l_87 = &l_88[1][1];
            int32_t *l_89 = &l_88[1][1];
            int16_t l_90 = 0L;
            int32_t *l_128 = &l_88[1][1];
            int32_t *l_129[8] = {&l_88[1][1],&l_88[1][1],&l_88[1][1],&l_88[1][1],&l_88[1][1],&l_88[1][1],&l_88[1][1],&l_88[1][1]};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_88[i][j] = 5L;
            }
            l_89 = l_87;
            if (l_90)
            { /* block id: 30 */
                VECTOR(int64_t, 16) l_91 = (VECTOR(int64_t, 16))(0x19166C0C0825FC64L, (VECTOR(int64_t, 4))(0x19166C0C0825FC64L, (VECTOR(int64_t, 2))(0x19166C0C0825FC64L, 0x2F30CE74433A0315L), 0x2F30CE74433A0315L), 0x2F30CE74433A0315L, 0x19166C0C0825FC64L, 0x2F30CE74433A0315L, (VECTOR(int64_t, 2))(0x19166C0C0825FC64L, 0x2F30CE74433A0315L), (VECTOR(int64_t, 2))(0x19166C0C0825FC64L, 0x2F30CE74433A0315L), 0x19166C0C0825FC64L, 0x2F30CE74433A0315L, 0x19166C0C0825FC64L, 0x2F30CE74433A0315L);
                int32_t l_93 = 0x62D2C906L;
                int32_t *l_92 = &l_93;
                int16_t l_94 = 0x11FAL;
                int i;
                l_87 = (((VECTOR(int64_t, 16))(l_91.s52ae0d08f1b1e9e5)).s1 , l_92);
                (*l_89) = l_94;
            }
            else
            { /* block id: 33 */
                uint16_t l_95 = 1UL;
                uint8_t l_120 = 2UL;
                int32_t l_126 = 0x19CEA194L;
                uint16_t l_127 = 0xD9F7L;
                if (l_95)
                { /* block id: 34 */
                    int32_t l_96 = (-10L);
                    for (l_96 = 0; (l_96 > (-30)); l_96 = safe_sub_func_int16_t_s_s(l_96, 7))
                    { /* block id: 37 */
                        int16_t l_99[10] = {0x688EL,0x688EL,0x688EL,0x688EL,0x688EL,0x688EL,0x688EL,0x688EL,0x688EL,0x688EL};
                        uint8_t l_100 = 0UL;
                        int i;
                        ++l_100;
                    }
                }
                else
                { /* block id: 40 */
                    int32_t l_103 = (-1L);
                    int8_t l_119 = 0L;
                    for (l_103 = 0; (l_103 < (-17)); l_103 = safe_sub_func_uint32_t_u_u(l_103, 9))
                    { /* block id: 43 */
                        VECTOR(int32_t, 4) l_106 = (VECTOR(int32_t, 4))(0x1887233EL, (VECTOR(int32_t, 2))(0x1887233EL, 0x056BCC6BL), 0x056BCC6BL);
                        uint16_t l_107 = 0x23A1L;
                        int64_t l_108 = 0x3CF7409415F90230L;
                        int64_t l_109 = 0x73D54CDCAC19DAACL;
                        int32_t l_110 = 0x42B88B27L;
                        int32_t l_111 = 8L;
                        uint32_t l_112 = 0xEFFEB3B2L;
                        int16_t l_115[9][9][3] = {{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}},{{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L},{0x0027L,0L,2L}}};
                        uint8_t l_116 = 249UL;
                        int i, j, k;
                        (*l_87) ^= 0x5E133A9BL;
                        l_107 = ((*l_87) = ((VECTOR(int32_t, 2))(l_106.xz)).odd);
                        ++l_112;
                        l_116++;
                    }
                    l_87 = (l_119 , (void*)0);
                }
                --l_120;
                for (l_120 = 0; (l_120 < 35); l_120 = safe_add_func_int64_t_s_s(l_120, 2))
                { /* block id: 55 */
                    VECTOR(int32_t, 16) l_125 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 5L), 5L), 5L, 5L, 5L, (VECTOR(int32_t, 2))(5L, 5L), (VECTOR(int32_t, 2))(5L, 5L), 5L, 5L, 5L, 5L);
                    int i;
                    (*l_89) ^= ((VECTOR(int32_t, 8))(l_125.sb1b1b7de)).s0;
                }
                l_127 |= ((*l_89) &= l_126);
            }
            l_129[3] = l_128;
            for (l_90 = 0; (l_90 <= (-9)); l_90 = safe_sub_func_int64_t_s_s(l_90, 2))
            { /* block id: 64 */
                VECTOR(int32_t, 4) l_132 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2DF18600L), 0x2DF18600L);
                VECTOR(int32_t, 4) l_133 = (VECTOR(int32_t, 4))(0x377C446CL, (VECTOR(int32_t, 2))(0x377C446CL, 0x28A9104CL), 0x28A9104CL);
                VECTOR(int32_t, 16) l_134 = (VECTOR(int32_t, 16))(0x549C48DCL, (VECTOR(int32_t, 4))(0x549C48DCL, (VECTOR(int32_t, 2))(0x549C48DCL, (-1L)), (-1L)), (-1L), 0x549C48DCL, (-1L), (VECTOR(int32_t, 2))(0x549C48DCL, (-1L)), (VECTOR(int32_t, 2))(0x549C48DCL, (-1L)), 0x549C48DCL, (-1L), 0x549C48DCL, (-1L));
                VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L);
                VECTOR(int16_t, 16) l_136 = (VECTOR(int16_t, 16))(0x7970L, (VECTOR(int16_t, 4))(0x7970L, (VECTOR(int16_t, 2))(0x7970L, (-7L)), (-7L)), (-7L), 0x7970L, (-7L), (VECTOR(int16_t, 2))(0x7970L, (-7L)), (VECTOR(int16_t, 2))(0x7970L, (-7L)), 0x7970L, (-7L), 0x7970L, (-7L));
                VECTOR(uint16_t, 2) l_137 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
                VECTOR(int32_t, 4) l_138 = (VECTOR(int32_t, 4))(0x40006811L, (VECTOR(int32_t, 2))(0x40006811L, 0x0D213C73L), 0x0D213C73L);
                VECTOR(int32_t, 4) l_139 = (VECTOR(int32_t, 4))(0x36088253L, (VECTOR(int32_t, 2))(0x36088253L, (-1L)), (-1L));
                VECTOR(int32_t, 4) l_140 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L));
                int32_t l_141 = 0x08B2B8B2L;
                uint64_t l_142 = 0xBAEA5EAF73BA8E61L;
                int i;
                (1 + 1);
            }
        }
        else
        { /* block id: 74 */
            uint32_t l_143 = 4294967295UL;
            int32_t l_144 = 0x4CA37329L;
            VECTOR(uint16_t, 4) l_145 = (VECTOR(uint16_t, 4))(0x42E7L, (VECTOR(uint16_t, 2))(0x42E7L, 0UL), 0UL);
            uint64_t l_340 = 18446744073709551606UL;
            uint64_t l_360 = 0x883D9349DF3AD39AL;
            int32_t l_361 = 1L;
            int i;
            if ((l_143 , (l_145.y &= l_144)))
            { /* block id: 76 */
                int32_t l_146 = 0x34E9F7E8L;
                uint16_t l_177 = 65535UL;
                uint32_t l_178 = 0x044EA995L;
                int32_t l_179[2][8][6] = {{{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L}},{{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L},{(-8L),9L,0x2C837247L,(-8L),(-8L),0x2C837247L}}};
                union U0 l_180 = {247UL};/* VOLATILE GLOBAL l_180 */
                VECTOR(int64_t, 2) l_181 = (VECTOR(int64_t, 2))((-1L), 1L);
                int16_t l_182 = 0x3C7FL;
                VECTOR(int64_t, 16) l_183 = (VECTOR(int64_t, 16))(0x3596F503D3159323L, (VECTOR(int64_t, 4))(0x3596F503D3159323L, (VECTOR(int64_t, 2))(0x3596F503D3159323L, 0L), 0L), 0L, 0x3596F503D3159323L, 0L, (VECTOR(int64_t, 2))(0x3596F503D3159323L, 0L), (VECTOR(int64_t, 2))(0x3596F503D3159323L, 0L), 0x3596F503D3159323L, 0L, 0x3596F503D3159323L, 0L);
                VECTOR(int64_t, 8) l_184 = (VECTOR(int64_t, 8))(0x2EBDFE2882719CDBL, (VECTOR(int64_t, 4))(0x2EBDFE2882719CDBL, (VECTOR(int64_t, 2))(0x2EBDFE2882719CDBL, 0x08484B6C8C4D48E7L), 0x08484B6C8C4D48E7L), 0x08484B6C8C4D48E7L, 0x2EBDFE2882719CDBL, 0x08484B6C8C4D48E7L);
                VECTOR(int64_t, 2) l_185 = (VECTOR(int64_t, 2))(0L, 5L);
                VECTOR(int64_t, 8) l_186 = (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L);
                VECTOR(int64_t, 16) l_187 = (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L), (VECTOR(int64_t, 2))((-10L), (-1L)), (VECTOR(int64_t, 2))((-10L), (-1L)), (-10L), (-1L), (-10L), (-1L));
                int32_t l_188 = 0x0D128172L;
                uint64_t l_189 = 0x746B9F5D823547ADL;
                int64_t l_190[6] = {(-9L),0L,(-9L),(-9L),0L,(-9L)};
                uint32_t l_191 = 0x68C300E8L;
                int64_t l_192 = 0x039A174F5C35F3DDL;
                uint32_t l_193 = 4294967295UL;
                uint32_t l_194 = 0xCFC96928L;
                uint8_t l_195 = 0x92L;
                int32_t *l_220 = &l_179[1][7][4];
                int32_t *l_221[10][7][3] = {{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}},{{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]},{&l_179[1][1][0],&l_179[1][1][0],&l_179[0][2][3]}}};
                int32_t *l_222 = &l_179[1][1][0];
                int i, j, k;
                for (l_146 = 0; (l_146 == (-29)); --l_146)
                { /* block id: 79 */
                    int32_t l_150 = 1L;
                    int32_t *l_149 = &l_150;
                    int32_t *l_151 = &l_150;
                    uint64_t l_152 = 0x04D593052EA8D45AL;
                    int32_t *l_165 = (void*)0;
                    l_151 = (l_149 = (void*)0);
                    if (l_152)
                    { /* block id: 82 */
                        uint8_t l_153 = 0x17L;
                        uint32_t l_156 = 1UL;
                        int16_t l_159 = 9L;
                        int8_t l_160 = 0x3DL;
                        --l_153;
                        l_156++;
                        l_159 &= (-2L);
                        l_160 &= 0x75661478L;
                    }
                    else
                    { /* block id: 87 */
                        uint16_t l_163[7][10] = {{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L},{0x501AL,1UL,1UL,0x501AL,0x25CFL,65528UL,0x3403L,1UL,0x3446L,0x4A51L}};
                        uint16_t *l_162 = &l_163[3][5];
                        uint16_t **l_161 = &l_162;
                        uint16_t **l_164 = &l_162;
                        int i, j;
                        l_164 = l_161;
                    }
                    l_165 = (void*)0;
                    for (l_150 = 0; (l_150 >= (-18)); l_150 = safe_sub_func_uint8_t_u_u(l_150, 1))
                    { /* block id: 93 */
                        uint64_t l_170 = 0x9B0709C269514ADCL;
                        uint64_t *l_169 = &l_170;
                        uint64_t **l_168 = &l_169;
                        uint64_t **l_171 = &l_169;
                        int16_t l_172 = 1L;
                        int64_t l_173 = 0x0875917A22F150D1L;
                        uint16_t l_174[7][8][4] = {{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}},{{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL},{0x45DBL,0xBE64L,0x483CL,0x45DBL}}};
                        int i, j, k;
                        l_171 = l_168;
                        l_174[5][1][0]++;
                    }
                }
                l_146 = (l_178 ^= l_177);
                if ((((l_193 = (((VECTOR(int64_t, 8))(l_179[1][1][0], ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((-1L), 0x4EC0B7275D6FB8A8L, (-1L), 0x2D10CE58A11968FDL)))), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(0x40BBC23E960850B4L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-1L), 7L)).xxyxyyxx)).s7, 0x7566744F56941D11L, 0x4B5969875F21B87BL)).wwxzyzywzxzxwzzx, ((VECTOR(int64_t, 4))((l_180 , 0L), 9L, (-1L), 0x332DCA30394C6079L)).xwxzxyxzzwwwxzxw))).s368d, ((VECTOR(int64_t, 2))((-4L), 0x62936AD9C877E71CL)).xxyy))).zzyxxyzwxzyyzzyy, ((VECTOR(int64_t, 2))(3L, (-3L))).yxxxxxxyyxxyxyyx))))).saebb)).xzwzwwxxwxyxxzww, ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(0x54199CF0CBDDEB08L, 0x53FFEB0AAA760A9DL, 0x0E6692431AA5C5DEL, 0x1B71C95E927660C2L)).wzwxzxwy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(1L, (-1L), (-1L), 0x2D07749A3EB63C3FL)))).odd)).yxxyyxyyxyxxxxyx)).hi))).s41, ((VECTOR(int64_t, 2))(0x1B82479E7278546DL, 0x7AA40F040C40D8DEL))))).xxyyyxyyxyxxyyyx, ((VECTOR(int64_t, 8))(l_181.yyyyyyyy)).s7156402147524143))).s9d, ((VECTOR(int64_t, 4))(1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x15A487C2631F5E1AL, 0x1527E5EAF47B7046L)))), 0x1679470CC6506466L)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(l_182, (-1L), 0x3B98B66C8A74AC35L, 1L)).hi, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_183.sae)).yyxyyyxx)).s74, ((VECTOR(int64_t, 2))(l_184.s21))))), 0L, 0x37C214725579C5B4L)).zywxzwywyyzywxxz, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_185.yy)), 0x0CF6DA3648DACBC9L, 1L, ((VECTOR(int64_t, 2))(l_186.s04)), 5L, ((VECTOR(int64_t, 8))(l_187.sdda32bf4)), 0x70BC13450B3EC079L)))), ((VECTOR(int64_t, 4))(0x0D53BAC825AF46B9L, ((l_188 , (l_189 , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x6B4653DAL, l_190[2], 0xAE2238FFL, 5UL)))).w)) , (l_86 ^= 2L)), (-1L), (-1L))).yywxwwyxwxwxwxzw))), ((VECTOR(int64_t, 16))(1L))))).s43)), 6L, 0x76138E7733B7CB89L)).zyxxyyyyyzzxwywy))).s8d)), ((VECTOR(int64_t, 2))(0x0CD050AACBAC9F7DL))))).even, l_191, 0x6FD5CF70B3376282L, 0x46FBA3167A9038FEL)).odd))), 1L)).s7 , l_192)) , l_194) , l_195))
                { /* block id: 102 */
                    uint32_t l_196 = 0x04433F09L;
                    l_196++;
                    for (l_196 = 15; (l_196 == 8); l_196 = safe_sub_func_int32_t_s_s(l_196, 1))
                    { /* block id: 106 */
                        VECTOR(uint16_t, 2) l_201 = (VECTOR(uint16_t, 2))(0x481FL, 0x4D78L);
                        uint16_t l_202 = 65532UL;
                        int32_t l_203 = 0x71F37E9AL;
                        uint16_t l_204[7] = {3UL,65532UL,3UL,3UL,65532UL,3UL,3UL};
                        uint8_t l_205[7] = {251UL,1UL,251UL,251UL,1UL,251UL,251UL};
                        int32_t l_206[6][3] = {{0x4D622D2AL,0x5CD4BFFBL,8L},{0x4D622D2AL,0x5CD4BFFBL,8L},{0x4D622D2AL,0x5CD4BFFBL,8L},{0x4D622D2AL,0x5CD4BFFBL,8L},{0x4D622D2AL,0x5CD4BFFBL,8L},{0x4D622D2AL,0x5CD4BFFBL,8L}};
                        int16_t l_207 = 0L;
                        int i, j;
                        l_203 = (l_146 = (((VECTOR(uint16_t, 16))(l_201.yyxxxyxxxxyyyxxy)).sd , l_202));
                        l_146 = (l_204[3] , l_205[5]);
                        l_203 |= l_206[2][1];
                        l_203 = l_207;
                    }
                }
                else
                { /* block id: 113 */
                    int32_t *l_208 = (void*)0;
                    int32_t l_210[2];
                    int32_t *l_209 = &l_210[1];
                    int32_t *l_211[5][6] = {{&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1]},{&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1]},{&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1]},{&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1]},{&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1],&l_210[1]}};
                    int32_t *l_212 = &l_210[1];
                    int32_t l_213 = 0x40C68FD0L;
                    uint32_t l_214[3][5] = {{0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L},{0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L},{0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L,0x7ABB9593L}};
                    VECTOR(int32_t, 16) l_215 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                    uint32_t l_216 = 0x3DCB5AACL;
                    int32_t *l_217 = &l_210[0];
                    int32_t *l_218 = &l_210[1];
                    int32_t l_219 = 0x60C94391L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_210[i] = 0x022EB11DL;
                    l_212 = (l_211[3][5] = (l_209 = (GROUP_DIVERGE(2, 1) , l_208)));
                    l_216 ^= (l_179[1][7][0] = ((VECTOR(int32_t, 8))(0x20917177L, (l_146 = l_213), l_214[2][4], 1L, ((VECTOR(int32_t, 2))(l_215.sff)), 0x1D36CE42L, 0x60B0FEF9L)).s0);
                    l_218 = l_217;
                    l_179[0][1][4] &= ((l_182 = l_219) , ((VECTOR(int32_t, 2))(0x23C260BCL, 9L)).odd);
                }
                l_222 = (l_221[5][2][0] = l_220);
            }
            else
            { /* block id: 126 */
                VECTOR(int32_t, 2) l_223 = (VECTOR(int32_t, 2))(0x61E7CC75L, 0x62DFEED0L);
                VECTOR(int32_t, 2) l_224 = (VECTOR(int32_t, 2))((-1L), 0x7ED72C55L);
                VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L), 1L, 8L, 1L);
                VECTOR(int32_t, 2) l_226 = (VECTOR(int32_t, 2))(1L, 0x7B209ACCL);
                int16_t l_227 = 0x12A3L;
                int16_t l_228 = 0x5E76L;
                uint64_t l_248[9] = {0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L,0xDFC7E60BC7536035L};
                VECTOR(uint16_t, 4) l_251 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0UL), 0UL);
                VECTOR(uint32_t, 4) l_252 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x3219D2F7L), 0x3219D2F7L);
                VECTOR(uint32_t, 16) l_253 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                VECTOR(uint32_t, 8) l_254 = (VECTOR(uint32_t, 8))(0x1019B404L, (VECTOR(uint32_t, 4))(0x1019B404L, (VECTOR(uint32_t, 2))(0x1019B404L, 0x996700F8L), 0x996700F8L), 0x996700F8L, 0x1019B404L, 0x996700F8L);
                VECTOR(uint32_t, 16) l_255 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x29DA96A5L), 0x29DA96A5L), 0x29DA96A5L, 4294967295UL, 0x29DA96A5L, (VECTOR(uint32_t, 2))(4294967295UL, 0x29DA96A5L), (VECTOR(uint32_t, 2))(4294967295UL, 0x29DA96A5L), 4294967295UL, 0x29DA96A5L, 4294967295UL, 0x29DA96A5L);
                int8_t l_256 = 1L;
                VECTOR(uint32_t, 16) l_257 = (VECTOR(uint32_t, 16))(0xF60620FBL, (VECTOR(uint32_t, 4))(0xF60620FBL, (VECTOR(uint32_t, 2))(0xF60620FBL, 0x9CF198F1L), 0x9CF198F1L), 0x9CF198F1L, 0xF60620FBL, 0x9CF198F1L, (VECTOR(uint32_t, 2))(0xF60620FBL, 0x9CF198F1L), (VECTOR(uint32_t, 2))(0xF60620FBL, 0x9CF198F1L), 0xF60620FBL, 0x9CF198F1L, 0xF60620FBL, 0x9CF198F1L);
                uint8_t l_258 = 0x28L;
                uint64_t l_259[3];
                int32_t l_260 = (-9L);
                int8_t l_332 = 0x7EL;
                uint32_t l_333 = 0x9AE18B7BL;
                uint8_t l_334 = 0xB7L;
                int32_t l_335[2];
                uint64_t l_336 = 0xB478E61842C28A44L;
                uint16_t l_337 = 0x86ADL;
                int i;
                for (i = 0; i < 3; i++)
                    l_259[i] = 0x9BC35313655EE233L;
                for (i = 0; i < 2; i++)
                    l_335[i] = 0x21063FF7L;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_223.xxxxyyxyxxxyxyyx)).s4359, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x3CEB0D5DL)).xxyyxyyy)).even))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_224.xxyyyyxx)).even)).hi, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_225.s7544031760437020)), ((VECTOR(int32_t, 8))(l_226.xyxxxyxy)).s5535573540033405))).se57b)).wxyzwzzwywxxzzzz, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_227, l_228, 0x2813B8E7L, 0x2C234BBAL)).zwwyzzzy))).s6225246227347413))).s87))), 3L, 0x61C5FAE3L)).w)
                { /* block id: 127 */
                    int32_t l_229[5] = {1L,1L,1L,1L,1L};
                    int32_t l_238[3];
                    int16_t l_239 = 2L;
                    int32_t l_240 = 8L;
                    uint8_t l_241 = 0xA3L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_238[i] = 0x18CD99A7L;
                    for (l_229[4] = 29; (l_229[4] != (-2)); --l_229[4])
                    { /* block id: 130 */
                        int32_t *l_232 = (void*)0;
                        int16_t l_233 = 1L;
                        VECTOR(int8_t, 2) l_234 = (VECTOR(int8_t, 2))(0x4EL, 5L);
                        uint32_t l_235 = 0xA2B8D20EL;
                        VECTOR(uint32_t, 4) l_236 = (VECTOR(uint32_t, 4))(0x140F11B7L, (VECTOR(uint32_t, 2))(0x140F11B7L, 3UL), 3UL);
                        VECTOR(int32_t, 8) l_237 = (VECTOR(int32_t, 8))(0x2A85B3E6L, (VECTOR(int32_t, 4))(0x2A85B3E6L, (VECTOR(int32_t, 2))(0x2A85B3E6L, 0x2AE67165L), 0x2AE67165L), 0x2AE67165L, 0x2A85B3E6L, 0x2AE67165L);
                        int i;
                        l_232 = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x7B12A1AFCBC47171L, 0x592CA548116017DDL)), (-9L), 0x5EFB31ECCFDFDA9BL)).y , (void*)0);
                        l_225.s6 = (l_233 , (((l_235 = l_234.x) , l_236.y) , (l_223.x = l_237.s5)));
                    }
                    ++l_241;
                }
                else
                { /* block id: 137 */
                    int8_t l_244 = (-1L);
                    uint16_t l_245 = 0x2C24L;
                    uint32_t l_246 = 0xF1E0DD79L;
                    int8_t l_247 = 0x42L;
                    l_247 ^= (l_244 , (l_245 , (l_223.x = l_246)));
                }
                if ((((l_143 |= (((--l_248[4]) , ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x944AL, 4UL, 65535UL, 0x7CECL, 1UL, 65535UL, 0UL, 0x7754L)).s3305545567020031)).lo, ((VECTOR(uint16_t, 2))(l_251.zy)).yxyyyxxx))), ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(l_252.wxxzzzzz)).lo, ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_253.s21)).xxxx)).yxzxwywz)).even, ((VECTOR(uint32_t, 16))(l_254.s3417545043422245)).s0f5e))).zyyyxwwxwzwxyzww, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(4294967295UL, 8UL, ((VECTOR(uint32_t, 2))(4294967287UL, 4294967288UL)), ((VECTOR(uint32_t, 8))(l_255.s5c0bee4b)), 0x791B0A4CL, (l_256 = 0x932172D3L), 0UL, 0xBE88D637L)).even, ((VECTOR(uint32_t, 16))(l_257.s9b10a179d6ce19e9)).hi))))).odd)).yyywzzywxwzzxyzy))).sba79))).zyxzzzwz))).s6) , l_258)) , l_259[2]) , l_260))
                { /* block id: 144 */
                    VECTOR(int32_t, 2) l_261 = (VECTOR(int32_t, 2))(0x6D652D0FL, 0x56CE9E95L);
                    VECTOR(int32_t, 4) l_262 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x68E064FDL), 0x68E064FDL);
                    VECTOR(int8_t, 4) l_263 = (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, (-6L)), (-6L));
                    VECTOR(int8_t, 2) l_264 = (VECTOR(int8_t, 2))(0x1BL, 0L);
                    uint8_t l_265 = 0xF5L;
                    int8_t l_266 = 0L;
                    VECTOR(int8_t, 16) l_267 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 3L), 3L), 3L, 0L, 3L, (VECTOR(int8_t, 2))(0L, 3L), (VECTOR(int8_t, 2))(0L, 3L), 0L, 3L, 0L, 3L);
                    VECTOR(int8_t, 16) l_268 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int8_t, 2))((-2L), 1L), (VECTOR(int8_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
                    uint32_t l_269[4] = {0x06327222L,0x06327222L,0x06327222L,0x06327222L};
                    int32_t l_270 = 0x22F87CA8L;
                    uint8_t l_271 = 4UL;
                    VECTOR(int8_t, 2) l_272 = (VECTOR(int8_t, 2))((-1L), 0x00L);
                    VECTOR(int32_t, 4) l_273 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-8L)), (-8L));
                    int32_t l_275 = 1L;
                    int32_t *l_274 = &l_275;
                    int i;
                    l_225.s4 &= (-1L);
                    l_274 = (((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(l_261.xx)).yyyyyyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_262.xyzywzwwwyxzzyxw)).sf3, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(l_263.yzwxxywz)).s7621154712512250, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_264.xy)).yyyyxyxxxxyyxxxy)).sa416)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_265, 2L, l_266, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(l_267.s8dbae1ef9b985e9c)).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_268.s8d322387cc21128c)).lo))))), ((VECTOR(int8_t, 4))(l_269[2], (l_270 , l_271), 0x2FL, 1L)), (-1L))))).sf5dd))).zzzwwwxzwxwxxwyz))))).s08d3, ((VECTOR(int8_t, 2))(l_272.yy)).xxxx))).w , (l_144 = (-4L))), (-1L), 1L, (-1L))).wxwxwyww)).lo, ((VECTOR(int32_t, 2))(l_273.zx)).yyxx))).hi))).yyxyyxyy))))).s1 , (void*)0);
                }
                else
                { /* block id: 148 */
                    int32_t l_277 = 0x54FCC94AL;
                    int32_t *l_276 = &l_277;
                    int32_t *l_278 = &l_277;
                    int64_t l_279 = (-1L);
                    l_278 = l_276;
                    if (l_279)
                    { /* block id: 150 */
                        uint32_t l_280 = 0xF5C43558L;
                        uint8_t l_281[4];
                        union U0 l_282 = {249UL};/* VOLATILE GLOBAL l_282 */
                        uint32_t l_283 = 0x18520669L;
                        VECTOR(int32_t, 16) l_284 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        VECTOR(int32_t, 4) l_285 = (VECTOR(int32_t, 4))(0x1DC7A7DEL, (VECTOR(int32_t, 2))(0x1DC7A7DEL, 0x0967E6ABL), 0x0967E6ABL);
                        VECTOR(int32_t, 16) l_286 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-8L)), (-8L)), (-8L), (-4L), (-8L), (VECTOR(int32_t, 2))((-4L), (-8L)), (VECTOR(int32_t, 2))((-4L), (-8L)), (-4L), (-8L), (-4L), (-8L));
                        VECTOR(int32_t, 8) l_287 = (VECTOR(int32_t, 8))(0x7694B0D4L, (VECTOR(int32_t, 4))(0x7694B0D4L, (VECTOR(int32_t, 2))(0x7694B0D4L, 0x0D7AD230L), 0x0D7AD230L), 0x0D7AD230L, 0x7694B0D4L, 0x0D7AD230L);
                        VECTOR(int32_t, 16) l_288 = (VECTOR(int32_t, 16))(0x7A33FCBBL, (VECTOR(int32_t, 4))(0x7A33FCBBL, (VECTOR(int32_t, 2))(0x7A33FCBBL, 0x10143FD5L), 0x10143FD5L), 0x10143FD5L, 0x7A33FCBBL, 0x10143FD5L, (VECTOR(int32_t, 2))(0x7A33FCBBL, 0x10143FD5L), (VECTOR(int32_t, 2))(0x7A33FCBBL, 0x10143FD5L), 0x7A33FCBBL, 0x10143FD5L, 0x7A33FCBBL, 0x10143FD5L);
                        VECTOR(int32_t, 16) l_289 = (VECTOR(int32_t, 16))(0x77561DF3L, (VECTOR(int32_t, 4))(0x77561DF3L, (VECTOR(int32_t, 2))(0x77561DF3L, (-1L)), (-1L)), (-1L), 0x77561DF3L, (-1L), (VECTOR(int32_t, 2))(0x77561DF3L, (-1L)), (VECTOR(int32_t, 2))(0x77561DF3L, (-1L)), 0x77561DF3L, (-1L), 0x77561DF3L, (-1L));
                        VECTOR(int32_t, 2) l_290 = (VECTOR(int32_t, 2))(8L, 4L);
                        VECTOR(int32_t, 8) l_291 = (VECTOR(int32_t, 8))(0x3CD4C035L, (VECTOR(int32_t, 4))(0x3CD4C035L, (VECTOR(int32_t, 2))(0x3CD4C035L, 0L), 0L), 0L, 0x3CD4C035L, 0L);
                        uint32_t l_292[2][3] = {{3UL,3UL,3UL},{3UL,3UL,3UL}};
                        int16_t l_293 = 4L;
                        VECTOR(uint64_t, 16) l_294 = (VECTOR(uint64_t, 16))(0xAC9C4EFA5E1BA662L, (VECTOR(uint64_t, 4))(0xAC9C4EFA5E1BA662L, (VECTOR(uint64_t, 2))(0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L), 0xD689E26FF939F623L), 0xD689E26FF939F623L, 0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L, (VECTOR(uint64_t, 2))(0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L), (VECTOR(uint64_t, 2))(0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L), 0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L, 0xAC9C4EFA5E1BA662L, 0xD689E26FF939F623L);
                        VECTOR(uint64_t, 8) l_295 = (VECTOR(uint64_t, 8))(0x985D28358FC43C31L, (VECTOR(uint64_t, 4))(0x985D28358FC43C31L, (VECTOR(uint64_t, 2))(0x985D28358FC43C31L, 0x0AED94CEC3EFF14AL), 0x0AED94CEC3EFF14AL), 0x0AED94CEC3EFF14AL, 0x985D28358FC43C31L, 0x0AED94CEC3EFF14AL);
                        int64_t l_296[3];
                        uint32_t l_297 = 0UL;
                        int32_t l_298 = 0x469356C6L;
                        uint8_t l_299 = 7UL;
                        int64_t l_300[6][5] = {{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L},{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L},{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L},{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L},{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L},{0x4C9AF1DE974F8D43L,0x4C9AF1DE974F8D43L,1L,0x7DB72C395E7EA1D2L,0L}};
                        int8_t l_301 = (-6L);
                        int16_t l_302[3];
                        int8_t l_303 = 0L;
                        uint16_t l_304 = 0xE926L;
                        uint32_t l_305[9][10] = {{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL},{4294967288UL,4294967288UL,1UL,0xF176A564L,4294967291UL,0xF176A564L,1UL,4294967288UL,4294967288UL,1UL}};
                        union U0 l_306 = {0UL};/* VOLATILE GLOBAL l_306 */
                        union U0 l_307 = {250UL};/* VOLATILE GLOBAL l_307 */
                        int8_t l_310 = 0L;
                        uint32_t l_311 = 4294967286UL;
                        uint8_t l_312 = 3UL;
                        int32_t l_313 = (-1L);
                        int32_t l_314 = 0x5B931081L;
                        uint16_t l_315 = 0x1AAAL;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_281[i] = 255UL;
                        for (i = 0; i < 3; i++)
                            l_296[i] = (-3L);
                        for (i = 0; i < 3; i++)
                            l_302[i] = 0x57F0L;
                        l_223.x = ((l_280 , (l_281[2] , l_282)) , ((VECTOR(int32_t, 8))(((*l_276) = ((l_256 = l_283) , 8L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_284.sdeccb6da8ddddbc3)), ((VECTOR(int32_t, 4))(l_285.xywx)).wyyyywxyxwwzxyxw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_286.s47)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_287.s72)).xxxyyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_288.sf553)).zyzzwzywxzxywwxx)).even, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_289.seda15154)).s1341526477256164, ((VECTOR(int32_t, 16))(l_290.yyyxyyyyxyxyxxxy))))))).s7ccb, ((VECTOR(int32_t, 16))(0x386C75B8L, (-1L), ((VECTOR(int32_t, 4))(l_291.s1224)), 9L, ((l_292[0][1] , (l_303 = ((((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0UL, l_293, 0xEA92A1D2CDC6EACAL, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_294.s326baf50e186ac25)).s39a1)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_295.s6755362240256052)).s03)).yyxy))), 18446744073709551606UL, 0x34E86C857C47D4B7L, 0xDF11D21E9CE888E3L, 1UL, 0x2DB29C9ED3A678C5L, 1UL, (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_296[1], ((VECTOR(uint32_t, 2))(1UL)), 1UL)), 6UL, l_297, 9UL, 1UL)).s4 , l_298), 0x4D1F397B278D9F81L, 1UL)).s38)).yyyx))).yyxyyywz, (uint64_t)l_299, (uint64_t)l_300[5][1]))).s4 , l_301) , l_302[1]))) , (-3L)), 0x1D464D60L, (-8L), 0x1EA1879BL, ((VECTOR(int32_t, 4))(0x497DFEB3L)), (-7L))).s1f35, ((VECTOR(int32_t, 4))(0x7005F1C4L))))).wyyxwwwz))).s5636012304107515)).s0127, ((VECTOR(int32_t, 4))((-2L)))))), 4L, 0x6BF2BED9L)).s11)).yyyxxyyyxxyyyyyx))).sd3, ((VECTOR(int32_t, 2))(1L))))).xyxy)).even, ((VECTOR(int32_t, 2))(0L))))), 1L, ((VECTOR(int32_t, 2))(1L)), (-7L), 0x686F13ACL, ((VECTOR(int32_t, 8))(0x508F9594L)), 0x6C2A1C6CL)).sf15c, ((VECTOR(int32_t, 4))(0x1B0C0A89L))))), 0L, 0x543C9A28L, ((VECTOR(int32_t, 8))(0x712418ACL)), 5L, 0x37CABE5EL)).even, ((VECTOR(int32_t, 8))(0x2A02D725L))))).odd)), (-5L), (-3L), 0x09F4AD45L)).s3);
                        (*l_276) ^= (-1L);
                        (*l_278) ^= ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_304, 1UL, 18446744073709551607UL, 0x2031F29B8753A326L)).xzzwyyxzwyzwywyz)), (uint64_t)(l_259[2] = (((l_227 &= l_305[4][7]) , (l_306 , l_307)) , (--l_248[5]))), (uint64_t)(l_311 &= (l_259[2] = (l_248[4] = l_310)))))))))).s7f)).even , l_312) , l_313);
                        l_315++;
                    }
                    else
                    { /* block id: 164 */
                        int8_t l_318 = 0x1BL;
                        int64_t l_319 = 1L;
                        int32_t l_321 = 2L;
                        int32_t *l_320 = &l_321;
                        int32_t l_322 = 0x78B9F14CL;
                        int32_t l_323 = (-1L);
                        uint8_t l_324 = 1UL;
                        (*l_276) = l_318;
                        (*l_278) = l_319;
                        l_320 = (void*)0;
                        l_324--;
                    }
                    for (l_277 = (-20); (l_277 > (-18)); l_277++)
                    { /* block id: 172 */
                        uint8_t l_329 = 0xF2L;
                        int16_t l_330 = 0x0582L;
                        int32_t l_331 = 1L;
                        l_330 &= l_329;
                        l_331 = 1L;
                    }
                }
                l_336 ^= (l_335[0] = (l_334 ^= (l_333 &= l_332)));
                ++l_337;
            }
            ++l_340;
            for (l_143 = 0; (l_143 == 47); l_143++)
            { /* block id: 186 */
                int32_t l_345 = 0x52103490L;
                int32_t *l_358 = (void*)0;
                int32_t *l_359 = &l_345;
                for (l_345 = (-16); (l_345 != (-18)); l_345--)
                { /* block id: 189 */
                    int32_t l_349 = (-1L);
                    int32_t *l_348 = &l_349;
                    int32_t *l_350 = &l_349;
                    int32_t *l_351 = &l_349;
                    int32_t *l_352 = (void*)0;
                    int32_t l_353[8][8] = {{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL},{0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL,0x63807436L,0x63807436L,0x000588CFL}};
                    VECTOR(int32_t, 16) l_356 = (VECTOR(int32_t, 16))(0x71BC9D70L, (VECTOR(int32_t, 4))(0x71BC9D70L, (VECTOR(int32_t, 2))(0x71BC9D70L, 0x36127EAEL), 0x36127EAEL), 0x36127EAEL, 0x71BC9D70L, 0x36127EAEL, (VECTOR(int32_t, 2))(0x71BC9D70L, 0x36127EAEL), (VECTOR(int32_t, 2))(0x71BC9D70L, 0x36127EAEL), 0x71BC9D70L, 0x36127EAEL, 0x71BC9D70L, 0x36127EAEL);
                    int32_t l_357 = (-4L);
                    int i, j;
                    l_350 = (l_348 = (void*)0);
                    l_352 = l_351;
                    l_357 = (((l_353[0][5] = GROUP_DIVERGE(2, 1)) , (++l_145.z)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_356.scd1bfa4073b80c86)).s47)).even);
                }
                l_359 = l_358;
            }
            l_361 &= l_360;
        }
        --l_362;
        if ((l_367 = (l_366 &= l_365)))
        { /* block id: 204 */
            int32_t l_368 = 0x4E02C5EAL;
            if (l_368)
            { /* block id: 205 */
                int32_t l_369 = (-9L);
                for (l_369 = 0; (l_369 > (-30)); --l_369)
                { /* block id: 208 */
                    int32_t l_372 = 0x42B7AB4CL;
                    uint32_t l_381 = 0xB06A90F7L;
                    uint16_t l_382 = 0UL;
                    for (l_372 = 20; (l_372 != 20); ++l_372)
                    { /* block id: 211 */
                        int64_t l_375 = 0x703EDE6BDD7E7F9EL;
                        int8_t l_376 = 0x30L;
                        uint8_t l_377 = 0x12L;
                        int32_t l_379 = (-1L);
                        int32_t *l_378[7][2][1] = {{{&l_379},{&l_379}},{{&l_379},{&l_379}},{{&l_379},{&l_379}},{{&l_379},{&l_379}},{{&l_379},{&l_379}},{{&l_379},{&l_379}},{{&l_379},{&l_379}}};
                        int32_t *l_380 = (void*)0;
                        int i, j, k;
                        l_366 = l_375;
                        l_377 &= l_376;
                        l_380 = (l_378[2][0][0] = (void*)0);
                    }
                    l_366 = (GROUP_DIVERGE(0, 1) , l_381);
                    if (l_382)
                    { /* block id: 218 */
                        l_372 = 0x7B4B6336L;
                    }
                    else
                    { /* block id: 220 */
                        int8_t l_383 = 0x23L;
                        int64_t l_384 = 0x33FA38C4A002CF86L;
                        uint32_t l_385 = 0xCE0BAE9BL;
                        uint16_t l_390 = 0x2853L;
                        uint16_t *l_389 = &l_390;
                        uint16_t **l_388[1][8] = {{&l_389,&l_389,&l_389,&l_389,&l_389,&l_389,&l_389,&l_389}};
                        uint16_t **l_391[4] = {&l_389,&l_389,&l_389,&l_389};
                        int32_t l_393 = 0x435E1538L;
                        int32_t *l_392 = &l_393;
                        int32_t *l_394 = (void*)0;
                        int i, j;
                        ++l_385;
                        l_391[1] = l_388[0][5];
                        l_394 = l_392;
                    }
                }
            }
            else
            { /* block id: 226 */
                int32_t l_433[10] = {0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L,0x0AA536D5L};
                int32_t *l_432 = &l_433[6];
                int32_t *l_434 = &l_433[6];
                int i;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x46BA2ED9L, 0x63BC60A1L)).xyxxyyyyyxxxyyyx)).s8)
                { /* block id: 227 */
                    int32_t l_396 = 0x4589D9BEL;
                    int32_t *l_395 = &l_396;
                    l_395 = (void*)0;
                }
                else
                { /* block id: 229 */
                    int32_t l_398 = (-8L);
                    int32_t *l_397 = &l_398;
                    int32_t *l_399 = &l_398;
                    l_399 = l_397;
                    for (l_398 = 0; (l_398 < (-20)); l_398--)
                    { /* block id: 233 */
                        uint64_t l_402[4] = {0x6D7EAB7ACE291258L,0x6D7EAB7ACE291258L,0x6D7EAB7ACE291258L,0x6D7EAB7ACE291258L};
                        int64_t l_403 = 0x204EB19E168B00C2L;
                        int8_t l_404[9] = {1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L};
                        int i;
                        l_399 = ((l_403 &= l_402[1]) , (l_404[5] , (void*)0));
                        l_397 = (void*)0;
                    }
                    for (l_398 = 22; (l_398 < 17); l_398 = safe_sub_func_uint16_t_u_u(l_398, 3))
                    { /* block id: 240 */
                        VECTOR(int32_t, 4) l_407 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
                        int32_t l_409 = (-9L);
                        int32_t *l_408[4];
                        int32_t *l_410[5];
                        int32_t *l_411 = &l_409;
                        uint8_t l_412 = 7UL;
                        int16_t l_413 = 1L;
                        int64_t l_414 = (-1L);
                        VECTOR(int32_t, 8) l_415 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x655808AFL), 0x655808AFL), 0x655808AFL, (-10L), 0x655808AFL);
                        VECTOR(int32_t, 2) l_416 = (VECTOR(int32_t, 2))(0x16A622D0L, 0x0AEE44E0L);
                        VECTOR(int32_t, 8) l_417 = (VECTOR(int32_t, 8))(0x3B2BDB58L, (VECTOR(int32_t, 4))(0x3B2BDB58L, (VECTOR(int32_t, 2))(0x3B2BDB58L, 0x0E74484EL), 0x0E74484EL), 0x0E74484EL, 0x3B2BDB58L, 0x0E74484EL);
                        int32_t l_418[5][2] = {{0x29D26FC8L,0x5AF2E9ECL},{0x29D26FC8L,0x5AF2E9ECL},{0x29D26FC8L,0x5AF2E9ECL},{0x29D26FC8L,0x5AF2E9ECL},{0x29D26FC8L,0x5AF2E9ECL}};
                        int64_t l_419 = 0x050E780B272D3FECL;
                        VECTOR(int32_t, 16) l_420 = (VECTOR(int32_t, 16))(0x02D4506FL, (VECTOR(int32_t, 4))(0x02D4506FL, (VECTOR(int32_t, 2))(0x02D4506FL, 1L), 1L), 1L, 0x02D4506FL, 1L, (VECTOR(int32_t, 2))(0x02D4506FL, 1L), (VECTOR(int32_t, 2))(0x02D4506FL, 1L), 0x02D4506FL, 1L, 0x02D4506FL, 1L);
                        VECTOR(int32_t, 2) l_421 = (VECTOR(int32_t, 2))(0x60D5E971L, 1L);
                        int32_t l_422[8][3] = {{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)},{(-1L),0x54B3F3EEL,(-1L)}};
                        VECTOR(int32_t, 16) l_423 = (VECTOR(int32_t, 16))(0x4547BACBL, (VECTOR(int32_t, 4))(0x4547BACBL, (VECTOR(int32_t, 2))(0x4547BACBL, 0L), 0L), 0L, 0x4547BACBL, 0L, (VECTOR(int32_t, 2))(0x4547BACBL, 0L), (VECTOR(int32_t, 2))(0x4547BACBL, 0L), 0x4547BACBL, 0L, 0x4547BACBL, 0L);
                        VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))(0x0B2D08BCL, 1L);
                        VECTOR(int32_t, 16) l_425 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x54C0335EL), 0x54C0335EL), 0x54C0335EL, 0L, 0x54C0335EL, (VECTOR(int32_t, 2))(0L, 0x54C0335EL), (VECTOR(int32_t, 2))(0L, 0x54C0335EL), 0L, 0x54C0335EL, 0L, 0x54C0335EL);
                        union U0 l_426 = {255UL};/* VOLATILE GLOBAL l_426 */
                        uint16_t l_427 = 0xDCF6L;
                        int32_t l_428 = (-9L);
                        int8_t l_429 = 0x1FL;
                        int16_t l_430 = 0L;
                        int64_t l_431 = 0L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_408[i] = &l_409;
                        for (i = 0; i < 5; i++)
                            l_410[i] = &l_409;
                        l_411 = (((VECTOR(int32_t, 16))(l_407.wxwxyxyyxxyzyxxz)).s6 , (l_410[0] = (l_399 = l_408[3])));
                        (*l_399) = 0x76AF388DL;
                        l_429 |= (l_412 , ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))((-1L), l_413, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))((-1L), 0x41FC93D0L)).xyxxxxyy, (int32_t)0x7935C776L, (int32_t)((VECTOR(int32_t, 16))(l_414, 0L, ((VECTOR(int32_t, 2))(l_415.s66)), ((VECTOR(int32_t, 2))(0x58928E7DL, 9L)), ((VECTOR(int32_t, 4))(0x68F6FAFFL, 0x49209506L, 2L, (-6L))), 0x2E30386CL, 0x734A80F5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_416.yyxxyxyyyxxyxxyy)).sdc)), (-8L), 0x1091330AL)).s7))).odd)).zyxzzyyx, ((VECTOR(int32_t, 4))(l_417.s2234)).wxxzzyzz))), (l_419 ^= l_418[3][1]), 0x0741B08AL, 0x5872CF65L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_420.sf58ee165)).s45, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_421.yxxxxyyxxyyyxyxx)))).sc1ed)).even))), 0x237D4687L)).hi, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(0x310CE17EL, 0x67EF652DL, 0x030393F3L, 9L)), l_422[3][1], 0L, 0L)).s15)).xxxyyxyx, ((VECTOR(int32_t, 2))(0x67CA7E5AL, 0x4AF59095L)).xyyxyxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(2L, (-1L))))).yyyyyxyy))), ((VECTOR(int32_t, 2))((-8L), 0x3291E2A8L)).xyxxyxxx))).s14, ((VECTOR(int32_t, 16))(l_423.sa2d901d7b244248f)).s9b, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(0x63DE6470L, 0x1AC47DBBL)), ((VECTOR(int32_t, 2))(l_424.yx)))))))).yxxx, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_425.s154f)).zxzwwzzyxzwyzzwy))))).odd)).s1565241031363666, (int32_t)(l_426 , l_427)))))).sf))), 0L, l_428, (-9L), ((VECTOR(int32_t, 8))((-5L))))).s9e2a, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x4A4382E4L))))).yzwzyzzw))).s6165330272453306, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x3A91C9A9L))))).sb);
                        l_431 = l_430;
                    }
                }
                l_432 = (void*)0;
                l_432 = l_434;
            }
            for (l_368 = 0; (l_368 >= 14); l_368++)
            { /* block id: 255 */
                int32_t l_437 = (-1L);
                for (l_437 = 0; (l_437 == (-20)); l_437--)
                { /* block id: 258 */
                    int32_t l_440 = (-5L);
                    for (l_440 = 0; (l_440 >= 11); l_440 = safe_add_func_uint32_t_u_u(l_440, 6))
                    { /* block id: 261 */
                        int32_t l_443[7] = {0x47DD618EL,1L,0x47DD618EL,0x47DD618EL,1L,0x47DD618EL,0x47DD618EL};
                        int32_t l_444 = (-1L);
                        VECTOR(int32_t, 8) l_445 = (VECTOR(int32_t, 8))(0x26F4E3DEL, (VECTOR(int32_t, 4))(0x26F4E3DEL, (VECTOR(int32_t, 2))(0x26F4E3DEL, 0L), 0L), 0L, 0x26F4E3DEL, 0L);
                        int32_t l_446 = 0x688A8EA4L;
                        uint32_t l_447 = 4294967295UL;
                        uint32_t l_448 = 4UL;
                        int i;
                        l_443[2] ^= (l_366 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x0FE4CBD1L, (-7L), 0L, 0x0B73A517L)).hi)).xyxyxyxx)).hi)).z);
                        l_366 = (l_444 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_445.s3706)).wzyxxzyywzxxwxyw)).s1);
                        l_366 = l_446;
                        l_448 ^= l_447;
                    }
                    l_366 = (GROUP_DIVERGE(1, 1) , (l_440 = ((VECTOR(int32_t, 2))(0x74014EC9L, (-1L))).even));
                }
            }
        }
        else
        { /* block id: 272 */
            uint8_t l_449 = 1UL;
            ++l_449;
            for (l_449 = (-25); (l_449 <= 53); ++l_449)
            { /* block id: 276 */
                VECTOR(int32_t, 8) l_455 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                int32_t *l_454 = (void*)0;
                int32_t *l_456[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_456[2][1] = l_454;
                for (l_455.s3 = 27; (l_455.s3 != (-25)); l_455.s3 = safe_sub_func_uint16_t_u_u(l_455.s3, 9))
                { /* block id: 280 */
                    int32_t l_459 = 0x32B8C5BEL;
                    for (l_459 = (-4); (l_459 >= (-1)); l_459++)
                    { /* block id: 283 */
                        int64_t l_462[9][6][4] = {{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}},{{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)},{0x19FC1B8733A832E2L,3L,0x0B246863FD92401AL,(-5L)}}};
                        int8_t l_463 = 0L;
                        uint8_t l_464 = 0x01L;
                        VECTOR(int32_t, 8) l_465 = (VECTOR(int32_t, 8))(0x38DC0C66L, (VECTOR(int32_t, 4))(0x38DC0C66L, (VECTOR(int32_t, 2))(0x38DC0C66L, (-10L)), (-10L)), (-10L), 0x38DC0C66L, (-10L));
                        int32_t l_466 = 0x22E0EE37L;
                        int32_t l_467 = 1L;
                        uint16_t l_468 = 65535UL;
                        int i, j, k;
                        l_463 &= l_462[2][2][0];
                        l_465.s1 = l_464;
                        ++l_468;
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_86;
        result += l_362;
        result += l_365;
        result += l_366;
        result += l_367;
        atomic_add(&p_762->g_special_values[34 * get_linear_group_id() + 6], result);
    }
    else
    { /* block id: 291 */
        (1 + 1);
    }
    return p_762->g_77;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S1 c_763;
    struct S1* p_762 = &c_763;
    struct S1 c_764 = {
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_762->g_3
        (void*)0, // p_762->g_6
        1L, // p_762->g_31
        &p_762->g_31, // p_762->g_30
        &p_762->g_30, // p_762->g_29
        {{0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L,0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L},{0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L,0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L},{0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L,0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L},{0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L,0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L},{0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L,0xD06F62939C010580L,0xC1ABDF11CAF1E2CDL,0xD06F62939C010580L}}, // p_762->g_35
        65535UL, // p_762->g_41
        (-5L), // p_762->g_60
        0x3A6F2DB4L, // p_762->g_77
        0x2023EC3B9196E452L, // p_762->g_473
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 4L), 4L), 4L, 2L, 4L, (VECTOR(int64_t, 2))(2L, 4L), (VECTOR(int64_t, 2))(2L, 4L), 2L, 4L, 2L, 4L), // p_762->g_499
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x393B028FL), 0x393B028FL), // p_762->g_500
        (VECTOR(uint32_t, 16))(0xDEF3E67CL, (VECTOR(uint32_t, 4))(0xDEF3E67CL, (VECTOR(uint32_t, 2))(0xDEF3E67CL, 5UL), 5UL), 5UL, 0xDEF3E67CL, 5UL, (VECTOR(uint32_t, 2))(0xDEF3E67CL, 5UL), (VECTOR(uint32_t, 2))(0xDEF3E67CL, 5UL), 0xDEF3E67CL, 5UL, 0xDEF3E67CL, 5UL), // p_762->g_501
        (VECTOR(int64_t, 4))(0x23148886D9A1ABF2L, (VECTOR(int64_t, 2))(0x23148886D9A1ABF2L, (-3L)), (-3L)), // p_762->g_504
        {255UL}, // p_762->g_507
        0UL, // p_762->g_510
        0x11EACD9F30CE9AF5L, // p_762->g_512
        0x77A011ABA56D9D09L, // p_762->g_515
        5L, // p_762->g_517
        (void*)0, // p_762->g_520
        &p_762->g_520, // p_762->g_519
        (VECTOR(int16_t, 16))(0x755DL, (VECTOR(int16_t, 4))(0x755DL, (VECTOR(int16_t, 2))(0x755DL, 0x1391L), 0x1391L), 0x1391L, 0x755DL, 0x1391L, (VECTOR(int16_t, 2))(0x755DL, 0x1391L), (VECTOR(int16_t, 2))(0x755DL, 0x1391L), 0x755DL, 0x1391L, 0x755DL, 0x1391L), // p_762->g_525
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD82BL), 0xD82BL), // p_762->g_547
        0x6D4E9CBBL, // p_762->g_653
        {0UL,1UL,0x32L,1UL,0UL,0UL,1UL,0x32L,1UL,0UL}, // p_762->g_654
        0x614B5B1FL, // p_762->g_657
        {{{1UL,1UL,0x5AA4L,0x85F7L,0x7C40L,65528UL,0xFEA1L,0xEED2L,0xFEA1L},{1UL,1UL,0x5AA4L,0x85F7L,0x7C40L,65528UL,0xFEA1L,0xEED2L,0xFEA1L},{1UL,1UL,0x5AA4L,0x85F7L,0x7C40L,65528UL,0xFEA1L,0xEED2L,0xFEA1L},{1UL,1UL,0x5AA4L,0x85F7L,0x7C40L,65528UL,0xFEA1L,0xEED2L,0xFEA1L}}}, // p_762->g_660
        &p_762->g_660[0][3][3], // p_762->g_659
        (VECTOR(int32_t, 4))(0x3B0589D4L, (VECTOR(int32_t, 2))(0x3B0589D4L, 0x6E221BCDL), 0x6E221BCDL), // p_762->g_661
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), // p_762->g_666
        (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int64_t, 2))(5L, (-1L)), (VECTOR(int64_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L)), // p_762->g_714
        {{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}},{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}},{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}},{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}},{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}},{{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77},{&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,(void*)0,&p_762->g_77,&p_762->g_77}}}, // p_762->g_717
        0xC4630A398DC99C8DL, // p_762->g_721
        {{(void*)0,&p_762->g_721,&p_762->g_721,(void*)0,(void*)0,&p_762->g_721,&p_762->g_721,(void*)0},{(void*)0,&p_762->g_721,&p_762->g_721,(void*)0,(void*)0,&p_762->g_721,&p_762->g_721,(void*)0},{(void*)0,&p_762->g_721,&p_762->g_721,(void*)0,(void*)0,&p_762->g_721,&p_762->g_721,(void*)0}}, // p_762->g_720
        &p_762->g_720[1][3], // p_762->g_719
        0L, // p_762->g_724
        0, // p_762->v_collective
        sequence_input[get_global_id(0)], // p_762->global_0_offset
        sequence_input[get_global_id(1)], // p_762->global_1_offset
        sequence_input[get_global_id(2)], // p_762->global_2_offset
        sequence_input[get_local_id(0)], // p_762->local_0_offset
        sequence_input[get_local_id(1)], // p_762->local_1_offset
        sequence_input[get_local_id(2)], // p_762->local_2_offset
        sequence_input[get_group_id(0)], // p_762->group_0_offset
        sequence_input[get_group_id(1)], // p_762->group_1_offset
        sequence_input[get_group_id(2)], // p_762->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_762->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_763 = c_764;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_762);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_762->g_31, "p_762->g_31", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_762->g_35[i][j], "p_762->g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_762->g_41, "p_762->g_41", print_hash_value);
    transparent_crc(p_762->g_60, "p_762->g_60", print_hash_value);
    transparent_crc(p_762->g_77, "p_762->g_77", print_hash_value);
    transparent_crc(p_762->g_473, "p_762->g_473", print_hash_value);
    transparent_crc(p_762->g_499.s0, "p_762->g_499.s0", print_hash_value);
    transparent_crc(p_762->g_499.s1, "p_762->g_499.s1", print_hash_value);
    transparent_crc(p_762->g_499.s2, "p_762->g_499.s2", print_hash_value);
    transparent_crc(p_762->g_499.s3, "p_762->g_499.s3", print_hash_value);
    transparent_crc(p_762->g_499.s4, "p_762->g_499.s4", print_hash_value);
    transparent_crc(p_762->g_499.s5, "p_762->g_499.s5", print_hash_value);
    transparent_crc(p_762->g_499.s6, "p_762->g_499.s6", print_hash_value);
    transparent_crc(p_762->g_499.s7, "p_762->g_499.s7", print_hash_value);
    transparent_crc(p_762->g_499.s8, "p_762->g_499.s8", print_hash_value);
    transparent_crc(p_762->g_499.s9, "p_762->g_499.s9", print_hash_value);
    transparent_crc(p_762->g_499.sa, "p_762->g_499.sa", print_hash_value);
    transparent_crc(p_762->g_499.sb, "p_762->g_499.sb", print_hash_value);
    transparent_crc(p_762->g_499.sc, "p_762->g_499.sc", print_hash_value);
    transparent_crc(p_762->g_499.sd, "p_762->g_499.sd", print_hash_value);
    transparent_crc(p_762->g_499.se, "p_762->g_499.se", print_hash_value);
    transparent_crc(p_762->g_499.sf, "p_762->g_499.sf", print_hash_value);
    transparent_crc(p_762->g_500.x, "p_762->g_500.x", print_hash_value);
    transparent_crc(p_762->g_500.y, "p_762->g_500.y", print_hash_value);
    transparent_crc(p_762->g_500.z, "p_762->g_500.z", print_hash_value);
    transparent_crc(p_762->g_500.w, "p_762->g_500.w", print_hash_value);
    transparent_crc(p_762->g_501.s0, "p_762->g_501.s0", print_hash_value);
    transparent_crc(p_762->g_501.s1, "p_762->g_501.s1", print_hash_value);
    transparent_crc(p_762->g_501.s2, "p_762->g_501.s2", print_hash_value);
    transparent_crc(p_762->g_501.s3, "p_762->g_501.s3", print_hash_value);
    transparent_crc(p_762->g_501.s4, "p_762->g_501.s4", print_hash_value);
    transparent_crc(p_762->g_501.s5, "p_762->g_501.s5", print_hash_value);
    transparent_crc(p_762->g_501.s6, "p_762->g_501.s6", print_hash_value);
    transparent_crc(p_762->g_501.s7, "p_762->g_501.s7", print_hash_value);
    transparent_crc(p_762->g_501.s8, "p_762->g_501.s8", print_hash_value);
    transparent_crc(p_762->g_501.s9, "p_762->g_501.s9", print_hash_value);
    transparent_crc(p_762->g_501.sa, "p_762->g_501.sa", print_hash_value);
    transparent_crc(p_762->g_501.sb, "p_762->g_501.sb", print_hash_value);
    transparent_crc(p_762->g_501.sc, "p_762->g_501.sc", print_hash_value);
    transparent_crc(p_762->g_501.sd, "p_762->g_501.sd", print_hash_value);
    transparent_crc(p_762->g_501.se, "p_762->g_501.se", print_hash_value);
    transparent_crc(p_762->g_501.sf, "p_762->g_501.sf", print_hash_value);
    transparent_crc(p_762->g_504.x, "p_762->g_504.x", print_hash_value);
    transparent_crc(p_762->g_504.y, "p_762->g_504.y", print_hash_value);
    transparent_crc(p_762->g_504.z, "p_762->g_504.z", print_hash_value);
    transparent_crc(p_762->g_504.w, "p_762->g_504.w", print_hash_value);
    transparent_crc(p_762->g_507.f1, "p_762->g_507.f1", print_hash_value);
    transparent_crc(p_762->g_510, "p_762->g_510", print_hash_value);
    transparent_crc(p_762->g_512, "p_762->g_512", print_hash_value);
    transparent_crc(p_762->g_515, "p_762->g_515", print_hash_value);
    transparent_crc(p_762->g_517, "p_762->g_517", print_hash_value);
    transparent_crc(p_762->g_525.s0, "p_762->g_525.s0", print_hash_value);
    transparent_crc(p_762->g_525.s1, "p_762->g_525.s1", print_hash_value);
    transparent_crc(p_762->g_525.s2, "p_762->g_525.s2", print_hash_value);
    transparent_crc(p_762->g_525.s3, "p_762->g_525.s3", print_hash_value);
    transparent_crc(p_762->g_525.s4, "p_762->g_525.s4", print_hash_value);
    transparent_crc(p_762->g_525.s5, "p_762->g_525.s5", print_hash_value);
    transparent_crc(p_762->g_525.s6, "p_762->g_525.s6", print_hash_value);
    transparent_crc(p_762->g_525.s7, "p_762->g_525.s7", print_hash_value);
    transparent_crc(p_762->g_525.s8, "p_762->g_525.s8", print_hash_value);
    transparent_crc(p_762->g_525.s9, "p_762->g_525.s9", print_hash_value);
    transparent_crc(p_762->g_525.sa, "p_762->g_525.sa", print_hash_value);
    transparent_crc(p_762->g_525.sb, "p_762->g_525.sb", print_hash_value);
    transparent_crc(p_762->g_525.sc, "p_762->g_525.sc", print_hash_value);
    transparent_crc(p_762->g_525.sd, "p_762->g_525.sd", print_hash_value);
    transparent_crc(p_762->g_525.se, "p_762->g_525.se", print_hash_value);
    transparent_crc(p_762->g_525.sf, "p_762->g_525.sf", print_hash_value);
    transparent_crc(p_762->g_547.x, "p_762->g_547.x", print_hash_value);
    transparent_crc(p_762->g_547.y, "p_762->g_547.y", print_hash_value);
    transparent_crc(p_762->g_547.z, "p_762->g_547.z", print_hash_value);
    transparent_crc(p_762->g_547.w, "p_762->g_547.w", print_hash_value);
    transparent_crc(p_762->g_653, "p_762->g_653", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_762->g_654[i], "p_762->g_654[i]", print_hash_value);

    }
    transparent_crc(p_762->g_657, "p_762->g_657", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_762->g_660[i][j][k], "p_762->g_660[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_762->g_661.x, "p_762->g_661.x", print_hash_value);
    transparent_crc(p_762->g_661.y, "p_762->g_661.y", print_hash_value);
    transparent_crc(p_762->g_661.z, "p_762->g_661.z", print_hash_value);
    transparent_crc(p_762->g_661.w, "p_762->g_661.w", print_hash_value);
    transparent_crc(p_762->g_666.x, "p_762->g_666.x", print_hash_value);
    transparent_crc(p_762->g_666.y, "p_762->g_666.y", print_hash_value);
    transparent_crc(p_762->g_666.z, "p_762->g_666.z", print_hash_value);
    transparent_crc(p_762->g_666.w, "p_762->g_666.w", print_hash_value);
    transparent_crc(p_762->g_714.s0, "p_762->g_714.s0", print_hash_value);
    transparent_crc(p_762->g_714.s1, "p_762->g_714.s1", print_hash_value);
    transparent_crc(p_762->g_714.s2, "p_762->g_714.s2", print_hash_value);
    transparent_crc(p_762->g_714.s3, "p_762->g_714.s3", print_hash_value);
    transparent_crc(p_762->g_714.s4, "p_762->g_714.s4", print_hash_value);
    transparent_crc(p_762->g_714.s5, "p_762->g_714.s5", print_hash_value);
    transparent_crc(p_762->g_714.s6, "p_762->g_714.s6", print_hash_value);
    transparent_crc(p_762->g_714.s7, "p_762->g_714.s7", print_hash_value);
    transparent_crc(p_762->g_714.s8, "p_762->g_714.s8", print_hash_value);
    transparent_crc(p_762->g_714.s9, "p_762->g_714.s9", print_hash_value);
    transparent_crc(p_762->g_714.sa, "p_762->g_714.sa", print_hash_value);
    transparent_crc(p_762->g_714.sb, "p_762->g_714.sb", print_hash_value);
    transparent_crc(p_762->g_714.sc, "p_762->g_714.sc", print_hash_value);
    transparent_crc(p_762->g_714.sd, "p_762->g_714.sd", print_hash_value);
    transparent_crc(p_762->g_714.se, "p_762->g_714.se", print_hash_value);
    transparent_crc(p_762->g_714.sf, "p_762->g_714.sf", print_hash_value);
    transparent_crc(p_762->g_721, "p_762->g_721", print_hash_value);
    transparent_crc(p_762->g_724, "p_762->g_724", print_hash_value);
    transparent_crc(p_762->v_collective, "p_762->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 34; i++)
            transparent_crc(p_762->g_special_values[i + 34 * get_linear_group_id()], "p_762->g_special_values[i + 34 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 34; i++)
            transparent_crc(p_762->l_special_values[i], "p_762->l_special_values[i]", print_hash_value);
    transparent_crc(p_762->l_comm_values[get_linear_local_id()], "p_762->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_762->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_762->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
