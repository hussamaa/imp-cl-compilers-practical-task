// --atomics 80 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 95,13,7 -l 95,1,1
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

__constant uint32_t permutations[10][95] = {
{39,38,80,62,10,43,63,85,17,74,88,47,52,1,32,56,3,20,86,89,35,69,36,29,5,18,59,44,53,0,42,14,68,51,79,21,73,77,31,30,41,81,65,67,34,78,60,19,84,90,4,66,61,6,82,57,46,26,93,37,48,70,22,8,54,13,23,24,55,94,11,7,25,9,16,76,72,71,75,15,92,58,91,83,40,49,64,12,33,2,27,50,45,28,87}, // permutation 0
{1,19,80,53,42,70,36,83,66,62,79,30,94,28,93,15,25,24,61,92,21,54,13,27,31,50,87,67,6,59,68,69,52,45,89,20,76,44,3,12,46,51,35,33,49,64,56,34,4,29,65,16,2,47,22,77,74,43,81,86,11,26,0,57,73,10,8,72,85,75,7,84,48,14,17,55,82,91,37,23,60,71,63,78,40,5,88,41,90,9,32,39,58,18,38}, // permutation 1
{34,94,88,92,54,44,17,8,69,10,11,50,66,9,16,78,73,72,21,20,46,63,43,28,82,33,15,49,42,55,93,53,51,70,56,37,67,74,61,4,0,81,71,32,65,80,30,57,38,83,59,41,84,90,12,47,31,36,22,24,27,75,7,45,18,86,62,26,35,19,39,52,1,91,87,13,5,58,25,85,79,6,77,3,48,40,2,64,29,23,14,89,60,68,76}, // permutation 2
{43,8,65,91,40,19,69,57,38,54,24,33,32,12,41,84,61,34,72,14,42,74,66,70,88,60,16,39,80,4,89,86,79,0,56,5,71,51,59,62,6,18,31,49,22,64,23,25,83,20,77,76,78,53,75,10,1,93,26,15,45,35,44,28,82,90,48,68,21,87,46,73,30,67,36,47,58,52,92,7,13,3,2,50,55,11,27,81,37,63,9,85,17,29,94}, // permutation 3
{40,13,23,6,35,73,91,20,45,17,0,84,68,10,80,64,44,11,21,24,14,67,52,53,69,65,87,83,9,36,50,39,29,43,78,90,72,33,77,25,75,5,47,31,63,71,89,54,8,28,41,58,2,30,93,3,12,62,55,92,81,27,57,7,59,51,42,46,74,60,26,18,76,22,32,19,70,1,34,56,37,79,4,82,88,85,38,86,15,16,49,94,61,48,66}, // permutation 4
{20,71,38,15,12,79,85,14,73,94,34,92,55,82,65,62,83,42,6,33,74,53,22,88,10,57,58,52,27,46,69,60,61,64,66,8,68,36,63,23,37,93,32,29,7,4,75,16,2,91,31,21,84,44,50,40,26,86,48,5,72,11,41,77,80,70,49,76,67,24,43,45,19,78,89,56,25,81,47,90,17,30,0,9,39,1,3,13,54,59,28,87,18,51,35}, // permutation 5
{61,20,50,71,44,18,41,59,34,11,79,12,74,91,10,15,87,78,38,5,67,86,36,56,62,57,30,55,88,94,49,6,53,3,82,7,22,92,35,27,0,42,14,9,23,84,54,63,68,48,93,13,76,8,21,39,90,66,28,51,24,31,75,80,58,73,1,2,69,77,4,26,25,85,89,83,70,37,29,65,45,40,52,46,32,43,33,72,64,60,17,81,47,19,16}, // permutation 6
{92,34,56,73,57,60,64,1,87,50,16,5,83,71,43,80,33,82,17,22,36,21,65,35,2,88,29,51,6,63,91,7,49,68,69,58,13,45,55,39,61,8,47,0,89,53,77,11,38,3,46,78,54,12,74,86,37,48,62,41,28,23,15,32,31,67,59,19,42,14,76,26,20,44,18,79,94,30,85,10,84,72,25,24,40,93,66,75,81,52,9,90,4,27,70}, // permutation 7
{16,0,3,15,76,48,50,38,86,93,55,44,5,25,22,63,69,67,31,53,79,34,52,1,2,20,49,42,59,18,77,8,4,88,85,82,84,13,24,17,66,12,40,91,26,75,39,81,11,29,9,6,65,74,46,90,19,68,27,71,57,37,83,23,62,7,33,70,94,41,72,28,73,14,61,64,10,58,47,54,43,60,56,51,36,78,21,32,45,87,89,80,30,92,35}, // permutation 8
{89,44,35,62,80,2,1,39,88,33,11,30,70,46,78,65,58,57,90,10,55,60,27,24,79,51,3,9,29,77,83,66,34,52,47,93,12,87,20,31,82,5,40,75,91,76,59,22,28,73,92,53,18,56,32,54,4,16,85,74,45,67,14,86,6,84,13,17,7,72,68,43,63,69,49,26,37,38,41,23,8,71,42,48,21,64,94,0,19,81,15,36,25,61,50} // permutation 9
};

// Seed: 4100148632

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
};

union U1 {
   volatile int8_t * f0;
   int8_t * f1;
};

struct S2 {
    volatile VECTOR(int64_t, 16) g_3;
    volatile VECTOR(int64_t, 16) g_6;
    int32_t g_15;
    int8_t g_38;
    int32_t g_42;
    uint8_t g_84;
    int8_t g_92;
    VECTOR(uint32_t, 16) g_106;
    uint16_t g_108;
    uint16_t g_110;
    int32_t g_112;
    int32_t *g_111[9][8];
    VECTOR(int8_t, 16) g_121;
    VECTOR(int64_t, 4) g_143;
    union U1 g_180;
    int32_t *g_187;
    VECTOR(uint16_t, 16) g_190;
    VECTOR(uint16_t, 2) g_191;
    VECTOR(uint16_t, 2) g_194;
    union U1 *g_197[4];
    union U1 **g_196;
    VECTOR(uint32_t, 8) g_201;
    uint8_t *g_218[3];
    VECTOR(int32_t, 2) g_219;
    VECTOR(int8_t, 4) g_225;
    VECTOR(int8_t, 2) g_227;
    int32_t g_240;
    VECTOR(uint32_t, 8) g_266;
    int32_t g_277;
    int16_t g_287;
    VECTOR(uint16_t, 8) g_296;
    uint32_t *g_299;
    uint32_t * volatile *g_298;
    union U1 g_304[10][5];
    int32_t * volatile *g_353;
    int32_t * volatile **g_352;
    VECTOR(int64_t, 4) g_356;
    uint64_t g_384;
    int64_t g_403;
    VECTOR(int64_t, 2) g_404;
    VECTOR(int64_t, 8) g_408;
    int32_t g_414;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_416);
int16_t  func_7(int32_t  p_8, uint32_t  p_9, int32_t  p_10, int64_t  p_11, struct S2 * p_416);
int64_t  func_18(int32_t  p_19, int32_t  p_20, int32_t * p_21, uint8_t  p_22, int8_t  p_23, struct S2 * p_416);
int64_t  func_30(int32_t * p_31, uint64_t  p_32, int64_t  p_33, struct S2 * p_416);
int32_t * func_34(int32_t * p_35, int8_t * p_36, struct S2 * p_416);
int32_t * func_53(int8_t * p_54, union U1  p_55, int64_t  p_56, int64_t  p_57, int64_t  p_58, struct S2 * p_416);
int8_t * func_59(int8_t  p_60, int32_t ** p_61, struct S2 * p_416);
int8_t  func_62(int64_t  p_63, union U0  p_64, int32_t  p_65, int32_t * p_66, struct S2 * p_416);
union U1  func_73(uint32_t  p_74, struct S2 * p_416);
union U0  func_75(uint64_t  p_76, struct S2 * p_416);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_416->g_3 p_416->g_6 p_416->g_comm_values p_416->g_15 p_416->g_38 p_416->g_227 p_416->g_225 p_416->g_108 p_416->g_287 p_416->g_143 p_416->g_111 p_416->g_42 p_416->g_240 p_416->g_219 p_416->g_187 p_416->g_112 p_416->g_190 p_416->g_356 p_416->g_352 p_416->g_353 p_416->g_201 p_416->g_84 p_416->g_191 p_416->g_403 p_416->g_404 p_416->g_408 p_416->g_296 p_416->l_comm_values
 * writes: p_416->g_15 p_416->g_38 p_416->g_108 p_416->g_277 p_416->g_240 p_416->g_190 p_416->g_112 p_416->g_84 p_416->g_187 p_416->g_287 p_416->g_384 p_416->g_414
 */
uint64_t  func_1(struct S2 * p_416)
{ /* block id: 4 */
    VECTOR(int64_t, 16) l_2 = (VECTOR(int64_t, 16))(0x1BA095A97963BA20L, (VECTOR(int64_t, 4))(0x1BA095A97963BA20L, (VECTOR(int64_t, 2))(0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L), 0x5AE649F6D4A0D461L), 0x5AE649F6D4A0D461L, 0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L, (VECTOR(int64_t, 2))(0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L), (VECTOR(int64_t, 2))(0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L), 0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L, 0x1BA095A97963BA20L, 0x5AE649F6D4A0D461L);
    int32_t *l_14 = &p_416->g_15;
    int8_t *l_37 = &p_416->g_38;
    uint32_t l_359 = 1UL;
    int32_t l_390 = (-1L);
    int64_t l_415 = 0x136F0ECDB3315A43L;
    int i;
    l_415 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(0x74B666A7L, (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_2.se3ff)).hi)))))), 0x34C8F0D0714AD38DL, 0x336DE0184DCC80FCL)), ((VECTOR(int64_t, 16))(p_416->g_3.sf823aaf5bfb66feb)).sfb2c))).xyzxwyxyyxywyxww)).s5 , p_416->g_3.se), ((VECTOR(int32_t, 16))(1L, ((safe_mod_func_uint8_t_u_u((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(7L, 7L)).yyyyxxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_416->g_6.s08bbd188)).s30)).xxyyyxxy))).s30)).even || p_416->g_3.s9) & 18446744073709551608UL) | (p_416->g_414 = func_7(((**p_416->g_353) = ((VECTOR(int32_t, 8))(((safe_lshift_func_int8_t_s_u(((((*l_14) = p_416->g_comm_values[p_416->tid]) && (p_416->g_15 | (safe_mod_func_int64_t_s_s(func_18((safe_rshift_func_uint8_t_u_s((~((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(p_416->g_15, (*l_14))), (*l_14))) ^ func_30(func_34(&p_416->g_15, l_37, p_416), p_416->g_227.y, p_416->g_225.z, p_416))), l_359)), (*l_14), &p_416->g_15, (*l_14), p_416->g_356.z, p_416), 0x45413F15AACC03ACL)))) & p_416->g_191.x), 1)) , (*l_14)), 0L, ((VECTOR(int32_t, 2))(0x43D2FF1BL)), (**p_416->g_353), ((VECTOR(int32_t, 2))(0x3B09EF1EL)), 0L)).s4), l_390, p_416->g_143.x, l_390, p_416))), p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))])) && FAKE_DIVERGE(p_416->global_1_offset, get_global_id(1), 10)), 0x05B6C174L, ((VECTOR(int32_t, 4))(0x579C3070L)), (*l_14), (*l_14), ((VECTOR(int32_t, 2))(0x4A8B75B9L)), 0x58874411L, 0x727B3C5AL, (**p_416->g_353), 0L, 0x7294B579L)).s3, ((VECTOR(int32_t, 4))(0x41152DA7L)), 4L)).even, ((VECTOR(int32_t, 4))((-5L)))))).xyxxyxxxywxxxzxx)).s4;
    return (*l_14);
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_108 p_416->g_403 p_416->g_404 p_416->g_408 p_416->g_296 p_416->g_353 p_416->g_187 p_416->g_240
 * writes: p_416->g_38 p_416->g_187 p_416->g_287 p_416->g_108 p_416->g_384 p_416->g_240
 */
int16_t  func_7(int32_t  p_8, uint32_t  p_9, int32_t  p_10, int64_t  p_11, struct S2 * p_416)
{ /* block id: 143 */
    int32_t *l_391 = &p_416->g_15;
    int8_t *l_392 = (void*)0;
    int32_t **l_393 = &p_416->g_187;
    int16_t *l_394 = &p_416->g_287;
    VECTOR(int16_t, 2) l_395 = (VECTOR(int16_t, 2))(6L, 0x1121L);
    uint16_t *l_400 = &p_416->g_108;
    VECTOR(uint64_t, 4) l_407 = (VECTOR(uint64_t, 4))(0x150F1E4962F43548L, (VECTOR(uint64_t, 2))(0x150F1E4962F43548L, 0x0A40FF83EBA1BA3CL), 0x0A40FF83EBA1BA3CL);
    VECTOR(uint32_t, 2) l_411 = (VECTOR(uint32_t, 2))(1UL, 0xF9EC9A96L);
    uint8_t **l_412 = &p_416->g_218[0];
    uint64_t *l_413 = &p_416->g_384;
    int i;
    (*l_393) = func_34((l_391 = (void*)0), l_392, p_416);
    (**p_416->g_353) ^= (((VECTOR(int16_t, 8))(((*l_394) = p_8), ((VECTOR(int16_t, 4))(l_395.xyxx)), 1L, 0x0221L, (-5L))).s0 & (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((*l_400)--) || (p_416->g_403 , ((((VECTOR(int64_t, 8))(p_416->g_404.yxyyyyxx)).s1 & ((safe_lshift_func_uint8_t_u_s(p_9, (((VECTOR(uint64_t, 16))(l_407.xywwwzxwwwzwyzwx)).s6 | ((VECTOR(int64_t, 16))(p_416->g_408.s5275412110034546)).s4))) >= (((&p_416->g_108 != (void*)0) != (safe_mod_func_int32_t_s_s(p_9, 0x776CCF4FL))) != ((VECTOR(uint32_t, 2))(l_411.yx)).lo))) < p_416->g_296.s4))), 14)), ((*l_413) = (l_412 != l_412)))));
    return (**l_393);
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_15 p_416->g_352 p_416->g_353 p_416->g_187 p_416->g_219 p_416->g_201 p_416->g_227 p_416->g_84
 * writes: p_416->g_112 p_416->g_84
 */
int64_t  func_18(int32_t  p_19, int32_t  p_20, int32_t * p_21, uint8_t  p_22, int8_t  p_23, struct S2 * p_416)
{ /* block id: 135 */
    VECTOR(uint8_t, 2) l_364 = (VECTOR(uint8_t, 2))(255UL, 0xB9L);
    uint64_t *l_383 = &p_416->g_384;
    VECTOR(int32_t, 4) l_385 = (VECTOR(int32_t, 4))(0x53C2F0F6L, (VECTOR(int32_t, 2))(0x53C2F0F6L, (-5L)), (-5L));
    int32_t *l_386[7] = {&p_416->g_15,&p_416->g_240,&p_416->g_15,&p_416->g_15,&p_416->g_240,&p_416->g_15,&p_416->g_15};
    int16_t l_387[10];
    uint8_t *l_388 = &p_416->g_84;
    uint8_t l_389 = 9UL;
    int i;
    for (i = 0; i < 10; i++)
        l_387[i] = 3L;
    l_389 ^= ((&p_416->g_110 == &p_416->g_110) > (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_364.yxxx)).z, 7)), (0x6CAA6AD1D736AF4BL ^ (safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x46L, 255UL)))).hi < (((0x29L & ((*l_388) &= ((VECTOR(uint8_t, 4))(0x7CL, (((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0L, (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(65535UL, (safe_sub_func_int32_t_s_s(((***p_416->g_352) = (*p_21)), (l_387[3] ^= (FAKE_DIVERGE(p_416->local_2_offset, get_local_id(2), 10) , (l_385.w = ((VECTOR(int32_t, 8))((l_383 == (p_22 , &p_416->g_384)), ((VECTOR(int32_t, 2))(0x3A03617FL)), ((VECTOR(int32_t, 2))(4L)), 0x47A90DA0L, 0x1A4FD411L, 0x70C76151L)).s3))))))) >= p_416->g_219.y), p_19)), 0x28L)) <= 0xEED294866EB6EA5EL) >= p_416->g_201.s7))), p_23)) , p_416->g_227.y) , p_19), 255UL, 8UL)).y)) , p_20) , p_22)), 0x14L)), p_19)), 6))))));
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_108 p_416->g_287 p_416->g_143 p_416->g_comm_values p_416->g_111 p_416->g_42 p_416->g_240 p_416->g_219 p_416->g_187 p_416->g_112 p_416->g_190
 * writes: p_416->g_108 p_416->g_277 p_416->g_240 p_416->g_190 p_416->g_112
 */
int64_t  func_30(int32_t * p_31, uint64_t  p_32, int64_t  p_33, struct S2 * p_416)
{ /* block id: 111 */
    VECTOR(int8_t, 2) l_315 = (VECTOR(int8_t, 2))((-1L), 0L);
    int32_t **l_337[9] = {&p_416->g_111[6][2],&p_416->g_187,&p_416->g_111[6][2],&p_416->g_111[6][2],&p_416->g_187,&p_416->g_111[6][2],&p_416->g_111[6][2],&p_416->g_187,&p_416->g_111[6][2]};
    uint32_t *l_349 = (void*)0;
    int i;
    for (p_416->g_108 = (-1); (p_416->g_108 > 26); p_416->g_108 = safe_add_func_uint64_t_u_u(p_416->g_108, 1))
    { /* block id: 114 */
        uint32_t l_314 = 1UL;
        uint32_t **l_321 = &p_416->g_299;
        uint32_t ***l_320 = &l_321;
        VECTOR(uint16_t, 4) l_347 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
        int i;
        for (p_416->g_277 = 27; (p_416->g_277 < 7); p_416->g_277 = safe_sub_func_uint8_t_u_u(p_416->g_277, 5))
        { /* block id: 117 */
            int16_t l_309 = 0x6783L;
            uint16_t *l_332[4];
            int32_t **l_336 = &p_416->g_111[6][2];
            int32_t ***l_338 = &l_337[2];
            VECTOR(uint16_t, 8) l_348 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x0F24L), 0x0F24L), 0x0F24L, 65526UL, 0x0F24L);
            int i;
            for (i = 0; i < 4; i++)
                l_332[i] = (void*)0;
            if (l_309)
            { /* block id: 118 */
                return p_416->g_287;
            }
            else
            { /* block id: 120 */
                (*p_31) = ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s((l_314 <= 0xE4L), ((VECTOR(int8_t, 4))(l_315.yyyx)).y)) && (((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((void*)0 != l_320), p_416->g_143.x)), 5)) < p_32) | p_416->g_comm_values[p_416->tid])) & (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(p_32, (safe_lshift_func_uint8_t_u_s((((void*)0 != p_416->g_111[1][4]) > p_32), 4)))) > l_314) , p_416->g_108), p_32)) && p_416->g_42), p_33)) , l_309), 0UL))), 7)) , l_314);
                (*p_31) &= 0x738472F2L;
                (*p_31) = (l_332[2] == (p_416->g_219.y , &p_416->g_110));
            }
            atomic_min(&p_416->g_atomic_reduction[get_linear_group_id()], (safe_unary_minus_func_uint32_t_u(((safe_mul_func_int8_t_s_s((p_32 , (((((p_416->g_219.x >= (p_33 , FAKE_DIVERGE(p_416->global_0_offset, get_global_id(0), 10))) , l_336) != ((*l_338) = l_337[2])) & (safe_lshift_func_int8_t_s_u(0x6AL, 3))) != 254UL)), 3UL)) >= (((0xEBAF70949F32C234L <= (-3L)) != p_33) , p_33)))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_416->v_collective += p_416->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((*p_416->g_187))
                break;
            (*p_416->g_187) = (safe_div_func_uint16_t_u_u((++p_416->g_190.s9), (safe_mod_func_int64_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(l_347.wzxw)).zxxyzyzxzywwzyyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(8UL, 65535UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(l_348.s2573)), (uint16_t)((((l_349 = func_34(&p_416->g_112, &p_416->g_92, p_416)) == ((safe_mod_func_int32_t_s_s((((void*)0 == p_416->g_352) < p_416->g_92), (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_416->g_356.wxxw)).x, l_347.x)))) , (*l_321))) > ((safe_sub_func_int32_t_s_s((p_416->g_296.s7 || 18446744073709551611UL), l_347.w)) != p_32)) != 0UL)))), p_32, p_33, 0x55BCL, 0UL)), ((VECTOR(uint16_t, 2))(65529UL)), ((VECTOR(uint16_t, 4))(0x4373L)))).s2f1d)).xxyzwzxyxyzyyzwx)).even)).s76)).yxyyxxxxxxxyyxyy))).odd)).s3 & p_33), (-8L)))));
        }
        (*p_416->g_187) &= (*p_31);
    }
    return p_416->g_219.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_38
 * writes: p_416->g_38
 */
int32_t * func_34(int32_t * p_35, int8_t * p_36, struct S2 * p_416)
{ /* block id: 6 */
    uint64_t l_48 = 0x8D911ACA8B1460DEL;
    union U0 l_67 = {0x3AL};
    int32_t *l_68[9] = {&p_416->g_15,(void*)0,&p_416->g_15,&p_416->g_15,(void*)0,&p_416->g_15,&p_416->g_15,(void*)0,&p_416->g_15};
    int i;
    for (p_416->g_38 = 6; (p_416->g_38 < (-1)); --p_416->g_38)
    { /* block id: 9 */
        int32_t *l_41 = &p_416->g_42;
        int32_t *l_43 = &p_416->g_42;
        int32_t *l_44 = &p_416->g_42;
        int32_t *l_45 = &p_416->g_42;
        int32_t *l_46 = &p_416->g_42;
        int32_t *l_47 = &p_416->g_42;
        int32_t **l_51 = &l_44;
        int32_t **l_52 = &l_46;
        union U1 *l_302 = &p_416->g_180;
        union U1 *l_303 = &p_416->g_304[8][0];
        l_48++;
        (*l_52) = ((*l_51) = &p_416->g_15);
    }
    return &p_416->g_240;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_53(int8_t * p_54, union U1  p_55, int64_t  p_56, int64_t  p_57, int64_t  p_58, struct S2 * p_416)
{ /* block id: 106 */
    return &p_416->g_112;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_59(int8_t  p_60, int32_t ** p_61, struct S2 * p_416)
{ /* block id: 16 */
    int8_t l_72[5][3][7] = {{{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L}},{{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L}},{{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L}},{{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L}},{{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L},{0L,0x73L,(-1L),0x73L,0L,(-1L),5L}}};
    int i, j, k;
    for (p_60 = (-27); (p_60 == 17); p_60 = safe_add_func_uint16_t_u_u(p_60, 1))
    { /* block id: 19 */
        if (l_72[4][2][5])
            break;
        if (l_72[0][0][0])
            continue;
    }
    return &p_416->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_42 p_416->g_38
 * writes: p_416->g_42
 */
int8_t  func_62(int64_t  p_63, union U0  p_64, int32_t  p_65, int32_t * p_66, struct S2 * p_416)
{ /* block id: 13 */
    int32_t *l_69 = &p_416->g_42;
    (*l_69) ^= ((void*)0 != &p_66);
    return p_416->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_416->g_comm_values p_416->l_comm_values p_416->g_84 p_416->g_106 p_416->g_15 p_416->g_108 p_416->g_121 p_416->g_38 p_416->g_143 p_416->g_110 p_416->g_190 p_416->g_191 p_416->g_194 p_416->g_92 p_416->g_201 p_416->g_196 p_416->g_180 p_416->g_112 p_416->g_219 p_416->g_225 p_416->g_227 p_416->g_240 p_416->g_266 p_416->g_277 p_416->g_287 p_416->g_296 p_416->g_298
 * writes: p_416->g_84 p_416->g_92 p_416->g_108 p_416->g_110 p_416->g_111 p_416->g_143 p_416->g_187 p_416->g_196 p_416->g_218 p_416->g_197 p_416->g_201 p_416->g_121 p_416->g_277 p_416->g_227 p_416->g_287 p_416->g_298
 */
union U1  func_73(uint32_t  p_74, struct S2 * p_416)
{ /* block id: 24 */
    union U0 l_282 = {248UL};
    int32_t l_283[9][2][3] = {{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}},{{0x656490D0L,0x656490D0L,0x7E5F782EL},{0x656490D0L,0x656490D0L,0x7E5F782EL}}};
    VECTOR(uint16_t, 2) l_290 = (VECTOR(uint16_t, 2))(0x656BL, 0UL);
    uint64_t l_295 = 0x8AA815386C695DF1L;
    union U1 l_301 = {0};
    int i, j, k;
    l_283[5][0][1] |= ((l_282 = (p_74 , func_75(p_416->g_comm_values[p_416->tid], p_416))) , p_74);
    for (p_416->g_277 = 0; (p_416->g_277 == 23); p_416->g_277 = safe_add_func_int8_t_s_s(p_416->g_277, 3))
    { /* block id: 95 */
        int16_t *l_286 = &p_416->g_287;
        int32_t *l_288 = (void*)0;
        VECTOR(uint16_t, 2) l_289 = (VECTOR(uint16_t, 2))(0UL, 0x346FL);
        int32_t *l_297 = &l_283[5][0][2];
        uint32_t * volatile **l_300[6];
        int i;
        for (i = 0; i < 6; i++)
            l_300[i] = &p_416->g_298;
        atomic_min(&p_416->l_atomic_reduction[0], ((((*l_286) |= p_416->g_106.se) , (void*)0) == (l_288 = &p_416->g_15)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_416->v_collective += p_416->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (p_74)
            break;
        (*l_297) = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(l_289.yxxx)).hi, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(0x83F2L, 0x7BDEL)).xxyyyyxx, ((VECTOR(uint16_t, 4))(l_290.xyxx)).ywwzwzyz))).s27, ((VECTOR(uint16_t, 8))(0xA34BL, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(p_74, ((safe_rshift_func_uint8_t_u_u(0x7EL, (safe_lshift_func_int16_t_s_s((0x6DF109158F80D540L ^ (l_295 <= (p_416->g_15 , (*l_288)))), 1)))) == p_74), 6UL, 0x19AAL)).hi, ((VECTOR(uint16_t, 2))(p_416->g_296.s64)), ((VECTOR(uint16_t, 4))(0UL, 0xE959L, 0x557BL, 0x1DC3L)).odd))), 0xA29CL, 0UL, 65533UL, 0x053CL, 0x67C5L)).s44))), ((VECTOR(uint16_t, 2))(0x9EFDL))))), 9UL, 65535UL)).w , l_295);
        p_416->g_298 = p_416->g_298;
    }
    return l_301;
}


/* ------------------------------------------ */
/* 
 * reads : p_416->l_comm_values p_416->g_84 p_416->g_106 p_416->g_15 p_416->g_108 p_416->g_comm_values p_416->g_121 p_416->g_38 p_416->g_143 p_416->g_110 p_416->g_190 p_416->g_191 p_416->g_194 p_416->g_92 p_416->g_201 p_416->g_196 p_416->g_180 p_416->g_112 p_416->g_219 p_416->g_225 p_416->g_227 p_416->g_240 p_416->g_266 p_416->g_277
 * writes: p_416->g_84 p_416->g_92 p_416->g_108 p_416->g_110 p_416->g_111 p_416->g_143 p_416->g_187 p_416->g_196 p_416->g_218 p_416->g_197 p_416->g_201 p_416->g_121 p_416->g_277 p_416->g_227
 */
union U0  func_75(uint64_t  p_76, struct S2 * p_416)
{ /* block id: 25 */
    int32_t l_94 = 1L;
    VECTOR(int16_t, 16) l_97 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int16_t, 2))((-1L), 2L), (VECTOR(int16_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
    int8_t l_118 = 0x39L;
    int32_t l_123 = 5L;
    int32_t l_124 = 3L;
    int32_t l_131 = 1L;
    VECTOR(uint32_t, 8) l_132 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0xA4FECFE7L), 0xA4FECFE7L), 0xA4FECFE7L, 7UL, 0xA4FECFE7L);
    VECTOR(int32_t, 16) l_141 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L, (VECTOR(int32_t, 2))((-1L), 9L), (VECTOR(int32_t, 2))((-1L), 9L), (-1L), 9L, (-1L), 9L);
    int32_t **l_142[6][7][5] = {{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}},{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}},{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}},{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}},{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}},{{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0},{&p_416->g_111[6][2],&p_416->g_111[7][2],(void*)0,&p_416->g_111[8][5],(void*)0}}};
    int64_t *l_144 = (void*)0;
    int64_t *l_145 = (void*)0;
    int64_t *l_146 = (void*)0;
    int8_t *l_149 = (void*)0;
    int8_t *l_150 = (void*)0;
    int8_t *l_151 = &p_416->g_92;
    int64_t l_152 = (-10L);
    union U1 *l_179[5] = {&p_416->g_180,&p_416->g_180,&p_416->g_180,&p_416->g_180,&p_416->g_180};
    VECTOR(uint16_t, 4) l_192 = (VECTOR(uint16_t, 4))(0xC22DL, (VECTOR(uint16_t, 2))(0xC22DL, 0UL), 0UL);
    VECTOR(int8_t, 4) l_231 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 9L), 9L);
    VECTOR(uint32_t, 16) l_248 = (VECTOR(uint32_t, 16))(0x1C2E0762L, (VECTOR(uint32_t, 4))(0x1C2E0762L, (VECTOR(uint32_t, 2))(0x1C2E0762L, 2UL), 2UL), 2UL, 0x1C2E0762L, 2UL, (VECTOR(uint32_t, 2))(0x1C2E0762L, 2UL), (VECTOR(uint32_t, 2))(0x1C2E0762L, 2UL), 0x1C2E0762L, 2UL, 0x1C2E0762L, 2UL);
    uint32_t *l_253 = (void*)0;
    uint32_t *l_254 = (void*)0;
    uint32_t *l_255 = (void*)0;
    uint32_t *l_256 = (void*)0;
    uint32_t *l_257 = (void*)0;
    uint32_t *l_258 = (void*)0;
    uint32_t *l_259[6];
    VECTOR(uint32_t, 2) l_260 = (VECTOR(uint32_t, 2))(0xCC804988L, 0xF0006055L);
    VECTOR(uint32_t, 8) l_265 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xDFC0DDB3L), 0xDFC0DDB3L), 0xDFC0DDB3L, 0UL, 0xDFC0DDB3L);
    VECTOR(uint32_t, 8) l_267 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 6UL), 6UL), 6UL, 4294967294UL, 6UL);
    int16_t *l_276[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_278 = (void*)0;
    int8_t *l_279[2][7][2];
    uint32_t l_280 = 4294967290UL;
    union U0 l_281 = {0x38L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_259[i] = (void*)0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
                l_279[i][j][k] = &l_118;
        }
    }
    for (p_76 = (-1); (p_76 > 12); ++p_76)
    { /* block id: 28 */
        uint8_t *l_83[5][1];
        int8_t *l_91 = &p_416->g_92;
        union U0 l_93 = {0UL};
        uint16_t *l_107 = &p_416->g_108;
        uint16_t *l_109 = &p_416->g_110;
        VECTOR(uint16_t, 8) l_115 = (VECTOR(uint16_t, 8))(0xE934L, (VECTOR(uint16_t, 4))(0xE934L, (VECTOR(uint16_t, 2))(0xE934L, 0x960BL), 0x960BL), 0x960BL, 0xE934L, 0x960BL);
        int32_t *l_122[9][1][6] = {{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}},{{&p_416->g_15,&p_416->g_15,&p_416->g_112,&p_416->g_15,&p_416->g_15,&p_416->g_15}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_83[i][j] = &p_416->g_84;
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_416->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))], ((p_416->g_84--) < (safe_lshift_func_uint16_t_u_s(((((*l_91) = 1L) ^ ((l_93 , l_94) != ((safe_div_func_int16_t_s_s(0L, ((VECTOR(int16_t, 2))(l_97.sfc)).lo)) >= ((*l_109) = ((*l_107) &= (safe_div_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_sub_func_uint32_t_u_u(((!((safe_mod_func_int8_t_s_s(l_93.f0, 0xE1L)) | (((safe_add_func_uint16_t_u_u((l_97.sf > (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x5B503A71L, ((VECTOR(uint32_t, 8))(p_416->g_106.s98f9f05b)).s3, (&p_416->g_38 != l_83[1][0]), ((VECTOR(uint32_t, 2))(0xE0432CFCL)), 4294967288UL, 0x0F1DDE4EL, 7UL)).hi)).even, ((VECTOR(uint32_t, 2))(7UL)), ((VECTOR(uint32_t, 2))(0x758A71D4L))))))), ((VECTOR(uint32_t, 2))(0x06586993L)), ((VECTOR(uint32_t, 2))(1UL))))))).lo > p_416->g_106.sd)), FAKE_DIVERGE(p_416->local_0_offset, get_local_id(0), 10))) == 0x12L) , 0xF5E99A55L))) || p_416->g_15), 0x37717E41L)) || p_416->g_106.s6)))))))) , p_416->g_comm_values[p_416->tid]), p_76))))), 15)), 10))][(safe_mod_func_uint32_t_u_u(p_416->tid, 95))]));
        p_416->g_111[6][2] = (void*)0;
        l_124 = (p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))] , (l_123 = (((((safe_rshift_func_uint8_t_u_s(((p_76 && 1UL) && 18446744073709551615UL), p_76)) ^ (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_115.s33056423)).s06)).lo , ((safe_add_func_uint8_t_u_u(l_118, (safe_rshift_func_int16_t_s_s(0x0437L, (((~((l_94 &= ((VECTOR(int8_t, 8))(p_416->g_121.sb5fddb27)).s0) | (p_416->g_38 == 0L))) , p_416->g_106.se) == p_416->g_121.s9))))) || l_93.f0))) & l_115.s6) , l_118) , p_76)));
        if (l_123)
            break;
    }
    if ((safe_sub_func_int32_t_s_s(((((((*l_151) = (((((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((+(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 0x11L)).yyyyyxxyyyxxxxxy)).lo)).s0 != l_131)) & ((VECTOR(uint32_t, 8))(l_132.s53272263)).s2) <= (((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((VECTOR(int32_t, 2))(l_141.se8)).even || p_416->g_121.s5), ((p_416->g_143.x = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((-1L), (((l_142[4][5][3] != l_142[4][5][3]) >= p_416->g_108) < 0x642D8EDDB30E8A79L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_416->g_143.yx)), 0x21F159A5490C0348L, 1L)), 0x447CF268A7AFDC65L, 0x38B956188C7F9DB9L)).lo)).w) & (((((p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))] & (FAKE_DIVERGE(p_416->group_1_offset, get_group_id(1), 10) <= p_76)) || (p_416->g_106.s1 < (-4L))) < FAKE_DIVERGE(p_416->local_0_offset, get_local_id(0), 10)) > 0x4101L) , p_76)))), p_416->g_84)) != 0L) , p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))]), 7)) || p_76) | p_76)), p_416->g_108)), 0xA8L)) ^ p_76) & p_416->g_38) , 0x1988898DL) < 0x03A45DBAL)) ^ p_416->g_15) & l_152) >= p_416->g_121.sf) < p_76), 0x5C09CCC0L)))
    { /* block id: 44 */
        uint64_t l_163 = 0xC77FDBCA6F5D40A5L;
        int32_t *l_164 = &l_124;
        uint64_t *l_170 = &l_163;
        VECTOR(uint32_t, 16) l_177 = (VECTOR(uint32_t, 16))(0x95DFB6A0L, (VECTOR(uint32_t, 4))(0x95DFB6A0L, (VECTOR(uint32_t, 2))(0x95DFB6A0L, 4294967295UL), 4294967295UL), 4294967295UL, 0x95DFB6A0L, 4294967295UL, (VECTOR(uint32_t, 2))(0x95DFB6A0L, 4294967295UL), (VECTOR(uint32_t, 2))(0x95DFB6A0L, 4294967295UL), 0x95DFB6A0L, 4294967295UL, 0x95DFB6A0L, 4294967295UL);
        VECTOR(uint64_t, 8) l_178 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x0EB1AB0853695344L), 0x0EB1AB0853695344L), 0x0EB1AB0853695344L, 0UL, 0x0EB1AB0853695344L);
        union U0 l_186 = {0x1EL};
        VECTOR(uint16_t, 2) l_193 = (VECTOR(uint16_t, 2))(0x034AL, 0UL);
        VECTOR(uint32_t, 8) l_200 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xFF9CF070L), 0xFF9CF070L), 0xFF9CF070L, 4UL, 0xFF9CF070L);
        int32_t l_209 = 1L;
        uint8_t *l_216 = &p_416->g_84;
        VECTOR(int8_t, 8) l_226 = (VECTOR(int8_t, 8))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 0x55L), 0x55L), 0x55L, 0x3AL, 0x55L);
        VECTOR(int8_t, 8) l_230 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
        VECTOR(int16_t, 16) l_233 = (VECTOR(int16_t, 16))(0x62C6L, (VECTOR(int16_t, 4))(0x62C6L, (VECTOR(int16_t, 2))(0x62C6L, 0x10DDL), 0x10DDL), 0x10DDL, 0x62C6L, 0x10DDL, (VECTOR(int16_t, 2))(0x62C6L, 0x10DDL), (VECTOR(int16_t, 2))(0x62C6L, 0x10DDL), 0x62C6L, 0x10DDL, 0x62C6L, 0x10DDL);
        union U1 *l_241 = &p_416->g_180;
        int i;
        (*l_164) = ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u(((-1L) && 0x9CC3L), ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((!((l_163 == (l_164 != (void*)0)) , ((safe_unary_minus_func_uint16_t_u(0xE011L)) , ((p_416->g_143.z , ((safe_sub_func_uint64_t_u_u(((*l_170)--), p_416->g_108)) > (FAKE_DIVERGE(p_416->global_1_offset, get_global_id(1), 10) != p_416->g_121.se))) || (*l_164))))), p_416->g_110)), GROUP_DIVERGE(1, 1))) & p_76))) && p_76), 8)) , p_76);
        if (((*l_164) = ((((((~(*l_164)) | ((VECTOR(uint64_t, 16))(p_416->g_108, 6UL, 2UL, ((*l_170) = (safe_sub_func_uint64_t_u_u((&l_118 == (l_150 = &p_416->g_92)), 0x39DDAD4C5443C598L))), 0UL, (safe_div_func_uint32_t_u_u(((&p_416->g_15 != &p_416->g_15) , ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0x3AB97BF4L)).yxyyyxyxxyxxyyxy)).hi, ((VECTOR(uint32_t, 8))(l_177.s012d08a2))))).s5), (*l_164))), ((VECTOR(uint64_t, 8))(l_178.s67301012)), 18446744073709551614UL, 0UL)).s9) && p_76) != p_416->g_84) >= 0x5E85E3D3FF892F54L) , 0x4A69D0D3L)))
        { /* block id: 50 */
            union U1 **l_181 = (void*)0;
            union U1 **l_182 = &l_179[1];
            (*l_182) = l_179[1];
        }
        else
        { /* block id: 52 */
            uint16_t l_183[4][5][8] = {{{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL}},{{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL}},{{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL}},{{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL},{65529UL,65534UL,0xE14CL,0x9B7CL,0xE14CL,65534UL,65529UL,65535UL}}};
            uint16_t l_188 = 0UL;
            int32_t l_189[4];
            union U1 **l_195 = &l_179[1];
            uint16_t *l_208 = &p_416->g_108;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_189[i] = 0x4837AE32L;
            --l_183[0][1][1];
            if (p_76)
            { /* block id: 54 */
                return l_186;
            }
            else
            { /* block id: 56 */
                p_416->g_187 = (p_416->g_111[0][4] = (void*)0);
            }
            l_189[2] = l_188;
            l_209 = (((*l_164) = (((*l_208) |= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 0xAFF7L)))).xyxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xC739L, 7UL)), 65535UL, 0xE073L))))).zzzxxxwx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_416->g_190.saf34)), 6UL, ((VECTOR(uint16_t, 2))(p_416->g_191.xy)), ((VECTOR(uint16_t, 2))(l_192.wx)), ((void*)0 != &p_416->g_38), 0UL, ((VECTOR(uint16_t, 2))(l_193.yx)), ((VECTOR(uint16_t, 4))(p_416->g_194.xyxx)).w, 0xD08AL, 8UL)).lo))))).lo, ((VECTOR(uint16_t, 8))(p_416->g_92, p_416->l_comm_values[(safe_mod_func_uint32_t_u_u(p_416->tid, 95))], 0xE38CL, 65535UL, ((p_416->g_196 = l_195) != (void*)0), (0x49F534F0L ^ (safe_mod_func_uint64_t_u_u((((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xA4C9FFC7L, 0UL)), ((VECTOR(uint32_t, 8))(l_200.s16646212)).s5, ((VECTOR(uint32_t, 2))(p_416->g_201.s20)), 4294967295UL, 0xFF0F661DL, 1UL)).s4536131737101106, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((**p_416->g_196) , 0x50L) > p_416->g_194.x), l_183[0][4][0])), 0L)), 0x2261L)) , p_416->g_112), 0UL, 3UL, 0x63829273L)).zyzwwywyxwyxyzyz, ((VECTOR(uint32_t, 16))(0xDA4D15D3L))))).sd0, (uint32_t)GROUP_DIVERGE(1, 1), (uint32_t)p_76))).yyxyxyyxxxyyyyxx))).lo, ((VECTOR(uint32_t, 8))(4294967291UL))))).s1 > p_76), p_76))), 0xCCA6L, 65535UL)).lo))).x) ^ (*l_164))) | p_76);
        }
        for (l_123 = 0; (l_123 == (-7)); l_123--)
        { /* block id: 68 */
            uint8_t **l_217[1];
            VECTOR(int8_t, 8) l_228 = (VECTOR(int8_t, 8))(0x61L, (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 7L), 7L), 7L, 0x61L, 7L);
            int i;
            for (i = 0; i < 1; i++)
                l_217[i] = (void*)0;
            (*l_164) |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(7UL, 13)), FAKE_DIVERGE(p_416->local_1_offset, get_local_id(1), 10)));
            (*l_164) &= ((p_416->g_218[0] = l_216) != &p_416->g_84);
            if (((VECTOR(int32_t, 8))(p_416->g_219.xxyxyyxx)).s5)
            { /* block id: 72 */
                uint32_t l_224 = 1UL;
                VECTOR(int8_t, 4) l_229 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x57L), 0x57L);
                int8_t l_232 = (-1L);
                int i;
                (*l_164) = (safe_rshift_func_int8_t_s_s(((((*l_151) = (((p_76 != (safe_add_func_int8_t_s_s((l_224 , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(p_416->g_225.zyyzzwxw)).hi, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x1CL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_226.s45247701)).s2577025647210366)).lo, ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(p_416->g_227.xyyx)).zzwyyywzxzyzxzww, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(l_228.s42451334)).s5350117371462041, (int8_t)0L))))), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_229.zzzyyzzz)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x0AL, 0x7AL)), (-5L), (-8L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-3L), (-8L))), 0x01L, 0x0AL))))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_230.s1734657201204612)).hi)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-5L), (-1L))), (-10L), 0L)))).sec06)))).yzwwwwyyzxwxwyzz, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_231.zx)), ((((l_232 > ((VECTOR(int16_t, 2))(l_233.s8b)).odd) > (safe_rshift_func_uint16_t_u_s(l_229.x, (l_150 == &p_416->g_84)))) == (safe_mod_func_int64_t_s_s(0x12A1E79B9721220FL, (safe_mod_func_int64_t_s_s((p_416->g_110 & 0xCCC9B7E9D353CF45L), p_416->g_240))))) >= 0x2FDAL), ((VECTOR(int8_t, 8))((-7L))), (-1L), p_76, 0L, (-1L), (-5L))), ((VECTOR(int8_t, 16))(0x3BL))))).sbc25)).even, ((VECTOR(int8_t, 2))(0L))))).yyyy)).wxzwxwywzyyxwyxz, ((VECTOR(int8_t, 16))(0x3CL))))).s6753)), ((VECTOR(int8_t, 4))(0x40L)), ((VECTOR(int8_t, 4))(0x09L))))).zwwwyzywyyzyxyxx, ((VECTOR(int8_t, 16))(3L))))).sdb, (int8_t)p_416->g_227.y, (int8_t)(*l_164)))).xxyx, ((VECTOR(int8_t, 4))((-5L)))))).yxzwxzzxwxzxyzyw))).hi))).s1335132661126343, ((VECTOR(int8_t, 16))(0x15L))))).s2b, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x13L))))).yxxx, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))(1L))))).odd)), 1L)).zxzzxxzzzywxxyyz)).s08c0)).xzyyxyxyyxzxxywx, ((VECTOR(int8_t, 16))(0x41L)), ((VECTOR(int8_t, 16))(0L))))).s7116))).lo)).odd), 0L))) | p_76) != p_416->g_112)) && 0x1BL) == p_416->g_121.s6), 7));
            }
            else
            { /* block id: 75 */
                VECTOR(uint32_t, 16) l_242 = (VECTOR(uint32_t, 16))(0x3A67FCE7L, (VECTOR(uint32_t, 4))(0x3A67FCE7L, (VECTOR(uint32_t, 2))(0x3A67FCE7L, 0xC47F2C3CL), 0xC47F2C3CL), 0xC47F2C3CL, 0x3A67FCE7L, 0xC47F2C3CL, (VECTOR(uint32_t, 2))(0x3A67FCE7L, 0xC47F2C3CL), (VECTOR(uint32_t, 2))(0x3A67FCE7L, 0xC47F2C3CL), 0x3A67FCE7L, 0xC47F2C3CL, 0x3A67FCE7L, 0xC47F2C3CL);
                int i;
                (*p_416->g_196) = l_241;
                if (l_242.s5)
                    continue;
            }
        }
    }
    else
    { /* block id: 80 */
        uint8_t l_243 = 1UL;
        ++l_243;
        p_416->g_111[6][2] = &p_416->g_240;
    }
    l_280 |= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(l_248.s5e14e592)).s1, (safe_mul_func_uint8_t_u_u(((p_416->g_227.y = (((safe_rshift_func_int8_t_s_u(((((VECTOR(uint32_t, 4))((p_416->g_201.s6 |= p_76), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_260.xxxxyyxyxyxxxyxy)).s39)), 0xCE646522L)).z > (safe_rshift_func_int8_t_s_s((p_416->g_121.sf &= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x15L, 1L)), 0x57L, 0x00L)).w), ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_265.s34)))).xxyxyyxyxxxyxyyy)).s461b)).xzzyzwyxzyzyywwx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(p_416->g_266.s15753064)).even, ((VECTOR(uint32_t, 8))(4294967292UL, 0UL, (p_416->g_143.w & 0x2B60L), ((VECTOR(uint32_t, 2))(l_267.s61)), 0x2AEE43E5L, 0xA11EBBABL, 0UL)).odd))).hi)).xyyyxyxxxxyyxxxx, ((VECTOR(uint32_t, 16))((safe_mod_func_int16_t_s_s((-5L), (p_416->g_277 |= (safe_rshift_func_int8_t_s_u(((*l_151) = (p_76 >= ((safe_mul_func_int8_t_s_s(p_416->g_84, p_416->g_227.x)) > ((l_258 == l_256) || p_416->g_143.w)))), 3))))), ((VECTOR(uint32_t, 8))(0x1C445802L)), ((VECTOR(uint32_t, 2))(0xE9BEE199L)), 4294967288UL, 4294967288UL, p_416->g_143.y, 8UL, 9UL))))).se, p_76)) , 0x6EL)))) >= p_76), 3)) & 0x65E2BCA4747B00D7L) < 18446744073709551614UL)) > p_76), p_76))));
    return l_281;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_comm_values[i] = 1;
    struct S2 c_417;
    struct S2* p_416 = &c_417;
    struct S2 c_418 = {
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int64_t, 2))((-1L), (-6L)), (VECTOR(int64_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L)), // p_416->g_3
        (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x355C0C8FBFC75DAAL), 0x355C0C8FBFC75DAAL), 0x355C0C8FBFC75DAAL, (-4L), 0x355C0C8FBFC75DAAL, (VECTOR(int64_t, 2))((-4L), 0x355C0C8FBFC75DAAL), (VECTOR(int64_t, 2))((-4L), 0x355C0C8FBFC75DAAL), (-4L), 0x355C0C8FBFC75DAAL, (-4L), 0x355C0C8FBFC75DAAL), // p_416->g_6
        (-1L), // p_416->g_15
        0x51L, // p_416->g_38
        0x46F73980L, // p_416->g_42
        0x4BL, // p_416->g_84
        1L, // p_416->g_92
        (VECTOR(uint32_t, 16))(0xFF6DE5F4L, (VECTOR(uint32_t, 4))(0xFF6DE5F4L, (VECTOR(uint32_t, 2))(0xFF6DE5F4L, 4294967291UL), 4294967291UL), 4294967291UL, 0xFF6DE5F4L, 4294967291UL, (VECTOR(uint32_t, 2))(0xFF6DE5F4L, 4294967291UL), (VECTOR(uint32_t, 2))(0xFF6DE5F4L, 4294967291UL), 0xFF6DE5F4L, 4294967291UL, 0xFF6DE5F4L, 4294967291UL), // p_416->g_106
        1UL, // p_416->g_108
        0x82FFL, // p_416->g_110
        0L, // p_416->g_112
        {{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0},{&p_416->g_112,(void*)0,&p_416->g_112,&p_416->g_15,&p_416->g_112,(void*)0,&p_416->g_112,(void*)0}}, // p_416->g_111
        (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x31L), 0x31L), 0x31L, 0x0CL, 0x31L, (VECTOR(int8_t, 2))(0x0CL, 0x31L), (VECTOR(int8_t, 2))(0x0CL, 0x31L), 0x0CL, 0x31L, 0x0CL, 0x31L), // p_416->g_121
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1A7C643468661016L), 0x1A7C643468661016L), // p_416->g_143
        {0}, // p_416->g_180
        &p_416->g_112, // p_416->g_187
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), 65533UL), 65533UL, 0UL, 65533UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), (VECTOR(uint16_t, 2))(0UL, 65533UL), 0UL, 65533UL, 0UL, 65533UL), // p_416->g_190
        (VECTOR(uint16_t, 2))(65535UL, 0x5B5EL), // p_416->g_191
        (VECTOR(uint16_t, 2))(0x82D7L, 1UL), // p_416->g_194
        {&p_416->g_180,&p_416->g_180,&p_416->g_180,&p_416->g_180}, // p_416->g_197
        &p_416->g_197[0], // p_416->g_196
        (VECTOR(uint32_t, 8))(0x1917E9C4L, (VECTOR(uint32_t, 4))(0x1917E9C4L, (VECTOR(uint32_t, 2))(0x1917E9C4L, 7UL), 7UL), 7UL, 0x1917E9C4L, 7UL), // p_416->g_201
        {&p_416->g_84,&p_416->g_84,&p_416->g_84}, // p_416->g_218
        (VECTOR(int32_t, 2))(0x34976463L, 0x252AE98FL), // p_416->g_219
        (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, (-2L)), (-2L)), // p_416->g_225
        (VECTOR(int8_t, 2))(5L, 0x31L), // p_416->g_227
        0L, // p_416->g_240
        (VECTOR(uint32_t, 8))(0x46D31012L, (VECTOR(uint32_t, 4))(0x46D31012L, (VECTOR(uint32_t, 2))(0x46D31012L, 0UL), 0UL), 0UL, 0x46D31012L, 0UL), // p_416->g_266
        4L, // p_416->g_277
        0x39A9L, // p_416->g_287
        (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xECE5L), 0xECE5L), 0xECE5L, 5UL, 0xECE5L), // p_416->g_296
        (void*)0, // p_416->g_299
        &p_416->g_299, // p_416->g_298
        {{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0}}}, // p_416->g_304
        &p_416->g_187, // p_416->g_353
        &p_416->g_353, // p_416->g_352
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-6L)), (-6L)), // p_416->g_356
        8UL, // p_416->g_384
        0x31D2784A4188C375L, // p_416->g_403
        (VECTOR(int64_t, 2))(0x3EE20119565B0B30L, (-1L)), // p_416->g_404
        (VECTOR(int64_t, 8))(0x1FFC74E96E200CB1L, (VECTOR(int64_t, 4))(0x1FFC74E96E200CB1L, (VECTOR(int64_t, 2))(0x1FFC74E96E200CB1L, 2L), 2L), 2L, 0x1FFC74E96E200CB1L, 2L), // p_416->g_408
        9L, // p_416->g_414
        0, // p_416->v_collective
        sequence_input[get_global_id(0)], // p_416->global_0_offset
        sequence_input[get_global_id(1)], // p_416->global_1_offset
        sequence_input[get_global_id(2)], // p_416->global_2_offset
        sequence_input[get_local_id(0)], // p_416->local_0_offset
        sequence_input[get_local_id(1)], // p_416->local_1_offset
        sequence_input[get_local_id(2)], // p_416->local_2_offset
        sequence_input[get_group_id(0)], // p_416->group_0_offset
        sequence_input[get_group_id(1)], // p_416->group_1_offset
        sequence_input[get_group_id(2)], // p_416->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[0][get_linear_local_id()])), // p_416->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_417 = c_418;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_416);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_416->g_3.s0, "p_416->g_3.s0", print_hash_value);
    transparent_crc(p_416->g_3.s1, "p_416->g_3.s1", print_hash_value);
    transparent_crc(p_416->g_3.s2, "p_416->g_3.s2", print_hash_value);
    transparent_crc(p_416->g_3.s3, "p_416->g_3.s3", print_hash_value);
    transparent_crc(p_416->g_3.s4, "p_416->g_3.s4", print_hash_value);
    transparent_crc(p_416->g_3.s5, "p_416->g_3.s5", print_hash_value);
    transparent_crc(p_416->g_3.s6, "p_416->g_3.s6", print_hash_value);
    transparent_crc(p_416->g_3.s7, "p_416->g_3.s7", print_hash_value);
    transparent_crc(p_416->g_3.s8, "p_416->g_3.s8", print_hash_value);
    transparent_crc(p_416->g_3.s9, "p_416->g_3.s9", print_hash_value);
    transparent_crc(p_416->g_3.sa, "p_416->g_3.sa", print_hash_value);
    transparent_crc(p_416->g_3.sb, "p_416->g_3.sb", print_hash_value);
    transparent_crc(p_416->g_3.sc, "p_416->g_3.sc", print_hash_value);
    transparent_crc(p_416->g_3.sd, "p_416->g_3.sd", print_hash_value);
    transparent_crc(p_416->g_3.se, "p_416->g_3.se", print_hash_value);
    transparent_crc(p_416->g_3.sf, "p_416->g_3.sf", print_hash_value);
    transparent_crc(p_416->g_6.s0, "p_416->g_6.s0", print_hash_value);
    transparent_crc(p_416->g_6.s1, "p_416->g_6.s1", print_hash_value);
    transparent_crc(p_416->g_6.s2, "p_416->g_6.s2", print_hash_value);
    transparent_crc(p_416->g_6.s3, "p_416->g_6.s3", print_hash_value);
    transparent_crc(p_416->g_6.s4, "p_416->g_6.s4", print_hash_value);
    transparent_crc(p_416->g_6.s5, "p_416->g_6.s5", print_hash_value);
    transparent_crc(p_416->g_6.s6, "p_416->g_6.s6", print_hash_value);
    transparent_crc(p_416->g_6.s7, "p_416->g_6.s7", print_hash_value);
    transparent_crc(p_416->g_6.s8, "p_416->g_6.s8", print_hash_value);
    transparent_crc(p_416->g_6.s9, "p_416->g_6.s9", print_hash_value);
    transparent_crc(p_416->g_6.sa, "p_416->g_6.sa", print_hash_value);
    transparent_crc(p_416->g_6.sb, "p_416->g_6.sb", print_hash_value);
    transparent_crc(p_416->g_6.sc, "p_416->g_6.sc", print_hash_value);
    transparent_crc(p_416->g_6.sd, "p_416->g_6.sd", print_hash_value);
    transparent_crc(p_416->g_6.se, "p_416->g_6.se", print_hash_value);
    transparent_crc(p_416->g_6.sf, "p_416->g_6.sf", print_hash_value);
    transparent_crc(p_416->g_15, "p_416->g_15", print_hash_value);
    transparent_crc(p_416->g_38, "p_416->g_38", print_hash_value);
    transparent_crc(p_416->g_42, "p_416->g_42", print_hash_value);
    transparent_crc(p_416->g_84, "p_416->g_84", print_hash_value);
    transparent_crc(p_416->g_92, "p_416->g_92", print_hash_value);
    transparent_crc(p_416->g_106.s0, "p_416->g_106.s0", print_hash_value);
    transparent_crc(p_416->g_106.s1, "p_416->g_106.s1", print_hash_value);
    transparent_crc(p_416->g_106.s2, "p_416->g_106.s2", print_hash_value);
    transparent_crc(p_416->g_106.s3, "p_416->g_106.s3", print_hash_value);
    transparent_crc(p_416->g_106.s4, "p_416->g_106.s4", print_hash_value);
    transparent_crc(p_416->g_106.s5, "p_416->g_106.s5", print_hash_value);
    transparent_crc(p_416->g_106.s6, "p_416->g_106.s6", print_hash_value);
    transparent_crc(p_416->g_106.s7, "p_416->g_106.s7", print_hash_value);
    transparent_crc(p_416->g_106.s8, "p_416->g_106.s8", print_hash_value);
    transparent_crc(p_416->g_106.s9, "p_416->g_106.s9", print_hash_value);
    transparent_crc(p_416->g_106.sa, "p_416->g_106.sa", print_hash_value);
    transparent_crc(p_416->g_106.sb, "p_416->g_106.sb", print_hash_value);
    transparent_crc(p_416->g_106.sc, "p_416->g_106.sc", print_hash_value);
    transparent_crc(p_416->g_106.sd, "p_416->g_106.sd", print_hash_value);
    transparent_crc(p_416->g_106.se, "p_416->g_106.se", print_hash_value);
    transparent_crc(p_416->g_106.sf, "p_416->g_106.sf", print_hash_value);
    transparent_crc(p_416->g_108, "p_416->g_108", print_hash_value);
    transparent_crc(p_416->g_110, "p_416->g_110", print_hash_value);
    transparent_crc(p_416->g_112, "p_416->g_112", print_hash_value);
    transparent_crc(p_416->g_121.s0, "p_416->g_121.s0", print_hash_value);
    transparent_crc(p_416->g_121.s1, "p_416->g_121.s1", print_hash_value);
    transparent_crc(p_416->g_121.s2, "p_416->g_121.s2", print_hash_value);
    transparent_crc(p_416->g_121.s3, "p_416->g_121.s3", print_hash_value);
    transparent_crc(p_416->g_121.s4, "p_416->g_121.s4", print_hash_value);
    transparent_crc(p_416->g_121.s5, "p_416->g_121.s5", print_hash_value);
    transparent_crc(p_416->g_121.s6, "p_416->g_121.s6", print_hash_value);
    transparent_crc(p_416->g_121.s7, "p_416->g_121.s7", print_hash_value);
    transparent_crc(p_416->g_121.s8, "p_416->g_121.s8", print_hash_value);
    transparent_crc(p_416->g_121.s9, "p_416->g_121.s9", print_hash_value);
    transparent_crc(p_416->g_121.sa, "p_416->g_121.sa", print_hash_value);
    transparent_crc(p_416->g_121.sb, "p_416->g_121.sb", print_hash_value);
    transparent_crc(p_416->g_121.sc, "p_416->g_121.sc", print_hash_value);
    transparent_crc(p_416->g_121.sd, "p_416->g_121.sd", print_hash_value);
    transparent_crc(p_416->g_121.se, "p_416->g_121.se", print_hash_value);
    transparent_crc(p_416->g_121.sf, "p_416->g_121.sf", print_hash_value);
    transparent_crc(p_416->g_143.x, "p_416->g_143.x", print_hash_value);
    transparent_crc(p_416->g_143.y, "p_416->g_143.y", print_hash_value);
    transparent_crc(p_416->g_143.z, "p_416->g_143.z", print_hash_value);
    transparent_crc(p_416->g_143.w, "p_416->g_143.w", print_hash_value);
    transparent_crc(p_416->g_190.s0, "p_416->g_190.s0", print_hash_value);
    transparent_crc(p_416->g_190.s1, "p_416->g_190.s1", print_hash_value);
    transparent_crc(p_416->g_190.s2, "p_416->g_190.s2", print_hash_value);
    transparent_crc(p_416->g_190.s3, "p_416->g_190.s3", print_hash_value);
    transparent_crc(p_416->g_190.s4, "p_416->g_190.s4", print_hash_value);
    transparent_crc(p_416->g_190.s5, "p_416->g_190.s5", print_hash_value);
    transparent_crc(p_416->g_190.s6, "p_416->g_190.s6", print_hash_value);
    transparent_crc(p_416->g_190.s7, "p_416->g_190.s7", print_hash_value);
    transparent_crc(p_416->g_190.s8, "p_416->g_190.s8", print_hash_value);
    transparent_crc(p_416->g_190.s9, "p_416->g_190.s9", print_hash_value);
    transparent_crc(p_416->g_190.sa, "p_416->g_190.sa", print_hash_value);
    transparent_crc(p_416->g_190.sb, "p_416->g_190.sb", print_hash_value);
    transparent_crc(p_416->g_190.sc, "p_416->g_190.sc", print_hash_value);
    transparent_crc(p_416->g_190.sd, "p_416->g_190.sd", print_hash_value);
    transparent_crc(p_416->g_190.se, "p_416->g_190.se", print_hash_value);
    transparent_crc(p_416->g_190.sf, "p_416->g_190.sf", print_hash_value);
    transparent_crc(p_416->g_191.x, "p_416->g_191.x", print_hash_value);
    transparent_crc(p_416->g_191.y, "p_416->g_191.y", print_hash_value);
    transparent_crc(p_416->g_194.x, "p_416->g_194.x", print_hash_value);
    transparent_crc(p_416->g_194.y, "p_416->g_194.y", print_hash_value);
    transparent_crc(p_416->g_201.s0, "p_416->g_201.s0", print_hash_value);
    transparent_crc(p_416->g_201.s1, "p_416->g_201.s1", print_hash_value);
    transparent_crc(p_416->g_201.s2, "p_416->g_201.s2", print_hash_value);
    transparent_crc(p_416->g_201.s3, "p_416->g_201.s3", print_hash_value);
    transparent_crc(p_416->g_201.s4, "p_416->g_201.s4", print_hash_value);
    transparent_crc(p_416->g_201.s5, "p_416->g_201.s5", print_hash_value);
    transparent_crc(p_416->g_201.s6, "p_416->g_201.s6", print_hash_value);
    transparent_crc(p_416->g_201.s7, "p_416->g_201.s7", print_hash_value);
    transparent_crc(p_416->g_219.x, "p_416->g_219.x", print_hash_value);
    transparent_crc(p_416->g_219.y, "p_416->g_219.y", print_hash_value);
    transparent_crc(p_416->g_225.x, "p_416->g_225.x", print_hash_value);
    transparent_crc(p_416->g_225.y, "p_416->g_225.y", print_hash_value);
    transparent_crc(p_416->g_225.z, "p_416->g_225.z", print_hash_value);
    transparent_crc(p_416->g_225.w, "p_416->g_225.w", print_hash_value);
    transparent_crc(p_416->g_227.x, "p_416->g_227.x", print_hash_value);
    transparent_crc(p_416->g_227.y, "p_416->g_227.y", print_hash_value);
    transparent_crc(p_416->g_240, "p_416->g_240", print_hash_value);
    transparent_crc(p_416->g_266.s0, "p_416->g_266.s0", print_hash_value);
    transparent_crc(p_416->g_266.s1, "p_416->g_266.s1", print_hash_value);
    transparent_crc(p_416->g_266.s2, "p_416->g_266.s2", print_hash_value);
    transparent_crc(p_416->g_266.s3, "p_416->g_266.s3", print_hash_value);
    transparent_crc(p_416->g_266.s4, "p_416->g_266.s4", print_hash_value);
    transparent_crc(p_416->g_266.s5, "p_416->g_266.s5", print_hash_value);
    transparent_crc(p_416->g_266.s6, "p_416->g_266.s6", print_hash_value);
    transparent_crc(p_416->g_266.s7, "p_416->g_266.s7", print_hash_value);
    transparent_crc(p_416->g_277, "p_416->g_277", print_hash_value);
    transparent_crc(p_416->g_287, "p_416->g_287", print_hash_value);
    transparent_crc(p_416->g_296.s0, "p_416->g_296.s0", print_hash_value);
    transparent_crc(p_416->g_296.s1, "p_416->g_296.s1", print_hash_value);
    transparent_crc(p_416->g_296.s2, "p_416->g_296.s2", print_hash_value);
    transparent_crc(p_416->g_296.s3, "p_416->g_296.s3", print_hash_value);
    transparent_crc(p_416->g_296.s4, "p_416->g_296.s4", print_hash_value);
    transparent_crc(p_416->g_296.s5, "p_416->g_296.s5", print_hash_value);
    transparent_crc(p_416->g_296.s6, "p_416->g_296.s6", print_hash_value);
    transparent_crc(p_416->g_296.s7, "p_416->g_296.s7", print_hash_value);
    transparent_crc(p_416->g_356.x, "p_416->g_356.x", print_hash_value);
    transparent_crc(p_416->g_356.y, "p_416->g_356.y", print_hash_value);
    transparent_crc(p_416->g_356.z, "p_416->g_356.z", print_hash_value);
    transparent_crc(p_416->g_356.w, "p_416->g_356.w", print_hash_value);
    transparent_crc(p_416->g_384, "p_416->g_384", print_hash_value);
    transparent_crc(p_416->g_403, "p_416->g_403", print_hash_value);
    transparent_crc(p_416->g_404.x, "p_416->g_404.x", print_hash_value);
    transparent_crc(p_416->g_404.y, "p_416->g_404.y", print_hash_value);
    transparent_crc(p_416->g_408.s0, "p_416->g_408.s0", print_hash_value);
    transparent_crc(p_416->g_408.s1, "p_416->g_408.s1", print_hash_value);
    transparent_crc(p_416->g_408.s2, "p_416->g_408.s2", print_hash_value);
    transparent_crc(p_416->g_408.s3, "p_416->g_408.s3", print_hash_value);
    transparent_crc(p_416->g_408.s4, "p_416->g_408.s4", print_hash_value);
    transparent_crc(p_416->g_408.s5, "p_416->g_408.s5", print_hash_value);
    transparent_crc(p_416->g_408.s6, "p_416->g_408.s6", print_hash_value);
    transparent_crc(p_416->g_408.s7, "p_416->g_408.s7", print_hash_value);
    transparent_crc(p_416->g_414, "p_416->g_414", print_hash_value);
    transparent_crc(p_416->v_collective, "p_416->v_collective", print_hash_value);
    transparent_crc(p_416->l_comm_values[get_linear_local_id()], "p_416->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_416->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()], "p_416->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
