// --atomics 36 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,14,10 -l 1,7,10
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

__constant uint32_t permutations[10][70] = {
{35,43,55,12,29,1,45,64,23,2,57,22,31,7,26,36,18,20,58,30,10,54,52,67,34,19,8,24,46,56,48,40,47,68,11,39,4,15,13,38,32,17,6,59,25,16,49,9,51,27,62,63,44,5,66,21,50,60,61,37,53,41,65,14,42,0,28,33,69,3}, // permutation 0
{42,6,52,1,27,59,19,38,22,21,3,12,15,51,36,11,8,24,34,9,48,26,5,28,7,4,33,18,29,54,56,37,35,68,17,64,66,40,10,14,58,45,50,0,20,53,43,13,25,23,2,46,63,67,44,62,65,31,69,55,49,61,41,60,32,57,47,16,39,30}, // permutation 1
{69,5,54,14,51,62,18,49,22,9,19,39,17,36,57,59,7,40,21,48,38,30,66,41,25,0,8,53,64,56,65,63,11,28,33,52,20,61,43,15,34,58,32,12,35,24,10,47,68,50,2,45,13,23,6,44,37,27,26,29,67,16,46,1,60,31,4,3,55,42}, // permutation 2
{61,47,58,22,64,41,19,13,40,14,65,67,34,28,30,11,48,15,52,55,8,62,56,35,59,31,23,33,57,9,49,63,25,69,66,42,5,10,68,17,51,4,60,39,0,32,46,27,36,54,21,29,16,12,43,37,18,45,20,26,3,7,6,1,50,24,53,2,38,44}, // permutation 3
{13,30,61,28,49,59,66,15,10,55,31,8,38,51,6,39,54,58,60,48,7,68,56,41,21,42,22,64,35,19,34,2,0,23,5,12,20,37,1,47,57,40,9,16,25,63,52,45,53,67,26,33,3,44,36,4,29,46,24,17,14,11,69,62,32,18,50,43,27,65}, // permutation 4
{8,18,9,17,46,68,41,4,20,34,47,40,23,67,36,7,24,59,3,15,57,55,2,56,53,65,35,19,39,13,0,63,64,26,6,50,28,27,45,21,22,30,31,5,29,12,38,49,69,32,16,43,14,48,61,66,42,10,25,44,11,1,37,62,54,60,58,51,33,52}, // permutation 5
{42,33,14,56,40,65,60,25,59,29,46,12,66,36,45,19,28,16,62,5,48,35,23,51,53,43,22,31,27,6,49,30,7,18,55,24,11,17,26,20,3,64,4,13,8,9,41,47,63,58,10,52,38,34,39,44,69,50,1,21,54,67,68,61,15,37,2,32,0,57}, // permutation 6
{23,15,69,38,62,22,64,16,67,9,19,4,54,3,0,40,33,27,26,52,51,17,11,24,60,34,68,20,43,63,45,50,21,36,37,18,65,25,2,41,7,57,48,35,29,39,42,5,1,28,49,6,13,12,66,32,47,8,44,59,53,14,61,31,56,10,58,55,46,30}, // permutation 7
{62,28,52,61,43,54,42,23,20,1,67,45,25,11,26,40,46,60,48,55,19,35,27,16,4,3,15,68,47,18,31,41,66,10,65,69,0,36,17,39,51,34,58,2,56,32,44,22,21,24,29,38,6,37,13,14,64,57,7,53,49,63,12,8,5,33,9,50,30,59}, // permutation 8
{39,20,15,44,40,63,33,30,36,16,59,48,69,19,3,23,51,37,10,49,45,62,4,22,50,65,7,2,11,46,55,61,47,68,38,28,54,14,18,42,27,12,58,34,31,52,56,64,57,8,5,17,66,41,32,9,13,60,24,53,6,25,26,1,43,29,21,67,35,0} // permutation 9
};

// Seed: 3554134169

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4;
    uint32_t g_14;
    int32_t g_32;
    int32_t *g_31[8];
    int32_t *g_33;
    int32_t *g_41;
    int32_t **g_40;
    uint8_t g_51;
    int32_t g_61;
    volatile VECTOR(int32_t, 2) g_62;
    VECTOR(int32_t, 16) g_67;
    uint8_t g_73[7][2];
    VECTOR(uint32_t, 4) g_79;
    VECTOR(int64_t, 2) g_93;
    VECTOR(int8_t, 2) g_98;
    volatile VECTOR(int8_t, 2) g_99;
    VECTOR(int8_t, 8) g_101;
    volatile VECTOR(int8_t, 4) g_102;
    uint64_t g_104;
    uint16_t g_107;
    VECTOR(uint16_t, 2) g_129;
    uint8_t g_142;
    volatile VECTOR(uint32_t, 8) g_255;
    uint64_t * volatile g_257;
    uint64_t * volatile * volatile g_256;
    int64_t g_318;
    volatile VECTOR(int16_t, 4) g_329;
    VECTOR(uint64_t, 16) g_336;
    uint32_t g_342;
    volatile VECTOR(int64_t, 16) g_350;
    uint8_t g_369;
    VECTOR(uint32_t, 8) g_384;
    uint16_t g_395;
    volatile VECTOR(int8_t, 2) g_400;
    VECTOR(uint16_t, 2) g_416;
    uint16_t g_419;
    VECTOR(uint16_t, 8) g_440;
    uint32_t g_457;
    int32_t * volatile g_469;
    uint8_t g_471;
    volatile VECTOR(uint32_t, 8) g_474;
    VECTOR(int64_t, 4) g_488;
    volatile int8_t g_517;
    uint8_t *g_523;
    uint8_t **g_522;
    uint32_t *** volatile g_536;
    uint32_t *g_538[7][4];
    uint32_t **g_537;
    uint64_t *g_544[4];
    uint64_t **g_543[4][1];
    uint64_t *** volatile g_542[5][10][1];
    uint8_t g_556;
    int32_t * volatile g_596;
    int16_t g_598;
    VECTOR(int16_t, 8) g_608;
    volatile VECTOR(int8_t, 16) g_774;
    VECTOR(uint8_t, 4) g_795;
    VECTOR(int32_t, 2) g_815;
    uint32_t *g_932;
    VECTOR(uint32_t, 4) g_962;
    int16_t g_963;
    volatile VECTOR(int8_t, 8) g_970;
    volatile VECTOR(int8_t, 16) g_1109;
    VECTOR(int32_t, 4) g_1112;
    uint16_t g_1176;
    VECTOR(uint32_t, 16) g_1195;
    VECTOR(int8_t, 16) g_1219;
    VECTOR(uint8_t, 4) g_1231;
    volatile VECTOR(uint8_t, 8) g_1232;
    volatile VECTOR(uint8_t, 16) g_1234;
    int32_t ***g_1250;
    int32_t g_1297[7][10];
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
uint64_t  func_1(struct S0 * p_1302);
int8_t  func_17(int32_t  p_18, uint32_t  p_19, struct S0 * p_1302);
int32_t * func_20(uint16_t  p_21, int32_t * p_22, int16_t  p_23, int32_t  p_24, struct S0 * p_1302);
int32_t * func_25(int32_t  p_26, uint32_t  p_27, struct S0 * p_1302);
uint16_t  func_37(int32_t ** p_38, int32_t  p_39, struct S0 * p_1302);
int16_t  func_42(int32_t * p_43, struct S0 * p_1302);
int32_t  func_45(uint8_t  p_46, uint8_t  p_47, int32_t ** p_48, uint32_t  p_49, struct S0 * p_1302);
int32_t ** func_53(uint32_t  p_54, uint8_t * p_55, int64_t  p_56, int32_t ** p_57, struct S0 * p_1302);
int32_t  func_70(uint8_t * p_71, struct S0 * p_1302);
uint32_t  func_86(uint16_t  p_87, struct S0 * p_1302);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1302->g_14 p_1302->g_4 p_1302->g_40 p_1302->g_41 p_1302->l_comm_values p_1302->g_32 p_1302->g_comm_values p_1302->g_556 p_1302->g_51 p_1302->g_416 p_1302->g_73 p_1302->g_596 p_1302->g_61 p_1302->g_369 p_1302->g_62 p_1302->g_457 p_1302->g_474 p_1302->g_400 p_1302->g_774 p_1302->g_129 p_1302->g_523 p_1302->g_93 p_1302->g_795 p_1302->g_395 p_1302->g_815 p_1302->g_608 p_1302->g_488 p_1302->g_336 p_1302->g_537 p_1302->g_329 p_1302->g_255 p_1302->g_79 p_1302->g_471 p_1302->g_67 p_1302->g_1234 p_1302->g_469 p_1302->g_1250 p_1302->g_142
 * writes: p_1302->g_14 p_1302->g_31 p_1302->g_33 p_1302->g_32 p_1302->g_51 p_1302->g_41 p_1302->g_543 p_1302->g_556 p_1302->g_61 p_1302->g_598 p_1302->g_101 p_1302->g_342 p_1302->g_457 p_1302->g_488 p_1302->g_608 p_1302->g_538 p_1302->g_369 p_1302->g_471 p_1302->g_104 p_1302->g_73 p_1302->g_4 p_1302->g_1250 p_1302->g_963 p_1302->g_93 p_1302->g_1297 p_1302->g_142
 */
uint64_t  func_1(struct S0 * p_1302)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &p_1302->g_4;
    int32_t *l_5 = &p_1302->g_4;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = &p_1302->g_4;
    VECTOR(int32_t, 2) l_8 = (VECTOR(int32_t, 2))(0x59BA07E4L, 0x285FAAFEL);
    int32_t *l_9 = (void*)0;
    int32_t *l_10 = &p_1302->g_4;
    int32_t *l_11 = &p_1302->g_4;
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = &p_1302->g_4;
    int32_t **l_30[5];
    VECTOR(int8_t, 8) l_34 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
    int16_t *l_597 = &p_1302->g_598;
    int32_t *l_1069 = (void*)0;
    int8_t l_1295 = 0x36L;
    int32_t *l_1296 = &p_1302->g_1297[4][1];
    int i;
    for (i = 0; i < 5; i++)
        l_30[i] = (void*)0;
    --p_1302->g_14;
    (*p_1302->g_40) = (((*l_1296) = ((func_17((*l_5), (((*p_1302->g_40) = func_20((((*p_1302->g_40) = func_25((((((*l_597) = (safe_lshift_func_uint8_t_u_u(((&p_1302->g_4 != (p_1302->g_33 = (p_1302->g_31[2] = (void*)0))) >= (((((VECTOR(int8_t, 2))(l_34.s24)).hi , (safe_rshift_func_uint8_t_u_u(((func_37(p_1302->g_40, (!((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((0x67L == ((&p_1302->g_41 == (void*)0) == ((*l_597) = func_42((*p_1302->g_40), p_1302)))), 0x21EEF518L, 0x79AF760EL, 0x48494996L)).odd)).xyyyxyxxyxxxyyxy, ((VECTOR(int32_t, 16))(0x73334007L)), ((VECTOR(int32_t, 16))(4L))))).s9a)).even, 4L, (-5L), 0x6A21284DL)).x), p_1302) > FAKE_DIVERGE(p_1302->local_1_offset, get_local_id(1), 10)) , (*l_10)), 7))) ^ (*l_13)) ^ GROUP_DIVERGE(2, 1))), 5))) | 0x7865L) , 18446744073709551615UL) <= (*l_11)), (*l_10), p_1302)) == (void*)0), &p_1302->g_4, p_1302->g_67.se, p_1302->g_129.x, p_1302)) != l_1069), p_1302) & l_1295) == 0x7569L)) , &p_1302->g_4);
    for (p_1302->g_142 = 5; (p_1302->g_142 == 17); ++p_1302->g_142)
    { /* block id: 578 */
        int8_t l_1300 = 0x27L;
        VECTOR(int32_t, 2) l_1301 = (VECTOR(int32_t, 2))(0x6C584A73L, (-1L));
        int i;
        l_1301.y &= l_1300;
    }
    return (*l_10);
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_129 p_1302->g_488 p_1302->g_41 p_1302->g_4 p_1302->g_40 p_1302->g_457 p_1302->g_1234 p_1302->g_73 p_1302->g_14 p_1302->g_469 p_1302->g_61 p_1302->g_1250
 * writes: p_1302->g_104 p_1302->g_73 p_1302->g_4 p_1302->g_457 p_1302->g_1250 p_1302->g_963 p_1302->g_14 p_1302->g_598 p_1302->g_93 p_1302->g_41
 */
int8_t  func_17(int32_t  p_18, uint32_t  p_19, struct S0 * p_1302)
{ /* block id: 482 */
    uint64_t l_1074 = 0xF3FD51011B267212L;
    int8_t *l_1075 = (void*)0;
    int32_t l_1076 = 0x1DED653DL;
    int32_t l_1077 = 0x1B0DEBD0L;
    VECTOR(uint64_t, 2) l_1082 = (VECTOR(uint64_t, 2))(0x9DB0D55DFE8ADB90L, 0x4B89FA83B3178057L);
    uint64_t *l_1083 = &p_1302->g_104;
    uint64_t l_1084 = 0xD60AF0950E983162L;
    uint8_t *l_1097 = &p_1302->g_73[2][1];
    int16_t *l_1098 = (void*)0;
    int32_t l_1099[8] = {4L,4L,4L,4L,4L,4L,4L,4L};
    uint32_t **l_1177 = (void*)0;
    uint64_t ***l_1197 = &p_1302->g_543[1][0];
    VECTOR(uint8_t, 4) l_1233 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xF6L), 0xF6L);
    uint8_t ***l_1254[6][4][3] = {{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}},{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}},{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}},{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}},{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}},{{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522},{&p_1302->g_522,&p_1302->g_522,&p_1302->g_522}}};
    int16_t l_1264 = 0x6131L;
    int32_t l_1294 = 1L;
    int i, j, k;
    if (((*p_1302->g_41) &= (safe_rshift_func_int16_t_s_u((l_1099[1] = (((((((l_1077 = (safe_rshift_func_uint8_t_u_s(l_1074, (l_1076 = (-5L))))) ^ FAKE_DIVERGE(p_1302->group_2_offset, get_group_id(2), 10)) , (safe_add_func_int64_t_s_s(p_19, ((l_1074 == (safe_div_func_uint16_t_u_u((((*l_1083) = ((VECTOR(uint64_t, 16))(l_1082.xxxyxxyyxxxxxxyy)).s2) != l_1084), p_1302->g_129.x))) < ((((((safe_lshift_func_int8_t_s_u(p_18, ((*l_1097) = (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))((-3L), 0x2DL)).even, (safe_sub_func_int32_t_s_s(((-6L) == (safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((p_19 != 0x19577AE5940F56B1L), l_1084)), p_18))), l_1082.y)))), p_18))))) && p_19) == GROUP_DIVERGE(1, 1)) <= l_1077) , FAKE_DIVERGE(p_1302->local_2_offset, get_local_id(2), 10)) != l_1076))))) <= 7UL) <= p_1302->g_488.x) == p_18) <= 1UL)), 13))))
    { /* block id: 489 */
        int16_t l_1129 = 0L;
        int32_t l_1147 = (-7L);
        int32_t l_1150 = (-1L);
        int32_t l_1153 = 5L;
        int32_t l_1159 = (-1L);
        int32_t l_1160 = 0L;
        int32_t l_1162 = 0L;
        int32_t l_1164 = 1L;
        int32_t l_1165[8] = {(-5L),0L,(-5L),(-5L),0L,(-5L),(-5L),0L};
        uint64_t l_1166[3];
        uint64_t ***l_1198 = (void*)0;
        VECTOR(uint8_t, 8) l_1230 = (VECTOR(uint8_t, 8))(0xB2L, (VECTOR(uint8_t, 4))(0xB2L, (VECTOR(uint8_t, 2))(0xB2L, 3UL), 3UL), 3UL, 0xB2L, 3UL);
        VECTOR(int32_t, 8) l_1238 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L);
        int32_t *l_1239 = (void*)0;
        int32_t *l_1240 = &l_1153;
        uint32_t l_1243 = 4294967295UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1166[i] = 0UL;
        for (p_18 = (-29); (p_18 <= 15); p_18++)
        { /* block id: 492 */
            int32_t *l_1108[2];
            int64_t l_1157 = 1L;
            int8_t l_1158 = 0x3CL;
            VECTOR(int16_t, 8) l_1163 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x5A2AL), 0x5A2AL), 0x5A2AL, (-8L), 0x5A2AL);
            int16_t *l_1175 = &p_1302->g_963;
            int8_t *l_1220 = (void*)0;
            int8_t *l_1221 = (void*)0;
            int8_t *l_1222 = (void*)0;
            int8_t *l_1223[8];
            uint64_t l_1237 = 0x2A76E20CE534FE23L;
            int i;
            for (i = 0; i < 2; i++)
                l_1108[i] = &p_1302->g_61;
            for (i = 0; i < 8; i++)
                l_1223[i] = (void*)0;
            (1 + 1);
        }
        (*l_1240) = (l_1165[1] = (p_19 , (l_1099[1] |= ((**p_1302->g_40) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1238.s3734050275355471)).s8eec)).y))));
        for (p_1302->g_457 = 0; (p_1302->g_457 >= 53); p_1302->g_457 = safe_add_func_int32_t_s_s(p_1302->g_457, 2))
        { /* block id: 550 */
            if (p_19)
                break;
            return l_1243;
        }
    }
    else
    { /* block id: 554 */
        int32_t ***l_1248 = &p_1302->g_40;
        int32_t ****l_1249[7] = {&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248,&l_1248};
        int16_t *l_1251 = &p_1302->g_963;
        VECTOR(uint32_t, 8) l_1263 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xF882637EL), 0xF882637EL), 0xF882637EL, 4294967292UL, 0xF882637EL);
        uint64_t *l_1269[10][3] = {{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104},{(void*)0,&l_1074,&p_1302->g_104}};
        uint64_t **l_1270 = (void*)0;
        uint64_t **l_1271 = &l_1269[4][0];
        uint64_t *l_1272[10][5] = {{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084},{&l_1084,&l_1084,&p_1302->g_104,&l_1074,&l_1084}};
        VECTOR(int32_t, 4) l_1283 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x097380C9L), 0x097380C9L);
        uint32_t *l_1284 = &p_1302->g_14;
        int16_t *l_1291 = &p_1302->g_598;
        int64_t *l_1292 = (void*)0;
        int64_t *l_1293 = (void*)0;
        int i, j;
        (*p_1302->g_41) = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))((-8L), (safe_sub_func_uint64_t_u_u((((*l_1251) = (safe_sub_func_uint64_t_u_u(6UL, ((p_1302->g_1250 = l_1248) == &p_1302->g_40)))) , (safe_add_func_uint64_t_u_u((((l_1254[5][1][0] != &p_1302->g_522) >= (((VECTOR(int16_t, 2))(9L, 1L)).odd != ((VECTOR(uint16_t, 16))(((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((!((*l_1097) = ((safe_sub_func_int8_t_s_s(0x64L, (+p_1302->g_1234.s3))) >= ((VECTOR(uint32_t, 16))(l_1263.s2302063476345577)).sc))) < (~(65529UL | (l_1084 >= 0x5CBB9E4FA6357EB4L)))), 0xA5E7CC99L)), p_19)) && 0x46442CE3L) < p_19), 7)) <= l_1264), (***l_1248), ((VECTOR(uint16_t, 8))(0xC086L)), ((VECTOR(uint16_t, 2))(65534UL)), ((VECTOR(uint16_t, 2))(0UL)), 0xA3A8L, 0UL)).sc)) >= l_1099[1]), (***l_1248)))), 0L)), 0x5F4050ABL, 0x78311E35L)), ((VECTOR(int32_t, 4))(0x5B8D5D8DL))))).w;
        (**p_1302->g_1250) = (((p_18 & (p_1302->g_93.x = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_1264, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(65528UL, ((FAKE_DIVERGE(p_1302->global_2_offset, get_global_id(2), 10) , ((*l_1251) = (((*l_1271) = l_1269[5][1]) != (l_1083 = (l_1272[9][4] = &l_1084))))) | ((*l_1291) = (((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0x76L, (((*l_1097)++) , (++(*l_1097))))), (safe_mod_func_int32_t_s_s((((VECTOR(int32_t, 4))(l_1283.xxyx)).w == ((*l_1284)++)), p_19)))) || ((safe_mod_func_int32_t_s_s(l_1264, (*p_1302->g_469))) <= (safe_add_func_int16_t_s_s((((***p_1302->g_1250) ^= (-1L)) || p_18), l_1074)))) , (-1L)))), ((VECTOR(uint16_t, 2))(0x084CL)), 65535UL, l_1082.x, 5UL, 4UL)).hi)).y)), 8)) >= p_19))) > l_1082.x) , (*p_1302->g_40));
    }
    (**p_1302->g_1250) = &l_1099[0];
    (**p_1302->g_40) = l_1099[7];
    return l_1294;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_20(uint16_t  p_21, int32_t * p_22, int16_t  p_23, int32_t  p_24, struct S0 * p_1302)
{ /* block id: 454 */
    if ((atomic_inc(&p_1302->g_atomic_input[36 * get_linear_group_id() + 3]) == 7))
    { /* block id: 456 */
        VECTOR(int32_t, 8) l_999 = (VECTOR(int32_t, 8))(0x11185EBBL, (VECTOR(int32_t, 4))(0x11185EBBL, (VECTOR(int32_t, 2))(0x11185EBBL, 0x1718499AL), 0x1718499AL), 0x1718499AL, 0x11185EBBL, 0x1718499AL);
        VECTOR(int32_t, 2) l_1000 = (VECTOR(int32_t, 2))(0L, (-5L));
        VECTOR(int32_t, 4) l_1001 = (VECTOR(int32_t, 4))(0x3EC02C03L, (VECTOR(int32_t, 2))(0x3EC02C03L, 0x69702001L), 0x69702001L);
        int32_t l_1002 = 0x78BB55F2L;
        VECTOR(int32_t, 8) l_1003 = (VECTOR(int32_t, 8))(0x23A4ED1AL, (VECTOR(int32_t, 4))(0x23A4ED1AL, (VECTOR(int32_t, 2))(0x23A4ED1AL, 0x019CD1ADL), 0x019CD1ADL), 0x019CD1ADL, 0x23A4ED1AL, 0x019CD1ADL);
        int32_t l_1004[2][10] = {{0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL},{0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL,(-1L),0x4A92CF0AL,0x4A92CF0AL}};
        int32_t l_1005 = 0x6D822E43L;
        uint64_t l_1006[9];
        int8_t l_1007 = 0x2FL;
        uint32_t l_1008 = 0x6A4B3F61L;
        int64_t l_1009 = 0x7796EA639BFA7ECAL;
        VECTOR(int32_t, 4) l_1010 = (VECTOR(int32_t, 4))(0x48927576L, (VECTOR(int32_t, 2))(0x48927576L, 0x1D4BFBF1L), 0x1D4BFBF1L);
        VECTOR(int32_t, 8) l_1011 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
        VECTOR(int32_t, 8) l_1012 = (VECTOR(int32_t, 8))(0x0F3E783AL, (VECTOR(int32_t, 4))(0x0F3E783AL, (VECTOR(int32_t, 2))(0x0F3E783AL, (-3L)), (-3L)), (-3L), 0x0F3E783AL, (-3L));
        int32_t l_1013 = 0x0D77864FL;
        int8_t l_1014 = (-6L);
        VECTOR(int32_t, 2) l_1015 = (VECTOR(int32_t, 2))(0x06F3AFEAL, (-3L));
        VECTOR(int32_t, 16) l_1016 = (VECTOR(int32_t, 16))(0x01E2F227L, (VECTOR(int32_t, 4))(0x01E2F227L, (VECTOR(int32_t, 2))(0x01E2F227L, (-10L)), (-10L)), (-10L), 0x01E2F227L, (-10L), (VECTOR(int32_t, 2))(0x01E2F227L, (-10L)), (VECTOR(int32_t, 2))(0x01E2F227L, (-10L)), 0x01E2F227L, (-10L), 0x01E2F227L, (-10L));
        VECTOR(int32_t, 4) l_1017 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4F13397DL), 0x4F13397DL);
        VECTOR(int32_t, 16) l_1018 = (VECTOR(int32_t, 16))(0x5E23C2B0L, (VECTOR(int32_t, 4))(0x5E23C2B0L, (VECTOR(int32_t, 2))(0x5E23C2B0L, 0x5943F05AL), 0x5943F05AL), 0x5943F05AL, 0x5E23C2B0L, 0x5943F05AL, (VECTOR(int32_t, 2))(0x5E23C2B0L, 0x5943F05AL), (VECTOR(int32_t, 2))(0x5E23C2B0L, 0x5943F05AL), 0x5E23C2B0L, 0x5943F05AL, 0x5E23C2B0L, 0x5943F05AL);
        VECTOR(int32_t, 4) l_1019 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0E987B15L), 0x0E987B15L);
        VECTOR(int32_t, 16) l_1020 = (VECTOR(int32_t, 16))(0x4174B29DL, (VECTOR(int32_t, 4))(0x4174B29DL, (VECTOR(int32_t, 2))(0x4174B29DL, 0x0C4E70FFL), 0x0C4E70FFL), 0x0C4E70FFL, 0x4174B29DL, 0x0C4E70FFL, (VECTOR(int32_t, 2))(0x4174B29DL, 0x0C4E70FFL), (VECTOR(int32_t, 2))(0x4174B29DL, 0x0C4E70FFL), 0x4174B29DL, 0x0C4E70FFL, 0x4174B29DL, 0x0C4E70FFL);
        VECTOR(int32_t, 16) l_1021 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x399D6630L), 0x399D6630L), 0x399D6630L, 1L, 0x399D6630L, (VECTOR(int32_t, 2))(1L, 0x399D6630L), (VECTOR(int32_t, 2))(1L, 0x399D6630L), 1L, 0x399D6630L, 1L, 0x399D6630L);
        VECTOR(int32_t, 8) l_1022 = (VECTOR(int32_t, 8))(0x7EC1325AL, (VECTOR(int32_t, 4))(0x7EC1325AL, (VECTOR(int32_t, 2))(0x7EC1325AL, 0x57619367L), 0x57619367L), 0x57619367L, 0x7EC1325AL, 0x57619367L);
        uint32_t l_1023 = 0x0C8B3DBFL;
        uint8_t l_1024 = 0UL;
        VECTOR(int32_t, 2) l_1025 = (VECTOR(int32_t, 2))(0x6FCB0AABL, 0x17C04E30L);
        VECTOR(int32_t, 2) l_1026 = (VECTOR(int32_t, 2))(8L, (-1L));
        VECTOR(int32_t, 16) l_1027 = (VECTOR(int32_t, 16))(0x203FA371L, (VECTOR(int32_t, 4))(0x203FA371L, (VECTOR(int32_t, 2))(0x203FA371L, 8L), 8L), 8L, 0x203FA371L, 8L, (VECTOR(int32_t, 2))(0x203FA371L, 8L), (VECTOR(int32_t, 2))(0x203FA371L, 8L), 0x203FA371L, 8L, 0x203FA371L, 8L);
        VECTOR(int16_t, 8) l_1028 = (VECTOR(int16_t, 8))(0x7DCEL, (VECTOR(int16_t, 4))(0x7DCEL, (VECTOR(int16_t, 2))(0x7DCEL, (-1L)), (-1L)), (-1L), 0x7DCEL, (-1L));
        VECTOR(int8_t, 4) l_1029 = (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, (-8L)), (-8L));
        VECTOR(uint8_t, 16) l_1030 = (VECTOR(uint8_t, 16))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0xB4L), 0xB4L), 0xB4L, 0x73L, 0xB4L, (VECTOR(uint8_t, 2))(0x73L, 0xB4L), (VECTOR(uint8_t, 2))(0x73L, 0xB4L), 0x73L, 0xB4L, 0x73L, 0xB4L);
        VECTOR(uint8_t, 8) l_1031 = (VECTOR(uint8_t, 8))(0x5AL, (VECTOR(uint8_t, 4))(0x5AL, (VECTOR(uint8_t, 2))(0x5AL, 0x0CL), 0x0CL), 0x0CL, 0x5AL, 0x0CL);
        VECTOR(uint8_t, 2) l_1032 = (VECTOR(uint8_t, 2))(0x4DL, 255UL);
        VECTOR(uint8_t, 16) l_1033 = (VECTOR(uint8_t, 16))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 0UL), 0UL), 0UL, 0xA1L, 0UL, (VECTOR(uint8_t, 2))(0xA1L, 0UL), (VECTOR(uint8_t, 2))(0xA1L, 0UL), 0xA1L, 0UL, 0xA1L, 0UL);
        uint16_t l_1034 = 0xC562L;
        uint16_t l_1035[7][4] = {{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L},{0xD272L,0xF80FL,0xD272L,0xD272L}};
        VECTOR(uint16_t, 2) l_1036 = (VECTOR(uint16_t, 2))(65535UL, 0x8119L);
        uint8_t l_1037 = 255UL;
        uint32_t l_1038 = 4294967286UL;
        VECTOR(int32_t, 2) l_1039 = (VECTOR(int32_t, 2))(1L, 0x0B069883L);
        VECTOR(int32_t, 16) l_1040 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 2L), 2L), 2L, 3L, 2L, (VECTOR(int32_t, 2))(3L, 2L), (VECTOR(int32_t, 2))(3L, 2L), 3L, 2L, 3L, 2L);
        uint64_t l_1041 = 0xF3E4B2E4504E913DL;
        VECTOR(int32_t, 2) l_1042 = (VECTOR(int32_t, 2))(0x20BF0D52L, 1L);
        VECTOR(int32_t, 2) l_1043 = (VECTOR(int32_t, 2))((-10L), 1L);
        VECTOR(int32_t, 16) l_1044 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
        int32_t l_1045 = (-7L);
        VECTOR(int32_t, 4) l_1046 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x04F9C131L), 0x04F9C131L);
        int32_t l_1047 = 0L;
        uint64_t l_1048 = 0xA6641D0D54BCABF3L;
        uint8_t l_1049 = 0x6BL;
        int64_t l_1050 = 0x759EE7E7197BC25EL;
        int8_t l_1051 = 5L;
        int32_t l_1052 = 0x1084F51EL;
        VECTOR(int32_t, 16) l_1053 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x49906589L), 0x49906589L), 0x49906589L, 1L, 0x49906589L, (VECTOR(int32_t, 2))(1L, 0x49906589L), (VECTOR(int32_t, 2))(1L, 0x49906589L), 1L, 0x49906589L, 1L, 0x49906589L);
        VECTOR(int32_t, 8) l_1054 = (VECTOR(int32_t, 8))(0x3FFB482DL, (VECTOR(int32_t, 4))(0x3FFB482DL, (VECTOR(int32_t, 2))(0x3FFB482DL, 0x49C53B1FL), 0x49C53B1FL), 0x49C53B1FL, 0x3FFB482DL, 0x49C53B1FL);
        uint32_t l_1055 = 4294967287UL;
        VECTOR(int32_t, 4) l_1056 = (VECTOR(int32_t, 4))(0x231743C4L, (VECTOR(int32_t, 2))(0x231743C4L, (-3L)), (-3L));
        int32_t l_1057[5];
        int i, j;
        for (i = 0; i < 9; i++)
            l_1006[i] = 8UL;
        for (i = 0; i < 5; i++)
            l_1057[i] = (-9L);
        l_1014 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(5L, 0x507477ADL)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(8L, 0x7772912DL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_999.s7754324544767133)).s6b95)), 0x4CC97A0DL, (-1L))).s50)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_1000.xy)).xxxyxyxyxyxyxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x1E19E7E2L, 1L)), 4L, 2L, 0x58D2FD80L, 0x0AB08B9CL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1001.xy)), l_1002, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1003.s52)).yxxx)), (-3L))))), 3L, 0x6BD0B96CL)).even)).s3400505554044277))))))).s7, ((l_1005 &= l_1004[0][6]) , ((GROUP_DIVERGE(0, 1) , (l_1006[8] , l_1007)) , (l_1009 |= l_1008))), (-1L), 9L, ((VECTOR(int32_t, 8))(l_1010.xzzxxzzx)), 0x277C0156L, 0x6C4BD52DL)).s71, ((VECTOR(int32_t, 16))(l_1011.s0120164777612607)).s7c))), ((VECTOR(int32_t, 2))(l_1012.s43)), l_1013, 0x597C5D1FL, (-6L), 0L)).s6;
        l_1052 &= (l_1051 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1015.xy)))).yyxx)).wxyzxxww)).odd)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1016.sca43)).odd)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(0x192EC44DL, (((VECTOR(int32_t, 16))(l_1017.yxxxzyyzyzzxxzww)).sc , ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1018.s76)), 0x247F1529L, 0x5854BB2EL, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-8L), ((VECTOR(int32_t, 4))(l_1019.xzxz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1020.s659c96a2)).s50)), 0x3FBF78B1L)).s21)), 0x300F4FFBL)).s0171347223052667, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1021.s5c9b)))).even)))).xxxx)))).yyzwzzxyyxwxywzz)).s5e)).xxxxyxxyxyyxyyxx, ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 2))(0L, (-9L))), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1022.s7720310367450672)))).s63, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(0x5DF34596L, (GROUP_DIVERGE(2, 1) , (l_1024 |= l_1023)), 0x77698EA3L, (-1L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(0x0ADA5416L, 0x2612FFB1L)).xyyyxyyyyyyxxyxx, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(l_1025.yx)).yxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_1026.yy)), ((VECTOR(int32_t, 16))(l_1027.s5fbde8109c717d26)).sdd, ((VECTOR(int32_t, 8))(0x3248063CL, 0x144AC4A4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))((-4L), 0L, 0L, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(l_1028.s7454747222576355)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(0x27L, 0x40L, (-8L), 0x45L))))), ((VECTOR(int8_t, 16))(l_1029.zywwxzzzxxxyzwzw)).s58d7))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1030.sfa)))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_1031.s4564)).lo))))).xyyxyyxx, ((VECTOR(uint8_t, 2))(l_1032.xx)).xxyxyxyx))).hi)), ((VECTOR(uint8_t, 4))(l_1033.s042c)), GROUP_DIVERGE(0, 1), 255UL, ((VECTOR(uint8_t, 4))(0x5DL, l_1034, 0xE3L, 249UL)), 0xF1L, 0UL)).s003c))))).zwyyxyzzzywyxxyx))))).s1, l_1035[0][0], 0x4B94L, 0x3CA8L, 1L)), ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(l_1036.xyyyyyxx)), (uint16_t)l_1037)))))), 0L, (-6L), ((VECTOR(int32_t, 4))(0x4EB2E564L, l_1038, 1L, 5L)), (-5L), 0x353A08C6L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x04FBC1AEL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1039.xy)).xyxxyxyxyxyyxxyx)))), ((VECTOR(int32_t, 8))(l_1040.s8305cce4)).s4045151570476774))).s2c, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(9L, 0x5F9CBDB5L)).yyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x09D181E0L, 0x298152E8L)).xyyx))))).zywzwywyzyyxwwyx)).s696d)).lo))), 0x49BB68D5L)), 0x52C181D5L, l_1041, 7L, (-3L))).s5650347051661474))).hi))).hi)), (-1L), 1L)).s61))).xyyy)), ((VECTOR(int32_t, 4))(l_1042.yyyx)))).even, ((VECTOR(int32_t, 8))(l_1043.yyxyxxxx)).odd))).xwwyzywzxxxywzxz))).s0cbc)).zzzwwzwyxxwyxzxz)).s1804))).even)), ((VECTOR(int32_t, 8))(l_1044.sb8353669)), 0L, l_1045, ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))((-3L), 0x5F22FA73L)), ((VECTOR(int32_t, 2))((-1L), 1L))))).yxyx)).odd)).xyyy)).odd, ((VECTOR(int32_t, 16))(l_1046.zzyxxwxyzxwzxzxw)).sab))).xxyyyyyxxxyyxxxy))).sa, 0x43EAA7CEL, 2L)))).sd8))), (l_1043.y = l_1047), (-2L), l_1048, 1L, ((VECTOR(int32_t, 4))(7L)), ((VECTOR(int32_t, 2))((-7L))), 7L))))).s1), 0x204F143CL, 5L, ((VECTOR(int32_t, 2))(0x323B1683L)), ((VECTOR(int32_t, 2))((-8L))), l_1049, (-1L), ((VECTOR(int32_t, 2))(7L)), 0x3D8F2EF7L, l_1050, 0L, 0x7A615CB9L)), (int32_t)2L))).saca4)), 0x10FD3E22L, ((VECTOR(int32_t, 4))((-5L))), (-3L))))).sf);
        l_1057[2] = ((VECTOR(int32_t, 4))(0x61738E8BL, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0x476F14ECL, (-7L))).xxyxyyyyyyxxyxxx))).sb5)).yxyyyxyxxyyyxyxy)).hi, ((VECTOR(int32_t, 2))(l_1053.s3a)).yyyxyyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x5BC78973L, 0x43ADBD88L, 0x59211482L, ((VECTOR(int32_t, 8))(l_1054.s11700361)), l_1055, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1056.zwxzzyzx)).s4147176633105554)).sa, 4L, (-1L), (-1L))).s5b)).yxyyxxxx))).s7, (-2L), 3L)).w;
        for (l_1035[5][1] = 14; (l_1035[5][1] == 5); l_1035[5][1] = safe_sub_func_uint8_t_u_u(l_1035[5][1], 1))
        { /* block id: 467 */
            int32_t l_1060[2][6] = {{0x5ECEBB02L,0x1D62EF91L,0L,0x1D62EF91L,0x5ECEBB02L,0x5ECEBB02L},{0x5ECEBB02L,0x1D62EF91L,0L,0x1D62EF91L,0x5ECEBB02L,0x5ECEBB02L}};
            int i, j;
            for (l_1060[0][2] = 0; (l_1060[0][2] != 21); ++l_1060[0][2])
            { /* block id: 470 */
                int8_t l_1063 = (-7L);
                int32_t l_1064 = (-7L);
                uint16_t l_1065[6][3] = {{0xB391L,0xE573L,0x0B8BL},{0xB391L,0xE573L,0x0B8BL},{0xB391L,0xE573L,0x0B8BL},{0xB391L,0xE573L,0x0B8BL},{0xB391L,0xE573L,0x0B8BL},{0xB391L,0xE573L,0x0B8BL}};
                int32_t *l_1068 = &l_1064;
                int i, j;
                l_1022.s2 = l_1063;
                l_1065[2][2]++;
                l_1068 = (void*)0;
            }
            l_1021.se = 0x64992A64L;
        }
        unsigned int result = 0;
        result += l_999.s7;
        result += l_999.s6;
        result += l_999.s5;
        result += l_999.s4;
        result += l_999.s3;
        result += l_999.s2;
        result += l_999.s1;
        result += l_999.s0;
        result += l_1000.y;
        result += l_1000.x;
        result += l_1001.w;
        result += l_1001.z;
        result += l_1001.y;
        result += l_1001.x;
        result += l_1002;
        result += l_1003.s7;
        result += l_1003.s6;
        result += l_1003.s5;
        result += l_1003.s4;
        result += l_1003.s3;
        result += l_1003.s2;
        result += l_1003.s1;
        result += l_1003.s0;
        int l_1004_i0, l_1004_i1;
        for (l_1004_i0 = 0; l_1004_i0 < 2; l_1004_i0++) {
            for (l_1004_i1 = 0; l_1004_i1 < 10; l_1004_i1++) {
                result += l_1004[l_1004_i0][l_1004_i1];
            }
        }
        result += l_1005;
        int l_1006_i0;
        for (l_1006_i0 = 0; l_1006_i0 < 9; l_1006_i0++) {
            result += l_1006[l_1006_i0];
        }
        result += l_1007;
        result += l_1008;
        result += l_1009;
        result += l_1010.w;
        result += l_1010.z;
        result += l_1010.y;
        result += l_1010.x;
        result += l_1011.s7;
        result += l_1011.s6;
        result += l_1011.s5;
        result += l_1011.s4;
        result += l_1011.s3;
        result += l_1011.s2;
        result += l_1011.s1;
        result += l_1011.s0;
        result += l_1012.s7;
        result += l_1012.s6;
        result += l_1012.s5;
        result += l_1012.s4;
        result += l_1012.s3;
        result += l_1012.s2;
        result += l_1012.s1;
        result += l_1012.s0;
        result += l_1013;
        result += l_1014;
        result += l_1015.y;
        result += l_1015.x;
        result += l_1016.sf;
        result += l_1016.se;
        result += l_1016.sd;
        result += l_1016.sc;
        result += l_1016.sb;
        result += l_1016.sa;
        result += l_1016.s9;
        result += l_1016.s8;
        result += l_1016.s7;
        result += l_1016.s6;
        result += l_1016.s5;
        result += l_1016.s4;
        result += l_1016.s3;
        result += l_1016.s2;
        result += l_1016.s1;
        result += l_1016.s0;
        result += l_1017.w;
        result += l_1017.z;
        result += l_1017.y;
        result += l_1017.x;
        result += l_1018.sf;
        result += l_1018.se;
        result += l_1018.sd;
        result += l_1018.sc;
        result += l_1018.sb;
        result += l_1018.sa;
        result += l_1018.s9;
        result += l_1018.s8;
        result += l_1018.s7;
        result += l_1018.s6;
        result += l_1018.s5;
        result += l_1018.s4;
        result += l_1018.s3;
        result += l_1018.s2;
        result += l_1018.s1;
        result += l_1018.s0;
        result += l_1019.w;
        result += l_1019.z;
        result += l_1019.y;
        result += l_1019.x;
        result += l_1020.sf;
        result += l_1020.se;
        result += l_1020.sd;
        result += l_1020.sc;
        result += l_1020.sb;
        result += l_1020.sa;
        result += l_1020.s9;
        result += l_1020.s8;
        result += l_1020.s7;
        result += l_1020.s6;
        result += l_1020.s5;
        result += l_1020.s4;
        result += l_1020.s3;
        result += l_1020.s2;
        result += l_1020.s1;
        result += l_1020.s0;
        result += l_1021.sf;
        result += l_1021.se;
        result += l_1021.sd;
        result += l_1021.sc;
        result += l_1021.sb;
        result += l_1021.sa;
        result += l_1021.s9;
        result += l_1021.s8;
        result += l_1021.s7;
        result += l_1021.s6;
        result += l_1021.s5;
        result += l_1021.s4;
        result += l_1021.s3;
        result += l_1021.s2;
        result += l_1021.s1;
        result += l_1021.s0;
        result += l_1022.s7;
        result += l_1022.s6;
        result += l_1022.s5;
        result += l_1022.s4;
        result += l_1022.s3;
        result += l_1022.s2;
        result += l_1022.s1;
        result += l_1022.s0;
        result += l_1023;
        result += l_1024;
        result += l_1025.y;
        result += l_1025.x;
        result += l_1026.y;
        result += l_1026.x;
        result += l_1027.sf;
        result += l_1027.se;
        result += l_1027.sd;
        result += l_1027.sc;
        result += l_1027.sb;
        result += l_1027.sa;
        result += l_1027.s9;
        result += l_1027.s8;
        result += l_1027.s7;
        result += l_1027.s6;
        result += l_1027.s5;
        result += l_1027.s4;
        result += l_1027.s3;
        result += l_1027.s2;
        result += l_1027.s1;
        result += l_1027.s0;
        result += l_1028.s7;
        result += l_1028.s6;
        result += l_1028.s5;
        result += l_1028.s4;
        result += l_1028.s3;
        result += l_1028.s2;
        result += l_1028.s1;
        result += l_1028.s0;
        result += l_1029.w;
        result += l_1029.z;
        result += l_1029.y;
        result += l_1029.x;
        result += l_1030.sf;
        result += l_1030.se;
        result += l_1030.sd;
        result += l_1030.sc;
        result += l_1030.sb;
        result += l_1030.sa;
        result += l_1030.s9;
        result += l_1030.s8;
        result += l_1030.s7;
        result += l_1030.s6;
        result += l_1030.s5;
        result += l_1030.s4;
        result += l_1030.s3;
        result += l_1030.s2;
        result += l_1030.s1;
        result += l_1030.s0;
        result += l_1031.s7;
        result += l_1031.s6;
        result += l_1031.s5;
        result += l_1031.s4;
        result += l_1031.s3;
        result += l_1031.s2;
        result += l_1031.s1;
        result += l_1031.s0;
        result += l_1032.y;
        result += l_1032.x;
        result += l_1033.sf;
        result += l_1033.se;
        result += l_1033.sd;
        result += l_1033.sc;
        result += l_1033.sb;
        result += l_1033.sa;
        result += l_1033.s9;
        result += l_1033.s8;
        result += l_1033.s7;
        result += l_1033.s6;
        result += l_1033.s5;
        result += l_1033.s4;
        result += l_1033.s3;
        result += l_1033.s2;
        result += l_1033.s1;
        result += l_1033.s0;
        result += l_1034;
        int l_1035_i0, l_1035_i1;
        for (l_1035_i0 = 0; l_1035_i0 < 7; l_1035_i0++) {
            for (l_1035_i1 = 0; l_1035_i1 < 4; l_1035_i1++) {
                result += l_1035[l_1035_i0][l_1035_i1];
            }
        }
        result += l_1036.y;
        result += l_1036.x;
        result += l_1037;
        result += l_1038;
        result += l_1039.y;
        result += l_1039.x;
        result += l_1040.sf;
        result += l_1040.se;
        result += l_1040.sd;
        result += l_1040.sc;
        result += l_1040.sb;
        result += l_1040.sa;
        result += l_1040.s9;
        result += l_1040.s8;
        result += l_1040.s7;
        result += l_1040.s6;
        result += l_1040.s5;
        result += l_1040.s4;
        result += l_1040.s3;
        result += l_1040.s2;
        result += l_1040.s1;
        result += l_1040.s0;
        result += l_1041;
        result += l_1042.y;
        result += l_1042.x;
        result += l_1043.y;
        result += l_1043.x;
        result += l_1044.sf;
        result += l_1044.se;
        result += l_1044.sd;
        result += l_1044.sc;
        result += l_1044.sb;
        result += l_1044.sa;
        result += l_1044.s9;
        result += l_1044.s8;
        result += l_1044.s7;
        result += l_1044.s6;
        result += l_1044.s5;
        result += l_1044.s4;
        result += l_1044.s3;
        result += l_1044.s2;
        result += l_1044.s1;
        result += l_1044.s0;
        result += l_1045;
        result += l_1046.w;
        result += l_1046.z;
        result += l_1046.y;
        result += l_1046.x;
        result += l_1047;
        result += l_1048;
        result += l_1049;
        result += l_1050;
        result += l_1051;
        result += l_1052;
        result += l_1053.sf;
        result += l_1053.se;
        result += l_1053.sd;
        result += l_1053.sc;
        result += l_1053.sb;
        result += l_1053.sa;
        result += l_1053.s9;
        result += l_1053.s8;
        result += l_1053.s7;
        result += l_1053.s6;
        result += l_1053.s5;
        result += l_1053.s4;
        result += l_1053.s3;
        result += l_1053.s2;
        result += l_1053.s1;
        result += l_1053.s0;
        result += l_1054.s7;
        result += l_1054.s6;
        result += l_1054.s5;
        result += l_1054.s4;
        result += l_1054.s3;
        result += l_1054.s2;
        result += l_1054.s1;
        result += l_1054.s0;
        result += l_1055;
        result += l_1056.w;
        result += l_1056.z;
        result += l_1056.y;
        result += l_1056.x;
        int l_1057_i0;
        for (l_1057_i0 = 0; l_1057_i0 < 5; l_1057_i0++) {
            result += l_1057[l_1057_i0];
        }
        atomic_add(&p_1302->g_special_values[36 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 477 */
        (1 + 1);
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_51 p_1302->g_471 p_1302->g_41 p_1302->g_32 p_1302->g_40
 * writes: p_1302->g_51 p_1302->g_471 p_1302->g_32
 */
int32_t * func_25(int32_t  p_26, uint32_t  p_27, struct S0 * p_1302)
{ /* block id: 396 */
    uint8_t l_871 = 0UL;
    int32_t **l_874[4];
    int32_t l_925 = 0x6344CE0BL;
    uint32_t **l_969 = &p_1302->g_932;
    uint16_t *l_972 = (void*)0;
    int32_t l_992 = 0L;
    uint32_t l_993 = 0x3670D10FL;
    uint32_t l_996[3];
    int i;
    for (i = 0; i < 4; i++)
        l_874[i] = &p_1302->g_31[2];
    for (i = 0; i < 3; i++)
        l_996[i] = 0x28763526L;
    for (p_1302->g_51 = (-5); (p_1302->g_51 > 31); p_1302->g_51 = safe_add_func_uint32_t_u_u(p_1302->g_51, 1))
    { /* block id: 399 */
        int64_t l_864 = 0x6E2A9A120676AD24L;
        uint8_t *l_865 = (void*)0;
        uint8_t *l_866 = &p_1302->g_471;
        VECTOR(uint8_t, 16) l_869 = (VECTOR(uint8_t, 16))(0x63L, (VECTOR(uint8_t, 4))(0x63L, (VECTOR(uint8_t, 2))(0x63L, 1UL), 1UL), 1UL, 0x63L, 1UL, (VECTOR(uint8_t, 2))(0x63L, 1UL), (VECTOR(uint8_t, 2))(0x63L, 1UL), 0x63L, 1UL, 0x63L, 1UL);
        int32_t l_870 = 0L;
        int8_t *l_881 = (void*)0;
        int8_t *l_882 = (void*)0;
        uint16_t l_895 = 0x96DEL;
        int16_t *l_896 = (void*)0;
        int16_t *l_897 = (void*)0;
        int32_t l_898 = 0x05D36E01L;
        uint32_t ***l_957[8];
        uint32_t *l_967[8] = {&p_1302->g_457,&p_1302->g_457,&p_1302->g_457,&p_1302->g_457,&p_1302->g_457,&p_1302->g_457,&p_1302->g_457,&p_1302->g_457};
        uint32_t **l_966 = &l_967[7];
        VECTOR(int8_t, 2) l_968 = (VECTOR(int8_t, 2))(0x55L, 0x73L);
        int i;
        for (i = 0; i < 8; i++)
            l_957[i] = (void*)0;
        l_870 ^= (((*l_866)--) <= ((VECTOR(uint8_t, 2))(l_869.scd)).hi);
        l_871--;
    }
    (*p_1302->g_41) ^= 0x233D1663L;
    --l_993;
    l_996[0]--;
    return (*p_1302->g_40);
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_369 p_1302->g_73 p_1302->g_62 p_1302->g_41 p_1302->g_32 p_1302->g_457 p_1302->g_474 p_1302->g_400 p_1302->g_774 p_1302->g_129 p_1302->g_523 p_1302->g_93 p_1302->g_795 p_1302->g_395 p_1302->g_815 p_1302->g_608 p_1302->g_40 p_1302->g_488 p_1302->g_336 p_1302->g_556 p_1302->g_537 p_1302->g_329 p_1302->g_255 p_1302->g_416 p_1302->g_79 p_1302->g_596 p_1302->g_61
 * writes: p_1302->g_598 p_1302->g_101 p_1302->g_342 p_1302->g_32 p_1302->g_457 p_1302->g_488 p_1302->g_608 p_1302->g_556 p_1302->g_41 p_1302->g_538 p_1302->g_369
 */
uint16_t  func_37(int32_t ** p_38, int32_t  p_39, struct S0 * p_1302)
{ /* block id: 253 */
    uint8_t **l_604 = &p_1302->g_523;
    VECTOR(int32_t, 16) l_605 = (VECTOR(int32_t, 16))(0x66464E41L, (VECTOR(int32_t, 4))(0x66464E41L, (VECTOR(int32_t, 2))(0x66464E41L, 0x77C1DC75L), 0x77C1DC75L), 0x77C1DC75L, 0x66464E41L, 0x77C1DC75L, (VECTOR(int32_t, 2))(0x66464E41L, 0x77C1DC75L), (VECTOR(int32_t, 2))(0x66464E41L, 0x77C1DC75L), 0x66464E41L, 0x77C1DC75L, 0x66464E41L, 0x77C1DC75L);
    int16_t *l_606 = &p_1302->g_598;
    int16_t *l_607 = (void*)0;
    int16_t l_609 = 8L;
    int16_t l_612 = (-1L);
    int8_t *l_623 = (void*)0;
    uint32_t *l_624 = &p_1302->g_342;
    int32_t l_625 = 0x4ABD055EL;
    VECTOR(int16_t, 4) l_771 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6C37L), 0x6C37L);
    VECTOR(int16_t, 16) l_772 = (VECTOR(int16_t, 16))(0x3125L, (VECTOR(int16_t, 4))(0x3125L, (VECTOR(int16_t, 2))(0x3125L, (-1L)), (-1L)), (-1L), 0x3125L, (-1L), (VECTOR(int16_t, 2))(0x3125L, (-1L)), (VECTOR(int16_t, 2))(0x3125L, (-1L)), 0x3125L, (-1L), 0x3125L, (-1L));
    VECTOR(int8_t, 4) l_773 = (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 2L), 2L);
    int64_t *l_781 = (void*)0;
    int64_t *l_782 = (void*)0;
    int64_t *l_783 = (void*)0;
    uint64_t ***l_787[9][5] = {{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]},{&p_1302->g_543[0][0],(void*)0,&p_1302->g_543[1][0],(void*)0,&p_1302->g_543[0][0]}};
    VECTOR(uint8_t, 2) l_808 = (VECTOR(uint8_t, 2))(247UL, 0x2DL);
    int32_t l_845 = (-1L);
    int32_t l_849 = 0x39C00308L;
    int32_t l_850 = 0x22067AC0L;
    uint32_t l_851 = 0xADA25362L;
    int i, j;
    (**p_38) ^= (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_1302->g_369)), (l_609 = ((*l_606) = (safe_lshift_func_uint16_t_u_s(((void*)0 == l_604), l_605.se)))))) ^ (safe_mul_func_uint8_t_u_u(l_605.s5, (p_39 < (l_612 | ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_624) = (((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((p_1302->g_101.s2 = ((+((l_612 , (safe_rshift_func_uint8_t_u_u(p_39, p_39))) == l_612)) && 0xD77F66865706772AL)) , (-1L)), l_605.sd)) ^ p_1302->g_73[0][0]), p_1302->g_62.x)) < p_39) , l_605.s2)) , 0x02L), 5)), 0x712E8CAA91319EAEL)) > l_625)))))) != p_39);
    for (p_1302->g_457 = 22; (p_1302->g_457 >= 28); p_1302->g_457 = safe_add_func_uint64_t_u_u(p_1302->g_457, 9))
    { /* block id: 261 */
        if ((atomic_inc(&p_1302->l_atomic_input[30]) == 9))
        { /* block id: 263 */
            int32_t l_628 = 0L;
            int32_t l_669 = (-2L);
            uint64_t l_670 = 0x3229109433FE3279L;
            uint64_t l_673 = 0xAD36655DA907C240L;
            int32_t l_674[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
            int64_t l_675 = 0x16CBE7BBAB2CB0DCL;
            int16_t l_676[9] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
            int32_t l_677[2][5] = {{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}};
            uint8_t l_678 = 0x3AL;
            uint16_t l_681 = 0xF5BAL;
            uint16_t l_682 = 0xFC20L;
            int32_t l_683 = 0x170CEF39L;
            uint8_t l_684 = 0xB5L;
            uint8_t l_685 = 0x41L;
            uint16_t l_697 = 1UL;
            int i, j;
            for (l_628 = 0; (l_628 != 15); l_628++)
            { /* block id: 266 */
                int32_t l_631 = 0x492CDE89L;
                for (l_631 = 0; (l_631 >= (-3)); l_631--)
                { /* block id: 269 */
                    int32_t l_634[9][3] = {{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}};
                    int8_t l_635 = 0x78L;
                    int8_t l_636 = 0x71L;
                    int64_t l_637 = 0x49A38ECE30679D81L;
                    uint64_t l_655 = 5UL;
                    int16_t l_660 = 0L;
                    int i, j;
                    if ((l_637 = ((l_635 = l_634[7][0]) , l_636)))
                    { /* block id: 272 */
                        int64_t l_638 = (-9L);
                        int64_t l_639 = (-1L);
                        uint16_t l_640 = 0UL;
                        VECTOR(int64_t, 2) l_643 = (VECTOR(int64_t, 2))((-1L), 1L);
                        int i;
                        --l_640;
                        l_634[6][0] = l_643.y;
                        l_634[7][0] |= 0x3B39DE29L;
                    }
                    else
                    { /* block id: 276 */
                        int32_t l_644 = 0x36992743L;
                        int64_t l_645 = (-5L);
                        int32_t l_646 = (-5L);
                        VECTOR(int32_t, 2) l_647 = (VECTOR(int32_t, 2))(0x67316DF7L, 0x679B6DCEL);
                        VECTOR(int32_t, 16) l_648 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 9L), 9L), 9L, (-8L), 9L, (VECTOR(int32_t, 2))((-8L), 9L), (VECTOR(int32_t, 2))((-8L), 9L), (-8L), 9L, (-8L), 9L);
                        VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))((-3L), 0x543801F2L);
                        int64_t l_650 = 0L;
                        int64_t l_651 = 0x386FB805638631C8L;
                        uint16_t l_652 = 0x021EL;
                        int i;
                        l_634[2][0] &= l_644;
                        l_649.x = (l_645 , ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_646, 0x6C565FC9L, (-4L), ((VECTOR(int32_t, 2))(l_647.yy)), ((VECTOR(int32_t, 4))(l_648.s6375)), (-4L), (l_634[6][2] = 0x6C371668L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x69BE5CBCL, 9L)).xyxyyyyyxyxyyxyx)).sd3)), 0x3301CF31L, 0x4CDEF9DFL)), 6L)), ((VECTOR(int32_t, 16))(l_649.yyxxyxyxyxxyyyxx))))).se);
                        l_634[7][0] = 0x006FE421L;
                        --l_652;
                    }
                    if (l_655)
                    { /* block id: 283 */
                        int16_t l_656[10][5] = {{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L},{0x4179L,0x7666L,1L,(-1L),1L}};
                        int8_t l_657 = 5L;
                        int i, j;
                        l_634[2][0] = 1L;
                        l_657 = l_656[7][0];
                    }
                    else
                    { /* block id: 286 */
                        int32_t l_658 = 0x3CCE0009L;
                        uint16_t l_659 = 2UL;
                        l_659 = (l_634[7][0] = l_658);
                    }
                    if (l_660)
                    { /* block id: 290 */
                        int32_t l_662 = 0x3E98E815L;
                        int32_t *l_661 = &l_662;
                        int32_t *l_663 = &l_662;
                        uint16_t l_664[7][3] = {{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L},{0xE9C6L,0xBF1DL,0x9005L}};
                        int i, j;
                        l_663 = l_661;
                        l_664[1][2]++;
                    }
                    else
                    { /* block id: 293 */
                        int16_t l_667 = (-1L);
                        int32_t l_668 = 0x2D3E0EE4L;
                        l_667 |= 0x7C71CE23L;
                        l_634[7][0] = l_668;
                    }
                }
            }
            l_669 = 0x26200AAFL;
            if ((l_685 &= ((l_670++) , ((l_673 = 18446744073709551615UL) , ((++l_678) , ((l_681 , 0x1A4328E5B2FF77CEL) , ((VECTOR(int32_t, 8))(0x38C05AD2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(0x71F77F58L, 1L)).xxxyyxyyyyxyyyyx, ((VECTOR(int32_t, 4))((l_682 , 0x24426FACL), 0x25377673L, 0x5D3B09E4L, 0x1A42F400L)).zzzxwzwzwwwyyxzw))).s5edd)), (l_684 = l_683), (-1L), 0x37C62212L)).s1))))))
            { /* block id: 305 */
                uint8_t l_686 = 0x57L;
                l_686++;
            }
            else
            { /* block id: 307 */
                int16_t **l_689 = (void*)0;
                int16_t *l_691 = (void*)0;
                int16_t **l_690 = &l_691;
                VECTOR(uint64_t, 8) l_692 = (VECTOR(uint64_t, 8))(0x61356A7C681F05B1L, (VECTOR(uint64_t, 4))(0x61356A7C681F05B1L, (VECTOR(uint64_t, 2))(0x61356A7C681F05B1L, 0xBD265FB5D64E95FEL), 0xBD265FB5D64E95FEL), 0xBD265FB5D64E95FEL, 0x61356A7C681F05B1L, 0xBD265FB5D64E95FEL);
                int32_t l_694 = (-9L);
                int32_t *l_693 = &l_694;
                int32_t *l_695[6][9] = {{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694},{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694},{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694},{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694},{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694},{&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694,&l_694,(void*)0,&l_694}};
                uint8_t l_696 = 247UL;
                int i, j;
                l_690 = (l_689 = (void*)0);
                l_695[2][1] = (((VECTOR(uint64_t, 16))(l_692.s4071713437662731)).sb , (l_693 = l_693));
                l_628 |= l_696;
            }
            if (l_697)
            { /* block id: 314 */
                uint64_t l_698 = 1UL;
                int32_t l_702 = 0x49EC9444L;
                int32_t *l_701 = &l_702;
                ++l_698;
                l_701 = (void*)0;
            }
            else
            { /* block id: 317 */
                VECTOR(int32_t, 16) l_703 = (VECTOR(int32_t, 16))(0x15910B3EL, (VECTOR(int32_t, 4))(0x15910B3EL, (VECTOR(int32_t, 2))(0x15910B3EL, 0x6200639BL), 0x6200639BL), 0x6200639BL, 0x15910B3EL, 0x6200639BL, (VECTOR(int32_t, 2))(0x15910B3EL, 0x6200639BL), (VECTOR(int32_t, 2))(0x15910B3EL, 0x6200639BL), 0x15910B3EL, 0x6200639BL, 0x15910B3EL, 0x6200639BL);
                int i;
                if ((l_628 = ((VECTOR(int32_t, 16))(l_703.s423fda6b45fdcd7c)).sf))
                { /* block id: 319 */
                    int32_t l_705 = 0x5B872E20L;
                    int32_t *l_704[6][2][2] = {{{&l_705,&l_705},{&l_705,&l_705}},{{&l_705,&l_705},{&l_705,&l_705}},{{&l_705,&l_705},{&l_705,&l_705}},{{&l_705,&l_705},{&l_705,&l_705}},{{&l_705,&l_705},{&l_705,&l_705}},{{&l_705,&l_705},{&l_705,&l_705}}};
                    int32_t *l_706 = (void*)0;
                    uint64_t l_707 = 18446744073709551612UL;
                    int32_t *l_710 = (void*)0;
                    int i, j, k;
                    l_706 = l_704[5][1][0];
                    --l_707;
                    l_710 = (void*)0;
                }
                else
                { /* block id: 323 */
                    int8_t l_711 = 3L;
                    if (l_711)
                    { /* block id: 324 */
                        VECTOR(int32_t, 8) l_712 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        int8_t l_713 = (-10L);
                        int16_t l_714 = 0x00B1L;
                        uint32_t l_715 = 0xD7F097FDL;
                        int i;
                        l_703.sb &= ((VECTOR(int32_t, 16))(l_712.s2737024353073622)).s6;
                        ++l_715;
                    }
                    else
                    { /* block id: 327 */
                        int16_t l_718 = 0x010AL;
                        uint32_t l_719 = 0xD907A919L;
                        VECTOR(uint32_t, 4) l_720 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA599A791L), 0xA599A791L);
                        VECTOR(int32_t, 16) l_722 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                        int32_t *l_721 = (void*)0;
                        int32_t *l_723 = (void*)0;
                        int32_t *l_724[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_725 = (void*)0;
                        int32_t *l_726 = (void*)0;
                        uint16_t l_727[4][3] = {{0xD189L,0xCCCCL,0xD189L},{0xD189L,0xCCCCL,0xD189L},{0xD189L,0xCCCCL,0xD189L},{0xD189L,0xCCCCL,0xD189L}};
                        uint16_t l_728[3][10] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
                        int64_t l_729 = 0x13A7A6D14516DEF8L;
                        int32_t *l_730 = (void*)0;
                        int32_t *l_731 = (void*)0;
                        int32_t *l_732 = (void*)0;
                        VECTOR(int32_t, 4) l_733 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x5A3CB2CDL), 0x5A3CB2CDL);
                        VECTOR(int32_t, 8) l_734 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
                        VECTOR(int32_t, 4) l_735 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x30CAA3D5L), 0x30CAA3D5L);
                        VECTOR(int32_t, 2) l_736 = (VECTOR(int32_t, 2))(9L, 0x08F577AEL);
                        VECTOR(int32_t, 16) l_737 = (VECTOR(int32_t, 16))(0x4803081CL, (VECTOR(int32_t, 4))(0x4803081CL, (VECTOR(int32_t, 2))(0x4803081CL, 0x7168CF8AL), 0x7168CF8AL), 0x7168CF8AL, 0x4803081CL, 0x7168CF8AL, (VECTOR(int32_t, 2))(0x4803081CL, 0x7168CF8AL), (VECTOR(int32_t, 2))(0x4803081CL, 0x7168CF8AL), 0x4803081CL, 0x7168CF8AL, 0x4803081CL, 0x7168CF8AL);
                        VECTOR(int32_t, 4) l_738 = (VECTOR(int32_t, 4))(0x1FB9EDB3L, (VECTOR(int32_t, 2))(0x1FB9EDB3L, 6L), 6L);
                        VECTOR(int64_t, 8) l_739 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x540817DD8B6837D6L), 0x540817DD8B6837D6L), 0x540817DD8B6837D6L, (-6L), 0x540817DD8B6837D6L);
                        VECTOR(int64_t, 16) l_740 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int64_t, 2))(1L, (-6L)), (VECTOR(int64_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L));
                        uint8_t l_741[3][6][4] = {{{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL}},{{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL}},{{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL},{1UL,6UL,0UL,255UL}}};
                        VECTOR(int64_t, 16) l_742 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6E33B01593D44180L), 0x6E33B01593D44180L), 0x6E33B01593D44180L, 0L, 0x6E33B01593D44180L, (VECTOR(int64_t, 2))(0L, 0x6E33B01593D44180L), (VECTOR(int64_t, 2))(0L, 0x6E33B01593D44180L), 0L, 0x6E33B01593D44180L, 0L, 0x6E33B01593D44180L);
                        int32_t l_743 = 0x6092A328L;
                        int64_t l_744 = 0x6E4E3E913A05D6E0L;
                        int32_t l_745 = 0x05151C3FL;
                        uint64_t l_746 = 6UL;
                        VECTOR(int32_t, 16) l_747 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L), (VECTOR(int32_t, 2))(1L, (-3L)), (VECTOR(int32_t, 2))(1L, (-3L)), 1L, (-3L), 1L, (-3L));
                        VECTOR(int32_t, 2) l_748 = (VECTOR(int32_t, 2))(0x0B306545L, 0x713185FDL);
                        VECTOR(int8_t, 2) l_749 = (VECTOR(int8_t, 2))(0x5BL, 1L);
                        VECTOR(int8_t, 16) l_750 = (VECTOR(int8_t, 16))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 1L), 1L), 1L, 0x3CL, 1L, (VECTOR(int8_t, 2))(0x3CL, 1L), (VECTOR(int8_t, 2))(0x3CL, 1L), 0x3CL, 1L, 0x3CL, 1L);
                        VECTOR(int16_t, 4) l_751 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0L), 0L);
                        VECTOR(int16_t, 2) l_752 = (VECTOR(int16_t, 2))((-1L), 4L);
                        VECTOR(int16_t, 4) l_753 = (VECTOR(int16_t, 4))(0x6C09L, (VECTOR(int16_t, 2))(0x6C09L, 0x63E2L), 0x63E2L);
                        VECTOR(int16_t, 8) l_754 = (VECTOR(int16_t, 8))(0x5EF1L, (VECTOR(int16_t, 4))(0x5EF1L, (VECTOR(int16_t, 2))(0x5EF1L, 0x4C0CL), 0x4C0CL), 0x4C0CL, 0x5EF1L, 0x4C0CL);
                        VECTOR(int16_t, 16) l_755 = (VECTOR(int16_t, 16))(0x3F3BL, (VECTOR(int16_t, 4))(0x3F3BL, (VECTOR(int16_t, 2))(0x3F3BL, 0x704CL), 0x704CL), 0x704CL, 0x3F3BL, 0x704CL, (VECTOR(int16_t, 2))(0x3F3BL, 0x704CL), (VECTOR(int16_t, 2))(0x3F3BL, 0x704CL), 0x3F3BL, 0x704CL, 0x3F3BL, 0x704CL);
                        VECTOR(int16_t, 4) l_756 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 3L), 3L);
                        int32_t l_757[1];
                        VECTOR(int16_t, 2) l_758 = (VECTOR(int16_t, 2))(0x3AB2L, 0x339CL);
                        VECTOR(int16_t, 2) l_759 = (VECTOR(int16_t, 2))((-1L), 0x76A0L);
                        VECTOR(int16_t, 2) l_760 = (VECTOR(int16_t, 2))(0x433EL, (-1L));
                        int64_t l_761 = 0x15793CE556C517EBL;
                        uint32_t l_762 = 0x6119675AL;
                        uint32_t l_763[8][6][5] = {{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}},{{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L},{0xF8D3C428L,0xF62E7535L,0x559011F7L,0xF62E7535L,0xF8D3C428L}}};
                        uint32_t l_764 = 0x0179A03DL;
                        int16_t l_765 = 0L;
                        int8_t l_766 = 9L;
                        int8_t l_767 = (-10L);
                        uint8_t l_768 = 0x9EL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_757[i] = 0L;
                        l_726 = (l_725 = (l_718 , (l_719 , (l_724[2][3] = (l_723 = ((l_720.w ^= 7UL) , (l_721 = (void*)0)))))));
                        l_628 = l_727[0][0];
                        l_732 = (l_731 = ((l_728[1][9] , l_729) , l_730));
                        l_677[1][4] &= ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, (-6L))), (-4L), 0x2E2F0D6EL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_733.yyyx)))).even)).yxyx, ((VECTOR(int32_t, 2))(4L, 0x39C84C09L)).xyyx))))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_734.s22317107)).lo, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_735.yxzywwzwyyxyxzxw)).sf1, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_736.xxxxxyxy)).s64)), 0x68582E2FL, 0L)).wyyyyxwy)).s72, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_737.s5e4387f3)).s01))))))))))).yyyxxyxxyyxyyxxy, (int32_t)(l_745 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x35761EC9L, 0x0FB83B4CL)).yxyy, ((VECTOR(int32_t, 16))(l_738.xwwyywwzwwxxyywx)).s3627))).yyzyzwwy)).s1137673140347013, (int32_t)(((VECTOR(int64_t, 16))(0x167BD433099D70EFL, 0x5C5B7670433B7BCFL, ((VECTOR(int64_t, 2))(l_739.s41)), ((VECTOR(int64_t, 2))(l_740.s58)), l_741[0][1][1], 0x7740C7F038F97FC7L, 1L, ((VECTOR(int64_t, 2))(0x0EFB36D2EE8D4011L, 0x20E12F38F28A6462L)), ((VECTOR(int64_t, 2))(l_742.s94)), l_743, 0x7DBC06CDEB6507C1L, 0x312388015215050DL)).s8 , l_744)))))).sa5)).odd), (int32_t)l_746))).sef25))).yyxzzwzwyxxzwwzz, ((VECTOR(int32_t, 4))(l_747.s045b)).yxwzwyyywxxwyzzy, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_748.yyyxyyxx)).odd)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(6L, 0x339460F9L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(1L, (-1L), (-1L), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-6L), 0x3B8CL)).yxxyyxyx)).s4340003450626330)).s7a1f)).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_749.xxxyxyyy)))), ((VECTOR(int8_t, 8))(l_750.s36dd6b62))))), ((VECTOR(uint8_t, 2))(255UL, 0x8BL)).yxyxyyxx))).s00, ((VECTOR(int16_t, 4))(l_751.ywzw)).hi))).yxyxxyxy)).s16, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_752.xy)), (-1L), (l_751.y = (-4L)), 0x4B06L, 0x1928L, ((VECTOR(int16_t, 2))((-7L), (-1L))), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_753.zx)), 1L, ((VECTOR(int16_t, 2))((-1L), (-1L))), ((VECTOR(int16_t, 2))(l_754.s63)), 0L)).s11, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_755.s7648)).lo)).xxxxyxyxxxxxxxyy)).even)).s5647004352730553)).s9b))), (l_757[0] = ((VECTOR(int16_t, 4))(l_756.zxzz)).w), 0x272CL, ((VECTOR(int16_t, 4))(l_758.yyyy)))).sfdf2, ((VECTOR(int16_t, 2))(0x7FAFL, 1L)).yxxx, ((VECTOR(int16_t, 16))(l_759.xxxyxyyxxxxyyyxx)).sba03))).xwzzzywy, ((VECTOR(int16_t, 4))(l_760.xyyy)).wyxzwwyy))).s76))), l_761, 0L, l_762, 0x581BL, (l_763[0][5][4] = 0x1D54L), l_764, 4L, ((VECTOR(int16_t, 4))(0x5E62L)))).sb, ((VECTOR(int16_t, 2))(0L)), 9L)).hi, (int16_t)l_765, (int16_t)l_766))).xyyx, (int16_t)l_767))), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))(0x41C4L))))).even, ((VECTOR(uint16_t, 2))(0UL))))).yxxx)).z, l_768, 3L, (-1L), 0x0FE6F579L)).s1227462316164437)).s2e31, ((VECTOR(int32_t, 4))(0x069D7538L))))).xyxxxwzyzwxzzxxx))).hi)).s57))).lo;
                    }
                }
            }
            unsigned int result = 0;
            result += l_628;
            result += l_669;
            result += l_670;
            result += l_673;
            int l_674_i0;
            for (l_674_i0 = 0; l_674_i0 < 8; l_674_i0++) {
                result += l_674[l_674_i0];
            }
            result += l_675;
            int l_676_i0;
            for (l_676_i0 = 0; l_676_i0 < 9; l_676_i0++) {
                result += l_676[l_676_i0];
            }
            int l_677_i0, l_677_i1;
            for (l_677_i0 = 0; l_677_i0 < 2; l_677_i0++) {
                for (l_677_i1 = 0; l_677_i1 < 5; l_677_i1++) {
                    result += l_677[l_677_i0][l_677_i1];
                }
            }
            result += l_678;
            result += l_681;
            result += l_682;
            result += l_683;
            result += l_684;
            result += l_685;
            result += l_697;
            atomic_add(&p_1302->l_special_values[30], result);
        }
        else
        { /* block id: 345 */
            (1 + 1);
        }
        return p_1302->g_474.s5;
    }
    if ((~(safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(l_771.zy)).xxxyyxxy, ((VECTOR(int16_t, 4))(p_1302->g_400.x, ((VECTOR(int16_t, 2))(l_772.s4b)), 0x0F6FL)).xwxzxwxx))).s6454301271240761, (int16_t)(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(l_773.zy)).xxyx, ((VECTOR(int8_t, 16))(p_1302->g_774.sd6e38ab4046fe957)).scbc7))), ((VECTOR(uint8_t, 2))(255UL, 0xAFL)).yxyy))).y > (safe_mul_func_uint8_t_u_u(((p_1302->g_488.w = (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((5L | p_1302->g_129.x), 3)), ((l_605.sb |= ((void*)0 != l_623)) | ((((void*)0 == (*l_604)) ^ p_1302->g_93.y) <= p_1302->g_129.x))))) || 0x5F370C55F7E97A27L), 255UL)))))).s9, 12))))
    { /* block id: 352 */
        VECTOR(uint8_t, 16) l_784 = (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0UL), 0UL), 0UL, 0xADL, 0UL, (VECTOR(uint8_t, 2))(0xADL, 0UL), (VECTOR(uint8_t, 2))(0xADL, 0UL), 0xADL, 0UL, 0xADL, 0UL);
        VECTOR(int8_t, 2) l_790 = (VECTOR(int8_t, 2))(0x30L, 0x38L);
        VECTOR(uint8_t, 8) l_796 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 5UL), 5UL), 5UL, 3UL, 5UL);
        VECTOR(uint16_t, 4) l_805 = (VECTOR(uint16_t, 4))(0x3164L, (VECTOR(uint16_t, 2))(0x3164L, 0xF7E4L), 0xF7E4L);
        VECTOR(uint8_t, 4) l_809 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD6L), 0xD6L);
        VECTOR(uint32_t, 8) l_810 = (VECTOR(uint32_t, 8))(0x4156F4A4L, (VECTOR(uint32_t, 4))(0x4156F4A4L, (VECTOR(uint32_t, 2))(0x4156F4A4L, 4294967286UL), 4294967286UL), 4294967286UL, 0x4156F4A4L, 4294967286UL);
        int8_t *l_816 = (void*)0;
        int32_t l_817 = 0x5196F66BL;
        uint64_t ***l_818 = (void*)0;
        int32_t *l_822[10][6][4] = {{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}},{{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32},{&l_817,&p_1302->g_32,&p_1302->g_32,&p_1302->g_32}}};
        int32_t **l_821 = &l_822[4][2][2];
        int i, j, k;
        (**p_1302->g_40) = (((VECTOR(uint8_t, 2))(l_784.sfe)).lo , (safe_rshift_func_int8_t_s_s((l_787[2][3] == (((p_39 == ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_790.yyxy)).even, ((VECTOR(int8_t, 16))(0x3CL, (-5L), (-1L), ((VECTOR(int8_t, 2))(0L, 0x16L)), ((VECTOR(int8_t, 4))((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(p_1302->g_795.wzzw)).wzwwyyxw, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(l_796.s31166272)).s47, ((VECTOR(uint8_t, 4))(0x53L, (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(p_1302->g_474.s5, (p_39 && (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(65535UL, 0xF1B9L, ((VECTOR(uint16_t, 4))(l_805.yzww)), 65529UL, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(l_808.yyxxxyxy)).s7516703440272231, ((VECTOR(uint8_t, 4))(l_808.x, ((VECTOR(uint8_t, 2))(0xAFL, 9UL)), 0UL)).wzxzxwyyxxwwwxwz, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x57L, 0x08L)).xyyxxyyx)))).even))).hi, ((VECTOR(uint8_t, 16))(l_809.ywywyzwxwyxzyxzx)).se7))), (uint8_t)(((VECTOR(uint32_t, 8))(l_810.s20021355)).s1 && (l_625 ^= (((safe_lshift_func_int8_t_s_u((l_817 |= (safe_add_func_uint32_t_u_u(p_1302->g_395, ((p_1302->g_608.s7 |= (FAKE_DIVERGE(p_1302->local_2_offset, get_local_id(2), 10) <= ((VECTOR(int32_t, 4))(p_1302->g_815.yxyy)).w)) > FAKE_DIVERGE(p_1302->group_2_offset, get_group_id(2), 10))))), 3)) != 0x7D49L) == ((p_39 , (((**p_1302->g_40) ^ p_1302->g_369) & p_39)) || l_605.s7)))), (uint8_t)p_39))).xyyyyxxyyyyyxyyx))).s8, p_39)), 0xE297L, 0x07E6L, 0xF1EFL, GROUP_DIVERGE(1, 1), l_817, 2UL, 0x97B7L)).even, ((VECTOR(uint16_t, 4))(0xDC3AL)), ((VECTOR(uint16_t, 4))(0UL))))).yyzwyzzzyxyxzwzw)).s011c, ((VECTOR(uint16_t, 4))(0x569EL))))).odd, ((VECTOR(uint16_t, 2))(0x1588L))))).xyyy, ((VECTOR(uint16_t, 4))(65535UL))))), l_784.s5, 1UL, ((VECTOR(uint16_t, 2))(0UL)), 0UL)).sd935)).lo, ((VECTOR(uint16_t, 2))(0xFCFAL))))), 65528UL, 0UL)).w | 0x0F6CL)))), l_809.x)), l_790.x)), p_1302->g_488.w)), 0x9DL, 0x0EL)).even))).yyxxyxyy))).s62)).xyxyyyyxxyxyxyyx)).odd)).s5, p_39)), p_1302->g_336.s4)) , p_39) < GROUP_DIVERGE(0, 1)), 1L, 1L, 3L)), 0L, ((VECTOR(int8_t, 4))(0L)), 0L, 0L)).s8a, ((VECTOR(int8_t, 2))(7L))))).odd, 0xAFL)) < l_772.s0)) & l_771.z) , l_818)), l_790.y)));
        for (p_1302->g_556 = 0; (p_1302->g_556 == 5); ++p_1302->g_556)
        { /* block id: 359 */
            return p_39;
        }
        (*l_821) = ((*p_1302->g_40) = (*p_1302->g_40));
    }
    else
    { /* block id: 364 */
        uint32_t *l_836 = (void*)0;
        int32_t l_842 = 0L;
        uint32_t *l_843[2][2][5] = {{{(void*)0,&p_1302->g_14,(void*)0,(void*)0,&p_1302->g_14},{(void*)0,&p_1302->g_14,(void*)0,(void*)0,&p_1302->g_14}},{{(void*)0,&p_1302->g_14,(void*)0,(void*)0,&p_1302->g_14},{(void*)0,&p_1302->g_14,(void*)0,(void*)0,&p_1302->g_14}}};
        int32_t l_844 = (-1L);
        int32_t *l_846 = (void*)0;
        int32_t *l_847 = &l_844;
        int32_t *l_848[3][7] = {{&p_1302->g_4,(void*)0,&p_1302->g_32,(void*)0,&p_1302->g_4,&p_1302->g_4,(void*)0},{&p_1302->g_4,(void*)0,&p_1302->g_32,(void*)0,&p_1302->g_4,&p_1302->g_4,(void*)0},{&p_1302->g_4,(void*)0,&p_1302->g_32,(void*)0,&p_1302->g_4,&p_1302->g_4,(void*)0}};
        int i, j, k;
        l_845 &= (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((((((((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u((((VECTOR(int8_t, 4))(0x60L, (-9L), 0x54L, 0x72L)).y , ((((p_1302->g_93.x && ((safe_mod_func_uint64_t_u_u(((65529UL > (!l_625)) , 1UL), (safe_lshift_func_uint16_t_u_u(((((*p_1302->g_537) = l_836) == l_836) || (((safe_unary_minus_func_int64_t_s(p_1302->g_457)) , (((safe_div_func_uint32_t_u_u((l_842 = ((((65535UL == (((((safe_mul_func_uint16_t_u_u(p_39, 0UL)) , 65534UL) == GROUP_DIVERGE(1, 1)) , l_773.w) , 7UL)) , (void*)0) == (void*)0) , l_842)), (**p_1302->g_40))) , GROUP_DIVERGE(1, 1)) || 0x2F7ACDBAL)) > p_1302->g_329.z)), 6)))) <= (-1L))) , p_1302->g_255.s7) > 8L) , l_842)), 7UL)))) == p_1302->g_795.y) < (-4L)) | l_605.s7) != 0x8535BA8BAEFB5F3AL) || p_39) & l_844) || p_39) , l_844), p_39)) && p_1302->g_416.y), 0xAF80L));
        l_851++;
        (*p_1302->g_41) ^= (safe_add_func_int16_t_s_s(((l_624 = ((*p_1302->g_537) = (void*)0)) == l_843[1][1][0]), ((*l_606) = (*l_847))));
        for (l_845 = 0; (l_845 < 8); l_845++)
        { /* block id: 375 */
            if (((VECTOR(int32_t, 2))(1L, 0x2AD1157EL)).odd)
            { /* block id: 376 */
                for (p_39 = 0; (p_39 == (-30)); p_39 = safe_sub_func_uint32_t_u_u(p_39, 2))
                { /* block id: 379 */
                    return p_1302->g_774.s8;
                }
                if ((**p_38))
                    break;
            }
            else
            { /* block id: 383 */
                for (p_1302->g_369 = (-23); (p_1302->g_369 <= 7); ++p_1302->g_369)
                { /* block id: 386 */
                    if ((**p_38))
                        break;
                    return p_1302->g_79.w;
                }
            }
            if ((*p_1302->g_596))
                continue;
        }
    }
    return l_625;
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->l_comm_values p_1302->g_40 p_1302->g_41 p_1302->g_32 p_1302->g_comm_values p_1302->g_14 p_1302->g_556 p_1302->g_51 p_1302->g_416 p_1302->g_73 p_1302->g_596 p_1302->g_61
 * writes: p_1302->g_32 p_1302->g_51 p_1302->g_41 p_1302->g_543 p_1302->g_556 p_1302->g_14 p_1302->g_61
 */
int16_t  func_42(int32_t * p_43, struct S0 * p_1302)
{ /* block id: 8 */
    int32_t l_44 = (-1L);
    uint8_t *l_50 = &p_1302->g_51;
    VECTOR(int16_t, 2) l_52 = (VECTOR(int16_t, 2))(1L, (-4L));
    int32_t l_549 = 0L;
    VECTOR(int32_t, 4) l_550 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x33F9C703L), 0x33F9C703L);
    int32_t l_551 = 0x225CC02EL;
    int32_t l_552 = 0x6A6A7224L;
    uint32_t **l_571 = &p_1302->g_538[5][2];
    int i;
    (**p_1302->g_40) &= (p_1302->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1302->tid, 70))] <= l_44);
    if (func_45(((*l_50) = 0xC9L), ((((VECTOR(int16_t, 8))(l_52.yyyyxxxx)).s7 != (!p_1302->g_comm_values[p_1302->tid])) , GROUP_DIVERGE(2, 1)), func_53(p_1302->g_14, l_50, l_52.y, &p_1302->g_41, p_1302), l_44, p_1302))
    { /* block id: 235 */
        uint64_t *l_541 = (void*)0;
        uint64_t **l_540[9][7] = {{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541},{&l_541,&l_541,&l_541,&l_541,&l_541,&l_541,&l_541}};
        uint64_t ***l_545 = &p_1302->g_543[1][0];
        int32_t l_546 = 0x1117FDFAL;
        int32_t *l_547 = &p_1302->g_61;
        int32_t *l_548[10][3][8] = {{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}},{{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546},{&p_1302->g_61,&l_44,(void*)0,&p_1302->g_4,(void*)0,&p_1302->g_61,&p_1302->g_4,&l_546}}};
        uint32_t l_553 = 4294967289UL;
        int i, j, k;
        (*l_545) = l_540[1][6];
        l_553--;
        p_1302->g_556++;
    }
    else
    { /* block id: 239 */
        int8_t l_568 = (-1L);
        uint32_t **l_572[9] = {&p_1302->g_538[5][2],(void*)0,&p_1302->g_538[5][2],&p_1302->g_538[5][2],(void*)0,&p_1302->g_538[5][2],&p_1302->g_538[5][2],(void*)0,&p_1302->g_538[5][2]};
        uint32_t ***l_573 = &l_572[4];
        uint32_t *l_576 = (void*)0;
        uint32_t *l_577 = (void*)0;
        uint32_t *l_578 = &p_1302->g_14;
        int32_t *l_593 = &l_44;
        uint32_t *l_595 = &p_1302->g_457;
        uint32_t **l_594 = &l_595;
        int i;
        for (p_1302->g_51 = 0; (p_1302->g_51 >= 10); p_1302->g_51++)
        { /* block id: 242 */
            int64_t l_561 = 0x46489C6D26C2A53CL;
            return l_561;
        }
        (*p_1302->g_596) |= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((((*l_594) = (((((*l_593) &= (l_568 || ((safe_mod_func_uint8_t_u_u(((l_571 != ((*l_573) = l_572[1])) || (((-10L) <= ((safe_lshift_func_uint16_t_u_u((((*l_578)++) < 0xD6EBC2C5L), 11)) & (safe_lshift_func_int8_t_s_u((l_568 || (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(1UL, (0x45D5L < 0L), ((VECTOR(uint8_t, 2))(254UL, 0x45L)), ((VECTOR(uint8_t, 2))(0x45L, 0xAFL)), ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((l_568 || l_551) == p_1302->g_416.x) >= (**p_1302->g_40)), 10)), p_1302->g_416.x)), 6)) , l_552), 0x5BL, ((VECTOR(uint8_t, 2))(0x8BL)), ((VECTOR(uint8_t, 4))(8UL)), 0x03L, 8UL)).sb < l_568), p_1302->g_32)), 7))), 7)))) | 0x4BE1DBD29A312987L)), p_1302->g_73[1][0])) || l_568))) || (*l_593)) != 0x9AL) , (void*)0)) != p_43), l_52.x)) & l_552), 2)), l_551));
    }
    return l_552;
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_40 p_1302->g_41
 * writes: p_1302->g_41
 */
int32_t  func_45(uint8_t  p_46, uint8_t  p_47, int32_t ** p_48, uint32_t  p_49, struct S0 * p_1302)
{ /* block id: 232 */
    int16_t l_539 = 1L;
    (*p_48) = (*p_1302->g_40);
    return l_539;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_53(uint32_t  p_54, uint8_t * p_55, int64_t  p_56, int32_t ** p_57, struct S0 * p_1302)
{ /* block id: 11 */
    VECTOR(int32_t, 8) l_63 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x19C81B93L), 0x19C81B93L), 0x19C81B93L, (-2L), 0x19C81B93L);
    VECTOR(int32_t, 16) l_66 = (VECTOR(int32_t, 16))(0x1DE2FC23L, (VECTOR(int32_t, 4))(0x1DE2FC23L, (VECTOR(int32_t, 2))(0x1DE2FC23L, 0x2B93B572L), 0x2B93B572L), 0x2B93B572L, 0x1DE2FC23L, 0x2B93B572L, (VECTOR(int32_t, 2))(0x1DE2FC23L, 0x2B93B572L), (VECTOR(int32_t, 2))(0x1DE2FC23L, 0x2B93B572L), 0x1DE2FC23L, 0x2B93B572L, 0x1DE2FC23L, 0x2B93B572L);
    uint8_t *l_503 = &p_1302->g_142;
    uint64_t l_509 = 0x804CF8857D3DA4CFL;
    uint32_t *l_535 = (void*)0;
    uint32_t **l_534 = &l_535;
    int i;
    for (p_56 = 2; (p_56 < 1); p_56 = safe_sub_func_uint64_t_u_u(p_56, 1))
    { /* block id: 14 */
        int32_t *l_60 = &p_1302->g_61;
        VECTOR(int32_t, 4) l_64 = (VECTOR(int32_t, 4))(0x2EDFD682L, (VECTOR(int32_t, 2))(0x2EDFD682L, 0x0BC5DE30L), 0x0BC5DE30L);
        VECTOR(int32_t, 16) l_65 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        uint64_t l_531 = 0x67B9DDE7EFE565A1L;
        int i;
        (1 + 1);
    }
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_40 p_1302->g_79 p_1302->g_41 p_1302->g_62 p_1302->g_32 p_1302->g_4 p_1302->g_93 p_1302->g_98 p_1302->g_99 p_1302->g_101 p_1302->g_102 p_1302->g_73 p_1302->g_104 p_1302->g_14 p_1302->g_107 p_1302->g_129 p_1302->g_67 p_1302->g_255 p_1302->g_257 p_1302->g_318 p_1302->g_329 p_1302->g_336 p_1302->g_256 p_1302->g_342 p_1302->g_350 p_1302->l_comm_values p_1302->g_369 p_1302->g_384 p_1302->g_comm_values p_1302->g_395 p_1302->g_400 p_1302->g_416 p_1302->g_419 p_1302->g_440 p_1302->g_457 p_1302->g_469
 * writes: p_1302->g_41 p_1302->g_104 p_1302->g_73 p_1302->g_107 p_1302->g_32 p_1302->g_14 p_1302->g_142 p_1302->g_129 p_1302->g_98 p_1302->g_79 p_1302->g_318 p_1302->g_342 p_1302->g_67 p_1302->g_369 p_1302->g_395 p_1302->g_457 p_1302->g_61
 */
int32_t  func_70(uint8_t * p_71, struct S0 * p_1302)
{ /* block id: 20 */
    uint16_t l_76[9][6] = {{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL},{0x9461L,9UL,1UL,0x4A2FL,9UL,0x4A2FL}};
    VECTOR(int64_t, 4) l_84 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0L), 0L);
    int32_t *l_85 = (void*)0;
    uint64_t *l_187[7][7];
    int32_t l_188 = 0x62F2AA7DL;
    uint16_t *l_189 = (void*)0;
    uint16_t *l_190[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t *l_191 = (void*)0;
    int8_t *l_192[2];
    int16_t l_193[5];
    int64_t l_294 = (-1L);
    int32_t l_362 = 0x7AF0409DL;
    int32_t l_364 = 0L;
    int32_t l_365 = 0x39A8EBB0L;
    int32_t l_366 = 0x0BD58EF1L;
    int32_t l_367 = 0x34A09166L;
    int16_t l_373 = (-4L);
    int32_t l_374 = 0x75AF3A90L;
    VECTOR(int64_t, 2) l_385 = (VECTOR(int64_t, 2))((-3L), 7L);
    VECTOR(int8_t, 2) l_432 = (VECTOR(int8_t, 2))(0x6DL, (-10L));
    int16_t l_445 = 0x7A34L;
    uint8_t l_464 = 246UL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_187[i][j] = &p_1302->g_104;
    }
    for (i = 0; i < 2; i++)
        l_192[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_193[i] = 0x4BA7L;
    (*p_1302->g_40) = (void*)0;
    if ((safe_mul_func_int16_t_s_s(l_76[4][1], (safe_add_func_uint32_t_u_u(((p_1302->g_98.x = ((((VECTOR(uint32_t, 8))(p_1302->g_79.zzwzyzxx)).s0 , 4294967286UL) >= (safe_mul_func_uint16_t_u_u((((l_76[4][0] <= ((*p_1302->g_40) != (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_84.xw)).yxxyyyyx)).s5364573544146223)).s7 , l_85))) | ((void*)0 != l_85)) , (p_1302->g_129.y ^= (p_1302->g_62.y , ((l_188 = (func_86((((((p_1302->g_32 && 0L) , &l_85) != &l_85) , (void*)0) == &l_85), p_1302) != p_1302->g_98.y)) ^ p_1302->g_98.x)))), p_1302->g_79.w)))) <= l_193[1]), l_76[4][1])))))
    { /* block id: 81 */
        if ((atomic_inc(&p_1302->l_atomic_input[34]) == 0))
        { /* block id: 83 */
            int64_t l_194 = 0x159998129C7174ADL;
            int16_t l_195 = (-5L);
            int16_t l_238[3][10][8] = {{{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L}},{{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L}},{{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L},{(-1L),1L,0L,1L,1L,0x37C7L,0L,1L}}};
            uint64_t l_239 = 1UL;
            int32_t **l_240[7];
            int32_t l_243 = (-5L);
            int32_t *l_242[9][6][2] = {{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}},{{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243},{&l_243,&l_243}}};
            int32_t **l_241 = &l_242[1][0][0];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_240[i] = (void*)0;
            if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_194 , l_195), 6L, 0x277DF494L, 0x6F0DDE49L)).even)).even)
            { /* block id: 84 */
                uint64_t l_198 = 18446744073709551610UL;
                uint64_t *l_197[2][2][4] = {{{&l_198,&l_198,&l_198,&l_198},{&l_198,&l_198,&l_198,&l_198}},{{&l_198,&l_198,&l_198,&l_198},{&l_198,&l_198,&l_198,&l_198}}};
                uint64_t **l_196 = &l_197[1][1][3];
                uint64_t **l_199 = &l_197[0][1][3];
                int16_t l_213 = (-8L);
                int16_t l_214 = 0x66EEL;
                int i, j, k;
                l_199 = l_196;
                for (l_198 = (-4); (l_198 == 58); l_198 = safe_add_func_uint8_t_u_u(l_198, 4))
                { /* block id: 88 */
                    int32_t *l_202 = (void*)0;
                    int32_t l_204 = (-1L);
                    int32_t *l_203 = &l_204;
                    uint32_t l_205 = 1UL;
                    int64_t l_206 = 1L;
                    int32_t l_207 = 0x60BE34E6L;
                    int32_t *l_208 = &l_204;
                    int32_t *l_209[9] = {&l_204,&l_204,&l_204,&l_204,&l_204,&l_204,&l_204,&l_204,&l_204};
                    uint64_t l_210 = 0xC8FAAC2A5FD6FEA0L;
                    int i;
                    l_203 = l_202;
                    l_209[1] = ((l_207 = (l_206 = l_205)) , l_208);
                    --l_210;
                }
                l_214 = ((GROUP_DIVERGE(1, 1) , l_213) , 0x790603C6L);
            }
            else
            { /* block id: 96 */
                VECTOR(int32_t, 4) l_215 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1120BC22L), 0x1120BC22L);
                int32_t l_216 = 0x7DA3CCD9L;
                uint8_t l_217 = 247UL;
                int i;
                l_216 = ((VECTOR(int32_t, 8))(l_215.zxywzyzz)).s0;
                ++l_217;
            }
            for (l_195 = 0; (l_195 != (-13)); l_195 = safe_sub_func_uint32_t_u_u(l_195, 1))
            { /* block id: 102 */
                VECTOR(int32_t, 16) l_222 = (VECTOR(int32_t, 16))(0x618BF3F6L, (VECTOR(int32_t, 4))(0x618BF3F6L, (VECTOR(int32_t, 2))(0x618BF3F6L, 0x56BB4594L), 0x56BB4594L), 0x56BB4594L, 0x618BF3F6L, 0x56BB4594L, (VECTOR(int32_t, 2))(0x618BF3F6L, 0x56BB4594L), (VECTOR(int32_t, 2))(0x618BF3F6L, 0x56BB4594L), 0x618BF3F6L, 0x56BB4594L, 0x618BF3F6L, 0x56BB4594L);
                VECTOR(int32_t, 8) l_223 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x772C287CL), 0x772C287CL), 0x772C287CL, (-1L), 0x772C287CL);
                VECTOR(int32_t, 2) l_224 = (VECTOR(int32_t, 2))(7L, 0x2C6EEFECL);
                VECTOR(int32_t, 2) l_225 = (VECTOR(int32_t, 2))(0L, 0x422DBCC6L);
                int64_t l_226 = 0x0E8A5636236462B7L;
                int8_t l_227 = 0x75L;
                VECTOR(int32_t, 8) l_228 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L));
                uint16_t l_229 = 65528UL;
                int i;
                l_229 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_222.sa1ee92d2d4cae694)).sbd)).yxyyyxxxxxyyxxxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_223.s4234)))).xzxxyzyx, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_224.xyyx)), ((VECTOR(int32_t, 8))(l_225.yyxyxyxx)).lo))).zzxywyxz))).hi)).zxwyxyyyzwzxxzyz))).s5, (l_227 = l_226), ((VECTOR(int32_t, 4))(l_228.s6314)), 5L, 0L)).s1;
                for (l_223.s1 = 8; (l_223.s1 >= 17); l_223.s1 = safe_add_func_int32_t_s_s(l_223.s1, 3))
                { /* block id: 107 */
                    int32_t l_232 = (-10L);
                    uint32_t l_233[10] = {0x092C0A3AL,0x97CB4783L,0x092C0A3AL,0x092C0A3AL,0x97CB4783L,0x092C0A3AL,0x092C0A3AL,0x97CB4783L,0x092C0A3AL,0x092C0A3AL};
                    uint8_t l_234 = 0UL;
                    uint64_t l_235 = 0x25A5C96155687981L;
                    int i;
                    l_225.x = l_232;
                    l_234 = l_233[7];
                    ++l_235;
                }
            }
            l_241 = ((l_239 |= l_238[1][2][6]) , l_240[0]);
            unsigned int result = 0;
            result += l_194;
            result += l_195;
            int l_238_i0, l_238_i1, l_238_i2;
            for (l_238_i0 = 0; l_238_i0 < 3; l_238_i0++) {
                for (l_238_i1 = 0; l_238_i1 < 10; l_238_i1++) {
                    for (l_238_i2 = 0; l_238_i2 < 8; l_238_i2++) {
                        result += l_238[l_238_i0][l_238_i1][l_238_i2];
                    }
                }
            }
            result += l_239;
            result += l_243;
            atomic_add(&p_1302->l_special_values[34], result);
        }
        else
        { /* block id: 115 */
            (1 + 1);
        }
    }
    else
    { /* block id: 118 */
        int64_t l_275[3];
        int32_t l_295 = 0x18BA1A4CL;
        int32_t l_297[5];
        int32_t **l_300[8][1][9] = {{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}},{{&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41,&l_85,&p_1302->g_41,&p_1302->g_41,(void*)0,&p_1302->g_41}}};
        VECTOR(int32_t, 16) l_309 = (VECTOR(int32_t, 16))(0x09F48C37L, (VECTOR(int32_t, 4))(0x09F48C37L, (VECTOR(int32_t, 2))(0x09F48C37L, 0x7738C1A0L), 0x7738C1A0L), 0x7738C1A0L, 0x09F48C37L, 0x7738C1A0L, (VECTOR(int32_t, 2))(0x09F48C37L, 0x7738C1A0L), (VECTOR(int32_t, 2))(0x09F48C37L, 0x7738C1A0L), 0x09F48C37L, 0x7738C1A0L, 0x09F48C37L, 0x7738C1A0L);
        uint64_t **l_311[8] = {&l_187[2][0],&l_187[1][5],&l_187[2][0],&l_187[2][0],&l_187[1][5],&l_187[2][0],&l_187[2][0],&l_187[1][5]};
        uint64_t ***l_310 = &l_311[7];
        VECTOR(int16_t, 16) l_325 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5F84L), 0x5F84L), 0x5F84L, 1L, 0x5F84L, (VECTOR(int16_t, 2))(1L, 0x5F84L), (VECTOR(int16_t, 2))(1L, 0x5F84L), 1L, 0x5F84L, 1L, 0x5F84L);
        VECTOR(int16_t, 8) l_326 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L);
        uint32_t l_351 = 0x49E221B1L;
        VECTOR(int32_t, 16) l_383 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x35CA1FA1L), 0x35CA1FA1L), 0x35CA1FA1L, 9L, 0x35CA1FA1L, (VECTOR(int32_t, 2))(9L, 0x35CA1FA1L), (VECTOR(int32_t, 2))(9L, 0x35CA1FA1L), 9L, 0x35CA1FA1L, 9L, 0x35CA1FA1L);
        VECTOR(int8_t, 8) l_433 = (VECTOR(int8_t, 8))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 2L), 2L), 2L, 0x2EL, 2L);
        uint8_t l_448 = 1UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_275[i] = 7L;
        for (i = 0; i < 5; i++)
            l_297[i] = (-1L);
        if (((p_1302->g_67.sa <= 1UL) <= (p_1302->g_73[6][1] == p_1302->g_93.x)))
        { /* block id: 119 */
            VECTOR(uint32_t, 4) l_251 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x2F2D2754L), 0x2F2D2754L);
            VECTOR(uint32_t, 4) l_252 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL);
            VECTOR(uint16_t, 2) l_253 = (VECTOR(uint16_t, 2))(1UL, 0xE798L);
            VECTOR(uint32_t, 4) l_258 = (VECTOR(uint32_t, 4))(0x9FDFF167L, (VECTOR(uint32_t, 2))(0x9FDFF167L, 0x591AD4FCL), 0x591AD4FCL);
            int32_t *l_261 = (void*)0;
            uint64_t **l_293 = &l_187[3][4];
            int32_t l_304 = 0x75740498L;
            uint32_t *l_341 = &p_1302->g_342;
            VECTOR(int64_t, 4) l_349 = (VECTOR(int64_t, 4))(0x046515910C99AEF3L, (VECTOR(int64_t, 2))(0x046515910C99AEF3L, 0L), 0L);
            int32_t l_372[8][10][3] = {{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}},{{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L},{0x6644F59EL,(-1L),2L}}};
            uint8_t *l_412 = &p_1302->g_73[6][1];
            int32_t l_420 = 0x4950B999L;
            uint16_t l_421 = 1UL;
            int i, j, k;
            for (p_1302->g_14 = 0; (p_1302->g_14 != 27); p_1302->g_14 = safe_add_func_uint64_t_u_u(p_1302->g_14, 1))
            { /* block id: 122 */
                uint16_t l_248 = 65535UL;
                for (l_188 = (-22); (l_188 <= (-28)); l_188--)
                { /* block id: 125 */
                    return l_248;
                }
                for (l_248 = 23; (l_248 != 40); l_248 = safe_add_func_uint16_t_u_u(l_248, 1))
                { /* block id: 130 */
                    VECTOR(uint16_t, 4) l_254 = (VECTOR(uint16_t, 4))(0x3690L, (VECTOR(uint16_t, 2))(0x3690L, 1UL), 1UL);
                    int32_t **l_301[2];
                    VECTOR(uint64_t, 2) l_305 = (VECTOR(uint64_t, 2))(0x53F303A97FB2388BL, 0x468612AF7623DAB1L);
                    uint64_t ***l_308 = &l_293;
                    VECTOR(uint64_t, 2) l_312 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
                    int64_t *l_317 = &p_1302->g_318;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_301[i] = (void*)0;
                    if (((((VECTOR(uint32_t, 16))(4294967295UL, 4294967295UL, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_251.ww)), 0UL, 4294967292UL)))).hi, ((VECTOR(uint32_t, 8))(l_252.wzyywzyy)).s73))), 7UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(l_253.xxyxxxxxxyyxyyyx)).s4e1c, ((VECTOR(uint16_t, 8))(l_254.zzwxyzwy)).hi))))).odd)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1302->g_255.s5452)).xzwywxzz)).s01))))).yxxx)), 1UL, (p_1302->g_256 == (void*)0), 0x79EFBFE8L, ((VECTOR(uint32_t, 2))(l_258.yy)), 0UL, 1UL)).s8 , ((GROUP_DIVERGE(0, 1) != (((VECTOR(int32_t, 2))(0x61E5D73EL, (-2L))).lo , (safe_mul_func_int8_t_s_s((((((((p_1302->g_255.s5 < FAKE_DIVERGE(p_1302->global_2_offset, get_global_id(2), 10)) , l_261) == (void*)0) > (safe_unary_minus_func_int64_t_s((safe_sub_func_uint16_t_u_u((&p_1302->g_104 == ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(8UL, (0x34E0CEF930857371L | (((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(0x5614374FFD2AC4DEL, p_1302->g_73[1][1])), FAKE_DIVERGE(p_1302->global_1_offset, get_global_id(1), 10))), 0x4BCB6380L)) | (-2L)) || p_1302->g_79.z)))), l_251.z)) , &p_1302->g_104)), 0xBB0EL))))) || l_254.x) , l_275[2]) < 5L), p_1302->g_104)))) < 5L)) >= p_1302->g_93.x))
                    { /* block id: 131 */
                        VECTOR(int16_t, 16) l_287 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        uint8_t *l_288 = &p_1302->g_142;
                        int32_t *l_296[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_296[i] = &l_188;
                        l_297[2] = (l_295 &= ((!(((p_1302->g_129.y , FAKE_DIVERGE(p_1302->global_1_offset, get_global_id(1), 10)) > ((p_1302->g_79.x & l_254.x) , (safe_unary_minus_func_int32_t_s(0x048C921DL)))) > (safe_sub_func_uint32_t_u_u((((safe_div_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u((*p_71), ((*p_71) ^ (p_1302->g_107 && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_287.sed0f16c2)).s3067374255653631)))).s5)))) < ((((*l_288) = (*p_71)) , (((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_254.z, l_248)), p_1302->g_73[2][1])) != 0x372CL) > GROUP_DIVERGE(0, 1))) ^ p_1302->g_93.x)) | l_248) , FAKE_DIVERGE(p_1302->global_1_offset, get_global_id(1), 10)), p_1302->g_79.w)), l_287.s1)) || l_248) < l_254.z), l_287.se)) , (void*)0) == l_293), l_294)))) > l_254.w));
                        l_304 = (safe_mul_func_int16_t_s_s((l_300[4][0][6] == l_301[0]), (safe_mod_func_uint32_t_u_u(l_252.x, (p_1302->g_79.w = 0xE783C7C3L)))));
                        (*p_1302->g_40) = l_296[3];
                    }
                    else
                    { /* block id: 138 */
                        (*p_1302->g_40) = &p_1302->g_32;
                        (*p_1302->g_40) = (*p_1302->g_40);
                    }
                    (*p_1302->g_41) = (((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(l_305.xyyyxyyx)), (uint64_t)(GROUP_DIVERGE(0, 1) < (((*l_308) = &l_187[3][4]) != ((((VECTOR(int32_t, 16))(l_309.sc521786769aabb43)).sb != (&p_1302->g_256 == ((*p_1302->g_257) , l_310))) , (*l_310))))))).s1161757176412633)).s3e9f)).xzwwwxyyzzyyxyxy, ((VECTOR(uint64_t, 16))(l_312.xyyxxyyyxyxyxyyy)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x5B8496F064E6E990L, 18446744073709551610UL)).xxxxxyyxyxxxxxyy)).lo)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x907A0B9122686362L, 1UL)), 1UL, 0x2F68B99E2F6929DEL)), (safe_rshift_func_uint8_t_u_u(((p_1302->g_93.y , (p_1302->g_129.y > (safe_div_func_int16_t_s_s((((*l_317) ^= (((*p_71) &= (((void*)0 != (*p_1302->g_40)) , 0x99L)) || p_1302->g_255.s6)) , 0x1E70L), 0x0D12L)))) >= 4294967290UL), p_1302->g_67.s7)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551608UL))))).s3 , (*p_1302->g_41));
                }
                return l_248;
            }
            if ((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((l_300[6][0][0] != ((((void*)0 == (*l_310)) > (((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(l_325.sb7)).yxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((VECTOR(int16_t, 4))(l_326.s1715)).w || (--p_1302->g_129.y)), ((VECTOR(int16_t, 2))(p_1302->g_329.wy)), (-1L))).yyywwzxx)), ((safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((VECTOR(uint64_t, 2))(p_1302->g_336.s70)).odd , (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(0L, (**p_1302->g_256))) , (p_1302->g_104 && (((*l_341)++) , ((*p_71) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(l_349.wxzx)).lo, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(p_1302->g_350.sa0bc4246)).s25, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x3F8C166A06F39045L, 0x042E83CD52AF359DL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x3A9000697EB821A7L, 8L, l_252.z, ((VECTOR(int64_t, 4))(1L, 1L, 1L, 0L)), 1L)).hi)), 0L, 3L, ((void*)0 != &l_85), ((VECTOR(int64_t, 4))(0x178C1645BF8BA87FL)), 0x57EB02DB59A7F48AL, 0x0B77458CF2B4B9B1L, 0x11B029D42D1D6E86L)).even)).s07, (int64_t)8L, (int64_t)p_1302->g_102.w))), ((VECTOR(int64_t, 2))(0L))))), ((VECTOR(int64_t, 2))(0x019C03D59673960CL))))).hi && l_251.w), p_1302->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1302->tid, 70))])), 13)))))), 13)) < 0x59C976747392D7B4L) && l_349.z)), 3)), p_1302->g_101.s4)) <= 0x0A074040F5C5E2A3L) , 0x60B5L), p_1302->g_318)) ^ 0x2DL), p_1302->g_342, 0x07D1L, ((VECTOR(int16_t, 2))((-2L))), ((VECTOR(int16_t, 2))((-1L))), 0L)).s74fb, ((VECTOR(int16_t, 4))(0x13F8L))))).even)).xxyy))).zywwyxyzxzxxyyww, ((VECTOR(int16_t, 16))(0x78B9L))))).s3c, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0L))))).even | 65528UL)) , (void*)0)), l_76[4][1])), l_351)))))
            { /* block id: 152 */
                int32_t *l_357 = &l_297[2];
                int32_t l_361 = 0x56225702L;
                int32_t l_363 = (-4L);
                int32_t l_368[9][9][3] = {{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}},{{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L},{0x6F853BB0L,0x48FED2C1L,6L}}};
                uint16_t l_375 = 0UL;
                int i, j, k;
                for (p_1302->g_104 = (-3); (p_1302->g_104 <= 43); p_1302->g_104++)
                { /* block id: 155 */
                    uint16_t l_358[6][6] = {{65535UL,65535UL,0xFE93L,1UL,1UL,1UL},{65535UL,65535UL,0xFE93L,1UL,1UL,1UL},{65535UL,65535UL,0xFE93L,1UL,1UL,1UL},{65535UL,65535UL,0xFE93L,1UL,1UL,1UL},{65535UL,65535UL,0xFE93L,1UL,1UL,1UL},{65535UL,65535UL,0xFE93L,1UL,1UL,1UL}};
                    int i, j;
                    for (p_1302->g_32 = 19; (p_1302->g_32 <= (-22)); --p_1302->g_32)
                    { /* block id: 158 */
                        uint16_t l_356 = 65535UL;
                        if (l_356)
                            break;
                        p_1302->g_67.s1 = p_1302->g_101.s2;
                        (*p_1302->g_40) = l_357;
                    }
                    l_358[0][3]++;
                }
                p_1302->g_369--;
                --l_375;
            }
            else
            { /* block id: 167 */
                VECTOR(uint32_t, 4) l_390 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xB1C7FE4CL), 0xB1C7FE4CL);
                int64_t *l_393 = &p_1302->g_318;
                int16_t *l_394 = (void*)0;
                int32_t l_396 = 1L;
                int i;
                l_396 ^= (safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (safe_add_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 4))(l_383.s5d6a)).yxwyxwwyxwwxzwxz, ((VECTOR(uint32_t, 16))(p_1302->g_384.s7321521044644627))))).s9)), ((p_1302->g_67.s0 , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))(l_385.xyxyyyxx)).odd, (int64_t)p_1302->g_107, (int64_t)(safe_sub_func_uint16_t_u_u((p_1302->g_102.x && (7UL != 0x42920C2919148886L)), ((VECTOR(uint16_t, 2))(65526UL, 0x1FCDL)).hi))))))).w) ^ (safe_lshift_func_uint8_t_u_u(((p_1302->g_395 &= (l_390.z < (((l_390.x < ((safe_rshift_func_int16_t_s_u((!(l_393 != l_393)), 6)) ^ p_1302->g_comm_values[p_1302->tid])) | l_390.w) < FAKE_DIVERGE(p_1302->global_1_offset, get_global_id(1), 10)))) ^ p_1302->g_73[2][1]), 5)))))));
            }
            if (p_1302->g_104)
            { /* block id: 171 */
                int16_t l_397 = 0x569EL;
                return l_397;
            }
            else
            { /* block id: 173 */
                uint64_t l_403 = 1UL;
                uint8_t **l_408 = (void*)0;
                uint8_t **l_409 = (void*)0;
                uint8_t *l_411 = &p_1302->g_142;
                uint8_t **l_410 = &l_411;
                int16_t *l_413 = &l_373;
                l_421 ^= ((((VECTOR(int8_t, 16))(p_1302->g_400.xxyyyyyxxxxyxxyy)).s5 == p_1302->g_98.y) == ((safe_div_func_int16_t_s_s((l_403 , ((*l_413) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_1302->g_79.y, (((*l_410) = p_71) != l_412))), 2)))), ((safe_mul_func_uint16_t_u_u((l_374 = (p_1302->g_101.s0 && ((VECTOR(int16_t, 2))((-7L), 0L)).odd)), (((((p_1302->g_67.s5 == (!((VECTOR(uint16_t, 16))(0x83FCL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(65526UL, 0UL, 0x3E97L, 3UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_1302->g_416.yxyxxxyyxxxxxxxy)).sa5)), 0x9901L, 1UL)))), ((safe_lshift_func_int16_t_s_s(p_1302->g_419, 14)) == (l_420 <= GROUP_DIVERGE(2, 1))), ((VECTOR(uint16_t, 2))(0xB156L)), p_1302->g_101.s4, 1UL, 65535UL, 0xF89EL)).s9)) | 252UL) < p_1302->g_416.y) || (-1L)) >= p_1302->g_369))) | 1UL))) > p_1302->g_67.sd));
                (*p_1302->g_40) = &l_420;
                return l_403;
            }
        }
        else
        { /* block id: 181 */
            int32_t l_424[5][6][7] = {{{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)}},{{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)}},{{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)}},{{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)}},{{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)},{0x341B49FBL,(-6L),0x0929ECE9L,9L,0L,(-9L),(-10L)}}};
            VECTOR(int8_t, 16) l_434 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x28L), 0x28L), 0x28L, 1L, 0x28L, (VECTOR(int8_t, 2))(1L, 0x28L), (VECTOR(int8_t, 2))(1L, 0x28L), 1L, 0x28L, 1L, 0x28L);
            int32_t l_441[2][4] = {{0x1690FC24L,0x00DB2C4CL,0x1690FC24L,0x1690FC24L},{0x1690FC24L,0x00DB2C4CL,0x1690FC24L,0x1690FC24L}};
            int32_t l_446 = 1L;
            int32_t l_447 = 0L;
            int i, j, k;
            for (l_362 = 29; (l_362 != 0); l_362 = safe_sub_func_uint64_t_u_u(l_362, 9))
            { /* block id: 184 */
                int64_t *l_425 = &l_275[0];
                int16_t *l_426 = (void*)0;
                int16_t *l_427 = (void*)0;
                int16_t *l_428 = &l_193[3];
                int32_t l_431 = 0x2A04AFDCL;
                VECTOR(int32_t, 2) l_438 = (VECTOR(int32_t, 2))(1L, (-1L));
                VECTOR(int16_t, 4) l_439 = (VECTOR(int16_t, 4))(0x2DB1L, (VECTOR(int16_t, 2))(0x2DB1L, (-1L)), (-1L));
                int i;
                if (l_362)
                    break;
                l_364 = (((l_424[3][5][3] , ((*l_425) = 0x4CB0AC305EB6B4B1L)) <= ((GROUP_DIVERGE(0, 1) ^ ((*l_428) = (~(-1L)))) > ((VECTOR(int8_t, 16))(0x54L, (-10L), ((VECTOR(int8_t, 8))(0x51L, ((VECTOR(int8_t, 2))((-9L), 0x00L)), (-2L), 1L, 1L, 0x45L, 0x5FL)), (safe_lshift_func_int16_t_s_s(l_431, 5)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_432.xyyyyxxxxyxxyxyx)).s8404, ((VECTOR(int8_t, 8))(l_433.s15416257)).lo))), ((VECTOR(int8_t, 4))(l_434.s1410)))).s41)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((l_441[0][3] = (((safe_unary_minus_func_int32_t_s(l_431)) & p_1302->g_384.s6) , (l_431 || ((((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_438.yxyxxxyyyyxyxyxy)).s2c)).yxyx)).wwwwxxyywwyxyywz, ((VECTOR(int32_t, 8))(0x4C6ECB68L, 0x5F656AF7L, 1L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_439.wzxyxzyzyxwzwwwy)).s2dd1, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(p_1302->g_440.s3574263652001372)), (uint16_t)p_1302->g_342, (uint16_t)65535UL))).s8262)).even, ((VECTOR(uint16_t, 2))(65535UL))))).xyyy))))))), 0x5017DA7AL)).s0514620325564711))).even, ((VECTOR(int32_t, 8))(0x0984E935L))))), ((VECTOR(uint32_t, 8))(4294967295UL))))).s5304550313064701, ((VECTOR(int64_t, 16))(7L))))).s7b4c))).y | p_1302->g_255.s3) > (-1L))))), ((VECTOR(int8_t, 2))(0x7AL)), 0x4FL, ((VECTOR(int8_t, 4))(0x11L)))).s3052051646605347)).sa5)), 1L)).s3)) || GROUP_DIVERGE(1, 1));
            }
            p_1302->g_67.sb = l_193[0];
            for (p_1302->g_14 = (-14); (p_1302->g_14 != 53); p_1302->g_14++)
            { /* block id: 194 */
                int8_t l_444 = (-2L);
                p_1302->g_67.s5 ^= l_444;
                p_1302->g_67.s2 = 0x12F24F9BL;
            }
            --l_448;
        }
    }
    for (l_364 = (-10); (l_364 != 12); ++l_364)
    { /* block id: 203 */
        uint32_t l_453 = 0UL;
        uint32_t *l_456 = &p_1302->g_457;
        l_362 &= 0L;
        (*p_1302->g_469) = (l_453 != (safe_mod_func_int64_t_s_s(((++(*l_456)) , 0x161B57C31FC31C30L), (l_366 &= (safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_453, ((((l_187[4][4] == &p_1302->g_318) , ((l_464 , l_456) != l_456)) != (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(0xF786L, 5L)), l_453))) && l_453))), GROUP_DIVERGE(2, 1)))))));
    }
    return l_432.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1302->g_4 p_1302->g_93 p_1302->g_98 p_1302->g_99 p_1302->g_101 p_1302->g_102 p_1302->g_73 p_1302->g_32 p_1302->g_104 p_1302->g_79 p_1302->g_40 p_1302->g_14 p_1302->g_41 p_1302->g_107
 * writes: p_1302->g_104 p_1302->g_73 p_1302->g_107 p_1302->g_32 p_1302->g_41 p_1302->g_14 p_1302->g_142
 */
uint32_t  func_86(uint16_t  p_87, struct S0 * p_1302)
{ /* block id: 22 */
    VECTOR(int64_t, 2) l_92 = (VECTOR(int64_t, 2))(4L, 0x0F127D3B87503963L);
    VECTOR(int64_t, 2) l_94 = (VECTOR(int64_t, 2))(0x400F4CAC200E08B7L, 0x3560E5BE992D143BL);
    VECTOR(int32_t, 4) l_95 = (VECTOR(int32_t, 4))(0x216214FBL, (VECTOR(int32_t, 2))(0x216214FBL, 0x3D0AF170L), 0x3D0AF170L);
    VECTOR(int8_t, 4) l_100 = (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, (-6L)), (-6L));
    uint64_t *l_103 = &p_1302->g_104;
    uint8_t *l_105 = &p_1302->g_73[3][1];
    uint16_t *l_106 = &p_1302->g_107;
    int32_t l_108[9][5] = {{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L),0L}};
    VECTOR(uint64_t, 2) l_125 = (VECTOR(uint64_t, 2))(2UL, 0xAA4C988BF1FB4DCCL);
    int32_t l_140 = 0x785D4ADBL;
    int32_t l_145 = 0x025993BAL;
    int32_t *l_146 = &p_1302->g_4;
    int i, j;
    l_108[6][3] &= ((safe_mod_func_int8_t_s_s((p_87 && p_87), (GROUP_DIVERGE(2, 1) && ((*l_106) = (safe_add_func_uint8_t_u_u(((*l_105) |= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1302->g_4, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x7DL, 1UL, 0x74L, ((VECTOR(uint8_t, 8))((((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0UL, 8UL, 1UL, 0xE77D733C455447BFL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_92.yyyxyxxxxyxxyyyy)))).se78f, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(p_1302->g_93.yy)).xxyx, ((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 2))(l_94.yy)), ((VECTOR(int64_t, 2))(0x2A8DE78A8B9AC942L, 0x2C3BF42E135D2512L)), 0x5B858EE3BABBD54EL, (-5L), (-10L))).lo, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(l_95.wwzwwyyw)).hi, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL)).yyxxyyxy)).s6523500645176515)).s0 != ((*l_103) = (safe_div_func_uint64_t_u_u((0x31L > ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(p_1302->g_98.yx)), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(0x71L, 4L, ((VECTOR(int8_t, 4))(p_1302->g_99.xyxx)), 0L, (-2L))).s11, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_100.wzzyxywzzyxxyyyz)).s9d30)).wywxyxzxzzzxxxzy)).s2d))), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1302->g_101.s7763314204401734)))).s7b)).xxyy, ((VECTOR(int8_t, 8))(p_1302->g_102.ywyxzwxy)).lo))).hi))).xxxyyyxx)).s5623664571107030, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x27L, (-1L))), 0x25L, 0L)).zxxzzyxxyxzzzzwx))))).sd), 0x21999CB80B1A2B57L)))) , p_87), 0xBA41957EL, 1UL, 4294967287UL)).yxyxxzywywyzyzxw, ((VECTOR(uint32_t, 16))(0x48BFE3BBL))))).s384e)))))), ((VECTOR(int64_t, 4))(1L)))))))).zzzzxzyw, ((VECTOR(int64_t, 8))(0L)))))))).s70)))))), 0x726A7E7D718789B1L, 0x1A9704766C6174CEL)).s2622375615267717)).s00, ((VECTOR(uint64_t, 2))(0x5B716F66F7480E96L)), ((VECTOR(uint64_t, 2))(0UL))))).odd || l_100.y), 6UL, 0xDDL, 255UL, ((VECTOR(uint8_t, 2))(0x6FL)), 255UL, 0x2DL)).s1, 0x40L, 0x2FL, 0UL, 0x46L)))).odd)), ((VECTOR(uint8_t, 2))(0x35L)), 248UL)).s7254255734530206)).s9), 0x50L)))))) == l_95.w);
    for (p_1302->g_32 = 8; (p_1302->g_32 < (-11)); p_1302->g_32 = safe_sub_func_uint16_t_u_u(p_1302->g_32, 1))
    { /* block id: 29 */
        VECTOR(uint16_t, 16) l_128 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint16_t, 2))(8UL, 1UL), (VECTOR(uint16_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL);
        uint8_t *l_141 = &p_1302->g_142;
        uint8_t l_143 = 0x4EL;
        int64_t l_144 = (-1L);
        int32_t l_162[2];
        uint64_t *l_163 = &p_1302->g_104;
        int32_t l_171 = 0x52C106F4L;
        int32_t *l_177 = &l_171;
        int32_t *l_178 = &l_108[5][2];
        int32_t *l_179 = (void*)0;
        int32_t *l_180 = &l_108[6][3];
        int32_t *l_181 = (void*)0;
        uint8_t l_182 = 0xD1L;
        int i;
        for (i = 0; i < 2; i++)
            l_162[i] = 0x2FA5ED00L;
        l_145 |= (safe_rshift_func_int16_t_s_u(((((((*l_106) = FAKE_DIVERGE(p_1302->local_0_offset, get_local_id(0), 10)) , (safe_rshift_func_int16_t_s_u(p_87, p_1302->g_104))) < ((((safe_add_func_uint8_t_u_u(((0x4D7CL && (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_125.yyxyyyxx)))).s75)))).yyyxxyyx)).s1, (safe_rshift_func_int16_t_s_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_128.s8e8f369350c07b2b)))).s6a97, ((VECTOR(uint16_t, 16))(p_1302->g_129.xyyxyyyyxxxyyyxx)).s761a, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(0x0D3BL, (safe_sub_func_uint8_t_u_u(((p_87 , (p_1302->g_79.y , (safe_lshift_func_int16_t_s_u(((((l_108[6][3] = (l_100.y != p_87)) != ((safe_mul_func_uint8_t_u_u(((*l_141) = ((l_140 = (--(*l_105))) < (!(~GROUP_DIVERGE(0, 1))))), p_87)) < 0x03A4A2723438A7DDL)) > 0x5011C820L) & p_87), 8)))) | 0xE4L), 0x6BL)), ((VECTOR(uint16_t, 4))(1UL)), 0UL, ((VECTOR(uint16_t, 8))(0x8EA3L)), 7UL)).s356f)))))))), ((VECTOR(uint16_t, 4))(4UL))))).lo)).yxxyyxyy, ((VECTOR(uint32_t, 8))(0UL))))))).hi)).y >= GROUP_DIVERGE(1, 1)), 14)))) == 5UL) != p_1302->g_79.y) & l_94.x), l_92.y)), 12))) >= GROUP_DIVERGE(1, 1)), p_1302->g_93.x)) | 0x6AL) <= l_143) >= l_144)) != p_87) == l_144), 12));
        (*p_1302->g_40) = l_146;
        for (p_1302->g_14 = 0; (p_1302->g_14 >= 16); p_1302->g_14 = safe_add_func_int32_t_s_s(p_1302->g_14, 1))
        { /* block id: 39 */
            int32_t *l_166[5];
            int i;
            for (i = 0; i < 5; i++)
                l_166[i] = &p_1302->g_32;
            for (p_1302->g_142 = 0; (p_1302->g_142 < 31); ++p_1302->g_142)
            { /* block id: 42 */
                int32_t *l_151 = &l_108[6][3];
                (*l_151) = (*l_146);
                (*p_1302->g_40) = &l_108[6][3];
                if ((atomic_inc(&p_1302->g_atomic_input[36 * get_linear_group_id() + 33]) == 2))
                { /* block id: 46 */
                    int32_t l_152 = 0x677B63B4L;
                    for (l_152 = 0; (l_152 > 14); ++l_152)
                    { /* block id: 49 */
                        uint64_t l_157 = 0x896E0AB15693BE22L;
                        uint64_t *l_156 = &l_157;
                        uint64_t **l_155 = &l_156;
                        uint64_t **l_158 = (void*)0;
                        l_158 = l_155;
                    }
                    unsigned int result = 0;
                    result += l_152;
                    atomic_add(&p_1302->g_special_values[36 * get_linear_group_id() + 33], result);
                }
                else
                { /* block id: 52 */
                    (1 + 1);
                }
            }
            for (l_140 = 28; (l_140 == 6); l_140--)
            { /* block id: 58 */
                VECTOR(uint32_t, 16) l_161 = (VECTOR(uint32_t, 16))(0x44F50E07L, (VECTOR(uint32_t, 4))(0x44F50E07L, (VECTOR(uint32_t, 2))(0x44F50E07L, 0xAC20AD17L), 0xAC20AD17L), 0xAC20AD17L, 0x44F50E07L, 0xAC20AD17L, (VECTOR(uint32_t, 2))(0x44F50E07L, 0xAC20AD17L), (VECTOR(uint32_t, 2))(0x44F50E07L, 0xAC20AD17L), 0x44F50E07L, 0xAC20AD17L, 0x44F50E07L, 0xAC20AD17L);
                int i;
                l_171 = (((l_162[1] = ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_161.sbf)))).hi) < (+((l_163 != (void*)0) > l_144))) != ((+((safe_mul_func_int8_t_s_s((((((void*)0 != l_166[1]) < (safe_add_func_int32_t_s_s(0x6616AD06L, ((safe_lshift_func_int16_t_s_s((0x22L < p_87), ((((l_128.sc | p_87) & (*l_146)) & p_1302->g_73[5][0]) == p_87))) | p_87)))) > 1L) , (-10L)), 255UL)) || 247UL)) , p_1302->g_98.y));
            }
            if (p_87)
                continue;
            for (l_144 = (-2); (l_144 < 25); l_144++)
            { /* block id: 65 */
                uint16_t l_174 = 0xF1F4L;
                l_145 = (*p_1302->g_41);
                l_174++;
            }
        }
        l_182--;
    }
    for (p_1302->g_107 = 16; (p_1302->g_107 >= 6); --p_1302->g_107)
    { /* block id: 74 */
        return p_1302->g_73[3][1];
    }
    return p_1302->g_93.x;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[70];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 70; i++)
            l_comm_values[i] = 1;
    struct S0 c_1303;
    struct S0* p_1302 = &c_1303;
    struct S0 c_1304 = {
        0x6DF37D45L, // p_1302->g_4
        0UL, // p_1302->g_14
        0x0EF8A6EBL, // p_1302->g_32
        {&p_1302->g_4,&p_1302->g_32,&p_1302->g_4,&p_1302->g_4,&p_1302->g_32,&p_1302->g_4,&p_1302->g_4,&p_1302->g_32}, // p_1302->g_31
        &p_1302->g_32, // p_1302->g_33
        &p_1302->g_32, // p_1302->g_41
        &p_1302->g_41, // p_1302->g_40
        0x04L, // p_1302->g_51
        0L, // p_1302->g_61
        (VECTOR(int32_t, 2))(1L, 0x4E376A95L), // p_1302->g_62
        (VECTOR(int32_t, 16))(0x385FAE11L, (VECTOR(int32_t, 4))(0x385FAE11L, (VECTOR(int32_t, 2))(0x385FAE11L, (-9L)), (-9L)), (-9L), 0x385FAE11L, (-9L), (VECTOR(int32_t, 2))(0x385FAE11L, (-9L)), (VECTOR(int32_t, 2))(0x385FAE11L, (-9L)), 0x385FAE11L, (-9L), 0x385FAE11L, (-9L)), // p_1302->g_67
        {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}, // p_1302->g_73
        (VECTOR(uint32_t, 4))(0x9CF818A8L, (VECTOR(uint32_t, 2))(0x9CF818A8L, 7UL), 7UL), // p_1302->g_79
        (VECTOR(int64_t, 2))(0x2DD28D514EF7FEE6L, 9L), // p_1302->g_93
        (VECTOR(int8_t, 2))((-1L), 5L), // p_1302->g_98
        (VECTOR(int8_t, 2))(0x4AL, (-1L)), // p_1302->g_99
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L)), // p_1302->g_101
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 8L), 8L), // p_1302->g_102
        0x1341C8C05660F8D1L, // p_1302->g_104
        0x6814L, // p_1302->g_107
        (VECTOR(uint16_t, 2))(65532UL, 7UL), // p_1302->g_129
        0UL, // p_1302->g_142
        (VECTOR(uint32_t, 8))(0x101816B8L, (VECTOR(uint32_t, 4))(0x101816B8L, (VECTOR(uint32_t, 2))(0x101816B8L, 4294967294UL), 4294967294UL), 4294967294UL, 0x101816B8L, 4294967294UL), // p_1302->g_255
        &p_1302->g_104, // p_1302->g_257
        &p_1302->g_257, // p_1302->g_256
        0x3D1B4FF7CD0A77BDL, // p_1302->g_318
        (VECTOR(int16_t, 4))(0x5D0AL, (VECTOR(int16_t, 2))(0x5D0AL, 0x09C2L), 0x09C2L), // p_1302->g_329
        (VECTOR(uint64_t, 16))(0xA312071DDF2FB80EL, (VECTOR(uint64_t, 4))(0xA312071DDF2FB80EL, (VECTOR(uint64_t, 2))(0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL), 0x5BB3313D0A2CF00AL), 0x5BB3313D0A2CF00AL, 0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL, (VECTOR(uint64_t, 2))(0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL), (VECTOR(uint64_t, 2))(0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL), 0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL, 0xA312071DDF2FB80EL, 0x5BB3313D0A2CF00AL), // p_1302->g_336
        0UL, // p_1302->g_342
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x303202B1D1F3E0EEL), 0x303202B1D1F3E0EEL), 0x303202B1D1F3E0EEL, 1L, 0x303202B1D1F3E0EEL, (VECTOR(int64_t, 2))(1L, 0x303202B1D1F3E0EEL), (VECTOR(int64_t, 2))(1L, 0x303202B1D1F3E0EEL), 1L, 0x303202B1D1F3E0EEL, 1L, 0x303202B1D1F3E0EEL), // p_1302->g_350
        248UL, // p_1302->g_369
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 8UL), 8UL), 8UL, 4294967288UL, 8UL), // p_1302->g_384
        0xF50AL, // p_1302->g_395
        (VECTOR(int8_t, 2))(0x09L, 0x3AL), // p_1302->g_400
        (VECTOR(uint16_t, 2))(0x3B1CL, 65535UL), // p_1302->g_416
        0xAC3EL, // p_1302->g_419
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65529UL), 65529UL), 65529UL, 8UL, 65529UL), // p_1302->g_440
        0x5ADA16BFL, // p_1302->g_457
        &p_1302->g_61, // p_1302->g_469
        255UL, // p_1302->g_471
        (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0xEC4D1DF3L), 0xEC4D1DF3L), 0xEC4D1DF3L, 7UL, 0xEC4D1DF3L), // p_1302->g_474
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x3E7AE3EEA7DE03A4L), 0x3E7AE3EEA7DE03A4L), // p_1302->g_488
        0x7CL, // p_1302->g_517
        (void*)0, // p_1302->g_523
        &p_1302->g_523, // p_1302->g_522
        (void*)0, // p_1302->g_536
        {{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342},{&p_1302->g_342,&p_1302->g_342,(void*)0,&p_1302->g_342}}, // p_1302->g_538
        &p_1302->g_538[5][2], // p_1302->g_537
        {&p_1302->g_104,&p_1302->g_104,&p_1302->g_104,&p_1302->g_104}, // p_1302->g_544
        {{&p_1302->g_544[3]},{&p_1302->g_544[3]},{&p_1302->g_544[3]},{&p_1302->g_544[3]}}, // p_1302->g_543
        {{{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]}},{{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]}},{{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]}},{{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]}},{{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]},{&p_1302->g_543[1][0]}}}, // p_1302->g_542
        0xACL, // p_1302->g_556
        &p_1302->g_61, // p_1302->g_596
        (-1L), // p_1302->g_598
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4408L), 0x4408L), 0x4408L, 0L, 0x4408L), // p_1302->g_608
        (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x5DL), 0x5DL), 0x5DL, 7L, 0x5DL, (VECTOR(int8_t, 2))(7L, 0x5DL), (VECTOR(int8_t, 2))(7L, 0x5DL), 7L, 0x5DL, 7L, 0x5DL), // p_1302->g_774
        (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 255UL), 255UL), // p_1302->g_795
        (VECTOR(int32_t, 2))(0x1C3873DBL, 0L), // p_1302->g_815
        (void*)0, // p_1302->g_932
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xA04F44DFL), 0xA04F44DFL), // p_1302->g_962
        7L, // p_1302->g_963
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1302->g_970
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x52L), 0x52L), 0x52L, (-1L), 0x52L, (VECTOR(int8_t, 2))((-1L), 0x52L), (VECTOR(int8_t, 2))((-1L), 0x52L), (-1L), 0x52L, (-1L), 0x52L), // p_1302->g_1109
        (VECTOR(int32_t, 4))(0x50A17DD8L, (VECTOR(int32_t, 2))(0x50A17DD8L, 0x754AB26CL), 0x754AB26CL), // p_1302->g_1112
        1UL, // p_1302->g_1176
        (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x7F19557BL), 0x7F19557BL), 0x7F19557BL, 2UL, 0x7F19557BL, (VECTOR(uint32_t, 2))(2UL, 0x7F19557BL), (VECTOR(uint32_t, 2))(2UL, 0x7F19557BL), 2UL, 0x7F19557BL, 2UL, 0x7F19557BL), // p_1302->g_1195
        (VECTOR(int8_t, 16))(0x01L, (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 3L), 3L), 3L, 0x01L, 3L, (VECTOR(int8_t, 2))(0x01L, 3L), (VECTOR(int8_t, 2))(0x01L, 3L), 0x01L, 3L, 0x01L, 3L), // p_1302->g_1219
        (VECTOR(uint8_t, 4))(0xC3L, (VECTOR(uint8_t, 2))(0xC3L, 6UL), 6UL), // p_1302->g_1231
        (VECTOR(uint8_t, 8))(0x47L, (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0x88L), 0x88L), 0x88L, 0x47L, 0x88L), // p_1302->g_1232
        (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 1UL), 1UL), 1UL, 251UL, 1UL, (VECTOR(uint8_t, 2))(251UL, 1UL), (VECTOR(uint8_t, 2))(251UL, 1UL), 251UL, 1UL, 251UL, 1UL), // p_1302->g_1234
        &p_1302->g_40, // p_1302->g_1250
        {{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L},{0x1A170E1DL,0L,0x42FD5EA7L,0x57BFC08DL,0x3C44525EL,0x06FE4552L,0x390D31A6L,0x2C9C3C32L,(-5L),1L}}, // p_1302->g_1297
        0, // p_1302->v_collective
        sequence_input[get_global_id(0)], // p_1302->global_0_offset
        sequence_input[get_global_id(1)], // p_1302->global_1_offset
        sequence_input[get_global_id(2)], // p_1302->global_2_offset
        sequence_input[get_local_id(0)], // p_1302->local_0_offset
        sequence_input[get_local_id(1)], // p_1302->local_1_offset
        sequence_input[get_local_id(2)], // p_1302->local_2_offset
        sequence_input[get_group_id(0)], // p_1302->group_0_offset
        sequence_input[get_group_id(1)], // p_1302->group_1_offset
        sequence_input[get_group_id(2)], // p_1302->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 70)), permutations[0][get_linear_local_id()])), // p_1302->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1303 = c_1304;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1302);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1302->g_4, "p_1302->g_4", print_hash_value);
    transparent_crc(p_1302->g_14, "p_1302->g_14", print_hash_value);
    transparent_crc(p_1302->g_32, "p_1302->g_32", print_hash_value);
    transparent_crc(p_1302->g_51, "p_1302->g_51", print_hash_value);
    transparent_crc(p_1302->g_61, "p_1302->g_61", print_hash_value);
    transparent_crc(p_1302->g_62.x, "p_1302->g_62.x", print_hash_value);
    transparent_crc(p_1302->g_62.y, "p_1302->g_62.y", print_hash_value);
    transparent_crc(p_1302->g_67.s0, "p_1302->g_67.s0", print_hash_value);
    transparent_crc(p_1302->g_67.s1, "p_1302->g_67.s1", print_hash_value);
    transparent_crc(p_1302->g_67.s2, "p_1302->g_67.s2", print_hash_value);
    transparent_crc(p_1302->g_67.s3, "p_1302->g_67.s3", print_hash_value);
    transparent_crc(p_1302->g_67.s4, "p_1302->g_67.s4", print_hash_value);
    transparent_crc(p_1302->g_67.s5, "p_1302->g_67.s5", print_hash_value);
    transparent_crc(p_1302->g_67.s6, "p_1302->g_67.s6", print_hash_value);
    transparent_crc(p_1302->g_67.s7, "p_1302->g_67.s7", print_hash_value);
    transparent_crc(p_1302->g_67.s8, "p_1302->g_67.s8", print_hash_value);
    transparent_crc(p_1302->g_67.s9, "p_1302->g_67.s9", print_hash_value);
    transparent_crc(p_1302->g_67.sa, "p_1302->g_67.sa", print_hash_value);
    transparent_crc(p_1302->g_67.sb, "p_1302->g_67.sb", print_hash_value);
    transparent_crc(p_1302->g_67.sc, "p_1302->g_67.sc", print_hash_value);
    transparent_crc(p_1302->g_67.sd, "p_1302->g_67.sd", print_hash_value);
    transparent_crc(p_1302->g_67.se, "p_1302->g_67.se", print_hash_value);
    transparent_crc(p_1302->g_67.sf, "p_1302->g_67.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1302->g_73[i][j], "p_1302->g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1302->g_79.x, "p_1302->g_79.x", print_hash_value);
    transparent_crc(p_1302->g_79.y, "p_1302->g_79.y", print_hash_value);
    transparent_crc(p_1302->g_79.z, "p_1302->g_79.z", print_hash_value);
    transparent_crc(p_1302->g_79.w, "p_1302->g_79.w", print_hash_value);
    transparent_crc(p_1302->g_93.x, "p_1302->g_93.x", print_hash_value);
    transparent_crc(p_1302->g_93.y, "p_1302->g_93.y", print_hash_value);
    transparent_crc(p_1302->g_98.x, "p_1302->g_98.x", print_hash_value);
    transparent_crc(p_1302->g_98.y, "p_1302->g_98.y", print_hash_value);
    transparent_crc(p_1302->g_99.x, "p_1302->g_99.x", print_hash_value);
    transparent_crc(p_1302->g_99.y, "p_1302->g_99.y", print_hash_value);
    transparent_crc(p_1302->g_101.s0, "p_1302->g_101.s0", print_hash_value);
    transparent_crc(p_1302->g_101.s1, "p_1302->g_101.s1", print_hash_value);
    transparent_crc(p_1302->g_101.s2, "p_1302->g_101.s2", print_hash_value);
    transparent_crc(p_1302->g_101.s3, "p_1302->g_101.s3", print_hash_value);
    transparent_crc(p_1302->g_101.s4, "p_1302->g_101.s4", print_hash_value);
    transparent_crc(p_1302->g_101.s5, "p_1302->g_101.s5", print_hash_value);
    transparent_crc(p_1302->g_101.s6, "p_1302->g_101.s6", print_hash_value);
    transparent_crc(p_1302->g_101.s7, "p_1302->g_101.s7", print_hash_value);
    transparent_crc(p_1302->g_102.x, "p_1302->g_102.x", print_hash_value);
    transparent_crc(p_1302->g_102.y, "p_1302->g_102.y", print_hash_value);
    transparent_crc(p_1302->g_102.z, "p_1302->g_102.z", print_hash_value);
    transparent_crc(p_1302->g_102.w, "p_1302->g_102.w", print_hash_value);
    transparent_crc(p_1302->g_104, "p_1302->g_104", print_hash_value);
    transparent_crc(p_1302->g_107, "p_1302->g_107", print_hash_value);
    transparent_crc(p_1302->g_129.x, "p_1302->g_129.x", print_hash_value);
    transparent_crc(p_1302->g_129.y, "p_1302->g_129.y", print_hash_value);
    transparent_crc(p_1302->g_142, "p_1302->g_142", print_hash_value);
    transparent_crc(p_1302->g_255.s0, "p_1302->g_255.s0", print_hash_value);
    transparent_crc(p_1302->g_255.s1, "p_1302->g_255.s1", print_hash_value);
    transparent_crc(p_1302->g_255.s2, "p_1302->g_255.s2", print_hash_value);
    transparent_crc(p_1302->g_255.s3, "p_1302->g_255.s3", print_hash_value);
    transparent_crc(p_1302->g_255.s4, "p_1302->g_255.s4", print_hash_value);
    transparent_crc(p_1302->g_255.s5, "p_1302->g_255.s5", print_hash_value);
    transparent_crc(p_1302->g_255.s6, "p_1302->g_255.s6", print_hash_value);
    transparent_crc(p_1302->g_255.s7, "p_1302->g_255.s7", print_hash_value);
    transparent_crc(p_1302->g_318, "p_1302->g_318", print_hash_value);
    transparent_crc(p_1302->g_329.x, "p_1302->g_329.x", print_hash_value);
    transparent_crc(p_1302->g_329.y, "p_1302->g_329.y", print_hash_value);
    transparent_crc(p_1302->g_329.z, "p_1302->g_329.z", print_hash_value);
    transparent_crc(p_1302->g_329.w, "p_1302->g_329.w", print_hash_value);
    transparent_crc(p_1302->g_336.s0, "p_1302->g_336.s0", print_hash_value);
    transparent_crc(p_1302->g_336.s1, "p_1302->g_336.s1", print_hash_value);
    transparent_crc(p_1302->g_336.s2, "p_1302->g_336.s2", print_hash_value);
    transparent_crc(p_1302->g_336.s3, "p_1302->g_336.s3", print_hash_value);
    transparent_crc(p_1302->g_336.s4, "p_1302->g_336.s4", print_hash_value);
    transparent_crc(p_1302->g_336.s5, "p_1302->g_336.s5", print_hash_value);
    transparent_crc(p_1302->g_336.s6, "p_1302->g_336.s6", print_hash_value);
    transparent_crc(p_1302->g_336.s7, "p_1302->g_336.s7", print_hash_value);
    transparent_crc(p_1302->g_336.s8, "p_1302->g_336.s8", print_hash_value);
    transparent_crc(p_1302->g_336.s9, "p_1302->g_336.s9", print_hash_value);
    transparent_crc(p_1302->g_336.sa, "p_1302->g_336.sa", print_hash_value);
    transparent_crc(p_1302->g_336.sb, "p_1302->g_336.sb", print_hash_value);
    transparent_crc(p_1302->g_336.sc, "p_1302->g_336.sc", print_hash_value);
    transparent_crc(p_1302->g_336.sd, "p_1302->g_336.sd", print_hash_value);
    transparent_crc(p_1302->g_336.se, "p_1302->g_336.se", print_hash_value);
    transparent_crc(p_1302->g_336.sf, "p_1302->g_336.sf", print_hash_value);
    transparent_crc(p_1302->g_342, "p_1302->g_342", print_hash_value);
    transparent_crc(p_1302->g_350.s0, "p_1302->g_350.s0", print_hash_value);
    transparent_crc(p_1302->g_350.s1, "p_1302->g_350.s1", print_hash_value);
    transparent_crc(p_1302->g_350.s2, "p_1302->g_350.s2", print_hash_value);
    transparent_crc(p_1302->g_350.s3, "p_1302->g_350.s3", print_hash_value);
    transparent_crc(p_1302->g_350.s4, "p_1302->g_350.s4", print_hash_value);
    transparent_crc(p_1302->g_350.s5, "p_1302->g_350.s5", print_hash_value);
    transparent_crc(p_1302->g_350.s6, "p_1302->g_350.s6", print_hash_value);
    transparent_crc(p_1302->g_350.s7, "p_1302->g_350.s7", print_hash_value);
    transparent_crc(p_1302->g_350.s8, "p_1302->g_350.s8", print_hash_value);
    transparent_crc(p_1302->g_350.s9, "p_1302->g_350.s9", print_hash_value);
    transparent_crc(p_1302->g_350.sa, "p_1302->g_350.sa", print_hash_value);
    transparent_crc(p_1302->g_350.sb, "p_1302->g_350.sb", print_hash_value);
    transparent_crc(p_1302->g_350.sc, "p_1302->g_350.sc", print_hash_value);
    transparent_crc(p_1302->g_350.sd, "p_1302->g_350.sd", print_hash_value);
    transparent_crc(p_1302->g_350.se, "p_1302->g_350.se", print_hash_value);
    transparent_crc(p_1302->g_350.sf, "p_1302->g_350.sf", print_hash_value);
    transparent_crc(p_1302->g_369, "p_1302->g_369", print_hash_value);
    transparent_crc(p_1302->g_384.s0, "p_1302->g_384.s0", print_hash_value);
    transparent_crc(p_1302->g_384.s1, "p_1302->g_384.s1", print_hash_value);
    transparent_crc(p_1302->g_384.s2, "p_1302->g_384.s2", print_hash_value);
    transparent_crc(p_1302->g_384.s3, "p_1302->g_384.s3", print_hash_value);
    transparent_crc(p_1302->g_384.s4, "p_1302->g_384.s4", print_hash_value);
    transparent_crc(p_1302->g_384.s5, "p_1302->g_384.s5", print_hash_value);
    transparent_crc(p_1302->g_384.s6, "p_1302->g_384.s6", print_hash_value);
    transparent_crc(p_1302->g_384.s7, "p_1302->g_384.s7", print_hash_value);
    transparent_crc(p_1302->g_395, "p_1302->g_395", print_hash_value);
    transparent_crc(p_1302->g_400.x, "p_1302->g_400.x", print_hash_value);
    transparent_crc(p_1302->g_400.y, "p_1302->g_400.y", print_hash_value);
    transparent_crc(p_1302->g_416.x, "p_1302->g_416.x", print_hash_value);
    transparent_crc(p_1302->g_416.y, "p_1302->g_416.y", print_hash_value);
    transparent_crc(p_1302->g_419, "p_1302->g_419", print_hash_value);
    transparent_crc(p_1302->g_440.s0, "p_1302->g_440.s0", print_hash_value);
    transparent_crc(p_1302->g_440.s1, "p_1302->g_440.s1", print_hash_value);
    transparent_crc(p_1302->g_440.s2, "p_1302->g_440.s2", print_hash_value);
    transparent_crc(p_1302->g_440.s3, "p_1302->g_440.s3", print_hash_value);
    transparent_crc(p_1302->g_440.s4, "p_1302->g_440.s4", print_hash_value);
    transparent_crc(p_1302->g_440.s5, "p_1302->g_440.s5", print_hash_value);
    transparent_crc(p_1302->g_440.s6, "p_1302->g_440.s6", print_hash_value);
    transparent_crc(p_1302->g_440.s7, "p_1302->g_440.s7", print_hash_value);
    transparent_crc(p_1302->g_457, "p_1302->g_457", print_hash_value);
    transparent_crc(p_1302->g_471, "p_1302->g_471", print_hash_value);
    transparent_crc(p_1302->g_474.s0, "p_1302->g_474.s0", print_hash_value);
    transparent_crc(p_1302->g_474.s1, "p_1302->g_474.s1", print_hash_value);
    transparent_crc(p_1302->g_474.s2, "p_1302->g_474.s2", print_hash_value);
    transparent_crc(p_1302->g_474.s3, "p_1302->g_474.s3", print_hash_value);
    transparent_crc(p_1302->g_474.s4, "p_1302->g_474.s4", print_hash_value);
    transparent_crc(p_1302->g_474.s5, "p_1302->g_474.s5", print_hash_value);
    transparent_crc(p_1302->g_474.s6, "p_1302->g_474.s6", print_hash_value);
    transparent_crc(p_1302->g_474.s7, "p_1302->g_474.s7", print_hash_value);
    transparent_crc(p_1302->g_488.x, "p_1302->g_488.x", print_hash_value);
    transparent_crc(p_1302->g_488.y, "p_1302->g_488.y", print_hash_value);
    transparent_crc(p_1302->g_488.z, "p_1302->g_488.z", print_hash_value);
    transparent_crc(p_1302->g_488.w, "p_1302->g_488.w", print_hash_value);
    transparent_crc(p_1302->g_517, "p_1302->g_517", print_hash_value);
    transparent_crc(p_1302->g_556, "p_1302->g_556", print_hash_value);
    transparent_crc(p_1302->g_598, "p_1302->g_598", print_hash_value);
    transparent_crc(p_1302->g_608.s0, "p_1302->g_608.s0", print_hash_value);
    transparent_crc(p_1302->g_608.s1, "p_1302->g_608.s1", print_hash_value);
    transparent_crc(p_1302->g_608.s2, "p_1302->g_608.s2", print_hash_value);
    transparent_crc(p_1302->g_608.s3, "p_1302->g_608.s3", print_hash_value);
    transparent_crc(p_1302->g_608.s4, "p_1302->g_608.s4", print_hash_value);
    transparent_crc(p_1302->g_608.s5, "p_1302->g_608.s5", print_hash_value);
    transparent_crc(p_1302->g_608.s6, "p_1302->g_608.s6", print_hash_value);
    transparent_crc(p_1302->g_608.s7, "p_1302->g_608.s7", print_hash_value);
    transparent_crc(p_1302->g_774.s0, "p_1302->g_774.s0", print_hash_value);
    transparent_crc(p_1302->g_774.s1, "p_1302->g_774.s1", print_hash_value);
    transparent_crc(p_1302->g_774.s2, "p_1302->g_774.s2", print_hash_value);
    transparent_crc(p_1302->g_774.s3, "p_1302->g_774.s3", print_hash_value);
    transparent_crc(p_1302->g_774.s4, "p_1302->g_774.s4", print_hash_value);
    transparent_crc(p_1302->g_774.s5, "p_1302->g_774.s5", print_hash_value);
    transparent_crc(p_1302->g_774.s6, "p_1302->g_774.s6", print_hash_value);
    transparent_crc(p_1302->g_774.s7, "p_1302->g_774.s7", print_hash_value);
    transparent_crc(p_1302->g_774.s8, "p_1302->g_774.s8", print_hash_value);
    transparent_crc(p_1302->g_774.s9, "p_1302->g_774.s9", print_hash_value);
    transparent_crc(p_1302->g_774.sa, "p_1302->g_774.sa", print_hash_value);
    transparent_crc(p_1302->g_774.sb, "p_1302->g_774.sb", print_hash_value);
    transparent_crc(p_1302->g_774.sc, "p_1302->g_774.sc", print_hash_value);
    transparent_crc(p_1302->g_774.sd, "p_1302->g_774.sd", print_hash_value);
    transparent_crc(p_1302->g_774.se, "p_1302->g_774.se", print_hash_value);
    transparent_crc(p_1302->g_774.sf, "p_1302->g_774.sf", print_hash_value);
    transparent_crc(p_1302->g_795.x, "p_1302->g_795.x", print_hash_value);
    transparent_crc(p_1302->g_795.y, "p_1302->g_795.y", print_hash_value);
    transparent_crc(p_1302->g_795.z, "p_1302->g_795.z", print_hash_value);
    transparent_crc(p_1302->g_795.w, "p_1302->g_795.w", print_hash_value);
    transparent_crc(p_1302->g_815.x, "p_1302->g_815.x", print_hash_value);
    transparent_crc(p_1302->g_815.y, "p_1302->g_815.y", print_hash_value);
    transparent_crc(p_1302->g_962.x, "p_1302->g_962.x", print_hash_value);
    transparent_crc(p_1302->g_962.y, "p_1302->g_962.y", print_hash_value);
    transparent_crc(p_1302->g_962.z, "p_1302->g_962.z", print_hash_value);
    transparent_crc(p_1302->g_962.w, "p_1302->g_962.w", print_hash_value);
    transparent_crc(p_1302->g_963, "p_1302->g_963", print_hash_value);
    transparent_crc(p_1302->g_970.s0, "p_1302->g_970.s0", print_hash_value);
    transparent_crc(p_1302->g_970.s1, "p_1302->g_970.s1", print_hash_value);
    transparent_crc(p_1302->g_970.s2, "p_1302->g_970.s2", print_hash_value);
    transparent_crc(p_1302->g_970.s3, "p_1302->g_970.s3", print_hash_value);
    transparent_crc(p_1302->g_970.s4, "p_1302->g_970.s4", print_hash_value);
    transparent_crc(p_1302->g_970.s5, "p_1302->g_970.s5", print_hash_value);
    transparent_crc(p_1302->g_970.s6, "p_1302->g_970.s6", print_hash_value);
    transparent_crc(p_1302->g_970.s7, "p_1302->g_970.s7", print_hash_value);
    transparent_crc(p_1302->g_1109.s0, "p_1302->g_1109.s0", print_hash_value);
    transparent_crc(p_1302->g_1109.s1, "p_1302->g_1109.s1", print_hash_value);
    transparent_crc(p_1302->g_1109.s2, "p_1302->g_1109.s2", print_hash_value);
    transparent_crc(p_1302->g_1109.s3, "p_1302->g_1109.s3", print_hash_value);
    transparent_crc(p_1302->g_1109.s4, "p_1302->g_1109.s4", print_hash_value);
    transparent_crc(p_1302->g_1109.s5, "p_1302->g_1109.s5", print_hash_value);
    transparent_crc(p_1302->g_1109.s6, "p_1302->g_1109.s6", print_hash_value);
    transparent_crc(p_1302->g_1109.s7, "p_1302->g_1109.s7", print_hash_value);
    transparent_crc(p_1302->g_1109.s8, "p_1302->g_1109.s8", print_hash_value);
    transparent_crc(p_1302->g_1109.s9, "p_1302->g_1109.s9", print_hash_value);
    transparent_crc(p_1302->g_1109.sa, "p_1302->g_1109.sa", print_hash_value);
    transparent_crc(p_1302->g_1109.sb, "p_1302->g_1109.sb", print_hash_value);
    transparent_crc(p_1302->g_1109.sc, "p_1302->g_1109.sc", print_hash_value);
    transparent_crc(p_1302->g_1109.sd, "p_1302->g_1109.sd", print_hash_value);
    transparent_crc(p_1302->g_1109.se, "p_1302->g_1109.se", print_hash_value);
    transparent_crc(p_1302->g_1109.sf, "p_1302->g_1109.sf", print_hash_value);
    transparent_crc(p_1302->g_1112.x, "p_1302->g_1112.x", print_hash_value);
    transparent_crc(p_1302->g_1112.y, "p_1302->g_1112.y", print_hash_value);
    transparent_crc(p_1302->g_1112.z, "p_1302->g_1112.z", print_hash_value);
    transparent_crc(p_1302->g_1112.w, "p_1302->g_1112.w", print_hash_value);
    transparent_crc(p_1302->g_1176, "p_1302->g_1176", print_hash_value);
    transparent_crc(p_1302->g_1195.s0, "p_1302->g_1195.s0", print_hash_value);
    transparent_crc(p_1302->g_1195.s1, "p_1302->g_1195.s1", print_hash_value);
    transparent_crc(p_1302->g_1195.s2, "p_1302->g_1195.s2", print_hash_value);
    transparent_crc(p_1302->g_1195.s3, "p_1302->g_1195.s3", print_hash_value);
    transparent_crc(p_1302->g_1195.s4, "p_1302->g_1195.s4", print_hash_value);
    transparent_crc(p_1302->g_1195.s5, "p_1302->g_1195.s5", print_hash_value);
    transparent_crc(p_1302->g_1195.s6, "p_1302->g_1195.s6", print_hash_value);
    transparent_crc(p_1302->g_1195.s7, "p_1302->g_1195.s7", print_hash_value);
    transparent_crc(p_1302->g_1195.s8, "p_1302->g_1195.s8", print_hash_value);
    transparent_crc(p_1302->g_1195.s9, "p_1302->g_1195.s9", print_hash_value);
    transparent_crc(p_1302->g_1195.sa, "p_1302->g_1195.sa", print_hash_value);
    transparent_crc(p_1302->g_1195.sb, "p_1302->g_1195.sb", print_hash_value);
    transparent_crc(p_1302->g_1195.sc, "p_1302->g_1195.sc", print_hash_value);
    transparent_crc(p_1302->g_1195.sd, "p_1302->g_1195.sd", print_hash_value);
    transparent_crc(p_1302->g_1195.se, "p_1302->g_1195.se", print_hash_value);
    transparent_crc(p_1302->g_1195.sf, "p_1302->g_1195.sf", print_hash_value);
    transparent_crc(p_1302->g_1219.s0, "p_1302->g_1219.s0", print_hash_value);
    transparent_crc(p_1302->g_1219.s1, "p_1302->g_1219.s1", print_hash_value);
    transparent_crc(p_1302->g_1219.s2, "p_1302->g_1219.s2", print_hash_value);
    transparent_crc(p_1302->g_1219.s3, "p_1302->g_1219.s3", print_hash_value);
    transparent_crc(p_1302->g_1219.s4, "p_1302->g_1219.s4", print_hash_value);
    transparent_crc(p_1302->g_1219.s5, "p_1302->g_1219.s5", print_hash_value);
    transparent_crc(p_1302->g_1219.s6, "p_1302->g_1219.s6", print_hash_value);
    transparent_crc(p_1302->g_1219.s7, "p_1302->g_1219.s7", print_hash_value);
    transparent_crc(p_1302->g_1219.s8, "p_1302->g_1219.s8", print_hash_value);
    transparent_crc(p_1302->g_1219.s9, "p_1302->g_1219.s9", print_hash_value);
    transparent_crc(p_1302->g_1219.sa, "p_1302->g_1219.sa", print_hash_value);
    transparent_crc(p_1302->g_1219.sb, "p_1302->g_1219.sb", print_hash_value);
    transparent_crc(p_1302->g_1219.sc, "p_1302->g_1219.sc", print_hash_value);
    transparent_crc(p_1302->g_1219.sd, "p_1302->g_1219.sd", print_hash_value);
    transparent_crc(p_1302->g_1219.se, "p_1302->g_1219.se", print_hash_value);
    transparent_crc(p_1302->g_1219.sf, "p_1302->g_1219.sf", print_hash_value);
    transparent_crc(p_1302->g_1231.x, "p_1302->g_1231.x", print_hash_value);
    transparent_crc(p_1302->g_1231.y, "p_1302->g_1231.y", print_hash_value);
    transparent_crc(p_1302->g_1231.z, "p_1302->g_1231.z", print_hash_value);
    transparent_crc(p_1302->g_1231.w, "p_1302->g_1231.w", print_hash_value);
    transparent_crc(p_1302->g_1232.s0, "p_1302->g_1232.s0", print_hash_value);
    transparent_crc(p_1302->g_1232.s1, "p_1302->g_1232.s1", print_hash_value);
    transparent_crc(p_1302->g_1232.s2, "p_1302->g_1232.s2", print_hash_value);
    transparent_crc(p_1302->g_1232.s3, "p_1302->g_1232.s3", print_hash_value);
    transparent_crc(p_1302->g_1232.s4, "p_1302->g_1232.s4", print_hash_value);
    transparent_crc(p_1302->g_1232.s5, "p_1302->g_1232.s5", print_hash_value);
    transparent_crc(p_1302->g_1232.s6, "p_1302->g_1232.s6", print_hash_value);
    transparent_crc(p_1302->g_1232.s7, "p_1302->g_1232.s7", print_hash_value);
    transparent_crc(p_1302->g_1234.s0, "p_1302->g_1234.s0", print_hash_value);
    transparent_crc(p_1302->g_1234.s1, "p_1302->g_1234.s1", print_hash_value);
    transparent_crc(p_1302->g_1234.s2, "p_1302->g_1234.s2", print_hash_value);
    transparent_crc(p_1302->g_1234.s3, "p_1302->g_1234.s3", print_hash_value);
    transparent_crc(p_1302->g_1234.s4, "p_1302->g_1234.s4", print_hash_value);
    transparent_crc(p_1302->g_1234.s5, "p_1302->g_1234.s5", print_hash_value);
    transparent_crc(p_1302->g_1234.s6, "p_1302->g_1234.s6", print_hash_value);
    transparent_crc(p_1302->g_1234.s7, "p_1302->g_1234.s7", print_hash_value);
    transparent_crc(p_1302->g_1234.s8, "p_1302->g_1234.s8", print_hash_value);
    transparent_crc(p_1302->g_1234.s9, "p_1302->g_1234.s9", print_hash_value);
    transparent_crc(p_1302->g_1234.sa, "p_1302->g_1234.sa", print_hash_value);
    transparent_crc(p_1302->g_1234.sb, "p_1302->g_1234.sb", print_hash_value);
    transparent_crc(p_1302->g_1234.sc, "p_1302->g_1234.sc", print_hash_value);
    transparent_crc(p_1302->g_1234.sd, "p_1302->g_1234.sd", print_hash_value);
    transparent_crc(p_1302->g_1234.se, "p_1302->g_1234.se", print_hash_value);
    transparent_crc(p_1302->g_1234.sf, "p_1302->g_1234.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1302->g_1297[i][j], "p_1302->g_1297[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1302->v_collective, "p_1302->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 36; i++)
            transparent_crc(p_1302->g_special_values[i + 36 * get_linear_group_id()], "p_1302->g_special_values[i + 36 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 36; i++)
            transparent_crc(p_1302->l_special_values[i], "p_1302->l_special_values[i]", print_hash_value);
    transparent_crc(p_1302->l_comm_values[get_linear_local_id()], "p_1302->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1302->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()], "p_1302->g_comm_values[get_linear_group_id() * 70 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
