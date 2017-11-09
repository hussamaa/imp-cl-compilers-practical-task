// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 71,65,1 -l 71,1,1
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

__constant uint32_t permutations[10][71] = {
{54,47,9,10,6,64,49,44,59,13,50,8,21,63,17,70,26,40,32,41,52,5,3,46,67,38,53,22,11,33,66,4,36,7,30,25,55,18,1,12,39,65,43,34,48,62,19,57,0,29,61,27,28,37,2,45,68,14,69,58,51,60,31,42,16,35,20,15,56,24,23}, // permutation 0
{62,25,14,9,64,38,10,12,49,34,4,3,41,11,67,29,51,24,2,37,21,42,22,27,70,43,68,66,6,65,31,58,55,61,15,32,47,50,53,1,35,46,7,16,8,17,19,45,23,60,48,26,5,39,20,69,28,57,40,33,63,36,52,54,18,30,13,44,56,59,0}, // permutation 1
{54,7,10,15,49,25,50,14,66,68,51,16,19,58,70,2,36,28,38,17,45,0,5,35,27,41,69,61,44,48,63,34,62,52,40,3,29,59,56,4,9,60,30,47,31,26,46,24,18,22,43,55,37,1,53,65,20,32,57,11,67,39,21,13,12,23,8,33,64,6,42}, // permutation 2
{16,8,41,58,26,14,63,40,19,4,43,53,61,42,9,62,3,21,29,51,7,68,2,49,17,23,54,30,60,11,35,37,39,12,13,47,32,59,22,31,27,57,15,28,34,65,48,67,18,64,33,44,55,24,10,38,70,1,66,52,46,56,25,20,5,0,50,45,6,36,69}, // permutation 3
{53,34,61,6,28,2,55,25,52,5,19,69,20,70,48,33,37,8,38,27,49,30,16,44,7,21,56,17,9,14,41,36,22,23,10,43,67,66,3,4,47,59,68,46,24,1,62,63,11,0,29,65,58,50,13,60,51,42,54,35,32,64,39,40,18,12,45,15,26,31,57}, // permutation 4
{30,4,33,13,44,28,24,40,35,23,38,29,3,17,7,57,60,36,8,53,18,1,48,47,58,39,63,10,62,70,68,5,42,11,16,2,56,65,43,41,14,34,12,15,51,67,49,26,31,46,50,61,66,69,45,20,6,52,25,37,21,54,22,32,9,0,55,59,27,64,19}, // permutation 5
{57,58,59,39,33,41,43,23,20,31,62,69,67,35,44,11,54,68,51,47,14,66,60,3,53,26,7,27,4,63,24,22,9,40,30,38,29,10,55,0,56,65,17,15,1,19,42,50,32,36,37,70,2,48,34,13,18,12,61,21,6,45,64,49,5,46,25,8,16,52,28}, // permutation 6
{48,52,15,3,57,24,69,70,0,29,14,17,9,19,65,64,45,22,59,50,53,49,58,5,38,27,16,36,33,11,60,6,30,37,43,18,10,61,54,41,47,23,62,68,67,1,12,56,46,26,32,40,66,44,28,42,4,7,35,21,39,8,55,51,2,31,63,20,34,25,13}, // permutation 7
{65,41,28,22,37,31,56,40,9,69,18,49,42,66,39,19,50,4,35,23,17,13,24,47,10,60,59,34,45,64,48,61,15,70,14,12,2,29,32,1,3,26,5,63,25,52,7,33,21,54,51,6,11,55,30,8,58,16,46,57,68,43,27,53,0,62,67,38,20,44,36}, // permutation 8
{69,34,6,0,38,58,5,42,3,70,27,45,36,12,17,8,21,41,40,28,4,26,62,65,25,63,7,43,46,59,20,57,39,1,11,55,13,49,2,33,52,31,35,16,56,10,47,60,68,66,29,22,54,53,14,64,15,51,32,44,67,19,24,37,50,23,30,48,18,9,61} // permutation 9
};

// Seed: 1952286432

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint32_t g_22;
    VECTOR(int32_t, 2) g_23;
    int32_t *g_37[3];
    uint8_t g_70[5][3];
    int32_t *g_73;
    volatile VECTOR(int16_t, 8) g_102;
    int8_t g_104;
    uint8_t g_110[2][5];
    int8_t g_114;
    uint32_t g_117;
    volatile int32_t g_120[6];
    volatile int32_t *g_119;
    uint64_t g_122[10];
    VECTOR(int16_t, 8) g_129;
    uint16_t g_219;
    uint8_t * volatile g_225;
    uint8_t * volatile * volatile g_224;
    uint16_t g_229;
    int32_t ** volatile g_231;
    uint32_t g_245;
    int16_t g_248;
    int32_t g_272;
    uint64_t g_276;
    int32_t ** volatile g_278;
    int32_t ** volatile g_279;
    volatile VECTOR(int8_t, 16) g_280;
    VECTOR(int8_t, 2) g_281;
    uint16_t g_289;
    uint16_t *g_288;
    int32_t g_297;
    volatile uint32_t g_331;
    int32_t ** volatile g_341;
    uint8_t *g_372;
    int32_t ** volatile g_373;
    int32_t ** volatile g_374[10][7][3];
    int32_t g_416;
    VECTOR(int8_t, 8) g_428;
    VECTOR(uint32_t, 2) g_430;
    VECTOR(uint32_t, 2) g_432;
    VECTOR(uint32_t, 2) g_433;
    volatile VECTOR(uint64_t, 16) g_434;
    volatile VECTOR(uint64_t, 2) g_436;
    volatile VECTOR(int64_t, 4) g_476;
    volatile VECTOR(int64_t, 16) g_477;
    volatile VECTOR(int64_t, 16) g_480;
    uint8_t g_491;
    VECTOR(uint8_t, 2) g_496;
    VECTOR(uint8_t, 8) g_497;
    VECTOR(uint8_t, 4) g_499;
    uint32_t *g_517;
    int32_t ** volatile g_523;
    int32_t ** volatile g_524;
    volatile int8_t *g_543;
    volatile int8_t **g_542;
    volatile int8_t ***g_541;
    VECTOR(uint8_t, 16) g_554;
    volatile int64_t * volatile g_580[10];
    int16_t g_583;
    uint64_t g_590;
    int32_t ** volatile g_591;
    int8_t g_610;
    volatile uint64_t g_613;
    int32_t * volatile g_634;
    volatile int32_t g_644;
    volatile int32_t g_645;
    volatile int32_t *g_643[7];
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
uint32_t  func_1(struct S0 * p_694);
int32_t * func_2(int32_t * p_3, int32_t  p_4, uint32_t  p_5, int8_t  p_6, uint32_t  p_7, struct S0 * p_694);
int32_t * func_8(int8_t  p_9, struct S0 * p_694);
int16_t  func_12(int32_t  p_13, int64_t  p_14, int16_t  p_15, int64_t  p_16, uint32_t  p_17, struct S0 * p_694);
int16_t  func_33(int32_t * p_34, uint64_t  p_35, uint32_t * p_36, struct S0 * p_694);
uint64_t  func_38(int8_t  p_39, struct S0 * p_694);
uint16_t  func_40(uint32_t * p_41, uint16_t  p_42, struct S0 * p_694);
uint32_t * func_43(uint32_t  p_44, int32_t * p_45, uint32_t * p_46, uint32_t * p_47, uint64_t  p_48, struct S0 * p_694);
int16_t  func_53(uint32_t * p_54, int32_t * p_55, struct S0 * p_694);
int8_t  func_56(int32_t  p_57, uint32_t * p_58, uint16_t  p_59, uint32_t * p_60, uint32_t  p_61, struct S0 * p_694);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_694->l_comm_values p_694->g_comm_values p_694->g_23 p_694->g_22 p_694->g_37 p_694->g_70 p_694->g_73 p_694->g_110 p_694->g_114 p_694->g_117 p_694->g_129 p_694->g_224 p_694->g_231 p_694->g_102 p_694->g_219 p_694->g_120 p_694->g_279 p_694->g_297 p_694->g_104 p_694->g_272 p_694->g_331 p_694->g_225 p_694->g_341 p_694->g_288 p_694->g_289 p_694->g_229 p_694->g_281 p_694->g_122 p_694->g_416 p_694->g_590 p_694->g_591 p_694->g_613 p_694->g_280 p_694->g_372 p_694->g_634 p_694->g_480 p_694->g_517 p_694->g_643 p_694->g_433
 * writes: p_694->g_22 p_694->g_70 p_694->g_73 p_694->g_104 p_694->g_110 p_694->g_114 p_694->g_117 p_694->g_119 p_694->g_122 p_694->g_219 p_694->g_229 p_694->l_comm_values p_694->g_276 p_694->g_248 p_694->g_331 p_694->g_372 p_694->g_272 p_694->g_416 p_694->g_590 p_694->g_37 p_694->g_613
 */
uint32_t  func_1(struct S0 * p_694)
{ /* block id: 4 */
    int32_t l_18 = (-5L);
    int16_t l_19[9] = {0x582FL,0x582FL,0x582FL,0x582FL,0x582FL,0x582FL,0x582FL,0x582FL,0x582FL};
    uint32_t *l_20 = (void*)0;
    uint32_t *l_21 = &p_694->g_22;
    VECTOR(int32_t, 16) l_24 = (VECTOR(int32_t, 16))(0x452FA814L, (VECTOR(int32_t, 4))(0x452FA814L, (VECTOR(int32_t, 2))(0x452FA814L, 1L), 1L), 1L, 0x452FA814L, 1L, (VECTOR(int32_t, 2))(0x452FA814L, 1L), (VECTOR(int32_t, 2))(0x452FA814L, 1L), 0x452FA814L, 1L, 0x452FA814L, 1L);
    int8_t *l_646 = &p_694->g_114;
    int32_t **l_680 = &p_694->g_73;
    int i;
    (*l_680) = func_2(func_8(((*l_646) = (func_12(l_18, (l_19[1] != ((*l_21) = p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))])), l_19[1], p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))], (p_694->g_comm_values[p_694->tid] , (1UL ^ ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(p_694->g_23.yy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))((-1L), 0x72C9A130L))))).yyyyxxyyxxxyyyxx, ((VECTOR(int32_t, 4))(l_24.s3813)).wwyxzzzxwzzxxywx))))).s6b37)), 0x040C3F30L)).s31)).hi)), p_694) && (p_694->g_517 != p_694->g_643[0]))), p_694), l_24.sd, l_19[4], l_24.sc, l_19[1], p_694);
    for (p_694->g_117 = 0; (p_694->g_117 < 41); p_694->g_117++)
    { /* block id: 265 */
        if ((atomic_inc(&p_694->g_atomic_input[19 * get_linear_group_id() + 17]) == 1))
        { /* block id: 267 */
            int32_t l_684 = 0x614227EEL;
            int32_t *l_683 = &l_684;
            int32_t *l_685 = &l_684;
            uint32_t l_691 = 4294967295UL;
            l_685 = l_683;
            for (l_684 = 0; (l_684 <= 5); l_684 = safe_add_func_int16_t_s_s(l_684, 1))
            { /* block id: 271 */
                int32_t l_689 = 0x5C943603L;
                int32_t *l_688 = &l_689;
                uint32_t l_690 = 0x4A78F61EL;
                l_685 = l_688;
                (*l_688) = l_690;
            }
            ++l_691;
            unsigned int result = 0;
            result += l_684;
            result += l_691;
            atomic_add(&p_694->g_special_values[19 * get_linear_group_id() + 17], result);
        }
        else
        { /* block id: 276 */
            (1 + 1);
        }
    }
    return p_694->g_433.x;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_2(int32_t * p_3, int32_t  p_4, uint32_t  p_5, int8_t  p_6, uint32_t  p_7, struct S0 * p_694)
{ /* block id: 259 */
    int32_t *l_657 = (void*)0;
    int32_t *l_658 = &p_694->g_416;
    int32_t *l_659 = &p_694->g_416;
    int32_t *l_660 = &p_694->g_416;
    int32_t *l_661 = &p_694->g_416;
    int32_t l_662 = (-1L);
    int32_t *l_663 = (void*)0;
    int32_t *l_664 = &l_662;
    int32_t *l_665 = &l_662;
    int32_t l_666 = 0L;
    int32_t l_667 = 0x20401AB4L;
    int32_t l_668 = 0L;
    int32_t *l_669 = &p_694->g_416;
    int32_t *l_670[2];
    int32_t l_671 = 0x325235C9L;
    int8_t l_672 = (-1L);
    int32_t l_673 = 0x529B3EE5L;
    int64_t l_674 = (-1L);
    int16_t l_675 = 0x41BBL;
    int16_t l_676 = 0x7904L;
    uint32_t l_677 = 0xA086690EL;
    int i;
    for (i = 0; i < 2; i++)
        l_670[i] = &l_667;
    --l_677;
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_341 p_694->g_73 p_694->g_231
 * writes:
 */
int32_t * func_8(int8_t  p_9, struct S0 * p_694)
{ /* block id: 247 */
    uint32_t l_651 = 1UL;
    int32_t l_655 = 0x5AD2592CL;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_694->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 71)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_9, (safe_rshift_func_uint8_t_u_u(l_651, 3)))), 10))][(safe_mod_func_uint32_t_u_u(p_694->tid, 71))]));
    for (p_9 = 19; (p_9 <= 17); --p_9)
    { /* block id: 253 */
        int32_t *l_654 = (void*)0;
        int32_t **l_656 = &l_654;
        l_654 = (void*)0;
        l_655 &= (0x4FL & l_651);
        (*l_656) = (*p_694->g_341);
    }
    return (*p_694->g_231);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_22 p_694->g_37 p_694->g_70 p_694->g_23 p_694->g_73 p_694->g_comm_values p_694->g_110 p_694->l_comm_values p_694->g_114 p_694->g_117 p_694->g_129 p_694->g_224 p_694->g_231 p_694->g_102 p_694->g_219 p_694->g_120 p_694->g_279 p_694->g_297 p_694->g_104 p_694->g_272 p_694->g_331 p_694->g_225 p_694->g_341 p_694->g_288 p_694->g_289 p_694->g_229 p_694->g_281 p_694->g_122 p_694->g_416 p_694->g_590 p_694->g_591 p_694->g_613 p_694->g_280 p_694->g_372 p_694->g_634 p_694->g_480
 * writes: p_694->g_70 p_694->g_73 p_694->g_104 p_694->g_110 p_694->g_114 p_694->g_117 p_694->g_119 p_694->g_122 p_694->g_22 p_694->g_219 p_694->g_229 p_694->l_comm_values p_694->g_276 p_694->g_248 p_694->g_331 p_694->g_372 p_694->g_272 p_694->g_416 p_694->g_590 p_694->g_37 p_694->g_613
 */
int16_t  func_12(int32_t  p_13, int64_t  p_14, int16_t  p_15, int64_t  p_16, uint32_t  p_17, struct S0 * p_694)
{ /* block id: 6 */
    int32_t *l_25 = (void*)0;
    int32_t l_26[2];
    VECTOR(uint64_t, 8) l_435 = (VECTOR(uint64_t, 8))(0x7E3A443F7C68C20FL, (VECTOR(uint64_t, 4))(0x7E3A443F7C68C20FL, (VECTOR(uint64_t, 2))(0x7E3A443F7C68C20FL, 8UL), 8UL), 8UL, 0x7E3A443F7C68C20FL, 8UL);
    VECTOR(int64_t, 8) l_475 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x43B098D437541984L), 0x43B098D437541984L), 0x43B098D437541984L, 0L, 0x43B098D437541984L);
    VECTOR(uint8_t, 4) l_498 = (VECTOR(uint8_t, 4))(0xE0L, (VECTOR(uint8_t, 2))(0xE0L, 9UL), 9UL);
    VECTOR(uint8_t, 2) l_500 = (VECTOR(uint8_t, 2))(0xB2L, 1UL);
    VECTOR(uint8_t, 4) l_501 = (VECTOR(uint8_t, 4))(0x6AL, (VECTOR(uint8_t, 2))(0x6AL, 0x26L), 0x26L);
    VECTOR(uint64_t, 2) l_537 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
    int64_t l_620 = (-6L);
    int32_t *l_635 = &l_26[1];
    int32_t *l_636[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_637 = 0x2C22AE10L;
    int32_t l_638 = (-1L);
    int16_t l_639 = 1L;
    uint64_t l_640 = 0x88637B2579E51546L;
    int i;
    for (i = 0; i < 2; i++)
        l_26[i] = 0x3B8CFF26L;
    if ((l_26[1] = p_694->g_22))
    { /* block id: 8 */
        uint32_t l_51[6] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
        int32_t *l_423 = &p_694->g_297;
        VECTOR(uint32_t, 16) l_431 = (VECTOR(uint32_t, 16))(0x67B505FAL, (VECTOR(uint32_t, 4))(0x67B505FAL, (VECTOR(uint32_t, 2))(0x67B505FAL, 0x40F6B3D5L), 0x40F6B3D5L), 0x40F6B3D5L, 0x67B505FAL, 0x40F6B3D5L, (VECTOR(uint32_t, 2))(0x67B505FAL, 0x40F6B3D5L), (VECTOR(uint32_t, 2))(0x67B505FAL, 0x40F6B3D5L), 0x67B505FAL, 0x40F6B3D5L, 0x67B505FAL, 0x40F6B3D5L);
        int32_t l_451 = (-1L);
        int32_t l_457 = (-3L);
        int32_t l_460 = 4L;
        int32_t l_461 = 0x52F81D00L;
        int32_t l_462[10] = {(-4L),(-1L),(-8L),(-1L),(-4L),(-4L),(-1L),(-8L),(-1L),(-4L)};
        int32_t *l_473 = &l_461;
        VECTOR(int64_t, 8) l_481 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), (-5L)), (-5L)), (-5L), (-4L), (-5L));
        VECTOR(int64_t, 4) l_482 = (VECTOR(int64_t, 4))(0x11444947A9E6469BL, (VECTOR(int64_t, 2))(0x11444947A9E6469BL, 0x645E57118F05971BL), 0x645E57118F05971BL);
        uint64_t *l_531[2][9][1] = {{{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276}},{{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276},{&p_694->g_276}}};
        VECTOR(uint64_t, 8) l_536 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL);
        int i, j, k;
        for (p_14 = 8; (p_14 != (-16)); p_14 = safe_sub_func_int16_t_s_s(p_14, 2))
        { /* block id: 11 */
            VECTOR(int16_t, 2) l_52 = (VECTOR(int16_t, 2))(0L, 0x048CL);
            uint8_t *l_68 = (void*)0;
            uint8_t *l_69 = &p_694->g_70[3][1];
            uint32_t *l_71[1][8];
            VECTOR(int16_t, 8) l_342 = (VECTOR(int16_t, 8))(0x11E3L, (VECTOR(int16_t, 4))(0x11E3L, (VECTOR(int16_t, 2))(0x11E3L, (-5L)), (-5L)), (-5L), 0x11E3L, (-5L));
            int8_t l_414 = 0x47L;
            int32_t *l_415 = &p_694->g_416;
            int32_t l_455 = 0x0A4CDD33L;
            int32_t l_458 = 0x6B7DF624L;
            int32_t l_459 = 0x2A650DD6L;
            int32_t l_463[1][6][1] = {{{0x45B62A28L},{0x45B62A28L},{0x45B62A28L},{0x45B62A28L},{0x45B62A28L},{0x45B62A28L}}};
            int8_t **l_470 = (void*)0;
            int8_t ***l_510[4][7][9] = {{{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470}},{{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470}},{{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470}},{{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,&l_470,(void*)0,&l_470}}};
            VECTOR(uint64_t, 16) l_538 = (VECTOR(uint64_t, 16))(0x751DF8B2501E9A13L, (VECTOR(uint64_t, 4))(0x751DF8B2501E9A13L, (VECTOR(uint64_t, 2))(0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL), 0x7508BDD9A00CFA1DL), 0x7508BDD9A00CFA1DL, 0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL, (VECTOR(uint64_t, 2))(0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL), (VECTOR(uint64_t, 2))(0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL), 0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL, 0x751DF8B2501E9A13L, 0x7508BDD9A00CFA1DL);
            uint32_t l_589 = 4294967288UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                    l_71[i][j] = &l_51[5];
            }
            (*l_415) &= (safe_lshift_func_int8_t_s_s(((~((safe_add_func_uint16_t_u_u((func_33(p_694->g_37[1], func_38((((func_40(func_43((safe_div_func_int16_t_s_s(l_51[5], ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_52.xxxxxxyyyyxxyyxx)).even)).s7)), (func_53((func_56((((p_694->g_37[1] == (((p_14 | ((safe_lshift_func_int16_t_s_u((p_15 , p_694->g_22), 10)) > ((safe_mul_func_uint8_t_u_u(((*l_69) &= l_51[5]), p_694->g_22)) , l_52.x))) >= p_16) , (void*)0)) <= p_694->g_22) , (-5L)), &l_51[5], p_694->g_23.x, l_71[0][5], p_694->g_22, p_694) , &p_694->g_22), &l_26[1], p_694) , (void*)0), p_694->g_37[1], l_25, p_15, p_694), p_694->g_129.s3, p_694) <= l_342.s2) , (*p_694->g_231)) == p_694->g_37[0]), p_694), l_71[0][5], p_694) >= (-2L)), l_414)) & 0x08DBDDD7L)) != l_52.x), 0));
            for (p_694->g_219 = 0; (p_694->g_219 > 41); ++p_694->g_219)
            { /* block id: 173 */
                int32_t **l_424 = &l_423;
                int32_t *l_426 = &p_694->g_297;
                int32_t **l_425 = &l_426;
                int32_t l_427 = 0x2BE5FB28L;
                int8_t *l_429 = &p_694->g_114;
                uint64_t *l_439 = (void*)0;
                uint64_t *l_440 = (void*)0;
                uint64_t *l_441 = &p_694->g_122[7];
                int32_t l_446 = 1L;
                uint64_t *l_447 = (void*)0;
                uint64_t *l_448[10][2][6] = {{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}},{{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0},{&p_694->g_276,&p_694->g_276,&p_694->g_276,(void*)0,(void*)0,(void*)0}}};
                int32_t l_452 = 1L;
                int32_t l_453 = (-1L);
                int32_t l_454 = 0x2AF9614FL;
                int32_t l_456 = (-9L);
                VECTOR(int64_t, 2) l_478 = (VECTOR(int64_t, 2))(1L, 0x1B63D41280E2EE40L);
                VECTOR(int64_t, 16) l_479 = (VECTOR(int64_t, 16))(0x5D1DAF3160F2FE70L, (VECTOR(int64_t, 4))(0x5D1DAF3160F2FE70L, (VECTOR(int64_t, 2))(0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL), 0x3E7AA64407A79DDEL), 0x3E7AA64407A79DDEL, 0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL, (VECTOR(int64_t, 2))(0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL), (VECTOR(int64_t, 2))(0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL), 0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL, 0x5D1DAF3160F2FE70L, 0x3E7AA64407A79DDEL);
                VECTOR(uint8_t, 16) l_502 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x26L), 0x26L), 0x26L, 255UL, 0x26L, (VECTOR(uint8_t, 2))(255UL, 0x26L), (VECTOR(uint8_t, 2))(255UL, 0x26L), 255UL, 0x26L, 255UL, 0x26L);
                int16_t l_548 = 0x18E4L;
                int i, j, k;
                (1 + 1);
            }
            (*l_473) = 0x67CC8CF4L;
            p_694->g_590 |= ((*l_415) & GROUP_DIVERGE(0, 1));
        }
        (*p_694->g_591) = &l_462[6];
    }
    else
    { /* block id: 231 */
        int32_t *l_592 = &l_26[1];
        int32_t **l_593 = &l_592;
        int32_t l_604 = 0x292FDC03L;
        int32_t l_608 = (-1L);
        int32_t l_609 = (-5L);
        int32_t l_611 = 9L;
        int32_t l_612 = 0x7CFA0C43L;
        int32_t l_616 = 0x201AA002L;
        int32_t l_617 = 0x062BB935L;
        int32_t l_618 = 0x07E5ABE9L;
        int32_t l_619 = (-7L);
        int32_t l_621 = 0x603D51E2L;
        int32_t l_622 = (-1L);
        int32_t l_623 = (-5L);
        int32_t l_624 = 0x59A5C03EL;
        int32_t l_625 = 1L;
        int32_t l_626 = 0x4A650550L;
        int32_t l_627 = 0x2FCAD773L;
        int32_t l_628[5][5][4] = {{{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L}},{{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L}},{{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L}},{{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L}},{{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L},{(-1L),0L,0x4D0F77E3L,4L}}};
        int i, j, k;
        (*l_593) = l_592;
        for (p_15 = 7; (p_15 != 10); p_15++)
        { /* block id: 235 */
            int32_t *l_596 = &l_26[1];
            int32_t *l_597 = &l_26[1];
            int32_t *l_598 = &l_26[1];
            int32_t *l_599 = &p_694->g_416;
            int32_t *l_600 = (void*)0;
            int32_t l_601 = 0x3AA3335AL;
            int32_t *l_602 = &l_601;
            int32_t *l_603 = &l_26[1];
            int32_t *l_605 = &l_26[0];
            int32_t *l_606 = &l_604;
            int32_t *l_607[10][10] = {{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416},{&l_26[1],(void*)0,(void*)0,&l_26[0],(void*)0,&l_26[1],&l_26[1],&l_601,&p_694->g_416,&p_694->g_416}};
            uint16_t l_629 = 0x9086L;
            int i, j;
            ++p_694->g_613;
            ++l_629;
        }
        (*l_593) = (*p_694->g_279);
        return p_694->g_280.s0;
    }
    (*p_694->g_634) = (safe_add_func_uint8_t_u_u((&p_694->g_331 != &p_694->g_331), ((*p_694->g_372) &= l_537.x)));
    l_640--;
    return p_694->g_480.s8;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_694->g_73
 */
int16_t  func_33(int32_t * p_34, uint64_t  p_35, uint32_t * p_36, struct S0 * p_694)
{ /* block id: 155 */
    int32_t **l_412 = &p_694->g_73;
    int32_t l_413[8];
    int i;
    for (i = 0; i < 8; i++)
        l_413[i] = 0x2C565FF5L;
    if ((atomic_inc(&p_694->g_atomic_input[19 * get_linear_group_id() + 8]) == 5))
    { /* block id: 157 */
        uint32_t l_405 = 0xB12779A9L;
        uint16_t l_406 = 65530UL;
        uint16_t l_407 = 0UL;
        l_407 |= (l_405 , (((VECTOR(uint64_t, 4))((FAKE_DIVERGE(p_694->global_0_offset, get_global_id(0), 10) , GROUP_DIVERGE(0, 1)), 0xCF50FF82F6E1E827L, 18446744073709551614UL, 0UL)).y , (l_406 |= 1L)));
        for (l_407 = 0; (l_407 == 58); l_407 = safe_add_func_int16_t_s_s(l_407, 1))
        { /* block id: 162 */
            int16_t l_410 = (-1L);
            int16_t l_411 = 0x3F94L;
            l_411 |= l_410;
        }
        unsigned int result = 0;
        result += l_405;
        result += l_406;
        result += l_407;
        atomic_add(&p_694->g_special_values[19 * get_linear_group_id() + 8], result);
    }
    else
    { /* block id: 165 */
        (1 + 1);
    }
    (*l_412) = (void*)0;
    return l_413[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_110 p_694->g_70 p_694->g_224 p_694->g_225 p_694->g_129 p_694->g_281 p_694->g_288 p_694->g_289 p_694->g_229 p_694->g_73 p_694->g_117 p_694->g_122 p_694->g_331
 * writes: p_694->g_110 p_694->g_22 p_694->g_372 p_694->g_73 p_694->g_272
 */
uint64_t  func_38(int8_t  p_39, struct S0 * p_694)
{ /* block id: 143 */
    uint8_t *l_345 = &p_694->g_110[1][2];
    uint32_t *l_370 = &p_694->g_22;
    int32_t l_371[7] = {0x0318557FL,0x0318557FL,0x0318557FL,0x0318557FL,0x0318557FL,0x0318557FL,0x0318557FL};
    int32_t **l_375 = &p_694->g_73;
    VECTOR(uint8_t, 2) l_390 = (VECTOR(uint8_t, 2))(0xFFL, 253UL);
    uint16_t *l_391 = &p_694->g_219;
    uint16_t *l_392 = (void*)0;
    int32_t *l_393 = (void*)0;
    int32_t *l_394 = (void*)0;
    int32_t *l_395 = (void*)0;
    int32_t *l_396 = (void*)0;
    int32_t *l_397 = (void*)0;
    int32_t *l_398[10][7][1] = {{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}},{{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]},{&l_371[4]}}};
    int64_t l_399 = 0L;
    int8_t *l_403 = &p_694->g_104;
    int8_t **l_402 = &l_403;
    int32_t *l_404 = &p_694->g_272;
    int i, j, k;
    (*l_375) = ((safe_mul_func_uint8_t_u_u(((*l_345) &= p_39), (safe_mul_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(((-10L) != (((!(safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(0x32L, 1L)).even, 0)), p_694->g_70[3][1]))) , (p_694->g_372 = ((safe_add_func_int16_t_s_s(((18446744073709551609UL >= ((safe_sub_func_uint64_t_u_u(18446744073709551607UL, (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((void*)0 == (*p_694->g_224)) , ((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), (safe_add_func_uint16_t_u_u((((*l_370) = (((&l_345 == (void*)0) , 0L) <= (-3L))) > 1UL), 0x2FDAL)))) && 0x17311AFCL), 0x4FFEL)) | p_694->g_129.s1) <= p_39) <= p_39), l_371[5])) == FAKE_DIVERGE(p_694->group_0_offset, get_group_id(0), 10))), 4UL)), 5)))) > l_371[5])) > 0xDE920032L), 0L)) , l_345))) == &p_694->g_70[2][0])), p_694->g_281.y)) <= (-1L)) & p_39) , 0x1536L), (*p_694->g_288))))) , &l_371[5]);
    atomic_and(&p_694->l_atomic_reduction[0], ((safe_div_func_int64_t_s_s((**l_375), 18446744073709551615UL)) <= (((((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((VECTOR(int64_t, 8))(0x58E60A4678CE95AAL, (+((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((-1L) & 0x18L) == (**l_375)), 0)), (((((*l_404) = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(247UL, 0xD7L, 0UL, ((VECTOR(uint8_t, 4))(l_390.yxxy)), 0x0FL)).s2, ((l_399 = (((l_391 = l_391) != l_392) || p_39)) & ((FAKE_DIVERGE(p_694->group_1_offset, get_group_id(1), 10) == (safe_lshift_func_int16_t_s_u((((((*l_402) = &p_694->g_114) == &p_39) , FAKE_DIVERGE(p_694->local_0_offset, get_local_id(0), 10)) >= p_694->g_70[3][1]), (**l_375)))) < p_694->g_117))))) , (*p_694->g_73)) > (**l_375)) , 8L))), p_39, (-8L), ((VECTOR(int16_t, 2))(0x2ADCL)), p_694->g_122[7], 1L, (-2L))).s2, (-1L))) <= p_39)), 1L, ((VECTOR(int64_t, 2))(0L)), p_39, 0x5F0B7E14A8554CB2L, 6L)).s4 | p_39), 0x25L)), 4294967290UL)) , p_694->g_129.s5) != p_694->g_331) & (**l_375)) != 5L)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_694->v_collective += p_694->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    atomic_and(&p_694->g_atomic_reduction[get_linear_group_id()], 0x652486B0L + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_694->v_collective += p_694->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_694->g_110[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_73 p_694->g_224 p_694->g_22 p_694->g_23 p_694->g_231 p_694->g_229 p_694->g_102 p_694->g_114 p_694->g_70 p_694->g_129 p_694->g_245 p_694->g_248 p_694->g_122 p_694->g_219 p_694->g_120 p_694->g_comm_values p_694->g_110 p_694->g_279 p_694->l_comm_values p_694->g_297 p_694->g_104 p_694->g_272 p_694->g_331 p_694->g_225 p_694->g_276 p_694->g_341 p_694->g_288 p_694->g_289
 * writes: p_694->g_219 p_694->g_104 p_694->g_73 p_694->g_229 p_694->g_248 p_694->l_comm_values p_694->g_22 p_694->g_122 p_694->g_276 p_694->g_331
 */
uint16_t  func_40(uint32_t * p_41, uint16_t  p_42, struct S0 * p_694)
{ /* block id: 79 */
    uint64_t l_203 = 1UL;
    uint8_t l_217 = 255UL;
    uint16_t *l_218 = &p_694->g_219;
    uint8_t *l_223 = &p_694->g_110[1][2];
    uint8_t **l_222 = &l_223;
    uint16_t *l_228 = &p_694->g_229;
    uint32_t l_230 = 0x9637FF1DL;
    int32_t l_253 = 7L;
    int32_t l_254[7] = {0L,0L,0L,0L,0L,0L,0L};
    int32_t *l_271 = &p_694->g_272;
    VECTOR(int8_t, 4) l_302 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0L), 0L);
    VECTOR(int8_t, 8) l_304 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 5L), 5L), 5L, 3L, 5L);
    int32_t l_319 = 0x4B81EE74L;
    int i;
    ++l_203;
    (*p_694->g_231) = func_43(p_42, p_694->g_73, func_43((0x76103808L && ((safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(p_42, ((*l_218) = (l_217 > 1L)))))), (safe_add_func_uint64_t_u_u(((l_222 != p_694->g_224) , FAKE_DIVERGE(p_694->local_1_offset, get_local_id(1), 10)), (safe_rshift_func_int16_t_s_s(((((p_694->g_22 , l_228) != &p_694->g_229) , (*p_41)) | 1UL), l_203)))))) && 0xE57FL), p_694->g_23.y)), (*p_694->g_73))) && l_230), l_230)) || GROUP_DIVERGE(0, 1))), p_41, p_41, &l_230, p_42, p_694), p_41, l_203, p_694);
    for (p_694->g_229 = (-16); (p_694->g_229 <= 23); ++p_694->g_229)
    { /* block id: 85 */
        uint16_t l_236 = 0UL;
        int16_t *l_246 = (void*)0;
        int16_t *l_247 = &p_694->g_248;
        int32_t *l_277[9] = {&l_254[3],&l_254[3],&l_254[3],&l_254[3],&l_254[3],&l_254[3],&l_254[3],&l_254[3],&l_254[3]};
        uint32_t *l_308 = &p_694->g_117;
        uint32_t l_314 = 0UL;
        int i;
        if ((l_254[2] = ((*p_694->g_73) = ((+(safe_lshift_func_uint16_t_u_s(((l_236 == p_694->g_102.s0) & p_694->g_114), (p_42 < (p_694->g_70[4][0] , (safe_add_func_uint32_t_u_u(((!(safe_lshift_func_uint8_t_u_s(((((p_694->g_129.s0 >= (p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))] = (((VECTOR(int64_t, 4))((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((*l_247) ^= p_694->g_245), 0)) , l_236), (l_253 = (safe_sub_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((p_694->g_129.s7 , 0x5B90L) | p_694->g_122[5]), p_694->g_129.s6)) <= p_694->g_219) & 0x27L), 0L))))), ((VECTOR(int64_t, 2))(0x206A442AE9B445DAL)), 6L)).x , 1L))) , 0xAB55A89C14EC5ED5L) & 2UL) , p_694->g_219), l_236))) >= p_42), 0UL))))))) , p_42))))
        { /* block id: 91 */
            uint8_t **l_286 = &l_223;
            VECTOR(int8_t, 2) l_303 = (VECTOR(int8_t, 2))(0x18L, 0x3FL);
            int32_t l_310 = 0x0EA8EFB1L;
            int32_t l_312 = 0x3809C7C7L;
            int32_t l_325 = (-1L);
            int32_t l_326 = 0x17D14653L;
            int32_t l_327 = 0x341BF8B1L;
            int32_t l_328[3];
            int i;
            for (i = 0; i < 3; i++)
                l_328[i] = 0x4F9E9E73L;
            if (p_42)
            { /* block id: 92 */
                uint8_t l_264 = 246UL;
                uint8_t **l_290 = &l_223;
                int32_t l_294 = 0x1B631020L;
                VECTOR(int8_t, 8) l_298 = (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, (-1L)), (-1L)), (-1L), 0x5AL, (-1L));
                int8_t *l_299 = &p_694->g_104;
                int32_t *l_307 = &l_254[2];
                int32_t **l_309 = &l_307;
                int32_t l_311 = 7L;
                int32_t l_313[7][5][7] = {{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}},{{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L},{9L,(-1L),(-1L),(-7L),0x3C46D2E9L,0x19A0BE3BL,0x74651075L}}};
                int i, j, k;
                for (p_694->g_219 = 0; (p_694->g_219 >= 52); p_694->g_219 = safe_add_func_int16_t_s_s(p_694->g_219, 2))
                { /* block id: 95 */
                    VECTOR(uint32_t, 16) l_263 = (VECTOR(uint32_t, 16))(0xFB92A9F2L, (VECTOR(uint32_t, 4))(0xFB92A9F2L, (VECTOR(uint32_t, 2))(0xFB92A9F2L, 4294967295UL), 4294967295UL), 4294967295UL, 0xFB92A9F2L, 4294967295UL, (VECTOR(uint32_t, 2))(0xFB92A9F2L, 4294967295UL), (VECTOR(uint32_t, 2))(0xFB92A9F2L, 4294967295UL), 0xFB92A9F2L, 4294967295UL, 0xFB92A9F2L, 4294967295UL);
                    uint64_t *l_273 = &l_203;
                    uint64_t *l_274 = &p_694->g_122[7];
                    uint64_t *l_275 = &p_694->g_276;
                    uint16_t **l_287 = &l_218;
                    int8_t *l_291 = (void*)0;
                    int8_t *l_292 = &p_694->g_104;
                    uint16_t *l_293 = &l_236;
                    int i;
                    (*p_694->g_279) = func_43((safe_add_func_int16_t_s_s(p_42, (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_694->local_2_offset, get_local_id(2), 10), 15)), 1)) , ((((((((*p_41) = ((VECTOR(uint32_t, 4))(l_263.sae0d)).z) >= l_264) , p_694->g_114) & ((*l_247) = (((FAKE_DIVERGE(p_694->local_0_offset, get_local_id(0), 10) & ((FAKE_DIVERGE(p_694->group_1_offset, get_group_id(1), 10) <= (((safe_div_func_uint16_t_u_u(((p_694->g_120[5] ^ (p_694->g_comm_values[p_694->tid] | (safe_mod_func_uint32_t_u_u((p_42 , FAKE_DIVERGE(p_694->local_0_offset, get_local_id(0), 10)), (safe_lshift_func_int16_t_s_u((((*l_274) = ((*l_273) = (l_271 == l_271))) & ((*l_275) = 0xE7B4870F3924317FL)), 11)))))) != FAKE_DIVERGE(p_694->local_0_offset, get_local_id(0), 10)), p_42)) <= l_263.se) >= 0x564A67530FD64B41L)) , l_264)) == l_263.sa) | p_42))) >= 65526UL) , &p_694->g_219) != (void*)0)) & p_42))), l_277[1], p_41, &p_694->g_117, p_694->g_110[0][1], p_694);
                    l_294 ^= ((p_42 , ((*l_293) &= (p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))] && ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(p_694->g_280.sc5)).xyyxyxxxyxyyyxxy, ((VECTOR(int8_t, 16))(p_694->g_281.yyyyxxxyyyyyxxxx))))).s18, ((VECTOR(int8_t, 8))(p_694->g_281.y, 1L, ((safe_mod_func_int8_t_s_s(p_42, (safe_mul_func_int8_t_s_s(p_694->g_281.x, ((*l_292) &= (l_286 == ((&p_694->g_219 != (p_694->g_288 = ((*l_287) = &p_694->g_229))) , l_290))))))) < 4294967292UL), 0x32L, 0x3BL, 0x26L, 0x3BL, 4L)).s12))))).yxyyyxyxxyxxxxxy, ((VECTOR(int8_t, 16))(1L))))).s08, ((VECTOR(int8_t, 2))(0x73L))))).xyyxyxyxyxyyyxxy)).sc13d, ((VECTOR(int8_t, 4))(0x35L))))), ((VECTOR(int8_t, 2))(0x12L)), 0L, (-1L), ((VECTOR(int8_t, 2))(0L)), 0L, (-8L), (-2L), (-5L), 0L, 0x7EL)).hi))), ((VECTOR(int8_t, 4))((-1L))), 0x6FL, 5L, 0x4BL, 0L)).sc))) == l_264);
                }
                (*l_309) = func_43((((-10L) && (safe_div_func_int8_t_s_s((p_694->g_297 ^ p_42), ((((p_42 >= ((-5L) & ((*l_299) |= ((VECTOR(int8_t, 4))(l_298.s7460)).y))) >= 8L) , (safe_div_func_int64_t_s_s((l_294 = p_694->g_272), GROUP_DIVERGE(0, 1)))) , ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(0x41L, (-1L))).yyxxyxxy, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(l_302.xw)).yxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, (-10L))).yyyxxxyx)).hi))))).xyzwxxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(l_303.xy)).yxyyxxyx, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(l_304.s6577)).ywzyzxzzwyxxzwxz))).hi))).odd, (int8_t)(safe_div_func_uint32_t_u_u(((0x290AL == 0xDE70L) != 0x7402L), 0x57C5358BL)), (int8_t)l_298.s7))), ((VECTOR(int8_t, 4))(0x0CL)))), (-1L), 0x26L, (-1L), 1L, p_42, (-4L), (-1L), 0x46L)).s25ec)).zzyxyxyw))).s4)))) == p_42), l_307, p_41, l_308, (*l_307), p_694);
                l_314++;
                if (p_42)
                    break;
            }
            else
            { /* block id: 113 */
                uint8_t l_320 = 0x37L;
                int32_t l_323 = 0x3D179C09L;
                int32_t l_324 = 0x686FEFB1L;
                int32_t l_329 = 0x6E610CE6L;
                int32_t l_330[8][9] = {{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)},{2L,2L,0x70D1E4D8L,0x476DE3CCL,(-7L),0L,(-3L),0x632C6048L,(-3L)}};
                int i, j;
                if (l_304.s1)
                    break;
                for (p_42 = 0; (p_42 >= 20); p_42 = safe_add_func_uint16_t_u_u(p_42, 1))
                { /* block id: 117 */
                    (*p_694->g_73) = p_42;
                    return l_312;
                }
                ++l_320;
                p_694->g_331--;
            }
            return p_42;
        }
        else
        { /* block id: 125 */
            (*p_694->g_73) ^= ((((void*)0 == (*p_694->g_224)) , &p_694->g_114) != (void*)0);
            for (p_694->g_276 = 16; (p_694->g_276 >= 48); p_694->g_276 = safe_add_func_uint16_t_u_u(p_694->g_276, 8))
            { /* block id: 129 */
                return l_302.x;
            }
            if (l_254[2])
                continue;
        }
        if ((safe_add_func_uint16_t_u_u(((*l_218)++), p_42)))
        { /* block id: 135 */
            uint32_t l_340 = 4294967295UL;
            return l_340;
        }
        else
        { /* block id: 137 */
            (*p_694->g_341) = l_308;
            return (*p_694->g_288);
        }
    }
    return (*p_694->g_288);
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_104 p_694->g_73 l_26 l_51 p_694->g_22
 * writes: p_694->g_104 l_26 l_51 p_694->g_22
 */
uint32_t * func_43(uint32_t  p_44, int32_t * p_45, uint32_t * p_46, uint32_t * p_47, uint64_t  p_48, struct S0 * p_694)
{ /* block id: 56 */
    uint32_t l_202 = 1UL;
    if ((atomic_inc(&p_694->l_atomic_input[7]) == 9))
    { /* block id: 58 */
        int32_t l_189 = 0x2374C872L;
        int16_t l_195[4][2][5] = {{{(-3L),(-5L),1L,0x438AL,(-5L)},{(-3L),(-5L),1L,0x438AL,(-5L)}},{{(-3L),(-5L),1L,0x438AL,(-5L)},{(-3L),(-5L),1L,0x438AL,(-5L)}},{{(-3L),(-5L),1L,0x438AL,(-5L)},{(-3L),(-5L),1L,0x438AL,(-5L)}},{{(-3L),(-5L),1L,0x438AL,(-5L)},{(-3L),(-5L),1L,0x438AL,(-5L)}}};
        uint32_t l_196 = 0UL;
        uint32_t l_197 = 0xCCA6638CL;
        int i, j, k;
        for (l_189 = 0; (l_189 >= 0); ++l_189)
        { /* block id: 61 */
            int32_t l_193 = 1L;
            int32_t *l_192 = &l_193;
            int32_t *l_194 = &l_193;
            l_194 = (l_192 = (void*)0);
        }
        l_196 ^= l_195[1][0][4];
        --l_197;
        unsigned int result = 0;
        result += l_189;
        int l_195_i0, l_195_i1, l_195_i2;
        for (l_195_i0 = 0; l_195_i0 < 4; l_195_i0++) {
            for (l_195_i1 = 0; l_195_i1 < 2; l_195_i1++) {
                for (l_195_i2 = 0; l_195_i2 < 5; l_195_i2++) {
                    result += l_195[l_195_i0][l_195_i1][l_195_i2];
                }
            }
        }
        result += l_196;
        result += l_197;
        atomic_add(&p_694->l_special_values[7], result);
    }
    else
    { /* block id: 67 */
        (1 + 1);
    }
    for (p_694->g_104 = (-1); (p_694->g_104 > (-7)); p_694->g_104 = safe_sub_func_int8_t_s_s(p_694->g_104, 1))
    { /* block id: 72 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_694->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 71)), permutations[(safe_mod_func_uint32_t_u_u(0UL, 10))][(safe_mod_func_uint32_t_u_u(p_694->tid, 71))]));
        (*p_694->g_73) &= l_202;
    }
    return &p_694->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_73 p_694->g_37 p_694->g_70 p_694->g_102 p_694->g_comm_values p_694->g_110 p_694->g_23 p_694->l_comm_values p_694->g_114 p_694->g_22 p_694->g_117 p_694->g_129 p_694->g_104 p_694->g_122 p_694->g_120
 * writes: p_694->g_73 p_694->g_104 p_694->g_110 p_694->g_114 p_694->g_117 p_694->g_119 p_694->g_122 p_694->g_22
 */
int16_t  func_53(uint32_t * p_54, int32_t * p_55, struct S0 * p_694)
{ /* block id: 17 */
    VECTOR(int32_t, 16) l_74 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4B7C80BFL), 0x4B7C80BFL), 0x4B7C80BFL, 1L, 0x4B7C80BFL, (VECTOR(int32_t, 2))(1L, 0x4B7C80BFL), (VECTOR(int32_t, 2))(1L, 0x4B7C80BFL), 1L, 0x4B7C80BFL, 1L, 0x4B7C80BFL);
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = (void*)0;
    int32_t *l_77[5];
    int16_t l_78 = 0x340CL;
    uint16_t l_79 = 0x1128L;
    int32_t **l_84 = &p_694->g_73;
    uint8_t *l_91 = &p_694->g_70[3][1];
    int16_t *l_103[10][10][2] = {{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}},{{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78},{&l_78,&l_78}}};
    VECTOR(int32_t, 8) l_106 = (VECTOR(int32_t, 8))(0x2B5FF26AL, (VECTOR(int32_t, 4))(0x2B5FF26AL, (VECTOR(int32_t, 2))(0x2B5FF26AL, (-10L)), (-10L)), (-10L), 0x2B5FF26AL, (-10L));
    uint8_t *l_109 = &p_694->g_110[1][2];
    int8_t *l_113 = &p_694->g_114;
    int32_t l_115 = 4L;
    uint32_t *l_116 = &p_694->g_117;
    uint32_t l_118 = 0UL;
    uint32_t l_121 = 1UL;
    uint32_t l_147[3][7] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
    VECTOR(int32_t, 16) l_148 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    VECTOR(int64_t, 8) l_159 = (VECTOR(int64_t, 8))(0x2E77DE1560B61569L, (VECTOR(int64_t, 4))(0x2E77DE1560B61569L, (VECTOR(int64_t, 2))(0x2E77DE1560B61569L, 0x624557DD34D88E7DL), 0x624557DD34D88E7DL), 0x624557DD34D88E7DL, 0x2E77DE1560B61569L, 0x624557DD34D88E7DL);
    int32_t l_176 = (-1L);
    int16_t l_178[6];
    int32_t l_179 = 0x7A1910C9L;
    VECTOR(uint64_t, 2) l_188 = (VECTOR(uint64_t, 2))(0xFED7957FE2178750L, 0UL);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_77[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_178[i] = 1L;
    l_79--;
    p_694->g_119 = (((safe_lshift_func_uint16_t_u_u((+(~(((*l_84) = p_694->g_73) != p_694->g_37[1]))), 11)) == (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((((l_91 == l_91) , (((safe_div_func_uint32_t_u_u(((*l_116) ^= (safe_add_func_uint16_t_u_u(((((((*l_113) &= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(p_694->g_70[3][1], (p_694->g_104 = ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_694->g_102.s52)).xyyyxyxx)).s67)).xxyxxyyxxxxyyyxx)).sfe, (int16_t)2L))).lo))), 2)) ^ (((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_106.s04167575)).s36)), ((VECTOR(int32_t, 2))((-4L), 0x2FC4CEA7L))))).even)) , (((safe_rshift_func_uint8_t_u_s(((*l_109) &= p_694->g_comm_values[p_694->tid]), 7)) > (((0x6DA865B3CABD61F3L | (safe_div_func_int8_t_s_s((((*p_55) > p_694->g_70[3][1]) >= 0x2819L), p_694->g_23.y))) , p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))]) ^ p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))])) ^ p_694->g_comm_values[p_694->tid])) , 0x0F31L)), 10))) & l_115) , p_694->g_22) == 8UL) , 65529UL), p_694->g_23.y))), (*p_54))) == p_694->g_comm_values[p_694->tid]) != 0x5AF5L)) & l_118) && 0x7F50B285FA89317EL), (*p_55))), 0)), p_694->l_comm_values[(safe_mod_func_uint32_t_u_u(p_694->tid, 71))]))) , (void*)0);
    p_694->g_122[7] = (l_121 = ((*p_55) = (*p_55)));
    if ((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_694->g_23.y, (safe_lshift_func_uint8_t_u_u(6UL, 0)))), ((VECTOR(int16_t, 2))(p_694->g_129.s20)).odd)))
    { /* block id: 28 */
        int64_t l_135 = 0x160A43F8495BFAE3L;
        for (p_694->g_104 = 0; (p_694->g_104 != (-9)); p_694->g_104 = safe_sub_func_int64_t_s_s(p_694->g_104, 2))
        { /* block id: 31 */
            uint16_t l_132 = 0x7D85L;
            l_132++;
        }
        return l_135;
    }
    else
    { /* block id: 35 */
        uint32_t l_138[3];
        int32_t *l_141 = &l_115;
        uint8_t *l_144[4];
        uint8_t **l_145 = &l_91;
        int32_t l_146 = (-10L);
        VECTOR(uint8_t, 2) l_151 = (VECTOR(uint8_t, 2))(250UL, 1UL);
        VECTOR(int64_t, 2) l_164 = (VECTOR(int64_t, 2))(0x16177B4B0E1CB3E2L, (-1L));
        int32_t l_168 = 0L;
        int32_t l_170[6][10] = {{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)},{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)},{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)},{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)},{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)},{(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L),(-10L),0x760C5D1EL,0x6DD82FEAL,0x760C5D1EL,(-10L)}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_138[i] = 4294967295UL;
        for (i = 0; i < 4; i++)
            l_144[i] = &p_694->g_70[3][1];
        for (p_694->g_22 = 0; (p_694->g_22 <= 25); p_694->g_22 = safe_add_func_uint32_t_u_u(p_694->g_22, 5))
        { /* block id: 38 */
            --l_138[2];
        }
        l_146 &= ((((*p_55) = (((*l_141) = 0x06379E6BL) , (((VECTOR(uint16_t, 4))(0UL, l_138[2], 65532UL, 0xCF34L)).z <= (l_144[1] != ((*l_145) = &p_694->g_70[4][1]))))) >= GROUP_DIVERGE(2, 1)) & 18446744073709551606UL);
        if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(2L, l_147[0][2], 0L, 0x6CA001A1L)).lo, ((VECTOR(int32_t, 4))(l_148.sf655)).lo))), (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0x04L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_151.xyyxyxyy)).s77)))), 0xB6L)).w, (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_694->g_129.s6, (l_151.y < (((safe_unary_minus_func_uint32_t_u((*p_54))) | (((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_159.s04)), 1L, (-3L))).lo, ((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 8))((safe_mul_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((l_151.x && ((VECTOR(int64_t, 2))(l_164.xy)).lo), (((p_694->g_122[7] >= (safe_mul_func_int8_t_s_s(l_151.x, (p_694->g_73 != l_141)))) & p_694->g_120[4]) <= 0x30AC0004L))) <= 0x430C375795804E8CL) > (-1L)), l_138[2])), 0x377C8831FD11E180L, (-7L), 0L, 0x59C61CCE0B296149L, 1L, (-1L), 0x068C90CB26268CB1L)).hi, (int64_t)(-3L), (int64_t)l_138[2]))).lo, ((VECTOR(int64_t, 2))(1L))))), 0x79A3E397D913FAE4L, 0x7E45614CE61BCC1DL)).even, ((VECTOR(int64_t, 2))(0x2CFF28DE542F5EF4L)), ((VECTOR(int64_t, 2))((-1L)))))).xyyyxxxyyxyxyxyy)).s7885, (int64_t)l_164.y))), ((VECTOR(int64_t, 4))(1L))))).hi))).even != l_151.y)) && FAKE_DIVERGE(p_694->local_0_offset, get_local_id(0), 10))))) ^ l_146), (-5L))))), 0L, ((VECTOR(int32_t, 4))(0L)))).s2)
        { /* block id: 45 */
            int16_t l_167 = (-1L);
            int32_t l_169 = 4L;
            int32_t l_171 = 0x47BE276FL;
            int32_t l_172 = 0x633B61AEL;
            int32_t l_173 = 0x51CEF0ACL;
            int32_t l_174 = 0x2C61B89CL;
            int32_t l_175 = (-1L);
            int32_t l_177 = (-8L);
            int64_t l_180 = 9L;
            int32_t l_181 = 0x5DDED77BL;
            int32_t l_182 = 0x200B79E9L;
            uint32_t l_183 = 4294967295UL;
            l_183++;
        }
        else
        { /* block id: 47 */
            int32_t l_186 = (-8L);
            int32_t **l_187 = &l_75;
            l_186 ^= (*p_55);
            p_55 = ((*l_187) = ((*l_84) = p_55));
            return l_151.x;
        }
    }
    return l_188.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_694->g_23
 * writes: p_694->g_73
 */
int8_t  func_56(int32_t  p_57, uint32_t * p_58, uint16_t  p_59, uint32_t * p_60, uint32_t  p_61, struct S0 * p_694)
{ /* block id: 13 */
    int32_t l_72 = 0x6AD942A2L;
    l_72 = l_72;
    p_694->g_73 = p_60;
    return p_694->g_23.y;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_comm_values[i] = 1;
    struct S0 c_695;
    struct S0* p_694 = &c_695;
    struct S0 c_696 = {
        1UL, // p_694->g_22
        (VECTOR(int32_t, 2))((-1L), 0x0F4F2301L), // p_694->g_23
        {(void*)0,(void*)0,(void*)0}, // p_694->g_37
        {{0xD6L,0xD6L,0x37L},{0xD6L,0xD6L,0x37L},{0xD6L,0xD6L,0x37L},{0xD6L,0xD6L,0x37L},{0xD6L,0xD6L,0x37L}}, // p_694->g_70
        (void*)0, // p_694->g_73
        (VECTOR(int16_t, 8))(0x1B85L, (VECTOR(int16_t, 4))(0x1B85L, (VECTOR(int16_t, 2))(0x1B85L, 0x78A3L), 0x78A3L), 0x78A3L, 0x1B85L, 0x78A3L), // p_694->g_102
        (-6L), // p_694->g_104
        {{0UL,0UL,0x10L,0UL,0UL},{0UL,0UL,0x10L,0UL,0UL}}, // p_694->g_110
        0x2BL, // p_694->g_114
        0x8DCA0F1CL, // p_694->g_117
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_694->g_120
        &p_694->g_120[4], // p_694->g_119
        {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}, // p_694->g_122
        (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L), 1L, 5L, 1L), // p_694->g_129
        0UL, // p_694->g_219
        &p_694->g_70[3][1], // p_694->g_225
        &p_694->g_225, // p_694->g_224
        0x1F42L, // p_694->g_229
        &p_694->g_73, // p_694->g_231
        0xE5FB812EL, // p_694->g_245
        0x5AFFL, // p_694->g_248
        0L, // p_694->g_272
        3UL, // p_694->g_276
        (void*)0, // p_694->g_278
        &p_694->g_73, // p_694->g_279
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x02L), 0x02L), 0x02L, 1L, 0x02L, (VECTOR(int8_t, 2))(1L, 0x02L), (VECTOR(int8_t, 2))(1L, 0x02L), 1L, 0x02L, 1L, 0x02L), // p_694->g_280
        (VECTOR(int8_t, 2))((-1L), 0x5AL), // p_694->g_281
        0x7499L, // p_694->g_289
        &p_694->g_289, // p_694->g_288
        0x64805088L, // p_694->g_297
        4294967291UL, // p_694->g_331
        &p_694->g_73, // p_694->g_341
        &p_694->g_70[4][1], // p_694->g_372
        (void*)0, // p_694->g_373
        {{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}},{{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73},{&p_694->g_37[0],&p_694->g_37[1],&p_694->g_73}}}, // p_694->g_374
        8L, // p_694->g_416
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x46L), 0x46L), 0x46L, 1L, 0x46L), // p_694->g_428
        (VECTOR(uint32_t, 2))(1UL, 0xF4EAA836L), // p_694->g_430
        (VECTOR(uint32_t, 2))(0xC358ADA0L, 6UL), // p_694->g_432
        (VECTOR(uint32_t, 2))(0x640E0A47L, 0UL), // p_694->g_433
        (VECTOR(uint64_t, 16))(0xDEDACC3B839A9A97L, (VECTOR(uint64_t, 4))(0xDEDACC3B839A9A97L, (VECTOR(uint64_t, 2))(0xDEDACC3B839A9A97L, 0xD9853B42015616ADL), 0xD9853B42015616ADL), 0xD9853B42015616ADL, 0xDEDACC3B839A9A97L, 0xD9853B42015616ADL, (VECTOR(uint64_t, 2))(0xDEDACC3B839A9A97L, 0xD9853B42015616ADL), (VECTOR(uint64_t, 2))(0xDEDACC3B839A9A97L, 0xD9853B42015616ADL), 0xDEDACC3B839A9A97L, 0xD9853B42015616ADL, 0xDEDACC3B839A9A97L, 0xD9853B42015616ADL), // p_694->g_434
        (VECTOR(uint64_t, 2))(0UL, 0UL), // p_694->g_436
        (VECTOR(int64_t, 4))(0x0336BB670520B606L, (VECTOR(int64_t, 2))(0x0336BB670520B606L, 0x07C9B9BBFCA88E19L), 0x07C9B9BBFCA88E19L), // p_694->g_476
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x44DC42B038F67D77L), 0x44DC42B038F67D77L), 0x44DC42B038F67D77L, 0L, 0x44DC42B038F67D77L, (VECTOR(int64_t, 2))(0L, 0x44DC42B038F67D77L), (VECTOR(int64_t, 2))(0L, 0x44DC42B038F67D77L), 0L, 0x44DC42B038F67D77L, 0L, 0x44DC42B038F67D77L), // p_694->g_477
        (VECTOR(int64_t, 16))(0x08A38368A586DC91L, (VECTOR(int64_t, 4))(0x08A38368A586DC91L, (VECTOR(int64_t, 2))(0x08A38368A586DC91L, 1L), 1L), 1L, 0x08A38368A586DC91L, 1L, (VECTOR(int64_t, 2))(0x08A38368A586DC91L, 1L), (VECTOR(int64_t, 2))(0x08A38368A586DC91L, 1L), 0x08A38368A586DC91L, 1L, 0x08A38368A586DC91L, 1L), // p_694->g_480
        7UL, // p_694->g_491
        (VECTOR(uint8_t, 2))(0x24L, 9UL), // p_694->g_496
        (VECTOR(uint8_t, 8))(0x13L, (VECTOR(uint8_t, 4))(0x13L, (VECTOR(uint8_t, 2))(0x13L, 0x04L), 0x04L), 0x04L, 0x13L, 0x04L), // p_694->g_497
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x18L), 0x18L), // p_694->g_499
        (void*)0, // p_694->g_517
        (void*)0, // p_694->g_523
        &p_694->g_37[2], // p_694->g_524
        (void*)0, // p_694->g_543
        &p_694->g_543, // p_694->g_542
        &p_694->g_542, // p_694->g_541
        (VECTOR(uint8_t, 16))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 0xFAL), 0xFAL), 0xFAL, 0xAFL, 0xFAL, (VECTOR(uint8_t, 2))(0xAFL, 0xFAL), (VECTOR(uint8_t, 2))(0xAFL, 0xFAL), 0xAFL, 0xFAL, 0xAFL, 0xFAL), // p_694->g_554
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_694->g_580
        1L, // p_694->g_583
        18446744073709551615UL, // p_694->g_590
        &p_694->g_37[1], // p_694->g_591
        0x32L, // p_694->g_610
        0x647AE461EE99C580L, // p_694->g_613
        &p_694->g_416, // p_694->g_634
        (-1L), // p_694->g_644
        0x371066EFL, // p_694->g_645
        {&p_694->g_645,(void*)0,&p_694->g_645,&p_694->g_645,(void*)0,&p_694->g_645,&p_694->g_645}, // p_694->g_643
        0, // p_694->v_collective
        sequence_input[get_global_id(0)], // p_694->global_0_offset
        sequence_input[get_global_id(1)], // p_694->global_1_offset
        sequence_input[get_global_id(2)], // p_694->global_2_offset
        sequence_input[get_local_id(0)], // p_694->local_0_offset
        sequence_input[get_local_id(1)], // p_694->local_1_offset
        sequence_input[get_local_id(2)], // p_694->local_2_offset
        sequence_input[get_group_id(0)], // p_694->group_0_offset
        sequence_input[get_group_id(1)], // p_694->group_1_offset
        sequence_input[get_group_id(2)], // p_694->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 71)), permutations[0][get_linear_local_id()])), // p_694->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_695 = c_696;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_694);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_694->g_22, "p_694->g_22", print_hash_value);
    transparent_crc(p_694->g_23.x, "p_694->g_23.x", print_hash_value);
    transparent_crc(p_694->g_23.y, "p_694->g_23.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_694->g_70[i][j], "p_694->g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_694->g_102.s0, "p_694->g_102.s0", print_hash_value);
    transparent_crc(p_694->g_102.s1, "p_694->g_102.s1", print_hash_value);
    transparent_crc(p_694->g_102.s2, "p_694->g_102.s2", print_hash_value);
    transparent_crc(p_694->g_102.s3, "p_694->g_102.s3", print_hash_value);
    transparent_crc(p_694->g_102.s4, "p_694->g_102.s4", print_hash_value);
    transparent_crc(p_694->g_102.s5, "p_694->g_102.s5", print_hash_value);
    transparent_crc(p_694->g_102.s6, "p_694->g_102.s6", print_hash_value);
    transparent_crc(p_694->g_102.s7, "p_694->g_102.s7", print_hash_value);
    transparent_crc(p_694->g_104, "p_694->g_104", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_694->g_110[i][j], "p_694->g_110[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_694->g_114, "p_694->g_114", print_hash_value);
    transparent_crc(p_694->g_117, "p_694->g_117", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_694->g_120[i], "p_694->g_120[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_694->g_122[i], "p_694->g_122[i]", print_hash_value);

    }
    transparent_crc(p_694->g_129.s0, "p_694->g_129.s0", print_hash_value);
    transparent_crc(p_694->g_129.s1, "p_694->g_129.s1", print_hash_value);
    transparent_crc(p_694->g_129.s2, "p_694->g_129.s2", print_hash_value);
    transparent_crc(p_694->g_129.s3, "p_694->g_129.s3", print_hash_value);
    transparent_crc(p_694->g_129.s4, "p_694->g_129.s4", print_hash_value);
    transparent_crc(p_694->g_129.s5, "p_694->g_129.s5", print_hash_value);
    transparent_crc(p_694->g_129.s6, "p_694->g_129.s6", print_hash_value);
    transparent_crc(p_694->g_129.s7, "p_694->g_129.s7", print_hash_value);
    transparent_crc(p_694->g_219, "p_694->g_219", print_hash_value);
    transparent_crc(p_694->g_229, "p_694->g_229", print_hash_value);
    transparent_crc(p_694->g_245, "p_694->g_245", print_hash_value);
    transparent_crc(p_694->g_248, "p_694->g_248", print_hash_value);
    transparent_crc(p_694->g_272, "p_694->g_272", print_hash_value);
    transparent_crc(p_694->g_276, "p_694->g_276", print_hash_value);
    transparent_crc(p_694->g_280.s0, "p_694->g_280.s0", print_hash_value);
    transparent_crc(p_694->g_280.s1, "p_694->g_280.s1", print_hash_value);
    transparent_crc(p_694->g_280.s2, "p_694->g_280.s2", print_hash_value);
    transparent_crc(p_694->g_280.s3, "p_694->g_280.s3", print_hash_value);
    transparent_crc(p_694->g_280.s4, "p_694->g_280.s4", print_hash_value);
    transparent_crc(p_694->g_280.s5, "p_694->g_280.s5", print_hash_value);
    transparent_crc(p_694->g_280.s6, "p_694->g_280.s6", print_hash_value);
    transparent_crc(p_694->g_280.s7, "p_694->g_280.s7", print_hash_value);
    transparent_crc(p_694->g_280.s8, "p_694->g_280.s8", print_hash_value);
    transparent_crc(p_694->g_280.s9, "p_694->g_280.s9", print_hash_value);
    transparent_crc(p_694->g_280.sa, "p_694->g_280.sa", print_hash_value);
    transparent_crc(p_694->g_280.sb, "p_694->g_280.sb", print_hash_value);
    transparent_crc(p_694->g_280.sc, "p_694->g_280.sc", print_hash_value);
    transparent_crc(p_694->g_280.sd, "p_694->g_280.sd", print_hash_value);
    transparent_crc(p_694->g_280.se, "p_694->g_280.se", print_hash_value);
    transparent_crc(p_694->g_280.sf, "p_694->g_280.sf", print_hash_value);
    transparent_crc(p_694->g_281.x, "p_694->g_281.x", print_hash_value);
    transparent_crc(p_694->g_281.y, "p_694->g_281.y", print_hash_value);
    transparent_crc(p_694->g_289, "p_694->g_289", print_hash_value);
    transparent_crc(p_694->g_297, "p_694->g_297", print_hash_value);
    transparent_crc(p_694->g_331, "p_694->g_331", print_hash_value);
    transparent_crc(p_694->g_416, "p_694->g_416", print_hash_value);
    transparent_crc(p_694->g_428.s0, "p_694->g_428.s0", print_hash_value);
    transparent_crc(p_694->g_428.s1, "p_694->g_428.s1", print_hash_value);
    transparent_crc(p_694->g_428.s2, "p_694->g_428.s2", print_hash_value);
    transparent_crc(p_694->g_428.s3, "p_694->g_428.s3", print_hash_value);
    transparent_crc(p_694->g_428.s4, "p_694->g_428.s4", print_hash_value);
    transparent_crc(p_694->g_428.s5, "p_694->g_428.s5", print_hash_value);
    transparent_crc(p_694->g_428.s6, "p_694->g_428.s6", print_hash_value);
    transparent_crc(p_694->g_428.s7, "p_694->g_428.s7", print_hash_value);
    transparent_crc(p_694->g_430.x, "p_694->g_430.x", print_hash_value);
    transparent_crc(p_694->g_430.y, "p_694->g_430.y", print_hash_value);
    transparent_crc(p_694->g_432.x, "p_694->g_432.x", print_hash_value);
    transparent_crc(p_694->g_432.y, "p_694->g_432.y", print_hash_value);
    transparent_crc(p_694->g_433.x, "p_694->g_433.x", print_hash_value);
    transparent_crc(p_694->g_433.y, "p_694->g_433.y", print_hash_value);
    transparent_crc(p_694->g_434.s0, "p_694->g_434.s0", print_hash_value);
    transparent_crc(p_694->g_434.s1, "p_694->g_434.s1", print_hash_value);
    transparent_crc(p_694->g_434.s2, "p_694->g_434.s2", print_hash_value);
    transparent_crc(p_694->g_434.s3, "p_694->g_434.s3", print_hash_value);
    transparent_crc(p_694->g_434.s4, "p_694->g_434.s4", print_hash_value);
    transparent_crc(p_694->g_434.s5, "p_694->g_434.s5", print_hash_value);
    transparent_crc(p_694->g_434.s6, "p_694->g_434.s6", print_hash_value);
    transparent_crc(p_694->g_434.s7, "p_694->g_434.s7", print_hash_value);
    transparent_crc(p_694->g_434.s8, "p_694->g_434.s8", print_hash_value);
    transparent_crc(p_694->g_434.s9, "p_694->g_434.s9", print_hash_value);
    transparent_crc(p_694->g_434.sa, "p_694->g_434.sa", print_hash_value);
    transparent_crc(p_694->g_434.sb, "p_694->g_434.sb", print_hash_value);
    transparent_crc(p_694->g_434.sc, "p_694->g_434.sc", print_hash_value);
    transparent_crc(p_694->g_434.sd, "p_694->g_434.sd", print_hash_value);
    transparent_crc(p_694->g_434.se, "p_694->g_434.se", print_hash_value);
    transparent_crc(p_694->g_434.sf, "p_694->g_434.sf", print_hash_value);
    transparent_crc(p_694->g_436.x, "p_694->g_436.x", print_hash_value);
    transparent_crc(p_694->g_436.y, "p_694->g_436.y", print_hash_value);
    transparent_crc(p_694->g_476.x, "p_694->g_476.x", print_hash_value);
    transparent_crc(p_694->g_476.y, "p_694->g_476.y", print_hash_value);
    transparent_crc(p_694->g_476.z, "p_694->g_476.z", print_hash_value);
    transparent_crc(p_694->g_476.w, "p_694->g_476.w", print_hash_value);
    transparent_crc(p_694->g_477.s0, "p_694->g_477.s0", print_hash_value);
    transparent_crc(p_694->g_477.s1, "p_694->g_477.s1", print_hash_value);
    transparent_crc(p_694->g_477.s2, "p_694->g_477.s2", print_hash_value);
    transparent_crc(p_694->g_477.s3, "p_694->g_477.s3", print_hash_value);
    transparent_crc(p_694->g_477.s4, "p_694->g_477.s4", print_hash_value);
    transparent_crc(p_694->g_477.s5, "p_694->g_477.s5", print_hash_value);
    transparent_crc(p_694->g_477.s6, "p_694->g_477.s6", print_hash_value);
    transparent_crc(p_694->g_477.s7, "p_694->g_477.s7", print_hash_value);
    transparent_crc(p_694->g_477.s8, "p_694->g_477.s8", print_hash_value);
    transparent_crc(p_694->g_477.s9, "p_694->g_477.s9", print_hash_value);
    transparent_crc(p_694->g_477.sa, "p_694->g_477.sa", print_hash_value);
    transparent_crc(p_694->g_477.sb, "p_694->g_477.sb", print_hash_value);
    transparent_crc(p_694->g_477.sc, "p_694->g_477.sc", print_hash_value);
    transparent_crc(p_694->g_477.sd, "p_694->g_477.sd", print_hash_value);
    transparent_crc(p_694->g_477.se, "p_694->g_477.se", print_hash_value);
    transparent_crc(p_694->g_477.sf, "p_694->g_477.sf", print_hash_value);
    transparent_crc(p_694->g_480.s0, "p_694->g_480.s0", print_hash_value);
    transparent_crc(p_694->g_480.s1, "p_694->g_480.s1", print_hash_value);
    transparent_crc(p_694->g_480.s2, "p_694->g_480.s2", print_hash_value);
    transparent_crc(p_694->g_480.s3, "p_694->g_480.s3", print_hash_value);
    transparent_crc(p_694->g_480.s4, "p_694->g_480.s4", print_hash_value);
    transparent_crc(p_694->g_480.s5, "p_694->g_480.s5", print_hash_value);
    transparent_crc(p_694->g_480.s6, "p_694->g_480.s6", print_hash_value);
    transparent_crc(p_694->g_480.s7, "p_694->g_480.s7", print_hash_value);
    transparent_crc(p_694->g_480.s8, "p_694->g_480.s8", print_hash_value);
    transparent_crc(p_694->g_480.s9, "p_694->g_480.s9", print_hash_value);
    transparent_crc(p_694->g_480.sa, "p_694->g_480.sa", print_hash_value);
    transparent_crc(p_694->g_480.sb, "p_694->g_480.sb", print_hash_value);
    transparent_crc(p_694->g_480.sc, "p_694->g_480.sc", print_hash_value);
    transparent_crc(p_694->g_480.sd, "p_694->g_480.sd", print_hash_value);
    transparent_crc(p_694->g_480.se, "p_694->g_480.se", print_hash_value);
    transparent_crc(p_694->g_480.sf, "p_694->g_480.sf", print_hash_value);
    transparent_crc(p_694->g_491, "p_694->g_491", print_hash_value);
    transparent_crc(p_694->g_496.x, "p_694->g_496.x", print_hash_value);
    transparent_crc(p_694->g_496.y, "p_694->g_496.y", print_hash_value);
    transparent_crc(p_694->g_497.s0, "p_694->g_497.s0", print_hash_value);
    transparent_crc(p_694->g_497.s1, "p_694->g_497.s1", print_hash_value);
    transparent_crc(p_694->g_497.s2, "p_694->g_497.s2", print_hash_value);
    transparent_crc(p_694->g_497.s3, "p_694->g_497.s3", print_hash_value);
    transparent_crc(p_694->g_497.s4, "p_694->g_497.s4", print_hash_value);
    transparent_crc(p_694->g_497.s5, "p_694->g_497.s5", print_hash_value);
    transparent_crc(p_694->g_497.s6, "p_694->g_497.s6", print_hash_value);
    transparent_crc(p_694->g_497.s7, "p_694->g_497.s7", print_hash_value);
    transparent_crc(p_694->g_499.x, "p_694->g_499.x", print_hash_value);
    transparent_crc(p_694->g_499.y, "p_694->g_499.y", print_hash_value);
    transparent_crc(p_694->g_499.z, "p_694->g_499.z", print_hash_value);
    transparent_crc(p_694->g_499.w, "p_694->g_499.w", print_hash_value);
    transparent_crc(p_694->g_554.s0, "p_694->g_554.s0", print_hash_value);
    transparent_crc(p_694->g_554.s1, "p_694->g_554.s1", print_hash_value);
    transparent_crc(p_694->g_554.s2, "p_694->g_554.s2", print_hash_value);
    transparent_crc(p_694->g_554.s3, "p_694->g_554.s3", print_hash_value);
    transparent_crc(p_694->g_554.s4, "p_694->g_554.s4", print_hash_value);
    transparent_crc(p_694->g_554.s5, "p_694->g_554.s5", print_hash_value);
    transparent_crc(p_694->g_554.s6, "p_694->g_554.s6", print_hash_value);
    transparent_crc(p_694->g_554.s7, "p_694->g_554.s7", print_hash_value);
    transparent_crc(p_694->g_554.s8, "p_694->g_554.s8", print_hash_value);
    transparent_crc(p_694->g_554.s9, "p_694->g_554.s9", print_hash_value);
    transparent_crc(p_694->g_554.sa, "p_694->g_554.sa", print_hash_value);
    transparent_crc(p_694->g_554.sb, "p_694->g_554.sb", print_hash_value);
    transparent_crc(p_694->g_554.sc, "p_694->g_554.sc", print_hash_value);
    transparent_crc(p_694->g_554.sd, "p_694->g_554.sd", print_hash_value);
    transparent_crc(p_694->g_554.se, "p_694->g_554.se", print_hash_value);
    transparent_crc(p_694->g_554.sf, "p_694->g_554.sf", print_hash_value);
    transparent_crc(p_694->g_583, "p_694->g_583", print_hash_value);
    transparent_crc(p_694->g_590, "p_694->g_590", print_hash_value);
    transparent_crc(p_694->g_610, "p_694->g_610", print_hash_value);
    transparent_crc(p_694->g_613, "p_694->g_613", print_hash_value);
    transparent_crc(p_694->g_644, "p_694->g_644", print_hash_value);
    transparent_crc(p_694->g_645, "p_694->g_645", print_hash_value);
    transparent_crc(p_694->v_collective, "p_694->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 19; i++)
            transparent_crc(p_694->g_special_values[i + 19 * get_linear_group_id()], "p_694->g_special_values[i + 19 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 19; i++)
            transparent_crc(p_694->l_special_values[i], "p_694->l_special_values[i]", print_hash_value);
    transparent_crc(p_694->l_comm_values[get_linear_local_id()], "p_694->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_694->g_comm_values[get_linear_group_id() * 71 + get_linear_local_id()], "p_694->g_comm_values[get_linear_group_id() * 71 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
