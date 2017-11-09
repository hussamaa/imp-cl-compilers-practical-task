// --atomics 61 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 5,54,9 -l 1,27,1
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

__constant uint32_t permutations[10][27] = {
{18,0,7,25,2,16,9,20,6,19,5,26,17,21,8,10,1,22,15,24,4,11,23,13,3,14,12}, // permutation 0
{15,12,13,23,17,25,20,4,0,14,18,2,8,1,3,11,9,6,16,26,5,24,7,21,19,22,10}, // permutation 1
{11,2,26,16,18,6,7,15,12,5,1,14,20,17,25,8,24,3,19,13,23,4,22,21,0,10,9}, // permutation 2
{22,8,18,17,7,19,21,3,23,25,4,2,16,20,0,13,11,12,15,24,9,26,1,10,14,6,5}, // permutation 3
{23,16,22,3,6,1,5,18,8,9,4,7,14,2,10,15,17,20,11,26,25,13,24,12,0,21,19}, // permutation 4
{18,7,14,10,15,26,1,2,17,5,23,3,6,4,11,19,20,8,9,21,24,12,16,0,22,25,13}, // permutation 5
{16,14,22,18,8,26,21,10,7,13,2,11,25,4,6,15,19,0,3,23,5,17,20,12,24,9,1}, // permutation 6
{23,2,9,17,8,15,10,3,14,24,20,0,5,7,16,12,1,22,26,6,21,19,11,4,13,18,25}, // permutation 7
{16,11,25,18,10,17,12,13,20,26,21,24,7,5,15,2,19,0,3,4,23,1,22,6,14,8,9}, // permutation 8
{6,17,23,1,26,19,25,22,2,9,4,21,3,0,18,8,16,13,20,14,5,10,11,7,12,24,15} // permutation 9
};

// Seed: 137751801

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    uint32_t g_4[1];
    int16_t g_23[3][4][2];
    int32_t *g_41[8][10][1];
    int32_t ** volatile g_40[10][2];
    int32_t ** volatile g_42;
    int32_t ** volatile g_43;
    uint32_t g_62;
    int64_t g_77;
    int32_t g_79;
    int32_t g_83;
    int32_t g_84;
    uint16_t g_85;
    uint32_t g_88;
    int64_t g_96;
    int8_t g_97;
    uint8_t g_98;
    int32_t *g_104;
    VECTOR(int8_t, 4) g_111;
    uint64_t g_120[9];
    VECTOR(int16_t, 8) g_127;
    int16_t g_140;
    uint32_t *g_145[10][9];
    uint32_t **g_144[3][7];
    int16_t *g_147;
    int16_t **g_146;
    VECTOR(int8_t, 2) g_153;
    VECTOR(int8_t, 4) g_154;
    VECTOR(int32_t, 16) g_156;
    VECTOR(int32_t, 2) g_157;
    VECTOR(int64_t, 16) g_213;
    int8_t g_217[6][1];
    VECTOR(int32_t, 8) g_232;
    VECTOR(int32_t, 8) g_234;
    VECTOR(uint64_t, 16) g_245;
    volatile uint8_t g_261;
    volatile VECTOR(int16_t, 16) g_316;
    volatile uint16_t g_351;
    VECTOR(uint32_t, 2) g_362;
    volatile VECTOR(int32_t, 8) g_385;
    volatile VECTOR(int32_t, 16) g_388;
    VECTOR(int8_t, 16) g_403;
    VECTOR(uint32_t, 16) g_408;
    uint64_t g_411;
    VECTOR(int16_t, 8) g_427;
    volatile VECTOR(int8_t, 2) g_453;
    int8_t g_485[10];
    uint64_t g_488;
    int32_t **g_492;
    VECTOR(int64_t, 2) g_496;
    VECTOR(int32_t, 2) g_555;
    int16_t g_559[5][6];
    uint16_t **g_579;
    int64_t *** volatile g_583;
    volatile VECTOR(int64_t, 2) g_588;
    VECTOR(uint64_t, 2) g_590;
    volatile VECTOR(int8_t, 2) g_620;
    volatile VECTOR(uint16_t, 16) g_621;
    VECTOR(int8_t, 2) g_624;
    VECTOR(int8_t, 8) g_626;
    int64_t *g_628;
    volatile VECTOR(uint16_t, 4) g_630;
    volatile VECTOR(int16_t, 8) g_633;
    int64_t *g_636;
    volatile uint8_t *g_660;
    volatile uint8_t * volatile *g_659;
    volatile VECTOR(int64_t, 16) g_661;
    int32_t ** volatile g_675;
    int32_t * volatile g_677;
    VECTOR(int8_t, 16) g_690;
    int32_t **g_698;
    VECTOR(int32_t, 2) g_711;
    int64_t * volatile * volatile g_733;
    int64_t * volatile * volatile *g_732;
    uint32_t g_734;
    int8_t g_770;
    uint16_t g_781;
    VECTOR(uint8_t, 2) g_785;
    int32_t g_789;
    uint32_t g_811;
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
uint64_t  func_1(struct S0 * p_812);
int32_t  func_13(uint32_t  p_14, int32_t * p_15, uint32_t  p_16, struct S0 * p_812);
int16_t  func_26(int32_t * p_27, int32_t  p_28, int32_t * p_29, uint32_t  p_30, int64_t  p_31, struct S0 * p_812);
int32_t * func_32(int64_t  p_33, int16_t * p_34, int64_t  p_35, struct S0 * p_812);
int16_t * func_36(uint32_t  p_37, struct S0 * p_812);
int32_t * func_45(int32_t ** p_46, uint16_t  p_47, int32_t * p_48, uint32_t  p_49, int32_t  p_50, struct S0 * p_812);
int32_t ** func_51(int32_t  p_52, int32_t  p_53, int16_t  p_54, struct S0 * p_812);
int32_t  func_55(int16_t * p_56, int16_t ** p_57, uint32_t  p_58, int32_t ** p_59, uint64_t  p_60, struct S0 * p_812);
int16_t ** func_64(uint32_t * p_65, struct S0 * p_812);
uint32_t * func_66(int16_t * p_67, int64_t  p_68, uint64_t  p_69, struct S0 * p_812);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_812->g_3 p_812->g_4 p_812->g_811
 * writes: p_812->g_3 p_812->g_4
 */
uint64_t  func_1(struct S0 * p_812)
{ /* block id: 4 */
    int32_t *l_2[10][6][2] = {{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}},{{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3},{&p_812->g_3,&p_812->g_3}}};
    int64_t *l_627 = (void*)0;
    VECTOR(uint8_t, 8) l_786 = (VECTOR(uint8_t, 8))(0x74L, (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 0x26L), 0x26L), 0x26L, 0x74L, 0x26L);
    uint32_t l_807[4] = {0x10396E88L,0x10396E88L,0x10396E88L,0x10396E88L};
    int i, j, k;
    p_812->g_3 |= 0x3E1D925BL;
    p_812->g_4[0]--;
    for (p_812->g_3 = 0; (p_812->g_3 < 18); p_812->g_3++)
    { /* block id: 9 */
        int16_t *l_22[10] = {&p_812->g_23[0][1][1],&p_812->g_23[0][2][1],(void*)0,&p_812->g_23[0][2][1],&p_812->g_23[0][1][1],&p_812->g_23[0][1][1],&p_812->g_23[0][2][1],(void*)0,&p_812->g_23[0][2][1],&p_812->g_23[0][1][1]};
        int32_t l_24 = 0x11F9E6A0L;
        int32_t l_25 = 0x4D4E2095L;
        int16_t **l_44 = &l_22[6];
        int32_t l_629[5] = {0x5AB1A784L,0x5AB1A784L,0x5AB1A784L,0x5AB1A784L,0x5AB1A784L};
        uint32_t *l_780 = &p_812->g_734;
        int64_t l_784 = (-6L);
        int64_t l_787 = 0x7D002F3A6D3C833DL;
        uint64_t *l_788 = &p_812->g_488;
        uint8_t *l_798 = (void*)0;
        uint8_t *l_799 = &p_812->g_98;
        int64_t *l_806 = &l_787;
        uint64_t *l_808 = (void*)0;
        uint64_t *l_809 = &p_812->g_120[6];
        uint16_t l_810 = 0x456BL;
        int i;
        (1 + 1);
    }
    return p_812->g_811;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_630 p_812->g_633 p_812->g_104 p_812->g_88 p_812->g_488 p_812->g_98 p_812->g_659 p_812->g_3 p_812->g_661 p_812->g_77 p_812->g_496 p_812->g_675 p_812->g_677 p_812->g_79 p_812->g_385 p_812->g_690 p_812->l_comm_values p_812->g_120 p_812->g_698 p_812->g_711 p_812->g_660 p_812->g_583 p_812->g_732 p_812->g_734 p_812->g_153 p_812->g_41 p_812->g_43 p_812->g_97 p_812->g_85 p_812->g_261 p_812->g_83 p_812->g_147 p_812->g_408 p_812->g_146 p_812->g_23
 * writes: p_812->g_636 p_812->g_98 p_812->g_88 p_812->g_104 p_812->g_79 p_812->g_41 p_812->g_85 p_812->g_23
 */
int32_t  func_13(uint32_t  p_14, int32_t * p_15, uint32_t  p_16, struct S0 * p_812)
{ /* block id: 221 */
    int64_t *l_634 = (void*)0;
    int64_t **l_635[8][9] = {{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634},{&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634,&l_634}};
    int32_t l_639 = 1L;
    uint32_t l_642 = 4294967295UL;
    int8_t *l_647 = (void*)0;
    uint8_t *l_648 = &p_812->g_98;
    VECTOR(uint32_t, 8) l_658 = (VECTOR(uint32_t, 8))(0x311BCE9DL, (VECTOR(uint32_t, 4))(0x311BCE9DL, (VECTOR(uint32_t, 2))(0x311BCE9DL, 0xC07D1952L), 0xC07D1952L), 0xC07D1952L, 0x311BCE9DL, 0xC07D1952L);
    uint32_t l_669[3];
    uint16_t *l_671[1];
    VECTOR(int8_t, 16) l_701 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x2CL), 0x2CL), 0x2CL, (-4L), 0x2CL, (VECTOR(int8_t, 2))((-4L), 0x2CL), (VECTOR(int8_t, 2))((-4L), 0x2CL), (-4L), 0x2CL, (-4L), 0x2CL);
    uint64_t l_707 = 18446744073709551615UL;
    VECTOR(int32_t, 8) l_710 = (VECTOR(int32_t, 8))(0x21596DE0L, (VECTOR(int32_t, 4))(0x21596DE0L, (VECTOR(int32_t, 2))(0x21596DE0L, 0L), 0L), 0L, 0x21596DE0L, 0L);
    uint8_t l_735 = 1UL;
    VECTOR(int32_t, 2) l_737 = (VECTOR(int32_t, 2))((-4L), 0x2AEB2442L);
    VECTOR(int8_t, 16) l_739 = (VECTOR(int8_t, 16))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, (-1L)), (-1L)), (-1L), 0x31L, (-1L), (VECTOR(int8_t, 2))(0x31L, (-1L)), (VECTOR(int8_t, 2))(0x31L, (-1L)), 0x31L, (-1L), 0x31L, (-1L));
    VECTOR(uint8_t, 2) l_740 = (VECTOR(uint8_t, 2))(255UL, 0UL);
    VECTOR(int16_t, 4) l_750 = (VECTOR(int16_t, 4))(0x72A3L, (VECTOR(int16_t, 2))(0x72A3L, 2L), 2L);
    VECTOR(int32_t, 16) l_766 = (VECTOR(int32_t, 16))(0x57F097FDL, (VECTOR(int32_t, 4))(0x57F097FDL, (VECTOR(int32_t, 2))(0x57F097FDL, 0x322099D4L), 0x322099D4L), 0x322099D4L, 0x57F097FDL, 0x322099D4L, (VECTOR(int32_t, 2))(0x57F097FDL, 0x322099D4L), (VECTOR(int32_t, 2))(0x57F097FDL, 0x322099D4L), 0x57F097FDL, 0x322099D4L, 0x57F097FDL, 0x322099D4L);
    VECTOR(int32_t, 4) l_767 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x73EAABB4L), 0x73EAABB4L);
    VECTOR(int32_t, 4) l_768 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3F801CFCL), 0x3F801CFCL);
    int16_t l_771 = (-4L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_669[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_671[i] = &p_812->g_85;
    if (((0L == ((0x71FEL | ((VECTOR(uint16_t, 2))(p_812->g_630.wz)).odd) | p_16)) , (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_812->g_633.s4424650236156564)).s0, (((p_812->g_636 = l_634) != (void*)0) && (safe_div_func_uint8_t_u_u(((*l_648) ^= (l_639 >= (((((((&p_812->g_145[9][8] == ((((safe_sub_func_uint16_t_u_u(l_642, (safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((6L & p_14), (*p_812->g_104))), l_639)))) <= p_14) != 0x19L) , (void*)0)) , p_16) != (-1L)) >= p_16) , p_812->g_488) , l_647) != l_647))), p_16)))))))
    { /* block id: 224 */
        int32_t *l_649 = &p_812->g_3;
        int32_t **l_650 = (void*)0;
        int32_t **l_651 = &l_649;
        VECTOR(uint16_t, 2) l_662 = (VECTOR(uint16_t, 2))(0UL, 0xFD8AL);
        uint16_t *l_670[5][7] = {{(void*)0,&p_812->g_85,(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,&p_812->g_85,(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,&p_812->g_85,(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,&p_812->g_85,(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,&p_812->g_85,(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}};
        VECTOR(int32_t, 4) l_672 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x3FB59C5FL), 0x3FB59C5FL);
        VECTOR(int32_t, 8) l_673 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
        int i, j;
        (*l_651) = l_649;
        (*p_812->g_104) ^= (safe_add_func_uint32_t_u_u((GROUP_DIVERGE(2, 1) <= l_639), ((((safe_sub_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s((FAKE_DIVERGE(p_812->local_2_offset, get_local_id(2), 10) > ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 0x3A0DA5FDL)))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_658.s72012307)).s40)), 0x4C3DEB89L, 0xDCA69042L, 0x963D1901L, 0x74B3D3A3L)).s1 , ((!(l_642 ^ (&l_648 == p_812->g_659))) & (((**l_651) && ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(p_812->g_661.sac172dc3)), ((VECTOR(int64_t, 8))(((0x7B79AEFDL <= (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_662.yxxxyyyy)).s06)).hi == ((safe_mod_func_int8_t_s_s(((*l_649) || ((safe_sub_func_int64_t_s_s((1L >= (**l_651)), p_812->g_77)) <= 4294967293UL)), 4L)) ^ 0x80BB8D7F3334007AL))) < p_14), ((VECTOR(int64_t, 4))((-1L))), 0x57F6A21284DC6D1CL, (-1L), (-1L)))))).s23)).xyyxxxyx)), ((VECTOR(int64_t, 2))((-3L))), p_16, p_16, ((VECTOR(int64_t, 4))(0x4617591CA88147B1L)))))).even)), (-8L), ((VECTOR(int64_t, 2))(0x6416FF77C1DC75EAL)), ((VECTOR(int64_t, 2))(0x261CBDC5A94408F6L)), ((VECTOR(int64_t, 2))(0x1A34C96F36F0772FL)), (-10L))).s8) || 0x3497C717C624103BL))) <= 255UL)), l_669[0])) , l_670[2][4]) == l_671[0]), l_669[0])) , FAKE_DIVERGE(p_812->local_2_offset, get_local_id(2), 10)) == p_812->g_496.y) == (**l_651))));
        (*p_812->g_104) |= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_672.yy)).xyxyxyxy, ((VECTOR(int32_t, 4))(l_673.s4112)).xyxyxyxx))).s3;
    }
    else
    { /* block id: 228 */
        int32_t *l_674 = (void*)0;
        int64_t *l_704[1][6];
        int32_t l_705 = 4L;
        int32_t l_706 = 0x7E421971L;
        uint32_t *l_714 = (void*)0;
        uint32_t *l_715[9] = {&l_669[0],&l_669[0],&l_669[0],&l_669[0],&l_669[0],&l_669[0],&l_669[0],&l_669[0],&l_669[0]};
        uint32_t l_731 = 0xD409E0B4L;
        uint64_t l_736[4][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_704[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_736[i][j] = 0x2A7FACE9EF673D3AL;
        }
        (*p_812->g_675) = l_674;
        (*p_812->g_677) &= (safe_unary_minus_func_uint16_t_u(l_658.s1));
        l_707 = ((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_812->g_385.s6, ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(65535UL, 0xAACBL)), p_16)) & (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(0L, 0x35L)).xxxxxxxyxxxyxxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_812->g_690.sc5)))).yxyxxyyyxxxyyyxx, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(0L, (((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 27))] <= p_812->g_120[2]), 1)), l_658.s6)), ((l_705 = (p_812->g_698 != ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_701.sb1955257)).s71)).lo, ((*l_648)++))) , &p_812->g_41[3][9][0]))) >= 9L))) , p_14))) >= 4UL) & l_642), ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 2))(0x47L)), ((VECTOR(int8_t, 4))(0L)))).s01, ((VECTOR(int8_t, 2))(0x5DL)), ((VECTOR(int8_t, 2))((-1L)))))).xyyxyxyyyxyyxyxy))).s3, 0x79L, 0x3CL, 9L)).z, 2))))), p_16)), l_706)) | l_701.s6);
        (*p_812->g_698) = func_66(func_36((l_705 = (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_710.s53423713)).s5116457003240756, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_812->g_711.xxxyxxxyxxyxyyxy)).s309d)).zwyywwxwwxxxyyxz))).scb, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0L)), 0x4D8FA8A9L, 0L, (safe_mul_func_int16_t_s_s(l_710.s1, ((((p_14 = p_16) || ((safe_lshift_func_int8_t_s_u(((*p_812->g_659) == l_648), 1)) , 0UL)) , (safe_div_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((FAKE_DIVERGE(p_812->group_0_offset, get_group_id(0), 10) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x4EL, ((VECTOR(int8_t, 2))(0x1EL, 0x45L)), 0x34L, ((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((l_735 = ((((l_639 |= ((safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((l_731 < (l_731 , (p_812->g_583 == p_812->g_732))), (-10L))) , p_812->g_734), (-4L))) < p_812->g_98)) < p_16) && p_14) , p_16)), p_812->g_153.x)), p_14)) , p_14), 0x71L, (-5L), 0x3BL)), ((VECTOR(int8_t, 8))(1L)))).s8, p_14))))), l_736[2][0]))) == GROUP_DIVERGE(2, 1)))), (**p_812->g_698), 0x570D1BC1L, 1L)))).s41))).hi, (-1L)))), p_812), l_736[2][0], p_812->g_97, p_812);
    }
    if (((VECTOR(int32_t, 16))(l_737.xyxxxyxxyxxyxyyy)).s7)
    { /* block id: 240 */
        int32_t *l_738 = &l_639;
        VECTOR(int32_t, 4) l_765 = (VECTOR(int32_t, 4))(0x159230FCL, (VECTOR(int32_t, 2))(0x159230FCL, 0x3B7B7E4BL), 0x3B7B7E4BL);
        int16_t *l_769[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        (*l_738) = (p_16 >= (~p_14));
        (*p_812->g_698) = p_15;
        (*p_812->g_677) = (((+(l_767.y = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(0x4B43L, (-7L))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x4175L, 0x55B6L)).yyyxxyxx)).s01, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(0x5DL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((-9L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_739.sb3)))), 0x13L)).hi)), ((VECTOR(int8_t, 2))((-9L), (-6L))), (-8L), (-3L), (-10L))).s73, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_740.yxyy)))).wywyxwyw)).s43))), 0x57EEL, 0x4DDDL)).yxxyxyzyzxwxzzxw, (int16_t)(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x59EE8C06L, 1L)))), ((VECTOR(uint32_t, 4))(0x910B3E75L, 4294967295UL, 0x9B423FDAL, 4294967291UL)).hi))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((safe_add_func_int64_t_s_s(((((((VECTOR(uint32_t, 2))(0x73522F9BL, 0x7AA2CC12L)).even | l_710.s1) & ((**p_812->g_659) ^ (((~(safe_unary_minus_func_int16_t_s(l_737.x))) || (safe_rshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(l_750.zy)).odd, 6)), ((p_812->g_83 || ((((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((((void*)0 == &p_812->g_636) & 0x26B864951ED7EF7EL), ((*p_812->g_147) = ((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_639 &= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_765.yyxyywxzxyxyzwzx)).sca, ((VECTOR(int32_t, 2))(l_766.s46)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_767.zzyw)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_768.zyxy)).odd)).yyxy))).even))).hi) > l_765.y), 1)), GROUP_DIVERGE(0, 1))), GROUP_DIVERGE(0, 1))) != p_812->g_496.y), FAKE_DIVERGE(p_812->global_2_offset, get_global_id(2), 10))), l_767.x)) | 0UL)))), 0x5A25422D74019D2AL)) <= l_766.s9) <= (-8L)) , l_739.sd)) && 0x0EL))) || FAKE_DIVERGE(p_812->global_1_offset, get_global_id(1), 10)), GROUP_DIVERGE(0, 1)))) < l_737.x))) | p_14) & p_14), p_812->g_408.sb)), 3L, 2L, 1L)))).hi))))).yyyy))).x | 0x61C9CCCC3D6DD189L), (int16_t)(**p_812->g_146)))).s69))).yxyyyxxxyxyxxyxy, ((VECTOR(int16_t, 16))((-7L))), ((VECTOR(int16_t, 16))(0L))))), ((VECTOR(int16_t, 16))(0x6F0FL))))).s8d, ((VECTOR(int16_t, 2))(1L))))).yxxyxxyy))).odd, (int16_t)(*p_812->g_147), (int16_t)0L))), ((VECTOR(int16_t, 4))((-9L))), ((VECTOR(int16_t, 4))(7L))))).xzwxxxwy)).s1)) == 0x1208L) | 255UL);
    }
    else
    { /* block id: 247 */
        int32_t *l_772 = (void*)0;
        int32_t *l_773 = (void*)0;
        int32_t *l_774 = &p_812->g_79;
        int32_t *l_775 = (void*)0;
        int32_t *l_776[3][3][3] = {{{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79}},{{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79}},{{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79},{&p_812->g_79,&p_812->g_3,&p_812->g_79}}};
        uint32_t l_777 = 0UL;
        int i, j, k;
        l_777--;
    }
    return l_737.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_146 p_812->g_147 p_812->g_23
 * writes:
 */
int16_t  func_26(int32_t * p_27, int32_t  p_28, int32_t * p_29, uint32_t  p_30, int64_t  p_31, struct S0 * p_812)
{ /* block id: 218 */
    return (**p_812->g_146);
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_43 p_812->g_23 p_812->g_85 p_812->g_88 p_812->g_98 p_812->g_79 p_812->g_111 p_812->g_120 p_812->g_127 p_812->g_4 p_812->g_140 p_812->g_146 p_812->g_3 p_812->g_153 p_812->g_154 p_812->g_156 p_812->g_157 p_812->g_96 p_812->g_147 p_812->g_104 p_812->g_41 p_812->g_213 p_812->g_77 p_812->l_comm_values p_812->g_217 p_812->g_83 p_812->g_232 p_812->g_234 p_812->g_245 p_812->g_261 p_812->g_316 p_812->g_62 p_812->g_97 p_812->g_351 p_812->g_362 p_812->g_385 p_812->g_388 p_812->g_403 p_812->g_408 p_812->g_427 p_812->g_84 p_812->g_453 p_812->g_488 p_812->g_485 p_812->g_559 p_812->g_579 p_812->g_588 p_812->g_590 p_812->g_555 p_812->g_620 p_812->g_621 p_812->g_624 p_812->g_626
 * writes: p_812->g_41 p_812->g_85 p_812->g_79 p_812->g_88 p_812->g_98 p_812->g_104 p_812->g_97 p_812->g_120 p_812->g_140 p_812->g_144 p_812->g_146 p_812->g_96 p_812->l_comm_values p_812->g_23 p_812->g_62 p_812->g_411 p_812->g_488 p_812->g_492 p_812->g_77 permutations p_812->g_84 p_812->g_213 p_812->g_217
 */
int32_t * func_32(int64_t  p_33, int16_t * p_34, int64_t  p_35, struct S0 * p_812)
{ /* block id: 15 */
    uint32_t *l_61[10] = {&p_812->g_62,(void*)0,(void*)0,(void*)0,&p_812->g_62,&p_812->g_62,(void*)0,(void*)0,(void*)0,&p_812->g_62};
    int32_t l_63 = 0x5BC0BA88L;
    int16_t *l_70 = (void*)0;
    int16_t *l_72 = (void*)0;
    int16_t **l_71 = &l_72;
    int32_t l_75[5][2] = {{0x6CB6AEF2L,0x6CB6AEF2L},{0x6CB6AEF2L,0x6CB6AEF2L},{0x6CB6AEF2L,0x6CB6AEF2L},{0x6CB6AEF2L,0x6CB6AEF2L},{0x6CB6AEF2L,0x6CB6AEF2L}};
    int64_t *l_76[8] = {(void*)0,&p_812->g_77,(void*)0,(void*)0,&p_812->g_77,(void*)0,(void*)0,&p_812->g_77};
    int16_t ***l_148 = &l_71;
    int16_t ***l_149[8][10][3] = {{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}},{{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146},{(void*)0,&p_812->g_146,&p_812->g_146}}};
    int32_t l_150 = (-4L);
    int32_t *l_152 = &p_812->g_3;
    int32_t **l_151 = &l_152;
    VECTOR(uint8_t, 4) l_543 = (VECTOR(uint8_t, 4))(0x05L, (VECTOR(uint8_t, 2))(0x05L, 0x40L), 0x40L);
    VECTOR(int32_t, 4) l_554 = (VECTOR(int32_t, 4))(0x5D25CCA6L, (VECTOR(int32_t, 2))(0x5D25CCA6L, 0x03C6783CL), 0x03C6783CL);
    VECTOR(uint16_t, 4) l_556 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x86F4L), 0x86F4L);
    uint32_t l_558[5][2][2] = {{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL}}};
    int32_t *l_564 = &l_63;
    int32_t *l_565[1][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    VECTOR(int64_t, 4) l_571 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x7FCF60DEF5F75F21L), 0x7FCF60DEF5F75F21L);
    int64_t **l_585 = (void*)0;
    VECTOR(int64_t, 4) l_587 = (VECTOR(int64_t, 4))(0x61109CA046F1F4A7L, (VECTOR(int64_t, 2))(0x61109CA046F1F4A7L, 9L), 9L);
    VECTOR(int64_t, 2) l_589 = (VECTOR(int64_t, 2))(8L, 0x2A681FEE1646B084L);
    VECTOR(int8_t, 8) l_622 = (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
    VECTOR(int8_t, 2) l_623 = (VECTOR(int8_t, 2))(5L, 0x18L);
    VECTOR(int8_t, 4) l_625 = (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, (-4L)), (-4L));
    int i, j, k;
    (*l_151) = func_45(func_51(func_55(func_36((l_63 = 2UL), p_812), (p_812->g_146 = ((*l_148) = func_64(func_66(l_70, (l_75[3][1] = ((0x68F7L & (((&p_812->g_23[0][2][0] == ((*l_71) = &p_812->g_23[0][2][1])) != (7UL || 0x0EA3L)) & (safe_add_func_uint32_t_u_u(((~p_33) ^ l_75[3][1]), p_812->g_23[0][2][0])))) & GROUP_DIVERGE(0, 1))), p_35, p_812), p_812))), l_150, l_151, (**l_151), p_812), p_33, l_150, p_812), p_812->g_157.x, &p_812->g_3, p_35, p_35, p_812);
    for (p_812->g_84 = (-23); (p_812->g_84 == 9); ++p_812->g_84)
    { /* block id: 181 */
        VECTOR(int32_t, 2) l_553 = (VECTOR(int32_t, 2))(0x1DA6459CL, 0x26066780L);
        int32_t l_557 = 0x201E32E3L;
        uint32_t *l_572 = &p_812->g_62;
        uint32_t *l_573 = &p_812->g_88;
        int64_t **l_582 = &l_76[1];
        VECTOR(uint64_t, 16) l_591 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL);
        uint8_t *l_592 = &p_812->g_98;
        uint32_t l_614 = 0xBFA3C62DL;
        VECTOR(int32_t, 4) l_615 = (VECTOR(int32_t, 4))(0x4A074654L, (VECTOR(int32_t, 2))(0x4A074654L, 0x64C89B6FL), 0x64C89B6FL);
        int i;
        for (p_33 = 0; (p_33 >= 3); p_33++)
        { /* block id: 184 */
            int64_t *l_549[10] = {&p_812->g_96,(void*)0,&p_812->g_96,(void*)0,&p_812->g_96,&p_812->g_96,(void*)0,&p_812->g_96,(void*)0,&p_812->g_96};
            int32_t l_550 = 1L;
            uint8_t *l_551 = (void*)0;
            uint8_t *l_552 = &p_812->g_98;
            int32_t l_560 = 1L;
            int32_t l_561 = 0x18177DADL;
            int8_t *l_562 = &p_812->g_217[5][0];
            int32_t l_563 = 0x3423001FL;
            int32_t *l_566 = (void*)0;
            int i;
            (*p_812->g_104) ^= (((p_33 <= (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_560 = ((*l_562) = ((((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((!(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_543.wzzxzxwz)))).s2 != 0x31L)), (safe_unary_minus_func_int8_t_s((-4L))))), (safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((*l_552) = ((*p_34) | (l_550 = (p_812->g_351 <= (p_812->g_213.sa = p_33))))), (l_561 &= (((((((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_553.xy)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_554.wy)).xyyx, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_812->g_555.yy)), 0x6DD8A704L, 0x0ECE6EBFL)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(3L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(p_812->g_127.s1, (((VECTOR(uint16_t, 2))(l_556.xx)).even != ((l_557 = ((-1L) ^ p_33)) <= l_553.x)), ((VECTOR(int32_t, 4))((-1L))), 2L, 0x2461A354L)), ((VECTOR(int32_t, 8))(0x4E77596EL))))).s63, ((VECTOR(int32_t, 2))(7L))))), ((VECTOR(int32_t, 2))((-1L))), l_558[3][0][0], 0x4348788BL, 0x3D91FE29L)).s16, ((VECTOR(int32_t, 2))(1L))))), 0x2764CA39L, 0x3C453FF0L)).even))).xxyy, ((VECTOR(int32_t, 4))(0x2AE4D320L))))).even))).lo , p_812->g_559[2][3]) > l_560) > p_812->g_234.s6) <= 0x8D519A92A79BBBD6L) & 3L)))), 1L)))) ^ p_812->g_153.y) ^ 0x0AEC896222412BEFL) == 0UL))), 2)), FAKE_DIVERGE(p_812->local_2_offset, get_local_id(2), 10))), l_563)), p_812->g_234.s4))) || l_553.x) != FAKE_DIVERGE(p_812->local_2_offset, get_local_id(2), 10));
            return l_566;
        }
        (*l_151) = (*l_151);
        for (p_812->g_62 = 15; (p_812->g_62 > 46); ++p_812->g_62)
        { /* block id: 198 */
            uint32_t *l_574 = (void*)0;
            int32_t l_577 = (-4L);
            uint16_t *l_581 = (void*)0;
            uint16_t **l_580 = &l_581;
            int64_t ***l_584[1];
            uint8_t **l_593 = &l_592;
            uint16_t *l_600 = &p_812->g_85;
            int i;
            for (i = 0; i < 1; i++)
                l_584[i] = &l_582;
            l_557 &= ((p_35 > (((safe_mul_func_int16_t_s_s((**p_812->g_146), p_812->g_120[5])) & 0x712A10014B66FD03L) & (p_34 == (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_571.yzwzxxyx)).s00)).hi , (*p_812->g_146))))) || ((+255UL) < (p_812->g_140 == ((l_573 = l_572) != l_574))));
            for (p_812->g_96 = (-17); (p_812->g_96 == (-14)); ++p_812->g_96)
            { /* block id: 203 */
                uint64_t l_578 = 0x9B91AF014FCEA2D6L;
                (*l_564) = l_577;
                if (l_578)
                    break;
                l_580 = p_812->g_579;
            }
            l_585 = l_582;
            (*l_564) &= ((0UL < (((safe_unary_minus_func_int8_t_s(((((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))((((VECTOR(int64_t, 4))(l_587.yxww)).x <= ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(p_812->g_588.yxxxyyyyxyyxxyyx)).s89, ((VECTOR(int64_t, 8))(l_589.xxxxyyyy)).s74))).lo), ((VECTOR(uint64_t, 4))(p_812->g_590.xxxy)), 0xBBA168ACDA1D167BL, 0xDE7EFE565A126435L, 0UL)).s1647570321526733, ((VECTOR(uint64_t, 2))(l_591.sc4)).yyxyxxyyxxyxxxxx))), ((VECTOR(uint64_t, 2))(0xE4D5261EDBD27295L, 0x8B19D6DFAA5C40A1L)).xyxyxxxyyxxxxxxx))).s8 , &p_812->g_261) != ((*l_593) = l_592)))) <= ((safe_div_func_uint32_t_u_u(0xACE59280L, p_35)) | (p_33 >= (((*l_600)--) <= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((p_33 || GROUP_DIVERGE(1, 1)), (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((((*l_151) = (*l_151)) != &l_63) & p_33), l_577)), l_614)))) != 5L) < p_812->g_555.x), l_614)) | 65535UL) < 65535UL))) , p_35), l_553.y)), ((VECTOR(int16_t, 4))(0x2D66L)), l_614, 0x590EL, 0x441FL)).s5610277214555204)))).s5)))) ^ 0x7AC2D288L)) > p_35);
        }
        (*l_564) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_615.wxyxzzwwyzyxwwxw)).s23))))).hi;
    }
    (*p_812->g_104) |= ((safe_mod_func_int8_t_s_s(p_812->g_213.sd, (p_35 , (0x16BA12B5953E0306L | ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_812->g_620.xyyx)).xxyxxxyx)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(p_812->g_621.sae33faff0b5c6ee9)), (uint16_t)p_33))).s2 | (p_812->g_157.x >= p_812->g_83)), ((VECTOR(int8_t, 2))(l_622.s25)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(l_623.xyyxxyxy)).s4403102237211321, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x1BL, 0x36L)), ((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(p_812->g_624.yy)), 0x5DL)), 0x0BL, 0x41L)).s10, (int8_t)p_35))).yxyxyyyxxyxyyxxy))).s9f)).odd, p_812->g_85, 1L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(l_625.wx)), ((VECTOR(int8_t, 2))(0x33L, 1L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_812->g_626.s36)))), ((VECTOR(int8_t, 2))((-1L), 0L))))).xxyxxxyxyxyyyyxy)).s03))).yyyx, ((VECTOR(int8_t, 4))(p_35, (-1L), 0x03L, (-10L)))))).lo, ((VECTOR(int8_t, 2))(0x33L))))), 0L, 0x02L, 0x39L, ((VECTOR(int8_t, 2))(0x77L)), ((VECTOR(int8_t, 2))((-1L))), 0x02L)).s3b7e)), ((VECTOR(int8_t, 4))(0x3DL))))).x, p_33, 1L, (-1L))).odd)).xxyxyyxxyxyyxxxy)).s6, 6)) & p_33))))) , p_33);
    return (*p_812->g_43);
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_43
 * writes: p_812->g_41
 */
int16_t * func_36(uint32_t  p_37, struct S0 * p_812)
{ /* block id: 11 */
    int32_t *l_38[3];
    int32_t **l_39 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_38[i] = &p_812->g_3;
    (*p_812->g_43) = l_38[1];
    return &p_812->g_23[0][2][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_104 p_812->g_156 p_812->g_147 p_812->g_23
 * writes: p_812->g_88 p_812->g_77 permutations
 */
int32_t * func_45(int32_t ** p_46, uint16_t  p_47, int32_t * p_48, uint32_t  p_49, int32_t  p_50, struct S0 * p_812)
{ /* block id: 168 */
    int8_t *l_508 = &p_812->g_217[2][0];
    VECTOR(int32_t, 8) l_509 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L);
    VECTOR(int32_t, 4) l_510 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
    int16_t **l_511 = &p_812->g_147;
    int64_t *l_520 = &p_812->g_77;
    uint32_t *l_521 = &permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), 10))][(safe_mod_func_uint32_t_u_u(p_812->tid, 27))];
    int32_t *l_522 = &p_812->g_79;
    int32_t *l_523[2][2][4] = {{{(void*)0,&p_812->g_79,(void*)0,(void*)0},{(void*)0,&p_812->g_79,(void*)0,(void*)0}},{{(void*)0,&p_812->g_79,(void*)0,(void*)0},{(void*)0,&p_812->g_79,(void*)0,(void*)0}}};
    uint16_t l_524[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_524[i] = 2UL;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_812->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 27)), permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), 10))][(safe_mod_func_uint32_t_u_u(p_812->tid, 27))]));
    p_50 |= (((((((void*)0 != l_508) , ((((((*p_812->g_104) = ((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 4))(l_509.s3573)), 0L, 1L, ((VECTOR(int32_t, 2))((-10L), (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_510.wzzwzzzw)).s56)), 0x2444BA52L, 0x0D14F69BL)), 1L, 2L, 0x2EAB5D4DL)).s2) < ((*l_521) = (((((((p_812->g_156.sc <= (l_511 != l_511)) || (+(((*l_520) = ((safe_lshift_func_uint8_t_u_u((0x5FL == (safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xF0L, 0x8DL)).xyxxxyyy)).s1, ((safe_mul_func_uint16_t_u_u(0x8948L, (p_49 != (*p_812->g_147)))) && p_47))) ^ 0x6910AABAL), p_49))), 5)) == 247UL)) , (*p_812->g_147)))) & 0x3AL) , p_47) == 0x593780470D5ACA13L) != (*p_812->g_147)) != 0x15457C946424C2EEL))) , (void*)0) != (void*)0) != 4294967295UL)) , l_510.x) != 0L) & l_509.s1) , l_510.y);
    l_524[3]++;
    return l_523[1][1][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_111 p_812->g_362 p_812->g_146 p_812->g_147 p_812->g_62 p_812->g_120 p_812->g_104 p_812->g_88 p_812->g_385 p_812->g_388 p_812->g_232 p_812->g_23 p_812->g_403 p_812->g_408 p_812->g_43 p_812->g_41 p_812->g_3 p_812->g_79 p_812->g_427 p_812->g_213 p_812->g_84 p_812->g_453 p_812->g_96 p_812->g_4 p_812->g_85 p_812->g_488 p_812->g_485 p_812->g_127 p_812->g_156
 * writes: p_812->g_98 p_812->g_23 p_812->g_88 p_812->g_79 p_812->g_411 p_812->g_96 p_812->g_97 p_812->g_85 p_812->g_488 p_812->g_492 p_812->g_41
 */
int32_t ** func_51(int32_t  p_52, int32_t  p_53, int16_t  p_54, struct S0 * p_812)
{ /* block id: 127 */
    uint8_t *l_357[3];
    VECTOR(uint32_t, 8) l_360 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x3B5942FBL), 0x3B5942FBL), 0x3B5942FBL, 0UL, 0x3B5942FBL);
    VECTOR(uint16_t, 2) l_361 = (VECTOR(uint16_t, 2))(65530UL, 1UL);
    VECTOR(uint16_t, 8) l_387 = (VECTOR(uint16_t, 8))(0x0CB6L, (VECTOR(uint16_t, 4))(0x0CB6L, (VECTOR(uint16_t, 2))(0x0CB6L, 65531UL), 65531UL), 65531UL, 0x0CB6L, 65531UL);
    int64_t *l_395 = (void*)0;
    int32_t l_412 = (-2L);
    int8_t l_413 = 0x28L;
    VECTOR(int16_t, 8) l_428 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    VECTOR(int8_t, 2) l_450 = (VECTOR(int8_t, 2))((-1L), 0x53L);
    VECTOR(int32_t, 4) l_451 = (VECTOR(int32_t, 4))(0x3A61ADB1L, (VECTOR(int32_t, 2))(0x3A61ADB1L, (-3L)), (-3L));
    uint8_t l_452[2][3] = {{255UL,255UL,255UL},{255UL,255UL,255UL}};
    int16_t l_454[4][9] = {{0x2B54L,0x2B54L,6L,0x4D50L,9L,0x105BL,0x7890L,0L,0x7890L},{0x2B54L,0x2B54L,6L,0x4D50L,9L,0x105BL,0x7890L,0L,0x7890L},{0x2B54L,0x2B54L,6L,0x4D50L,9L,0x105BL,0x7890L,0L,0x7890L},{0x2B54L,0x2B54L,6L,0x4D50L,9L,0x105BL,0x7890L,0L,0x7890L}};
    int8_t *l_455 = (void*)0;
    int8_t *l_456 = (void*)0;
    int8_t *l_457 = &p_812->g_97;
    VECTOR(int8_t, 16) l_458 = (VECTOR(int8_t, 16))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 1L), 1L), 1L, 0x11L, 1L, (VECTOR(int8_t, 2))(0x11L, 1L), (VECTOR(int8_t, 2))(0x11L, 1L), 0x11L, 1L, 0x11L, 1L);
    int64_t l_463[5][7] = {{(-2L),(-2L),(-8L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-8L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-8L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-8L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-8L),(-2L),(-2L),(-2L),(-2L)}};
    int16_t l_464 = 0x3E42L;
    int32_t **l_491 = (void*)0;
    int32_t **l_495 = (void*)0;
    int64_t l_501 = 0L;
    uint8_t l_502 = 0xB2L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_357[i] = (void*)0;
    if (((*p_812->g_104) |= ((p_812->g_98 = 0x63L) > ((p_812->g_111.x | ((safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_360.s70115467)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(l_361.xxxyyyyxyyyyxxxx)).sf1d8, ((VECTOR(uint16_t, 2))(65535UL, 0xC5C9L)).yxxx))).xzzyzzyxxwxzxxzz, ((VECTOR(uint32_t, 16))(p_812->g_362.xxyyxyyxyyyxyyxx))))).lo)))).sd75f, (uint32_t)(safe_mul_func_int16_t_s_s(((**p_812->g_146) = 0x0687L), 0L))))))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x5C44C4A7L, 1UL)), 4294967292UL, 0x0B3385BDL)))).s0 , (safe_rshift_func_int8_t_s_u(0x0EL, 5))), ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((&p_812->g_217[5][0] != (void*)0), (((safe_sub_func_int32_t_s_s((l_361.x ^ (l_361.x || p_52)), p_52)) >= p_812->g_62) | FAKE_DIVERGE(p_812->group_1_offset, get_group_id(1), 10)))), 0x21L)), p_54)) , 0x4C9470A1L) > p_54), l_361.x)) < l_360.s6))) < p_812->g_120[5])) & (-1L)))))
    { /* block id: 131 */
        uint32_t l_379 = 0x0C53E9B7L;
        VECTOR(uint32_t, 16) l_380 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC0C116D5L), 0xC0C116D5L), 0xC0C116D5L, 4294967295UL, 0xC0C116D5L, (VECTOR(uint32_t, 2))(4294967295UL, 0xC0C116D5L), (VECTOR(uint32_t, 2))(4294967295UL, 0xC0C116D5L), 4294967295UL, 0xC0C116D5L, 4294967295UL, 0xC0C116D5L);
        VECTOR(int16_t, 2) l_386 = (VECTOR(int16_t, 2))((-1L), 0x05F5L);
        int16_t l_391 = (-1L);
        uint32_t *l_392 = &p_812->g_88;
        int32_t *l_396 = &p_812->g_79;
        uint16_t *l_409[8][6][5] = {{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0},{(void*)0,(void*)0,&p_812->g_85,(void*)0,(void*)0}}};
        uint64_t *l_410 = &p_812->g_411;
        int16_t l_414 = 5L;
        int i, j, k;
        (*l_396) = (safe_sub_func_uint32_t_u_u(((((l_379 <= (0xD4L < (((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_380.sb6)).xxxy, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(1L, (-2L), (((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x5DEFEB81L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(p_812->g_385.s66)).xxyy, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_386.yxyxyyyx)).hi, ((VECTOR(uint16_t, 8))(l_387.s43745775)).hi))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_812->g_388.sa2)).yyxyxyxxyyyxxyyx)).sf717))), 0x11BF0F71L, p_53, (((VECTOR(int64_t, 2))(0x30682DF160D6F5DCL, 2L)).hi && ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x737B878663F072A3L, ((safe_div_func_uint64_t_u_u(p_812->g_232.s4, (l_391 | p_54))) >= ((*l_392) = p_52)), 0UL, 0x5095AC9275188B39L)), ((safe_rshift_func_int8_t_s_u((!(l_395 == &p_812->g_77)), l_379)) , 0xC72F3AB5CA1FA15DL), 0UL, 0x3C2FDA651F2AB96FL, 18446744073709551615UL)).s2), ((VECTOR(int32_t, 8))(0L)))).s446a, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(1L))))).w , p_53), (**p_812->g_146), ((VECTOR(int16_t, 4))(1L)))), ((VECTOR(int16_t, 8))(6L)), ((VECTOR(int16_t, 8))(0x204BL))))).s03)).odd & l_380.se), FAKE_DIVERGE(p_812->group_0_offset, get_group_id(0), 10))), p_52)), p_54, 0x3CFA5A01L, 4294967290UL)).lo)).yxxxxyyyyxxxxxxy, ((VECTOR(uint32_t, 16))(0x7DDD0921L))))).sfcdc))).w , 255UL))) < l_361.x) , 0x3CE57B1CL) , p_54), 0L));
        (*p_812->g_104) &= ((*l_396) |= (safe_div_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_812->global_0_offset, get_global_id(0), 10), (p_54 || (l_413 = ((((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_812->g_403.s74)), 0x53L, 0x04L)).y, (safe_add_func_int32_t_s_s((((l_412 = ((*l_410) = (safe_mul_func_int16_t_s_s(((FAKE_DIVERGE(p_812->global_1_offset, get_global_id(1), 10) , (void*)0) == &p_812->g_96), (((1L != (((VECTOR(uint32_t, 2))(p_812->g_408.s1d)).hi & 0x96FB19DCL)) , l_409[6][4][1]) == (void*)0))))) , &p_812->g_96) == l_410), l_360.s0)))) , l_395) == &p_812->g_77) == 2L))))) == 18446744073709551607UL) >= l_414) , (**p_812->g_43)), (-1L))));
    }
    else
    { /* block id: 139 */
        int32_t *l_415 = (void*)0;
        VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))(0x548DC20CL, 0x77582B9DL);
        uint16_t *l_434[8][9] = {{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0},{&p_812->g_85,&p_812->g_85,(void*)0,(void*)0,(void*)0,&p_812->g_85,&p_812->g_85,(void*)0,(void*)0}};
        int64_t *l_441[2];
        uint64_t l_442[7];
        int8_t *l_443 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
            l_441[i] = &p_812->g_96;
        for (i = 0; i < 7; i++)
            l_442[i] = 18446744073709551615UL;
        l_415 = (void*)0;
        (*p_812->g_104) &= (safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((0x2BL >= (((VECTOR(int32_t, 16))(l_424.xyyyyxxyxyyxyyyy)).se >= ((safe_add_func_int32_t_s_s(((p_54 , ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(2L, (-1L))))).yxyx, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(p_812->g_427.s6016236735135376)).hi, ((VECTOR(int16_t, 16))(l_428.s6574116057406053)).even))).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 1L)).xyyyxyxy)).lo))).w) > p_53), (safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u(p_812->g_213.s3)) , l_434[3][6]) == (void*)0), ((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(((((void*)0 == &p_812->g_98) , (p_812->g_96 = (((**p_812->g_146) = l_424.x) || p_812->g_362.y))) & 1UL), 6)) || l_442[4]), 0x4305EB6B4B1917BDL)), p_812->g_84)) ^ 0UL))), p_812->g_120[0])))) & p_54))), p_53)) < FAKE_DIVERGE(p_812->group_1_offset, get_group_id(1), 10)), l_428.s5)) <= p_53), 1L)) , (void*)0) == l_443), p_53));
    }
    if ((((VECTOR(int64_t, 8))(0x7AE189A84042FE58L, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), 0x4BL, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(0x55L, 0x3DL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(1L, 0x16L)), (int8_t)p_812->g_111.y, (int8_t)(((*p_812->g_104) = (l_387.s3 >= ((((*p_812->g_146) != (void*)0) || (l_361.y <= (((VECTOR(int8_t, 16))(l_450.xxyyyxxxxxyxxyyy)).sf > p_54))) & ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(l_451.wzxy)).hi))).lo))) >= l_452[1][1])))), 5L, 0x34L)))), 0x6DL, (-5L))).hi, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_812->g_453.yy)), 0x56L, 0L)).xzzzwxxy, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((*l_457) = l_454[2][0]), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(l_458.s0d9e4ee0d34fa556)).s0431, ((VECTOR(int8_t, 2))(0x40L, 1L)).yxyy))), (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((!(l_412 = l_463[4][2])), l_464)), 0x32L)), ((VECTOR(int8_t, 4))(0x6EL)), p_53, l_450.y, ((VECTOR(int8_t, 4))((-8L))), 0x30L)).even, ((VECTOR(int8_t, 8))(2L))))).s17, (int8_t)(-1L)))).xyxx)), p_52, l_450.x, ((VECTOR(int8_t, 8))(0x13L)), 0x2CL)).even, ((VECTOR(int8_t, 8))(0x75L)))))))).s10)).yyyy))), ((VECTOR(int8_t, 8))(8L)), 0x15L, (-7L))).even)).s7, (-10L))) ^ 0x1CL), p_54)) , GROUP_DIVERGE(1, 1)), p_52)), ((VECTOR(int64_t, 2))((-5L))), 0x4107C717ECE6A145L, p_812->g_403.s5, 0x20CF5A6E25391E78L, 0x5882F991252DFE29L)).s3 != 1UL))
    { /* block id: 148 */
        int32_t **l_493 = &p_812->g_41[3][9][0];
        uint32_t **l_497 = (void*)0;
        (*p_812->g_104) ^= (l_361.y , (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x2FL, 0UL)), p_54)));
        for (p_812->g_96 = 0; (p_812->g_96 > (-26)); p_812->g_96--)
        { /* block id: 152 */
            uint16_t *l_479 = &p_812->g_85;
            uint16_t *l_480 = (void*)0;
            uint16_t *l_481 = (void*)0;
            uint16_t *l_482 = (void*)0;
            uint16_t *l_483 = (void*)0;
            uint16_t *l_484 = (void*)0;
            uint16_t *l_486[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_487 = 0x3010AD6CL;
            int32_t ***l_494[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int i, j;
            (*p_812->g_104) &= ((p_812->g_111.y , &p_812->g_145[1][0]) != ((((safe_add_func_uint8_t_u_u((l_451.x = (p_54 , (p_812->g_98 = (safe_mod_func_uint64_t_u_u((p_52 ^ (safe_div_func_int16_t_s_s((p_812->g_4[0] && ((safe_div_func_uint16_t_u_u(((*l_479) |= p_52), (++p_812->g_488))) & (GROUP_DIVERGE(0, 1) ^ (((p_812->g_492 = l_491) != (l_495 = l_493)) >= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(p_812->g_496.xyyy)).zzxxzwzwzxzzzzzz, (int64_t)0L))).s4374, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(0L))))).hi)).odd ^ p_52))))), l_360.s4))), p_53))))), p_812->g_485[2])) != p_812->g_127.s1) , p_812->g_156.s1) , l_497));
            (*l_493) = (*p_812->g_43);
            if ((**p_812->g_43))
                break;
        }
    }
    else
    { /* block id: 163 */
        int32_t *l_498 = (void*)0;
        int32_t *l_499 = (void*)0;
        int32_t *l_500[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint32_t l_505 = 0x94118A9AL;
        int i, j;
        l_502--;
        l_505++;
    }
    return l_491;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_153 p_812->g_154 p_812->g_156 p_812->g_157 p_812->g_96 p_812->g_146 p_812->g_147 p_812->g_23 p_812->g_3 p_812->g_88 p_812->g_104 p_812->g_127 p_812->g_4 p_812->g_85 p_812->g_43 p_812->g_41 p_812->g_213 p_812->g_77 p_812->l_comm_values p_812->g_79 p_812->g_217 p_812->g_83 p_812->g_232 p_812->g_234 p_812->g_245 p_812->g_98 p_812->g_261 p_812->g_316 p_812->g_62 p_812->g_140 p_812->g_120 p_812->g_97 p_812->g_351
 * writes: p_812->g_96 p_812->l_comm_values p_812->g_23 p_812->g_88 p_812->g_85 p_812->g_98 p_812->g_97 p_812->g_62 p_812->g_140 p_812->g_79
 */
int32_t  func_55(int16_t * p_56, int16_t ** p_57, uint32_t  p_58, int32_t ** p_59, uint64_t  p_60, struct S0 * p_812)
{ /* block id: 39 */
    VECTOR(int8_t, 8) l_155 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L));
    VECTOR(int64_t, 8) l_160 = (VECTOR(int64_t, 8))(0x2FC450F0C8DF0983L, (VECTOR(int64_t, 4))(0x2FC450F0C8DF0983L, (VECTOR(int64_t, 2))(0x2FC450F0C8DF0983L, 0x5B0D9EFBC47EF13DL), 0x5B0D9EFBC47EF13DL), 0x5B0D9EFBC47EF13DL, 0x2FC450F0C8DF0983L, 0x5B0D9EFBC47EF13DL);
    VECTOR(int64_t, 8) l_161 = (VECTOR(int64_t, 8))(0x2602268D07ABCEE7L, (VECTOR(int64_t, 4))(0x2602268D07ABCEE7L, (VECTOR(int64_t, 2))(0x2602268D07ABCEE7L, 0x6CF2371A48C8D2EEL), 0x6CF2371A48C8D2EEL), 0x6CF2371A48C8D2EEL, 0x2602268D07ABCEE7L, 0x6CF2371A48C8D2EEL);
    int64_t *l_162 = &p_812->g_96;
    uint32_t *l_163 = (void*)0;
    int64_t *l_164 = (void*)0;
    int64_t *l_165 = (void*)0;
    uint32_t **l_182 = &p_812->g_145[7][8];
    int32_t l_185 = 0x554994F7L;
    int32_t l_186 = 0x734FAB35L;
    int32_t l_187 = (-1L);
    int32_t l_189 = 0x63AE6E0BL;
    int32_t l_191 = 3L;
    int32_t l_192[6] = {(-1L),0x2889DD30L,(-1L),(-1L),0x2889DD30L,(-1L)};
    uint8_t *l_204 = (void*)0;
    VECTOR(int32_t, 2) l_214 = (VECTOR(int32_t, 2))(0L, 0x5498514BL);
    uint8_t l_325 = 0x8BL;
    VECTOR(int8_t, 16) l_340 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x04L), 0x04L), 0x04L, 0L, 0x04L, (VECTOR(int8_t, 2))(0L, 0x04L), (VECTOR(int8_t, 2))(0L, 0x04L), 0L, 0x04L, 0L, 0x04L);
    VECTOR(uint64_t, 8) l_354 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0UL, 18446744073709551606UL);
    int i;
    if ((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(p_812->g_153.yyyy)), ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(p_812->g_154.xzxz)).zzyyxxxxxzzwyxwz, ((VECTOR(int8_t, 2))(0x70L, 0x35L)).xxxxyxyxxyyyyxyy, ((VECTOR(int8_t, 2))(l_155.s64)).yyxxxxyxyyxyxyyx))).s350f))), (((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_812->g_156.scf)).yyxy)))).yzwxxxxz, ((VECTOR(int32_t, 8))(p_812->g_157.yyyyyyyx))))).s1 & (safe_rshift_func_int8_t_s_s(((((((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_160.s1774574703556313)).s42a3)).xxzzxzyw, ((VECTOR(int64_t, 8))(l_161.s02642460)), ((VECTOR(int64_t, 2))(0x4C988BF1FB4DCC51L, 0x59A0FD5536E5BA9DL)).xxyxxyxy))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 27))] = ((p_60 , p_812->g_156.s2) && ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(((&p_812->g_144[0][1] != &p_812->g_144[2][3]) , ((*l_162) &= 1L)), (((65531UL && (((void*)0 != l_163) ^ (**p_812->g_146))) == (**p_59)) <= l_160.s0), 0x17FA558AB68CB1B8L, 7L, l_155.s0, 0x08CFBF85D4ADB4F9L, 3L, 0x0E9D5C40892B95AFL)).s3032422723430275, ((VECTOR(int64_t, 16))(0x4295C5011C820DCBL)), ((VECTOR(int64_t, 16))(0L))))).s42e3, ((VECTOR(int64_t, 4))((-1L)))))).x)), 0x57956B0E93CEEE54L, (-1L), 0x61E0F174FA8EA3A5L)))).zywyzwxw))).s6 & p_812->g_88) == FAKE_DIVERGE(p_812->group_0_offset, get_group_id(0), 10)) && 18446744073709551609UL) , p_58), 0))), 1L, 0x4FL, 0x49L)).even)).yzzwyyxw, ((VECTOR(int8_t, 8))(3L))))).s2324450575476232)).even, ((VECTOR(int8_t, 8))(0x77L)), ((VECTOR(int8_t, 8))(0x5CL))))), ((VECTOR(int8_t, 8))(0x6AL)), ((VECTOR(int8_t, 8))(4L))))).s0470304501047752, (int8_t)l_160.s5))), ((VECTOR(int8_t, 16))(3L)), ((VECTOR(int8_t, 16))(9L))))), ((VECTOR(int8_t, 16))(0L))))).sd | p_60))
    { /* block id: 42 */
        uint32_t *l_168[2][3][5] = {{{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88},{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88},{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88}},{{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88},{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88},{&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88,&p_812->g_88}}};
        uint32_t ***l_175 = &p_812->g_144[2][3];
        uint32_t ***l_176 = &p_812->g_144[0][3];
        uint32_t ***l_177 = &p_812->g_144[2][3];
        uint32_t ***l_178 = &p_812->g_144[2][3];
        uint32_t ***l_179 = &p_812->g_144[2][3];
        uint32_t ***l_180 = (void*)0;
        uint32_t ***l_181[1];
        int32_t l_188 = 3L;
        int32_t l_190 = 0x2C106F47L;
        int32_t l_193 = 0x7D33C25DL;
        int32_t l_194 = 0x3DDCB5EBL;
        int32_t l_195 = 0L;
        int32_t l_196 = 0x79340F36L;
        int32_t l_197[10] = {0x670366A3L,0L,0x670366A3L,0x670366A3L,0L,0x670366A3L,0x670366A3L,0L,0x670366A3L,0x670366A3L};
        uint8_t l_198[2][1];
        VECTOR(int64_t, 8) l_212 = (VECTOR(int64_t, 8))(0x622FEB6F9DCD163AL, (VECTOR(int64_t, 4))(0x622FEB6F9DCD163AL, (VECTOR(int64_t, 2))(0x622FEB6F9DCD163AL, 0L), 0L), 0L, 0x622FEB6F9DCD163AL, 0L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_181[i] = &p_812->g_144[2][3];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_198[i][j] = 0x0AL;
        }
        if (((l_182 = ((((safe_rshift_func_int16_t_s_s((l_168[0][0][1] != l_168[1][0][3]), 9)) , (&p_812->g_147 != &p_812->g_147)) == (l_155.s3 >= ((safe_mul_func_uint8_t_u_u(l_160.s2, (safe_div_func_int16_t_s_s((((**p_812->g_146) != 0x7B2AL) , ((**p_57) = (safe_div_func_int32_t_s_s((~(**p_59)), p_58)))), (-1L))))) || 0x591016E8ACDD564CL))) , (void*)0)) != &p_812->g_145[6][6]))
        { /* block id: 45 */
            uint32_t l_183[9][5] = {{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL},{0x9C307FEAL,0x8E9DECBAL,0x9C307FEAL,0x9C307FEAL,0x8E9DECBAL}};
            int32_t *l_184[9];
            uint8_t *l_203 = &l_198[1][0];
            uint16_t *l_205[2];
            uint8_t *l_210 = &p_812->g_98;
            VECTOR(int64_t, 8) l_211 = (VECTOR(int64_t, 8))(0x35C62C87CCA9B615L, (VECTOR(int64_t, 4))(0x35C62C87CCA9B615L, (VECTOR(int64_t, 2))(0x35C62C87CCA9B615L, 4L), 4L), 4L, 0x35C62C87CCA9B615L, 4L);
            int i, j;
            for (i = 0; i < 9; i++)
                l_184[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_205[i] = &p_812->g_85;
            l_183[7][1] |= (**p_59);
            --l_198[1][0];
            (*p_812->g_104) = 0x68A56362L;
            l_186 = (safe_div_func_int64_t_s_s(((l_191 , (l_191 &= ((((*p_56) & (((*l_203) = p_812->g_127.s1) ^ ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(5L, (l_204 == ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-8L), ((((l_195 = p_812->g_4[0]) && (++p_812->g_85)) == ((**p_812->g_43) < ((safe_lshift_func_uint8_t_u_u(((*l_210) = 0UL), 0)) | FAKE_DIVERGE(p_812->global_0_offset, get_global_id(0), 10)))) >= ((*l_162) = l_197[0])), (-2L), (-1L), 0x155A25A282962CD7L, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(0x4CC234C242819684L, 0x0D241F43FE7ED3B3L)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x46EC92A06D2CD217L, (-1L))).xxyxyyyyxxyyxyyx)).s7c, ((VECTOR(int64_t, 16))(1L, 0x1380094E7EC2F750L, 0x551D6868DB944456L, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(l_211.s41343075)).hi, ((VECTOR(int64_t, 16))(l_212.s7542573562703015)).s981c))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_812->g_213.s56f0)).y, 0x6B7EE9CA37805436L, 0x18E5B0AA003E9E2FL, 0L)), ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(l_214.xyxy)).hi, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((((safe_sub_func_int32_t_s_s(((*p_812->g_104) |= ((**p_812->g_43) , l_160.s3)), p_58)) > FAKE_DIVERGE(p_812->local_2_offset, get_local_id(2), 10)) && p_812->g_4[0]), 0xF3101816L, ((VECTOR(uint32_t, 4))(4294967287UL)), ((VECTOR(uint32_t, 2))(4294967295UL)), p_812->g_77, 0xBC215807L, 0x896CBFC9L, 1UL, ((VECTOR(uint32_t, 4))(4294967295UL)))).s8984)).yxzyzywywwyzwyyy))).s91ad)).xwxyyzyywxwywxyx, ((VECTOR(uint32_t, 16))(0x54F3EA3DL))))).s8a))), 1L, 0x06E1E5D73EC10CD8L, 0x24677E4473CCB1EFL)).s51))), 0L, (-4L), ((VECTOR(int64_t, 2))(0x3D20069F1A1A9EC3L)), 0x0C68EEB7C2CE1DBAL, p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 27))], 1L, (-4L), 0L)).s11)), 6L, 0x17799F0F0D5E205DL)).x > p_58) , (void*)0)), 0x43L, 0x39L)), ((VECTOR(int8_t, 4))(0x35L)), p_812->g_79, ((VECTOR(int8_t, 4))((-2L))), l_194, 1L, (-1L))).lo, ((VECTOR(int8_t, 8))((-1L)))))).s4)) | l_192[2]) < 0L))) | l_190), p_812->g_217[5][0]));
        }
        else
        { /* block id: 57 */
            if ((**p_59))
            { /* block id: 58 */
                int8_t *l_220 = (void*)0;
                int8_t *l_221 = (void*)0;
                int8_t *l_222 = &p_812->g_97;
                uint16_t *l_231 = &p_812->g_85;
                (*p_812->g_104) = (safe_add_func_int8_t_s_s(((*l_222) = p_812->g_157.y), (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((FAKE_DIVERGE(p_812->group_2_offset, get_group_id(2), 10) , p_812->g_83), 2)) <= (safe_mul_func_int16_t_s_s((**p_812->g_146), ((*l_231) = (((&p_812->g_98 != (void*)0) & ((safe_div_func_uint64_t_u_u(((p_812->g_157.y & p_812->g_156.sb) || (&p_56 != &p_812->g_147)), p_60)) , 0x72DDL)) & 0x0B28L))))), p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 27))]))));
                (*p_59) = (void*)0;
            }
            else
            { /* block id: 63 */
                l_190 = ((VECTOR(int32_t, 16))(p_812->g_232.s4512023750137524)).s3;
            }
        }
        return l_187;
    }
    else
    { /* block id: 68 */
        VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))(0x363157A5L, 0x168C1B91L);
        VECTOR(uint16_t, 2) l_254 = (VECTOR(uint16_t, 2))(0x6EE2L, 0UL);
        int32_t *l_255[1][6];
        int16_t l_256 = 0x07A0L;
        uint8_t l_315[6][6] = {{255UL,1UL,255UL,255UL,1UL,255UL},{255UL,1UL,255UL,255UL,1UL,255UL},{255UL,1UL,255UL,255UL,1UL,255UL},{255UL,1UL,255UL,255UL,1UL,255UL},{255UL,1UL,255UL,255UL,1UL,255UL},{255UL,1UL,255UL,255UL,1UL,255UL}};
        uint32_t *l_321 = (void*)0;
        uint32_t *l_322 = &p_812->g_62;
        int16_t *l_326 = &p_812->g_140;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_255[i][j] = &l_186;
        }
        l_192[3] &= (((((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_233.yxxxyyyxyxyxyxyy)).lo, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_812->g_234.s5763051764126560)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(l_186, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x2B22BD5DL)), 1L, 1L)).yxzywzwyxzywyzxy))).s2, (l_187 &= ((*p_812->g_104) ^= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((0x13225476669896BEL >= ((p_58 <= (l_189 ^= (~(l_233.x > ((safe_rshift_func_int8_t_s_s((((0x608EL ^ (safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (+p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 27))])))) != ((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((VECTOR(uint64_t, 4))(p_812->g_245.s06f4)).x)) , (safe_div_func_uint8_t_u_u((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_s((p_60 || (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_254.yy)).lo, (((void*)0 != &p_812->g_77) , p_60), 0xDE48L, 1UL)).y != p_60)), p_812->g_127.s0)) , l_233.y) , p_812->g_98) , p_60) || l_254.y), l_161.s6)), 0x3DL))), p_58)))) , p_812->g_213.sa), p_812->g_213.sc)) , 0x4CED09A8L))))) ^ GROUP_DIVERGE(0, 1))), 14)) , p_812->g_85), l_254.x)))), 0x3B0B635DL, (-1L), (-1L), ((VECTOR(int32_t, 2))(0x1101B299L)), (-1L), 0x76C9AEBBL, (-1L), 0x7BBC1122L, (**p_59), (**p_59), 1L, 0x237F3704L)).odd, ((VECTOR(int32_t, 8))(0x307D05B8L)), ((VECTOR(int32_t, 8))(0x16F064E6L))))))))).s61)).yxyxyxxx))), ((VECTOR(int32_t, 8))(2L))))).s3 == l_256) && p_812->g_77) , l_186);
        for (l_187 = (-24); (l_187 >= (-28)); l_187--)
        { /* block id: 75 */
            for (p_812->g_88 = 0; (p_812->g_88 == 10); p_812->g_88 = safe_add_func_uint64_t_u_u(p_812->g_88, 8))
            { /* block id: 78 */
                if (p_812->g_261)
                    break;
                if ((atomic_inc(&p_812->l_atomic_input[28]) == 7))
                { /* block id: 81 */
                    int32_t l_262[8][4][4] = {{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}},{{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL},{0x24BD3031L,0x4EAE0167L,0x60C8F3EEL,0x60C8F3EEL}}};
                    uint8_t l_279[5][4][9] = {{{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L}},{{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L}},{{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L}},{{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L}},{{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L},{1UL,0UL,4UL,0xE8L,0x2FL,1UL,0x2EL,1UL,0xB8L}}};
                    int32_t *l_280[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_280[i] = (void*)0;
                    for (l_262[2][1][0] = 0; (l_262[2][1][0] >= 0); l_262[2][1][0] = safe_add_func_int16_t_s_s(l_262[2][1][0], 5))
                    { /* block id: 84 */
                        int8_t l_265 = 0x19L;
                        int8_t l_266 = (-1L);
                        uint16_t l_267 = 0x7E2CL;
                        int8_t l_270 = 0L;
                        int32_t l_271 = 0x4EA6F82FL;
                        int32_t l_272 = (-1L);
                        int16_t l_273[1];
                        uint16_t l_274 = 8UL;
                        int32_t *l_277 = &l_271;
                        int32_t *l_278 = (void*)0;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_273[i] = 0x50AAL;
                        ++l_267;
                        l_270 = 0x42A3B7F0L;
                        --l_274;
                        l_278 = l_277;
                    }
                    l_280[0] = (l_279[1][2][2] , (void*)0);
                    for (l_262[2][1][0] = 0; (l_262[2][1][0] != (-13)); l_262[2][1][0]--)
                    { /* block id: 93 */
                        VECTOR(int8_t, 4) l_283 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
                        int64_t l_284 = (-1L);
                        uint16_t l_285 = 0x0244L;
                        VECTOR(int32_t, 8) l_288 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4BB8BC64L), 0x4BB8BC64L), 0x4BB8BC64L, (-1L), 0x4BB8BC64L);
                        VECTOR(int32_t, 8) l_289 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        VECTOR(int32_t, 16) l_290 = (VECTOR(int32_t, 16))(0x772A3F90L, (VECTOR(int32_t, 4))(0x772A3F90L, (VECTOR(int32_t, 2))(0x772A3F90L, 2L), 2L), 2L, 0x772A3F90L, 2L, (VECTOR(int32_t, 2))(0x772A3F90L, 2L), (VECTOR(int32_t, 2))(0x772A3F90L, 2L), 0x772A3F90L, 2L, 0x772A3F90L, 2L);
                        uint32_t l_291 = 0xF0A9A969L;
                        uint16_t l_292 = 0x360BL;
                        int64_t l_293 = 7L;
                        VECTOR(uint16_t, 8) l_294 = (VECTOR(uint16_t, 8))(0x7DE6L, (VECTOR(uint16_t, 4))(0x7DE6L, (VECTOR(uint16_t, 2))(0x7DE6L, 1UL), 1UL), 1UL, 0x7DE6L, 1UL);
                        int32_t l_295 = 0x1C03D596L;
                        VECTOR(uint16_t, 16) l_296 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xBCD4L), 0xBCD4L), 0xBCD4L, 65530UL, 0xBCD4L, (VECTOR(uint16_t, 2))(65530UL, 0xBCD4L), (VECTOR(uint16_t, 2))(65530UL, 0xBCD4L), 65530UL, 0xBCD4L, 65530UL, 0xBCD4L);
                        uint64_t l_297 = 0UL;
                        VECTOR(uint16_t, 4) l_298 = (VECTOR(uint16_t, 4))(0xCC6AL, (VECTOR(uint16_t, 2))(0xCC6AL, 65532UL), 65532UL);
                        int16_t l_299 = 1L;
                        int64_t l_300 = 0x36655F0420D3E76DL;
                        uint32_t l_301 = 4294967288UL;
                        uint64_t l_302 = 1UL;
                        uint8_t l_303 = 0x6EL;
                        uint64_t l_304[4] = {1UL,1UL,1UL,1UL};
                        uint16_t l_305 = 0xBC3FL;
                        int32_t l_306 = 0x49D58658L;
                        int32_t l_307 = 1L;
                        int8_t l_308 = 2L;
                        uint32_t l_309 = 7UL;
                        uint32_t l_310[10] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL};
                        int i;
                        l_280[0] = ((GROUP_DIVERGE(2, 1) , (l_283.y , 0L)) , (void*)0);
                        l_285++;
                        l_310[1] = ((VECTOR(int32_t, 8))(8L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_288.s30))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_289.s51524361)).odd))))).zwzyxxxzywzwxzyz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_290.s81af64ab)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_291 , (((l_292 , (l_293 , ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(l_294.s5224335565573677)).s99, ((VECTOR(uint16_t, 8))(l_295, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_296.sc3)).xxyyxyyx)).hi)), (l_297 = ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(65533UL, 0UL))))), 1UL, 0x392DL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65527UL, 0xA53DL)), 65534UL, 0x6683L)).yxzwwzwxxwxxxyxz)).s07)))).xxxxyyxyxxxyxyxx)).s632f))).z), 0UL, 0xE575L)).s53, ((VECTOR(uint16_t, 4))(l_298.zyzz)).odd))).xxxy, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(0x5087L, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(65535UL, 9UL, 0x13F8L, 0x25B6L)), ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(l_299, 0xC8B6L, 0xBD89L, 8UL)), ((VECTOR(uint16_t, 8))((l_301 = l_300), 7UL, 0xFC61L, 0x84C4L, l_302, l_303, 0xD05DL, 0xFEF2L)).odd)))))).y, 65528UL, 0UL, 0xA765L, 0xDB1EL, ((VECTOR(uint16_t, 2))(0x17EDL)), l_304[1], ((VECTOR(uint16_t, 4))(2UL)), ((VECTOR(uint16_t, 2))(65535UL)), 65527UL)).s4f, ((VECTOR(uint16_t, 2))(0x697CL))))).xxyx))), 0x0D62903FL, ((VECTOR(uint32_t, 2))(0x3F66FD78L)), 0x735E70CFL)).odd, ((VECTOR(uint32_t, 4))(0xC17FFCD7L))))).w)) , 0xF8L) , l_305)), l_306, 1L, 0L)), 0x66831ED0L, 0x081643C2L, 1L, l_307, 0x22570214L, 1L, (-1L), 0x28FA942DL, 0x2022ACAEL, 0x03D6FCE8L, (-1L), 0x00154BB3L)).scd95, ((VECTOR(int32_t, 4))(0x64DB2FAFL))))).xxxyyzyyzyzywxxx)), ((VECTOR(int32_t, 16))((-8L)))))).s40, ((VECTOR(int32_t, 2))((-1L)))))).yxxxyyxx)).s1476477635254433, (int32_t)l_308, (int32_t)l_309))).s8d69)), 0L)).s6;
                        l_290.s2 |= (-8L);
                    }
                    unsigned int result = 0;
                    int l_262_i0, l_262_i1, l_262_i2;
                    for (l_262_i0 = 0; l_262_i0 < 8; l_262_i0++) {
                        for (l_262_i1 = 0; l_262_i1 < 4; l_262_i1++) {
                            for (l_262_i2 = 0; l_262_i2 < 4; l_262_i2++) {
                                result += l_262[l_262_i0][l_262_i1][l_262_i2];
                            }
                        }
                    }
                    int l_279_i0, l_279_i1, l_279_i2;
                    for (l_279_i0 = 0; l_279_i0 < 5; l_279_i0++) {
                        for (l_279_i1 = 0; l_279_i1 < 4; l_279_i1++) {
                            for (l_279_i2 = 0; l_279_i2 < 9; l_279_i2++) {
                                result += l_279[l_279_i0][l_279_i1][l_279_i2];
                            }
                        }
                    }
                    atomic_add(&p_812->l_special_values[28], result);
                }
                else
                { /* block id: 101 */
                    (1 + 1);
                }
            }
            return (**p_59);
        }
        (*p_59) = func_66((*p_57), (((safe_lshift_func_int8_t_s_s(8L, (safe_div_func_int16_t_s_s((l_315[5][2] ^= (*p_56)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x0D5CL, ((VECTOR(int16_t, 2))(p_812->g_316.s8f)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, ((*l_326) &= (((safe_lshift_func_int16_t_s_s((**p_57), 0)) || (l_192[3] , (safe_lshift_func_int16_t_s_u((((((*l_322)--) , 0x28L) >= ((((l_325 = 0x3881E752L) >= (((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(l_192[3], ((**p_812->g_146) || 0UL), ((VECTOR(int8_t, 2))((-2L))), ((VECTOR(int8_t, 2))(0x4CL)), l_192[3], p_58, ((VECTOR(int8_t, 8))(0x79L)))).s4836, ((VECTOR(int8_t, 4))(0x79L))))).hi)), 0x02L)).yxwyyxyy, ((VECTOR(int8_t, 8))((-5L)))))).s5304670313127613, ((VECTOR(int8_t, 16))(0x78L))))).even, (int8_t)(-4L)))).s7 , 1UL)) > l_155.s2) > p_58)) , l_191), 11)))) != (**p_59))), 0x58D7L, 0x78A9L, 0x586BL, ((VECTOR(int16_t, 4))(0x49F8L)), (**p_812->g_146), (*p_56), ((VECTOR(int16_t, 4))(6L)), 1L)).sd5)), ((VECTOR(int16_t, 8))(0x6C44L)), 1L, 3L, 2L)).odd)).s3)))) > p_812->g_120[5]) <= l_155.s3), l_185, p_812);
    }
    for (l_185 = (-7); (l_185 <= (-17)); l_185 = safe_sub_func_int16_t_s_s(l_185, 2))
    { /* block id: 115 */
        uint32_t l_329 = 0xBABC9213L;
        return l_329;
    }
    for (p_812->g_97 = (-3); (p_812->g_97 >= (-11)); p_812->g_97--)
    { /* block id: 120 */
        int16_t l_355 = (-1L);
        int32_t l_356 = 0x30100DD8L;
        l_356 |= (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s(0x153090CB61BDDE95L, (safe_rshift_func_uint8_t_u_u(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(1UL, ((GROUP_DIVERGE(1, 1) != p_812->g_153.x) , (l_355 ^= (safe_lshift_func_int16_t_s_s((((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_340.se83a)).hi)).xxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((safe_rshift_func_int8_t_s_u((l_187 |= p_812->g_88), 7)), (safe_rshift_func_int16_t_s_s((((~((safe_mul_func_uint16_t_u_u(((void*)0 != (*p_812->g_146)), ((safe_div_func_uint32_t_u_u(((65528UL || (p_812->g_351 != FAKE_DIVERGE(p_812->group_1_offset, get_group_id(1), 10))) ^ (((VECTOR(uint64_t, 4))(l_354.s4002)).y && ((0x66E9L != ((*p_812->g_146) != (*p_812->g_146))) < p_60))), p_58)) == GROUP_DIVERGE(0, 1)))) < 0x6EL)) , &p_812->g_146) != &p_57), 15)), 1L, ((VECTOR(int8_t, 4))(0x43L)), 1L)).s76)), ((VECTOR(int8_t, 4))(0x00L)), 0x04L, 0L, 0x2DL, ((VECTOR(int8_t, 2))(0x36L)), 2L, 1L, (-10L), 0x11L, (-9L))).s468f))).y != l_160.s5), 14)))), 0xE98BEF974E3EA0CFL, 0xC549DDB1E68D64E3L, 0x0861D31090EADE46L, l_355, 4UL, 0xCF6E4508EA63B824L)), 0x7BE1634E990694C1L, p_58, ((VECTOR(uint64_t, 2))(1UL)), 0UL, ((VECTOR(uint64_t, 2))(1UL)), 18446744073709551614UL)).s5 , l_192[4]) > p_812->g_79), 2)))), p_58));
        return l_355;
    }
    return l_191;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_98 p_812->g_79 p_812->g_85 p_812->g_88 p_812->g_111 p_812->g_120 p_812->g_23 p_812->g_127 p_812->g_4 p_812->g_140 p_812->g_146
 * writes: p_812->g_98 p_812->g_85 p_812->g_79 p_812->g_88 p_812->g_104 p_812->g_97 p_812->g_120 p_812->g_140 p_812->g_144
 */
int16_t ** func_64(uint32_t * p_65, struct S0 * p_812)
{ /* block id: 25 */
    int32_t *l_91 = &p_812->g_79;
    int32_t *l_92 = &p_812->g_79;
    int32_t *l_93 = (void*)0;
    int32_t *l_94 = &p_812->g_79;
    int32_t *l_95[3][2];
    int16_t *l_101 = &p_812->g_23[0][2][1];
    int32_t **l_102 = &l_94;
    int32_t **l_103[4] = {&l_95[2][1],&l_95[2][1],&l_95[2][1],&l_95[2][1]};
    int8_t *l_114 = &p_812->g_97;
    uint32_t l_115 = 0x29F1C2FFL;
    VECTOR(int16_t, 16) l_128 = (VECTOR(int16_t, 16))(0x143BL, (VECTOR(int16_t, 4))(0x143BL, (VECTOR(int16_t, 2))(0x143BL, 0L), 0L), 0L, 0x143BL, 0L, (VECTOR(int16_t, 2))(0x143BL, 0L), (VECTOR(int16_t, 2))(0x143BL, 0L), 0x143BL, 0L, 0x143BL, 0L);
    VECTOR(int16_t, 8) l_135 = (VECTOR(int16_t, 8))(0x0C3DL, (VECTOR(int16_t, 4))(0x0C3DL, (VECTOR(int16_t, 2))(0x0C3DL, 0x0BAEL), 0x0BAEL), 0x0BAEL, 0x0C3DL, 0x0BAEL);
    uint8_t l_138 = 0xC1L;
    int16_t *l_139 = &p_812->g_140;
    uint32_t *l_143[7] = {&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62};
    uint32_t **l_142 = &l_143[0];
    uint32_t ***l_141 = &l_142;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_95[i][j] = (void*)0;
    }
    --p_812->g_98;
    p_812->g_104 = ((*l_102) = func_66(l_101, (*l_92), (*l_91), p_812));
    (*l_102) = ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((((VECTOR(int8_t, 2))(p_812->g_111.yz)).hi < (p_812->g_98 = (safe_lshift_func_int8_t_s_s(((*l_114) = (-1L)), l_115)))) == (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((p_812->g_120[6]++), (safe_mul_func_int8_t_s_s(p_812->g_23[0][2][1], FAKE_DIVERGE(p_812->global_1_offset, get_global_id(1), 10))))), (safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_812->global_1_offset, get_global_id(1), 10), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(p_812->g_127.s0744242006003740)).s35, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_128.se40aa8de78a8b9ac)).odd)))).s42))).lo))))) >= p_812->g_4[0]), (((*l_139) |= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((GROUP_DIVERGE(2, 1) > 1UL), (safe_div_func_int8_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_135.s6166)), (**l_102), ((VECTOR(int16_t, 2))(0x6D15L, (-1L))), (-1L))))).s4 , (safe_lshift_func_int16_t_s_u(p_812->g_111.z, 4))), ((((*l_94) , &p_812->g_23[0][3][1]) != l_101) || l_138))))), (*l_92)))) < (*l_91)))), (*l_94))), (*l_92))) , p_65);
    p_812->g_144[2][3] = ((*l_141) = &p_65);
    return p_812->g_146;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_85 p_812->g_88
 * writes: p_812->g_85 p_812->g_79 p_812->g_88
 */
uint32_t * func_66(int16_t * p_67, int64_t  p_68, uint64_t  p_69, struct S0 * p_812)
{ /* block id: 19 */
    int32_t *l_78 = &p_812->g_79;
    int32_t *l_80 = &p_812->g_79;
    int32_t l_81 = 0x7B43C621L;
    int32_t *l_82[4];
    int i;
    for (i = 0; i < 4; i++)
        l_82[i] = &l_81;
    --p_812->g_85;
    (*l_78) = (2L > (!0x6BC8B8ECL));
    l_78 = &l_81;
    ++p_812->g_88;
    return &p_812->g_88;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[61];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 61; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[61];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 61; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_comm_values[i] = 1;
    struct S0 c_813;
    struct S0* p_812 = &c_813;
    struct S0 c_814 = {
        0x4E6D4F28L, // p_812->g_3
        {4294967295UL}, // p_812->g_4
        {{{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL}},{{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL}},{{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL},{0x20A9L,0x577CL}}}, // p_812->g_23
        {{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}},{{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3},{&p_812->g_3}}}, // p_812->g_41
        {{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]},{&p_812->g_41[3][9][0],&p_812->g_41[3][9][0]}}, // p_812->g_40
        (void*)0, // p_812->g_42
        &p_812->g_41[3][9][0], // p_812->g_43
        4294967295UL, // p_812->g_62
        0x328C330C202EAB38L, // p_812->g_77
        0x4F1DFBA3L, // p_812->g_79
        0x46FEDEA8L, // p_812->g_83
        0x6EBEAAF7L, // p_812->g_84
        0xD4B8L, // p_812->g_85
        4294967287UL, // p_812->g_88
        0x3A89CE68EBBCFA1FL, // p_812->g_96
        9L, // p_812->g_97
        7UL, // p_812->g_98
        &p_812->g_79, // p_812->g_104
        (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, (-7L)), (-7L)), // p_812->g_111
        {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL}, // p_812->g_120
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_812->g_127
        0x3DFCL, // p_812->g_140
        {{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88},{&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_62,&p_812->g_88}}, // p_812->g_145
        {{(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0},{(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0},{(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0,&p_812->g_145[2][0],(void*)0,(void*)0}}, // p_812->g_144
        &p_812->g_23[2][2][0], // p_812->g_147
        &p_812->g_147, // p_812->g_146
        (VECTOR(int8_t, 2))(0x43L, 0x0DL), // p_812->g_153
        (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x78L), 0x78L), // p_812->g_154
        (VECTOR(int32_t, 16))(0x7355CDA5L, (VECTOR(int32_t, 4))(0x7355CDA5L, (VECTOR(int32_t, 2))(0x7355CDA5L, 0x2CEC79C0L), 0x2CEC79C0L), 0x2CEC79C0L, 0x7355CDA5L, 0x2CEC79C0L, (VECTOR(int32_t, 2))(0x7355CDA5L, 0x2CEC79C0L), (VECTOR(int32_t, 2))(0x7355CDA5L, 0x2CEC79C0L), 0x7355CDA5L, 0x2CEC79C0L, 0x7355CDA5L, 0x2CEC79C0L), // p_812->g_156
        (VECTOR(int32_t, 2))(0x79891189L, 0x32AAFAE5L), // p_812->g_157
        (VECTOR(int64_t, 16))(0x5B1883FA38E5D4F6L, (VECTOR(int64_t, 4))(0x5B1883FA38E5D4F6L, (VECTOR(int64_t, 2))(0x5B1883FA38E5D4F6L, 0L), 0L), 0L, 0x5B1883FA38E5D4F6L, 0L, (VECTOR(int64_t, 2))(0x5B1883FA38E5D4F6L, 0L), (VECTOR(int64_t, 2))(0x5B1883FA38E5D4F6L, 0L), 0x5B1883FA38E5D4F6L, 0L, 0x5B1883FA38E5D4F6L, 0L), // p_812->g_213
        {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}, // p_812->g_217
        (VECTOR(int32_t, 8))(0x4D7A8822L, (VECTOR(int32_t, 4))(0x4D7A8822L, (VECTOR(int32_t, 2))(0x4D7A8822L, 0x32D5520BL), 0x32D5520BL), 0x32D5520BL, 0x4D7A8822L, 0x32D5520BL), // p_812->g_232
        (VECTOR(int32_t, 8))(0x51A2E1D2L, (VECTOR(int32_t, 4))(0x51A2E1D2L, (VECTOR(int32_t, 2))(0x51A2E1D2L, 0L), 0L), 0L, 0x51A2E1D2L, 0L), // p_812->g_234
        (VECTOR(uint64_t, 16))(0xCAA546107686EA31L, (VECTOR(uint64_t, 4))(0xCAA546107686EA31L, (VECTOR(uint64_t, 2))(0xCAA546107686EA31L, 0xBE65349B85D44C6BL), 0xBE65349B85D44C6BL), 0xBE65349B85D44C6BL, 0xCAA546107686EA31L, 0xBE65349B85D44C6BL, (VECTOR(uint64_t, 2))(0xCAA546107686EA31L, 0xBE65349B85D44C6BL), (VECTOR(uint64_t, 2))(0xCAA546107686EA31L, 0xBE65349B85D44C6BL), 0xCAA546107686EA31L, 0xBE65349B85D44C6BL, 0xCAA546107686EA31L, 0xBE65349B85D44C6BL), // p_812->g_245
        0x0FL, // p_812->g_261
        (VECTOR(int16_t, 16))(0x0722L, (VECTOR(int16_t, 4))(0x0722L, (VECTOR(int16_t, 2))(0x0722L, 6L), 6L), 6L, 0x0722L, 6L, (VECTOR(int16_t, 2))(0x0722L, 6L), (VECTOR(int16_t, 2))(0x0722L, 6L), 0x0722L, 6L, 0x0722L, 6L), // p_812->g_316
        0x486AL, // p_812->g_351
        (VECTOR(uint32_t, 2))(0x5361504CL, 0xA85F6135L), // p_812->g_362
        (VECTOR(int32_t, 8))(0x06E85073L, (VECTOR(int32_t, 4))(0x06E85073L, (VECTOR(int32_t, 2))(0x06E85073L, 0x0BFF0933L), 0x0BFF0933L), 0x0BFF0933L, 0x06E85073L, 0x0BFF0933L), // p_812->g_385
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3E7B9A00L), 0x3E7B9A00L), 0x3E7B9A00L, 0L, 0x3E7B9A00L, (VECTOR(int32_t, 2))(0L, 0x3E7B9A00L), (VECTOR(int32_t, 2))(0L, 0x3E7B9A00L), 0L, 0x3E7B9A00L, 0L, 0x3E7B9A00L), // p_812->g_388
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0EL), 0x0EL), 0x0EL, (-1L), 0x0EL, (VECTOR(int8_t, 2))((-1L), 0x0EL), (VECTOR(int8_t, 2))((-1L), 0x0EL), (-1L), 0x0EL, (-1L), 0x0EL), // p_812->g_403
        (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 6UL), 6UL), 6UL, 4UL, 6UL, (VECTOR(uint32_t, 2))(4UL, 6UL), (VECTOR(uint32_t, 2))(4UL, 6UL), 4UL, 6UL, 4UL, 6UL), // p_812->g_408
        18446744073709551613UL, // p_812->g_411
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x25FCL), 0x25FCL), 0x25FCL, 0L, 0x25FCL), // p_812->g_427
        (VECTOR(int8_t, 2))(0x0FL, (-3L)), // p_812->g_453
        {0x3BL,0L,0x3BL,0x3BL,0L,0x3BL,0x3BL,0L,0x3BL,0x3BL}, // p_812->g_485
        0x74FA4154E9C152D6L, // p_812->g_488
        (void*)0, // p_812->g_492
        (VECTOR(int64_t, 2))(0x1D661E4E69B1801EL, 0x49C7E69D44B29415L), // p_812->g_496
        (VECTOR(int32_t, 2))(0x5CB138E5L, 7L), // p_812->g_555
        {{0x0068L,0x0068L,0x0068L,0x0068L,0x0068L,0x0068L},{0x0068L,0x0068L,0x0068L,0x0068L,0x0068L,0x0068L},{0x0068L,0x0068L,0x0068L,0x0068L,0x0068L,0x0068L},{0x0068L,0x0068L,0x0068L,0x0068L,0x0068L,0x0068L},{0x0068L,0x0068L,0x0068L,0x0068L,0x0068L,0x0068L}}, // p_812->g_559
        (void*)0, // p_812->g_579
        (void*)0, // p_812->g_583
        (VECTOR(int64_t, 2))((-7L), 0L), // p_812->g_588
        (VECTOR(uint64_t, 2))(0xFF1DA59FD27FD990L, 0x6380750435415482L), // p_812->g_590
        (VECTOR(int8_t, 2))((-5L), (-8L)), // p_812->g_620
        (VECTOR(uint16_t, 16))(0x4361L, (VECTOR(uint16_t, 4))(0x4361L, (VECTOR(uint16_t, 2))(0x4361L, 0xBDECL), 0xBDECL), 0xBDECL, 0x4361L, 0xBDECL, (VECTOR(uint16_t, 2))(0x4361L, 0xBDECL), (VECTOR(uint16_t, 2))(0x4361L, 0xBDECL), 0x4361L, 0xBDECL, 0x4361L, 0xBDECL), // p_812->g_621
        (VECTOR(int8_t, 2))(1L, 0x29L), // p_812->g_624
        (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L), 0L, 3L, 0L), // p_812->g_626
        (void*)0, // p_812->g_628
        (VECTOR(uint16_t, 4))(0xEA27L, (VECTOR(uint16_t, 2))(0xEA27L, 1UL), 1UL), // p_812->g_630
        (VECTOR(int16_t, 8))(0x4D34L, (VECTOR(int16_t, 4))(0x4D34L, (VECTOR(int16_t, 2))(0x4D34L, (-7L)), (-7L)), (-7L), 0x4D34L, (-7L)), // p_812->g_633
        &p_812->g_77, // p_812->g_636
        &p_812->g_261, // p_812->g_660
        &p_812->g_660, // p_812->g_659
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int64_t, 2))((-1L), (-2L)), (VECTOR(int64_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L)), // p_812->g_661
        &p_812->g_104, // p_812->g_675
        &p_812->g_79, // p_812->g_677
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5AL), 0x5AL), 0x5AL, 1L, 0x5AL, (VECTOR(int8_t, 2))(1L, 0x5AL), (VECTOR(int8_t, 2))(1L, 0x5AL), 1L, 0x5AL, 1L, 0x5AL), // p_812->g_690
        &p_812->g_41[3][9][0], // p_812->g_698
        (VECTOR(int32_t, 2))(0x6FB80563L, 1L), // p_812->g_711
        &p_812->g_636, // p_812->g_733
        &p_812->g_733, // p_812->g_732
        0x9109433FL, // p_812->g_734
        (-3L), // p_812->g_770
        8UL, // p_812->g_781
        (VECTOR(uint8_t, 2))(0x7FL, 255UL), // p_812->g_785
        (-9L), // p_812->g_789
        0x2B5F9E60L, // p_812->g_811
        0, // p_812->v_collective
        sequence_input[get_global_id(0)], // p_812->global_0_offset
        sequence_input[get_global_id(1)], // p_812->global_1_offset
        sequence_input[get_global_id(2)], // p_812->global_2_offset
        sequence_input[get_local_id(0)], // p_812->local_0_offset
        sequence_input[get_local_id(1)], // p_812->local_1_offset
        sequence_input[get_local_id(2)], // p_812->local_2_offset
        sequence_input[get_group_id(0)], // p_812->group_0_offset
        sequence_input[get_group_id(1)], // p_812->group_1_offset
        sequence_input[get_group_id(2)], // p_812->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 27)), permutations[0][get_linear_local_id()])), // p_812->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_813 = c_814;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_812);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_812->g_3, "p_812->g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_812->g_4[i], "p_812->g_4[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_812->g_23[i][j][k], "p_812->g_23[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_812->g_62, "p_812->g_62", print_hash_value);
    transparent_crc(p_812->g_77, "p_812->g_77", print_hash_value);
    transparent_crc(p_812->g_79, "p_812->g_79", print_hash_value);
    transparent_crc(p_812->g_83, "p_812->g_83", print_hash_value);
    transparent_crc(p_812->g_84, "p_812->g_84", print_hash_value);
    transparent_crc(p_812->g_85, "p_812->g_85", print_hash_value);
    transparent_crc(p_812->g_88, "p_812->g_88", print_hash_value);
    transparent_crc(p_812->g_96, "p_812->g_96", print_hash_value);
    transparent_crc(p_812->g_97, "p_812->g_97", print_hash_value);
    transparent_crc(p_812->g_98, "p_812->g_98", print_hash_value);
    transparent_crc(p_812->g_111.x, "p_812->g_111.x", print_hash_value);
    transparent_crc(p_812->g_111.y, "p_812->g_111.y", print_hash_value);
    transparent_crc(p_812->g_111.z, "p_812->g_111.z", print_hash_value);
    transparent_crc(p_812->g_111.w, "p_812->g_111.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_812->g_120[i], "p_812->g_120[i]", print_hash_value);

    }
    transparent_crc(p_812->g_127.s0, "p_812->g_127.s0", print_hash_value);
    transparent_crc(p_812->g_127.s1, "p_812->g_127.s1", print_hash_value);
    transparent_crc(p_812->g_127.s2, "p_812->g_127.s2", print_hash_value);
    transparent_crc(p_812->g_127.s3, "p_812->g_127.s3", print_hash_value);
    transparent_crc(p_812->g_127.s4, "p_812->g_127.s4", print_hash_value);
    transparent_crc(p_812->g_127.s5, "p_812->g_127.s5", print_hash_value);
    transparent_crc(p_812->g_127.s6, "p_812->g_127.s6", print_hash_value);
    transparent_crc(p_812->g_127.s7, "p_812->g_127.s7", print_hash_value);
    transparent_crc(p_812->g_140, "p_812->g_140", print_hash_value);
    transparent_crc(p_812->g_153.x, "p_812->g_153.x", print_hash_value);
    transparent_crc(p_812->g_153.y, "p_812->g_153.y", print_hash_value);
    transparent_crc(p_812->g_154.x, "p_812->g_154.x", print_hash_value);
    transparent_crc(p_812->g_154.y, "p_812->g_154.y", print_hash_value);
    transparent_crc(p_812->g_154.z, "p_812->g_154.z", print_hash_value);
    transparent_crc(p_812->g_154.w, "p_812->g_154.w", print_hash_value);
    transparent_crc(p_812->g_156.s0, "p_812->g_156.s0", print_hash_value);
    transparent_crc(p_812->g_156.s1, "p_812->g_156.s1", print_hash_value);
    transparent_crc(p_812->g_156.s2, "p_812->g_156.s2", print_hash_value);
    transparent_crc(p_812->g_156.s3, "p_812->g_156.s3", print_hash_value);
    transparent_crc(p_812->g_156.s4, "p_812->g_156.s4", print_hash_value);
    transparent_crc(p_812->g_156.s5, "p_812->g_156.s5", print_hash_value);
    transparent_crc(p_812->g_156.s6, "p_812->g_156.s6", print_hash_value);
    transparent_crc(p_812->g_156.s7, "p_812->g_156.s7", print_hash_value);
    transparent_crc(p_812->g_156.s8, "p_812->g_156.s8", print_hash_value);
    transparent_crc(p_812->g_156.s9, "p_812->g_156.s9", print_hash_value);
    transparent_crc(p_812->g_156.sa, "p_812->g_156.sa", print_hash_value);
    transparent_crc(p_812->g_156.sb, "p_812->g_156.sb", print_hash_value);
    transparent_crc(p_812->g_156.sc, "p_812->g_156.sc", print_hash_value);
    transparent_crc(p_812->g_156.sd, "p_812->g_156.sd", print_hash_value);
    transparent_crc(p_812->g_156.se, "p_812->g_156.se", print_hash_value);
    transparent_crc(p_812->g_156.sf, "p_812->g_156.sf", print_hash_value);
    transparent_crc(p_812->g_157.x, "p_812->g_157.x", print_hash_value);
    transparent_crc(p_812->g_157.y, "p_812->g_157.y", print_hash_value);
    transparent_crc(p_812->g_213.s0, "p_812->g_213.s0", print_hash_value);
    transparent_crc(p_812->g_213.s1, "p_812->g_213.s1", print_hash_value);
    transparent_crc(p_812->g_213.s2, "p_812->g_213.s2", print_hash_value);
    transparent_crc(p_812->g_213.s3, "p_812->g_213.s3", print_hash_value);
    transparent_crc(p_812->g_213.s4, "p_812->g_213.s4", print_hash_value);
    transparent_crc(p_812->g_213.s5, "p_812->g_213.s5", print_hash_value);
    transparent_crc(p_812->g_213.s6, "p_812->g_213.s6", print_hash_value);
    transparent_crc(p_812->g_213.s7, "p_812->g_213.s7", print_hash_value);
    transparent_crc(p_812->g_213.s8, "p_812->g_213.s8", print_hash_value);
    transparent_crc(p_812->g_213.s9, "p_812->g_213.s9", print_hash_value);
    transparent_crc(p_812->g_213.sa, "p_812->g_213.sa", print_hash_value);
    transparent_crc(p_812->g_213.sb, "p_812->g_213.sb", print_hash_value);
    transparent_crc(p_812->g_213.sc, "p_812->g_213.sc", print_hash_value);
    transparent_crc(p_812->g_213.sd, "p_812->g_213.sd", print_hash_value);
    transparent_crc(p_812->g_213.se, "p_812->g_213.se", print_hash_value);
    transparent_crc(p_812->g_213.sf, "p_812->g_213.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_812->g_217[i][j], "p_812->g_217[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_812->g_232.s0, "p_812->g_232.s0", print_hash_value);
    transparent_crc(p_812->g_232.s1, "p_812->g_232.s1", print_hash_value);
    transparent_crc(p_812->g_232.s2, "p_812->g_232.s2", print_hash_value);
    transparent_crc(p_812->g_232.s3, "p_812->g_232.s3", print_hash_value);
    transparent_crc(p_812->g_232.s4, "p_812->g_232.s4", print_hash_value);
    transparent_crc(p_812->g_232.s5, "p_812->g_232.s5", print_hash_value);
    transparent_crc(p_812->g_232.s6, "p_812->g_232.s6", print_hash_value);
    transparent_crc(p_812->g_232.s7, "p_812->g_232.s7", print_hash_value);
    transparent_crc(p_812->g_234.s0, "p_812->g_234.s0", print_hash_value);
    transparent_crc(p_812->g_234.s1, "p_812->g_234.s1", print_hash_value);
    transparent_crc(p_812->g_234.s2, "p_812->g_234.s2", print_hash_value);
    transparent_crc(p_812->g_234.s3, "p_812->g_234.s3", print_hash_value);
    transparent_crc(p_812->g_234.s4, "p_812->g_234.s4", print_hash_value);
    transparent_crc(p_812->g_234.s5, "p_812->g_234.s5", print_hash_value);
    transparent_crc(p_812->g_234.s6, "p_812->g_234.s6", print_hash_value);
    transparent_crc(p_812->g_234.s7, "p_812->g_234.s7", print_hash_value);
    transparent_crc(p_812->g_245.s0, "p_812->g_245.s0", print_hash_value);
    transparent_crc(p_812->g_245.s1, "p_812->g_245.s1", print_hash_value);
    transparent_crc(p_812->g_245.s2, "p_812->g_245.s2", print_hash_value);
    transparent_crc(p_812->g_245.s3, "p_812->g_245.s3", print_hash_value);
    transparent_crc(p_812->g_245.s4, "p_812->g_245.s4", print_hash_value);
    transparent_crc(p_812->g_245.s5, "p_812->g_245.s5", print_hash_value);
    transparent_crc(p_812->g_245.s6, "p_812->g_245.s6", print_hash_value);
    transparent_crc(p_812->g_245.s7, "p_812->g_245.s7", print_hash_value);
    transparent_crc(p_812->g_245.s8, "p_812->g_245.s8", print_hash_value);
    transparent_crc(p_812->g_245.s9, "p_812->g_245.s9", print_hash_value);
    transparent_crc(p_812->g_245.sa, "p_812->g_245.sa", print_hash_value);
    transparent_crc(p_812->g_245.sb, "p_812->g_245.sb", print_hash_value);
    transparent_crc(p_812->g_245.sc, "p_812->g_245.sc", print_hash_value);
    transparent_crc(p_812->g_245.sd, "p_812->g_245.sd", print_hash_value);
    transparent_crc(p_812->g_245.se, "p_812->g_245.se", print_hash_value);
    transparent_crc(p_812->g_245.sf, "p_812->g_245.sf", print_hash_value);
    transparent_crc(p_812->g_261, "p_812->g_261", print_hash_value);
    transparent_crc(p_812->g_316.s0, "p_812->g_316.s0", print_hash_value);
    transparent_crc(p_812->g_316.s1, "p_812->g_316.s1", print_hash_value);
    transparent_crc(p_812->g_316.s2, "p_812->g_316.s2", print_hash_value);
    transparent_crc(p_812->g_316.s3, "p_812->g_316.s3", print_hash_value);
    transparent_crc(p_812->g_316.s4, "p_812->g_316.s4", print_hash_value);
    transparent_crc(p_812->g_316.s5, "p_812->g_316.s5", print_hash_value);
    transparent_crc(p_812->g_316.s6, "p_812->g_316.s6", print_hash_value);
    transparent_crc(p_812->g_316.s7, "p_812->g_316.s7", print_hash_value);
    transparent_crc(p_812->g_316.s8, "p_812->g_316.s8", print_hash_value);
    transparent_crc(p_812->g_316.s9, "p_812->g_316.s9", print_hash_value);
    transparent_crc(p_812->g_316.sa, "p_812->g_316.sa", print_hash_value);
    transparent_crc(p_812->g_316.sb, "p_812->g_316.sb", print_hash_value);
    transparent_crc(p_812->g_316.sc, "p_812->g_316.sc", print_hash_value);
    transparent_crc(p_812->g_316.sd, "p_812->g_316.sd", print_hash_value);
    transparent_crc(p_812->g_316.se, "p_812->g_316.se", print_hash_value);
    transparent_crc(p_812->g_316.sf, "p_812->g_316.sf", print_hash_value);
    transparent_crc(p_812->g_351, "p_812->g_351", print_hash_value);
    transparent_crc(p_812->g_362.x, "p_812->g_362.x", print_hash_value);
    transparent_crc(p_812->g_362.y, "p_812->g_362.y", print_hash_value);
    transparent_crc(p_812->g_385.s0, "p_812->g_385.s0", print_hash_value);
    transparent_crc(p_812->g_385.s1, "p_812->g_385.s1", print_hash_value);
    transparent_crc(p_812->g_385.s2, "p_812->g_385.s2", print_hash_value);
    transparent_crc(p_812->g_385.s3, "p_812->g_385.s3", print_hash_value);
    transparent_crc(p_812->g_385.s4, "p_812->g_385.s4", print_hash_value);
    transparent_crc(p_812->g_385.s5, "p_812->g_385.s5", print_hash_value);
    transparent_crc(p_812->g_385.s6, "p_812->g_385.s6", print_hash_value);
    transparent_crc(p_812->g_385.s7, "p_812->g_385.s7", print_hash_value);
    transparent_crc(p_812->g_388.s0, "p_812->g_388.s0", print_hash_value);
    transparent_crc(p_812->g_388.s1, "p_812->g_388.s1", print_hash_value);
    transparent_crc(p_812->g_388.s2, "p_812->g_388.s2", print_hash_value);
    transparent_crc(p_812->g_388.s3, "p_812->g_388.s3", print_hash_value);
    transparent_crc(p_812->g_388.s4, "p_812->g_388.s4", print_hash_value);
    transparent_crc(p_812->g_388.s5, "p_812->g_388.s5", print_hash_value);
    transparent_crc(p_812->g_388.s6, "p_812->g_388.s6", print_hash_value);
    transparent_crc(p_812->g_388.s7, "p_812->g_388.s7", print_hash_value);
    transparent_crc(p_812->g_388.s8, "p_812->g_388.s8", print_hash_value);
    transparent_crc(p_812->g_388.s9, "p_812->g_388.s9", print_hash_value);
    transparent_crc(p_812->g_388.sa, "p_812->g_388.sa", print_hash_value);
    transparent_crc(p_812->g_388.sb, "p_812->g_388.sb", print_hash_value);
    transparent_crc(p_812->g_388.sc, "p_812->g_388.sc", print_hash_value);
    transparent_crc(p_812->g_388.sd, "p_812->g_388.sd", print_hash_value);
    transparent_crc(p_812->g_388.se, "p_812->g_388.se", print_hash_value);
    transparent_crc(p_812->g_388.sf, "p_812->g_388.sf", print_hash_value);
    transparent_crc(p_812->g_403.s0, "p_812->g_403.s0", print_hash_value);
    transparent_crc(p_812->g_403.s1, "p_812->g_403.s1", print_hash_value);
    transparent_crc(p_812->g_403.s2, "p_812->g_403.s2", print_hash_value);
    transparent_crc(p_812->g_403.s3, "p_812->g_403.s3", print_hash_value);
    transparent_crc(p_812->g_403.s4, "p_812->g_403.s4", print_hash_value);
    transparent_crc(p_812->g_403.s5, "p_812->g_403.s5", print_hash_value);
    transparent_crc(p_812->g_403.s6, "p_812->g_403.s6", print_hash_value);
    transparent_crc(p_812->g_403.s7, "p_812->g_403.s7", print_hash_value);
    transparent_crc(p_812->g_403.s8, "p_812->g_403.s8", print_hash_value);
    transparent_crc(p_812->g_403.s9, "p_812->g_403.s9", print_hash_value);
    transparent_crc(p_812->g_403.sa, "p_812->g_403.sa", print_hash_value);
    transparent_crc(p_812->g_403.sb, "p_812->g_403.sb", print_hash_value);
    transparent_crc(p_812->g_403.sc, "p_812->g_403.sc", print_hash_value);
    transparent_crc(p_812->g_403.sd, "p_812->g_403.sd", print_hash_value);
    transparent_crc(p_812->g_403.se, "p_812->g_403.se", print_hash_value);
    transparent_crc(p_812->g_403.sf, "p_812->g_403.sf", print_hash_value);
    transparent_crc(p_812->g_408.s0, "p_812->g_408.s0", print_hash_value);
    transparent_crc(p_812->g_408.s1, "p_812->g_408.s1", print_hash_value);
    transparent_crc(p_812->g_408.s2, "p_812->g_408.s2", print_hash_value);
    transparent_crc(p_812->g_408.s3, "p_812->g_408.s3", print_hash_value);
    transparent_crc(p_812->g_408.s4, "p_812->g_408.s4", print_hash_value);
    transparent_crc(p_812->g_408.s5, "p_812->g_408.s5", print_hash_value);
    transparent_crc(p_812->g_408.s6, "p_812->g_408.s6", print_hash_value);
    transparent_crc(p_812->g_408.s7, "p_812->g_408.s7", print_hash_value);
    transparent_crc(p_812->g_408.s8, "p_812->g_408.s8", print_hash_value);
    transparent_crc(p_812->g_408.s9, "p_812->g_408.s9", print_hash_value);
    transparent_crc(p_812->g_408.sa, "p_812->g_408.sa", print_hash_value);
    transparent_crc(p_812->g_408.sb, "p_812->g_408.sb", print_hash_value);
    transparent_crc(p_812->g_408.sc, "p_812->g_408.sc", print_hash_value);
    transparent_crc(p_812->g_408.sd, "p_812->g_408.sd", print_hash_value);
    transparent_crc(p_812->g_408.se, "p_812->g_408.se", print_hash_value);
    transparent_crc(p_812->g_408.sf, "p_812->g_408.sf", print_hash_value);
    transparent_crc(p_812->g_411, "p_812->g_411", print_hash_value);
    transparent_crc(p_812->g_427.s0, "p_812->g_427.s0", print_hash_value);
    transparent_crc(p_812->g_427.s1, "p_812->g_427.s1", print_hash_value);
    transparent_crc(p_812->g_427.s2, "p_812->g_427.s2", print_hash_value);
    transparent_crc(p_812->g_427.s3, "p_812->g_427.s3", print_hash_value);
    transparent_crc(p_812->g_427.s4, "p_812->g_427.s4", print_hash_value);
    transparent_crc(p_812->g_427.s5, "p_812->g_427.s5", print_hash_value);
    transparent_crc(p_812->g_427.s6, "p_812->g_427.s6", print_hash_value);
    transparent_crc(p_812->g_427.s7, "p_812->g_427.s7", print_hash_value);
    transparent_crc(p_812->g_453.x, "p_812->g_453.x", print_hash_value);
    transparent_crc(p_812->g_453.y, "p_812->g_453.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_812->g_485[i], "p_812->g_485[i]", print_hash_value);

    }
    transparent_crc(p_812->g_488, "p_812->g_488", print_hash_value);
    transparent_crc(p_812->g_496.x, "p_812->g_496.x", print_hash_value);
    transparent_crc(p_812->g_496.y, "p_812->g_496.y", print_hash_value);
    transparent_crc(p_812->g_555.x, "p_812->g_555.x", print_hash_value);
    transparent_crc(p_812->g_555.y, "p_812->g_555.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_812->g_559[i][j], "p_812->g_559[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_812->g_588.x, "p_812->g_588.x", print_hash_value);
    transparent_crc(p_812->g_588.y, "p_812->g_588.y", print_hash_value);
    transparent_crc(p_812->g_590.x, "p_812->g_590.x", print_hash_value);
    transparent_crc(p_812->g_590.y, "p_812->g_590.y", print_hash_value);
    transparent_crc(p_812->g_620.x, "p_812->g_620.x", print_hash_value);
    transparent_crc(p_812->g_620.y, "p_812->g_620.y", print_hash_value);
    transparent_crc(p_812->g_621.s0, "p_812->g_621.s0", print_hash_value);
    transparent_crc(p_812->g_621.s1, "p_812->g_621.s1", print_hash_value);
    transparent_crc(p_812->g_621.s2, "p_812->g_621.s2", print_hash_value);
    transparent_crc(p_812->g_621.s3, "p_812->g_621.s3", print_hash_value);
    transparent_crc(p_812->g_621.s4, "p_812->g_621.s4", print_hash_value);
    transparent_crc(p_812->g_621.s5, "p_812->g_621.s5", print_hash_value);
    transparent_crc(p_812->g_621.s6, "p_812->g_621.s6", print_hash_value);
    transparent_crc(p_812->g_621.s7, "p_812->g_621.s7", print_hash_value);
    transparent_crc(p_812->g_621.s8, "p_812->g_621.s8", print_hash_value);
    transparent_crc(p_812->g_621.s9, "p_812->g_621.s9", print_hash_value);
    transparent_crc(p_812->g_621.sa, "p_812->g_621.sa", print_hash_value);
    transparent_crc(p_812->g_621.sb, "p_812->g_621.sb", print_hash_value);
    transparent_crc(p_812->g_621.sc, "p_812->g_621.sc", print_hash_value);
    transparent_crc(p_812->g_621.sd, "p_812->g_621.sd", print_hash_value);
    transparent_crc(p_812->g_621.se, "p_812->g_621.se", print_hash_value);
    transparent_crc(p_812->g_621.sf, "p_812->g_621.sf", print_hash_value);
    transparent_crc(p_812->g_624.x, "p_812->g_624.x", print_hash_value);
    transparent_crc(p_812->g_624.y, "p_812->g_624.y", print_hash_value);
    transparent_crc(p_812->g_626.s0, "p_812->g_626.s0", print_hash_value);
    transparent_crc(p_812->g_626.s1, "p_812->g_626.s1", print_hash_value);
    transparent_crc(p_812->g_626.s2, "p_812->g_626.s2", print_hash_value);
    transparent_crc(p_812->g_626.s3, "p_812->g_626.s3", print_hash_value);
    transparent_crc(p_812->g_626.s4, "p_812->g_626.s4", print_hash_value);
    transparent_crc(p_812->g_626.s5, "p_812->g_626.s5", print_hash_value);
    transparent_crc(p_812->g_626.s6, "p_812->g_626.s6", print_hash_value);
    transparent_crc(p_812->g_626.s7, "p_812->g_626.s7", print_hash_value);
    transparent_crc(p_812->g_630.x, "p_812->g_630.x", print_hash_value);
    transparent_crc(p_812->g_630.y, "p_812->g_630.y", print_hash_value);
    transparent_crc(p_812->g_630.z, "p_812->g_630.z", print_hash_value);
    transparent_crc(p_812->g_630.w, "p_812->g_630.w", print_hash_value);
    transparent_crc(p_812->g_633.s0, "p_812->g_633.s0", print_hash_value);
    transparent_crc(p_812->g_633.s1, "p_812->g_633.s1", print_hash_value);
    transparent_crc(p_812->g_633.s2, "p_812->g_633.s2", print_hash_value);
    transparent_crc(p_812->g_633.s3, "p_812->g_633.s3", print_hash_value);
    transparent_crc(p_812->g_633.s4, "p_812->g_633.s4", print_hash_value);
    transparent_crc(p_812->g_633.s5, "p_812->g_633.s5", print_hash_value);
    transparent_crc(p_812->g_633.s6, "p_812->g_633.s6", print_hash_value);
    transparent_crc(p_812->g_633.s7, "p_812->g_633.s7", print_hash_value);
    transparent_crc(p_812->g_661.s0, "p_812->g_661.s0", print_hash_value);
    transparent_crc(p_812->g_661.s1, "p_812->g_661.s1", print_hash_value);
    transparent_crc(p_812->g_661.s2, "p_812->g_661.s2", print_hash_value);
    transparent_crc(p_812->g_661.s3, "p_812->g_661.s3", print_hash_value);
    transparent_crc(p_812->g_661.s4, "p_812->g_661.s4", print_hash_value);
    transparent_crc(p_812->g_661.s5, "p_812->g_661.s5", print_hash_value);
    transparent_crc(p_812->g_661.s6, "p_812->g_661.s6", print_hash_value);
    transparent_crc(p_812->g_661.s7, "p_812->g_661.s7", print_hash_value);
    transparent_crc(p_812->g_661.s8, "p_812->g_661.s8", print_hash_value);
    transparent_crc(p_812->g_661.s9, "p_812->g_661.s9", print_hash_value);
    transparent_crc(p_812->g_661.sa, "p_812->g_661.sa", print_hash_value);
    transparent_crc(p_812->g_661.sb, "p_812->g_661.sb", print_hash_value);
    transparent_crc(p_812->g_661.sc, "p_812->g_661.sc", print_hash_value);
    transparent_crc(p_812->g_661.sd, "p_812->g_661.sd", print_hash_value);
    transparent_crc(p_812->g_661.se, "p_812->g_661.se", print_hash_value);
    transparent_crc(p_812->g_661.sf, "p_812->g_661.sf", print_hash_value);
    transparent_crc(p_812->g_690.s0, "p_812->g_690.s0", print_hash_value);
    transparent_crc(p_812->g_690.s1, "p_812->g_690.s1", print_hash_value);
    transparent_crc(p_812->g_690.s2, "p_812->g_690.s2", print_hash_value);
    transparent_crc(p_812->g_690.s3, "p_812->g_690.s3", print_hash_value);
    transparent_crc(p_812->g_690.s4, "p_812->g_690.s4", print_hash_value);
    transparent_crc(p_812->g_690.s5, "p_812->g_690.s5", print_hash_value);
    transparent_crc(p_812->g_690.s6, "p_812->g_690.s6", print_hash_value);
    transparent_crc(p_812->g_690.s7, "p_812->g_690.s7", print_hash_value);
    transparent_crc(p_812->g_690.s8, "p_812->g_690.s8", print_hash_value);
    transparent_crc(p_812->g_690.s9, "p_812->g_690.s9", print_hash_value);
    transparent_crc(p_812->g_690.sa, "p_812->g_690.sa", print_hash_value);
    transparent_crc(p_812->g_690.sb, "p_812->g_690.sb", print_hash_value);
    transparent_crc(p_812->g_690.sc, "p_812->g_690.sc", print_hash_value);
    transparent_crc(p_812->g_690.sd, "p_812->g_690.sd", print_hash_value);
    transparent_crc(p_812->g_690.se, "p_812->g_690.se", print_hash_value);
    transparent_crc(p_812->g_690.sf, "p_812->g_690.sf", print_hash_value);
    transparent_crc(p_812->g_711.x, "p_812->g_711.x", print_hash_value);
    transparent_crc(p_812->g_711.y, "p_812->g_711.y", print_hash_value);
    transparent_crc(p_812->g_734, "p_812->g_734", print_hash_value);
    transparent_crc(p_812->g_770, "p_812->g_770", print_hash_value);
    transparent_crc(p_812->g_781, "p_812->g_781", print_hash_value);
    transparent_crc(p_812->g_785.x, "p_812->g_785.x", print_hash_value);
    transparent_crc(p_812->g_785.y, "p_812->g_785.y", print_hash_value);
    transparent_crc(p_812->g_789, "p_812->g_789", print_hash_value);
    transparent_crc(p_812->g_811, "p_812->g_811", print_hash_value);
    transparent_crc(p_812->v_collective, "p_812->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 61; i++)
            transparent_crc(p_812->l_special_values[i], "p_812->l_special_values[i]", print_hash_value);
    transparent_crc(p_812->l_comm_values[get_linear_local_id()], "p_812->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_812->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()], "p_812->g_comm_values[get_linear_group_id() * 27 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
