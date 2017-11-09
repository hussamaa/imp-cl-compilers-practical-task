// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 66,84,1 -l 1,21,1
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

__constant uint32_t permutations[10][21] = {
{4,8,15,7,16,19,10,14,18,20,1,0,11,2,13,17,6,9,5,12,3}, // permutation 0
{14,15,3,4,12,17,13,11,7,16,10,8,0,5,6,2,1,20,19,18,9}, // permutation 1
{11,4,14,0,16,5,13,20,2,1,10,6,8,15,18,19,17,7,9,12,3}, // permutation 2
{6,10,15,12,18,19,4,8,5,2,20,9,7,3,14,1,17,11,16,0,13}, // permutation 3
{7,11,10,4,3,9,14,6,20,2,19,12,17,15,1,5,16,13,0,8,18}, // permutation 4
{7,3,13,10,19,20,4,14,16,15,0,6,5,12,18,8,1,17,2,11,9}, // permutation 5
{20,1,5,13,7,8,2,0,10,14,18,9,12,11,3,19,17,16,15,6,4}, // permutation 6
{15,6,1,0,5,4,16,7,11,9,14,3,8,19,2,20,13,17,18,12,10}, // permutation 7
{1,20,6,11,7,13,10,16,17,9,4,3,18,15,8,2,5,14,12,0,19}, // permutation 8
{16,11,10,15,7,17,0,13,19,18,9,2,5,20,1,14,3,4,6,8,12} // permutation 9
};

// Seed: 2036797422

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   volatile int8_t  f1;
   int32_t  f2;
   volatile int16_t  f3;
};

struct S1 {
    int32_t g_8;
    volatile int8_t g_11[3][3];
    volatile uint32_t g_12;
    uint32_t g_32;
    uint32_t g_42;
    uint32_t *g_41;
    VECTOR(uint8_t, 2) g_49;
    VECTOR(uint8_t, 2) g_50;
    volatile VECTOR(uint8_t, 4) g_51;
    int32_t g_66;
    uint32_t g_68[1][8][8];
    int8_t g_85[1][2];
    uint32_t g_92;
    int16_t g_94;
    uint16_t g_98;
    int8_t g_102[5];
    int64_t g_103;
    uint16_t g_104[10];
    uint32_t g_182;
    VECTOR(int64_t, 16) g_221;
    int32_t **g_224;
    VECTOR(int16_t, 4) g_247;
    VECTOR(uint16_t, 4) g_251;
    VECTOR(uint16_t, 8) g_252;
    VECTOR(uint8_t, 4) g_255;
    union U0 g_260;
    VECTOR(uint32_t, 8) g_286;
    VECTOR(uint32_t, 8) g_288;
    union U0 g_312[5][1][7];
    union U0 *g_311;
    VECTOR(uint32_t, 2) g_354;
    uint16_t *g_363;
    uint16_t **g_362;
    VECTOR(uint8_t, 8) g_388;
    uint64_t g_400;
    uint16_t g_425;
    VECTOR(int32_t, 16) g_459;
    uint8_t *g_473;
    uint8_t **g_472;
    uint8_t ***g_471;
    VECTOR(int8_t, 8) g_478;
    volatile VECTOR(int32_t, 8) g_547;
    volatile VECTOR(uint16_t, 8) g_586;
    uint16_t g_603;
    volatile VECTOR(uint16_t, 8) g_620;
    VECTOR(uint32_t, 16) g_624;
    uint32_t **g_655;
    uint32_t *** volatile g_654;
    volatile VECTOR(int8_t, 4) g_691;
    uint8_t * volatile g_700[8][2][4];
    uint8_t ****g_706;
    int32_t *g_730;
    volatile VECTOR(int64_t, 16) g_745;
    VECTOR(uint8_t, 16) g_759;
    int64_t *g_790;
    int64_t **g_789[3][7][5];
    int32_t ** volatile g_807;
    volatile VECTOR(int8_t, 4) g_811;
    volatile VECTOR(int32_t, 16) g_840;
    uint8_t *****g_853;
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
uint16_t  func_1(struct S1 * p_1045);
int32_t * func_2(int32_t  p_3, int32_t  p_4, uint64_t  p_5, struct S1 * p_1045);
int32_t * func_18(int32_t * p_19, int32_t * p_20, int32_t * p_21, struct S1 * p_1045);
int32_t * func_22(uint32_t  p_23, int32_t * p_24, int32_t * p_25, uint32_t  p_26, struct S1 * p_1045);
int32_t * func_27(int32_t  p_28, int32_t * p_29, int8_t  p_30, struct S1 * p_1045);
int32_t  func_35(uint32_t * p_36, uint32_t * p_37, int64_t  p_38, uint32_t * p_39, uint32_t * p_40, struct S1 * p_1045);
uint32_t * func_43(uint32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t  p_47, struct S1 * p_1045);
int32_t * func_55(uint32_t * p_56, uint32_t * p_57, int16_t  p_58, int64_t  p_59, int64_t  p_60, struct S1 * p_1045);
uint32_t * func_61(int32_t  p_62, struct S1 * p_1045);
uint64_t  func_89(int16_t  p_90, uint16_t  p_91, struct S1 * p_1045);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1045->g_comm_values p_1045->g_12 p_1045->g_8 p_1045->g_32 p_1045->g_41 p_1045->g_49 p_1045->g_50 p_1045->g_51 p_1045->g_66 p_1045->g_68 p_1045->g_42 p_1045->l_comm_values p_1045->g_104 p_1045->g_92 p_1045->g_182 p_1045->g_221 p_1045->g_224 p_1045->g_102 p_1045->g_247 p_1045->g_251 p_1045->g_252 p_1045->g_85 p_1045->g_255 p_1045->g_286 p_1045->g_288 p_1045->g_311 p_1045->g_260.f2 p_1045->g_354 p_1045->g_260.f0 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_388 p_1045->g_400 p_1045->g_94 p_1045->g_425 p_1045->g_459 p_1045->g_547 p_1045->g_478 p_1045->g_312 p_1045->g_586 p_1045->g_103 p_1045->g_472 p_1045->g_620 p_1045->g_624 p_1045->g_654 p_1045->g_312.f0 p_1045->g_655 p_1045->g_691 p_1045->g_700 p_1045->g_745 p_1045->g_759 p_1045->g_811 p_1045->g_807 p_1045->g_730 p_1045->g_603
 * writes: p_1045->g_12 p_1045->g_8 p_1045->g_32 p_1045->g_66 p_1045->g_68 p_1045->g_85 p_1045->g_92 p_1045->g_104 p_1045->g_182 p_1045->g_224 p_1045->g_42 p_1045->g_102 p_1045->g_251 p_1045->g_260.f2 p_1045->g_260.f0 p_1045->g_400 p_1045->g_388 p_1045->g_363 p_1045->g_425 p_1045->g_247 p_1045->g_312.f0 p_1045->g_98 p_1045->g_471 p_1045->g_459 p_1045->g_255 p_1045->g_94 p_1045->g_603 p_1045->g_103 p_1045->g_473 p_1045->g_706 p_1045->g_730 p_1045->g_547 p_1045->g_789
 */
uint16_t  func_1(struct S1 * p_1045)
{ /* block id: 4 */
    uint8_t l_6 = 4UL;
    int32_t **l_962[1];
    int32_t l_963 = (-6L);
    uint8_t l_968 = 9UL;
    uint8_t *l_969[2][4][10] = {{{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6}},{{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6},{(void*)0,(void*)0,&l_6,(void*)0,&l_968,(void*)0,&l_6,(void*)0,(void*)0,&l_6}}};
    uint32_t l_970 = 7UL;
    uint8_t l_971[5][1][8] = {{{255UL,255UL,0x4CL,0x55L,255UL,0x55L,0x4CL,255UL}},{{255UL,255UL,0x4CL,0x55L,255UL,0x55L,0x4CL,255UL}},{{255UL,255UL,0x4CL,0x55L,255UL,0x55L,0x4CL,255UL}},{{255UL,255UL,0x4CL,0x55L,255UL,0x55L,0x4CL,255UL}},{{255UL,255UL,0x4CL,0x55L,255UL,0x55L,0x4CL,255UL}}};
    uint8_t l_972 = 0x39L;
    int8_t l_973 = 0x2AL;
    int64_t l_976[5][9] = {{0x587010731727B446L,1L,1L,0x24BAAEE52EDAFC0FL,1L,1L,0x587010731727B446L,(-3L),0x6E1B525243C60CC7L},{0x587010731727B446L,1L,1L,0x24BAAEE52EDAFC0FL,1L,1L,0x587010731727B446L,(-3L),0x6E1B525243C60CC7L},{0x587010731727B446L,1L,1L,0x24BAAEE52EDAFC0FL,1L,1L,0x587010731727B446L,(-3L),0x6E1B525243C60CC7L},{0x587010731727B446L,1L,1L,0x24BAAEE52EDAFC0FL,1L,1L,0x587010731727B446L,(-3L),0x6E1B525243C60CC7L},{0x587010731727B446L,1L,1L,0x24BAAEE52EDAFC0FL,1L,1L,0x587010731727B446L,(-3L),0x6E1B525243C60CC7L}};
    uint32_t *l_977 = (void*)0;
    uint32_t *l_978 = &p_1045->g_32;
    VECTOR(int32_t, 4) l_987 = (VECTOR(int32_t, 4))(0x21668F81L, (VECTOR(int32_t, 2))(0x21668F81L, 0x4527D89CL), 0x4527D89CL);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_962[i] = &p_1045->g_730;
    (*p_1045->g_807) = func_2(l_6, l_6, p_1045->g_comm_values[p_1045->tid], p_1045);
    (*p_1045->g_730) = (l_963 < (safe_sub_func_uint64_t_u_u(((((l_970 = (FAKE_DIVERGE(p_1045->local_2_offset, get_local_id(2), 10) == (safe_mod_func_uint32_t_u_u((**p_1045->g_655), l_968)))) != l_971[4][0][7]) == l_972) <= l_973), (((*l_978) &= (p_1045->g_252.s1 & (safe_mod_func_uint8_t_u_u((p_1045->g_98 || (l_976[3][1] , 248UL)), p_1045->g_66)))) ^ 0x217A00D9L))));
    for (p_1045->g_603 = (-28); (p_1045->g_603 == 8); p_1045->g_603 = safe_add_func_uint16_t_u_u(p_1045->g_603, 7))
    { /* block id: 509 */
        uint16_t l_985 = 65535UL;
        int32_t l_986[1][2][3] = {{{3L,0x4342E857L,3L},{3L,0x4342E857L,3L}}};
        int32_t *l_998 = (void*)0;
        int i, j, k;
        if ((**p_1045->g_807))
            break;
        for (l_963 = (-10); (l_963 <= 3); l_963 = safe_add_func_int16_t_s_s(l_963, 2))
        { /* block id: 513 */
            uint32_t l_994 = 4294967295UL;
            int32_t l_997 = 0x6AEC3B82L;
            if ((safe_rshift_func_uint8_t_u_u((~l_985), (l_986[0][1][1] = l_985))))
            { /* block id: 515 */
                return (*p_1045->g_363);
            }
            else
            { /* block id: 517 */
                uint32_t l_991 = 0x33712F5EL;
                (**p_1045->g_807) &= (+((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_987.zy)).xxxyyxxyxyxxxyxx)).sd);
                for (p_1045->g_92 = 0; (p_1045->g_92 < 50); p_1045->g_92 = safe_add_func_int8_t_s_s(p_1045->g_92, 9))
                { /* block id: 521 */
                    int32_t l_990[7] = {0x7C38AAD8L,0x7C38AAD8L,0x7C38AAD8L,0x7C38AAD8L,0x7C38AAD8L,0x7C38AAD8L,0x7C38AAD8L};
                    int i;
                    l_990[0] ^= (*p_1045->g_730);
                    l_991++;
                    (*p_1045->g_730) = (p_1045->g_811.y > FAKE_DIVERGE(p_1045->global_2_offset, get_global_id(2), 10));
                }
                if (l_994)
                    break;
            }
            l_997 |= ((*p_1045->g_730) = ((safe_rshift_func_uint8_t_u_s(l_986[0][0][1], ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x3CL)).yyxyyxyyxxxyxxxx)))).s3)) || 0x3FDCL));
            l_998 = &l_997;
            if ((atomic_inc(&p_1045->l_atomic_input[52]) == 7))
            { /* block id: 532 */
                VECTOR(int64_t, 2) l_999 = (VECTOR(int64_t, 2))((-10L), (-6L));
                union U0 l_1000 = {0x5BL};/* VOLATILE GLOBAL l_1000 */
                VECTOR(int64_t, 16) l_1001 = (VECTOR(int64_t, 16))(0x20117BF244076C06L, (VECTOR(int64_t, 4))(0x20117BF244076C06L, (VECTOR(int64_t, 2))(0x20117BF244076C06L, 2L), 2L), 2L, 0x20117BF244076C06L, 2L, (VECTOR(int64_t, 2))(0x20117BF244076C06L, 2L), (VECTOR(int64_t, 2))(0x20117BF244076C06L, 2L), 0x20117BF244076C06L, 2L, 0x20117BF244076C06L, 2L);
                uint16_t l_1002 = 65526UL;
                VECTOR(uint32_t, 2) l_1003 = (VECTOR(uint32_t, 2))(0xE566BF58L, 0x1BAE57D3L);
                uint8_t l_1004 = 0x6FL;
                uint8_t l_1005 = 0x36L;
                VECTOR(int64_t, 8) l_1006 = (VECTOR(int64_t, 8))(0x222A9186882081F4L, (VECTOR(int64_t, 4))(0x222A9186882081F4L, (VECTOR(int64_t, 2))(0x222A9186882081F4L, 0x24DE4947983E2069L), 0x24DE4947983E2069L), 0x24DE4947983E2069L, 0x222A9186882081F4L, 0x24DE4947983E2069L);
                VECTOR(int64_t, 8) l_1007 = (VECTOR(int64_t, 8))(0x31D06814C37337A2L, (VECTOR(int64_t, 4))(0x31D06814C37337A2L, (VECTOR(int64_t, 2))(0x31D06814C37337A2L, 0L), 0L), 0L, 0x31D06814C37337A2L, 0L);
                int32_t l_1009 = (-4L);
                int32_t *l_1008 = &l_1009;
                int32_t *l_1010 = (void*)0;
                VECTOR(int32_t, 8) l_1011 = (VECTOR(int32_t, 8))(0x1B258B6FL, (VECTOR(int32_t, 4))(0x1B258B6FL, (VECTOR(int32_t, 2))(0x1B258B6FL, (-2L)), (-2L)), (-2L), 0x1B258B6FL, (-2L));
                uint16_t l_1012[9];
                VECTOR(int8_t, 16) l_1013 = (VECTOR(int8_t, 16))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 0x56L), 0x56L), 0x56L, 0x2FL, 0x56L, (VECTOR(int8_t, 2))(0x2FL, 0x56L), (VECTOR(int8_t, 2))(0x2FL, 0x56L), 0x2FL, 0x56L, 0x2FL, 0x56L);
                VECTOR(int32_t, 4) l_1014 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1B10659DL), 0x1B10659DL);
                VECTOR(uint16_t, 8) l_1015 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x845EL), 0x845EL), 0x845EL, 1UL, 0x845EL);
                VECTOR(uint16_t, 2) l_1016 = (VECTOR(uint16_t, 2))(65535UL, 65530UL);
                VECTOR(uint16_t, 16) l_1017 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint16_t, 2))(3UL, 0UL), (VECTOR(uint16_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
                VECTOR(uint16_t, 4) l_1018 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
                int8_t l_1019 = 0L;
                VECTOR(uint16_t, 8) l_1020 = (VECTOR(uint16_t, 8))(0xEA2BL, (VECTOR(uint16_t, 4))(0xEA2BL, (VECTOR(uint16_t, 2))(0xEA2BL, 65535UL), 65535UL), 65535UL, 0xEA2BL, 65535UL);
                uint32_t l_1021 = 4294967294UL;
                int64_t l_1022 = (-1L);
                uint8_t l_1023 = 0x50L;
                int32_t l_1024 = (-8L);
                int64_t l_1025 = 0x7B4BBB7E5A6562C8L;
                uint16_t l_1026 = 7UL;
                int16_t l_1027 = 0x1B32L;
                uint8_t l_1028 = 0x18L;
                int64_t l_1029 = 0x3D41F2D4E88AF4ABL;
                uint64_t l_1030 = 0x07908E046C63D2BDL;
                int64_t l_1031 = 1L;
                int64_t l_1032 = 0x266F97838554D9C5L;
                int32_t *l_1033 = (void*)0;
                int32_t *l_1034[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t l_1035 = 0x3AL;
                int i;
                for (i = 0; i < 9; i++)
                    l_1012[i] = 0x7A0DL;
                l_1010 = (((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(l_999.yyxyxxxy)).s22, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x420DB5E901DFE1DCL, (l_1000 , 0x4E99D85CE1AF8EBDL), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_1001.s0327b4e53109a425)).s79f3)), l_1002, (l_1005 &= (l_1004 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1003.xy)))).hi , 0L))), ((VECTOR(int64_t, 2))(l_1006.s60)), ((VECTOR(int64_t, 4))(l_1007.s1643)), 0x3C4A8E986FB9ADF1L, (-1L))).odd)).s31))).xyyyxxxy, ((VECTOR(int64_t, 2))(0L, (-1L))).yyxxyyxx))).s5 , l_1008);
                l_1034[0] = (((l_1011.s5 , (l_1013.s0 = (l_1012[8] |= 0x70FDL))) , ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(0x4F45E29BL, 0x4FF886A5L)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x37C01C18L, (-8L))), ((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1014.yzyw)), (-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x39A9L, 0x2851L)).xyyxxyyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_1015.s73)))), ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(l_1016.xxyyyyxy)), ((VECTOR(uint16_t, 16))(0x54B9L, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(l_1017.s92)).xyxyxyyxyxyyxxxy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_1018.xxzyxyxx)).s00)).xxxyxxxy, (uint16_t)l_1019, (uint16_t)0xE8FEL))).s10)).yxxxxxyyyyyyxxxy))).s0ca0, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1020.s4231)).lo)).yyxxyyyyyxxxxyxx)).sb68b))), 6UL, ((l_1023 = (l_1022 ^= l_1021)) , (l_1026 |= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x6156L, 0xCCF6L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0xCED7L, (l_1024 , (l_1025 , 65535UL)), ((VECTOR(uint16_t, 4))(0xAD0FL)), 0UL, 0xE403L)).hi)), 3UL, 0UL)).s6)), 65533UL, ((VECTOR(uint16_t, 8))(0x87CAL)))).even))), l_1027, l_1028, ((VECTOR(uint16_t, 2))(1UL)), 65528UL, 0xA2A6L)).hi))))).s2, ((VECTOR(int32_t, 2))((-9L))), l_1029, (-2L), ((VECTOR(int32_t, 4))((-5L))), (-1L), 6L)).s398d)).wywxyywx)).s2, 0x1D53DCCFL, l_1030, (-3L), 1L, l_1031, (-3L), 1L)), ((VECTOR(int32_t, 2))(0x4491E7DFL)), (-5L), ((VECTOR(int32_t, 2))(0x499A1FF2L)), 1L, 0L)).s38))), l_1032, 0x333413E4L, 0x52058B42L)).s51, ((VECTOR(int32_t, 2))(0x402C78AFL)), ((VECTOR(int32_t, 2))(1L))))).xxxxyyyx))).s7) , l_1033);
                if (l_1035)
                { /* block id: 542 */
                    uint64_t l_1036[4] = {0xAD7010585982E71BL,0xAD7010585982E71BL,0xAD7010585982E71BL,0xAD7010585982E71BL};
                    int16_t l_1037 = 0x6413L;
                    VECTOR(int32_t, 2) l_1039 = (VECTOR(int32_t, 2))(0x0F07F0BEL, 0x7A4148BFL);
                    int32_t *l_1038[8][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    (*l_1008) = (l_1036[0] , ((l_1021 = 0x4D5E1D5BL) , l_1037));
                    l_1038[7][4][1] = l_1038[3][0][2];
                    for (l_1039.x = 16; (l_1039.x == (-30)); --l_1039.x)
                    { /* block id: 548 */
                        VECTOR(int32_t, 8) l_1042 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x61D3D52FL), 0x61D3D52FL), 0x61D3D52FL, (-1L), 0x61D3D52FL);
                        int i;
                        (*l_1008) |= ((VECTOR(int32_t, 4))(l_1042.s4373)).z;
                    }
                }
                else
                { /* block id: 551 */
                    VECTOR(int32_t, 8) l_1044 = (VECTOR(int32_t, 8))(0x4CB53972L, (VECTOR(int32_t, 4))(0x4CB53972L, (VECTOR(int32_t, 2))(0x4CB53972L, 0x5566EEE6L), 0x5566EEE6L), 0x5566EEE6L, 0x4CB53972L, 0x5566EEE6L);
                    int32_t *l_1043 = (void*)0;
                    int i;
                    l_1033 = l_1043;
                }
                unsigned int result = 0;
                result += l_999.y;
                result += l_999.x;
                result += l_1000.f0;
                result += l_1000.f1;
                result += l_1000.f2;
                result += l_1000.f3;
                result += l_1001.sf;
                result += l_1001.se;
                result += l_1001.sd;
                result += l_1001.sc;
                result += l_1001.sb;
                result += l_1001.sa;
                result += l_1001.s9;
                result += l_1001.s8;
                result += l_1001.s7;
                result += l_1001.s6;
                result += l_1001.s5;
                result += l_1001.s4;
                result += l_1001.s3;
                result += l_1001.s2;
                result += l_1001.s1;
                result += l_1001.s0;
                result += l_1002;
                result += l_1003.y;
                result += l_1003.x;
                result += l_1004;
                result += l_1005;
                result += l_1006.s7;
                result += l_1006.s6;
                result += l_1006.s5;
                result += l_1006.s4;
                result += l_1006.s3;
                result += l_1006.s2;
                result += l_1006.s1;
                result += l_1006.s0;
                result += l_1007.s7;
                result += l_1007.s6;
                result += l_1007.s5;
                result += l_1007.s4;
                result += l_1007.s3;
                result += l_1007.s2;
                result += l_1007.s1;
                result += l_1007.s0;
                result += l_1009;
                result += l_1011.s7;
                result += l_1011.s6;
                result += l_1011.s5;
                result += l_1011.s4;
                result += l_1011.s3;
                result += l_1011.s2;
                result += l_1011.s1;
                result += l_1011.s0;
                int l_1012_i0;
                for (l_1012_i0 = 0; l_1012_i0 < 9; l_1012_i0++) {
                    result += l_1012[l_1012_i0];
                }
                result += l_1013.sf;
                result += l_1013.se;
                result += l_1013.sd;
                result += l_1013.sc;
                result += l_1013.sb;
                result += l_1013.sa;
                result += l_1013.s9;
                result += l_1013.s8;
                result += l_1013.s7;
                result += l_1013.s6;
                result += l_1013.s5;
                result += l_1013.s4;
                result += l_1013.s3;
                result += l_1013.s2;
                result += l_1013.s1;
                result += l_1013.s0;
                result += l_1014.w;
                result += l_1014.z;
                result += l_1014.y;
                result += l_1014.x;
                result += l_1015.s7;
                result += l_1015.s6;
                result += l_1015.s5;
                result += l_1015.s4;
                result += l_1015.s3;
                result += l_1015.s2;
                result += l_1015.s1;
                result += l_1015.s0;
                result += l_1016.y;
                result += l_1016.x;
                result += l_1017.sf;
                result += l_1017.se;
                result += l_1017.sd;
                result += l_1017.sc;
                result += l_1017.sb;
                result += l_1017.sa;
                result += l_1017.s9;
                result += l_1017.s8;
                result += l_1017.s7;
                result += l_1017.s6;
                result += l_1017.s5;
                result += l_1017.s4;
                result += l_1017.s3;
                result += l_1017.s2;
                result += l_1017.s1;
                result += l_1017.s0;
                result += l_1018.w;
                result += l_1018.z;
                result += l_1018.y;
                result += l_1018.x;
                result += l_1019;
                result += l_1020.s7;
                result += l_1020.s6;
                result += l_1020.s5;
                result += l_1020.s4;
                result += l_1020.s3;
                result += l_1020.s2;
                result += l_1020.s1;
                result += l_1020.s0;
                result += l_1021;
                result += l_1022;
                result += l_1023;
                result += l_1024;
                result += l_1025;
                result += l_1026;
                result += l_1027;
                result += l_1028;
                result += l_1029;
                result += l_1030;
                result += l_1031;
                result += l_1032;
                result += l_1035;
                atomic_add(&p_1045->l_special_values[52], result);
            }
            else
            { /* block id: 554 */
                (1 + 1);
            }
        }
    }
    return (**p_1045->g_362);
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_12 p_1045->g_8 p_1045->g_32 p_1045->g_41 p_1045->g_49 p_1045->g_50 p_1045->g_51 p_1045->g_66 p_1045->g_68 p_1045->g_42 p_1045->l_comm_values p_1045->g_104 p_1045->g_92 p_1045->g_182 p_1045->g_221 p_1045->g_224 p_1045->g_102 p_1045->g_247 p_1045->g_251 p_1045->g_252 p_1045->g_85 p_1045->g_255 p_1045->g_286 p_1045->g_288 p_1045->g_comm_values p_1045->g_311 p_1045->g_260.f2 p_1045->g_354 p_1045->g_260.f0 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_388 p_1045->g_400 p_1045->g_94 p_1045->g_425 p_1045->g_459 p_1045->g_547 p_1045->g_478 p_1045->g_312 p_1045->g_586 p_1045->g_103 p_1045->g_472 p_1045->g_620 p_1045->g_624 p_1045->g_654 p_1045->g_312.f0 p_1045->g_655 p_1045->g_691 p_1045->g_700 p_1045->g_745 p_1045->g_759 p_1045->g_811 p_1045->g_807 p_1045->g_730
 * writes: p_1045->g_12 p_1045->g_8 p_1045->g_32 p_1045->g_66 p_1045->g_68 p_1045->g_85 p_1045->g_92 p_1045->g_104 p_1045->g_182 p_1045->g_224 p_1045->g_42 p_1045->g_102 p_1045->g_251 p_1045->g_260.f2 p_1045->g_260.f0 p_1045->g_400 p_1045->g_388 p_1045->g_363 p_1045->g_425 p_1045->g_247 p_1045->g_312.f0 p_1045->g_98 p_1045->g_471 p_1045->g_459 p_1045->g_255 p_1045->g_94 p_1045->g_603 p_1045->g_103 p_1045->g_473 p_1045->g_706 p_1045->g_730 p_1045->g_547 p_1045->g_789
 */
int32_t * func_2(int32_t  p_3, int32_t  p_4, uint64_t  p_5, struct S1 * p_1045)
{ /* block id: 5 */
    int32_t *l_7 = &p_1045->g_8;
    int32_t *l_9[1][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int64_t l_10 = 1L;
    uint16_t l_17 = 0xE77DL;
    uint32_t *l_31 = &p_1045->g_32;
    uint64_t l_48 = 18446744073709551612UL;
    VECTOR(uint8_t, 16) l_52 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    VECTOR(uint8_t, 16) l_53 = (VECTOR(uint8_t, 16))(0x88L, (VECTOR(uint8_t, 4))(0x88L, (VECTOR(uint8_t, 2))(0x88L, 0xC2L), 0xC2L), 0xC2L, 0x88L, 0xC2L, (VECTOR(uint8_t, 2))(0x88L, 0xC2L), (VECTOR(uint8_t, 2))(0x88L, 0xC2L), 0x88L, 0xC2L, 0x88L, 0xC2L);
    uint32_t l_54 = 9UL;
    int32_t *l_65[10] = {&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66,&p_1045->g_66};
    uint32_t **l_71[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint32_t *l_72[3];
    uint32_t *l_731 = (void*)0;
    int32_t **l_916 = &p_1045->g_730;
    VECTOR(uint32_t, 2) l_958 = (VECTOR(uint32_t, 2))(0UL, 0UL);
    uint8_t ******l_959 = &p_1045->g_853;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_72[i] = (void*)0;
    p_1045->g_12--;
    for (p_1045->g_8 = 0; (p_1045->g_8 > (-25)); p_1045->g_8--)
    { /* block id: 9 */
        l_17 = p_3;
    }
    (*l_7) = (((*l_916) = func_18(((*l_916) = func_22(p_4, l_9[0][1][1], ((((*l_916) = func_27(((--(*l_31)) >= (p_1045->g_459.s4 = ((*l_7) = func_35(p_1045->g_41, func_43(l_48, (((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(p_1045->g_49.xyyx)).wyzwzxwx, ((VECTOR(uint8_t, 16))(p_1045->g_50.yyyyyyyyyyxxxxyy)).even, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1045->g_51.yx)), 0xF8L, 0x31L)).odd)))).xxyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_52.sf936)).w, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_53.s5a)))), 250UL))))).zzxxzwyx))).s1663335030370432)).sb3, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0UL, 1UL, 0x9EL, p_4, 0xA0L, GROUP_DIVERGE(1, 1), 254UL, 0x35L)).s05)).yyxxyxxy)).s77))).even , l_54), func_55(l_31, (l_72[0] = func_61((p_1045->g_66 &= (safe_div_func_uint8_t_u_u(((-9L) != p_1045->g_49.x), p_5))), p_1045)), p_5, p_3, p_3, p_1045), p_5, p_1045), p_4, l_731, (*p_1045->g_655), p_1045)))), l_9[0][0][1], p_1045->g_478.s3, p_1045)) != l_65[5]) , (*l_916)), p_4, p_1045)), l_7, p_1045->g_41, p_1045)) == p_1045->g_41);
    for (p_1045->g_66 = 2; (p_1045->g_66 < (-7)); p_1045->g_66 = safe_sub_func_uint16_t_u_u(p_1045->g_66, 2))
    { /* block id: 496 */
        int32_t *l_957 = &p_1045->g_8;
        uint8_t *******l_960 = &l_959;
        int64_t l_961 = 0x08339FE00777C152L;
        (*l_916) = l_957;
        l_961 = ((**l_916) = ((((VECTOR(uint32_t, 2))(l_958.yy)).odd > (*p_1045->g_41)) > (((&p_5 != (void*)0) , &p_1045->g_853) != ((*l_960) = l_959))));
    }
    return (*l_916);
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_41 p_1045->g_42 p_1045->g_807 p_1045->g_730 p_1045->g_8
 * writes: p_1045->g_730 p_1045->g_42
 */
int32_t * func_18(int32_t * p_19, int32_t * p_20, int32_t * p_21, struct S1 * p_1045)
{ /* block id: 480 */
    uint16_t l_951 = 0xE92BL;
    int32_t *l_952 = (void*)0;
    int32_t *l_953 = (void*)0;
    int32_t **l_954 = &p_1045->g_730;
    if ((atomic_inc(&p_1045->l_atomic_input[4]) == 0))
    { /* block id: 482 */
        int32_t *l_946 = (void*)0;
        int32_t l_948 = 0x5F6A49C7L;
        int32_t *l_947[1];
        int32_t l_949 = (-1L);
        int32_t l_950[10] = {0L,(-1L),(-3L),(-1L),0L,0L,(-1L),(-3L),(-1L),0L};
        int i;
        for (i = 0; i < 1; i++)
            l_947[i] = &l_948;
        l_947[0] = l_946;
        l_950[5] = l_949;
        unsigned int result = 0;
        result += l_948;
        result += l_949;
        int l_950_i0;
        for (l_950_i0 = 0; l_950_i0 < 10; l_950_i0++) {
            result += l_950[l_950_i0];
        }
        atomic_add(&p_1045->l_special_values[4], result);
    }
    else
    { /* block id: 485 */
        (1 + 1);
    }
    (*l_954) = func_22(l_951, l_952, (l_953 = p_20), (*p_1045->g_41), p_1045);
    (*p_21) = (*l_953);
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_807 p_1045->g_730
 * writes:
 */
int32_t * func_22(uint32_t  p_23, int32_t * p_24, int32_t * p_25, uint32_t  p_26, struct S1 * p_1045)
{ /* block id: 465 */
    int8_t l_932 = (-1L);
    VECTOR(int64_t, 16) l_933 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 5L), 5L), 5L, 2L, 5L, (VECTOR(int64_t, 2))(2L, 5L), (VECTOR(int64_t, 2))(2L, 5L), 2L, 5L, 2L, 5L);
    uint32_t ***l_938[8][3][5] = {{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}},{{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655},{&p_1045->g_655,&p_1045->g_655,&p_1045->g_655,(void*)0,&p_1045->g_655}}};
    int32_t l_943[6][10][4] = {{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}},{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}},{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}},{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}},{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}},{{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL},{0L,0L,3L,0x126F071FL}}};
    int16_t l_944 = 0x63DDL;
    int32_t l_945 = 3L;
    int i, j, k;
    if ((atomic_inc(&p_1045->l_atomic_input[9]) == 8))
    { /* block id: 467 */
        uint16_t l_917 = 9UL;
        int32_t l_918 = 0x51257D3EL;
        VECTOR(uint16_t, 2) l_919 = (VECTOR(uint16_t, 2))(0UL, 0xF48DL);
        int8_t l_920 = 0x2EL;
        uint32_t l_921 = 0xC24D23C2L;
        int32_t l_922 = 0x07FB4D83L;
        uint32_t l_923 = 1UL;
        int8_t l_924 = 0x5CL;
        uint8_t l_925 = 1UL;
        int i;
        l_921 ^= (l_920 |= ((l_918 &= l_917) , l_919.y));
        l_925 |= (l_922 , (l_924 = l_923));
        unsigned int result = 0;
        result += l_917;
        result += l_918;
        result += l_919.y;
        result += l_919.x;
        result += l_920;
        result += l_921;
        result += l_922;
        result += l_923;
        result += l_924;
        result += l_925;
        atomic_add(&p_1045->l_special_values[9], result);
    }
    else
    { /* block id: 473 */
        (1 + 1);
    }
    l_945 = ((safe_lshift_func_int16_t_s_u(((((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(0L, 1L)).xyxxxxxxyyxyyyxy))).s8 < (safe_lshift_func_int16_t_s_s(p_26, 13))) >= ((!(safe_rshift_func_int16_t_s_s(0x0539L, (!l_932)))) == p_23)), 15)) > ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(l_933.s5a1f)).odd, (int64_t)(safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((l_943[0][8][3] |= (((void*)0 == l_938[7][0][0]) & (((l_933.s4 , ((-1L) && (((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), ((safe_sub_func_uint8_t_u_u((p_23 , l_933.s1), 3UL)) | l_932))) != p_23) < p_23))) , 5L) & 0x6C20E0FCD50D5290L))), l_944)), l_944))))).lo);
    return (*p_1045->g_807);
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_655 p_1045->g_41 p_1045->g_92 p_1045->g_400 p_1045->g_811 p_1045->g_620 p_1045->g_624 p_1045->l_comm_values p_1045->g_654 p_1045->g_42 p_1045->g_221 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_807 p_1045->g_730
 * writes: p_1045->g_789 p_1045->g_42 p_1045->g_92 p_1045->g_400
 */
int32_t * func_27(int32_t  p_28, int32_t * p_29, int8_t  p_30, struct S1 * p_1045)
{ /* block id: 365 */
    uint32_t l_774 = 4294967290UL;
    uint8_t l_778 = 0x12L;
    int32_t l_780 = (-2L);
    int16_t l_784[1][2][3] = {{{0L,0L,0L},{0L,0L,0L}}};
    VECTOR(uint64_t, 2) l_821 = (VECTOR(uint64_t, 2))(1UL, 0x872C8A30EEC2EBA9L);
    int64_t *l_824[7] = {&p_1045->g_103,&p_1045->g_103,&p_1045->g_103,&p_1045->g_103,&p_1045->g_103,&p_1045->g_103,&p_1045->g_103};
    VECTOR(int32_t, 8) l_861 = (VECTOR(int32_t, 8))(0x2EF34487L, (VECTOR(int32_t, 4))(0x2EF34487L, (VECTOR(int32_t, 2))(0x2EF34487L, (-4L)), (-4L)), (-4L), 0x2EF34487L, (-4L));
    int32_t l_887[5][2][9] = {{{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L},{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L}},{{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L},{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L}},{{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L},{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L}},{{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L},{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L}},{{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L},{0L,0x0E7D33B7L,(-8L),1L,(-8L),0x0E7D33B7L,0L,1L,1L}}};
    uint16_t l_901 = 65535UL;
    int32_t *l_904 = &p_1045->g_312[0][0][6].f2;
    int32_t *l_905 = (void*)0;
    int32_t *l_906 = &p_1045->g_8;
    int32_t *l_907 = &l_780;
    int32_t *l_908[2][3] = {{&p_1045->g_8,&l_780,&p_1045->g_8},{&p_1045->g_8,&l_780,&p_1045->g_8}};
    int8_t l_909 = 0x22L;
    int16_t l_910 = 0x4B02L;
    int32_t l_911 = 0L;
    int64_t l_912 = 0x44E0255123F6C5B3L;
    uint64_t l_913 = 0x33EE7E1AD6AC6329L;
    int i, j, k;
    for (p_28 = 16; (p_28 < 22); ++p_28)
    { /* block id: 368 */
        uint32_t l_775 = 4294967294UL;
        int16_t *l_779[5][5];
        int8_t *l_783 = &p_1045->g_85[0][0];
        int32_t *l_785 = &l_780;
        int64_t **l_788 = (void*)0;
        VECTOR(int8_t, 16) l_810 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int8_t, 2))(8L, (-1L)), (VECTOR(int8_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
        uint8_t *****l_841[4][7][7] = {{{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706}},{{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706}},{{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706}},{{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706},{&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706,&p_1045->g_706}}};
        int32_t l_872 = 0x4DC5AF49L;
        int32_t l_876 = 1L;
        int32_t l_879 = 1L;
        int32_t l_883 = (-4L);
        int8_t l_884[6][4][3] = {{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}},{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}},{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}},{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}},{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}},{{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL}}};
        int32_t l_885 = 1L;
        int32_t l_886 = 0L;
        int32_t l_889 = (-1L);
        int32_t l_894[6];
        int32_t l_900[6];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
                l_779[i][j] = &p_1045->g_94;
        }
        for (i = 0; i < 6; i++)
            l_894[i] = (-7L);
        for (i = 0; i < 6; i++)
            l_900[i] = 0x6601AA61L;
        if (((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((safe_mod_func_int8_t_s_s(((*l_783) = (((safe_lshift_func_int16_t_s_s((p_1045->g_354.y == l_774), 15)) == (((*p_1045->g_311) , l_775) || ((l_774 , GROUP_DIVERGE(0, 1)) <= ((safe_sub_func_uint16_t_u_u(l_775, l_778)) || (l_780 |= p_28))))) && ((*p_1045->g_41)++))), (p_1045->g_252.s5 && FAKE_DIVERGE(p_1045->global_2_offset, get_global_id(2), 10)))) && l_780), ((VECTOR(int32_t, 2))(0L)), 0L, l_784[0][1][2], ((VECTOR(int32_t, 2))(0x735C2D20L)), 9L)).s55)).xyyxyxyyyyyxyyyy)).hi, (int32_t)l_775, (int32_t)l_775))).s14, ((VECTOR(int32_t, 2))(0x4DA3FCC3L))))), 0x0CC04DA4L, 0x1529E057L)).wyzyxzwzzwwwywyz, ((VECTOR(int32_t, 16))(0L))))).s8d, ((VECTOR(int32_t, 2))((-1L)))))).yyxx, ((VECTOR(int32_t, 4))(0x543C1C8FL))))).z)
        { /* block id: 372 */
            return &p_1045->g_8;
        }
        else
        { /* block id: 374 */
            for (p_30 = 0; (p_30 >= 19); ++p_30)
            { /* block id: 377 */
                (*l_785) = p_28;
                p_1045->g_789[2][1][3] = l_788;
                (*l_785) &= (((**p_1045->g_655) = p_30) >= ((void*)0 != &p_1045->g_224));
                if ((atomic_inc(&p_1045->l_atomic_input[2]) == 3))
                { /* block id: 383 */
                    int32_t *l_791 = (void*)0;
                    int32_t l_793 = (-5L);
                    int32_t *l_792 = &l_793;
                    int32_t *l_794 = &l_793;
                    int32_t *l_795 = &l_793;
                    l_795 = (l_794 = (l_792 = l_791));
                    unsigned int result = 0;
                    result += l_793;
                    atomic_add(&p_1045->l_special_values[2], result);
                }
                else
                { /* block id: 387 */
                    (1 + 1);
                }
            }
            for (p_1045->g_92 = 3; (p_1045->g_92 > 2); p_1045->g_92--)
            { /* block id: 393 */
                for (p_1045->g_400 = 0; (p_1045->g_400 == 29); p_1045->g_400 = safe_add_func_int16_t_s_s(p_1045->g_400, 9))
                { /* block id: 396 */
                    return &p_1045->g_8;
                }
            }
        }
        for (l_775 = 0; (l_775 > 3); ++l_775)
        { /* block id: 403 */
            int64_t l_804 = 0x5162262A59B942D7L;
            int64_t *l_823 = (void*)0;
            int32_t l_874 = 0x29EB76C0L;
            int32_t l_875 = 0L;
            int32_t l_877 = 0x1B6D4910L;
            int32_t l_878 = 0x21DE3CE5L;
            int32_t l_880 = 0x510C7D95L;
            int32_t l_881 = (-1L);
            int32_t l_882 = 0x5E0E1915L;
            int32_t l_888 = 0L;
            int32_t l_890 = 0x462EBC48L;
            int32_t l_891 = 0x10CBC6C1L;
            int32_t l_892[3];
            int i;
            for (i = 0; i < 3; i++)
                l_892[i] = 0x5E2115D7L;
            for (p_1045->g_92 = (-9); (p_1045->g_92 <= 55); ++p_1045->g_92)
            { /* block id: 406 */
                int8_t l_832 = 0x29L;
                int32_t **l_833 = (void*)0;
                int32_t **l_834 = &l_785;
                int32_t **l_835 = &p_1045->g_730;
                int32_t *l_837[4];
                int32_t **l_836 = &l_837[2];
                uint64_t l_850 = 0xD12BE07E74559E12L;
                uint8_t *****l_852 = (void*)0;
                uint8_t ******l_851[7][4][1] = {{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}},{{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]},{&l_841[0][4][5]}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_837[i] = &p_1045->g_8;
                (1 + 1);
            }
            atomic_and(&p_1045->l_atomic_reduction[0], ((*l_785) = (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((GROUP_DIVERGE(2, 1) == ((((VECTOR(uint16_t, 4))((((0x1D70L || ((((safe_mul_func_uint8_t_u_u((((((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((((*p_1045->g_41) = 0x38A2CCE4L) ^ ((VECTOR(int32_t, 2))(l_861.s52)).lo) != p_1045->g_811.x), (safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((p_28 == p_1045->g_620.s2) , ((safe_sub_func_int8_t_s_s(p_28, (p_28 > p_1045->g_624.s5))) , (safe_div_func_uint8_t_u_u(p_28, FAKE_DIVERGE(p_1045->global_0_offset, get_global_id(0), 10))))), 0x23BCL)) == 0x5154L), p_1045->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))])), (-1L), 0x2F8FA8CC9069C8E7L)))), ((VECTOR(int64_t, 4))(0x6494EC520777DE8BL)), ((VECTOR(int64_t, 4))((-1L)))))).hi, ((VECTOR(int64_t, 2))((-5L)))))), 1L, 9L)).x, ((VECTOR(int64_t, 8))(5L)), ((VECTOR(int64_t, 4))(1L)), (-2L), 0L, 0x61DCAA4123BA6BC7L)).s6)) | (-1L)) , (***p_1045->g_654)) || l_804) ^ l_804), p_28)) <= p_1045->g_221.s4) && GROUP_DIVERGE(1, 1)) < l_861.s5)) || (*l_785)) | (**p_1045->g_362)), 0x0B35L, 65526UL, 0xF9F3L)).z >= (*l_785)) < p_30)), 1L)), (-8L)))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1045->v_collective += p_1045->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((*l_785))
            { /* block id: 454 */
                int32_t *l_870 = &p_1045->g_312[0][0][6].f2;
                int32_t l_871 = 3L;
                int32_t *l_873[10];
                int16_t l_893 = (-1L);
                uint8_t l_895 = 0xD1L;
                int i;
                for (i = 0; i < 10; i++)
                    l_873[i] = &l_872;
                atomic_xor(&p_1045->g_atomic_reduction[get_linear_group_id()], l_804);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1045->v_collective += p_1045->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                l_895--;
            }
            else
            { /* block id: 457 */
                int32_t *l_898 = &l_888;
                int32_t *l_899[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_899[i] = &l_877;
                ++l_901;
            }
        }
    }
    l_913--;
    return (*p_1045->g_807);
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_51 p_1045->g_745 p_1045->g_759 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_102 p_1045->g_655 p_1045->g_41 p_1045->g_42 p_1045->g_547
 * writes: p_1045->g_103 p_1045->g_94 p_1045->g_730 p_1045->g_547
 */
int32_t  func_35(uint32_t * p_36, uint32_t * p_37, int64_t  p_38, uint32_t * p_39, uint32_t * p_40, struct S1 * p_1045)
{ /* block id: 348 */
    uint64_t l_734 = 1UL;
    int32_t l_746 = 0L;
    int64_t *l_749 = &p_1045->g_103;
    VECTOR(int16_t, 2) l_754 = (VECTOR(int16_t, 2))(0x2697L, 8L);
    int32_t l_760[2][9][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
    int32_t l_761 = 0x774ECF96L;
    VECTOR(int32_t, 8) l_762 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
    uint64_t l_763 = 0UL;
    VECTOR(uint8_t, 16) l_764 = (VECTOR(uint8_t, 16))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0xEAL), 0xEAL), 0xEAL, 0x21L, 0xEAL, (VECTOR(uint8_t, 2))(0x21L, 0xEAL), (VECTOR(uint8_t, 2))(0x21L, 0xEAL), 0x21L, 0xEAL, 0x21L, 0xEAL);
    int32_t **l_765 = &p_1045->g_730;
    VECTOR(int32_t, 4) l_766 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x1864944BL), 0x1864944BL);
    int32_t *l_767[8][5][2] = {{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}},{{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761},{(void*)0,&l_761}}};
    int i, j, k;
    l_734 = (safe_rshift_func_int16_t_s_s(p_1045->g_51.w, 14));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1045->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((p_1045->g_94 = (((safe_sub_func_int32_t_s_s(p_38, (l_763 |= (l_762.s1 = ((safe_lshift_func_uint8_t_u_s(((l_760[0][2][0] = (safe_rshift_func_uint16_t_u_u((p_38 , (safe_mul_func_uint8_t_u_u((2L > (p_38 <= ((l_746 = (((VECTOR(int64_t, 16))(p_1045->g_745.s122e439b2b2b4592)).s5 , 0x25L)) != p_38))), (((-3L) < (l_761 &= ((safe_mod_func_int64_t_s_s(((*l_749) = 1L), (safe_div_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_754.xxxx)).y, (safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1045->g_759.s8997123b7eb4220e)).s3c31)))).zywxyzyxzzwwywyx)).s5 >= (p_38 && l_754.x)), p_38)) && l_754.y), 3)))) , (void*)0) != l_749), p_38)))) , l_760[0][2][0]))) & l_760[0][3][0])))), (**p_1045->g_362)))) & 0x54L), 2)) > l_754.x))))) >= l_764.s8) , p_1045->g_102[2])), (*p_1045->g_363))) > (**p_1045->g_655)), 10))][(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))]));
    (*l_765) = (void*)0;
    p_1045->g_547.s2 ^= ((VECTOR(int32_t, 2))(l_766.xx)).hi;
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_547 p_1045->g_478 p_1045->g_255 p_1045->g_8 p_1045->g_311 p_1045->g_312 p_1045->g_247 p_1045->g_104 p_1045->g_221 p_1045->g_400 p_1045->g_586 p_1045->g_286 p_1045->g_388 p_1045->g_103 p_1045->g_472 p_1045->g_260.f0 p_1045->g_620 p_1045->g_624 p_1045->g_41 p_1045->g_42 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_252 p_1045->g_654 p_1045->g_312.f0 p_1045->l_comm_values p_1045->g_182 p_1045->g_655 p_1045->g_691 p_1045->g_700 p_1045->g_425 p_1045->g_102 p_1045->g_459 p_1045->g_49 p_1045->g_68
 * writes: p_1045->g_255 p_1045->g_247 p_1045->g_94 p_1045->g_8 p_1045->g_400 p_1045->g_603 p_1045->g_103 p_1045->g_473 p_1045->g_260.f0 p_1045->g_42 p_1045->g_98 p_1045->g_312.f0 p_1045->g_459 p_1045->g_706 p_1045->g_66 p_1045->g_68 p_1045->g_730
 */
uint32_t * func_43(uint32_t  p_44, uint64_t  p_45, int32_t * p_46, int32_t  p_47, struct S1 * p_1045)
{ /* block id: 281 */
    int32_t *l_545 = &p_1045->g_8;
    int32_t **l_544[5][3][4] = {{{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545}},{{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545}},{{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545}},{{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545}},{{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545},{&l_545,&l_545,&l_545,&l_545}}};
    uint32_t l_682 = 1UL;
    int32_t l_694 = (-1L);
    VECTOR(int16_t, 4) l_712 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3D42L), 0x3D42L);
    uint16_t *l_716 = &p_1045->g_603;
    uint8_t ****l_717[9] = {&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471,&p_1045->g_471};
    uint64_t *l_722[8][3];
    int16_t l_727 = 0L;
    uint32_t l_728[3][3] = {{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL}};
    int32_t *l_729[5];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
            l_722[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_729[i] = &p_1045->g_66;
    p_46 = (void*)0;
    if (((void*)0 == p_46))
    { /* block id: 283 */
        VECTOR(int32_t, 4) l_546 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x79086ACCL), 0x79086ACCL);
        uint8_t *l_554 = (void*)0;
        uint8_t *l_555 = (void*)0;
        uint8_t *l_556[2][10][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        VECTOR(uint64_t, 2) l_559 = (VECTOR(uint64_t, 2))(1UL, 0UL);
        uint32_t l_560 = 0xFE70787FL;
        int16_t *l_573 = (void*)0;
        int16_t *l_574 = (void*)0;
        int16_t *l_575 = (void*)0;
        int16_t *l_576 = &p_1045->g_94;
        uint8_t ****l_577 = &p_1045->g_471;
        VECTOR(int8_t, 2) l_581 = (VECTOR(int8_t, 2))((-1L), (-8L));
        VECTOR(uint64_t, 2) l_583 = (VECTOR(uint64_t, 2))(0x1DE9BA2C0EF01838L, 0x5AA2BE16657AB740L);
        VECTOR(uint16_t, 8) l_588 = (VECTOR(uint16_t, 8))(0x38C3L, (VECTOR(uint16_t, 4))(0x38C3L, (VECTOR(uint16_t, 2))(0x38C3L, 1UL), 1UL), 1UL, 0x38C3L, 1UL);
        uint16_t **l_591 = &p_1045->g_363;
        int i, j, k;
        (*l_545) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_546.zy)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(p_1045->g_547.s1137)).odd, ((VECTOR(int32_t, 8))((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((p_1045->g_255.y ^= ((p_47 == 1L) >= p_1045->g_478.s7)), (*l_545))), (((safe_rshift_func_uint8_t_u_u(((((VECTOR(uint64_t, 2))(l_559.xx)).lo == p_47) & ((VECTOR(int32_t, 8))(0x68D97E15L, 1L, ((VECTOR(int32_t, 2))(2L, 0x0D67F7A2L)), ((l_560++) ^ ((*p_1045->g_311) , ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_44, ((*l_576) = (p_1045->g_247.x ^= p_45)))), 5)) == ((void*)0 != l_577)), 0x39CDL)) , p_1045->g_104[5]) , p_45) , (-5L)), 0x16L)), l_546.y)) < p_1045->g_8))), ((VECTOR(int32_t, 2))(0x1AE0E9EEL)), 0x79F944C4L)).s1), GROUP_DIVERGE(0, 1))) <= p_1045->g_221.se) <= (-1L)))), 0xFE89D5DCL)), 1L, 0x4FE3810DL, (-1L), 0x11FC3ED7L, ((VECTOR(int32_t, 2))(0x512417D9L)), 0L)).s71))), (-1L), l_559.x, 1L, 0L)).s3753677104226401)).se5, ((VECTOR(int32_t, 2))(0L))))), 0x6A09EE09L, 0x36B164F8L)).w;
        for (p_1045->g_400 = 0; (p_1045->g_400 == 24); p_1045->g_400++)
        { /* block id: 291 */
            VECTOR(uint16_t, 2) l_587 = (VECTOR(uint16_t, 2))(0xED94L, 65535UL);
            uint16_t **l_592[2][3][1];
            uint64_t *l_601 = (void*)0;
            uint64_t *l_602 = (void*)0;
            int8_t **l_606 = (void*)0;
            int8_t *l_608[8][8] = {{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]},{&p_1045->g_102[0],&p_1045->g_102[0],&p_1045->g_102[2],&p_1045->g_85[0][1],&p_1045->g_85[0][0],&p_1045->g_85[0][1],(void*)0,&p_1045->g_102[4]}};
            int8_t **l_607 = &l_608[5][2];
            int8_t l_609[1][5][9] = {{{1L,0L,(-9L),0L,1L,1L,0L,(-9L),0L},{1L,0L,(-9L),0L,1L,1L,0L,(-9L),0L},{1L,0L,(-9L),0L,1L,1L,0L,(-9L),0L},{1L,0L,(-9L),0L,1L,1L,0L,(-9L),0L},{1L,0L,(-9L),0L,1L,1L,0L,(-9L),0L}}};
            int64_t *l_610 = (void*)0;
            int64_t *l_611 = (void*)0;
            int64_t *l_612 = &p_1045->g_103;
            uint32_t *l_615 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_592[i][j][k] = (void*)0;
                }
            }
            (*l_545) = ((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 2))(l_581.xx)).even)) , (((*p_1045->g_472) = (((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(l_583.xyxyyyxyxyxxxxxx)).sf)) && (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(p_1045->g_586.s20)), 65535UL)).yzxxxzwzyxwxyxyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(6UL, 0xF33AL)).yxxxyxxy)))).s4250303721346116))).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_587.xxyy)))).zyzxwyzz, ((VECTOR(uint16_t, 16))(l_588.s4056375313003553)).even))).s3, (safe_mod_func_uint16_t_u_u(((((((((p_1045->g_478.s4 ^ ((*l_612) |= ((l_591 == l_592[0][2][0]) & (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((p_1045->g_603 = 0x6EC0C21AE1BA1EE4L) & (safe_add_func_int64_t_s_s(p_47, (((*l_607) = l_556[1][2][4]) != &p_1045->g_85[0][0])))), 5)), p_1045->g_286.s6)), (((p_1045->g_388.s1 , p_45) , p_47) | l_609[0][3][6]))), 0xE5BDL))))) != 0UL) , (void*)0) == (void*)0) , l_609[0][3][6]) <= 1UL) & (-9L)) && l_609[0][4][4]), l_587.y))))) , l_554)) != (void*)0));
            for (p_1045->g_260.f0 = (-11); (p_1045->g_260.f0 > (-7)); p_1045->g_260.f0 = safe_add_func_int16_t_s_s(p_1045->g_260.f0, 8))
            { /* block id: 299 */
                return l_615;
            }
        }
    }
    else
    { /* block id: 303 */
        int32_t l_648 = 0x7E245E5FL;
        uint32_t ***l_656 = &p_1045->g_655;
        int64_t l_671 = 0x70537C94E506D3ACL;
        uint16_t ***l_687 = &p_1045->g_362;
        uint8_t ****l_705 = (void*)0;
        uint8_t *****l_704[2];
        VECTOR(uint8_t, 4) l_709 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 247UL), 247UL);
        int i;
        for (i = 0; i < 2; i++)
            l_704[i] = &l_705;
        for (p_1045->g_8 = (-21); (p_1045->g_8 >= (-20)); p_1045->g_8 = safe_add_func_int8_t_s_s(p_1045->g_8, 7))
        { /* block id: 306 */
            uint8_t l_623 = 7UL;
            uint32_t l_649 = 4294967289UL;
            uint16_t **l_652 = &p_1045->g_363;
            int32_t l_669 = 0x73054242L;
            uint16_t ****l_688 = &l_687;
            int8_t l_699 = (-1L);
            uint8_t l_701 = 0x86L;
            if (((safe_mod_func_uint16_t_u_u((((18446744073709551609UL && 0x53C66FD4F73076E8L) == ((VECTOR(uint16_t, 8))(p_1045->g_620.s62434505)).s1) <= (safe_mod_func_int32_t_s_s(l_623, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(p_1045->g_624.s08)).xxxy, ((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((((safe_unary_minus_func_uint64_t_u((((safe_mul_func_uint8_t_u_u(0x5AL, ((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((+((safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(p_1045->g_478.s1, (safe_mod_func_uint32_t_u_u(((*p_1045->g_41)++), (safe_rshift_func_uint16_t_u_s(((**p_1045->g_362) &= p_44), 4)))))) == ((safe_sub_func_int32_t_s_s(((p_47 , (p_44 <= ((safe_lshift_func_int8_t_s_u(p_47, p_44)) == (-7L)))) < p_44), l_648)) > p_1045->g_252.s1)), l_623)) >= p_45)), 0x8349339704DB24BBL)), 18446744073709551607UL)) > (-10L)))) <= l_623) && 0UL))) > p_45) ^ 0x2B52523C047BBE1CL), ((VECTOR(uint32_t, 2))(0x9DF46194L)), ((VECTOR(uint32_t, 4))(0UL)), 4294967295UL)))).s6, (*p_1045->g_41), (*p_1045->g_41), 0xDDEC234DL, 8UL, (*p_1045->g_41), l_649, (*p_1045->g_41), ((VECTOR(uint32_t, 4))(6UL)), ((VECTOR(uint32_t, 2))(0x019CC474L)), 2UL)).lo, ((VECTOR(uint32_t, 8))(0x9E2C7C4BL))))).lo))))), l_648, p_47, (*p_1045->g_41), ((VECTOR(uint32_t, 8))(0x42B59D30L)), 0xEBE6962EL)).sdeb2)).z))), FAKE_DIVERGE(p_1045->group_1_offset, get_group_id(1), 10))) != 0x7EF3C96AL))
            { /* block id: 309 */
                uint32_t l_653 = 0x5A32EFF1L;
                int32_t l_670 = 4L;
                for (l_648 = 5; (l_648 <= 20); l_648++)
                { /* block id: 312 */
                    int8_t *l_661 = (void*)0;
                    VECTOR(uint64_t, 8) l_664 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                    int i;
                    l_671 = (((((void*)0 != l_652) < GROUP_DIVERGE(0, 1)) == ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((((((l_653 , (p_45 , p_1045->g_654)) == l_656) <= (safe_rshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((p_1045->g_312[0][0][6].f0 ^= p_1045->g_478.s2), (l_670 = (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_664.s43125447)).s6, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((l_669 &= ((-9L) < (*p_1045->g_41))), l_664.s4)), p_47))))))) , p_45) || p_1045->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))]), 5))) , 0L) != p_44) , 0x3AC6L), l_649, 0x1784L, p_1045->g_182, 0x790CL, ((VECTOR(int16_t, 2))((-8L))), 0x6A0AL)), (int16_t)0x0041L, (int16_t)p_45))), ((VECTOR(int16_t, 8))(0x75DEL))))).s2) == l_664.s5);
                    for (p_1045->g_42 = (-29); (p_1045->g_42 < 13); p_1045->g_42++)
                    { /* block id: 319 */
                        return (**p_1045->g_654);
                    }
                    for (p_1045->g_98 = 0; (p_1045->g_98 > 29); ++p_1045->g_98)
                    { /* block id: 324 */
                        uint8_t l_676 = 0xDFL;
                        if (l_649)
                            break;
                        l_676--;
                    }
                }
                if (l_670)
                    continue;
            }
            else
            { /* block id: 330 */
                uint8_t **l_679 = &p_1045->g_473;
                uint8_t ***l_680 = (void*)0;
                uint8_t ***l_681 = &l_679;
                (*l_681) = l_679;
                return p_46;
            }
            --l_682;
            p_1045->g_459.s8 |= ((GROUP_DIVERGE(2, 1) ^ ((safe_div_func_uint8_t_u_u((((((*l_688) = l_687) == (void*)0) <= ((((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))((**p_1045->g_655), p_45, 0x3B1D9E2BL, 3UL)).wzxywyzzywzywwyy, ((VECTOR(uint32_t, 8))((safe_lshift_func_uint16_t_u_u((((VECTOR(int8_t, 8))(p_1045->g_691.yxzxxwyw)).s3 , (safe_add_func_uint32_t_u_u(((((((~l_694) == p_44) , ((((~(((safe_sub_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((((-1L) != (((void*)0 != &p_1045->g_362) > 0x11L)) != l_699), p_1045->g_388.s5)) , (void*)0) != p_1045->g_700[5][1][3]) , p_45), 0x8D26A196L)) & p_45) < p_1045->g_425)) == p_45) >= 0x18C7CEB6250BCF7AL) | p_1045->g_388.s0)) & p_1045->g_102[2]) < (*l_545)) | 0x73C8L), l_648))), 9)), ((VECTOR(uint32_t, 4))(0x8DB7B23AL)), 0UL, 1UL, 0xE4B97D28L)).s6065627027472501, ((VECTOR(uint32_t, 16))(0UL))))).even, ((VECTOR(uint32_t, 8))(0x01CE5069L))))).s0 || GROUP_DIVERGE(1, 1)) && 0UL)) > p_44), 1L)) != p_47)) >= 0x2CD19781L);
            ++l_701;
        }
        (*l_545) = (+((p_1045->g_706 = &p_1045->g_471) == ((safe_rshift_func_int16_t_s_s((((VECTOR(uint8_t, 16))(l_709.wxxzwzyzyxxyyywy)).s7 > ((((0UL | 7L) & (safe_add_func_uint16_t_u_u(p_44, ((VECTOR(int16_t, 16))(l_712.zzyzxxxzyzwzwzzy)).s0))) ^ (-1L)) & (((0x348FC2227B7CB0B3L != ((~((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((void*)0 == l_716))), p_1045->g_49.y)) >= 253UL)) , p_44)) > l_709.x) & p_1045->g_255.z))), 15)) , l_717[1])));
    }
    (*l_545) = ((VECTOR(int32_t, 4))(0L, (-5L), 0x7C36261AL, (-1L))).w;
    p_1045->g_730 = func_61(((4UL || FAKE_DIVERGE(p_1045->local_1_offset, get_local_id(1), 10)) , (p_1045->g_66 = (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((0x533BL && 6L) < (p_1045->g_400 ^= 0xD38D3A3D3B70AD0EL)), (safe_mul_func_int16_t_s_s(p_44, (p_44 < ((safe_rshift_func_int8_t_s_u((-1L), (l_727 = p_45))) > ((&l_682 == (void*)0) && (*l_545)))))))) == l_728[2][0]) | 0x613AE2D444B7D2E5L), 0x80A6L)))), p_1045);
    return (**p_1045->g_654);
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_50 p_1045->g_42 p_1045->g_41 p_1045->l_comm_values p_1045->g_49 p_1045->g_68 p_1045->g_104 p_1045->g_92 p_1045->g_8 p_1045->g_66 p_1045->g_182 p_1045->g_221 p_1045->g_224 p_1045->g_102 p_1045->g_247 p_1045->g_251 p_1045->g_252 p_1045->g_85 p_1045->g_255 p_1045->g_286 p_1045->g_288 p_1045->g_comm_values p_1045->g_311 p_1045->g_260.f2 p_1045->g_354 p_1045->g_260.f0 p_1045->g_362 p_1045->g_363 p_1045->g_98 p_1045->g_388 p_1045->g_400 p_1045->g_94 p_1045->g_425 p_1045->g_459
 * writes: p_1045->g_85 p_1045->g_92 p_1045->g_104 p_1045->g_8 p_1045->g_182 p_1045->g_224 p_1045->g_42 p_1045->g_68 p_1045->g_102 p_1045->g_251 p_1045->g_260.f2 p_1045->g_260.f0 p_1045->g_400 p_1045->g_388 p_1045->g_363 p_1045->g_425 p_1045->g_247 p_1045->g_312.f0 p_1045->g_98 p_1045->g_471 p_1045->g_459
 */
int32_t * func_55(uint32_t * p_56, uint32_t * p_57, int16_t  p_58, int64_t  p_59, int64_t  p_60, struct S1 * p_1045)
{ /* block id: 18 */
    uint32_t l_77 = 0x120E7A9FL;
    uint16_t *l_84 = (void*)0;
    VECTOR(uint32_t, 4) l_88 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x4349BA41L), 0x4349BA41L);
    int16_t *l_93[9] = {&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94,&p_1045->g_94};
    int32_t l_95 = (-9L);
    int32_t l_215 = (-8L);
    uint32_t *l_216[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_220 = &p_1045->g_66;
    int32_t **l_219 = &l_220;
    int32_t *l_227 = (void*)0;
    int32_t **l_226 = &l_227;
    VECTOR(uint64_t, 2) l_242 = (VECTOR(uint64_t, 2))(0x6351895DCFA39C70L, 0xBC3627BD82A38716L);
    VECTOR(int16_t, 2) l_246 = (VECTOR(int16_t, 2))(0L, 0x4EDDL);
    VECTOR(int64_t, 4) l_248 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x2EB905F6503A9D8EL), 0x2EB905F6503A9D8EL);
    VECTOR(uint16_t, 4) l_250 = (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65526UL), 65526UL);
    union U0 *l_259 = &p_1045->g_260;
    VECTOR(uint32_t, 16) l_291 = (VECTOR(uint32_t, 16))(0x54504EA7L, (VECTOR(uint32_t, 4))(0x54504EA7L, (VECTOR(uint32_t, 2))(0x54504EA7L, 1UL), 1UL), 1UL, 0x54504EA7L, 1UL, (VECTOR(uint32_t, 2))(0x54504EA7L, 1UL), (VECTOR(uint32_t, 2))(0x54504EA7L, 1UL), 0x54504EA7L, 1UL, 0x54504EA7L, 1UL);
    int8_t l_313 = 0x3FL;
    VECTOR(int32_t, 8) l_367 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    int8_t l_397 = 1L;
    int32_t l_434 = 0L;
    VECTOR(uint8_t, 8) l_486 = (VECTOR(uint8_t, 8))(0xE8L, (VECTOR(uint8_t, 4))(0xE8L, (VECTOR(uint8_t, 2))(0xE8L, 253UL), 253UL), 253UL, 0xE8L, 253UL);
    int i;
    if ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(l_77, (safe_add_func_uint32_t_u_u((+(((safe_lshift_func_int16_t_s_u((l_215 &= (safe_mul_func_uint8_t_u_u(((p_1045->g_85[0][0] = p_60) == ((safe_div_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_88.xx)).yxxyyxyxxxxyyxyx)).sa <= ((func_89((p_58 = (p_1045->g_92 = (p_58 , p_1045->g_50.x))), (+(l_95 = (((((*p_57) , ((+((((p_60 > 1UL) | 0x42DE0B6AL) ^ (!(*p_1045->g_41))) > p_1045->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))])) > p_1045->g_49.x)) || 6UL) , p_1045->g_68[0][6][3]) && GROUP_DIVERGE(2, 1)))), p_1045) | l_88.y) , p_1045->g_50.y)), 3UL)) > 0x75L)), 0xBBL))), p_60)) , l_216[1]) != &p_1045->g_42)), (-1L))))), l_88.z)))
    { /* block id: 110 */
        int32_t *l_218 = &p_1045->g_66;
        int32_t **l_217 = &l_218;
        int32_t *l_223 = &l_95;
        int32_t **l_222 = &l_223;
        int32_t ***l_225 = &p_1045->g_224;
        uint32_t l_236 = 0x67E03497L;
        VECTOR(uint16_t, 2) l_237 = (VECTOR(uint16_t, 2))(0x848DL, 65535UL);
        int32_t l_268 = 0x778CE083L;
        VECTOR(uint32_t, 8) l_290 = (VECTOR(uint32_t, 8))(0xFF47D78CL, (VECTOR(uint32_t, 4))(0xFF47D78CL, (VECTOR(uint32_t, 2))(0xFF47D78CL, 4294967295UL), 4294967295UL), 4294967295UL, 0xFF47D78CL, 4294967295UL);
        VECTOR(uint32_t, 4) l_355 = (VECTOR(uint32_t, 4))(0x7A2345CDL, (VECTOR(uint32_t, 2))(0x7A2345CDL, 0x1D6342A7L), 0x1D6342A7L);
        int8_t *l_389 = &p_1045->g_312[0][0][6].f0;
        uint16_t *l_410 = (void*)0;
        int32_t l_437 = (-5L);
        VECTOR(int8_t, 8) l_499 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x21L), 0x21L), 0x21L, 7L, 0x21L);
        int i, j;
        p_1045->g_8 ^= (0x7D0EL == ((l_217 != l_219) & (((VECTOR(int64_t, 4))(p_1045->g_221.s865a)).x , (((l_222 != ((*l_225) = p_1045->g_224)) < ((!p_1045->g_66) , (**l_222))) == ((*p_1045->g_41) = (*p_1045->g_41))))));
        if ((p_1045->g_8 = ((-1L) | (l_226 != (((((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(p_1045->g_49.x, (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_236, (**l_222))), (1L | 0UL))))), (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_237.yxxx)), ((*l_222) == ((*l_226) = func_61((*l_223), p_1045))), p_58, 0xC404L, 65535UL, p_60, p_1045->g_102[3], ((VECTOR(uint16_t, 2))(0x80A0L)), 0xF67AL, 0x4637L, 65535UL, 0xD2F7L)).s4 >= p_1045->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))]))) && (*l_223)) ^ 0x3C25FB43AF6F8DD8L) < (-9L)) , &l_227)))))
        { /* block id: 116 */
            uint8_t l_245 = 0xAFL;
            VECTOR(int64_t, 16) l_249 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7EE75AF26B099175L), 0x7EE75AF26B099175L), 0x7EE75AF26B099175L, 1L, 0x7EE75AF26B099175L, (VECTOR(int64_t, 2))(1L, 0x7EE75AF26B099175L), (VECTOR(int64_t, 2))(1L, 0x7EE75AF26B099175L), 1L, 0x7EE75AF26B099175L, 1L, 0x7EE75AF26B099175L);
            int8_t *l_258 = &p_1045->g_102[0];
            int32_t l_328 = 5L;
            int32_t l_344 = 5L;
            VECTOR(uint32_t, 2) l_353 = (VECTOR(uint32_t, 2))(0x22CCE88BL, 1UL);
            uint16_t ***l_407 = (void*)0;
            int i;
            if ((0x505D546BL >= ((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (((*l_258) = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((FAKE_DIVERGE(p_1045->local_2_offset, get_local_id(2), 10) != (safe_rshift_func_uint8_t_u_u(0x8DL, 2))) <= ((((-1L) != p_1045->g_68[0][7][3]) == ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(18446744073709551609UL, 3UL)).xxyx, ((VECTOR(uint64_t, 16))(l_242.yyyyyxyyyxxxxxxx)).s7f85))).z) <= (((safe_div_func_int8_t_s_s(l_245, ((*p_57) && (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x0465L, ((VECTOR(int16_t, 4))(l_246.xxxx)), ((VECTOR(int16_t, 2))(p_1045->g_247.ww)), (-1L))).hi)).y | (0L | ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(l_248.yxxzxxwwzwxzxyxz)).sf9, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_249.s8210)))))).odd, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(0x40A228F5L, 0x78D06288L)).xxxyxxxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x9C8DL, 6UL)))), 0xD8EFL, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_250.zwyx)).odd)), 1UL, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(p_1045->g_251.xzzwyxzy)).odd, ((VECTOR(uint16_t, 2))(p_1045->g_252.s31)).xyxy))), 0x5D8BL)), (uint16_t)((safe_mod_func_uint8_t_u_u(p_1045->g_85[0][0], ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1045->g_255.zwwzxxxx)).s6464511654340704)), (uint8_t)(safe_mul_func_int8_t_s_s(8L, 0x08L)), (uint8_t)l_245))).even)).s6)) == 0x5432L)))), ((VECTOR(uint16_t, 4))(0xB2A0L)))))).s92, ((VECTOR(uint16_t, 2))(0x2D32L)), ((VECTOR(uint16_t, 2))(3UL))))).yyyxxxxy, ((VECTOR(uint16_t, 8))(0x00CCL))))).s74)).yxxxyxxy, ((VECTOR(uint16_t, 8))(0x4A62L))))).hi, ((VECTOR(uint16_t, 4))(65535UL))))), 0x2149DF2EL, 4294967290UL, ((VECTOR(uint32_t, 4))(4294967292UL)), FAKE_DIVERGE(p_1045->global_0_offset, get_global_id(0), 10), ((VECTOR(uint32_t, 2))(4294967290UL)), 0UL, 0x32F378EEL, 0x0A02F6F4L)).s51)).xxyxyyxx))).s73)).xyyyyyxxyxyyyxyx, ((VECTOR(int64_t, 16))(0x550EEFC11A16B9ACL))))).s1f, ((VECTOR(int64_t, 2))(0L)))))))))).xxyy)).hi))).hi))))) <= GROUP_DIVERGE(2, 1)) | (*l_227)))), 0x0EL, p_1045->g_42, ((VECTOR(int8_t, 2))((-6L))), p_1045->g_50.x, 0x54L, (-1L))).even)).w) | p_60))) , p_59)))
            { /* block id: 118 */
                (*l_223) &= ((p_60 , l_259) != (void*)0);
            }
            else
            { /* block id: 120 */
                uint64_t l_269[8][7][3] = {{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}},{{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL},{0x736B514BD3B3BA48L,0xC50D1068E37E6B1BL,0xC50D1068E37E6B1BL}}};
                int32_t l_284 = 0L;
                VECTOR(uint32_t, 2) l_287 = (VECTOR(uint32_t, 2))(0x341C7137L, 0x324280ADL);
                uint16_t **l_358 = &l_84;
                int i, j, k;
                if ((**l_226))
                { /* block id: 121 */
                    int64_t l_263 = (-3L);
                    VECTOR(int16_t, 8) l_285 = (VECTOR(int16_t, 8))(0x05BDL, (VECTOR(int16_t, 4))(0x05BDL, (VECTOR(int16_t, 2))(0x05BDL, (-3L)), (-3L)), (-3L), 0x05BDL, (-3L));
                    VECTOR(uint32_t, 4) l_289 = (VECTOR(uint32_t, 4))(0x60DAF513L, (VECTOR(uint32_t, 2))(0x60DAF513L, 0xD15266E7L), 0xD15266E7L);
                    uint16_t l_317 = 0x4996L;
                    int i;
                    (*l_223) |= ((**l_226) = (p_1045->g_224 == (void*)0));
                    for (p_1045->g_42 = 0; (p_1045->g_42 > 45); p_1045->g_42 = safe_add_func_uint8_t_u_u(p_1045->g_42, 5))
                    { /* block id: 126 */
                        int32_t *l_264 = &p_1045->g_8;
                        int32_t *l_265 = (void*)0;
                        int32_t *l_266 = &l_215;
                        int32_t *l_267[4][10];
                        uint32_t *l_292 = (void*)0;
                        uint32_t **l_294[4][4] = {{&p_1045->g_41,&p_1045->g_41,&p_1045->g_41,&p_1045->g_41},{&p_1045->g_41,&p_1045->g_41,&p_1045->g_41,&p_1045->g_41},{&p_1045->g_41,&p_1045->g_41,&p_1045->g_41,&p_1045->g_41},{&p_1045->g_41,&p_1045->g_41,&p_1045->g_41,&p_1045->g_41}};
                        uint32_t ***l_293 = &l_294[2][0];
                        uint16_t *l_314[8] = {&p_1045->g_98,&p_1045->g_98,&p_1045->g_98,&p_1045->g_98,&p_1045->g_98,&p_1045->g_98,&p_1045->g_98,&p_1045->g_98};
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_267[i][j] = &l_95;
                        }
                        ++l_269[3][4][2];
                        (*l_222) = (p_59 , &p_1045->g_8);
                        (*l_266) &= (((safe_lshift_func_uint8_t_u_s(0xA9L, (0x5F35L && (GROUP_DIVERGE(2, 1) , (p_1045->g_104[5] ^= (((p_1045->g_68[0][7][3] = (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((p_1045->g_221.s5 | (safe_mod_func_int32_t_s_s((-4L), (safe_sub_func_int32_t_s_s(((**l_222) = ((p_58 = ((safe_lshift_func_int16_t_s_u((l_284 = (**l_226)), 15)) , ((void*)0 != p_1045->g_224))) < ((VECTOR(int16_t, 8))(l_285.s27224172)).s4)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_1045->g_286.s04)).xxyxxyyx)).lo, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(l_287.xxxxyxyyyyyyyxxx)).hi, ((VECTOR(uint32_t, 8))(p_1045->g_288.s27443173))))).s3770377227371704, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_289.wywywyxy)))).even, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(1UL, 1UL)))), (**l_226), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_290.s61)), 0xCA199E2AL, 5UL)), 4294967294UL)).s74, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x9BC23BC0L, 0UL)).yyxyxxyxyyyxyxxx)).sb1))).xxyy))), ((VECTOR(uint32_t, 4))(l_291.s4a0d))))).yyyxwyxzxwxyyzxw))).s80)).xxxy)))))).even)).yxyyyxyy)).s6))))) == (p_60 >= p_1045->g_68[0][7][3])), p_1045->g_comm_values[p_1045->tid])), p_1045->g_252.s7))) , (*l_227)) ^ (*p_1045->g_41))))))) == GROUP_DIVERGE(0, 1)) ^ p_60);
                        (*l_266) |= ((((*l_293) = &p_56) != &p_1045->g_41) > (safe_add_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(l_289.z, p_58)), ((*l_223) ^= (**l_226)))), 14)) , (safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0x60E9L, (p_1045->g_251.y |= ((p_1045->g_221.sf , ((safe_rshift_func_uint8_t_u_s(((((void*)0 == p_1045->g_311) , l_313) & p_60), 6)) , (*l_227))) != l_249.s4)))), 0x6F03L)) == 7L), 5))) < 0UL) <= 255UL), 1UL)));
                    }
                    for (p_1045->g_260.f2 = (-26); (p_1045->g_260.f2 != 16); p_1045->g_260.f2 = safe_add_func_int32_t_s_s(p_1045->g_260.f2, 1))
                    { /* block id: 142 */
                        (**l_226) = (-10L);
                        (*l_223) = (GROUP_DIVERGE(2, 1) , (+((**l_226) |= l_317)));
                    }
                }
                else
                { /* block id: 147 */
                    VECTOR(int8_t, 4) l_331 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 8L), 8L);
                    VECTOR(uint32_t, 4) l_349 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0xA24DFE6BL), 0xA24DFE6BL);
                    uint32_t **l_350 = &l_216[1];
                    int32_t *l_359 = &l_95;
                    int8_t *l_366 = &p_1045->g_102[0];
                    int i;
                    for (p_1045->g_182 = 0; (p_1045->g_182 <= 48); ++p_1045->g_182)
                    { /* block id: 150 */
                        int64_t *l_334 = (void*)0;
                        int64_t *l_335 = (void*)0;
                        int64_t *l_336 = (void*)0;
                        int64_t *l_337 = (void*)0;
                        int64_t *l_338 = (void*)0;
                        int64_t *l_339 = (void*)0;
                        int64_t *l_340 = (void*)0;
                        uint8_t *l_341 = &l_245;
                        uint8_t *l_342 = (void*)0;
                        uint8_t *l_343[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                        int i, j;
                        (**l_226) = (((((safe_add_func_uint64_t_u_u(((-5L) <= ((p_59 | (l_344 = ((*l_341) = (((*l_227) < ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((-6L), (-1L), ((VECTOR(int64_t, 4))((l_245 | (((((--p_1045->g_288.s6) < ((l_328 &= 0x9B5AA444951B0105L) == (safe_rshift_func_int16_t_s_u(p_59, 7)))) ^ ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(l_331.wywy)).xyzwxzzw))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x5CL, 0x21L, p_1045->g_260.f0, (safe_add_func_uint32_t_u_u((((p_1045->g_221.sa ^= ((((*p_1045->g_41) == 1L) < (-1L)) ^ p_1045->g_103)) && 4L) , l_245), (*l_227))), ((VECTOR(int8_t, 2))(0x16L)), 0x73L, 0x1EL)).s0146222412540752)).lo))))).s41, ((VECTOR(uint8_t, 2))(0x31L))))).lo) >= l_269[3][4][2]) && 0L)), p_1045->g_260.f0, 0x674D077DB204A989L, 0x02E4B0C4D84C3E96L)), 0x026CEA4F6FBCFE45L, 0x284DD9A3F886CF4FL)))).odd)).lo))).xxxxxyxxxxxxyxyx, ((VECTOR(int64_t, 16))(0x66EE9285EEF710C3L))))).s2 <= l_287.x) != l_269[4][2][0]), p_59)), 9)) > p_58)) <= 8L)))) , p_1045->g_104[5])), 1UL)) | 0x04A0L) , (void*)0) == (*l_225)) , p_58);
                        (*l_222) = p_56;
                    }
                    (*l_359) = (safe_sub_func_int32_t_s_s((((*p_1045->g_41) = ((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(0x6B674596L, 0x17D791A8L, 0UL, 4294967288UL, ((safe_lshift_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(l_349.yxwwywyx)).s4 | ((((*l_350) = p_56) == (void*)0) != (*p_1045->g_41))), (safe_lshift_func_uint16_t_u_s(((1UL == ((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(l_353.xyxxyyxxyxxxyxxy)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_1045->g_354.yyyyxxxx)).s75)), ((VECTOR(uint32_t, 2))(l_355.zx))))).yxyxyxyx))))).s4) == (p_1045->g_102[1] = ((l_287.x || p_60) <= p_58))), (&l_84 == ((safe_sub_func_uint64_t_u_u(((*p_57) != (*p_1045->g_41)), p_1045->g_354.y)) , l_358)))))) != (**l_226)), GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(4294967292UL)), (*p_1045->g_41), (*p_1045->g_41), ((VECTOR(uint32_t, 2))(1UL)), 0x72F8FDAFL, 0xD614EE65L, 0x08D15717L, 0x7887CB6EL)), ((VECTOR(uint32_t, 16))(0xEC483104L))))).s8) , p_1045->g_252.s4), l_353.y));
                    for (p_1045->g_260.f0 = 0; (p_1045->g_260.f0 != (-10)); --p_1045->g_260.f0)
                    { /* block id: 165 */
                        (*l_222) = (void*)0;
                        (*l_359) = (p_1045->g_362 != (((safe_lshift_func_uint16_t_u_s((l_366 != (((*l_258) ^= p_60) , &p_1045->g_102[1])), 13)) | (*p_1045->g_363)) , &p_1045->g_363));
                        if (p_58)
                            continue;
                    }
                }
            }
            (**l_226) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_367.s73)).xyyy)).w;
            if (p_58)
            { /* block id: 174 */
                return &p_1045->g_8;
            }
            else
            { /* block id: 176 */
                int8_t l_371 = 0L;
                VECTOR(uint8_t, 4) l_387 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x3CL), 0x3CL);
                int i;
                for (p_58 = 0; (p_58 <= 14); p_58 = safe_add_func_int64_t_s_s(p_58, 5))
                { /* block id: 179 */
                    int32_t ***l_370 = &l_226;
                    if ((p_60 | ((((0x79L >= (&p_1045->g_224 == l_370)) > l_371) , (((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((!((!8L) , (((((VECTOR(uint32_t, 4))((*p_1045->g_41), ((&l_226 == (void*)0) >= p_1045->g_104[0]), 0x26DDA5F9L, 1UL)).y || 0x0D2FCDA5L) && 0x5FCCL) <= p_59))), FAKE_DIVERGE(p_1045->global_2_offset, get_global_id(2), 10))), l_371)) <= 2L) >= 5UL)) < 4UL)))
                    { /* block id: 180 */
                        int16_t l_380 = 0x75B7L;
                        int32_t l_390[5] = {8L,8L,8L,8L,8L};
                        int i;
                        if ((***l_370))
                            break;
                        l_390[0] = (!(safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(l_380, (safe_rshift_func_int8_t_s_u(p_1045->g_252.s3, ((safe_add_func_int32_t_s_s((((((((***l_370) < (*p_1045->g_41)) ^ p_1045->g_247.y) >= (safe_div_func_uint32_t_u_u(0xC686597CL, ((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_387.xy)), 255UL, 0x9AL)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1045->g_388.s17)).xyyxxxxx)).s12))), 0xB1L, 4UL)).z && ((void*)0 != l_389)) , &p_1045->g_41) == (void*)0) && (**p_1045->g_362))))) & (***l_370)) , p_1045->g_98) , p_60), 3L)) && 3UL))))), p_58)));
                        if (l_390[2])
                            continue;
                    }
                    else
                    { /* block id: 184 */
                        return &p_1045->g_8;
                    }
                }
            }
            for (p_59 = 0; (p_59 <= (-3)); --p_59)
            { /* block id: 191 */
                uint64_t *l_398 = (void*)0;
                uint64_t *l_399 = (void*)0;
                uint8_t *l_408[7];
                uint16_t **l_409 = (void*)0;
                int32_t **l_415 = &l_220;
                uint64_t *l_416 = &p_1045->g_400;
                int32_t *l_417 = &l_344;
                int i;
                for (i = 0; i < 7; i++)
                    l_408[i] = (void*)0;
                for (l_313 = 0; (l_313 < (-27)); l_313--)
                { /* block id: 194 */
                    (*l_227) &= p_58;
                }
                if (p_59)
                    continue;
                (*l_417) ^= ((safe_rshift_func_int8_t_s_s((l_397 , (l_258 != (((((p_1045->g_400++) ^ GROUP_DIVERGE(2, 1)) && (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((*l_258) = p_60), 0)), ((p_1045->g_388.s2 = (((void*)0 != l_407) , p_59)) <= ((((*p_1045->g_362) = (*p_1045->g_362)) != (l_410 = (void*)0)) | (((((GROUP_DIVERGE(1, 1) >= (((*l_416) ^= ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(((l_328 &= ((l_415 == l_415) <= p_59)) & p_1045->g_68[0][7][3]), p_1045->g_221.s0)), (*l_227))) ^ p_1045->g_94)) >= 0x7D33F3F4F500C49CL)) && p_1045->g_182) ^ (-1L)) != (-9L)) , 0x61CB9D03A4CB792CL)))))) | 0x312FL) , (void*)0))), p_1045->g_354.x)) , p_59);
                if (l_249.sc)
                    break;
            }
        }
        else
        { /* block id: 208 */
            uint32_t l_438 = 4294967289UL;
            int32_t *l_458[2];
            uint8_t **l_468 = (void*)0;
            uint8_t ***l_467 = &l_468;
            int i;
            for (i = 0; i < 2; i++)
                l_458[i] = &l_215;
            for (l_397 = 0; (l_397 == (-7)); l_397 = safe_sub_func_int8_t_s_s(l_397, 8))
            { /* block id: 211 */
                int32_t *l_420 = &l_215;
                int32_t *l_421 = (void*)0;
                int32_t *l_422 = &l_215;
                int32_t *l_423 = &l_215;
                int32_t *l_424[10] = {&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8,&p_1045->g_8};
                int i;
                (*l_227) = p_1045->g_85[0][0];
                ++p_1045->g_425;
            }
            (*l_227) |= (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((p_1045->g_247.w ^= 0L), ((p_58 , ((*l_389) = (+(safe_sub_func_uint16_t_u_u((**p_1045->g_362), ((((*l_217) = func_61((l_434 == ((safe_mul_func_int16_t_s_s(l_437, (l_438++))) ^ 3UL)), p_1045)) != &p_1045->g_66) == (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_58, 11)), GROUP_DIVERGE(0, 1))))))))) , 1L))), p_58));
            for (l_434 = 0; (l_434 > (-18)); --l_434)
            { /* block id: 222 */
                int32_t *l_447 = (void*)0;
                (*l_222) = ((*l_226) = l_447);
                for (l_236 = (-20); (l_236 < 28); l_236++)
                { /* block id: 227 */
                    p_1045->g_8 = p_59;
                }
                for (p_1045->g_98 = (-28); (p_1045->g_98 == 23); p_1045->g_98 = safe_add_func_uint8_t_u_u(p_1045->g_98, 4))
                { /* block id: 232 */
                    uint32_t l_454[1][9][9] = {{{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL},{4294967286UL,0UL,4294967295UL,0UL,4294967286UL,4294967286UL,0UL,4294967295UL,0UL}}};
                    uint8_t *l_456 = (void*)0;
                    uint8_t **l_455 = &l_456;
                    int i, j, k;
                    for (p_1045->g_260.f2 = 0; (p_1045->g_260.f2 <= (-13)); --p_1045->g_260.f2)
                    { /* block id: 235 */
                        uint8_t ***l_457 = &l_455;
                        if (l_454[0][7][8])
                            break;
                        (*l_457) = l_455;
                        (*l_222) = func_61(l_438, p_1045);
                        return p_57;
                    }
                    l_95 = ((VECTOR(int32_t, 4))(p_1045->g_459.sa52f)).z;
                    if (p_1045->g_42)
                        break;
                }
            }
            for (l_268 = 0; (l_268 == (-3)); --l_268)
            { /* block id: 247 */
                uint8_t *l_466[3][2];
                uint8_t **l_465 = &l_466[0][1];
                uint8_t ***l_464 = &l_465;
                uint8_t ****l_469 = (void*)0;
                uint8_t ****l_470[6][6] = {{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0},{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0},{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0},{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0},{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0},{(void*)0,&l_467,&l_467,(void*)0,&l_467,(void*)0}};
                int32_t l_481 = 0x570C58DDL;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_466[i][j] = (void*)0;
                }
                p_1045->g_459.s3 = ((safe_add_func_int16_t_s_s((l_464 == (p_1045->g_471 = l_467)), (0x0947EB92L || (safe_add_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))((-1L), (-1L))).xyxx))), ((VECTOR(int8_t, 4))(p_1045->g_478.s0276))))))).y < ((((p_1045->g_252.s7 >= (!(safe_div_func_int8_t_s_s((((p_60 | ((l_481 , (*l_226)) != (((((p_1045->g_388.s6--) , (safe_rshift_func_uint8_t_u_s((((((((0x54L >= ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_486.s3647)).zxzzxwwz, (uint8_t)(((safe_add_func_uint32_t_u_u((p_1045->g_288.s5 ^= (((*p_57) = (*p_1045->g_41)) < 4294967294UL)), p_59)) <= l_481) & 0x7D89L)))).s7) ^ l_481) > p_1045->g_221.s4) , 0x47L) & p_1045->g_255.y) , p_60) , GROUP_DIVERGE(2, 1)), p_58))) , (*p_57)) == l_481) , &l_481))) , 0x33D4368599ABE92AL) , 3L), p_60)))) | 0x6BL) , p_59) , 0xFCL)), 255UL)) <= p_1045->g_459.s5) && l_481) ^ 0x899808B2L) , p_1045->g_255.y), l_481))))) ^ p_60);
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1045->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u(((*p_57) = (safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(p_60, 1)), (safe_div_func_uint16_t_u_u(65526UL, ((*p_1045->g_363) = (p_60 , ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(0x4DL, 0x47L, 0x00L, 0x5DL)).z, ((VECTOR(int8_t, 4))(l_499.s2705)).w)) || GROUP_DIVERGE(0, 1)))))))), (safe_mul_func_int16_t_s_s(0x716DL, (p_57 != (void*)0)))))), 10))][(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))]));
    }
    else
    { /* block id: 260 */
        if ((atomic_inc(&p_1045->g_atomic_input[55 * get_linear_group_id() + 19]) == 3))
        { /* block id: 262 */
            uint16_t l_502 = 0xF7C5L;
            if (l_502)
            { /* block id: 263 */
                VECTOR(int32_t, 4) l_503 = (VECTOR(int32_t, 4))(0x4F0830DEL, (VECTOR(int32_t, 2))(0x4F0830DEL, 0x3F1EBDF9L), 0x3F1EBDF9L);
                VECTOR(int8_t, 2) l_504 = (VECTOR(int8_t, 2))(0x06L, 0x60L);
                VECTOR(int8_t, 2) l_505 = (VECTOR(int8_t, 2))(1L, (-3L));
                VECTOR(int8_t, 4) l_506 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 4L), 4L);
                uint32_t l_507 = 0x5779FDB2L;
                VECTOR(int8_t, 4) l_508 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L);
                uint8_t l_509[1];
                VECTOR(int8_t, 2) l_510 = (VECTOR(int8_t, 2))(0L, 0x10L);
                VECTOR(int8_t, 2) l_511 = (VECTOR(int8_t, 2))(0x35L, 0x58L);
                VECTOR(int8_t, 16) l_512 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3CL), 0x3CL), 0x3CL, 0L, 0x3CL, (VECTOR(int8_t, 2))(0L, 0x3CL), (VECTOR(int8_t, 2))(0L, 0x3CL), 0L, 0x3CL, 0L, 0x3CL);
                int32_t l_513 = 8L;
                uint8_t l_514 = 5UL;
                VECTOR(int8_t, 8) l_515 = (VECTOR(int8_t, 8))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0L), 0L), 0L, 0x54L, 0L);
                int32_t l_516 = 1L;
                uint64_t l_517[4][5][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}};
                int32_t l_518 = 0x5DBEDF0CL;
                VECTOR(int8_t, 4) l_519 = (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x1AL), 0x1AL);
                VECTOR(int8_t, 16) l_520 = (VECTOR(int8_t, 16))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x44L), 0x44L), 0x44L, 0x4CL, 0x44L, (VECTOR(int8_t, 2))(0x4CL, 0x44L), (VECTOR(int8_t, 2))(0x4CL, 0x44L), 0x4CL, 0x44L, 0x4CL, 0x44L);
                VECTOR(int8_t, 2) l_521 = (VECTOR(int8_t, 2))(0x1CL, 0x72L);
                VECTOR(int8_t, 2) l_522 = (VECTOR(int8_t, 2))(0x48L, 0x25L);
                VECTOR(int8_t, 16) l_523 = (VECTOR(int8_t, 16))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 5L), 5L), 5L, 0x5FL, 5L, (VECTOR(int8_t, 2))(0x5FL, 5L), (VECTOR(int8_t, 2))(0x5FL, 5L), 0x5FL, 5L, 0x5FL, 5L);
                int32_t l_524[9][8];
                VECTOR(int8_t, 8) l_525 = (VECTOR(int8_t, 8))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0L), 0L), 0L, 0x08L, 0L);
                VECTOR(int8_t, 4) l_526 = (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x4FL), 0x4FL);
                VECTOR(int8_t, 8) l_527 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x43L), 0x43L), 0x43L, 0L, 0x43L);
                VECTOR(int8_t, 4) l_528 = (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x2BL), 0x2BL);
                int32_t l_529 = 0x1EB96306L;
                uint32_t l_530[10][10][2] = {{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}},{{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL},{2UL,4294967292UL}}};
                uint32_t l_531 = 0xB0A9951BL;
                int16_t l_532 = 1L;
                uint8_t l_533 = 255UL;
                uint64_t l_534 = 0UL;
                int64_t l_535 = (-8L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_509[i] = 4UL;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_524[i][j] = 0L;
                }
                l_535 &= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_503.zw)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, (((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(l_504.yxxxyxxy)), ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(l_505.xx)).yyxxyyxy, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_506.yzxy)), l_507, 6L, (-3L), 0x57L)).s2045425331664426)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(0x06L, ((VECTOR(int8_t, 4))(l_508.yzww)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_509[0], 0x0AL, 0x4CL, ((VECTOR(int8_t, 4))(l_510.yyxy)), 6L, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_511.xyxyxxyx)).s1736623177136164)))).hi, ((VECTOR(int8_t, 8))((l_513 = ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(l_512.sed3fe8a4)).s1132717215417554))).s2), 0x78L, 0x5DL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(1L, 0L, 0x08L, 0x18L, l_514, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_515.s70)))), 0x0CL)).lo)), 5L, 0x74L, ((VECTOR(int8_t, 8))(0x22L, 0L, 0x5BL, ((l_517[2][2][0] &= l_516) , (l_518 = 4L)), 0x29L, 0x7FL, 0x5DL, (-3L))), 1L, 0x5EL)).s26ae)), 0x6DL))))))).lo)).s0, 0L, (-1L))).s76, ((VECTOR(int8_t, 4))(l_519.yyzy)).hi))).yxyyxxxyxxxxyyyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(l_520.s34ddaa286eea1ed5)).s1c45, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_521.yyyx)).y, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(l_522.yxxyyyxxyxxxyxxy)).sf37c, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_523.sa150)).xzzxwwyzzzwwyzxw)).scb07))).zwwxywxzywxzwxyz)).s242e, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(0L, l_524[0][5], 0x2EL, 0x54L)).xwxxwyyw))).s3237514313503006)).s5e)).xxyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(9L, ((VECTOR(int8_t, 2))((-1L), 0L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_525.s31)).xxxx)), 0x3EL)))).s6723156670534446, ((VECTOR(int8_t, 16))(l_526.wxzwzwzxxyxwyzxw))))).sf1c2, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_527.s0754)).odd)).yyxx))).yxxxzwxyywwywxyw, ((VECTOR(int8_t, 4))(l_528.zxzy)).zwwxzwzwxwyzwzwz, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((l_530[4][7][0] = l_529), (l_532 ^= l_531), 0x22L, 0x17L)).yyzxywyxzzyxyxwx))))), ((VECTOR(int8_t, 16))(0L))))).s0260)), (-9L), ((VECTOR(int8_t, 8))(7L)), 0x13L, 0x79L, 1L)).s19ce))), ((VECTOR(int8_t, 2))((-1L))), 0x33L)).hi, ((VECTOR(int8_t, 4))(0x3AL))))).xyxxzxwzwwwwwzzw)).sb96e)).xxyywzwx)).even))))).yxzzywzx))), ((VECTOR(int8_t, 8))(0x1BL))))).odd)).zwxxwzzzzywyyzwy, ((VECTOR(int8_t, 16))(0x42L))))).even, ((VECTOR(int8_t, 8))(0x56L)), ((VECTOR(int8_t, 8))(0L))))).s76)).yyxxxyxyxxyxyyxx))).scf91, ((VECTOR(int8_t, 4))(1L))))).xyyywwwy))).s4722104767117771, ((VECTOR(int8_t, 16))(0x1EL))))).odd)))))).hi, ((VECTOR(int8_t, 4))(7L))))).w , l_533), (-1L), 0x2D6F1E85L)), 0x20CBDA6BL, l_534, 0x398B1486L, (-1L))).s42, ((VECTOR(int32_t, 2))(0x7DDE50F1L))))).odd;
            }
            else
            { /* block id: 270 */
                int32_t *l_536 = (void*)0;
                int32_t *l_537 = (void*)0;
                int32_t l_539 = 0x3BC2B943L;
                int32_t *l_538 = &l_539;
                uint8_t l_540 = 0x34L;
                int32_t *l_543 = &l_539;
                l_538 = (l_537 = l_536);
                l_540--;
                l_543 = (void*)0;
            }
            unsigned int result = 0;
            result += l_502;
            atomic_add(&p_1045->g_special_values[55 * get_linear_group_id() + 19], result);
        }
        else
        { /* block id: 276 */
            (1 + 1);
        }
    }
    return &p_1045->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_68
 * writes: p_1045->g_68
 */
uint32_t * func_61(int32_t  p_62, struct S1 * p_1045)
{ /* block id: 14 */
    int32_t *l_67[3];
    int i;
    for (i = 0; i < 3; i++)
        l_67[i] = &p_1045->g_8;
    ++p_1045->g_68[0][7][3];
    return &p_1045->g_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_1045->g_104 p_1045->g_92 p_1045->g_8 p_1045->g_50 p_1045->g_66 p_1045->g_182 p_1045->l_comm_values p_1045->g_49 p_1045->g_42
 * writes: p_1045->g_104 p_1045->g_92 p_1045->g_8 p_1045->g_182
 */
uint64_t  func_89(int16_t  p_90, uint16_t  p_91, struct S1 * p_1045)
{ /* block id: 23 */
    uint16_t *l_97 = &p_1045->g_98;
    uint16_t **l_96 = &l_97;
    uint16_t ***l_99 = &l_96;
    int32_t *l_100[6];
    int16_t l_101 = 1L;
    int i;
    for (i = 0; i < 6; i++)
        l_100[i] = &p_1045->g_8;
    (*l_99) = l_96;
    p_1045->g_104[5]--;
    if ((atomic_inc(&p_1045->g_atomic_input[55 * get_linear_group_id() + 49]) == 4))
    { /* block id: 27 */
        int32_t l_107 = 0L;
        int32_t l_169 = 0x1D642D50L;
        int32_t *l_168 = &l_169;
        int32_t *l_170 = &l_169;
        int32_t *l_171 = &l_169;
        int32_t *l_172[9][3] = {{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169},{&l_169,&l_169,&l_169}};
        int32_t **l_173 = &l_170;
        int32_t **l_174 = &l_172[3][2];
        uint64_t l_175 = 1UL;
        uint16_t l_176 = 1UL;
        int i, j;
        if (l_107)
        { /* block id: 28 */
            int32_t l_108 = 1L;
            int32_t l_159 = 0x0CF57630L;
            int32_t *l_158 = &l_159;
            int32_t **l_157 = &l_158;
            VECTOR(uint32_t, 4) l_160 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA5A7FF29L), 0xA5A7FF29L);
            uint16_t l_161 = 0x0F19L;
            int16_t l_162 = 0x3002L;
            int32_t l_163[2];
            int8_t l_164 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_163[i] = 0x16AA09A3L;
            for (l_108 = 12; (l_108 != 8); l_108--)
            { /* block id: 31 */
                int32_t l_111[3][9][5] = {{{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L}},{{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L}},{{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L},{7L,0x179A8B53L,1L,0x2A85F466L,0x26C24742L}}};
                int16_t l_136 = 1L;
                uint64_t l_137 = 0UL;
                int i, j, k;
                for (l_111[0][7][4] = 0; (l_111[0][7][4] == 13); l_111[0][7][4] = safe_add_func_int16_t_s_s(l_111[0][7][4], 1))
                { /* block id: 34 */
                    int64_t l_114 = (-4L);
                    int32_t l_115 = 7L;
                    int32_t l_116 = 0x21647F7CL;
                    int64_t l_117 = (-5L);
                    uint16_t l_118[5];
                    uint8_t l_121 = 0UL;
                    uint8_t l_122 = 0xB5L;
                    int32_t l_123 = 0x1BBB9F26L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_118[i] = 0UL;
                    --l_118[2];
                    l_123 = (l_122 = l_121);
                    for (l_114 = 0; (l_114 < 8); ++l_114)
                    { /* block id: 40 */
                        int32_t *l_126 = (void*)0;
                        int32_t l_128 = 4L;
                        int32_t *l_127[5];
                        int32_t l_129 = (-10L);
                        union U0 l_131[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
                        union U0 *l_130 = &l_131[4];
                        int16_t l_132 = 0x1DFDL;
                        uint16_t l_133 = 0UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_127[i] = &l_128;
                        l_127[0] = l_126;
                        l_116 &= l_129;
                        l_130 = (void*)0;
                        ++l_133;
                    }
                }
                l_137 = l_136;
                for (l_111[2][0][2] = (-23); (l_111[2][0][2] != (-25)); --l_111[2][0][2])
                { /* block id: 50 */
                    uint8_t l_140 = 0UL;
                    int16_t l_141[2][2][10] = {{{0x2C17L,0x2C17L,1L,0x4E0CL,1L,0x4E0CL,1L,0x2C17L,0x2C17L,1L},{0x2C17L,0x2C17L,1L,0x4E0CL,1L,0x4E0CL,1L,0x2C17L,0x2C17L,1L}},{{0x2C17L,0x2C17L,1L,0x4E0CL,1L,0x4E0CL,1L,0x2C17L,0x2C17L,1L},{0x2C17L,0x2C17L,1L,0x4E0CL,1L,0x4E0CL,1L,0x2C17L,0x2C17L,1L}}};
                    int i, j, k;
                    l_141[0][1][2] = l_140;
                    for (l_140 = 0; (l_140 < 41); ++l_140)
                    { /* block id: 54 */
                        int32_t l_145 = 9L;
                        int32_t *l_144 = &l_145;
                        int32_t *l_146 = &l_145;
                        int32_t l_147 = 0x79DCF4DCL;
                        uint32_t l_148 = 4294967288UL;
                        int32_t l_149[7] = {0x4F833B27L,0x4F833B27L,0x4F833B27L,0x4F833B27L,0x4F833B27L,0x4F833B27L,0x4F833B27L};
                        int64_t l_150 = (-5L);
                        int8_t l_151 = 0L;
                        int64_t l_152 = 0x3BA64CE0CA3B740FL;
                        uint8_t l_153 = 250UL;
                        int32_t *l_156 = &l_145;
                        int i;
                        l_146 = l_144;
                        l_149[3] = (l_148 = l_147);
                        ++l_153;
                        l_146 = (l_156 = (l_144 = (void*)0));
                    }
                }
            }
            l_157 = (void*)0;
            l_162 = (l_160.w , l_161);
            l_164 = l_163[1];
        }
        else
        { /* block id: 68 */
            VECTOR(int32_t, 4) l_165 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L);
            int32_t l_166 = (-1L);
            VECTOR(int32_t, 16) l_167 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x17B2DE28L), 0x17B2DE28L), 0x17B2DE28L, (-1L), 0x17B2DE28L, (VECTOR(int32_t, 2))((-1L), 0x17B2DE28L), (VECTOR(int32_t, 2))((-1L), 0x17B2DE28L), (-1L), 0x17B2DE28L, (-1L), 0x17B2DE28L);
            int i;
            l_167.s2 = (l_166 ^= ((VECTOR(int32_t, 8))(l_165.yyyzwyxw)).s5);
        }
        l_172[3][2] = (l_171 = (l_170 = l_168));
        l_174 = l_173;
        l_176 = l_175;
        unsigned int result = 0;
        result += l_107;
        result += l_169;
        result += l_175;
        result += l_176;
        atomic_add(&p_1045->g_special_values[55 * get_linear_group_id() + 49], result);
    }
    else
    { /* block id: 77 */
        (1 + 1);
    }
    for (p_1045->g_92 = 25; (p_1045->g_92 > 27); p_1045->g_92++)
    { /* block id: 82 */
        uint32_t l_181 = 0xC0090DE9L;
        VECTOR(int32_t, 4) l_183 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L));
        VECTOR(int16_t, 2) l_203 = (VECTOR(int16_t, 2))(0x62B9L, 0x0537L);
        VECTOR(uint64_t, 4) l_210 = (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551613UL), 18446744073709551613UL);
        int32_t l_213 = 0x21ADF436L;
        int32_t l_214 = (-1L);
        int i;
        for (p_1045->g_8 = (-15); (p_1045->g_8 >= (-26)); p_1045->g_8--)
        { /* block id: 85 */
            l_183.w &= (p_1045->g_182 = (l_181 ^= p_1045->g_50.x));
        }
        if (p_90)
            continue;
        if ((atomic_inc(&p_1045->l_atomic_input[14]) == 4))
        { /* block id: 92 */
            uint16_t l_184 = 65535UL;
            uint64_t l_185 = 0x185A6AE0BEDEDAE1L;
            int8_t l_186 = 0x7FL;
            int32_t l_187 = 0L;
            uint64_t l_188 = 0x0E80B645F29C22F7L;
            int32_t l_189 = (-8L);
            int64_t l_194[5];
            int16_t l_195 = 0x6938L;
            uint64_t l_196 = 0x510E3700449F6A1BL;
            int i;
            for (i = 0; i < 5; i++)
                l_194[i] = (-1L);
            l_189 |= (((l_185 = l_184) , ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x1C061D4BL, (-8L))).xyyyyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x24A6B5C2L, ((VECTOR(int32_t, 2))((-9L), 0x2CC9075FL)), 1L)).lo)).yyxxxxxyyyxxxyyy)).hi))).s0) , (l_186 , ((l_187 , 0x7C0604E30F3DA433L) , l_188)));
            for (l_184 = (-22); (l_184 >= 2); l_184 = safe_add_func_int32_t_s_s(l_184, 9))
            { /* block id: 97 */
                uint16_t l_192 = 0UL;
                int16_t l_193[10][6][4] = {{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}},{{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L},{(-6L),2L,(-6L),0x26A0L}}};
                int i, j, k;
                l_193[4][4][2] = ((l_192 |= 0x4DL) , (-1L));
            }
            l_196 = (l_194[3] , l_195);
            unsigned int result = 0;
            result += l_184;
            result += l_185;
            result += l_186;
            result += l_187;
            result += l_188;
            result += l_189;
            int l_194_i0;
            for (l_194_i0 = 0; l_194_i0 < 5; l_194_i0++) {
                result += l_194[l_194_i0];
            }
            result += l_195;
            result += l_196;
            atomic_add(&p_1045->l_special_values[14], result);
        }
        else
        { /* block id: 102 */
            (1 + 1);
        }
        l_214 |= (l_213 |= ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_181 & ((safe_rshift_func_uint8_t_u_s(p_1045->g_50.x, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(65528UL, 3UL, p_1045->g_66, ((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 4))(l_203.xyyx)).yxzxxxyzwwxzwzzz))).sa, (((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((p_1045->g_66 ^ 5L), ((((safe_add_func_uint64_t_u_u((((VECTOR(uint8_t, 2))(0xFAL, 1UL)).hi & (0x74C3FBF1L >= p_1045->g_104[5])), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_210.wzxx)), 18446744073709551609UL, 0x46D17D0ED01F5253L, 2UL, 0x50431255FDFF747FL)).s20)))).odd)) , (((safe_div_func_uint16_t_u_u(((void*)0 == &p_1045->g_66), 1L)) <= p_90) , p_90)) , 0UL) , 3UL))), p_1045->g_182)) , p_1045->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1045->tid, 21))]) >= l_183.z), ((VECTOR(uint16_t, 2))(65535UL)), 0xFB4FL)), 0x66D5L, ((VECTOR(uint16_t, 4))(0x76B9L)), 65535UL, 0UL, 0x76C4L)).sa > 0L))) < 7UL)) || (-1L)), p_90)), p_1045->g_49.y)) & 0x07L));
    }
    return p_1045->g_42;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S1 c_1046;
    struct S1* p_1045 = &c_1046;
    struct S1 c_1047 = {
        0x63E8E1B8L, // p_1045->g_8
        {{0x11L,0x11L,0x11L},{0x11L,0x11L,0x11L},{0x11L,0x11L,0x11L}}, // p_1045->g_11
        4294967292UL, // p_1045->g_12
        6UL, // p_1045->g_32
        4294967295UL, // p_1045->g_42
        &p_1045->g_42, // p_1045->g_41
        (VECTOR(uint8_t, 2))(255UL, 255UL), // p_1045->g_49
        (VECTOR(uint8_t, 2))(0x5AL, 8UL), // p_1045->g_50
        (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 0UL), 0UL), // p_1045->g_51
        0x42739A3AL, // p_1045->g_66
        {{{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L},{5UL,0UL,0x2C51C80FL,0UL,0UL,5UL,0UL,0xEB022B26L}}}, // p_1045->g_68
        {{0x57L,0x57L}}, // p_1045->g_85
        0x5D73B7D9L, // p_1045->g_92
        0x494CL, // p_1045->g_94
        0UL, // p_1045->g_98
        {0x3CL,0x3CL,0x3CL,0x3CL,0x3CL}, // p_1045->g_102
        1L, // p_1045->g_103
        {0x0130L,0x0130L,0x0130L,0x0130L,0x0130L,0x0130L,0x0130L,0x0130L,0x0130L,0x0130L}, // p_1045->g_104
        1UL, // p_1045->g_182
        (VECTOR(int64_t, 16))(0x1D55D079115ADDF4L, (VECTOR(int64_t, 4))(0x1D55D079115ADDF4L, (VECTOR(int64_t, 2))(0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL), 0x0E2ED7CCDFA98FEAL), 0x0E2ED7CCDFA98FEAL, 0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL, (VECTOR(int64_t, 2))(0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL), (VECTOR(int64_t, 2))(0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL), 0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL, 0x1D55D079115ADDF4L, 0x0E2ED7CCDFA98FEAL), // p_1045->g_221
        (void*)0, // p_1045->g_224
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-8L)), (-8L)), // p_1045->g_247
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD8AEL), 0xD8AEL), // p_1045->g_251
        (VECTOR(uint16_t, 8))(0xC94AL, (VECTOR(uint16_t, 4))(0xC94AL, (VECTOR(uint16_t, 2))(0xC94AL, 65532UL), 65532UL), 65532UL, 0xC94AL, 65532UL), // p_1045->g_252
        (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x91L), 0x91L), // p_1045->g_255
        {-6L}, // p_1045->g_260
        (VECTOR(uint32_t, 8))(0xC0CEF86DL, (VECTOR(uint32_t, 4))(0xC0CEF86DL, (VECTOR(uint32_t, 2))(0xC0CEF86DL, 4294967295UL), 4294967295UL), 4294967295UL, 0xC0CEF86DL, 4294967295UL), // p_1045->g_286
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFEAA90E3L), 0xFEAA90E3L), 0xFEAA90E3L, 4294967295UL, 0xFEAA90E3L), // p_1045->g_288
        {{{{2L},{0x0AL},{0x32L},{0x32L},{0x0AL},{0x32L},{0x32L}}},{{{2L},{0x0AL},{0x32L},{0x32L},{0x0AL},{0x32L},{0x32L}}},{{{2L},{0x0AL},{0x32L},{0x32L},{0x0AL},{0x32L},{0x32L}}},{{{2L},{0x0AL},{0x32L},{0x32L},{0x0AL},{0x32L},{0x32L}}},{{{2L},{0x0AL},{0x32L},{0x32L},{0x0AL},{0x32L},{0x32L}}}}, // p_1045->g_312
        &p_1045->g_312[0][0][6], // p_1045->g_311
        (VECTOR(uint32_t, 2))(0x5E4E2523L, 9UL), // p_1045->g_354
        &p_1045->g_98, // p_1045->g_363
        &p_1045->g_363, // p_1045->g_362
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x9AL), 0x9AL), 0x9AL, 1UL, 0x9AL), // p_1045->g_388
        0UL, // p_1045->g_400
        4UL, // p_1045->g_425
        (VECTOR(int32_t, 16))(0x05EC4B10L, (VECTOR(int32_t, 4))(0x05EC4B10L, (VECTOR(int32_t, 2))(0x05EC4B10L, 8L), 8L), 8L, 0x05EC4B10L, 8L, (VECTOR(int32_t, 2))(0x05EC4B10L, 8L), (VECTOR(int32_t, 2))(0x05EC4B10L, 8L), 0x05EC4B10L, 8L, 0x05EC4B10L, 8L), // p_1045->g_459
        (void*)0, // p_1045->g_473
        &p_1045->g_473, // p_1045->g_472
        &p_1045->g_472, // p_1045->g_471
        (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x71L), 0x71L), 0x71L, 5L, 0x71L), // p_1045->g_478
        (VECTOR(int32_t, 8))(0x65696360L, (VECTOR(int32_t, 4))(0x65696360L, (VECTOR(int32_t, 2))(0x65696360L, 3L), 3L), 3L, 0x65696360L, 3L), // p_1045->g_547
        (VECTOR(uint16_t, 8))(0x26FFL, (VECTOR(uint16_t, 4))(0x26FFL, (VECTOR(uint16_t, 2))(0x26FFL, 65535UL), 65535UL), 65535UL, 0x26FFL, 65535UL), // p_1045->g_586
        0xECF6L, // p_1045->g_603
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL), // p_1045->g_620
        (VECTOR(uint32_t, 16))(0x175A2BE4L, (VECTOR(uint32_t, 4))(0x175A2BE4L, (VECTOR(uint32_t, 2))(0x175A2BE4L, 1UL), 1UL), 1UL, 0x175A2BE4L, 1UL, (VECTOR(uint32_t, 2))(0x175A2BE4L, 1UL), (VECTOR(uint32_t, 2))(0x175A2BE4L, 1UL), 0x175A2BE4L, 1UL, 0x175A2BE4L, 1UL), // p_1045->g_624
        &p_1045->g_41, // p_1045->g_655
        &p_1045->g_655, // p_1045->g_654
        (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x52L), 0x52L), // p_1045->g_691
        {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1045->g_700
        &p_1045->g_471, // p_1045->g_706
        (void*)0, // p_1045->g_730
        (VECTOR(int64_t, 16))(0x0BA860FB8F0B401FL, (VECTOR(int64_t, 4))(0x0BA860FB8F0B401FL, (VECTOR(int64_t, 2))(0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L), 0x2C735FDD470EBDC0L), 0x2C735FDD470EBDC0L, 0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L, (VECTOR(int64_t, 2))(0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L), (VECTOR(int64_t, 2))(0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L), 0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L, 0x0BA860FB8F0B401FL, 0x2C735FDD470EBDC0L), // p_1045->g_745
        (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xA3L), 0xA3L), 0xA3L, 2UL, 0xA3L, (VECTOR(uint8_t, 2))(2UL, 0xA3L), (VECTOR(uint8_t, 2))(2UL, 0xA3L), 2UL, 0xA3L, 2UL, 0xA3L), // p_1045->g_759
        (void*)0, // p_1045->g_790
        {{{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790}},{{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790}},{{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790},{&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790,&p_1045->g_790}}}, // p_1045->g_789
        &p_1045->g_730, // p_1045->g_807
        (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x2AL), 0x2AL), // p_1045->g_811
        (VECTOR(int32_t, 16))(0x2ABC520EL, (VECTOR(int32_t, 4))(0x2ABC520EL, (VECTOR(int32_t, 2))(0x2ABC520EL, (-4L)), (-4L)), (-4L), 0x2ABC520EL, (-4L), (VECTOR(int32_t, 2))(0x2ABC520EL, (-4L)), (VECTOR(int32_t, 2))(0x2ABC520EL, (-4L)), 0x2ABC520EL, (-4L), 0x2ABC520EL, (-4L)), // p_1045->g_840
        &p_1045->g_706, // p_1045->g_853
        0, // p_1045->v_collective
        sequence_input[get_global_id(0)], // p_1045->global_0_offset
        sequence_input[get_global_id(1)], // p_1045->global_1_offset
        sequence_input[get_global_id(2)], // p_1045->global_2_offset
        sequence_input[get_local_id(0)], // p_1045->local_0_offset
        sequence_input[get_local_id(1)], // p_1045->local_1_offset
        sequence_input[get_local_id(2)], // p_1045->local_2_offset
        sequence_input[get_group_id(0)], // p_1045->group_0_offset
        sequence_input[get_group_id(1)], // p_1045->group_1_offset
        sequence_input[get_group_id(2)], // p_1045->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_1045->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1046 = c_1047;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1045);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1045->g_8, "p_1045->g_8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1045->g_11[i][j], "p_1045->g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1045->g_12, "p_1045->g_12", print_hash_value);
    transparent_crc(p_1045->g_32, "p_1045->g_32", print_hash_value);
    transparent_crc(p_1045->g_42, "p_1045->g_42", print_hash_value);
    transparent_crc(p_1045->g_49.x, "p_1045->g_49.x", print_hash_value);
    transparent_crc(p_1045->g_49.y, "p_1045->g_49.y", print_hash_value);
    transparent_crc(p_1045->g_50.x, "p_1045->g_50.x", print_hash_value);
    transparent_crc(p_1045->g_50.y, "p_1045->g_50.y", print_hash_value);
    transparent_crc(p_1045->g_51.x, "p_1045->g_51.x", print_hash_value);
    transparent_crc(p_1045->g_51.y, "p_1045->g_51.y", print_hash_value);
    transparent_crc(p_1045->g_51.z, "p_1045->g_51.z", print_hash_value);
    transparent_crc(p_1045->g_51.w, "p_1045->g_51.w", print_hash_value);
    transparent_crc(p_1045->g_66, "p_1045->g_66", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1045->g_68[i][j][k], "p_1045->g_68[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1045->g_85[i][j], "p_1045->g_85[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1045->g_92, "p_1045->g_92", print_hash_value);
    transparent_crc(p_1045->g_94, "p_1045->g_94", print_hash_value);
    transparent_crc(p_1045->g_98, "p_1045->g_98", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1045->g_102[i], "p_1045->g_102[i]", print_hash_value);

    }
    transparent_crc(p_1045->g_103, "p_1045->g_103", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1045->g_104[i], "p_1045->g_104[i]", print_hash_value);

    }
    transparent_crc(p_1045->g_182, "p_1045->g_182", print_hash_value);
    transparent_crc(p_1045->g_221.s0, "p_1045->g_221.s0", print_hash_value);
    transparent_crc(p_1045->g_221.s1, "p_1045->g_221.s1", print_hash_value);
    transparent_crc(p_1045->g_221.s2, "p_1045->g_221.s2", print_hash_value);
    transparent_crc(p_1045->g_221.s3, "p_1045->g_221.s3", print_hash_value);
    transparent_crc(p_1045->g_221.s4, "p_1045->g_221.s4", print_hash_value);
    transparent_crc(p_1045->g_221.s5, "p_1045->g_221.s5", print_hash_value);
    transparent_crc(p_1045->g_221.s6, "p_1045->g_221.s6", print_hash_value);
    transparent_crc(p_1045->g_221.s7, "p_1045->g_221.s7", print_hash_value);
    transparent_crc(p_1045->g_221.s8, "p_1045->g_221.s8", print_hash_value);
    transparent_crc(p_1045->g_221.s9, "p_1045->g_221.s9", print_hash_value);
    transparent_crc(p_1045->g_221.sa, "p_1045->g_221.sa", print_hash_value);
    transparent_crc(p_1045->g_221.sb, "p_1045->g_221.sb", print_hash_value);
    transparent_crc(p_1045->g_221.sc, "p_1045->g_221.sc", print_hash_value);
    transparent_crc(p_1045->g_221.sd, "p_1045->g_221.sd", print_hash_value);
    transparent_crc(p_1045->g_221.se, "p_1045->g_221.se", print_hash_value);
    transparent_crc(p_1045->g_221.sf, "p_1045->g_221.sf", print_hash_value);
    transparent_crc(p_1045->g_247.x, "p_1045->g_247.x", print_hash_value);
    transparent_crc(p_1045->g_247.y, "p_1045->g_247.y", print_hash_value);
    transparent_crc(p_1045->g_247.z, "p_1045->g_247.z", print_hash_value);
    transparent_crc(p_1045->g_247.w, "p_1045->g_247.w", print_hash_value);
    transparent_crc(p_1045->g_251.x, "p_1045->g_251.x", print_hash_value);
    transparent_crc(p_1045->g_251.y, "p_1045->g_251.y", print_hash_value);
    transparent_crc(p_1045->g_251.z, "p_1045->g_251.z", print_hash_value);
    transparent_crc(p_1045->g_251.w, "p_1045->g_251.w", print_hash_value);
    transparent_crc(p_1045->g_252.s0, "p_1045->g_252.s0", print_hash_value);
    transparent_crc(p_1045->g_252.s1, "p_1045->g_252.s1", print_hash_value);
    transparent_crc(p_1045->g_252.s2, "p_1045->g_252.s2", print_hash_value);
    transparent_crc(p_1045->g_252.s3, "p_1045->g_252.s3", print_hash_value);
    transparent_crc(p_1045->g_252.s4, "p_1045->g_252.s4", print_hash_value);
    transparent_crc(p_1045->g_252.s5, "p_1045->g_252.s5", print_hash_value);
    transparent_crc(p_1045->g_252.s6, "p_1045->g_252.s6", print_hash_value);
    transparent_crc(p_1045->g_252.s7, "p_1045->g_252.s7", print_hash_value);
    transparent_crc(p_1045->g_255.x, "p_1045->g_255.x", print_hash_value);
    transparent_crc(p_1045->g_255.y, "p_1045->g_255.y", print_hash_value);
    transparent_crc(p_1045->g_255.z, "p_1045->g_255.z", print_hash_value);
    transparent_crc(p_1045->g_255.w, "p_1045->g_255.w", print_hash_value);
    transparent_crc(p_1045->g_260.f0, "p_1045->g_260.f0", print_hash_value);
    transparent_crc(p_1045->g_286.s0, "p_1045->g_286.s0", print_hash_value);
    transparent_crc(p_1045->g_286.s1, "p_1045->g_286.s1", print_hash_value);
    transparent_crc(p_1045->g_286.s2, "p_1045->g_286.s2", print_hash_value);
    transparent_crc(p_1045->g_286.s3, "p_1045->g_286.s3", print_hash_value);
    transparent_crc(p_1045->g_286.s4, "p_1045->g_286.s4", print_hash_value);
    transparent_crc(p_1045->g_286.s5, "p_1045->g_286.s5", print_hash_value);
    transparent_crc(p_1045->g_286.s6, "p_1045->g_286.s6", print_hash_value);
    transparent_crc(p_1045->g_286.s7, "p_1045->g_286.s7", print_hash_value);
    transparent_crc(p_1045->g_288.s0, "p_1045->g_288.s0", print_hash_value);
    transparent_crc(p_1045->g_288.s1, "p_1045->g_288.s1", print_hash_value);
    transparent_crc(p_1045->g_288.s2, "p_1045->g_288.s2", print_hash_value);
    transparent_crc(p_1045->g_288.s3, "p_1045->g_288.s3", print_hash_value);
    transparent_crc(p_1045->g_288.s4, "p_1045->g_288.s4", print_hash_value);
    transparent_crc(p_1045->g_288.s5, "p_1045->g_288.s5", print_hash_value);
    transparent_crc(p_1045->g_288.s6, "p_1045->g_288.s6", print_hash_value);
    transparent_crc(p_1045->g_288.s7, "p_1045->g_288.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1045->g_312[i][j][k].f0, "p_1045->g_312[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1045->g_354.x, "p_1045->g_354.x", print_hash_value);
    transparent_crc(p_1045->g_354.y, "p_1045->g_354.y", print_hash_value);
    transparent_crc(p_1045->g_388.s0, "p_1045->g_388.s0", print_hash_value);
    transparent_crc(p_1045->g_388.s1, "p_1045->g_388.s1", print_hash_value);
    transparent_crc(p_1045->g_388.s2, "p_1045->g_388.s2", print_hash_value);
    transparent_crc(p_1045->g_388.s3, "p_1045->g_388.s3", print_hash_value);
    transparent_crc(p_1045->g_388.s4, "p_1045->g_388.s4", print_hash_value);
    transparent_crc(p_1045->g_388.s5, "p_1045->g_388.s5", print_hash_value);
    transparent_crc(p_1045->g_388.s6, "p_1045->g_388.s6", print_hash_value);
    transparent_crc(p_1045->g_388.s7, "p_1045->g_388.s7", print_hash_value);
    transparent_crc(p_1045->g_400, "p_1045->g_400", print_hash_value);
    transparent_crc(p_1045->g_425, "p_1045->g_425", print_hash_value);
    transparent_crc(p_1045->g_459.s0, "p_1045->g_459.s0", print_hash_value);
    transparent_crc(p_1045->g_459.s1, "p_1045->g_459.s1", print_hash_value);
    transparent_crc(p_1045->g_459.s2, "p_1045->g_459.s2", print_hash_value);
    transparent_crc(p_1045->g_459.s3, "p_1045->g_459.s3", print_hash_value);
    transparent_crc(p_1045->g_459.s4, "p_1045->g_459.s4", print_hash_value);
    transparent_crc(p_1045->g_459.s5, "p_1045->g_459.s5", print_hash_value);
    transparent_crc(p_1045->g_459.s6, "p_1045->g_459.s6", print_hash_value);
    transparent_crc(p_1045->g_459.s7, "p_1045->g_459.s7", print_hash_value);
    transparent_crc(p_1045->g_459.s8, "p_1045->g_459.s8", print_hash_value);
    transparent_crc(p_1045->g_459.s9, "p_1045->g_459.s9", print_hash_value);
    transparent_crc(p_1045->g_459.sa, "p_1045->g_459.sa", print_hash_value);
    transparent_crc(p_1045->g_459.sb, "p_1045->g_459.sb", print_hash_value);
    transparent_crc(p_1045->g_459.sc, "p_1045->g_459.sc", print_hash_value);
    transparent_crc(p_1045->g_459.sd, "p_1045->g_459.sd", print_hash_value);
    transparent_crc(p_1045->g_459.se, "p_1045->g_459.se", print_hash_value);
    transparent_crc(p_1045->g_459.sf, "p_1045->g_459.sf", print_hash_value);
    transparent_crc(p_1045->g_478.s0, "p_1045->g_478.s0", print_hash_value);
    transparent_crc(p_1045->g_478.s1, "p_1045->g_478.s1", print_hash_value);
    transparent_crc(p_1045->g_478.s2, "p_1045->g_478.s2", print_hash_value);
    transparent_crc(p_1045->g_478.s3, "p_1045->g_478.s3", print_hash_value);
    transparent_crc(p_1045->g_478.s4, "p_1045->g_478.s4", print_hash_value);
    transparent_crc(p_1045->g_478.s5, "p_1045->g_478.s5", print_hash_value);
    transparent_crc(p_1045->g_478.s6, "p_1045->g_478.s6", print_hash_value);
    transparent_crc(p_1045->g_478.s7, "p_1045->g_478.s7", print_hash_value);
    transparent_crc(p_1045->g_547.s0, "p_1045->g_547.s0", print_hash_value);
    transparent_crc(p_1045->g_547.s1, "p_1045->g_547.s1", print_hash_value);
    transparent_crc(p_1045->g_547.s2, "p_1045->g_547.s2", print_hash_value);
    transparent_crc(p_1045->g_547.s3, "p_1045->g_547.s3", print_hash_value);
    transparent_crc(p_1045->g_547.s4, "p_1045->g_547.s4", print_hash_value);
    transparent_crc(p_1045->g_547.s5, "p_1045->g_547.s5", print_hash_value);
    transparent_crc(p_1045->g_547.s6, "p_1045->g_547.s6", print_hash_value);
    transparent_crc(p_1045->g_547.s7, "p_1045->g_547.s7", print_hash_value);
    transparent_crc(p_1045->g_586.s0, "p_1045->g_586.s0", print_hash_value);
    transparent_crc(p_1045->g_586.s1, "p_1045->g_586.s1", print_hash_value);
    transparent_crc(p_1045->g_586.s2, "p_1045->g_586.s2", print_hash_value);
    transparent_crc(p_1045->g_586.s3, "p_1045->g_586.s3", print_hash_value);
    transparent_crc(p_1045->g_586.s4, "p_1045->g_586.s4", print_hash_value);
    transparent_crc(p_1045->g_586.s5, "p_1045->g_586.s5", print_hash_value);
    transparent_crc(p_1045->g_586.s6, "p_1045->g_586.s6", print_hash_value);
    transparent_crc(p_1045->g_586.s7, "p_1045->g_586.s7", print_hash_value);
    transparent_crc(p_1045->g_603, "p_1045->g_603", print_hash_value);
    transparent_crc(p_1045->g_620.s0, "p_1045->g_620.s0", print_hash_value);
    transparent_crc(p_1045->g_620.s1, "p_1045->g_620.s1", print_hash_value);
    transparent_crc(p_1045->g_620.s2, "p_1045->g_620.s2", print_hash_value);
    transparent_crc(p_1045->g_620.s3, "p_1045->g_620.s3", print_hash_value);
    transparent_crc(p_1045->g_620.s4, "p_1045->g_620.s4", print_hash_value);
    transparent_crc(p_1045->g_620.s5, "p_1045->g_620.s5", print_hash_value);
    transparent_crc(p_1045->g_620.s6, "p_1045->g_620.s6", print_hash_value);
    transparent_crc(p_1045->g_620.s7, "p_1045->g_620.s7", print_hash_value);
    transparent_crc(p_1045->g_624.s0, "p_1045->g_624.s0", print_hash_value);
    transparent_crc(p_1045->g_624.s1, "p_1045->g_624.s1", print_hash_value);
    transparent_crc(p_1045->g_624.s2, "p_1045->g_624.s2", print_hash_value);
    transparent_crc(p_1045->g_624.s3, "p_1045->g_624.s3", print_hash_value);
    transparent_crc(p_1045->g_624.s4, "p_1045->g_624.s4", print_hash_value);
    transparent_crc(p_1045->g_624.s5, "p_1045->g_624.s5", print_hash_value);
    transparent_crc(p_1045->g_624.s6, "p_1045->g_624.s6", print_hash_value);
    transparent_crc(p_1045->g_624.s7, "p_1045->g_624.s7", print_hash_value);
    transparent_crc(p_1045->g_624.s8, "p_1045->g_624.s8", print_hash_value);
    transparent_crc(p_1045->g_624.s9, "p_1045->g_624.s9", print_hash_value);
    transparent_crc(p_1045->g_624.sa, "p_1045->g_624.sa", print_hash_value);
    transparent_crc(p_1045->g_624.sb, "p_1045->g_624.sb", print_hash_value);
    transparent_crc(p_1045->g_624.sc, "p_1045->g_624.sc", print_hash_value);
    transparent_crc(p_1045->g_624.sd, "p_1045->g_624.sd", print_hash_value);
    transparent_crc(p_1045->g_624.se, "p_1045->g_624.se", print_hash_value);
    transparent_crc(p_1045->g_624.sf, "p_1045->g_624.sf", print_hash_value);
    transparent_crc(p_1045->g_691.x, "p_1045->g_691.x", print_hash_value);
    transparent_crc(p_1045->g_691.y, "p_1045->g_691.y", print_hash_value);
    transparent_crc(p_1045->g_691.z, "p_1045->g_691.z", print_hash_value);
    transparent_crc(p_1045->g_691.w, "p_1045->g_691.w", print_hash_value);
    transparent_crc(p_1045->g_745.s0, "p_1045->g_745.s0", print_hash_value);
    transparent_crc(p_1045->g_745.s1, "p_1045->g_745.s1", print_hash_value);
    transparent_crc(p_1045->g_745.s2, "p_1045->g_745.s2", print_hash_value);
    transparent_crc(p_1045->g_745.s3, "p_1045->g_745.s3", print_hash_value);
    transparent_crc(p_1045->g_745.s4, "p_1045->g_745.s4", print_hash_value);
    transparent_crc(p_1045->g_745.s5, "p_1045->g_745.s5", print_hash_value);
    transparent_crc(p_1045->g_745.s6, "p_1045->g_745.s6", print_hash_value);
    transparent_crc(p_1045->g_745.s7, "p_1045->g_745.s7", print_hash_value);
    transparent_crc(p_1045->g_745.s8, "p_1045->g_745.s8", print_hash_value);
    transparent_crc(p_1045->g_745.s9, "p_1045->g_745.s9", print_hash_value);
    transparent_crc(p_1045->g_745.sa, "p_1045->g_745.sa", print_hash_value);
    transparent_crc(p_1045->g_745.sb, "p_1045->g_745.sb", print_hash_value);
    transparent_crc(p_1045->g_745.sc, "p_1045->g_745.sc", print_hash_value);
    transparent_crc(p_1045->g_745.sd, "p_1045->g_745.sd", print_hash_value);
    transparent_crc(p_1045->g_745.se, "p_1045->g_745.se", print_hash_value);
    transparent_crc(p_1045->g_745.sf, "p_1045->g_745.sf", print_hash_value);
    transparent_crc(p_1045->g_759.s0, "p_1045->g_759.s0", print_hash_value);
    transparent_crc(p_1045->g_759.s1, "p_1045->g_759.s1", print_hash_value);
    transparent_crc(p_1045->g_759.s2, "p_1045->g_759.s2", print_hash_value);
    transparent_crc(p_1045->g_759.s3, "p_1045->g_759.s3", print_hash_value);
    transparent_crc(p_1045->g_759.s4, "p_1045->g_759.s4", print_hash_value);
    transparent_crc(p_1045->g_759.s5, "p_1045->g_759.s5", print_hash_value);
    transparent_crc(p_1045->g_759.s6, "p_1045->g_759.s6", print_hash_value);
    transparent_crc(p_1045->g_759.s7, "p_1045->g_759.s7", print_hash_value);
    transparent_crc(p_1045->g_759.s8, "p_1045->g_759.s8", print_hash_value);
    transparent_crc(p_1045->g_759.s9, "p_1045->g_759.s9", print_hash_value);
    transparent_crc(p_1045->g_759.sa, "p_1045->g_759.sa", print_hash_value);
    transparent_crc(p_1045->g_759.sb, "p_1045->g_759.sb", print_hash_value);
    transparent_crc(p_1045->g_759.sc, "p_1045->g_759.sc", print_hash_value);
    transparent_crc(p_1045->g_759.sd, "p_1045->g_759.sd", print_hash_value);
    transparent_crc(p_1045->g_759.se, "p_1045->g_759.se", print_hash_value);
    transparent_crc(p_1045->g_759.sf, "p_1045->g_759.sf", print_hash_value);
    transparent_crc(p_1045->g_811.x, "p_1045->g_811.x", print_hash_value);
    transparent_crc(p_1045->g_811.y, "p_1045->g_811.y", print_hash_value);
    transparent_crc(p_1045->g_811.z, "p_1045->g_811.z", print_hash_value);
    transparent_crc(p_1045->g_811.w, "p_1045->g_811.w", print_hash_value);
    transparent_crc(p_1045->g_840.s0, "p_1045->g_840.s0", print_hash_value);
    transparent_crc(p_1045->g_840.s1, "p_1045->g_840.s1", print_hash_value);
    transparent_crc(p_1045->g_840.s2, "p_1045->g_840.s2", print_hash_value);
    transparent_crc(p_1045->g_840.s3, "p_1045->g_840.s3", print_hash_value);
    transparent_crc(p_1045->g_840.s4, "p_1045->g_840.s4", print_hash_value);
    transparent_crc(p_1045->g_840.s5, "p_1045->g_840.s5", print_hash_value);
    transparent_crc(p_1045->g_840.s6, "p_1045->g_840.s6", print_hash_value);
    transparent_crc(p_1045->g_840.s7, "p_1045->g_840.s7", print_hash_value);
    transparent_crc(p_1045->g_840.s8, "p_1045->g_840.s8", print_hash_value);
    transparent_crc(p_1045->g_840.s9, "p_1045->g_840.s9", print_hash_value);
    transparent_crc(p_1045->g_840.sa, "p_1045->g_840.sa", print_hash_value);
    transparent_crc(p_1045->g_840.sb, "p_1045->g_840.sb", print_hash_value);
    transparent_crc(p_1045->g_840.sc, "p_1045->g_840.sc", print_hash_value);
    transparent_crc(p_1045->g_840.sd, "p_1045->g_840.sd", print_hash_value);
    transparent_crc(p_1045->g_840.se, "p_1045->g_840.se", print_hash_value);
    transparent_crc(p_1045->g_840.sf, "p_1045->g_840.sf", print_hash_value);
    transparent_crc(p_1045->v_collective, "p_1045->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 55; i++)
            transparent_crc(p_1045->g_special_values[i + 55 * get_linear_group_id()], "p_1045->g_special_values[i + 55 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 55; i++)
            transparent_crc(p_1045->l_special_values[i], "p_1045->l_special_values[i]", print_hash_value);
    transparent_crc(p_1045->l_comm_values[get_linear_local_id()], "p_1045->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1045->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_1045->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
