// --atomics 27 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,42,2 -l 2,42,1
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

__constant uint32_t permutations[10][84] = {
{11,82,72,1,41,60,83,68,24,23,47,16,75,27,39,26,12,46,37,0,45,56,49,28,53,48,31,8,74,9,5,34,15,73,10,81,38,44,43,52,13,42,58,32,14,59,55,18,20,64,7,25,76,6,2,50,70,57,35,29,51,36,17,69,79,22,4,77,65,40,66,78,61,62,19,21,30,54,67,80,3,33,71,63}, // permutation 0
{65,19,22,56,39,72,75,2,16,66,45,40,49,61,6,20,76,14,9,21,62,33,18,11,71,3,12,0,60,10,46,68,13,67,69,64,8,78,17,77,43,24,73,80,52,81,27,53,37,36,79,57,28,70,5,63,51,74,44,48,4,58,15,23,59,35,25,82,41,50,26,83,38,54,30,32,1,42,47,34,55,31,7,29}, // permutation 1
{76,32,56,65,63,57,50,74,29,4,45,1,18,51,30,68,82,12,11,24,22,37,69,9,64,77,61,52,35,47,8,79,27,16,80,67,23,7,39,21,15,48,26,55,40,6,13,36,31,0,25,75,42,44,10,71,2,59,46,20,14,60,72,49,73,41,5,43,83,66,33,78,54,81,70,17,62,38,34,19,53,28,3,58}, // permutation 2
{25,49,43,0,1,32,42,63,40,18,68,30,15,7,34,13,53,48,24,38,3,12,28,51,74,47,26,22,77,55,44,58,83,59,33,52,17,31,73,71,10,46,56,19,50,75,16,37,54,27,61,76,20,69,14,72,36,57,67,62,60,39,2,8,65,5,29,6,66,41,81,11,21,79,80,9,35,82,45,64,70,78,23,4}, // permutation 3
{33,62,77,16,69,11,58,6,40,42,80,38,43,7,10,34,52,83,65,82,2,27,29,49,14,60,24,28,23,55,57,59,50,61,12,45,37,47,64,30,0,39,18,15,53,22,1,75,68,26,72,3,25,46,8,51,54,76,13,31,19,63,79,81,36,41,70,17,35,20,73,44,4,56,21,32,66,67,5,9,74,48,71,78}, // permutation 4
{38,54,56,3,19,16,36,21,32,61,69,7,49,2,48,17,67,14,46,12,82,33,22,53,52,9,70,65,6,64,62,72,10,71,74,29,51,24,39,1,73,80,23,15,79,60,40,78,18,42,25,41,77,76,31,55,34,68,30,35,44,8,59,20,75,37,28,58,5,63,45,50,26,83,11,57,0,43,27,4,81,13,47,66}, // permutation 5
{36,73,26,57,34,10,13,65,37,12,28,44,63,78,8,35,38,5,11,46,43,71,21,62,59,20,47,51,53,60,61,77,69,4,32,15,67,80,33,82,9,24,76,45,39,25,22,64,72,0,68,83,3,56,1,48,42,66,18,29,54,75,7,31,40,81,55,41,52,70,30,16,49,74,17,2,50,79,27,14,19,58,6,23}, // permutation 6
{57,48,29,63,53,23,39,4,34,41,79,32,70,28,27,69,60,50,17,62,77,55,14,26,43,58,0,7,16,80,9,6,78,25,81,61,75,82,71,45,67,3,47,59,66,21,76,40,73,15,44,64,54,20,37,18,46,49,11,42,52,83,24,5,22,56,8,19,51,2,36,30,1,74,35,13,72,38,33,65,12,10,31,68}, // permutation 7
{8,26,42,35,20,64,51,31,25,70,46,24,15,73,32,48,59,74,6,41,69,49,34,80,18,82,57,22,53,55,56,16,47,19,33,75,23,77,13,44,7,38,29,76,9,12,68,45,83,52,81,60,28,50,62,67,66,43,11,0,72,58,3,30,1,27,4,40,79,37,17,10,63,39,54,36,71,65,2,78,61,14,21,5}, // permutation 8
{69,6,0,33,21,57,74,29,68,8,18,24,80,75,19,56,77,3,27,61,70,34,13,1,11,43,54,39,37,16,47,82,15,12,22,78,2,30,67,4,42,59,72,62,64,26,71,48,83,44,28,14,23,60,35,17,66,32,10,50,55,40,53,36,5,73,9,58,38,51,20,79,7,49,25,81,41,52,31,46,76,65,45,63} // permutation 9
};

// Seed: 4044941386

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int8_t  f0;
   volatile int64_t  f1;
   int64_t  f2;
   volatile int64_t  f3;
   volatile uint64_t  f4;
   volatile int64_t  f5;
   uint32_t  f6;
   uint64_t  f7;
};

struct S1 {
    int32_t g_23;
    uint8_t g_49[10];
    int32_t **g_78;
    struct S0 g_92;
    uint64_t g_101;
    int64_t g_102;
    uint8_t g_105;
    volatile VECTOR(int64_t, 8) g_106;
    uint16_t g_118;
    volatile uint8_t g_121;
    uint32_t g_129;
    uint16_t g_130;
    struct S0 *g_133[1];
    struct S0 ** volatile g_132;
    int8_t g_154;
    int32_t g_156;
    int32_t * volatile g_155;
    uint8_t g_158;
    VECTOR(int8_t, 4) g_177;
    volatile VECTOR(int8_t, 4) g_178;
    uint64_t g_184;
    struct S0 g_185;
    struct S0 g_186[7];
    VECTOR(uint64_t, 4) g_193;
    VECTOR(uint64_t, 4) g_194;
    int16_t g_201[7];
    volatile VECTOR(int8_t, 4) g_219;
    volatile VECTOR(uint8_t, 4) g_220;
    VECTOR(uint16_t, 2) g_222;
    volatile uint32_t g_233;
    uint64_t g_241[3][5][8];
    VECTOR(uint16_t, 4) g_282;
    VECTOR(int32_t, 16) g_294;
    VECTOR(int16_t, 8) g_336;
    uint8_t g_337[1];
    volatile uint16_t g_383;
    volatile uint16_t *g_382[6][6][5];
    volatile uint16_t ** volatile g_381;
    volatile uint16_t ** volatile *g_380;
    volatile uint16_t ** volatile **g_379;
    volatile VECTOR(int32_t, 4) g_387;
    VECTOR(int16_t, 2) g_394;
    uint8_t *g_398;
    uint8_t **g_397;
    uint32_t g_400;
    struct S0 g_437;
    volatile VECTOR(uint32_t, 8) g_466;
    int32_t g_472;
    int32_t g_474;
    struct S0 g_482;
    volatile struct S0 g_483;
    int32_t *** volatile g_513[2][4][1];
    VECTOR(uint32_t, 8) g_527;
    volatile VECTOR(int32_t, 4) g_555;
    VECTOR(uint8_t, 2) g_571;
    VECTOR(uint8_t, 2) g_574;
    int16_t *g_583[8][4][7];
    int16_t ** volatile g_582;
    VECTOR(uint64_t, 16) g_588;
    uint16_t ****g_598[6];
    int32_t *g_617;
    int32_t ** volatile g_616[5];
    volatile struct S0 g_637;
    struct S0 g_640;
    int64_t *g_647;
    struct S0 g_689;
    uint32_t *g_701;
    uint32_t * volatile *g_700;
    VECTOR(int16_t, 8) g_707;
    volatile struct S0 g_719;
    volatile struct S0 * volatile g_720[2];
    volatile struct S0 * volatile g_721;
    struct S0 g_734;
    uint16_t g_757;
    struct S0 g_762;
    int32_t g_768;
    struct S0 g_773;
    uint64_t *g_777;
    uint64_t **g_776;
    VECTOR(uint8_t, 16) g_791;
    volatile VECTOR(uint16_t, 16) g_797;
    struct S0 ** volatile g_834;
    uint64_t g_916;
    int32_t ** volatile g_936;
    int32_t * volatile g_945;
    int32_t ** volatile g_946;
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
int32_t  func_1(struct S1 * p_947);
int32_t * func_7(uint32_t  p_8, int64_t  p_9, int32_t * p_10, uint64_t  p_11, struct S1 * p_947);
int8_t  func_12(int64_t  p_13, uint64_t  p_14, uint8_t  p_15, int32_t  p_16, int64_t  p_17, struct S1 * p_947);
struct S0  func_19(int32_t * p_20, uint64_t  p_21, struct S1 * p_947);
int8_t  func_33(int32_t * p_34, int32_t * p_35, struct S1 * p_947);
int32_t * func_52(int32_t ** p_53, int32_t ** p_54, uint8_t * p_55, uint32_t  p_56, uint64_t  p_57, struct S1 * p_947);
int32_t ** func_58(uint8_t  p_59, uint8_t * p_60, struct S1 * p_947);
uint8_t * func_62(int32_t * p_63, int32_t  p_64, uint16_t  p_65, int32_t ** p_66, struct S1 * p_947);
int32_t * func_67(int32_t ** p_68, int32_t ** p_69, int32_t ** p_70, uint8_t * p_71, struct S1 * p_947);
int32_t ** func_72(int32_t ** p_73, int32_t ** p_74, uint32_t  p_75, uint32_t  p_76, int32_t ** p_77, struct S1 * p_947);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_947->g_617 p_947->g_156 p_947->g_945 p_947->g_397 p_947->g_398 p_947->g_121 p_947->g_118 p_947->g_129 p_947->g_130 p_947->g_946 p_947->g_92.f5
 * writes: p_947->g_156 p_947->g_23 p_947->g_121 p_947->g_129 p_947->g_130 p_947->g_617
 */
int32_t  func_1(struct S1 * p_947)
{ /* block id: 4 */
    uint32_t l_2 = 0x4EBB0CB8L;
    int32_t *l_944 = (void*)0;
    ++l_2;
    for (l_2 = 0; (l_2 <= 51); l_2 = safe_add_func_uint32_t_u_u(l_2, 7))
    { /* block id: 8 */
        uint32_t l_18 = 0x509CF13EL;
        int32_t *l_22 = &p_947->g_23;
        int32_t *l_36 = &p_947->g_23;
        int32_t *l_37[7][4][6] = {{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}},{{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23},{&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23,&p_947->g_23}}};
        int32_t **l_935 = (void*)0;
        int i, j, k;
        (1 + 1);
    }
    (*p_947->g_945) = ((*p_947->g_617) &= l_2);
    (*p_947->g_946) = func_67(&l_944, &l_944, &l_944, (*p_947->g_397), p_947);
    return p_947->g_92.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_773.f6 p_947->g_768
 * writes: p_947->g_773.f6 p_947->g_185.f7 p_947->g_768
 */
int32_t * func_7(uint32_t  p_8, int64_t  p_9, int32_t * p_10, uint64_t  p_11, struct S1 * p_947)
{ /* block id: 372 */
    int8_t l_932 = 0x7EL;
    for (p_947->g_773.f6 = 27; (p_947->g_773.f6 == 44); p_947->g_773.f6 = safe_add_func_int32_t_s_s(p_947->g_773.f6, 1))
    { /* block id: 375 */
        uint32_t l_913 = 0UL;
        for (p_947->g_185.f7 = 0; (p_947->g_185.f7 < 45); p_947->g_185.f7++)
        { /* block id: 378 */
            return p_10;
        }
        (*p_10) = (*p_10);
    }
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_185.f2 p_947->g_154 p_947->g_791 p_947->g_797 p_947->g_617 p_947->g_156 p_947->g_777 p_947->g_186.f7 p_947->g_647 p_947->g_102 p_947->g_186.f2 p_947->g_379 p_947->g_380 p_947->g_474 p_947->g_397 p_947->g_398 p_947->g_23 p_947->g_773.f7 p_947->g_776 p_947->g_185.f7 p_947->g_719.f6
 * writes: p_947->g_776 p_947->g_185.f2 p_947->g_154 p_947->g_156 p_947->g_105 p_947->g_158 p_947->g_23 p_947->g_773.f7
 */
int8_t  func_12(int64_t  p_13, uint64_t  p_14, uint8_t  p_15, int32_t  p_16, int64_t  p_17, struct S1 * p_947)
{ /* block id: 296 */
    uint64_t *l_775 = &p_947->g_185.f7;
    uint64_t **l_774 = &l_775;
    int32_t l_786 = 0x17705A81L;
    VECTOR(uint16_t, 2) l_798 = (VECTOR(uint16_t, 2))(0xE10CL, 65530UL);
    VECTOR(uint16_t, 8) l_799 = (VECTOR(uint16_t, 8))(0x7A1EL, (VECTOR(uint16_t, 4))(0x7A1EL, (VECTOR(uint16_t, 2))(0x7A1EL, 0x134DL), 0x134DL), 0x134DL, 0x7A1EL, 0x134DL);
    VECTOR(int16_t, 4) l_800 = (VECTOR(int16_t, 4))(0x6FECL, (VECTOR(int16_t, 2))(0x6FECL, (-3L)), (-3L));
    int32_t l_802 = (-8L);
    VECTOR(uint8_t, 8) l_821 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x79L), 0x79L), 0x79L, 1UL, 0x79L);
    uint64_t **l_882[7];
    int32_t **l_886[10] = {&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617};
    uint8_t l_900 = 0xB1L;
    uint8_t l_903 = 0x91L;
    int i;
    for (i = 0; i < 7; i++)
        l_882[i] = &l_775;
    p_947->g_776 = l_774;
    for (p_947->g_185.f2 = (-4); (p_947->g_185.f2 > (-6)); p_947->g_185.f2--)
    { /* block id: 300 */
        int8_t *l_780 = (void*)0;
        int8_t *l_781 = (void*)0;
        int8_t *l_782 = (void*)0;
        int8_t *l_783 = &p_947->g_154;
        int8_t *l_784 = (void*)0;
        int8_t *l_785[3][7];
        VECTOR(uint16_t, 16) l_796 = (VECTOR(uint16_t, 16))(0x9801L, (VECTOR(uint16_t, 4))(0x9801L, (VECTOR(uint16_t, 2))(0x9801L, 65535UL), 65535UL), 65535UL, 0x9801L, 65535UL, (VECTOR(uint16_t, 2))(0x9801L, 65535UL), (VECTOR(uint16_t, 2))(0x9801L, 65535UL), 0x9801L, 65535UL, 0x9801L, 65535UL);
        int16_t *l_801 = (void*)0;
        int64_t l_815 = 0x1B06BB7A2DCA22A5L;
        int32_t *l_816 = &p_947->g_23;
        VECTOR(uint16_t, 8) l_827 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 6UL), 6UL), 6UL, 65535UL, 6UL);
        uint16_t *l_871[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t **l_870 = &l_871[2];
        uint16_t ***l_869[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_785[i][j] = (void*)0;
        }
        (*l_816) ^= (((l_786 &= ((*l_783) = 0x0EL)) && (((*l_783) &= ((p_17 >= p_13) , ((void*)0 == &p_947->g_400))) < l_786)) && (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(p_947->g_791.s7742fcf4d34765b4)).sc || ((**p_947->g_397) = (l_786 & (safe_lshift_func_int16_t_s_u((((((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(l_796.s11d543d803c03540)).s2fad, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_947->g_797.sfe)), 0x0849L, 0xB879L, ((VECTOR(uint16_t, 2))(l_798.xx)), 65535UL, ((VECTOR(uint16_t, 4))(65534UL, 0xC619L, 0x7895L, 0x2010L)), 0x9A42L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_799.s72)))), 0xEF38L, 0UL)).s21df))).zzwwzzzyxxzyzzwy)).sd == (l_802 = ((VECTOR(int16_t, 4))(l_800.zwzy)).x)) ^ ((safe_sub_func_int16_t_s_s(p_17, (safe_rshift_func_uint8_t_u_s(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xF0EB56F9L, 4294967291UL)), 4294967295UL, ((((((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((((*p_947->g_617) = ((safe_div_func_int32_t_s_s((((+(safe_add_func_int32_t_s_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((((*p_947->g_617) == l_815) , p_13) <= p_14), 246UL, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 2))(249UL)), ((VECTOR(uint8_t, 4))(0xDFL)))).hi)).s7 != 0x87L), p_16))) , (void*)0) == (void*)0), p_14)) > l_796.s9)) | (-1L)) > (*p_947->g_777)), (*p_947->g_647))), p_17)) ^ FAKE_DIVERGE(p_947->local_1_offset, get_local_id(1), 10)) != 0xB3FAL) < 0xECL) , (*p_947->g_379)) == (void*)0), ((VECTOR(uint32_t, 4))(4294967289UL)))).s6032063241226602)).s6 , (*p_947->g_647)) != l_796.s0), p_947->g_474)))) == 65535UL)) & 0x3CA3L) > p_13) & p_15), 10))))), 5L)), p_14)));
        for (p_947->g_773.f7 = (-8); (p_947->g_773.f7 == 21); p_947->g_773.f7 = safe_add_func_int32_t_s_s(p_947->g_773.f7, 2))
        { /* block id: 310 */
            int64_t *l_824 = (void*)0;
            int32_t l_825 = 0L;
            int16_t *l_826[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t *l_884 = &p_947->g_49[2];
            uint8_t **l_883 = &l_884;
            int32_t **l_885 = &p_947->g_617;
            int32_t **l_887[3][6][1] = {{{&l_816},{&l_816},{&l_816},{&l_816},{&l_816},{&l_816}},{{&l_816},{&l_816},{&l_816},{&l_816},{&l_816},{&l_816}},{{&l_816},{&l_816},{&l_816},{&l_816},{&l_816},{&l_816}}};
            int i, j, k;
            (1 + 1);
        }
        (*p_947->g_617) ^= ((((*p_947->g_647) | (l_816 != (void*)0)) >= (safe_mod_func_int64_t_s_s(p_15, 1L))) == ((0xAC91L <= ((p_14 , (*l_816)) | (safe_add_func_int32_t_s_s((((((*p_947->g_647) <= (**p_947->g_776)) != 255UL) , 0x6E4E5960L) , p_13), (-1L))))) & 0x42BA58FAB3BB960DL));
        if ((*p_947->g_617))
            continue;
    }
    --l_900;
    --l_903;
    return p_947->g_719.f6;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_23 p_947->g_comm_values p_947->g_49 p_947->g_78 p_947->g_92.f6 p_947->l_comm_values p_947->g_92.f2 p_947->g_121 p_947->g_118 p_947->g_129 p_947->g_130 p_947->g_105 p_947->g_132 p_947->g_92 p_947->g_154 p_947->g_101 p_947->g_155 p_947->g_156 p_947->g_158 p_947->g_185 p_947->g_193 p_947->g_194 p_947->g_219 p_947->g_220 p_947->g_222 p_947->g_233 p_947->g_241 p_947->g_106 p_947->g_177 p_947->g_201 p_947->g_282 p_947->g_294 p_947->g_178 p_947->g_336 p_947->g_102 p_947->g_337 p_947->g_379 p_947->g_387 p_947->g_186.f6 p_947->g_398 p_947->g_437 p_947->g_466 p_947->g_380 p_947->g_381 p_947->g_382 p_947->g_482 p_947->g_527 p_947->g_617 p_947->g_637 p_947->g_640 p_947->g_582 p_947->g_583 p_947->g_472 p_947->g_689 p_947->g_588 p_947->g_700 p_947->g_719 p_947->g_721 p_947->g_734 p_947->g_186.f7 p_947->g_647 p_947->g_186.f2 p_947->g_762 p_947->g_773
 * writes: p_947->g_23 p_947->g_49 p_947->g_118 p_947->g_121 p_947->g_129 p_947->g_130 p_947->g_133 p_947->g_92 p_947->g_102 p_947->g_154 p_947->g_105 p_947->g_156 p_947->g_186 p_947->g_101 p_947->g_201 p_947->g_233 p_947->g_241 p_947->g_158 p_947->g_294 p_947->l_comm_values p_947->g_337 p_947->g_155 p_947->g_185.f2 p_947->g_472 p_947->g_78 p_947->g_177 p_947->g_482.f6 p_947->g_184 p_947->g_647 p_947->g_483 p_947->g_482.f2 p_947->g_527 p_947->g_757
 */
struct S0  func_19(int32_t * p_20, uint64_t  p_21, struct S1 * p_947)
{ /* block id: 11 */
    int32_t *l_50[2];
    int32_t l_61[6][8][2] = {{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}},{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}},{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}},{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}},{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}},{{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L},{(-1L),0x74DCCE65L}}};
    int32_t l_83 = (-10L);
    int32_t *l_85 = &l_61[3][2][0];
    int32_t **l_84 = &l_85;
    uint8_t *l_157 = &p_947->g_158;
    VECTOR(int32_t, 16) l_187 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    int16_t *l_202 = &p_947->g_201[1];
    struct S0 **l_215 = &p_947->g_133[0];
    VECTOR(int8_t, 2) l_218 = (VECTOR(int8_t, 2))(0x2AL, 0x6CL);
    uint64_t *l_228 = &p_947->g_186[2].f7;
    VECTOR(uint16_t, 2) l_264 = (VECTOR(uint16_t, 2))(1UL, 65530UL);
    int16_t l_293 = 0x5CD4L;
    uint64_t l_351 = 18446744073709551615UL;
    uint16_t **l_358 = (void*)0;
    uint16_t ***l_357 = &l_358;
    VECTOR(int8_t, 4) l_451 = (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 1L), 1L);
    int32_t l_477 = 0L;
    int16_t l_478 = 0x34B9L;
    int32_t l_492 = 0x1FE83338L;
    int8_t *l_495 = (void*)0;
    int8_t *l_496 = (void*)0;
    int8_t *l_497 = (void*)0;
    int8_t *l_498 = (void*)0;
    int8_t *l_499 = (void*)0;
    int8_t *l_500 = (void*)0;
    int8_t *l_501 = (void*)0;
    int8_t *l_502 = (void*)0;
    int8_t *l_503 = (void*)0;
    int8_t *l_504 = (void*)0;
    int8_t *l_505 = &p_947->g_154;
    int64_t *l_506 = &p_947->g_102;
    uint16_t l_511 = 0x1268L;
    uint64_t *l_512[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_514 = &p_947->g_78;
    VECTOR(uint64_t, 4) l_569 = (VECTOR(uint64_t, 4))(0x2D791E0D07604E48L, (VECTOR(uint64_t, 2))(0x2D791E0D07604E48L, 18446744073709551610UL), 18446744073709551610UL);
    VECTOR(uint8_t, 2) l_575 = (VECTOR(uint8_t, 2))(1UL, 0x70L);
    VECTOR(uint8_t, 4) l_577 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xBAL), 0xBAL);
    uint16_t ****l_599[6] = {&l_357,&l_357,&l_357,&l_357,&l_357,&l_357};
    int8_t l_629[4][10][6] = {{{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L}},{{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L}},{{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L}},{{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L},{1L,(-3L),0x32L,(-3L),1L,0L}}};
    int64_t l_630 = 0x600236CE10C0C9EAL;
    uint32_t l_632 = 0xE051C1DEL;
    VECTOR(int16_t, 2) l_666 = (VECTOR(int16_t, 2))(0x53D7L, 0x5ED2L);
    VECTOR(int8_t, 16) l_673 = (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x13L), 0x13L), 0x13L, 0x17L, 0x13L, (VECTOR(int8_t, 2))(0x17L, 0x13L), (VECTOR(int8_t, 2))(0x17L, 0x13L), 0x17L, 0x13L, 0x17L, 0x13L);
    VECTOR(int8_t, 2) l_674 = (VECTOR(int8_t, 2))(0x2EL, 0x5BL);
    uint8_t ***l_684 = &p_947->g_397;
    VECTOR(uint32_t, 2) l_690 = (VECTOR(uint32_t, 2))(4294967293UL, 0x1F060D96L);
    uint32_t **l_702[6][1];
    uint64_t l_716 = 1UL;
    VECTOR(int8_t, 8) l_730 = (VECTOR(int8_t, 8))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x4EL), 0x4EL), 0x4EL, 0x76L, 0x4EL);
    int32_t l_735[4];
    int8_t l_758 = 0x13L;
    VECTOR(int32_t, 2) l_763 = (VECTOR(int32_t, 2))(0x25B260BEL, 0x34E4C058L);
    int16_t l_769 = 0x1C42L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_50[i] = &p_947->g_23;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_702[i][j] = &p_947->g_701;
    }
    for (i = 0; i < 4; i++)
        l_735[i] = 1L;
    for (p_947->g_23 = 0; (p_947->g_23 <= (-24)); p_947->g_23 = safe_sub_func_uint32_t_u_u(p_947->g_23, 6))
    { /* block id: 14 */
        int8_t l_47[2][2][4] = {{{0x19L,0x19L,0x19L,0x19L},{0x19L,0x19L,0x19L,0x19L}},{{0x19L,0x19L,0x19L,0x19L},{0x19L,0x19L,0x19L,0x19L}}};
        uint8_t *l_48 = &p_947->g_49[2];
        int32_t **l_51 = &l_50[0];
        int16_t *l_203 = (void*)0;
        VECTOR(int16_t, 8) l_216 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2688L), 0x2688L), 0x2688L, 0L, 0x2688L);
        VECTOR(int8_t, 16) l_217 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
        int32_t l_231 = 0x1A9F9E3EL;
        int32_t l_239 = 0x6D68367CL;
        int32_t l_240 = 0x017E480CL;
        VECTOR(int32_t, 2) l_295 = (VECTOR(int32_t, 2))(0L, 0x77E66606L);
        VECTOR(int64_t, 2) l_309 = (VECTOR(int64_t, 2))(2L, (-8L));
        VECTOR(int16_t, 8) l_335 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int16_t l_343 = (-2L);
        int64_t l_388 = 1L;
        VECTOR(uint16_t, 8) l_392 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x2832L), 0x2832L), 0x2832L, 2UL, 0x2832L);
        VECTOR(int16_t, 2) l_396 = (VECTOR(int16_t, 2))(0x7150L, 8L);
        VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))((-1L), 0x4AD7364BL);
        uint64_t *l_461[10] = {&p_947->g_92.f7,&p_947->g_241[0][4][7],&p_947->g_92.f7,&p_947->g_92.f7,&p_947->g_241[0][4][7],&p_947->g_92.f7,&p_947->g_92.f7,&p_947->g_241[0][4][7],&p_947->g_92.f7,&p_947->g_92.f7};
        uint32_t l_479 = 4294967295UL;
        int i, j, k;
        if ((p_947->g_comm_values[p_947->tid] && ((safe_add_func_uint8_t_u_u(((*l_48) ^= l_47[0][0][1]), func_33(((*l_51) = l_50[0]), ((*l_84) = func_52(func_58(l_61[3][2][0], func_62(func_67(func_72(p_947->g_78, &p_20, (safe_sub_func_int64_t_s_s((l_61[3][2][0] , (l_83 = (safe_sub_func_uint32_t_u_u(p_21, p_947->g_23)))), 0L)), p_947->g_23, l_84, p_947), l_51, p_947->g_78, &p_947->g_105, p_947), p_947->g_92.f6, p_947->g_105, l_51, p_947), p_947), l_51, l_157, p_21, p_947->g_158, p_947)), p_947))) < 0x536C698EL)))
        { /* block id: 55 */
            uint8_t **l_213 = &l_157;
            VECTOR(int16_t, 4) l_221 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5DFAL), 0x5DFAL);
            int32_t l_232[9][3][9] = {{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}},{{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L},{0x49236B7EL,8L,0x3A9C7EA6L,0x3A9C7EA6L,8L,0x49236B7EL,(-1L),1L,0x0B304DB0L}}};
            int8_t l_238 = 5L;
            uint64_t l_266[1];
            VECTOR(int64_t, 4) l_310 = (VECTOR(int64_t, 4))(0x4722C54A044D0107L, (VECTOR(int64_t, 2))(0x4722C54A044D0107L, 0L), 0L);
            int16_t l_330 = (-1L);
            uint16_t *l_356 = &p_947->g_130;
            uint16_t ***l_359 = (void*)0;
            uint64_t *l_436 = &p_947->g_185.f7;
            uint32_t l_460 = 4294967295UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_266[i] = 0UL;
            if (((VECTOR(int32_t, 8))(l_187.sc01dfa8a)).s0)
            { /* block id: 56 */
                uint16_t *l_190 = &p_947->g_118;
                uint64_t *l_195 = (void*)0;
                int16_t *l_200 = &p_947->g_201[1];
                int16_t **l_204 = &l_203;
                int16_t **l_205 = (void*)0;
                int16_t **l_206 = (void*)0;
                int16_t *l_208[6];
                int16_t **l_207 = &l_208[3];
                uint8_t l_209 = 0xE6L;
                VECTOR(int64_t, 4) l_212 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x25621921C0D93688L), 0x25621921C0D93688L);
                VECTOR(uint16_t, 2) l_223 = (VECTOR(uint16_t, 2))(0UL, 0x706BL);
                int8_t *l_248 = (void*)0;
                int8_t *l_249 = &p_947->g_154;
                VECTOR(uint16_t, 2) l_254 = (VECTOR(uint16_t, 2))(6UL, 65528UL);
                uint16_t **l_262[6][8] = {{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190},{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190},{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190},{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190},{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190},{&l_190,&l_190,&l_190,&l_190,(void*)0,&l_190,&l_190,&l_190}};
                uint16_t ***l_261[9][7][4] = {{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}},{{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]},{&l_262[5][6],&l_262[2][1],&l_262[4][2],&l_262[2][1]}}};
                uint16_t ****l_263 = &l_261[7][5][2];
                uint16_t l_265 = 0xB73BL;
                int32_t l_267 = 2L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_208[i] = (void*)0;
                if (((((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(18446744073709551615UL, ((++(*l_190)) | 0UL), ((VECTOR(uint64_t, 2))(p_947->g_193.zy)), ((p_947->g_101 |= ((VECTOR(uint64_t, 8))(p_947->g_194.yzwwzxzw)).s6) < ((safe_mul_func_int16_t_s_s(p_21, (((safe_mul_func_int16_t_s_s(((((*l_200) = 0x3894L) , l_202) != ((*l_207) = ((*l_204) = l_203))), l_209)) , &p_947->g_133[0]) != (void*)0))) || (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_212.yzywxyywwwxyywzx)).sc, p_947->g_49[2])))), 0xD8D44CAB2CF204F4L, 0UL, 0xA1730DD10957E858L)).s3552071367017646)).even, ((VECTOR(uint64_t, 8))(0UL))))).s4 == p_21) , 0x0E1ABA94L))
                { /* block id: 62 */
                    uint8_t ***l_214 = &l_213;
                    (*l_214) = (p_21 , l_213);
                }
                else
                { /* block id: 64 */
                    uint64_t *l_229 = &p_947->g_186[2].f7;
                    int32_t **l_230[3][4][4] = {{{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]}},{{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]}},{{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]},{&l_50[1],&l_50[0],(void*)0,&l_50[0]}}};
                    uint16_t **l_237 = &l_190;
                    uint16_t ***l_236 = &l_237;
                    int i, j, k;
                    p_947->g_156 ^= (1L > ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(1L, (((void*)0 != l_215) , p_947->g_185.f4), 0x3AD2L, ((VECTOR(int16_t, 4))(l_216.s0653)), 1L)).s3640666021066621, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(l_217.s2b)).xyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_218.yyyxyxyxxyxxyyyx)))).s583e, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_947->g_219.yw)))).xyxx))).wwzywwxw, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_947->g_220.wzxx)).odd)))).yxyyxyxy))))).hi, ((VECTOR(int16_t, 8))(l_221.wxxxxzzw)).lo))).xyxzwwxwyyxwyzxx))).sea, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x4E62L)).xxxxxyyyxyxyxxyx)).saf, ((VECTOR(int16_t, 2))((-1L), 0x28ACL))))).yyxxxyxx))))).s1 & ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(0x7810L, 65534UL, 7UL, ((VECTOR(uint16_t, 4))(p_947->g_222.xxxx)), 0xAD46L)), ((VECTOR(uint16_t, 8))(l_223.yxyxxxxx))))).s7273504003250600, ((VECTOR(uint16_t, 8))((((((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s((l_228 != l_229), l_209)), p_21)) , (l_230[1][0][2] == p_947->g_78)) ^ p_947->g_92.f2) && (**l_51)) , GROUP_DIVERGE(1, 1)), ((VECTOR(uint16_t, 2))(0xBF94L)), 1UL, ((VECTOR(uint16_t, 2))(65535UL)), 0xAA03L, 0UL)).s7705066674525164))), ((VECTOR(uint16_t, 16))(0x7751L))))).sdd, ((VECTOR(uint16_t, 2))(0xE4CAL))))).hi) <= 0x3B1D7BB2L));
                    p_947->g_233++;
                    (*l_236) = (void*)0;
                }
                --p_947->g_241[0][4][7];
                l_267 &= ((safe_div_func_uint8_t_u_u((((**l_51) <= ((*l_249) = (safe_lshift_func_uint16_t_u_u(p_21, p_21)))) == ((safe_rshift_func_int16_t_s_u(((*l_200) ^= (((VECTOR(uint16_t, 4))(l_254.yyyx)).y && ((p_21 >= ((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((p_21 | (((safe_mod_func_uint64_t_u_u((p_947->g_106.s2 , (((**l_213) = (((((*l_263) = l_261[4][0][3]) != (void*)0) <= ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(l_264.xxxyyyxxyxxxxxxx)).odd, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))((**l_51), ((VECTOR(uint8_t, 8))(0x28L)), 251UL, ((VECTOR(uint8_t, 2))(1UL)), 2UL, ((VECTOR(uint8_t, 2))(0xF3L)), 1UL)).sa32a, ((VECTOR(uint8_t, 4))(0UL))))).wzxzxzyx, ((VECTOR(uint16_t, 8))(0xD19EL))))).s2215217536004323, ((VECTOR(uint16_t, 16))(0xE884L))))).sd) > l_265)) > p_21)), 0x0D7DC54451A0EA62L)) || p_947->g_92.f2) || 0x9FL)), 7)), p_947->g_177.w)) , 7UL)) > 0x4C1FL))), p_947->g_comm_values[p_947->tid])) , 0xA8DCC954L)), p_21)) | l_266[0]);
                if ((*p_947->g_155))
                    continue;
            }
            else
            { /* block id: 76 */
                int32_t **l_268 = (void*)0;
                struct S0 *l_281 = (void*)0;
                int64_t *l_283[8] = {&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2,&p_947->g_186[2].f2};
                uint8_t l_284 = 255UL;
                VECTOR(int32_t, 8) l_296 = (VECTOR(int32_t, 8))(0x1B48C027L, (VECTOR(int32_t, 4))(0x1B48C027L, (VECTOR(int32_t, 2))(0x1B48C027L, 0x175C88BAL), 0x175C88BAL), 0x175C88BAL, 0x1B48C027L, 0x175C88BAL);
                uint16_t *l_301[7][1];
                int32_t ***l_302 = &l_51;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_301[i][j] = &p_947->g_130;
                }
                p_20 = func_52(p_947->g_78, l_268, &p_947->g_105, (safe_sub_func_uint32_t_u_u(((0x7358A45DB5CEE289L ^ (safe_rshift_func_uint8_t_u_u(((*l_157) &= (l_232[5][0][0] = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_228) = (safe_lshift_func_uint8_t_u_s((((*l_215) = (void*)0) != l_281), 7))), (l_284 ^= (((p_947->g_130 = ((VECTOR(uint16_t, 8))(p_947->g_282.zzyyzwzz)).s4) > p_947->g_92.f3) , 0x6B6732C53F82FAE3L)))), (safe_sub_func_uint32_t_u_u(4294967286UL, p_21)))) , 0x4CCAL), 9)))), 1))) == (-9L)), (**l_51))), p_947->g_201[4], p_947);
                (*l_84) = func_67(((*l_302) = ((safe_div_func_uint64_t_u_u(((*l_228) = (((VECTOR(int16_t, 16))((p_21 , (p_21 || (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_293 >= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(0x22CD79FEL, 1L, 0x07327DD6L, 0L)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_947->g_294.s5f)).yyxy)).lo))), ((VECTOR(int32_t, 8))(l_295.xxxyyxxy)).s02, ((VECTOR(int32_t, 2))(l_296.s12))))), 0x4EFCD2D9L, 0x74E72488L)).x), 7)), p_21)))), p_947->g_185.f7, ((VECTOR(int16_t, 4))(p_947->g_185.f0, ((safe_lshift_func_uint16_t_u_u((2L > (safe_mul_func_uint16_t_u_u(((*l_85) = ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 2))(8UL, 0xBEL)), 246UL, p_947->g_121, 0x54L, 7UL, 251UL)).even, ((VECTOR(uint8_t, 4))(0UL))))).w), 0x185CL))), p_21)) != 65535UL), (-4L), 0x180CL)), ((VECTOR(int16_t, 8))((-8L))), 0x03F7L, 0x1803L)).sc != 0x5072L)), l_266[0])) , (void*)0)), p_947->g_78, p_947->g_78, &p_947->g_105, p_947);
                if ((p_947->g_337[0] &= ((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_232[8][1][6] > ((safe_mul_func_uint16_t_u_u((((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(0x61925E8790BD5B5CL, 2L, ((VECTOR(int64_t, 4))(l_309.xyxy)), 0L, 1L)).s55, ((VECTOR(int64_t, 2))(0x1B65AE4B5D248291L, 0x3185BCDF6CC9C5A3L))))).yxyx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_310.yzxwxwwwyxzyxwxy)))))).sc611, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(7L, (p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))] = (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(p_21, (safe_unary_minus_func_int8_t_s((safe_add_func_int64_t_s_s(((p_947->g_294.sb &= (safe_div_func_uint8_t_u_u(((p_947->g_178.z ^ (safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((l_221.w <= ((GROUP_DIVERGE(2, 1) , (((*l_228) = (((((((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(((safe_sub_func_uint16_t_u_u((((*p_20) |= (safe_add_func_int64_t_s_s(l_330, (safe_sub_func_uint64_t_u_u(0UL, ((((VECTOR(int16_t, 8))((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_335.s11620220)).s72)), 0x4A0FL, 0x00B2L)).lo)).odd, 8)), ((VECTOR(int16_t, 2))(0x523BL, 0x2C44L)), ((VECTOR(int16_t, 2))((-1L), 1L)), (-1L), (-9L), 0x04AAL)).s6 | ((VECTOR(int16_t, 8))(p_947->g_336.s46703723)).s2) & (p_21 < l_221.x))))))) >= (&p_947->g_78 == &p_947->g_78)), 0x3280L)) >= (-4L)), ((VECTOR(uint16_t, 2))(5UL)), 0x93BEL, 0x05BCL, p_947->g_92.f7, 7UL, 65535UL)), ((VECTOR(uint16_t, 8))(65535UL))))).s1454061074671030, (uint16_t)p_947->g_49[5], (uint16_t)p_947->g_201[2]))).sb ^ GROUP_DIVERGE(2, 1)) , p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))]) | p_21) < p_947->g_102) , GROUP_DIVERGE(0, 1))) & p_21)) && GROUP_DIVERGE(0, 1))) < 0x1A0CL), p_947->g_336.s7)) < p_947->g_201[1]), p_21))) >= 0x98L), 250UL))) > 1L), p_21)))))) || 1UL), p_21))), 0x70AFDD5D7F8E9E42L, p_21, (-4L), ((VECTOR(int64_t, 2))(0x3CD8DEA53E3237F5L)), (-1L))).s1573161047604713, ((VECTOR(int64_t, 16))(0x1AD50CB38BDF08E9L)), ((VECTOR(int64_t, 16))(0x3EADC1CBE06B8D2BL))))).hi)).hi))).x & 0x10BD2ADCC10259AAL), p_947->g_156)) && l_232[7][1][7])), 253UL)), 3)) == p_21)))
                { /* block id: 93 */
                    uint8_t l_346 = 1UL;
                    for (p_947->g_118 = 22; (p_947->g_118 > 14); p_947->g_118 = safe_sub_func_int64_t_s_s(p_947->g_118, 9))
                    { /* block id: 96 */
                        uint16_t l_340 = 0xCCF3L;
                        int32_t l_344 = 0x2F954FF1L;
                        int32_t l_345 = 0x0FCF190EL;
                        ++l_340;
                        l_346++;
                        (*l_84) = p_20;
                    }
                }
                else
                { /* block id: 101 */
                    p_947->g_155 = p_20;
                    for (p_947->g_130 = 0; (p_947->g_130 < 1); p_947->g_130++)
                    { /* block id: 105 */
                        (*l_84) = (*l_84);
                    }
                    if ((*p_20))
                        break;
                }
                l_351++;
            }
            l_232[7][1][7] ^= 0x0A081937L;
            if ((((*l_356) |= p_947->g_92.f7) > ((p_21 , l_357) != (l_359 = l_359))))
            { /* block id: 115 */
                VECTOR(uint8_t, 4) l_371 = (VECTOR(uint8_t, 4))(0x68L, (VECTOR(uint8_t, 2))(0x68L, 4UL), 4UL);
                uint16_t **l_376 = &l_356;
                uint32_t *l_384 = &p_947->g_129;
                uint8_t **l_403 = &p_947->g_398;
                int32_t l_404[4][2][4] = {{{(-1L),0L,0x182D7605L,7L},{(-1L),0L,0x182D7605L,7L}},{{(-1L),0L,0x182D7605L,7L},{(-1L),0L,0x182D7605L,7L}},{{(-1L),0L,0x182D7605L,7L},{(-1L),0L,0x182D7605L,7L}},{{(-1L),0L,0x182D7605L,7L},{(-1L),0L,0x182D7605L,7L}}};
                int16_t l_407 = 0L;
                VECTOR(uint16_t, 8) l_430 = (VECTOR(uint16_t, 8))(0x3294L, (VECTOR(uint16_t, 4))(0x3294L, (VECTOR(uint16_t, 2))(0x3294L, 0xF709L), 0xF709L), 0xF709L, 0x3294L, 0xF709L);
                uint64_t *l_435 = &p_947->g_186[2].f7;
                VECTOR(int64_t, 4) l_450 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
                int64_t l_453[10][8] = {{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L},{1L,5L,1L,1L,5L,1L,1L,5L}};
                int i, j, k;
                if ((atomic_inc(&p_947->g_atomic_input[27 * get_linear_group_id() + 2]) == 7))
                { /* block id: 117 */
                    int32_t *l_360 = (void*)0;
                    int32_t *l_361 = (void*)0;
                    uint64_t l_362 = 0xA886B4C2A5C60533L;
                    int64_t l_363 = 0x740C2729B185F9EBL;
                    int16_t l_364 = (-1L);
                    uint32_t l_365 = 1UL;
                    int16_t l_366 = 0x2A74L;
                    l_361 = l_360;
                    l_363 &= l_362;
                    l_365 |= l_364;
                    if (l_366)
                    { /* block id: 121 */
                        VECTOR(uint32_t, 8) l_367 = (VECTOR(uint32_t, 8))(0x3599655FL, (VECTOR(uint32_t, 4))(0x3599655FL, (VECTOR(uint32_t, 2))(0x3599655FL, 0xF14233DAL), 0xF14233DAL), 0xF14233DAL, 0x3599655FL, 0xF14233DAL);
                        int16_t l_368 = 0x42C5L;
                        int i;
                        l_368 |= (((VECTOR(uint32_t, 8))(l_367.s21637511)).s6 , 8L);
                    }
                    else
                    { /* block id: 123 */
                        int32_t l_370 = 0x236EA435L;
                        int32_t *l_369 = &l_370;
                        l_369 = (l_360 = (l_361 = (void*)0));
                    }
                    unsigned int result = 0;
                    result += l_362;
                    result += l_363;
                    result += l_364;
                    result += l_365;
                    result += l_366;
                    atomic_add(&p_947->g_special_values[27 * get_linear_group_id() + 2], result);
                }
                else
                { /* block id: 128 */
                    (1 + 1);
                }
                p_947->g_294.s3 &= (((((VECTOR(uint8_t, 8))(l_371.zzxxyzwx)).s2 <= (safe_rshift_func_int8_t_s_u(((((((safe_mul_func_int16_t_s_s((0L <= (p_947->g_92.f2 = (l_376 != (void*)0))), (safe_sub_func_uint32_t_u_u((!((((((&l_357 != p_947->g_379) != ((*l_384)++)) , &p_947->g_102) == (((VECTOR(int32_t, 8))(p_947->g_387.xzwyzwwx)).s1 , &p_947->g_102)) | (0x36L == (((p_947->g_186[2].f6 < l_266[0]) != p_947->g_201[1]) & l_371.y))) ^ p_947->g_185.f6)), 1UL)))) , l_388) >= p_947->g_201[1]) ^ p_21) < 0x935AL) ^ 5L), p_21))) , p_21) > l_371.x);
                for (p_947->g_101 = (-8); (p_947->g_101 >= 1); ++p_947->g_101)
                { /* block id: 136 */
                    VECTOR(uint16_t, 2) l_391 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
                    VECTOR(int16_t, 16) l_395 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x0038L), 0x0038L), 0x0038L, (-9L), 0x0038L, (VECTOR(int16_t, 2))((-9L), 0x0038L), (VECTOR(int16_t, 2))((-9L), 0x0038L), (-9L), 0x0038L, (-9L), 0x0038L);
                    uint32_t *l_399 = &p_947->g_400;
                    int32_t l_412 = 0x4FF1A4C7L;
                    int i;
                    l_404[0][0][0] &= (p_21 < ((VECTOR(uint16_t, 16))(p_21, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(l_391.yxyyxxxyxyxxxyxy)).lo, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(l_392.s6126)).zwzwxwwywyxxzyzy, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((safe_unary_minus_func_uint32_t_u(4294967286UL)) <= (-1L)), (!((FAKE_DIVERGE(p_947->global_1_offset, get_global_id(1), 10) <= p_947->g_105) && (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(p_947->g_394.yyxyyyyy)).hi, ((VECTOR(int16_t, 4))(0x78CBL, ((VECTOR(int16_t, 2))(l_395.sd4)), (-6L)))))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_396.yxyxxyxx)).s64)).yyyyyxyyyyyyyxyx)).s3791))).xyyyyzwz)).s4 != (l_221.z && (p_947->g_397 == ((++(*l_399)) , ((*p_947->g_155) , l_403))))))), 0xDDA3L, 1UL)).wxwyzzxy)).odd, ((VECTOR(uint16_t, 4))(9UL)), ((VECTOR(uint16_t, 4))(65534UL))))).yxwxxxzxzwzyxywx, ((VECTOR(uint16_t, 16))(2UL))))).s20, ((VECTOR(uint16_t, 2))(0x4F2EL))))).yyyyxxyy)), ((VECTOR(uint16_t, 8))(4UL))))), ((VECTOR(uint16_t, 2))(0xDF89L)), ((VECTOR(uint16_t, 4))(0x296EL)), 65529UL)).s2);
                    p_947->g_294.se ^= (safe_mod_func_int32_t_s_s(l_407, (safe_sub_func_int16_t_s_s((((l_412 |= (!(safe_add_func_int16_t_s_s(p_21, p_21)))) <= (+((p_947->g_233 > l_232[5][2][1]) != (safe_mul_func_uint16_t_u_u(p_21, p_947->g_193.y))))) < ((**l_376) |= (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_947->g_177.x || ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint8_t_u_u(((**l_213) &= 9UL), l_407)))) == l_395.s8)) ^ p_21), p_947->g_154)), l_266[0])))), GROUP_DIVERGE(2, 1)))));
                    (*l_84) = p_20;
                }
                if ((((safe_lshift_func_int8_t_s_s(0x2EL, (((0x1CL || ((((((VECTOR(int32_t, 8))(l_424.yyxyyxxy)).s0 == p_947->g_121) , &p_947->g_133[0]) != (GROUP_DIVERGE(2, 1) , ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((**l_376)++) && ((VECTOR(uint16_t, 4))(l_430.s4700)).x))), 0xBFL)) , &p_947->g_133[0]))) && ((l_436 = ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(7L, 0x4AF9L)), ((0x7B8B9EB6L > l_404[0][0][0]) || FAKE_DIVERGE(p_947->local_2_offset, get_local_id(2), 10)))) , l_435)) != &l_351))) , (void*)0) == &p_947->g_380))) , (*l_403)) != l_157))
                { /* block id: 147 */
                    (*l_84) = &l_404[3][1][2];
                    return p_947->g_437;
                }
                else
                { /* block id: 150 */
                    uint16_t *l_452 = &p_947->g_118;
                    p_947->g_294.s3 &= ((safe_add_func_uint8_t_u_u(l_238, (safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((((&l_293 == &l_330) < (l_453[7][0] = (safe_lshift_func_int16_t_s_s((l_266[0] == (safe_lshift_func_uint16_t_u_s(p_21, (safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_450.xx)).xxyxyyxx)).s54)))).odd , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_451.xx)), 0x6FL, 0x55L)), (((l_452 == (*l_376)) <= 1UL) || ((p_21 , 0UL) , p_947->g_437.f0)), 0L, p_21, p_21, p_947->g_437.f3, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x60L)), 0x59L, 0x01L, 9L)), ((VECTOR(int8_t, 16))(9L))))).even))).s2701252675507560)).s4)))))), p_947->g_437.f2)))) >= 0xB37F59FBL), p_21)) < 0UL), l_232[7][1][7])))) ^ (-1L));
                }
            }
            else
            { /* block id: 154 */
                uint64_t l_458 = 1UL;
                uint16_t *l_462 = (void*)0;
                uint16_t **l_463 = &l_356;
                int32_t *l_471 = &p_947->g_472;
                int32_t *l_473[1][10] = {{(void*)0,&p_947->g_474,(void*)0,(void*)0,&p_947->g_474,(void*)0,(void*)0,&p_947->g_474,(void*)0,(void*)0}};
                int32_t l_475 = 1L;
                int32_t l_476 = 0L;
                int i, j;
                for (p_947->g_185.f2 = 11; (p_947->g_185.f2 == 12); p_947->g_185.f2 = safe_add_func_uint64_t_u_u(p_947->g_185.f2, 8))
                { /* block id: 157 */
                    int16_t l_459[8] = {0x771DL,0x771DL,0x771DL,0x771DL,0x771DL,0x771DL,0x771DL,0x771DL};
                    int i;
                    l_460 ^= (safe_sub_func_uint16_t_u_u(65532UL, ((*l_202) ^= (l_459[4] = l_458))));
                }
                p_947->g_155 = (p_20 = p_20);
                l_476 ^= (((&l_351 == l_461[7]) >= (l_266[0] != ((((*l_463) = l_462) != (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x4E66L, (safe_mod_func_uint16_t_u_u((GROUP_DIVERGE(0, 1) & (!((&p_20 != &p_947->g_155) < ((l_475 = ((*l_471) = (((((VECTOR(uint32_t, 4))(p_947->g_466.s7013)).y || (+((safe_mod_func_uint64_t_u_u(18446744073709551608UL, (safe_mod_func_int64_t_s_s(l_221.w, p_947->g_220.w)))) , p_947->g_194.x))) > 4294967286UL) <= 5L))) , l_232[6][1][1])))), 0x6DB0L)), 65530UL, 1UL)).yzxzwxywwyzwxyxz)), ((VECTOR(uint16_t, 16))(2UL))))), ((VECTOR(uint16_t, 16))(0xF49EL)), ((VECTOR(uint16_t, 16))(65535UL))))).sbc, ((VECTOR(uint16_t, 2))(65528UL))))), ((VECTOR(uint16_t, 2))(0xCABAL))))).even , (**p_947->g_380))) , p_947->g_241[1][4][0]))) >= p_947->g_154);
            }
            if ((*p_20))
                break;
        }
        else
        { /* block id: 170 */
            (*l_85) = 2L;
        }
        --l_479;
        return p_947->g_482;
    }
    (*l_514) = &p_20;
    if ((***l_514))
    { /* block id: 181 */
        int16_t l_523 = (-7L);
        int64_t *l_524[1];
        VECTOR(int32_t, 4) l_525 = (VECTOR(int32_t, 4))(0x7541AE90L, (VECTOR(int32_t, 2))(0x7541AE90L, 0L), 0L);
        VECTOR(uint32_t, 4) l_526 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xFFC1FD05L), 0xFFC1FD05L);
        uint32_t *l_537 = &p_947->g_129;
        uint32_t **l_536 = &l_537;
        uint32_t *l_539 = &p_947->g_129;
        uint32_t **l_538[2];
        uint32_t *l_540 = (void*)0;
        int16_t l_541 = (-1L);
        VECTOR(uint8_t, 4) l_573 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
        VECTOR(uint64_t, 8) l_585 = (VECTOR(uint64_t, 8))(0xF9B49952E3F05095L, (VECTOR(uint64_t, 4))(0xF9B49952E3F05095L, (VECTOR(uint64_t, 2))(0xF9B49952E3F05095L, 0xB763ED9C7352177DL), 0xB763ED9C7352177DL), 0xB763ED9C7352177DL, 0xF9B49952E3F05095L, 0xB763ED9C7352177DL);
        uint16_t ****l_600 = (void*)0;
        int32_t *l_618 = &l_477;
        int32_t l_631[5][10] = {{0x13ACCC94L,0x2388F85BL,0L,0x003B8085L,0x4CD98EB1L,0x4CD98EB1L,0x003B8085L,0L,0x2388F85BL,0x13ACCC94L},{0x13ACCC94L,0x2388F85BL,0L,0x003B8085L,0x4CD98EB1L,0x4CD98EB1L,0x003B8085L,0L,0x2388F85BL,0x13ACCC94L},{0x13ACCC94L,0x2388F85BL,0L,0x003B8085L,0x4CD98EB1L,0x4CD98EB1L,0x003B8085L,0L,0x2388F85BL,0x13ACCC94L},{0x13ACCC94L,0x2388F85BL,0L,0x003B8085L,0x4CD98EB1L,0x4CD98EB1L,0x003B8085L,0L,0x2388F85BL,0x13ACCC94L},{0x13ACCC94L,0x2388F85BL,0L,0x003B8085L,0x4CD98EB1L,0x4CD98EB1L,0x003B8085L,0L,0x2388F85BL,0x13ACCC94L}};
        int64_t l_715 = 0x412CB11DD57049A8L;
        VECTOR(uint16_t, 8) l_728 = (VECTOR(uint16_t, 8))(0x137CL, (VECTOR(uint16_t, 4))(0x137CL, (VECTOR(uint16_t, 2))(0x137CL, 1UL), 1UL), 1UL, 0x137CL, 1UL);
        uint8_t l_729 = 250UL;
        int16_t l_731 = 0x5FC6L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_524[i] = &p_947->g_185.f2;
        for (i = 0; i < 2; i++)
            l_538[i] = &l_539;
        if ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((((VECTOR(uint16_t, 16))(65535UL, 0x01A2L, ((void*)0 != &p_947->g_133[0]), ((p_947->g_177.y = p_21) || ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(1L, ((p_947->g_102 ^= l_523) != (p_947->g_186[2].f2 = (***l_514))))), ((VECTOR(int32_t, 2))(l_525.xw)).lo)) & ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_526.xy)).yyxy)))).y && ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_947->g_527.s66)), 4294967288UL, 0x2998613FL)).y) || (p_21 && (((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_505) = (((*l_536) = (void*)0) == (l_540 = p_20))), FAKE_DIVERGE(p_947->global_1_offset, get_global_id(1), 10))), p_21)), 0x90E95F62B265CC2CL)) < p_947->g_527.s3) < p_947->g_387.y))))), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(0UL)), 0x3454L, ((VECTOR(uint16_t, 2))(0UL)), 0x854AL, 3UL, 0xA723L)).s8 && p_21) <= p_947->g_23), (***l_514))) == p_947->g_222.x), l_541)))
        { /* block id: 188 */
            int64_t l_552 = 1L;
            VECTOR(uint8_t, 2) l_572 = (VECTOR(uint8_t, 2))(0x43L, 1UL);
            uint32_t l_591 = 0x013FB9E4L;
            VECTOR(int16_t, 16) l_610 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x4364L), 0x4364L), 0x4364L, 8L, 0x4364L, (VECTOR(int16_t, 2))(8L, 0x4364L), (VECTOR(int16_t, 2))(8L, 0x4364L), 8L, 0x4364L, 8L, 0x4364L);
            int32_t l_619 = 4L;
            int32_t l_620 = (-1L);
            int32_t l_621 = 1L;
            int32_t l_622 = 0x655FB72AL;
            int32_t l_623 = 0x714AB17FL;
            int32_t l_624 = 0L;
            int32_t l_625 = 0x425BE46BL;
            int32_t l_626 = (-1L);
            int32_t l_627 = 0x0FC990BDL;
            int32_t l_628[8][4][3] = {{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}},{{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L},{0L,0x56F5EB02L,0x56F5EB02L}}};
            int i, j, k;
            for (p_947->g_101 = (-26); (p_947->g_101 > 46); p_947->g_101++)
            { /* block id: 191 */
                int16_t l_560 = 1L;
                int32_t *l_570 = &l_83;
                VECTOR(uint8_t, 16) l_576 = (VECTOR(uint8_t, 16))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 0x19L), 0x19L), 0x19L, 0xA9L, 0x19L, (VECTOR(uint8_t, 2))(0xA9L, 0x19L), (VECTOR(uint8_t, 2))(0xA9L, 0x19L), 0xA9L, 0x19L, 0xA9L, 0x19L);
                uint32_t l_584 = 4UL;
                int64_t l_601 = 0x0277AD21A18C9E2AL;
                VECTOR(int8_t, 8) l_607 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L));
                uint64_t l_612 = 0xBDB2B7EA9ED10308L;
                int i;
                if ((p_947->g_336.s5 , ((safe_add_func_int32_t_s_s(0x5D88601FL, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(0x4DC5AA3DL, 3L, 0x5C290A3DL, (FAKE_DIVERGE(p_947->global_0_offset, get_global_id(0), 10) >= (safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_947->global_0_offset, get_global_id(0), 10), ((safe_sub_func_uint64_t_u_u(18446744073709551613UL, (p_947->g_102 = (safe_rshift_func_uint16_t_u_u(l_552, 6))))) , ((safe_div_func_int64_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_947->g_555.wzywyxyyxzxyyywz)).s9d8b)).w && (-4L)), ((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_947->global_1_offset, get_global_id(1), 10), l_552)), (p_947->g_394.y = (p_947->g_527.s7 & ((void*)0 != &p_947->g_133[0]))))) || (***l_514)))) ^ p_947->g_482.f6))))), ((VECTOR(int32_t, 2))(0L)), (-1L), 5L, ((VECTOR(int32_t, 4))(0L)), (-1L), 0x76941C79L, 0x18AFB7F0L, (-8L))).lo, ((VECTOR(int32_t, 8))(5L))))).s2)) || l_560)))
                { /* block id: 194 */
                    int32_t l_568 = 0L;
                    if ((atomic_inc(&p_947->g_atomic_input[27 * get_linear_group_id() + 7]) == 2))
                    { /* block id: 196 */
                        int32_t l_561 = 0x51DB89D6L;
                        int32_t l_563 = 2L;
                        int32_t *l_562 = &l_563;
                        int32_t *l_564 = &l_563;
                        int32_t *l_565 = &l_563;
                        struct S0 l_566 = {7L,-4L,0x1710F6BF4AD7812EL,0x53E4DE13E2542AFCL,0x3B6CC2C9941745E3L,2L,0UL,1UL};/* VOLATILE GLOBAL l_566 */
                        struct S0 l_567 = {0x2FL,8L,0x468B49CE60CD585AL,0L,0x7DEF0A2A8DCFE52BL,0L,0x88829DCAL,0xEBD9107A2E1A8D20L};/* VOLATILE GLOBAL l_567 */
                        l_561 &= ((VECTOR(int32_t, 4))(0x177D214BL, ((VECTOR(int32_t, 2))(0x7827537AL, 0L)), 4L)).w;
                        l_565 = (l_564 = l_562);
                        l_567 = l_566;
                        unsigned int result = 0;
                        result += l_561;
                        result += l_563;
                        result += l_566.f0;
                        result += l_566.f1;
                        result += l_566.f2;
                        result += l_566.f3;
                        result += l_566.f4;
                        result += l_566.f5;
                        result += l_566.f6;
                        result += l_566.f7;
                        result += l_567.f0;
                        result += l_567.f1;
                        result += l_567.f2;
                        result += l_567.f3;
                        result += l_567.f4;
                        result += l_567.f5;
                        result += l_567.f6;
                        result += l_567.f7;
                        atomic_add(&p_947->g_special_values[27 * get_linear_group_id() + 7], result);
                    }
                    else
                    { /* block id: 201 */
                        (1 + 1);
                    }
                    if (l_568)
                        continue;
                    (*p_20) &= (p_21 ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_569.zzxyzzww)).s7013363246405712)).sb);
                }
                else
                { /* block id: 206 */
                    (**l_514) = l_570;
                }
                if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0L, 0L)).xxyxyyxyxyxyyyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, (-6L))), (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(0x4CAAL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))((-9L), 8L)), ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(p_947->g_571.yyyxxyyxyxyxxyyy)).s2c, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(l_572.yyxx))))).even, ((VECTOR(uint8_t, 8))(l_573.xzzwwwzy)).s37))).yyxyyxxx, ((VECTOR(uint8_t, 16))(p_947->g_574.xxxyyyyxxxyxxyyx)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 2))(246UL, 1UL)), 0x5CL, 0UL, 0UL, FAKE_DIVERGE(p_947->local_2_offset, get_local_id(2), 10), 1UL, 0xB9L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xB7L, 251UL, 0x15L, 1UL)))), ((VECTOR(uint8_t, 2))(0xB9L, 2UL)), 1UL)).s5b)).xyxxxxyx))), ((VECTOR(uint8_t, 8))(l_575.yyyxxyxx))))), ((VECTOR(uint8_t, 2))(l_576.s76)).yxyyxxyy, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(248UL, 0x6CL)), ((VECTOR(uint8_t, 16))(l_577.zwwwyyzzywzwyywz)).s81))).yxyyxyyx))).lo, ((VECTOR(uint8_t, 16))(0x44L, 0x1EL, ((*p_947->g_398) = (((l_573.x <= ((safe_sub_func_int16_t_s_s(((void*)0 == p_947->g_582), l_584)) >= (((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x10C074692F197DEAL, 0x0A91AC2E3BEF6209L)), 0x8DFD2E87CD475375L, 0x63987AF980F8B31BL)).wyzxzxzwzxyywwwy, ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x2EA5194F2B2DFB52L)).xyyxxyxx, ((VECTOR(uint64_t, 2))(l_585.s60)).yxyxyyyx, ((VECTOR(uint64_t, 8))((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(0x63760762L, (-10L))).lo, (**p_947->g_78))), 0UL, ((VECTOR(uint64_t, 2))(p_947->g_588.s22)), (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), (l_591 ^ (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_947->g_336.s2 >= ((l_599[4] = p_947->g_598[3]) == l_600)), 5)), 0x58BF22F2L)), (*l_570)))))), ((VECTOR(uint64_t, 2))(0x42566ABEBCD2CA47L)), 18446744073709551612UL))))).s1065316560673010))).sc , p_21))) , p_21) == 0xDC84AC73L)), 246UL, 0xE3L, ((VECTOR(uint8_t, 4))(246UL)), ((VECTOR(uint8_t, 4))(6UL)), 0UL, 247UL, 0UL)).s29c7))).xyxywxww, ((VECTOR(uint8_t, 8))(0x0DL))))).s32))), 0x0BAAL, 0x1490L)), p_21, l_601, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x791CL)), 0x353FL)), ((VECTOR(uint16_t, 16))(0x3169L))))).sb != p_21), l_572.x, 0x32CA0394L, l_573.x, 0x75EA6646L, 1L)).s7120251646506052, ((VECTOR(int32_t, 16))(1L))))).lo)).s6 & 0x2E969B1AL))
                { /* block id: 211 */
                    int32_t **l_602 = &l_85;
                    uint16_t *l_613 = &l_511;
                    uint32_t *l_614[10][7] = {{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584},{(void*)0,(void*)0,&l_584,&l_591,&p_947->g_186[2].f6,&l_591,&l_584}};
                    int32_t **l_615 = &l_570;
                    int i, j;
                    l_618 = ((*l_615) = ((**l_514) = ((*l_602) = func_52((*l_514), l_602, l_500, (p_947->g_482.f6 = (l_591 ^ (safe_lshift_func_uint8_t_u_s(((((p_947->g_437.f6 > (((((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_607.s04)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_610.s31)).lo, ((safe_unary_minus_func_uint16_t_u((l_525.x &= p_21))) <= (~(p_21 && (0x7846235F77811AC4L > 0x15CC0B53C1660DFDL)))))), 0x0EL, 0x0FL, (-1L))).lo, ((VECTOR(int8_t, 2))(0x18L)))))))), 6L, 1L, l_612, ((VECTOR(int8_t, 2))(0L)), (-1L))).s5, 3)) != p_21) < 0x1261L) , FAKE_DIVERGE(p_947->local_2_offset, get_local_id(2), 10)) != FAKE_DIVERGE(p_947->local_1_offset, get_local_id(1), 10))) >= 0xF6L) , l_613) == (void*)0), 3)))), p_947->g_178.z, p_947))));
                }
                else
                { /* block id: 218 */
                    (*p_947->g_617) &= 0x117786BAL;
                }
            }
            l_632++;
        }
        else
        { /* block id: 223 */
            int32_t l_643[9];
            int8_t l_688[4];
            uint32_t *l_691 = (void*)0;
            int32_t *l_692 = &l_631[4][5];
            uint8_t *l_713 = &p_947->g_105;
            uint8_t l_714 = 254UL;
            int i;
            for (i = 0; i < 9; i++)
                l_643[i] = 0x5F3FD1C7L;
            for (i = 0; i < 4; i++)
                l_688[i] = 0L;
            for (p_947->g_105 = 21; (p_947->g_105 >= 18); p_947->g_105--)
            { /* block id: 226 */
                int64_t *l_651[1][5][4] = {{{&p_947->g_186[2].f2,&p_947->g_102,(void*)0,&p_947->g_102},{&p_947->g_186[2].f2,&p_947->g_102,(void*)0,&p_947->g_102},{&p_947->g_186[2].f2,&p_947->g_102,(void*)0,&p_947->g_102},{&p_947->g_186[2].f2,&p_947->g_102,(void*)0,&p_947->g_102},{&p_947->g_186[2].f2,&p_947->g_102,(void*)0,&p_947->g_102}}};
                VECTOR(int32_t, 4) l_678 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L);
                VECTOR(int64_t, 2) l_681 = (VECTOR(int64_t, 2))(0x2E354C11246A3C99L, 1L);
                uint8_t l_687 = 1UL;
                VECTOR(uint8_t, 8) l_699 = (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
                uint32_t ***l_703 = &l_536;
                VECTOR(uint32_t, 2) l_710 = (VECTOR(uint32_t, 2))(1UL, 0x4DFB9F33L);
                int i, j, k;
                (***l_514) = (p_947->g_637 , 0x2C2DF49BL);
                for (p_947->g_185.f2 = 22; (p_947->g_185.f2 > (-11)); --p_947->g_185.f2)
                { /* block id: 230 */
                    return p_947->g_640;
                }
                for (p_947->g_184 = (-6); (p_947->g_184 == 38); ++p_947->g_184)
                { /* block id: 235 */
                    int64_t **l_646[3][8][1] = {{{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]}},{{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]}},{{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]},{&l_524[0]}}};
                    uint8_t **l_650 = &l_157;
                    int32_t l_663[7];
                    VECTOR(int32_t, 4) l_677 = (VECTOR(int32_t, 4))(0x727F467BL, (VECTOR(int32_t, 2))(0x727F467BL, 0x0BF6AD01L), 0x0BF6AD01L);
                    uint8_t ***l_686 = &l_650;
                    uint8_t ****l_685 = &l_686;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_663[i] = 1L;
                    if ((((***l_514) = l_643[5]) != (~(safe_rshift_func_int16_t_s_u(((p_947->g_647 = &p_947->g_102) != ((((*p_947->g_582) == &p_947->g_201[1]) >= ((l_643[5] , (((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(5L, ((safe_mod_func_uint64_t_u_u(l_643[5], 7UL)) <= (((*l_202) = (((void*)0 == l_650) || p_21)) < 0x5547L)), 0x15L, 0x13L, l_643[0], p_947->g_156, (-1L), 0x19L)).even)).even, ((VECTOR(int8_t, 2))(0L))))), 0x7FL, 9L)).odd, ((VECTOR(int8_t, 2))(0x39L))))), 0L, 0x74L)).w , p_947->g_472) , l_215) == &p_947->g_133[0])) >= (*p_947->g_617))) , l_651[0][2][3])), 4)))))
                    { /* block id: 239 */
                        if ((*p_947->g_155))
                            break;
                        if ((*p_947->g_617))
                            continue;
                    }
                    else
                    { /* block id: 242 */
                        (***l_514) = (*p_20);
                    }
                    if ((safe_mul_func_int8_t_s_s((l_663[2] = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(((l_663[5] > (*p_20)) > (GROUP_DIVERGE(1, 1) , ((*p_947->g_132) != p_947->g_133[0]))), ((**l_650) ^= 0x12L), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(0x30L, 5UL)).yyyx))))).lo)), 0UL, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_666.yx)))).odd, ((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((**p_947->g_397), (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_673.s54b1)).z, 6)))), ((VECTOR(int8_t, 4))(l_674.xyxy)).w)) == (safe_div_func_int16_t_s_s((p_21 , (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(l_677.yz)).yxyxxxxxxyyxyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(l_678.yzxzwzwxwzxxwxzy)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(0x1C78DDC3L, 0x7C08488BL)).yyyxxyyy, ((VECTOR(int32_t, 8))((safe_add_func_int64_t_s_s(((*p_947->g_647) = ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0L, 0x4DC442C5107044FEL)).xyxyyxyx)), ((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(l_681.yyyyxxyy)).s0423633365353405, (int64_t)(safe_add_func_int32_t_s_s((((l_687 = ((l_684 == ((*l_685) = &l_650)) == l_678.x)) || 2L) & p_21), 0UL))))).lo))).s7), l_663[5])), 0x412EAF34L, (*p_20), (*p_947->g_617), ((VECTOR(int32_t, 4))(1L))))))).s7676502601644204))))), ((VECTOR(int32_t, 16))(0x0FB7FFD2L))))), ((VECTOR(int32_t, 16))((-2L))), ((VECTOR(int32_t, 16))(0x5686AED7L))))), ((VECTOR(int32_t, 16))(0L))))).sc < l_677.z)), p_21))))), 0x8AL, FAKE_DIVERGE(p_947->global_2_offset, get_global_id(2), 10), ((VECTOR(uint8_t, 8))(6UL)))).se4, (uint8_t)p_21))), (**p_947->g_397), 0UL, ((VECTOR(uint8_t, 4))(0UL)))).s3)), (*l_618))) , l_663[4]), l_688[3])) == p_21), 13))), p_21)))
                    { /* block id: 250 */
                        (***l_514) ^= (~(GROUP_DIVERGE(0, 1) <= (p_947->g_689 , ((((VECTOR(uint32_t, 2))(l_690.yy)).even , ((void*)0 == l_691)) || 0x09L))));
                        (**p_947->g_78) = (p_947->g_588.se || l_678.x);
                        l_692 = &l_631[4][9];
                    }
                    else
                    { /* block id: 254 */
                        if ((*p_20))
                            break;
                        l_692 = p_20;
                        if ((*p_20))
                            break;
                    }
                }
                l_643[3] &= (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((*p_20) > (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_699.s4363)).x, ((p_947->g_700 == ((*l_703) = l_702[3][0])) ^ (((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int16_t_s_s((((VECTOR(int32_t, 8))((-1L), 0x6B836AA0L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x3478L, ((VECTOR(int16_t, 2))(p_947->g_707.s16)), (safe_add_func_int32_t_s_s((*l_618), ((VECTOR(uint32_t, 8))(l_710.xyxyyxyx)).s3)), 0x59A3L, 0L, (p_947->g_555.y , p_21), p_21, (-3L), ((((VECTOR(uint32_t, 2))(0x6317F5BCL, 0x64C23BB8L)).lo <= ((*l_618) = (((*p_20) < (((*p_947->g_397) = ((p_21 = (((p_21 & p_21) && 8L) , 0x6EF81B2FD8F4D7EDL)) , l_713)) == l_713)) , GROUP_DIVERGE(0, 1)))) > (***l_514)), 0x57B1L, ((VECTOR(int16_t, 4))((-1L))), 0x296DL)).s20cc)).yzxywyzyzzwyyzwz)))).s2c22, ((VECTOR(uint16_t, 4))(0x878BL))))), (-2L), 0L)).s6 >= 0x0CAC99B1L), 65535UL)) | 0x1A1FL))) && p_947->g_219.y) , (*l_618)))))) | (***l_514)), l_714)), (*p_947->g_617)));
            }
            ++l_716;
            (*p_947->g_721) = p_947->g_719;
        }
        p_947->g_294.s5 |= (((safe_div_func_uint8_t_u_u(p_21, ((p_947->g_185.f4 <= (*l_618)) , ((p_947->g_177.w = ((*l_505) = (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_728.s4701)).w, l_729)) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0L, (-1L), 0L, 0x09L)), 0x32L, 0x7FL, 0x19L, 2L)).s3520304566647615, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(l_730.s7107)), ((VECTOR(int8_t, 8))(((((&p_947->g_133[0] != l_215) == (l_731 ^ (((VECTOR(int8_t, 2))(0x13L, 1L)).odd > 0x87L))) & (safe_mul_func_int16_t_s_s(p_21, (*l_618)))) == p_947->g_156), ((VECTOR(int8_t, 4))((-10L))), 0x72L, 0x61L, (-1L))).hi))), ((VECTOR(int8_t, 4))(0x7EL))))).xxwyzzwwyzxyxxxy)).se134))).wxyxyywzwyxzwxyz))), ((VECTOR(uint8_t, 16))(251UL))))).s6e)).xxyxyxyyyxyyyxxy)).s5), p_21)))) & GROUP_DIVERGE(0, 1))))) ^ (-1L)) & p_21);
        return p_947->g_734;
    }
    else
    { /* block id: 273 */
        uint8_t l_736 = 0UL;
        int32_t l_753 = 0x7C7424F5L;
        int32_t l_754[10][5][5] = {{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}},{{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L},{0x62055882L,0x784D1022L,1L,0L,0x46CFDD06L}}};
        int32_t l_759 = 8L;
        uint32_t l_770 = 0UL;
        int i, j, k;
        l_736 |= l_735[1];
        l_759 &= ((*p_947->g_617) = ((--(*l_228)) >= (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((p_947->g_482.f2 &= (*p_947->g_647)), ((safe_rshift_func_uint16_t_u_s(((1UL >= 0UL) , ((l_736 == (FAKE_DIVERGE(p_947->group_1_offset, get_group_id(1), 10) > ((safe_div_func_uint64_t_u_u(p_947->g_102, (safe_lshift_func_int16_t_s_u((***l_514), 2)))) == ((p_21 , l_736) | (safe_rshift_func_uint8_t_u_u(((((p_947->g_757 = (p_947->g_527.s2++)) > ((l_758 || l_753) >= 18446744073709551615UL)) ^ 0UL) & 18446744073709551607UL), 0)))))) > l_753)), p_21)) ^ p_21))) != l_754[6][1][2]) || 0xAE5F5584L), p_21)), (*p_947->g_398)))));
        for (p_947->g_129 = (-12); (p_947->g_129 != 57); p_947->g_129 = safe_add_func_uint8_t_u_u(p_947->g_129, 1))
        { /* block id: 283 */
            if ((*p_947->g_155))
                break;
            (*p_947->g_617) = (p_947->g_762 , ((VECTOR(int32_t, 2))(l_763.yx)).even);
            l_759 = (-8L);
            for (p_947->g_23 = 0; (p_947->g_23 != 29); p_947->g_23 = safe_add_func_uint16_t_u_u(p_947->g_23, 7))
            { /* block id: 289 */
                int64_t **l_767[9];
                int64_t ***l_766 = &l_767[8];
                int i;
                for (i = 0; i < 9; i++)
                    l_767[i] = &p_947->g_647;
                (*l_766) = (void*)0;
            }
        }
        l_770++;
    }
    return p_947->g_773;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_33(int32_t * p_34, int32_t * p_35, struct S1 * p_947)
{ /* block id: 9 */
    int32_t l_38 = 8L;
    return l_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_92.f6 p_947->g_177 p_947->g_178 p_947->g_92.f3 p_947->g_158 p_947->g_105 p_947->g_92.f7 p_947->g_156 p_947->g_23 p_947->g_185
 * writes: p_947->g_129 p_947->g_158 p_947->g_118 p_947->g_184 p_947->g_186
 */
int32_t * func_52(int32_t ** p_53, int32_t ** p_54, uint8_t * p_55, uint32_t  p_56, uint64_t  p_57, struct S1 * p_947)
{ /* block id: 46 */
    int64_t l_163 = 0x3F7D6CEE14A350FAL;
    VECTOR(uint8_t, 8) l_166 = (VECTOR(uint8_t, 8))(0x27L, (VECTOR(uint8_t, 4))(0x27L, (VECTOR(uint8_t, 2))(0x27L, 2UL), 2UL), 2UL, 0x27L, 2UL);
    uint32_t *l_167 = &p_947->g_129;
    VECTOR(uint32_t, 2) l_170 = (VECTOR(uint32_t, 2))(0x9C46A301L, 0xF3114887L);
    VECTOR(uint8_t, 8) l_173 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 253UL), 253UL), 253UL, 1UL, 253UL);
    VECTOR(uint8_t, 4) l_176 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x62L), 0x62L);
    uint64_t l_181 = 0UL;
    uint16_t *l_182 = &p_947->g_118;
    int16_t *l_183 = (void*)0;
    int i;
    p_947->g_186[2] = (((safe_rshift_func_uint16_t_u_s((((safe_div_func_int32_t_s_s((l_163 || (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_947->group_2_offset, get_group_id(2), 10), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_166.s4604)))), ((((*l_167) = p_56) != ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(((safe_mod_func_uint32_t_u_u(((((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_170.yx)))).even , ((safe_add_func_uint8_t_u_u((p_57 == p_947->g_92.f6), (((p_947->g_184 = (((l_166.s0 <= ((*p_55) = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_173.s2217)).zyywyxwz)).s3)) , ((((safe_sub_func_uint64_t_u_u((((*l_182) = (((*p_55) = ((VECTOR(uint8_t, 16))(((((((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(l_176.zw)), 0x0FL)).y <= ((VECTOR(int8_t, 8))(p_947->g_177.zzxyywxx)).s1) & (((~(((GROUP_DIVERGE(1, 1) | (0x1FC7L != ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(p_947->g_178.zxzw)).yxxwwyxwyxxxywzx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((safe_mod_func_uint8_t_u_u(p_947->g_92.f3, ((*p_55) ^ 0xCAL))) <= l_173.s6), ((VECTOR(uint8_t, 2))(0x9EL)), 0x2CL)).yxwxxxxw)).s5364454724214236))).s6)) > (*p_55)) > p_947->g_105)) <= p_947->g_92.f7) != 0x2E62L)) ^ l_181) & l_173.s5), p_947->g_177.z, ((VECTOR(uint8_t, 8))(0xF5L)), ((VECTOR(uint8_t, 2))(0x91L)), l_173.s7, 255UL, 0x55L, 0x50L)).se) & 0x3EL)) >= 65535UL), 5UL)) , l_173.s5) > p_947->g_156) < l_176.w)) & 0UL)) < p_947->g_177.w) > p_57))) & l_173.s4)) || p_57) , l_170.y) || l_166.s7), p_947->g_92.f7)) & GROUP_DIVERGE(0, 1)), 1L, ((VECTOR(int32_t, 4))(2L)), l_181, 1L, ((VECTOR(int32_t, 8))(1L)))).sbe3b))), ((VECTOR(uint32_t, 8))(0x78705FF0L)), ((VECTOR(uint32_t, 2))(4294967290UL)), 0xDD2221DAL, 0xC54FD3AAL)).s2e64)).z) || 0x9CBAC53C36080E91L), ((VECTOR(uint8_t, 4))(0xCBL)), ((VECTOR(uint8_t, 4))(0x2CL)), ((VECTOR(uint8_t, 2))(0UL)), 1UL)).sc))), p_56)) <= p_947->g_23) & p_57), p_57)) || 0x07EAL) , p_947->g_185);
    return l_167;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_78 p_947->g_23 p_947->g_comm_values p_947->g_92.f6 p_947->l_comm_values p_947->g_92.f2 p_947->g_121 p_947->g_118 p_947->g_129 p_947->g_130 p_947->g_132 p_947->g_92 p_947->g_154 p_947->g_101 p_947->g_155 p_947->g_156
 * writes: p_947->g_118 p_947->g_121 p_947->g_129 p_947->g_130 p_947->g_133 p_947->g_92 p_947->g_102 p_947->g_154 p_947->g_105 p_947->g_156
 */
int32_t ** func_58(uint8_t  p_59, uint8_t * p_60, struct S1 * p_947)
{ /* block id: 38 */
    int32_t *l_134 = &p_947->g_23;
    int32_t **l_135 = &l_134;
    int16_t l_136 = 0x5A43L;
    VECTOR(uint64_t, 16) l_139 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x3C3B741B6539211FL), 0x3C3B741B6539211FL), 0x3C3B741B6539211FL, 1UL, 0x3C3B741B6539211FL, (VECTOR(uint64_t, 2))(1UL, 0x3C3B741B6539211FL), (VECTOR(uint64_t, 2))(1UL, 0x3C3B741B6539211FL), 1UL, 0x3C3B741B6539211FL, 1UL, 0x3C3B741B6539211FL);
    int64_t *l_148 = &p_947->g_102;
    int8_t *l_153 = &p_947->g_154;
    int i;
    (*l_135) = l_134;
    (*l_135) = func_67(&l_134, p_947->g_78, &l_134, func_62(func_67(func_72(p_947->g_78, p_947->g_78, l_136, (safe_rshift_func_uint16_t_u_u((*l_134), ((VECTOR(uint16_t, 4))(0x1E35L, 65533UL, 0x947BL, 0x055DL)).x)), &l_134, p_947), &l_134, &l_134, &p_947->g_105, p_947), p_59, (**l_135), &l_134, p_947), p_947);
    (*p_947->g_155) ^= ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_139.sa3)).xxxxyxyy)).s7510340602133765)).s9 , (safe_div_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((*p_60) = (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0UL, 9UL, 18446744073709551615UL, 0UL)).xywwzwzy)).s6, ((*l_148) = p_59))) != (&p_60 != (void*)0)) & (safe_sub_func_int8_t_s_s(p_947->g_130, p_59))), (((safe_mod_func_uint16_t_u_u((((((p_947->g_92.f7 && ((*l_153) ^= 0x07L)) , (p_59 , l_148)) == (void*)0) && p_59) >= p_59), p_59)) == p_59) & p_59)))), p_947->g_129)) , p_947->g_129), p_947->g_101))) > 1UL);
    return p_947->g_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_132 p_947->g_92
 * writes: p_947->g_133 p_947->g_92
 */
uint8_t * func_62(int32_t * p_63, int32_t  p_64, uint16_t  p_65, int32_t ** p_66, struct S1 * p_947)
{ /* block id: 34 */
    struct S0 *l_131 = &p_947->g_92;
    (*p_947->g_132) = l_131;
    (*l_131) = (*l_131);
    return &p_947->g_105;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_121 p_947->g_118 p_947->g_129 p_947->g_130
 * writes: p_947->g_121 p_947->g_129 p_947->g_130
 */
int32_t * func_67(int32_t ** p_68, int32_t ** p_69, int32_t ** p_70, uint8_t * p_71, struct S1 * p_947)
{ /* block id: 29 */
    int32_t *l_119 = (void*)0;
    int32_t *l_120[6] = {(void*)0,&p_947->g_23,(void*)0,(void*)0,&p_947->g_23,(void*)0};
    VECTOR(uint32_t, 8) l_124 = (VECTOR(uint32_t, 8))(0xFDDFC4C5L, (VECTOR(uint32_t, 4))(0xFDDFC4C5L, (VECTOR(uint32_t, 2))(0xFDDFC4C5L, 0x20DBA62EL), 0x20DBA62EL), 0x20DBA62EL, 0xFDDFC4C5L, 0x20DBA62EL);
    uint32_t *l_125 = (void*)0;
    uint32_t *l_126 = (void*)0;
    uint32_t *l_127 = (void*)0;
    uint32_t *l_128 = &p_947->g_129;
    int i;
    --p_947->g_121;
    p_947->g_130 |= (p_947->g_118 >= ((*l_128) &= ((VECTOR(uint32_t, 4))(l_124.s3072)).w));
    return l_127;
}


/* ------------------------------------------ */
/* 
 * reads : p_947->g_comm_values p_947->g_23 p_947->g_92 p_947->l_comm_values p_947->g_102 p_947->g_78 p_947->g_106
 * writes: p_947->g_101 p_947->g_102 p_947->g_118
 */
int32_t ** func_72(int32_t ** p_73, int32_t ** p_74, uint32_t  p_75, uint32_t  p_76, int32_t ** p_77, struct S1 * p_947)
{ /* block id: 18 */
    VECTOR(int32_t, 2) l_99 = (VECTOR(int32_t, 2))(0x30D2C86DL, 9L);
    uint64_t *l_100 = &p_947->g_101;
    uint8_t *l_104[9][3][9] = {{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}},{{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0},{&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,&p_947->g_105,(void*)0}}};
    uint8_t **l_103 = &l_104[3][0][7];
    uint8_t **l_107 = &l_104[0][0][2];
    uint8_t ***l_108 = &l_107;
    int32_t l_109 = 0x50373D2EL;
    uint8_t ***l_114 = (void*)0;
    uint8_t ***l_115 = (void*)0;
    uint8_t **l_116[3];
    uint32_t l_117[4] = {0xDB13CF29L,0xDB13CF29L,0xDB13CF29L,0xDB13CF29L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_116[i] = &l_104[8][0][5];
    l_99.x = (((((((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), p_947->g_comm_values[p_947->tid])) > ((VECTOR(uint8_t, 16))((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((~(**p_74)) >= (0x137CL < 0x6BA1L)), ((p_947->g_102 &= ((p_947->g_92 , (FAKE_DIVERGE(p_947->group_1_offset, get_group_id(1), 10) == p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))])) ^ ((0x08L >= ((safe_add_func_uint16_t_u_u((((((((*l_100) = (safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (((VECTOR(int32_t, 8))(l_99.xxxyxyyx)).s0 >= p_947->g_comm_values[p_947->tid])))) != (((*p_77) = (void*)0) != (*p_74))) && 0x35A82D269A62DAC3L) , p_947->g_92.f7) || p_76) <= p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))]), l_99.y)) == p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))])) < p_75))) | l_99.x))), 0xA0L)) ^ l_99.y) != l_99.y), p_75, 0xB2L, 0x51L, ((VECTOR(uint8_t, 8))(248UL)), ((VECTOR(uint8_t, 2))(255UL)), 255UL, 0x68L)).s3) >= l_99.y) , p_947->g_78) == p_947->g_78) ^ FAKE_DIVERGE(p_947->local_0_offset, get_local_id(0), 10)) <= 0x4BD3L);
    l_103 = l_103;
    p_947->g_118 = (((((65529UL ^ p_75) || ((((VECTOR(int64_t, 8))(p_947->g_106.s14724337)).s6 , (~(l_99.x = l_99.y))) >= ((((*l_108) = l_107) != (l_116[0] = ((((+l_109) <= (0L == (safe_lshift_func_int8_t_s_s((p_76 || ((safe_mul_func_uint8_t_u_u((0x0BDBF62EL | ((4294967294UL | 0xAC61AB63L) ^ p_75)), p_75)) == p_947->g_92.f6)), 5)))) > p_947->l_comm_values[(safe_mod_func_uint32_t_u_u(p_947->tid, 84))]) , (void*)0))) , p_947->g_92.f2))) , l_117[2]) & p_947->g_comm_values[p_947->tid]) == l_117[3]);
    return p_73;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[27];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 27; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[84];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 84; i++)
            l_comm_values[i] = 1;
    struct S1 c_948;
    struct S1* p_947 = &c_948;
    struct S1 c_949 = {
        0x18461E70L, // p_947->g_23
        {255UL,0x95L,255UL,255UL,0x95L,255UL,255UL,0x95L,255UL,255UL}, // p_947->g_49
        (void*)0, // p_947->g_78
        {0L,0x4706CD8FDA5E0CF2L,0x2894906A58E0DE0CL,0x7FC0BD78952EB5F7L,0x7037A9E214278D6BL,0L,0UL,18446744073709551615UL}, // p_947->g_92
        18446744073709551610UL, // p_947->g_101
        0x48A2850EDC4196DCL, // p_947->g_102
        255UL, // p_947->g_105
        (VECTOR(int64_t, 8))(0x1CAF053B50BCEF86L, (VECTOR(int64_t, 4))(0x1CAF053B50BCEF86L, (VECTOR(int64_t, 2))(0x1CAF053B50BCEF86L, 0L), 0L), 0L, 0x1CAF053B50BCEF86L, 0L), // p_947->g_106
        0x88D2L, // p_947->g_118
        5UL, // p_947->g_121
        0x6349BB04L, // p_947->g_129
        0UL, // p_947->g_130
        {&p_947->g_92}, // p_947->g_133
        &p_947->g_133[0], // p_947->g_132
        0x71L, // p_947->g_154
        0L, // p_947->g_156
        &p_947->g_156, // p_947->g_155
        0x84L, // p_947->g_158
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), // p_947->g_177
        (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x0CL), 0x0CL), // p_947->g_178
        0xAFF28C12B7180226L, // p_947->g_184
        {0x7BL,0x3B632E5C04B26ACFL,0x59339AB5B6C6E20CL,-7L,18446744073709551615UL,0x64CDA43A824C425AL,1UL,0UL}, // p_947->g_185
        {{-5L,0x4EA78EDF1D7F75DEL,-9L,1L,0xCB4C1B82195782F3L,0x6296A02216667D68L,0xC875A03AL,3UL},{0x6CL,0x454E92F58A89B082L,2L,2L,18446744073709551609UL,0L,2UL,18446744073709551615UL},{-5L,0x4EA78EDF1D7F75DEL,-9L,1L,0xCB4C1B82195782F3L,0x6296A02216667D68L,0xC875A03AL,3UL},{-5L,0x4EA78EDF1D7F75DEL,-9L,1L,0xCB4C1B82195782F3L,0x6296A02216667D68L,0xC875A03AL,3UL},{0x6CL,0x454E92F58A89B082L,2L,2L,18446744073709551609UL,0L,2UL,18446744073709551615UL},{-5L,0x4EA78EDF1D7F75DEL,-9L,1L,0xCB4C1B82195782F3L,0x6296A02216667D68L,0xC875A03AL,3UL},{-5L,0x4EA78EDF1D7F75DEL,-9L,1L,0xCB4C1B82195782F3L,0x6296A02216667D68L,0xC875A03AL,3UL}}, // p_947->g_186
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), // p_947->g_193
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), // p_947->g_194
        {5L,(-7L),5L,5L,(-7L),5L,5L}, // p_947->g_201
        (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x75L), 0x75L), // p_947->g_219
        (VECTOR(uint8_t, 4))(0xEBL, (VECTOR(uint8_t, 2))(0xEBL, 0UL), 0UL), // p_947->g_220
        (VECTOR(uint16_t, 2))(8UL, 0UL), // p_947->g_222
        4294967295UL, // p_947->g_233
        {{{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL}},{{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL}},{{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL},{0x0DBF972B7384CCD5L,0x86B7F7E1F24E963FL,1UL,0xD48076C985221F51L,18446744073709551609UL,0xD48076C985221F51L,1UL,0x86B7F7E1F24E963FL}}}, // p_947->g_241
        (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x15E4L), 0x15E4L), // p_947->g_282
        (VECTOR(int32_t, 16))(0x5F9D4AEBL, (VECTOR(int32_t, 4))(0x5F9D4AEBL, (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), 0x1DD4FA4BL), 0x1DD4FA4BL, 0x5F9D4AEBL, 0x1DD4FA4BL, (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), (VECTOR(int32_t, 2))(0x5F9D4AEBL, 0x1DD4FA4BL), 0x5F9D4AEBL, 0x1DD4FA4BL, 0x5F9D4AEBL, 0x1DD4FA4BL), // p_947->g_294
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_947->g_336
        {0UL}, // p_947->g_337
        0xD627L, // p_947->g_383
        {{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}},{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}},{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}},{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}},{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}},{{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383},{&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383,&p_947->g_383}}}, // p_947->g_382
        &p_947->g_382[2][1][0], // p_947->g_381
        &p_947->g_381, // p_947->g_380
        &p_947->g_380, // p_947->g_379
        (VECTOR(int32_t, 4))(0x3E30AB47L, (VECTOR(int32_t, 2))(0x3E30AB47L, 0x127D9AA1L), 0x127D9AA1L), // p_947->g_387
        (VECTOR(int16_t, 2))(0x0487L, (-1L)), // p_947->g_394
        &p_947->g_158, // p_947->g_398
        &p_947->g_398, // p_947->g_397
        0x732D654EL, // p_947->g_400
        {0x04L,-4L,1L,-4L,1UL,1L,0x553B662DL,0x0545102F7DF0A19DL}, // p_947->g_437
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xCA612847L), 0xCA612847L), 0xCA612847L, 4294967295UL, 0xCA612847L), // p_947->g_466
        0x25CD6510L, // p_947->g_472
        (-9L), // p_947->g_474
        {1L,0L,-3L,-1L,6UL,2L,0xFC8D1F61L,0xA6C6651280DB3CBEL}, // p_947->g_482
        {0x3AL,9L,0L,0x1D2D1B01014746C8L,0UL,0L,0x23234D0FL,18446744073709551615UL}, // p_947->g_483
        {{{&p_947->g_78},{&p_947->g_78},{&p_947->g_78},{&p_947->g_78}},{{&p_947->g_78},{&p_947->g_78},{&p_947->g_78},{&p_947->g_78}}}, // p_947->g_513
        (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x1D221E5AL), 0x1D221E5AL), 0x1D221E5AL, 4294967286UL, 0x1D221E5AL), // p_947->g_527
        (VECTOR(int32_t, 4))(0x61D5033CL, (VECTOR(int32_t, 2))(0x61D5033CL, 0L), 0L), // p_947->g_555
        (VECTOR(uint8_t, 2))(1UL, 246UL), // p_947->g_571
        (VECTOR(uint8_t, 2))(0xBCL, 0x9EL), // p_947->g_574
        {{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}},{{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0},{(void*)0,&p_947->g_201[0],(void*)0,&p_947->g_201[1],&p_947->g_201[0],&p_947->g_201[1],(void*)0}}}, // p_947->g_583
        &p_947->g_583[4][0][3], // p_947->g_582
        (VECTOR(uint64_t, 16))(0xF6C28C91F62A395EL, (VECTOR(uint64_t, 4))(0xF6C28C91F62A395EL, (VECTOR(uint64_t, 2))(0xF6C28C91F62A395EL, 0x2AA5A81721474025L), 0x2AA5A81721474025L), 0x2AA5A81721474025L, 0xF6C28C91F62A395EL, 0x2AA5A81721474025L, (VECTOR(uint64_t, 2))(0xF6C28C91F62A395EL, 0x2AA5A81721474025L), (VECTOR(uint64_t, 2))(0xF6C28C91F62A395EL, 0x2AA5A81721474025L), 0xF6C28C91F62A395EL, 0x2AA5A81721474025L, 0xF6C28C91F62A395EL, 0x2AA5A81721474025L), // p_947->g_588
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_947->g_598
        &p_947->g_156, // p_947->g_617
        {&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617,&p_947->g_617}, // p_947->g_616
        {0L,0x412178B5238F60CDL,0x3D363106E5FDD9ABL,0x48DF0770A51888B9L,4UL,-1L,0x15D51EDDL,0x30DD6AEA64A92DBDL}, // p_947->g_637
        {9L,0x1DF501440B829303L,4L,0x4164C5E0BA403268L,0x00613F309D405E02L,1L,1UL,0x70F1BFCD9097CB97L}, // p_947->g_640
        &p_947->g_186[2].f2, // p_947->g_647
        {0x01L,1L,1L,0x4D966C7F7118EA59L,0xD3A4D4A19AC313FEL,-1L,3UL,6UL}, // p_947->g_689
        (void*)0, // p_947->g_701
        &p_947->g_701, // p_947->g_700
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3076L), 0x3076L), 0x3076L, 0L, 0x3076L), // p_947->g_707
        {-2L,-5L,0x3215DC33A1A0E749L,0x471CB6ED7F3745E8L,0x687F8AAD4F2DF438L,0x34E4FFFB267C231CL,4294967295UL,18446744073709551614UL}, // p_947->g_719
        {&p_947->g_637,&p_947->g_637}, // p_947->g_720
        &p_947->g_483, // p_947->g_721
        {0x2FL,1L,0x63C5E505B5D78FA3L,-1L,0x40D1BC8F73357A63L,3L,0UL,0xF60AB519EDD23BFEL}, // p_947->g_734
        0xAE31L, // p_947->g_757
        {0x21L,0x223EA4D99BC6854CL,7L,-1L,18446744073709551606UL,0x7547154BB438BDC7L,0x49A9F16DL,0xBE931D9110CFDE46L}, // p_947->g_762
        (-1L), // p_947->g_768
        {0x2BL,-3L,0x076066DD70F0F700L,0x787E022AE35145B0L,1UL,0L,0x394EAF21L,1UL}, // p_947->g_773
        &p_947->g_186[2].f7, // p_947->g_777
        &p_947->g_777, // p_947->g_776
        (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 9UL), 9UL), 9UL, 251UL, 9UL, (VECTOR(uint8_t, 2))(251UL, 9UL), (VECTOR(uint8_t, 2))(251UL, 9UL), 251UL, 9UL, 251UL, 9UL), // p_947->g_791
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x572FL), 0x572FL), 0x572FL, 0UL, 0x572FL, (VECTOR(uint16_t, 2))(0UL, 0x572FL), (VECTOR(uint16_t, 2))(0UL, 0x572FL), 0UL, 0x572FL, 0UL, 0x572FL), // p_947->g_797
        &p_947->g_133[0], // p_947->g_834
        18446744073709551615UL, // p_947->g_916
        &p_947->g_617, // p_947->g_936
        &p_947->g_23, // p_947->g_945
        &p_947->g_617, // p_947->g_946
        0, // p_947->v_collective
        sequence_input[get_global_id(0)], // p_947->global_0_offset
        sequence_input[get_global_id(1)], // p_947->global_1_offset
        sequence_input[get_global_id(2)], // p_947->global_2_offset
        sequence_input[get_local_id(0)], // p_947->local_0_offset
        sequence_input[get_local_id(1)], // p_947->local_1_offset
        sequence_input[get_local_id(2)], // p_947->local_2_offset
        sequence_input[get_group_id(0)], // p_947->group_0_offset
        sequence_input[get_group_id(1)], // p_947->group_1_offset
        sequence_input[get_group_id(2)], // p_947->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 84)), permutations[0][get_linear_local_id()])), // p_947->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_948 = c_949;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_947);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_947->g_23, "p_947->g_23", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_947->g_49[i], "p_947->g_49[i]", print_hash_value);

    }
    transparent_crc(p_947->g_92.f0, "p_947->g_92.f0", print_hash_value);
    transparent_crc(p_947->g_92.f1, "p_947->g_92.f1", print_hash_value);
    transparent_crc(p_947->g_92.f2, "p_947->g_92.f2", print_hash_value);
    transparent_crc(p_947->g_92.f3, "p_947->g_92.f3", print_hash_value);
    transparent_crc(p_947->g_92.f4, "p_947->g_92.f4", print_hash_value);
    transparent_crc(p_947->g_92.f5, "p_947->g_92.f5", print_hash_value);
    transparent_crc(p_947->g_92.f6, "p_947->g_92.f6", print_hash_value);
    transparent_crc(p_947->g_92.f7, "p_947->g_92.f7", print_hash_value);
    transparent_crc(p_947->g_101, "p_947->g_101", print_hash_value);
    transparent_crc(p_947->g_102, "p_947->g_102", print_hash_value);
    transparent_crc(p_947->g_105, "p_947->g_105", print_hash_value);
    transparent_crc(p_947->g_106.s0, "p_947->g_106.s0", print_hash_value);
    transparent_crc(p_947->g_106.s1, "p_947->g_106.s1", print_hash_value);
    transparent_crc(p_947->g_106.s2, "p_947->g_106.s2", print_hash_value);
    transparent_crc(p_947->g_106.s3, "p_947->g_106.s3", print_hash_value);
    transparent_crc(p_947->g_106.s4, "p_947->g_106.s4", print_hash_value);
    transparent_crc(p_947->g_106.s5, "p_947->g_106.s5", print_hash_value);
    transparent_crc(p_947->g_106.s6, "p_947->g_106.s6", print_hash_value);
    transparent_crc(p_947->g_106.s7, "p_947->g_106.s7", print_hash_value);
    transparent_crc(p_947->g_118, "p_947->g_118", print_hash_value);
    transparent_crc(p_947->g_121, "p_947->g_121", print_hash_value);
    transparent_crc(p_947->g_129, "p_947->g_129", print_hash_value);
    transparent_crc(p_947->g_130, "p_947->g_130", print_hash_value);
    transparent_crc(p_947->g_154, "p_947->g_154", print_hash_value);
    transparent_crc(p_947->g_156, "p_947->g_156", print_hash_value);
    transparent_crc(p_947->g_158, "p_947->g_158", print_hash_value);
    transparent_crc(p_947->g_177.x, "p_947->g_177.x", print_hash_value);
    transparent_crc(p_947->g_177.y, "p_947->g_177.y", print_hash_value);
    transparent_crc(p_947->g_177.z, "p_947->g_177.z", print_hash_value);
    transparent_crc(p_947->g_177.w, "p_947->g_177.w", print_hash_value);
    transparent_crc(p_947->g_178.x, "p_947->g_178.x", print_hash_value);
    transparent_crc(p_947->g_178.y, "p_947->g_178.y", print_hash_value);
    transparent_crc(p_947->g_178.z, "p_947->g_178.z", print_hash_value);
    transparent_crc(p_947->g_178.w, "p_947->g_178.w", print_hash_value);
    transparent_crc(p_947->g_184, "p_947->g_184", print_hash_value);
    transparent_crc(p_947->g_185.f0, "p_947->g_185.f0", print_hash_value);
    transparent_crc(p_947->g_185.f1, "p_947->g_185.f1", print_hash_value);
    transparent_crc(p_947->g_185.f2, "p_947->g_185.f2", print_hash_value);
    transparent_crc(p_947->g_185.f3, "p_947->g_185.f3", print_hash_value);
    transparent_crc(p_947->g_185.f4, "p_947->g_185.f4", print_hash_value);
    transparent_crc(p_947->g_185.f5, "p_947->g_185.f5", print_hash_value);
    transparent_crc(p_947->g_185.f6, "p_947->g_185.f6", print_hash_value);
    transparent_crc(p_947->g_185.f7, "p_947->g_185.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_947->g_186[i].f0, "p_947->g_186[i].f0", print_hash_value);
        transparent_crc(p_947->g_186[i].f1, "p_947->g_186[i].f1", print_hash_value);
        transparent_crc(p_947->g_186[i].f2, "p_947->g_186[i].f2", print_hash_value);
        transparent_crc(p_947->g_186[i].f3, "p_947->g_186[i].f3", print_hash_value);
        transparent_crc(p_947->g_186[i].f4, "p_947->g_186[i].f4", print_hash_value);
        transparent_crc(p_947->g_186[i].f5, "p_947->g_186[i].f5", print_hash_value);
        transparent_crc(p_947->g_186[i].f6, "p_947->g_186[i].f6", print_hash_value);
        transparent_crc(p_947->g_186[i].f7, "p_947->g_186[i].f7", print_hash_value);

    }
    transparent_crc(p_947->g_193.x, "p_947->g_193.x", print_hash_value);
    transparent_crc(p_947->g_193.y, "p_947->g_193.y", print_hash_value);
    transparent_crc(p_947->g_193.z, "p_947->g_193.z", print_hash_value);
    transparent_crc(p_947->g_193.w, "p_947->g_193.w", print_hash_value);
    transparent_crc(p_947->g_194.x, "p_947->g_194.x", print_hash_value);
    transparent_crc(p_947->g_194.y, "p_947->g_194.y", print_hash_value);
    transparent_crc(p_947->g_194.z, "p_947->g_194.z", print_hash_value);
    transparent_crc(p_947->g_194.w, "p_947->g_194.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_947->g_201[i], "p_947->g_201[i]", print_hash_value);

    }
    transparent_crc(p_947->g_219.x, "p_947->g_219.x", print_hash_value);
    transparent_crc(p_947->g_219.y, "p_947->g_219.y", print_hash_value);
    transparent_crc(p_947->g_219.z, "p_947->g_219.z", print_hash_value);
    transparent_crc(p_947->g_219.w, "p_947->g_219.w", print_hash_value);
    transparent_crc(p_947->g_220.x, "p_947->g_220.x", print_hash_value);
    transparent_crc(p_947->g_220.y, "p_947->g_220.y", print_hash_value);
    transparent_crc(p_947->g_220.z, "p_947->g_220.z", print_hash_value);
    transparent_crc(p_947->g_220.w, "p_947->g_220.w", print_hash_value);
    transparent_crc(p_947->g_222.x, "p_947->g_222.x", print_hash_value);
    transparent_crc(p_947->g_222.y, "p_947->g_222.y", print_hash_value);
    transparent_crc(p_947->g_233, "p_947->g_233", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_947->g_241[i][j][k], "p_947->g_241[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_947->g_282.x, "p_947->g_282.x", print_hash_value);
    transparent_crc(p_947->g_282.y, "p_947->g_282.y", print_hash_value);
    transparent_crc(p_947->g_282.z, "p_947->g_282.z", print_hash_value);
    transparent_crc(p_947->g_282.w, "p_947->g_282.w", print_hash_value);
    transparent_crc(p_947->g_294.s0, "p_947->g_294.s0", print_hash_value);
    transparent_crc(p_947->g_294.s1, "p_947->g_294.s1", print_hash_value);
    transparent_crc(p_947->g_294.s2, "p_947->g_294.s2", print_hash_value);
    transparent_crc(p_947->g_294.s3, "p_947->g_294.s3", print_hash_value);
    transparent_crc(p_947->g_294.s4, "p_947->g_294.s4", print_hash_value);
    transparent_crc(p_947->g_294.s5, "p_947->g_294.s5", print_hash_value);
    transparent_crc(p_947->g_294.s6, "p_947->g_294.s6", print_hash_value);
    transparent_crc(p_947->g_294.s7, "p_947->g_294.s7", print_hash_value);
    transparent_crc(p_947->g_294.s8, "p_947->g_294.s8", print_hash_value);
    transparent_crc(p_947->g_294.s9, "p_947->g_294.s9", print_hash_value);
    transparent_crc(p_947->g_294.sa, "p_947->g_294.sa", print_hash_value);
    transparent_crc(p_947->g_294.sb, "p_947->g_294.sb", print_hash_value);
    transparent_crc(p_947->g_294.sc, "p_947->g_294.sc", print_hash_value);
    transparent_crc(p_947->g_294.sd, "p_947->g_294.sd", print_hash_value);
    transparent_crc(p_947->g_294.se, "p_947->g_294.se", print_hash_value);
    transparent_crc(p_947->g_294.sf, "p_947->g_294.sf", print_hash_value);
    transparent_crc(p_947->g_336.s0, "p_947->g_336.s0", print_hash_value);
    transparent_crc(p_947->g_336.s1, "p_947->g_336.s1", print_hash_value);
    transparent_crc(p_947->g_336.s2, "p_947->g_336.s2", print_hash_value);
    transparent_crc(p_947->g_336.s3, "p_947->g_336.s3", print_hash_value);
    transparent_crc(p_947->g_336.s4, "p_947->g_336.s4", print_hash_value);
    transparent_crc(p_947->g_336.s5, "p_947->g_336.s5", print_hash_value);
    transparent_crc(p_947->g_336.s6, "p_947->g_336.s6", print_hash_value);
    transparent_crc(p_947->g_336.s7, "p_947->g_336.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_947->g_337[i], "p_947->g_337[i]", print_hash_value);

    }
    transparent_crc(p_947->g_383, "p_947->g_383", print_hash_value);
    transparent_crc(p_947->g_387.x, "p_947->g_387.x", print_hash_value);
    transparent_crc(p_947->g_387.y, "p_947->g_387.y", print_hash_value);
    transparent_crc(p_947->g_387.z, "p_947->g_387.z", print_hash_value);
    transparent_crc(p_947->g_387.w, "p_947->g_387.w", print_hash_value);
    transparent_crc(p_947->g_394.x, "p_947->g_394.x", print_hash_value);
    transparent_crc(p_947->g_394.y, "p_947->g_394.y", print_hash_value);
    transparent_crc(p_947->g_400, "p_947->g_400", print_hash_value);
    transparent_crc(p_947->g_437.f0, "p_947->g_437.f0", print_hash_value);
    transparent_crc(p_947->g_437.f1, "p_947->g_437.f1", print_hash_value);
    transparent_crc(p_947->g_437.f2, "p_947->g_437.f2", print_hash_value);
    transparent_crc(p_947->g_437.f3, "p_947->g_437.f3", print_hash_value);
    transparent_crc(p_947->g_437.f4, "p_947->g_437.f4", print_hash_value);
    transparent_crc(p_947->g_437.f5, "p_947->g_437.f5", print_hash_value);
    transparent_crc(p_947->g_437.f6, "p_947->g_437.f6", print_hash_value);
    transparent_crc(p_947->g_437.f7, "p_947->g_437.f7", print_hash_value);
    transparent_crc(p_947->g_466.s0, "p_947->g_466.s0", print_hash_value);
    transparent_crc(p_947->g_466.s1, "p_947->g_466.s1", print_hash_value);
    transparent_crc(p_947->g_466.s2, "p_947->g_466.s2", print_hash_value);
    transparent_crc(p_947->g_466.s3, "p_947->g_466.s3", print_hash_value);
    transparent_crc(p_947->g_466.s4, "p_947->g_466.s4", print_hash_value);
    transparent_crc(p_947->g_466.s5, "p_947->g_466.s5", print_hash_value);
    transparent_crc(p_947->g_466.s6, "p_947->g_466.s6", print_hash_value);
    transparent_crc(p_947->g_466.s7, "p_947->g_466.s7", print_hash_value);
    transparent_crc(p_947->g_472, "p_947->g_472", print_hash_value);
    transparent_crc(p_947->g_474, "p_947->g_474", print_hash_value);
    transparent_crc(p_947->g_482.f0, "p_947->g_482.f0", print_hash_value);
    transparent_crc(p_947->g_482.f1, "p_947->g_482.f1", print_hash_value);
    transparent_crc(p_947->g_482.f2, "p_947->g_482.f2", print_hash_value);
    transparent_crc(p_947->g_482.f3, "p_947->g_482.f3", print_hash_value);
    transparent_crc(p_947->g_482.f4, "p_947->g_482.f4", print_hash_value);
    transparent_crc(p_947->g_482.f5, "p_947->g_482.f5", print_hash_value);
    transparent_crc(p_947->g_482.f6, "p_947->g_482.f6", print_hash_value);
    transparent_crc(p_947->g_482.f7, "p_947->g_482.f7", print_hash_value);
    transparent_crc(p_947->g_483.f0, "p_947->g_483.f0", print_hash_value);
    transparent_crc(p_947->g_483.f1, "p_947->g_483.f1", print_hash_value);
    transparent_crc(p_947->g_483.f2, "p_947->g_483.f2", print_hash_value);
    transparent_crc(p_947->g_483.f3, "p_947->g_483.f3", print_hash_value);
    transparent_crc(p_947->g_483.f4, "p_947->g_483.f4", print_hash_value);
    transparent_crc(p_947->g_483.f5, "p_947->g_483.f5", print_hash_value);
    transparent_crc(p_947->g_483.f6, "p_947->g_483.f6", print_hash_value);
    transparent_crc(p_947->g_483.f7, "p_947->g_483.f7", print_hash_value);
    transparent_crc(p_947->g_527.s0, "p_947->g_527.s0", print_hash_value);
    transparent_crc(p_947->g_527.s1, "p_947->g_527.s1", print_hash_value);
    transparent_crc(p_947->g_527.s2, "p_947->g_527.s2", print_hash_value);
    transparent_crc(p_947->g_527.s3, "p_947->g_527.s3", print_hash_value);
    transparent_crc(p_947->g_527.s4, "p_947->g_527.s4", print_hash_value);
    transparent_crc(p_947->g_527.s5, "p_947->g_527.s5", print_hash_value);
    transparent_crc(p_947->g_527.s6, "p_947->g_527.s6", print_hash_value);
    transparent_crc(p_947->g_527.s7, "p_947->g_527.s7", print_hash_value);
    transparent_crc(p_947->g_555.x, "p_947->g_555.x", print_hash_value);
    transparent_crc(p_947->g_555.y, "p_947->g_555.y", print_hash_value);
    transparent_crc(p_947->g_555.z, "p_947->g_555.z", print_hash_value);
    transparent_crc(p_947->g_555.w, "p_947->g_555.w", print_hash_value);
    transparent_crc(p_947->g_571.x, "p_947->g_571.x", print_hash_value);
    transparent_crc(p_947->g_571.y, "p_947->g_571.y", print_hash_value);
    transparent_crc(p_947->g_574.x, "p_947->g_574.x", print_hash_value);
    transparent_crc(p_947->g_574.y, "p_947->g_574.y", print_hash_value);
    transparent_crc(p_947->g_588.s0, "p_947->g_588.s0", print_hash_value);
    transparent_crc(p_947->g_588.s1, "p_947->g_588.s1", print_hash_value);
    transparent_crc(p_947->g_588.s2, "p_947->g_588.s2", print_hash_value);
    transparent_crc(p_947->g_588.s3, "p_947->g_588.s3", print_hash_value);
    transparent_crc(p_947->g_588.s4, "p_947->g_588.s4", print_hash_value);
    transparent_crc(p_947->g_588.s5, "p_947->g_588.s5", print_hash_value);
    transparent_crc(p_947->g_588.s6, "p_947->g_588.s6", print_hash_value);
    transparent_crc(p_947->g_588.s7, "p_947->g_588.s7", print_hash_value);
    transparent_crc(p_947->g_588.s8, "p_947->g_588.s8", print_hash_value);
    transparent_crc(p_947->g_588.s9, "p_947->g_588.s9", print_hash_value);
    transparent_crc(p_947->g_588.sa, "p_947->g_588.sa", print_hash_value);
    transparent_crc(p_947->g_588.sb, "p_947->g_588.sb", print_hash_value);
    transparent_crc(p_947->g_588.sc, "p_947->g_588.sc", print_hash_value);
    transparent_crc(p_947->g_588.sd, "p_947->g_588.sd", print_hash_value);
    transparent_crc(p_947->g_588.se, "p_947->g_588.se", print_hash_value);
    transparent_crc(p_947->g_588.sf, "p_947->g_588.sf", print_hash_value);
    transparent_crc(p_947->g_637.f0, "p_947->g_637.f0", print_hash_value);
    transparent_crc(p_947->g_637.f1, "p_947->g_637.f1", print_hash_value);
    transparent_crc(p_947->g_637.f2, "p_947->g_637.f2", print_hash_value);
    transparent_crc(p_947->g_637.f3, "p_947->g_637.f3", print_hash_value);
    transparent_crc(p_947->g_637.f4, "p_947->g_637.f4", print_hash_value);
    transparent_crc(p_947->g_637.f5, "p_947->g_637.f5", print_hash_value);
    transparent_crc(p_947->g_637.f6, "p_947->g_637.f6", print_hash_value);
    transparent_crc(p_947->g_637.f7, "p_947->g_637.f7", print_hash_value);
    transparent_crc(p_947->g_640.f0, "p_947->g_640.f0", print_hash_value);
    transparent_crc(p_947->g_640.f1, "p_947->g_640.f1", print_hash_value);
    transparent_crc(p_947->g_640.f2, "p_947->g_640.f2", print_hash_value);
    transparent_crc(p_947->g_640.f3, "p_947->g_640.f3", print_hash_value);
    transparent_crc(p_947->g_640.f4, "p_947->g_640.f4", print_hash_value);
    transparent_crc(p_947->g_640.f5, "p_947->g_640.f5", print_hash_value);
    transparent_crc(p_947->g_640.f6, "p_947->g_640.f6", print_hash_value);
    transparent_crc(p_947->g_640.f7, "p_947->g_640.f7", print_hash_value);
    transparent_crc(p_947->g_689.f0, "p_947->g_689.f0", print_hash_value);
    transparent_crc(p_947->g_689.f1, "p_947->g_689.f1", print_hash_value);
    transparent_crc(p_947->g_689.f2, "p_947->g_689.f2", print_hash_value);
    transparent_crc(p_947->g_689.f3, "p_947->g_689.f3", print_hash_value);
    transparent_crc(p_947->g_689.f4, "p_947->g_689.f4", print_hash_value);
    transparent_crc(p_947->g_689.f5, "p_947->g_689.f5", print_hash_value);
    transparent_crc(p_947->g_689.f6, "p_947->g_689.f6", print_hash_value);
    transparent_crc(p_947->g_689.f7, "p_947->g_689.f7", print_hash_value);
    transparent_crc(p_947->g_707.s0, "p_947->g_707.s0", print_hash_value);
    transparent_crc(p_947->g_707.s1, "p_947->g_707.s1", print_hash_value);
    transparent_crc(p_947->g_707.s2, "p_947->g_707.s2", print_hash_value);
    transparent_crc(p_947->g_707.s3, "p_947->g_707.s3", print_hash_value);
    transparent_crc(p_947->g_707.s4, "p_947->g_707.s4", print_hash_value);
    transparent_crc(p_947->g_707.s5, "p_947->g_707.s5", print_hash_value);
    transparent_crc(p_947->g_707.s6, "p_947->g_707.s6", print_hash_value);
    transparent_crc(p_947->g_707.s7, "p_947->g_707.s7", print_hash_value);
    transparent_crc(p_947->g_719.f0, "p_947->g_719.f0", print_hash_value);
    transparent_crc(p_947->g_719.f1, "p_947->g_719.f1", print_hash_value);
    transparent_crc(p_947->g_719.f2, "p_947->g_719.f2", print_hash_value);
    transparent_crc(p_947->g_719.f3, "p_947->g_719.f3", print_hash_value);
    transparent_crc(p_947->g_719.f4, "p_947->g_719.f4", print_hash_value);
    transparent_crc(p_947->g_719.f5, "p_947->g_719.f5", print_hash_value);
    transparent_crc(p_947->g_719.f6, "p_947->g_719.f6", print_hash_value);
    transparent_crc(p_947->g_719.f7, "p_947->g_719.f7", print_hash_value);
    transparent_crc(p_947->g_734.f0, "p_947->g_734.f0", print_hash_value);
    transparent_crc(p_947->g_734.f1, "p_947->g_734.f1", print_hash_value);
    transparent_crc(p_947->g_734.f2, "p_947->g_734.f2", print_hash_value);
    transparent_crc(p_947->g_734.f3, "p_947->g_734.f3", print_hash_value);
    transparent_crc(p_947->g_734.f4, "p_947->g_734.f4", print_hash_value);
    transparent_crc(p_947->g_734.f5, "p_947->g_734.f5", print_hash_value);
    transparent_crc(p_947->g_734.f6, "p_947->g_734.f6", print_hash_value);
    transparent_crc(p_947->g_734.f7, "p_947->g_734.f7", print_hash_value);
    transparent_crc(p_947->g_757, "p_947->g_757", print_hash_value);
    transparent_crc(p_947->g_762.f0, "p_947->g_762.f0", print_hash_value);
    transparent_crc(p_947->g_762.f1, "p_947->g_762.f1", print_hash_value);
    transparent_crc(p_947->g_762.f2, "p_947->g_762.f2", print_hash_value);
    transparent_crc(p_947->g_762.f3, "p_947->g_762.f3", print_hash_value);
    transparent_crc(p_947->g_762.f4, "p_947->g_762.f4", print_hash_value);
    transparent_crc(p_947->g_762.f5, "p_947->g_762.f5", print_hash_value);
    transparent_crc(p_947->g_762.f6, "p_947->g_762.f6", print_hash_value);
    transparent_crc(p_947->g_762.f7, "p_947->g_762.f7", print_hash_value);
    transparent_crc(p_947->g_768, "p_947->g_768", print_hash_value);
    transparent_crc(p_947->g_773.f0, "p_947->g_773.f0", print_hash_value);
    transparent_crc(p_947->g_773.f1, "p_947->g_773.f1", print_hash_value);
    transparent_crc(p_947->g_773.f2, "p_947->g_773.f2", print_hash_value);
    transparent_crc(p_947->g_773.f3, "p_947->g_773.f3", print_hash_value);
    transparent_crc(p_947->g_773.f4, "p_947->g_773.f4", print_hash_value);
    transparent_crc(p_947->g_773.f5, "p_947->g_773.f5", print_hash_value);
    transparent_crc(p_947->g_773.f6, "p_947->g_773.f6", print_hash_value);
    transparent_crc(p_947->g_773.f7, "p_947->g_773.f7", print_hash_value);
    transparent_crc(p_947->g_791.s0, "p_947->g_791.s0", print_hash_value);
    transparent_crc(p_947->g_791.s1, "p_947->g_791.s1", print_hash_value);
    transparent_crc(p_947->g_791.s2, "p_947->g_791.s2", print_hash_value);
    transparent_crc(p_947->g_791.s3, "p_947->g_791.s3", print_hash_value);
    transparent_crc(p_947->g_791.s4, "p_947->g_791.s4", print_hash_value);
    transparent_crc(p_947->g_791.s5, "p_947->g_791.s5", print_hash_value);
    transparent_crc(p_947->g_791.s6, "p_947->g_791.s6", print_hash_value);
    transparent_crc(p_947->g_791.s7, "p_947->g_791.s7", print_hash_value);
    transparent_crc(p_947->g_791.s8, "p_947->g_791.s8", print_hash_value);
    transparent_crc(p_947->g_791.s9, "p_947->g_791.s9", print_hash_value);
    transparent_crc(p_947->g_791.sa, "p_947->g_791.sa", print_hash_value);
    transparent_crc(p_947->g_791.sb, "p_947->g_791.sb", print_hash_value);
    transparent_crc(p_947->g_791.sc, "p_947->g_791.sc", print_hash_value);
    transparent_crc(p_947->g_791.sd, "p_947->g_791.sd", print_hash_value);
    transparent_crc(p_947->g_791.se, "p_947->g_791.se", print_hash_value);
    transparent_crc(p_947->g_791.sf, "p_947->g_791.sf", print_hash_value);
    transparent_crc(p_947->g_797.s0, "p_947->g_797.s0", print_hash_value);
    transparent_crc(p_947->g_797.s1, "p_947->g_797.s1", print_hash_value);
    transparent_crc(p_947->g_797.s2, "p_947->g_797.s2", print_hash_value);
    transparent_crc(p_947->g_797.s3, "p_947->g_797.s3", print_hash_value);
    transparent_crc(p_947->g_797.s4, "p_947->g_797.s4", print_hash_value);
    transparent_crc(p_947->g_797.s5, "p_947->g_797.s5", print_hash_value);
    transparent_crc(p_947->g_797.s6, "p_947->g_797.s6", print_hash_value);
    transparent_crc(p_947->g_797.s7, "p_947->g_797.s7", print_hash_value);
    transparent_crc(p_947->g_797.s8, "p_947->g_797.s8", print_hash_value);
    transparent_crc(p_947->g_797.s9, "p_947->g_797.s9", print_hash_value);
    transparent_crc(p_947->g_797.sa, "p_947->g_797.sa", print_hash_value);
    transparent_crc(p_947->g_797.sb, "p_947->g_797.sb", print_hash_value);
    transparent_crc(p_947->g_797.sc, "p_947->g_797.sc", print_hash_value);
    transparent_crc(p_947->g_797.sd, "p_947->g_797.sd", print_hash_value);
    transparent_crc(p_947->g_797.se, "p_947->g_797.se", print_hash_value);
    transparent_crc(p_947->g_797.sf, "p_947->g_797.sf", print_hash_value);
    transparent_crc(p_947->g_916, "p_947->g_916", print_hash_value);
    transparent_crc(p_947->v_collective, "p_947->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 27; i++)
            transparent_crc(p_947->g_special_values[i + 27 * get_linear_group_id()], "p_947->g_special_values[i + 27 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 27; i++)
            transparent_crc(p_947->l_special_values[i], "p_947->l_special_values[i]", print_hash_value);
    transparent_crc(p_947->l_comm_values[get_linear_local_id()], "p_947->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_947->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()], "p_947->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
