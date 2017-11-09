// --atomics 30 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 28,38,7 -l 1,19,7
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

__constant uint32_t permutations[10][133] = {
{29,26,96,25,114,74,71,104,7,15,120,109,65,52,108,33,42,45,81,97,76,23,131,75,90,13,18,50,4,92,5,27,115,119,34,122,111,20,16,123,49,19,126,47,83,44,62,67,70,30,113,54,112,14,36,55,107,93,129,0,73,37,28,88,124,9,6,110,91,127,56,89,11,132,128,78,59,101,106,17,94,39,61,57,86,130,3,117,77,66,63,64,69,79,58,12,48,40,99,2,102,46,80,38,118,1,84,31,82,116,68,51,60,121,24,95,100,98,53,22,43,35,87,32,85,105,72,21,41,125,8,10,103}, // permutation 0
{116,81,129,11,115,65,74,118,75,51,113,25,15,95,56,123,46,20,30,62,19,2,72,71,68,70,132,38,109,9,45,126,91,12,119,107,67,120,122,82,124,76,114,6,54,40,22,63,99,94,98,112,106,84,87,96,61,18,79,117,16,88,34,127,4,33,35,69,121,36,78,101,92,27,125,24,64,23,50,0,130,77,32,111,80,37,44,3,97,10,60,102,59,110,53,131,104,83,13,47,8,49,43,41,21,17,5,31,52,57,14,58,100,29,66,73,1,26,55,42,28,7,85,90,89,108,128,48,39,105,103,86,93}, // permutation 1
{95,101,91,73,97,122,61,114,30,65,132,118,71,44,66,94,64,5,123,49,18,38,78,54,33,68,60,36,11,2,25,40,81,92,99,10,24,75,126,130,9,105,129,119,0,56,53,58,13,100,22,124,93,50,55,115,39,70,113,90,96,20,26,62,7,121,6,116,87,102,79,4,41,23,21,57,84,117,14,1,45,35,52,17,19,88,112,106,48,128,107,127,31,86,83,15,98,42,59,43,111,3,51,29,47,77,82,72,104,108,37,67,109,110,85,46,125,34,89,63,69,74,76,131,28,32,16,27,80,12,120,103,8}, // permutation 2
{100,104,4,132,78,12,64,32,14,38,6,111,36,39,29,71,48,70,117,103,68,24,10,60,116,56,118,77,88,129,115,123,51,61,72,92,7,93,44,23,87,50,17,124,107,20,79,85,113,13,37,46,86,35,119,94,63,105,91,45,3,90,89,66,130,27,34,101,81,95,112,96,16,106,73,22,19,62,25,31,126,18,40,122,109,80,74,1,26,8,59,110,98,99,9,57,28,108,102,58,82,11,52,55,114,42,69,2,97,84,53,128,121,131,127,75,54,67,0,30,125,15,43,47,76,83,65,21,33,120,49,5,41}, // permutation 3
{79,60,25,122,69,14,59,61,19,50,55,113,72,36,71,132,95,30,129,119,27,91,3,117,35,62,33,106,123,85,28,90,99,9,127,11,8,45,7,42,10,111,52,15,101,67,121,126,103,63,92,97,100,43,128,120,49,70,53,115,48,109,89,41,107,114,34,26,65,12,131,81,86,84,0,108,13,130,80,51,76,58,32,82,20,29,88,98,64,56,17,83,110,38,31,75,21,23,73,104,125,54,44,16,4,66,93,124,74,24,5,47,118,46,105,78,22,2,102,6,18,37,87,1,96,68,94,40,77,116,39,57,112}, // permutation 4
{50,130,29,123,10,98,25,131,13,43,72,53,31,95,48,33,30,1,111,32,36,6,58,68,106,3,69,23,121,103,80,97,17,22,85,75,42,88,67,117,81,63,34,77,83,94,24,125,2,12,54,66,112,118,21,52,82,57,92,65,56,90,59,64,129,73,114,104,76,0,122,124,41,87,11,8,18,70,27,16,93,108,45,79,40,47,99,14,46,84,60,28,5,110,26,132,9,105,113,119,39,86,49,120,37,101,55,19,4,116,107,20,7,74,100,44,128,127,91,96,115,35,15,38,62,61,109,102,126,78,89,51,71}, // permutation 5
{10,34,56,120,1,31,119,18,101,87,16,39,89,20,42,36,53,122,64,30,5,21,99,107,35,76,60,47,12,98,102,70,96,59,123,109,49,81,83,65,105,63,68,95,27,112,77,86,37,84,82,113,50,117,25,61,54,24,46,38,52,51,57,62,85,129,104,74,45,4,22,71,8,23,94,121,88,66,69,11,17,110,91,131,3,58,124,116,33,43,111,6,92,127,90,132,128,19,108,29,125,15,48,2,80,78,14,55,13,9,130,44,79,73,41,26,97,28,114,75,72,103,118,126,32,40,106,7,0,115,93,67,100}, // permutation 6
{1,24,25,65,128,79,96,46,90,35,83,45,118,43,112,101,70,22,60,23,72,51,102,87,30,97,123,114,55,6,68,120,42,59,37,7,26,108,40,132,117,12,115,110,88,36,75,53,52,100,126,124,27,21,15,85,121,9,13,0,122,39,106,81,63,32,74,49,8,104,29,130,69,98,84,127,56,10,58,3,54,77,19,18,82,80,93,5,33,119,2,116,31,111,64,89,105,11,16,34,73,20,41,47,109,14,44,92,28,129,78,95,61,94,125,113,62,103,99,67,57,4,86,17,91,38,50,76,131,107,48,66,71}, // permutation 7
{96,122,79,104,64,125,129,73,25,17,58,59,40,19,14,50,38,37,32,118,42,89,15,16,112,70,106,78,105,131,99,100,26,55,121,35,11,48,56,3,103,34,24,115,94,2,81,23,123,109,113,67,72,57,54,29,92,20,130,111,76,66,41,75,46,30,82,83,119,39,61,93,124,22,132,51,60,126,117,5,21,47,33,8,62,107,0,88,53,52,74,12,45,128,6,1,91,97,18,49,65,116,68,27,101,127,98,114,102,120,108,13,84,44,90,9,7,95,77,87,43,4,31,85,28,110,86,36,69,63,71,80,10}, // permutation 8
{130,34,10,82,26,99,123,2,73,117,79,54,53,62,126,98,63,14,6,48,97,80,25,91,77,22,36,119,127,35,95,3,51,128,81,15,17,23,121,109,86,112,108,12,69,8,78,43,66,7,83,9,90,60,89,16,100,111,44,70,120,55,56,42,72,38,105,87,20,50,45,57,4,21,30,131,125,39,113,19,27,104,46,32,71,122,52,93,11,68,58,24,102,106,33,75,85,59,132,0,41,13,84,118,96,115,129,47,31,67,110,74,40,64,29,76,65,124,1,88,49,103,61,37,28,5,107,94,101,116,114,92,18} // permutation 9
};

// Seed: 2358633370

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    VECTOR(uint16_t, 8) g_8;
    uint64_t g_60;
    int32_t g_80;
    volatile uint32_t g_84;
    volatile VECTOR(int16_t, 16) g_100;
    volatile VECTOR(int16_t, 4) g_101;
    uint16_t g_103;
    volatile VECTOR(int32_t, 2) g_127;
    VECTOR(uint32_t, 2) g_130;
    volatile int32_t g_141;
    volatile int32_t *g_140;
    volatile int32_t **g_139;
    VECTOR(int16_t, 16) g_144;
    int8_t g_153;
    volatile VECTOR(int64_t, 16) g_158;
    int32_t *g_162;
    int32_t **g_161;
    int64_t g_167;
    uint16_t *g_232;
    uint32_t g_257[6];
    int32_t g_259;
    int32_t g_261;
    VECTOR(int64_t, 2) g_290;
    volatile VECTOR(int64_t, 16) g_291;
    uint64_t g_303;
    int16_t g_322;
    volatile VECTOR(uint32_t, 8) g_335;
    VECTOR(int8_t, 16) g_347;
    VECTOR(int64_t, 4) g_348;
    uint32_t *g_352[5][4];
    uint32_t **g_351;
    volatile VECTOR(int32_t, 8) g_385;
    volatile VECTOR(int32_t, 16) g_386;
    volatile VECTOR(int32_t, 8) g_387;
    volatile VECTOR(uint16_t, 2) g_425;
    VECTOR(uint16_t, 8) g_426;
    VECTOR(int16_t, 8) g_477;
    VECTOR(uint16_t, 2) g_498;
    uint8_t *g_534;
    VECTOR(int32_t, 4) g_555;
    volatile VECTOR(int32_t, 8) g_556;
    int64_t g_566;
    int32_t g_577;
    volatile int64_t g_579;
    int16_t *g_646;
    int16_t **g_645;
    int16_t *** volatile g_644;
    volatile VECTOR(int8_t, 2) g_656;
    uint8_t g_713;
    VECTOR(int32_t, 8) g_777;
    VECTOR(int16_t, 2) g_869;
    uint16_t ***g_876[1][5][1];
    uint16_t * volatile *g_879;
    uint16_t * volatile **g_878[4];
    int32_t g_910;
    volatile VECTOR(uint8_t, 16) g_949;
    VECTOR(int8_t, 8) g_978;
    volatile VECTOR(int16_t, 8) g_983;
    VECTOR(int16_t, 2) g_984;
    VECTOR(int16_t, 16) g_985;
    VECTOR(int16_t, 2) g_987;
    volatile VECTOR(uint8_t, 8) g_992;
    VECTOR(int32_t, 8) g_996;
    int16_t *g_1006;
    VECTOR(uint64_t, 2) g_1010;
    VECTOR(int16_t, 2) g_1021;
    uint64_t g_1060;
    int32_t g_1061[8][5][5];
    volatile VECTOR(int32_t, 4) g_1085;
    VECTOR(int32_t, 16) g_1155;
    VECTOR(uint8_t, 16) g_1168;
    VECTOR(uint8_t, 4) g_1169;
    volatile VECTOR(uint64_t, 2) g_1188;
    uint64_t g_1190;
    volatile uint64_t *g_1196;
    volatile uint64_t **g_1195;
    int16_t g_1200;
    VECTOR(int32_t, 8) g_1308;
    VECTOR(uint64_t, 2) g_1335;
    VECTOR(int8_t, 8) g_1340;
    VECTOR(int16_t, 2) g_1366;
    volatile VECTOR(int16_t, 16) g_1367;
    VECTOR(int16_t, 2) g_1385;
    VECTOR(int32_t, 4) g_1416;
    VECTOR(int32_t, 2) g_1427;
    VECTOR(int32_t, 4) g_1428;
    VECTOR(int32_t, 8) g_1453;
    volatile VECTOR(int32_t, 2) g_1483;
    volatile VECTOR(int32_t, 16) g_1506;
    VECTOR(int16_t, 2) g_1507;
    uint32_t g_1549;
    volatile VECTOR(int32_t, 4) g_1562;
    uint32_t g_1570;
    int64_t *g_1630[4];
    int64_t ** volatile g_1629;
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
uint32_t  func_1(struct S0 * p_1635);
int32_t ** func_13(int32_t  p_14, uint8_t  p_15, int32_t  p_16, struct S0 * p_1635);
int32_t  func_25(int32_t * p_26, int32_t * p_27, uint64_t  p_28, int32_t ** p_29, struct S0 * p_1635);
int32_t * func_30(int32_t * p_31, uint32_t  p_32, int32_t ** p_33, struct S0 * p_1635);
int32_t ** func_34(uint64_t  p_35, int32_t ** p_36, uint32_t  p_37, uint64_t  p_38, struct S0 * p_1635);
uint8_t  func_47(int64_t  p_48, int16_t  p_49, int16_t  p_50, struct S0 * p_1635);
int16_t  func_51(int16_t  p_52, uint64_t  p_53, struct S0 * p_1635);
int32_t  func_54(int32_t  p_55, int8_t  p_56, int64_t  p_57, struct S0 * p_1635);
int16_t  func_64(uint8_t  p_65, int32_t  p_66, int32_t  p_67, int32_t ** p_68, struct S0 * p_1635);
uint8_t  func_69(int32_t * p_70, int32_t ** p_71, uint8_t  p_72, int32_t * p_73, int8_t  p_74, struct S0 * p_1635);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1635->g_8 p_1635->g_3 p_1635->g_910 p_1635->g_290 p_1635->g_1061 p_1635->g_1629 p_1635->g_140
 * writes: p_1635->g_8 p_1635->g_3 p_1635->g_910 p_1635->g_1335 p_1635->g_167 p_1635->g_60 p_1635->g_141
 */
uint32_t  func_1(struct S0 * p_1635)
{ /* block id: 4 */
    int32_t *l_2 = &p_1635->g_3;
    int32_t *l_4 = &p_1635->g_3;
    int32_t *l_5 = &p_1635->g_3;
    int32_t *l_6 = &p_1635->g_3;
    int32_t *l_7 = (void*)0;
    int32_t **l_1600 = &l_6;
    int16_t l_1603 = (-1L);
    --p_1635->g_8.s3;
    for (p_1635->g_3 = 0; (p_1635->g_3 <= (-17)); p_1635->g_3 = safe_sub_func_int16_t_s_s(p_1635->g_3, 4))
    { /* block id: 8 */
        uint16_t l_75 = 6UL;
        int32_t **l_76 = &l_6;
        int16_t *l_853 = (void*)0;
        int16_t *l_854[9][2] = {{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322},{&p_1635->g_322,&p_1635->g_322}};
        int16_t l_1067 = (-1L);
        int32_t *l_1201 = &p_1635->g_1061[3][0][4];
        int32_t ***l_1599[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_1599[i] = &l_76;
        (1 + 1);
    }
    for (p_1635->g_910 = (-15); (p_1635->g_910 == (-10)); p_1635->g_910 = safe_add_func_uint64_t_u_u(p_1635->g_910, 9))
    { /* block id: 690 */
        int32_t *l_1604 = (void*)0;
        int32_t *l_1605 = &p_1635->g_1061[3][0][4];
        int32_t *l_1606 = &p_1635->g_1061[3][0][4];
        int32_t *l_1607 = &p_1635->g_3;
        uint32_t l_1608 = 4294967293UL;
        uint32_t l_1619 = 1UL;
        uint16_t **l_1622 = (void*)0;
        uint16_t **l_1623 = (void*)0;
        int64_t *l_1624 = &p_1635->g_167;
        VECTOR(int8_t, 2) l_1625 = (VECTOR(int8_t, 2))(0L, (-1L));
        uint32_t *l_1626 = (void*)0;
        uint32_t *l_1627 = (void*)0;
        uint32_t *l_1628[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t l_1631 = (-10L);
        int8_t l_1632 = 0x5CL;
        uint64_t *l_1633 = &p_1635->g_60;
        int16_t ***l_1634 = &p_1635->g_645;
        int i;
        l_1608--;
        (*p_1635->g_140) = ((((*l_1633) = ((p_1635->g_290.y == (safe_mul_func_uint16_t_u_u((*l_1606), (p_1635->g_290.x ^ ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint32_t_u_u(l_1619, ((*l_4) |= (safe_mul_func_int16_t_s_s(((!(p_1635->g_1335.x = (*l_1605))) >= ((*l_1624) = ((l_1622 = l_1622) != l_1623))), (0x4CL >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_1625.xyxxyxxyyyxxxxyy)).even)).s6)))))) != ((void*)0 != p_1635->g_1629)) , l_6) != &p_1635->g_259), GROUP_DIVERGE(1, 1))) == l_1631), 7)) , 1UL))))) && l_1632)) , &p_1635->g_645) != l_1634);
    }
    return (*l_6);
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_1308 p_1635->g_879 p_1635->g_232 p_1635->g_103 p_1635->g_139 p_1635->g_140 p_1635->g_141 p_1635->g_101 p_1635->g_322 p_1635->g_161 p_1635->g_162 p_1635->g_60 p_1635->g_1061 p_1635->g_577 p_1635->g_1506 p_1635->g_1507 p_1635->g_777 p_1635->g_713 p_1635->g_127 p_1635->g_1021 p_1635->g_910 p_1635->g_1188 p_1635->g_644 p_1635->g_645 p_1635->g_1416 p_1635->g_1549 p_1635->g_1562 p_1635->g_646 p_1635->g_1570 p_1635->g_1168 p_1635->g_978
 * writes: p_1635->g_103 p_1635->g_1061 p_1635->g_577 p_1635->g_60 p_1635->g_162 p_1635->g_713 p_1635->g_910 p_1635->g_153 p_1635->g_141 p_1635->g_1549 p_1635->g_646 p_1635->g_1570 p_1635->g_978 p_1635->g_1335
 */
int32_t ** func_13(int32_t  p_14, uint8_t  p_15, int32_t  p_16, struct S0 * p_1635)
{ /* block id: 523 */
    uint32_t l_1322 = 1UL;
    int32_t l_1329[6];
    int16_t l_1331[6][6] = {{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)},{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)},{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)},{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)},{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)},{0x71AEL,0x71AEL,1L,(-1L),9L,(-1L)}};
    int32_t l_1332 = 0x5AB84FE2L;
    int32_t **l_1351 = &p_1635->g_162;
    int16_t ***l_1361[6][7][3] = {{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}},{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}},{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}},{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}},{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}},{{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645},{&p_1635->g_645,&p_1635->g_645,&p_1635->g_645}}};
    int32_t l_1444[5][7][6] = {{{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L}},{{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L}},{{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L}},{{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L}},{{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L},{1L,0x759589C6L,0x7BB5FC1CL,0L,0x7BB5FC1CL,0x759589C6L}}};
    uint32_t *l_1496 = &p_1635->g_257[0];
    uint32_t *l_1517[7] = {&l_1322,&l_1322,&l_1322,&l_1322,&l_1322,&l_1322,&l_1322};
    uint32_t l_1555[7][1];
    int64_t *l_1563 = &p_1635->g_566;
    VECTOR(int16_t, 16) l_1566 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1823L), 0x1823L), 0x1823L, (-1L), 0x1823L, (VECTOR(int16_t, 2))((-1L), 0x1823L), (VECTOR(int16_t, 2))((-1L), 0x1823L), (-1L), 0x1823L, (-1L), 0x1823L);
    uint32_t ***l_1582[7][1][9] = {{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}},{{&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,(void*)0,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351,&p_1635->g_351}}};
    VECTOR(uint64_t, 8) l_1583 = (VECTOR(uint64_t, 8))(0xC07777018D79E2A3L, (VECTOR(uint64_t, 4))(0xC07777018D79E2A3L, (VECTOR(uint64_t, 2))(0xC07777018D79E2A3L, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0xC07777018D79E2A3L, 18446744073709551606UL);
    uint32_t *l_1598 = &p_1635->g_1570;
    uint32_t **l_1597 = &l_1598;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1329[i] = 0x0A2FEC96L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1555[i][j] = 4294967289UL;
    }
    if ((atomic_inc(&p_1635->l_atomic_input[4]) == 6))
    { /* block id: 525 */
        int32_t l_1202 = 0x1F911BAAL;
        uint8_t l_1203 = 1UL;
        int64_t l_1204 = 0x3CF82069B1B4FA9DL;
        uint64_t l_1205 = 18446744073709551615UL;
        l_1203 = (l_1202 = 0x7D806503L);
        ++l_1205;
        for (l_1203 = 20; (l_1203 != 48); l_1203 = safe_add_func_uint64_t_u_u(l_1203, 7))
        { /* block id: 531 */
            int32_t l_1210 = 0x5B6ABEF8L;
            int64_t l_1303 = 0x1A5A6BE635FBAE46L;
            int8_t l_1304 = 0x74L;
            VECTOR(uint32_t, 16) l_1305 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xAA27A6EAL), 0xAA27A6EAL), 0xAA27A6EAL, 4294967288UL, 0xAA27A6EAL, (VECTOR(uint32_t, 2))(4294967288UL, 0xAA27A6EAL), (VECTOR(uint32_t, 2))(4294967288UL, 0xAA27A6EAL), 4294967288UL, 0xAA27A6EAL, 4294967288UL, 0xAA27A6EAL);
            uint64_t l_1306[10][9] = {{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L},{0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L,0UL,0x10681A1B86A593E2L,0x0421F9DF7CA67162L,0x10681A1B86A593E2L,0UL,0x432AEA5C6B0C2A01L,0x432AEA5C6B0C2A01L}};
            int64_t l_1307 = 0x35F8FAFC4FE5AA33L;
            int i, j;
            for (l_1210 = 0; (l_1210 == 16); l_1210++)
            { /* block id: 534 */
                VECTOR(int32_t, 8) l_1213 = (VECTOR(int32_t, 8))(0x01B087A2L, (VECTOR(int32_t, 4))(0x01B087A2L, (VECTOR(int32_t, 2))(0x01B087A2L, 1L), 1L), 1L, 0x01B087A2L, 1L);
                int8_t l_1214 = 0x59L;
                uint32_t l_1215 = 0xA14D8EEFL;
                uint16_t l_1250 = 65530UL;
                uint32_t l_1251 = 2UL;
                uint8_t l_1252 = 0x06L;
                uint32_t l_1253 = 0x95AF2996L;
                VECTOR(int32_t, 8) l_1254 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5B3AE9EDL), 0x5B3AE9EDL), 0x5B3AE9EDL, (-7L), 0x5B3AE9EDL);
                VECTOR(int32_t, 2) l_1255 = (VECTOR(int32_t, 2))(0x73E77679L, 0x1EECE839L);
                VECTOR(int32_t, 16) l_1256 = (VECTOR(int32_t, 16))(0x29A4A1A0L, (VECTOR(int32_t, 4))(0x29A4A1A0L, (VECTOR(int32_t, 2))(0x29A4A1A0L, 1L), 1L), 1L, 0x29A4A1A0L, 1L, (VECTOR(int32_t, 2))(0x29A4A1A0L, 1L), (VECTOR(int32_t, 2))(0x29A4A1A0L, 1L), 0x29A4A1A0L, 1L, 0x29A4A1A0L, 1L);
                VECTOR(uint32_t, 16) l_1257 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x64F3134EL), 0x64F3134EL), 0x64F3134EL, 4294967294UL, 0x64F3134EL, (VECTOR(uint32_t, 2))(4294967294UL, 0x64F3134EL), (VECTOR(uint32_t, 2))(4294967294UL, 0x64F3134EL), 4294967294UL, 0x64F3134EL, 4294967294UL, 0x64F3134EL);
                VECTOR(uint32_t, 16) l_1258 = (VECTOR(uint32_t, 16))(0x4636B20BL, (VECTOR(uint32_t, 4))(0x4636B20BL, (VECTOR(uint32_t, 2))(0x4636B20BL, 1UL), 1UL), 1UL, 0x4636B20BL, 1UL, (VECTOR(uint32_t, 2))(0x4636B20BL, 1UL), (VECTOR(uint32_t, 2))(0x4636B20BL, 1UL), 0x4636B20BL, 1UL, 0x4636B20BL, 1UL);
                VECTOR(uint16_t, 8) l_1259 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL);
                VECTOR(uint16_t, 4) l_1260 = (VECTOR(uint16_t, 4))(0x6660L, (VECTOR(uint16_t, 2))(0x6660L, 65526UL), 65526UL);
                VECTOR(uint16_t, 2) l_1261 = (VECTOR(uint16_t, 2))(0UL, 65531UL);
                VECTOR(uint16_t, 16) l_1262 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xD932L), 0xD932L), 0xD932L, 65526UL, 0xD932L, (VECTOR(uint16_t, 2))(65526UL, 0xD932L), (VECTOR(uint16_t, 2))(65526UL, 0xD932L), 65526UL, 0xD932L, 65526UL, 0xD932L);
                int32_t l_1263[4] = {0x226251A2L,0x226251A2L,0x226251A2L,0x226251A2L};
                uint64_t l_1264 = 0x957CD74FD8C42962L;
                uint64_t l_1265 = 18446744073709551612UL;
                VECTOR(uint32_t, 4) l_1266 = (VECTOR(uint32_t, 4))(0x4CE1EA15L, (VECTOR(uint32_t, 2))(0x4CE1EA15L, 0x8F341175L), 0x8F341175L);
                uint32_t l_1267[1][8] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                uint64_t l_1268 = 5UL;
                int16_t l_1269 = 0L;
                uint8_t l_1270 = 0xF5L;
                int32_t l_1271 = 1L;
                int32_t l_1272 = (-1L);
                uint32_t l_1273 = 0UL;
                int64_t l_1274[8][9][3] = {{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}},{{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L},{0x5E30BCF4CEF05346L,0x5E30BCF4CEF05346L,8L}}};
                int32_t l_1275 = 0x5925405FL;
                int i, j, k;
                l_1214 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1213.s2134)).even)).xyyx)).w;
                if (l_1215)
                { /* block id: 536 */
                    VECTOR(int32_t, 2) l_1216 = (VECTOR(int32_t, 2))((-1L), 0x4312A4AAL);
                    int32_t l_1218 = 6L;
                    int32_t *l_1217 = &l_1218;
                    int32_t *l_1219 = &l_1218;
                    int32_t *l_1220[6][2] = {{&l_1218,&l_1218},{&l_1218,&l_1218},{&l_1218,&l_1218},{&l_1218,&l_1218},{&l_1218,&l_1218},{&l_1218,&l_1218}};
                    int16_t l_1221[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                    int32_t l_1222 = (-1L);
                    int i, j;
                    l_1220[0][1] = (l_1219 = (l_1217 = (((VECTOR(int32_t, 8))(l_1216.yxxyyyxx)).s6 , (void*)0)));
                    l_1213.s3 ^= 0x135F6DA7L;
                    l_1213.s2 &= l_1221[2][1];
                    l_1213.s2 |= l_1222;
                }
                else
                { /* block id: 543 */
                    int64_t l_1223 = (-1L);
                    VECTOR(int32_t, 2) l_1224 = (VECTOR(int32_t, 2))(0x4DD78689L, 0x6DE1478DL);
                    uint32_t l_1225 = 0x27FD2B99L;
                    VECTOR(int32_t, 4) l_1226 = (VECTOR(int32_t, 4))(0x0B3B62FCL, (VECTOR(int32_t, 2))(0x0B3B62FCL, 0L), 0L);
                    VECTOR(int16_t, 16) l_1227 = (VECTOR(int16_t, 16))(0x6C3FL, (VECTOR(int16_t, 4))(0x6C3FL, (VECTOR(int16_t, 2))(0x6C3FL, 0x521DL), 0x521DL), 0x521DL, 0x6C3FL, 0x521DL, (VECTOR(int16_t, 2))(0x6C3FL, 0x521DL), (VECTOR(int16_t, 2))(0x6C3FL, 0x521DL), 0x6C3FL, 0x521DL, 0x6C3FL, 0x521DL);
                    VECTOR(int16_t, 8) l_1228 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-6L)), (-6L)), (-6L), 2L, (-6L));
                    VECTOR(int16_t, 8) l_1229 = (VECTOR(int16_t, 8))(0x57F8L, (VECTOR(int16_t, 4))(0x57F8L, (VECTOR(int16_t, 2))(0x57F8L, 0x49C7L), 0x49C7L), 0x49C7L, 0x57F8L, 0x49C7L);
                    VECTOR(int16_t, 16) l_1230 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x1A16L), 0x1A16L), 0x1A16L, (-7L), 0x1A16L, (VECTOR(int16_t, 2))((-7L), 0x1A16L), (VECTOR(int16_t, 2))((-7L), 0x1A16L), (-7L), 0x1A16L, (-7L), 0x1A16L);
                    VECTOR(int16_t, 8) l_1231 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x6061L), 0x6061L), 0x6061L, (-10L), 0x6061L);
                    VECTOR(int16_t, 16) l_1232 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int16_t, 2))((-1L), 2L), (VECTOR(int16_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                    VECTOR(int16_t, 4) l_1233 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-7L)), (-7L));
                    VECTOR(int16_t, 2) l_1234 = (VECTOR(int16_t, 2))(0x70C7L, 8L);
                    uint32_t l_1235 = 0UL;
                    int32_t l_1238 = 4L;
                    int8_t l_1239 = (-7L);
                    uint32_t l_1240 = 0x7B7D93D8L;
                    int8_t l_1241 = (-6L);
                    int64_t l_1242 = (-5L);
                    uint8_t l_1243 = 0x2FL;
                    int32_t l_1244 = 5L;
                    uint16_t l_1245 = 65535UL;
                    int32_t l_1246 = (-1L);
                    uint64_t l_1247 = 8UL;
                    uint32_t l_1248 = 4294967290UL;
                    uint64_t l_1249 = 0x8CA55AB72FE1CBFCL;
                    int i;
                    l_1213.s3 = l_1223;
                    l_1213.s5 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1224.yxyxxyyy)), l_1225, 0x6CD776BEL, ((VECTOR(int32_t, 4))(l_1226.zyxx)), 0x28ACC601L, 1L)).sea, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x7F4FL, ((VECTOR(int16_t, 2))(l_1227.sec)), 7L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_1228.s7403)).odd, ((VECTOR(int16_t, 16))(l_1229.s1271142254662650)).sde))).xyyyyxyyyxyxxyxx)).odd, ((VECTOR(int16_t, 4))(l_1230.s51dc)).xxxwzwxz))).even)))), 0x02DBL, (-6L), ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))((-1L), (-3L))).xxyxxyxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1231.s57733401)).s35)).xxyy, ((VECTOR(int16_t, 2))(l_1232.sfc)).yyxy))).xyyxywxz)).s3304442245065512)).even, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(l_1233.wzyyxwzw)), ((VECTOR(int16_t, 8))(l_1234.yxxxyxyx)))))))).lo, ((VECTOR(int16_t, 4))(1L, (l_1239 ^= ((l_1235--) , l_1238)), 0x5DC5L, (-3L)))))).hi)), ((VECTOR(int16_t, 4))((l_1241 = l_1240), ((VECTOR(int16_t, 2))(0x6997L, 0x22C7L)), 0x4196L)), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(0x541DL, ((l_1244 = (l_1242 , l_1243)) , ((l_1246 &= l_1245) , l_1247)), ((VECTOR(int16_t, 2))((-8L))), (-1L), l_1248, 7L, 0L)).s15, (int16_t)0x1836L, (int16_t)0x1569L))), 0x7833L, ((VECTOR(int16_t, 2))((-7L))), 0x352FL, 2L, l_1249, 0L, 0x2B7BL)))).sac, ((VECTOR(int16_t, 2))(1L))))), 0x27E5L, ((VECTOR(int16_t, 2))((-1L))), 0x12C7L)).s7c4b)), ((VECTOR(uint16_t, 4))(0UL))))).hi))).xxyx, ((VECTOR(int32_t, 4))(0x148A1F49L))))).hi)), 0x7D06DD89L, 1L)).y;
                }
                if ((l_1275 |= (l_1250 , (l_1274[3][0][0] = ((VECTOR(int32_t, 8))(l_1251, (l_1272 ^= (l_1271 = ((l_1252 , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x1935043BC8D7D10FL, 1L)), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(0x1AE9967AB8CD5D9EL, l_1253, 0x38BA1B1F936D5A8EL, (-2L), ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(l_1254.s76636313)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(0xD603EC78L, 4294967290UL)), ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(l_1255.xyyxyxyy)).s6367471454223453, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1256.seb4f9dbe)).s26)).yyxxxyxx)).s6101102030433460))).se643)), ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(l_1257.s9c2ea63f8f140907)).sa1, ((VECTOR(uint32_t, 2))(l_1258.se2))))), 4294967294UL, 1UL)), ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(0x186BL, 9UL)).xyyy, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(l_1259.s0002534002746032)).s49, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1260.yzxx)).even))))).xyyyyyyxyxyxyxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_1261.yyyxyxyx)))).s7570351360423006)), ((VECTOR(uint16_t, 8))(l_1262.s97ee1992)).s2251471310722067))).sf3a0))).wxwywxyw))).s32))).yyyx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1263[1], 4294967295UL, (l_1265 &= l_1264), ((VECTOR(uint32_t, 2))(l_1266.zz)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xAF1763F5L, 0xDF0E243CL)).yxxyyxyy)).s1, 0xBF4AFEEBL, 0x2189C3ABL)).s41)), 4294967295UL, 1UL)).lo))))).s27, (int64_t)(l_1268 = (l_1204 = l_1267[0][3])), (int64_t)l_1269))), ((VECTOR(int64_t, 2))(0x378735E9F8868E82L)), 0x5005B5B2E6D0C3DBL, (-1L))).s3) , l_1270))), l_1273, ((VECTOR(int32_t, 2))(0x5B21CDDEL)), 0L, 1L, 1L)).s1))))
                { /* block id: 559 */
                    VECTOR(int64_t, 4) l_1276 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L);
                    uint16_t l_1288 = 0xCFB6L;
                    int i;
                    if (((l_1274[3][6][1] &= (GROUP_DIVERGE(1, 1) , ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(l_1276.wxwzwwwy)).s53, ((VECTOR(int64_t, 4))(0x3D06B6F4A3FBDBC3L, 0x6A51F53BA4DC13A6L, (-7L), 0L)).even))).hi)) , (-3L)))
                    { /* block id: 561 */
                        VECTOR(int32_t, 16) l_1277 = (VECTOR(int32_t, 16))(0x08D8EE84L, (VECTOR(int32_t, 4))(0x08D8EE84L, (VECTOR(int32_t, 2))(0x08D8EE84L, 5L), 5L), 5L, 0x08D8EE84L, 5L, (VECTOR(int32_t, 2))(0x08D8EE84L, 5L), (VECTOR(int32_t, 2))(0x08D8EE84L, 5L), 0x08D8EE84L, 5L, 0x08D8EE84L, 5L);
                        int i;
                        l_1277.s2 = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_1277.s953e3838b916038f)).sba))).lo;
                    }
                    else
                    { /* block id: 563 */
                        int8_t l_1278 = (-1L);
                        uint64_t l_1279 = 7UL;
                        int8_t l_1282 = 0x21L;
                        uint32_t l_1283 = 0x23716AF5L;
                        VECTOR(int32_t, 4) l_1286 = (VECTOR(int32_t, 4))(0x53A05BEEL, (VECTOR(int32_t, 2))(0x53A05BEEL, 4L), 4L);
                        int32_t *l_1287 = (void*)0;
                        int i;
                        l_1279--;
                        ++l_1283;
                        l_1213.s7 ^= ((VECTOR(int32_t, 8))(l_1286.zwwwzwxw)).s4;
                        l_1287 = (void*)0;
                    }
                    ++l_1288;
                    for (l_1276.w = 0; (l_1276.w == 22); l_1276.w++)
                    { /* block id: 572 */
                        int32_t l_1294 = 0L;
                        int32_t *l_1293 = &l_1294;
                        int32_t *l_1295[5][9][4] = {{{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294}},{{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294}},{{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294}},{{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294}},{{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294},{&l_1294,(void*)0,(void*)0,&l_1294}}};
                        uint32_t l_1296[1][8][3];
                        uint32_t l_1299[3][2] = {{4294967294UL,4294967294UL},{4294967294UL,4294967294UL},{4294967294UL,4294967294UL}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1296[i][j][k] = 0xDB667AABL;
                            }
                        }
                        l_1295[4][8][3] = l_1293;
                        l_1296[0][5][2]--;
                        l_1213.s6 = l_1299[1][1];
                    }
                }
                else
                { /* block id: 577 */
                    uint16_t l_1300 = 0xB35CL;
                    l_1300++;
                }
            }
            l_1307 = ((l_1303 , l_1304) , (((VECTOR(uint32_t, 8))(l_1305.s42771646)).s7 , l_1306[9][6]));
        }
        unsigned int result = 0;
        result += l_1202;
        result += l_1203;
        result += l_1204;
        result += l_1205;
        atomic_add(&p_1635->l_special_values[4], result);
    }
    else
    { /* block id: 583 */
        (1 + 1);
    }
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1635->g_1308.s11)))).odd)
    { /* block id: 586 */
        int32_t l_1315 = 0L;
        uint16_t *l_1318 = (void*)0;
        uint16_t *l_1319 = (void*)0;
        uint16_t *l_1320 = (void*)0;
        uint16_t *l_1321[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_1330 = 2L;
        int32_t **l_1345 = (void*)0;
        int32_t l_1369 = 0x5AB1F7DAL;
        int32_t l_1370 = 0x14E0A4ACL;
        int32_t l_1372 = 0x38B5536DL;
        int32_t l_1373 = 0L;
        int32_t l_1374 = 0x669DD656L;
        int32_t l_1375[6][5] = {{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L},{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L},{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L},{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L},{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L},{0x479A3691L,0x0DEE8FA0L,0x0DEE8FA0L,0x479A3691L,0x479A3691L}};
        uint8_t **l_1417 = &p_1635->g_534;
        int64_t *l_1443 = (void*)0;
        VECTOR(uint16_t, 16) l_1514 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL);
        uint32_t ***l_1542 = &p_1635->g_351;
        int i, j;
        if (((**p_1635->g_161) = (0xCA94226C63AFD241L || (((safe_sub_func_int32_t_s_s(0x4E0DE25AL, ((((~(safe_sub_func_int16_t_s_s(0x5ADBL, (safe_add_func_int8_t_s_s((((l_1315 ^ 0x287E59CAL) != (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(((l_1322 = (--(**p_1635->g_879))) | (((((+((safe_mul_func_int8_t_s_s((((**p_1635->g_139) || GROUP_DIVERGE(1, 1)) || ((-5L) == (p_16 ^ ((((((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_1635->g_101.z > p_15), l_1315)), 1UL)) <= p_1635->g_322) != l_1329[0]) , p_15) , (**p_1635->g_139)) == p_1635->g_1308.s2)))), 0x58L)) | 0x860DD57BL)) , 0x7E29L) & l_1330) == p_1635->g_1308.s6) & p_15)), ((VECTOR(uint64_t, 4))(0x93FD66B50398DF02L)), ((VECTOR(uint64_t, 4))(18446744073709551612UL)), ((VECTOR(uint64_t, 4))(0x3301B54D517E9904L)), ((VECTOR(uint64_t, 2))(18446744073709551608UL)), 0x32245A670FFFA23CL)).hi))).s4, l_1322, 18446744073709551606UL, 0x9118599FE9E35A4AL, FAKE_DIVERGE(p_1635->local_2_offset, get_local_id(2), 10), ((VECTOR(uint64_t, 2))(0x13A13609BCC75840L)), l_1331[1][0], 18446744073709551615UL, 0x13B0B83580AE79BFL, 0x9D644265B0DCC586L, 0x410DE33A6B2722ABL, ((VECTOR(uint64_t, 4))(0x92277C5A6CE73E8CL)))).s91)), ((VECTOR(uint64_t, 4))(1UL)), 1UL, 18446744073709551613UL)).s4 ^ p_14)) <= l_1329[3]), p_16))))) < p_14) , l_1315) , 0x547B50C4L))) ^ 0xBED1L) , l_1332))))
        { /* block id: 590 */
            uint8_t l_1336 = 3UL;
            VECTOR(int64_t, 8) l_1339 = (VECTOR(int64_t, 8))(0x3ACC2B1B27CD5122L, (VECTOR(int64_t, 4))(0x3ACC2B1B27CD5122L, (VECTOR(int64_t, 2))(0x3ACC2B1B27CD5122L, 0x4F9E974A69B505AEL), 0x4F9E974A69B505AEL), 0x4F9E974A69B505AEL, 0x3ACC2B1B27CD5122L, 0x4F9E974A69B505AEL);
            int32_t **l_1352 = &p_1635->g_162;
            int32_t l_1368[7];
            int64_t **l_1495 = &l_1443;
            volatile int32_t *l_1501 = (void*)0;
            int i;
            for (i = 0; i < 7; i++)
                l_1368[i] = 0x58D33C33L;
            for (p_1635->g_60 = 0; (p_1635->g_60 > 38); ++p_1635->g_60)
            { /* block id: 593 */
                int32_t ***l_1350[3][6] = {{&p_1635->g_161,&p_1635->g_161,(void*)0,&p_1635->g_161,&p_1635->g_161,&p_1635->g_161},{&p_1635->g_161,&p_1635->g_161,(void*)0,&p_1635->g_161,&p_1635->g_161,&p_1635->g_161},{&p_1635->g_161,&p_1635->g_161,(void*)0,&p_1635->g_161,&p_1635->g_161,&p_1635->g_161}};
                int32_t **l_1353 = &p_1635->g_162;
                uint64_t *l_1356[1][8][2];
                int64_t l_1371 = 0x6351F8CABDEEB3EDL;
                uint64_t l_1376 = 0x2E30CF2B686CF112L;
                int64_t *l_1390 = (void*)0;
                int64_t *l_1391 = &l_1371;
                uint8_t l_1392 = 254UL;
                int32_t l_1478 = 1L;
                VECTOR(int32_t, 16) l_1484 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2E2C4EEDL), 0x2E2C4EEDL), 0x2E2C4EEDL, 0L, 0x2E2C4EEDL, (VECTOR(int32_t, 2))(0L, 0x2E2C4EEDL), (VECTOR(int32_t, 2))(0L, 0x2E2C4EEDL), 0L, 0x2E2C4EEDL, 0L, 0x2E2C4EEDL);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1356[i][j][k] = &p_1635->g_303;
                    }
                }
                (1 + 1);
            }
        }
        else
        { /* block id: 647 */
            (*p_1635->g_162) |= (safe_lshift_func_int8_t_s_s((0L & FAKE_DIVERGE(p_1635->local_1_offset, get_local_id(1), 10)), 4));
            (*p_1635->g_161) = &p_14;
            (**l_1351) ^= (safe_add_func_uint32_t_u_u(0x7FD26061L, 0xA1D320DBL));
        }
        if (p_15)
        { /* block id: 652 */
            uint32_t *l_1518 = &l_1322;
            int32_t l_1529 = 0L;
            int32_t *l_1530 = &l_1374;
            (**l_1351) = ((VECTOR(int32_t, 4))(p_1635->g_1506.s9156)).z;
            (*p_1635->g_161) = func_30(((*p_1635->g_161) = (*p_1635->g_161)), ((((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1635->g_1507.yyyyyyyx)), 0x2425L, ((safe_div_func_int64_t_s_s((-9L), (l_1370 || (((((*l_1530) |= (l_1529 = (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(l_1514.s20ba)).y, (l_1370 |= (safe_add_func_uint8_t_u_u((l_1517[6] != (l_1518 = l_1518)), (safe_rshift_func_uint16_t_u_s(65535UL, (~((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((*p_1635->g_232), 65531UL, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(((((-1L) <= ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(3UL, FAKE_DIVERGE(p_1635->local_0_offset, get_local_id(0), 10))) , 0x6C6DL), 0xC158L)), 0x384AL)) < l_1372)) == p_16) & l_1373), ((VECTOR(uint16_t, 2))(0x220EL)), ((VECTOR(uint16_t, 2))(65526UL)), 9UL, 0x2AAFL, 65533UL)).s17, (uint16_t)1UL))).xxxxyyyx, ((VECTOR(uint16_t, 8))(0xDDF7L))))).s2, ((VECTOR(uint16_t, 2))(0xE5F6L)), p_14, 2UL, 8UL, 0x9D5FL, 0xF0EFL, ((VECTOR(uint16_t, 2))(0x692CL)), ((VECTOR(uint16_t, 4))(0x2670L)))).hi)).s42)).odd >= GROUP_DIVERGE(0, 1)) != 18446744073709551615UL))))))))) ^ p_15), p_16)))) , p_1635->g_777.s2) , (-6L)) == (-1L))))) ^ p_15), 5L, ((VECTOR(int16_t, 2))(0x607EL)), 3L, 0L, (-1L))).s3add, ((VECTOR(int16_t, 4))(0x3E36L))))).w <= p_15) , p_16), p_1635->g_161, p_1635);
        }
        else
        { /* block id: 660 */
            int8_t *l_1533 = (void*)0;
            int8_t *l_1534 = (void*)0;
            int8_t *l_1535 = &p_1635->g_153;
            int32_t *l_1543 = &l_1372;
            int32_t *l_1544 = (void*)0;
            int32_t *l_1545 = &l_1444[1][0][3];
            int32_t *l_1546 = (void*)0;
            int32_t *l_1547[8][5];
            int32_t l_1548 = 0x20CE672FL;
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1547[i][j] = &p_1635->g_1061[6][0][0];
            }
            (*p_1635->g_140) ^= ((p_14 || (safe_mod_func_int8_t_s_s(p_1635->g_1416.z, ((*l_1535) = 7L)))) | (((p_16 , ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((**l_1351) == (safe_lshift_func_int16_t_s_s(0x2A4EL, p_16))), ((((void*)0 != l_1542) >= p_15) , 0xB8L))), 9)) <= FAKE_DIVERGE(p_1635->local_2_offset, get_local_id(2), 10))) <= p_16) , p_1635->g_322));
            --p_1635->g_1549;
        }
    }
    else
    { /* block id: 665 */
        int32_t *l_1554 = &l_1332;
        int32_t l_1556 = (-1L);
        int32_t **l_1557[10];
        uint32_t *l_1569 = &p_1635->g_1570;
        int8_t *l_1573 = &p_1635->g_153;
        VECTOR(int64_t, 2) l_1594 = (VECTOR(int64_t, 2))(0x5D4C9C6AA23257C8L, 0x30317D6DD49BC024L);
        int8_t *l_1595[4];
        uint64_t *l_1596[5] = {&p_1635->g_60,&p_1635->g_60,&p_1635->g_60,&p_1635->g_60,&p_1635->g_60};
        int i;
        for (i = 0; i < 10; i++)
            l_1557[i] = &p_1635->g_162;
        for (i = 0; i < 4; i++)
            l_1595[i] = (void*)0;
        (*l_1351) = func_30(((safe_add_func_uint16_t_u_u(((p_15 | 0x2BE1EEE3722CAEE5L) & (((((void*)0 == l_1554) >= (l_1555[3][0] ^= 0x69E0L)) >= p_14) >= ((VECTOR(int16_t, 4))(l_1556, (-9L), (-5L), 4L)).y)), (0x9468L & (-1L)))) , (*l_1351)), p_15, l_1557[6], p_1635);
        (**p_1635->g_139) = (((**l_1351) = (safe_mod_func_int64_t_s_s(((((safe_add_func_int64_t_s_s((p_15 , ((((**p_1635->g_644) = (((VECTOR(int32_t, 4))(p_1635->g_1562.ywxy)).z , (*p_1635->g_645))) == (void*)0) , (0x79FFC0EBL && p_16))), (l_1563 != l_1563))) > (safe_mod_func_int16_t_s_s(p_15, ((VECTOR(int16_t, 2))(l_1566.s4a)).even))) == 18446744073709551614UL) , (-6L)), (-3L)))) , p_15);
        (**p_1635->g_139) = (((((**l_1351) = ((p_1635->g_1335.y = (safe_sub_func_uint64_t_u_u((GROUP_DIVERGE(2, 1) ^ ((p_1635->g_1416.x , (--(*l_1569))) , ((*l_1573) = p_1635->g_1168.sd))), (((safe_mul_func_int8_t_s_s(0x5AL, (p_1635->g_978.s5 &= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u(((void*)0 != l_1582[2][0][4]), ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(l_1583.s1225)).xxxzywzwxyzxwzzw, ((VECTOR(uint64_t, 2))(9UL, 0x9CE2661BFA64CA21L)).xyxxyyxyxxyxyyyy))).s3)) , ((p_16 , GROUP_DIVERGE(2, 1)) == (safe_lshift_func_int8_t_s_u((l_1329[3] |= ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((**l_1351), ((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (((safe_mul_func_int8_t_s_s((((0x91DCB937CAE400DFL <= ((VECTOR(int64_t, 2))(l_1594.yy)).odd) <= (l_1444[1][0][3] = (((**p_1635->g_879) <= (**l_1351)) <= (*p_1635->g_162)))) < (-8L)), (-5L))) & 0L) , p_16))) & p_16))), p_16)) == 0xE0AAL)), 5)))) < (**l_1351)), (-4L))), 1))))) , p_15) <= 0L)))) >= 0x6C5F28EC5A0386BBL)) , (**l_1351)) , 18446744073709551615UL) , (*p_1635->g_162));
        (*p_1635->g_161) = (*l_1351);
    }
    (*p_1635->g_140) |= ((**l_1351) && (((*l_1597) = l_1517[6]) != l_1517[6]));
    return &p_1635->g_162;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_1190 p_1635->g_80 p_1635->g_1195 p_1635->g_161 p_1635->g_162 p_1635->g_140 p_1635->g_141
 * writes: p_1635->g_1190 p_1635->g_80 p_1635->g_1195 p_1635->g_1061 p_1635->g_577 p_1635->g_141
 */
int32_t  func_25(int32_t * p_26, int32_t * p_27, uint64_t  p_28, int32_t ** p_29, struct S0 * p_1635)
{ /* block id: 510 */
    int32_t *l_1189[10][2][3] = {{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}},{{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910},{&p_1635->g_910,&p_1635->g_910,&p_1635->g_910}}};
    uint32_t ***l_1198 = (void*)0;
    int i, j, k;
    p_1635->g_1190--;
    for (p_1635->g_80 = 0; (p_1635->g_80 != (-20)); p_1635->g_80 = safe_sub_func_uint16_t_u_u(p_1635->g_80, 2))
    { /* block id: 514 */
        volatile uint64_t ***l_1197 = &p_1635->g_1195;
        int32_t l_1199 = 0x230C98B7L;
        (*l_1197) = p_1635->g_1195;
        (*p_1635->g_140) = (l_1199 = ((**p_1635->g_161) = (((void*)0 != l_1198) , (-1L))));
    }
    return (*p_1635->g_140);
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_1168 p_1635->g_1169 p_1635->g_987 p_1635->g_713 p_1635->g_127 p_1635->g_103 p_1635->g_1021 p_1635->g_910 p_1635->g_1188 p_1635->g_644 p_1635->g_645
 * writes: p_1635->g_352 p_1635->g_153 p_1635->g_713 p_1635->g_910 p_1635->g_162
 */
int32_t * func_30(int32_t * p_31, uint32_t  p_32, int32_t ** p_33, struct S0 * p_1635)
{ /* block id: 501 */
    VECTOR(int8_t, 2) l_1170 = (VECTOR(int8_t, 2))((-1L), (-1L));
    uint32_t *l_1173 = &p_1635->g_257[4];
    uint32_t **l_1174 = &p_1635->g_352[2][3];
    int64_t *l_1176 = (void*)0;
    int64_t **l_1175 = &l_1176;
    int8_t *l_1181 = &p_1635->g_153;
    uint8_t *l_1182 = &p_1635->g_713;
    int32_t *l_1183 = &p_1635->g_910;
    int32_t *l_1184[6] = {&p_1635->g_1061[3][0][4],&p_1635->g_1061[2][1][3],&p_1635->g_1061[3][0][4],&p_1635->g_1061[3][0][4],&p_1635->g_1061[2][1][3],&p_1635->g_1061[3][0][4]};
    int16_t **l_1185 = &p_1635->g_1006;
    int16_t ***l_1186[8];
    int16_t **l_1187[8][5] = {{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0},{&p_1635->g_1006,(void*)0,&p_1635->g_1006,&p_1635->g_1006,(void*)0}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_1186[i] = &p_1635->g_645;
    (*l_1183) &= ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65526UL, 65531UL)), 0x411AL, 0xFC00L)).z < ((((((GROUP_DIVERGE(0, 1) || ((*l_1182) |= ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(0xD1L, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1635->g_1168.s15c83ef27330be0c)).hi)).s20, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(p_1635->g_1169.xy)).xxyx))).ywyxwyxwyzzzywyz))).odd)).s66, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(l_1170.xxxxyxxy)).even, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((safe_sub_func_int8_t_s_s(((*l_1181) = ((p_32 , (l_1173 == ((*l_1174) = l_1173))) > (p_32 == (((l_1175 != &l_1176) | l_1170.x) || (safe_div_func_int16_t_s_s(l_1170.x, (safe_mod_func_uint8_t_u_u(0x36L, p_1635->g_987.x)))))))), p_32)), ((VECTOR(int8_t, 4))(0x36L)), (-8L), ((VECTOR(int8_t, 8))(0x54L)), 8L, (-1L))).even)).s54)).xyxyyxyy)).s36, ((VECTOR(int8_t, 2))(0L))))))), 0x62L, 0L)))).zzxyzwzzwxzxwxxw)).hi, (int8_t)0x61L))).s0546336350065161, ((VECTOR(int8_t, 16))(0L)), ((VECTOR(int8_t, 16))(0x4DL))))).s7505))).wwyxyzxyxyyzxwyz))).s1148, ((VECTOR(uint8_t, 4))(0xC1L))))).hi))).xxyy, ((VECTOR(uint8_t, 4))(0x23L))))).lo, ((VECTOR(uint8_t, 2))(0x1FL)), ((VECTOR(uint8_t, 2))(0x95L))))).xyyxxyyxxyyyxxyy, ((VECTOR(uint8_t, 16))(1UL)), ((VECTOR(uint8_t, 16))(0xE0L))))).s770b, ((VECTOR(uint8_t, 4))(248UL)), ((VECTOR(uint8_t, 4))(0x9CL))))), 0x07L, 1UL, 0x98L)).s3276103117273675, ((VECTOR(uint8_t, 16))(5UL)), ((VECTOR(uint8_t, 16))(0x4FL))))).sf)) ^ 0x346BL) , p_32) , l_1170.x) < p_1635->g_127.x) == p_1635->g_103)) < p_1635->g_1021.y);
    (*p_33) = l_1184[2];
    atomic_add(&p_1635->l_atomic_reduction[0], (GROUP_DIVERGE(2, 1) , ((l_1187[3][3] = l_1185) != (((VECTOR(uint64_t, 8))(p_1635->g_1188.yxxyxxyx)).s4 , (*p_1635->g_644)))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1635->v_collective += p_1635->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_1184[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_153 p_1635->g_140 p_1635->g_162 p_1635->g_3 p_1635->g_1085 p_1635->g_139 p_1635->g_1155 p_1635->g_777 p_1635->g_141
 * writes: p_1635->g_141 p_1635->g_348
 */
int32_t ** func_34(uint64_t  p_35, int32_t ** p_36, uint32_t  p_37, uint64_t  p_38, struct S0 * p_1635)
{ /* block id: 432 */
    int32_t ***l_1072 = (void*)0;
    int32_t l_1079[5][3] = {{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L},{8L,8L,8L}};
    uint16_t **l_1157 = &p_1635->g_232;
    uint16_t ***l_1156 = &l_1157;
    VECTOR(int16_t, 2) l_1160 = (VECTOR(int16_t, 2))((-2L), 0x251CL);
    int64_t *l_1164 = &p_1635->g_167;
    int64_t **l_1163 = &l_1164;
    int32_t **l_1167 = &p_1635->g_162;
    int i, j;
    (*p_1635->g_140) = (safe_rshift_func_int16_t_s_u((-1L), (safe_rshift_func_int8_t_s_u((((l_1072 = l_1072) == ((4294967289UL || FAKE_DIVERGE(p_1635->local_2_offset, get_local_id(2), 10)) , &p_36)) >= p_1635->g_153), (safe_sub_func_int32_t_s_s((-6L), (safe_mul_func_int8_t_s_s(((FAKE_DIVERGE(p_1635->group_2_offset, get_group_id(2), 10) ^ (safe_add_func_int8_t_s_s(0x07L, (p_37 < ((l_1079[1][2] , &p_1635->g_60) != &p_1635->g_60))))) , 0x67L), l_1079[0][2]))))))));
    for (p_38 = 0; (p_38 < 6); p_38 = safe_add_func_int32_t_s_s(p_38, 4))
    { /* block id: 437 */
        if ((atomic_inc(&p_1635->l_atomic_input[9]) == 2))
        { /* block id: 439 */
            int32_t *l_1082 = (void*)0;
            l_1082 = l_1082;
            unsigned int result = 0;
            atomic_add(&p_1635->l_special_values[9], result);
        }
        else
        { /* block id: 441 */
            (1 + 1);
        }
        (**p_1635->g_139) = ((safe_sub_func_uint32_t_u_u(p_38, (*p_1635->g_162))) , ((VECTOR(int32_t, 16))(p_1635->g_1085.zyzxyxxzwwwxzxyx)).s9);
    }
    if ((atomic_inc(&p_1635->l_atomic_input[14]) == 9))
    { /* block id: 447 */
        int32_t l_1086 = 0x299E123FL;
        uint32_t l_1147 = 7UL;
        int32_t l_1150 = 0x04F0C5D0L;
        int32_t *l_1151 = &l_1086;
        uint8_t l_1152 = 0xC1L;
        for (l_1086 = 9; (l_1086 > (-7)); --l_1086)
        { /* block id: 450 */
            int32_t l_1089 = 0x0906EB1BL;
            for (l_1089 = 0; (l_1089 > (-12)); l_1089 = safe_sub_func_uint8_t_u_u(l_1089, 5))
            { /* block id: 453 */
                VECTOR(int32_t, 8) l_1092 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
                VECTOR(uint8_t, 16) l_1093 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                int32_t l_1094 = 0x1EA9FF38L;
                int32_t *l_1095 = (void*)0;
                int32_t *l_1096 = (void*)0;
                uint8_t l_1097 = 0xDDL;
                VECTOR(int64_t, 4) l_1098 = (VECTOR(int64_t, 4))(0x42E0B19C9668B9D2L, (VECTOR(int64_t, 2))(0x42E0B19C9668B9D2L, 0x5D6745A3AEC6B563L), 0x5D6745A3AEC6B563L);
                VECTOR(int64_t, 8) l_1099 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
                uint64_t l_1100 = 18446744073709551615UL;
                uint32_t l_1101 = 0xBD200018L;
                VECTOR(int64_t, 2) l_1102 = (VECTOR(int64_t, 2))(0x3E7DB3EAC474578CL, 0x0E9F52551ED2985CL);
                VECTOR(int64_t, 2) l_1103 = (VECTOR(int64_t, 2))(7L, 0x1CF925DB1B5E69B8L);
                VECTOR(int64_t, 16) l_1104 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L), (VECTOR(int64_t, 2))(1L, (-3L)), (VECTOR(int64_t, 2))(1L, (-3L)), 1L, (-3L), 1L, (-3L));
                uint32_t l_1105 = 0x0D6FE8B3L;
                uint32_t l_1106[4] = {8UL,8UL,8UL,8UL};
                uint8_t l_1107 = 0xFFL;
                int16_t l_1108 = (-9L);
                VECTOR(int64_t, 4) l_1109 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x6450F997CB2EBED3L), 0x6450F997CB2EBED3L);
                VECTOR(int64_t, 8) l_1110 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 2L), 2L), 2L, 1L, 2L);
                VECTOR(int64_t, 8) l_1111 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 3L), 3L), 3L, 0L, 3L);
                uint16_t l_1112 = 1UL;
                uint64_t l_1113 = 18446744073709551615UL;
                int32_t *l_1114 = (void*)0;
                int32_t *l_1115 = (void*)0;
                int32_t l_1116[1][1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1116[i][j][k] = 8L;
                    }
                }
                l_1094 = (l_1092.s5 , (l_1093.s5 |= 0x33C55A50L));
                l_1096 = l_1095;
                l_1114 = (l_1097 , (l_1115 = (((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1098.wxwx)), 0L, 0x003D087017BEAD55L, (-3L), 2L)).s0352020075277100, ((VECTOR(int64_t, 2))((-1L), 5L)).xxxxyyyxxyxyyxyx))).sf7, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x16A10624398AF257L, 1L, ((VECTOR(int64_t, 4))(l_1099.s0601)), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(l_1100, ((VECTOR(int64_t, 2))(0x2931072DEFB7C732L, 6L)), 0x3DA77F9C99316A44L)).lo, (int64_t)l_1101))), ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(0x7DB39B58AFAA3975L, ((VECTOR(int64_t, 4))(l_1102.yxxy)), 0x48C648F0E50033B6L, 4L, ((VECTOR(int64_t, 8))(l_1103.yxyxxxyx)), 1L)), ((VECTOR(int64_t, 4))(l_1104.s33f7)).ywxzxwyxxwzxxxyw))).sc2, ((VECTOR(int64_t, 8))((l_1105 , ((VECTOR(int64_t, 2))(0x638231826904753EL, 0x743B720A821EBDD1L)).lo), (l_1108 = (l_1106[2] , l_1107)), (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_1109.zz)))).yxxyyxxyyxyyxyxx, ((VECTOR(int64_t, 4))(l_1110.s0456)).xwxxwywyyzwxyzyz, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(l_1111.s70)), (int64_t)(l_1113 ^= l_1112)))))).yyyyxxyxxxyyyxxx))).s13)), ((VECTOR(int64_t, 2))(1L)), (-1L))).s36, ((VECTOR(int64_t, 2))((-1L)))))), 0x00AABA883344E6B1L, ((VECTOR(int64_t, 4))(0x3231ECC04AF2BCF6L)), 0x4485DA5BD463C619L)).lo)).lo)).hi, ((VECTOR(int64_t, 2))(0x0053E59725FD05A4L))))).xxxxyxyy)).s32)), ((VECTOR(int64_t, 2))(0L))))).hi , l_1114)));
                if (l_1116[0][0][0])
                { /* block id: 461 */
                    int64_t l_1117[8][8][4] = {{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}},{{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L},{0x76FE9639A5DD16BFL,(-9L),0L,0L}}};
                    int8_t l_1118[6];
                    int32_t l_1119 = 0x0F84FDD0L;
                    int16_t l_1120 = 0x5A19L;
                    int32_t l_1121 = 0x5E8B88DCL;
                    uint32_t l_1122[2];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1118[i] = 1L;
                    for (i = 0; i < 2; i++)
                        l_1122[i] = 4294967295UL;
                    --l_1122[0];
                    for (l_1120 = 0; (l_1120 <= (-3)); l_1120--)
                    { /* block id: 465 */
                        uint32_t l_1127[1][8] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
                        uint64_t l_1128 = 0x453B85E67B7B078BL;
                        int32_t l_1129 = 1L;
                        uint8_t l_1130[4][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                        int i, j;
                        l_1129 ^= (l_1128 |= l_1127[0][5]);
                        l_1130[3][0] = (-6L);
                    }
                }
                else
                { /* block id: 470 */
                    int64_t l_1131 = (-3L);
                    VECTOR(int8_t, 8) l_1132 = (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x10L), 0x10L), 0x10L, 0x4CL, 0x10L);
                    int16_t l_1133 = 0x430AL;
                    uint32_t l_1134 = 0UL;
                    int i;
                    l_1131 = 4L;
                    l_1134 &= (l_1132.s3 , l_1133);
                    for (l_1133 = (-19); (l_1133 == (-7)); l_1133++)
                    { /* block id: 475 */
                        int32_t l_1137 = (-4L);
                        int32_t l_1139 = 0L;
                        int32_t *l_1138[4] = {&l_1139,&l_1139,&l_1139,&l_1139};
                        uint8_t l_1140 = 255UL;
                        int i;
                        l_1092.s0 &= 0x611CD211L;
                        l_1137 = 7L;
                        l_1115 = l_1138[1];
                        l_1092.s4 &= ((*l_1115) = l_1140);
                    }
                    for (l_1132.s5 = 1; (l_1132.s5 > (-24)); l_1132.s5--)
                    { /* block id: 484 */
                        uint8_t l_1143 = 0xADL;
                        int8_t l_1144 = 0x44L;
                        int32_t l_1145 = 0x0A24FC61L;
                        uint64_t l_1146 = 18446744073709551613UL;
                        l_1144 &= l_1143;
                        l_1146 = l_1145;
                    }
                }
            }
        }
        --l_1147;
        l_1151 = (l_1150 , (void*)0);
        ++l_1152;
        unsigned int result = 0;
        result += l_1086;
        result += l_1147;
        result += l_1150;
        result += l_1152;
        atomic_add(&p_1635->l_special_values[14], result);
    }
    else
    { /* block id: 494 */
        (1 + 1);
    }
    (**p_1635->g_139) = (((VECTOR(int32_t, 8))(0x5C923F04L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(p_1635->g_1155.sb504)), ((VECTOR(int32_t, 16))(6L, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((((void*)0 == l_1156) | (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-1L), 1L, l_1079[4][0], (safe_sub_func_int64_t_s_s(((void*)0 != &p_1635->g_261), p_1635->g_777.s4)), ((VECTOR(int16_t, 4))(l_1160.yyyy)))))).hi)).w || (safe_add_func_int64_t_s_s((p_1635->g_348.x = ((((*l_1163) = &p_1635->g_167) != &p_1635->g_579) , (safe_add_func_int8_t_s_s(0x13L, 0x30L)))), 0x1FFAF4ECD9C1C2A8L)))), (**p_36), 0x75CD6E18L, 0x69416BF6L)).xzwwxzxz)), (int32_t)(**p_1635->g_139)))), 1L, (-6L), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))((-4L))), (-1L))).s8a7b))), ((VECTOR(int32_t, 2))(0x04BC9492L)), (-2L))).s3 == (**p_36));
    return l_1167;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_869 p_1635->g_232 p_1635->g_876 p_1635->g_101 p_1635->g_878 p_1635->g_577 p_1635->g_80 p_1635->g_713 p_1635->g_579 p_1635->g_140 p_1635->g_335 p_1635->g_161 p_1635->g_162 p_1635->g_3 p_1635->g_139 p_1635->g_141 p_1635->g_322 p_1635->g_127 p_1635->g_8 p_1635->g_978 p_1635->g_910 p_1635->g_983 p_1635->g_984 p_1635->g_985 p_1635->g_987 p_1635->g_992 p_1635->g_477 p_1635->g_996 p_1635->g_1006 p_1635->g_1010 p_1635->g_1021 p_1635->g_259
 * writes: p_1635->g_103 p_1635->g_876 p_1635->g_577 p_1635->g_80 p_1635->g_322 p_1635->g_910 p_1635->g_141 p_1635->g_534 p_1635->g_167 p_1635->g_713 p_1635->g_257 p_1635->g_477 p_1635->g_259 p_1635->g_162 p_1635->g_1061 p_1635->g_130
 */
uint8_t  func_47(int64_t  p_48, int16_t  p_49, int16_t  p_50, struct S0 * p_1635)
{ /* block id: 362 */
    uint32_t *l_857 = &p_1635->g_257[5];
    int32_t l_860 = 0x72F80D6DL;
    VECTOR(int16_t, 2) l_868 = (VECTOR(int16_t, 2))(0x54EAL, (-1L));
    VECTOR(uint8_t, 16) l_886 = (VECTOR(uint8_t, 16))(0x16L, (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 0UL), 0UL), 0UL, 0x16L, 0UL, (VECTOR(uint8_t, 2))(0x16L, 0UL), (VECTOR(uint8_t, 2))(0x16L, 0UL), 0x16L, 0UL, 0x16L, 0UL);
    int32_t l_889 = 0L;
    VECTOR(int8_t, 8) l_890 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-4L)), (-4L)), (-4L), 8L, (-4L));
    VECTOR(int64_t, 16) l_900 = (VECTOR(int64_t, 16))(0x0603F4D7E246EB21L, (VECTOR(int64_t, 4))(0x0603F4D7E246EB21L, (VECTOR(int64_t, 2))(0x0603F4D7E246EB21L, 0L), 0L), 0L, 0x0603F4D7E246EB21L, 0L, (VECTOR(int64_t, 2))(0x0603F4D7E246EB21L, 0L), (VECTOR(int64_t, 2))(0x0603F4D7E246EB21L, 0L), 0x0603F4D7E246EB21L, 0L, 0x0603F4D7E246EB21L, 0L);
    int32_t l_909[1][4][9] = {{{0L,0x6D8063BEL,(-1L),(-5L),0x6D8063BEL,(-5L),(-1L),0x6D8063BEL,0L},{0L,0x6D8063BEL,(-1L),(-5L),0x6D8063BEL,(-5L),(-1L),0x6D8063BEL,0L},{0L,0x6D8063BEL,(-1L),(-5L),0x6D8063BEL,(-5L),(-1L),0x6D8063BEL,0L},{0L,0x6D8063BEL,(-1L),(-5L),0x6D8063BEL,(-5L),(-1L),0x6D8063BEL,0L}}};
    int32_t *l_913 = (void*)0;
    int64_t *l_927[4];
    VECTOR(int32_t, 2) l_934 = (VECTOR(int32_t, 2))((-7L), 0L);
    uint32_t *l_935 = (void*)0;
    uint8_t *l_962 = &p_1635->g_713;
    VECTOR(int8_t, 8) l_979 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L);
    VECTOR(int8_t, 2) l_980 = (VECTOR(int8_t, 2))(0x47L, 8L);
    VECTOR(int16_t, 8) l_986 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x16DCL), 0x16DCL), 0x16DCL, 1L, 0x16DCL);
    uint32_t l_1029 = 0xF0E3AD9FL;
    VECTOR(uint64_t, 4) l_1036 = (VECTOR(uint64_t, 4))(0xF8F514101B456DA4L, (VECTOR(uint64_t, 2))(0xF8F514101B456DA4L, 18446744073709551615UL), 18446744073709551615UL);
    VECTOR(uint8_t, 4) l_1042 = (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 0x34L), 0x34L);
    int32_t l_1065 = 1L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_927[i] = (void*)0;
    for (p_50 = (-8); (p_50 < 27); p_50 = safe_add_func_uint32_t_u_u(p_50, 6))
    { /* block id: 365 */
        VECTOR(uint16_t, 8) l_867 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xC145L), 0xC145L), 0xC145L, 65533UL, 0xC145L);
        uint8_t *l_870[6] = {&p_1635->g_713,&p_1635->g_713,&p_1635->g_713,&p_1635->g_713,&p_1635->g_713,&p_1635->g_713};
        int32_t l_871 = 0L;
        uint16_t ****l_877 = &p_1635->g_876[0][4][0];
        int32_t *l_880 = (void*)0;
        int32_t *l_881 = (void*)0;
        int32_t *l_882[5] = {&p_1635->g_577,&p_1635->g_577,&p_1635->g_577,&p_1635->g_577,&p_1635->g_577};
        VECTOR(uint8_t, 2) l_885 = (VECTOR(uint8_t, 2))(0UL, 255UL);
        int8_t *l_887 = (void*)0;
        int8_t *l_888[3];
        uint32_t l_893 = 0UL;
        int16_t *l_907 = (void*)0;
        int16_t *l_908 = &p_1635->g_322;
        int i;
        for (i = 0; i < 3; i++)
            l_888[i] = (void*)0;
        p_1635->g_80 &= (((l_857 == l_857) > ((((safe_sub_func_uint64_t_u_u(l_860, (safe_sub_func_int16_t_s_s((p_49 = ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_867.s0625473655006746)).lo)).s0061102065030126, ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_868.xx)), 1L, 0x0E7EL)).xyxxwyyyxzxzwxzz, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1635->g_869.xy)))).yxxyyyxxxyxxxxxy))), ((VECTOR(uint16_t, 2))(0x94EEL, 0xF0DBL)).xxyxyxyxyyyyyyxx))))).s9, 6)), ((l_871 = p_49) || l_867.s7))) <= ((VECTOR(int32_t, 16))(0x15767335L, (p_1635->g_577 &= ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_867.s4, ((*p_1635->g_232) = 0x063FL))), ((((*l_877) = p_1635->g_876[0][4][0]) != (p_1635->g_101.w , p_1635->g_878[3])) || p_49))) || l_867.s6)), ((VECTOR(int32_t, 2))(0L)), (-1L), ((VECTOR(int32_t, 4))(0L)), (-3L), l_868.y, ((VECTOR(int32_t, 4))((-1L))), 0x41ECFF6BL)).s3)), p_50)))) >= 0x24177BCBL) , 0x49L) , (-10L))) < 0x04A2L);
        (*p_1635->g_140) = ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_885.yxyx)).xyzywyzyywzywyyy)).s9, 0)) ^ ((l_889 = (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_886.s34)).xxxxxyyy)).s3 == (l_860 = p_1635->g_713))) < (((VECTOR(int8_t, 8))(l_890.s76410133)).s2 <= (p_1635->g_910 = (((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1635->local_1_offset, get_local_id(1), 10), ((l_909[0][0][8] = (((p_50 == l_893) <= (safe_add_func_int32_t_s_s(0L, (safe_sub_func_int16_t_s_s((0x84L && (~(-2L))), (safe_sub_func_uint64_t_u_u((l_868.x != ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_900.s9e46d53f8a296bbc)).s5a)).yxyxyyxyxyyxxyxy)).s7), (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_868.y, ((*l_908) = p_49))), 0xE8L)), 3))))))))) != p_50)) , 1L))) == l_886.s4) >= p_1635->g_579)))));
    }
    for (l_889 = 0; (l_889 > (-26)); l_889 = safe_sub_func_int16_t_s_s(l_889, 1))
    { /* block id: 381 */
        VECTOR(int16_t, 8) l_916 = (VECTOR(int16_t, 8))(0x3E99L, (VECTOR(int16_t, 4))(0x3E99L, (VECTOR(int16_t, 2))(0x3E99L, 0x631BL), 0x631BL), 0x631BL, 0x3E99L, 0x631BL);
        VECTOR(uint16_t, 16) l_917 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xFFF9L), 0xFFF9L), 0xFFF9L, 1UL, 0xFFF9L, (VECTOR(uint16_t, 2))(1UL, 0xFFF9L), (VECTOR(uint16_t, 2))(1UL, 0xFFF9L), 1UL, 0xFFF9L, 1UL, 0xFFF9L);
        VECTOR(uint64_t, 4) l_931 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x6EB1F235482E8313L), 0x6EB1F235482E8313L);
        int32_t l_945[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint8_t **l_963[5];
        int32_t *l_964 = &p_1635->g_261;
        VECTOR(uint32_t, 8) l_969 = (VECTOR(uint32_t, 8))(0x2529DAF1L, (VECTOR(uint32_t, 4))(0x2529DAF1L, (VECTOR(uint32_t, 2))(0x2529DAF1L, 0UL), 0UL), 0UL, 0x2529DAF1L, 0UL);
        int16_t *l_970 = &p_1635->g_322;
        VECTOR(int8_t, 16) l_977 = (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 0x55L), 0x55L), 0x55L, 0x42L, 0x55L, (VECTOR(int8_t, 2))(0x42L, 0x55L), (VECTOR(int8_t, 2))(0x42L, 0x55L), 0x42L, 0x55L, 0x42L, 0x55L);
        VECTOR(uint64_t, 2) l_1009 = (VECTOR(uint64_t, 2))(0x20BB85FA6CC79B0BL, 18446744073709551608UL);
        VECTOR(uint64_t, 8) l_1035 = (VECTOR(uint64_t, 8))(0x6E006F751D82AED4L, (VECTOR(uint64_t, 4))(0x6E006F751D82AED4L, (VECTOR(uint64_t, 2))(0x6E006F751D82AED4L, 0xC53BEE90D9ACB17EL), 0xC53BEE90D9ACB17EL), 0xC53BEE90D9ACB17EL, 0x6E006F751D82AED4L, 0xC53BEE90D9ACB17EL);
        VECTOR(uint8_t, 2) l_1043 = (VECTOR(uint8_t, 2))(0x2BL, 0UL);
        int8_t *l_1062 = (void*)0;
        uint32_t l_1063[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int i;
        for (i = 0; i < 5; i++)
            l_963[i] = &l_962;
        l_913 = &l_909[0][0][8];
        for (l_860 = 0; (l_860 <= 10); l_860 = safe_add_func_int16_t_s_s(l_860, 8))
        { /* block id: 385 */
            VECTOR(int32_t, 16) l_918 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x0AC18723L), 0x0AC18723L), 0x0AC18723L, (-2L), 0x0AC18723L, (VECTOR(int32_t, 2))((-2L), 0x0AC18723L), (VECTOR(int32_t, 2))((-2L), 0x0AC18723L), (-2L), 0x0AC18723L, (-2L), 0x0AC18723L);
            uint8_t *l_928 = &p_1635->g_713;
            uint8_t *l_936 = (void*)0;
            uint8_t *l_937 = (void*)0;
            uint8_t *l_938 = (void*)0;
            uint8_t *l_939 = (void*)0;
            uint8_t *l_940 = (void*)0;
            uint8_t *l_941 = (void*)0;
            uint8_t *l_942 = (void*)0;
            uint8_t *l_943[9][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_944 = 0L;
            int32_t *l_946 = &p_1635->g_577;
            int i, j, k;
            (*l_913) = p_50;
            atomic_and(&p_1635->g_atomic_reduction[get_linear_group_id()], ((+((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(4L, 0L, (-1L), 0x1384L)).yxxxxxzwyyyzwwyx, ((VECTOR(int16_t, 8))(l_916.s35473402)).s4373445602347643))).sac, ((VECTOR(uint16_t, 4))(l_917.s1599)).odd))), 1L, 0x0295CABBL)), ((VECTOR(int32_t, 4))(l_918.s4d6b)))).s64)).hi) == ((VECTOR(uint32_t, 4))(0xDCF3D7E1L, GROUP_DIVERGE(2, 1), 0xFDE4F009L, 1UL)).y));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1635->v_collective += p_1635->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*l_946) ^= (l_918.s6 > (((0x4CF7L | (safe_mul_func_int8_t_s_s((((*l_913) = (((((*l_913) <= (l_945[4] ^= (p_1635->g_335.s6 >= ((safe_div_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(l_916.s0, ((+(l_944 &= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((*l_928) = (&p_1635->g_167 != l_927[1])), 5UL, 0x13L, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_931.zz)).hi, (((VECTOR(int32_t, 4))(l_934.xxxx)).y && (((void*)0 == l_935) != 0x27578702L)))), l_918.sd, 0xE7L, 0UL, 1UL)).s04)).even, 4)) >= p_1635->g_261), ((VECTOR(uint8_t, 2))(0x21L)), 3UL)).xxxwwwzyxywzyxwz)).sb)) | FAKE_DIVERGE(p_1635->group_0_offset, get_group_id(0), 10)))) != l_918.s2), l_918.sb)) , (**p_1635->g_161))))) < 0x269868A2BB28D037L) & p_48) || p_48)) != p_49), p_49))) & p_50) > p_49));
            if ((**p_1635->g_139))
                break;
        }
        if ((((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_1635->g_949.s5b21)).x, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_1635->local_2_offset, get_local_id(2), 10), (safe_add_func_int32_t_s_s(0x351F75B1L, GROUP_DIVERGE(0, 1))))), 4)), p_49)))) != p_49) && ((((((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_970) &= (((p_1635->g_534 = l_962) != ((~((p_1635->g_167 = (l_916.s7 , (l_964 != (void*)0))) , ((+(((*l_962) = (safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(l_969.s73625415)).s5, l_917.s8)), (-1L)))) , p_50)) <= FAKE_DIVERGE(p_1635->group_2_offset, get_group_id(2), 10)))) , (void*)0)) , 2L)), GROUP_DIVERGE(1, 1))), p_49)) >= (*p_1635->g_162)) && p_1635->g_127.x) & p_1635->g_8.s2) , (-7L)) != 0x95L)))
        { /* block id: 399 */
            int64_t l_995 = 0L;
            for (p_1635->g_713 = 0; (p_1635->g_713 >= 8); p_1635->g_713 = safe_add_func_int8_t_s_s(p_1635->g_713, 8))
            { /* block id: 402 */
                VECTOR(int8_t, 2) l_975 = (VECTOR(int8_t, 2))((-9L), 0x17L);
                VECTOR(int8_t, 8) l_976 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-4L)), (-4L)), (-4L), 4L, (-4L));
                VECTOR(uint64_t, 16) l_1011 = (VECTOR(uint64_t, 16))(0x847D14E978FB9F37L, (VECTOR(uint64_t, 4))(0x847D14E978FB9F37L, (VECTOR(uint64_t, 2))(0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L), 0xF2BC26B1B6DE7ED1L), 0xF2BC26B1B6DE7ED1L, 0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L, (VECTOR(uint64_t, 2))(0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L), (VECTOR(uint64_t, 2))(0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L), 0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L, 0x847D14E978FB9F37L, 0xF2BC26B1B6DE7ED1L);
                uint16_t **l_1028[9] = {&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232,&p_1635->g_232};
                uint16_t ***l_1027 = &l_1028[7];
                int32_t l_1030 = 0x1F50CC55L;
                int32_t l_1031 = 5L;
                int32_t l_1032 = 1L;
                int i;
                if ((safe_add_func_uint8_t_u_u((((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(l_975.xyyxxxxxyyyxyxxy)), ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(0x1BL, (-10L))).yyyxyxyxxyyyyxxy, ((VECTOR(int8_t, 8))(l_976.s66030564)).s4432221761533510))).lo, ((VECTOR(int8_t, 2))(0x05L, 0x29L)).xxyyyxxy, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_977.sf211)))), ((VECTOR(int8_t, 4))(p_1635->g_978.s4112)))).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_979.s52521537)).s0154562343722761)).saf62))))).zxwzxwzz))).s0074706623231216))).s7b)).xyyyxyyyxyyyyyxx)).s2bad, ((VECTOR(int8_t, 16))(l_980.xxxxyxyxyyyyyxyy)).s7e5f))).w > (safe_div_func_uint8_t_u_u(p_1635->g_910, (((*l_857) = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0L, (-7L), ((VECTOR(int16_t, 4))(p_1635->g_983.s1236)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(p_1635->g_984.xyyxxxyx)).s1074355752372105, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1635->g_985.sf1b02283)).s65)).yxxyyyyyyxxyyxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_986.s5464)).wwzywxyxzzyxwwxy)).even)).s3641223113745003))).sc4d7, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1635->g_987.xx)))).yxxx))), (p_50 &= (safe_lshift_func_uint16_t_u_u((!(p_48 ^ l_976.s7)), (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1635->g_992.s36657701)).s3160021336170461)).s4, ((safe_lshift_func_int16_t_s_s(((((p_48 && ((((l_969.s6 , (l_964 == (void*)0)) | (l_995 ^= (-3L))) != (!((!((VECTOR(int8_t, 2))(1L, 0x69L)).even) | ((l_931.y < p_1635->g_477.s6) , 0x09L)))) && p_49)) >= l_975.y) || 0x5CDCADEC7689E9D0L) ^ (*l_913)), 2)) != p_1635->g_984.y)))))), 0x7FB3L, ((VECTOR(int16_t, 4))(0x4D1EL)))))).s2 & l_945[4]) | 0x531E9495L)) , 0x65L)))), (-8L))))
                { /* block id: 406 */
                    VECTOR(int32_t, 8) l_997 = (VECTOR(int32_t, 8))(0x726B37E8L, (VECTOR(int32_t, 4))(0x726B37E8L, (VECTOR(int32_t, 2))(0x726B37E8L, 0x06168817L), 0x06168817L), 0x06168817L, 0x726B37E8L, 0x06168817L);
                    int16_t *l_1014 = (void*)0;
                    int16_t *l_1015 = (void*)0;
                    int16_t *l_1016 = (void*)0;
                    int16_t *l_1017 = (void*)0;
                    int16_t *l_1018[1];
                    uint16_t ***l_1024 = (void*)0;
                    uint16_t ****l_1025 = (void*)0;
                    uint16_t ****l_1026 = &p_1635->g_876[0][3][0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1018[i] = (void*)0;
                    l_1032 = ((*l_913) = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(0x5917E760L, 0x76F77CCDL)).yyyyxyxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(p_1635->g_996.s3335)).lo, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(1L, (-1L), ((VECTOR(int32_t, 4))((**p_1635->g_161), ((VECTOR(int32_t, 2))(l_997.s61)), 0L)), (l_1031 = ((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*l_913), ((((safe_rshift_func_int8_t_s_u(((((void*)0 == p_1635->g_1006) && ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 2))(l_1009.xx)), ((VECTOR(uint64_t, 2))(p_1635->g_1010.xx)), (GROUP_DIVERGE(2, 1) == 8L), 8UL, 0x147D617C5591ECA0L)).s40, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((*l_913), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_1011.s758512a4)).s5052005151167740)).sbd)), 0xA0D1D1E61EA2AF20L)).wxywwwyzwxxzxxxx)).s63da, (uint64_t)(safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))((p_50 |= (p_1635->g_477.s1 |= ((*l_970) = 5L))), ((safe_add_func_int32_t_s_s(((((VECTOR(int16_t, 8))(p_1635->g_1021.yxxyxyyx)).s7 >= ((safe_sub_func_int32_t_s_s((**p_1635->g_161), (((*l_1026) = l_1024) == l_1027))) || p_48)) , 1L), 0x4CF2FA6BL)) >= (*p_1635->g_140)), ((VECTOR(int16_t, 2))(0x7EADL)), p_50, 1L, (-1L), (*l_913), ((VECTOR(int16_t, 8))(1L)))).sdbc3, ((VECTOR(int16_t, 4))(0L))))).z, l_1029)), (uint64_t)0UL))).wwxxyzzzwwxxwxwx)).s34))))).odd, l_945[4])) ^ l_917.s4)) , p_48), 3)) <= p_48) , 0L) || p_50))), 8)) , 3L) == l_1030) & (-1L)), 0)) < 0x85L)), 1L, 0x2D0723B3L, ((VECTOR(int32_t, 4))(0L)), (-1L), 1L, 1L)), ((VECTOR(int32_t, 16))((-10L)))))).sd9))), 0x4AAD56DFL, 0x46A3884AL)), ((VECTOR(int32_t, 4))(0L))))).yzxzwywx))).s7);
                }
                else
                { /* block id: 414 */
                    for (p_1635->g_259 = 16; (p_1635->g_259 >= (-13)); p_1635->g_259--)
                    { /* block id: 417 */
                        (*p_1635->g_161) = (*p_1635->g_161);
                    }
                }
            }
        }
        else
        { /* block id: 422 */
            VECTOR(int64_t, 16) l_1037 = (VECTOR(int64_t, 16))(0x01EF983E9CD34B42L, (VECTOR(int64_t, 4))(0x01EF983E9CD34B42L, (VECTOR(int64_t, 2))(0x01EF983E9CD34B42L, 0x46E29E378568CFDFL), 0x46E29E378568CFDFL), 0x46E29E378568CFDFL, 0x01EF983E9CD34B42L, 0x46E29E378568CFDFL, (VECTOR(int64_t, 2))(0x01EF983E9CD34B42L, 0x46E29E378568CFDFL), (VECTOR(int64_t, 2))(0x01EF983E9CD34B42L, 0x46E29E378568CFDFL), 0x01EF983E9CD34B42L, 0x46E29E378568CFDFL, 0x01EF983E9CD34B42L, 0x46E29E378568CFDFL);
            uint32_t *l_1050 = (void*)0;
            uint64_t *l_1059[6][7];
            uint32_t *l_1064[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_1066 = &l_945[4];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1059[i][j] = &p_1635->g_1060;
            }
            (*l_1066) &= ((((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(l_1035.s7020)), ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL)), 18446744073709551611UL, 0xA7DAAD5AAAC9B91AL)).zzyzyyxwxxyywzzx, ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_1036.wxyxxxxxwwzxzzxz)).s67da)).xzxzwxzwzywzyxxz))), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(18446744073709551612UL, 0xFAA9591D8846E37CL, 0x081220647E459F83L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x72C27A9AED7E5D69L)), ((VECTOR(uint64_t, 2))(0x6AB70EBDE6C4BF5DL, 0xA47DAEA45FA3B6CCL)), ((VECTOR(uint64_t, 4))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1037.sc07a)).zwxwzwwy)).even))))), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1042.xwyy)).xzyyzzxx)).s3427472461152672)).sfe)), ((VECTOR(uint8_t, 16))(l_1043.yxyyxxyxyxyyyyxy)).s13))).hi, (safe_mod_func_int64_t_s_s((p_49 <= (l_1035.s0 & (p_1635->g_130.y = ((((safe_rshift_func_int8_t_s_s(0x00L, 5)) > (safe_mod_func_uint32_t_u_u((((p_49 != ((void*)0 != l_1050)) , ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0L, 5)), ((safe_add_func_int32_t_s_s((-1L), (((p_1635->g_1061[3][0][4] = (safe_lshift_func_int8_t_s_u(((*l_913) = ((0x8A73L || (*l_913)) > (-1L))), 4))) , GROUP_DIVERGE(2, 1)) ^ p_50))) | 2L))) , &p_1635->g_153)) == l_1062), p_50))) | l_1063[2]) && p_48)))), p_1635->g_127.x)))) || p_49), l_1037.sc)), p_49, 0x842A47D6256A300DL, 0x34F33144CC587F92L, 3UL)))).s48, (uint64_t)p_49))).xxxyyyyyxyyyxxxy)))))).s655e))).yxxzxyxzwzzyywyy)).even, ((VECTOR(uint64_t, 8))(0xA4B46B0F1E7F0E2FL))))).s4 > p_48) , l_1065);
            return p_50;
        }
    }
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_232 p_1635->g_167 p_1635->g_153 p_1635->g_101 p_1635->g_140 p_1635->g_713 p_1635->g_577 p_1635->g_566 p_1635->g_161 p_1635->g_162 p_1635->g_3 p_1635->g_139 p_1635->g_100 p_1635->g_777 p_1635->g_80 p_1635->g_386 p_1635->g_347 p_1635->g_103
 * writes: p_1635->g_103 p_1635->g_153 p_1635->g_713 p_1635->g_577 p_1635->g_566 p_1635->g_140 p_1635->g_80 p_1635->g_303
 */
int16_t  func_51(int16_t  p_52, uint64_t  p_53, struct S0 * p_1635)
{ /* block id: 278 */
    int8_t *l_727 = (void*)0;
    int8_t *l_728 = &p_1635->g_153;
    int32_t l_733 = (-10L);
    uint64_t *l_734 = (void*)0;
    int32_t *l_737 = (void*)0;
    uint8_t *l_738 = &p_1635->g_713;
    int32_t *l_739 = &p_1635->g_577;
    int32_t *l_740 = &p_1635->g_80;
    int32_t *l_741 = &l_733;
    int32_t *l_742 = (void*)0;
    int32_t *l_743[6] = {&l_733,&l_733,&l_733,&l_733,&l_733,&l_733};
    int16_t l_744 = 0x7608L;
    uint32_t l_745 = 4294967291UL;
    VECTOR(int32_t, 4) l_752 = (VECTOR(int32_t, 4))(0x321C6ECBL, (VECTOR(int32_t, 2))(0x321C6ECBL, 0L), 0L);
    int i;
    if ((atomic_inc(&p_1635->l_atomic_input[16]) == 1))
    { /* block id: 280 */
        int32_t l_716 = 0x59CD600FL;
        int32_t *l_715[3][2] = {{&l_716,&l_716},{&l_716,&l_716},{&l_716,&l_716}};
        int32_t *l_717 = &l_716;
        int32_t *l_718 = &l_716;
        int i, j;
        l_718 = (l_717 = l_715[1][1]);
        unsigned int result = 0;
        result += l_716;
        atomic_add(&p_1635->l_special_values[16], result);
    }
    else
    { /* block id: 283 */
        (1 + 1);
    }
    (*l_739) ^= (safe_add_func_uint16_t_u_u(((~((safe_mul_func_int16_t_s_s(((((*p_1635->g_232) = (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), p_52))) < ((safe_mod_func_int8_t_s_s((-10L), p_1635->g_167)) && (((*l_728) &= 0x20L) || (safe_rshift_func_uint8_t_u_u(((*l_738) ^= (((((l_733 && (l_734 == &p_1635->g_303)) > (p_52 & (safe_rshift_func_int8_t_s_s((l_733 ^ GROUP_DIVERGE(1, 1)), p_1635->g_101.y)))) != l_733) , p_1635->g_140) != l_737)), 2))))) == 0xAFD9EF073A72A525L), p_53)) , p_53)) <= l_733), 0UL));
    l_745++;
    for (p_1635->g_566 = (-22); (p_1635->g_566 < (-13)); p_1635->g_566 = safe_add_func_uint64_t_u_u(p_1635->g_566, 5))
    { /* block id: 293 */
        uint32_t l_751 = 0x8B62C2E3L;
        int32_t l_753 = 0x256570D0L;
        uint16_t **l_781 = (void*)0;
        uint32_t ***l_785 = &p_1635->g_351;
        (*l_739) |= p_53;
        l_753 = ((safe_unary_minus_func_int64_t_s((l_751 & ((VECTOR(int32_t, 8))(l_752.yxwyxyxx)).s0))) , (**p_1635->g_161));
        for (l_745 = 0; (l_745 < 30); l_745++)
        { /* block id: 298 */
            uint64_t l_756 = 18446744073709551615UL;
            int32_t l_778 = 0x2645B4A7L;
            (*p_1635->g_139) = (*p_1635->g_139);
            ++l_756;
            for (l_744 = 0; (l_744 <= 19); l_744++)
            { /* block id: 303 */
                uint8_t l_761 = 1UL;
                VECTOR(uint8_t, 8) l_768 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL);
                uint16_t ***l_782 = &l_781;
                uint64_t *l_788 = &p_1635->g_303;
                uint32_t *l_803 = &p_1635->g_257[0];
                int i;
                l_761++;
                for (p_53 = 11; (p_53 == 48); ++p_53)
                { /* block id: 307 */
                    if ((*p_1635->g_162))
                        break;
                    for (l_733 = 14; (l_733 > (-25)); l_733--)
                    { /* block id: 311 */
                        return l_768.s2;
                    }
                }
                (*l_740) &= (((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(0x1A2E583C83806AAEL, 0x516F48FBFE42E7F1L)).even, ((l_756 > (&p_1635->g_352[1][3] == (void*)0)) | (p_52 = (p_1635->g_566 >= (safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((l_778 ^= (p_1635->g_100.s7 , ((*l_739) = ((VECTOR(int32_t, 4))(p_1635->g_777.s4653)).x))) & ((((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1635->group_2_offset, get_group_id(2), 10), 5)) , (void*)0) == (((((*l_782) = l_781) != (void*)0) != (*p_1635->g_162)) , &l_745)) < 0x6824L)) , p_53), l_756)), p_52))))))) || 18446744073709551608UL) <= l_761);
                (*l_739) ^= (safe_sub_func_int16_t_s_s(((p_1635->g_386.sc , (void*)0) != l_785), (((safe_mod_func_uint64_t_u_u(((*l_788) = 0x3AB852F30FE9941FL), (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((0x731CL && ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((*p_1635->g_162) > (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((1UL && (!(l_803 != &l_745))) > p_53) && p_1635->g_347.s0), (*p_1635->g_232))), l_753)), p_52))), 0)) | p_52), p_53)) < 0x6937E2537B35F6B3L)), l_778)), p_1635->g_566)))) & 0xC1A4L) && l_756)));
            }
            if ((atomic_inc(&p_1635->g_atomic_input[30 * get_linear_group_id() + 27]) == 1))
            { /* block id: 324 */
                int8_t l_804 = (-1L);
                int32_t l_805 = 0x22A116D2L;
                uint32_t l_806 = 0x8439AA3CL;
                uint16_t l_809[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
                int32_t l_810 = 8L;
                int32_t l_811 = 1L;
                int32_t l_812[3];
                int64_t l_813 = 0x0C1EABC7AE49571FL;
                int64_t l_814 = 0x50FDD4A26CF3D7CAL;
                uint64_t l_815 = 0UL;
                int32_t l_825 = 0x409333C8L;
                uint32_t l_826 = 1UL;
                uint32_t **l_827 = (void*)0;
                uint32_t l_830 = 4294967286UL;
                uint32_t *l_829 = &l_830;
                uint32_t **l_828 = &l_829;
                int16_t l_831[4] = {1L,1L,1L,1L};
                int i;
                for (i = 0; i < 3; i++)
                    l_812[i] = 1L;
                if (((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(0x13C6C777L, 6L, (l_804 , 0x0CC636F1L), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x25240671L, ((VECTOR(int32_t, 2))(0x1A58E812L, 6L)), 0x0AE00EF3L)), ((l_806--) , l_809[4]), (l_811 |= l_810), ((VECTOR(int32_t, 8))(9L, 0x24940AB7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((FAKE_DIVERGE(p_1635->group_1_offset, get_group_id(1), 10) , (l_812[1] ^= 0x6F723914L)), ((l_814 &= (l_813 , (-1L))) , l_815), 0x686EBB34L, ((VECTOR(int32_t, 4))(0x1679B9FDL)), (-3L), ((VECTOR(int32_t, 4))(0x6EF2E317L)), ((VECTOR(int32_t, 4))(0x724957B2L)))).sf7)), 0x0A44FEC0L, 0x3F48F67AL, (-1L), 0x3E067684L)), 0x22375E85L, 3L)).s6, 0x4F4DC953L, (-10L), 0x7A9BF8D9L, 0L, ((VECTOR(int32_t, 2))((-9L))), 0x702C3946L)), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x38682B21L))))), 3L, (-1L), ((VECTOR(int32_t, 2))(0x55EE3F78L)), 0L)), ((VECTOR(int32_t, 16))((-4L)))))).s3)
                { /* block id: 329 */
                    VECTOR(int8_t, 16) l_816 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int8_t, 2))((-5L), 0L), (VECTOR(int8_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
                    VECTOR(int32_t, 4) l_817 = (VECTOR(int32_t, 4))(0x0AFCD21FL, (VECTOR(int32_t, 2))(0x0AFCD21FL, 0L), 0L);
                    int32_t *l_818 = (void*)0;
                    int32_t *l_819 = (void*)0;
                    int32_t *l_820 = (void*)0;
                    int i;
                    l_812[1] = l_816.s8;
                    l_811 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_817.zx)), 0x150FFC3BL, 1L)).w;
                    l_820 = (l_819 = l_818);
                }
                else
                { /* block id: 334 */
                    int32_t l_822 = 0x61640D50L;
                    int32_t *l_821 = &l_822;
                    int32_t *l_823 = &l_822;
                    int32_t *l_824 = &l_822;
                    l_824 = (l_823 = (l_821 = (void*)0));
                }
                l_826 = l_825;
                l_828 = l_827;
                if (l_831[3])
                { /* block id: 341 */
                    uint32_t l_832 = 0xBA07B37CL;
                    int8_t l_843 = 1L;
                    int64_t l_844 = 0x2ABF8104DEFF6E87L;
                    int32_t l_846 = (-1L);
                    int32_t *l_845 = &l_846;
                    ++l_832;
                    for (l_832 = 0; (l_832 == 58); l_832++)
                    { /* block id: 345 */
                        int32_t l_838 = 0x24722699L;
                        int32_t *l_837 = &l_838;
                        int32_t *l_839 = &l_838;
                        VECTOR(int64_t, 2) l_840 = (VECTOR(int64_t, 2))(0x3C6710562591E703L, 0x1529DB73BA1C14AFL);
                        int16_t l_841 = 0x27C7L;
                        int8_t l_842[4] = {(-1L),(-1L),(-1L),(-1L)};
                        int i;
                        l_839 = l_837;
                        l_842[2] = ((l_813 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_840.yx)), 0x5C2A48752DE2F3F6L, 0x1F435DBEF0314F51L)))).w) , (l_812[0] = l_841));
                    }
                    l_845 = (l_843 , (l_844 , l_845));
                }
                else
                { /* block id: 352 */
                    int32_t l_847 = 1L;
                    int64_t l_848 = (-1L);
                    int8_t l_849[9][6] = {{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L},{(-1L),(-1L),(-3L),0x33L,0x4EL,0x06L}};
                    uint32_t l_850 = 1UL;
                    int i, j;
                    l_850--;
                }
                unsigned int result = 0;
                result += l_804;
                result += l_805;
                result += l_806;
                int l_809_i0;
                for (l_809_i0 = 0; l_809_i0 < 5; l_809_i0++) {
                    result += l_809[l_809_i0];
                }
                result += l_810;
                result += l_811;
                int l_812_i0;
                for (l_812_i0 = 0; l_812_i0 < 3; l_812_i0++) {
                    result += l_812[l_812_i0];
                }
                result += l_813;
                result += l_814;
                result += l_815;
                result += l_825;
                result += l_826;
                result += l_830;
                int l_831_i0;
                for (l_831_i0 = 0; l_831_i0 < 4; l_831_i0++) {
                    result += l_831[l_831_i0];
                }
                atomic_add(&p_1635->g_special_values[30 * get_linear_group_id() + 27], result);
            }
            else
            { /* block id: 355 */
                (1 + 1);
            }
        }
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_60 p_1635->g_80 p_1635->g_127 p_1635->g_261 p_1635->g_139 p_1635->g_140 p_1635->g_141 p_1635->g_130 p_1635->g_161 p_1635->g_162 p_1635->g_3 p_1635->g_232 p_1635->g_103
 * writes: p_1635->g_60 p_1635->g_80 p_1635->g_130 p_1635->g_713 p_1635->g_141
 */
int32_t  func_54(int32_t  p_55, int8_t  p_56, int64_t  p_57, struct S0 * p_1635)
{ /* block id: 261 */
    int64_t l_663 = 0x088BA867A22DB10EL;
    int32_t l_664 = 0L;
    int32_t l_665 = 0x0A1B8B59L;
    int32_t l_673[7][6] = {{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L},{0x4BA295C0L,1L,0x11079E00L,1L,0x4BA295C0L,0x4BA295C0L}};
    uint16_t l_686 = 65527UL;
    uint32_t *l_703 = (void*)0;
    uint32_t *l_704 = (void*)0;
    uint32_t *l_705 = (void*)0;
    uint32_t *l_706 = (void*)0;
    uint32_t *l_707 = (void*)0;
    uint32_t *l_708 = (void*)0;
    uint32_t *l_709 = (void*)0;
    uint8_t *l_712 = &p_1635->g_713;
    int64_t *l_714[10][5] = {{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0},{&l_663,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (p_1635->g_60 = 8; (p_1635->g_60 >= 16); ++p_1635->g_60)
    { /* block id: 264 */
        int32_t *l_666 = &p_1635->g_80;
        int32_t *l_667 = &p_1635->g_80;
        int32_t *l_668 = &p_1635->g_80;
        int32_t *l_669 = &p_1635->g_577;
        int32_t *l_670 = &l_664;
        int32_t *l_671 = &l_664;
        int32_t *l_672 = &p_1635->g_80;
        int32_t *l_674 = (void*)0;
        int32_t *l_675 = &p_1635->g_80;
        int32_t *l_676 = &p_1635->g_577;
        int32_t l_677 = 0x594F2164L;
        int32_t *l_678 = &p_1635->g_80;
        int32_t *l_679 = &p_1635->g_80;
        int32_t *l_680 = &l_673[5][4];
        int32_t *l_681 = &l_665;
        int32_t *l_682 = &l_664;
        int32_t *l_683 = &l_673[5][4];
        int32_t *l_684[7] = {&l_677,&l_677,&l_677,&l_677,&l_677,&l_677,&l_677};
        int32_t l_685 = (-1L);
        int32_t l_692 = 1L;
        int i;
        l_686++;
        for (l_663 = 0; (l_663 == 4); l_663++)
        { /* block id: 268 */
            VECTOR(int16_t, 8) l_691 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x0A72L), 0x0A72L), 0x0A72L, (-2L), 0x0A72L);
            int i;
            (*l_678) &= (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xDFC3L, 0x80F0L)).yxyy)).x ^ ((VECTOR(int16_t, 16))(l_691.s6162412121102477)).s6);
            return l_692;
        }
    }
    (*p_1635->g_140) = (p_56 & (((p_57 & (l_664 ^= (((((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((p_1635->g_127.x || (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_712) = ((safe_div_func_int32_t_s_s((&p_1635->g_60 == (void*)0), (~(p_1635->g_261 , (**p_1635->g_139))))) , ((--p_1635->g_130.x) , 0x45L))), (((**p_1635->g_161) & l_686) | l_686))), l_673[1][5]))), 0xEF352837L)), 0x10B2L)) >= 5UL) , 0x6175A06FL) > 0x64430696L) == (*p_1635->g_232)))) == p_57) == l_673[5][4]));
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_84 p_1635->g_comm_values p_1635->g_100 p_1635->g_101 p_1635->g_8 p_1635->g_80 p_1635->g_144 p_1635->g_139 p_1635->g_140 p_1635->g_141 p_1635->g_161 p_1635->g_162 p_1635->g_335 p_1635->g_127 p_1635->g_232 p_1635->g_103 p_1635->g_347 p_1635->g_348 p_1635->g_3 p_1635->g_261 p_1635->g_303 p_1635->g_477 p_1635->g_259 p_1635->g_387
 * writes: p_1635->g_84 p_1635->g_103 p_1635->g_80 p_1635->g_141 p_1635->g_162 p_1635->g_351 p_1635->g_261 p_1635->g_259
 */
int16_t  func_64(uint8_t  p_65, int32_t  p_66, int32_t  p_67, int32_t ** p_68, struct S0 * p_1635)
{ /* block id: 12 */
    int32_t l_83 = 9L;
    VECTOR(int16_t, 4) l_97 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L);
    VECTOR(int16_t, 16) l_98 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3396L), 0x3396L), 0x3396L, (-1L), 0x3396L, (VECTOR(int16_t, 2))((-1L), 0x3396L), (VECTOR(int16_t, 2))((-1L), 0x3396L), (-1L), 0x3396L, (-1L), 0x3396L);
    VECTOR(int16_t, 8) l_99 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
    uint16_t *l_102[10][8][3] = {{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}},{{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103},{(void*)0,&p_1635->g_103,&p_1635->g_103}}};
    int32_t *l_106[8][5][6] = {{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}},{{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80},{&l_83,&p_1635->g_80,(void*)0,(void*)0,(void*)0,&p_1635->g_80}}};
    int32_t **l_105[4];
    int64_t *l_174 = &p_1635->g_167;
    VECTOR(int8_t, 4) l_208 = (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, (-1L)), (-1L));
    uint16_t l_279 = 65535UL;
    int8_t *l_318 = &p_1635->g_153;
    int32_t l_330 = (-6L);
    VECTOR(int8_t, 8) l_346 = (VECTOR(int8_t, 8))(0x5DL, (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0x46L), 0x46L), 0x46L, 0x5DL, 0x46L);
    uint32_t **l_353 = &p_1635->g_352[2][3];
    VECTOR(int8_t, 16) l_493 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int8_t, 2))((-3L), 1L), (VECTOR(int8_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
    uint64_t l_542 = 18446744073709551610UL;
    uint16_t l_548 = 65535UL;
    uint64_t *l_562[7] = {&p_1635->g_303,&l_542,&p_1635->g_303,&p_1635->g_303,&l_542,&p_1635->g_303,&p_1635->g_303};
    int8_t l_633 = 0x32L;
    uint8_t l_640 = 0x90L;
    int64_t *l_654 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_105[i] = &l_106[1][0][2];
    for (p_65 = (-5); (p_65 >= 32); p_65 = safe_add_func_uint32_t_u_u(p_65, 2))
    { /* block id: 15 */
        int32_t *l_79 = &p_1635->g_80;
        int32_t *l_81 = &p_1635->g_80;
        int32_t *l_82[10][6][4] = {{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}},{{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80},{&p_1635->g_3,&p_1635->g_3,&p_1635->g_80,&p_1635->g_80}}};
        int i, j, k;
        p_1635->g_84++;
        if (l_83)
            continue;
    }
    if ((safe_rshift_func_int16_t_s_u((((p_1635->g_comm_values[p_1635->tid] <= p_65) , &p_1635->g_80) != ((*p_68) = ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((p_1635->g_comm_values[p_1635->tid] , (safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((((((p_1635->g_103 = ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(l_97.ywzzwwzw)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_98.sac)).xyyxxyxyxxyyxxyy)).s5b)).yyyy))).xzzzzwzyxxyzzwwx, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))((-10L), 0x71AFL, (-10L), 0x2352L)).zzxzyxwx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x2D68L, ((VECTOR(int16_t, 2))(l_99.s60)), 0x04CFL)).wxxwywxy))))).s5263577570372162, ((VECTOR(int16_t, 4))(p_1635->g_100.s8398)).yzwwwyzyxzzzwywy))))).s15a5, ((VECTOR(int16_t, 4))(p_65, 0x0E69L, 0x7A93L, (-1L)))))).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(1L, 7L)))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1635->g_101.zzwzzwwx)).s70))))).xxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(7L, (-1L))), 0x2ED8L, 1L))))).w) || GROUP_DIVERGE(2, 1)) , (safe_unary_minus_func_int16_t_s(1L))) , (void*)0) != (p_1635->g_8.s5 , l_105[3])), p_1635->g_8.s6)), 0x600EF88CL)), p_66))) < 253UL), ((VECTOR(uint8_t, 2))(8UL)), 0xE1L, p_1635->g_101.z, ((VECTOR(uint8_t, 2))(255UL)), 0xB7L)).odd)).w, 0xAEL)) , &p_1635->g_80))), 3)))
    { /* block id: 21 */
        uint8_t l_151 = 0x50L;
        int32_t l_169[1][2];
        VECTOR(int8_t, 2) l_185 = (VECTOR(int8_t, 2))(0x4DL, 1L);
        VECTOR(int8_t, 2) l_199 = (VECTOR(int8_t, 2))(6L, 0x24L);
        VECTOR(int64_t, 8) l_268 = (VECTOR(int64_t, 8))(0x65E0BEF41ADA6DF6L, (VECTOR(int64_t, 4))(0x65E0BEF41ADA6DF6L, (VECTOR(int64_t, 2))(0x65E0BEF41ADA6DF6L, 0x2EF3669557001E8CL), 0x2EF3669557001E8CL), 0x2EF3669557001E8CL, 0x65E0BEF41ADA6DF6L, 0x2EF3669557001E8CL);
        uint32_t l_295 = 4294967291UL;
        VECTOR(int32_t, 16) l_316 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3F0F9607L), 0x3F0F9607L), 0x3F0F9607L, (-1L), 0x3F0F9607L, (VECTOR(int32_t, 2))((-1L), 0x3F0F9607L), (VECTOR(int32_t, 2))((-1L), 0x3F0F9607L), (-1L), 0x3F0F9607L, (-1L), 0x3F0F9607L);
        uint32_t l_317 = 4294967295UL;
        VECTOR(uint16_t, 16) l_329 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 1UL), 1UL), 1UL, 65531UL, 1UL, (VECTOR(uint16_t, 2))(65531UL, 1UL), (VECTOR(uint16_t, 2))(65531UL, 1UL), 65531UL, 1UL, 65531UL, 1UL);
        VECTOR(uint32_t, 8) l_338 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL);
        uint32_t *l_339 = (void*)0;
        int16_t *l_358[2];
        uint32_t *l_359[1];
        int32_t l_360 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_169[i][j] = (-4L);
        }
        for (i = 0; i < 2; i++)
            l_358[i] = &p_1635->g_322;
        for (i = 0; i < 1; i++)
            l_359[i] = &p_1635->g_257[1];
        if ((atomic_inc(&p_1635->g_atomic_input[30 * get_linear_group_id() + 15]) == 1))
        { /* block id: 23 */
            int32_t l_107 = (-1L);
            uint32_t l_113 = 0x2C4F7139L;
            VECTOR(uint64_t, 2) l_114 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 6UL);
            int32_t *l_115 = &l_107;
            int i;
            for (l_107 = (-25); (l_107 > (-10)); ++l_107)
            { /* block id: 26 */
                int32_t l_111 = (-4L);
                int32_t *l_110[10] = {&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111};
                int32_t *l_112 = &l_111;
                int i;
                l_112 = l_110[3];
            }
            l_115 = (l_113 , (((VECTOR(uint64_t, 16))(l_114.yyxyyxxyxyxxyxyy)).s5 , (void*)0));
            unsigned int result = 0;
            result += l_107;
            result += l_113;
            result += l_114.y;
            result += l_114.x;
            atomic_add(&p_1635->g_special_values[30 * get_linear_group_id() + 15], result);
        }
        else
        { /* block id: 30 */
            (1 + 1);
        }
        for (l_83 = 0; (l_83 < (-16)); l_83 = safe_sub_func_uint16_t_u_u(l_83, 5))
        { /* block id: 35 */
            uint8_t l_123 = 0x7DL;
            int32_t l_195 = 0L;
            uint16_t *l_231[10][1];
            int64_t l_300[10] = {0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL,0x01206E420C5EB14CL};
            uint8_t *l_323 = &l_123;
            VECTOR(uint64_t, 8) l_326 = (VECTOR(uint64_t, 8))(0x36AA9CF4BEE0CA48L, (VECTOR(uint64_t, 4))(0x36AA9CF4BEE0CA48L, (VECTOR(uint64_t, 2))(0x36AA9CF4BEE0CA48L, 0xCD1A5CA31306AB37L), 0xCD1A5CA31306AB37L), 0xCD1A5CA31306AB37L, 0x36AA9CF4BEE0CA48L, 0xCD1A5CA31306AB37L);
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_231[i][j] = &p_1635->g_103;
            }
            if ((**p_68))
                break;
            for (p_67 = (-30); (p_67 != (-30)); ++p_67)
            { /* block id: 39 */
                VECTOR(uint32_t, 8) l_128 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967287UL), 4294967287UL), 4294967287UL, 4294967295UL, 4294967287UL);
                VECTOR(uint32_t, 16) l_129 = (VECTOR(uint32_t, 16))(0x29B62C09L, (VECTOR(uint32_t, 4))(0x29B62C09L, (VECTOR(uint32_t, 2))(0x29B62C09L, 0x70EBC133L), 0x70EBC133L), 0x70EBC133L, 0x29B62C09L, 0x70EBC133L, (VECTOR(uint32_t, 2))(0x29B62C09L, 0x70EBC133L), (VECTOR(uint32_t, 2))(0x29B62C09L, 0x70EBC133L), 0x29B62C09L, 0x70EBC133L, 0x29B62C09L, 0x70EBC133L);
                int32_t **l_163 = &p_1635->g_162;
                VECTOR(int8_t, 8) l_178 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x13L), 0x13L), 0x13L, (-5L), 0x13L);
                VECTOR(int8_t, 8) l_198 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                int16_t *l_203 = (void*)0;
                uint64_t l_230[5][1] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
                int16_t l_233 = 0x0462L;
                VECTOR(int64_t, 8) l_267 = (VECTOR(int64_t, 8))(0x6A958541D5164D0CL, (VECTOR(int64_t, 4))(0x6A958541D5164D0CL, (VECTOR(int64_t, 2))(0x6A958541D5164D0CL, (-7L)), (-7L)), (-7L), 0x6A958541D5164D0CL, (-7L));
                int32_t l_301[9];
                uint8_t *l_319 = &l_151;
                int i, j;
                for (i = 0; i < 9; i++)
                    l_301[i] = 0x42BA1C7AL;
                for (p_1635->g_80 = 20; (p_1635->g_80 == 25); ++p_1635->g_80)
                { /* block id: 42 */
                    uint16_t l_122 = 0x0368L;
                    return l_122;
                }
            }
            (**p_1635->g_139) &= ((safe_sub_func_uint64_t_u_u(((p_67 || ((*l_323)++)) <= l_151), p_1635->g_144.sd)) && ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(0x5C5AB65DB106207EL, 0UL)), ((VECTOR(uint64_t, 2))(l_326.s01))))).yxxxxyxy))))).s5);
            (*p_1635->g_161) = (*p_1635->g_161);
        }
        (**p_68) = (safe_mul_func_int16_t_s_s((0x1B26L == ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_329.s7a)).xxyxxyyyxxxyxyxx)).even)).s5), l_330));
        (*p_1635->g_140) = (((**p_68) ^= (((l_360 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(p_1635->g_335.s43234150)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 4))((GROUP_DIVERGE(2, 1) >= (safe_rshift_func_int8_t_s_u(p_67, 1))), 4294967291UL, 0x191E20E8L, 0xD2691AD6L)), (uint32_t)(l_169[0][0] = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_338.s30)).yxxyyxxyxyyxyxxy)).s0), (uint32_t)(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 0xFDBD778E73A4FAA4L)))).even | (safe_add_func_int16_t_s_s(p_1635->g_127.y, (l_169[0][0] = (*p_1635->g_232))))) ^ (safe_lshift_func_uint8_t_u_u((~((l_316.se = (safe_rshift_func_uint16_t_u_u((((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(l_346.s11445543)).s43, ((VECTOR(int8_t, 16))(p_1635->g_347.s475a223f371b4adb)).s11))).hi || (((VECTOR(int64_t, 8))(0x61AF882FCCFDA2B6L, (-2L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1635->g_348.xy)).yxxx)), 0x0963F13D792CEEDBL, 3L)).s2 >= p_66)), (safe_div_func_uint8_t_u_u((((p_1635->g_351 = (void*)0) == (p_66 , l_353)) < (safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))((((safe_mod_func_uint16_t_u_u(p_66, ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x30DAB34724CC38D6L, 5L)).yyyxxyxx)), 0L, ((VECTOR(int64_t, 2))(0x17EA61720AAA3C67L)), ((VECTOR(int64_t, 4))(1L)))).s2d)).lo > p_1635->g_144.s2) ^ 3L))) , 7UL) , p_66), ((VECTOR(int16_t, 2))(0x432DL)), 0x51CBL)), ((VECTOR(int16_t, 4))(0x3A08L))))).wyxzwwwy, ((VECTOR(int16_t, 8))(0x4EE6L)), ((VECTOR(int16_t, 8))(0x654FL))))).s27, ((VECTOR(int16_t, 2))(0x51B3L))))).xyxxyyxyyyyyyxxy, ((VECTOR(int16_t, 16))(0x6F16L)), ((VECTOR(int16_t, 16))((-1L)))))).sa <= (*p_1635->g_232)), p_1635->g_8.s7))), p_67))))) == p_1635->g_8.s7)), p_1635->g_3))) < p_67)))), ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(0xE54BFEFCL))))).odd)).yxxx))), ((VECTOR(uint32_t, 4))(7UL))))).x, (**p_1635->g_161))), p_1635->g_348.x))) , (*p_1635->g_161)) != (void*)0)) < l_151);
    }
    else
    { /* block id: 119 */
        uint16_t l_401 = 0x5D0BL;
        uint32_t **l_405[7][10] = {{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]},{&p_1635->g_352[2][3],(void*)0,&p_1635->g_352[1][3],&p_1635->g_352[1][3],&p_1635->g_352[1][3],(void*)0,&p_1635->g_352[2][3],&p_1635->g_352[1][3],&p_1635->g_352[0][1],&p_1635->g_352[0][1]}};
        uint32_t **l_406 = (void*)0;
        int32_t l_408 = 0x088E5D23L;
        int32_t l_411 = 0x0909F6F3L;
        int32_t l_412 = 1L;
        VECTOR(int32_t, 4) l_413 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7361DB07L), 0x7361DB07L);
        int16_t *l_433 = &p_1635->g_322;
        int16_t *l_435 = (void*)0;
        int32_t **l_476 = &p_1635->g_162;
        uint64_t l_482 = 18446744073709551614UL;
        int32_t *l_485 = (void*)0;
        VECTOR(int16_t, 2) l_489 = (VECTOR(int16_t, 2))(0x6241L, 1L);
        int64_t l_507 = 0x4895F459A42D45EDL;
        uint8_t l_511 = 1UL;
        int32_t l_537 = 0x3D5766C8L;
        int32_t l_538 = 0x5145D9F2L;
        VECTOR(int32_t, 8) l_553 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5FA15A2CL), 0x5FA15A2CL), 0x5FA15A2CL, 0L, 0x5FA15A2CL);
        int8_t l_563 = 0x3DL;
        VECTOR(uint32_t, 16) l_657 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967294UL), 4294967294UL), 4294967294UL, 0UL, 4294967294UL, (VECTOR(uint32_t, 2))(0UL, 4294967294UL), (VECTOR(uint32_t, 2))(0UL, 4294967294UL), 0UL, 4294967294UL, 0UL, 4294967294UL);
        int i, j;
        for (p_1635->g_103 = (-13); (p_1635->g_103 < 46); p_1635->g_103 = safe_add_func_int32_t_s_s(p_1635->g_103, 2))
        { /* block id: 122 */
            int16_t l_370[5][4][5] = {{{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L}},{{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L}},{{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L}},{{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L}},{{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L},{9L,0L,(-5L),0L,0L}}};
            int32_t l_407 = (-8L);
            int32_t l_409 = 0x101AF512L;
            int32_t l_410 = 0x5488F8EFL;
            int32_t *l_468 = &l_330;
            int32_t **l_467 = &l_468;
            uint32_t *l_473 = (void*)0;
            uint32_t *l_474 = (void*)0;
            int32_t ***l_475[8][2][7] = {{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}},{{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0},{&l_105[3],&p_1635->g_161,&p_1635->g_161,&l_105[3],(void*)0,(void*)0,(void*)0}}};
            uint64_t *l_483 = (void*)0;
            uint64_t *l_484 = &l_482;
            int i, j, k;
            for (p_1635->g_261 = (-3); (p_1635->g_261 <= 6); p_1635->g_261 = safe_add_func_int16_t_s_s(p_1635->g_261, 5))
            { /* block id: 125 */
                uint16_t l_390 = 65533UL;
                int32_t l_396 = 1L;
                uint16_t **l_427 = &l_102[2][1][1];
                int32_t *l_428[6][4] = {{&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330}};
                uint16_t **l_429 = &p_1635->g_232;
                uint16_t *l_430 = (void*)0;
                int16_t **l_434 = &l_433;
                int i, j;
                (1 + 1);
            }
            if ((atomic_inc(&p_1635->g_atomic_input[30 * get_linear_group_id() + 11]) == 2))
            { /* block id: 155 */
                int32_t l_436 = 0x603390A5L;
                int32_t *l_463 = (void*)0;
                int32_t *l_464 = &l_436;
                int32_t *l_465 = &l_436;
                int32_t *l_466 = &l_436;
                for (l_436 = 28; (l_436 >= (-30)); --l_436)
                { /* block id: 158 */
                    int16_t l_439 = 0x660AL;
                    if (l_439)
                    { /* block id: 159 */
                        VECTOR(int32_t, 16) l_440 = (VECTOR(int32_t, 16))(0x64A395DEL, (VECTOR(int32_t, 4))(0x64A395DEL, (VECTOR(int32_t, 2))(0x64A395DEL, 0x472EE659L), 0x472EE659L), 0x472EE659L, 0x64A395DEL, 0x472EE659L, (VECTOR(int32_t, 2))(0x64A395DEL, 0x472EE659L), (VECTOR(int32_t, 2))(0x64A395DEL, 0x472EE659L), 0x64A395DEL, 0x472EE659L, 0x64A395DEL, 0x472EE659L);
                        VECTOR(int32_t, 4) l_441 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L));
                        uint32_t l_442[2][9][4] = {{{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL}},{{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL},{0UL,4294967286UL,0UL,0UL}}};
                        uint32_t l_443 = 0x1D239BC3L;
                        VECTOR(int32_t, 8) l_444 = (VECTOR(int32_t, 8))(0x33761073L, (VECTOR(int32_t, 4))(0x33761073L, (VECTOR(int32_t, 2))(0x33761073L, 0x742B0DC1L), 0x742B0DC1L), 0x742B0DC1L, 0x33761073L, 0x742B0DC1L);
                        VECTOR(int16_t, 8) l_445 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                        VECTOR(int16_t, 4) l_446 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 9L), 9L);
                        VECTOR(int16_t, 2) l_447 = (VECTOR(int16_t, 2))(0x0980L, 0L);
                        uint16_t l_448 = 8UL;
                        int32_t l_449 = (-9L);
                        int32_t l_450 = (-8L);
                        int32_t l_451 = 0x08B9A37CL;
                        int32_t l_452 = 0L;
                        int32_t l_453[7][6][1] = {{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L},{7L},{7L}}};
                        int32_t l_454 = 5L;
                        uint16_t l_455 = 0x3F53L;
                        int i, j, k;
                        l_449 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_440.s99dede0e)).s2, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_441.yxxywyzz)).s3633217167125014)).s7792)), 0x7CC782DEL, l_442[0][6][1], (-1L), l_443, 3L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x5CC7CCA2L, 0x79F7206BL)).xxyxyyyxxyyyxyyx, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_444.s73220246)))).s01, ((VECTOR(int32_t, 2))(0L, 2L)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(l_445.s62514716)).even, ((VECTOR(int16_t, 4))(l_446.xwzx))))), (-1L), ((VECTOR(int16_t, 2))(1L, 1L)), 1L)).s35, ((VECTOR(int16_t, 4))(l_447.yxyx)).hi))).xyyxxyyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xC987L, 0x3658L)).xyyyyxxyyyyxyyyy)))).odd))).s12))).yxyyxyxyxxxyyxyy))).s02)), 0x1E989258L, l_448, 0x592378A7L, 0x2FAE2950L)).s4e1e)), 1L, 0x460DBC22L, 9L)).s1;
                        l_450 = 1L;
                        l_452 = l_451;
                        l_455--;
                    }
                    else
                    { /* block id: 164 */
                        uint8_t l_458[3];
                        VECTOR(int32_t, 8) l_460 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x014FAB29L), 0x014FAB29L), 0x014FAB29L, 7L, 0x014FAB29L);
                        int32_t *l_459 = (void*)0;
                        int32_t *l_461 = (void*)0;
                        int32_t *l_462[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_458[i] = 0xAAL;
                        l_462[2] = (l_458[2] , (l_461 = l_459));
                    }
                }
                l_466 = (l_465 = (((VECTOR(int16_t, 2))((-1L), 0x5294L)).even , (l_464 = l_463)));
                unsigned int result = 0;
                result += l_436;
                atomic_add(&p_1635->g_special_values[30 * get_linear_group_id() + 11], result);
            }
            else
            { /* block id: 172 */
                (1 + 1);
            }
            (**p_68) &= ((FAKE_DIVERGE(p_1635->local_2_offset, get_local_id(2), 10) , ((*l_467) = &p_67)) == ((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((p_1635->g_335.s5 ^ FAKE_DIVERGE(p_1635->group_2_offset, get_group_id(2), 10)), (((l_412 ^= 0x284EB88EL) != ((l_476 = &l_106[1][0][2]) != p_68)) && ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1635->g_477.s61500273)).s41)).odd))) , &l_353) != &p_1635->g_351), ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((!((p_67 , (((*l_484) = l_482) , 1UL)) ^ p_1635->g_261)) , p_1635->g_303), p_1635->g_477.s2)), 0x19L)) , l_411))) , l_485));
        }
        (*p_1635->g_161) = (*p_1635->g_161);
        for (p_1635->g_259 = 0; (p_1635->g_259 <= 23); ++p_1635->g_259)
        { /* block id: 184 */
            VECTOR(int16_t, 2) l_488 = (VECTOR(int16_t, 2))(0L, (-9L));
            VECTOR(int8_t, 2) l_492 = (VECTOR(int8_t, 2))(1L, 0x5DL);
            uint64_t *l_499 = (void*)0;
            uint64_t *l_500 = &l_482;
            int32_t **l_510 = &p_1635->g_162;
            int8_t l_525 = 0x7FL;
            uint8_t l_526 = 0UL;
            int32_t l_541 = 0x5113D3C4L;
            VECTOR(int16_t, 4) l_588 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x364DL), 0x364DL);
            int32_t l_617 = 2L;
            int32_t l_623 = 0x2CFD62EEL;
            int32_t l_625 = 5L;
            int32_t l_626 = (-10L);
            int32_t l_630 = 0x4E3B9F6EL;
            int32_t l_635[7][9][3] = {{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}},{{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L},{0x60677D20L,0x460722FEL,0x5D816707L}}};
            int i, j, k;
            (1 + 1);
        }
        (*p_1635->g_140) = (**p_68);
    }
    return p_1635->g_387.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1635->g_comm_values
 * writes:
 */
uint8_t  func_69(int32_t * p_70, int32_t ** p_71, uint8_t  p_72, int32_t * p_73, int8_t  p_74, struct S0 * p_1635)
{ /* block id: 10 */
    return p_1635->g_comm_values[p_1635->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[133];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 133; i++)
            l_comm_values[i] = 1;
    struct S0 c_1636;
    struct S0* p_1635 = &c_1636;
    struct S0 c_1637 = {
        1L, // p_1635->g_3
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL), // p_1635->g_8
        18446744073709551615UL, // p_1635->g_60
        (-1L), // p_1635->g_80
        0x5EAA97CAL, // p_1635->g_84
        (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x6FDDL), 0x6FDDL), 0x6FDDL, 9L, 0x6FDDL, (VECTOR(int16_t, 2))(9L, 0x6FDDL), (VECTOR(int16_t, 2))(9L, 0x6FDDL), 9L, 0x6FDDL, 9L, 0x6FDDL), // p_1635->g_100
        (VECTOR(int16_t, 4))(0x292FL, (VECTOR(int16_t, 2))(0x292FL, 9L), 9L), // p_1635->g_101
        0x0B83L, // p_1635->g_103
        (VECTOR(int32_t, 2))(0x3867A306L, 0x7D7005AEL), // p_1635->g_127
        (VECTOR(uint32_t, 2))(4294967295UL, 0xE86663A5L), // p_1635->g_130
        0x5ED4F656L, // p_1635->g_141
        &p_1635->g_141, // p_1635->g_140
        &p_1635->g_140, // p_1635->g_139
        (VECTOR(int16_t, 16))(0x347FL, (VECTOR(int16_t, 4))(0x347FL, (VECTOR(int16_t, 2))(0x347FL, 0x2019L), 0x2019L), 0x2019L, 0x347FL, 0x2019L, (VECTOR(int16_t, 2))(0x347FL, 0x2019L), (VECTOR(int16_t, 2))(0x347FL, 0x2019L), 0x347FL, 0x2019L, 0x347FL, 0x2019L), // p_1635->g_144
        (-1L), // p_1635->g_153
        (VECTOR(int64_t, 16))(0x7208DD124E345E96L, (VECTOR(int64_t, 4))(0x7208DD124E345E96L, (VECTOR(int64_t, 2))(0x7208DD124E345E96L, 0L), 0L), 0L, 0x7208DD124E345E96L, 0L, (VECTOR(int64_t, 2))(0x7208DD124E345E96L, 0L), (VECTOR(int64_t, 2))(0x7208DD124E345E96L, 0L), 0x7208DD124E345E96L, 0L, 0x7208DD124E345E96L, 0L), // p_1635->g_158
        &p_1635->g_3, // p_1635->g_162
        &p_1635->g_162, // p_1635->g_161
        (-5L), // p_1635->g_167
        &p_1635->g_103, // p_1635->g_232
        {0UL,0UL,0UL,0UL,0UL,0UL}, // p_1635->g_257
        0L, // p_1635->g_259
        0L, // p_1635->g_261
        (VECTOR(int64_t, 2))(0x4CE385371FA3FB0CL, 3L), // p_1635->g_290
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5081BB5C9429CAD5L), 0x5081BB5C9429CAD5L), 0x5081BB5C9429CAD5L, 0L, 0x5081BB5C9429CAD5L, (VECTOR(int64_t, 2))(0L, 0x5081BB5C9429CAD5L), (VECTOR(int64_t, 2))(0L, 0x5081BB5C9429CAD5L), 0L, 0x5081BB5C9429CAD5L, 0L, 0x5081BB5C9429CAD5L), // p_1635->g_291
        18446744073709551611UL, // p_1635->g_303
        9L, // p_1635->g_322
        (VECTOR(uint32_t, 8))(0xEE477E6FL, (VECTOR(uint32_t, 4))(0xEE477E6FL, (VECTOR(uint32_t, 2))(0xEE477E6FL, 1UL), 1UL), 1UL, 0xEE477E6FL, 1UL), // p_1635->g_335
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x4EL), 0x4EL), 0x4EL, (-9L), 0x4EL, (VECTOR(int8_t, 2))((-9L), 0x4EL), (VECTOR(int8_t, 2))((-9L), 0x4EL), (-9L), 0x4EL, (-9L), 0x4EL), // p_1635->g_347
        (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 1L), 1L), // p_1635->g_348
        {{(void*)0,(void*)0,&p_1635->g_257[0],&p_1635->g_257[0]},{(void*)0,(void*)0,&p_1635->g_257[0],&p_1635->g_257[0]},{(void*)0,(void*)0,&p_1635->g_257[0],&p_1635->g_257[0]},{(void*)0,(void*)0,&p_1635->g_257[0],&p_1635->g_257[0]},{(void*)0,(void*)0,&p_1635->g_257[0],&p_1635->g_257[0]}}, // p_1635->g_352
        &p_1635->g_352[1][3], // p_1635->g_351
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1635->g_385
        (VECTOR(int32_t, 16))(0x6B271DC7L, (VECTOR(int32_t, 4))(0x6B271DC7L, (VECTOR(int32_t, 2))(0x6B271DC7L, 0x71B1F357L), 0x71B1F357L), 0x71B1F357L, 0x6B271DC7L, 0x71B1F357L, (VECTOR(int32_t, 2))(0x6B271DC7L, 0x71B1F357L), (VECTOR(int32_t, 2))(0x6B271DC7L, 0x71B1F357L), 0x6B271DC7L, 0x71B1F357L, 0x6B271DC7L, 0x71B1F357L), // p_1635->g_386
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x458B270BL), 0x458B270BL), 0x458B270BL, 0L, 0x458B270BL), // p_1635->g_387
        (VECTOR(uint16_t, 2))(1UL, 0x8D23L), // p_1635->g_425
        (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL), // p_1635->g_426
        (VECTOR(int16_t, 8))(0x41B5L, (VECTOR(int16_t, 4))(0x41B5L, (VECTOR(int16_t, 2))(0x41B5L, 0x7677L), 0x7677L), 0x7677L, 0x41B5L, 0x7677L), // p_1635->g_477
        (VECTOR(uint16_t, 2))(0x09D3L, 0UL), // p_1635->g_498
        (void*)0, // p_1635->g_534
        (VECTOR(int32_t, 4))(0x22536833L, (VECTOR(int32_t, 2))(0x22536833L, 3L), 3L), // p_1635->g_555
        (VECTOR(int32_t, 8))(0x7C670D08L, (VECTOR(int32_t, 4))(0x7C670D08L, (VECTOR(int32_t, 2))(0x7C670D08L, (-10L)), (-10L)), (-10L), 0x7C670D08L, (-10L)), // p_1635->g_556
        2L, // p_1635->g_566
        (-4L), // p_1635->g_577
        6L, // p_1635->g_579
        (void*)0, // p_1635->g_646
        &p_1635->g_646, // p_1635->g_645
        &p_1635->g_645, // p_1635->g_644
        (VECTOR(int8_t, 2))(0x52L, 0x1AL), // p_1635->g_656
        0x60L, // p_1635->g_713
        (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L), // p_1635->g_777
        (VECTOR(int16_t, 2))(1L, 0x352BL), // p_1635->g_869
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_1635->g_876
        &p_1635->g_232, // p_1635->g_879
        {&p_1635->g_879,&p_1635->g_879,&p_1635->g_879,&p_1635->g_879}, // p_1635->g_878
        (-1L), // p_1635->g_910
        (VECTOR(uint8_t, 16))(0xCAL, (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 1UL), 1UL), 1UL, 0xCAL, 1UL, (VECTOR(uint8_t, 2))(0xCAL, 1UL), (VECTOR(uint8_t, 2))(0xCAL, 1UL), 0xCAL, 1UL, 0xCAL, 1UL), // p_1635->g_949
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L)), // p_1635->g_978
        (VECTOR(int16_t, 8))(0x1710L, (VECTOR(int16_t, 4))(0x1710L, (VECTOR(int16_t, 2))(0x1710L, 0L), 0L), 0L, 0x1710L, 0L), // p_1635->g_983
        (VECTOR(int16_t, 2))(0x523BL, (-6L)), // p_1635->g_984
        (VECTOR(int16_t, 16))(0x4F08L, (VECTOR(int16_t, 4))(0x4F08L, (VECTOR(int16_t, 2))(0x4F08L, 0x745AL), 0x745AL), 0x745AL, 0x4F08L, 0x745AL, (VECTOR(int16_t, 2))(0x4F08L, 0x745AL), (VECTOR(int16_t, 2))(0x4F08L, 0x745AL), 0x4F08L, 0x745AL, 0x4F08L, 0x745AL), // p_1635->g_985
        (VECTOR(int16_t, 2))(0x45CDL, 0x1D90L), // p_1635->g_987
        (VECTOR(uint8_t, 8))(0x7EL, (VECTOR(uint8_t, 4))(0x7EL, (VECTOR(uint8_t, 2))(0x7EL, 255UL), 255UL), 255UL, 0x7EL, 255UL), // p_1635->g_992
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1635->g_996
        (void*)0, // p_1635->g_1006
        (VECTOR(uint64_t, 2))(0xA9A6B67AD0FA90C7L, 0xF621044EC60EE1F1L), // p_1635->g_1010
        (VECTOR(int16_t, 2))(0x3A07L, 0x6567L), // p_1635->g_1021
        0x9D8201A24436736AL, // p_1635->g_1060
        {{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}},{{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)},{0x055E8418L,(-1L),0x6E837E12L,0x2954C498L,(-2L)}}}, // p_1635->g_1061
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), // p_1635->g_1085
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2F341D2CL), 0x2F341D2CL), 0x2F341D2CL, 0L, 0x2F341D2CL, (VECTOR(int32_t, 2))(0L, 0x2F341D2CL), (VECTOR(int32_t, 2))(0L, 0x2F341D2CL), 0L, 0x2F341D2CL, 0L, 0x2F341D2CL), // p_1635->g_1155
        (VECTOR(uint8_t, 16))(0x06L, (VECTOR(uint8_t, 4))(0x06L, (VECTOR(uint8_t, 2))(0x06L, 250UL), 250UL), 250UL, 0x06L, 250UL, (VECTOR(uint8_t, 2))(0x06L, 250UL), (VECTOR(uint8_t, 2))(0x06L, 250UL), 0x06L, 250UL, 0x06L, 250UL), // p_1635->g_1168
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 7UL), 7UL), // p_1635->g_1169
        (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), // p_1635->g_1188
        18446744073709551615UL, // p_1635->g_1190
        (void*)0, // p_1635->g_1196
        &p_1635->g_1196, // p_1635->g_1195
        0x5641L, // p_1635->g_1200
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-4L)), (-4L)), (-4L), (-4L), (-4L)), // p_1635->g_1308
        (VECTOR(uint64_t, 2))(1UL, 1UL), // p_1635->g_1335
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0AL), 0x0AL), 0x0AL, 0L, 0x0AL), // p_1635->g_1340
        (VECTOR(int16_t, 2))(0x47E2L, (-8L)), // p_1635->g_1366
        (VECTOR(int16_t, 16))(0x46B5L, (VECTOR(int16_t, 4))(0x46B5L, (VECTOR(int16_t, 2))(0x46B5L, 0L), 0L), 0L, 0x46B5L, 0L, (VECTOR(int16_t, 2))(0x46B5L, 0L), (VECTOR(int16_t, 2))(0x46B5L, 0L), 0x46B5L, 0L, 0x46B5L, 0L), // p_1635->g_1367
        (VECTOR(int16_t, 2))(0x7AE1L, 0x3E2EL), // p_1635->g_1385
        (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), // p_1635->g_1416
        (VECTOR(int32_t, 2))(0x202B7DA4L, 0L), // p_1635->g_1427
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), // p_1635->g_1428
        (VECTOR(int32_t, 8))(0x43D20DD7L, (VECTOR(int32_t, 4))(0x43D20DD7L, (VECTOR(int32_t, 2))(0x43D20DD7L, 4L), 4L), 4L, 0x43D20DD7L, 4L), // p_1635->g_1453
        (VECTOR(int32_t, 2))(0x4DB3AE4BL, 6L), // p_1635->g_1483
        (VECTOR(int32_t, 16))(0x0556F634L, (VECTOR(int32_t, 4))(0x0556F634L, (VECTOR(int32_t, 2))(0x0556F634L, 3L), 3L), 3L, 0x0556F634L, 3L, (VECTOR(int32_t, 2))(0x0556F634L, 3L), (VECTOR(int32_t, 2))(0x0556F634L, 3L), 0x0556F634L, 3L, 0x0556F634L, 3L), // p_1635->g_1506
        (VECTOR(int16_t, 2))(0x35DEL, 0x73D2L), // p_1635->g_1507
        0xAE488218L, // p_1635->g_1549
        (VECTOR(int32_t, 4))(0x3DA50D4AL, (VECTOR(int32_t, 2))(0x3DA50D4AL, 1L), 1L), // p_1635->g_1562
        0x328FD371L, // p_1635->g_1570
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1635->g_1630
        &p_1635->g_1630[0], // p_1635->g_1629
        0, // p_1635->v_collective
        sequence_input[get_global_id(0)], // p_1635->global_0_offset
        sequence_input[get_global_id(1)], // p_1635->global_1_offset
        sequence_input[get_global_id(2)], // p_1635->global_2_offset
        sequence_input[get_local_id(0)], // p_1635->local_0_offset
        sequence_input[get_local_id(1)], // p_1635->local_1_offset
        sequence_input[get_local_id(2)], // p_1635->local_2_offset
        sequence_input[get_group_id(0)], // p_1635->group_0_offset
        sequence_input[get_group_id(1)], // p_1635->group_1_offset
        sequence_input[get_group_id(2)], // p_1635->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 133)), permutations[0][get_linear_local_id()])), // p_1635->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1636 = c_1637;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1635);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1635->g_3, "p_1635->g_3", print_hash_value);
    transparent_crc(p_1635->g_8.s0, "p_1635->g_8.s0", print_hash_value);
    transparent_crc(p_1635->g_8.s1, "p_1635->g_8.s1", print_hash_value);
    transparent_crc(p_1635->g_8.s2, "p_1635->g_8.s2", print_hash_value);
    transparent_crc(p_1635->g_8.s3, "p_1635->g_8.s3", print_hash_value);
    transparent_crc(p_1635->g_8.s4, "p_1635->g_8.s4", print_hash_value);
    transparent_crc(p_1635->g_8.s5, "p_1635->g_8.s5", print_hash_value);
    transparent_crc(p_1635->g_8.s6, "p_1635->g_8.s6", print_hash_value);
    transparent_crc(p_1635->g_8.s7, "p_1635->g_8.s7", print_hash_value);
    transparent_crc(p_1635->g_60, "p_1635->g_60", print_hash_value);
    transparent_crc(p_1635->g_80, "p_1635->g_80", print_hash_value);
    transparent_crc(p_1635->g_84, "p_1635->g_84", print_hash_value);
    transparent_crc(p_1635->g_100.s0, "p_1635->g_100.s0", print_hash_value);
    transparent_crc(p_1635->g_100.s1, "p_1635->g_100.s1", print_hash_value);
    transparent_crc(p_1635->g_100.s2, "p_1635->g_100.s2", print_hash_value);
    transparent_crc(p_1635->g_100.s3, "p_1635->g_100.s3", print_hash_value);
    transparent_crc(p_1635->g_100.s4, "p_1635->g_100.s4", print_hash_value);
    transparent_crc(p_1635->g_100.s5, "p_1635->g_100.s5", print_hash_value);
    transparent_crc(p_1635->g_100.s6, "p_1635->g_100.s6", print_hash_value);
    transparent_crc(p_1635->g_100.s7, "p_1635->g_100.s7", print_hash_value);
    transparent_crc(p_1635->g_100.s8, "p_1635->g_100.s8", print_hash_value);
    transparent_crc(p_1635->g_100.s9, "p_1635->g_100.s9", print_hash_value);
    transparent_crc(p_1635->g_100.sa, "p_1635->g_100.sa", print_hash_value);
    transparent_crc(p_1635->g_100.sb, "p_1635->g_100.sb", print_hash_value);
    transparent_crc(p_1635->g_100.sc, "p_1635->g_100.sc", print_hash_value);
    transparent_crc(p_1635->g_100.sd, "p_1635->g_100.sd", print_hash_value);
    transparent_crc(p_1635->g_100.se, "p_1635->g_100.se", print_hash_value);
    transparent_crc(p_1635->g_100.sf, "p_1635->g_100.sf", print_hash_value);
    transparent_crc(p_1635->g_101.x, "p_1635->g_101.x", print_hash_value);
    transparent_crc(p_1635->g_101.y, "p_1635->g_101.y", print_hash_value);
    transparent_crc(p_1635->g_101.z, "p_1635->g_101.z", print_hash_value);
    transparent_crc(p_1635->g_101.w, "p_1635->g_101.w", print_hash_value);
    transparent_crc(p_1635->g_103, "p_1635->g_103", print_hash_value);
    transparent_crc(p_1635->g_127.x, "p_1635->g_127.x", print_hash_value);
    transparent_crc(p_1635->g_127.y, "p_1635->g_127.y", print_hash_value);
    transparent_crc(p_1635->g_130.x, "p_1635->g_130.x", print_hash_value);
    transparent_crc(p_1635->g_130.y, "p_1635->g_130.y", print_hash_value);
    transparent_crc(p_1635->g_141, "p_1635->g_141", print_hash_value);
    transparent_crc(p_1635->g_144.s0, "p_1635->g_144.s0", print_hash_value);
    transparent_crc(p_1635->g_144.s1, "p_1635->g_144.s1", print_hash_value);
    transparent_crc(p_1635->g_144.s2, "p_1635->g_144.s2", print_hash_value);
    transparent_crc(p_1635->g_144.s3, "p_1635->g_144.s3", print_hash_value);
    transparent_crc(p_1635->g_144.s4, "p_1635->g_144.s4", print_hash_value);
    transparent_crc(p_1635->g_144.s5, "p_1635->g_144.s5", print_hash_value);
    transparent_crc(p_1635->g_144.s6, "p_1635->g_144.s6", print_hash_value);
    transparent_crc(p_1635->g_144.s7, "p_1635->g_144.s7", print_hash_value);
    transparent_crc(p_1635->g_144.s8, "p_1635->g_144.s8", print_hash_value);
    transparent_crc(p_1635->g_144.s9, "p_1635->g_144.s9", print_hash_value);
    transparent_crc(p_1635->g_144.sa, "p_1635->g_144.sa", print_hash_value);
    transparent_crc(p_1635->g_144.sb, "p_1635->g_144.sb", print_hash_value);
    transparent_crc(p_1635->g_144.sc, "p_1635->g_144.sc", print_hash_value);
    transparent_crc(p_1635->g_144.sd, "p_1635->g_144.sd", print_hash_value);
    transparent_crc(p_1635->g_144.se, "p_1635->g_144.se", print_hash_value);
    transparent_crc(p_1635->g_144.sf, "p_1635->g_144.sf", print_hash_value);
    transparent_crc(p_1635->g_153, "p_1635->g_153", print_hash_value);
    transparent_crc(p_1635->g_158.s0, "p_1635->g_158.s0", print_hash_value);
    transparent_crc(p_1635->g_158.s1, "p_1635->g_158.s1", print_hash_value);
    transparent_crc(p_1635->g_158.s2, "p_1635->g_158.s2", print_hash_value);
    transparent_crc(p_1635->g_158.s3, "p_1635->g_158.s3", print_hash_value);
    transparent_crc(p_1635->g_158.s4, "p_1635->g_158.s4", print_hash_value);
    transparent_crc(p_1635->g_158.s5, "p_1635->g_158.s5", print_hash_value);
    transparent_crc(p_1635->g_158.s6, "p_1635->g_158.s6", print_hash_value);
    transparent_crc(p_1635->g_158.s7, "p_1635->g_158.s7", print_hash_value);
    transparent_crc(p_1635->g_158.s8, "p_1635->g_158.s8", print_hash_value);
    transparent_crc(p_1635->g_158.s9, "p_1635->g_158.s9", print_hash_value);
    transparent_crc(p_1635->g_158.sa, "p_1635->g_158.sa", print_hash_value);
    transparent_crc(p_1635->g_158.sb, "p_1635->g_158.sb", print_hash_value);
    transparent_crc(p_1635->g_158.sc, "p_1635->g_158.sc", print_hash_value);
    transparent_crc(p_1635->g_158.sd, "p_1635->g_158.sd", print_hash_value);
    transparent_crc(p_1635->g_158.se, "p_1635->g_158.se", print_hash_value);
    transparent_crc(p_1635->g_158.sf, "p_1635->g_158.sf", print_hash_value);
    transparent_crc(p_1635->g_167, "p_1635->g_167", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1635->g_257[i], "p_1635->g_257[i]", print_hash_value);

    }
    transparent_crc(p_1635->g_259, "p_1635->g_259", print_hash_value);
    transparent_crc(p_1635->g_261, "p_1635->g_261", print_hash_value);
    transparent_crc(p_1635->g_290.x, "p_1635->g_290.x", print_hash_value);
    transparent_crc(p_1635->g_290.y, "p_1635->g_290.y", print_hash_value);
    transparent_crc(p_1635->g_291.s0, "p_1635->g_291.s0", print_hash_value);
    transparent_crc(p_1635->g_291.s1, "p_1635->g_291.s1", print_hash_value);
    transparent_crc(p_1635->g_291.s2, "p_1635->g_291.s2", print_hash_value);
    transparent_crc(p_1635->g_291.s3, "p_1635->g_291.s3", print_hash_value);
    transparent_crc(p_1635->g_291.s4, "p_1635->g_291.s4", print_hash_value);
    transparent_crc(p_1635->g_291.s5, "p_1635->g_291.s5", print_hash_value);
    transparent_crc(p_1635->g_291.s6, "p_1635->g_291.s6", print_hash_value);
    transparent_crc(p_1635->g_291.s7, "p_1635->g_291.s7", print_hash_value);
    transparent_crc(p_1635->g_291.s8, "p_1635->g_291.s8", print_hash_value);
    transparent_crc(p_1635->g_291.s9, "p_1635->g_291.s9", print_hash_value);
    transparent_crc(p_1635->g_291.sa, "p_1635->g_291.sa", print_hash_value);
    transparent_crc(p_1635->g_291.sb, "p_1635->g_291.sb", print_hash_value);
    transparent_crc(p_1635->g_291.sc, "p_1635->g_291.sc", print_hash_value);
    transparent_crc(p_1635->g_291.sd, "p_1635->g_291.sd", print_hash_value);
    transparent_crc(p_1635->g_291.se, "p_1635->g_291.se", print_hash_value);
    transparent_crc(p_1635->g_291.sf, "p_1635->g_291.sf", print_hash_value);
    transparent_crc(p_1635->g_303, "p_1635->g_303", print_hash_value);
    transparent_crc(p_1635->g_322, "p_1635->g_322", print_hash_value);
    transparent_crc(p_1635->g_335.s0, "p_1635->g_335.s0", print_hash_value);
    transparent_crc(p_1635->g_335.s1, "p_1635->g_335.s1", print_hash_value);
    transparent_crc(p_1635->g_335.s2, "p_1635->g_335.s2", print_hash_value);
    transparent_crc(p_1635->g_335.s3, "p_1635->g_335.s3", print_hash_value);
    transparent_crc(p_1635->g_335.s4, "p_1635->g_335.s4", print_hash_value);
    transparent_crc(p_1635->g_335.s5, "p_1635->g_335.s5", print_hash_value);
    transparent_crc(p_1635->g_335.s6, "p_1635->g_335.s6", print_hash_value);
    transparent_crc(p_1635->g_335.s7, "p_1635->g_335.s7", print_hash_value);
    transparent_crc(p_1635->g_347.s0, "p_1635->g_347.s0", print_hash_value);
    transparent_crc(p_1635->g_347.s1, "p_1635->g_347.s1", print_hash_value);
    transparent_crc(p_1635->g_347.s2, "p_1635->g_347.s2", print_hash_value);
    transparent_crc(p_1635->g_347.s3, "p_1635->g_347.s3", print_hash_value);
    transparent_crc(p_1635->g_347.s4, "p_1635->g_347.s4", print_hash_value);
    transparent_crc(p_1635->g_347.s5, "p_1635->g_347.s5", print_hash_value);
    transparent_crc(p_1635->g_347.s6, "p_1635->g_347.s6", print_hash_value);
    transparent_crc(p_1635->g_347.s7, "p_1635->g_347.s7", print_hash_value);
    transparent_crc(p_1635->g_347.s8, "p_1635->g_347.s8", print_hash_value);
    transparent_crc(p_1635->g_347.s9, "p_1635->g_347.s9", print_hash_value);
    transparent_crc(p_1635->g_347.sa, "p_1635->g_347.sa", print_hash_value);
    transparent_crc(p_1635->g_347.sb, "p_1635->g_347.sb", print_hash_value);
    transparent_crc(p_1635->g_347.sc, "p_1635->g_347.sc", print_hash_value);
    transparent_crc(p_1635->g_347.sd, "p_1635->g_347.sd", print_hash_value);
    transparent_crc(p_1635->g_347.se, "p_1635->g_347.se", print_hash_value);
    transparent_crc(p_1635->g_347.sf, "p_1635->g_347.sf", print_hash_value);
    transparent_crc(p_1635->g_348.x, "p_1635->g_348.x", print_hash_value);
    transparent_crc(p_1635->g_348.y, "p_1635->g_348.y", print_hash_value);
    transparent_crc(p_1635->g_348.z, "p_1635->g_348.z", print_hash_value);
    transparent_crc(p_1635->g_348.w, "p_1635->g_348.w", print_hash_value);
    transparent_crc(p_1635->g_385.s0, "p_1635->g_385.s0", print_hash_value);
    transparent_crc(p_1635->g_385.s1, "p_1635->g_385.s1", print_hash_value);
    transparent_crc(p_1635->g_385.s2, "p_1635->g_385.s2", print_hash_value);
    transparent_crc(p_1635->g_385.s3, "p_1635->g_385.s3", print_hash_value);
    transparent_crc(p_1635->g_385.s4, "p_1635->g_385.s4", print_hash_value);
    transparent_crc(p_1635->g_385.s5, "p_1635->g_385.s5", print_hash_value);
    transparent_crc(p_1635->g_385.s6, "p_1635->g_385.s6", print_hash_value);
    transparent_crc(p_1635->g_385.s7, "p_1635->g_385.s7", print_hash_value);
    transparent_crc(p_1635->g_386.s0, "p_1635->g_386.s0", print_hash_value);
    transparent_crc(p_1635->g_386.s1, "p_1635->g_386.s1", print_hash_value);
    transparent_crc(p_1635->g_386.s2, "p_1635->g_386.s2", print_hash_value);
    transparent_crc(p_1635->g_386.s3, "p_1635->g_386.s3", print_hash_value);
    transparent_crc(p_1635->g_386.s4, "p_1635->g_386.s4", print_hash_value);
    transparent_crc(p_1635->g_386.s5, "p_1635->g_386.s5", print_hash_value);
    transparent_crc(p_1635->g_386.s6, "p_1635->g_386.s6", print_hash_value);
    transparent_crc(p_1635->g_386.s7, "p_1635->g_386.s7", print_hash_value);
    transparent_crc(p_1635->g_386.s8, "p_1635->g_386.s8", print_hash_value);
    transparent_crc(p_1635->g_386.s9, "p_1635->g_386.s9", print_hash_value);
    transparent_crc(p_1635->g_386.sa, "p_1635->g_386.sa", print_hash_value);
    transparent_crc(p_1635->g_386.sb, "p_1635->g_386.sb", print_hash_value);
    transparent_crc(p_1635->g_386.sc, "p_1635->g_386.sc", print_hash_value);
    transparent_crc(p_1635->g_386.sd, "p_1635->g_386.sd", print_hash_value);
    transparent_crc(p_1635->g_386.se, "p_1635->g_386.se", print_hash_value);
    transparent_crc(p_1635->g_386.sf, "p_1635->g_386.sf", print_hash_value);
    transparent_crc(p_1635->g_387.s0, "p_1635->g_387.s0", print_hash_value);
    transparent_crc(p_1635->g_387.s1, "p_1635->g_387.s1", print_hash_value);
    transparent_crc(p_1635->g_387.s2, "p_1635->g_387.s2", print_hash_value);
    transparent_crc(p_1635->g_387.s3, "p_1635->g_387.s3", print_hash_value);
    transparent_crc(p_1635->g_387.s4, "p_1635->g_387.s4", print_hash_value);
    transparent_crc(p_1635->g_387.s5, "p_1635->g_387.s5", print_hash_value);
    transparent_crc(p_1635->g_387.s6, "p_1635->g_387.s6", print_hash_value);
    transparent_crc(p_1635->g_387.s7, "p_1635->g_387.s7", print_hash_value);
    transparent_crc(p_1635->g_425.x, "p_1635->g_425.x", print_hash_value);
    transparent_crc(p_1635->g_425.y, "p_1635->g_425.y", print_hash_value);
    transparent_crc(p_1635->g_426.s0, "p_1635->g_426.s0", print_hash_value);
    transparent_crc(p_1635->g_426.s1, "p_1635->g_426.s1", print_hash_value);
    transparent_crc(p_1635->g_426.s2, "p_1635->g_426.s2", print_hash_value);
    transparent_crc(p_1635->g_426.s3, "p_1635->g_426.s3", print_hash_value);
    transparent_crc(p_1635->g_426.s4, "p_1635->g_426.s4", print_hash_value);
    transparent_crc(p_1635->g_426.s5, "p_1635->g_426.s5", print_hash_value);
    transparent_crc(p_1635->g_426.s6, "p_1635->g_426.s6", print_hash_value);
    transparent_crc(p_1635->g_426.s7, "p_1635->g_426.s7", print_hash_value);
    transparent_crc(p_1635->g_477.s0, "p_1635->g_477.s0", print_hash_value);
    transparent_crc(p_1635->g_477.s1, "p_1635->g_477.s1", print_hash_value);
    transparent_crc(p_1635->g_477.s2, "p_1635->g_477.s2", print_hash_value);
    transparent_crc(p_1635->g_477.s3, "p_1635->g_477.s3", print_hash_value);
    transparent_crc(p_1635->g_477.s4, "p_1635->g_477.s4", print_hash_value);
    transparent_crc(p_1635->g_477.s5, "p_1635->g_477.s5", print_hash_value);
    transparent_crc(p_1635->g_477.s6, "p_1635->g_477.s6", print_hash_value);
    transparent_crc(p_1635->g_477.s7, "p_1635->g_477.s7", print_hash_value);
    transparent_crc(p_1635->g_498.x, "p_1635->g_498.x", print_hash_value);
    transparent_crc(p_1635->g_498.y, "p_1635->g_498.y", print_hash_value);
    transparent_crc(p_1635->g_555.x, "p_1635->g_555.x", print_hash_value);
    transparent_crc(p_1635->g_555.y, "p_1635->g_555.y", print_hash_value);
    transparent_crc(p_1635->g_555.z, "p_1635->g_555.z", print_hash_value);
    transparent_crc(p_1635->g_555.w, "p_1635->g_555.w", print_hash_value);
    transparent_crc(p_1635->g_556.s0, "p_1635->g_556.s0", print_hash_value);
    transparent_crc(p_1635->g_556.s1, "p_1635->g_556.s1", print_hash_value);
    transparent_crc(p_1635->g_556.s2, "p_1635->g_556.s2", print_hash_value);
    transparent_crc(p_1635->g_556.s3, "p_1635->g_556.s3", print_hash_value);
    transparent_crc(p_1635->g_556.s4, "p_1635->g_556.s4", print_hash_value);
    transparent_crc(p_1635->g_556.s5, "p_1635->g_556.s5", print_hash_value);
    transparent_crc(p_1635->g_556.s6, "p_1635->g_556.s6", print_hash_value);
    transparent_crc(p_1635->g_556.s7, "p_1635->g_556.s7", print_hash_value);
    transparent_crc(p_1635->g_566, "p_1635->g_566", print_hash_value);
    transparent_crc(p_1635->g_577, "p_1635->g_577", print_hash_value);
    transparent_crc(p_1635->g_579, "p_1635->g_579", print_hash_value);
    transparent_crc(p_1635->g_656.x, "p_1635->g_656.x", print_hash_value);
    transparent_crc(p_1635->g_656.y, "p_1635->g_656.y", print_hash_value);
    transparent_crc(p_1635->g_713, "p_1635->g_713", print_hash_value);
    transparent_crc(p_1635->g_777.s0, "p_1635->g_777.s0", print_hash_value);
    transparent_crc(p_1635->g_777.s1, "p_1635->g_777.s1", print_hash_value);
    transparent_crc(p_1635->g_777.s2, "p_1635->g_777.s2", print_hash_value);
    transparent_crc(p_1635->g_777.s3, "p_1635->g_777.s3", print_hash_value);
    transparent_crc(p_1635->g_777.s4, "p_1635->g_777.s4", print_hash_value);
    transparent_crc(p_1635->g_777.s5, "p_1635->g_777.s5", print_hash_value);
    transparent_crc(p_1635->g_777.s6, "p_1635->g_777.s6", print_hash_value);
    transparent_crc(p_1635->g_777.s7, "p_1635->g_777.s7", print_hash_value);
    transparent_crc(p_1635->g_869.x, "p_1635->g_869.x", print_hash_value);
    transparent_crc(p_1635->g_869.y, "p_1635->g_869.y", print_hash_value);
    transparent_crc(p_1635->g_910, "p_1635->g_910", print_hash_value);
    transparent_crc(p_1635->g_949.s0, "p_1635->g_949.s0", print_hash_value);
    transparent_crc(p_1635->g_949.s1, "p_1635->g_949.s1", print_hash_value);
    transparent_crc(p_1635->g_949.s2, "p_1635->g_949.s2", print_hash_value);
    transparent_crc(p_1635->g_949.s3, "p_1635->g_949.s3", print_hash_value);
    transparent_crc(p_1635->g_949.s4, "p_1635->g_949.s4", print_hash_value);
    transparent_crc(p_1635->g_949.s5, "p_1635->g_949.s5", print_hash_value);
    transparent_crc(p_1635->g_949.s6, "p_1635->g_949.s6", print_hash_value);
    transparent_crc(p_1635->g_949.s7, "p_1635->g_949.s7", print_hash_value);
    transparent_crc(p_1635->g_949.s8, "p_1635->g_949.s8", print_hash_value);
    transparent_crc(p_1635->g_949.s9, "p_1635->g_949.s9", print_hash_value);
    transparent_crc(p_1635->g_949.sa, "p_1635->g_949.sa", print_hash_value);
    transparent_crc(p_1635->g_949.sb, "p_1635->g_949.sb", print_hash_value);
    transparent_crc(p_1635->g_949.sc, "p_1635->g_949.sc", print_hash_value);
    transparent_crc(p_1635->g_949.sd, "p_1635->g_949.sd", print_hash_value);
    transparent_crc(p_1635->g_949.se, "p_1635->g_949.se", print_hash_value);
    transparent_crc(p_1635->g_949.sf, "p_1635->g_949.sf", print_hash_value);
    transparent_crc(p_1635->g_978.s0, "p_1635->g_978.s0", print_hash_value);
    transparent_crc(p_1635->g_978.s1, "p_1635->g_978.s1", print_hash_value);
    transparent_crc(p_1635->g_978.s2, "p_1635->g_978.s2", print_hash_value);
    transparent_crc(p_1635->g_978.s3, "p_1635->g_978.s3", print_hash_value);
    transparent_crc(p_1635->g_978.s4, "p_1635->g_978.s4", print_hash_value);
    transparent_crc(p_1635->g_978.s5, "p_1635->g_978.s5", print_hash_value);
    transparent_crc(p_1635->g_978.s6, "p_1635->g_978.s6", print_hash_value);
    transparent_crc(p_1635->g_978.s7, "p_1635->g_978.s7", print_hash_value);
    transparent_crc(p_1635->g_983.s0, "p_1635->g_983.s0", print_hash_value);
    transparent_crc(p_1635->g_983.s1, "p_1635->g_983.s1", print_hash_value);
    transparent_crc(p_1635->g_983.s2, "p_1635->g_983.s2", print_hash_value);
    transparent_crc(p_1635->g_983.s3, "p_1635->g_983.s3", print_hash_value);
    transparent_crc(p_1635->g_983.s4, "p_1635->g_983.s4", print_hash_value);
    transparent_crc(p_1635->g_983.s5, "p_1635->g_983.s5", print_hash_value);
    transparent_crc(p_1635->g_983.s6, "p_1635->g_983.s6", print_hash_value);
    transparent_crc(p_1635->g_983.s7, "p_1635->g_983.s7", print_hash_value);
    transparent_crc(p_1635->g_984.x, "p_1635->g_984.x", print_hash_value);
    transparent_crc(p_1635->g_984.y, "p_1635->g_984.y", print_hash_value);
    transparent_crc(p_1635->g_985.s0, "p_1635->g_985.s0", print_hash_value);
    transparent_crc(p_1635->g_985.s1, "p_1635->g_985.s1", print_hash_value);
    transparent_crc(p_1635->g_985.s2, "p_1635->g_985.s2", print_hash_value);
    transparent_crc(p_1635->g_985.s3, "p_1635->g_985.s3", print_hash_value);
    transparent_crc(p_1635->g_985.s4, "p_1635->g_985.s4", print_hash_value);
    transparent_crc(p_1635->g_985.s5, "p_1635->g_985.s5", print_hash_value);
    transparent_crc(p_1635->g_985.s6, "p_1635->g_985.s6", print_hash_value);
    transparent_crc(p_1635->g_985.s7, "p_1635->g_985.s7", print_hash_value);
    transparent_crc(p_1635->g_985.s8, "p_1635->g_985.s8", print_hash_value);
    transparent_crc(p_1635->g_985.s9, "p_1635->g_985.s9", print_hash_value);
    transparent_crc(p_1635->g_985.sa, "p_1635->g_985.sa", print_hash_value);
    transparent_crc(p_1635->g_985.sb, "p_1635->g_985.sb", print_hash_value);
    transparent_crc(p_1635->g_985.sc, "p_1635->g_985.sc", print_hash_value);
    transparent_crc(p_1635->g_985.sd, "p_1635->g_985.sd", print_hash_value);
    transparent_crc(p_1635->g_985.se, "p_1635->g_985.se", print_hash_value);
    transparent_crc(p_1635->g_985.sf, "p_1635->g_985.sf", print_hash_value);
    transparent_crc(p_1635->g_987.x, "p_1635->g_987.x", print_hash_value);
    transparent_crc(p_1635->g_987.y, "p_1635->g_987.y", print_hash_value);
    transparent_crc(p_1635->g_992.s0, "p_1635->g_992.s0", print_hash_value);
    transparent_crc(p_1635->g_992.s1, "p_1635->g_992.s1", print_hash_value);
    transparent_crc(p_1635->g_992.s2, "p_1635->g_992.s2", print_hash_value);
    transparent_crc(p_1635->g_992.s3, "p_1635->g_992.s3", print_hash_value);
    transparent_crc(p_1635->g_992.s4, "p_1635->g_992.s4", print_hash_value);
    transparent_crc(p_1635->g_992.s5, "p_1635->g_992.s5", print_hash_value);
    transparent_crc(p_1635->g_992.s6, "p_1635->g_992.s6", print_hash_value);
    transparent_crc(p_1635->g_992.s7, "p_1635->g_992.s7", print_hash_value);
    transparent_crc(p_1635->g_996.s0, "p_1635->g_996.s0", print_hash_value);
    transparent_crc(p_1635->g_996.s1, "p_1635->g_996.s1", print_hash_value);
    transparent_crc(p_1635->g_996.s2, "p_1635->g_996.s2", print_hash_value);
    transparent_crc(p_1635->g_996.s3, "p_1635->g_996.s3", print_hash_value);
    transparent_crc(p_1635->g_996.s4, "p_1635->g_996.s4", print_hash_value);
    transparent_crc(p_1635->g_996.s5, "p_1635->g_996.s5", print_hash_value);
    transparent_crc(p_1635->g_996.s6, "p_1635->g_996.s6", print_hash_value);
    transparent_crc(p_1635->g_996.s7, "p_1635->g_996.s7", print_hash_value);
    transparent_crc(p_1635->g_1010.x, "p_1635->g_1010.x", print_hash_value);
    transparent_crc(p_1635->g_1010.y, "p_1635->g_1010.y", print_hash_value);
    transparent_crc(p_1635->g_1021.x, "p_1635->g_1021.x", print_hash_value);
    transparent_crc(p_1635->g_1021.y, "p_1635->g_1021.y", print_hash_value);
    transparent_crc(p_1635->g_1060, "p_1635->g_1060", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1635->g_1061[i][j][k], "p_1635->g_1061[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1635->g_1085.x, "p_1635->g_1085.x", print_hash_value);
    transparent_crc(p_1635->g_1085.y, "p_1635->g_1085.y", print_hash_value);
    transparent_crc(p_1635->g_1085.z, "p_1635->g_1085.z", print_hash_value);
    transparent_crc(p_1635->g_1085.w, "p_1635->g_1085.w", print_hash_value);
    transparent_crc(p_1635->g_1155.s0, "p_1635->g_1155.s0", print_hash_value);
    transparent_crc(p_1635->g_1155.s1, "p_1635->g_1155.s1", print_hash_value);
    transparent_crc(p_1635->g_1155.s2, "p_1635->g_1155.s2", print_hash_value);
    transparent_crc(p_1635->g_1155.s3, "p_1635->g_1155.s3", print_hash_value);
    transparent_crc(p_1635->g_1155.s4, "p_1635->g_1155.s4", print_hash_value);
    transparent_crc(p_1635->g_1155.s5, "p_1635->g_1155.s5", print_hash_value);
    transparent_crc(p_1635->g_1155.s6, "p_1635->g_1155.s6", print_hash_value);
    transparent_crc(p_1635->g_1155.s7, "p_1635->g_1155.s7", print_hash_value);
    transparent_crc(p_1635->g_1155.s8, "p_1635->g_1155.s8", print_hash_value);
    transparent_crc(p_1635->g_1155.s9, "p_1635->g_1155.s9", print_hash_value);
    transparent_crc(p_1635->g_1155.sa, "p_1635->g_1155.sa", print_hash_value);
    transparent_crc(p_1635->g_1155.sb, "p_1635->g_1155.sb", print_hash_value);
    transparent_crc(p_1635->g_1155.sc, "p_1635->g_1155.sc", print_hash_value);
    transparent_crc(p_1635->g_1155.sd, "p_1635->g_1155.sd", print_hash_value);
    transparent_crc(p_1635->g_1155.se, "p_1635->g_1155.se", print_hash_value);
    transparent_crc(p_1635->g_1155.sf, "p_1635->g_1155.sf", print_hash_value);
    transparent_crc(p_1635->g_1168.s0, "p_1635->g_1168.s0", print_hash_value);
    transparent_crc(p_1635->g_1168.s1, "p_1635->g_1168.s1", print_hash_value);
    transparent_crc(p_1635->g_1168.s2, "p_1635->g_1168.s2", print_hash_value);
    transparent_crc(p_1635->g_1168.s3, "p_1635->g_1168.s3", print_hash_value);
    transparent_crc(p_1635->g_1168.s4, "p_1635->g_1168.s4", print_hash_value);
    transparent_crc(p_1635->g_1168.s5, "p_1635->g_1168.s5", print_hash_value);
    transparent_crc(p_1635->g_1168.s6, "p_1635->g_1168.s6", print_hash_value);
    transparent_crc(p_1635->g_1168.s7, "p_1635->g_1168.s7", print_hash_value);
    transparent_crc(p_1635->g_1168.s8, "p_1635->g_1168.s8", print_hash_value);
    transparent_crc(p_1635->g_1168.s9, "p_1635->g_1168.s9", print_hash_value);
    transparent_crc(p_1635->g_1168.sa, "p_1635->g_1168.sa", print_hash_value);
    transparent_crc(p_1635->g_1168.sb, "p_1635->g_1168.sb", print_hash_value);
    transparent_crc(p_1635->g_1168.sc, "p_1635->g_1168.sc", print_hash_value);
    transparent_crc(p_1635->g_1168.sd, "p_1635->g_1168.sd", print_hash_value);
    transparent_crc(p_1635->g_1168.se, "p_1635->g_1168.se", print_hash_value);
    transparent_crc(p_1635->g_1168.sf, "p_1635->g_1168.sf", print_hash_value);
    transparent_crc(p_1635->g_1169.x, "p_1635->g_1169.x", print_hash_value);
    transparent_crc(p_1635->g_1169.y, "p_1635->g_1169.y", print_hash_value);
    transparent_crc(p_1635->g_1169.z, "p_1635->g_1169.z", print_hash_value);
    transparent_crc(p_1635->g_1169.w, "p_1635->g_1169.w", print_hash_value);
    transparent_crc(p_1635->g_1188.x, "p_1635->g_1188.x", print_hash_value);
    transparent_crc(p_1635->g_1188.y, "p_1635->g_1188.y", print_hash_value);
    transparent_crc(p_1635->g_1190, "p_1635->g_1190", print_hash_value);
    transparent_crc(p_1635->g_1200, "p_1635->g_1200", print_hash_value);
    transparent_crc(p_1635->g_1308.s0, "p_1635->g_1308.s0", print_hash_value);
    transparent_crc(p_1635->g_1308.s1, "p_1635->g_1308.s1", print_hash_value);
    transparent_crc(p_1635->g_1308.s2, "p_1635->g_1308.s2", print_hash_value);
    transparent_crc(p_1635->g_1308.s3, "p_1635->g_1308.s3", print_hash_value);
    transparent_crc(p_1635->g_1308.s4, "p_1635->g_1308.s4", print_hash_value);
    transparent_crc(p_1635->g_1308.s5, "p_1635->g_1308.s5", print_hash_value);
    transparent_crc(p_1635->g_1308.s6, "p_1635->g_1308.s6", print_hash_value);
    transparent_crc(p_1635->g_1308.s7, "p_1635->g_1308.s7", print_hash_value);
    transparent_crc(p_1635->g_1335.x, "p_1635->g_1335.x", print_hash_value);
    transparent_crc(p_1635->g_1335.y, "p_1635->g_1335.y", print_hash_value);
    transparent_crc(p_1635->g_1340.s0, "p_1635->g_1340.s0", print_hash_value);
    transparent_crc(p_1635->g_1340.s1, "p_1635->g_1340.s1", print_hash_value);
    transparent_crc(p_1635->g_1340.s2, "p_1635->g_1340.s2", print_hash_value);
    transparent_crc(p_1635->g_1340.s3, "p_1635->g_1340.s3", print_hash_value);
    transparent_crc(p_1635->g_1340.s4, "p_1635->g_1340.s4", print_hash_value);
    transparent_crc(p_1635->g_1340.s5, "p_1635->g_1340.s5", print_hash_value);
    transparent_crc(p_1635->g_1340.s6, "p_1635->g_1340.s6", print_hash_value);
    transparent_crc(p_1635->g_1340.s7, "p_1635->g_1340.s7", print_hash_value);
    transparent_crc(p_1635->g_1366.x, "p_1635->g_1366.x", print_hash_value);
    transparent_crc(p_1635->g_1366.y, "p_1635->g_1366.y", print_hash_value);
    transparent_crc(p_1635->g_1367.s0, "p_1635->g_1367.s0", print_hash_value);
    transparent_crc(p_1635->g_1367.s1, "p_1635->g_1367.s1", print_hash_value);
    transparent_crc(p_1635->g_1367.s2, "p_1635->g_1367.s2", print_hash_value);
    transparent_crc(p_1635->g_1367.s3, "p_1635->g_1367.s3", print_hash_value);
    transparent_crc(p_1635->g_1367.s4, "p_1635->g_1367.s4", print_hash_value);
    transparent_crc(p_1635->g_1367.s5, "p_1635->g_1367.s5", print_hash_value);
    transparent_crc(p_1635->g_1367.s6, "p_1635->g_1367.s6", print_hash_value);
    transparent_crc(p_1635->g_1367.s7, "p_1635->g_1367.s7", print_hash_value);
    transparent_crc(p_1635->g_1367.s8, "p_1635->g_1367.s8", print_hash_value);
    transparent_crc(p_1635->g_1367.s9, "p_1635->g_1367.s9", print_hash_value);
    transparent_crc(p_1635->g_1367.sa, "p_1635->g_1367.sa", print_hash_value);
    transparent_crc(p_1635->g_1367.sb, "p_1635->g_1367.sb", print_hash_value);
    transparent_crc(p_1635->g_1367.sc, "p_1635->g_1367.sc", print_hash_value);
    transparent_crc(p_1635->g_1367.sd, "p_1635->g_1367.sd", print_hash_value);
    transparent_crc(p_1635->g_1367.se, "p_1635->g_1367.se", print_hash_value);
    transparent_crc(p_1635->g_1367.sf, "p_1635->g_1367.sf", print_hash_value);
    transparent_crc(p_1635->g_1385.x, "p_1635->g_1385.x", print_hash_value);
    transparent_crc(p_1635->g_1385.y, "p_1635->g_1385.y", print_hash_value);
    transparent_crc(p_1635->g_1416.x, "p_1635->g_1416.x", print_hash_value);
    transparent_crc(p_1635->g_1416.y, "p_1635->g_1416.y", print_hash_value);
    transparent_crc(p_1635->g_1416.z, "p_1635->g_1416.z", print_hash_value);
    transparent_crc(p_1635->g_1416.w, "p_1635->g_1416.w", print_hash_value);
    transparent_crc(p_1635->g_1427.x, "p_1635->g_1427.x", print_hash_value);
    transparent_crc(p_1635->g_1427.y, "p_1635->g_1427.y", print_hash_value);
    transparent_crc(p_1635->g_1428.x, "p_1635->g_1428.x", print_hash_value);
    transparent_crc(p_1635->g_1428.y, "p_1635->g_1428.y", print_hash_value);
    transparent_crc(p_1635->g_1428.z, "p_1635->g_1428.z", print_hash_value);
    transparent_crc(p_1635->g_1428.w, "p_1635->g_1428.w", print_hash_value);
    transparent_crc(p_1635->g_1453.s0, "p_1635->g_1453.s0", print_hash_value);
    transparent_crc(p_1635->g_1453.s1, "p_1635->g_1453.s1", print_hash_value);
    transparent_crc(p_1635->g_1453.s2, "p_1635->g_1453.s2", print_hash_value);
    transparent_crc(p_1635->g_1453.s3, "p_1635->g_1453.s3", print_hash_value);
    transparent_crc(p_1635->g_1453.s4, "p_1635->g_1453.s4", print_hash_value);
    transparent_crc(p_1635->g_1453.s5, "p_1635->g_1453.s5", print_hash_value);
    transparent_crc(p_1635->g_1453.s6, "p_1635->g_1453.s6", print_hash_value);
    transparent_crc(p_1635->g_1453.s7, "p_1635->g_1453.s7", print_hash_value);
    transparent_crc(p_1635->g_1483.x, "p_1635->g_1483.x", print_hash_value);
    transparent_crc(p_1635->g_1483.y, "p_1635->g_1483.y", print_hash_value);
    transparent_crc(p_1635->g_1506.s0, "p_1635->g_1506.s0", print_hash_value);
    transparent_crc(p_1635->g_1506.s1, "p_1635->g_1506.s1", print_hash_value);
    transparent_crc(p_1635->g_1506.s2, "p_1635->g_1506.s2", print_hash_value);
    transparent_crc(p_1635->g_1506.s3, "p_1635->g_1506.s3", print_hash_value);
    transparent_crc(p_1635->g_1506.s4, "p_1635->g_1506.s4", print_hash_value);
    transparent_crc(p_1635->g_1506.s5, "p_1635->g_1506.s5", print_hash_value);
    transparent_crc(p_1635->g_1506.s6, "p_1635->g_1506.s6", print_hash_value);
    transparent_crc(p_1635->g_1506.s7, "p_1635->g_1506.s7", print_hash_value);
    transparent_crc(p_1635->g_1506.s8, "p_1635->g_1506.s8", print_hash_value);
    transparent_crc(p_1635->g_1506.s9, "p_1635->g_1506.s9", print_hash_value);
    transparent_crc(p_1635->g_1506.sa, "p_1635->g_1506.sa", print_hash_value);
    transparent_crc(p_1635->g_1506.sb, "p_1635->g_1506.sb", print_hash_value);
    transparent_crc(p_1635->g_1506.sc, "p_1635->g_1506.sc", print_hash_value);
    transparent_crc(p_1635->g_1506.sd, "p_1635->g_1506.sd", print_hash_value);
    transparent_crc(p_1635->g_1506.se, "p_1635->g_1506.se", print_hash_value);
    transparent_crc(p_1635->g_1506.sf, "p_1635->g_1506.sf", print_hash_value);
    transparent_crc(p_1635->g_1507.x, "p_1635->g_1507.x", print_hash_value);
    transparent_crc(p_1635->g_1507.y, "p_1635->g_1507.y", print_hash_value);
    transparent_crc(p_1635->g_1549, "p_1635->g_1549", print_hash_value);
    transparent_crc(p_1635->g_1562.x, "p_1635->g_1562.x", print_hash_value);
    transparent_crc(p_1635->g_1562.y, "p_1635->g_1562.y", print_hash_value);
    transparent_crc(p_1635->g_1562.z, "p_1635->g_1562.z", print_hash_value);
    transparent_crc(p_1635->g_1562.w, "p_1635->g_1562.w", print_hash_value);
    transparent_crc(p_1635->g_1570, "p_1635->g_1570", print_hash_value);
    transparent_crc(p_1635->v_collective, "p_1635->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 30; i++)
            transparent_crc(p_1635->g_special_values[i + 30 * get_linear_group_id()], "p_1635->g_special_values[i + 30 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 30; i++)
            transparent_crc(p_1635->l_special_values[i], "p_1635->l_special_values[i]", print_hash_value);
    transparent_crc(p_1635->l_comm_values[get_linear_local_id()], "p_1635->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1635->g_comm_values[get_linear_group_id() * 133 + get_linear_local_id()], "p_1635->g_comm_values[get_linear_group_id() * 133 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
