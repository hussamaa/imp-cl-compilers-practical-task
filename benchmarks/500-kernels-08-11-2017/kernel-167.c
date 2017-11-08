// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 10,51,14 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 3443293907

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   uint8_t  f1;
   int16_t  f2;
   int32_t  f3;
};

struct S1 {
    VECTOR(int8_t, 8) g_55;
    int32_t g_58;
    int32_t g_60;
    int32_t * volatile g_72;
    int32_t * volatile * volatile g_71;
    VECTOR(uint16_t, 4) g_79;
    VECTOR(uint16_t, 4) g_82;
    VECTOR(int32_t, 16) g_95;
    VECTOR(uint64_t, 16) g_123;
    uint32_t g_139;
    uint32_t g_164;
    uint16_t *g_184;
    uint16_t g_191;
    int32_t g_192;
    int32_t **g_196;
    int32_t *g_201;
    int32_t **g_200;
    int16_t g_206;
    int16_t *g_205;
    volatile VECTOR(uint32_t, 8) g_220;
    VECTOR(uint8_t, 8) g_246;
    uint64_t **g_270;
    VECTOR(int8_t, 16) g_273;
    VECTOR(int8_t, 4) g_275;
    VECTOR(int8_t, 4) g_277;
    uint64_t *g_283;
    uint64_t **g_282[7][10];
    VECTOR(uint16_t, 2) g_318;
    volatile VECTOR(int64_t, 4) g_321;
    VECTOR(int64_t, 2) g_322;
    int8_t g_333;
    uint32_t g_344;
    volatile VECTOR(uint16_t, 8) g_349;
    VECTOR(int32_t, 2) g_359;
    int32_t g_370;
    VECTOR(int16_t, 8) g_388;
    VECTOR(int8_t, 4) g_389;
    VECTOR(uint8_t, 8) g_390;
    VECTOR(uint8_t, 8) g_391;
    union U0 g_430[7];
    union U0 g_433;
    int32_t * volatile g_454;
    union U0 g_460;
    volatile VECTOR(uint8_t, 2) g_464;
    VECTOR(uint8_t, 2) g_465;
    VECTOR(uint8_t, 2) g_466;
    volatile VECTOR(uint64_t, 16) g_479;
    volatile uint8_t *g_493;
    volatile uint8_t ** volatile g_492;
    volatile uint8_t ** volatile * volatile g_494;
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
int64_t  func_1(struct S1 * p_497);
uint32_t  func_7(uint64_t  p_8, int32_t  p_9, struct S1 * p_497);
uint64_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, struct S1 * p_497);
uint32_t  func_14(int32_t  p_15, uint32_t  p_16, int32_t  p_17, struct S1 * p_497);
uint32_t  func_29(uint32_t  p_30, int32_t  p_31, int16_t  p_32, int16_t  p_33, struct S1 * p_497);
int32_t * func_40(int32_t * p_41, int32_t * p_42, int32_t * p_43, uint64_t  p_44, struct S1 * p_497);
int32_t * func_45(int32_t * p_46, int32_t * p_47, struct S1 * p_497);
int32_t * func_48(int32_t  p_49, int32_t  p_50, int32_t  p_51, struct S1 * p_497);
int32_t ** func_64(int32_t  p_65, uint32_t  p_66, struct S1 * p_497);
int32_t ** func_73(int32_t ** p_74, int32_t * p_75, int16_t  p_76, struct S1 * p_497);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_497->l_comm_values p_497->g_comm_values p_497->g_55 p_497->g_196 p_497->g_201 p_497->g_72 p_497->g_60 p_497->g_191 p_497->g_192 p_497->g_58 p_497->g_273 p_497->g_275 p_497->g_277 p_497->g_282 p_497->g_123 p_497->g_71 p_497->g_318 p_497->g_321 p_497->g_322 p_497->g_164 p_497->g_220 p_497->g_333 p_497->g_349 p_497->g_359 p_497->g_79 p_497->g_206 p_497->g_139 p_497->g_95 p_497->g_370 p_497->g_200 p_497->g_460 p_497->g_464 p_497->g_465 p_497->g_466 p_497->g_205 p_497->g_344 p_497->g_479 p_497->g_433 p_497->g_460.f0 p_497->g_82 p_497->g_492 p_497->g_494 p_497->g_454
 * writes: p_497->g_200 p_497->g_205 p_497->g_58 p_497->g_60 p_497->g_270 p_497->g_277 p_497->g_192 p_497->g_72 p_497->g_344 p_497->g_246 p_497->g_206 p_497->g_370 p_497->g_333 p_497->g_201 p_497->g_460.f0 p_497->g_492 p_497->g_454
 */
int64_t  func_1(struct S1 * p_497)
{ /* block id: 4 */
    int64_t l_2 = 7L;
    int16_t l_18[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_36 = 4294967286UL;
    VECTOR(int32_t, 4) l_368 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5595D754L), 0x5595D754L);
    int32_t *l_428 = (void*)0;
    uint32_t l_444 = 0x385762FDL;
    uint16_t *l_474 = &p_497->g_191;
    VECTOR(int64_t, 4) l_482 = (VECTOR(int64_t, 4))(0x78D2CCD38511F5AFL, (VECTOR(int64_t, 2))(0x78D2CCD38511F5AFL, 7L), 7L);
    int8_t l_490 = 0x00L;
    int32_t * volatile *l_495 = &p_497->g_454;
    VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))(0x295203D5L, (VECTOR(int32_t, 2))(0x295203D5L, 0L), 0L);
    int i;
    if (l_2)
    { /* block id: 5 */
        int8_t l_37 = 6L;
        uint32_t *l_343 = &p_497->g_344;
        int16_t *l_367[9][4][7] = {{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}},{{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]},{&l_18[2],&l_18[2],&l_18[5],(void*)0,&l_18[0],&l_18[1],&l_18[2]}}};
        int32_t *l_369 = &p_497->g_370;
        int i, j, k;
        (*l_369) |= ((safe_mul_func_uint8_t_u_u(l_2, ((l_368.x |= (safe_rshift_func_uint8_t_u_s(((p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))] || ((!(func_7(func_10(p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))], ((*l_343) = func_14(l_18[2], ((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(func_29((safe_add_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), l_18[2])), (p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))] , ((l_36 != l_2) != (l_37 & l_37))), p_497->g_comm_values[p_497->tid], p_497->g_comm_values[p_497->tid], p_497), l_2)), p_497->g_333)) <= l_2), l_37)) || l_36), 0x614194ACDE1FB7B2L)), l_37)) | 0x1012L), p_497->g_318.y, p_497)), l_18[2], p_497), p_497->g_275.z, p_497) , 0xED00L)) && 1L)) & l_37), p_497->g_333))) && 0xD10EL))) <= FAKE_DIVERGE(p_497->group_0_offset, get_group_id(0), 10));
    }
    else
    { /* block id: 115 */
        uint32_t l_395 = 4294967288UL;
        uint64_t l_400[9][8][2] = {{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}},{{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL},{0xD76851E3671F6E43L,0xCBFB21F53E24415DL}}};
        VECTOR(int64_t, 2) l_425 = (VECTOR(int64_t, 2))(0x67FF820971E5600AL, 0x1AB0A822D42B85DCL);
        int32_t *l_429 = (void*)0;
        VECTOR(uint8_t, 8) l_463 = (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0UL), 0UL), 0UL, 0xE7L, 0UL);
        uint8_t *l_485 = &p_497->g_460.f1;
        uint8_t *l_486 = (void*)0;
        uint8_t *l_487 = &p_497->g_460.f0;
        int32_t l_491 = 0x18AB31EEL;
        int i, j, k;
        (**p_497->g_200) |= l_2;
        for (p_497->g_333 = (-3); (p_497->g_333 != 7); p_497->g_333 = safe_add_func_uint8_t_u_u(p_497->g_333, 5))
        { /* block id: 119 */
            uint64_t **l_387 = &p_497->g_283;
            VECTOR(uint8_t, 4) l_392 = (VECTOR(uint8_t, 4))(0x9BL, (VECTOR(uint8_t, 2))(0x9BL, 255UL), 255UL);
            int32_t l_397 = (-5L);
            union U0 *l_431 = &p_497->g_430[2];
            union U0 *l_432[8] = {&p_497->g_433,&p_497->g_433,&p_497->g_433,&p_497->g_433,&p_497->g_433,&p_497->g_433,&p_497->g_433,&p_497->g_433};
            int64_t *l_434 = (void*)0;
            int64_t *l_435[3][2];
            uint32_t l_442 = 0x73093894L;
            int64_t l_443 = (-1L);
            uint8_t *l_445 = (void*)0;
            uint8_t *l_446 = (void*)0;
            uint8_t *l_447 = (void*)0;
            uint8_t *l_448 = (void*)0;
            uint8_t *l_449 = (void*)0;
            uint8_t *l_450 = (void*)0;
            uint8_t *l_451 = (void*)0;
            uint8_t *l_452 = (void*)0;
            uint8_t *l_453[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t *l_455 = &l_397;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_435[i][j] = (void*)0;
            }
            if (l_2)
            { /* block id: 120 */
                uint16_t *l_396[1];
                int64_t *l_398 = (void*)0;
                int32_t l_399 = (-3L);
                int32_t *l_401 = &p_497->g_370;
                int i;
                for (i = 0; i < 1; i++)
                    l_396[i] = (void*)0;
                (*l_401) = (safe_lshift_func_uint8_t_u_s(((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))((-1L), 0x1DL, 0x63L, 0x5AL)).odd))), ((VECTOR(int8_t, 2))(0x69L, (-1L))).odd, (-3L), (safe_mul_func_uint8_t_u_u(0xD6L, (safe_rshift_func_uint8_t_u_s((+((safe_mul_func_int16_t_s_s((((0x51L & (255UL < (((((*p_497->g_201) |= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((&p_497->g_283 == l_387), ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(p_497->g_388.s21)).yxyx))), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x268BL, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(p_497->g_389.zy)).xyyx, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_497->g_390.s16)), ((VECTOR(uint8_t, 4))(0x18L, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(0x3AL, 1UL, 0xA0L, 252UL)).odd, ((VECTOR(uint8_t, 16))(p_497->g_391.s2330312670547200)).sc3, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xE4L, 0x01L))))))).lo, 0UL, 0xB2L)), 0x0FL, 0UL)).s26, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(l_392.xx)).xyyxxxyxxxxyyxyx, (uint8_t)(safe_mod_func_int64_t_s_s(l_36, (l_399 = ((l_397 = l_395) & p_497->g_139)))), (uint8_t)l_399))).s4b, ((VECTOR(uint8_t, 2))(0x0EL))))))), ((VECTOR(uint8_t, 8))(254UL)), ((VECTOR(uint8_t, 2))(0x71L)), ((VECTOR(uint8_t, 2))(1UL)), 2UL, 2UL)).even)), ((VECTOR(uint8_t, 8))(255UL))))).odd))), (-1L), ((VECTOR(int16_t, 4))(2L)), ((VECTOR(int16_t, 4))((-1L))), 9L, 0x3FFCL)).s6070)).yxwxyyyx, ((VECTOR(int16_t, 8))(0x2A4AL)), ((VECTOR(int16_t, 8))((-7L)))))).lo))).zzyyzzxyyxzxwyzy, ((VECTOR(int16_t, 16))(0L))))).s9)), p_497->g_82.x))) > l_395) ^ p_497->g_321.y) , p_497->g_391.s6))) & l_400[6][5][1]) == FAKE_DIVERGE(p_497->local_2_offset, get_local_id(2), 10)), (*p_497->g_205))) & l_392.w)), p_497->g_206)))), 0L, 0L)), ((VECTOR(int8_t, 8))(0x08L)), ((VECTOR(int8_t, 8))(4L))))).odd)).z & 9L) , FAKE_DIVERGE(p_497->group_1_offset, get_group_id(1), 10)), 1));
                for (p_497->g_344 = (-23); (p_497->g_344 != 40); ++p_497->g_344)
                { /* block id: 127 */
                    VECTOR(int16_t, 16) l_404 = (VECTOR(int16_t, 16))(0x0BEDL, (VECTOR(int16_t, 4))(0x0BEDL, (VECTOR(int16_t, 2))(0x0BEDL, 1L), 1L), 1L, 0x0BEDL, 1L, (VECTOR(int16_t, 2))(0x0BEDL, 1L), (VECTOR(int16_t, 2))(0x0BEDL, 1L), 0x0BEDL, 1L, 0x0BEDL, 1L);
                    VECTOR(int16_t, 8) l_407 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L));
                    uint16_t *l_416 = &p_497->g_191;
                    uint16_t **l_417 = (void*)0;
                    uint64_t *l_418 = &l_400[7][2][1];
                    int i;
                    (*l_401) &= ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))((-1L), 0x29D2B799L)).yxxy, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((**p_497->g_71) = ((**p_497->g_200) = l_368.w)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_404.sff)), 0L, 0x7F6CL)), (safe_div_func_uint8_t_u_u(l_397, (p_497->g_273.s8 | 4L))), ((VECTOR(int16_t, 2))(l_407.s26)), 0L)), (-1L), 0x5A3CL, 0x393FL, 0x11CCL, (((*p_497->g_205) = ((--p_497->g_79.x) , (safe_div_func_uint16_t_u_u(l_400[6][5][1], (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((((l_416 == (l_396[0] = &p_497->g_191)) <= (((((VECTOR(uint64_t, 4))(0x5D862D2EB6CDE9FFL, 18446744073709551615UL, 0x08C7E65246F871A2L, 1UL)).x , l_418) != &l_400[7][5][1]) && (*p_497->g_72))) ^ FAKE_DIVERGE(p_497->global_1_offset, get_global_id(1), 10)), p_497->g_82.x)) != 0x5BL), l_397)))))) , (*p_497->g_205)), ((VECTOR(int16_t, 2))(0x0A51L)), 0x1195L)).sd4, ((VECTOR(uint16_t, 2))(0xDA24L))))).yyyx)), 0x198D6130L, 0x17F728EFL, ((VECTOR(int32_t, 2))(0L)), 0x53606592L, 0x2E121E37L, 1L, 0x44EB3958L, ((VECTOR(int32_t, 2))(1L)), 0x23F8562CL)))).s36e5, ((VECTOR(int32_t, 4))(5L)))))))).x;
                }
                (*p_497->g_200) = (*p_497->g_200);
            }
            else
            { /* block id: 136 */
                for (l_397 = 0; (l_397 != (-7)); l_397--)
                { /* block id: 139 */
                    return l_36;
                }
            }
            if (l_392.y)
                break;
        }
        for (l_395 = 0; (l_395 <= 45); ++l_395)
        { /* block id: 156 */
            uint32_t l_469[7][5] = {{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL},{4294967295UL,0UL,0x0E476814L,5UL,0x7AFABE0EL}};
            int8_t l_475 = 2L;
            int i, j;
            (**p_497->g_200) &= (safe_mul_func_uint8_t_u_u((p_497->g_460 , (((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(l_463.s14601465)).s0161412461637047, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(p_497->g_464.xy)).xyxx, ((VECTOR(uint8_t, 4))(p_497->g_465.yyxx))))).zyxwxzzyyyxxzwzw, ((VECTOR(uint8_t, 16))(p_497->g_466.yyxxyxxyyyxxxyyy))))).sd6, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))((((*p_497->g_205) && (safe_add_func_uint32_t_u_u(l_469[3][1], (GROUP_DIVERGE(2, 1) | ((safe_add_func_uint16_t_u_u((l_36 && (((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x86F3C263A32B6267L, 0x8844209F596A9572L)).xxxy)).odd)).xxyyyxxy)).s4715222005621261))).sf != p_497->g_344)), p_497->g_60)) != p_497->g_370))))) <= (safe_mul_func_uint8_t_u_u((l_469[1][1] == FAKE_DIVERGE(p_497->group_2_offset, get_group_id(2), 10)), p_497->g_465.x))), ((VECTOR(uint8_t, 2))(251UL)), 6UL)).zzzyxyxx, ((VECTOR(uint8_t, 8))(0xDDL))))).hi)).hi))))).yxyx, (uint8_t)p_497->g_123.s8, (uint8_t)0x51L))).yxywywzx))).s22)).xxxyxxxy)).s3, 1UL)) , l_474) == &p_497->g_191) < 18446744073709551611UL) , 252UL)), l_475));
            (*p_497->g_201) = (safe_mod_func_uint16_t_u_u((l_469[1][3] , (l_469[3][1] & (safe_unary_minus_func_int32_t_s(3L)))), l_469[0][3]));
        }
        (*p_497->g_201) = ((0xD30ADAB97203E4FAL & (((9UL && (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(0x204CB97632927941L, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(GROUP_DIVERGE(2, 1), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0UL, 0x9BFAB2DADDA118A5L)).xyyyxyxxxxyyyxxx)).s3b)), 0x50F6A5B74F8E16C0L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_497->g_479.s88)).yyyx)).yzzwywzx))).s2124162131557466, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0L, p_497->g_273.s5, 0L, 8L, (-1L), (p_497->g_220.s4 , (safe_rshift_func_int16_t_s_s((-1L), 14))), 0x4FA2881849D711F4L, 0x232A7E4F65A5BFDEL)), p_497->g_277.z, ((VECTOR(int64_t, 4))(l_482.xyyz)), ((safe_rshift_func_uint8_t_u_u(((p_497->g_433 , 0x4D729F9DE0ED1DDDL) , (++(*l_487))), FAKE_DIVERGE(p_497->group_2_offset, get_group_id(2), 10))) > (p_497->g_321.w & p_497->g_82.w)), 0x0D2F6B723FA2FD42L, (-1L))).sf049)), 0x59A2927AC26C70C2L, 0L, (-1L))).odd, ((VECTOR(int64_t, 4))((-9L)))))).yxwyzzzwzwxwywyw, ((VECTOR(uint64_t, 16))(0xE3758F47A48975C4L))))).even)).hi, (uint64_t)l_36, (uint64_t)FAKE_DIVERGE(p_497->group_1_offset, get_group_id(1), 10)))).hi)), 0x6096ACF369D71635L, 0xE51340FECEE49ABCL)).s07, (uint64_t)l_490))), 18446744073709551615UL)).odd, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).xyxx, ((VECTOR(uint64_t, 4))(0x93A0BA7A9EBB3AC4L))))).odd, ((VECTOR(uint64_t, 2))(0x0846B3CA98727514L)), ((VECTOR(uint64_t, 2))(0x56F42C5B4D69B393L))))), ((VECTOR(uint64_t, 2))(0xC91CDACF365B5926L))))).xyyyxyyy, (uint64_t)l_36, (uint64_t)0xA3058A9B67DD0373L))).even, ((VECTOR(uint64_t, 4))(0x51EC01239C5FE490L))))))).w > l_368.x)) <= l_491) <= p_497->g_277.x)) , 0L);
    }
    (*p_497->g_494) = p_497->g_492;
    (*l_495) = (*p_497->g_71);
    (**l_495) = ((VECTOR(int32_t, 16))(l_496.xyxxzywyzwwwwyyy)).s7;
    return (**l_495);
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_95
 * writes:
 */
uint32_t  func_7(uint64_t  p_8, int32_t  p_9, struct S1 * p_497)
{ /* block id: 110 */
    uint64_t **l_365 = &p_497->g_283;
    uint64_t **l_366 = &p_497->g_283;
    l_366 = l_365;
    return p_497->g_95.sb;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_349 p_497->g_60 p_497->g_359 p_497->g_79 p_497->g_206 p_497->g_123 p_497->g_139 p_497->g_322 p_497->l_comm_values
 * writes: p_497->g_246 p_497->g_206
 */
uint64_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, struct S1 * p_497)
{ /* block id: 105 */
    VECTOR(uint16_t, 2) l_350 = (VECTOR(uint16_t, 2))(0x4334L, 65535UL);
    VECTOR(uint16_t, 2) l_351 = (VECTOR(uint16_t, 2))(1UL, 1UL);
    VECTOR(int32_t, 8) l_358 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x3B654ED4L), 0x3B654ED4L), 0x3B654ED4L, (-4L), 0x3B654ED4L);
    int16_t *l_364 = &p_497->g_206;
    int i;
    l_358.s0 = (safe_div_func_uint32_t_u_u((((VECTOR(uint32_t, 2))(0xA74F8166L, 3UL)).even , ((((safe_lshift_func_uint8_t_u_u(((((((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_497->g_349.s64)).xxyx)).xywwwxxzyxxxwxxz, ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(l_350.xxyxxxxxyxxxxyxx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_351.yxyxxyyy)).odd)).zxzwyzwx)).s6254721575736214, ((VECTOR(uint16_t, 2))(65535UL, 0xFB4CL)).yxyyxxyxyyxyxyyy)))))))).s14)).xxxxxxyx, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(0L, (-1L))).xxxyyxxx)))))).s6, 0x66L, ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(1L, (safe_lshift_func_int8_t_s_u(((~(0xC4L & (p_497->g_246.s0 = p_497->g_60))) ^ ((VECTOR(int32_t, 8))(0x68802418L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_358.s0614013413467722)).s43)), 9L, (-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(p_497->g_359.xxxxxyyyyyyyyyxy)).s0e, (int32_t)l_350.y))), (-8L), 0x45C04CBEL)).odd)), (-2L))).s3), 6)))), l_350.x)) && ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(p_497->g_79.y, ((*l_364) |= ((void*)0 == &p_12)))), p_11)) < 1L)), ((VECTOR(uint8_t, 4))(9UL)), 0x20L)).odd, ((VECTOR(uint8_t, 4))(1UL))))).wxywzxxz))).s5 , p_11) > p_497->g_123.sa) , p_497->g_139) , l_358.s6), p_13)) != 3L) && p_497->g_322.y) , p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))])), (-9L)));
    return l_351.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_220
 * writes:
 */
uint32_t  func_14(int32_t  p_15, uint32_t  p_16, int32_t  p_17, struct S1 * p_497)
{ /* block id: 101 */
    int16_t l_334 = 0x5C80L;
    int32_t *l_335 = &p_497->g_60;
    int32_t *l_336 = &p_497->g_192;
    int32_t *l_337 = &p_497->g_58;
    int32_t *l_338 = (void*)0;
    int32_t *l_339 = &p_497->g_192;
    uint32_t l_340 = 0x22B1AB69L;
    ++l_340;
    return p_497->g_220.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_55 p_497->l_comm_values p_497->g_196 p_497->g_201 p_497->g_72 p_497->g_60 p_497->g_191 p_497->g_192 p_497->g_58 p_497->g_273 p_497->g_275 p_497->g_277 p_497->g_282 p_497->g_123 p_497->g_71 p_497->g_318 p_497->g_321 p_497->g_322 p_497->g_164 p_497->g_220
 * writes: p_497->g_200 p_497->g_205 p_497->g_58 p_497->g_60 p_497->g_270 p_497->g_277 p_497->g_192 p_497->g_72
 */
uint32_t  func_29(uint32_t  p_30, int32_t  p_31, int16_t  p_32, int16_t  p_33, struct S1 * p_497)
{ /* block id: 6 */
    int32_t *l_59 = &p_497->g_60;
    VECTOR(int8_t, 8) l_61 = (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 9L), 9L), 9L, 0x6AL, 9L);
    uint64_t ***l_319 = (void*)0;
    uint64_t ****l_320 = &l_319;
    VECTOR(int8_t, 4) l_325 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-6L)), (-6L));
    int8_t *l_326 = (void*)0;
    int8_t *l_327 = (void*)0;
    int8_t *l_328[4];
    int32_t l_329[8] = {0x576D12FDL,(-2L),0x576D12FDL,0x576D12FDL,(-2L),0x576D12FDL,0x576D12FDL,(-2L)};
    VECTOR(int32_t, 4) l_330 = (VECTOR(int32_t, 4))(0x593ADD28L, (VECTOR(int32_t, 2))(0x593ADD28L, (-1L)), (-1L));
    VECTOR(uint32_t, 16) l_331 = (VECTOR(uint32_t, 16))(0xDB0F3172L, (VECTOR(uint32_t, 4))(0xDB0F3172L, (VECTOR(uint32_t, 2))(0xDB0F3172L, 0x9818F5C7L), 0x9818F5C7L), 0x9818F5C7L, 0xDB0F3172L, 0x9818F5C7L, (VECTOR(uint32_t, 2))(0xDB0F3172L, 0x9818F5C7L), (VECTOR(uint32_t, 2))(0xDB0F3172L, 0x9818F5C7L), 0xDB0F3172L, 0x9818F5C7L, 0xDB0F3172L, 0x9818F5C7L);
    int64_t l_332 = (-3L);
    int i;
    for (i = 0; i < 4; i++)
        l_328[i] = (void*)0;
    for (p_33 = 0; (p_33 != 9); p_33 = safe_add_func_uint8_t_u_u(p_33, 8))
    { /* block id: 9 */
        int64_t l_56 = 1L;
        int32_t *l_57 = &p_497->g_58;
        VECTOR(uint8_t, 16) l_298 = (VECTOR(uint8_t, 16))(0x4CL, (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 0x9BL), 0x9BL), 0x9BL, 0x4CL, 0x9BL, (VECTOR(uint8_t, 2))(0x4CL, 0x9BL), (VECTOR(uint8_t, 2))(0x4CL, 0x9BL), 0x4CL, 0x9BL, 0x4CL, 0x9BL);
        int8_t l_307 = 0x5BL;
        uint16_t *l_308[7] = {&p_497->g_191,(void*)0,&p_497->g_191,&p_497->g_191,(void*)0,&p_497->g_191,&p_497->g_191};
        VECTOR(int32_t, 4) l_309 = (VECTOR(int32_t, 4))(0x75C6609EL, (VECTOR(int32_t, 2))(0x75C6609EL, 1L), 1L);
        int i;
        (*p_497->g_71) = func_40(func_45(func_48((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x15L, 0x35L)).hi, (safe_unary_minus_func_uint8_t_u((((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(p_497->g_55.s42132171)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(1L, l_56, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((+(+(((*l_57) = p_30) != ((void*)0 == l_59)))), 0x0CL, 9L, (-1L))))), 0L, 4L)).even)), ((VECTOR(int8_t, 4))(l_61.s5147))))).lo)).xyyxxxyx, ((VECTOR(int8_t, 8))(0x6AL, (-1L), (((safe_lshift_func_uint16_t_u_u((0x30L && (((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))((((*l_59) |= 65535UL) < p_497->g_55.s3), (p_497->g_comm_values[p_497->tid] || p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))]), 0L, 0x3AEDL, 0x6A78L, 0x38C8L, (-7L), p_497->g_55.s1, 0x29B0L, 1L, p_30, 9L, (-1L), 0x0CF1L, 0x0913L, (-3L))).s8cd6))).x <= 0x03C9L)), GROUP_DIVERGE(1, 1))) >= 0xB186L) >= (-1L)), p_31, ((VECTOR(int8_t, 4))(1L))))))).s6 != GROUP_DIVERGE(0, 1)))))), p_497->g_55.s0, p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))], p_497), p_497->g_201, p_497), l_59, p_497->g_201, p_33, p_497);
        if ((((p_32 , ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_57) = (safe_rshift_func_int8_t_s_u(p_497->g_55.s6, 2))), 0x1E45L)), ((VECTOR(uint8_t, 4))(l_298.s58a9)).z)) , ((((((p_33 , &p_497->g_71) == ((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(p_30, (*l_57))) || ((*l_57) , (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(p_32, 0L)), 6)))), GROUP_DIVERGE(2, 1))) , &p_497->g_71)) & 0x6427L) || p_33) <= (*l_59)) ^ (*l_59)))) != (*l_59)) >= l_307))
        { /* block id: 91 */
            return (*l_57);
        }
        else
        { /* block id: 93 */
            (*l_59) &= ((l_308[4] != &p_497->g_191) ^ ((VECTOR(int32_t, 2))(l_309.zx)).even);
        }
    }
    (*p_497->g_201) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_31, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(0xE91A7CB9D5FF2771L, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(18446744073709551606UL, (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_497->g_318.xyyx)))), ((((*l_320) = l_319) == (void*)0) == (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(p_497->g_321.zyxz)).hi, ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(p_497->g_322.yy)).xxyxyyyyyyyyxxyy, ((VECTOR(int64_t, 2))((-5L), (-6L))).xyyyxyyxyyyyyyyy))).lo, (int64_t)(((0x7EE3L || (((((VECTOR(uint64_t, 4))(0UL, 0x8AA100A0BCA130A7L, 0x6AFC3FBF60A3F74DL, 18446744073709551612UL)).z == (*l_59)) >= (safe_add_func_int8_t_s_s(((+p_497->g_164) <= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x19FEL, 0x3B32L)).yyxxyxyx)).s15)), 0xF56EL, 65535UL)).z), ((VECTOR(int8_t, 8))(l_325.wzzwwywz)).s2))) , GROUP_DIVERGE(1, 1))) , (*l_59)) >= (l_329[1] ^= p_497->g_220.s0))))).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(l_330.zwwzyyxw)).s21, ((VECTOR(uint32_t, 16))(l_331.sedd45c8934da51a6)).sda))).xyxx, ((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x61F3DFF9E0EA3DD3L, 0x1103C37D1B683F2BL, 2L, 0x6EBA0EBBCA0D99ADL)).yxwzzzyyyxwwyxxy)), ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(0x153B39FB2B0964C4L, 0L, p_30, ((VECTOR(int64_t, 4))(0x34C49EA2DB0C084BL)), ((VECTOR(int64_t, 4))((-2L))), 7L, ((VECTOR(int64_t, 2))(9L)), 0x4A3A26C7FFF42A15L, 0L)).hi, ((VECTOR(int64_t, 8))(0x1169287FFDB3A376L))))).s5145355774377562))).scb22))).hi, ((VECTOR(int64_t, 2))(0x596F928B20E3D2AFL))))).xxyx)).xzwzxwywzxzxxxxy)).sbaf6, ((VECTOR(int64_t, 4))((-1L)))))).ywzyywyx, ((VECTOR(int64_t, 8))(0L))))).s34))), 0x50C33DC8E15159B4L, (-10L))).z | p_30)), 0UL, 1UL, (*l_59), 65535UL, 1UL, (*l_59), ((VECTOR(uint16_t, 4))(9UL)))).s6bd2)).w > p_33), ((VECTOR(uint64_t, 4))(0xF94AF425B4395AB6L)), 18446744073709551607UL, 0UL)).odd, ((VECTOR(uint64_t, 4))(0xB1D5EC492C4B8B75L))))), (*l_59), ((VECTOR(uint64_t, 8))(9UL)), 18446744073709551608UL, 1UL)).sf, 0x7B6BAF48D3DC8211L)))), 7)), FAKE_DIVERGE(p_497->global_0_offset, get_global_id(0), 10)));
    return l_332;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_192 p_497->g_58 p_497->g_273 p_497->g_275 p_497->g_277 p_497->g_282 p_497->l_comm_values p_497->g_72 p_497->g_60 p_497->g_123
 * writes: p_497->g_58 p_497->g_270 p_497->g_277 p_497->g_60 p_497->g_192
 */
int32_t * func_40(int32_t * p_41, int32_t * p_42, int32_t * p_43, uint64_t  p_44, struct S1 * p_497)
{ /* block id: 76 */
    int8_t *l_265[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t **l_266 = (void*)0;
    uint64_t ***l_267[10] = {&l_266,&l_266,&l_266,&l_266,&l_266,&l_266,&l_266,&l_266,&l_266,&l_266};
    uint64_t *l_269 = (void*)0;
    uint64_t **l_268[1];
    VECTOR(int8_t, 2) l_274 = (VECTOR(int8_t, 2))(0x68L, 0L);
    VECTOR(int8_t, 16) l_276 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x27L), 0x27L), 0x27L, (-8L), 0x27L, (VECTOR(int8_t, 2))((-8L), 0x27L), (VECTOR(int8_t, 2))((-8L), 0x27L), (-8L), 0x27L, (-8L), 0x27L);
    VECTOR(int8_t, 16) l_278 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int8_t, 2))(3L, (-1L)), (VECTOR(int8_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
    uint64_t **l_279[2];
    int32_t l_288 = 0x2CD13CAEL;
    int i;
    for (i = 0; i < 1; i++)
        l_268[i] = &l_269;
    for (i = 0; i < 2; i++)
        l_279[i] = &l_269;
    (*p_43) |= (p_497->g_192 || (l_265[5] == (void*)0));
    p_497->g_270 = (l_268[0] = l_266);
    l_288 = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_497->g_273.s75)), (-8L), 1L)))).zyxxwxwx, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_274.xx)))), (-1L), 0x07L, 0x14L, (-1L), 0x04L)).s17, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))((&p_44 != &p_44), 1L, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(p_497->g_275.yzwwxwzz)).odd, ((VECTOR(int8_t, 8))(l_276.sfba8db65)).lo))), 0x62L, 3L)).lo, ((VECTOR(int8_t, 4))(p_497->g_277.zwyw)), ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(l_278.s866d)).yyzzyxxxyzzzwwyz, (int8_t)(p_497->g_277.y = 0L), (int8_t)(((((((p_497->g_270 = l_279[0]) == ((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), 1)) , p_497->g_282[1][7])) ^ l_276.s5) < ((p_44 || (((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))], l_278.sa)), 5)) != l_276.s2) , p_44)) >= l_278.sd)) || (*p_497->g_72)) || p_497->g_123.s2) || 8UL)))), ((VECTOR(int8_t, 16))(0x04L)), ((VECTOR(int8_t, 16))(0x11L))))).s8bff))).odd)), ((VECTOR(int8_t, 2))(0x3BL))))).yxxxxxxx))).lo))).x, 3));
    for (p_497->g_60 = 0; (p_497->g_60 <= 2); p_497->g_60++)
    { /* block id: 85 */
        uint64_t l_291 = 0x275CC0B02012BC01L;
        (*p_41) = l_291;
    }
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_246 p_497->g_201 p_497->g_58 p_497->g_191 p_497->g_55 p_497->g_206 p_497->g_192
 * writes:
 */
int32_t * func_45(int32_t * p_46, int32_t * p_47, struct S1 * p_497)
{ /* block id: 71 */
    int64_t l_241 = 1L;
    uint16_t l_243[8][10][3] = {{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}},{{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL},{65535UL,1UL,0x5D2BL}}};
    VECTOR(uint8_t, 8) l_244 = (VECTOR(uint8_t, 8))(0xEAL, (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 0xD0L), 0xD0L), 0xD0L, 0xEAL, 0xD0L);
    VECTOR(uint8_t, 2) l_245 = (VECTOR(uint8_t, 2))(0x93L, 0x38L);
    VECTOR(uint8_t, 16) l_247 = (VECTOR(uint8_t, 16))(0x34L, (VECTOR(uint8_t, 4))(0x34L, (VECTOR(uint8_t, 2))(0x34L, 0UL), 0UL), 0UL, 0x34L, 0UL, (VECTOR(uint8_t, 2))(0x34L, 0UL), (VECTOR(uint8_t, 2))(0x34L, 0UL), 0x34L, 0UL, 0x34L, 0UL);
    uint64_t *l_248 = (void*)0;
    uint64_t *l_249 = (void*)0;
    uint64_t *l_250 = (void*)0;
    uint64_t *l_251 = (void*)0;
    int32_t l_252 = (-5L);
    VECTOR(int32_t, 8) l_257 = (VECTOR(int32_t, 8))(0x29FB4FF4L, (VECTOR(int32_t, 4))(0x29FB4FF4L, (VECTOR(int32_t, 2))(0x29FB4FF4L, 0x30565BBBL), 0x30565BBBL), 0x30565BBBL, 0x29FB4FF4L, 0x30565BBBL);
    uint16_t *l_258 = &l_243[0][4][0];
    int32_t ***l_261 = &p_497->g_200;
    int32_t l_262 = 0x437C4AD0L;
    uint32_t l_263 = 0xD1CEE5DEL;
    int32_t l_264 = 0x52397912L;
    int i, j, k;
    l_264 ^= ((safe_mod_func_int64_t_s_s(l_241, (l_241 & (((((~(safe_unary_minus_func_uint16_t_u((l_243[2][9][1] && ((((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(l_244.s53)).yxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(0UL, 5UL)).yxxyxyyx, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 16))(249UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xCDL, 0xF8L)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_245.yyxxyyyyxyxxyxxy)).s2953)), ((VECTOR(uint8_t, 8))(p_497->g_246.s52147051)), 0x4AL)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_247.s9e)))).yyxyxxyyxxxyxxxy)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((l_241 , (((l_245.y , ((l_252 = FAKE_DIVERGE(p_497->group_0_offset, get_group_id(0), 10)) , (safe_rshift_func_int8_t_s_u(l_245.x, 5)))) || ((safe_div_func_int8_t_s_s((((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))((*p_497->g_201), 3L, 0x0BB123F9L, 0x77B1BF48L)).lo))).xyyy)).wyxyxzzwyyxwwyyw, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_257.s6261466454022207)).sf0, ((VECTOR(int32_t, 16))((((((((((l_244.s7 >= ((*l_258) = ((VECTOR(uint16_t, 2))(1UL, 0x4A2EL)).even)) && (((safe_add_func_uint32_t_u_u((!(0x7AD85AA962BC0D02L <= 0x4EF84BDC53EDA2D9L)), (*p_497->g_201))) , l_261) != &p_497->g_200)) >= l_244.s4) >= 4294967295UL) && (-3L)) || p_497->g_191) || p_497->g_55.s0) , FAKE_DIVERGE(p_497->group_1_offset, get_group_id(1), 10)) >= p_497->g_206), ((VECTOR(int32_t, 2))(0x244B93F7L)), 9L, (-1L), (-1L), 0x57F5C1E2L, 0x00EEE758L, 0x5F47251DL, l_262, (*p_46), ((VECTOR(int32_t, 4))(0x6AA984A4L)), 6L)).sb2, ((VECTOR(int32_t, 2))(1L))))))).xyyx)).wzwzxyyzwyzxxyxw, ((VECTOR(int32_t, 16))(0x4801A03CL))))), ((VECTOR(int32_t, 16))(1L))))).even))).s2 && 0x44096554L), 0x63L)) == (*p_46))) | p_497->g_55.s4)), 255UL, 250UL, 1UL)).even)).yxyyyyyxxyyxxxxy)).odd, ((VECTOR(uint8_t, 8))(0x2BL))))), ((VECTOR(uint8_t, 8))(6UL))))).s4046545416150110)).even, ((VECTOR(uint8_t, 8))(0x46L))))), ((VECTOR(uint8_t, 8))(0xEDL))))).s22)), 0xA9L, l_247.s2, l_247.s2, 0x44L, 0x9AL, 0xADL)).s14, ((VECTOR(uint8_t, 2))(0x3EL))))), 0xCBL, 0xC2L))))).w & l_245.x) ^ p_497->g_191))))) == 0x738D0B370B47D4AAL) && l_252) || l_245.x) ^ l_263)))) ^ l_247.s1);
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_71 p_497->g_79 p_497->g_82 p_497->l_comm_values p_497->g_95 p_497->g_55 p_497->g_123 p_497->g_139 p_497->g_164 p_497->g_60 p_497->g_184 p_497->g_comm_values p_497->g_191 p_497->g_196 p_497->g_201 p_497->g_220 p_497->g_72
 * writes: p_497->g_82 p_497->g_139 p_497->g_164 p_497->g_60 p_497->g_95 p_497->g_191 p_497->g_192 p_497->g_196 p_497->g_200 p_497->g_205 p_497->g_58 p_497->g_79 p_497->g_123
 */
int32_t * func_48(int32_t  p_49, int32_t  p_50, int32_t  p_51, struct S1 * p_497)
{ /* block id: 12 */
    VECTOR(uint64_t, 2) l_69 = (VECTOR(uint64_t, 2))(0x348F3BEA0A54AE8BL, 1UL);
    int32_t **l_77 = (void*)0;
    int32_t *l_78 = (void*)0;
    VECTOR(uint16_t, 2) l_83 = (VECTOR(uint16_t, 2))(0UL, 0x2ED6L);
    uint16_t *l_84 = (void*)0;
    uint16_t *l_85 = (void*)0;
    uint16_t *l_86 = (void*)0;
    uint16_t *l_87 = (void*)0;
    uint16_t *l_88 = (void*)0;
    VECTOR(int32_t, 8) l_89 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
    uint16_t *l_90 = (void*)0;
    uint16_t *l_91 = (void*)0;
    uint16_t *l_92 = (void*)0;
    uint16_t *l_93 = (void*)0;
    int32_t l_94 = 0L;
    uint32_t l_100 = 4294967293UL;
    int32_t ***l_197[4];
    int32_t **l_202 = (void*)0;
    uint16_t l_211 = 0x6B27L;
    int8_t *l_216 = (void*)0;
    int16_t l_223 = 0x6312L;
    int8_t *l_233 = (void*)0;
    int i;
    for (i = 0; i < 4; i++)
        l_197[i] = &p_497->g_196;
    l_202 = (p_497->g_200 = func_64((safe_mod_func_uint8_t_u_u((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_69.yyxy)))).y || (+(safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(1L, (p_497->g_71 == (p_497->g_196 = func_73(l_77, l_78, ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_497->g_79.yyzw)).yxzzzwzx)).s7 >= ((((((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-9L), (-8L))).xxxyyyyyxyxyxxxy)))).s2 != (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(0x4F51L, 3UL)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(p_497->g_82.zx)).yxxyxxxx, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(0xBFDFL, ((VECTOR(uint16_t, 8))(l_83.yyxyyxxy)), (l_94 = (l_89.s4 = GROUP_DIVERGE(0, 1))), ((VECTOR(uint16_t, 2))(65535UL, 0x912EL)), ((((p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))] ^ ((((VECTOR(int32_t, 8))(p_497->g_95.sceed78fb)).s1 , p_497->g_95.sf) & p_497->g_82.y)) < p_50) && (p_497->g_95.s2 > (safe_div_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(l_100, 2)) & p_49) , &p_50) != (void*)0), p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))])))) ^ 0x7AB3ED4C648ED342L), ((VECTOR(uint16_t, 2))(0x8F88L)), 1UL)), ((VECTOR(uint16_t, 16))(0x98B2L))))).lo))).s73, ((VECTOR(uint16_t, 2))(7UL))))), 0x9B8DL, 0x14A3L, ((VECTOR(uint16_t, 8))(0x33FEL)), FAKE_DIVERGE(p_497->global_0_offset, get_global_id(0), 10), 0xB86DL, 0UL, 4UL)).s22))))).yyxy))).w, p_50))) <= p_51) ^ p_50) , 0x3986L) >= p_497->g_55.s1) & p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))])) < 0L), p_497))), p_49, 1L, 0x36A08F9AL, ((VECTOR(int32_t, 8))(0x1887DB84L)), p_50, 1L, (-2L))), ((VECTOR(int32_t, 16))(0x3D037EF7L))))).s423d, ((VECTOR(int32_t, 4))((-1L)))))).x, ((VECTOR(int32_t, 2))((-1L))), 0x0D219FDFL)).w)))), p_51)), p_50, p_497));
    for (l_100 = 18; (l_100 >= 59); l_100 = safe_add_func_int8_t_s_s(l_100, 2))
    { /* block id: 54 */
        (*p_497->g_201) = ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-4L), 5L)), 0L, 0x0ABFD163L)).z , (void*)0) != (p_497->g_205 = (void*)0));
    }
    for (p_497->g_60 = 29; (p_497->g_60 <= 22); --p_497->g_60)
    { /* block id: 60 */
        int8_t *l_217 = (void*)0;
        int32_t l_228 = 0x332AB3D6L;
        int8_t *l_230[2][5];
        int8_t **l_229 = &l_230[0][3];
        int8_t *l_232 = (void*)0;
        int8_t **l_231[10];
        uint64_t *l_236 = (void*)0;
        uint64_t *l_237 = (void*)0;
        uint64_t *l_238[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_230[i][j] = (void*)0;
        }
        for (i = 0; i < 10; i++)
            l_231[i] = &l_232;
        l_228 = (GROUP_DIVERGE(1, 1) <= (safe_sub_func_int16_t_s_s(l_211, (safe_div_func_uint32_t_u_u((((VECTOR(int8_t, 8))(0x04L, (~0x40L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((((((l_216 == l_217) == p_49) > (p_497->g_123.sa = ((p_50 = ((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(0xB5DDD6B6L, 7UL)).yxyyyxxy))).hi, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_497->g_220.s2103563747203151)).sb1)).yyxx))).x , (((((*p_497->g_201) = (safe_add_func_uint16_t_u_u((--p_497->g_79.x), (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(1L, 0x01L)), 0x00L, 4L)).wzxwxzzx)).s7, 1))))) != (l_228 | ((l_233 = ((*l_229) = l_216)) == (void*)0))) ^ (safe_mod_func_uint8_t_u_u(p_497->g_191, 0x24L))) , p_49)), p_50)) ^ 0x53EB220B9DF3AFA4L)) > p_497->g_95.s2))) >= p_51) < l_228), (-1L), ((VECTOR(int8_t, 2))(0x0BL)), ((VECTOR(int8_t, 4))(0x4CL)))))).odd)).xzywxyxyxyxzzxwz, ((VECTOR(int8_t, 16))(0x02L))))).s21)), ((VECTOR(int8_t, 2))(0x1AL)), 0x73L, 6L)).s3 && 0L), 0x032C8126L)))));
        if ((*p_497->g_72))
            continue;
    }
    return &p_497->g_192;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_196
 * writes:
 */
int32_t ** func_64(int32_t  p_65, uint32_t  p_66, struct S1 * p_497)
{ /* block id: 45 */
    int32_t *l_199 = &p_497->g_192;
    int32_t **l_198 = &l_199;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_497->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((l_198 == &l_199), 10))][(safe_mod_func_uint32_t_u_u(p_497->tid, 2))]));
    return p_497->g_196;
}


/* ------------------------------------------ */
/* 
 * reads : p_497->g_95 p_497->l_comm_values p_497->g_82 p_497->g_123 p_497->g_139 p_497->g_164 p_497->g_79 p_497->g_60 p_497->g_184 p_497->g_comm_values p_497->g_191 p_497->g_196
 * writes: p_497->g_82 p_497->g_139 p_497->g_164 p_497->g_60 p_497->g_95 p_497->g_191 p_497->g_192
 */
int32_t ** func_73(int32_t ** p_74, int32_t * p_75, int16_t  p_76, struct S1 * p_497)
{ /* block id: 15 */
    int32_t *l_101[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_102 = &l_101[2];
    VECTOR(int16_t, 8) l_107 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
    uint16_t *l_108 = (void*)0;
    uint16_t *l_109 = (void*)0;
    uint16_t *l_110 = (void*)0;
    uint16_t *l_111 = (void*)0;
    uint16_t *l_112 = (void*)0;
    uint16_t *l_113 = (void*)0;
    uint16_t *l_114 = (void*)0;
    uint16_t *l_115 = (void*)0;
    uint16_t *l_116[1][10][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 8) l_121 = (VECTOR(uint64_t, 8))(0x4BDACD6EFC415474L, (VECTOR(uint64_t, 4))(0x4BDACD6EFC415474L, (VECTOR(uint64_t, 2))(0x4BDACD6EFC415474L, 0UL), 0UL), 0UL, 0x4BDACD6EFC415474L, 0UL);
    VECTOR(uint64_t, 16) l_122 = (VECTOR(uint64_t, 16))(0xB4E4937C557317A4L, (VECTOR(uint64_t, 4))(0xB4E4937C557317A4L, (VECTOR(uint64_t, 2))(0xB4E4937C557317A4L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xB4E4937C557317A4L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xB4E4937C557317A4L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xB4E4937C557317A4L, 18446744073709551615UL), 0xB4E4937C557317A4L, 18446744073709551615UL, 0xB4E4937C557317A4L, 18446744073709551615UL);
    int32_t l_132 = (-4L);
    int16_t *l_133 = (void*)0;
    int16_t *l_134 = (void*)0;
    int16_t *l_135 = (void*)0;
    int16_t *l_136 = (void*)0;
    int16_t *l_137 = (void*)0;
    int16_t *l_138 = (void*)0;
    VECTOR(int8_t, 4) l_142 = (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0L), 0L);
    int8_t l_143[2];
    uint32_t l_144 = 0xAFF4E996L;
    int32_t l_145 = 0x3F0A7C6EL;
    int16_t l_146[1];
    uint32_t l_152 = 4294967289UL;
    uint8_t l_195 = 0xDAL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_143[i] = 1L;
    for (i = 0; i < 1; i++)
        l_146[i] = 1L;
    (*l_102) = l_101[2];
    if ((p_497->g_95.sd > ((p_497->l_comm_values[(safe_mod_func_uint32_t_u_u(p_497->tid, 2))] == 65535UL) && (safe_sub_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_107.s30125655)).s7, (++p_497->g_82.w))) , (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(l_121.s0452)).hi, ((VECTOR(uint64_t, 4))(l_122.s6763)).lo))).yyyy, (uint64_t)((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_497->g_123.s1b)), 7UL, 18446744073709551615UL)).y))).z, (((-4L) && FAKE_DIVERGE(p_497->local_0_offset, get_local_id(0), 10)) <= (safe_lshift_func_int8_t_s_u((~(safe_div_func_uint32_t_u_u((((l_144 |= ((-1L) || (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_132 < (p_497->g_139 = 0x1362L)), p_497->g_82.y)), ((safe_rshift_func_int8_t_s_u((((VECTOR(int64_t, 2))(0x338DE3779D11088DL, 0x5FE8D4ABBEE46DF6L)).odd , ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(l_142.wwxwxyxy)).hi))).x), l_143[1])) ^ p_76))))) & l_145) , p_497->g_139), 0x71A7AFFCL))), l_146[0])))))) , 0UL) ^ p_76), 250UL)))))
    { /* block id: 20 */
        int16_t l_147 = 1L;
        int32_t l_148 = 0x0AF08D79L;
        int32_t l_149 = (-9L);
        int32_t l_150 = 0x4CDD94FBL;
        int32_t l_151[1];
        int i;
        for (i = 0; i < 1; i++)
            l_151[i] = 0x08EF45CCL;
        (*l_102) = (GROUP_DIVERGE(1, 1) , &p_497->g_60);
        l_152--;
    }
    else
    { /* block id: 23 */
        VECTOR(uint64_t, 2) l_155 = (VECTOR(uint64_t, 2))(0x4FAEA5775FD7C9B7L, 0x134CBB6089915209L);
        int32_t l_157 = (-2L);
        int32_t l_159 = 0x4D8886A5L;
        int32_t l_160 = 0x7D4DB2FCL;
        VECTOR(int32_t, 16) l_161 = (VECTOR(int32_t, 16))(0x28A79E91L, (VECTOR(int32_t, 4))(0x28A79E91L, (VECTOR(int32_t, 2))(0x28A79E91L, 0x21545E05L), 0x21545E05L), 0x21545E05L, 0x28A79E91L, 0x21545E05L, (VECTOR(int32_t, 2))(0x28A79E91L, 0x21545E05L), (VECTOR(int32_t, 2))(0x28A79E91L, 0x21545E05L), 0x28A79E91L, 0x21545E05L, 0x28A79E91L, 0x21545E05L);
        int32_t l_162 = 7L;
        int16_t l_163 = 0x1F2EL;
        uint16_t *l_167 = (void*)0;
        int8_t *l_185 = &l_143[0];
        int16_t *l_189 = (void*)0;
        int16_t *l_190[10][3][8] = {{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}},{{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]},{&l_163,&l_146[0],&l_163,&l_146[0],&l_146[0],(void*)0,(void*)0,&l_146[0]}}};
        int i, j, k;
        if ((0x704F40C7B2332137L >= ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(l_155.yyyy)).odd, (uint64_t)p_76))).hi))
        { /* block id: 24 */
            int16_t l_156 = (-1L);
            int32_t l_158[2][2] = {{0x47C6FEB4L,0x47C6FEB4L},{0x47C6FEB4L,0x47C6FEB4L}};
            int i, j;
            p_497->g_164++;
        }
        else
        { /* block id: 26 */
            (*l_102) = p_75;
            p_497->g_60 &= p_497->g_79.w;
            p_497->g_95.s2 = ((void*)0 == l_167);
        }
        p_497->g_95.sb = (safe_lshift_func_uint16_t_u_s((GROUP_DIVERGE(2, 1) , (safe_sub_func_int16_t_s_s((p_497->g_192 = ((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((((((~p_497->g_60) >= ((p_497->g_191 |= ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(0xE0L, 4)) , ((*l_185) = (p_76 | ((l_167 = l_108) == p_497->g_184)))) > (safe_unary_minus_func_int64_t_s(p_497->g_comm_values[p_497->tid]))), (l_160 = ((((safe_div_func_int64_t_s_s(1L, p_497->g_123.sa)) , (0x7DAB68208CB3A562L > p_497->g_164)) , p_497->g_164) && l_160)))) ^ l_162) > 0UL), l_155.y)), l_162)) >= 0x58L)) >= p_497->g_82.x)) , l_162) && l_155.y) == p_497->g_95.s3), GROUP_DIVERGE(0, 1))), p_497->g_123.sa)) , 0x1FF1L)), l_157))), p_497->g_79.x));
    }
    for (p_497->g_139 = 0; (p_497->g_139 <= 44); p_497->g_139 = safe_add_func_uint32_t_u_u(p_497->g_139, 5))
    { /* block id: 40 */
        if (l_195)
            break;
    }
    return p_497->g_196;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_498;
    struct S1* p_497 = &c_498;
    struct S1 c_499 = {
        (VECTOR(int8_t, 8))(0x68L, (VECTOR(int8_t, 4))(0x68L, (VECTOR(int8_t, 2))(0x68L, 0x0AL), 0x0AL), 0x0AL, 0x68L, 0x0AL), // p_497->g_55
        (-1L), // p_497->g_58
        3L, // p_497->g_60
        &p_497->g_60, // p_497->g_72
        &p_497->g_72, // p_497->g_71
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 8UL), 8UL), // p_497->g_79
        (VECTOR(uint16_t, 4))(0x5008L, (VECTOR(uint16_t, 2))(0x5008L, 65535UL), 65535UL), // p_497->g_82
        (VECTOR(int32_t, 16))(0x65B8C0B7L, (VECTOR(int32_t, 4))(0x65B8C0B7L, (VECTOR(int32_t, 2))(0x65B8C0B7L, 8L), 8L), 8L, 0x65B8C0B7L, 8L, (VECTOR(int32_t, 2))(0x65B8C0B7L, 8L), (VECTOR(int32_t, 2))(0x65B8C0B7L, 8L), 0x65B8C0B7L, 8L, 0x65B8C0B7L, 8L), // p_497->g_95
        (VECTOR(uint64_t, 16))(0x8798744AF555DEF7L, (VECTOR(uint64_t, 4))(0x8798744AF555DEF7L, (VECTOR(uint64_t, 2))(0x8798744AF555DEF7L, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 0x8798744AF555DEF7L, 18446744073709551613UL, (VECTOR(uint64_t, 2))(0x8798744AF555DEF7L, 18446744073709551613UL), (VECTOR(uint64_t, 2))(0x8798744AF555DEF7L, 18446744073709551613UL), 0x8798744AF555DEF7L, 18446744073709551613UL, 0x8798744AF555DEF7L, 18446744073709551613UL), // p_497->g_123
        8UL, // p_497->g_139
        0x4C81D454L, // p_497->g_164
        (void*)0, // p_497->g_184
        0x036AL, // p_497->g_191
        0x51BD90DFL, // p_497->g_192
        (void*)0, // p_497->g_196
        &p_497->g_58, // p_497->g_201
        &p_497->g_201, // p_497->g_200
        (-5L), // p_497->g_206
        &p_497->g_206, // p_497->g_205
        (VECTOR(uint32_t, 8))(0xB770F626L, (VECTOR(uint32_t, 4))(0xB770F626L, (VECTOR(uint32_t, 2))(0xB770F626L, 0UL), 0UL), 0UL, 0xB770F626L, 0UL), // p_497->g_220
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL), // p_497->g_246
        (void*)0, // p_497->g_270
        (VECTOR(int8_t, 16))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x4DL), 0x4DL), 0x4DL, 0x44L, 0x4DL, (VECTOR(int8_t, 2))(0x44L, 0x4DL), (VECTOR(int8_t, 2))(0x44L, 0x4DL), 0x44L, 0x4DL, 0x44L, 0x4DL), // p_497->g_273
        (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, (-5L)), (-5L)), // p_497->g_275
        (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x26L), 0x26L), // p_497->g_277
        (void*)0, // p_497->g_283
        {{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283},{(void*)0,(void*)0,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,&p_497->g_283,(void*)0,(void*)0,&p_497->g_283}}, // p_497->g_282
        (VECTOR(uint16_t, 2))(0x7B5FL, 0x7CF7L), // p_497->g_318
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x7643F4A5F1E058DDL), 0x7643F4A5F1E058DDL), // p_497->g_321
        (VECTOR(int64_t, 2))(1L, 0x267240F34BE596D7L), // p_497->g_322
        0x6BL, // p_497->g_333
        0xE5FF6E27L, // p_497->g_344
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xD009L), 0xD009L), 0xD009L, 8UL, 0xD009L), // p_497->g_349
        (VECTOR(int32_t, 2))(0x10570B0EL, 0x75954106L), // p_497->g_359
        0L, // p_497->g_370
        (VECTOR(int16_t, 8))(0x5C0BL, (VECTOR(int16_t, 4))(0x5C0BL, (VECTOR(int16_t, 2))(0x5C0BL, 0L), 0L), 0L, 0x5C0BL, 0L), // p_497->g_388
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-9L)), (-9L)), // p_497->g_389
        (VECTOR(uint8_t, 8))(0xCEL, (VECTOR(uint8_t, 4))(0xCEL, (VECTOR(uint8_t, 2))(0xCEL, 250UL), 250UL), 250UL, 0xCEL, 250UL), // p_497->g_390
        (VECTOR(uint8_t, 8))(0x8AL, (VECTOR(uint8_t, 4))(0x8AL, (VECTOR(uint8_t, 2))(0x8AL, 0xE4L), 0xE4L), 0xE4L, 0x8AL, 0xE4L), // p_497->g_391
        {{9UL},{2UL},{9UL},{9UL},{2UL},{9UL},{9UL}}, // p_497->g_430
        {0x77L}, // p_497->g_433
        (void*)0, // p_497->g_454
        {0x7DL}, // p_497->g_460
        (VECTOR(uint8_t, 2))(250UL, 0xCEL), // p_497->g_464
        (VECTOR(uint8_t, 2))(0x16L, 0xA5L), // p_497->g_465
        (VECTOR(uint8_t, 2))(4UL, 0x44L), // p_497->g_466
        (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x07121FC7D1E6ED22L), 0x07121FC7D1E6ED22L), 0x07121FC7D1E6ED22L, 18446744073709551606UL, 0x07121FC7D1E6ED22L, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x07121FC7D1E6ED22L), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x07121FC7D1E6ED22L), 18446744073709551606UL, 0x07121FC7D1E6ED22L, 18446744073709551606UL, 0x07121FC7D1E6ED22L), // p_497->g_479
        (void*)0, // p_497->g_493
        &p_497->g_493, // p_497->g_492
        &p_497->g_492, // p_497->g_494
        0, // p_497->v_collective
        sequence_input[get_global_id(0)], // p_497->global_0_offset
        sequence_input[get_global_id(1)], // p_497->global_1_offset
        sequence_input[get_global_id(2)], // p_497->global_2_offset
        sequence_input[get_local_id(0)], // p_497->local_0_offset
        sequence_input[get_local_id(1)], // p_497->local_1_offset
        sequence_input[get_local_id(2)], // p_497->local_2_offset
        sequence_input[get_group_id(0)], // p_497->group_0_offset
        sequence_input[get_group_id(1)], // p_497->group_1_offset
        sequence_input[get_group_id(2)], // p_497->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_497->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_498 = c_499;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_497);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_497->g_55.s0, "p_497->g_55.s0", print_hash_value);
    transparent_crc(p_497->g_55.s1, "p_497->g_55.s1", print_hash_value);
    transparent_crc(p_497->g_55.s2, "p_497->g_55.s2", print_hash_value);
    transparent_crc(p_497->g_55.s3, "p_497->g_55.s3", print_hash_value);
    transparent_crc(p_497->g_55.s4, "p_497->g_55.s4", print_hash_value);
    transparent_crc(p_497->g_55.s5, "p_497->g_55.s5", print_hash_value);
    transparent_crc(p_497->g_55.s6, "p_497->g_55.s6", print_hash_value);
    transparent_crc(p_497->g_55.s7, "p_497->g_55.s7", print_hash_value);
    transparent_crc(p_497->g_58, "p_497->g_58", print_hash_value);
    transparent_crc(p_497->g_60, "p_497->g_60", print_hash_value);
    transparent_crc(p_497->g_79.x, "p_497->g_79.x", print_hash_value);
    transparent_crc(p_497->g_79.y, "p_497->g_79.y", print_hash_value);
    transparent_crc(p_497->g_79.z, "p_497->g_79.z", print_hash_value);
    transparent_crc(p_497->g_79.w, "p_497->g_79.w", print_hash_value);
    transparent_crc(p_497->g_82.x, "p_497->g_82.x", print_hash_value);
    transparent_crc(p_497->g_82.y, "p_497->g_82.y", print_hash_value);
    transparent_crc(p_497->g_82.z, "p_497->g_82.z", print_hash_value);
    transparent_crc(p_497->g_82.w, "p_497->g_82.w", print_hash_value);
    transparent_crc(p_497->g_95.s0, "p_497->g_95.s0", print_hash_value);
    transparent_crc(p_497->g_95.s1, "p_497->g_95.s1", print_hash_value);
    transparent_crc(p_497->g_95.s2, "p_497->g_95.s2", print_hash_value);
    transparent_crc(p_497->g_95.s3, "p_497->g_95.s3", print_hash_value);
    transparent_crc(p_497->g_95.s4, "p_497->g_95.s4", print_hash_value);
    transparent_crc(p_497->g_95.s5, "p_497->g_95.s5", print_hash_value);
    transparent_crc(p_497->g_95.s6, "p_497->g_95.s6", print_hash_value);
    transparent_crc(p_497->g_95.s7, "p_497->g_95.s7", print_hash_value);
    transparent_crc(p_497->g_95.s8, "p_497->g_95.s8", print_hash_value);
    transparent_crc(p_497->g_95.s9, "p_497->g_95.s9", print_hash_value);
    transparent_crc(p_497->g_95.sa, "p_497->g_95.sa", print_hash_value);
    transparent_crc(p_497->g_95.sb, "p_497->g_95.sb", print_hash_value);
    transparent_crc(p_497->g_95.sc, "p_497->g_95.sc", print_hash_value);
    transparent_crc(p_497->g_95.sd, "p_497->g_95.sd", print_hash_value);
    transparent_crc(p_497->g_95.se, "p_497->g_95.se", print_hash_value);
    transparent_crc(p_497->g_95.sf, "p_497->g_95.sf", print_hash_value);
    transparent_crc(p_497->g_123.s0, "p_497->g_123.s0", print_hash_value);
    transparent_crc(p_497->g_123.s1, "p_497->g_123.s1", print_hash_value);
    transparent_crc(p_497->g_123.s2, "p_497->g_123.s2", print_hash_value);
    transparent_crc(p_497->g_123.s3, "p_497->g_123.s3", print_hash_value);
    transparent_crc(p_497->g_123.s4, "p_497->g_123.s4", print_hash_value);
    transparent_crc(p_497->g_123.s5, "p_497->g_123.s5", print_hash_value);
    transparent_crc(p_497->g_123.s6, "p_497->g_123.s6", print_hash_value);
    transparent_crc(p_497->g_123.s7, "p_497->g_123.s7", print_hash_value);
    transparent_crc(p_497->g_123.s8, "p_497->g_123.s8", print_hash_value);
    transparent_crc(p_497->g_123.s9, "p_497->g_123.s9", print_hash_value);
    transparent_crc(p_497->g_123.sa, "p_497->g_123.sa", print_hash_value);
    transparent_crc(p_497->g_123.sb, "p_497->g_123.sb", print_hash_value);
    transparent_crc(p_497->g_123.sc, "p_497->g_123.sc", print_hash_value);
    transparent_crc(p_497->g_123.sd, "p_497->g_123.sd", print_hash_value);
    transparent_crc(p_497->g_123.se, "p_497->g_123.se", print_hash_value);
    transparent_crc(p_497->g_123.sf, "p_497->g_123.sf", print_hash_value);
    transparent_crc(p_497->g_139, "p_497->g_139", print_hash_value);
    transparent_crc(p_497->g_164, "p_497->g_164", print_hash_value);
    transparent_crc(p_497->g_191, "p_497->g_191", print_hash_value);
    transparent_crc(p_497->g_192, "p_497->g_192", print_hash_value);
    transparent_crc(p_497->g_206, "p_497->g_206", print_hash_value);
    transparent_crc(p_497->g_220.s0, "p_497->g_220.s0", print_hash_value);
    transparent_crc(p_497->g_220.s1, "p_497->g_220.s1", print_hash_value);
    transparent_crc(p_497->g_220.s2, "p_497->g_220.s2", print_hash_value);
    transparent_crc(p_497->g_220.s3, "p_497->g_220.s3", print_hash_value);
    transparent_crc(p_497->g_220.s4, "p_497->g_220.s4", print_hash_value);
    transparent_crc(p_497->g_220.s5, "p_497->g_220.s5", print_hash_value);
    transparent_crc(p_497->g_220.s6, "p_497->g_220.s6", print_hash_value);
    transparent_crc(p_497->g_220.s7, "p_497->g_220.s7", print_hash_value);
    transparent_crc(p_497->g_246.s0, "p_497->g_246.s0", print_hash_value);
    transparent_crc(p_497->g_246.s1, "p_497->g_246.s1", print_hash_value);
    transparent_crc(p_497->g_246.s2, "p_497->g_246.s2", print_hash_value);
    transparent_crc(p_497->g_246.s3, "p_497->g_246.s3", print_hash_value);
    transparent_crc(p_497->g_246.s4, "p_497->g_246.s4", print_hash_value);
    transparent_crc(p_497->g_246.s5, "p_497->g_246.s5", print_hash_value);
    transparent_crc(p_497->g_246.s6, "p_497->g_246.s6", print_hash_value);
    transparent_crc(p_497->g_246.s7, "p_497->g_246.s7", print_hash_value);
    transparent_crc(p_497->g_273.s0, "p_497->g_273.s0", print_hash_value);
    transparent_crc(p_497->g_273.s1, "p_497->g_273.s1", print_hash_value);
    transparent_crc(p_497->g_273.s2, "p_497->g_273.s2", print_hash_value);
    transparent_crc(p_497->g_273.s3, "p_497->g_273.s3", print_hash_value);
    transparent_crc(p_497->g_273.s4, "p_497->g_273.s4", print_hash_value);
    transparent_crc(p_497->g_273.s5, "p_497->g_273.s5", print_hash_value);
    transparent_crc(p_497->g_273.s6, "p_497->g_273.s6", print_hash_value);
    transparent_crc(p_497->g_273.s7, "p_497->g_273.s7", print_hash_value);
    transparent_crc(p_497->g_273.s8, "p_497->g_273.s8", print_hash_value);
    transparent_crc(p_497->g_273.s9, "p_497->g_273.s9", print_hash_value);
    transparent_crc(p_497->g_273.sa, "p_497->g_273.sa", print_hash_value);
    transparent_crc(p_497->g_273.sb, "p_497->g_273.sb", print_hash_value);
    transparent_crc(p_497->g_273.sc, "p_497->g_273.sc", print_hash_value);
    transparent_crc(p_497->g_273.sd, "p_497->g_273.sd", print_hash_value);
    transparent_crc(p_497->g_273.se, "p_497->g_273.se", print_hash_value);
    transparent_crc(p_497->g_273.sf, "p_497->g_273.sf", print_hash_value);
    transparent_crc(p_497->g_275.x, "p_497->g_275.x", print_hash_value);
    transparent_crc(p_497->g_275.y, "p_497->g_275.y", print_hash_value);
    transparent_crc(p_497->g_275.z, "p_497->g_275.z", print_hash_value);
    transparent_crc(p_497->g_275.w, "p_497->g_275.w", print_hash_value);
    transparent_crc(p_497->g_277.x, "p_497->g_277.x", print_hash_value);
    transparent_crc(p_497->g_277.y, "p_497->g_277.y", print_hash_value);
    transparent_crc(p_497->g_277.z, "p_497->g_277.z", print_hash_value);
    transparent_crc(p_497->g_277.w, "p_497->g_277.w", print_hash_value);
    transparent_crc(p_497->g_318.x, "p_497->g_318.x", print_hash_value);
    transparent_crc(p_497->g_318.y, "p_497->g_318.y", print_hash_value);
    transparent_crc(p_497->g_321.x, "p_497->g_321.x", print_hash_value);
    transparent_crc(p_497->g_321.y, "p_497->g_321.y", print_hash_value);
    transparent_crc(p_497->g_321.z, "p_497->g_321.z", print_hash_value);
    transparent_crc(p_497->g_321.w, "p_497->g_321.w", print_hash_value);
    transparent_crc(p_497->g_322.x, "p_497->g_322.x", print_hash_value);
    transparent_crc(p_497->g_322.y, "p_497->g_322.y", print_hash_value);
    transparent_crc(p_497->g_333, "p_497->g_333", print_hash_value);
    transparent_crc(p_497->g_344, "p_497->g_344", print_hash_value);
    transparent_crc(p_497->g_349.s0, "p_497->g_349.s0", print_hash_value);
    transparent_crc(p_497->g_349.s1, "p_497->g_349.s1", print_hash_value);
    transparent_crc(p_497->g_349.s2, "p_497->g_349.s2", print_hash_value);
    transparent_crc(p_497->g_349.s3, "p_497->g_349.s3", print_hash_value);
    transparent_crc(p_497->g_349.s4, "p_497->g_349.s4", print_hash_value);
    transparent_crc(p_497->g_349.s5, "p_497->g_349.s5", print_hash_value);
    transparent_crc(p_497->g_349.s6, "p_497->g_349.s6", print_hash_value);
    transparent_crc(p_497->g_349.s7, "p_497->g_349.s7", print_hash_value);
    transparent_crc(p_497->g_359.x, "p_497->g_359.x", print_hash_value);
    transparent_crc(p_497->g_359.y, "p_497->g_359.y", print_hash_value);
    transparent_crc(p_497->g_370, "p_497->g_370", print_hash_value);
    transparent_crc(p_497->g_388.s0, "p_497->g_388.s0", print_hash_value);
    transparent_crc(p_497->g_388.s1, "p_497->g_388.s1", print_hash_value);
    transparent_crc(p_497->g_388.s2, "p_497->g_388.s2", print_hash_value);
    transparent_crc(p_497->g_388.s3, "p_497->g_388.s3", print_hash_value);
    transparent_crc(p_497->g_388.s4, "p_497->g_388.s4", print_hash_value);
    transparent_crc(p_497->g_388.s5, "p_497->g_388.s5", print_hash_value);
    transparent_crc(p_497->g_388.s6, "p_497->g_388.s6", print_hash_value);
    transparent_crc(p_497->g_388.s7, "p_497->g_388.s7", print_hash_value);
    transparent_crc(p_497->g_389.x, "p_497->g_389.x", print_hash_value);
    transparent_crc(p_497->g_389.y, "p_497->g_389.y", print_hash_value);
    transparent_crc(p_497->g_389.z, "p_497->g_389.z", print_hash_value);
    transparent_crc(p_497->g_389.w, "p_497->g_389.w", print_hash_value);
    transparent_crc(p_497->g_390.s0, "p_497->g_390.s0", print_hash_value);
    transparent_crc(p_497->g_390.s1, "p_497->g_390.s1", print_hash_value);
    transparent_crc(p_497->g_390.s2, "p_497->g_390.s2", print_hash_value);
    transparent_crc(p_497->g_390.s3, "p_497->g_390.s3", print_hash_value);
    transparent_crc(p_497->g_390.s4, "p_497->g_390.s4", print_hash_value);
    transparent_crc(p_497->g_390.s5, "p_497->g_390.s5", print_hash_value);
    transparent_crc(p_497->g_390.s6, "p_497->g_390.s6", print_hash_value);
    transparent_crc(p_497->g_390.s7, "p_497->g_390.s7", print_hash_value);
    transparent_crc(p_497->g_391.s0, "p_497->g_391.s0", print_hash_value);
    transparent_crc(p_497->g_391.s1, "p_497->g_391.s1", print_hash_value);
    transparent_crc(p_497->g_391.s2, "p_497->g_391.s2", print_hash_value);
    transparent_crc(p_497->g_391.s3, "p_497->g_391.s3", print_hash_value);
    transparent_crc(p_497->g_391.s4, "p_497->g_391.s4", print_hash_value);
    transparent_crc(p_497->g_391.s5, "p_497->g_391.s5", print_hash_value);
    transparent_crc(p_497->g_391.s6, "p_497->g_391.s6", print_hash_value);
    transparent_crc(p_497->g_391.s7, "p_497->g_391.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_497->g_430[i].f0, "p_497->g_430[i].f0", print_hash_value);

    }
    transparent_crc(p_497->g_433.f0, "p_497->g_433.f0", print_hash_value);
    transparent_crc(p_497->g_460.f0, "p_497->g_460.f0", print_hash_value);
    transparent_crc(p_497->g_464.x, "p_497->g_464.x", print_hash_value);
    transparent_crc(p_497->g_464.y, "p_497->g_464.y", print_hash_value);
    transparent_crc(p_497->g_465.x, "p_497->g_465.x", print_hash_value);
    transparent_crc(p_497->g_465.y, "p_497->g_465.y", print_hash_value);
    transparent_crc(p_497->g_466.x, "p_497->g_466.x", print_hash_value);
    transparent_crc(p_497->g_466.y, "p_497->g_466.y", print_hash_value);
    transparent_crc(p_497->g_479.s0, "p_497->g_479.s0", print_hash_value);
    transparent_crc(p_497->g_479.s1, "p_497->g_479.s1", print_hash_value);
    transparent_crc(p_497->g_479.s2, "p_497->g_479.s2", print_hash_value);
    transparent_crc(p_497->g_479.s3, "p_497->g_479.s3", print_hash_value);
    transparent_crc(p_497->g_479.s4, "p_497->g_479.s4", print_hash_value);
    transparent_crc(p_497->g_479.s5, "p_497->g_479.s5", print_hash_value);
    transparent_crc(p_497->g_479.s6, "p_497->g_479.s6", print_hash_value);
    transparent_crc(p_497->g_479.s7, "p_497->g_479.s7", print_hash_value);
    transparent_crc(p_497->g_479.s8, "p_497->g_479.s8", print_hash_value);
    transparent_crc(p_497->g_479.s9, "p_497->g_479.s9", print_hash_value);
    transparent_crc(p_497->g_479.sa, "p_497->g_479.sa", print_hash_value);
    transparent_crc(p_497->g_479.sb, "p_497->g_479.sb", print_hash_value);
    transparent_crc(p_497->g_479.sc, "p_497->g_479.sc", print_hash_value);
    transparent_crc(p_497->g_479.sd, "p_497->g_479.sd", print_hash_value);
    transparent_crc(p_497->g_479.se, "p_497->g_479.se", print_hash_value);
    transparent_crc(p_497->g_479.sf, "p_497->g_479.sf", print_hash_value);
    transparent_crc(p_497->v_collective, "p_497->v_collective", print_hash_value);
    transparent_crc(p_497->l_comm_values[get_linear_local_id()], "p_497->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_497->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_497->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
