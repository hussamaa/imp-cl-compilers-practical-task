// --atomics 69 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 39,68,2 -l 3,17,2
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

__constant uint32_t permutations[10][102] = {
{64,50,42,2,39,99,8,5,4,12,31,58,36,97,29,76,83,0,89,92,78,35,85,54,11,80,79,41,67,17,56,16,20,55,62,57,94,37,40,7,86,70,49,30,28,74,18,48,71,51,90,14,91,13,53,69,87,84,66,65,21,23,26,61,44,60,33,1,81,22,24,43,82,46,3,98,27,95,34,100,72,15,47,9,68,75,10,19,52,93,63,73,59,77,38,25,32,88,101,96,6,45}, // permutation 0
{28,8,18,22,41,84,68,6,79,50,62,3,71,99,63,58,34,76,54,45,81,20,55,52,72,46,78,83,61,96,66,14,57,100,47,33,7,36,77,93,15,48,29,27,1,2,25,11,35,30,69,89,39,82,86,88,0,98,60,4,13,94,31,85,91,17,37,42,32,21,56,64,87,65,73,70,23,51,74,59,53,67,5,38,19,12,97,101,24,16,49,95,43,9,80,40,75,44,10,90,26,92}, // permutation 1
{59,15,57,64,20,48,90,81,97,25,62,8,67,63,32,17,6,74,75,5,18,36,52,88,73,58,76,92,3,4,54,49,86,82,9,89,0,44,11,61,69,41,91,66,77,95,37,70,24,12,50,42,40,21,7,30,60,43,96,38,99,68,35,26,55,22,98,33,93,78,2,27,71,87,80,28,46,29,34,19,23,65,16,79,51,45,1,14,56,94,53,10,83,13,47,85,100,84,39,31,72,101}, // permutation 2
{93,17,99,89,80,77,92,0,15,24,62,86,79,12,74,50,51,94,26,43,75,16,69,95,66,6,38,55,35,57,11,14,72,90,78,100,40,64,46,41,73,13,33,56,61,97,63,36,22,42,28,85,71,101,45,54,30,65,88,27,34,2,98,81,68,60,20,87,29,21,59,53,10,23,52,91,3,5,31,47,67,44,58,9,39,76,25,4,32,18,49,83,1,70,96,84,7,19,48,82,8,37}, // permutation 3
{74,57,62,66,76,22,54,72,82,85,92,53,56,32,7,47,63,101,94,31,40,98,61,51,37,4,68,79,58,48,13,12,14,5,23,93,81,21,10,91,27,1,95,69,77,65,34,84,86,59,49,38,83,45,96,24,87,39,18,55,26,20,44,42,78,75,28,70,43,9,64,35,89,11,25,6,16,8,3,71,60,36,90,17,50,19,29,80,15,73,41,99,88,33,97,100,67,30,52,46,2,0}, // permutation 4
{87,46,1,98,27,88,84,68,54,44,10,99,9,6,90,16,72,11,12,36,41,71,58,32,96,24,101,97,51,15,79,38,26,60,34,14,91,22,89,37,53,3,4,94,59,77,62,83,50,74,55,23,18,30,85,0,25,13,56,2,7,28,82,75,20,69,86,76,35,47,61,63,81,40,80,45,49,29,33,21,31,43,19,17,78,70,66,64,39,93,67,48,52,5,100,92,42,57,95,8,73,65}, // permutation 5
{22,6,70,82,80,12,95,53,93,89,31,72,47,54,17,62,75,9,10,76,84,26,4,45,58,92,42,41,7,74,91,39,37,48,32,67,63,30,46,61,55,85,68,35,49,59,88,27,34,87,60,3,28,51,52,43,14,25,5,40,38,29,94,18,21,81,97,66,99,19,65,86,100,73,8,56,13,90,96,24,50,0,33,101,11,2,78,23,77,36,83,71,79,44,16,20,64,98,57,69,15,1}, // permutation 6
{73,45,28,90,67,48,36,95,98,60,7,99,85,79,16,88,34,14,93,80,0,100,13,92,19,17,51,89,72,64,41,69,61,52,44,9,58,37,23,55,68,24,5,29,1,32,3,57,63,53,50,38,81,101,76,31,8,42,11,82,30,15,2,78,71,43,49,70,75,10,27,65,46,25,18,96,33,62,77,12,59,47,21,87,56,54,94,40,74,35,86,26,39,83,20,84,4,97,91,6,66,22}, // permutation 7
{76,19,45,1,23,14,85,98,97,81,68,50,24,7,75,94,53,9,64,58,40,35,12,42,49,88,0,57,93,46,48,52,62,5,13,39,78,66,44,63,56,34,38,22,32,69,59,30,79,73,72,8,82,54,83,95,87,65,11,16,37,25,67,26,15,21,10,71,43,84,18,6,101,33,96,51,31,2,47,89,70,80,99,27,41,90,86,28,74,36,92,20,60,77,55,4,17,100,61,3,29,91}, // permutation 8
{73,78,14,93,35,20,69,87,90,15,16,89,19,58,10,59,54,79,41,83,75,40,7,97,67,101,4,12,51,0,42,31,86,21,33,26,25,13,2,37,11,29,49,71,56,61,60,68,46,76,74,48,84,80,5,47,100,81,44,91,6,57,30,85,63,55,72,22,36,45,88,70,62,32,50,3,77,99,53,18,82,17,96,28,43,64,1,65,24,95,94,27,23,39,9,8,52,38,66,34,92,98} // permutation 9
};

// Seed: 181162205

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint64_t  f1;
   int8_t * f2;
   int64_t  f3;
   uint16_t  f4;
};

union U1 {
   uint64_t  f0;
   volatile uint32_t  f1;
};

struct S3 {
    int32_t g_3;
    volatile int32_t g_6;
    uint32_t g_7[6][9];
    volatile int8_t g_21[5][10];
    int16_t g_25;
    uint16_t g_30;
    VECTOR(uint16_t, 4) g_45;
    int8_t g_49;
    VECTOR(uint8_t, 2) g_51;
    VECTOR(uint16_t, 4) g_105;
    int64_t g_122;
    int64_t g_123;
    uint16_t g_124;
    VECTOR(int16_t, 4) g_145;
    VECTOR(int64_t, 16) g_158;
    int8_t g_162;
    uint64_t g_164;
    int64_t g_167;
    int32_t g_169;
    uint16_t g_187;
    VECTOR(uint32_t, 16) g_191;
    VECTOR(uint16_t, 2) g_196;
    union U0 g_252;
    int32_t g_256;
    uint8_t g_273;
    int64_t g_284;
    uint8_t g_285;
    int32_t g_292[7];
    int32_t *g_291;
    uint32_t g_297;
    int64_t g_321;
    union U1 g_323;
    volatile uint16_t ** volatile *g_359;
    union U1 g_363;
    VECTOR(uint16_t, 8) g_388;
    union U1 g_393;
    union U1 *g_392;
    union U1 **g_391;
    int8_t *g_395;
    int8_t *g_410;
    uint32_t *g_422;
    int8_t g_602;
    int8_t *g_601;
    VECTOR(uint16_t, 16) g_631;
    VECTOR(uint32_t, 4) g_641;
    VECTOR(int16_t, 16) g_646;
    VECTOR(int8_t, 4) g_654;
    VECTOR(int8_t, 8) g_655;
    uint32_t g_683;
    int64_t *g_705;
    volatile VECTOR(int64_t, 2) g_707;
    int32_t *g_749[10];
    volatile VECTOR(int64_t, 8) g_763;
    volatile VECTOR(int64_t, 8) g_765;
    volatile VECTOR(int64_t, 16) g_767;
    volatile union U0 *g_770;
    volatile union U0 ** volatile g_769[10];
    uint16_t *g_778;
    uint16_t ** volatile g_777;
    VECTOR(int64_t, 16) g_787;
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
union U0  func_1(struct S3 * p_805);
int32_t * func_31(int8_t * p_32, int8_t * p_33, struct S3 * p_805);
int8_t * func_34(int32_t  p_35, int32_t * p_36, struct S3 * p_805);
int32_t * func_37(uint8_t  p_38, int8_t * p_39, int32_t * p_40, uint32_t  p_41, struct S3 * p_805);
int32_t * func_59(int64_t  p_60, uint16_t  p_61, int8_t * p_62, int64_t  p_63, struct S3 * p_805);
union U0  func_64(int8_t * p_65, struct S3 * p_805);
int8_t * func_66(uint16_t * p_67, int8_t * p_68, struct S3 * p_805);
uint16_t * func_69(int8_t * p_70, int32_t  p_71, int32_t * p_72, struct S3 * p_805);
union U0  func_76(int8_t * p_77, uint16_t * p_78, int32_t  p_79, uint16_t * p_80, struct S3 * p_805);
int32_t  func_81(int32_t  p_82, struct S3 * p_805);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_805->g_7 p_805->g_3 p_805->l_comm_values p_805->g_21 p_805->g_45 p_805->g_51 p_805->g_25 p_805->g_30 p_805->g_49 p_805->g_comm_values p_805->g_124 p_805->g_122 p_805->g_145 p_805->g_169 p_805->g_158 p_805->g_187 p_805->g_164 p_805->g_252 p_805->g_256 p_805->g_105 p_805->g_252.f0 p_805->g_273 p_805->g_285 p_805->g_291 p_805->g_292 p_805->g_297 p_805->g_196 p_805->g_321 p_805->g_123 p_805->g_359 p_805->g_391 p_805->g_284 p_805->g_395 p_805->g_601 p_805->g_631 p_805->g_641 p_805->g_646 p_805->g_654 p_805->g_655 p_805->g_683 p_805->g_763 p_805->g_765 p_805->g_767 p_805->g_705 p_805->g_769 p_805->g_191 p_805->g_777 p_805->g_787 p_805->g_252.f3
 * writes: p_805->g_7 p_805->g_3 p_805->g_30 p_805->g_49 p_805->g_25 p_805->g_45 p_805->g_124 p_805->g_169 p_805->g_187 p_805->g_167 p_805->g_164 p_805->g_145 p_805->g_256 p_805->g_273 p_805->g_285 p_805->g_292 p_805->g_297 p_805->g_321 p_805->g_123 p_805->g_122 p_805->g_395 p_805->g_410 p_805->g_422 p_805->g_291 p_805->g_683 p_805->g_749 p_805->g_252.f3 p_805->g_284
 */
union U0  func_1(struct S3 * p_805)
{ /* block id: 4 */
    int32_t *l_2 = &p_805->g_3;
    int32_t *l_4 = &p_805->g_3;
    int32_t *l_5[8];
    int8_t *l_48 = &p_805->g_49;
    VECTOR(uint16_t, 8) l_50 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65532UL), 65532UL), 65532UL, 2UL, 65532UL);
    uint16_t *l_52 = &p_805->g_30;
    int32_t l_53 = 0x1B61232CL;
    int32_t **l_686 = &l_2;
    uint16_t l_801[9];
    union U0 l_804 = {0xAF3F3659L};
    int i;
    for (i = 0; i < 8; i++)
        l_5[i] = &p_805->g_3;
    for (i = 0; i < 9; i++)
        l_801[i] = 0x42FFL;
    p_805->g_7[0][7]--;
    for (p_805->g_3 = (-21); (p_805->g_3 < (-6)); p_805->g_3 = safe_add_func_int64_t_s_s(p_805->g_3, 2))
    { /* block id: 8 */
        uint32_t l_22 = 0x4CE10B49L;
        int32_t l_26 = 1L;
        uint32_t l_27 = 0UL;
        if ((atomic_inc(&p_805->g_atomic_input[69 * get_linear_group_id() + 6]) == 5))
        { /* block id: 10 */
            int32_t l_12[2];
            int32_t l_13 = 0x59785734L;
            uint64_t l_14 = 0xE6E40424B969B42CL;
            int32_t *l_17 = (void*)0;
            int32_t *l_18 = &l_12[1];
            int32_t *l_19 = &l_12[1];
            int32_t *l_20 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_12[i] = (-1L);
            l_14--;
            l_18 = l_17;
            l_20 = l_19;
            unsigned int result = 0;
            int l_12_i0;
            for (l_12_i0 = 0; l_12_i0 < 2; l_12_i0++) {
                result += l_12[l_12_i0];
            }
            result += l_13;
            result += l_14;
            atomic_add(&p_805->g_special_values[69 * get_linear_group_id() + 6], result);
        }
        else
        { /* block id: 14 */
            (1 + 1);
        }
        ++l_22;
        l_27++;
        l_26 ^= (p_805->g_30 = p_805->l_comm_values[(safe_mod_func_uint32_t_u_u(p_805->tid, 102))]);
    }
    p_805->g_749[5] = func_31(func_34(p_805->g_21[3][5], ((*l_686) = func_37(((safe_div_func_int32_t_s_s(6L, 0x7A3EBEF2L)) || ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(p_805->g_45.xyyxxwzywwyxzxww)).seb, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))((safe_lshift_func_uint16_t_u_u((p_805->l_comm_values[(safe_mod_func_uint32_t_u_u(p_805->tid, 102))] , ((*l_2) ^ ((*l_48) = p_805->g_45.z))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(8UL, 1UL)), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(254UL, 5UL)).xyxyyxyxxxyyyxyy)).s82a4, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x45L, 0x20L, 0x9DL, 1UL))))))).zyxxxyxw)).even))))), 0xBBF8L, 65535UL)).s5)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_50.s5535)).odd)), GROUP_DIVERGE(0, 1), 65535UL, ((*l_2) , (p_805->l_comm_values[(safe_mod_func_uint32_t_u_u(p_805->tid, 102))] , ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xF7L, 0UL)).yxyxxyyyyyxyxxyy)).even, ((VECTOR(uint8_t, 16))(p_805->g_51.xxyyyyyxyxyxyyyy)).odd))).s5)), 0UL, 65535UL)), (uint16_t)((*l_52) = (*l_2))))).s01))), ((VECTOR(uint16_t, 2))(0x4A96L)), 0x3FD1L, p_805->g_25, 0xD8C4L, ((VECTOR(uint16_t, 2))(65526UL)), FAKE_DIVERGE(p_805->group_2_offset, get_group_id(2), 10), ((VECTOR(uint16_t, 2))(65528UL)), p_805->g_25, (*l_4), 0x449DL, 1UL)).s60)), ((VECTOR(uint16_t, 2))(0x69ABL))))).even)) , 0x5206L)), l_48, l_5[1], l_53, p_805)), p_805), &p_805->g_602, p_805);
    l_801[3]--;
    return l_804;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_191 p_805->g_777 p_805->g_654 p_805->g_787 p_805->g_123 p_805->g_158 p_805->g_705 p_805->g_51 p_805->g_122 p_805->g_252.f3 p_805->g_291 p_805->g_292
 * writes: p_805->g_252.f3 p_805->g_187 p_805->g_284 p_805->g_122 p_805->g_30 p_805->g_292
 */
int32_t * func_31(int8_t * p_32, int8_t * p_33, struct S3 * p_805)
{ /* block id: 333 */
    VECTOR(int32_t, 8) l_779 = (VECTOR(int32_t, 8))(0x7B8709A3L, (VECTOR(int32_t, 4))(0x7B8709A3L, (VECTOR(int32_t, 2))(0x7B8709A3L, 0x052B0FE6L), 0x052B0FE6L), 0x052B0FE6L, 0x7B8709A3L, 0x052B0FE6L);
    VECTOR(int64_t, 4) l_780 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6A7038FFCB4CC34AL), 0x6A7038FFCB4CC34AL);
    VECTOR(int64_t, 8) l_781 = (VECTOR(int64_t, 8))(0x396AAE3798D740C1L, (VECTOR(int64_t, 4))(0x396AAE3798D740C1L, (VECTOR(int64_t, 2))(0x396AAE3798D740C1L, 1L), 1L), 1L, 0x396AAE3798D740C1L, 1L);
    VECTOR(uint8_t, 16) l_782 = (VECTOR(uint8_t, 16))(0x28L, (VECTOR(uint8_t, 4))(0x28L, (VECTOR(uint8_t, 2))(0x28L, 0xB6L), 0xB6L), 0xB6L, 0x28L, 0xB6L, (VECTOR(uint8_t, 2))(0x28L, 0xB6L), (VECTOR(uint8_t, 2))(0x28L, 0xB6L), 0x28L, 0xB6L, 0x28L, 0xB6L);
    int32_t l_793 = 0L;
    uint64_t l_794 = 0x09A6D5595E9260ADL;
    uint16_t *l_795 = &p_805->g_187;
    int64_t *l_796 = &p_805->g_284;
    int64_t *l_797 = (void*)0;
    int64_t *l_798 = &p_805->g_122;
    uint16_t *l_799 = (void*)0;
    uint16_t *l_800 = &p_805->g_30;
    int i;
    (*p_805->g_291) |= (safe_mul_func_int8_t_s_s(((((*l_800) = ((((safe_sub_func_uint16_t_u_u(p_805->g_191.s3, (p_805->g_777 == (void*)0))) , p_805->g_654.w) >= ((((VECTOR(int32_t, 4))(l_779.s6141)).w , (GROUP_DIVERGE(1, 1) > (+((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(l_780.zxyz)).xxwywzxw, ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(l_781.s22727134)), (int64_t)((*l_798) |= ((*l_796) = ((l_782.sa > ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((*l_795) = (((*p_805->g_705) = ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(p_805->g_787.s0bf93438)).hi, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(((safe_mod_func_uint64_t_u_u(((p_805->g_123 && ((((l_782.s5 || FAKE_DIVERGE(p_805->global_1_offset, get_global_id(1), 10)) <= 0x623205D0L) < (safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(4294967295UL)), l_793))) , (-1L))) < l_793), 0x4F59DE2CB15B8F55L)) != l_781.s4), ((VECTOR(int64_t, 4))((-7L))), p_805->g_158.s9, 0x4F855F335101DB6AL, (-4L))), ((VECTOR(int64_t, 8))((-1L)))))).lo, ((VECTOR(int64_t, 4))((-8L))), ((VECTOR(int64_t, 4))(0x766BB1524B095FE5L))))), ((VECTOR(int64_t, 4))((-7L)))))).w) == l_794)), l_779.s7)), p_805->g_51.y)) , 1L)) , 0x275492ECFBAB1900L)))))).s1744751223122331, ((VECTOR(int64_t, 16))(0x4AF5B617DA2E4695L))))).even, (int64_t)l_780.w, (int64_t)(*p_805->g_705))))))).s0))) && (-1L))) || 7UL)) > l_780.z) >= 0x3CE53C52L), 5L));
    return &p_805->g_292[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_124 p_805->g_763 p_805->g_765 p_805->g_767 p_805->g_705 p_805->g_769 p_805->g_164 p_805->g_291 p_805->g_292 p_805->g_122 p_805->g_191
 * writes: p_805->g_124 p_805->g_291 p_805->g_749 p_805->g_252.f3 p_805->g_273 p_805->g_3
 */
int8_t * func_34(int32_t  p_35, int32_t * p_36, struct S3 * p_805)
{ /* block id: 282 */
    int64_t *l_688 = (void*)0;
    int64_t **l_687 = &l_688;
    int32_t l_713 = 0x6B48FE33L;
    uint16_t l_730[4][3][5] = {{{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL}},{{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL}},{{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL}},{{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL},{65535UL,0x360CL,0x360CL,65535UL,65535UL}}};
    int32_t **l_747 = (void*)0;
    int32_t **l_748 = &p_805->g_291;
    VECTOR(uint16_t, 16) l_754 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xE36EL), 0xE36EL), 0xE36EL, 8UL, 0xE36EL, (VECTOR(uint16_t, 2))(8UL, 0xE36EL), (VECTOR(uint16_t, 2))(8UL, 0xE36EL), 8UL, 0xE36EL, 8UL, 0xE36EL);
    uint64_t l_756 = 18446744073709551611UL;
    VECTOR(int16_t, 16) l_761 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-9L)), (-9L)), (-9L), (-6L), (-9L), (VECTOR(int16_t, 2))((-6L), (-9L)), (VECTOR(int16_t, 2))((-6L), (-9L)), (-6L), (-9L), (-6L), (-9L));
    VECTOR(int64_t, 16) l_762 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3904A2C9512C6DFDL), 0x3904A2C9512C6DFDL), 0x3904A2C9512C6DFDL, 0L, 0x3904A2C9512C6DFDL, (VECTOR(int64_t, 2))(0L, 0x3904A2C9512C6DFDL), (VECTOR(int64_t, 2))(0L, 0x3904A2C9512C6DFDL), 0L, 0x3904A2C9512C6DFDL, 0L, 0x3904A2C9512C6DFDL);
    VECTOR(int64_t, 2) l_764 = (VECTOR(int64_t, 2))(0x05A0637B07981104L, 0x260415E00B38541AL);
    VECTOR(int64_t, 4) l_766 = (VECTOR(int64_t, 4))(0x39A06BEF8942E4E4L, (VECTOR(int64_t, 2))(0x39A06BEF8942E4E4L, (-1L)), (-1L));
    union U0 l_768[9] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
    uint8_t *l_771 = (void*)0;
    uint8_t *l_772 = &p_805->g_273;
    int i, j, k;
    if (((void*)0 != l_687))
    { /* block id: 283 */
        int8_t l_693 = 9L;
        VECTOR(int8_t, 16) l_704 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1FL), 0x1FL), 0x1FL, (-1L), 0x1FL, (VECTOR(int8_t, 2))((-1L), 0x1FL), (VECTOR(int8_t, 2))((-1L), 0x1FL), (-1L), 0x1FL, (-1L), 0x1FL);
        uint16_t l_742 = 65535UL;
        int i;
        for (p_805->g_124 = 0; (p_805->g_124 == 8); p_805->g_124 = safe_add_func_uint8_t_u_u(p_805->g_124, 8))
        { /* block id: 286 */
            int64_t *l_706 = (void*)0;
            uint16_t *l_708 = &p_805->g_187;
            int16_t *l_714 = (void*)0;
            int16_t *l_715 = (void*)0;
            int16_t *l_716 = (void*)0;
            int16_t *l_717 = &p_805->g_25;
            int32_t l_718 = 0x19A6A827L;
            int32_t l_719 = 0x1B2BF980L;
            (1 + 1);
        }
    }
    else
    { /* block id: 324 */
        int8_t *l_746[8][3][4] = {{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}},{{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162},{&p_805->g_602,(void*)0,(void*)0,&p_805->g_162}}};
        int i, j, k;
        return l_746[7][1][0];
    }
    p_805->g_749[9] = ((*l_748) = &p_805->g_292[0]);
    (*p_36) = (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_754.s6235)))), ((safe_unary_minus_func_int8_t_s(((p_35 , (l_756 || p_35)) != p_35))) || ((*l_772) = ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((((((((VECTOR(int16_t, 2))(l_761.s2d)).hi && (((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_762.sa150)).xxxyyyzx)).s3150730626330256, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_805->g_763.s20)), 0x1A845A84DB3F1777L, 2L)).odd)).yyxyyyyxyxyxyxxx))).sc || ((*p_805->g_705) = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_764.xxyxxyxx)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(p_805->g_765.s2253134160373452)).s16bd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(l_766.wy)).yxyy, ((VECTOR(int64_t, 4))(p_805->g_767.s7a1d)))))))))).xxxyyzxx)))).odd)).s1))) , l_768[1]) , (p_805->g_769[6] == (void*)0)) , (p_805->g_164 >= ((**l_748) && p_35))) && FAKE_DIVERGE(p_805->group_2_offset, get_group_id(2), 10)), 4)), 1)) > 0UL))), (**l_748), 0x2C37L, 0x2F6EL)).s5, p_35)) != 0x7CDDC0C39CCC5DCEL) <= p_805->g_122), p_805->g_191.sb));
    return &p_805->g_602;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_30 p_805->g_49 p_805->g_comm_values p_805->g_45 p_805->g_51 p_805->g_124 p_805->g_3 p_805->g_122 p_805->g_145 p_805->g_169 p_805->g_158 p_805->g_187 p_805->g_164 p_805->g_252 p_805->g_256 p_805->g_105 p_805->g_25 p_805->g_252.f0 p_805->g_273 p_805->g_285 p_805->g_291 p_805->g_292 p_805->g_297 p_805->g_196 p_805->g_321 p_805->g_123 p_805->g_359 p_805->l_comm_values p_805->g_391 p_805->g_284 p_805->g_395 p_805->g_7 p_805->g_601 p_805->g_631 p_805->g_641 p_805->g_646 p_805->g_654 p_805->g_655 p_805->g_683
 * writes: p_805->g_30 p_805->g_25 p_805->g_7 p_805->g_45 p_805->g_49 p_805->g_124 p_805->g_3 p_805->g_169 p_805->g_187 p_805->g_167 p_805->g_164 p_805->g_145 p_805->g_256 p_805->g_273 p_805->g_285 p_805->g_292 p_805->g_297 p_805->g_321 p_805->g_123 p_805->g_122 p_805->g_395 p_805->g_410 p_805->g_422 p_805->g_291 p_805->g_683
 */
int32_t * func_37(uint8_t  p_38, int8_t * p_39, int32_t * p_40, uint32_t  p_41, struct S3 * p_805)
{ /* block id: 24 */
    int32_t l_75 = 1L;
    int8_t *l_130[3];
    uint64_t l_131 = 0x3108C9EE7A1AE2F9L;
    int32_t *l_603 = &p_805->g_169;
    VECTOR(int8_t, 16) l_656 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 4L), 4L), 4L, (-9L), 4L, (VECTOR(int8_t, 2))((-9L), 4L), (VECTOR(int8_t, 2))((-9L), 4L), (-9L), 4L, (-9L), 4L);
    VECTOR(int8_t, 2) l_657 = (VECTOR(int8_t, 2))(1L, (-1L));
    VECTOR(int8_t, 8) l_658 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x3DL), 0x3DL), 0x3DL, (-5L), 0x3DL);
    int32_t l_670 = 0x37DD2C5DL;
    int32_t l_671 = 0x6F15C7EEL;
    int32_t l_673 = 0x0F6BA11EL;
    int32_t l_675[8][3] = {{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L},{0x45A9E207L,0x45A9E207L,0L}};
    int32_t *l_682[10][5][5] = {{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}},{{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0},{&l_675[7][0],&l_675[5][1],&l_75,&l_671,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_130[i] = &p_805->g_49;
    for (p_805->g_30 = 0; (p_805->g_30 == 17); p_805->g_30 = safe_add_func_int8_t_s_s(p_805->g_30, 2))
    { /* block id: 27 */
        int32_t l_58 = (-1L);
        int32_t l_290 = 0x333DBD07L;
        for (p_805->g_25 = 0; (p_805->g_25 != 15); p_805->g_25 = safe_add_func_uint8_t_u_u(p_805->g_25, 1))
        { /* block id: 30 */
            uint64_t l_127 = 18446744073709551615UL;
            uint16_t *l_132 = (void*)0;
            uint16_t *l_600 = &p_805->g_187;
            if (l_58)
                break;
            l_603 = func_59(((((*l_600) = (func_64(func_66(func_69(p_39, ((((safe_rshift_func_uint16_t_u_s(((void*)0 != &p_805->g_3), ((p_805->g_7[0][7] = p_805->g_30) , l_75))) , (func_76(p_39, (((l_127 ^= func_81(p_805->g_49, p_805)) && (safe_mul_func_int16_t_s_s((((*p_40) &= ((~(l_130[0] != l_130[1])) >= p_805->g_45.w)) == 0x4A11B3ACL), l_131))) , l_132), p_805->g_comm_values[p_805->tid], &p_805->g_30, p_805) , 0x6F2A36DCL)) && p_38) < l_290), p_805->g_291, p_805), p_805->g_395, p_805), p_805) , l_127)) == GROUP_DIVERGE(1, 1)) | p_805->g_30), p_38, p_805->g_601, p_41, p_805);
        }
        if ((atomic_inc(&p_805->g_atomic_input[69 * get_linear_group_id() + 65]) == 5))
        { /* block id: 258 */
            uint64_t l_604 = 0x3402678F5C9537FCL;
            VECTOR(int8_t, 4) l_605 = (VECTOR(int8_t, 4))(0x7EL, (VECTOR(int8_t, 2))(0x7EL, 0x21L), 0x21L);
            VECTOR(int8_t, 16) l_606 = (VECTOR(int8_t, 16))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 0x3FL), 0x3FL), 0x3FL, 0x21L, 0x3FL, (VECTOR(int8_t, 2))(0x21L, 0x3FL), (VECTOR(int8_t, 2))(0x21L, 0x3FL), 0x21L, 0x3FL, 0x21L, 0x3FL);
            VECTOR(int8_t, 16) l_607 = (VECTOR(int8_t, 16))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x31L), 0x31L), 0x31L, 0x16L, 0x31L, (VECTOR(int8_t, 2))(0x16L, 0x31L), (VECTOR(int8_t, 2))(0x16L, 0x31L), 0x16L, 0x31L, 0x16L, 0x31L);
            VECTOR(int8_t, 4) l_608 = (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 2L), 2L);
            VECTOR(int8_t, 16) l_609 = (VECTOR(int8_t, 16))(0x4FL, (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, 0x0BL), 0x0BL), 0x0BL, 0x4FL, 0x0BL, (VECTOR(int8_t, 2))(0x4FL, 0x0BL), (VECTOR(int8_t, 2))(0x4FL, 0x0BL), 0x4FL, 0x0BL, 0x4FL, 0x0BL);
            int32_t l_610 = (-7L);
            uint8_t l_611 = 0x8FL;
            int32_t l_612 = 0x31A84925L;
            VECTOR(int16_t, 8) l_613 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x28C1L), 0x28C1L), 0x28C1L, 1L, 0x28C1L);
            VECTOR(int16_t, 8) l_614 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 7L), 7L), 7L, (-1L), 7L);
            VECTOR(int16_t, 16) l_615 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x2982L), 0x2982L), 0x2982L, 9L, 0x2982L, (VECTOR(int16_t, 2))(9L, 0x2982L), (VECTOR(int16_t, 2))(9L, 0x2982L), 9L, 0x2982L, 9L, 0x2982L);
            uint8_t l_616 = 0x44L;
            VECTOR(int16_t, 16) l_617 = (VECTOR(int16_t, 16))(0x385BL, (VECTOR(int16_t, 4))(0x385BL, (VECTOR(int16_t, 2))(0x385BL, (-7L)), (-7L)), (-7L), 0x385BL, (-7L), (VECTOR(int16_t, 2))(0x385BL, (-7L)), (VECTOR(int16_t, 2))(0x385BL, (-7L)), 0x385BL, (-7L), 0x385BL, (-7L));
            VECTOR(int16_t, 2) l_618 = (VECTOR(int16_t, 2))(1L, 0L);
            int32_t l_619 = 0x134E3CC9L;
            int8_t l_620 = 0x45L;
            int16_t l_621 = 0L;
            VECTOR(int16_t, 4) l_622 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-3L)), (-3L));
            int32_t l_623 = 0x28817609L;
            int32_t l_624 = (-8L);
            int8_t l_625 = 5L;
            uint16_t l_626 = 0UL;
            uint32_t l_627[7] = {0x91053611L,1UL,0x91053611L,0x91053611L,1UL,0x91053611L,0x91053611L};
            int i;
            l_627[3] = (l_604 , (((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(7L, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_605.zzyx)).zywwwyxxwwxyzyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(0x45L, 0x75L)), ((VECTOR(int8_t, 4))((-6L), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_606.s6b937522)).s02, ((VECTOR(int8_t, 4))(l_607.s1976)).even, ((VECTOR(int8_t, 2))(0x3BL, (-1L)))))), (-7L))).lo))))).xxxxxxyyyyxyxxyy))), ((VECTOR(int8_t, 4))(l_608.wwwx)).xzxzyywzwyywxwxx))).odd)).s43, ((VECTOR(int8_t, 4))(l_609.s61b6)).odd))).yxyy, ((VECTOR(uint8_t, 4))((l_611 = l_610), 8UL, 0x14L, 1UL))))), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))((-4L), l_612, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_613.s50)).xyxyxyxyxxyyxxyy)).s00ad))), 0x633AL, 0x5160L)).s25, ((VECTOR(int16_t, 4))(l_614.s4260)).even))).yxyyxxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_615.sab8b)).hi)))).yxxxyxxx))), l_616, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_617.s32e51e05)).s7351713307647306)).s15)).yyxx)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))((-1L), (-1L))), ((VECTOR(int16_t, 16))(l_618.xyyxyxyxxyyxyxyy)).sb4))), (-8L))), (int16_t)(-7L), (int16_t)(l_621 = (l_620 |= l_619))))).s8af8, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(0x586AL, 0L))))), 1L, 0x6290L))))), (-6L), ((VECTOR(int16_t, 4))(l_622.wyzw)).z, l_623, (-8L), l_624, 0L, 9L)).sb5b3)), l_625, (-8L), (-1L), 0x6B8BL)).s4353341236160447, ((VECTOR(int16_t, 16))(0x7D49L))))).s01, ((VECTOR(int16_t, 2))(1L))))).xxyxxyyyxyxyyxyy, ((VECTOR(uint16_t, 16))(0UL))))).even, ((VECTOR(int32_t, 8))((-1L)))))).s4007523444433104, ((VECTOR(uint32_t, 16))(4294967295UL))))).s7 , l_626));
            unsigned int result = 0;
            result += l_604;
            result += l_605.w;
            result += l_605.z;
            result += l_605.y;
            result += l_605.x;
            result += l_606.sf;
            result += l_606.se;
            result += l_606.sd;
            result += l_606.sc;
            result += l_606.sb;
            result += l_606.sa;
            result += l_606.s9;
            result += l_606.s8;
            result += l_606.s7;
            result += l_606.s6;
            result += l_606.s5;
            result += l_606.s4;
            result += l_606.s3;
            result += l_606.s2;
            result += l_606.s1;
            result += l_606.s0;
            result += l_607.sf;
            result += l_607.se;
            result += l_607.sd;
            result += l_607.sc;
            result += l_607.sb;
            result += l_607.sa;
            result += l_607.s9;
            result += l_607.s8;
            result += l_607.s7;
            result += l_607.s6;
            result += l_607.s5;
            result += l_607.s4;
            result += l_607.s3;
            result += l_607.s2;
            result += l_607.s1;
            result += l_607.s0;
            result += l_608.w;
            result += l_608.z;
            result += l_608.y;
            result += l_608.x;
            result += l_609.sf;
            result += l_609.se;
            result += l_609.sd;
            result += l_609.sc;
            result += l_609.sb;
            result += l_609.sa;
            result += l_609.s9;
            result += l_609.s8;
            result += l_609.s7;
            result += l_609.s6;
            result += l_609.s5;
            result += l_609.s4;
            result += l_609.s3;
            result += l_609.s2;
            result += l_609.s1;
            result += l_609.s0;
            result += l_610;
            result += l_611;
            result += l_612;
            result += l_613.s7;
            result += l_613.s6;
            result += l_613.s5;
            result += l_613.s4;
            result += l_613.s3;
            result += l_613.s2;
            result += l_613.s1;
            result += l_613.s0;
            result += l_614.s7;
            result += l_614.s6;
            result += l_614.s5;
            result += l_614.s4;
            result += l_614.s3;
            result += l_614.s2;
            result += l_614.s1;
            result += l_614.s0;
            result += l_615.sf;
            result += l_615.se;
            result += l_615.sd;
            result += l_615.sc;
            result += l_615.sb;
            result += l_615.sa;
            result += l_615.s9;
            result += l_615.s8;
            result += l_615.s7;
            result += l_615.s6;
            result += l_615.s5;
            result += l_615.s4;
            result += l_615.s3;
            result += l_615.s2;
            result += l_615.s1;
            result += l_615.s0;
            result += l_616;
            result += l_617.sf;
            result += l_617.se;
            result += l_617.sd;
            result += l_617.sc;
            result += l_617.sb;
            result += l_617.sa;
            result += l_617.s9;
            result += l_617.s8;
            result += l_617.s7;
            result += l_617.s6;
            result += l_617.s5;
            result += l_617.s4;
            result += l_617.s3;
            result += l_617.s2;
            result += l_617.s1;
            result += l_617.s0;
            result += l_618.y;
            result += l_618.x;
            result += l_619;
            result += l_620;
            result += l_621;
            result += l_622.w;
            result += l_622.z;
            result += l_622.y;
            result += l_622.x;
            result += l_623;
            result += l_624;
            result += l_625;
            result += l_626;
            int l_627_i0;
            for (l_627_i0 = 0; l_627_i0 < 7; l_627_i0++) {
                result += l_627[l_627_i0];
            }
            atomic_add(&p_805->g_special_values[69 * get_linear_group_id() + 65], result);
        }
        else
        { /* block id: 263 */
            (1 + 1);
        }
    }
    if ((~(*l_603)))
    { /* block id: 267 */
        return &p_805->g_3;
    }
    else
    { /* block id: 269 */
        int32_t *l_632 = &p_805->g_256;
        VECTOR(uint32_t, 2) l_649 = (VECTOR(uint32_t, 2))(4294967292UL, 1UL);
        uint32_t *l_659[7][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_660 = 0x512C38CCL;
        uint8_t *l_661 = &p_805->g_273;
        int32_t l_662 = 0x28A07257L;
        int32_t *l_663 = &l_75;
        int32_t *l_664 = &p_805->g_169;
        int32_t *l_665 = (void*)0;
        int32_t *l_666 = &l_75;
        int32_t *l_667 = &p_805->g_292[4];
        int32_t *l_668 = &p_805->g_169;
        int32_t *l_669[3][7] = {{&l_660,&l_660,&l_660,&l_660,&l_660,&l_660,&l_660},{&l_660,&l_660,&l_660,&l_660,&l_660,&l_660,&l_660},{&l_660,&l_660,&l_660,&l_660,&l_660,&l_660,&l_660}};
        int32_t l_672 = 0x30D7B614L;
        int32_t l_674 = 0x06777554L;
        uint16_t l_676 = 0x9902L;
        uint8_t l_679 = 255UL;
        int i, j, k;
        (*l_663) |= ((safe_unary_minus_func_int8_t_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_805->g_631.s20)).yyxyxxxxxyyyxxyy)).sd8)), (uint16_t)7UL))).hi, (l_632 == (void*)0))))) > ((l_662 = ((safe_mul_func_uint8_t_u_u((*l_603), (safe_div_func_int8_t_s_s(((*p_39) & (p_38 = (safe_add_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s((1L < ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(p_805->g_641.yw)), ((VECTOR(uint32_t, 2))(0x3061F92DL, 0xFC815DA4L))))))).even), ((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_805->group_2_offset, get_group_id(2), 10), (safe_add_func_int32_t_s_s((((GROUP_DIVERGE(2, 1) >= ((((*l_661) = (((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(0L, (-4L))), ((VECTOR(int16_t, 2))(0x0E2AL, 1L)), ((VECTOR(int16_t, 2))(p_805->g_646.s1f))))))).lo == ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_649.yy)).even, (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_38, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(p_805->g_654.zwwwyywyxwxwzywx)), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_805->g_655.s2446)).lo)).yxyxyyxxyxxyyyxx)))).hi))).s65, (int8_t)(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_656.sae)).xxyyyyyxxyxxxxxx, ((VECTOR(int8_t, 16))(l_657.yyyyxyyyxxyxyxyy))))).s9 <= p_805->g_comm_values[p_805->tid])))).xxyyxxyyyxxyxyxy))).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_658.s14504465)).even)).yyxyzxxw))).s2431303410410703)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x2AL, 0x50L)).yyxxyxyx)).s3217110407034503))))).sa)), (l_660 = (*l_603)))))) , p_805->g_292[0])) != p_805->g_51.x) <= 0x656FD60FL)) == l_649.x) >= 0x7626B94BD6A73940L)) & p_805->g_196.y) < l_649.x), GROUP_DIVERGE(0, 1))))) , l_649.x))) >= (*l_603)) != (-1L)), (*l_603))))), 0x3DL)))) , 0x2AD9243DAE8B1D6BL)) | p_805->g_297));
        (*p_40) = 0L;
        --l_676;
        l_679++;
    }
    ++p_805->g_683;
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_59(int64_t  p_60, uint16_t  p_61, int8_t * p_62, int64_t  p_63, struct S3 * p_805)
{ /* block id: 253 */
    return &p_805->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_252
 * writes: p_805->g_291
 */
union U0  func_64(int8_t * p_65, struct S3 * p_805)
{ /* block id: 248 */
    int32_t *l_588 = (void*)0;
    int32_t *l_589 = &p_805->g_292[4];
    int32_t *l_590 = &p_805->g_292[5];
    int32_t *l_591 = &p_805->g_169;
    int32_t *l_592 = &p_805->g_292[2];
    int32_t *l_593 = &p_805->g_169;
    int32_t *l_594 = &p_805->g_292[0];
    int32_t *l_595[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_596 = (-1L);
    uint8_t l_597 = 4UL;
    int i;
    l_597--;
    p_805->g_291 = &p_805->g_292[6];
    return p_805->g_252;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_122 p_805->g_7 p_805->g_285 p_805->g_49 p_805->g_105 p_805->g_291 p_805->g_292 p_805->g_196 p_805->g_169 p_805->g_51 p_805->g_323.f0 p_805->g_252.f0 p_805->g_395
 * writes: p_805->g_122 p_805->g_395 p_805->g_410 p_805->g_49 p_805->g_292 p_805->g_297 p_805->g_422 p_805->g_169 p_805->g_323.f0 p_805->g_187 p_805->g_124
 */
int8_t * func_66(uint16_t * p_67, int8_t * p_68, struct S3 * p_805)
{ /* block id: 153 */
    uint16_t l_398 = 1UL;
    VECTOR(int32_t, 8) l_401 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x2BB80352L), 0x2BB80352L), 0x2BB80352L, 7L, 0x2BB80352L);
    int8_t **l_408 = &p_805->g_395;
    int8_t *l_409 = &p_805->g_162;
    int8_t *l_413 = &p_805->g_49;
    union U0 l_414 = {4294967295UL};
    union U0 *l_415 = (void*)0;
    union U0 *l_416 = &l_414;
    uint32_t *l_417 = (void*)0;
    uint32_t *l_418 = (void*)0;
    uint32_t *l_419 = (void*)0;
    uint32_t *l_420 = (void*)0;
    uint32_t *l_421 = &p_805->g_297;
    int32_t *l_423 = &p_805->g_169;
    VECTOR(int64_t, 4) l_434 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 4L), 4L);
    uint64_t *l_435 = &p_805->g_323.f0;
    int16_t l_438 = (-1L);
    int i;
    for (p_805->g_122 = 0; (p_805->g_122 > 0); p_805->g_122++)
    { /* block id: 156 */
        if (l_398)
            break;
    }
    (*l_423) ^= (((VECTOR(int64_t, 2))(1L, (-1L))).lo <= (safe_mul_func_uint16_t_u_u(0x81B0L, ((l_398 , (p_805->g_422 = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_401.s34361647)))).s6 ^ ((*l_421) = (safe_rshift_func_int16_t_s_u(((p_805->g_7[2][2] , p_67) != &l_398), (safe_add_func_int32_t_s_s(((*p_805->g_291) &= ((safe_mul_func_int16_t_s_s(((l_409 = ((*l_408) = p_68)) == (p_805->g_410 = p_68)), (safe_mod_func_uint8_t_u_u((((*l_413) &= p_805->g_285) != (((*l_416) = l_414) , l_398)), p_805->g_105.w)))) < (-1L))), p_805->g_196.y)))))) , &p_805->g_297))) != (void*)0))));
    if ((safe_lshift_func_int16_t_s_u((((*l_413) = (*l_423)) < ((safe_mul_func_uint16_t_u_u((*l_423), 0xE309L)) | ((*l_423) <= (((((8L || (((p_805->g_51.y < ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((-10L), 0x0A85E2C5DC4A6E4DL, (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((*l_435) |= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(l_434.zw)), 5L)).yzwzzwzyyzwwxwzx)))).s4d))), 1L, 0x69C44813DAC8FD31L)).even)).xxxxyxxy)).s3 > GROUP_DIVERGE(2, 1))), (p_805->g_105.x , (*l_423)))), (((safe_rshift_func_int16_t_s_s((&p_805->g_291 == &l_423), 0)) != p_805->g_252.f0) , 4294967289UL))), 0x9A8CDD42L)), 0x233D357AA4B5FE86L, (-1L), 0x634C0C42F9B26B45L, 0L, 0x70C2A9477FD62610L)).s63)).even) , l_438) < (-7L))) > 0x6D0E1C11DC48B89DL) < (*l_423)) >= (*l_423)) > (*l_423))))), p_805->g_292[0])))
    { /* block id: 170 */
        uint32_t **l_442 = &l_420;
        uint32_t ***l_441 = &l_442;
        int32_t l_443 = 0x16D78CCDL;
        uint64_t l_446 = 1UL;
        int16_t *l_447 = (void*)0;
        int16_t *l_448 = &l_438;
        (*l_423) = (((*p_67) = ((p_805->g_169 || (&p_805->g_422 == ((*l_441) = (void*)0))) > (*l_423))) < (l_443 , ((*l_448) = ((safe_lshift_func_int8_t_s_u(((*l_413) |= (*l_423)), ((l_446 ^ (!255UL)) != 0x0088L))) ^ l_443))));
    }
    else
    { /* block id: 176 */
        if ((atomic_inc(&p_805->g_atomic_input[69 * get_linear_group_id() + 11]) == 3))
        { /* block id: 178 */
            int32_t l_449 = 0x12442860L;
            int32_t l_546 = (-6L);
            int32_t l_547 = (-1L);
            int32_t l_548 = 5L;
            int64_t l_549 = (-1L);
            uint16_t l_550 = 0UL;
            int32_t *l_553 = (void*)0;
            for (l_449 = 20; (l_449 > (-6)); l_449--)
            { /* block id: 181 */
                int16_t l_452 = 0x3A29L;
                int32_t l_454 = 0L;
                int32_t *l_453[7][1][4] = {{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454}}};
                int32_t *l_455 = &l_454;
                int32_t l_456 = (-1L);
                int i, j, k;
                l_452 |= (-1L);
                l_455 = l_453[4][0][0];
                if ((l_456 = (-1L)))
                { /* block id: 185 */
                    int32_t l_457[2][5];
                    uint16_t l_463 = 65530UL;
                    uint32_t **l_464 = (void*)0;
                    uint32_t **l_465 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_457[i][j] = 0L;
                    }
                    for (l_457[0][4] = 0; (l_457[0][4] < 17); ++l_457[0][4])
                    { /* block id: 188 */
                        uint8_t l_460 = 0xF8L;
                        ++l_460;
                    }
                    l_457[1][4] = l_463;
                    l_464 = (l_465 = l_464);
                    for (l_457[1][1] = 0; (l_457[1][1] == 20); ++l_457[1][1])
                    { /* block id: 196 */
                        int16_t l_468 = 8L;
                        int8_t l_469 = (-1L);
                        uint32_t l_470 = 0UL;
                        uint32_t l_471 = 1UL;
                        uint32_t l_472 = 0xA632A503L;
                        int8_t l_473 = (-1L);
                        VECTOR(uint32_t, 4) l_474 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x8155736CL), 0x8155736CL);
                        uint32_t l_475 = 0x5AC4D55FL;
                        int64_t **l_476[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                        int64_t **l_477 = (void*)0;
                        int i, j;
                        l_469 |= l_468;
                        l_473 = (l_470 , (FAKE_DIVERGE(p_805->local_2_offset, get_local_id(2), 10) , ((l_471 , l_472) , 3L)));
                        l_477 = (l_476[0][0] = (((VECTOR(uint32_t, 8))(l_474.yyyzwwwz)).s0 , (l_475 , (void*)0)));
                    }
                }
                else
                { /* block id: 202 */
                    VECTOR(int32_t, 2) l_478 = (VECTOR(int32_t, 2))(0x300B665AL, 6L);
                    uint32_t l_479 = 0x5F067BCBL;
                    VECTOR(int32_t, 16) l_480 = (VECTOR(int32_t, 16))(0x4750AC79L, (VECTOR(int32_t, 4))(0x4750AC79L, (VECTOR(int32_t, 2))(0x4750AC79L, 0x15524F03L), 0x15524F03L), 0x15524F03L, 0x4750AC79L, 0x15524F03L, (VECTOR(int32_t, 2))(0x4750AC79L, 0x15524F03L), (VECTOR(int32_t, 2))(0x4750AC79L, 0x15524F03L), 0x4750AC79L, 0x15524F03L, 0x4750AC79L, 0x15524F03L);
                    int32_t l_481 = 0L;
                    VECTOR(int8_t, 2) l_482 = (VECTOR(int8_t, 2))(0x19L, 0x77L);
                    VECTOR(int8_t, 2) l_483 = (VECTOR(int8_t, 2))(0x05L, 0x2BL);
                    VECTOR(uint8_t, 4) l_484 = (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 255UL), 255UL);
                    VECTOR(uint16_t, 8) l_485 = (VECTOR(uint16_t, 8))(0x39EDL, (VECTOR(uint16_t, 4))(0x39EDL, (VECTOR(uint16_t, 2))(0x39EDL, 5UL), 5UL), 5UL, 0x39EDL, 5UL);
                    VECTOR(int32_t, 4) l_486 = (VECTOR(int32_t, 4))(0x1137A466L, (VECTOR(int32_t, 2))(0x1137A466L, 5L), 5L);
                    uint32_t l_487[3][10][7] = {{{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L}},{{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L}},{{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L},{0x738AFC32L,4294967292UL,4294967292UL,0x738AFC32L,0x163BD929L,0x54032D59L,0xDE71B962L}}};
                    VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x04B61725L), 0x04B61725L), 0x04B61725L, 1L, 0x04B61725L, (VECTOR(int32_t, 2))(1L, 0x04B61725L), (VECTOR(int32_t, 2))(1L, 0x04B61725L), 1L, 0x04B61725L, 1L, 0x04B61725L);
                    VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(0x7B1CC5B0L, (VECTOR(int32_t, 2))(0x7B1CC5B0L, 1L), 1L);
                    VECTOR(int32_t, 4) l_490 = (VECTOR(int32_t, 4))(0x6A4C2EDAL, (VECTOR(int32_t, 2))(0x6A4C2EDAL, 6L), 6L);
                    VECTOR(int32_t, 16) l_491 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0AB0D36DL), 0x0AB0D36DL), 0x0AB0D36DL, 0L, 0x0AB0D36DL, (VECTOR(int32_t, 2))(0L, 0x0AB0D36DL), (VECTOR(int32_t, 2))(0L, 0x0AB0D36DL), 0L, 0x0AB0D36DL, 0L, 0x0AB0D36DL);
                    VECTOR(int32_t, 8) l_492 = (VECTOR(int32_t, 8))(0x6CBBBB62L, (VECTOR(int32_t, 4))(0x6CBBBB62L, (VECTOR(int32_t, 2))(0x6CBBBB62L, 0x023697F7L), 0x023697F7L), 0x023697F7L, 0x6CBBBB62L, 0x023697F7L);
                    VECTOR(int32_t, 16) l_493 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x52EB056FL), 0x52EB056FL), 0x52EB056FL, 1L, 0x52EB056FL, (VECTOR(int32_t, 2))(1L, 0x52EB056FL), (VECTOR(int32_t, 2))(1L, 0x52EB056FL), 1L, 0x52EB056FL, 1L, 0x52EB056FL);
                    VECTOR(int32_t, 2) l_494 = (VECTOR(int32_t, 2))((-1L), (-1L));
                    VECTOR(int32_t, 16) l_495 = (VECTOR(int32_t, 16))(0x7B3CB56FL, (VECTOR(int32_t, 4))(0x7B3CB56FL, (VECTOR(int32_t, 2))(0x7B3CB56FL, 0x7FC50532L), 0x7FC50532L), 0x7FC50532L, 0x7B3CB56FL, 0x7FC50532L, (VECTOR(int32_t, 2))(0x7B3CB56FL, 0x7FC50532L), (VECTOR(int32_t, 2))(0x7B3CB56FL, 0x7FC50532L), 0x7B3CB56FL, 0x7FC50532L, 0x7B3CB56FL, 0x7FC50532L);
                    VECTOR(int32_t, 2) l_496 = (VECTOR(int32_t, 2))((-4L), 5L);
                    VECTOR(int32_t, 2) l_497 = (VECTOR(int32_t, 2))(9L, 0x55EF3E9BL);
                    VECTOR(int32_t, 8) l_498 = (VECTOR(int32_t, 8))(0x64E3531BL, (VECTOR(int32_t, 4))(0x64E3531BL, (VECTOR(int32_t, 2))(0x64E3531BL, (-4L)), (-4L)), (-4L), 0x64E3531BL, (-4L));
                    uint32_t l_499 = 0xF8D1690FL;
                    VECTOR(int16_t, 8) l_500 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x13F7L), 0x13F7L), 0x13F7L, 0L, 0x13F7L);
                    VECTOR(uint16_t, 16) l_501 = (VECTOR(uint16_t, 16))(0xF5BAL, (VECTOR(uint16_t, 4))(0xF5BAL, (VECTOR(uint16_t, 2))(0xF5BAL, 65535UL), 65535UL), 65535UL, 0xF5BAL, 65535UL, (VECTOR(uint16_t, 2))(0xF5BAL, 65535UL), (VECTOR(uint16_t, 2))(0xF5BAL, 65535UL), 0xF5BAL, 65535UL, 0xF5BAL, 65535UL);
                    int32_t l_502 = (-1L);
                    uint64_t l_503[3][6] = {{18446744073709551615UL,18446744073709551615UL,1UL,3UL,0x07AAFB5B868FDC3AL,3UL},{18446744073709551615UL,18446744073709551615UL,1UL,3UL,0x07AAFB5B868FDC3AL,3UL},{18446744073709551615UL,18446744073709551615UL,1UL,3UL,0x07AAFB5B868FDC3AL,3UL}};
                    uint32_t l_504 = 0x1BDBA0B3L;
                    VECTOR(uint16_t, 4) l_505 = (VECTOR(uint16_t, 4))(0x3EE6L, (VECTOR(uint16_t, 2))(0x3EE6L, 0UL), 0UL);
                    VECTOR(uint16_t, 8) l_506 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xE2C3L), 0xE2C3L), 0xE2C3L, 7UL, 0xE2C3L);
                    VECTOR(uint16_t, 2) l_507 = (VECTOR(uint16_t, 2))(0UL, 0xDE54L);
                    VECTOR(uint16_t, 2) l_508 = (VECTOR(uint16_t, 2))(0xC9BEL, 0xBF25L);
                    VECTOR(uint8_t, 2) l_509 = (VECTOR(uint8_t, 2))(0x6EL, 0xFFL);
                    VECTOR(uint8_t, 2) l_510 = (VECTOR(uint8_t, 2))(255UL, 1UL);
                    VECTOR(uint8_t, 16) l_511 = (VECTOR(uint8_t, 16))(0x1BL, (VECTOR(uint8_t, 4))(0x1BL, (VECTOR(uint8_t, 2))(0x1BL, 0xF0L), 0xF0L), 0xF0L, 0x1BL, 0xF0L, (VECTOR(uint8_t, 2))(0x1BL, 0xF0L), (VECTOR(uint8_t, 2))(0x1BL, 0xF0L), 0x1BL, 0xF0L, 0x1BL, 0xF0L);
                    VECTOR(uint8_t, 8) l_512 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0xA0L), 0xA0L), 0xA0L, 250UL, 0xA0L);
                    VECTOR(uint8_t, 16) l_513 = (VECTOR(uint8_t, 16))(0xCEL, (VECTOR(uint8_t, 4))(0xCEL, (VECTOR(uint8_t, 2))(0xCEL, 255UL), 255UL), 255UL, 0xCEL, 255UL, (VECTOR(uint8_t, 2))(0xCEL, 255UL), (VECTOR(uint8_t, 2))(0xCEL, 255UL), 0xCEL, 255UL, 0xCEL, 255UL);
                    VECTOR(uint8_t, 16) l_514 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF8L), 0xF8L), 0xF8L, 0UL, 0xF8L, (VECTOR(uint8_t, 2))(0UL, 0xF8L), (VECTOR(uint8_t, 2))(0UL, 0xF8L), 0UL, 0xF8L, 0UL, 0xF8L);
                    uint16_t l_515 = 1UL;
                    int64_t l_516 = (-8L);
                    int32_t l_517 = 0x256B6283L;
                    uint32_t l_518 = 0x1C9CDA68L;
                    uint32_t l_519 = 0x8F2ED280L;
                    int32_t l_520 = 0L;
                    int16_t l_521[5];
                    int8_t l_522 = 5L;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_521[i] = 0L;
                    if (((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_478.xy)).xxxx, ((VECTOR(int32_t, 16))(l_479, ((VECTOR(int32_t, 8))(l_480.s0ed60faa)), 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x75L, 1L)), (-1L), 0x27L, 0x27L, 0x7AL, 0x4EL, 0x2AL)).odd, (int8_t)l_481))).even, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(l_482.xxxxyxyx)).s2343266072010323))).s4a, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_483.xy)).yyyx)).odd))).yyxy, ((VECTOR(uint8_t, 4))(l_484.yyxy))))).even, ((VECTOR(uint16_t, 2))(l_485.s70))))), 0x0A83DD64L, 0x72146CE4L)), (-3L), (-9L))).s568e, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_486.zzzyzyxwwwyzxyyx)).sa3, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0x3E9ACBB1L, l_487[0][2][3], 0x2AE72FB9L, 7L)).yxwyyywy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(l_488.sdf65da8d)).s64, ((VECTOR(int32_t, 4))(l_489.wxwz)).odd))).xxxxxxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_490.yxyw)).yxxzxwwwyzyyyyxw)), ((VECTOR(int32_t, 16))(l_491.sf3611b2c5614742b))))).sc59e, ((VECTOR(int32_t, 2))(l_492.s23)).xyyx, ((VECTOR(int32_t, 16))(l_493.sfaf56826b681ce33)).sd972))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_494.yyyy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_495.s29)))), 0x155AC5DAL, 0x4B7E9292L)).s71))))).yxyy, ((VECTOR(int32_t, 2))(0x348208C4L, 0x39690293L)).xxyy))))).even, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_496.xy)), ((VECTOR(int32_t, 4))(l_497.yyyy)).even)))))), ((VECTOR(int32_t, 8))(l_498.s15757726)).s3, l_499, 0x0F8DE748L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(0x1834A58DL, 0L, 0x70B84F39L, (-1L))).hi, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_500.s56404726)))).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x2E37L, (l_503[2][2] = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_501.sdb)))).xyyyxxyx, (uint16_t)(l_502 |= 0x59EAL)))).s7623463077676466)).s7), 0xEDE8L, l_504, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 5UL)), 0UL, 0xBF9AL, ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_505.zw)).yyxyxxyxxxxxxxyy)).sfa))), 65527UL, 0x7E54L)).s72)), 5UL, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x20E0L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_506.s7645243225650313)).sfa39)), 0x2265L, 65528UL, 0xBEAAL)).s5434326033646404)).s63, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(l_507.xxxyyxyxyxyxxyxy)).sb8, (uint16_t)((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(65531UL, 0x15F1L, 1UL, 0x7E17L)).hi, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_508.yyyxyyxx)).s2265370312312240, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(0x05L, ((VECTOR(uint8_t, 4))(l_509.yyyy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_510.yxyxyyyyyyxxyxyx)).sc1)))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(l_511.s7c)), ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(l_512.s1172453707111223)).s45ba, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_513.sf0)), 255UL, 0UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(0x5AL, 1UL, ((VECTOR(uint8_t, 2))(0xAAL, 253UL)), 4UL, FAKE_DIVERGE(p_805->local_1_offset, get_local_id(1), 10), 2UL, 0x89L)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_514.s71e3b8af1e28275d)).odd)).s4625733070004531, ((VECTOR(uint8_t, 2))(255UL, 0xA1L)).yyyyyyxxyyyxxyyy))).s6e)), 0x50L, 0x2AL)).wyzywwzxwwwzywzy)).s513b))).ywwwyzwxwxzwywzw)).lo)), 0xA8L, ((VECTOR(uint8_t, 16))(l_515, ((VECTOR(uint8_t, 2))(9UL)), ((VECTOR(uint8_t, 4))(0x2FL)), 246UL, ((VECTOR(uint8_t, 2))(0xA4L)), 255UL, ((VECTOR(uint8_t, 2))(0x63L)), l_516, 253UL, 0x66L)).sb, 0x5FL, 0x51L)).sf69e)).odd, (uint8_t)l_517, (uint8_t)l_518))).xyxx, ((VECTOR(uint8_t, 4))(254UL)))))))), ((VECTOR(uint8_t, 4))(0x7FL)), ((VECTOR(uint8_t, 4))(0x95L))))).hi))).yyxyxxyy)), 0x1AL)), (uint8_t)FAKE_DIVERGE(p_805->global_0_offset, get_global_id(0), 10)))).hi, ((VECTOR(uint8_t, 8))(0xEAL)), ((VECTOR(uint8_t, 8))(0x84L))))), ((VECTOR(uint8_t, 8))(255UL))))).s02, ((VECTOR(uint16_t, 2))(1UL))))).yyxxyxxy, (uint16_t)l_519))).s6204703710747423))).see))).lo)))))))), l_520, 1UL, ((VECTOR(uint16_t, 2))(0xA38FL)), l_521[1], 0xAE6DL, 0UL)).sa7)).xyxy))))).zywwwyywzxxzwzxz)).seb5b)).ywxwzzxx, ((VECTOR(int32_t, 8))(0L))))).even, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(1L))))).odd))))), 0x36CE2DFAL))))), ((VECTOR(int32_t, 8))((-7L)))))), 0x3C4FE1A9L, ((VECTOR(int32_t, 4))(0x0A473685L)), l_522, 0x2D691A33L, 0x793EEF4CL)).sa6)).xyyx)).zwxxyxww, ((VECTOR(int32_t, 8))((-8L)))))).s45))), ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 2))(0x2A8007A9L))))).xxxy))).yywxxzxy))).s4032342626410720)).s1408))))).xzzwwzwx)), ((VECTOR(int32_t, 8))(7L))))).s6)
                    { /* block id: 205 */
                        int16_t l_523 = 0x3CC2L;
                        int32_t *l_524[1][3];
                        VECTOR(int32_t, 2) l_525 = (VECTOR(int32_t, 2))((-10L), 0x074656FEL);
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_524[i][j] = (void*)0;
                        }
                        l_455 = (l_523 , l_524[0][1]);
                        l_525.y &= 0x5FF76FFAL;
                    }
                    else
                    { /* block id: 208 */
                        uint8_t l_526 = 250UL;
                        int64_t l_527 = (-5L);
                        VECTOR(int32_t, 16) l_528 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                        VECTOR(int32_t, 16) l_529 = (VECTOR(int32_t, 16))(0x49193CF7L, (VECTOR(int32_t, 4))(0x49193CF7L, (VECTOR(int32_t, 2))(0x49193CF7L, 0x6B561A30L), 0x6B561A30L), 0x6B561A30L, 0x49193CF7L, 0x6B561A30L, (VECTOR(int32_t, 2))(0x49193CF7L, 0x6B561A30L), (VECTOR(int32_t, 2))(0x49193CF7L, 0x6B561A30L), 0x49193CF7L, 0x6B561A30L, 0x49193CF7L, 0x6B561A30L);
                        VECTOR(int32_t, 4) l_530 = (VECTOR(int32_t, 4))(0x05874A23L, (VECTOR(int32_t, 2))(0x05874A23L, 8L), 8L);
                        VECTOR(int32_t, 4) l_531 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x372B97C1L), 0x372B97C1L);
                        uint8_t l_532 = 0x2EL;
                        VECTOR(uint32_t, 2) l_533 = (VECTOR(uint32_t, 2))(0x668554A1L, 0UL);
                        uint64_t l_534 = 18446744073709551615UL;
                        int32_t l_535[8][7] = {{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL},{4L,0x482FE10DL,1L,0x482FE10DL,4L,4L,0x482FE10DL}};
                        int32_t l_536 = 0x3E788D43L;
                        VECTOR(int32_t, 2) l_537 = (VECTOR(int32_t, 2))(0x6EBF1D86L, (-6L));
                        VECTOR(int32_t, 2) l_538 = (VECTOR(int32_t, 2))((-7L), (-1L));
                        VECTOR(int32_t, 4) l_539 = (VECTOR(int32_t, 4))(0x2A4D967EL, (VECTOR(int32_t, 2))(0x2A4D967EL, (-1L)), (-1L));
                        uint8_t l_540 = 8UL;
                        VECTOR(int32_t, 16) l_541 = (VECTOR(int32_t, 16))(0x25EB6C1EL, (VECTOR(int32_t, 4))(0x25EB6C1EL, (VECTOR(int32_t, 2))(0x25EB6C1EL, 0x759AE7AAL), 0x759AE7AAL), 0x759AE7AAL, 0x25EB6C1EL, 0x759AE7AAL, (VECTOR(int32_t, 2))(0x25EB6C1EL, 0x759AE7AAL), (VECTOR(int32_t, 2))(0x25EB6C1EL, 0x759AE7AAL), 0x25EB6C1EL, 0x759AE7AAL, 0x25EB6C1EL, 0x759AE7AAL);
                        int8_t l_542[4][10] = {{0x1DL,0x1CL,(-1L),0x1CL,(-1L),0x1CL,0x1DL,(-7L),0x0CL,0x0CL},{0x1DL,0x1CL,(-1L),0x1CL,(-1L),0x1CL,0x1DL,(-7L),0x0CL,0x0CL},{0x1DL,0x1CL,(-1L),0x1CL,(-1L),0x1CL,0x1DL,(-7L),0x0CL,0x0CL},{0x1DL,0x1CL,(-1L),0x1CL,(-1L),0x1CL,0x1DL,(-7L),0x0CL,0x0CL}};
                        uint32_t l_543[6][8][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
                        int32_t l_544 = 0x494AEF88L;
                        uint32_t l_545[7][8] = {{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL},{0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL,0x96D9A729L,0x96D9A729L,5UL}};
                        int i, j, k;
                        l_527 = l_526;
                        l_545[6][4] = ((VECTOR(int32_t, 4))((-9L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_528.s51)).xxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_529.sd0)))).yyyy))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_530.zyzzzywwzwwxwyzw)).s2404)).even, ((VECTOR(int32_t, 8))(l_531.xzwwzxxz)).s54, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_532, 0x2DB528E1L, (l_528.s9 ^= ((l_500.s2 = (FAKE_DIVERGE(p_805->local_1_offset, get_local_id(1), 10) , (((VECTOR(uint32_t, 16))(l_533.yxyyyyyxyxxyyxxx)).s0 , l_534))) , (l_536 |= l_535[6][4]))), 0L, 0x1B464D79L, (-5L), 0x39CBF230L, (-1L), ((VECTOR(int32_t, 2))(0x0B805C7EL, 0x2096A540L)), ((VECTOR(int32_t, 4))(l_537.yxxy)), 0x75C83600L, 0x5C8E0338L)).s8e02, ((VECTOR(int32_t, 8))(l_538.yyxxxyxy)).odd))).odd)).yyxxyxyyyyyxyyxy)).s6a))).yxxy, (int32_t)(((VECTOR(int32_t, 4))(l_539.zxzy)).w , 0x25D1D29EL), (int32_t)l_540))).wyxyxxzx)).even, ((VECTOR(int32_t, 2))(l_541.s8c)).yxyx))), l_542[2][7], (l_543[4][1][0] , l_544), 0x58F73341L, 0x2E843C66L)).s24)), 0x2216B22EL)).x;
                    }
                }
            }
            --l_550;
            l_553 = (void*)0;
            unsigned int result = 0;
            result += l_449;
            result += l_546;
            result += l_547;
            result += l_548;
            result += l_549;
            result += l_550;
            atomic_add(&p_805->g_special_values[69 * get_linear_group_id() + 11], result);
        }
        else
        { /* block id: 219 */
            (1 + 1);
        }
        if ((atomic_inc(&p_805->g_atomic_input[69 * get_linear_group_id() + 49]) == 4))
        { /* block id: 223 */
            VECTOR(int32_t, 8) l_554 = (VECTOR(int32_t, 8))(0x76F79AB8L, (VECTOR(int32_t, 4))(0x76F79AB8L, (VECTOR(int32_t, 2))(0x76F79AB8L, 0x12326473L), 0x12326473L), 0x12326473L, 0x76F79AB8L, 0x12326473L);
            int i;
            if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_554.s1630231252006332)).even)).s44)), 0x3D8CE3F3L, 0L)).z)
            { /* block id: 224 */
                int32_t l_556 = 0x39EDD85AL;
                int32_t *l_555 = &l_556;
                int32_t *l_557 = &l_556;
                VECTOR(int32_t, 16) l_558 = (VECTOR(int32_t, 16))(0x07A1FB1AL, (VECTOR(int32_t, 4))(0x07A1FB1AL, (VECTOR(int32_t, 2))(0x07A1FB1AL, 0L), 0L), 0L, 0x07A1FB1AL, 0L, (VECTOR(int32_t, 2))(0x07A1FB1AL, 0L), (VECTOR(int32_t, 2))(0x07A1FB1AL, 0L), 0x07A1FB1AL, 0L, 0x07A1FB1AL, 0L);
                int32_t *l_567 = &l_556;
                int8_t l_568 = 0x1FL;
                uint16_t l_569 = 0UL;
                VECTOR(int32_t, 16) l_570 = (VECTOR(int32_t, 16))(0x3D62355EL, (VECTOR(int32_t, 4))(0x3D62355EL, (VECTOR(int32_t, 2))(0x3D62355EL, 1L), 1L), 1L, 0x3D62355EL, 1L, (VECTOR(int32_t, 2))(0x3D62355EL, 1L), (VECTOR(int32_t, 2))(0x3D62355EL, 1L), 0x3D62355EL, 1L, 0x3D62355EL, 1L);
                VECTOR(int32_t, 16) l_571 = (VECTOR(int32_t, 16))(0x303571EDL, (VECTOR(int32_t, 4))(0x303571EDL, (VECTOR(int32_t, 2))(0x303571EDL, 0x6D365ABAL), 0x6D365ABAL), 0x6D365ABAL, 0x303571EDL, 0x6D365ABAL, (VECTOR(int32_t, 2))(0x303571EDL, 0x6D365ABAL), (VECTOR(int32_t, 2))(0x303571EDL, 0x6D365ABAL), 0x303571EDL, 0x6D365ABAL, 0x303571EDL, 0x6D365ABAL);
                VECTOR(int32_t, 2) l_572 = (VECTOR(int32_t, 2))(0x261D3438L, 0x2C5853F1L);
                VECTOR(int32_t, 2) l_573 = (VECTOR(int32_t, 2))(0x11A0667EL, 0x44D46BF9L);
                VECTOR(int32_t, 2) l_574 = (VECTOR(int32_t, 2))((-4L), (-6L));
                VECTOR(int32_t, 8) l_575 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4FAAEEE3L), 0x4FAAEEE3L), 0x4FAAEEE3L, 0L, 0x4FAAEEE3L);
                VECTOR(int32_t, 2) l_576 = (VECTOR(int32_t, 2))(1L, 0x242DF04CL);
                VECTOR(int32_t, 8) l_577 = (VECTOR(int32_t, 8))(0x7A2077D1L, (VECTOR(int32_t, 4))(0x7A2077D1L, (VECTOR(int32_t, 2))(0x7A2077D1L, 1L), 1L), 1L, 0x7A2077D1L, 1L);
                int8_t l_578 = 1L;
                VECTOR(int32_t, 4) l_579 = (VECTOR(int32_t, 4))(0x6B32C3C7L, (VECTOR(int32_t, 2))(0x6B32C3C7L, 0x40A07B1BL), 0x40A07B1BL);
                VECTOR(int32_t, 16) l_580 = (VECTOR(int32_t, 16))(0x7A65427EL, (VECTOR(int32_t, 4))(0x7A65427EL, (VECTOR(int32_t, 2))(0x7A65427EL, 0x234F4C2AL), 0x234F4C2AL), 0x234F4C2AL, 0x7A65427EL, 0x234F4C2AL, (VECTOR(int32_t, 2))(0x7A65427EL, 0x234F4C2AL), (VECTOR(int32_t, 2))(0x7A65427EL, 0x234F4C2AL), 0x7A65427EL, 0x234F4C2AL, 0x7A65427EL, 0x234F4C2AL);
                VECTOR(int32_t, 8) l_581 = (VECTOR(int32_t, 8))(0x16D52A2DL, (VECTOR(int32_t, 4))(0x16D52A2DL, (VECTOR(int32_t, 2))(0x16D52A2DL, 2L), 2L), 2L, 0x16D52A2DL, 2L);
                VECTOR(int32_t, 2) l_582 = (VECTOR(int32_t, 2))((-1L), (-7L));
                int32_t l_583 = 0x3D132EA1L;
                VECTOR(int32_t, 16) l_584 = (VECTOR(int32_t, 16))(0x759B4AC6L, (VECTOR(int32_t, 4))(0x759B4AC6L, (VECTOR(int32_t, 2))(0x759B4AC6L, (-1L)), (-1L)), (-1L), 0x759B4AC6L, (-1L), (VECTOR(int32_t, 2))(0x759B4AC6L, (-1L)), (VECTOR(int32_t, 2))(0x759B4AC6L, (-1L)), 0x759B4AC6L, (-1L), 0x759B4AC6L, (-1L));
                uint8_t l_585 = 0x8FL;
                VECTOR(uint32_t, 2) l_586 = (VECTOR(uint32_t, 2))(0x7F3AB046L, 0x25C12EF9L);
                int i;
                l_557 = l_555;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_558.s72)).yxxy)).x)
                { /* block id: 226 */
                    int16_t l_559[10];
                    uint16_t l_560 = 0x8132L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_559[i] = 0x4968L;
                    l_560 = l_559[8];
                }
                else
                { /* block id: 228 */
                    int8_t l_561 = 0L;
                    int64_t l_562[3][9][4] = {{{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL}},{{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL}},{{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL},{0x29E157CB4C58D0C5L,0x47E5A046680B4B58L,(-1L),0x7D9309B5267274ACL}}};
                    uint64_t l_563[4][7];
                    uint64_t l_564 = 0x8DF395CAF72B3073L;
                    uint8_t l_565 = 0UL;
                    VECTOR(int32_t, 2) l_566 = (VECTOR(int32_t, 2))(0x0950B703L, 1L);
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_563[i][j] = 18446744073709551615UL;
                    }
                    (*l_557) = 1L;
                    l_563[3][3] = (l_561 , l_562[2][8][3]);
                    l_566.x |= (l_565 |= (l_558.s0 = ((*l_555) = l_564)));
                }
                l_567 = (void*)0;
                l_586.x &= (l_585 &= ((l_568 , FAKE_DIVERGE(p_805->local_2_offset, get_local_id(2), 10)) , ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_569, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, (-6L))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_570.sbea115dfc7cb851c)), ((VECTOR(int32_t, 4))(l_571.s12f5)).wzwxxyyxzxxyxxyy, ((VECTOR(int32_t, 2))((-1L), 0x0F639AA4L)).yxyxyyxyxxxyyyxy))).lo, ((VECTOR(int32_t, 4))(l_572.yyyx)).zwyzyyzx, ((VECTOR(int32_t, 2))(6L, 4L)).xyyxyxyx))).s0562163170016076, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_573.xx)), 3L, (-10L))).odd)).yyxy, ((VECTOR(int32_t, 4))(l_574.yxxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_575.s4261425522321376)).s3093)).yxwyzyyxwxwxwywx)).sd2c4))).wzwxywxwxyyyxwww, ((VECTOR(int32_t, 8))(l_576.yyxyxxyx)).s5155613500554367))).s7e, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(7L, 0x03838F77L)), 1L, (-1L))), (int32_t)((VECTOR(int32_t, 2))(l_577.s24)).odd, (int32_t)l_578))).even, ((VECTOR(int32_t, 4))(l_579.wzzy)).even))), 0x65EBDF24L, ((VECTOR(int32_t, 2))(0x065CC048L, (-1L))), (-1L))).s6, 0x20623B54L, 0x7955773AL)), ((VECTOR(int32_t, 4))(l_580.s76d3))))), 0x7813A7FEL, ((VECTOR(int32_t, 2))(l_581.s31)), 0x7750D99CL)).s06, ((VECTOR(int32_t, 8))(l_582.yyyyxyyy)).s14, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x689D7FD4L, 0x0312C5FFL)).xyxyxxyx, ((VECTOR(int32_t, 2))(0x02DCE6EDL, 0x484273E1L)).xyyyyxxy))).odd)).hi))), 0x148C5776L, 4L)).even, ((VECTOR(int32_t, 4))((l_554.s7 = l_583), 0x6DB8D626L, 1L, (-1L))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_584.sbe5f35cbcfc3e09f)))).se7))).even));
            }
            else
            { /* block id: 240 */
                uint32_t l_587[2][3][10] = {{{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL},{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL},{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL}},{{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL},{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL},{0UL,0UL,0xA88FCF6FL,0x9D022DC9L,0x2C19537AL,0x9D022DC9L,0xA88FCF6FL,0UL,0UL,0xA88FCF6FL}}};
                int i, j, k;
                l_554.s3 = ((l_587[1][1][9] , (-1L)) , (GROUP_DIVERGE(2, 1) , 0x68BCB6CAL));
            }
            unsigned int result = 0;
            result += l_554.s7;
            result += l_554.s6;
            result += l_554.s5;
            result += l_554.s4;
            result += l_554.s3;
            result += l_554.s2;
            result += l_554.s1;
            result += l_554.s0;
            atomic_add(&p_805->g_special_values[69 * get_linear_group_id() + 49], result);
        }
        else
        { /* block id: 243 */
            (1 + 1);
        }
    }
    return (*l_408);
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_291 p_805->g_292 p_805->g_297 p_805->g_196 p_805->g_169 p_805->g_164 p_805->g_51 p_805->g_3 p_805->g_321 p_805->g_123 p_805->g_158 p_805->g_45 p_805->g_49 p_805->g_359 p_805->g_256 p_805->l_comm_values p_805->g_388 p_805->g_391 p_805->g_284
 * writes: p_805->g_292 p_805->g_297 p_805->g_49 p_805->g_145 p_805->g_3 p_805->g_321 p_805->g_123 p_805->g_187 p_805->g_164
 */
uint16_t * func_69(int8_t * p_70, int32_t  p_71, int32_t * p_72, struct S3 * p_805)
{ /* block id: 92 */
    int32_t **l_293[3][1][4] = {{{&p_805->g_291,&p_805->g_291,&p_805->g_291,&p_805->g_291}},{{&p_805->g_291,&p_805->g_291,&p_805->g_291,&p_805->g_291}},{{&p_805->g_291,&p_805->g_291,&p_805->g_291,&p_805->g_291}}};
    VECTOR(int16_t, 8) l_305 = (VECTOR(int16_t, 8))(0x4A4EL, (VECTOR(int16_t, 4))(0x4A4EL, (VECTOR(int16_t, 2))(0x4A4EL, 0x5C7DL), 0x5C7DL), 0x5C7DL, 0x4A4EL, 0x5C7DL);
    uint16_t *l_318 = &p_805->g_124;
    uint16_t **l_317 = &l_318;
    uint32_t l_320[9][5][4] = {{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}},{{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L},{0x63D8A5B5L,0xEB01A8E0L,4294967287UL,0x082E5507L}}};
    union U1 *l_322[3];
    uint8_t l_336 = 0xB0L;
    union U0 l_356[2][4] = {{{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL}},{{4294967288UL},{4294967288UL},{4294967288UL},{4294967288UL}}};
    VECTOR(int16_t, 2) l_375 = (VECTOR(int16_t, 2))((-1L), 0x4C0BL);
    uint32_t *l_381[5];
    uint32_t **l_380 = &l_381[0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_322[i] = &p_805->g_323;
    for (i = 0; i < 5; i++)
        l_381[i] = &p_805->g_297;
    p_72 = (void*)0;
    if ((*p_805->g_291))
    { /* block id: 94 */
        int32_t *l_294[8][8][3] = {{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}},{{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0},{(void*)0,&p_805->g_292[1],(void*)0}}};
        int32_t *l_295 = &p_805->g_292[0];
        int32_t l_296 = (-7L);
        int i, j, k;
        p_72 = l_294[1][6][0];
        (*p_805->g_291) = (*p_805->g_291);
        l_295 = &p_71;
        --p_805->g_297;
    }
    else
    { /* block id: 99 */
        uint64_t l_304 = 18446744073709551613UL;
        int16_t *l_306[2][5][7] = {{{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_805->g_25,&p_805->g_25,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint16_t ***l_319 = &l_317;
        union U1 **l_324 = &l_322[1];
        union U0 *l_329 = &p_805->g_252;
        VECTOR(uint16_t, 2) l_335 = (VECTOR(uint16_t, 2))(0xC836L, 1UL);
        uint8_t l_337 = 0xCCL;
        VECTOR(int32_t, 8) l_353 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x1A1851A1L), 0x1A1851A1L), 0x1A1851A1L, 6L, 0x1A1851A1L);
        int32_t l_390 = (-1L);
        int i, j, k;
        p_805->g_321 ^= (p_805->g_3 ^= (((((p_805->g_196.x , (0x41L >= (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((((*p_70) = ((*p_805->g_291) == 4294967292UL)) && (l_304 > p_805->g_196.y)) >= ((p_805->g_145.w = ((VECTOR(int16_t, 16))(l_305.s5277062617670641)).s6) || p_805->g_169)) & (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u(0xED99699DL, (((*l_319) = l_317) == (void*)0))), p_71)), 0xF6B3F34CL)), l_320[3][0][1])), 0x2D33C40A0504D6D5L))), l_304)), l_304)))) < p_71) >= p_805->g_164) != p_805->g_51.y) , 1L));
        (*l_324) = l_322[1];
        for (p_805->g_123 = 0; (p_805->g_123 != (-30)); --p_805->g_123)
        { /* block id: 108 */
            union U0 *l_331 = &p_805->g_252;
            VECTOR(int32_t, 2) l_352 = (VECTOR(int32_t, 2))(0L, 0x6D3DBFA3L);
            union U1 **l_368 = (void*)0;
            uint32_t *l_379 = (void*)0;
            uint32_t **l_378[4][3] = {{&l_379,&l_379,&l_379},{&l_379,&l_379,&l_379},{&l_379,&l_379,&l_379},{&l_379,&l_379,&l_379}};
            uint32_t ***l_382 = (void*)0;
            uint32_t ***l_383 = (void*)0;
            uint32_t ***l_384 = (void*)0;
            uint32_t ***l_385 = &l_380;
            uint64_t *l_389 = &p_805->g_164;
            VECTOR(int32_t, 8) l_394 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            int i, j;
            for (l_304 = 0; (l_304 != 46); l_304 = safe_add_func_uint8_t_u_u(l_304, 5))
            { /* block id: 111 */
                int32_t *l_345[1][2][1];
                uint16_t *l_346 = &p_805->g_187;
                union U1 *l_362 = &p_805->g_363;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_345[i][j][k] = &p_805->g_3;
                    }
                }
                if ((*p_805->g_291))
                { /* block id: 112 */
                    union U0 **l_330[5][4][8] = {{{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0},{(void*)0,(void*)0,(void*)0,&l_329,&l_329,&l_329,&l_329,(void*)0}}};
                    uint32_t *l_340 = &p_805->g_297;
                    int64_t *l_341 = &p_805->g_321;
                    int i, j, k;
                    l_331 = l_329;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_805->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[(safe_mod_func_uint32_t_u_u(((p_805->g_158.s2 , 0xED75A5B10D8254E4L) < ((*l_341) = (safe_unary_minus_func_int64_t_s(((((*l_340) = ((0x34L < (safe_mul_func_uint16_t_u_u((l_337 &= (((VECTOR(uint16_t, 16))(l_335.yyxxyyyxyyxxyyyx)).s1 == l_336)), ((void*)0 != &p_805->g_123)))) & (safe_sub_func_uint64_t_u_u(4UL, FAKE_DIVERGE(p_805->local_2_offset, get_local_id(2), 10))))) | 0x10CEB806L) != (0x24L < p_805->g_45.x)))))), 10))][(safe_mod_func_uint32_t_u_u(p_805->tid, 102))]));
                    if ((atomic_inc(&p_805->g_atomic_input[69 * get_linear_group_id() + 33]) == 8))
                    { /* block id: 121 */
                        int32_t l_342[9][7][2] = {{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}},{{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL},{0x09537BCFL,0x2C12A0CDL}}};
                        int i, j, k;
                        l_342[1][2][0] = 6L;
                        unsigned int result = 0;
                        int l_342_i0, l_342_i1, l_342_i2;
                        for (l_342_i0 = 0; l_342_i0 < 9; l_342_i0++) {
                            for (l_342_i1 = 0; l_342_i1 < 7; l_342_i1++) {
                                for (l_342_i2 = 0; l_342_i2 < 2; l_342_i2++) {
                                    result += l_342[l_342_i0][l_342_i1][l_342_i2];
                                }
                            }
                        }
                        atomic_add(&p_805->g_special_values[69 * get_linear_group_id() + 33], result);
                    }
                    else
                    { /* block id: 123 */
                        (1 + 1);
                    }
                    for (l_337 = (-12); (l_337 < 31); l_337 = safe_add_func_int16_t_s_s(l_337, 8))
                    { /* block id: 128 */
                        if ((*p_805->g_291))
                            break;
                        l_345[0][0][0] = (void*)0;
                        return l_346;
                    }
                }
                else
                { /* block id: 133 */
                    for (p_805->g_187 = 0; (p_805->g_187 > 23); p_805->g_187 = safe_add_func_int8_t_s_s(p_805->g_187, 3))
                    { /* block id: 136 */
                        uint8_t l_349 = 0x13L;
                        (*p_805->g_291) = l_349;
                        (*p_805->g_291) = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))((-7L), (safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_805->local_0_offset, get_local_id(0), 10), 0x7D9A5C299DAF1052L)), (-1L), 0L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_352.yyxx)).odd, ((VECTOR(int32_t, 16))(l_353.s7004652744655770)).s7f))).yyxyyyyx)).hi))).z;
                    }
                    (*p_805->g_291) ^= (safe_sub_func_uint64_t_u_u(p_71, ((((*p_70) &= p_805->g_123) <= p_805->g_45.y) | (l_356[1][1] , (GROUP_DIVERGE(2, 1) >= (((safe_rshift_func_uint16_t_u_s(((void*)0 == p_805->g_359), 13)) & p_71) >= (safe_sub_func_int16_t_s_s(p_805->g_256, 2L))))))));
                }
                (*l_324) = l_362;
                p_72 = &p_71;
            }
            (*p_805->g_291) = ((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u(((l_368 == ((safe_div_func_int32_t_s_s(((p_805->l_comm_values[(safe_mod_func_uint32_t_u_u(p_805->tid, 102))] < (((safe_add_func_int16_t_s_s(p_71, (l_352.x = ((VECTOR(int16_t, 16))(l_375.xyxxxyxyxxyxyxxy)).s2))) && (safe_add_func_uint32_t_u_u((l_378[3][2] == ((*l_385) = l_380)), 0x470E43D8L))) >= (((*l_389) = (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_805->g_388.s72)).yyxy)).y, 9))) == (-1L)))) , (l_390 & 4294967295UL)), l_304)) , p_805->g_391)) && p_805->g_284), 65532UL)) | 0x736AA3F6L) == p_71), l_394.s0)) , l_335.x);
        }
    }
    return &p_805->g_124;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_49 p_805->g_124 p_805->g_145 p_805->g_158 p_805->g_3 p_805->g_164 p_805->g_122 p_805->g_169 p_805->g_30 p_805->g_187 p_805->g_191 p_805->g_196 p_805->g_25 p_805->g_167 p_805->g_51 p_805->g_252 p_805->g_45 p_805->g_256 p_805->g_105 p_805->g_252.f0 p_805->g_273 p_805->g_285
 * writes: p_805->g_51 p_805->g_162 p_805->g_164 p_805->g_167 p_805->g_169 p_805->g_3 p_805->g_124 p_805->g_187 p_805->g_145 p_805->g_256 p_805->g_273 p_805->g_285
 */
union U0  func_76(int8_t * p_77, uint16_t * p_78, int32_t  p_79, uint16_t * p_80, struct S3 * p_805)
{ /* block id: 49 */
    VECTOR(int8_t, 2) l_137 = (VECTOR(int8_t, 2))(0x4EL, 1L);
    uint8_t *l_144[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_160 = &p_805->g_3;
    int32_t **l_159 = &l_160;
    int8_t *l_161 = &p_805->g_162;
    uint64_t *l_163 = &p_805->g_164;
    uint32_t l_165 = 4294967291UL;
    int8_t *l_166[1][6] = {{&p_805->g_49,&p_805->g_49,&p_805->g_49,&p_805->g_49,&p_805->g_49,&p_805->g_49}};
    int32_t *l_168 = &p_805->g_169;
    int8_t *l_176 = &p_805->g_49;
    int16_t *l_177 = (void*)0;
    int16_t *l_178 = (void*)0;
    int16_t *l_179 = (void*)0;
    int32_t l_180 = 0x52118C4AL;
    VECTOR(uint32_t, 4) l_192 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC5EED3F4L), 0xC5EED3F4L);
    union U0 l_198 = {1UL};
    uint64_t *l_199 = &p_805->g_164;
    VECTOR(uint8_t, 2) l_201 = (VECTOR(uint8_t, 2))(0xAFL, 0x01L);
    VECTOR(uint8_t, 16) l_202 = (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 0UL), 0UL), 0UL, 0x31L, 0UL, (VECTOR(uint8_t, 2))(0x31L, 0UL), (VECTOR(uint8_t, 2))(0x31L, 0UL), 0x31L, 0UL, 0x31L, 0UL);
    VECTOR(uint8_t, 8) l_203 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x96L), 0x96L), 0x96L, 0UL, 0x96L);
    VECTOR(int8_t, 2) l_253 = (VECTOR(int8_t, 2))(0x52L, 0x41L);
    VECTOR(int8_t, 16) l_254 = (VECTOR(int8_t, 16))(0x1DL, (VECTOR(int8_t, 4))(0x1DL, (VECTOR(int8_t, 2))(0x1DL, 1L), 1L), 1L, 0x1DL, 1L, (VECTOR(int8_t, 2))(0x1DL, 1L), (VECTOR(int8_t, 2))(0x1DL, 1L), 0x1DL, 1L, 0x1DL, 1L);
    uint64_t l_257 = 0xBFC8718FD8965500L;
    int i, j;
    (*l_168) &= ((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(7UL, 0UL)).hi, (((*p_77) == (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(l_137.xx)).xxyxxyyy))).s1, 6))) & (safe_lshift_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((((VECTOR(uint8_t, 4))((p_805->g_51.y = (GROUP_DIVERGE(0, 1) && p_805->g_124)), 0x00L, 0x34L, 0x3EL)).w == (((VECTOR(int16_t, 2))(p_805->g_145.wz)).even <= ((VECTOR(int16_t, 16))((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_mul_func_int8_t_s_s(l_137.x, (p_805->g_167 = (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u((((*l_163) ^= (safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_805->g_158.sde13)).xxwwywzx)).s3 | (((void*)0 != l_144[3]) < l_137.x)), ((*l_161) = (l_159 == ((*l_160) , &l_160)))))))) , 9UL), l_165)) <= (**l_159))))))))), (**l_159))), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))((-4L))), ((VECTOR(int16_t, 4))((-2L))), ((VECTOR(int16_t, 2))((-3L))), 0L)).s0)), (**l_159))), p_79)) , p_805->g_122) == p_805->g_124), 7))))) != p_805->g_145.w);
    if ((((*l_168) , 3UL) ^ (l_180 = (!((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_160) = (((((safe_add_func_uint16_t_u_u((p_805->g_158.sa >= (((((void*)0 == &p_805->g_162) ^ (*p_77)) , (l_163 == &p_805->g_164)) ^ (((VECTOR(uint16_t, 2))(0x7859L, 0xE455L)).even , ((((void*)0 == l_176) != 0x66258E059B89695FL) != 0x02C6L)))), (*l_160))) , p_805->g_30) , (*l_159)) == &p_805->g_3) , p_805->g_145.x)), (*l_168))), 12)) > 0x893D1EF52FE4D6D4L)))))
    { /* block id: 57 */
        int64_t l_186 = 1L;
        for (p_805->g_124 = 0; (p_805->g_124 < 54); p_805->g_124 = safe_add_func_int64_t_s_s(p_805->g_124, 3))
        { /* block id: 60 */
            int32_t *l_183 = (void*)0;
            int32_t *l_184 = &p_805->g_3;
            int32_t *l_185[4] = {&l_180,&l_180,&l_180,&l_180};
            int i;
            p_805->g_187++;
        }
    }
    else
    { /* block id: 63 */
        VECTOR(uint32_t, 2) l_190 = (VECTOR(uint32_t, 2))(1UL, 0x3A562FC3L);
        VECTOR(uint8_t, 2) l_193 = (VECTOR(uint8_t, 2))(0x7AL, 0x9EL);
        uint64_t *l_197 = &p_805->g_164;
        int64_t *l_200[9][4][1] = {{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}},{{&p_805->g_122},{&p_805->g_122},{&p_805->g_122},{&p_805->g_122}}};
        int16_t *l_216 = (void*)0;
        int16_t *l_217[3][5] = {{(void*)0,&p_805->g_25,(void*)0,(void*)0,&p_805->g_25},{(void*)0,&p_805->g_25,(void*)0,(void*)0,&p_805->g_25},{(void*)0,&p_805->g_25,(void*)0,(void*)0,&p_805->g_25}};
        VECTOR(uint16_t, 8) l_218 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65528UL), 65528UL), 65528UL, 65532UL, 65528UL);
        VECTOR(uint16_t, 2) l_219 = (VECTOR(uint16_t, 2))(0xA58FL, 65530UL);
        int32_t l_226 = 0x1B6FBBB4L;
        int32_t l_272[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_272[i] = (-10L);
        if (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(l_190.yyxxxyyxxxxyxxyy)), ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_805->g_191.s1b)).yxxy)).xwzzwyyzywywyzyx, ((VECTOR(uint32_t, 2))(l_192.zy)).xxyxyxxyxyyxyyyx)))))).s08)))).xyxx)).x , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_193.yxxx)))).y) == ((VECTOR(int8_t, 8))((safe_rshift_func_int8_t_s_u((((VECTOR(uint16_t, 2))(p_805->g_196.xy)).lo >= ((((*l_160) = (l_197 != (l_198 , l_199))) && (((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(l_201.xy)).xyxx, ((VECTOR(uint8_t, 4))(l_202.s1d81))))).xxzxwywx, ((VECTOR(uint8_t, 8))(l_203.s31277322))))).s4 ^ (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s((l_226 ^= (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(((p_79 , (((((*l_168) = p_79) == 0UL) <= (safe_mod_func_int16_t_s_s(((*l_160) = p_805->g_158.sa), ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(l_218.s66)).xyyxyxxyyxyyyxyy, ((VECTOR(uint16_t, 8))(l_219.yxyxxyyy)).s0134221636425616))).se))) || (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((*l_168) & p_805->g_145.x) >= FAKE_DIVERGE(p_805->global_2_offset, get_global_id(2), 10)), (*l_160))), 0x0E3BL)), 1)))) & 7UL), 0x4B27L)), p_805->g_30)), GROUP_DIVERGE(1, 1)))), (*p_77))) , 4L) || p_805->g_25), 14)))) || l_219.y)), p_79)), 2L, 0L, 0x4AL, 0L, 0x58L, (-1L), 0x09L)).s0))
        { /* block id: 68 */
            int64_t l_258 = 0x189875F892B58059L;
            int32_t *l_263 = (void*)0;
            int32_t *l_264 = &p_805->g_3;
            int32_t *l_265 = (void*)0;
            int32_t *l_266 = &l_226;
            int32_t *l_267 = &l_226;
            int32_t *l_268 = &p_805->g_169;
            int32_t *l_269 = &p_805->g_169;
            int32_t *l_270 = &p_805->g_169;
            int32_t *l_271[5] = {&p_805->g_169,&p_805->g_169,&p_805->g_169,&p_805->g_169,&p_805->g_169};
            int i;
            for (p_805->g_167 = 0; (p_805->g_167 <= 20); p_805->g_167 = safe_add_func_int64_t_s_s(p_805->g_167, 6))
            { /* block id: 71 */
                VECTOR(uint8_t, 2) l_239 = (VECTOR(uint8_t, 2))(2UL, 0x39L);
                int32_t *l_255 = &p_805->g_256;
                uint32_t *l_259 = (void*)0;
                uint32_t *l_260[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_261 = (-1L);
                int32_t l_262 = 1L;
                int i;
                l_262 = (p_805->g_51.x && ((0UL | (safe_add_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 4)), ((*l_197)--))) && (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_239.yxxxxxyy)).s6, 3))) >= ((((p_805->g_145.x = (-5L)) , ((((l_261 = ((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (!((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x924FF15DA5D19DA4L, 0x6C4C5D48B04B7C48L)).xxyyyxyxxxxyxxyy)).s6))), ((-1L) ^ ((((safe_mul_func_uint8_t_u_u((!(((VECTOR(uint8_t, 2))(255UL, 0x25L)).odd | (p_79 != (safe_mul_func_int8_t_s_s((p_805->g_124 , (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint16_t_u_s((((((((*l_168) = (p_805->g_252 , ((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_253.yy)), 0x72L, ((VECTOR(int8_t, 2))(l_254.s40)), 6L, (-1L), 1L)))).s73)), (-7L))).x)) == p_805->g_3) || (((((((*l_255) ^= p_805->g_45.y) , (-4L)) == (*l_160)) < l_257) || p_805->g_105.z) , 253UL)) < p_805->g_25) <= p_79) > l_239.x), 14)) , &p_805->g_169) != &p_79) < (*p_80)), p_805->g_252.f0))), p_805->g_187))))), 0x5BL)) && (**l_159)) ^ l_258) > p_805->g_45.z)))) , p_79)) & (-3L)) || FAKE_DIVERGE(p_805->group_1_offset, get_group_id(1), 10)) | p_805->g_51.y)) != 0x7326L) & p_79)), (-2L)))) <= 0xBE48C0DEFCDF892EL));
            }
            p_805->g_273--;
            return p_805->g_252;
        }
        else
        { /* block id: 81 */
            uint32_t *l_276[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t *l_278 = (void*)0;
            uint32_t **l_277 = &l_278;
            int32_t *l_279 = &p_805->g_3;
            int32_t *l_280 = &l_272[0];
            int32_t *l_281 = &p_805->g_169;
            int32_t *l_282 = (void*)0;
            int32_t *l_283[5] = {&p_805->g_3,&p_805->g_3,&p_805->g_3,&p_805->g_3,&p_805->g_3};
            uint64_t **l_288 = (void*)0;
            uint64_t **l_289 = &l_199;
            int i, j;
            (*l_159) = &p_79;
            (*l_168) |= ((*l_160) = (l_276[0][2] != ((*l_277) = (void*)0)));
            --p_805->g_285;
            (*l_280) = (&p_805->g_164 != ((*l_289) = l_197));
        }
    }
    return l_198;
}


/* ------------------------------------------ */
/* 
 * reads : p_805->g_comm_values p_805->g_45 p_805->g_105 p_805->g_7 p_805->g_51 p_805->g_49 p_805->g_124
 * writes: p_805->g_45 p_805->g_49 p_805->g_124
 */
int32_t  func_81(int32_t  p_82, struct S3 * p_805)
{ /* block id: 33 */
    uint16_t *l_91 = (void*)0;
    uint16_t *l_92 = (void*)0;
    uint16_t *l_93 = (void*)0;
    uint16_t *l_94 = (void*)0;
    uint16_t *l_95[10] = {&p_805->g_30,(void*)0,&p_805->g_30,&p_805->g_30,(void*)0,&p_805->g_30,&p_805->g_30,(void*)0,&p_805->g_30,&p_805->g_30};
    int32_t l_96 = 0x1D9E462EL;
    int32_t l_97 = (-4L);
    int32_t l_98 = 0x1E648328L;
    int32_t l_99[1];
    VECTOR(uint16_t, 4) l_102 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x6AD7L), 0x6AD7L);
    VECTOR(uint16_t, 8) l_103 = (VECTOR(uint16_t, 8))(0x9A86L, (VECTOR(uint16_t, 4))(0x9A86L, (VECTOR(uint16_t, 2))(0x9A86L, 65535UL), 65535UL), 65535UL, 0x9A86L, 65535UL);
    VECTOR(uint16_t, 16) l_104 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x80DDL), 0x80DDL), 0x80DDL, 1UL, 0x80DDL, (VECTOR(uint16_t, 2))(1UL, 0x80DDL), (VECTOR(uint16_t, 2))(1UL, 0x80DDL), 1UL, 0x80DDL, 1UL, 0x80DDL);
    VECTOR(uint16_t, 2) l_106 = (VECTOR(uint16_t, 2))(0x98B5L, 65534UL);
    uint16_t **l_109 = &l_94;
    VECTOR(uint16_t, 8) l_110 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
    int8_t *l_113[8][8] = {{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49},{(void*)0,&p_805->g_49,&p_805->g_49,&p_805->g_49,(void*)0,(void*)0,&p_805->g_49,&p_805->g_49}};
    int32_t *l_114 = &l_96;
    int32_t **l_115[8];
    int32_t *l_116 = &l_99[0];
    int i, j;
    for (i = 0; i < 1; i++)
        l_99[i] = 7L;
    for (i = 0; i < 8; i++)
        l_115[i] = &l_114;
    (*l_114) |= ((9L < p_805->g_comm_values[p_805->tid]) , (safe_rshift_func_uint16_t_u_s((l_99[0] = ((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((p_805->g_45.x++), ((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(l_102.xz)).xyyxyyxy, ((VECTOR(uint16_t, 16))(l_103.s7012425346364054)).odd))).s5, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_104.s4d5f)), 0x8F1FL, 0xC5E9L, 0UL, l_103.s2, 0x8C3EL, ((VECTOR(uint16_t, 4))(p_805->g_105.yyxy)), ((VECTOR(uint16_t, 2))(l_106.xx)), 0xC561L)))).s2e, (uint16_t)(0UL != (l_106.y ^ ((((*l_109) = l_94) == (void*)0) , (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_110.s25)).yyyxxyyx)).s7 == (((safe_sub_func_uint8_t_u_u(l_99[0], (l_98 = (p_82 != p_805->g_7[4][5])))) && l_104.s2) , 65530UL))))), (uint16_t)p_805->g_105.z))), 0xDE1DL)), ((VECTOR(uint16_t, 2))(65530UL)), 0x138FL)).s2)) && p_82), p_805->g_51.y)), 0x5AL)) , (*l_109)) != l_93) , 1UL)), p_82)));
    l_116 = &l_98;
    for (p_805->g_49 = 16; (p_805->g_49 != (-9)); p_805->g_49--)
    { /* block id: 42 */
        uint32_t l_119 = 1UL;
        l_119--;
    }
    --p_805->g_124;
    return p_82;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[102];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 102; i++)
            l_comm_values[i] = 1;
    struct S3 c_806;
    struct S3* p_805 = &c_806;
    struct S3 c_807 = {
        0L, // p_805->g_3
        0x6E2BFBD3L, // p_805->g_6
        {{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL},{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL},{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL},{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL},{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL},{0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL,0UL,0xDE6FC608L,0UL}}, // p_805->g_7
        {{0x26L,0L,0L,0x61L,0L,0x61L,0L,0L,0x26L,0x26L},{0x26L,0L,0L,0x61L,0L,0x61L,0L,0L,0x26L,0x26L},{0x26L,0L,0L,0x61L,0L,0x61L,0L,0L,0x26L,0x26L},{0x26L,0L,0L,0x61L,0L,0x61L,0L,0L,0x26L,0x26L},{0x26L,0L,0L,0x61L,0L,0x61L,0L,0L,0x26L,0x26L}}, // p_805->g_21
        (-9L), // p_805->g_25
        0xB81FL, // p_805->g_30
        (VECTOR(uint16_t, 4))(0x4A2BL, (VECTOR(uint16_t, 2))(0x4A2BL, 1UL), 1UL), // p_805->g_45
        (-1L), // p_805->g_49
        (VECTOR(uint8_t, 2))(252UL, 9UL), // p_805->g_51
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 1UL), 1UL), // p_805->g_105
        6L, // p_805->g_122
        (-4L), // p_805->g_123
        0x34B6L, // p_805->g_124
        (VECTOR(int16_t, 4))(0x6A26L, (VECTOR(int16_t, 2))(0x6A26L, 0x00F1L), 0x00F1L), // p_805->g_145
        (VECTOR(int64_t, 16))(0x09A7884222E9D9AFL, (VECTOR(int64_t, 4))(0x09A7884222E9D9AFL, (VECTOR(int64_t, 2))(0x09A7884222E9D9AFL, 0L), 0L), 0L, 0x09A7884222E9D9AFL, 0L, (VECTOR(int64_t, 2))(0x09A7884222E9D9AFL, 0L), (VECTOR(int64_t, 2))(0x09A7884222E9D9AFL, 0L), 0x09A7884222E9D9AFL, 0L, 0x09A7884222E9D9AFL, 0L), // p_805->g_158
        0x35L, // p_805->g_162
        18446744073709551612UL, // p_805->g_164
        (-1L), // p_805->g_167
        0x5C915C06L, // p_805->g_169
        0x6606L, // p_805->g_187
        (VECTOR(uint32_t, 16))(0x75A566C4L, (VECTOR(uint32_t, 4))(0x75A566C4L, (VECTOR(uint32_t, 2))(0x75A566C4L, 0xEC695295L), 0xEC695295L), 0xEC695295L, 0x75A566C4L, 0xEC695295L, (VECTOR(uint32_t, 2))(0x75A566C4L, 0xEC695295L), (VECTOR(uint32_t, 2))(0x75A566C4L, 0xEC695295L), 0x75A566C4L, 0xEC695295L, 0x75A566C4L, 0xEC695295L), // p_805->g_191
        (VECTOR(uint16_t, 2))(0x4AA4L, 65531UL), // p_805->g_196
        {0xFD29ABEEL}, // p_805->g_252
        (-5L), // p_805->g_256
        0x92L, // p_805->g_273
        0x3391B31A1AFF0C2FL, // p_805->g_284
        0UL, // p_805->g_285
        {(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L)}, // p_805->g_292
        &p_805->g_292[0], // p_805->g_291
        4294967295UL, // p_805->g_297
        0x21AC2F252CD1FFF4L, // p_805->g_321
        {1UL}, // p_805->g_323
        (void*)0, // p_805->g_359
        {1UL}, // p_805->g_363
        (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0xFFA0L), 0xFFA0L), 0xFFA0L, 3UL, 0xFFA0L), // p_805->g_388
        {0x986AA3A4A9C36CF7L}, // p_805->g_393
        &p_805->g_393, // p_805->g_392
        &p_805->g_392, // p_805->g_391
        (void*)0, // p_805->g_395
        &p_805->g_49, // p_805->g_410
        (void*)0, // p_805->g_422
        0x27L, // p_805->g_602
        &p_805->g_602, // p_805->g_601
        (VECTOR(uint16_t, 16))(0x19DBL, (VECTOR(uint16_t, 4))(0x19DBL, (VECTOR(uint16_t, 2))(0x19DBL, 0x99DEL), 0x99DEL), 0x99DEL, 0x19DBL, 0x99DEL, (VECTOR(uint16_t, 2))(0x19DBL, 0x99DEL), (VECTOR(uint16_t, 2))(0x19DBL, 0x99DEL), 0x19DBL, 0x99DEL, 0x19DBL, 0x99DEL), // p_805->g_631
        (VECTOR(uint32_t, 4))(0x1D3F7010L, (VECTOR(uint32_t, 2))(0x1D3F7010L, 0xF8FCB406L), 0xF8FCB406L), // p_805->g_641
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2A2AL), 0x2A2AL), 0x2A2AL, 0L, 0x2A2AL, (VECTOR(int16_t, 2))(0L, 0x2A2AL), (VECTOR(int16_t, 2))(0L, 0x2A2AL), 0L, 0x2A2AL, 0L, 0x2A2AL), // p_805->g_646
        (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x79L), 0x79L), // p_805->g_654
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x2FL), 0x2FL), 0x2FL, (-1L), 0x2FL), // p_805->g_655
        0UL, // p_805->g_683
        &p_805->g_252.f3, // p_805->g_705
        (VECTOR(int64_t, 2))(0x749DEA76DAA39473L, 2L), // p_805->g_707
        {&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0],&p_805->g_292[0]}, // p_805->g_749
        (VECTOR(int64_t, 8))(0x43580B13A9B86C39L, (VECTOR(int64_t, 4))(0x43580B13A9B86C39L, (VECTOR(int64_t, 2))(0x43580B13A9B86C39L, 0x6836A36EFD513E1EL), 0x6836A36EFD513E1EL), 0x6836A36EFD513E1EL, 0x43580B13A9B86C39L, 0x6836A36EFD513E1EL), // p_805->g_763
        (VECTOR(int64_t, 8))(0x48C8004BA5F2CB01L, (VECTOR(int64_t, 4))(0x48C8004BA5F2CB01L, (VECTOR(int64_t, 2))(0x48C8004BA5F2CB01L, 0x6428443A537CD4B2L), 0x6428443A537CD4B2L), 0x6428443A537CD4B2L, 0x48C8004BA5F2CB01L, 0x6428443A537CD4B2L), // p_805->g_765
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7E60B0A7FD483578L), 0x7E60B0A7FD483578L), 0x7E60B0A7FD483578L, 0L, 0x7E60B0A7FD483578L, (VECTOR(int64_t, 2))(0L, 0x7E60B0A7FD483578L), (VECTOR(int64_t, 2))(0L, 0x7E60B0A7FD483578L), 0L, 0x7E60B0A7FD483578L, 0L, 0x7E60B0A7FD483578L), // p_805->g_767
        (void*)0, // p_805->g_770
        {&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770,&p_805->g_770}, // p_805->g_769
        (void*)0, // p_805->g_778
        &p_805->g_778, // p_805->g_777
        (VECTOR(int64_t, 16))(0x47542EFD5AE4CDFFL, (VECTOR(int64_t, 4))(0x47542EFD5AE4CDFFL, (VECTOR(int64_t, 2))(0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL), 0x43118DFFEB60291BL), 0x43118DFFEB60291BL, 0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL, (VECTOR(int64_t, 2))(0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL), (VECTOR(int64_t, 2))(0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL), 0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL, 0x47542EFD5AE4CDFFL, 0x43118DFFEB60291BL), // p_805->g_787
        0, // p_805->v_collective
        sequence_input[get_global_id(0)], // p_805->global_0_offset
        sequence_input[get_global_id(1)], // p_805->global_1_offset
        sequence_input[get_global_id(2)], // p_805->global_2_offset
        sequence_input[get_local_id(0)], // p_805->local_0_offset
        sequence_input[get_local_id(1)], // p_805->local_1_offset
        sequence_input[get_local_id(2)], // p_805->local_2_offset
        sequence_input[get_group_id(0)], // p_805->group_0_offset
        sequence_input[get_group_id(1)], // p_805->group_1_offset
        sequence_input[get_group_id(2)], // p_805->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[0][get_linear_local_id()])), // p_805->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_806 = c_807;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_805);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_805->g_3, "p_805->g_3", print_hash_value);
    transparent_crc(p_805->g_6, "p_805->g_6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_805->g_7[i][j], "p_805->g_7[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_805->g_21[i][j], "p_805->g_21[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_805->g_25, "p_805->g_25", print_hash_value);
    transparent_crc(p_805->g_30, "p_805->g_30", print_hash_value);
    transparent_crc(p_805->g_45.x, "p_805->g_45.x", print_hash_value);
    transparent_crc(p_805->g_45.y, "p_805->g_45.y", print_hash_value);
    transparent_crc(p_805->g_45.z, "p_805->g_45.z", print_hash_value);
    transparent_crc(p_805->g_45.w, "p_805->g_45.w", print_hash_value);
    transparent_crc(p_805->g_49, "p_805->g_49", print_hash_value);
    transparent_crc(p_805->g_51.x, "p_805->g_51.x", print_hash_value);
    transparent_crc(p_805->g_51.y, "p_805->g_51.y", print_hash_value);
    transparent_crc(p_805->g_105.x, "p_805->g_105.x", print_hash_value);
    transparent_crc(p_805->g_105.y, "p_805->g_105.y", print_hash_value);
    transparent_crc(p_805->g_105.z, "p_805->g_105.z", print_hash_value);
    transparent_crc(p_805->g_105.w, "p_805->g_105.w", print_hash_value);
    transparent_crc(p_805->g_122, "p_805->g_122", print_hash_value);
    transparent_crc(p_805->g_123, "p_805->g_123", print_hash_value);
    transparent_crc(p_805->g_124, "p_805->g_124", print_hash_value);
    transparent_crc(p_805->g_145.x, "p_805->g_145.x", print_hash_value);
    transparent_crc(p_805->g_145.y, "p_805->g_145.y", print_hash_value);
    transparent_crc(p_805->g_145.z, "p_805->g_145.z", print_hash_value);
    transparent_crc(p_805->g_145.w, "p_805->g_145.w", print_hash_value);
    transparent_crc(p_805->g_158.s0, "p_805->g_158.s0", print_hash_value);
    transparent_crc(p_805->g_158.s1, "p_805->g_158.s1", print_hash_value);
    transparent_crc(p_805->g_158.s2, "p_805->g_158.s2", print_hash_value);
    transparent_crc(p_805->g_158.s3, "p_805->g_158.s3", print_hash_value);
    transparent_crc(p_805->g_158.s4, "p_805->g_158.s4", print_hash_value);
    transparent_crc(p_805->g_158.s5, "p_805->g_158.s5", print_hash_value);
    transparent_crc(p_805->g_158.s6, "p_805->g_158.s6", print_hash_value);
    transparent_crc(p_805->g_158.s7, "p_805->g_158.s7", print_hash_value);
    transparent_crc(p_805->g_158.s8, "p_805->g_158.s8", print_hash_value);
    transparent_crc(p_805->g_158.s9, "p_805->g_158.s9", print_hash_value);
    transparent_crc(p_805->g_158.sa, "p_805->g_158.sa", print_hash_value);
    transparent_crc(p_805->g_158.sb, "p_805->g_158.sb", print_hash_value);
    transparent_crc(p_805->g_158.sc, "p_805->g_158.sc", print_hash_value);
    transparent_crc(p_805->g_158.sd, "p_805->g_158.sd", print_hash_value);
    transparent_crc(p_805->g_158.se, "p_805->g_158.se", print_hash_value);
    transparent_crc(p_805->g_158.sf, "p_805->g_158.sf", print_hash_value);
    transparent_crc(p_805->g_162, "p_805->g_162", print_hash_value);
    transparent_crc(p_805->g_164, "p_805->g_164", print_hash_value);
    transparent_crc(p_805->g_167, "p_805->g_167", print_hash_value);
    transparent_crc(p_805->g_169, "p_805->g_169", print_hash_value);
    transparent_crc(p_805->g_187, "p_805->g_187", print_hash_value);
    transparent_crc(p_805->g_191.s0, "p_805->g_191.s0", print_hash_value);
    transparent_crc(p_805->g_191.s1, "p_805->g_191.s1", print_hash_value);
    transparent_crc(p_805->g_191.s2, "p_805->g_191.s2", print_hash_value);
    transparent_crc(p_805->g_191.s3, "p_805->g_191.s3", print_hash_value);
    transparent_crc(p_805->g_191.s4, "p_805->g_191.s4", print_hash_value);
    transparent_crc(p_805->g_191.s5, "p_805->g_191.s5", print_hash_value);
    transparent_crc(p_805->g_191.s6, "p_805->g_191.s6", print_hash_value);
    transparent_crc(p_805->g_191.s7, "p_805->g_191.s7", print_hash_value);
    transparent_crc(p_805->g_191.s8, "p_805->g_191.s8", print_hash_value);
    transparent_crc(p_805->g_191.s9, "p_805->g_191.s9", print_hash_value);
    transparent_crc(p_805->g_191.sa, "p_805->g_191.sa", print_hash_value);
    transparent_crc(p_805->g_191.sb, "p_805->g_191.sb", print_hash_value);
    transparent_crc(p_805->g_191.sc, "p_805->g_191.sc", print_hash_value);
    transparent_crc(p_805->g_191.sd, "p_805->g_191.sd", print_hash_value);
    transparent_crc(p_805->g_191.se, "p_805->g_191.se", print_hash_value);
    transparent_crc(p_805->g_191.sf, "p_805->g_191.sf", print_hash_value);
    transparent_crc(p_805->g_196.x, "p_805->g_196.x", print_hash_value);
    transparent_crc(p_805->g_196.y, "p_805->g_196.y", print_hash_value);
    transparent_crc(p_805->g_252.f3, "p_805->g_252.f3", print_hash_value);
    transparent_crc(p_805->g_256, "p_805->g_256", print_hash_value);
    transparent_crc(p_805->g_273, "p_805->g_273", print_hash_value);
    transparent_crc(p_805->g_284, "p_805->g_284", print_hash_value);
    transparent_crc(p_805->g_285, "p_805->g_285", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_805->g_292[i], "p_805->g_292[i]", print_hash_value);

    }
    transparent_crc(p_805->g_297, "p_805->g_297", print_hash_value);
    transparent_crc(p_805->g_321, "p_805->g_321", print_hash_value);
    transparent_crc(p_805->g_323.f0, "p_805->g_323.f0", print_hash_value);
    transparent_crc(p_805->g_363.f0, "p_805->g_363.f0", print_hash_value);
    transparent_crc(p_805->g_388.s0, "p_805->g_388.s0", print_hash_value);
    transparent_crc(p_805->g_388.s1, "p_805->g_388.s1", print_hash_value);
    transparent_crc(p_805->g_388.s2, "p_805->g_388.s2", print_hash_value);
    transparent_crc(p_805->g_388.s3, "p_805->g_388.s3", print_hash_value);
    transparent_crc(p_805->g_388.s4, "p_805->g_388.s4", print_hash_value);
    transparent_crc(p_805->g_388.s5, "p_805->g_388.s5", print_hash_value);
    transparent_crc(p_805->g_388.s6, "p_805->g_388.s6", print_hash_value);
    transparent_crc(p_805->g_388.s7, "p_805->g_388.s7", print_hash_value);
    transparent_crc(p_805->g_393.f0, "p_805->g_393.f0", print_hash_value);
    transparent_crc(p_805->g_602, "p_805->g_602", print_hash_value);
    transparent_crc(p_805->g_631.s0, "p_805->g_631.s0", print_hash_value);
    transparent_crc(p_805->g_631.s1, "p_805->g_631.s1", print_hash_value);
    transparent_crc(p_805->g_631.s2, "p_805->g_631.s2", print_hash_value);
    transparent_crc(p_805->g_631.s3, "p_805->g_631.s3", print_hash_value);
    transparent_crc(p_805->g_631.s4, "p_805->g_631.s4", print_hash_value);
    transparent_crc(p_805->g_631.s5, "p_805->g_631.s5", print_hash_value);
    transparent_crc(p_805->g_631.s6, "p_805->g_631.s6", print_hash_value);
    transparent_crc(p_805->g_631.s7, "p_805->g_631.s7", print_hash_value);
    transparent_crc(p_805->g_631.s8, "p_805->g_631.s8", print_hash_value);
    transparent_crc(p_805->g_631.s9, "p_805->g_631.s9", print_hash_value);
    transparent_crc(p_805->g_631.sa, "p_805->g_631.sa", print_hash_value);
    transparent_crc(p_805->g_631.sb, "p_805->g_631.sb", print_hash_value);
    transparent_crc(p_805->g_631.sc, "p_805->g_631.sc", print_hash_value);
    transparent_crc(p_805->g_631.sd, "p_805->g_631.sd", print_hash_value);
    transparent_crc(p_805->g_631.se, "p_805->g_631.se", print_hash_value);
    transparent_crc(p_805->g_631.sf, "p_805->g_631.sf", print_hash_value);
    transparent_crc(p_805->g_641.x, "p_805->g_641.x", print_hash_value);
    transparent_crc(p_805->g_641.y, "p_805->g_641.y", print_hash_value);
    transparent_crc(p_805->g_641.z, "p_805->g_641.z", print_hash_value);
    transparent_crc(p_805->g_641.w, "p_805->g_641.w", print_hash_value);
    transparent_crc(p_805->g_646.s0, "p_805->g_646.s0", print_hash_value);
    transparent_crc(p_805->g_646.s1, "p_805->g_646.s1", print_hash_value);
    transparent_crc(p_805->g_646.s2, "p_805->g_646.s2", print_hash_value);
    transparent_crc(p_805->g_646.s3, "p_805->g_646.s3", print_hash_value);
    transparent_crc(p_805->g_646.s4, "p_805->g_646.s4", print_hash_value);
    transparent_crc(p_805->g_646.s5, "p_805->g_646.s5", print_hash_value);
    transparent_crc(p_805->g_646.s6, "p_805->g_646.s6", print_hash_value);
    transparent_crc(p_805->g_646.s7, "p_805->g_646.s7", print_hash_value);
    transparent_crc(p_805->g_646.s8, "p_805->g_646.s8", print_hash_value);
    transparent_crc(p_805->g_646.s9, "p_805->g_646.s9", print_hash_value);
    transparent_crc(p_805->g_646.sa, "p_805->g_646.sa", print_hash_value);
    transparent_crc(p_805->g_646.sb, "p_805->g_646.sb", print_hash_value);
    transparent_crc(p_805->g_646.sc, "p_805->g_646.sc", print_hash_value);
    transparent_crc(p_805->g_646.sd, "p_805->g_646.sd", print_hash_value);
    transparent_crc(p_805->g_646.se, "p_805->g_646.se", print_hash_value);
    transparent_crc(p_805->g_646.sf, "p_805->g_646.sf", print_hash_value);
    transparent_crc(p_805->g_654.x, "p_805->g_654.x", print_hash_value);
    transparent_crc(p_805->g_654.y, "p_805->g_654.y", print_hash_value);
    transparent_crc(p_805->g_654.z, "p_805->g_654.z", print_hash_value);
    transparent_crc(p_805->g_654.w, "p_805->g_654.w", print_hash_value);
    transparent_crc(p_805->g_655.s0, "p_805->g_655.s0", print_hash_value);
    transparent_crc(p_805->g_655.s1, "p_805->g_655.s1", print_hash_value);
    transparent_crc(p_805->g_655.s2, "p_805->g_655.s2", print_hash_value);
    transparent_crc(p_805->g_655.s3, "p_805->g_655.s3", print_hash_value);
    transparent_crc(p_805->g_655.s4, "p_805->g_655.s4", print_hash_value);
    transparent_crc(p_805->g_655.s5, "p_805->g_655.s5", print_hash_value);
    transparent_crc(p_805->g_655.s6, "p_805->g_655.s6", print_hash_value);
    transparent_crc(p_805->g_655.s7, "p_805->g_655.s7", print_hash_value);
    transparent_crc(p_805->g_683, "p_805->g_683", print_hash_value);
    transparent_crc(p_805->g_707.x, "p_805->g_707.x", print_hash_value);
    transparent_crc(p_805->g_707.y, "p_805->g_707.y", print_hash_value);
    transparent_crc(p_805->g_763.s0, "p_805->g_763.s0", print_hash_value);
    transparent_crc(p_805->g_763.s1, "p_805->g_763.s1", print_hash_value);
    transparent_crc(p_805->g_763.s2, "p_805->g_763.s2", print_hash_value);
    transparent_crc(p_805->g_763.s3, "p_805->g_763.s3", print_hash_value);
    transparent_crc(p_805->g_763.s4, "p_805->g_763.s4", print_hash_value);
    transparent_crc(p_805->g_763.s5, "p_805->g_763.s5", print_hash_value);
    transparent_crc(p_805->g_763.s6, "p_805->g_763.s6", print_hash_value);
    transparent_crc(p_805->g_763.s7, "p_805->g_763.s7", print_hash_value);
    transparent_crc(p_805->g_765.s0, "p_805->g_765.s0", print_hash_value);
    transparent_crc(p_805->g_765.s1, "p_805->g_765.s1", print_hash_value);
    transparent_crc(p_805->g_765.s2, "p_805->g_765.s2", print_hash_value);
    transparent_crc(p_805->g_765.s3, "p_805->g_765.s3", print_hash_value);
    transparent_crc(p_805->g_765.s4, "p_805->g_765.s4", print_hash_value);
    transparent_crc(p_805->g_765.s5, "p_805->g_765.s5", print_hash_value);
    transparent_crc(p_805->g_765.s6, "p_805->g_765.s6", print_hash_value);
    transparent_crc(p_805->g_765.s7, "p_805->g_765.s7", print_hash_value);
    transparent_crc(p_805->g_767.s0, "p_805->g_767.s0", print_hash_value);
    transparent_crc(p_805->g_767.s1, "p_805->g_767.s1", print_hash_value);
    transparent_crc(p_805->g_767.s2, "p_805->g_767.s2", print_hash_value);
    transparent_crc(p_805->g_767.s3, "p_805->g_767.s3", print_hash_value);
    transparent_crc(p_805->g_767.s4, "p_805->g_767.s4", print_hash_value);
    transparent_crc(p_805->g_767.s5, "p_805->g_767.s5", print_hash_value);
    transparent_crc(p_805->g_767.s6, "p_805->g_767.s6", print_hash_value);
    transparent_crc(p_805->g_767.s7, "p_805->g_767.s7", print_hash_value);
    transparent_crc(p_805->g_767.s8, "p_805->g_767.s8", print_hash_value);
    transparent_crc(p_805->g_767.s9, "p_805->g_767.s9", print_hash_value);
    transparent_crc(p_805->g_767.sa, "p_805->g_767.sa", print_hash_value);
    transparent_crc(p_805->g_767.sb, "p_805->g_767.sb", print_hash_value);
    transparent_crc(p_805->g_767.sc, "p_805->g_767.sc", print_hash_value);
    transparent_crc(p_805->g_767.sd, "p_805->g_767.sd", print_hash_value);
    transparent_crc(p_805->g_767.se, "p_805->g_767.se", print_hash_value);
    transparent_crc(p_805->g_767.sf, "p_805->g_767.sf", print_hash_value);
    transparent_crc(p_805->g_787.s0, "p_805->g_787.s0", print_hash_value);
    transparent_crc(p_805->g_787.s1, "p_805->g_787.s1", print_hash_value);
    transparent_crc(p_805->g_787.s2, "p_805->g_787.s2", print_hash_value);
    transparent_crc(p_805->g_787.s3, "p_805->g_787.s3", print_hash_value);
    transparent_crc(p_805->g_787.s4, "p_805->g_787.s4", print_hash_value);
    transparent_crc(p_805->g_787.s5, "p_805->g_787.s5", print_hash_value);
    transparent_crc(p_805->g_787.s6, "p_805->g_787.s6", print_hash_value);
    transparent_crc(p_805->g_787.s7, "p_805->g_787.s7", print_hash_value);
    transparent_crc(p_805->g_787.s8, "p_805->g_787.s8", print_hash_value);
    transparent_crc(p_805->g_787.s9, "p_805->g_787.s9", print_hash_value);
    transparent_crc(p_805->g_787.sa, "p_805->g_787.sa", print_hash_value);
    transparent_crc(p_805->g_787.sb, "p_805->g_787.sb", print_hash_value);
    transparent_crc(p_805->g_787.sc, "p_805->g_787.sc", print_hash_value);
    transparent_crc(p_805->g_787.sd, "p_805->g_787.sd", print_hash_value);
    transparent_crc(p_805->g_787.se, "p_805->g_787.se", print_hash_value);
    transparent_crc(p_805->g_787.sf, "p_805->g_787.sf", print_hash_value);
    transparent_crc(p_805->v_collective, "p_805->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 69; i++)
            transparent_crc(p_805->g_special_values[i + 69 * get_linear_group_id()], "p_805->g_special_values[i + 69 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_805->l_comm_values[get_linear_local_id()], "p_805->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_805->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()], "p_805->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
