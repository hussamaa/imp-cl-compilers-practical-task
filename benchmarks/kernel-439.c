// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 15,60,8 -l 3,12,4
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

__constant uint32_t permutations[10][144] = {
{129,120,63,64,27,99,36,116,101,42,16,107,56,127,84,89,136,91,55,123,133,5,51,45,126,33,132,23,44,113,128,86,15,4,77,65,49,105,73,119,72,121,108,106,138,66,32,137,31,18,53,95,69,22,115,100,93,48,25,7,37,19,54,59,114,6,50,94,34,3,47,139,102,80,110,118,97,26,78,104,134,117,111,67,82,30,39,52,92,58,38,43,76,40,2,61,14,140,83,98,60,29,70,131,142,17,143,46,90,109,12,57,79,35,122,130,88,141,71,125,96,41,103,135,87,24,85,20,13,21,81,124,1,10,8,68,0,74,75,62,28,112,11,9}, // permutation 0
{89,110,26,62,58,134,10,93,17,116,127,135,84,65,92,57,120,137,0,48,133,9,78,70,68,36,7,117,24,67,66,52,118,27,1,85,129,103,18,76,16,131,11,97,30,41,107,126,88,95,142,63,72,81,28,130,122,56,55,45,40,82,96,138,59,20,79,60,115,104,61,34,37,106,43,47,98,46,87,121,102,49,53,19,21,101,124,141,35,94,71,114,2,39,108,29,140,128,42,33,105,64,139,12,14,3,13,74,125,54,51,123,4,8,6,44,112,99,83,143,73,5,100,50,86,119,80,38,111,22,32,69,91,77,25,15,75,113,31,136,23,132,109,90}, // permutation 1
{19,137,41,93,25,92,122,61,128,38,78,44,60,71,54,102,118,139,131,82,113,95,56,106,12,14,2,40,116,100,97,8,140,65,55,15,99,45,35,64,32,115,117,5,69,68,36,51,30,76,1,90,28,39,75,22,34,17,114,11,58,63,24,31,89,85,98,67,57,121,50,129,84,43,59,73,138,142,86,33,125,143,23,4,135,3,0,104,112,94,127,9,81,83,48,103,18,49,126,53,124,79,96,42,101,111,80,26,21,119,91,20,136,72,107,47,29,134,77,6,133,66,10,130,110,70,7,37,74,52,13,62,132,109,141,88,87,123,105,16,108,46,120,27}, // permutation 2
{130,111,143,92,117,99,82,38,63,57,129,81,1,142,37,5,52,22,89,112,70,107,68,127,12,95,104,16,73,3,39,139,69,61,83,33,21,36,29,94,106,102,122,54,100,72,108,93,114,62,35,32,115,74,75,87,27,109,10,88,103,66,91,86,134,28,2,58,26,53,51,118,101,67,97,42,43,46,56,40,17,34,136,85,71,113,84,133,79,8,24,96,128,44,124,105,119,59,98,45,65,47,90,132,6,110,80,25,141,31,116,18,48,138,19,120,7,60,126,125,50,137,23,55,49,140,41,13,30,4,20,15,135,64,123,121,11,0,78,9,131,76,14,77}, // permutation 3
{7,92,109,91,76,44,9,107,100,102,57,8,96,119,64,45,139,93,75,2,63,42,114,29,113,131,124,106,123,52,43,97,134,141,19,3,47,116,35,140,15,33,73,142,108,66,125,61,27,71,68,40,46,86,138,60,79,22,83,105,84,103,20,74,31,110,99,78,111,95,25,56,5,82,67,32,55,94,122,126,13,28,17,11,21,34,117,14,39,26,90,130,0,87,80,37,54,65,50,10,69,135,120,12,133,143,81,128,38,53,115,98,101,104,23,36,127,4,72,48,24,58,70,49,77,118,6,30,1,88,85,51,112,59,129,89,18,41,121,132,136,16,62,137}, // permutation 4
{101,90,96,26,141,111,113,84,99,35,114,112,65,82,6,5,29,94,63,19,72,115,60,23,62,42,108,9,30,10,98,27,95,50,32,36,126,67,140,106,37,128,135,0,70,86,3,69,79,15,138,143,73,125,93,45,76,80,52,134,91,129,43,12,56,77,100,116,44,103,64,131,2,25,122,57,83,130,66,40,61,105,8,89,87,104,71,110,46,4,49,1,18,11,85,22,81,137,92,109,41,53,127,59,24,54,38,97,16,58,17,139,120,20,34,51,33,136,55,74,123,28,118,132,21,13,88,107,7,47,117,119,39,121,124,68,48,14,102,78,142,75,133,31}, // permutation 5
{90,10,42,31,96,89,54,120,24,108,29,84,107,50,44,91,116,4,22,137,1,106,112,87,105,21,102,122,32,19,101,98,36,109,52,119,15,93,117,127,123,60,141,95,128,83,30,53,81,140,79,134,135,133,3,70,7,63,59,39,6,130,58,97,80,26,18,71,23,88,12,65,110,34,85,40,38,61,131,82,132,11,14,114,72,41,62,115,73,49,51,28,47,0,126,139,64,48,45,124,43,129,125,20,56,17,99,69,136,68,74,66,103,118,100,33,78,142,46,75,9,77,138,104,67,92,5,57,86,121,55,2,113,37,143,35,8,27,25,13,76,111,94,16}, // permutation 6
{86,37,123,57,126,51,130,134,138,73,1,3,105,26,52,47,41,38,62,89,15,23,58,99,70,65,101,92,55,119,42,129,137,83,85,60,97,128,25,118,35,93,59,13,88,68,66,11,136,54,132,140,107,120,91,78,9,80,49,143,56,122,31,81,64,53,46,131,74,95,77,116,32,7,79,21,100,67,45,30,117,19,87,82,113,110,109,112,75,5,24,27,22,14,10,98,108,90,16,69,33,8,48,115,2,106,39,40,94,104,12,29,139,18,63,28,20,125,71,103,34,102,6,4,124,84,127,61,44,17,135,96,121,50,72,142,111,76,36,0,43,141,133,114}, // permutation 7
{54,91,140,82,123,2,40,142,46,51,89,74,114,22,143,4,133,117,3,26,31,13,121,79,29,33,127,58,95,34,42,11,85,141,12,9,78,100,1,130,0,50,7,19,131,115,104,119,97,64,80,56,32,90,124,24,60,27,109,68,25,94,99,23,20,96,105,35,48,111,63,128,66,8,38,69,88,129,59,55,14,120,10,102,45,15,44,132,134,75,30,137,6,21,86,107,103,62,17,135,98,71,43,108,39,36,87,106,5,57,61,49,28,83,112,73,53,92,65,138,77,37,116,93,70,110,139,101,47,81,136,41,16,122,118,84,126,67,72,76,113,125,18,52}, // permutation 8
{57,131,122,98,34,141,20,134,23,72,104,93,100,42,128,35,19,117,80,48,10,127,21,126,5,108,25,123,46,44,14,92,129,61,133,0,101,94,30,49,76,75,95,60,136,15,18,8,102,86,79,31,3,63,116,130,124,70,27,105,118,87,84,6,110,109,103,66,81,16,37,28,120,74,69,65,64,4,1,43,38,52,2,111,140,68,90,17,88,137,50,55,9,85,143,40,41,99,53,114,82,45,78,47,107,59,96,13,12,54,89,113,121,7,56,33,62,36,83,24,58,139,91,138,142,73,125,11,112,67,26,106,119,135,115,32,97,51,39,29,77,22,132,71} // permutation 9
};

// Seed: 3726767229

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
   volatile uint8_t  f3;
   int16_t  f4;
   volatile uint8_t  f5;
   volatile int64_t  f6;
   uint32_t  f7;
   volatile uint8_t  f8;
};

struct S1 {
   int32_t  f0;
   int32_t  f1;
};

union U2 {
   int32_t  f0;
   uint64_t  f1;
   volatile int32_t  f2;
   struct S1  f3;
   volatile uint8_t  f4;
};

union U3 {
   struct S1  f0;
   int32_t  f1;
   struct S0  f2;
   int8_t * f3;
   int16_t  f4;
};

union U4 {
   volatile struct S1  f0;
   volatile int8_t * f1;
   int8_t * volatile  f2;
   uint16_t  f3;
};

struct S5 {
    int32_t g_4;
    volatile union U2 g_5;
    VECTOR(uint16_t, 8) g_21;
    VECTOR(int64_t, 8) g_26;
    uint32_t g_46;
    int8_t g_48[1];
    volatile VECTOR(uint8_t, 4) g_58;
    volatile union U4 g_64;
    int32_t g_66;
    int32_t *g_81;
    int32_t ** volatile g_80;
    int8_t * volatile * volatile g_97;
    uint64_t g_102;
    union U3 g_243;
    volatile VECTOR(uint8_t, 8) g_260;
    int8_t **g_265;
    uint8_t g_269;
    uint8_t g_273[9][2];
    int32_t * volatile g_281;
    volatile struct S0 g_283;
    struct S0 * volatile g_291;
    union U2 g_292;
    int32_t ** volatile g_306[2];
    volatile VECTOR(int32_t, 8) g_316;
    volatile VECTOR(int16_t, 16) g_331;
    volatile VECTOR(int16_t, 16) g_335;
    uint64_t g_343;
    int64_t *g_352;
    int32_t ** volatile g_356;
    struct S0 g_359;
    struct S1 g_363;
    volatile union U2 g_370;
    struct S1 * volatile g_376;
    struct S0 *g_397;
    struct S0 **g_396;
    uint32_t g_402;
    uint32_t g_422;
    VECTOR(int32_t, 2) g_427;
    volatile VECTOR(int8_t, 2) g_430;
    int32_t ** volatile g_446;
    struct S1 *g_488[1];
    struct S1 ** volatile g_487;
    volatile int32_t g_502;
    int32_t * volatile g_509;
    int16_t *g_520;
    int16_t *g_524[4][7];
    VECTOR(uint32_t, 2) g_526;
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
uint32_t  func_1(struct S5 * p_555);
int16_t  func_8(int8_t * p_9, int32_t * p_10, uint8_t  p_11, int8_t * p_12, struct S5 * p_555);
int8_t * func_13(int8_t  p_14, struct S1  p_15, uint32_t  p_16, struct S5 * p_555);
struct S1  func_17(int64_t  p_18, int32_t * p_19, struct S5 * p_555);
uint64_t  func_22(uint32_t  p_23, struct S5 * p_555);
union U2  func_29(int32_t * p_30, int16_t  p_31, int32_t * p_32, struct S5 * p_555);
struct S0  func_33(int8_t * p_34, struct S5 * p_555);
int8_t * func_35(uint64_t  p_36, int32_t  p_37, int64_t  p_38, int8_t * p_39, struct S5 * p_555);
int32_t  func_40(uint32_t  p_41, int8_t * p_42, int8_t * p_43, struct S5 * p_555);
int8_t * func_49(uint32_t  p_50, uint32_t  p_51, int8_t * p_52, int32_t  p_53, struct S5 * p_555);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_555->g_5 p_555->l_comm_values p_555->g_4 p_555->g_21 p_555->g_26 p_555->g_58 p_555->g_64 p_555->g_48 p_555->g_80 p_555->g_81 p_555->g_66 p_555->g_64.f0 p_555->g_97 p_555->g_102 p_555->g_243 p_555->g_260 p_555->g_269 p_555->g_283 p_555->g_291 p_555->g_292 p_555->g_243.f2.f1 p_555->g_273 p_555->g_331 p_555->g_comm_values p_555->g_352 p_555->g_356 p_555->g_46 p_555->g_363 p_555->g_370 p_555->g_359.f2 p_555->g_292.f0 p_555->g_376 p_555->g_359.f4 p_555->g_343 p_555->g_422 p_555->g_427 p_555->g_430 p_555->g_402 p_555->g_316 p_555->g_446 p_555->g_292.f3.f0 p_555->g_359.f0 p_555->g_487 p_555->g_502 p_555->g_509 p_555->g_520
 * writes: p_555->g_4 p_555->g_46 p_555->g_81 p_555->g_66 p_555->g_97 p_555->g_102 p_555->g_265 p_555->g_269 p_555->g_273 p_555->g_comm_values p_555->g_283 p_555->g_243.f2 p_555->g_343 p_555->g_291 p_555->g_359.f0 p_555->g_292.f0 p_555->g_363 p_555->g_359.f4 p_555->g_21 p_555->g_243.f4 p_555->g_292.f3.f0 p_555->g_488 p_555->g_524
 */
uint32_t  func_1(struct S5 * p_555)
{ /* block id: 4 */
    uint32_t l_2 = 0xA8B060D2L;
    int32_t *l_3 = &p_555->g_4;
    int8_t *l_20 = (void*)0;
    int8_t **l_373 = (void*)0;
    int8_t **l_374 = &l_20;
    int16_t *l_377 = &p_555->g_359.f4;
    int32_t l_403 = 0L;
    int32_t l_474 = 8L;
    int32_t l_475 = (-1L);
    int16_t l_476 = 7L;
    uint32_t l_477 = 0x88CBABD6L;
    struct S1 *l_486 = (void*)0;
    struct S1 l_507 = {-1L,9L};
    uint8_t l_536[4] = {0x2AL,0x2AL,0x2AL,0x2AL};
    int32_t l_549[8] = {0x3A316E20L,0x05447027L,0x3A316E20L,0x3A316E20L,0x05447027L,0x3A316E20L,0x3A316E20L,0x05447027L};
    int i;
    (*l_3) = l_2;
    if ((p_555->g_5 , (safe_add_func_uint64_t_u_u(p_555->l_comm_values[(safe_mod_func_uint32_t_u_u(p_555->tid, 144))], (((*l_377) |= func_8(((*l_374) = func_13((*l_3), func_17(((((void*)0 == l_20) != (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_555->g_21.s12)).xxxy)).y < ((((func_22(((!((*l_3) == (safe_mod_func_int8_t_s_s(p_555->g_26.s0, (safe_add_func_int8_t_s_s((0x5660L ^ (func_29(l_3, (*l_3), &p_555->g_4, p_555) , (*l_3))), p_555->g_21.s3)))))) <= (*l_3)), p_555) || (*l_3)) | (*l_3)) >= p_555->l_comm_values[(safe_mod_func_uint32_t_u_u(p_555->tid, 144))]) >= 0L))) >= p_555->l_comm_values[(safe_mod_func_uint32_t_u_u(p_555->tid, 144))]), l_3, p_555), (*l_3), p_555)), &p_555->g_4, p_555->g_26.s4, &p_555->g_48[0], p_555)) >= (*l_3))))))
    { /* block id: 201 */
        int32_t l_387[2][10] = {{(-1L),(-2L),4L,(-2L),(-1L),(-1L),(-2L),4L,(-2L),(-1L)},{(-1L),(-2L),4L,(-2L),(-1L),(-1L),(-2L),4L,(-2L),(-1L)}};
        struct S1 l_392 = {0x563F0FD5L,-1L};
        struct S0 *l_394 = &p_555->g_359;
        struct S0 **l_393[7] = {&l_394,(void*)0,&l_394,&l_394,(void*)0,&l_394,&l_394};
        int16_t l_400 = 0x4EBFL;
        uint16_t l_405[1][2];
        VECTOR(uint16_t, 4) l_413 = (VECTOR(uint16_t, 4))(0x0F81L, (VECTOR(uint16_t, 2))(0x0F81L, 0x85EAL), 0x85EAL);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_405[i][j] = 0x3D72L;
        }
        if ((0L == (-10L)))
        { /* block id: 202 */
            VECTOR(int16_t, 4) l_386 = (VECTOR(int16_t, 4))(0x4B33L, (VECTOR(int16_t, 2))(0x4B33L, 0x1029L), 0x1029L);
            uint32_t l_391 = 0x63A323F6L;
            VECTOR(int64_t, 8) l_399 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
            uint8_t *l_435[7] = {&p_555->g_273[5][1],&p_555->g_273[5][1],&p_555->g_273[5][1],&p_555->g_273[5][1],&p_555->g_273[5][1],&p_555->g_273[5][1],&p_555->g_273[5][1]};
            int16_t *l_436 = (void*)0;
            int16_t *l_437 = &p_555->g_243.f4;
            int16_t *l_438 = &p_555->g_243.f2.f4;
            int16_t *l_439 = &p_555->g_243.f4;
            int16_t *l_440 = &p_555->g_243.f4;
            int16_t *l_441 = (void*)0;
            int16_t *l_442 = &p_555->g_243.f4;
            int16_t *l_443[2];
            int32_t l_444 = 0x59629457L;
            int32_t **l_445 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_443[i] = &p_555->g_243.f2.f4;
            for (p_555->g_363.f1 = (-28); (p_555->g_363.f1 == 16); ++p_555->g_363.f1)
            { /* block id: 205 */
                VECTOR(int64_t, 2) l_390 = (VECTOR(int64_t, 2))(0x2E372CE6B01533F6L, 0x24CCD81F5BAF991DL);
                struct S0 ***l_395 = &l_393[1];
                struct S0 ***l_398 = &p_555->g_396;
                uint32_t *l_401 = &p_555->g_402;
                VECTOR(uint64_t, 8) l_404 = (VECTOR(uint64_t, 8))(0x91D7C27A7F2FD880L, (VECTOR(uint64_t, 4))(0x91D7C27A7F2FD880L, (VECTOR(uint64_t, 2))(0x91D7C27A7F2FD880L, 2UL), 2UL), 2UL, 0x91D7C27A7F2FD880L, 2UL);
                uint64_t *l_406 = (void*)0;
                int i;
                (*p_555->g_81) ^= (safe_mod_func_uint64_t_u_u((p_555->g_343 ^= (((*p_555->g_376) , l_404.s3) && l_405[0][1])), l_399.s5));
            }
            atomic_and(&p_555->l_atomic_reduction[0], (l_392.f1 || (safe_rshift_func_uint8_t_u_s(((-8L) >= (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_413.xxxy)).x, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((p_555->g_21.s1 |= l_399.s7), (*l_3))), ((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), p_555->g_422)) < (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_555->g_427.yx)))).yxyxyyyyyyyxxxxy)).s2 , ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((*l_440) = (l_444 ^= ((((VECTOR(uint32_t, 16))(0UL, 0xC4FE1A9EL, 0x8A473685L, ((VECTOR(uint32_t, 2))(0x52A7A9C6L, 4294967294UL)), (((((safe_lshift_func_int16_t_s_u(((((VECTOR(int8_t, 4))(p_555->g_430.yxxy)).z & ((safe_mul_func_int8_t_s_s(l_392.f0, p_555->g_66)) , (safe_div_func_int8_t_s_s((((p_555->g_273[2][1] |= l_400) & (((((VECTOR(uint16_t, 2))(0xB8FEL, 0xCA57L)).lo ^ (0L > p_555->g_402)) || 65535UL) != 1UL)) && p_555->g_4), (*l_3))))) <= l_399.s1), 2)) & l_399.s6) & p_555->g_359.f4) <= p_555->g_66) && p_555->g_292.f0), (*l_3), ((VECTOR(uint32_t, 4))(0x285E7407L)), p_555->g_316.s5, l_413.z, 4294967292UL, 0x8F1EB240L, 0UL)).s3 || (*l_3)) ^ (*l_3)))), (-2L), ((VECTOR(int16_t, 4))(0x2F54L)), (-6L), (-9L), ((VECTOR(int16_t, 2))(0x0373L)), (-10L), ((VECTOR(int16_t, 2))(0x569CL)), 0x65B2L, 0x36AEL, (-7L))).odd, ((VECTOR(int16_t, 8))((-1L)))))).s4) ^ p_555->g_343), 0x24L)), 1L))))), 6)))), l_413.z))), 6))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_555->v_collective += p_555->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_555->g_446) = &l_387[0][1];
            for (p_555->g_292.f3.f0 = (-16); (p_555->g_292.f3.f0 > (-3)); p_555->g_292.f3.f0 = safe_add_func_uint8_t_u_u(p_555->g_292.f3.f0, 5))
            { /* block id: 222 */
                for (p_555->g_363.f0 = (-2); (p_555->g_363.f0 > 1); p_555->g_363.f0 = safe_add_func_uint8_t_u_u(p_555->g_363.f0, 3))
                { /* block id: 225 */
                    for (p_555->g_359.f0 = 0; (p_555->g_359.f0 > 6); ++p_555->g_359.f0)
                    { /* block id: 228 */
                        return p_555->g_58.y;
                    }
                }
            }
        }
        else
        { /* block id: 233 */
            int32_t *l_473[5][2][8] = {{{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]},{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]}},{{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]},{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]}},{{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]},{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]}},{{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]},{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]}},{{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]},{(void*)0,(void*)0,&l_387[0][8],(void*)0,(void*)0,(void*)0,(void*)0,&l_387[0][8]}}};
            int i, j, k;
            if ((atomic_inc(&p_555->l_atomic_input[41]) == 2))
            { /* block id: 235 */
                VECTOR(uint32_t, 2) l_453 = (VECTOR(uint32_t, 2))(4294967295UL, 0xE30DDB04L);
                int i;
                if (l_453.x)
                { /* block id: 236 */
                    int32_t l_454 = 0x4A36395BL;
                    int16_t l_462[1];
                    uint32_t l_463 = 4294967295UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_462[i] = 0x2A25L;
                    for (l_454 = (-4); (l_454 != (-12)); l_454 = safe_sub_func_uint64_t_u_u(l_454, 3))
                    { /* block id: 239 */
                        int8_t l_457[5][2][2] = {{{(-9L),0x53L},{(-9L),0x53L}},{{(-9L),0x53L},{(-9L),0x53L}},{{(-9L),0x53L},{(-9L),0x53L}},{{(-9L),0x53L},{(-9L),0x53L}},{{(-9L),0x53L},{(-9L),0x53L}}};
                        int32_t l_458 = 0x5B97325DL;
                        uint16_t l_459 = 0xDCFAL;
                        int i, j, k;
                        --l_459;
                    }
                    l_463 = l_462[0];
                }
                else
                { /* block id: 243 */
                    int32_t l_464 = 0x25C22531L;
                    VECTOR(int32_t, 4) l_465 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 7L), 7L);
                    VECTOR(int32_t, 8) l_466 = (VECTOR(int32_t, 8))(0x76867152L, (VECTOR(int32_t, 4))(0x76867152L, (VECTOR(int32_t, 2))(0x76867152L, (-9L)), (-9L)), (-9L), 0x76867152L, (-9L));
                    VECTOR(int32_t, 16) l_467 = (VECTOR(int32_t, 16))(0x2AC13BB4L, (VECTOR(int32_t, 4))(0x2AC13BB4L, (VECTOR(int32_t, 2))(0x2AC13BB4L, 1L), 1L), 1L, 0x2AC13BB4L, 1L, (VECTOR(int32_t, 2))(0x2AC13BB4L, 1L), (VECTOR(int32_t, 2))(0x2AC13BB4L, 1L), 0x2AC13BB4L, 1L, 0x2AC13BB4L, 1L);
                    uint16_t l_468 = 0x2A7CL;
                    uint32_t l_469 = 0x23AF9C18L;
                    uint8_t l_470 = 255UL;
                    int i;
                    l_469 ^= (l_464 , (l_468 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_465.xx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x321E1310L, ((VECTOR(int32_t, 8))(l_466.s76700426)), 0x4884F533L, ((VECTOR(int32_t, 4))(l_467.s843d)), 0x3A74F66AL, 5L)).s8d))))).xxyxyyxxyxxxyxxy)).se));
                    --l_470;
                }
                unsigned int result = 0;
                result += l_453.y;
                result += l_453.x;
                atomic_add(&p_555->l_special_values[41], result);
            }
            else
            { /* block id: 248 */
                (1 + 1);
            }
            --l_477;
            (*p_555->g_81) ^= (0x4EL <= p_555->g_363.f1);
            if ((atomic_inc(&p_555->g_atomic_input[89 * get_linear_group_id() + 67]) == 4))
            { /* block id: 254 */
                uint32_t l_480 = 4294967287UL;
                int64_t l_481[6] = {0x582139249F6948ADL,0x2BD2B6240B7E1F8CL,0x582139249F6948ADL,0x582139249F6948ADL,0x2BD2B6240B7E1F8CL,0x582139249F6948ADL};
                int32_t l_482 = (-4L);
                uint8_t l_483 = 0x43L;
                int i;
                l_480 ^= 8L;
                l_483++;
                unsigned int result = 0;
                result += l_480;
                int l_481_i0;
                for (l_481_i0 = 0; l_481_i0 < 6; l_481_i0++) {
                    result += l_481[l_481_i0];
                }
                result += l_482;
                result += l_483;
                atomic_add(&p_555->g_special_values[89 * get_linear_group_id() + 67], result);
            }
            else
            { /* block id: 257 */
                (1 + 1);
            }
        }
        (*p_555->g_487) = l_486;
    }
    else
    { /* block id: 262 */
        uint32_t l_489 = 4294967295UL;
        uint32_t l_496[10] = {0x3F0452ECL,0xB67EA3C2L,0x3F0452ECL,0x3F0452ECL,0xB67EA3C2L,0x3F0452ECL,0x3F0452ECL,0xB67EA3C2L,0x3F0452ECL,0x3F0452ECL};
        uint16_t *l_497 = (void*)0;
        uint16_t *l_498 = (void*)0;
        uint8_t l_501[4][3][6] = {{{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L}},{{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L}},{{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L}},{{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L},{0xC2L,0x5EL,1UL,0xF6L,0x5EL,0xF6L}}};
        uint32_t l_503[9][3][1] = {{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}},{{0xF01FC305L},{0xF01FC305L},{0xF01FC305L}}};
        int32_t *l_504 = &l_474;
        int i, j, k;
        (*l_504) ^= ((VECTOR(int32_t, 16))((l_489 ^ (safe_mul_func_int8_t_s_s((*l_3), ((((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(0UL, 255UL, (safe_mul_func_int16_t_s_s((*l_3), (((safe_add_func_uint8_t_u_u(0x25L, l_496[4])) >= (p_555->g_21.s1 = p_555->g_58.z)) <= ((safe_mod_func_uint8_t_u_u((p_555->g_102 & (0x6D2C4824531EE4EAL <= l_489)), 0x0AL)) ^ l_489)))), 0xE0L, 0x6DL, 255UL, 4UL, 0x5EL)), (uint8_t)l_501[3][2][5], (uint8_t)0UL))).s0 > l_496[4]) && (**p_555->g_446))))), 0x180F8D9CL, 0x6B111A06L, p_555->g_502, l_496[7], 0x4E8C4494L, l_503[1][2][0], (*l_3), 0x2502FA59L, (-4L), ((VECTOR(int32_t, 4))((-8L))), 0x19BA1B00L, (-1L))).s3;
    }
    for (l_477 = 23; (l_477 <= 32); ++l_477)
    { /* block id: 268 */
        struct S1 l_508[6][2] = {{{-9L,-1L},{0x20623B54L,0L}},{{-9L,-1L},{0x20623B54L,0L}},{{-9L,-1L},{0x20623B54L,0L}},{{-9L,-1L},{0x20623B54L,0L}},{{-9L,-1L},{0x20623B54L,0L}},{{-9L,-1L},{0x20623B54L,0L}}};
        VECTOR(int32_t, 2) l_528 = (VECTOR(int32_t, 2))((-1L), 1L);
        uint16_t *l_529 = (void*)0;
        int16_t l_533 = (-1L);
        int32_t l_534[9][9] = {{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)},{0x7E668AC5L,1L,5L,1L,0x7E668AC5L,0L,(-1L),0x07327697L,(-1L)}};
        int32_t l_550 = (-1L);
        int i, j;
        l_508[0][1] = l_507;
        (*p_555->g_509) = ((*l_3) = (*l_3));
        for (p_555->g_292.f0 = 0; (p_555->g_292.f0 >= (-9)); p_555->g_292.f0 = safe_sub_func_uint8_t_u_u(p_555->g_292.f0, 4))
        { /* block id: 274 */
            int32_t *l_512 = (void*)0;
            int32_t *l_513 = &l_474;
            int16_t *l_521 = &p_555->g_243.f4;
            int16_t *l_522 = &p_555->g_359.f4;
            int32_t l_530[2];
            int64_t l_535 = 0x0033D19D9730BD6EL;
            int i;
            for (i = 0; i < 2; i++)
                l_530[i] = 2L;
            (*l_513) |= ((*l_3) = 5L);
            for (l_2 = 0; (l_2 != 53); l_2++)
            { /* block id: 279 */
                int16_t **l_523 = (void*)0;
                VECTOR(int16_t, 16) l_525 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                uint32_t *l_527[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_531 = (void*)0;
                int32_t *l_532[10][10] = {{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0},{&l_475,&l_530[0],&l_530[1],(void*)0,(void*)0,(void*)0,(void*)0,&p_555->g_66,(void*)0,&p_555->g_292.f0}};
                int i, j;
                (*l_513) = ((safe_mod_func_int64_t_s_s(((0x4666929E609BF868L < (*l_513)) >= (p_555->g_64 , (((l_521 = p_555->g_520) != (p_555->g_524[2][4] = l_522)) , (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_525.sd00372c1)).s12)), ((VECTOR(int16_t, 2))(0L, (-1L)))))).yyyxyyxxxyxyxyyx, ((VECTOR(uint16_t, 4))((0L == (((l_528.x = (p_555->g_359.f7 |= ((VECTOR(uint32_t, 2))(p_555->g_526.xy)).hi)) , p_555->g_524[2][4]) == l_529)), 0x3E81L, 0UL, 0x6735L)).yzzzyzwwxzxwywzw))).sd > 0x20AAECDBL)))), p_555->g_66)) , 8L);
                if ((*l_3))
                    continue;
                l_536[0]--;
            }
        }
        for (p_555->g_66 = (-8); (p_555->g_66 != (-26)); --p_555->g_66)
        { /* block id: 291 */
            int32_t l_541 = 5L;
            int32_t *l_542 = &l_534[7][6];
            int32_t *l_543 = (void*)0;
            int32_t *l_544 = (void*)0;
            int32_t l_545 = 0x1EA21E34L;
            int32_t *l_546 = &l_474;
            int32_t *l_547 = (void*)0;
            int32_t *l_548[2];
            int32_t l_551 = (-2L);
            uint32_t l_552 = 0x9375220AL;
            int i;
            for (i = 0; i < 2; i++)
                l_548[i] = &l_534[5][0];
            (*l_3) &= l_541;
            (*l_3) &= 0x43F318CBL;
            --l_552;
        }
    }
    return p_555->g_58.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_376
 * writes: p_555->g_363
 */
int16_t  func_8(int8_t * p_9, int32_t * p_10, uint8_t  p_11, int8_t * p_12, struct S5 * p_555)
{ /* block id: 197 */
    struct S1 l_375[10][9][1] = {{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}},{{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}},{{0L,0x60C9BEE5L}}}};
    int i, j, k;
    (*p_555->g_376) = l_375[1][6][0];
    return l_375[1][6][0].f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_356 p_555->g_46 p_555->g_363 p_555->g_370 p_555->g_66 p_555->g_359.f2 p_555->g_102 p_555->g_292.f0
 * writes: p_555->g_81 p_555->g_291 p_555->g_359.f0 p_555->g_292.f0
 */
int8_t * func_13(int8_t  p_14, struct S1  p_15, uint32_t  p_16, struct S5 * p_555)
{ /* block id: 187 */
    int32_t *l_355 = &p_555->g_66;
    struct S0 *l_358 = &p_555->g_359;
    struct S0 **l_357[1];
    struct S1 *l_362 = &p_555->g_363;
    struct S1 **l_364 = (void*)0;
    struct S1 **l_365 = &l_362;
    struct S1 **l_366 = (void*)0;
    struct S1 *l_368 = &p_555->g_363;
    struct S1 **l_367 = &l_368;
    int32_t **l_369 = (void*)0;
    int8_t *l_371 = &p_555->g_359.f0;
    int32_t *l_372 = &p_555->g_292.f0;
    int i;
    for (i = 0; i < 1; i++)
        l_357[i] = &l_358;
    (*p_555->g_356) = l_355;
    p_555->g_291 = (void*)0;
    (*l_372) ^= (((0x0FFD0844L == ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0xD05738AFL, 0x2FE14926L, (!p_555->g_46), 5UL, ((((safe_div_func_uint32_t_u_u((((*l_371) = (((((*l_365) = l_362) == (((p_555->g_363 , &p_555->g_97) == (void*)0) , ((*l_367) = &p_555->g_363))) , p_555->g_370) , (*l_355))) < (*l_355)), 1UL)) == p_555->g_359.f2) & p_555->g_102) | 0xFCD5D4EF2374E341L), 0x85182808L, 0UL, 4294967295UL)), ((VECTOR(uint32_t, 8))(0x474A7025L)))).lo)).hi, ((VECTOR(uint32_t, 4))(3UL))))).w) , 0x09602AE7L) == 0x5975E149L);
    return l_371;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_243.f2.f1 p_555->g_269 p_555->g_48 p_555->g_273 p_555->g_283.f0 p_555->g_4 p_555->g_331 p_555->g_comm_values p_555->g_352 p_555->g_64.f0
 * writes: p_555->g_243.f2.f1 p_555->g_269 p_555->g_343 p_555->g_comm_values
 */
struct S1  func_17(int64_t  p_18, int32_t * p_19, struct S5 * p_555)
{ /* block id: 162 */
    int32_t l_298[8] = {0x044565C0L,(-6L),0x044565C0L,0x044565C0L,(-6L),0x044565C0L,0x044565C0L,(-6L)};
    uint8_t *l_301[9];
    union U2 *l_304 = &p_555->g_292;
    int32_t *l_305[5];
    int32_t **l_307 = &l_305[3];
    VECTOR(int32_t, 4) l_314 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
    VECTOR(int16_t, 8) l_332 = (VECTOR(int16_t, 8))(0x5428L, (VECTOR(int16_t, 4))(0x5428L, (VECTOR(int16_t, 2))(0x5428L, 0x33D3L), 0x33D3L), 0x33D3L, 0x5428L, 0x33D3L);
    int32_t l_342[6][5] = {{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL},{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL},{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL},{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL},{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL},{0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL,0x2088B78BL}};
    int i, j;
    for (i = 0; i < 9; i++)
        l_301[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_305[i] = (void*)0;
    p_555->g_243.f2.f1 &= (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((FAKE_DIVERGE(p_555->local_2_offset, get_local_id(2), 10) >= l_298[1]), (safe_sub_func_uint16_t_u_u((l_301[7] == ((safe_add_func_int16_t_s_s(p_18, (l_304 != (void*)0))) , l_301[7])), (((l_304 == l_304) && 65526UL) | 247UL))))), l_298[1]));
    (*l_307) = p_19;
    for (p_555->g_269 = (-10); (p_555->g_269 == 18); p_555->g_269 = safe_add_func_int16_t_s_s(p_555->g_269, 5))
    { /* block id: 167 */
        int64_t l_312 = 1L;
        int32_t l_313[4][5][8] = {{{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL}},{{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL}},{{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL}},{{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL},{0x474B1266L,0x4141A6ABL,8L,0x4964F4A2L,0x3D3C205DL,0x474B1266L,0x4964F4A2L,0x1057C7EEL}}};
        uint16_t l_315[1][6] = {{6UL,0x5DDBL,6UL,6UL,0x5DDBL,6UL}};
        int32_t l_317 = 0x11CEC666L;
        int8_t *l_338 = &p_555->g_48[0];
        VECTOR(int64_t, 8) l_350 = (VECTOR(int64_t, 8))(0x115524F030ED60FAL, (VECTOR(int64_t, 4))(0x115524F030ED60FAL, (VECTOR(int64_t, 2))(0x115524F030ED60FAL, 0x21DD741796D584A5L), 0x21DD741796D584A5L), 0x21DD741796D584A5L, 0x115524F030ED60FAL, 0x21DD741796D584A5L);
        int32_t l_354 = 0x1137A466L;
        int i, j, k;
        l_317 = ((VECTOR(int32_t, 16))((l_313[2][2][3] = (safe_mul_func_int8_t_s_s(((l_301[7] == l_301[7]) , l_312), (~p_555->g_283.f3)))), (*p_19), (-1L), (*p_19), ((VECTOR(int32_t, 2))(l_314.zw)), (l_315[0][5] < 1UL), ((VECTOR(int32_t, 2))(p_555->g_316.s16)), (l_313[1][3][0] = (*p_19)), 0x457F5220L, 0x77C23049L, ((VECTOR(int32_t, 4))(1L)))).sa;
        for (l_317 = 8; (l_317 >= 4); l_317 = safe_sub_func_uint8_t_u_u(l_317, 7))
        { /* block id: 173 */
            VECTOR(int64_t, 16) l_328 = (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x7E84D8DF74B69C44L), 0x7E84D8DF74B69C44L), 0x7E84D8DF74B69C44L, 9L, 0x7E84D8DF74B69C44L, (VECTOR(int64_t, 2))(9L, 0x7E84D8DF74B69C44L), (VECTOR(int64_t, 2))(9L, 0x7E84D8DF74B69C44L), 9L, 0x7E84D8DF74B69C44L, 9L, 0x7E84D8DF74B69C44L);
            VECTOR(int16_t, 2) l_333 = (VECTOR(int16_t, 2))(1L, 0x2E40L);
            VECTOR(int16_t, 4) l_334 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x5F2EL), 0x5F2EL);
            int16_t *l_341[6] = {&p_555->g_243.f2.f4,(void*)0,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,(void*)0,&p_555->g_243.f2.f4};
            int32_t l_344 = (-7L);
            VECTOR(int32_t, 2) l_345 = (VECTOR(int32_t, 2))((-10L), (-9L));
            int64_t *l_351[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_353 = &p_555->g_273[2][1];
            int i;
            l_345.x &= ((l_344 = (8UL ^ ((safe_div_func_uint64_t_u_u((p_555->g_48[0] & 1L), ((0xDC4A6E4DL <= ((safe_mod_func_uint32_t_u_u((p_555->g_343 = ((((((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_328.s813dac8fd3134440)).sb, ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x3D9DL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_555->g_331.s1537)).lo)), 1L)).x, 0x7D77L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_332.s5722)).xwywzxzwzywywzwx)).sc0c4, ((VECTOR(int16_t, 8))(l_333.yxxxxyxy)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_334.xzyxzxxz)).s45)), 6L, 8L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_555->g_335.s67)).yyxyyyyy)).s13)), (((GROUP_DIVERGE(0, 1) ^ (p_555->g_243.f4 = (safe_mul_func_int8_t_s_s(((p_555->l_comm_values[(safe_mod_func_uint32_t_u_u(p_555->tid, 144))] , (l_338 == (void*)0)) , (safe_mod_func_uint64_t_u_u(p_555->g_243.f2.f6, 1L))), p_18)))) == l_342[0][0]) ^ 0L), 0x09F8L, ((VECTOR(int16_t, 4))(0x3C58L)), 0L, 0x4481L, (-9L), 0x3797L, ((VECTOR(int16_t, 2))((-6L))), (-1L), 0L)))).saa3c))), ((VECTOR(int16_t, 2))(0x4286L)), 0x64E2L, 0x056FL)).s5260356404720350)).s943a))).even)).yyxxyyxy)).s1330637602132165)).s550b)).wxxzxwwx, ((VECTOR(int16_t, 8))(0x57B5L)), ((VECTOR(int16_t, 8))(0x3A50L))))).hi)), ((VECTOR(int16_t, 2))(0x058CL)), ((VECTOR(int16_t, 8))(1L)))).se, 0x78E0L)) | p_555->g_273[1][0]))), p_18)) || l_312) ^ 65526UL) || p_555->g_283.f0) != p_555->g_273[2][1]) & p_555->g_4)), (*p_19))) <= l_328.s6)) , p_18))) >= p_18))) > 5UL);
            p_19 = p_19;
            p_19 = ((*l_307) = p_19);
            l_354 |= (safe_lshift_func_uint16_t_u_u((l_313[1][4][7] &= (((((p_19 != (((((!0x5AL) == 0x5FL) && ((+l_315[0][2]) , p_555->g_331.sa)) != ((0x00B665A4L || (((p_18 || (p_555->g_comm_values[p_555->tid] ^= (!(p_18 , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_350.s57)).xxxxxxyxyyyyyyxx)).s1)))) & (p_555->g_352 != &p_18)) , (*p_19))) , 0x369FDC198A26B59AL)) , (void*)0)) && GROUP_DIVERGE(1, 1)) , l_301[2]) != l_353) != p_18)), 14));
        }
    }
    return p_555->g_64.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_22(uint32_t  p_23, struct S5 * p_555)
{ /* block id: 160 */
    uint32_t l_293 = 4294967288UL;
    return l_293;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_21 p_555->g_5 p_555->g_58 p_555->g_26 p_555->g_64 p_555->g_48 p_555->g_80 p_555->g_81 p_555->g_66 p_555->g_64.f0 p_555->g_97 p_555->g_102 p_555->g_243 p_555->g_260 p_555->g_269 p_555->g_4 p_555->l_comm_values p_555->g_283 p_555->g_291 p_555->g_292
 * writes: p_555->g_46 p_555->g_81 p_555->g_66 p_555->g_97 p_555->g_102 p_555->g_265 p_555->g_269 p_555->g_273 p_555->g_comm_values p_555->g_283 p_555->g_243.f2
 */
union U2  func_29(int32_t * p_30, int16_t  p_31, int32_t * p_32, struct S5 * p_555)
{ /* block id: 6 */
    uint32_t l_44 = 1UL;
    uint32_t *l_45 = &p_555->g_46;
    int8_t *l_47[3][9][4] = {{{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]}},{{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]}},{{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]},{&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0],&p_555->g_48[0]}}};
    VECTOR(uint16_t, 4) l_54 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xBF84L), 0xBF84L);
    VECTOR(uint8_t, 16) l_57 = (VECTOR(uint8_t, 16))(0x11L, (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 250UL), 250UL), 250UL, 0x11L, 250UL, (VECTOR(uint8_t, 2))(0x11L, 250UL), (VECTOR(uint8_t, 2))(0x11L, 250UL), 0x11L, 250UL, 0x11L, 250UL);
    VECTOR(uint8_t, 4) l_59 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 246UL), 246UL);
    int i, j, k;
    (*p_555->g_291) = func_33(func_35((func_40(((*l_45) = l_44), l_47[1][1][2], func_49(((-1L) | (l_44 & ((((p_555->g_21.s7 , (p_555->g_5 , p_555->g_21.s2)) , (+((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(65532UL, 65535UL, l_44, 0xF9D9L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_54.yz)), 65530UL, 0x3557L)), 0xA8A5L, ((VECTOR(uint16_t, 2))(0x5755L, 0xED5AL)), (+(safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_555->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 8))(0x05L, ((VECTOR(uint8_t, 2))(l_57.s39)), ((VECTOR(uint8_t, 2))(p_555->g_58.zw)), ((VECTOR(uint8_t, 2))(l_59.ww)), 0xB7L)).s7))), 0UL, ((VECTOR(uint16_t, 2))(7UL)), 0x57C7L)).even, ((VECTOR(uint16_t, 8))(0x553FL))))).s32, ((VECTOR(uint16_t, 2))(0UL))))).xxyy, ((VECTOR(uint16_t, 4))(5UL)), ((VECTOR(uint16_t, 4))(0xFE89L))))))).odd)).even)) , FAKE_DIVERGE(p_555->global_0_offset, get_global_id(0), 10)) ^ 0x26AFE108L))), p_555->g_26.s1, &p_555->g_48[0], p_555->g_21.s5, p_555), p_555) ^ p_555->g_26.s7), p_555->g_48[0], p_31, l_47[0][0][3], p_555), p_555);
    return p_555->g_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_66 p_555->g_283
 * writes: p_555->g_81 p_555->g_66
 */
struct S0  func_33(int8_t * p_34, struct S5 * p_555)
{ /* block id: 150 */
    int32_t **l_286 = (void*)0;
    int32_t **l_287 = &p_555->g_81;
    (*l_287) = (void*)0;
    for (p_555->g_66 = 19; (p_555->g_66 != (-24)); --p_555->g_66)
    { /* block id: 154 */
        uint32_t l_290 = 4294967291UL;
        if (l_290)
            break;
    }
    return p_555->g_283;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_555->g_81
 */
int8_t * func_35(uint64_t  p_36, int32_t  p_37, int64_t  p_38, int8_t * p_39, struct S5 * p_555)
{ /* block id: 147 */
    int32_t **l_285 = &p_555->g_81;
    (*l_285) = &p_37;
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_243 p_555->g_21 p_555->g_260 p_555->g_269 p_555->g_4 p_555->g_26 p_555->l_comm_values p_555->g_283
 * writes: p_555->g_265 p_555->g_269 p_555->g_273 p_555->g_comm_values p_555->g_66 p_555->g_283
 */
int32_t  func_40(uint32_t  p_41, int8_t * p_42, int8_t * p_43, struct S5 * p_555)
{ /* block id: 57 */
    int32_t *l_244 = &p_555->g_4;
    int32_t **l_245 = &l_244;
    int8_t ***l_261[1];
    int8_t *l_263 = &p_555->g_48[0];
    int8_t **l_262[6][4] = {{(void*)0,(void*)0,&l_263,&l_263},{(void*)0,(void*)0,&l_263,&l_263},{(void*)0,(void*)0,&l_263,&l_263},{(void*)0,(void*)0,&l_263,&l_263},{(void*)0,(void*)0,&l_263,&l_263},{(void*)0,(void*)0,&l_263,&l_263}};
    int8_t **l_264 = (void*)0;
    uint8_t *l_268 = &p_555->g_269;
    uint8_t *l_272 = &p_555->g_273[2][1];
    int64_t *l_278 = (void*)0;
    int64_t *l_279 = (void*)0;
    int64_t *l_280[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_282 = &p_555->g_66;
    volatile struct S0 *l_284 = &p_555->g_283;
    int i, j;
    for (i = 0; i < 1; i++)
        l_261[i] = (void*)0;
    if ((atomic_inc(&p_555->g_atomic_input[89 * get_linear_group_id() + 11]) == 2))
    { /* block id: 59 */
        int32_t l_110[1];
        int32_t *l_109 = &l_110[0];
        int32_t *l_111[10][7] = {{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]},{&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0],&l_110[0]}};
        VECTOR(uint16_t, 2) l_240 = (VECTOR(uint16_t, 2))(0x34EDL, 65534UL);
        uint8_t l_241 = 4UL;
        struct S0 l_242 = {3L,0x1699DA63L,0x267C31A0L,1UL,0x45DEL,1UL,0x24B75B1A384F825FL,0x6B3F34CAL,0UL};/* VOLATILE GLOBAL l_242 */
        int i, j;
        for (i = 0; i < 1; i++)
            l_110[i] = 0x40830044L;
        l_111[7][0] = l_109;
        for (l_110[0] = 13; (l_110[0] < 20); l_110[0] = safe_add_func_uint32_t_u_u(l_110[0], 6))
        { /* block id: 63 */
            VECTOR(int8_t, 16) l_114 = (VECTOR(int8_t, 16))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x16L), 0x16L), 0x16L, 0x5CL, 0x16L, (VECTOR(int8_t, 2))(0x5CL, 0x16L), (VECTOR(int8_t, 2))(0x5CL, 0x16L), 0x5CL, 0x16L, 0x5CL, 0x16L);
            uint32_t l_115 = 0x880774EDL;
            int64_t l_118 = 0x366BBB0B75AD7167L;
            uint64_t l_119 = 0UL;
            int32_t l_120 = 1L;
            uint16_t l_121[4][6][5] = {{{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL}},{{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL}},{{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL}},{{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL},{65529UL,4UL,0UL,0xB3B6L,0UL}}};
            int i, j, k;
            l_115--;
            l_120 ^= (l_119 = l_118);
            if (l_121[2][0][1])
            { /* block id: 67 */
                uint8_t l_122 = 255UL;
                int16_t l_123 = 0x7037L;
                VECTOR(int32_t, 2) l_124 = (VECTOR(int32_t, 2))((-1L), 0x00D849ABL);
                VECTOR(int32_t, 8) l_125 = (VECTOR(int32_t, 8))(0x4C1B6DC2L, (VECTOR(int32_t, 4))(0x4C1B6DC2L, (VECTOR(int32_t, 2))(0x4C1B6DC2L, 0x092D9D7CL), 0x092D9D7CL), 0x092D9D7CL, 0x4C1B6DC2L, 0x092D9D7CL);
                VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(1L, (-1L));
                VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))(0x3CD125F2L, (VECTOR(int32_t, 2))(0x3CD125F2L, 0x668823E0L), 0x668823E0L);
                VECTOR(int32_t, 16) l_128 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                VECTOR(int32_t, 2) l_129 = (VECTOR(int32_t, 2))(0x24309C40L, 8L);
                VECTOR(int32_t, 16) l_130 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L), (VECTOR(int32_t, 2))(1L, (-7L)), (VECTOR(int32_t, 2))(1L, (-7L)), 1L, (-7L), 1L, (-7L));
                int16_t l_131 = 0x15EEL;
                int32_t l_132 = (-8L);
                uint32_t l_133 = 1UL;
                VECTOR(uint64_t, 16) l_134 = (VECTOR(uint64_t, 16))(0xA2D939DEF6EF3277L, (VECTOR(uint64_t, 4))(0xA2D939DEF6EF3277L, (VECTOR(uint64_t, 2))(0xA2D939DEF6EF3277L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xA2D939DEF6EF3277L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xA2D939DEF6EF3277L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xA2D939DEF6EF3277L, 18446744073709551615UL), 0xA2D939DEF6EF3277L, 18446744073709551615UL, 0xA2D939DEF6EF3277L, 18446744073709551615UL);
                union U3 l_135 = {{6L,0x474DD330L}};/* VOLATILE GLOBAL l_135 */
                uint16_t l_136[9] = {3UL,0x0BD7L,3UL,3UL,0x0BD7L,3UL,3UL,0x0BD7L,3UL};
                int32_t l_137 = (-1L);
                uint32_t l_138[10];
                VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x4BFD0F75L), 0x4BFD0F75L), 0x4BFD0F75L, (-8L), 0x4BFD0F75L);
                VECTOR(int64_t, 8) l_140 = (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x26AB53605F433CC5L), 0x26AB53605F433CC5L), 0x26AB53605F433CC5L, (-4L), 0x26AB53605F433CC5L);
                VECTOR(int16_t, 8) l_141 = (VECTOR(int16_t, 8))(0x6E07L, (VECTOR(int16_t, 4))(0x6E07L, (VECTOR(int16_t, 2))(0x6E07L, (-5L)), (-5L)), (-5L), 0x6E07L, (-5L));
                uint8_t l_142 = 0x5AL;
                struct S0 l_143 = {0x66L,0x2345BFC9L,1L,254UL,-1L,7UL,-1L,0xF643767AL,248UL};/* VOLATILE GLOBAL l_143 */
                uint64_t l_144 = 18446744073709551613UL;
                int i;
                for (i = 0; i < 10; i++)
                    l_138[i] = 6UL;
                l_111[9][6] = ((l_122 , l_123) , ((l_131 = ((VECTOR(int32_t, 16))((-5L), ((VECTOR(int32_t, 8))(l_124.xxyxyyxy)), (-1L), 0x5EC2F7F9L, (-10L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_125.s20014764)).s77, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(l_126.xxyyxxxx)), ((VECTOR(int32_t, 4))(l_127.ywxw)).zzwxwzzy, ((VECTOR(int32_t, 2))(0x15F76F47L, 1L)).xxyyxxxy))).odd)).even))).xyyxyxxx)))).s64, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_128.s0d44c9c871b159bd)).s2b, ((VECTOR(int32_t, 16))(l_129.xxxxyxyyxyxyyyyx)).sca)))))).yyyyxxyy))).s10, ((VECTOR(int32_t, 2))(l_130.s31))))), 0x49EE7A1AL, 0x7923AD0EL)))).s7) , (l_132 , (void*)0)));
                if (((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((((l_133 , ((VECTOR(uint64_t, 2))(l_134.sff)).hi) , (l_135 , (l_136[4] = 0x1F9EL))) , (-9L)), l_137, 0x1B01DD78287FB009L, ((l_139.s6 = l_138[9]) , ((VECTOR(int64_t, 16))(l_140.s1233257412034275)).s4), 2L, (l_118 |= (l_141.s6 , l_142)), 3L, 0x084222E9D9AFFEC7L)).s56)).even , l_143) , l_144))
                { /* block id: 73 */
                    int64_t l_145 = 0x13169C20454707D7L;
                    int32_t l_146 = 0x34017EA3L;
                    int8_t l_147 = 0x75L;
                    l_147 &= (l_146 = l_145);
                    for (l_146 = 0; (l_146 <= 15); ++l_146)
                    { /* block id: 78 */
                        int64_t l_150 = 0x4BC813BED6CF4DCEL;
                        int8_t l_151 = 0x63L;
                        uint8_t l_152 = 0x82L;
                        union U3 *l_155 = (void*)0;
                        union U3 l_157 = {{-5L,-1L}};/* VOLATILE GLOBAL l_157 */
                        union U3 *l_156 = &l_157;
                        union U3 *l_158 = (void*)0;
                        --l_152;
                        l_158 = (l_156 = l_155);
                    }
                }
                else
                { /* block id: 83 */
                    int32_t l_159 = 0x7ADFC476L;
                    uint16_t l_174[10][4] = {{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL},{65534UL,65532UL,65532UL,65534UL}};
                    int i, j;
                    if (l_159)
                    { /* block id: 84 */
                        uint32_t l_160 = 0xA730D9EEL;
                        union U2 l_162 = {0x552091D0L};/* VOLATILE GLOBAL l_162 */
                        union U2 *l_161 = &l_162;
                        union U2 *l_163 = (void*)0;
                        union U2 *l_164 = &l_162;
                        l_164 = (l_160 , (l_163 = l_161));
                    }
                    else
                    { /* block id: 87 */
                        uint32_t l_165 = 2UL;
                        int8_t l_168[5];
                        int16_t l_169 = 0L;
                        int32_t l_170[5];
                        uint8_t l_171 = 251UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_168[i] = 0x5DL;
                        for (i = 0; i < 5; i++)
                            l_170[i] = 0x33C35978L;
                        l_165--;
                        l_171--;
                    }
                    if ((l_174[2][2] , (-1L)))
                    { /* block id: 91 */
                        uint32_t l_175 = 0x8893D1EFL;
                        int64_t l_178 = 0x16266F9EC2223ED2L;
                        int8_t l_179 = 0x3EL;
                        uint32_t l_180[6][5][8] = {{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}},{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}},{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}},{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}},{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}},{{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L},{0xD69C55FCL,0xEED3F469L,0x75569793L,0x5A116420L,4294967295UL,0xD69C55FCL,0x5A116420L,0x3BA36606L}}};
                        int i, j, k;
                        ++l_175;
                        ++l_180[4][1][7];
                    }
                    else
                    { /* block id: 94 */
                        uint64_t l_183 = 0x13085C728450BEB1L;
                        uint32_t l_184 = 4294967291UL;
                        int32_t l_185 = (-1L);
                        int64_t l_186[8][9][3] = {{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}},{{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL},{(-7L),0x61033DE3EAF4D012L,0x0200EB90ACB3B04CL}}};
                        int8_t l_187 = (-10L);
                        uint32_t l_188 = 4294967295UL;
                        int32_t l_191[1];
                        int32_t l_192 = 1L;
                        uint32_t l_193 = 0x007DB234L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_191[i] = 0x536BB701L;
                        l_184 |= l_183;
                        l_188++;
                        l_191[0] = l_191[0];
                        l_193 = l_192;
                    }
                }
            }
            else
            { /* block id: 101 */
                int8_t l_194[9];
                int8_t l_195 = (-1L);
                VECTOR(int32_t, 4) l_196 = (VECTOR(int32_t, 4))(0x288E2637L, (VECTOR(int32_t, 2))(0x288E2637L, 0x5A4FDE0CL), 0x5A4FDE0CL);
                int16_t l_197 = 0x3A9FL;
                uint16_t l_198 = 65526UL;
                int i;
                for (i = 0; i < 9; i++)
                    l_194[i] = (-1L);
                l_194[0] |= 1L;
                l_195 &= 0x05F164A4L;
                if ((((l_196.z = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x767F2EEB82D4F081L, (-6L))).xyyxyxxx)).s1) , l_197) , l_198))
                { /* block id: 105 */
                    int32_t l_199 = 0x2D0D5CC4L;
                    for (l_199 = 0; (l_199 == 29); l_199++)
                    { /* block id: 108 */
                        uint32_t l_202 = 0x531F4ECEL;
                        int32_t l_203 = 1L;
                        int32_t l_204[9][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
                        uint64_t l_205[7] = {0x98FDDD542B42E006L,0x98FDDD542B42E006L,0x98FDDD542B42E006L,0x98FDDD542B42E006L,0x98FDDD542B42E006L,0x98FDDD542B42E006L,0x98FDDD542B42E006L};
                        struct S0 l_206 = {3L,-1L,9L,7UL,1L,0x17L,0x5E7F378282F5BE6EL,4294967295UL,0xC7L};/* VOLATILE GLOBAL l_206 */
                        struct S0 l_207 = {-1L,0x7B8DCC1FL,-7L,253UL,0x5784L,0x2DL,0x3F3ABE089725B4D9L,0xCFDBA259L,0xDAL};/* VOLATILE GLOBAL l_207 */
                        VECTOR(uint8_t, 4) l_208 = (VECTOR(uint8_t, 4))(0x7BL, (VECTOR(uint8_t, 2))(0x7BL, 0x69L), 0x69L);
                        uint32_t l_209 = 0x715D12D3L;
                        uint8_t l_210 = 255UL;
                        int32_t l_211 = 0x3604912DL;
                        uint8_t l_212 = 255UL;
                        int16_t l_213 = 1L;
                        int i, j;
                        l_203 = l_202;
                        l_207 = ((l_204[2][0] , l_205[2]) , l_206);
                        l_211 |= (((VECTOR(uint8_t, 16))(l_208.xzxzzwwzwzwwzyxy)).sc , (l_210 = l_209));
                        l_207.f1 ^= (l_213 = l_212);
                    }
                    for (l_199 = 0; (l_199 > 13); ++l_199)
                    { /* block id: 118 */
                        uint64_t l_216[8][6][5] = {{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}},{{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL},{0UL,0UL,0x963BEDA2E6925690L,4UL,0UL}}};
                        int8_t l_217 = 0x09L;
                        uint16_t l_218 = 65535UL;
                        int8_t l_219 = 0x34L;
                        uint8_t l_220 = 0x22L;
                        struct S1 l_221 = {-1L,0x5C57ADCAL};
                        struct S1 l_222[4] = {{1L,0x205DAA7FL},{1L,0x205DAA7FL},{1L,0x205DAA7FL},{1L,0x205DAA7FL}};
                        struct S1 l_223 = {0x77C256FBL,0x2CD97A3DL};
                        int i, j, k;
                        l_216[2][4][0] = 0x2D64B722L;
                        l_218 = l_217;
                        l_223 = ((l_219 , l_220) , (l_222[1] = l_221));
                    }
                }
                else
                { /* block id: 124 */
                    VECTOR(int32_t, 4) l_224 = (VECTOR(int32_t, 4))(0x7B98A7DEL, (VECTOR(int32_t, 2))(0x7B98A7DEL, 0x072930ECL), 0x072930ECL);
                    VECTOR(int32_t, 2) l_225 = (VECTOR(int32_t, 2))(0L, 9L);
                    VECTOR(int32_t, 2) l_226 = (VECTOR(int32_t, 2))(0x0A62B8CCL, 7L);
                    union U4 l_227 = {{0x7FFDE4E1L,-1L}};/* VOLATILE GLOBAL l_227 */
                    int32_t l_228 = (-3L);
                    VECTOR(int32_t, 2) l_229 = (VECTOR(int32_t, 2))(0x58113C6DL, (-1L));
                    VECTOR(int32_t, 8) l_230 = (VECTOR(int32_t, 8))(0x42329A77L, (VECTOR(int32_t, 4))(0x42329A77L, (VECTOR(int32_t, 2))(0x42329A77L, 1L), 1L), 1L, 0x42329A77L, 1L);
                    VECTOR(int32_t, 4) l_231 = (VECTOR(int32_t, 4))(0x2D434661L, (VECTOR(int32_t, 2))(0x2D434661L, 0x28783380L), 0x28783380L);
                    uint16_t l_232 = 0x72F3L;
                    uint32_t l_233 = 1UL;
                    union U4 l_234 = {{0x1716A63AL,0x6BCA4E29L}};/* VOLATILE GLOBAL l_234 */
                    int32_t l_235 = 0x70EAE17EL;
                    int32_t l_236 = 0x3E2A23C3L;
                    int8_t l_237 = 0x24L;
                    uint32_t l_238 = 4294967295UL;
                    int8_t l_239 = 0x67L;
                    int i;
                    l_239 |= ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_224.yzxy)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_225.yxyxxyxx)).odd)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((l_118 = 0x3DC0D5428C27BCC0L) , ((VECTOR(int32_t, 16))(l_226.x, ((l_227 , l_228) , ((l_228 &= (((l_232 &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, 0x370DDD11L)).xxyx)), (int32_t)((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_229.xyyyxyxyxxyyxxyy)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_230.s60703710)).odd)).zxxwxwyy, ((VECTOR(int32_t, 8))(l_231.zzyzyywz))))).s1))).w) , 0UL) , 0x4D315500L)) , l_233)), 0x727D7274L, (l_234 , l_235), (-9L), ((VECTOR(int32_t, 4))(0x3FE0DA03L)), l_236, ((VECTOR(int32_t, 4))((-1L))), (-2L), 0x2C8E5519L)).sf), l_237, ((VECTOR(int32_t, 8))(0x1D2DC399L)), 1L, l_238, 0x04DF4DB6L, ((VECTOR(int32_t, 2))(0x61BCFED0L)), 0x447A66E5L)))).s6740))).w;
                }
            }
        }
        l_241 ^= l_240.x;
        l_242 = (FAKE_DIVERGE(p_555->local_0_offset, get_local_id(0), 10) , l_242);
        unsigned int result = 0;
        int l_110_i0;
        for (l_110_i0 = 0; l_110_i0 < 1; l_110_i0++) {
            result += l_110[l_110_i0];
        }
        result += l_240.y;
        result += l_240.x;
        result += l_241;
        result += l_242.f0;
        result += l_242.f1;
        result += l_242.f2;
        result += l_242.f3;
        result += l_242.f4;
        result += l_242.f5;
        result += l_242.f6;
        result += l_242.f7;
        result += l_242.f8;
        atomic_add(&p_555->g_special_values[89 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 134 */
        (1 + 1);
    }
    (*l_245) = (p_555->g_243 , l_244);
    (*l_282) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_555->g_21.s7, (p_41 & (!(safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((((void*)0 != &p_555->g_243) >= (((VECTOR(uint8_t, 4))(p_555->g_260.s5043)).w & ((l_264 = (l_262[4][1] = &p_42)) == (p_555->g_265 = (void*)0)))) ^ (safe_sub_func_uint8_t_u_u(((*l_272) = (--(*l_268))), (((((!(safe_sub_func_int8_t_s_s(((GROUP_DIVERGE(0, 1) && 0x9FBBAA0FL) , (((p_555->g_4 && ((p_555->g_comm_values[p_555->tid] = 1L) != 0x65EFB6F7C9921F2DL)) != p_555->g_26.s4) & (-1L))), (*l_244)))) == (**l_245)) || FAKE_DIVERGE(p_555->global_1_offset, get_global_id(1), 10)) , 0x64L) != p_41)))), 3)), 7)), (*l_244))), (**l_245))))))), p_555->l_comm_values[(safe_mod_func_uint32_t_u_u(p_555->tid, 144))])), p_41));
    (*l_284) = p_555->g_283;
    return (**l_245);
}


/* ------------------------------------------ */
/* 
 * reads : p_555->g_64 p_555->g_26 p_555->g_48 p_555->g_80 p_555->g_81 p_555->g_66 p_555->g_64.f0 p_555->g_97 p_555->g_102
 * writes: p_555->g_81 p_555->g_66 p_555->g_97 p_555->g_102
 */
int8_t * func_49(uint32_t  p_50, uint32_t  p_51, int8_t * p_52, int32_t  p_53, struct S5 * p_555)
{ /* block id: 8 */
    struct S1 l_60 = {0L,0x765A3FF5L};
    struct S1 l_61 = {9L,-1L};
    VECTOR(int32_t, 16) l_74 = (VECTOR(int32_t, 16))(0x468BE14BL, (VECTOR(int32_t, 4))(0x468BE14BL, (VECTOR(int32_t, 2))(0x468BE14BL, (-10L)), (-10L)), (-10L), 0x468BE14BL, (-10L), (VECTOR(int32_t, 2))(0x468BE14BL, (-10L)), (VECTOR(int32_t, 2))(0x468BE14BL, (-10L)), 0x468BE14BL, (-10L), 0x468BE14BL, (-10L));
    int32_t **l_90[2];
    int i;
    for (i = 0; i < 2; i++)
        l_90[i] = &p_555->g_81;
    l_61 = (l_60 = l_60);
    for (p_51 = 0; (p_51 != 26); p_51 = safe_add_func_int32_t_s_s(p_51, 5))
    { /* block id: 13 */
        uint8_t l_75 = 1UL;
        int8_t *l_82 = &p_555->g_48[0];
        int32_t l_105 = (-1L);
        if ((p_555->g_64 , p_555->g_26.s6))
        { /* block id: 14 */
            int32_t *l_65 = &p_555->g_66;
            int32_t *l_67 = &p_555->g_66;
            int32_t *l_68 = &p_555->g_66;
            int32_t *l_69 = &p_555->g_66;
            int32_t *l_70 = (void*)0;
            int32_t *l_71 = &p_555->g_66;
            int32_t *l_72 = &p_555->g_66;
            int32_t *l_73[7] = {(void*)0,&p_555->g_66,(void*)0,(void*)0,&p_555->g_66,(void*)0,(void*)0};
            int32_t **l_83 = &l_70;
            int i, j;
            ++l_75;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_555->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 144)), permutations[(safe_mod_func_uint32_t_u_u(p_555->g_48[0], 10))][(safe_mod_func_uint32_t_u_u(p_555->tid, 144))]));
            for (l_60.f0 = (-14); (l_60.f0 <= (-13)); l_60.f0 = safe_add_func_int32_t_s_s(l_60.f0, 5))
            { /* block id: 21 */
                (*p_555->g_80) = &p_555->g_4;
                return l_82;
            }
            (*l_83) = (p_51 , (*p_555->g_80));
        }
        else
        { /* block id: 26 */
            uint32_t l_91 = 0xA1B12C12L;
            struct S1 l_93[6] = {{8L,0x6BC3FCB6L},{0x431BEC19L,0x66A7F8ECL},{8L,0x6BC3FCB6L},{8L,0x6BC3FCB6L},{0x431BEC19L,0x66A7F8ECL},{8L,0x6BC3FCB6L}};
            int i;
            for (l_61.f1 = (-4); (l_61.f1 >= (-27)); --l_61.f1)
            { /* block id: 29 */
                uint16_t l_94 = 65534UL;
                uint8_t *l_101[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_101[i] = &l_75;
                for (l_60.f1 = (-7); (l_60.f1 <= (-29)); l_60.f1 = safe_sub_func_uint16_t_u_u(l_60.f1, 1))
                { /* block id: 32 */
                    if ((**p_555->g_80))
                        break;
                    if (p_53)
                        break;
                    (*p_555->g_81) &= l_74.s8;
                    return &p_555->g_48[0];
                }
                if ((safe_div_func_int32_t_s_s((l_91 = (l_90[1] == &p_555->g_81)), (-4L))))
                { /* block id: 39 */
                    struct S1 *l_92 = &l_60;
                    l_93[0] = ((*l_92) = p_555->g_64.f0);
                    --l_94;
                }
                else
                { /* block id: 43 */
                    int8_t * volatile * volatile *l_98 = &p_555->g_97;
                    (*l_98) = p_555->g_97;
                }
                l_105 |= ((-8L) != (0x2596AD70L & (safe_rshift_func_uint8_t_u_s((--p_555->g_102), 4))));
            }
        }
    }
    for (p_53 = 0; (p_53 == (-15)); p_53 = safe_sub_func_int32_t_s_s(p_53, 4))
    { /* block id: 53 */
        int32_t *l_108 = (void*)0;
        l_108 = l_108;
    }
    return p_52;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[144];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 144; i++)
            l_comm_values[i] = 1;
    struct S5 c_556;
    struct S5* p_555 = &c_556;
    struct S5 c_557 = {
        1L, // p_555->g_4
        {-9L}, // p_555->g_5
        (VECTOR(uint16_t, 8))(0xAB6CL, (VECTOR(uint16_t, 4))(0xAB6CL, (VECTOR(uint16_t, 2))(0xAB6CL, 0UL), 0UL), 0UL, 0xAB6CL, 0UL), // p_555->g_21
        (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x7826243A5D8D3410L), 0x7826243A5D8D3410L), 0x7826243A5D8D3410L, 7L, 0x7826243A5D8D3410L), // p_555->g_26
        0x7A3EBEF2L, // p_555->g_46
        {1L}, // p_555->g_48
        (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 1UL), 1UL), // p_555->g_58
        {{0x5DE25D9DL,0x18D198D8L}}, // p_555->g_64
        0x1E6FA5B3L, // p_555->g_66
        &p_555->g_66, // p_555->g_81
        &p_555->g_81, // p_555->g_80
        (void*)0, // p_555->g_97
        0x4E36C8546551E483L, // p_555->g_102
        {{0x43FEF23DL,7L}}, // p_555->g_243
        (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x9EL), 0x9EL), 0x9EL, 2UL, 0x9EL), // p_555->g_260
        (void*)0, // p_555->g_265
        1UL, // p_555->g_269
        {{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL},{255UL,0UL}}, // p_555->g_273
        (void*)0, // p_555->g_281
        {0x5DL,0x568ED2F3L,0x1A630842L,7UL,0L,5UL,0x648ADE77CC95FB7CL,0x58BECDC3L,0xA2L}, // p_555->g_283
        &p_555->g_243.f2, // p_555->g_291
        {0x46DAF4CEL}, // p_555->g_292
        {&p_555->g_81,&p_555->g_81}, // p_555->g_306
        (VECTOR(int32_t, 8))(0x309BAB7CL, (VECTOR(int32_t, 4))(0x309BAB7CL, (VECTOR(int32_t, 2))(0x309BAB7CL, 1L), 1L), 1L, 0x309BAB7CL, 1L), // p_555->g_316
        (VECTOR(int16_t, 16))(0x78CAL, (VECTOR(int16_t, 4))(0x78CAL, (VECTOR(int16_t, 2))(0x78CAL, (-8L)), (-8L)), (-8L), 0x78CAL, (-8L), (VECTOR(int16_t, 2))(0x78CAL, (-8L)), (VECTOR(int16_t, 2))(0x78CAL, (-8L)), 0x78CAL, (-8L), 0x78CAL, (-8L)), // p_555->g_331
        (VECTOR(int16_t, 16))(0x5C48L, (VECTOR(int16_t, 4))(0x5C48L, (VECTOR(int16_t, 2))(0x5C48L, 1L), 1L), 1L, 0x5C48L, 1L, (VECTOR(int16_t, 2))(0x5C48L, 1L), (VECTOR(int16_t, 2))(0x5C48L, 1L), 0x5C48L, 1L, 0x5C48L, 1L), // p_555->g_335
        0x4EAD1AE066ADCDE6L, // p_555->g_343
        (void*)0, // p_555->g_352
        &p_555->g_81, // p_555->g_356
        {0x0AL,0x35A3340EL,0x68C1AAC7L,0x5EL,0x2AFEL,0x83L,0x3F0DA36B9FD48383L,0xC5CDF65EL,1UL}, // p_555->g_359
        {0x7587C3D1L,-6L}, // p_555->g_363
        {-7L}, // p_555->g_370
        &p_555->g_363, // p_555->g_376
        (void*)0, // p_555->g_397
        &p_555->g_397, // p_555->g_396
        0x8D6871F8L, // p_555->g_402
        4294967295UL, // p_555->g_422
        (VECTOR(int32_t, 2))(0x68BAE6DAL, (-1L)), // p_555->g_427
        (VECTOR(int8_t, 2))(9L, 0x20L), // p_555->g_430
        &p_555->g_81, // p_555->g_446
        {&p_555->g_363}, // p_555->g_488
        &p_555->g_488[0], // p_555->g_487
        (-2L), // p_555->g_502
        &p_555->g_292.f0, // p_555->g_509
        &p_555->g_359.f4, // p_555->g_520
        {{&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4},{&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4},{&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4},{&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4,&p_555->g_243.f2.f4}}, // p_555->g_524
        (VECTOR(uint32_t, 2))(0x6D35AAA8L, 4294967295UL), // p_555->g_526
        0, // p_555->v_collective
        sequence_input[get_global_id(0)], // p_555->global_0_offset
        sequence_input[get_global_id(1)], // p_555->global_1_offset
        sequence_input[get_global_id(2)], // p_555->global_2_offset
        sequence_input[get_local_id(0)], // p_555->local_0_offset
        sequence_input[get_local_id(1)], // p_555->local_1_offset
        sequence_input[get_local_id(2)], // p_555->local_2_offset
        sequence_input[get_group_id(0)], // p_555->group_0_offset
        sequence_input[get_group_id(1)], // p_555->group_1_offset
        sequence_input[get_group_id(2)], // p_555->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 144)), permutations[0][get_linear_local_id()])), // p_555->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_556 = c_557;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_555);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_555->g_4, "p_555->g_4", print_hash_value);
    transparent_crc(p_555->g_5.f0, "p_555->g_5.f0", print_hash_value);
    transparent_crc(p_555->g_21.s0, "p_555->g_21.s0", print_hash_value);
    transparent_crc(p_555->g_21.s1, "p_555->g_21.s1", print_hash_value);
    transparent_crc(p_555->g_21.s2, "p_555->g_21.s2", print_hash_value);
    transparent_crc(p_555->g_21.s3, "p_555->g_21.s3", print_hash_value);
    transparent_crc(p_555->g_21.s4, "p_555->g_21.s4", print_hash_value);
    transparent_crc(p_555->g_21.s5, "p_555->g_21.s5", print_hash_value);
    transparent_crc(p_555->g_21.s6, "p_555->g_21.s6", print_hash_value);
    transparent_crc(p_555->g_21.s7, "p_555->g_21.s7", print_hash_value);
    transparent_crc(p_555->g_26.s0, "p_555->g_26.s0", print_hash_value);
    transparent_crc(p_555->g_26.s1, "p_555->g_26.s1", print_hash_value);
    transparent_crc(p_555->g_26.s2, "p_555->g_26.s2", print_hash_value);
    transparent_crc(p_555->g_26.s3, "p_555->g_26.s3", print_hash_value);
    transparent_crc(p_555->g_26.s4, "p_555->g_26.s4", print_hash_value);
    transparent_crc(p_555->g_26.s5, "p_555->g_26.s5", print_hash_value);
    transparent_crc(p_555->g_26.s6, "p_555->g_26.s6", print_hash_value);
    transparent_crc(p_555->g_26.s7, "p_555->g_26.s7", print_hash_value);
    transparent_crc(p_555->g_46, "p_555->g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_555->g_48[i], "p_555->g_48[i]", print_hash_value);

    }
    transparent_crc(p_555->g_58.x, "p_555->g_58.x", print_hash_value);
    transparent_crc(p_555->g_58.y, "p_555->g_58.y", print_hash_value);
    transparent_crc(p_555->g_58.z, "p_555->g_58.z", print_hash_value);
    transparent_crc(p_555->g_58.w, "p_555->g_58.w", print_hash_value);
    transparent_crc(p_555->g_64.f0.f0, "p_555->g_64.f0.f0", print_hash_value);
    transparent_crc(p_555->g_64.f0.f1, "p_555->g_64.f0.f1", print_hash_value);
    transparent_crc(p_555->g_66, "p_555->g_66", print_hash_value);
    transparent_crc(p_555->g_102, "p_555->g_102", print_hash_value);
    transparent_crc(p_555->g_260.s0, "p_555->g_260.s0", print_hash_value);
    transparent_crc(p_555->g_260.s1, "p_555->g_260.s1", print_hash_value);
    transparent_crc(p_555->g_260.s2, "p_555->g_260.s2", print_hash_value);
    transparent_crc(p_555->g_260.s3, "p_555->g_260.s3", print_hash_value);
    transparent_crc(p_555->g_260.s4, "p_555->g_260.s4", print_hash_value);
    transparent_crc(p_555->g_260.s5, "p_555->g_260.s5", print_hash_value);
    transparent_crc(p_555->g_260.s6, "p_555->g_260.s6", print_hash_value);
    transparent_crc(p_555->g_260.s7, "p_555->g_260.s7", print_hash_value);
    transparent_crc(p_555->g_269, "p_555->g_269", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_555->g_273[i][j], "p_555->g_273[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_555->g_283.f0, "p_555->g_283.f0", print_hash_value);
    transparent_crc(p_555->g_283.f1, "p_555->g_283.f1", print_hash_value);
    transparent_crc(p_555->g_283.f2, "p_555->g_283.f2", print_hash_value);
    transparent_crc(p_555->g_283.f3, "p_555->g_283.f3", print_hash_value);
    transparent_crc(p_555->g_283.f4, "p_555->g_283.f4", print_hash_value);
    transparent_crc(p_555->g_283.f5, "p_555->g_283.f5", print_hash_value);
    transparent_crc(p_555->g_283.f6, "p_555->g_283.f6", print_hash_value);
    transparent_crc(p_555->g_283.f7, "p_555->g_283.f7", print_hash_value);
    transparent_crc(p_555->g_283.f8, "p_555->g_283.f8", print_hash_value);
    transparent_crc(p_555->g_292.f0, "p_555->g_292.f0", print_hash_value);
    transparent_crc(p_555->g_316.s0, "p_555->g_316.s0", print_hash_value);
    transparent_crc(p_555->g_316.s1, "p_555->g_316.s1", print_hash_value);
    transparent_crc(p_555->g_316.s2, "p_555->g_316.s2", print_hash_value);
    transparent_crc(p_555->g_316.s3, "p_555->g_316.s3", print_hash_value);
    transparent_crc(p_555->g_316.s4, "p_555->g_316.s4", print_hash_value);
    transparent_crc(p_555->g_316.s5, "p_555->g_316.s5", print_hash_value);
    transparent_crc(p_555->g_316.s6, "p_555->g_316.s6", print_hash_value);
    transparent_crc(p_555->g_316.s7, "p_555->g_316.s7", print_hash_value);
    transparent_crc(p_555->g_331.s0, "p_555->g_331.s0", print_hash_value);
    transparent_crc(p_555->g_331.s1, "p_555->g_331.s1", print_hash_value);
    transparent_crc(p_555->g_331.s2, "p_555->g_331.s2", print_hash_value);
    transparent_crc(p_555->g_331.s3, "p_555->g_331.s3", print_hash_value);
    transparent_crc(p_555->g_331.s4, "p_555->g_331.s4", print_hash_value);
    transparent_crc(p_555->g_331.s5, "p_555->g_331.s5", print_hash_value);
    transparent_crc(p_555->g_331.s6, "p_555->g_331.s6", print_hash_value);
    transparent_crc(p_555->g_331.s7, "p_555->g_331.s7", print_hash_value);
    transparent_crc(p_555->g_331.s8, "p_555->g_331.s8", print_hash_value);
    transparent_crc(p_555->g_331.s9, "p_555->g_331.s9", print_hash_value);
    transparent_crc(p_555->g_331.sa, "p_555->g_331.sa", print_hash_value);
    transparent_crc(p_555->g_331.sb, "p_555->g_331.sb", print_hash_value);
    transparent_crc(p_555->g_331.sc, "p_555->g_331.sc", print_hash_value);
    transparent_crc(p_555->g_331.sd, "p_555->g_331.sd", print_hash_value);
    transparent_crc(p_555->g_331.se, "p_555->g_331.se", print_hash_value);
    transparent_crc(p_555->g_331.sf, "p_555->g_331.sf", print_hash_value);
    transparent_crc(p_555->g_335.s0, "p_555->g_335.s0", print_hash_value);
    transparent_crc(p_555->g_335.s1, "p_555->g_335.s1", print_hash_value);
    transparent_crc(p_555->g_335.s2, "p_555->g_335.s2", print_hash_value);
    transparent_crc(p_555->g_335.s3, "p_555->g_335.s3", print_hash_value);
    transparent_crc(p_555->g_335.s4, "p_555->g_335.s4", print_hash_value);
    transparent_crc(p_555->g_335.s5, "p_555->g_335.s5", print_hash_value);
    transparent_crc(p_555->g_335.s6, "p_555->g_335.s6", print_hash_value);
    transparent_crc(p_555->g_335.s7, "p_555->g_335.s7", print_hash_value);
    transparent_crc(p_555->g_335.s8, "p_555->g_335.s8", print_hash_value);
    transparent_crc(p_555->g_335.s9, "p_555->g_335.s9", print_hash_value);
    transparent_crc(p_555->g_335.sa, "p_555->g_335.sa", print_hash_value);
    transparent_crc(p_555->g_335.sb, "p_555->g_335.sb", print_hash_value);
    transparent_crc(p_555->g_335.sc, "p_555->g_335.sc", print_hash_value);
    transparent_crc(p_555->g_335.sd, "p_555->g_335.sd", print_hash_value);
    transparent_crc(p_555->g_335.se, "p_555->g_335.se", print_hash_value);
    transparent_crc(p_555->g_335.sf, "p_555->g_335.sf", print_hash_value);
    transparent_crc(p_555->g_343, "p_555->g_343", print_hash_value);
    transparent_crc(p_555->g_359.f0, "p_555->g_359.f0", print_hash_value);
    transparent_crc(p_555->g_359.f1, "p_555->g_359.f1", print_hash_value);
    transparent_crc(p_555->g_359.f2, "p_555->g_359.f2", print_hash_value);
    transparent_crc(p_555->g_359.f3, "p_555->g_359.f3", print_hash_value);
    transparent_crc(p_555->g_359.f4, "p_555->g_359.f4", print_hash_value);
    transparent_crc(p_555->g_359.f5, "p_555->g_359.f5", print_hash_value);
    transparent_crc(p_555->g_359.f6, "p_555->g_359.f6", print_hash_value);
    transparent_crc(p_555->g_359.f7, "p_555->g_359.f7", print_hash_value);
    transparent_crc(p_555->g_359.f8, "p_555->g_359.f8", print_hash_value);
    transparent_crc(p_555->g_363.f0, "p_555->g_363.f0", print_hash_value);
    transparent_crc(p_555->g_363.f1, "p_555->g_363.f1", print_hash_value);
    transparent_crc(p_555->g_370.f0, "p_555->g_370.f0", print_hash_value);
    transparent_crc(p_555->g_402, "p_555->g_402", print_hash_value);
    transparent_crc(p_555->g_422, "p_555->g_422", print_hash_value);
    transparent_crc(p_555->g_427.x, "p_555->g_427.x", print_hash_value);
    transparent_crc(p_555->g_427.y, "p_555->g_427.y", print_hash_value);
    transparent_crc(p_555->g_430.x, "p_555->g_430.x", print_hash_value);
    transparent_crc(p_555->g_430.y, "p_555->g_430.y", print_hash_value);
    transparent_crc(p_555->g_502, "p_555->g_502", print_hash_value);
    transparent_crc(p_555->g_526.x, "p_555->g_526.x", print_hash_value);
    transparent_crc(p_555->g_526.y, "p_555->g_526.y", print_hash_value);
    transparent_crc(p_555->v_collective, "p_555->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 89; i++)
            transparent_crc(p_555->g_special_values[i + 89 * get_linear_group_id()], "p_555->g_special_values[i + 89 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_555->l_special_values[i], "p_555->l_special_values[i]", print_hash_value);
    transparent_crc(p_555->l_comm_values[get_linear_local_id()], "p_555->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_555->g_comm_values[get_linear_group_id() * 144 + get_linear_local_id()], "p_555->g_comm_values[get_linear_group_id() * 144 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
