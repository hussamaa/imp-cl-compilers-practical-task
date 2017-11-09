// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,75,1 -l 23,5,1
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

__constant uint32_t permutations[10][115] = {
{108,40,23,15,85,35,90,44,18,84,106,87,24,13,63,73,30,2,54,32,92,72,20,28,47,50,25,94,3,34,105,7,57,31,80,71,53,114,62,110,17,97,58,83,91,79,55,101,6,76,43,51,74,27,78,56,22,98,29,99,19,39,70,112,93,41,4,66,9,5,59,75,103,38,10,45,77,36,14,89,11,33,82,37,104,107,46,60,67,96,64,68,8,88,109,1,100,113,95,26,86,21,12,81,0,111,102,49,61,65,42,16,69,48,52}, // permutation 0
{17,27,96,74,33,80,95,18,41,82,114,64,77,63,109,16,79,48,111,59,6,93,66,86,89,45,28,72,94,12,101,7,85,52,71,4,9,70,20,38,25,108,54,44,51,40,107,30,26,15,62,112,22,88,10,73,34,24,46,5,83,23,13,58,61,32,43,97,99,39,37,1,100,56,68,98,92,0,87,36,91,31,84,69,2,75,105,21,65,55,47,102,53,11,57,14,81,104,19,29,49,78,8,110,60,103,3,35,113,76,42,90,50,106,67}, // permutation 1
{6,57,45,98,72,90,114,28,46,23,65,58,9,54,8,63,42,43,77,39,74,52,89,64,2,95,19,50,26,78,20,111,88,33,27,53,91,32,5,86,70,24,31,25,75,107,106,36,69,83,67,109,59,1,44,7,102,68,79,11,82,34,41,14,21,112,10,22,51,35,80,96,49,40,48,93,104,12,105,100,76,56,66,113,55,37,110,94,13,73,16,60,17,97,29,108,85,92,101,81,0,47,84,62,4,103,15,61,87,18,99,38,30,3,71}, // permutation 2
{28,39,76,97,83,22,29,90,49,95,113,46,34,73,48,69,45,79,44,82,17,84,104,101,60,40,72,1,37,56,91,30,5,111,98,88,4,6,110,62,38,27,103,61,67,81,25,89,112,85,20,42,75,41,52,15,53,92,43,55,70,68,77,107,66,57,47,58,80,71,14,106,0,50,78,51,63,3,100,10,109,21,102,23,59,9,64,87,74,114,24,33,19,2,12,94,36,31,26,11,65,32,8,99,108,16,93,96,7,86,105,35,54,18,13}, // permutation 3
{114,65,77,47,32,31,27,66,89,104,76,53,112,46,26,98,61,1,91,78,11,63,48,71,86,106,82,9,107,4,23,74,105,22,21,110,72,64,88,50,111,59,90,49,95,94,38,100,75,37,29,2,51,101,16,5,43,97,80,58,3,83,15,109,14,24,7,79,73,40,30,33,87,55,57,36,62,6,18,102,34,35,42,68,41,8,93,69,67,54,70,45,108,13,10,60,84,96,81,113,20,85,0,99,103,19,39,44,92,52,28,56,17,12,25}, // permutation 4
{1,51,86,96,27,14,75,113,4,20,103,31,21,70,69,73,91,24,78,3,106,102,17,44,26,84,7,30,71,28,81,34,67,66,95,9,25,33,99,82,60,48,13,47,90,29,94,74,98,97,5,65,15,55,72,110,54,83,16,2,12,32,58,111,87,50,63,79,101,92,57,77,62,85,114,6,112,40,37,36,56,68,61,89,10,43,49,18,41,22,107,64,35,59,46,8,76,42,88,108,109,100,11,23,93,45,19,0,39,53,104,80,52,38,105}, // permutation 5
{34,43,70,15,102,51,56,12,81,100,101,77,62,10,80,84,47,106,112,33,72,109,76,89,26,36,52,46,39,27,108,107,104,30,54,114,59,29,16,9,53,86,85,91,73,50,65,0,78,14,103,19,45,97,8,87,32,75,37,60,28,92,83,105,44,58,3,31,63,74,48,57,88,42,71,49,2,38,1,95,13,17,20,93,35,67,98,18,113,61,11,4,21,82,111,40,99,23,5,96,6,110,64,66,25,22,94,90,69,79,55,24,41,68,7}, // permutation 6
{112,28,32,79,66,91,50,108,43,61,36,51,12,6,35,57,94,40,73,78,93,72,87,55,80,65,62,42,95,70,45,38,101,109,4,9,19,14,69,82,33,18,21,83,41,107,20,68,39,30,8,25,100,59,60,47,98,63,103,106,52,29,26,1,74,97,86,15,2,89,34,71,22,58,54,104,110,114,16,13,37,31,113,96,76,17,64,48,88,23,92,27,75,99,81,105,53,44,85,7,24,77,0,67,46,5,3,11,111,10,102,56,49,90,84}, // permutation 7
{16,70,32,79,50,74,75,111,106,26,72,2,81,14,35,52,46,89,24,39,63,1,85,67,105,11,47,84,108,110,49,100,8,65,92,30,103,69,3,102,73,95,20,61,38,107,48,45,80,68,19,77,7,15,21,23,51,83,0,90,112,109,42,113,99,17,62,37,104,56,57,54,22,76,43,94,27,44,78,71,97,10,114,88,5,40,41,25,101,31,87,33,34,86,12,59,58,36,66,96,4,9,53,98,55,82,60,29,28,13,64,6,91,93,18}, // permutation 8
{89,114,28,1,39,62,6,25,10,9,19,94,8,50,56,96,46,78,69,104,54,108,58,92,12,84,23,74,32,82,55,112,97,68,20,93,65,51,63,88,71,111,30,87,72,14,42,17,77,98,2,35,64,70,31,61,44,75,40,4,57,49,105,81,91,47,34,102,11,21,37,18,83,0,103,52,101,113,22,86,41,33,26,3,85,80,5,27,106,109,48,59,13,15,90,67,43,45,76,100,36,107,7,66,53,60,110,79,29,24,73,16,38,99,95} // permutation 9
};

// Seed: 1500458804

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int8_t * f1;
   uint32_t  f2;
   int32_t  f3;
   int8_t * f4;
};

struct S1 {
    int32_t g_4;
    uint32_t g_11;
    volatile VECTOR(uint8_t, 2) g_21;
    int8_t g_25;
    int8_t g_37;
    union U0 g_58;
    uint32_t g_109;
    VECTOR(int64_t, 4) g_199;
    uint8_t g_212;
    int16_t g_219;
    int16_t g_234;
    int32_t g_241;
    int16_t g_250;
    VECTOR(int64_t, 2) g_263;
    int32_t *g_273[6];
    VECTOR(uint8_t, 16) g_301;
    VECTOR(uint64_t, 4) g_302;
    VECTOR(uint64_t, 4) g_303;
    VECTOR(uint64_t, 4) g_312;
    union U0 g_322[3][7][1];
    VECTOR(uint8_t, 2) g_331;
    VECTOR(uint8_t, 16) g_332;
    VECTOR(uint64_t, 8) g_340;
    uint16_t g_346;
    int8_t g_348;
    VECTOR(int32_t, 16) g_442;
    volatile int8_t g_462;
    volatile int8_t *g_461;
    volatile int8_t * volatile *g_460;
    VECTOR(uint8_t, 16) g_476;
    VECTOR(int8_t, 2) g_492;
    VECTOR(uint32_t, 8) g_500;
    VECTOR(int16_t, 8) g_514;
    int8_t g_562[3];
    int8_t *g_561;
    volatile VECTOR(int32_t, 4) g_569;
    VECTOR(uint16_t, 16) g_576;
    uint8_t * volatile g_583;
    uint8_t * volatile *g_582;
    int32_t ** volatile g_658;
    int32_t ** volatile g_659;
    int32_t ** volatile g_660;
    int32_t * volatile g_667[2];
    volatile VECTOR(uint32_t, 8) g_681;
    int16_t *g_735[5];
    int16_t * volatile * volatile g_734;
    volatile VECTOR(int32_t, 8) g_743;
    int32_t ** volatile g_744;
    VECTOR(int64_t, 16) g_760;
    VECTOR(uint64_t, 16) g_790;
    uint64_t *g_824[10];
    uint64_t **g_823;
    volatile VECTOR(int32_t, 2) g_849;
    int16_t g_864;
    volatile VECTOR(int16_t, 4) g_932;
    VECTOR(uint64_t, 8) g_937;
    volatile VECTOR(int8_t, 8) g_938;
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
int32_t  func_1(struct S1 * p_939);
int32_t  func_14(int64_t  p_15, struct S1 * p_939);
int64_t  func_16(int64_t  p_17, int32_t * p_18, int64_t  p_19, int32_t * p_20, struct S1 * p_939);
int8_t  func_26(int8_t * p_27, int64_t  p_28, int8_t * p_29, int32_t * p_30, struct S1 * p_939);
int8_t * func_31(int32_t * p_32, int8_t * p_33, uint64_t  p_34, int32_t * p_35, struct S1 * p_939);
uint16_t  func_38(int64_t  p_39, int8_t * p_40, struct S1 * p_939);
uint32_t  func_44(union U0  p_45, uint16_t  p_46, int32_t * p_47, uint32_t  p_48, struct S1 * p_939);
union U0  func_49(int32_t * p_50, int32_t * p_51, uint16_t  p_52, struct S1 * p_939);
uint8_t  func_75(int8_t  p_76, union U0  p_77, uint32_t  p_78, int16_t  p_79, struct S1 * p_939);
int64_t  func_84(uint32_t  p_85, int16_t  p_86, int64_t  p_87, int8_t  p_88, struct S1 * p_939);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_939->g_4 p_939->l_comm_values p_939->g_11 p_939->g_21 p_939->g_25 p_939->g_37 p_939->g_comm_values p_939->g_58 p_939->g_109 p_939->g_241 p_939->g_199 p_939->g_234 p_939->g_263 p_939->g_303 p_939->g_322 p_939->g_302 p_939->g_301 p_939->g_322.f0 p_939->g_340 p_939->g_460 p_939->g_476 p_939->g_331 p_939->g_514 p_939->g_332 p_939->g_250 p_939->g_348 p_939->g_492 p_939->g_561 p_939->g_569 p_939->g_219 p_939->g_576 p_939->g_461 p_939->g_462 p_939->g_582 p_939->g_562 p_939->g_500 p_939->g_659 p_939->g_681 p_939->g_744 p_939->g_312 p_939->g_442 p_939->g_760 p_939->g_734 p_939->g_735 p_939->g_790 p_939->g_346 p_939->g_743 p_939->g_864 p_939->g_932 p_939->g_937 p_939->g_938
 * writes: p_939->g_4 p_939->g_11 p_939->g_25 p_939->g_37 p_939->g_109 p_939->g_241 p_939->g_250 p_939->g_212 p_939->g_58.f2 p_939->g_346 p_939->g_273 p_939->g_219 p_939->g_340 p_939->g_500 p_939->g_348 p_939->g_492 p_939->g_234 p_939->g_322.f2 p_939->g_442 p_939->g_562 p_939->g_823 p_939->g_864 p_939->g_263 p_939->g_332
 */
int32_t  func_1(struct S1 * p_939)
{ /* block id: 4 */
    uint8_t l_2 = 1UL;
    int32_t *l_3 = &p_939->g_4;
    VECTOR(int32_t, 2) l_7 = (VECTOR(int32_t, 2))((-2L), 0x754320E3L);
    VECTOR(int32_t, 16) l_13 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
    int8_t *l_36 = &p_939->g_37;
    int8_t l_888 = 1L;
    uint32_t l_919 = 0xB590495FL;
    int32_t *l_920 = &p_939->g_4;
    int32_t *l_921 = (void*)0;
    int32_t *l_922[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_923 = 0xD593DF3CL;
    uint8_t *l_930 = (void*)0;
    uint8_t *l_931[2][7][5] = {{{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0},{(void*)0,(void*)0,(void*)0,&p_939->g_212,(void*)0}}};
    int i, j, k;
    (*l_3) = l_2;
    for (p_939->g_4 = 21; (p_939->g_4 >= (-30)); --p_939->g_4)
    { /* block id: 8 */
        int32_t *l_8 = (void*)0;
        int32_t *l_9 = (void*)0;
        int32_t *l_10[5];
        int32_t l_12 = 0x0A9BCA7BL;
        int8_t *l_24 = &p_939->g_25;
        int16_t *l_863 = &p_939->g_864;
        int32_t l_865 = 8L;
        int64_t *l_866 = (void*)0;
        int64_t *l_867 = (void*)0;
        int64_t *l_868 = (void*)0;
        int64_t *l_869 = (void*)0;
        int64_t *l_870[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint32_t, 16) l_896 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint32_t, 2))(8UL, 0UL), (VECTOR(uint32_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL);
        int64_t l_917[3];
        int i;
        for (i = 0; i < 5; i++)
            l_10[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_917[i] = 1L;
        l_888 = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_7.xxyx)), (int32_t)((p_939->g_11 |= p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))]) <= (l_12 , (0x2717F4039EE491BAL > 0x2BE197E7C14AB653L)))))).lo)).yyxyyyyy))).s2440210466712055, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_13.s66193fe6)).even, ((VECTOR(int32_t, 8))(0x3B0639E6L, func_14(func_16(p_939->g_11, &p_939->g_4, (~(p_939->g_263.x = ((*l_3) , (((VECTOR(uint8_t, 2))(p_939->g_21.xy)).hi , (((!(safe_sub_func_int16_t_s_s(((*l_863) &= (((((*l_24) ^= (*l_3)) > func_26(func_31(l_3, l_36, (*l_3), l_3, p_939), p_939->g_332.s2, &p_939->g_562[1], l_3, p_939)) , l_36) == p_939->g_561)), (*l_3)))) > l_865) | 0x3B1B7D483662B88CL))))), l_3, p_939), p_939), ((VECTOR(int32_t, 4))((-1L))), 0x724D1D61L, 1L)).lo))).yzwwywxwxyzxywww))).s6;
        for (p_939->g_37 = (-14); (p_939->g_37 == 2); p_939->g_37 = safe_add_func_uint64_t_u_u(p_939->g_37, 2))
        { /* block id: 372 */
            uint32_t l_893 = 0xC2C492DEL;
            int32_t l_899 = 0x252C0927L;
            uint8_t *l_910 = (void*)0;
            uint32_t *l_913 = &p_939->g_58.f2;
            VECTOR(uint32_t, 8) l_914 = (VECTOR(uint32_t, 8))(0xBBD698BBL, (VECTOR(uint32_t, 4))(0xBBD698BBL, (VECTOR(uint32_t, 2))(0xBBD698BBL, 0xB87CA216L), 0xB87CA216L), 0xB87CA216L, 0xBBD698BBL, 0xB87CA216L);
            int32_t l_918 = 0x5CEB4058L;
            int i;
            l_899 = ((!(safe_add_func_int8_t_s_s((*p_939->g_461), (l_893--)))) <= (((&p_939->g_824[1] == (void*)0) , (((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 2))(0xDA36AE3FL, 0x7AF54D9AL)).yyxyyyyyxyyxyyxy, ((VECTOR(uint32_t, 4))(l_896.se99d)).ywxyywwyxxyzxxyy))).s03, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))((safe_rshift_func_uint8_t_u_s(l_899, 0)), 1UL, 0UL, 1UL)).wwwwxyww, (uint32_t)(GROUP_DIVERGE(0, 1) ^ ((safe_mul_func_uint8_t_u_u(((*l_3) & ((p_939->g_263.y = ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((p_939->g_790.s9 && ((((((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(((*l_913) = (safe_lshift_func_int16_t_s_u((*l_3), (safe_lshift_func_uint8_t_u_u((p_939->g_332.sa--), p_939->g_562[2]))))), 0x7723DCBAL, 0x9F80CCC7L, 0xC446DC08L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_914.s35)), (safe_lshift_func_int8_t_s_u(2L, GROUP_DIVERGE(2, 1))), 4294967290UL, ((VECTOR(uint32_t, 4))(4294967289UL)))).lo))).even, ((VECTOR(uint32_t, 2))(4294967286UL))))).yyxx, (uint32_t)0xB282E12CL))).z && (*l_3)) && l_917[0]) == (*p_939->g_561)) != 0x56B8L)), l_918)), l_919)) & 0xB89B28B0L)) != (-1L))), (*l_3))) , 1L))))).s31, ((VECTOR(uint32_t, 2))(0xCFDFD106L))))).odd | (*l_3))) < (*l_3)));
        }
        return p_939->g_760.s0;
    }
    l_923--;
    (*l_920) = ((*l_3) < ((((~(safe_mul_func_int16_t_s_s((*l_3), (safe_lshift_func_int16_t_s_s((p_939->g_301.s9 & ((*l_920) == (p_939->g_332.sa = (6L >= (*l_920))))), (p_939->g_301.s0 != (*l_3))))))) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(p_939->g_932.xwxx)).odd, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(0x0CC5L, (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_939->g_937.s2056031430331054)).s5, ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_939->g_938.s75)).yyyyyxyy)).s7 <= 1L) ^ 8L))), 6L)), 65526UL, 65535UL, ((VECTOR(uint16_t, 8))(65535UL)), 4UL, ((VECTOR(uint16_t, 2))(0x3E2DL)), 0x4275L)).sb8, ((VECTOR(uint16_t, 2))(3UL)))))))).xyyy)).zyxwzzxxyzxxxzxz)).s3) <= 0x2977F81AL) , p_939->g_743.s1));
    return p_939->g_500.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_234
 * writes: p_939->g_234
 */
int32_t  func_14(int64_t  p_15, struct S1 * p_939)
{ /* block id: 360 */
    uint64_t l_878 = 0x2CCC407FC97405A6L;
    int32_t *l_882[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_883 = (-10L);
    int64_t l_884 = 0x6110A4BEF01C08F9L;
    uint16_t l_885 = 0x06E8L;
    int i;
    for (p_939->g_234 = 0; (p_939->g_234 == 13); ++p_939->g_234)
    { /* block id: 363 */
        uint64_t l_881 = 18446744073709551606UL;
        l_878++;
        return l_881;
    }
    l_885++;
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_16(int64_t  p_17, int32_t * p_18, int64_t  p_19, int32_t * p_20, struct S1 * p_939)
{ /* block id: 357 */
    int16_t l_871 = 1L;
    int32_t *l_872 = (void*)0;
    uint16_t l_873 = 65534UL;
    ++l_873;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_250 p_939->g_760 p_939->g_4 p_939->g_681 p_939->g_561 p_939->g_562 p_939->g_734 p_939->g_735 p_939->g_790 p_939->g_346 p_939->g_11 p_939->g_659 p_939->g_743 p_939->g_460 p_939->g_461 p_939->g_462
 * writes: p_939->g_250 p_939->g_37 p_939->g_562 p_939->g_109 p_939->g_346 p_939->g_273 p_939->g_234 p_939->g_219 p_939->g_823
 */
int8_t  func_26(int8_t * p_27, int64_t  p_28, int8_t * p_29, int32_t * p_30, struct S1 * p_939)
{ /* block id: 303 */
    int32_t **l_756 = &p_939->g_273[4];
    int32_t ***l_755 = &l_756;
    VECTOR(int64_t, 4) l_758 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x79FBBDD78444D45DL), 0x79FBBDD78444D45DL);
    VECTOR(int64_t, 8) l_759 = (VECTOR(int64_t, 8))(0x6937CE0C123D2002L, (VECTOR(int64_t, 4))(0x6937CE0C123D2002L, (VECTOR(int64_t, 2))(0x6937CE0C123D2002L, 0x63D5C647D386C450L), 0x63D5C647D386C450L), 0x63D5C647D386C450L, 0x6937CE0C123D2002L, 0x63D5C647D386C450L);
    int32_t l_774 = 0x03E92C2EL;
    int64_t l_799 = (-10L);
    uint32_t l_800[10][7];
    VECTOR(int32_t, 8) l_809 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7866D40EL), 0x7866D40EL), 0x7866D40EL, 4L, 0x7866D40EL);
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
            l_800[i][j] = 1UL;
    }
    for (p_939->g_250 = 0; (p_939->g_250 <= 16); p_939->g_250 = safe_add_func_int8_t_s_s(p_939->g_250, 6))
    { /* block id: 306 */
        uint8_t l_757 = 0UL;
        int64_t *l_771 = (void*)0;
        int32_t l_772 = 0x44051FE5L;
        int32_t *l_773[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int8_t, 16) l_781 = (VECTOR(int8_t, 16))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x7AL), 0x7AL), 0x7AL, 0x70L, 0x7AL, (VECTOR(int8_t, 2))(0x70L, 0x7AL), (VECTOR(int8_t, 2))(0x70L, 0x7AL), 0x70L, 0x7AL, 0x70L, 0x7AL);
        int32_t l_797 = 0x4C6C9E1FL;
        uint32_t *l_798 = &p_939->g_109;
        uint16_t *l_801 = &p_939->g_346;
        int i;
        for (p_28 = 19; (p_28 == 4); p_28 = safe_sub_func_int16_t_s_s(p_28, 4))
        { /* block id: 309 */
            uint64_t l_750 = 18446744073709551611UL;
            return l_750;
        }
        l_774 |= (+(((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(0x6E26L, 0UL)).even, 11)) == (l_772 = (((*p_29) = (safe_div_func_int16_t_s_s(((((&p_939->g_658 == ((18446744073709551615UL | 4UL) , l_755)) & l_757) , (~((VECTOR(int64_t, 8))(7L, ((VECTOR(int64_t, 2))(0x5917BAC47478B0FEL, (-5L))), ((VECTOR(int64_t, 4))((-9L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x17A5E979727A0662L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 4))(l_758.zxzy)), ((VECTOR(int64_t, 2))(0x028FBA33A65E01F3L, 0x4D7CC71AF85CFD31L)), 1L)).s33, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_759.s6014371407025407)).odd)), l_757, 0x1008C4769FC9DB3DL, ((VECTOR(int64_t, 2))(p_939->g_760.sa1)), 0x25C84D70989E0DC7L, 7L, 0L, 0L)).s13))), (-9L), 0x28FF92041ECE4ADAL, (safe_mul_func_int8_t_s_s(l_757, ((safe_add_func_uint32_t_u_u(l_757, ((safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((((*p_27) = (safe_sub_func_uint16_t_u_u(((void*)0 != p_30), 65535UL))) < 255UL), 0x155C792FL)), (*p_30))) , 0x4DC96E71L))) == (*p_30)))), 0x0311247259436FB6L, 0L, 0x5C300162E172A877L)), ((VECTOR(int64_t, 2))(0x3B6557EB30224A2CL)), l_757, p_28, ((VECTOR(int64_t, 2))(0x3C7F92E46CB4B43DL)), 9L)).s69ef)).wzzwwxxyxwyxzwwz)).hi, ((VECTOR(int64_t, 8))((-1L)))))).s76)), 1L)), 0L)).s2)) || p_939->g_681.s0), p_28))) & 0x4BL))) , (*p_30)));
        l_774 &= ((0x7AL > (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((*l_801) = (safe_lshift_func_uint8_t_u_u((((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(l_781.sa342)).wxxwxxwwzyzzzwxx, (int8_t)(((((*p_939->g_561) > (safe_div_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(p_28, (!((**p_939->g_734) | ((VECTOR(int16_t, 16))(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_939->g_790.s9558ac5c9bed9139)).sa, (&p_939->g_241 == (void*)0))) >= ((*p_939->g_561) >= (0x6433L & (safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((((((*l_798) = (safe_lshift_func_int8_t_s_s((*p_29), l_797))) , p_28) >= p_28) == p_939->g_346), 0L)), p_28))))), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(1L)), 0x7107L, l_799, ((VECTOR(int16_t, 4))(1L)), (-2L), ((VECTOR(int16_t, 4))(0x509BL)))).s5)))) | 0x58L) , 18446744073709551615UL), p_28))) & l_800[1][3]) > 0L) , 0x09L)))).s9 | 9UL), 0))), FAKE_DIVERGE(p_939->global_1_offset, get_global_id(1), 10))), 6))) < p_939->g_11);
    }
    for (l_774 = 1; (l_774 == 10); ++l_774)
    { /* block id: 322 */
        int32_t *l_804[7][5] = {{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4},{&p_939->g_241,(void*)0,&p_939->g_4,&p_939->g_241,&p_939->g_4}};
        uint64_t l_841[1][9][3] = {{{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L},{0x732F7A9F63F71CC0L,0x732F7A9F63F71CC0L,0xA229F96BFD943087L}}};
        uint32_t l_860 = 4294967289UL;
        int i, j, k;
        (*p_939->g_659) = l_804[2][4];
        for (p_939->g_234 = 12; (p_939->g_234 != (-4)); p_939->g_234 = safe_sub_func_int32_t_s_s(p_939->g_234, 3))
        { /* block id: 326 */
            int32_t l_817 = 0x4820B94DL;
            uint64_t *l_821 = (void*)0;
            uint64_t **l_820 = &l_821;
            int32_t l_832 = 0x1AB366F4L;
            int32_t l_833 = 0x05778A07L;
            int32_t l_834 = (-5L);
            int32_t l_836 = (-1L);
            int32_t l_837 = 0x3FF8DF9FL;
            for (l_799 = 0; (l_799 == (-17)); --l_799)
            { /* block id: 329 */
                int16_t l_812 = 0x28F2L;
                uint64_t **l_822 = &l_821;
                int32_t l_831[10] = {0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L,0x00472F78L};
                int i;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_809.s64)).yyxyyyxxxyyyyyyy)).s7)
                { /* block id: 330 */
                    uint16_t *l_813 = (void*)0;
                    uint16_t *l_814 = (void*)0;
                    uint16_t *l_815 = &p_939->g_346;
                    int16_t *l_816 = &p_939->g_219;
                    uint64_t ***l_825[8];
                    int32_t l_826 = (-1L);
                    uint8_t l_827[2][10] = {{255UL,0x9CL,0x9CL,255UL,255UL,0x9CL,0x9CL,255UL,255UL,0x9CL},{255UL,0x9CL,0x9CL,255UL,255UL,0x9CL,0x9CL,255UL,255UL,0x9CL}};
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_825[i] = &l_822;
                    l_817 &= (safe_sub_func_uint16_t_u_u(((*l_815) ^= l_812), ((*l_816) = (**p_939->g_734))));
                    l_826 = (safe_mul_func_uint16_t_u_u((((*p_30) , (l_820 == (l_822 = (p_939->g_823 = l_822)))) , ((p_28 , 0xA9L) , p_939->g_743.s2)), (p_28 == 0xAB95ACFEF4F98455L)));
                    l_826 = (l_827[1][6] != 0x75L);
                }
                else
                { /* block id: 338 */
                    int8_t l_835 = 1L;
                    int32_t l_838[8][10][3] = {{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}},{{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L},{0x6C6AFF32L,0x6C6AFF32L,2L}}};
                    int64_t l_839 = 0x1BDD6B2141F91D5BL;
                    uint16_t *l_847[8][10][3] = {{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}},{{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0},{&p_939->g_346,(void*)0,(void*)0}}};
                    uint16_t **l_846 = &l_847[0][3][1];
                    uint16_t ***l_845[2];
                    uint16_t ****l_844[9] = {&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1]};
                    VECTOR(int32_t, 16) l_848 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x37D6F9EAL), 0x37D6F9EAL), 0x37D6F9EAL, 0L, 0x37D6F9EAL, (VECTOR(int32_t, 2))(0L, 0x37D6F9EAL), (VECTOR(int32_t, 2))(0L, 0x37D6F9EAL), 0L, 0x37D6F9EAL, 0L, 0x37D6F9EAL);
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_845[i] = &l_846;
                    for (p_939->g_37 = 0; (p_939->g_37 == (-8)); --p_939->g_37)
                    { /* block id: 341 */
                        int32_t l_830[10];
                        int32_t l_840 = 5L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_830[i] = 7L;
                        l_841[0][1][0]++;
                        atomic_sub(&p_939->l_atomic_reduction[0], ((void*)0 != l_844[0]) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_939->v_collective += p_939->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        l_833 &= ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_848.sedbc6da4adb8d48f)).se8, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_939->g_849.yxxxxxxy)).s57)), ((safe_div_func_int32_t_s_s((p_939->g_500.s4 , (*p_30)), (l_832 || (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))((safe_mul_func_int8_t_s_s(l_817, (((0x4E32L != p_28) != ((p_939->g_312.x && (safe_sub_func_uint16_t_u_u(0xDBD9L, ((safe_add_func_uint16_t_u_u(((p_939->g_760.s2 < p_28) || (**p_939->g_734)), l_860)) >= 0xD537EBFFL)))) == p_939->g_576.s1)) > l_840))), 1UL, 6UL, ((VECTOR(uint8_t, 4))(0x59L)), 1UL)).s1, 6))))) , (*p_30)), ((VECTOR(int32_t, 4))(3L)), 0x332FF4D9L)).s2304100465151650)).s4a, ((VECTOR(int32_t, 2))((-1L)))))).xxyyxyxx)))).s0753774026630643)).sb3))).odd;
                    }
                }
                l_831[2] = l_836;
            }
        }
        l_809.s3 ^= (*p_30);
        l_809.s2 |= (safe_mul_func_int8_t_s_s((**p_939->g_460), 9UL));
    }
    p_30 = p_30;
    return (**p_939->g_460);
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_37 p_939->g_comm_values p_939->g_21 p_939->g_4 p_939->g_58 p_939->g_11 p_939->g_109 p_939->l_comm_values p_939->g_241 p_939->g_199 p_939->g_234 p_939->g_263 p_939->g_303 p_939->g_322 p_939->g_302 p_939->g_301 p_939->g_322.f0 p_939->g_340 p_939->g_460 p_939->g_476 p_939->g_331 p_939->g_514 p_939->g_332 p_939->g_250 p_939->g_348 p_939->g_492 p_939->g_561 p_939->g_569 p_939->g_219 p_939->g_576 p_939->g_461 p_939->g_462 p_939->g_582 p_939->g_562 p_939->g_500 p_939->g_659 p_939->g_681 p_939->g_744 p_939->g_312 p_939->g_442
 * writes: p_939->g_37 p_939->g_109 p_939->g_241 p_939->g_250 p_939->g_212 p_939->g_58.f2 p_939->g_346 p_939->g_273 p_939->g_219 p_939->g_340 p_939->g_500 p_939->g_348 p_939->g_492 p_939->g_234 p_939->g_322.f2 p_939->g_442
 */
int8_t * func_31(int32_t * p_32, int8_t * p_33, uint64_t  p_34, int32_t * p_35, struct S1 * p_939)
{ /* block id: 11 */
    int32_t l_41 = 2L;
    int32_t l_42 = 0L;
    VECTOR(int32_t, 16) l_43 = (VECTOR(int32_t, 16))(0x0546153BL, (VECTOR(int32_t, 4))(0x0546153BL, (VECTOR(int32_t, 2))(0x0546153BL, 0x346FAC5AL), 0x346FAC5AL), 0x346FAC5AL, 0x0546153BL, 0x346FAC5AL, (VECTOR(int32_t, 2))(0x0546153BL, 0x346FAC5AL), (VECTOR(int32_t, 2))(0x0546153BL, 0x346FAC5AL), 0x0546153BL, 0x346FAC5AL, 0x0546153BL, 0x346FAC5AL);
    int32_t *l_53 = &p_939->g_4;
    uint32_t *l_558[3][8][9] = {{{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11}},{{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11}},{{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11},{&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,&p_939->g_11,(void*)0,&p_939->g_11}}};
    int8_t *l_559 = (void*)0;
    int8_t *l_560[4];
    int32_t *l_745[5][10] = {{&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4,&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4},{&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4,&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4},{&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4,&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4},{&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4,&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4},{&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4,&p_939->g_4,&p_939->g_4,(void*)0,&p_939->g_4,&p_939->g_4}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_560[i] = (void*)0;
    p_939->g_442.s1 |= ((p_939->g_37 , func_38(((((l_42 = (p_939->g_comm_values[p_939->tid] != l_41)) < (((VECTOR(int32_t, 8))(l_43.sdf6f6d77)).s1 , ((p_939->g_492.x ^= (p_939->g_348 &= (((p_939->g_21.x > l_43.s6) & ((p_939->g_500.s3 = ((func_44(func_49(p_35, ((((((((void*)0 != l_53) == (*l_53)) >= 0UL) > (*l_53)) , &p_939->g_4) != l_53) , (void*)0), p_34, p_939), (*l_53), p_35, p_939->g_263.y, p_939) >= GROUP_DIVERGE(2, 1)) ^ p_34)) <= (*p_32))) <= p_34))) | p_34))) >= 6L) , p_34), p_939->g_561, p_939)) , (*l_53));
    return &p_939->g_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_569 p_939->g_219 p_939->g_576 p_939->g_461 p_939->g_462 p_939->g_582 p_939->g_4 p_939->g_234 p_939->g_250 p_939->g_561 p_939->g_562 p_939->g_500 p_939->g_659 p_939->g_681 p_939->g_460 p_939->g_744 p_939->g_312
 * writes: p_939->g_219 p_939->g_234 p_939->g_250 p_939->g_273 p_939->g_322.f2
 */
uint16_t  func_38(int64_t  p_39, int8_t * p_40, struct S1 * p_939)
{ /* block id: 232 */
    uint8_t l_563[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int32_t *l_573 = &p_939->g_4;
    int32_t l_614 = 0x69B3AA76L;
    int32_t l_616 = (-10L);
    int32_t l_621 = 1L;
    int16_t l_624 = 0x0E73L;
    int32_t l_625 = 0x4A022092L;
    int32_t l_627 = 0x50C1107FL;
    int32_t l_628 = (-1L);
    int32_t l_629 = 0x1057BAB5L;
    int32_t l_631 = 0x3749E470L;
    int32_t l_632 = 0x0FDEC7E5L;
    int32_t l_633 = 1L;
    int32_t l_634 = (-7L);
    int32_t l_635 = 0x42CC7179L;
    int32_t l_636 = (-1L);
    int32_t l_637 = 0x1D4479DBL;
    int32_t l_639 = 0x535F13D9L;
    int32_t l_640 = 0x01FA2C21L;
    int32_t l_641 = 0L;
    int32_t l_642 = 7L;
    VECTOR(int32_t, 2) l_643 = (VECTOR(int32_t, 2))(0L, 0x28BC0AFBL);
    int32_t l_644 = 0x49FCA871L;
    VECTOR(int16_t, 2) l_675 = (VECTOR(int16_t, 2))(0x6E70L, 0L);
    VECTOR(int32_t, 8) l_706 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
    uint16_t **l_719 = (void*)0;
    uint16_t ***l_718[1];
    uint16_t ***l_722 = (void*)0;
    VECTOR(uint8_t, 16) l_726 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    VECTOR(uint8_t, 16) l_728 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x8DL), 0x8DL), 0x8DL, 9UL, 0x8DL, (VECTOR(uint8_t, 2))(9UL, 0x8DL), (VECTOR(uint8_t, 2))(9UL, 0x8DL), 9UL, 0x8DL, 9UL, 0x8DL);
    union U0 l_729 = {0L};
    uint64_t l_738 = 1UL;
    int i;
    for (i = 0; i < 1; i++)
        l_718[i] = &l_719;
    if (((l_563[7] = 4294967292UL) , p_39))
    { /* block id: 234 */
        uint16_t *l_565 = &p_939->g_346;
        uint16_t **l_564[4] = {&l_565,&l_565,&l_565,&l_565};
        uint16_t ***l_566 = &l_564[3];
        VECTOR(int16_t, 16) l_575 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x72FEL), 0x72FEL), 0x72FEL, (-1L), 0x72FEL, (VECTOR(int16_t, 2))((-1L), 0x72FEL), (VECTOR(int16_t, 2))((-1L), 0x72FEL), (-1L), 0x72FEL, (-1L), 0x72FEL);
        int16_t l_604 = (-1L);
        int32_t l_615 = 0L;
        int32_t l_617[8];
        int32_t l_646 = 0x3C5E89CEL;
        int32_t **l_661 = (void*)0;
        int32_t *l_662 = (void*)0;
        int i;
        for (i = 0; i < 8; i++)
            l_617[i] = 2L;
        (*l_566) = l_564[3];
        for (p_39 = 0; (p_39 < 9); ++p_39)
        { /* block id: 238 */
            uint8_t *l_580 = (void*)0;
            uint8_t **l_579[8];
            int32_t l_603 = 1L;
            int32_t l_618 = 0x1DF71383L;
            int32_t l_619 = 9L;
            int32_t l_620 = 7L;
            int32_t l_622 = 0L;
            int32_t l_623 = (-4L);
            int32_t l_626[8];
            uint8_t l_647 = 1UL;
            int i;
            for (i = 0; i < 8; i++)
                l_579[i] = &l_580;
            for (i = 0; i < 8; i++)
                l_626[i] = 0x340C3DA0L;
            if (((VECTOR(int32_t, 16))(p_939->g_569.yzyyxxwxwwywyzxw)).s3)
            { /* block id: 239 */
                int32_t l_570 = 0x47801C5BL;
                int32_t **l_599 = (void*)0;
                int32_t *l_606 = (void*)0;
                int32_t *l_607 = (void*)0;
                int32_t *l_608 = (void*)0;
                int32_t *l_609 = (void*)0;
                int32_t *l_610 = &l_603;
                int32_t *l_611 = &l_603;
                int32_t *l_612 = &l_603;
                int32_t *l_613[7];
                int8_t l_630 = 0x50L;
                int8_t l_638 = 0x45L;
                int32_t l_645 = 1L;
                int i;
                for (i = 0; i < 7; i++)
                    l_613[i] = &p_939->g_241;
                if (l_570)
                    break;
                for (p_939->g_219 = (-6); (p_939->g_219 == 27); ++p_939->g_219)
                { /* block id: 243 */
                    int32_t **l_574 = &l_573;
                    uint8_t ***l_581 = &l_579[4];
                    union U0 *l_605 = &p_939->g_322[2][5][0];
                    int i, j;
                    (*l_574) = l_573;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_939->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 115)), permutations[(safe_mod_func_uint32_t_u_u((0x7C82EFF14E05884BL | (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(l_575.s4e)).yxxxxyxyxyxyyyyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_939->g_576.s67afd33e)))))).s7240520614630761))).se | ((((*p_939->g_461) <= (safe_lshift_func_uint16_t_u_u(0x35EFL, 4))) != (((*l_581) = l_579[4]) != p_939->g_582)) , (*l_573)))), 10))][(safe_mod_func_uint32_t_u_u(p_939->tid, 115))]));
                    for (p_939->g_234 = (-19); (p_939->g_234 >= 19); p_939->g_234++)
                    { /* block id: 251 */
                        int8_t **l_588[10];
                        int16_t *l_589 = (void*)0;
                        int16_t *l_590 = &p_939->g_250;
                        int32_t **l_597 = (void*)0;
                        int32_t ***l_598[8] = {&l_574,&l_574,&l_574,&l_574,&l_574,&l_574,&l_574,&l_574};
                        uint32_t l_602 = 0UL;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_588[i] = (void*)0;
                        l_604 &= (((((safe_mul_func_int16_t_s_s((&p_939->g_561 != l_588[6]), ((*l_590) &= p_39))) > (((((safe_div_func_int32_t_s_s(((((*p_939->g_561) & (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_39, ((l_599 = (l_575.s8 , l_597)) == (void*)0))), (safe_div_func_int64_t_s_s(l_602, l_603))))) , (void*)0) != (void*)0), p_939->g_500.s6)) || (-4L)) > (*p_40)) > 0x7772CF8AL) , 0x38365339L)) != p_39) & (-4L)) | 0x0D77L);
                        l_605 = (void*)0;
                    }
                }
                l_647++;
                l_613[3] = &p_939->g_241;
            }
            else
            { /* block id: 260 */
                int32_t *l_650 = &l_626[7];
                int32_t *l_651 = &l_625;
                int32_t *l_652[2][6][6] = {{{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_622,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint8_t l_653 = 0xD5L;
                int i, j, k;
                l_653++;
            }
            for (l_646 = 0; (l_646 >= 13); l_646 = safe_add_func_uint64_t_u_u(l_646, 5))
            { /* block id: 265 */
                l_623 = p_39;
                atomic_min(&p_939->l_atomic_reduction[0], p_39 + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_939->v_collective += p_939->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            (*p_939->g_659) = &p_939->g_241;
        }
        l_662 = &l_615;
    }
    else
    { /* block id: 272 */
        uint32_t *l_680 = &p_939->g_322[2][5][0].f2;
        VECTOR(uint32_t, 4) l_682 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x65DF9B03L), 0x65DF9B03L);
        int32_t *l_687 = (void*)0;
        int32_t *l_688 = &l_635;
        uint16_t ***l_721 = &l_719;
        VECTOR(uint8_t, 2) l_727 = (VECTOR(uint8_t, 2))(0x3CL, 6UL);
        int i;
        for (l_635 = (-27); (l_635 <= (-20)); ++l_635)
        { /* block id: 275 */
            uint32_t l_665 = 0xDE60A14FL;
            int32_t *l_666 = (void*)0;
            int32_t *l_668[2];
            int i;
            for (i = 0; i < 2; i++)
                l_668[i] = &l_644;
            l_636 = l_665;
            return (*l_573);
        }
        (*l_688) &= ((safe_add_func_int16_t_s_s((*l_573), (!(safe_add_func_int8_t_s_s((*l_573), ((safe_sub_func_int16_t_s_s((*l_573), (((VECTOR(int16_t, 8))(l_675.yyyyyyyx)).s1 == (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))((((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(((*l_680) = (safe_rshift_func_uint16_t_u_u(((*l_573) | 65535UL), 7))), 0xE1E48468L, 4294967290UL, 0xC7586906L)).wyyxwzyzyzywwzyx, ((VECTOR(uint32_t, 2))(p_939->g_681.s63)).yxyxxxxxxxyyxyyx, ((VECTOR(uint32_t, 4))(l_682.yzyy)).xzzzywywxywwyzyx))).sf >= ((l_682.x <= ((VECTOR(int32_t, 16))((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x63L, 0x42L)).odd, (*p_939->g_561))) , l_682.z) , (((safe_rshift_func_uint8_t_u_s(((((((*p_939->g_561) < 6UL) | 0x0DL) | 3UL) , 0L) <= GROUP_DIVERGE(0, 1)), 5)) & FAKE_DIVERGE(p_939->local_2_offset, get_local_id(2), 10)) | 0x38FEL)), 2L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x79691376L)), 0L, ((VECTOR(int32_t, 2))(0x13373D2CL)), 0x4FE1A778L, 0x13DC90CBL, ((VECTOR(int32_t, 2))(0x53174EE8L)), 0x381C649FL)).sf) | (*l_573))), ((VECTOR(int8_t, 4))((-1L))), (*p_939->g_561), l_682.w, ((VECTOR(int8_t, 4))(6L)), 0x34L, (-2L), l_682.z, 0x6DL, (-1L))).sb, (*l_573)))))) , (**p_939->g_460))))))) | (*p_939->g_561));
        for (l_625 = 0; (l_625 > (-2)); l_625 = safe_sub_func_int16_t_s_s(l_625, 3))
        { /* block id: 283 */
            int64_t l_701 = (-5L);
            uint32_t *l_711 = (void*)0;
            uint32_t *l_712 = &p_939->g_58.f2;
            uint32_t *l_713[9][7] = {{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_939->g_11,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint16_t ****l_720 = &l_718[0];
            int32_t l_725 = 0x140CAA49L;
            uint64_t *l_736[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_737 = 0x00D5B9C4L;
            int64_t *l_739 = (void*)0;
            int64_t *l_740[6][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
            uint32_t l_741 = 4294967293UL;
            int32_t **l_742 = &p_939->g_273[5];
            int i, j, k;
            (1 + 1);
        }
        (*p_939->g_744) = &l_616;
    }
    return p_939->g_312.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_250
 * writes: p_939->g_250 p_939->g_241
 */
uint32_t  func_44(union U0  p_45, uint16_t  p_46, int32_t * p_47, uint32_t  p_48, struct S1 * p_939)
{ /* block id: 220 */
    int32_t *l_550 = (void*)0;
    int32_t *l_551 = &p_939->g_241;
    int32_t *l_552[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_553 = 0x3E8AL;
    int64_t l_554 = 0x5419D468A4CF7A62L;
    uint16_t l_555 = 0x3E3AL;
    int i;
    for (p_939->g_250 = (-8); (p_939->g_250 > 20); p_939->g_250 = safe_add_func_uint8_t_u_u(p_939->g_250, 3))
    { /* block id: 223 */
        int64_t l_547 = 0x3994B9A3D4C8F47AL;
        int32_t *l_548 = &p_939->g_241;
        int32_t l_549 = 1L;
        l_549 = ((*l_548) = (+l_547));
    }
    --l_555;
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_37 p_939->g_58 p_939->g_11 p_939->g_4 p_939->g_109 p_939->l_comm_values p_939->g_comm_values p_939->g_241 p_939->g_199 p_939->g_234 p_939->g_263 p_939->g_303 p_939->g_322 p_939->g_302 p_939->g_301 p_939->g_322.f0 p_939->g_340 p_939->g_460 p_939->g_476 p_939->g_331 p_939->g_514 p_939->g_332
 * writes: p_939->g_37 p_939->g_109 p_939->g_241 p_939->g_250 p_939->g_212 p_939->g_58.f2 p_939->g_346 p_939->g_273 p_939->g_219 p_939->g_340
 */
union U0  func_49(int32_t * p_50, int32_t * p_51, uint16_t  p_52, struct S1 * p_939)
{ /* block id: 13 */
    VECTOR(uint64_t, 16) l_71 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1B8438CF8356F596L), 0x1B8438CF8356F596L), 0x1B8438CF8356F596L, 18446744073709551615UL, 0x1B8438CF8356F596L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1B8438CF8356F596L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1B8438CF8356F596L), 18446744073709551615UL, 0x1B8438CF8356F596L, 18446744073709551615UL, 0x1B8438CF8356F596L);
    int32_t l_99 = (-8L);
    int32_t l_381 = 0x2867E981L;
    int32_t l_383 = 0x24994870L;
    int8_t *l_390 = (void*)0;
    int8_t **l_389 = &l_390;
    VECTOR(uint32_t, 2) l_401 = (VECTOR(uint32_t, 2))(0xB1FF4740L, 0UL);
    VECTOR(int8_t, 16) l_459 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 5L), 5L), 5L, 3L, 5L, (VECTOR(int8_t, 2))(3L, 5L), (VECTOR(int8_t, 2))(3L, 5L), 3L, 5L, 3L, 5L);
    VECTOR(uint8_t, 16) l_478 = (VECTOR(uint8_t, 16))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0UL), 0UL), 0UL, 0xCFL, 0UL, (VECTOR(uint8_t, 2))(0xCFL, 0UL), (VECTOR(uint8_t, 2))(0xCFL, 0UL), 0xCFL, 0UL, 0xCFL, 0UL);
    uint64_t *l_484 = (void*)0;
    uint64_t **l_483 = &l_484;
    int16_t l_498 = 0x5C19L;
    VECTOR(uint32_t, 16) l_499 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x5C846102L), 0x5C846102L), 0x5C846102L, 4294967293UL, 0x5C846102L, (VECTOR(uint32_t, 2))(4294967293UL, 0x5C846102L), (VECTOR(uint32_t, 2))(4294967293UL, 0x5C846102L), 4294967293UL, 0x5C846102L, 4294967293UL, 0x5C846102L);
    int32_t *l_507[1][4] = {{&l_381,&l_381,&l_381,&l_381}};
    uint8_t l_508 = 0UL;
    int32_t **l_511 = &l_507[0][2];
    VECTOR(int16_t, 16) l_515 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    uint64_t l_529[9] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
    uint64_t l_538 = 0x079A8CD5BD7FCAA7L;
    union U0 l_544 = {0x48A4050BL};
    int i, j;
    for (p_939->g_37 = 0; (p_939->g_37 != (-7)); p_939->g_37 = safe_sub_func_uint8_t_u_u(p_939->g_37, 4))
    { /* block id: 16 */
        int16_t l_74 = 0x5AA0L;
        int32_t l_374 = (-8L);
        int32_t l_375 = 4L;
        int32_t l_380 = 1L;
        int32_t l_382[6][2][9] = {{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}},{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}},{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}},{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}},{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}},{{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L},{0x747CA086L,0x71CD6C2BL,0x334D8D64L,0x4A75A1E8L,0x334D8D64L,0x71CD6C2BL,0x747CA086L,1L,1L}}};
        VECTOR(uint16_t, 16) l_400 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 65533UL), 65533UL), 65533UL, 9UL, 65533UL, (VECTOR(uint16_t, 2))(9UL, 65533UL), (VECTOR(uint16_t, 2))(9UL, 65533UL), 9UL, 65533UL, 9UL, 65533UL);
        uint8_t *l_430 = (void*)0;
        uint8_t **l_429[2][6][1] = {{{&l_430},{&l_430},{&l_430},{&l_430},{&l_430},{&l_430}},{{&l_430},{&l_430},{&l_430},{&l_430},{&l_430},{&l_430}}};
        VECTOR(uint8_t, 2) l_475 = (VECTOR(uint8_t, 2))(0xF0L, 248UL);
        int32_t *l_506 = &l_383;
        int i, j, k;
        for (p_52 = 29; (p_52 >= 45); p_52 = safe_add_func_uint64_t_u_u(p_52, 8))
        { /* block id: 19 */
            return p_939->g_58;
        }
        for (p_52 = 19; (p_52 > 46); p_52 = safe_add_func_int8_t_s_s(p_52, 4))
        { /* block id: 24 */
            uint32_t l_89 = 1UL;
            int32_t *l_98 = &p_939->g_4;
            uint32_t *l_108 = &p_939->g_109;
            int32_t *l_351 = &p_939->g_241;
            int16_t **l_363 = (void*)0;
            int16_t *l_365 = &l_74;
            int16_t **l_364[6][6] = {{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365,&l_365}};
            int32_t l_376 = 0x29408552L;
            int32_t l_378 = (-1L);
            int32_t l_379[5] = {0x532F8F7EL,0x532F8F7EL,0x532F8F7EL,0x532F8F7EL,0x532F8F7EL};
            uint8_t *l_406[10][7] = {{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0},{&p_939->g_212,&p_939->g_212,&p_939->g_212,(void*)0,&p_939->g_212,&p_939->g_212,(void*)0}};
            uint64_t l_410 = 8UL;
            int8_t ***l_411[5];
            VECTOR(int32_t, 16) l_456 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int32_t, 2))(1L, 5L), (VECTOR(int32_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
            int i, j;
            for (i = 0; i < 5; i++)
                l_411[i] = &l_389;
            (*l_351) = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((~((VECTOR(uint64_t, 8))(l_71.s1936efe4)).s5) != (safe_lshift_func_int8_t_s_u((l_74 ^ (!(p_52 >= ((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL)).odd))), func_75((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(func_84(((*l_108) = (+(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((l_89--) >= p_939->g_58.f0), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((l_99 = (l_98 == p_51)), ((+(safe_add_func_int32_t_s_s((((+(safe_mul_func_uint8_t_u_u((((l_71.s3 < (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((0x0769L ^ 0x9F8CL), (p_50 != &p_939->g_4))), p_939->g_comm_values[p_939->tid]))) > 0xFDCAF09E5C5CB2EAL) <= 0x5D1EE040EEAA4458L), (*l_98)))) && p_52) < GROUP_DIVERGE(0, 1)), p_939->g_58.f0))) >= l_74))), 0)), 0x0BL)), ((VECTOR(uint64_t, 8))(0xE846833E316ED276L)), ((VECTOR(uint64_t, 4))(0x2971DF8105A18A5CL)), 0x25F0F443C0C33ADBL, 18446744073709551615UL)).sed, ((VECTOR(uint64_t, 2))(0xCAB5B2332F7F6FD0L))))))).lo , 0x18026BCBL))), p_939->g_11, p_52, (*l_98), p_939), (-2L))), p_939->g_234)), p_939->g_322[2][5][0], p_939->g_302.w, p_52, p_939)))), p_52)), p_52)) || 6UL), p_939->g_234)), (*l_98))) && 0x37B4221DL), GROUP_DIVERGE(1, 1)));
            for (p_939->g_241 = 25; (p_939->g_241 >= 23); p_939->g_241 = safe_sub_func_int32_t_s_s(p_939->g_241, 5))
            { /* block id: 152 */
                VECTOR(uint8_t, 16) l_362 = (VECTOR(uint8_t, 16))(0xCAL, (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 0xEEL), 0xEEL), 0xEEL, 0xCAL, 0xEEL, (VECTOR(uint8_t, 2))(0xCAL, 0xEEL), (VECTOR(uint8_t, 2))(0xCAL, 0xEEL), 0xCAL, 0xEEL, 0xCAL, 0xEEL);
                int32_t l_366[10][2] = {{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL},{(-9L),0x347212AFL}};
                uint16_t *l_367 = &p_939->g_346;
                uint16_t l_386 = 0x13DFL;
                uint64_t *l_480 = (void*)0;
                uint64_t **l_479[6][6] = {{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480,&l_480}};
                union U0 l_487 = {-1L};
                int i, j;
                if ((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((((*l_367) = (p_939->g_303.w , ((p_51 != (l_74 , p_51)) & (!((safe_sub_func_uint32_t_u_u((((l_366[6][0] |= ((p_939->g_303.y < ((((safe_mul_func_int8_t_s_s((0x03FCF208L && (*p_50)), ((VECTOR(uint8_t, 16))(l_362.s4cc71d78d137e17d)).se)) == (p_52 > (l_363 == l_364[2][1]))) | (*p_50)) == 7UL)) | 0x7BEF80A26F176BC0L)) || p_939->g_301.s5) & p_52), l_74)) == p_939->g_11))))) && p_939->g_322[2][5][0].f0), 0x5A141CACL)) , (*l_98)), 1L)))
                { /* block id: 155 */
                    int32_t *l_368 = &l_99;
                    int32_t **l_369 = (void*)0;
                    int32_t **l_370 = &p_939->g_273[4];
                    int32_t l_377 = 0x7BE5F42FL;
                    int32_t l_384 = 8L;
                    int32_t l_385 = 0x6A30CD1EL;
                    uint8_t *l_408[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_408[i] = (void*)0;
                    (*l_370) = l_368;
                    (*l_370) = p_51;
                    (*l_370) = p_50;
                    for (p_939->g_219 = 0; (p_939->g_219 != 15); p_939->g_219 = safe_add_func_uint16_t_u_u(p_939->g_219, 3))
                    { /* block id: 161 */
                        int32_t *l_373[8][2] = {{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241},{&p_939->g_4,&p_939->g_241}};
                        int8_t ***l_391 = &l_389;
                        uint8_t **l_407[2][2][8] = {{{&l_406[5][6],&l_406[5][6],&l_406[7][0],&l_406[3][6],&l_406[5][6],&l_406[5][6],&l_406[3][6],&l_406[5][6]},{&l_406[5][6],&l_406[5][6],&l_406[7][0],&l_406[3][6],&l_406[5][6],&l_406[5][6],&l_406[3][6],&l_406[5][6]}},{{&l_406[5][6],&l_406[5][6],&l_406[7][0],&l_406[3][6],&l_406[5][6],&l_406[5][6],&l_406[3][6],&l_406[5][6]},{&l_406[5][6],&l_406[5][6],&l_406[7][0],&l_406[3][6],&l_406[5][6],&l_406[5][6],&l_406[3][6],&l_406[5][6]}}};
                        VECTOR(uint8_t, 16) l_409 = (VECTOR(uint8_t, 16))(0x4CL, (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 0x05L), 0x05L), 0x05L, 0x4CL, 0x05L, (VECTOR(uint8_t, 2))(0x4CL, 0x05L), (VECTOR(uint8_t, 2))(0x4CL, 0x05L), 0x4CL, 0x05L, 0x4CL, 0x05L);
                        int64_t *l_412[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_431 = 0L;
                        uint64_t *l_432 = (void*)0;
                        int i, j, k;
                        ++l_386;
                        (*l_370) = p_51;
                        (*l_368) = ((((*l_391) = l_389) != (void*)0) && (safe_sub_func_uint64_t_u_u(p_52, l_71.s1)));
                        l_366[6][0] |= ((p_939->g_340.s7 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_400.sb11ae61d)).s4, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x874AA712L, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(l_401.yxxyxxyy)), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x2ED76DF1L, ((safe_div_func_int32_t_s_s((l_384 = (l_377 |= (((l_408[4] = l_406[5][6]) != &p_939->g_212) == (l_381 = ((((*l_368) = (l_410 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(0x59L, 255UL)).xyxyxyyyyyxxyyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_409.sc7)).yxxxxyxx)).s70)).yyyyxxyxxxyyyxyx))))).s3)) & p_52) < (0x1B0B1D8BL | ((void*)0 == l_411[0]))))))), ((safe_rshift_func_int16_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-1L))), (-1L), 0x776FC09F2529F0A3L)).w & (!(safe_mul_func_uint16_t_u_u((FAKE_DIVERGE(p_939->local_1_offset, get_local_id(1), 10) != (((((safe_add_func_uint64_t_u_u(p_939->g_212, ((safe_sub_func_int64_t_s_s((p_939->g_332.s5 , (p_939->g_199.x = (safe_div_func_uint16_t_u_u((((p_939->g_58.f2 = ((safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_939->local_0_offset, get_local_id(0), 10), (((VECTOR(int32_t, 8))((safe_div_func_int64_t_s_s(p_939->g_212, GROUP_DIVERGE(1, 1))), ((VECTOR(int32_t, 4))(0x1BC16BA3L)), ((VECTOR(int32_t, 2))(0x658AF555L)), 1L)).s2 > (*p_50)))), p_939->g_37)) == p_52)) , l_429[0][1][0]) == &l_406[1][5]), p_939->g_234)))), p_939->g_312.w)) && p_52))) | GROUP_DIVERGE(1, 1)) > p_52) > 0xD1F793DCL) && 0xC82A684AL)), p_52)))), 6)) , p_52))) < p_939->g_302.w), 0xD23C22D8L, p_52, ((VECTOR(uint32_t, 4))(0x6C75D04DL)), ((VECTOR(uint32_t, 2))(6UL)), p_939->g_37, 0x4029C277L, ((VECTOR(uint32_t, 2))(1UL)), 0xA03489FAL, 0UL)))))).s4a)).yxyy, ((VECTOR(uint32_t, 4))(0x198ED8A3L))))).hi, ((VECTOR(uint32_t, 2))(0x6F5784E1L))))).xxxxxxxy, ((VECTOR(uint32_t, 8))(0xD8094347L))))), 0xBD506A47L, ((VECTOR(uint32_t, 4))(0x04214889L)), 1UL, 4294967294UL)))).s9 & l_431))), p_939->g_340.s4)), p_52))) && l_382[3][0][4]);
                    }
                }
                else
                { /* block id: 177 */
                    int32_t *l_433[6] = {&l_376,&l_376,&l_376,&l_376,&l_376,&l_376};
                    VECTOR(int32_t, 8) l_441 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-6L)), (-6L)), (-6L), (-6L), (-6L));
                    int64_t l_445 = 0x19A44A7771E4D190L;
                    uint64_t *l_451 = (void*)0;
                    VECTOR(uint8_t, 8) l_477 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL);
                    VECTOR(uint32_t, 16) l_501 = (VECTOR(uint32_t, 16))(0x291B8A23L, (VECTOR(uint32_t, 4))(0x291B8A23L, (VECTOR(uint32_t, 2))(0x291B8A23L, 0UL), 0UL), 0UL, 0x291B8A23L, 0UL, (VECTOR(uint32_t, 2))(0x291B8A23L, 0UL), (VECTOR(uint32_t, 2))(0x291B8A23L, 0UL), 0x291B8A23L, 0UL, 0x291B8A23L, 0UL);
                    int i;
                    l_383 = 9L;
                    if (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(p_939->g_241)), ((((p_52 , (l_433[0] != (void*)0)) , ((VECTOR(int32_t, 8))(l_441.s62645267)).s6) , ((VECTOR(uint64_t, 16))((((GROUP_DIVERGE(0, 1) | p_939->g_302.z) && ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_939->g_442.sb75e)).yywyyxywzzwyzyzy)))).sb) > 1L), 0x62871F3C8381D5C7L, (p_52 | (l_401.x >= (safe_add_func_uint64_t_u_u(p_939->g_346, FAKE_DIVERGE(p_939->local_1_offset, get_local_id(1), 10))))), ((VECTOR(uint64_t, 4))(0UL)), 0xCD21EDE68AEB9701L, ((VECTOR(uint64_t, 2))(18446744073709551609UL)), ((VECTOR(uint64_t, 4))(0xD3245689AB533857L)), 18446744073709551607UL, 0x32AAC4585EE88220L)).sa) ^ p_52))), p_52)), 0)) <= l_445))
                    { /* block id: 179 */
                        uint64_t *l_448 = (void*)0;
                        uint64_t **l_449 = (void*)0;
                        uint64_t **l_450 = &l_448;
                        int32_t l_463 = 0L;
                        int32_t **l_464 = &l_433[4];
                        uint64_t ***l_481 = &l_479[1][5];
                        VECTOR(uint32_t, 8) l_482 = (VECTOR(uint32_t, 8))(0x67EE452DL, (VECTOR(uint32_t, 4))(0x67EE452DL, (VECTOR(uint32_t, 2))(0x67EE452DL, 0x81F19F47L), 0x81F19F47L), 0x81F19F47L, 0x67EE452DL, 0x81F19F47L);
                        int i;
                        l_463 ^= (((VECTOR(int64_t, 4))(0x1CAE3E673C8E27BBL, ((VECTOR(int64_t, 2))((-1L), 0x4EA49BCB3E40B874L)), (-10L))).w | (+(!(safe_lshift_func_int16_t_s_u((((*l_450) = l_448) == l_451), (safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_939->g_241, (l_383 = p_939->g_109))) >= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_456.s225f26ce7faf82c6)).odd)).s5222541543036173)).sc, (*l_351), (-5L), (-1L))).wyzwzyzwywwxzxwy)).hi)).s33, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4F7AC0E9L, 0x104A1478L)), 0x2CCB883FL, 0x24A60314L)).odd))).yyxx)).yywwxyzw)).s7), (GROUP_DIVERGE(2, 1) , ((*l_365) = (safe_add_func_int8_t_s_s(((1UL < ((VECTOR(int8_t, 2))(l_459.s0f)).odd) > ((void*)0 != p_939->g_460)), (p_51 != p_51))))))))))));
                        (*l_464) = (void*)0;
                        l_366[6][0] = ((safe_div_func_uint8_t_u_u((p_939->g_4 >= (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 8))(l_475.xxyxyyxy)), ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(p_939->g_476.sab1eab64)).s41, ((VECTOR(uint8_t, 8))(l_477.s40303170)).s41))).xyxxyyxxxyyyxxyy, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_478.s65)), 0x4EL, 255UL)).xzyzxxwz)).s5523276517633263)).sdacb)).zxzzxzzz, (uint8_t)((((((*l_481) = l_479[0][0]) == ((p_52 ^ ((VECTOR(uint32_t, 2))(l_482.s40)).hi) , l_483)) >= ((((safe_div_func_uint8_t_u_u((l_487 , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0xC1L, 8UL, 0xE2L, 1UL)).yxyzxzzz)).s1), (0x20L ^ (p_52 , (0L >= ((((p_50 == p_51) & p_52) > p_939->g_340.s3) , p_939->g_332.sb)))))) , p_939->g_340.s0) & 3L) , 4294967295UL)) && p_52) | 0x3AC0L)))).s15)).xyxyxxyx)).s45, ((VECTOR(uint8_t, 2))(246UL))))).xyxy)).xwxyzyxy)), ((VECTOR(uint8_t, 8))(0xB4L))))).s0657611002222775))).even, ((VECTOR(uint8_t, 8))(9UL))))).s0754201225213426, (uint8_t)0x43L))).sd, p_939->g_263.x)), p_939->g_301.sc)), l_71.sf)), p_939->g_476.s2))), p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))])) <= 1L);
                    }
                    else
                    { /* block id: 187 */
                        int32_t **l_488 = &l_98;
                        VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(0x31A9E057L, (VECTOR(int32_t, 2))(0x31A9E057L, 1L), 1L);
                        uint16_t l_495 = 0xE041L;
                        int i;
                        l_351 = ((*l_488) = p_50);
                        l_374 = ((((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))((((VECTOR(int32_t, 2))(l_489.yw)).hi && ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(p_939->g_492.yy)).even, 2)) || (l_498 = ((safe_div_func_uint64_t_u_u((p_50 != ((0x365651C1L < (l_495 = 0x6B58F4B5L)) , (void*)0)), p_52)) , (safe_add_func_int16_t_s_s(p_939->g_303.z, (*l_351))))))), ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(l_499.sd6bb25e18858e5c7)).s25, ((VECTOR(uint32_t, 16))(p_939->g_500.s0066221164726662)).sb0))), 0x60A9A56CL)).zwxzzyzx, ((VECTOR(uint32_t, 4))(l_501.s7f39)).xzwyzwzz))).s5 , (((p_52 , ((safe_sub_func_int8_t_s_s((-1L), 4UL)) <= p_939->g_331.y)) & (-3L)) & l_478.s4)) >= (**l_488));
                    }
                }
            }
        }
        (*l_506) = (safe_div_func_int8_t_s_s((-1L), ((VECTOR(int8_t, 2))(0x4FL, 1L)).lo));
    }
    l_508--;
    (*l_511) = &p_939->g_4;
    if ((safe_add_func_int32_t_s_s((((0x706EL < (+((VECTOR(int16_t, 8))(7L, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(p_939->g_514.s4322654056516472)).s069a, ((VECTOR(int16_t, 8))(l_515.s4cc02c38)).hi))), 0x7AADL, 4L, 1L)).s0)) != GROUP_DIVERGE(2, 1)) ^ p_939->g_332.se), p_52)))
    { /* block id: 201 */
        int16_t l_516 = 0x476DL;
        int32_t l_517 = 0x034DEAB7L;
        int32_t l_518 = 0x240C49F0L;
        int32_t l_519 = (-1L);
        int32_t l_520 = 0x1C5A5D22L;
        int32_t l_521[8];
        int64_t l_522 = 0L;
        uint32_t l_523 = 1UL;
        int64_t l_528 = (-1L);
        int i;
        for (i = 0; i < 8; i++)
            l_521[i] = (-7L);
        (*l_511) = (void*)0;
        --l_523;
        l_518 = (safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_939->local_2_offset, get_local_id(2), 10), 0xF7B0EB3AL));
        --l_529[7];
    }
    else
    { /* block id: 206 */
        uint8_t l_532 = 0x02L;
        int32_t l_533 = 0x330E93C2L;
        int32_t l_536[4];
        int32_t *l_542 = &p_939->g_322[2][5][0].f0;
        int i;
        for (i = 0; i < 4; i++)
            l_536[i] = 0x7954608FL;
        l_533 = (l_532 && p_52);
        for (l_99 = 0; (l_99 > (-30)); --l_99)
        { /* block id: 210 */
            VECTOR(int32_t, 8) l_537 = (VECTOR(int32_t, 8))(0x60C2619DL, (VECTOR(int32_t, 4))(0x60C2619DL, (VECTOR(int32_t, 2))(0x60C2619DL, 0x78E20DECL), 0x78E20DECL), 0x78E20DECL, 0x60C2619DL, 0x78E20DECL);
            int32_t l_541 = 0x27CE3CDBL;
            int32_t *l_543[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_543[i][j] = &p_939->g_58.f0;
            }
            ++l_538;
            l_541 |= l_537.s0;
            (*l_511) = (*l_511);
            l_537.s2 = (l_542 == (l_543[0][0] = (void*)0));
        }
        l_533 = l_532;
    }
    return l_544;
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_11 p_939->g_331 p_939->g_332 p_939->g_263 p_939->g_340 p_939->g_301 p_939->g_322.f0 p_939->g_4
 * writes: p_939->g_346 p_939->g_348
 */
uint8_t  func_75(int8_t  p_76, union U0  p_77, uint32_t  p_78, int16_t  p_79, struct S1 * p_939)
{ /* block id: 144 */
    VECTOR(uint8_t, 8) l_327 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
    VECTOR(uint8_t, 4) l_328 = (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 0UL), 0UL);
    VECTOR(uint8_t, 4) l_329 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0UL), 0UL);
    VECTOR(uint8_t, 4) l_330 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x36L), 0x36L);
    VECTOR(uint8_t, 4) l_333 = (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 0x05L), 0x05L);
    uint16_t *l_345 = &p_939->g_346;
    int8_t *l_347 = &p_939->g_348;
    int32_t *l_349 = &p_939->g_4;
    int32_t l_350[2];
    int i;
    for (i = 0; i < 2; i++)
        l_350[i] = 5L;
    l_350[0] = (((safe_div_func_int8_t_s_s(p_939->g_11, (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(4UL, 0UL, ((VECTOR(uint8_t, 2))(l_327.s14)), 0x53L, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(l_328.yyyxwzzxzzyxzxwy)).s90, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(l_329.yz)), ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_330.zzxz)).ywzyzwyz, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_939->g_331.yy)), 0x2AL, 249UL)).xwzxzzwz))).s46, ((VECTOR(uint8_t, 4))(p_939->g_332.s593d)).hi))))).yxyy)), 255UL, ((VECTOR(uint8_t, 8))(l_333.wwyxzyzz)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(p_939->g_263.y, (safe_sub_func_int64_t_s_s((l_329.z >= 3L), (safe_lshift_func_uint8_t_u_s((((*l_347) = (safe_sub_func_int64_t_s_s((((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(7UL, ((VECTOR(uint64_t, 8))(18446744073709551612UL, 18446744073709551615UL, 0x528D8049FB529590L, 0UL, 18446744073709551611UL, ((VECTOR(uint64_t, 2))(p_939->g_340.s76)), 18446744073709551615UL)).s0, 1UL, (safe_mul_func_uint8_t_u_u(((p_939->g_301.sd < (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x2D5CFDD42086BAE5L, 0x4DCA859B20CB32DEL)).yxyyyxyx)).lo)), ((VECTOR(int64_t, 4))(((safe_rshift_func_uint16_t_u_u(((*l_345) = 0x5232L), 6)) && p_939->g_332.s5), l_333.w, 0x1E7428040B7BD1C8L, (-1L))))).s7761313260175754, ((VECTOR(int64_t, 16))(0x5A717AF109C62E95L))))).see, ((VECTOR(int64_t, 2))((-1L)))))).hi <= p_939->g_322[2][5][0].f0)) , p_939->g_301.sb), 0x70L)), ((VECTOR(uint64_t, 4))(1UL)))).s56)), 0UL, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(1UL))))))).s1 & p_79), 0x4037D3CC4FAD99BFL))) ^ p_76), l_329.x)))), 1UL, 255UL, 5UL, ((VECTOR(uint8_t, 2))(251UL)), 250UL)).s16, ((VECTOR(uint8_t, 2))(8UL))))), 0xDBL)).lo, ((VECTOR(uint8_t, 8))(255UL))))).s75))).yyxxyxxyxxxxxxyx)).hi)).s34, ((VECTOR(uint8_t, 2))(0x51L))))), 254UL)), 7UL, ((VECTOR(uint8_t, 2))(0xDCL)), ((VECTOR(uint8_t, 2))(2UL)), 0x63L, 3UL, 0x34L)).s1, 0x19L)))) , (void*)0) == l_349);
    return (*l_349);
}


/* ------------------------------------------ */
/* 
 * reads : p_939->g_109 p_939->l_comm_values p_939->g_comm_values p_939->g_241 p_939->g_199 p_939->g_4 p_939->g_11 p_939->g_234 p_939->g_263 p_939->g_302 p_939->g_303 p_939->g_58.f0 p_939->g_312 p_939->g_301
 * writes: p_939->g_241 p_939->g_250 p_939->g_212 p_939->g_58.f2 p_939->g_109 p_939->g_263
 */
int64_t  func_84(uint32_t  p_85, int16_t  p_86, int64_t  p_87, int8_t  p_88, struct S1 * p_939)
{ /* block id: 28 */
    uint8_t l_231 = 0xF1L;
    VECTOR(uint16_t, 2) l_274 = (VECTOR(uint16_t, 2))(65527UL, 0x963DL);
    VECTOR(uint16_t, 4) l_275 = (VECTOR(uint16_t, 4))(0xDAE9L, (VECTOR(uint16_t, 2))(0xDAE9L, 65529UL), 65529UL);
    uint64_t *l_304[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_305 = 9L;
    union U0 l_317 = {0x15B8E1D6L};
    int64_t *l_318[9];
    int32_t l_319 = (-1L);
    int32_t *l_320 = &p_939->g_241;
    int32_t **l_321 = &l_320;
    int i;
    for (i = 0; i < 9; i++)
        l_318[i] = (void*)0;
    for (p_88 = 0; (p_88 <= 3); ++p_88)
    { /* block id: 31 */
        VECTOR(int64_t, 4) l_202 = (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x28F979C1DC01494EL), 0x28F979C1DC01494EL);
        VECTOR(int8_t, 4) l_230 = (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, (-1L)), (-1L));
        int8_t **l_239 = (void*)0;
        int32_t *l_242 = (void*)0;
        int32_t l_246 = 0x5FCB13B1L;
        uint32_t l_280 = 1UL;
        int16_t *l_288 = &p_939->g_250;
        int32_t **l_297 = (void*)0;
        int i;
        if ((atomic_inc(&p_939->l_atomic_input[89]) == 8))
        { /* block id: 33 */
            VECTOR(int32_t, 4) l_112 = (VECTOR(int32_t, 4))(0x5379293EL, (VECTOR(int32_t, 2))(0x5379293EL, (-4L)), (-4L));
            VECTOR(int16_t, 4) l_113 = (VECTOR(int16_t, 4))(0x67E0L, (VECTOR(int16_t, 2))(0x67E0L, 0x7B5DL), 0x7B5DL);
            VECTOR(int16_t, 4) l_114 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5F43L), 0x5F43L);
            VECTOR(int16_t, 2) l_115 = (VECTOR(int16_t, 2))(3L, 0x5791L);
            VECTOR(uint16_t, 16) l_116 = (VECTOR(uint16_t, 16))(0xDA80L, (VECTOR(uint16_t, 4))(0xDA80L, (VECTOR(uint16_t, 2))(0xDA80L, 0xDD30L), 0xDD30L), 0xDD30L, 0xDA80L, 0xDD30L, (VECTOR(uint16_t, 2))(0xDA80L, 0xDD30L), (VECTOR(uint16_t, 2))(0xDA80L, 0xDD30L), 0xDA80L, 0xDD30L, 0xDA80L, 0xDD30L);
            VECTOR(int32_t, 8) l_117 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
            int32_t l_118 = (-1L);
            VECTOR(int8_t, 8) l_119 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
            VECTOR(int32_t, 8) l_120 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
            VECTOR(int32_t, 2) l_121 = (VECTOR(int32_t, 2))((-8L), 0x5015C65DL);
            uint32_t l_122[2];
            uint64_t l_123 = 0xA447F7BB3F607BB0L;
            int32_t l_124 = 0L;
            int32_t l_125 = 0x5450317EL;
            VECTOR(int32_t, 16) l_126 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x741F5D68L), 0x741F5D68L), 0x741F5D68L, (-1L), 0x741F5D68L, (VECTOR(int32_t, 2))((-1L), 0x741F5D68L), (VECTOR(int32_t, 2))((-1L), 0x741F5D68L), (-1L), 0x741F5D68L, (-1L), 0x741F5D68L);
            VECTOR(int32_t, 8) l_127 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L);
            uint32_t l_128 = 4294967295UL;
            VECTOR(int32_t, 4) l_129 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x313B08BCL), 0x313B08BCL);
            VECTOR(int32_t, 16) l_130 = (VECTOR(int32_t, 16))(0x5B4F01B8L, (VECTOR(int32_t, 4))(0x5B4F01B8L, (VECTOR(int32_t, 2))(0x5B4F01B8L, 0x57D7CE49L), 0x57D7CE49L), 0x57D7CE49L, 0x5B4F01B8L, 0x57D7CE49L, (VECTOR(int32_t, 2))(0x5B4F01B8L, 0x57D7CE49L), (VECTOR(int32_t, 2))(0x5B4F01B8L, 0x57D7CE49L), 0x5B4F01B8L, 0x57D7CE49L, 0x5B4F01B8L, 0x57D7CE49L);
            VECTOR(int32_t, 8) l_131 = (VECTOR(int32_t, 8))(0x75EEAC9FL, (VECTOR(int32_t, 4))(0x75EEAC9FL, (VECTOR(int32_t, 2))(0x75EEAC9FL, (-6L)), (-6L)), (-6L), 0x75EEAC9FL, (-6L));
            uint16_t l_132[4][2][1] = {{{0x71A4L},{0x71A4L}},{{0x71A4L},{0x71A4L}},{{0x71A4L},{0x71A4L}},{{0x71A4L},{0x71A4L}}};
            int8_t l_133 = (-1L);
            VECTOR(uint16_t, 4) l_134 = (VECTOR(uint16_t, 4))(0x4E8DL, (VECTOR(uint16_t, 2))(0x4E8DL, 65535UL), 65535UL);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_122[i] = 0xF9C6BEA7L;
            if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))((-6L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_112.wzyxyzwzwxxzyxxy)).odd, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(l_113.zwwzyxzxxxxyzxww)).s394c, (int16_t)((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(l_114.xwyxzwzw)).s16, ((VECTOR(int16_t, 16))(l_115.xxxxyyxxxyxyyyyy)).s86))).xyxxxyxx)).s16)).lo))).zxxywwxw, ((VECTOR(uint16_t, 2))(l_116.sc4)).xxyyxyyx)))))).even)).w, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_117.s76)), 5L, 0x130811D2L)), (l_117.s1 = 0x28FDDE4DL), (l_119.s1 ^= l_118), 0x305F7132L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, 0x2BBE4CD0L)).xyyxxyyyyyyyyxxx)).hi)))).hi, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x6C4B94ADL, 0L)).yyyyxxxyyxxyyyyx)).sb55d, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_120.s5171)).wyxyxxzw)).even))).yywywzwy))).s02, ((VECTOR(int32_t, 4))(0x7C1DF0E7L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(l_121.yxxy)), (int32_t)l_122[1], (int32_t)(l_123 , (l_125 = l_124))))).hi))), 0x078AD4A5L)).hi, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_126.s0402)).lo)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_127.s11725427)).odd, (int32_t)(l_128 = 0L)))), ((VECTOR(int32_t, 4))((-9L), (-3L), 0x05CE8A8DL, 1L))))).lo, ((VECTOR(int32_t, 8))(l_129.wzyzzwww)).s20))).yyxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_130.s567760c7)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(l_131.s0774)).yywxxzxx, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(0x0B7C7C06L, 0x71E037CFL, 0x67B20451L, 4L)).lo, ((VECTOR(int32_t, 2))(0x77226B51L, 1L))))).yxyyyyyx))))).hi))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_132[3][1][0], 0x6A256EE4L, ((VECTOR(int32_t, 4))(0x5CF354A0L)), 0L, 0L)).hi, ((VECTOR(int32_t, 4))(0x05F85640L))))).yywxywww, ((VECTOR(int32_t, 8))(0x524A1A4EL))))).s44)).yxyx))).hi))), l_133, l_134.w, 8L, 0x3CFE6255L)), ((VECTOR(int32_t, 8))(0L))))).s7716223366231727)).sb)
            { /* block id: 38 */
                int32_t *l_135 = (void*)0;
                int32_t l_137[9][4][4] = {{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}},{{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)},{1L,4L,6L,(-1L)}}};
                int32_t *l_136 = &l_137[3][2][3];
                int16_t l_138 = 0x2BB1L;
                int32_t *l_186 = &l_137[3][2][3];
                int i, j, k;
                l_136 = (l_135 = (void*)0);
                l_117.s0 = l_138;
                for (l_138 = 22; (l_138 >= (-1)); l_138 = safe_sub_func_uint8_t_u_u(l_138, 1))
                { /* block id: 44 */
                    int32_t l_141 = (-6L);
                    VECTOR(uint16_t, 4) l_169 = (VECTOR(uint16_t, 4))(0xB400L, (VECTOR(uint16_t, 2))(0xB400L, 2UL), 2UL);
                    int64_t l_170 = 0x4F794CBFBA9A8C75L;
                    int32_t *l_185 = &l_141;
                    int i;
                    for (l_141 = 0; (l_141 == 28); l_141 = safe_add_func_int8_t_s_s(l_141, 2))
                    { /* block id: 47 */
                        VECTOR(int64_t, 16) l_144 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x74B4D06AD958E107L), 0x74B4D06AD958E107L), 0x74B4D06AD958E107L, (-1L), 0x74B4D06AD958E107L, (VECTOR(int64_t, 2))((-1L), 0x74B4D06AD958E107L), (VECTOR(int64_t, 2))((-1L), 0x74B4D06AD958E107L), (-1L), 0x74B4D06AD958E107L, (-1L), 0x74B4D06AD958E107L);
                        int16_t l_145 = 0x56DAL;
                        int32_t *l_146[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_136 = ((l_145 = ((VECTOR(int64_t, 2))(l_144.sfd)).even) , (l_135 = l_146[1]));
                    }
                    for (l_141 = 19; (l_141 < 27); l_141 = safe_add_func_int16_t_s_s(l_141, 7))
                    { /* block id: 54 */
                        int64_t l_149 = (-1L);
                        VECTOR(int8_t, 16) l_150 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4BL), 0x4BL), 0x4BL, (-1L), 0x4BL, (VECTOR(int8_t, 2))((-1L), 0x4BL), (VECTOR(int8_t, 2))((-1L), 0x4BL), (-1L), 0x4BL, (-1L), 0x4BL);
                        int32_t l_151[7][3][7] = {{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}},{{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L},{0x171D3657L,2L,(-5L),0x6F2A897AL,1L,0x5BBAE03FL,1L}}};
                        uint64_t l_152 = 0UL;
                        VECTOR(int32_t, 2) l_155 = (VECTOR(int32_t, 2))((-6L), (-1L));
                        int16_t l_156 = 0x59C8L;
                        uint16_t l_157 = 65526UL;
                        int64_t l_158 = 0x4E91CA70F6C1F096L;
                        int16_t l_159 = 0x678DL;
                        int16_t l_160 = 1L;
                        VECTOR(int32_t, 4) l_161 = (VECTOR(int32_t, 4))(0x1CB93B74L, (VECTOR(int32_t, 2))(0x1CB93B74L, 0x2F1ED599L), 0x2F1ED599L);
                        int32_t l_162[10] = {0x1C317561L,0x6BE33A23L,0x1C317561L,0x1C317561L,0x6BE33A23L,0x1C317561L,0x1C317561L,0x6BE33A23L,0x1C317561L,0x1C317561L};
                        uint32_t l_163[4][5][1] = {{{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L}},{{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L}},{{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L}},{{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L},{0xB7CAA224L}}};
                        uint64_t l_164 = 0x4C2597332F4EEEBAL;
                        uint8_t l_165 = 0x4EL;
                        int32_t l_166 = 0x66FF05A5L;
                        VECTOR(int64_t, 8) l_167 = (VECTOR(int64_t, 8))(0x284ED83160587D15L, (VECTOR(int64_t, 4))(0x284ED83160587D15L, (VECTOR(int64_t, 2))(0x284ED83160587D15L, 0x23A504EC7D9E8CB0L), 0x23A504EC7D9E8CB0L), 0x23A504EC7D9E8CB0L, 0x284ED83160587D15L, 0x23A504EC7D9E8CB0L);
                        int32_t *l_168 = (void*)0;
                        int i, j, k;
                        ++l_152;
                        l_117.s4 = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(7L, (-1L))).xyyyyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))((-3L), 0x0ADCB03EL)).yyyyxxxyyyyxyxxx, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_155.xyxx)).odd)).xxxxxxyyxxyyyyxy, ((VECTOR(int32_t, 4))(0x595232D5L, ((l_156 , l_157) , l_158), 0x1C7B1A2CL, 0x6F6F0179L)).zzwywwyywyzxxwyw)))))).even)), ((VECTOR(int32_t, 8))((l_159 , l_160), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0x4FB6B91AL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(0L, 0L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_161.xxwwxzwz)), l_162[0], ((VECTOR(int32_t, 4))(0x38839AD8L, 0L, 0x0F9DADCBL, 3L)), ((VECTOR(int32_t, 2))(0x38EDED3EL, (-3L))), 0x0155E1EFL)))).sb6))).xxxx)).y, 0x53BF737DL, ((FAKE_DIVERGE(p_939->group_1_offset, get_group_id(1), 10) , ((l_158 = 0x0E0F7AC18CAC2623L) , (l_125 = (l_163[3][3][0] , 8L)))) , (-1L)), l_164, ((VECTOR(int32_t, 2))(0x1C8C2AADL)), 0x75EE9091L, (-9L))).s73)), 0x592D6BAAL)).xxzwzwxz, ((VECTOR(int32_t, 8))(0x39BCC19FL)), ((VECTOR(int32_t, 8))(6L))))).s73)).odd, l_165, ((VECTOR(int32_t, 2))(1L)), 0x72FA7073L, 8L, 0x2BDE9202L)), ((VECTOR(int32_t, 8))(0x5850D4A3L))))))).s6574603523634102)).hi))).s41, ((VECTOR(int32_t, 2))(0x6E843484L))))).lo;
                        l_167.s6 ^= (l_161.w &= l_166);
                        l_135 = l_168;
                    }
                    if ((l_169.z , l_170))
                    { /* block id: 63 */
                        int8_t l_173 = (-1L);
                        int8_t *l_172 = &l_173;
                        int8_t **l_171 = &l_172;
                        int8_t **l_174 = &l_172;
                        uint32_t l_175 = 9UL;
                        uint64_t l_176 = 0xCBBB26B008311E2FL;
                        int64_t l_177 = 0x6B5D01FEC4C8C8FAL;
                        uint64_t l_178[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_178[i] = 0x535DD0E7B0658B69L;
                        l_174 = l_171;
                        l_127.s7 |= (l_178[1] ^= (l_175 , (l_176 , l_177)));
                    }
                    else
                    { /* block id: 67 */
                        uint64_t l_179 = 1UL;
                        uint8_t l_180 = 0x38L;
                        int32_t l_181 = 0x03A1E7A8L;
                        uint32_t l_182 = 0UL;
                        l_180 |= l_179;
                        --l_182;
                    }
                    l_136 = l_185;
                }
                l_186 = (void*)0;
            }
            else
            { /* block id: 74 */
                int32_t l_187 = 0x4F057894L;
                for (l_187 = 0; (l_187 > (-23)); l_187 = safe_sub_func_uint8_t_u_u(l_187, 1))
                { /* block id: 77 */
                    uint32_t l_190[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    uint64_t l_191 = 0x6A20D3CC9FF2BBDBL;
                    int i;
                    l_117.s6 |= l_190[0];
                    l_191--;
                }
            }
            unsigned int result = 0;
            result += l_112.w;
            result += l_112.z;
            result += l_112.y;
            result += l_112.x;
            result += l_113.w;
            result += l_113.z;
            result += l_113.y;
            result += l_113.x;
            result += l_114.w;
            result += l_114.z;
            result += l_114.y;
            result += l_114.x;
            result += l_115.y;
            result += l_115.x;
            result += l_116.sf;
            result += l_116.se;
            result += l_116.sd;
            result += l_116.sc;
            result += l_116.sb;
            result += l_116.sa;
            result += l_116.s9;
            result += l_116.s8;
            result += l_116.s7;
            result += l_116.s6;
            result += l_116.s5;
            result += l_116.s4;
            result += l_116.s3;
            result += l_116.s2;
            result += l_116.s1;
            result += l_116.s0;
            result += l_117.s7;
            result += l_117.s6;
            result += l_117.s5;
            result += l_117.s4;
            result += l_117.s3;
            result += l_117.s2;
            result += l_117.s1;
            result += l_117.s0;
            result += l_118;
            result += l_119.s7;
            result += l_119.s6;
            result += l_119.s5;
            result += l_119.s4;
            result += l_119.s3;
            result += l_119.s2;
            result += l_119.s1;
            result += l_119.s0;
            result += l_120.s7;
            result += l_120.s6;
            result += l_120.s5;
            result += l_120.s4;
            result += l_120.s3;
            result += l_120.s2;
            result += l_120.s1;
            result += l_120.s0;
            result += l_121.y;
            result += l_121.x;
            int l_122_i0;
            for (l_122_i0 = 0; l_122_i0 < 2; l_122_i0++) {
                result += l_122[l_122_i0];
            }
            result += l_123;
            result += l_124;
            result += l_125;
            result += l_126.sf;
            result += l_126.se;
            result += l_126.sd;
            result += l_126.sc;
            result += l_126.sb;
            result += l_126.sa;
            result += l_126.s9;
            result += l_126.s8;
            result += l_126.s7;
            result += l_126.s6;
            result += l_126.s5;
            result += l_126.s4;
            result += l_126.s3;
            result += l_126.s2;
            result += l_126.s1;
            result += l_126.s0;
            result += l_127.s7;
            result += l_127.s6;
            result += l_127.s5;
            result += l_127.s4;
            result += l_127.s3;
            result += l_127.s2;
            result += l_127.s1;
            result += l_127.s0;
            result += l_128;
            result += l_129.w;
            result += l_129.z;
            result += l_129.y;
            result += l_129.x;
            result += l_130.sf;
            result += l_130.se;
            result += l_130.sd;
            result += l_130.sc;
            result += l_130.sb;
            result += l_130.sa;
            result += l_130.s9;
            result += l_130.s8;
            result += l_130.s7;
            result += l_130.s6;
            result += l_130.s5;
            result += l_130.s4;
            result += l_130.s3;
            result += l_130.s2;
            result += l_130.s1;
            result += l_130.s0;
            result += l_131.s7;
            result += l_131.s6;
            result += l_131.s5;
            result += l_131.s4;
            result += l_131.s3;
            result += l_131.s2;
            result += l_131.s1;
            result += l_131.s0;
            int l_132_i0, l_132_i1, l_132_i2;
            for (l_132_i0 = 0; l_132_i0 < 4; l_132_i0++) {
                for (l_132_i1 = 0; l_132_i1 < 2; l_132_i1++) {
                    for (l_132_i2 = 0; l_132_i2 < 1; l_132_i2++) {
                        result += l_132[l_132_i0][l_132_i1][l_132_i2];
                    }
                }
            }
            result += l_133;
            result += l_134.w;
            result += l_134.z;
            result += l_134.y;
            result += l_134.x;
            atomic_add(&p_939->l_special_values[89], result);
        }
        else
        { /* block id: 82 */
            (1 + 1);
        }
        for (p_87 = 18; (p_87 >= 24); p_87 = safe_add_func_uint8_t_u_u(p_87, 3))
        { /* block id: 87 */
            uint64_t l_205 = 0UL;
            VECTOR(int32_t, 16) l_206 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L), (VECTOR(int32_t, 2))((-10L), (-1L)), (VECTOR(int32_t, 2))((-10L), (-1L)), (-10L), (-1L), (-10L), (-1L));
            uint8_t *l_211 = &p_939->g_212;
            int16_t *l_218 = &p_939->g_219;
            VECTOR(int32_t, 16) l_232 = (VECTOR(int32_t, 16))(0x572C0E2FL, (VECTOR(int32_t, 4))(0x572C0E2FL, (VECTOR(int32_t, 2))(0x572C0E2FL, 9L), 9L), 9L, 0x572C0E2FL, 9L, (VECTOR(int32_t, 2))(0x572C0E2FL, 9L), (VECTOR(int32_t, 2))(0x572C0E2FL, 9L), 0x572C0E2FL, 9L, 0x572C0E2FL, 9L);
            int16_t *l_233 = &p_939->g_234;
            uint32_t *l_235 = &p_939->g_109;
            int8_t l_236 = 0x61L;
            uint8_t *l_237 = &l_231;
            uint32_t l_238 = 4294967295UL;
            int32_t *l_240 = &p_939->g_241;
            int32_t *l_243 = (void*)0;
            int32_t *l_244 = (void*)0;
            int32_t *l_245[10];
            int i;
            for (i = 0; i < 10; i++)
                l_245[i] = (void*)0;
            l_246 = (safe_div_func_int64_t_s_s(((65532UL && (safe_unary_minus_func_int16_t_s(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_939->g_199.wwyx)).lo)).lo & (safe_mod_func_uint8_t_u_u((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_202.zxwzxyww)).s13)).even ^ ((safe_lshift_func_int16_t_s_u(l_205, p_939->g_109)) , (((*l_240) |= (((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_206.s9371184b929f27ab)).sc4, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((*l_211) = FAKE_DIVERGE(p_939->local_1_offset, get_local_id(1), 10)), (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u(((*l_237) = ((safe_mod_func_int8_t_s_s((((*l_235) = ((((*l_218) = p_87) < ((*l_233) = ((safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((VECTOR(int32_t, 8))(0L, (((((safe_unary_minus_func_uint16_t_u((0L ^ (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int16_t_s_s((p_88 , p_88), 9)) != ((VECTOR(int8_t, 16))(l_230.zzyzxzzzwyyyxxww)).sb))) & l_202.z), (((p_939->g_58.f0 , l_231) | 0xDFL) >= p_85))), 0x2C31L, l_232.s7, ((VECTOR(int16_t, 4))(7L)), 0x7FA6L)), ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))((-5L)))))).s23, ((VECTOR(int16_t, 2))(3L))))).yyyxxxxxxyxxyxyx, ((VECTOR(int16_t, 16))(0L))))), ((VECTOR(int16_t, 16))(1L)), ((VECTOR(int16_t, 16))((-2L)))))).s0d, ((VECTOR(int16_t, 2))(0L))))).xyyx)).z == p_939->g_11)))) , p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))]) < l_206.sf) == l_202.y) , (-4L)), l_206.sd, ((VECTOR(int32_t, 2))((-4L))), (-1L), 1L, 0x68527ECBL)).s0 == 0x64B05119L), 0x08L)) , l_231), l_232.s3)) ^ p_86))) && 253UL)) , p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))]), p_939->g_11)) < l_236)), l_206.sd)))))), p_85)) != l_238), ((VECTOR(int16_t, 2))(1L)), (-5L))).yyxywxxw)))), p_939->g_199.y, ((VECTOR(int16_t, 4))((-1L))), p_939->g_4, (-6L), 7L)).sa4fa, ((VECTOR(uint16_t, 4))(65531UL))))).odd))).yxyxxxyyyxyyyyyx)).s5 | p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))]) , l_239) != (void*)0) , 0x73F3L) >= p_939->g_comm_values[p_939->tid])) >= p_87))) , l_242) == &p_939->g_4), p_85))) & p_939->g_199.w)))) ^ p_939->g_199.x), p_939->g_4));
            for (l_236 = 0; (l_236 > 19); l_236 = safe_add_func_int64_t_s_s(l_236, 5))
            { /* block id: 97 */
                int16_t *l_249 = (void*)0;
                int32_t l_268[10] = {0x70D8E242L,(-1L),0x40C0448FL,(-1L),0x70D8E242L,0x70D8E242L,(-1L),0x40C0448FL,(-1L),0x70D8E242L};
                int32_t *l_269 = &p_939->g_58.f0;
                int i;
                p_939->g_250 = ((*l_240) = (&p_939->g_219 == l_249));
                (*l_240) = ((((safe_mod_func_uint16_t_u_u(((!p_88) | ((p_939->g_11 == (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(p_939->g_199.w, (p_87 >= ((safe_add_func_int8_t_s_s(((void*)0 == &p_939->g_37), p_87)) & ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(0x584355FBL, 0L, ((*l_269) ^= (((*l_235) &= (((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((((VECTOR(int64_t, 16))(0x0C65C01DDEBC7243L, 0x7FCD342D46C6D654L, (-1L), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x39614A238A759260L, 0x1E24365AD23FAFD4L)).yxyxyxyy)))), ((VECTOR(int64_t, 2))(p_939->g_263.xx)), (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_939->g_11, p_939->g_263.y)), 7)), ((VECTOR(int16_t, 2))(6L)), 0x3163L)).yxyyxxww))).s5127702117064017)).s5 ^ l_268[7]), 0x2DD14F1A5E73E8A2L, 0x2F6EA9D6E6463BC8L)).s0 & p_86), 0x38L)), 1)) && 0x19D96A46L) <= l_231)) , (-1L))), p_88, ((VECTOR(int32_t, 4))(0L)))).s3242775230542035, ((VECTOR(uint32_t, 16))(0x48195563L))))).hi)).s16, ((VECTOR(int64_t, 2))(4L))))).lo)))) < 0UL), 14))) , p_939->g_234)), p_87)) <= 1UL) ^ p_87) || p_939->g_comm_values[p_939->tid]);
                for (l_231 = 1; (l_231 >= 28); l_231++)
                { /* block id: 105 */
                    int32_t **l_272[9][7][4] = {{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}},{{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243},{&l_240,&l_243,&l_244,&l_243}}};
                    int i, j, k;
                    if (p_86)
                        break;
                    p_939->g_241 = (((((VECTOR(uint16_t, 8))(((l_245[0] = &l_246) == (p_939->g_273[5] = &l_246)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_274.yyyyyyxy)).s4651512610712132, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_275.zzxwzzwyywxzxxyw)))), ((VECTOR(uint16_t, 4))(8UL, ((VECTOR(uint16_t, 2))(65526UL, 0xD80EL)), 0x65B6L)).ywwxyyywzwxywzwz)))))).scc)).yxyy)).lo)), 2UL, 65526UL, ((VECTOR(uint16_t, 2))(0UL, 0UL)), 65535UL)).s5 != (p_939->g_263.x > (((safe_add_func_uint16_t_u_u(((void*)0 == l_243), ((0x1FL != 0x8DL) || FAKE_DIVERGE(p_939->global_2_offset, get_global_id(2), 10)))) , (safe_div_func_uint32_t_u_u(l_275.w, 0x7D9147CCL))) && p_87))) , l_231) & l_280);
                    if (p_87)
                        continue;
                    return p_939->g_263.y;
                }
            }
            if (p_88)
                break;
            for (p_86 = 0; (p_86 <= (-23)); p_86 = safe_sub_func_int8_t_s_s(p_86, 4))
            { /* block id: 117 */
                uint64_t l_287 = 0xBC1A27FF796F7AD5L;
                int32_t *l_292 = &p_939->g_58.f0;
                int8_t *l_294 = &p_939->g_37;
                for (p_939->g_212 = 0; (p_939->g_212 != 6); p_939->g_212++)
                { /* block id: 120 */
                    int16_t **l_289 = &l_218;
                    int32_t **l_293 = &l_292;
                    int16_t **l_295 = &l_233;
                    uint32_t *l_296 = &p_939->g_58.f2;
                    if ((((*l_296) = (safe_add_func_uint64_t_u_u(l_287, (((l_288 == ((*l_289) = (l_287 , (GROUP_DIVERGE(0, 1) , &p_86)))) != (((((((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_939->global_1_offset, get_global_id(1), 10), (((*l_293) = l_292) == (void*)0))) , l_294) == (((*l_288) = ((((*l_295) = &p_939->g_250) == &p_86) <= GROUP_DIVERGE(1, 1))) , &p_88)) == p_87) | 0x63L) <= p_88) ^ 1L)) <= 0xC4F5A4C170778449L)))) == p_85))
                    { /* block id: 126 */
                        int32_t **l_298 = &l_243;
                        (*l_298) = (((&p_939->g_109 == &p_939->g_109) ^ (l_297 == (void*)0)) , l_235);
                        (*l_243) |= p_86;
                        return p_939->g_263.x;
                    }
                    else
                    { /* block id: 130 */
                        return p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))];
                    }
                }
                (*l_240) &= (((safe_rshift_func_uint8_t_u_u(p_939->g_199.x, l_287)) , ((VECTOR(uint8_t, 2))(p_939->g_301.s87)).odd) | (-1L));
            }
        }
    }
    (*l_320) |= (((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(0UL, ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(p_939->g_302.xzwywwyxyzxzzyww)).s80, ((VECTOR(uint64_t, 16))(p_939->g_303.yyxxwwwwywwyyzxw)).s3a))), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(5UL, 0x9E0AD510BEB12974L)).yxyx)).zzwxywxwyyyywxyx)).s33e0, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((l_305 = ((VECTOR(uint64_t, 2))(0x468B27A03E262486L, 0x3AD8F4186D41BE16L)).hi), l_231, 0x73B9A5137B5A121EL, 18446744073709551615UL)), (l_275.y ^ 4L), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((FAKE_DIVERGE(p_939->group_0_offset, get_group_id(0), 10) >= (p_939->g_58.f0 >= (safe_div_func_uint8_t_u_u((p_939->l_comm_values[(safe_mod_func_uint32_t_u_u(p_939->tid, 115))] | ((l_305 = ((VECTOR(uint64_t, 16))(p_939->g_312.xzyxyyxwyzwyxwzw)).sb) | (p_939->g_263.x = ((((void*)0 != l_304[9]) ^ ((((((safe_rshift_func_int8_t_s_u((((p_939->g_199.w && ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((safe_mod_func_int64_t_s_s(1L, l_274.y)), (-2L), 1L, 0x2072L)), ((VECTOR(int16_t, 4))(0x0E23L)), ((VECTOR(int16_t, 4))(0x2E68L)), (-8L), l_274.x, 0x1B08L, 0x0FB1L)).s6) > (-1L)) ^ p_86), 6)) , l_317) , 4294967295UL) , (-9L)) ^ 4294967290UL) || p_85)) , l_275.x)))), l_319)))), p_87)), p_939->g_301.s9)), ((VECTOR(uint64_t, 4))(0x016F80EC286B1FB6L)), 0xD92B2E516B0B04B0L, ((VECTOR(uint64_t, 4))(1UL)), 1UL)).s83c1)), ((VECTOR(uint64_t, 4))(0x769B8B89D7D271EAL))))), 7UL)).s57, ((VECTOR(uint64_t, 2))(0xEBA578F8003AE880L))))).even & p_939->g_303.w);
    (*l_321) = &p_939->g_241;
    return p_939->g_4;
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
    __local int64_t l_comm_values[115];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 115; i++)
            l_comm_values[i] = 1;
    struct S1 c_940;
    struct S1* p_939 = &c_940;
    struct S1 c_941 = {
        1L, // p_939->g_4
        0UL, // p_939->g_11
        (VECTOR(uint8_t, 2))(0x91L, 252UL), // p_939->g_21
        (-3L), // p_939->g_25
        1L, // p_939->g_37
        {0x750F898DL}, // p_939->g_58
        0xCF1A457CL, // p_939->g_109
        (VECTOR(int64_t, 4))(0x11F7D206A697142AL, (VECTOR(int64_t, 2))(0x11F7D206A697142AL, (-1L)), (-1L)), // p_939->g_199
        0UL, // p_939->g_212
        (-1L), // p_939->g_219
        0x334DL, // p_939->g_234
        8L, // p_939->g_241
        0L, // p_939->g_250
        (VECTOR(int64_t, 2))((-10L), 0L), // p_939->g_263
        {&p_939->g_241,&p_939->g_241,&p_939->g_241,&p_939->g_241,&p_939->g_241,&p_939->g_241}, // p_939->g_273
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x90L), 0x90L), 0x90L, 253UL, 0x90L, (VECTOR(uint8_t, 2))(253UL, 0x90L), (VECTOR(uint8_t, 2))(253UL, 0x90L), 253UL, 0x90L, 253UL, 0x90L), // p_939->g_301
        (VECTOR(uint64_t, 4))(0x7D608EFB1E424F33L, (VECTOR(uint64_t, 2))(0x7D608EFB1E424F33L, 0xA22650834627BE55L), 0xA22650834627BE55L), // p_939->g_302
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x6C2CBC2341E35141L), 0x6C2CBC2341E35141L), // p_939->g_303
        (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 18446744073709551615UL), 18446744073709551615UL), // p_939->g_312
        {{{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}}},{{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}}},{{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}},{{0x132F7EABL}}}}, // p_939->g_322
        (VECTOR(uint8_t, 2))(1UL, 246UL), // p_939->g_331
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL, (VECTOR(uint8_t, 2))(1UL, 3UL), (VECTOR(uint8_t, 2))(1UL, 3UL), 1UL, 3UL, 1UL, 3UL), // p_939->g_332
        (VECTOR(uint64_t, 8))(0x3B0DE0DC349F0A6AL, (VECTOR(uint64_t, 4))(0x3B0DE0DC349F0A6AL, (VECTOR(uint64_t, 2))(0x3B0DE0DC349F0A6AL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x3B0DE0DC349F0A6AL, 18446744073709551607UL), // p_939->g_340
        65535UL, // p_939->g_346
        0x08L, // p_939->g_348
        (VECTOR(int32_t, 16))(0x6DAC41D2L, (VECTOR(int32_t, 4))(0x6DAC41D2L, (VECTOR(int32_t, 2))(0x6DAC41D2L, (-7L)), (-7L)), (-7L), 0x6DAC41D2L, (-7L), (VECTOR(int32_t, 2))(0x6DAC41D2L, (-7L)), (VECTOR(int32_t, 2))(0x6DAC41D2L, (-7L)), 0x6DAC41D2L, (-7L), 0x6DAC41D2L, (-7L)), // p_939->g_442
        0x0CL, // p_939->g_462
        &p_939->g_462, // p_939->g_461
        &p_939->g_461, // p_939->g_460
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_939->g_476
        (VECTOR(int8_t, 2))((-1L), 0x3FL), // p_939->g_492
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967293UL), 4294967293UL), 4294967293UL, 4294967295UL, 4294967293UL), // p_939->g_500
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L)), // p_939->g_514
        {(-7L),(-7L),(-7L)}, // p_939->g_562
        &p_939->g_562[1], // p_939->g_561
        (VECTOR(int32_t, 4))(0x329ECF59L, (VECTOR(int32_t, 2))(0x329ECF59L, 0x609D6380L), 0x609D6380L), // p_939->g_569
        (VECTOR(uint16_t, 16))(0x4111L, (VECTOR(uint16_t, 4))(0x4111L, (VECTOR(uint16_t, 2))(0x4111L, 65535UL), 65535UL), 65535UL, 0x4111L, 65535UL, (VECTOR(uint16_t, 2))(0x4111L, 65535UL), (VECTOR(uint16_t, 2))(0x4111L, 65535UL), 0x4111L, 65535UL, 0x4111L, 65535UL), // p_939->g_576
        (void*)0, // p_939->g_583
        &p_939->g_583, // p_939->g_582
        (void*)0, // p_939->g_658
        &p_939->g_273[4], // p_939->g_659
        (void*)0, // p_939->g_660
        {&p_939->g_241,&p_939->g_241}, // p_939->g_667
        (VECTOR(uint32_t, 8))(0xB89FF157L, (VECTOR(uint32_t, 4))(0xB89FF157L, (VECTOR(uint32_t, 2))(0xB89FF157L, 0x5B5FA189L), 0x5B5FA189L), 0x5B5FA189L, 0xB89FF157L, 0x5B5FA189L), // p_939->g_681
        {&p_939->g_250,&p_939->g_250,&p_939->g_250,&p_939->g_250,&p_939->g_250}, // p_939->g_735
        &p_939->g_735[1], // p_939->g_734
        (VECTOR(int32_t, 8))(0x445F2481L, (VECTOR(int32_t, 4))(0x445F2481L, (VECTOR(int32_t, 2))(0x445F2481L, 1L), 1L), 1L, 0x445F2481L, 1L), // p_939->g_743
        &p_939->g_273[5], // p_939->g_744
        (VECTOR(int64_t, 16))(0x2020941425665200L, (VECTOR(int64_t, 4))(0x2020941425665200L, (VECTOR(int64_t, 2))(0x2020941425665200L, 1L), 1L), 1L, 0x2020941425665200L, 1L, (VECTOR(int64_t, 2))(0x2020941425665200L, 1L), (VECTOR(int64_t, 2))(0x2020941425665200L, 1L), 0x2020941425665200L, 1L, 0x2020941425665200L, 1L), // p_939->g_760
        (VECTOR(uint64_t, 16))(0x8A682A543946A5BEL, (VECTOR(uint64_t, 4))(0x8A682A543946A5BEL, (VECTOR(uint64_t, 2))(0x8A682A543946A5BEL, 0UL), 0UL), 0UL, 0x8A682A543946A5BEL, 0UL, (VECTOR(uint64_t, 2))(0x8A682A543946A5BEL, 0UL), (VECTOR(uint64_t, 2))(0x8A682A543946A5BEL, 0UL), 0x8A682A543946A5BEL, 0UL, 0x8A682A543946A5BEL, 0UL), // p_939->g_790
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_939->g_824
        &p_939->g_824[1], // p_939->g_823
        (VECTOR(int32_t, 2))(1L, 0x402B56B2L), // p_939->g_849
        0L, // p_939->g_864
        (VECTOR(int16_t, 4))(0x34FEL, (VECTOR(int16_t, 2))(0x34FEL, 0L), 0L), // p_939->g_932
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1D5457E3A9BFF8C2L), 0x1D5457E3A9BFF8C2L), 0x1D5457E3A9BFF8C2L, 18446744073709551615UL, 0x1D5457E3A9BFF8C2L), // p_939->g_937
        (VECTOR(int8_t, 8))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x4AL), 0x4AL), 0x4AL, 0x66L, 0x4AL), // p_939->g_938
        0, // p_939->v_collective
        sequence_input[get_global_id(0)], // p_939->global_0_offset
        sequence_input[get_global_id(1)], // p_939->global_1_offset
        sequence_input[get_global_id(2)], // p_939->global_2_offset
        sequence_input[get_local_id(0)], // p_939->local_0_offset
        sequence_input[get_local_id(1)], // p_939->local_1_offset
        sequence_input[get_local_id(2)], // p_939->local_2_offset
        sequence_input[get_group_id(0)], // p_939->group_0_offset
        sequence_input[get_group_id(1)], // p_939->group_1_offset
        sequence_input[get_group_id(2)], // p_939->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 115)), permutations[0][get_linear_local_id()])), // p_939->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_940 = c_941;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_939);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_939->g_4, "p_939->g_4", print_hash_value);
    transparent_crc(p_939->g_11, "p_939->g_11", print_hash_value);
    transparent_crc(p_939->g_21.x, "p_939->g_21.x", print_hash_value);
    transparent_crc(p_939->g_21.y, "p_939->g_21.y", print_hash_value);
    transparent_crc(p_939->g_25, "p_939->g_25", print_hash_value);
    transparent_crc(p_939->g_37, "p_939->g_37", print_hash_value);
    transparent_crc(p_939->g_109, "p_939->g_109", print_hash_value);
    transparent_crc(p_939->g_199.x, "p_939->g_199.x", print_hash_value);
    transparent_crc(p_939->g_199.y, "p_939->g_199.y", print_hash_value);
    transparent_crc(p_939->g_199.z, "p_939->g_199.z", print_hash_value);
    transparent_crc(p_939->g_199.w, "p_939->g_199.w", print_hash_value);
    transparent_crc(p_939->g_212, "p_939->g_212", print_hash_value);
    transparent_crc(p_939->g_219, "p_939->g_219", print_hash_value);
    transparent_crc(p_939->g_234, "p_939->g_234", print_hash_value);
    transparent_crc(p_939->g_241, "p_939->g_241", print_hash_value);
    transparent_crc(p_939->g_250, "p_939->g_250", print_hash_value);
    transparent_crc(p_939->g_263.x, "p_939->g_263.x", print_hash_value);
    transparent_crc(p_939->g_263.y, "p_939->g_263.y", print_hash_value);
    transparent_crc(p_939->g_301.s0, "p_939->g_301.s0", print_hash_value);
    transparent_crc(p_939->g_301.s1, "p_939->g_301.s1", print_hash_value);
    transparent_crc(p_939->g_301.s2, "p_939->g_301.s2", print_hash_value);
    transparent_crc(p_939->g_301.s3, "p_939->g_301.s3", print_hash_value);
    transparent_crc(p_939->g_301.s4, "p_939->g_301.s4", print_hash_value);
    transparent_crc(p_939->g_301.s5, "p_939->g_301.s5", print_hash_value);
    transparent_crc(p_939->g_301.s6, "p_939->g_301.s6", print_hash_value);
    transparent_crc(p_939->g_301.s7, "p_939->g_301.s7", print_hash_value);
    transparent_crc(p_939->g_301.s8, "p_939->g_301.s8", print_hash_value);
    transparent_crc(p_939->g_301.s9, "p_939->g_301.s9", print_hash_value);
    transparent_crc(p_939->g_301.sa, "p_939->g_301.sa", print_hash_value);
    transparent_crc(p_939->g_301.sb, "p_939->g_301.sb", print_hash_value);
    transparent_crc(p_939->g_301.sc, "p_939->g_301.sc", print_hash_value);
    transparent_crc(p_939->g_301.sd, "p_939->g_301.sd", print_hash_value);
    transparent_crc(p_939->g_301.se, "p_939->g_301.se", print_hash_value);
    transparent_crc(p_939->g_301.sf, "p_939->g_301.sf", print_hash_value);
    transparent_crc(p_939->g_302.x, "p_939->g_302.x", print_hash_value);
    transparent_crc(p_939->g_302.y, "p_939->g_302.y", print_hash_value);
    transparent_crc(p_939->g_302.z, "p_939->g_302.z", print_hash_value);
    transparent_crc(p_939->g_302.w, "p_939->g_302.w", print_hash_value);
    transparent_crc(p_939->g_303.x, "p_939->g_303.x", print_hash_value);
    transparent_crc(p_939->g_303.y, "p_939->g_303.y", print_hash_value);
    transparent_crc(p_939->g_303.z, "p_939->g_303.z", print_hash_value);
    transparent_crc(p_939->g_303.w, "p_939->g_303.w", print_hash_value);
    transparent_crc(p_939->g_312.x, "p_939->g_312.x", print_hash_value);
    transparent_crc(p_939->g_312.y, "p_939->g_312.y", print_hash_value);
    transparent_crc(p_939->g_312.z, "p_939->g_312.z", print_hash_value);
    transparent_crc(p_939->g_312.w, "p_939->g_312.w", print_hash_value);
    transparent_crc(p_939->g_331.x, "p_939->g_331.x", print_hash_value);
    transparent_crc(p_939->g_331.y, "p_939->g_331.y", print_hash_value);
    transparent_crc(p_939->g_332.s0, "p_939->g_332.s0", print_hash_value);
    transparent_crc(p_939->g_332.s1, "p_939->g_332.s1", print_hash_value);
    transparent_crc(p_939->g_332.s2, "p_939->g_332.s2", print_hash_value);
    transparent_crc(p_939->g_332.s3, "p_939->g_332.s3", print_hash_value);
    transparent_crc(p_939->g_332.s4, "p_939->g_332.s4", print_hash_value);
    transparent_crc(p_939->g_332.s5, "p_939->g_332.s5", print_hash_value);
    transparent_crc(p_939->g_332.s6, "p_939->g_332.s6", print_hash_value);
    transparent_crc(p_939->g_332.s7, "p_939->g_332.s7", print_hash_value);
    transparent_crc(p_939->g_332.s8, "p_939->g_332.s8", print_hash_value);
    transparent_crc(p_939->g_332.s9, "p_939->g_332.s9", print_hash_value);
    transparent_crc(p_939->g_332.sa, "p_939->g_332.sa", print_hash_value);
    transparent_crc(p_939->g_332.sb, "p_939->g_332.sb", print_hash_value);
    transparent_crc(p_939->g_332.sc, "p_939->g_332.sc", print_hash_value);
    transparent_crc(p_939->g_332.sd, "p_939->g_332.sd", print_hash_value);
    transparent_crc(p_939->g_332.se, "p_939->g_332.se", print_hash_value);
    transparent_crc(p_939->g_332.sf, "p_939->g_332.sf", print_hash_value);
    transparent_crc(p_939->g_340.s0, "p_939->g_340.s0", print_hash_value);
    transparent_crc(p_939->g_340.s1, "p_939->g_340.s1", print_hash_value);
    transparent_crc(p_939->g_340.s2, "p_939->g_340.s2", print_hash_value);
    transparent_crc(p_939->g_340.s3, "p_939->g_340.s3", print_hash_value);
    transparent_crc(p_939->g_340.s4, "p_939->g_340.s4", print_hash_value);
    transparent_crc(p_939->g_340.s5, "p_939->g_340.s5", print_hash_value);
    transparent_crc(p_939->g_340.s6, "p_939->g_340.s6", print_hash_value);
    transparent_crc(p_939->g_340.s7, "p_939->g_340.s7", print_hash_value);
    transparent_crc(p_939->g_346, "p_939->g_346", print_hash_value);
    transparent_crc(p_939->g_348, "p_939->g_348", print_hash_value);
    transparent_crc(p_939->g_442.s0, "p_939->g_442.s0", print_hash_value);
    transparent_crc(p_939->g_442.s1, "p_939->g_442.s1", print_hash_value);
    transparent_crc(p_939->g_442.s2, "p_939->g_442.s2", print_hash_value);
    transparent_crc(p_939->g_442.s3, "p_939->g_442.s3", print_hash_value);
    transparent_crc(p_939->g_442.s4, "p_939->g_442.s4", print_hash_value);
    transparent_crc(p_939->g_442.s5, "p_939->g_442.s5", print_hash_value);
    transparent_crc(p_939->g_442.s6, "p_939->g_442.s6", print_hash_value);
    transparent_crc(p_939->g_442.s7, "p_939->g_442.s7", print_hash_value);
    transparent_crc(p_939->g_442.s8, "p_939->g_442.s8", print_hash_value);
    transparent_crc(p_939->g_442.s9, "p_939->g_442.s9", print_hash_value);
    transparent_crc(p_939->g_442.sa, "p_939->g_442.sa", print_hash_value);
    transparent_crc(p_939->g_442.sb, "p_939->g_442.sb", print_hash_value);
    transparent_crc(p_939->g_442.sc, "p_939->g_442.sc", print_hash_value);
    transparent_crc(p_939->g_442.sd, "p_939->g_442.sd", print_hash_value);
    transparent_crc(p_939->g_442.se, "p_939->g_442.se", print_hash_value);
    transparent_crc(p_939->g_442.sf, "p_939->g_442.sf", print_hash_value);
    transparent_crc(p_939->g_462, "p_939->g_462", print_hash_value);
    transparent_crc(p_939->g_476.s0, "p_939->g_476.s0", print_hash_value);
    transparent_crc(p_939->g_476.s1, "p_939->g_476.s1", print_hash_value);
    transparent_crc(p_939->g_476.s2, "p_939->g_476.s2", print_hash_value);
    transparent_crc(p_939->g_476.s3, "p_939->g_476.s3", print_hash_value);
    transparent_crc(p_939->g_476.s4, "p_939->g_476.s4", print_hash_value);
    transparent_crc(p_939->g_476.s5, "p_939->g_476.s5", print_hash_value);
    transparent_crc(p_939->g_476.s6, "p_939->g_476.s6", print_hash_value);
    transparent_crc(p_939->g_476.s7, "p_939->g_476.s7", print_hash_value);
    transparent_crc(p_939->g_476.s8, "p_939->g_476.s8", print_hash_value);
    transparent_crc(p_939->g_476.s9, "p_939->g_476.s9", print_hash_value);
    transparent_crc(p_939->g_476.sa, "p_939->g_476.sa", print_hash_value);
    transparent_crc(p_939->g_476.sb, "p_939->g_476.sb", print_hash_value);
    transparent_crc(p_939->g_476.sc, "p_939->g_476.sc", print_hash_value);
    transparent_crc(p_939->g_476.sd, "p_939->g_476.sd", print_hash_value);
    transparent_crc(p_939->g_476.se, "p_939->g_476.se", print_hash_value);
    transparent_crc(p_939->g_476.sf, "p_939->g_476.sf", print_hash_value);
    transparent_crc(p_939->g_492.x, "p_939->g_492.x", print_hash_value);
    transparent_crc(p_939->g_492.y, "p_939->g_492.y", print_hash_value);
    transparent_crc(p_939->g_500.s0, "p_939->g_500.s0", print_hash_value);
    transparent_crc(p_939->g_500.s1, "p_939->g_500.s1", print_hash_value);
    transparent_crc(p_939->g_500.s2, "p_939->g_500.s2", print_hash_value);
    transparent_crc(p_939->g_500.s3, "p_939->g_500.s3", print_hash_value);
    transparent_crc(p_939->g_500.s4, "p_939->g_500.s4", print_hash_value);
    transparent_crc(p_939->g_500.s5, "p_939->g_500.s5", print_hash_value);
    transparent_crc(p_939->g_500.s6, "p_939->g_500.s6", print_hash_value);
    transparent_crc(p_939->g_500.s7, "p_939->g_500.s7", print_hash_value);
    transparent_crc(p_939->g_514.s0, "p_939->g_514.s0", print_hash_value);
    transparent_crc(p_939->g_514.s1, "p_939->g_514.s1", print_hash_value);
    transparent_crc(p_939->g_514.s2, "p_939->g_514.s2", print_hash_value);
    transparent_crc(p_939->g_514.s3, "p_939->g_514.s3", print_hash_value);
    transparent_crc(p_939->g_514.s4, "p_939->g_514.s4", print_hash_value);
    transparent_crc(p_939->g_514.s5, "p_939->g_514.s5", print_hash_value);
    transparent_crc(p_939->g_514.s6, "p_939->g_514.s6", print_hash_value);
    transparent_crc(p_939->g_514.s7, "p_939->g_514.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_939->g_562[i], "p_939->g_562[i]", print_hash_value);

    }
    transparent_crc(p_939->g_569.x, "p_939->g_569.x", print_hash_value);
    transparent_crc(p_939->g_569.y, "p_939->g_569.y", print_hash_value);
    transparent_crc(p_939->g_569.z, "p_939->g_569.z", print_hash_value);
    transparent_crc(p_939->g_569.w, "p_939->g_569.w", print_hash_value);
    transparent_crc(p_939->g_576.s0, "p_939->g_576.s0", print_hash_value);
    transparent_crc(p_939->g_576.s1, "p_939->g_576.s1", print_hash_value);
    transparent_crc(p_939->g_576.s2, "p_939->g_576.s2", print_hash_value);
    transparent_crc(p_939->g_576.s3, "p_939->g_576.s3", print_hash_value);
    transparent_crc(p_939->g_576.s4, "p_939->g_576.s4", print_hash_value);
    transparent_crc(p_939->g_576.s5, "p_939->g_576.s5", print_hash_value);
    transparent_crc(p_939->g_576.s6, "p_939->g_576.s6", print_hash_value);
    transparent_crc(p_939->g_576.s7, "p_939->g_576.s7", print_hash_value);
    transparent_crc(p_939->g_576.s8, "p_939->g_576.s8", print_hash_value);
    transparent_crc(p_939->g_576.s9, "p_939->g_576.s9", print_hash_value);
    transparent_crc(p_939->g_576.sa, "p_939->g_576.sa", print_hash_value);
    transparent_crc(p_939->g_576.sb, "p_939->g_576.sb", print_hash_value);
    transparent_crc(p_939->g_576.sc, "p_939->g_576.sc", print_hash_value);
    transparent_crc(p_939->g_576.sd, "p_939->g_576.sd", print_hash_value);
    transparent_crc(p_939->g_576.se, "p_939->g_576.se", print_hash_value);
    transparent_crc(p_939->g_576.sf, "p_939->g_576.sf", print_hash_value);
    transparent_crc(p_939->g_681.s0, "p_939->g_681.s0", print_hash_value);
    transparent_crc(p_939->g_681.s1, "p_939->g_681.s1", print_hash_value);
    transparent_crc(p_939->g_681.s2, "p_939->g_681.s2", print_hash_value);
    transparent_crc(p_939->g_681.s3, "p_939->g_681.s3", print_hash_value);
    transparent_crc(p_939->g_681.s4, "p_939->g_681.s4", print_hash_value);
    transparent_crc(p_939->g_681.s5, "p_939->g_681.s5", print_hash_value);
    transparent_crc(p_939->g_681.s6, "p_939->g_681.s6", print_hash_value);
    transparent_crc(p_939->g_681.s7, "p_939->g_681.s7", print_hash_value);
    transparent_crc(p_939->g_743.s0, "p_939->g_743.s0", print_hash_value);
    transparent_crc(p_939->g_743.s1, "p_939->g_743.s1", print_hash_value);
    transparent_crc(p_939->g_743.s2, "p_939->g_743.s2", print_hash_value);
    transparent_crc(p_939->g_743.s3, "p_939->g_743.s3", print_hash_value);
    transparent_crc(p_939->g_743.s4, "p_939->g_743.s4", print_hash_value);
    transparent_crc(p_939->g_743.s5, "p_939->g_743.s5", print_hash_value);
    transparent_crc(p_939->g_743.s6, "p_939->g_743.s6", print_hash_value);
    transparent_crc(p_939->g_743.s7, "p_939->g_743.s7", print_hash_value);
    transparent_crc(p_939->g_760.s0, "p_939->g_760.s0", print_hash_value);
    transparent_crc(p_939->g_760.s1, "p_939->g_760.s1", print_hash_value);
    transparent_crc(p_939->g_760.s2, "p_939->g_760.s2", print_hash_value);
    transparent_crc(p_939->g_760.s3, "p_939->g_760.s3", print_hash_value);
    transparent_crc(p_939->g_760.s4, "p_939->g_760.s4", print_hash_value);
    transparent_crc(p_939->g_760.s5, "p_939->g_760.s5", print_hash_value);
    transparent_crc(p_939->g_760.s6, "p_939->g_760.s6", print_hash_value);
    transparent_crc(p_939->g_760.s7, "p_939->g_760.s7", print_hash_value);
    transparent_crc(p_939->g_760.s8, "p_939->g_760.s8", print_hash_value);
    transparent_crc(p_939->g_760.s9, "p_939->g_760.s9", print_hash_value);
    transparent_crc(p_939->g_760.sa, "p_939->g_760.sa", print_hash_value);
    transparent_crc(p_939->g_760.sb, "p_939->g_760.sb", print_hash_value);
    transparent_crc(p_939->g_760.sc, "p_939->g_760.sc", print_hash_value);
    transparent_crc(p_939->g_760.sd, "p_939->g_760.sd", print_hash_value);
    transparent_crc(p_939->g_760.se, "p_939->g_760.se", print_hash_value);
    transparent_crc(p_939->g_760.sf, "p_939->g_760.sf", print_hash_value);
    transparent_crc(p_939->g_790.s0, "p_939->g_790.s0", print_hash_value);
    transparent_crc(p_939->g_790.s1, "p_939->g_790.s1", print_hash_value);
    transparent_crc(p_939->g_790.s2, "p_939->g_790.s2", print_hash_value);
    transparent_crc(p_939->g_790.s3, "p_939->g_790.s3", print_hash_value);
    transparent_crc(p_939->g_790.s4, "p_939->g_790.s4", print_hash_value);
    transparent_crc(p_939->g_790.s5, "p_939->g_790.s5", print_hash_value);
    transparent_crc(p_939->g_790.s6, "p_939->g_790.s6", print_hash_value);
    transparent_crc(p_939->g_790.s7, "p_939->g_790.s7", print_hash_value);
    transparent_crc(p_939->g_790.s8, "p_939->g_790.s8", print_hash_value);
    transparent_crc(p_939->g_790.s9, "p_939->g_790.s9", print_hash_value);
    transparent_crc(p_939->g_790.sa, "p_939->g_790.sa", print_hash_value);
    transparent_crc(p_939->g_790.sb, "p_939->g_790.sb", print_hash_value);
    transparent_crc(p_939->g_790.sc, "p_939->g_790.sc", print_hash_value);
    transparent_crc(p_939->g_790.sd, "p_939->g_790.sd", print_hash_value);
    transparent_crc(p_939->g_790.se, "p_939->g_790.se", print_hash_value);
    transparent_crc(p_939->g_790.sf, "p_939->g_790.sf", print_hash_value);
    transparent_crc(p_939->g_849.x, "p_939->g_849.x", print_hash_value);
    transparent_crc(p_939->g_849.y, "p_939->g_849.y", print_hash_value);
    transparent_crc(p_939->g_864, "p_939->g_864", print_hash_value);
    transparent_crc(p_939->g_932.x, "p_939->g_932.x", print_hash_value);
    transparent_crc(p_939->g_932.y, "p_939->g_932.y", print_hash_value);
    transparent_crc(p_939->g_932.z, "p_939->g_932.z", print_hash_value);
    transparent_crc(p_939->g_932.w, "p_939->g_932.w", print_hash_value);
    transparent_crc(p_939->g_937.s0, "p_939->g_937.s0", print_hash_value);
    transparent_crc(p_939->g_937.s1, "p_939->g_937.s1", print_hash_value);
    transparent_crc(p_939->g_937.s2, "p_939->g_937.s2", print_hash_value);
    transparent_crc(p_939->g_937.s3, "p_939->g_937.s3", print_hash_value);
    transparent_crc(p_939->g_937.s4, "p_939->g_937.s4", print_hash_value);
    transparent_crc(p_939->g_937.s5, "p_939->g_937.s5", print_hash_value);
    transparent_crc(p_939->g_937.s6, "p_939->g_937.s6", print_hash_value);
    transparent_crc(p_939->g_937.s7, "p_939->g_937.s7", print_hash_value);
    transparent_crc(p_939->g_938.s0, "p_939->g_938.s0", print_hash_value);
    transparent_crc(p_939->g_938.s1, "p_939->g_938.s1", print_hash_value);
    transparent_crc(p_939->g_938.s2, "p_939->g_938.s2", print_hash_value);
    transparent_crc(p_939->g_938.s3, "p_939->g_938.s3", print_hash_value);
    transparent_crc(p_939->g_938.s4, "p_939->g_938.s4", print_hash_value);
    transparent_crc(p_939->g_938.s5, "p_939->g_938.s5", print_hash_value);
    transparent_crc(p_939->g_938.s6, "p_939->g_938.s6", print_hash_value);
    transparent_crc(p_939->g_938.s7, "p_939->g_938.s7", print_hash_value);
    transparent_crc(p_939->v_collective, "p_939->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_939->l_special_values[i], "p_939->l_special_values[i]", print_hash_value);
    transparent_crc(p_939->l_comm_values[get_linear_local_id()], "p_939->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_939->g_comm_values[get_linear_group_id() * 115 + get_linear_local_id()], "p_939->g_comm_values[get_linear_group_id() * 115 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
