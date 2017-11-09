// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,35,1 -l 97,1,1
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

__constant uint32_t permutations[10][97] = {
{63,95,65,74,56,80,31,66,11,15,35,93,41,23,52,58,48,85,29,30,90,20,13,7,42,71,8,75,88,36,14,10,40,72,19,69,91,55,12,50,5,34,47,27,2,53,81,86,70,83,51,3,96,16,49,79,57,26,64,60,22,25,89,28,38,62,1,73,21,87,32,67,43,77,45,92,4,33,59,39,82,84,76,18,68,94,17,6,54,61,37,9,46,0,44,24,78}, // permutation 0
{13,86,18,95,47,0,84,78,81,60,83,40,69,11,50,53,73,36,89,37,34,71,1,79,15,65,91,55,62,93,94,33,43,92,16,31,12,6,38,76,80,27,90,29,68,63,67,54,24,4,39,17,5,21,48,56,57,85,25,49,3,58,14,19,30,61,45,26,59,51,35,64,66,23,75,88,72,77,41,9,82,52,20,28,2,44,87,46,96,8,74,7,32,42,10,70,22}, // permutation 1
{65,45,57,87,30,1,89,35,50,60,91,42,16,40,41,93,64,76,21,92,68,63,62,44,54,38,18,74,23,12,26,7,10,15,37,73,96,8,81,22,85,52,47,9,55,19,13,14,95,34,43,11,59,24,20,77,51,56,66,71,72,70,29,79,78,46,32,90,0,49,61,88,86,2,25,75,69,33,58,4,84,82,28,31,6,80,53,83,48,27,17,94,67,36,39,5,3}, // permutation 2
{23,40,65,69,56,27,96,79,80,74,86,57,29,68,87,73,66,6,49,12,25,37,82,39,28,89,13,38,63,93,83,75,7,22,94,21,51,43,45,76,55,34,58,9,30,36,78,50,3,60,46,90,53,26,32,33,17,0,71,35,67,4,88,85,77,11,24,91,72,14,47,59,81,10,31,61,1,41,15,18,20,84,44,62,52,64,19,5,8,92,95,48,2,70,16,42,54}, // permutation 3
{67,20,73,65,52,13,30,72,77,57,9,96,10,93,1,4,21,28,16,0,63,25,42,91,78,29,33,60,34,66,43,53,64,75,68,6,7,79,92,48,81,3,80,83,38,22,59,88,86,37,24,84,76,95,58,5,19,27,87,23,94,26,8,55,47,40,39,89,14,56,54,11,51,85,31,70,69,2,50,17,32,49,71,45,18,74,82,12,62,44,90,35,41,46,61,36,15}, // permutation 4
{75,38,3,30,96,36,90,35,71,7,39,8,69,78,0,53,64,77,16,20,40,91,45,74,87,26,5,72,51,52,66,21,85,94,73,29,41,31,11,46,62,93,67,57,86,55,82,2,34,56,4,47,76,1,15,54,33,58,84,59,42,61,28,25,23,10,88,6,95,37,83,70,27,68,18,22,14,32,49,92,9,89,17,19,63,81,80,43,24,50,13,48,60,44,79,12,65}, // permutation 5
{24,65,11,93,56,84,66,47,94,95,54,78,26,81,13,64,72,27,38,48,63,16,35,40,23,86,87,61,92,39,22,42,73,46,60,20,14,0,5,89,36,80,18,79,30,37,41,91,74,69,25,70,62,57,59,68,90,75,52,67,71,34,55,1,43,51,76,85,83,45,15,50,19,9,4,31,28,96,6,33,49,29,17,10,53,2,32,58,7,12,77,8,88,44,82,21,3}, // permutation 6
{80,54,89,47,3,87,90,62,64,1,16,6,29,35,61,46,83,56,59,8,55,20,12,76,95,7,45,0,25,17,84,79,88,40,23,96,75,58,81,94,78,66,69,72,37,22,15,48,4,10,27,74,93,21,50,49,51,5,41,53,82,24,11,85,19,36,18,9,34,14,63,91,77,52,57,86,2,43,28,31,71,26,30,33,65,60,38,92,39,67,68,70,44,42,32,73,13}, // permutation 7
{13,6,72,29,42,77,80,35,44,34,86,26,69,17,52,11,79,73,74,32,84,50,15,40,59,5,25,37,9,61,88,75,23,70,96,90,36,22,64,21,60,68,57,95,83,0,48,85,58,30,53,33,87,54,91,49,62,38,24,76,67,8,47,20,92,43,14,39,7,51,10,65,93,55,94,78,3,66,4,41,82,2,63,81,71,56,89,28,31,16,46,45,27,12,19,18,1}, // permutation 8
{52,94,91,10,3,61,69,38,30,87,58,90,82,92,72,34,71,17,28,39,83,27,56,8,88,93,89,42,73,25,66,60,50,76,70,7,1,63,29,6,53,68,59,51,24,5,48,44,41,4,32,86,21,13,31,18,35,14,67,74,85,40,45,43,36,79,2,84,19,49,12,55,20,15,81,9,64,75,62,78,11,96,16,33,77,23,47,65,0,57,26,95,54,37,46,22,80} // permutation 9
};

// Seed: 1022664780

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   volatile uint32_t  f1;
   volatile uint64_t  f2;
   volatile int8_t  f3;
   int8_t  f4;
   uint8_t  f5;
};

union U1 {
   int8_t * volatile  f0;
   int8_t * f1;
   int32_t  f2;
};

struct S2 {
    int8_t g_3;
    int8_t *g_2;
    uint32_t g_26[5][10][2];
    int32_t g_53;
    int32_t ** volatile g_54;
    int32_t ** volatile g_55;
    int32_t *g_74[4];
    int32_t ** volatile g_73;
    uint32_t g_81;
    int32_t g_91[10][4][6];
    int32_t *g_99;
    struct S0 g_100;
    struct S0 * volatile g_101;
    int16_t g_113;
    struct S0 g_114;
    volatile VECTOR(int32_t, 16) g_116;
    VECTOR(int16_t, 8) g_126;
    volatile VECTOR(uint16_t, 8) g_129;
    VECTOR(int64_t, 4) g_139;
    volatile VECTOR(uint32_t, 16) g_142;
    uint64_t g_161;
    int32_t g_169;
    int32_t g_172;
    volatile VECTOR(int8_t, 16) g_206;
    volatile int32_t g_250;
    volatile struct S0 g_259;
    volatile VECTOR(int32_t, 16) g_260;
    int32_t g_271;
    volatile union U1 g_286[5];
    volatile VECTOR(int8_t, 2) g_293;
    uint16_t g_307[1];
    int64_t g_320;
    int64_t g_353;
    volatile int32_t g_355;
    VECTOR(int8_t, 2) g_380;
    volatile VECTOR(int8_t, 2) g_381;
    VECTOR(int8_t, 16) g_382;
    VECTOR(int8_t, 2) g_383;
    VECTOR(uint64_t, 8) g_414;
    volatile struct S0 g_422;
    uint8_t *g_461;
    int32_t g_468;
    volatile int32_t g_477;
    volatile int32_t *g_476[8][9];
    volatile int32_t **g_475[3][3][4];
    VECTOR(uint8_t, 2) g_512;
    VECTOR(int16_t, 16) g_536;
    VECTOR(int8_t, 8) g_542;
    volatile struct S0 g_571;
    volatile struct S0 g_572[1];
    volatile union U1 *g_580;
    volatile union U1 ** volatile g_579;
    struct S0 g_609;
    volatile VECTOR(uint64_t, 16) g_613;
    int64_t g_626;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S2 * p_637);
int8_t  func_4(int64_t  p_5, int8_t * p_6, int8_t * p_7, int32_t  p_8, struct S2 * p_637);
int64_t  func_9(int8_t * p_10, uint32_t  p_11, int32_t  p_12, struct S2 * p_637);
int8_t * func_13(uint16_t  p_14, int8_t * p_15, uint32_t  p_16, int8_t * p_17, struct S2 * p_637);
int16_t  func_19(int8_t * p_20, int8_t * p_21, struct S2 * p_637);
int8_t * func_22(int16_t  p_23, int8_t * p_24, struct S2 * p_637);
uint8_t  func_34(uint32_t  p_35, struct S2 * p_637);
uint16_t  func_62(uint64_t  p_63, uint16_t  p_64, uint64_t  p_65, int64_t  p_66, struct S2 * p_637);
uint32_t  func_68(int8_t * p_69, struct S2 * p_637);
uint64_t  func_84(uint64_t  p_85, int32_t ** p_86, uint32_t  p_87, int8_t * p_88, struct S2 * p_637);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_637->g_2 p_637->g_comm_values p_637->l_comm_values p_637->g_3 p_637->g_26 p_637->g_53 p_637->g_73 p_637->g_81 p_637->g_100 p_637->g_101 p_637->g_91 p_637->g_114 p_637->g_116 p_637->g_126 p_637->g_129 p_637->g_139 p_637->g_142 p_637->g_161 p_637->g_74 p_637->g_172 p_637->g_169 p_637->g_320 p_637->g_286 p_637->g_307 p_637->g_380 p_637->g_381 p_637->g_382 p_637->g_383 p_637->g_414 p_637->g_206 p_637->g_250 p_637->g_422 p_637->g_259.f2 p_637->g_468 p_637->g_475 p_637->g_99 p_637->g_461 p_637->g_512 p_637->g_536 p_637->g_542 p_637->g_571 p_637->g_579 p_637->g_609 p_637->g_355
 * writes: p_637->g_26 p_637->g_3 p_637->g_74 p_637->g_99 p_637->g_100 p_637->g_113 p_637->g_91 p_637->g_comm_values p_637->g_161 p_637->g_169 p_637->g_53 p_637->g_172 p_637->g_307 p_637->g_114.f5 p_637->g_461 p_637->g_468 p_637->g_572 p_637->g_580 p_637->g_320 p_637->g_609 p_637->g_81
 */
int16_t  func_1(struct S2 * p_637)
{ /* block id: 4 */
    VECTOR(int16_t, 16) l_18 = (VECTOR(int16_t, 16))(0x63B6L, (VECTOR(int16_t, 4))(0x63B6L, (VECTOR(int16_t, 2))(0x63B6L, 0x3691L), 0x3691L), 0x3691L, 0x63B6L, 0x3691L, (VECTOR(int16_t, 2))(0x63B6L, 0x3691L), (VECTOR(int16_t, 2))(0x63B6L, 0x3691L), 0x63B6L, 0x3691L, 0x63B6L, 0x3691L);
    int8_t *l_530 = (void*)0;
    VECTOR(int16_t, 2) l_537 = (VECTOR(int16_t, 2))((-1L), 1L);
    int16_t l_538[2];
    int64_t *l_581 = &p_637->g_320;
    int8_t **l_582 = &l_530;
    int32_t *l_583 = &p_637->g_172;
    int16_t l_614 = 2L;
    int32_t l_623 = 1L;
    int32_t l_627 = 0x4A1132C6L;
    int32_t l_628 = 0x6595EF5BL;
    int i;
    for (i = 0; i < 2; i++)
        l_538[i] = 1L;
    if ((p_637->g_2 == (((func_4(((*l_581) = func_9(func_13((((VECTOR(int16_t, 8))(l_18.s7ab6dad8)).s1 && func_19(func_22(p_637->g_comm_values[p_637->tid], &p_637->g_3, p_637), l_530, p_637)), p_637->g_2, ((safe_lshift_func_int16_t_s_u(p_637->g_114.f0, 13)) >= (((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x5A72L, 0x1B29L)), 0x0776L, 0x4B07L)).xzxxwzxzwzyzxywy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_637->g_536.s0def)).odd)).xyyxyxxyxxyxxyyy))).even)).odd, ((VECTOR(int16_t, 4))(l_537.yyxx))))).x, (0x15481592DE224D9DL & l_538[1]))) ^ 1UL) | FAKE_DIVERGE(p_637->global_1_offset, get_global_id(1), 10))), l_530, p_637), p_637->g_114.f4, p_637->g_114.f4, p_637)), l_530, p_637->g_2, p_637->g_542.s7, p_637) >= l_538[1]) >= 0x2074L) , l_530)))
    { /* block id: 247 */
        int32_t **l_584 = &p_637->g_74[1];
        l_582 = &p_637->g_2;
        (*l_584) = l_583;
    }
    else
    { /* block id: 250 */
        uint32_t *l_587[7];
        uint32_t *l_588 = &p_637->g_26[1][7][1];
        int32_t l_595 = 1L;
        uint32_t l_596[9] = {0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L,0xE0ABDF47L};
        uint16_t *l_597 = &p_637->g_307[0];
        int32_t l_604 = (-1L);
        int16_t l_607[9] = {0x625CL,0x625CL,0x625CL,0x625CL,0x625CL,0x625CL,0x625CL,0x625CL,0x625CL};
        int32_t *l_608 = &p_637->g_91[3][2][0];
        struct S0 *l_610 = &p_637->g_609;
        int i;
        for (i = 0; i < 7; i++)
            l_587[i] = &p_637->g_81;
        (*l_608) &= ((safe_add_func_uint8_t_u_u(((((l_587[5] != (l_588 = l_587[6])) || (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((l_595 >= (((*l_597) ^= l_596[0]) || (safe_sub_func_int16_t_s_s(0x0687L, 1UL)))) || ((safe_add_func_uint64_t_u_u(l_595, (((VECTOR(uint8_t, 8))(0xB1L, (--(*p_637->g_461)), 0x8DL, 8UL, 1UL, 0xBAL, 255UL, 1UL)).s5 | 0x31L))) != (((*l_597)++) || ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((void*)0 == &l_604), l_607[1], 0xFAL, 1UL, 250UL, 4UL, ((VECTOR(uint8_t, 2))(0xFBL)), ((VECTOR(uint8_t, 8))(0x7CL)))), ((VECTOR(uint8_t, 16))(7UL)), ((VECTOR(uint8_t, 16))(253UL))))).s66d2)).y , (*l_583)) ^ 0UL)))), 0x5BL)), l_604)), 2))) == 0x17181CBEAFE043D1L) && (**p_637->g_73)), (*l_583))) <= 1UL);
        (*l_610) = p_637->g_609;
        for (p_637->g_609.f5 = 0; (p_637->g_609.f5 < 14); p_637->g_609.f5++)
        { /* block id: 259 */
            int8_t l_619 = 0L;
            if ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_637->g_613.sc4)).xyxx)).z | l_614))
            { /* block id: 260 */
                if ((*l_608))
                    break;
            }
            else
            { /* block id: 262 */
                uint64_t l_629 = 18446744073709551606UL;
                int32_t **l_632[9] = {&p_637->g_99,&l_608,&p_637->g_99,&p_637->g_99,&l_608,&p_637->g_99,&p_637->g_99,&l_608,&p_637->g_99};
                int i;
                for (p_637->g_81 = 10; (p_637->g_81 >= 7); --p_637->g_81)
                { /* block id: 265 */
                    int32_t *l_617 = (void*)0;
                    int32_t *l_618 = &l_604;
                    int32_t *l_620 = &l_604;
                    int32_t *l_621 = &p_637->g_53;
                    int32_t *l_622 = (void*)0;
                    int32_t *l_624[5][4] = {{&p_637->g_172,(void*)0,&p_637->g_172,&p_637->g_172},{&p_637->g_172,(void*)0,&p_637->g_172,&p_637->g_172},{&p_637->g_172,(void*)0,&p_637->g_172,&p_637->g_172},{&p_637->g_172,(void*)0,&p_637->g_172,&p_637->g_172},{&p_637->g_172,(void*)0,&p_637->g_172,&p_637->g_172}};
                    int8_t l_625 = 0x41L;
                    int i, j;
                    l_629++;
                }
                l_608 = (*p_637->g_73);
            }
            (*l_608) = (((safe_rshift_func_int8_t_s_s((+(*p_637->g_2)), 3)) < (safe_rshift_func_int8_t_s_s(((*l_583) ^= l_619), (*p_637->g_2)))) < p_637->g_307[0]);
        }
    }
    return p_637->g_355;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_2 p_637->g_3
 * writes:
 */
int8_t  func_4(int64_t  p_5, int8_t * p_6, int8_t * p_7, int32_t  p_8, struct S2 * p_637)
{ /* block id: 245 */
    return (*p_637->g_2);
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_2 p_637->g_3 p_637->g_99 p_637->g_53 p_637->g_91 p_637->g_579 p_637->g_100.f0
 * writes: p_637->g_53 p_637->g_91 p_637->g_580
 */
int64_t  func_9(int8_t * p_10, uint32_t  p_11, int32_t  p_12, struct S2 * p_637)
{ /* block id: 240 */
    uint8_t l_578 = 0x72L;
    (*p_637->g_99) &= ((*p_637->g_2) < l_578);
    (*p_637->g_579) = &p_637->g_286[1];
    return p_637->g_100.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_100.f5 p_637->g_542 p_637->g_99 p_637->g_53 p_637->g_91 p_637->g_114.f2 p_637->g_114.f0 p_637->g_3 p_637->g_468 p_637->g_461 p_637->g_114.f5 p_637->g_286 p_637->g_172 p_637->g_26 p_637->g_139 p_637->g_512 p_637->g_571
 * writes: p_637->g_53 p_637->g_91 p_637->g_172 p_637->g_468 p_637->g_3 p_637->g_26 p_637->g_572
 */
int8_t * func_13(uint16_t  p_14, int8_t * p_15, uint32_t  p_16, int8_t * p_17, struct S2 * p_637)
{ /* block id: 214 */
    VECTOR(uint32_t, 4) l_541 = (VECTOR(uint32_t, 4))(0xDE6033CCL, (VECTOR(uint32_t, 2))(0xDE6033CCL, 0xA0CF407DL), 0xA0CF407DL);
    int64_t *l_546[4] = {&p_637->g_320,&p_637->g_320,&p_637->g_320,&p_637->g_320};
    int64_t **l_545 = &l_546[1];
    int8_t *l_547 = (void*)0;
    int32_t l_548 = 0x20D0C17EL;
    int32_t *l_549 = &p_637->g_172;
    int32_t l_550 = 0x3183910BL;
    VECTOR(int32_t, 8) l_573 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x15443FD9L), 0x15443FD9L), 0x15443FD9L, 0L, 0x15443FD9L);
    uint64_t *l_575 = (void*)0;
    uint64_t **l_574 = &l_575;
    uint64_t ***l_576 = &l_574;
    uint64_t **l_577 = &l_575;
    int i;
    l_550 = (safe_mod_func_uint16_t_u_u((((VECTOR(uint32_t, 2))(l_541.zy)).hi | ((*l_549) = ((0x36672763L <= p_14) == (((p_637->g_100.f5 >= (((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_637->g_542.s17)))).xxyyyxyx, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_541.z, ((VECTOR(int8_t, 4))((((safe_mul_func_uint16_t_u_u((((((l_545 == (void*)0) & ((p_17 != l_547) != (l_548 = ((*p_637->g_99) &= (l_541.z != l_541.w))))) ^ p_637->g_114.f2) == p_14) >= FAKE_DIVERGE(p_637->group_2_offset, get_group_id(2), 10)), 0x0A17L)) & p_637->g_114.f0) > 1UL), 6L, (-1L), (-10L))), ((VECTOR(int8_t, 2))(0x08L)), (-1L))).odd, ((VECTOR(int8_t, 4))(0x1BL)), ((VECTOR(int8_t, 4))(0L))))).yzyxxyyw))).s6 & l_541.z)) < l_541.x) , (*p_15))))), p_14));
    for (p_637->g_468 = (-6); (p_637->g_468 == 26); p_637->g_468++)
    { /* block id: 221 */
        int32_t l_563[4];
        int i;
        for (i = 0; i < 4; i++)
            l_563[i] = 0x4F13CBFAL;
        for (p_637->g_53 = 0; (p_637->g_53 <= 3); p_637->g_53++)
        { /* block id: 224 */
            for (p_637->g_3 = 0; (p_637->g_3 < 10); p_637->g_3++)
            { /* block id: 227 */
                uint32_t *l_564[1][4];
                uint64_t *l_566[2][5][2] = {{{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161}},{{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161},{&p_637->g_161,&p_637->g_161}}};
                uint64_t **l_565 = &l_566[1][3][0];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_564[i][j] = &p_637->g_26[2][6][0];
                }
                (*l_549) = (safe_div_func_int32_t_s_s(((*p_637->g_461) , (((safe_add_func_uint32_t_u_u((p_637->g_286[2] , (p_637->g_26[4][8][1] ^= (safe_mul_func_int16_t_s_s(l_563[3], (*l_549))))), (((p_637->g_139.y > (((*l_565) = l_546[1]) == (void*)0)) >= 0x4F64F263L) , (~(safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((VECTOR(int32_t, 2))(0x626F09ACL, 9L)).hi != ((*p_637->g_461) , p_16)), (-8L))), 2L)))))) && p_16) <= p_14)), p_637->g_512.y));
            }
            p_637->g_572[0] = p_637->g_571;
        }
        (*l_549) |= p_14;
    }
    (*l_549) = ((VECTOR(int32_t, 8))(l_573.s76230103)).s0;
    l_577 = ((*l_576) = l_574);
    return l_547;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_19(int8_t * p_20, int8_t * p_21, struct S2 * p_637)
{ /* block id: 212 */
    uint8_t l_531 = 248UL;
    return l_531;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->l_comm_values p_637->g_3 p_637->g_26 p_637->g_53 p_637->g_73 p_637->g_81 p_637->g_100 p_637->g_101 p_637->g_91 p_637->g_114 p_637->g_116 p_637->g_126 p_637->g_129 p_637->g_comm_values p_637->g_139 p_637->g_142 p_637->g_2 p_637->g_161 p_637->g_74 p_637->g_172 p_637->g_169 p_637->g_320 p_637->g_286 p_637->g_307 p_637->g_380 p_637->g_381 p_637->g_382 p_637->g_383 p_637->g_414 p_637->g_206 p_637->g_250 p_637->g_422 p_637->g_259.f2 p_637->g_468 p_637->g_475 p_637->g_99 p_637->g_461 p_637->g_512
 * writes: p_637->g_26 p_637->g_3 p_637->g_74 p_637->g_99 p_637->g_100 p_637->g_113 p_637->g_91 p_637->g_comm_values p_637->g_161 p_637->g_169 p_637->g_53 p_637->g_172 p_637->g_307 p_637->g_114.f5 p_637->g_461
 */
int8_t * func_22(int16_t  p_23, int8_t * p_24, struct S2 * p_637)
{ /* block id: 5 */
    uint32_t *l_25 = &p_637->g_26[1][7][1];
    int32_t l_29 = 0x63523E24L;
    int32_t *l_509 = &l_29;
    struct S0 *l_513 = (void*)0;
    uint16_t *l_514 = &p_637->g_307[0];
    struct S0 **l_515 = (void*)0;
    struct S0 *l_517 = &p_637->g_100;
    struct S0 **l_516 = &l_517;
    int32_t *l_518 = &p_637->g_91[9][3][2];
    int32_t *l_519 = (void*)0;
    int32_t *l_520 = &l_29;
    int32_t *l_521 = &p_637->g_53;
    int32_t l_522 = 0L;
    int32_t *l_523 = (void*)0;
    int32_t *l_524[8][7];
    int32_t l_525[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(uint32_t, 8) l_526 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xF638D919L), 0xF638D919L), 0xF638D919L, 0UL, 0xF638D919L);
    int8_t *l_529 = (void*)0;
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
            l_524[i][j] = &p_637->g_172;
    }
    (*l_509) = (FAKE_DIVERGE(p_637->local_0_offset, get_local_id(0), 10) && ((65534UL == ((((*l_25) = GROUP_DIVERGE(0, 1)) >= FAKE_DIVERGE(p_637->group_2_offset, get_group_id(2), 10)) || (safe_mul_func_int8_t_s_s((p_637->l_comm_values[(safe_mod_func_uint32_t_u_u(p_637->tid, 97))] , ((l_29 & (safe_add_func_uint16_t_u_u(65535UL, l_29))) || p_23)), (safe_mul_func_uint8_t_u_u(func_34((safe_rshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((0x38E0L > (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(p_637->l_comm_values[(safe_mod_func_uint32_t_u_u(p_637->tid, 97))], (((0x309FL & (-8L)) > p_637->l_comm_values[(safe_mod_func_uint32_t_u_u(p_637->tid, 97))]) ^ l_29))) <= l_29), (*p_24))), GROUP_DIVERGE(1, 1))), l_29)), 14)), p_23))), l_29)) | p_637->g_26[1][0][0]), 5)), p_637), 5L)))))) , l_29));
    (*l_509) = ((*p_637->g_99) = (safe_sub_func_uint32_t_u_u(((*p_24) || ((VECTOR(uint8_t, 4))(p_637->g_512.xxxy)).w), (!(l_513 != ((*l_516) = (((void*)0 == l_514) , l_513)))))));
    l_526.s5--;
    return l_529;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_3 p_637->g_53 p_637->g_73 p_637->g_81 p_637->g_100 p_637->g_101 p_637->g_91 p_637->g_114 p_637->g_116 p_637->g_126 p_637->g_129 p_637->g_comm_values p_637->g_139 p_637->g_142 p_637->g_2 p_637->g_161 p_637->g_74 p_637->g_172 p_637->g_169 p_637->g_320 p_637->g_286 p_637->g_307 p_637->g_380 p_637->g_381 p_637->g_382 p_637->g_383 p_637->g_414 p_637->g_206 p_637->g_250 p_637->g_422 p_637->g_259.f2 p_637->g_468 p_637->g_475 p_637->g_99 p_637->g_26 p_637->g_461
 * writes: p_637->g_3 p_637->g_74 p_637->g_99 p_637->g_100 p_637->g_113 p_637->g_91 p_637->g_comm_values p_637->g_161 p_637->g_169 p_637->g_53 p_637->g_26 p_637->g_172 p_637->g_307 p_637->g_114.f5 p_637->g_461
 */
uint8_t  func_34(uint32_t  p_35, struct S2 * p_637)
{ /* block id: 7 */
    int32_t *l_52 = &p_637->g_53;
    int32_t **l_56 = &l_52;
    VECTOR(uint8_t, 2) l_60 = (VECTOR(uint8_t, 2))(0x1BL, 9UL);
    struct S0 *l_199 = &p_637->g_100;
    int32_t l_214 = 0L;
    int32_t l_230 = 0x4DA6C563L;
    int32_t l_233 = 0x44F02E37L;
    int32_t l_243 = 4L;
    int32_t l_245 = (-1L);
    int32_t l_251 = 1L;
    int32_t l_253 = 0x725E3DA1L;
    VECTOR(int32_t, 2) l_261 = (VECTOR(int32_t, 2))(0x1BC567CDL, 0x635E1867L);
    uint16_t *l_306 = &p_637->g_307[0];
    uint16_t l_340[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int32_t *l_388 = &p_637->g_271;
    int32_t l_394[7][1];
    int64_t *l_410 = (void*)0;
    uint8_t *l_462 = (void*)0;
    VECTOR(uint32_t, 8) l_504 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 1UL), 1UL), 1UL, 4294967293UL, 1UL);
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_394[i][j] = 0x68EC1E16L;
    }
    (*l_56) = l_52;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_637->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[(safe_mod_func_uint32_t_u_u(p_637->g_3, 10))][(safe_mod_func_uint32_t_u_u(p_637->tid, 97))]));
    if (p_35)
    { /* block id: 12 */
        uint32_t l_59 = 0x52FFABE4L;
        VECTOR(int16_t, 8) l_67 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x7FB6L), 0x7FB6L), 0x7FB6L, (-10L), 0x7FB6L);
        int8_t *l_70 = &p_637->g_3;
        int32_t **l_89[1];
        int i;
        for (i = 0; i < 1; i++)
            l_89[i] = &l_52;
        for (p_637->g_3 = 0; (p_637->g_3 > (-23)); p_637->g_3 = safe_sub_func_int64_t_s_s(p_637->g_3, 7))
        { /* block id: 15 */
            uint32_t *l_61 = &p_637->g_26[2][7][1];
            int8_t **l_71 = &l_70;
            int32_t l_102[3];
            int i;
            for (i = 0; i < 3; i++)
                l_102[i] = 0x1950EBD8L;
            if (l_59)
                break;
            (**l_56) = ((((((VECTOR(uint8_t, 16))(l_60.yyxxxyxyyxxxxyyy)).s3 & (**l_56)) & ((void*)0 != l_61)) , 0xD870L) <= func_62(((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_67.s0132)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x2365L, 4L)), 0x19D4L, 2L)).even))), 0x73BBL, 0x767EL)).s67)))).odd ^ (func_68(((*l_71) = l_70), p_637) , (safe_div_func_uint64_t_u_u(func_84(p_35, l_89[0], (&l_52 == (void*)0), &p_637->g_3, p_637), p_35)))) || p_35), l_102[1], (**l_56), p_35, p_637));
        }
    }
    else
    { /* block id: 42 */
        int32_t *l_177 = &p_637->g_91[2][3][5];
        uint32_t *l_183[1][1];
        struct S0 *l_196 = &p_637->g_100;
        int32_t l_231[5] = {0x3FA9AAFFL,0x3FA9AAFFL,0x3FA9AAFFL,0x3FA9AAFFL,0x3FA9AAFFL};
        int16_t l_252 = 0x21C6L;
        int16_t l_254 = 0x75BEL;
        VECTOR(uint64_t, 8) l_276 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL);
        int32_t l_345 = (-3L);
        uint64_t *l_392 = &p_637->g_161;
        int32_t *l_397 = &p_637->g_53;
        uint8_t l_467 = 0xA2L;
        VECTOR(uint32_t, 2) l_469 = (VECTOR(uint32_t, 2))(0x40D1A472L, 0x0B761212L);
        VECTOR(uint32_t, 4) l_470 = (VECTOR(uint32_t, 4))(0x9B1C8DE1L, (VECTOR(uint32_t, 2))(0x9B1C8DE1L, 4294967293UL), 4294967293UL);
        VECTOR(uint32_t, 8) l_503 = (VECTOR(uint32_t, 8))(0x54E121DEL, (VECTOR(uint32_t, 4))(0x54E121DEL, (VECTOR(uint32_t, 2))(0x54E121DEL, 4294967295UL), 4294967295UL), 4294967295UL, 0x54E121DEL, 4294967295UL);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_183[i][j] = &p_637->g_26[3][6][1];
        }
        (*l_56) = l_177;
        if ((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(((((void*)0 != l_177) & p_637->g_142.s1) & (safe_sub_func_int32_t_s_s(p_35, ((((*l_177) |= (p_637->g_26[1][7][1] = p_637->g_172)) , ((safe_sub_func_uint64_t_u_u(((*l_52) = (safe_mul_func_uint16_t_u_u(p_35, (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((p_35 | (**l_56)), 65535UL)), (*p_637->g_2)))))), p_35)) != 0x3CD46B94CA932172L)) , p_35)))), (*p_637->g_2))))))
        { /* block id: 47 */
            struct S0 *l_195 = (void*)0;
            struct S0 **l_194[5][4] = {{&l_195,(void*)0,&l_195,&l_195},{&l_195,(void*)0,&l_195,&l_195},{&l_195,(void*)0,&l_195,&l_195},{&l_195,(void*)0,&l_195,&l_195},{&l_195,(void*)0,&l_195,&l_195}};
            int i, j;
            l_199 = ((safe_mul_func_uint8_t_u_u((((*l_52) == ((l_196 = (void*)0) == (((+(p_35 , p_35)) ^ p_637->g_114.f5) , (void*)0))) , (safe_add_func_int32_t_s_s(p_35, ((void*)0 == &l_52)))), FAKE_DIVERGE(p_637->local_2_offset, get_local_id(2), 10))) , &p_637->g_114);
        }
        else
        { /* block id: 50 */
            int8_t **l_207[7][5][5] = {{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}},{{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2},{&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2,&p_637->g_2}}};
            int64_t l_212 = 0x226A998CC790F11AL;
            int32_t l_232 = 0x5392C4ABL;
            int32_t l_238 = 0x33F7561DL;
            int32_t l_239 = (-1L);
            int32_t l_240 = 0x3886A773L;
            int32_t l_241 = 0x17B9BFE1L;
            int32_t l_242 = (-1L);
            int32_t l_249[3][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
            int8_t l_255 = 4L;
            VECTOR(int8_t, 8) l_279 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-5L)), (-5L)), (-5L), 8L, (-5L));
            uint16_t *l_321 = &p_637->g_307[0];
            int32_t *l_389 = &p_637->g_271;
            VECTOR(uint64_t, 16) l_413 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 3UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(3UL, 18446744073709551610UL), 3UL, 18446744073709551610UL, 3UL, 18446744073709551610UL);
            VECTOR(int32_t, 2) l_415 = (VECTOR(int32_t, 2))(0x7D4012CEL, 5L);
            int64_t *l_447[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_447[i] = &p_637->g_320;
            for (p_637->g_172 = 0; (p_637->g_172 != 7); p_637->g_172++)
            { /* block id: 53 */
                uint8_t *l_208 = (void*)0;
                uint8_t *l_209 = &p_637->g_100.f5;
                int32_t l_234 = 0L;
                int32_t l_235 = 0x3C35AC69L;
                int32_t l_236 = 0x2D230726L;
                int32_t l_244 = (-3L);
                int32_t l_246 = 0x24322C28L;
                int32_t l_247 = 1L;
                int32_t l_248[7][7] = {{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L},{0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L,0x26749FE2L}};
                VECTOR(int32_t, 8) l_262 = (VECTOR(int32_t, 8))(0x3B415A30L, (VECTOR(int32_t, 4))(0x3B415A30L, (VECTOR(int32_t, 2))(0x3B415A30L, 1L), 1L), 1L, 0x3B415A30L, 1L);
                VECTOR(int32_t, 16) l_263 = (VECTOR(int32_t, 16))(0x39310816L, (VECTOR(int32_t, 4))(0x39310816L, (VECTOR(int32_t, 2))(0x39310816L, 0x36BDC582L), 0x36BDC582L), 0x36BDC582L, 0x39310816L, 0x36BDC582L, (VECTOR(int32_t, 2))(0x39310816L, 0x36BDC582L), (VECTOR(int32_t, 2))(0x39310816L, 0x36BDC582L), 0x39310816L, 0x36BDC582L, 0x39310816L, 0x36BDC582L);
                int i, j;
                (1 + 1);
            }
            if (p_35)
            { /* block id: 79 */
                uint64_t l_327[1];
                int32_t l_339 = (-1L);
                int32_t l_349 = 0x3A8DD4B3L;
                int32_t l_351 = 0x5EB180E8L;
                int32_t l_354[1];
                int32_t *l_387 = (void*)0;
                int32_t **l_386[10][2] = {{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387},{(void*)0,&l_387}};
                uint8_t l_393 = 1UL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_327[i] = 0xD4A7A37D46871D43L;
                for (i = 0; i < 1; i++)
                    l_354[i] = 0x406D0342L;
                for (l_230 = 25; (l_230 > 26); l_230++)
                { /* block id: 82 */
                    if ((*l_52))
                        break;
                    (*l_199) = (*p_637->g_101);
                }
                for (l_243 = 0; (l_243 >= (-28)); l_243 = safe_sub_func_int32_t_s_s(l_243, 6))
                { /* block id: 88 */
                    int32_t *l_326[1][5][6] = {{{(void*)0,&l_239,&l_232,&l_239,(void*)0,(void*)0},{(void*)0,&l_239,&l_232,&l_239,(void*)0,(void*)0},{(void*)0,&l_239,&l_232,&l_239,(void*)0,(void*)0},{(void*)0,&l_239,&l_232,&l_239,(void*)0,(void*)0},{(void*)0,&l_239,&l_232,&l_239,(void*)0,(void*)0}}};
                    int16_t *l_336 = &l_254;
                    uint64_t l_357 = 0xC8C4264FBD5BF98BL;
                    uint8_t *l_366 = &p_637->g_100.f5;
                    uint8_t *l_369[5][2];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_369[i][j] = &p_637->g_114.f5;
                    }
                    ++l_327[0];
                    if ((safe_sub_func_int32_t_s_s((((&p_637->g_3 != &p_637->g_3) , ((*p_637->g_2) , (safe_sub_func_int64_t_s_s(((*l_177) && (safe_div_func_int64_t_s_s((p_35 && ((FAKE_DIVERGE(p_637->global_0_offset, get_global_id(0), 10) <= ((((((*l_336) = 0x348BL) && ((p_637->g_91[6][0][2] && ((p_35 > (p_637->g_307[0] = p_35)) < 0x6746414B2567C547L)) || 0x01D7B244248F9BC9L)) <= p_35) != p_35) > p_637->g_129.s5)) == p_637->g_169)), p_637->g_320))), p_637->g_53)))) | (**l_56)), p_35)))
                    { /* block id: 92 */
                        int32_t l_337 = 0x461D3E08L;
                        int32_t l_338 = (-6L);
                        l_340[6]--;
                        return p_637->g_129.s0;
                    }
                    else
                    { /* block id: 95 */
                        int32_t l_343 = 0x5CAEBDBCL;
                        int32_t l_344 = (-1L);
                        int16_t l_346[7][8] = {{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL},{0x2B2EL,1L,(-5L),0x2B2EL,0x635DL,(-5L),(-5L),0x635DL}};
                        int32_t l_347 = 0x39196E45L;
                        int32_t l_348 = 0x680D9EBCL;
                        int32_t l_350 = 1L;
                        int32_t l_352 = 0x3B028FD9L;
                        int32_t l_356 = 0L;
                        int i, j;
                        (**l_56) &= p_35;
                        l_239 |= (**p_637->g_73);
                        ++l_357;
                    }
                    l_242 |= (!p_35);
                    l_230 = (p_35 <= (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_35 & (((p_637->g_114.f5 ^= ((((*l_177) = (((*l_366) |= (safe_div_func_int16_t_s_s((255UL && 0xFBL), p_637->g_114.f4))) > p_35)) == ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 4))((((safe_lshift_func_int8_t_s_u(p_35, 5)) , (l_354[0] = (p_637->g_286[2] , (FAKE_DIVERGE(p_637->local_1_offset, get_local_id(1), 10) || (((l_232 <= 0x81B3L) < p_35) < p_35))))) <= (-2L)), 0UL, 0xA3L, 0UL)).yxxwyyzw))).s3417724205044025, ((VECTOR(uint8_t, 16))(255UL))))).s5) == 0x5341L)) ^ (*p_637->g_2)) <= p_637->g_307[0])), p_637->g_114.f4)), p_35)));
                }
                (*l_52) = (((safe_sub_func_uint8_t_u_u((((1UL ^ ((*l_321) = (safe_mod_func_uint16_t_u_u((0x438FCF7AL == p_35), p_35)))) ^ ((*l_52) >= ((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))((-4L), (-1L), 0x7EL, 0x54L)).even, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(p_637->g_380.xxyx)), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_637->g_381.xx)).yxyx)).odd, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 2))(p_637->g_382.s23)), 0x54L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_637->g_383.xxyxyxxx)).lo)))))), (int8_t)(l_393 |= (safe_sub_func_int8_t_s_s(((l_388 = l_52) == ((*l_196) , l_389)), ((safe_rshift_func_uint16_t_u_u((&l_327[0] == l_392), p_35)) != 0L))))))).s53))).xxxx))).odd))).even, 0x5AL, 0x66L)).x, l_394[4][0])), l_279.s7)), p_35)) || 1L))) >= p_637->g_126.s2), (*l_52))) > (-1L)) <= p_35);
            }
            else
            { /* block id: 111 */
                for (l_345 = 0; (l_345 == 15); l_345 = safe_add_func_uint8_t_u_u(l_345, 2))
                { /* block id: 114 */
                    (*l_56) = &l_240;
                }
                l_397 = (*p_637->g_73);
                for (l_239 = 9; (l_239 != (-30)); --l_239)
                { /* block id: 120 */
                    (*l_56) = &l_239;
                    if ((atomic_inc(&p_637->g_atomic_input[29 * get_linear_group_id() + 13]) == 6))
                    { /* block id: 123 */
                        int32_t l_400 = 0L;
                        uint16_t l_401[8] = {65535UL,1UL,65535UL,65535UL,1UL,65535UL,65535UL,1UL};
                        int i;
                        l_401[3] = l_400;
                        unsigned int result = 0;
                        result += l_400;
                        int l_401_i0;
                        for (l_401_i0 = 0; l_401_i0 < 8; l_401_i0++) {
                            result += l_401[l_401_i0];
                        }
                        atomic_add(&p_637->g_special_values[29 * get_linear_group_id() + 13], result);
                    }
                    else
                    { /* block id: 125 */
                        (1 + 1);
                    }
                    for (l_253 = 0; (l_253 > 7); ++l_253)
                    { /* block id: 130 */
                        (*l_177) = (safe_rshift_func_int8_t_s_u((*p_637->g_2), 7));
                        (*l_177) = 1L;
                        (*l_177) = 0x329CE162L;
                    }
                }
            }
            if ((p_35 > ((safe_add_func_int8_t_s_s(((0x334EAA2BFFFA3E8AL && ((&l_212 != (p_35 , l_410)) != 0L)) >= (p_35 ^ (FAKE_DIVERGE(p_637->global_2_offset, get_global_id(2), 10) > (*l_177)))), (+((--p_637->g_161) , ((((((*l_397) |= ((VECTOR(uint64_t, 4))(0xBD8D1D13AD6FCF09L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 4))(l_413.s0fdb)).hi, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_637->g_414.s60)), (p_637->g_206.s9 > 0x7C59L), 18446744073709551615UL, 0x47889BA0D2F72607L, p_637->g_114.f3, 0x204BD9B1A6D681E3L, 18446744073709551615UL)).s50))), 0x2DBA44E566E280CEL, ((VECTOR(uint64_t, 4))(0x466D0E94B5658161L)), ((VECTOR(uint64_t, 4))(0xEF64BCC106953BD2L)), (**l_56), p_637->g_250, 0xFF1CD204F492B393L, 0x25A58B6C9D207CD3L, 18446744073709551607UL)).s78)), 0xF117549A97B196A9L)).z) || l_249[2][1]) && (*l_52)) , 1L) ^ 0x06L))))) ^ 4UL)))
            { /* block id: 139 */
                uint16_t *l_438 = &p_637->g_307[0];
                uint16_t *l_440[4] = {&p_637->g_307[0],&p_637->g_307[0],&p_637->g_307[0],&p_637->g_307[0]};
                int32_t l_451 = (-3L);
                uint8_t *l_460 = (void*)0;
                uint8_t **l_459[8] = {&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460,&l_460};
                VECTOR(uint64_t, 8) l_463 = (VECTOR(uint64_t, 8))(0x254E882AF702D878L, (VECTOR(uint64_t, 4))(0x254E882AF702D878L, (VECTOR(uint64_t, 2))(0x254E882AF702D878L, 0xD8DC0A0023DB1BC3L), 0xD8DC0A0023DB1BC3L), 0xD8DC0A0023DB1BC3L, 0x254E882AF702D878L, 0xD8DC0A0023DB1BC3L);
                VECTOR(int32_t, 2) l_466 = (VECTOR(int32_t, 2))(0x11484A97L, 0x375A3A4CL);
                int i;
                (*l_397) = ((VECTOR(int32_t, 8))(l_415.yxyyxxyy)).s5;
                if ((safe_add_func_uint32_t_u_u(l_249[1][4], p_35)))
                { /* block id: 141 */
                    for (p_35 = 0; (p_35 == 54); p_35 = safe_add_func_uint8_t_u_u(p_35, 6))
                    { /* block id: 144 */
                        if (p_35)
                            break;
                    }
                    if ((atomic_inc(&p_637->g_atomic_input[29 * get_linear_group_id() + 18]) == 7))
                    { /* block id: 148 */
                        int16_t l_420[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                        int16_t l_421 = 0x6AE3L;
                        int i;
                        l_421 ^= l_420[0];
                        unsigned int result = 0;
                        int l_420_i0;
                        for (l_420_i0 = 0; l_420_i0 < 8; l_420_i0++) {
                            result += l_420[l_420_i0];
                        }
                        result += l_421;
                        atomic_add(&p_637->g_special_values[29 * get_linear_group_id() + 18], result);
                    }
                    else
                    { /* block id: 150 */
                        (1 + 1);
                    }
                    (*l_199) = p_637->g_422;
                }
                else
                { /* block id: 154 */
                    uint64_t l_429[6] = {6UL,0x8B9132DB4892A851L,6UL,6UL,0x8B9132DB4892A851L,6UL};
                    int32_t *l_436[4] = {&l_245,&l_245,&l_245,&l_245};
                    uint16_t **l_437 = (void*)0;
                    uint16_t **l_439[7][1] = {{&l_306},{&l_306},{&l_306},{&l_306},{&l_306},{&l_306},{&l_306}};
                    int64_t *l_446 = &p_637->g_320;
                    int64_t **l_445[4] = {&l_446,&l_446,&l_446,&l_446};
                    int8_t **l_448 = &p_637->g_2;
                    int i, j;
                    (*l_397) |= (l_389 != (((-9L) != ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((((l_410 != (void*)0) > GROUP_DIVERGE(0, 1)) , 5L) >= ((((**l_56) > (p_35 | (safe_mul_func_int16_t_s_s((l_279.s0 || ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0x9CC5D38FL)).xxyyxyyyxyyyyxxx)).s0 , ((VECTOR(uint32_t, 4))(0x6699DA84L, 0x4BFB6859L, 0xC35BE258L, 1UL)).z) != (-4L))), p_35)))) || GROUP_DIVERGE(1, 1)) == GROUP_DIVERGE(1, 1))) > (-2L)), l_429[5])), 0)) , l_241)) , l_177));
                    for (l_232 = (-6); (l_232 != 2); l_232++)
                    { /* block id: 158 */
                        (*l_56) = (*p_637->g_73);
                        (*l_52) = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x12L, FAKE_DIVERGE(p_637->group_2_offset, get_group_id(2), 10))), (&p_637->g_353 != l_410)));
                        (*l_56) = l_436[3];
                    }
                    l_238 = ((((l_440[3] = (l_438 = &p_637->g_307[0])) != (void*)0) != (safe_sub_func_int16_t_s_s((**l_56), (((safe_add_func_uint64_t_u_u((((6UL > (((l_447[0] = l_392) != (void*)0) != (l_448 != (void*)0))) && p_35) >= l_241), (**l_56))) | (*l_177)) <= (-1L))))) , 0L);
                    for (l_254 = 16; (l_254 <= 25); ++l_254)
                    { /* block id: 169 */
                        if (l_451)
                            break;
                    }
                }
                (*l_177) = (safe_div_func_int16_t_s_s(((*l_397) && (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((((p_35 , (p_637->g_461 = p_637->g_2)) == l_462) , ((VECTOR(uint64_t, 2))(l_463.s12)).odd), p_35)), ((((((safe_add_func_int64_t_s_s(1L, 0x5083C3E65C42B684L)) <= (!((p_637->g_comm_values[p_637->tid] |= ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_466.yyyyyxxx)), 1L, 0x7407B7EFL, 0x0721091FL, ((VECTOR(int32_t, 4))(0L, 0x12AC9B3DL, 5L, (-4L))), 0x30EE70B8L)), ((VECTOR(int32_t, 16))((-10L), ((0x5B4EL | ((0L <= p_35) || l_415.y)) , 5L), p_35, 1L, ((VECTOR(int32_t, 8))(0x1E7FDE7CL)), (-1L), l_467, 1L, 8L)), ((VECTOR(int32_t, 16))(5L))))).s755f, ((VECTOR(int32_t, 4))(0x37743C96L))))), ((VECTOR(uint32_t, 4))(4294967289UL))))).y) < p_637->g_259.f2))) != p_35) < p_637->g_468) && p_35) == 0x153BL)))))), p_637->g_139.x));
                (*l_177) |= ((*l_397) , (((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(l_469.yy)).yyyyxxyx, ((VECTOR(uint32_t, 8))(l_470.xxwzwzwz))))).s1 || 0x376EF8BDL));
            }
            else
            { /* block id: 177 */
                int32_t **l_479[7][10][3] = {{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}},{{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389},{&l_388,&l_388,&l_389}}};
                int32_t ***l_478 = &l_479[4][4][1];
                int i, j, k;
                (*p_637->g_99) = ((*p_637->g_2) <= (((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((p_637->g_475[0][1][3] == ((*l_478) = &l_389)), 3)) > (l_242 ^= (-1L))), (l_239 , (p_637->g_286[0] , ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((*p_637->g_2), p_35)) == FAKE_DIVERGE(p_637->local_0_offset, get_local_id(0), 10)), p_35)) || (*l_397)))))) , 18446744073709551615UL) ^ p_637->g_161));
                (*l_397) |= (safe_mul_func_int16_t_s_s((*l_177), (safe_rshift_func_int16_t_s_s((*l_52), p_637->g_114.f0))));
                if ((atomic_inc(&p_637->g_atomic_input[29 * get_linear_group_id() + 26]) == 4))
                { /* block id: 183 */
                    VECTOR(int32_t, 2) l_488 = (VECTOR(int32_t, 2))(0x19C0A101L, (-6L));
                    uint8_t l_489 = 0x31L;
                    int i;
                    if ((l_489 = ((VECTOR(int32_t, 2))(l_488.yx)).lo))
                    { /* block id: 185 */
                        int32_t l_490 = (-9L);
                        uint32_t l_491 = 0x1F9F4C31L;
                        l_488.y = 0x1DD8B6EBL;
                        --l_491;
                    }
                    else
                    { /* block id: 188 */
                        uint8_t l_494 = 0UL;
                        VECTOR(uint16_t, 8) l_495 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL);
                        uint8_t l_496 = 255UL;
                        int i;
                        l_488.x = l_494;
                        l_488.y = l_495.s1;
                        l_488.x = l_496;
                    }
                    unsigned int result = 0;
                    result += l_488.y;
                    result += l_488.x;
                    result += l_489;
                    atomic_add(&p_637->g_special_values[29 * get_linear_group_id() + 26], result);
                }
                else
                { /* block id: 193 */
                    (1 + 1);
                }
            }
            (*p_637->g_99) = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u((&p_637->g_353 != l_392), (((*l_321) = p_637->g_126.s4) && p_637->g_100.f0))) , ((*l_52) , ((((VECTOR(uint32_t, 4))(0x734AEC9AL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_503.s67243037)).s66)), 0x0F73552DL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(0x480B6FDCL, p_637->g_142.sd, 1UL, 0xF161CC7CL)).xzwzwyzy, ((VECTOR(uint32_t, 2))(l_504.s11)).xyyxxyxx, ((VECTOR(uint32_t, 2))(1UL, 0x204E4873L)).yyxyxyyy))), (((&p_637->g_476[1][2] == (((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))((((*p_637->g_2) = (safe_sub_func_uint32_t_u_u((p_637->g_26[1][3][1]++), (0x818E1B60L & ((((((*l_397) &= ((!(**l_56)) >= p_35)) > l_255) , p_637->g_114.f0) , p_637->g_461) != l_462))))) || 0x21L), (-10L), 0x171CL, 0x27D6L)).lo, ((VECTOR(int16_t, 2))(0x5430L))))).hi , &l_388)) ^ l_279.s0) & p_35), ((VECTOR(uint32_t, 2))(0xEA11EED2L)), ((VECTOR(uint32_t, 4))(0xA43EE38AL)))).sf8, ((VECTOR(uint32_t, 2))(0x7C40274AL))))), 0x8E2FFEF6L, 4294967289UL)), 4294967294UL)).s42)), 1UL)).z < p_35) == 0x40C051B8FDEB5074L))), 6)) > p_35), 13));
        }
        return p_35;
    }
    return (*p_637->g_461);
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_91 p_637->g_100.f2 p_637->g_114 p_637->g_116 p_637->g_126 p_637->g_129 p_637->g_comm_values p_637->g_139 p_637->g_142 p_637->g_2 p_637->g_3 p_637->g_161 p_637->g_100.f0 p_637->g_73 p_637->g_74 p_637->g_53
 * writes: p_637->g_113 p_637->g_91 p_637->g_comm_values p_637->g_161 p_637->g_169
 */
uint16_t  func_62(uint64_t  p_63, uint16_t  p_64, uint64_t  p_65, int64_t  p_66, struct S2 * p_637)
{ /* block id: 28 */
    int32_t *l_105 = &p_637->g_91[3][2][3];
    uint32_t **l_108 = (void*)0;
    uint32_t *l_110 = &p_637->g_26[2][9][1];
    uint32_t **l_109 = &l_110;
    int8_t *l_111 = &p_637->g_100.f4;
    int16_t *l_112 = &p_637->g_113;
    int32_t l_115 = 0x3AD4E58FL;
    uint16_t l_125 = 5UL;
    VECTOR(uint16_t, 2) l_127 = (VECTOR(uint16_t, 2))(0xAD94L, 0x45DDL);
    VECTOR(uint16_t, 16) l_128 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x834DL), 0x834DL), 0x834DL, 65533UL, 0x834DL, (VECTOR(uint16_t, 2))(65533UL, 0x834DL), (VECTOR(uint16_t, 2))(65533UL, 0x834DL), 65533UL, 0x834DL, 65533UL, 0x834DL);
    VECTOR(uint16_t, 4) l_130 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 4UL), 4UL);
    VECTOR(uint16_t, 16) l_131 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x2479L), 0x2479L), 0x2479L, 65527UL, 0x2479L, (VECTOR(uint16_t, 2))(65527UL, 0x2479L), (VECTOR(uint16_t, 2))(65527UL, 0x2479L), 65527UL, 0x2479L, 65527UL, 0x2479L);
    VECTOR(uint8_t, 16) l_132 = (VECTOR(uint8_t, 16))(0xA6L, (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 0xFAL), 0xFAL), 0xFAL, 0xA6L, 0xFAL, (VECTOR(uint8_t, 2))(0xA6L, 0xFAL), (VECTOR(uint8_t, 2))(0xA6L, 0xFAL), 0xA6L, 0xFAL, 0xA6L, 0xFAL);
    int64_t *l_133 = (void*)0;
    int64_t *l_134 = (void*)0;
    VECTOR(int64_t, 8) l_140 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int32_t, 4) l_141 = (VECTOR(int32_t, 4))(0x5D6DB04EL, (VECTOR(int32_t, 2))(0x5D6DB04EL, 0x0FA795F4L), 0x0FA795F4L);
    VECTOR(uint32_t, 16) l_143 = (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0xBC13450BL), 0xBC13450BL), 0xBC13450BL, 6UL, 0xBC13450BL, (VECTOR(uint32_t, 2))(6UL, 0xBC13450BL), (VECTOR(uint32_t, 2))(6UL, 0xBC13450BL), 6UL, 0xBC13450BL, 6UL, 0xBC13450BL);
    uint16_t *l_144 = (void*)0;
    uint16_t *l_145 = (void*)0;
    uint16_t *l_146 = (void*)0;
    uint16_t *l_147[1];
    VECTOR(uint8_t, 16) l_154 = (VECTOR(uint8_t, 16))(0x61L, (VECTOR(uint8_t, 4))(0x61L, (VECTOR(uint8_t, 2))(0x61L, 0xE7L), 0xE7L), 0xE7L, 0x61L, 0xE7L, (VECTOR(uint8_t, 2))(0x61L, 0xE7L), (VECTOR(uint8_t, 2))(0x61L, 0xE7L), 0x61L, 0xE7L, 0x61L, 0xE7L);
    uint64_t *l_159 = (void*)0;
    uint64_t *l_160 = &p_637->g_161;
    uint64_t *l_168 = (void*)0;
    int32_t *l_170 = (void*)0;
    int32_t *l_171[10] = {&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172,&p_637->g_172};
    int32_t l_173 = 0x032AB462L;
    uint32_t l_174 = 0x4D604C6CL;
    int i;
    for (i = 0; i < 1; i++)
        l_147[i] = (void*)0;
    (*l_105) = (((p_66 >= ((*l_112) = (safe_add_func_uint16_t_u_u(0x52AEL, (~((l_105 != (void*)0) | ((*l_105) && (safe_rshift_func_int8_t_s_u(((GROUP_DIVERGE(0, 1) < (p_637->g_100.f2 != ((((((*l_109) = (void*)0) == &p_637->g_26[1][7][1]) == ((p_65 , l_111) != &p_637->g_3)) , l_111) != l_111))) > 4294967295UL), p_65))))))))) , p_637->g_114) , l_115);
    (*l_105) = ((VECTOR(int32_t, 8))(p_637->g_116.s941d114a)).s4;
    l_173 &= ((safe_lshift_func_int8_t_s_u(((((!(safe_lshift_func_uint16_t_u_s(p_66, 0))) , (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_125 || (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_637->g_126.s40776714)))).s4 == (*l_105))), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(l_127.xxyyxxxx)).s60, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(l_128.s8ca7f0ee)).s7223167654111470, ((VECTOR(uint16_t, 2))(p_637->g_129.s77)).xyxxxxyxxxyyxxxx, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(l_130.ywwyxyyz)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xC757L, 1UL, 0x1C37L, 1UL, ((VECTOR(uint16_t, 4))(0xE0ADL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(l_131.se7)).xyxyxxyx, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(251UL, 0x0DL)))), ((VECTOR(uint8_t, 4))(l_132.s2bbc)).lo))).xyxxxyyy)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0UL, (((p_637->g_comm_values[p_637->tid] &= (l_110 == l_110)) | (p_637->g_169 = ((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 2))(p_637->g_139.wy)), ((VECTOR(int64_t, 2))(l_140.s37))))), 0x1A108BF7B596F503L, 0x1593233A8AAE3D87L, 0x627CC4FDDAEBDFE2L, 0x2719CDBA808484B6L, 2L)).s5406721711142374, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 4))(l_141.wywz)).w, 1L, 0x33B0487FL)).even, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(p_637->g_142.s847cefb77572b0ff)).sd9, ((VECTOR(uint32_t, 4))(l_143.s3ec0)).hi))).yyyxxxyyyyxxxxyx))).sf46b)).ywwxywzxzzxxxzzw)).s62, (uint32_t)(9UL <= (--p_64)), (uint32_t)(safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(l_154.s733b7cb8965cc1d9)).s11, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 16))((GROUP_DIVERGE(2, 1) > (safe_div_func_int8_t_s_s((*p_637->g_2), ((safe_mod_func_int64_t_s_s((-1L), (++(*l_160)))) ^ (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_66, 3)), (*l_105))))))), ((VECTOR(uint8_t, 4))(3UL)), p_64, 0UL, GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 8))(0UL)))).hi, ((VECTOR(uint8_t, 8))(2UL)), ((VECTOR(uint8_t, 8))(2UL))))).s47))).yxxyxxxy)), (*l_105), ((VECTOR(uint8_t, 2))(0UL)), 0x3FL, p_637->g_100.f0, ((VECTOR(uint8_t, 2))(1UL)), 247UL)))).s3, (*l_105))), (**p_637->g_73))))))))).xyxxyyxy)).s4570732443060635, ((VECTOR(int64_t, 16))(8L))))).hi, ((VECTOR(int64_t, 8))(0x07E9F7C02C53580DL))))).s6, p_637->g_114.f0)), 0xC5L)) & (*l_105)))) != (*l_105)), 0x13L, ((VECTOR(uint8_t, 4))(0UL)), 252UL, GROUP_DIVERGE(2, 1), p_637->g_126.s5, 1UL, 0xD2L, ((VECTOR(uint8_t, 2))(4UL)), 1UL, 0x0EL)))).scb85))).zxwywyyw))).hi, ((VECTOR(uint16_t, 4))(0UL))))))).xwwxxyzywywyxxwy, ((VECTOR(uint16_t, 16))(0x576BL))))).lo)).s3655476166601150)).s2a65, ((VECTOR(uint16_t, 4))(0x022EL))))), ((VECTOR(uint16_t, 2))(65530UL)), 65535UL)).s67)))), 0UL)))).s2, ((VECTOR(uint16_t, 2))(0x19ACL)), 0x0871L, ((VECTOR(uint16_t, 4))(65535UL)))).even, ((VECTOR(uint16_t, 4))(1UL))))).zwywxwyz, ((VECTOR(uint16_t, 8))(1UL))))).s3771060702011717))))), ((VECTOR(uint16_t, 16))(0xAA3EL))))).s9d))).even)), p_637->g_114.f4))) && 1L) , (*p_637->g_2)), p_637->g_3)) >= (*l_105));
    l_174++;
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_73 p_637->g_81
 * writes: p_637->g_74
 */
uint32_t  func_68(int8_t * p_69, struct S2 * p_637)
{ /* block id: 18 */
    int32_t *l_72 = &p_637->g_53;
    int32_t l_75[4];
    int32_t *l_76[1][1];
    uint32_t l_77 = 0UL;
    int32_t **l_80 = &l_76[0][0];
    int i, j;
    for (i = 0; i < 4; i++)
        l_75[i] = 8L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_76[i][j] = &l_75[3];
    }
    (*p_637->g_73) = l_72;
    --l_77;
    (*l_80) = (void*)0;
    return p_637->g_81;
}


/* ------------------------------------------ */
/* 
 * reads : p_637->g_100 p_637->g_101 p_637->g_91
 * writes: p_637->g_99 p_637->g_100
 */
uint64_t  func_84(uint64_t  p_85, int32_t ** p_86, uint32_t  p_87, int8_t * p_88, struct S2 * p_637)
{ /* block id: 23 */
    int32_t *l_90 = &p_637->g_91[3][2][3];
    int32_t *l_92 = &p_637->g_91[1][3][4];
    int32_t *l_93[6][8] = {{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0},{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0},{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0},{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0},{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0},{&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_91[3][2][2],&p_637->g_91[3][2][3],&p_637->g_53,(void*)0}};
    int16_t l_94 = 1L;
    int8_t l_95[8];
    uint32_t l_96 = 9UL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_95[i] = 1L;
    l_96--;
    p_637->g_99 = (*p_86);
    (*p_637->g_101) = p_637->g_100;
    return (*l_92);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_comm_values[i] = 1;
    struct S2 c_638;
    struct S2* p_637 = &c_638;
    struct S2 c_639 = {
        0x6DL, // p_637->g_3
        &p_637->g_3, // p_637->g_2
        {{{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L}},{{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L}},{{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L}},{{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L}},{{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L},{0x5D840DFEL,0x520F3038L}}}, // p_637->g_26
        0x0942075DL, // p_637->g_53
        (void*)0, // p_637->g_54
        (void*)0, // p_637->g_55
        {&p_637->g_53,&p_637->g_53,&p_637->g_53,&p_637->g_53}, // p_637->g_74
        &p_637->g_74[3], // p_637->g_73
        0UL, // p_637->g_81
        {{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}},{{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)},{(-9L),(-1L),0x4A4024FFL,0x47436F42L,0x4A4024FFL,(-1L)}}}, // p_637->g_91
        &p_637->g_91[3][2][3], // p_637->g_99
        {1UL,0xCD555FCFL,0UL,-1L,8L,0x9CL}, // p_637->g_100
        &p_637->g_100, // p_637->g_101
        0x71F1L, // p_637->g_113
        {0x4D4EC0B7275D6FB8L,4294967295UL,18446744073709551615UL,-4L,0L,251UL}, // p_637->g_114
        (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x66744F56L), 0x66744F56L), 0x66744F56L, (-7L), 0x66744F56L, (VECTOR(int32_t, 2))((-7L), 0x66744F56L), (VECTOR(int32_t, 2))((-7L), 0x66744F56L), (-7L), 0x66744F56L, (-7L), 0x66744F56L), // p_637->g_116
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L), // p_637->g_126
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL), // p_637->g_129
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), // p_637->g_139
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFA936F0BL), 0xFA936F0BL), 0xFA936F0BL, 4294967295UL, 0xFA936F0BL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFA936F0BL), (VECTOR(uint32_t, 2))(4294967295UL, 0xFA936F0BL), 4294967295UL, 0xFA936F0BL, 4294967295UL, 0xFA936F0BL), // p_637->g_142
        0x2E646FBA3167A903L, // p_637->g_161
        0x0763B6AFL, // p_637->g_169
        5L, // p_637->g_172
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int8_t, 2))((-1L), (-6L)), (VECTOR(int8_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L)), // p_637->g_206
        (-2L), // p_637->g_250
        {18446744073709551609UL,4294967295UL,0xA5E1613AEFAA0E66L,0x71L,-1L,0x64L}, // p_637->g_259
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x089EB94FL), 0x089EB94FL), 0x089EB94FL, 0L, 0x089EB94FL, (VECTOR(int32_t, 2))(0L, 0x089EB94FL), (VECTOR(int32_t, 2))(0L, 0x089EB94FL), 0L, 0x089EB94FL, 0L, 0x089EB94FL), // p_637->g_260
        0L, // p_637->g_271
        {{0},{0},{0},{0},{0}}, // p_637->g_286
        (VECTOR(int8_t, 2))(0x22L, 0x38L), // p_637->g_293
        {0xB19EL}, // p_637->g_307
        0x5648E4A59FD3DAF2L, // p_637->g_320
        1L, // p_637->g_353
        (-2L), // p_637->g_355
        (VECTOR(int8_t, 2))(0x1EL, 0x3AL), // p_637->g_380
        (VECTOR(int8_t, 2))(0x67L, 0L), // p_637->g_381
        (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 9L), 9L), 9L, 0x6EL, 9L, (VECTOR(int8_t, 2))(0x6EL, 9L), (VECTOR(int8_t, 2))(0x6EL, 9L), 0x6EL, 9L, 0x6EL, 9L), // p_637->g_382
        (VECTOR(int8_t, 2))(0x20L, 0x56L), // p_637->g_383
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xE81EE3BAA523BDCEL), 0xE81EE3BAA523BDCEL), 0xE81EE3BAA523BDCEL, 1UL, 0xE81EE3BAA523BDCEL), // p_637->g_414
        {0x197BDA7B8C8D204BL,3UL,18446744073709551615UL,-8L,0L,0xABL}, // p_637->g_422
        &p_637->g_114.f5, // p_637->g_461
        0x7E6EE919L, // p_637->g_468
        (-1L), // p_637->g_477
        {{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477},{(void*)0,(void*)0,(void*)0,&p_637->g_477,&p_637->g_477,&p_637->g_477,(void*)0,&p_637->g_477,&p_637->g_477}}, // p_637->g_476
        {{{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]}},{{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]}},{{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]},{&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7],&p_637->g_476[6][7]}}}, // p_637->g_475
        (VECTOR(uint8_t, 2))(7UL, 252UL), // p_637->g_512
        (VECTOR(int16_t, 16))(0x6A3EL, (VECTOR(int16_t, 4))(0x6A3EL, (VECTOR(int16_t, 2))(0x6A3EL, 0x6E62L), 0x6E62L), 0x6E62L, 0x6A3EL, 0x6E62L, (VECTOR(int16_t, 2))(0x6A3EL, 0x6E62L), (VECTOR(int16_t, 2))(0x6A3EL, 0x6E62L), 0x6A3EL, 0x6E62L, 0x6A3EL, 0x6E62L), // p_637->g_536
        (VECTOR(int8_t, 8))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x14L), 0x14L), 0x14L, 0x71L, 0x14L), // p_637->g_542
        {0xFA27A1BFF1C627E1L,0x830EE4BAL,0x38A8F6C36A5453A2L,-1L,0x2DL,0x3FL}, // p_637->g_571
        {{7UL,0UL,18446744073709551615UL,-7L,0x5DL,6UL}}, // p_637->g_572
        &p_637->g_286[4], // p_637->g_580
        &p_637->g_580, // p_637->g_579
        {6UL,0UL,18446744073709551608UL,-1L,0x4FL,5UL}, // p_637->g_609
        (VECTOR(uint64_t, 16))(0xD9BD35A9EBA6739CL, (VECTOR(uint64_t, 4))(0xD9BD35A9EBA6739CL, (VECTOR(uint64_t, 2))(0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L), 0xB20B65E5A978B7C1L), 0xB20B65E5A978B7C1L, 0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L, (VECTOR(uint64_t, 2))(0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L), (VECTOR(uint64_t, 2))(0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L), 0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L, 0xD9BD35A9EBA6739CL, 0xB20B65E5A978B7C1L), // p_637->g_613
        0x255320C2F800ED9AL, // p_637->g_626
        0, // p_637->v_collective
        sequence_input[get_global_id(0)], // p_637->global_0_offset
        sequence_input[get_global_id(1)], // p_637->global_1_offset
        sequence_input[get_global_id(2)], // p_637->global_2_offset
        sequence_input[get_local_id(0)], // p_637->local_0_offset
        sequence_input[get_local_id(1)], // p_637->local_1_offset
        sequence_input[get_local_id(2)], // p_637->local_2_offset
        sequence_input[get_group_id(0)], // p_637->group_0_offset
        sequence_input[get_group_id(1)], // p_637->group_1_offset
        sequence_input[get_group_id(2)], // p_637->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[0][get_linear_local_id()])), // p_637->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_638 = c_639;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_637);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_637->g_3, "p_637->g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_637->g_26[i][j][k], "p_637->g_26[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_637->g_53, "p_637->g_53", print_hash_value);
    transparent_crc(p_637->g_81, "p_637->g_81", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_637->g_91[i][j][k], "p_637->g_91[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_637->g_100.f0, "p_637->g_100.f0", print_hash_value);
    transparent_crc(p_637->g_100.f1, "p_637->g_100.f1", print_hash_value);
    transparent_crc(p_637->g_100.f2, "p_637->g_100.f2", print_hash_value);
    transparent_crc(p_637->g_100.f3, "p_637->g_100.f3", print_hash_value);
    transparent_crc(p_637->g_100.f4, "p_637->g_100.f4", print_hash_value);
    transparent_crc(p_637->g_100.f5, "p_637->g_100.f5", print_hash_value);
    transparent_crc(p_637->g_113, "p_637->g_113", print_hash_value);
    transparent_crc(p_637->g_114.f0, "p_637->g_114.f0", print_hash_value);
    transparent_crc(p_637->g_114.f1, "p_637->g_114.f1", print_hash_value);
    transparent_crc(p_637->g_114.f2, "p_637->g_114.f2", print_hash_value);
    transparent_crc(p_637->g_114.f3, "p_637->g_114.f3", print_hash_value);
    transparent_crc(p_637->g_114.f4, "p_637->g_114.f4", print_hash_value);
    transparent_crc(p_637->g_114.f5, "p_637->g_114.f5", print_hash_value);
    transparent_crc(p_637->g_116.s0, "p_637->g_116.s0", print_hash_value);
    transparent_crc(p_637->g_116.s1, "p_637->g_116.s1", print_hash_value);
    transparent_crc(p_637->g_116.s2, "p_637->g_116.s2", print_hash_value);
    transparent_crc(p_637->g_116.s3, "p_637->g_116.s3", print_hash_value);
    transparent_crc(p_637->g_116.s4, "p_637->g_116.s4", print_hash_value);
    transparent_crc(p_637->g_116.s5, "p_637->g_116.s5", print_hash_value);
    transparent_crc(p_637->g_116.s6, "p_637->g_116.s6", print_hash_value);
    transparent_crc(p_637->g_116.s7, "p_637->g_116.s7", print_hash_value);
    transparent_crc(p_637->g_116.s8, "p_637->g_116.s8", print_hash_value);
    transparent_crc(p_637->g_116.s9, "p_637->g_116.s9", print_hash_value);
    transparent_crc(p_637->g_116.sa, "p_637->g_116.sa", print_hash_value);
    transparent_crc(p_637->g_116.sb, "p_637->g_116.sb", print_hash_value);
    transparent_crc(p_637->g_116.sc, "p_637->g_116.sc", print_hash_value);
    transparent_crc(p_637->g_116.sd, "p_637->g_116.sd", print_hash_value);
    transparent_crc(p_637->g_116.se, "p_637->g_116.se", print_hash_value);
    transparent_crc(p_637->g_116.sf, "p_637->g_116.sf", print_hash_value);
    transparent_crc(p_637->g_126.s0, "p_637->g_126.s0", print_hash_value);
    transparent_crc(p_637->g_126.s1, "p_637->g_126.s1", print_hash_value);
    transparent_crc(p_637->g_126.s2, "p_637->g_126.s2", print_hash_value);
    transparent_crc(p_637->g_126.s3, "p_637->g_126.s3", print_hash_value);
    transparent_crc(p_637->g_126.s4, "p_637->g_126.s4", print_hash_value);
    transparent_crc(p_637->g_126.s5, "p_637->g_126.s5", print_hash_value);
    transparent_crc(p_637->g_126.s6, "p_637->g_126.s6", print_hash_value);
    transparent_crc(p_637->g_126.s7, "p_637->g_126.s7", print_hash_value);
    transparent_crc(p_637->g_129.s0, "p_637->g_129.s0", print_hash_value);
    transparent_crc(p_637->g_129.s1, "p_637->g_129.s1", print_hash_value);
    transparent_crc(p_637->g_129.s2, "p_637->g_129.s2", print_hash_value);
    transparent_crc(p_637->g_129.s3, "p_637->g_129.s3", print_hash_value);
    transparent_crc(p_637->g_129.s4, "p_637->g_129.s4", print_hash_value);
    transparent_crc(p_637->g_129.s5, "p_637->g_129.s5", print_hash_value);
    transparent_crc(p_637->g_129.s6, "p_637->g_129.s6", print_hash_value);
    transparent_crc(p_637->g_129.s7, "p_637->g_129.s7", print_hash_value);
    transparent_crc(p_637->g_139.x, "p_637->g_139.x", print_hash_value);
    transparent_crc(p_637->g_139.y, "p_637->g_139.y", print_hash_value);
    transparent_crc(p_637->g_139.z, "p_637->g_139.z", print_hash_value);
    transparent_crc(p_637->g_139.w, "p_637->g_139.w", print_hash_value);
    transparent_crc(p_637->g_142.s0, "p_637->g_142.s0", print_hash_value);
    transparent_crc(p_637->g_142.s1, "p_637->g_142.s1", print_hash_value);
    transparent_crc(p_637->g_142.s2, "p_637->g_142.s2", print_hash_value);
    transparent_crc(p_637->g_142.s3, "p_637->g_142.s3", print_hash_value);
    transparent_crc(p_637->g_142.s4, "p_637->g_142.s4", print_hash_value);
    transparent_crc(p_637->g_142.s5, "p_637->g_142.s5", print_hash_value);
    transparent_crc(p_637->g_142.s6, "p_637->g_142.s6", print_hash_value);
    transparent_crc(p_637->g_142.s7, "p_637->g_142.s7", print_hash_value);
    transparent_crc(p_637->g_142.s8, "p_637->g_142.s8", print_hash_value);
    transparent_crc(p_637->g_142.s9, "p_637->g_142.s9", print_hash_value);
    transparent_crc(p_637->g_142.sa, "p_637->g_142.sa", print_hash_value);
    transparent_crc(p_637->g_142.sb, "p_637->g_142.sb", print_hash_value);
    transparent_crc(p_637->g_142.sc, "p_637->g_142.sc", print_hash_value);
    transparent_crc(p_637->g_142.sd, "p_637->g_142.sd", print_hash_value);
    transparent_crc(p_637->g_142.se, "p_637->g_142.se", print_hash_value);
    transparent_crc(p_637->g_142.sf, "p_637->g_142.sf", print_hash_value);
    transparent_crc(p_637->g_161, "p_637->g_161", print_hash_value);
    transparent_crc(p_637->g_169, "p_637->g_169", print_hash_value);
    transparent_crc(p_637->g_172, "p_637->g_172", print_hash_value);
    transparent_crc(p_637->g_206.s0, "p_637->g_206.s0", print_hash_value);
    transparent_crc(p_637->g_206.s1, "p_637->g_206.s1", print_hash_value);
    transparent_crc(p_637->g_206.s2, "p_637->g_206.s2", print_hash_value);
    transparent_crc(p_637->g_206.s3, "p_637->g_206.s3", print_hash_value);
    transparent_crc(p_637->g_206.s4, "p_637->g_206.s4", print_hash_value);
    transparent_crc(p_637->g_206.s5, "p_637->g_206.s5", print_hash_value);
    transparent_crc(p_637->g_206.s6, "p_637->g_206.s6", print_hash_value);
    transparent_crc(p_637->g_206.s7, "p_637->g_206.s7", print_hash_value);
    transparent_crc(p_637->g_206.s8, "p_637->g_206.s8", print_hash_value);
    transparent_crc(p_637->g_206.s9, "p_637->g_206.s9", print_hash_value);
    transparent_crc(p_637->g_206.sa, "p_637->g_206.sa", print_hash_value);
    transparent_crc(p_637->g_206.sb, "p_637->g_206.sb", print_hash_value);
    transparent_crc(p_637->g_206.sc, "p_637->g_206.sc", print_hash_value);
    transparent_crc(p_637->g_206.sd, "p_637->g_206.sd", print_hash_value);
    transparent_crc(p_637->g_206.se, "p_637->g_206.se", print_hash_value);
    transparent_crc(p_637->g_206.sf, "p_637->g_206.sf", print_hash_value);
    transparent_crc(p_637->g_250, "p_637->g_250", print_hash_value);
    transparent_crc(p_637->g_259.f0, "p_637->g_259.f0", print_hash_value);
    transparent_crc(p_637->g_259.f1, "p_637->g_259.f1", print_hash_value);
    transparent_crc(p_637->g_259.f2, "p_637->g_259.f2", print_hash_value);
    transparent_crc(p_637->g_259.f3, "p_637->g_259.f3", print_hash_value);
    transparent_crc(p_637->g_259.f4, "p_637->g_259.f4", print_hash_value);
    transparent_crc(p_637->g_259.f5, "p_637->g_259.f5", print_hash_value);
    transparent_crc(p_637->g_260.s0, "p_637->g_260.s0", print_hash_value);
    transparent_crc(p_637->g_260.s1, "p_637->g_260.s1", print_hash_value);
    transparent_crc(p_637->g_260.s2, "p_637->g_260.s2", print_hash_value);
    transparent_crc(p_637->g_260.s3, "p_637->g_260.s3", print_hash_value);
    transparent_crc(p_637->g_260.s4, "p_637->g_260.s4", print_hash_value);
    transparent_crc(p_637->g_260.s5, "p_637->g_260.s5", print_hash_value);
    transparent_crc(p_637->g_260.s6, "p_637->g_260.s6", print_hash_value);
    transparent_crc(p_637->g_260.s7, "p_637->g_260.s7", print_hash_value);
    transparent_crc(p_637->g_260.s8, "p_637->g_260.s8", print_hash_value);
    transparent_crc(p_637->g_260.s9, "p_637->g_260.s9", print_hash_value);
    transparent_crc(p_637->g_260.sa, "p_637->g_260.sa", print_hash_value);
    transparent_crc(p_637->g_260.sb, "p_637->g_260.sb", print_hash_value);
    transparent_crc(p_637->g_260.sc, "p_637->g_260.sc", print_hash_value);
    transparent_crc(p_637->g_260.sd, "p_637->g_260.sd", print_hash_value);
    transparent_crc(p_637->g_260.se, "p_637->g_260.se", print_hash_value);
    transparent_crc(p_637->g_260.sf, "p_637->g_260.sf", print_hash_value);
    transparent_crc(p_637->g_271, "p_637->g_271", print_hash_value);
    transparent_crc(p_637->g_293.x, "p_637->g_293.x", print_hash_value);
    transparent_crc(p_637->g_293.y, "p_637->g_293.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_637->g_307[i], "p_637->g_307[i]", print_hash_value);

    }
    transparent_crc(p_637->g_320, "p_637->g_320", print_hash_value);
    transparent_crc(p_637->g_353, "p_637->g_353", print_hash_value);
    transparent_crc(p_637->g_355, "p_637->g_355", print_hash_value);
    transparent_crc(p_637->g_380.x, "p_637->g_380.x", print_hash_value);
    transparent_crc(p_637->g_380.y, "p_637->g_380.y", print_hash_value);
    transparent_crc(p_637->g_381.x, "p_637->g_381.x", print_hash_value);
    transparent_crc(p_637->g_381.y, "p_637->g_381.y", print_hash_value);
    transparent_crc(p_637->g_382.s0, "p_637->g_382.s0", print_hash_value);
    transparent_crc(p_637->g_382.s1, "p_637->g_382.s1", print_hash_value);
    transparent_crc(p_637->g_382.s2, "p_637->g_382.s2", print_hash_value);
    transparent_crc(p_637->g_382.s3, "p_637->g_382.s3", print_hash_value);
    transparent_crc(p_637->g_382.s4, "p_637->g_382.s4", print_hash_value);
    transparent_crc(p_637->g_382.s5, "p_637->g_382.s5", print_hash_value);
    transparent_crc(p_637->g_382.s6, "p_637->g_382.s6", print_hash_value);
    transparent_crc(p_637->g_382.s7, "p_637->g_382.s7", print_hash_value);
    transparent_crc(p_637->g_382.s8, "p_637->g_382.s8", print_hash_value);
    transparent_crc(p_637->g_382.s9, "p_637->g_382.s9", print_hash_value);
    transparent_crc(p_637->g_382.sa, "p_637->g_382.sa", print_hash_value);
    transparent_crc(p_637->g_382.sb, "p_637->g_382.sb", print_hash_value);
    transparent_crc(p_637->g_382.sc, "p_637->g_382.sc", print_hash_value);
    transparent_crc(p_637->g_382.sd, "p_637->g_382.sd", print_hash_value);
    transparent_crc(p_637->g_382.se, "p_637->g_382.se", print_hash_value);
    transparent_crc(p_637->g_382.sf, "p_637->g_382.sf", print_hash_value);
    transparent_crc(p_637->g_383.x, "p_637->g_383.x", print_hash_value);
    transparent_crc(p_637->g_383.y, "p_637->g_383.y", print_hash_value);
    transparent_crc(p_637->g_414.s0, "p_637->g_414.s0", print_hash_value);
    transparent_crc(p_637->g_414.s1, "p_637->g_414.s1", print_hash_value);
    transparent_crc(p_637->g_414.s2, "p_637->g_414.s2", print_hash_value);
    transparent_crc(p_637->g_414.s3, "p_637->g_414.s3", print_hash_value);
    transparent_crc(p_637->g_414.s4, "p_637->g_414.s4", print_hash_value);
    transparent_crc(p_637->g_414.s5, "p_637->g_414.s5", print_hash_value);
    transparent_crc(p_637->g_414.s6, "p_637->g_414.s6", print_hash_value);
    transparent_crc(p_637->g_414.s7, "p_637->g_414.s7", print_hash_value);
    transparent_crc(p_637->g_422.f0, "p_637->g_422.f0", print_hash_value);
    transparent_crc(p_637->g_422.f1, "p_637->g_422.f1", print_hash_value);
    transparent_crc(p_637->g_422.f2, "p_637->g_422.f2", print_hash_value);
    transparent_crc(p_637->g_422.f3, "p_637->g_422.f3", print_hash_value);
    transparent_crc(p_637->g_422.f4, "p_637->g_422.f4", print_hash_value);
    transparent_crc(p_637->g_422.f5, "p_637->g_422.f5", print_hash_value);
    transparent_crc(p_637->g_468, "p_637->g_468", print_hash_value);
    transparent_crc(p_637->g_477, "p_637->g_477", print_hash_value);
    transparent_crc(p_637->g_512.x, "p_637->g_512.x", print_hash_value);
    transparent_crc(p_637->g_512.y, "p_637->g_512.y", print_hash_value);
    transparent_crc(p_637->g_536.s0, "p_637->g_536.s0", print_hash_value);
    transparent_crc(p_637->g_536.s1, "p_637->g_536.s1", print_hash_value);
    transparent_crc(p_637->g_536.s2, "p_637->g_536.s2", print_hash_value);
    transparent_crc(p_637->g_536.s3, "p_637->g_536.s3", print_hash_value);
    transparent_crc(p_637->g_536.s4, "p_637->g_536.s4", print_hash_value);
    transparent_crc(p_637->g_536.s5, "p_637->g_536.s5", print_hash_value);
    transparent_crc(p_637->g_536.s6, "p_637->g_536.s6", print_hash_value);
    transparent_crc(p_637->g_536.s7, "p_637->g_536.s7", print_hash_value);
    transparent_crc(p_637->g_536.s8, "p_637->g_536.s8", print_hash_value);
    transparent_crc(p_637->g_536.s9, "p_637->g_536.s9", print_hash_value);
    transparent_crc(p_637->g_536.sa, "p_637->g_536.sa", print_hash_value);
    transparent_crc(p_637->g_536.sb, "p_637->g_536.sb", print_hash_value);
    transparent_crc(p_637->g_536.sc, "p_637->g_536.sc", print_hash_value);
    transparent_crc(p_637->g_536.sd, "p_637->g_536.sd", print_hash_value);
    transparent_crc(p_637->g_536.se, "p_637->g_536.se", print_hash_value);
    transparent_crc(p_637->g_536.sf, "p_637->g_536.sf", print_hash_value);
    transparent_crc(p_637->g_542.s0, "p_637->g_542.s0", print_hash_value);
    transparent_crc(p_637->g_542.s1, "p_637->g_542.s1", print_hash_value);
    transparent_crc(p_637->g_542.s2, "p_637->g_542.s2", print_hash_value);
    transparent_crc(p_637->g_542.s3, "p_637->g_542.s3", print_hash_value);
    transparent_crc(p_637->g_542.s4, "p_637->g_542.s4", print_hash_value);
    transparent_crc(p_637->g_542.s5, "p_637->g_542.s5", print_hash_value);
    transparent_crc(p_637->g_542.s6, "p_637->g_542.s6", print_hash_value);
    transparent_crc(p_637->g_542.s7, "p_637->g_542.s7", print_hash_value);
    transparent_crc(p_637->g_571.f0, "p_637->g_571.f0", print_hash_value);
    transparent_crc(p_637->g_571.f1, "p_637->g_571.f1", print_hash_value);
    transparent_crc(p_637->g_571.f2, "p_637->g_571.f2", print_hash_value);
    transparent_crc(p_637->g_571.f3, "p_637->g_571.f3", print_hash_value);
    transparent_crc(p_637->g_571.f4, "p_637->g_571.f4", print_hash_value);
    transparent_crc(p_637->g_571.f5, "p_637->g_571.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_637->g_572[i].f0, "p_637->g_572[i].f0", print_hash_value);
        transparent_crc(p_637->g_572[i].f1, "p_637->g_572[i].f1", print_hash_value);
        transparent_crc(p_637->g_572[i].f2, "p_637->g_572[i].f2", print_hash_value);
        transparent_crc(p_637->g_572[i].f3, "p_637->g_572[i].f3", print_hash_value);
        transparent_crc(p_637->g_572[i].f4, "p_637->g_572[i].f4", print_hash_value);
        transparent_crc(p_637->g_572[i].f5, "p_637->g_572[i].f5", print_hash_value);

    }
    transparent_crc(p_637->g_609.f0, "p_637->g_609.f0", print_hash_value);
    transparent_crc(p_637->g_609.f1, "p_637->g_609.f1", print_hash_value);
    transparent_crc(p_637->g_609.f2, "p_637->g_609.f2", print_hash_value);
    transparent_crc(p_637->g_609.f3, "p_637->g_609.f3", print_hash_value);
    transparent_crc(p_637->g_609.f4, "p_637->g_609.f4", print_hash_value);
    transparent_crc(p_637->g_609.f5, "p_637->g_609.f5", print_hash_value);
    transparent_crc(p_637->g_613.s0, "p_637->g_613.s0", print_hash_value);
    transparent_crc(p_637->g_613.s1, "p_637->g_613.s1", print_hash_value);
    transparent_crc(p_637->g_613.s2, "p_637->g_613.s2", print_hash_value);
    transparent_crc(p_637->g_613.s3, "p_637->g_613.s3", print_hash_value);
    transparent_crc(p_637->g_613.s4, "p_637->g_613.s4", print_hash_value);
    transparent_crc(p_637->g_613.s5, "p_637->g_613.s5", print_hash_value);
    transparent_crc(p_637->g_613.s6, "p_637->g_613.s6", print_hash_value);
    transparent_crc(p_637->g_613.s7, "p_637->g_613.s7", print_hash_value);
    transparent_crc(p_637->g_613.s8, "p_637->g_613.s8", print_hash_value);
    transparent_crc(p_637->g_613.s9, "p_637->g_613.s9", print_hash_value);
    transparent_crc(p_637->g_613.sa, "p_637->g_613.sa", print_hash_value);
    transparent_crc(p_637->g_613.sb, "p_637->g_613.sb", print_hash_value);
    transparent_crc(p_637->g_613.sc, "p_637->g_613.sc", print_hash_value);
    transparent_crc(p_637->g_613.sd, "p_637->g_613.sd", print_hash_value);
    transparent_crc(p_637->g_613.se, "p_637->g_613.se", print_hash_value);
    transparent_crc(p_637->g_613.sf, "p_637->g_613.sf", print_hash_value);
    transparent_crc(p_637->g_626, "p_637->g_626", print_hash_value);
    transparent_crc(p_637->v_collective, "p_637->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 29; i++)
            transparent_crc(p_637->g_special_values[i + 29 * get_linear_group_id()], "p_637->g_special_values[i + 29 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_637->l_comm_values[get_linear_local_id()], "p_637->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_637->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()], "p_637->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
