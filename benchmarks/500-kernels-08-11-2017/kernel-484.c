// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 1,3,21 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 1093606572

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   volatile uint32_t  f1;
   int32_t  f2;
};

struct S2 {
    VECTOR(int32_t, 8) g_3;
    VECTOR(int32_t, 16) g_4;
    volatile int32_t g_8;
    int32_t g_9;
    struct S0 g_32;
    volatile int32_t *g_35;
    volatile int32_t ** volatile g_34;
    int32_t *g_67;
    VECTOR(uint16_t, 8) g_74;
    uint16_t g_76;
    struct S0 g_78;
    VECTOR(int16_t, 8) g_88;
    int64_t g_97;
    uint8_t g_113;
    uint8_t g_115[6];
    int8_t g_118;
    int16_t g_127;
    struct S0 g_151;
    VECTOR(uint32_t, 2) g_152;
    uint32_t g_163;
    int64_t g_166;
    uint16_t g_180[4][6][3];
    int32_t *g_186;
    int32_t **g_185;
    struct S0 g_198;
    struct S0 *g_197;
    struct S0 g_206;
    struct S0 *g_205;
    volatile int8_t g_237;
    volatile int8_t *g_236;
    volatile int8_t **g_235;
    VECTOR(uint8_t, 4) g_256;
    volatile uint64_t *g_279;
    VECTOR(int32_t, 16) g_316;
    uint8_t g_321;
    uint64_t g_323;
    VECTOR(int8_t, 8) g_335;
    int32_t g_338;
    int8_t g_345[10][1];
    int16_t g_351;
    volatile VECTOR(int32_t, 8) g_356;
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
uint16_t  func_1(struct S2 * p_396);
uint8_t  func_20(int32_t * p_21, int16_t  p_22, struct S2 * p_396);
int16_t  func_36(uint8_t  p_37, struct S0 * p_38, int32_t ** p_39, struct S2 * p_396);
uint8_t  func_42(uint16_t  p_43, struct S2 * p_396);
struct S0  func_45(int8_t  p_46, int32_t * p_47, uint32_t  p_48, uint64_t  p_49, struct S2 * p_396);
uint32_t  func_50(struct S0 * p_51, uint32_t  p_52, int8_t  p_53, struct S2 * p_396);
struct S0 * func_54(uint64_t  p_55, uint32_t  p_56, uint8_t  p_57, int32_t ** p_58, int8_t  p_59, struct S2 * p_396);
uint64_t  func_60(uint8_t  p_61, int32_t * p_62, struct S0 * p_63, struct S2 * p_396);
int32_t * func_64(uint32_t  p_65, struct S2 * p_396);
struct S0 * func_68(int32_t * p_69, uint16_t  p_70, int32_t * p_71, struct S0 * p_72, struct S2 * p_396);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_396->g_3 p_396->g_4 p_396->g_9 p_396->l_comm_values p_396->g_8 p_396->g_32 p_396->g_34 p_396->g_35 p_396->g_74 p_396->g_76 p_396->g_88 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_152 p_396->g_163 p_396->g_97 p_396->g_180 p_396->g_185 p_396->g_197 p_396->g_186 p_396->g_205 p_396->g_237 p_396->g_316 p_396->g_206.f2 p_396->g_321 p_396->g_206 p_396->g_338 p_396->g_198 p_396->g_67 p_396->g_345 p_396->g_351 p_396->g_151.f2 p_396->g_356 p_396->g_236 p_396->g_166 p_396->g_323 p_396->g_127
 * writes: p_396->g_9 p_396->g_32 p_396->g_35 p_396->g_8 p_396->g_67 p_396->g_76 p_396->g_97 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_127 p_396->g_163 p_396->g_166 p_396->g_180 p_396->g_3 p_396->g_197 p_396->g_4 p_396->g_186 p_396->g_323 p_396->g_152 p_396->g_335 p_396->g_338 p_396->g_198 p_396->g_351 p_396->g_206.f2 p_396->g_205
 */
uint16_t  func_1(struct S2 * p_396)
{ /* block id: 4 */
    VECTOR(int32_t, 2) l_2 = (VECTOR(int32_t, 2))(0x6580849FL, 3L);
    int32_t *l_5 = (void*)0;
    int32_t *l_6[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_7[7][3] = {{1UL,65535UL,1UL},{1UL,65535UL,1UL},{1UL,65535UL,1UL},{1UL,65535UL,1UL},{1UL,65535UL,1UL},{1UL,65535UL,1UL},{1UL,65535UL,1UL}};
    VECTOR(int32_t, 4) l_15 = (VECTOR(int32_t, 4))(0x364B6930L, (VECTOR(int32_t, 2))(0x364B6930L, 0L), 0L);
    int32_t l_366 = 0x2AA32CBFL;
    int32_t l_367 = 0x42AE5384L;
    uint16_t l_368 = 0x68E0L;
    uint8_t l_390[3][2][3] = {{{0x64L,0x64L,0x59L},{0x64L,0x64L,0x59L}},{{0x64L,0x64L,0x59L},{0x64L,0x64L,0x59L}},{{0x64L,0x64L,0x59L},{0x64L,0x64L,0x59L}}};
    uint32_t l_391 = 0x3D087EACL;
    int64_t l_392 = 0x0928E7DD5B746D05L;
    uint8_t l_393 = 0x43L;
    struct S0 *l_394 = &p_396->g_206;
    int i, j, k;
    if ((l_7[3][2] = ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_2.xy)), ((VECTOR(int32_t, 4))(p_396->g_3.s6565)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_396->g_4.secafe8b0)).hi)).even))).odd))
    { /* block id: 6 */
        VECTOR(int32_t, 4) l_352 = (VECTOR(int32_t, 4))(0x0EC4276AL, (VECTOR(int32_t, 2))(0x0EC4276AL, 0x09864157L), 0x09864157L);
        uint32_t *l_353 = &p_396->g_163;
        int i;
        for (p_396->g_9 = 0; (p_396->g_9 > (-23)); --p_396->g_9)
        { /* block id: 9 */
            uint32_t l_12 = 1UL;
            --l_12;
            return p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))];
        }
        l_352.x = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_15.yyyzxwwxwxyyxzwz)).s29, ((VECTOR(int32_t, 16))(1L, (p_396->g_3.s7 > ((void*)0 != &p_396->g_9)), (safe_rshift_func_uint8_t_u_s(func_20(l_5, p_396->g_8, p_396), 0)), 0x2EA2844BL, 0x09EB94F8L, (l_352.z >= p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))]), ((((*l_353)++) & ((VECTOR(int32_t, 8))(p_396->g_356.s21537204)).s0) <= l_352.z), 0x415A30E4L, (*p_396->g_186), 0L, ((VECTOR(int32_t, 4))(6L)), 3L, (-1L))).sc5, ((VECTOR(int32_t, 2))(8L))))), 1L, 0x22A53195L, 0x33EF9236L, 0x72443C71L, 0x39A51ED6L, (*p_396->g_67), 0L, 2L, ((VECTOR(int32_t, 4))(0x1F880B69L)), 9L, 0L)).s0;
    }
    else
    { /* block id: 177 */
        uint32_t l_359 = 0x05A77881L;
        uint32_t *l_362 = (void*)0;
        for (p_396->g_206.f2 = 0; (p_396->g_206.f2 >= (-2)); p_396->g_206.f2 = safe_sub_func_int16_t_s_s(p_396->g_206.f2, 3))
        { /* block id: 180 */
            l_359--;
        }
        (*p_396->g_185) = (*p_396->g_185);
        (*p_396->g_186) ^= (l_6[0] == l_362);
    }
    for (p_396->g_351 = 0; (p_396->g_351 >= (-24)); p_396->g_351 = safe_sub_func_int16_t_s_s(p_396->g_351, 9))
    { /* block id: 188 */
        int32_t l_365[7][8] = {{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL},{1L,1L,(-1L),1L,0x08CF05EAL,(-1L),(-1L),0x08CF05EAL}};
        uint64_t *l_389 = &p_396->g_323;
        struct S0 **l_395[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j;
        ++l_368;
        (*p_396->g_197) = func_45(((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((*p_396->g_236), (((safe_add_func_uint64_t_u_u((((safe_div_func_int8_t_s_s((((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_396->g_76--), ((safe_sub_func_int8_t_s_s(0x1FL, (safe_rshift_func_uint8_t_u_u((l_389 != &p_396->g_323), l_390[1][0][0])))) <= l_391))), (p_396->g_166 ^ p_396->g_97))) >= (l_392 = (p_396->g_338 < (*p_396->g_186)))) , p_396->g_115[5]), p_396->g_323)) & p_396->g_127) == 0x73L), (-1L))) <= 0x028AL) && l_365[3][1]))), 1UL)) , (*p_396->g_236)), &l_365[4][4], p_396->g_115[2], l_365[3][2], p_396);
        if (l_393)
            continue;
        l_394 = (p_396->g_205 = l_394);
    }
    (*p_396->g_35) &= (*p_396->g_186);
    return p_396->g_74.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->l_comm_values p_396->g_32 p_396->g_34 p_396->g_35 p_396->g_8 p_396->g_4 p_396->g_74 p_396->g_76 p_396->g_88 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_3 p_396->g_152 p_396->g_163 p_396->g_9 p_396->g_97 p_396->g_180 p_396->g_185 p_396->g_197 p_396->g_186 p_396->g_205 p_396->g_237 p_396->g_316 p_396->g_206.f2 p_396->g_321 p_396->g_206 p_396->g_338 p_396->g_198 p_396->g_67 p_396->g_345 p_396->g_351 p_396->g_151.f2
 * writes: p_396->g_9 p_396->g_32 p_396->g_35 p_396->g_8 p_396->g_67 p_396->g_76 p_396->g_97 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_127 p_396->g_163 p_396->g_166 p_396->g_180 p_396->g_3 p_396->g_197 p_396->g_4 p_396->g_186 p_396->g_323 p_396->g_152 p_396->g_335 p_396->g_338 p_396->g_198 p_396->g_351
 */
uint8_t  func_20(int32_t * p_21, int16_t  p_22, struct S2 * p_396)
{ /* block id: 13 */
    int64_t l_23 = 0x13B1067DCC3592E7L;
    int32_t *l_24[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t l_25[7][2] = {{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL}};
    VECTOR(uint16_t, 8) l_44 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL);
    int8_t *l_344 = &p_396->g_345[2][0];
    int8_t **l_343[2];
    int8_t ***l_342 = &l_343[1];
    int64_t l_349 = 0x25E1613AEFAA0E66L;
    uint8_t l_350 = 1UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_343[i] = &l_344;
    ++l_25[5][0];
    for (l_23 = 0; (l_23 < 11); l_23++)
    { /* block id: 17 */
        VECTOR(int32_t, 2) l_30 = (VECTOR(int32_t, 2))(0x5309F33DL, 0x224E228CL);
        int32_t l_31 = (-1L);
        struct S0 *l_33 = &p_396->g_32;
        int i;
        l_31 &= (p_396->g_9 = ((VECTOR(int32_t, 16))(l_30.yyyyxxxxyxyyyyxy)).s3);
        if (p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))])
            break;
        (*l_33) = p_396->g_32;
    }
    (*p_396->g_34) = &p_396->g_8;
    p_396->g_351 &= (+((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((*p_396->g_35), 1L, (-1L), 0L)).even)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))((p_22 && (func_36((safe_lshift_func_uint8_t_u_u(func_42((p_396->g_4.s9 , ((VECTOR(uint16_t, 2))(l_44.s22)).odd), p_396), 2)), ((l_342 != &l_343[1]) , p_396->g_205), &l_24[1], p_396) > 0x6545L)), ((VECTOR(int32_t, 2))(0x3875BE9CL)), (-1L))), ((VECTOR(int32_t, 4))(7L))))).hi))), 0x46D6E926L, ((VECTOR(int32_t, 2))((-8L))), (**p_396->g_185), 0x46635DCAL, l_349, l_350, (*p_396->g_67), 0x23490A3EL, ((VECTOR(int32_t, 2))((-1L))), 0x498F05BCL, 0x6A049B23L, (-1L))))).sb);
    return p_396->g_151.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_67 p_396->g_9 p_396->g_35 p_396->g_345
 * writes: p_396->g_9 p_396->g_8
 */
int16_t  func_36(uint8_t  p_37, struct S0 * p_38, int32_t ** p_39, struct S2 * p_396)
{ /* block id: 162 */
    (*p_396->g_35) = ((*p_396->g_67) |= 0x76EC2A1CL);
    if ((atomic_inc(&p_396->l_atomic_input[23]) == 2))
    { /* block id: 166 */
        int32_t l_346[5][6] = {{(-1L),1L,(-1L),(-1L),1L,(-1L)},{(-1L),1L,(-1L),(-1L),1L,(-1L)},{(-1L),1L,(-1L),(-1L),1L,(-1L)},{(-1L),1L,(-1L),(-1L),1L,(-1L)},{(-1L),1L,(-1L),(-1L),1L,(-1L)}};
        uint64_t l_347 = 0xAE6BA4F4FAC66368L;
        uint16_t l_348 = 0UL;
        int i, j;
        l_348 = (l_347 |= l_346[0][5]);
        unsigned int result = 0;
        int l_346_i0, l_346_i1;
        for (l_346_i0 = 0; l_346_i0 < 5; l_346_i0++) {
            for (l_346_i1 = 0; l_346_i1 < 6; l_346_i1++) {
                result += l_346[l_346_i0][l_346_i1];
            }
        }
        result += l_347;
        result += l_348;
        atomic_add(&p_396->l_special_values[23], result);
    }
    else
    { /* block id: 169 */
        (1 + 1);
    }
    return p_396->g_345[2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_35 p_396->g_74 p_396->g_76 p_396->g_88 p_396->g_4 p_396->g_113 p_396->g_115 p_396->l_comm_values p_396->g_118 p_396->g_32.f2 p_396->g_3 p_396->g_152 p_396->g_163 p_396->g_9 p_396->g_97 p_396->g_180 p_396->g_185 p_396->g_197 p_396->g_186 p_396->g_205 p_396->g_237 p_396->g_316 p_396->g_206.f2 p_396->g_321 p_396->g_206 p_396->g_32.f0 p_396->g_32.f1 p_396->g_338 p_396->g_198
 * writes: p_396->g_8 p_396->g_67 p_396->g_76 p_396->g_97 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_127 p_396->g_163 p_396->g_166 p_396->g_180 p_396->g_3 p_396->g_197 p_396->g_4 p_396->g_186 p_396->g_9 p_396->g_323 p_396->g_152 p_396->g_335 p_396->g_338 p_396->g_198
 */
uint8_t  func_42(uint16_t  p_43, struct S2 * p_396)
{ /* block id: 24 */
    uint64_t l_66[10] = {0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL,0xC99E8488E6FCAC8AL};
    int32_t *l_73 = (void*)0;
    uint16_t *l_75[3];
    struct S0 *l_77 = &p_396->g_78;
    uint64_t *l_322[2];
    int16_t l_324[6] = {0x2142L,0L,0x2142L,0x2142L,0L,0x2142L};
    struct S0 **l_329 = &l_77;
    struct S0 *l_330 = &p_396->g_32;
    uint32_t *l_331 = (void*)0;
    int8_t *l_332 = &p_396->g_118;
    int8_t *l_333 = (void*)0;
    int8_t *l_334[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_337[3][2][10] = {{{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_396->g_338,&p_396->g_338,&p_396->g_338,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_75[i] = &p_396->g_76;
    for (i = 0; i < 2; i++)
        l_322[i] = &p_396->g_323;
    p_396->g_338 ^= ((((func_45((p_396->g_335.s4 = ((*l_332) = ((((((p_396->g_152.y = func_50((l_330 = ((*l_329) = func_54(func_60(p_43, (p_396->g_67 = func_64(l_66[7], p_396)), func_68(l_73, (p_396->g_76 |= ((VECTOR(uint16_t, 4))(p_396->g_74.s0707)).y), l_73, l_77, p_396), p_396), ((p_396->g_323 = (safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s(5L, 0x5CEA92A1D2CDC6EAL)), p_396->g_321))) <= p_396->g_74.s1), p_43, &l_73, l_324[2], p_396))), p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))], p_396->g_316.s1, p_396)) , 0UL) > p_43) ^ p_396->g_316.s8) , 1UL) | p_43))), l_73, l_66[7], p_43, p_396) , p_396->g_32.f0) > p_43) , p_396->g_32.f1) != (-8L));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_396->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(0x32B09EA1L, p_43)), 10))][(safe_mod_func_uint32_t_u_u(p_396->tid, 1))]));
    if (((*p_396->g_186) |= 1L))
    { /* block id: 156 */
        int32_t *l_341 = &p_396->g_338;
        l_341 = l_341;
    }
    else
    { /* block id: 158 */
        (*p_396->g_197) = (*p_396->g_197);
    }
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_185 p_396->g_186 p_396->g_205 p_396->g_206
 * writes: p_396->g_9
 */
struct S0  func_45(int8_t  p_46, int32_t * p_47, uint32_t  p_48, uint64_t  p_49, struct S2 * p_396)
{ /* block id: 148 */
    VECTOR(int32_t, 2) l_336 = (VECTOR(int32_t, 2))(0x2EC69356L, (-9L));
    int i;
    (**p_396->g_185) = ((VECTOR(int32_t, 2))(l_336.xy)).hi;
    return (*p_396->g_205);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_50(struct S0 * p_51, uint32_t  p_52, int8_t  p_53, struct S2 * p_396)
{ /* block id: 143 */
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0 * func_54(uint64_t  p_55, uint32_t  p_56, uint8_t  p_57, int32_t ** p_58, int8_t  p_59, struct S2 * p_396)
{ /* block id: 138 */
    uint16_t l_325 = 0UL;
    struct S0 *l_328 = &p_396->g_206;
    l_325++;
    return l_328;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_9 p_396->g_237 p_396->g_316 p_396->g_206.f2 p_396->g_35 p_396->g_185
 * writes: p_396->g_163 p_396->g_9 p_396->g_8 p_396->g_186
 */
uint64_t  func_60(uint8_t  p_61, int32_t * p_62, struct S0 * p_63, struct S2 * p_396)
{ /* block id: 132 */
    VECTOR(uint32_t, 8) l_304 = (VECTOR(uint32_t, 8))(0x669BB4CBL, (VECTOR(uint32_t, 4))(0x669BB4CBL, (VECTOR(uint32_t, 2))(0x669BB4CBL, 0x25C39C28L), 0x25C39C28L), 0x25C39C28L, 0x669BB4CBL, 0x25C39C28L);
    VECTOR(uint32_t, 8) l_305 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL), 4294967289UL), 4294967289UL, 4294967295UL, 4294967289UL);
    VECTOR(uint8_t, 4) l_308 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x43L), 0x43L);
    uint32_t *l_313 = &p_396->g_163;
    int i;
    (*p_396->g_185) = func_64((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 16))(l_304.s6070670527150551)).sc8, ((VECTOR(uint32_t, 16))(l_305.s6535644365205555)).sbc))).yyxx)).zyyyxwzwyzywxyzw)).se || ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_308.yxxzwxxz)).s4, (((safe_add_func_int32_t_s_s((-1L), (*p_62))) || (safe_div_func_uint64_t_u_u((((p_61 == 7UL) | ((((((*l_313) = (p_396->g_237 || 1L)) == (safe_sub_func_int64_t_s_s(1L, 1L))) && ((*p_62) &= ((VECTOR(int32_t, 4))(p_396->g_316.s9b86)).x)) , l_304.s5) >= (-5L))) && p_396->g_206.f2), p_61))) < 0x06941107L))) && l_305.s7)), p_396);
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_35
 * writes: p_396->g_8
 */
int32_t * func_64(uint32_t  p_65, struct S2 * p_396)
{ /* block id: 25 */
    (*p_396->g_35) = p_65;
    return &p_396->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_396->g_88 p_396->g_4 p_396->g_113 p_396->g_115 p_396->l_comm_values p_396->g_118 p_396->g_32.f2 p_396->g_3 p_396->g_152 p_396->g_163 p_396->g_9 p_396->g_74 p_396->g_97 p_396->g_180 p_396->g_185 p_396->g_197 p_396->g_186 p_396->g_205
 * writes: p_396->g_97 p_396->g_113 p_396->g_115 p_396->g_118 p_396->g_127 p_396->g_163 p_396->g_166 p_396->g_180 p_396->g_3 p_396->g_197 p_396->g_4 p_396->g_186 p_396->g_9
 */
struct S0 * func_68(int32_t * p_69, uint16_t  p_70, int32_t * p_71, struct S0 * p_72, struct S2 * p_396)
{ /* block id: 30 */
    VECTOR(int32_t, 8) l_79 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x17FA172CL), 0x17FA172CL), 0x17FA172CL, 0L, 0x17FA172CL);
    VECTOR(int16_t, 2) l_80 = (VECTOR(int16_t, 2))(0x78B3L, 0x7409L);
    VECTOR(uint64_t, 16) l_81 = (VECTOR(uint64_t, 16))(0x15061D2E80B3E519L, (VECTOR(uint64_t, 4))(0x15061D2E80B3E519L, (VECTOR(uint64_t, 2))(0x15061D2E80B3E519L, 0x86BC5A18187EA63FL), 0x86BC5A18187EA63FL), 0x86BC5A18187EA63FL, 0x15061D2E80B3E519L, 0x86BC5A18187EA63FL, (VECTOR(uint64_t, 2))(0x15061D2E80B3E519L, 0x86BC5A18187EA63FL), (VECTOR(uint64_t, 2))(0x15061D2E80B3E519L, 0x86BC5A18187EA63FL), 0x15061D2E80B3E519L, 0x86BC5A18187EA63FL, 0x15061D2E80B3E519L, 0x86BC5A18187EA63FL);
    uint64_t *l_89 = (void*)0;
    uint64_t *l_90 = (void*)0;
    uint64_t *l_91 = (void*)0;
    uint64_t *l_92 = (void*)0;
    uint64_t *l_93 = (void*)0;
    uint64_t *l_94 = (void*)0;
    uint64_t *l_95 = (void*)0;
    uint64_t *l_96 = (void*)0;
    VECTOR(int8_t, 16) l_106 = (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x31L), 0x31L), 0x31L, 0x30L, 0x31L, (VECTOR(int8_t, 2))(0x30L, 0x31L), (VECTOR(int8_t, 2))(0x30L, 0x31L), 0x30L, 0x31L, 0x30L, 0x31L);
    VECTOR(int8_t, 8) l_107 = (VECTOR(int8_t, 8))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 2L), 2L), 2L, 0x05L, 2L);
    uint8_t *l_112 = &p_396->g_113;
    uint8_t *l_114 = &p_396->g_115[2];
    int8_t *l_116 = (void*)0;
    int8_t *l_117 = &p_396->g_118;
    uint64_t l_128[5] = {0x784E495FCC9BDC87L,0x784E495FCC9BDC87L,0x784E495FCC9BDC87L,0x784E495FCC9BDC87L,0x784E495FCC9BDC87L};
    VECTOR(int8_t, 2) l_140 = (VECTOR(int8_t, 2))(0L, 7L);
    int32_t l_164 = 8L;
    uint32_t l_213 = 8UL;
    uint32_t l_250 = 0x7BF4523AL;
    VECTOR(uint8_t, 8) l_254 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x23L), 0x23L), 0x23L, 1UL, 0x23L);
    int32_t *l_303 = (void*)0;
    int i;
    if ((+((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_79.s1376120720335055)))).even, (int32_t)(((((VECTOR(int16_t, 2))(l_80.xy)).odd , ((VECTOR(uint64_t, 2))(l_81.s3d)).odd) , ((safe_mul_func_int8_t_s_s(1L, ((*l_117) |= (safe_lshift_func_uint16_t_u_u((((p_70 ^ (p_396->g_97 = (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_396->g_88.s21632335)).s6, 3)))) & (((+(safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(l_79.s6, 15)) == l_80.y), p_396->g_4.s2))) & p_396->g_4.s4) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((~((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_81.sc, p_70)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(l_106.s8276)).wyzwxxzx, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_107.s0577)).xwxyzzyz)), 0x31L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x27L, 0x19L)).xyyy)), ((safe_lshift_func_uint8_t_u_u(((*l_114) ^= ((safe_lshift_func_uint8_t_u_s(((*l_112) ^= l_107.s7), 0)) || FAKE_DIVERGE(p_396->group_0_offset, get_group_id(0), 10))), 7)) != FAKE_DIVERGE(p_396->group_2_offset, get_group_id(2), 10)), 0L, 1L)))).s6d)).xyyxyyyy)).s76, ((VECTOR(int8_t, 2))((-6L)))))))), 1L, 6L)))), ((VECTOR(int8_t, 4))(1L))))).wwzxxyxx))).s7)) , p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))])) | (-10L)), 0L, 0x6A65199CL, 0x194CD19BL)).odd, ((VECTOR(int32_t, 2))(0x1196D9F7L))))).xxyxyxxy)).hi, ((VECTOR(int32_t, 4))((-1L)))))).even)).odd)) ^ 1UL), l_81.sa))))) != p_396->g_32.f2)) ^ p_396->g_3.s3)))).s5))
    { /* block id: 35 */
        int32_t l_121 = 0L;
        int32_t *l_122 = (void*)0;
        int32_t *l_123 = (void*)0;
        int32_t *l_124 = (void*)0;
        int32_t *l_125 = &p_396->g_9;
        int32_t *l_126[3];
        VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))((-1L), 0L);
        int8_t *l_192 = &p_396->g_118;
        int i;
        for (i = 0; i < 3; i++)
            l_126[i] = (void*)0;
        for (p_70 = 0; (p_70 > 38); p_70 = safe_add_func_int16_t_s_s(p_70, 3))
        { /* block id: 38 */
            if (p_396->g_88.s6)
                break;
        }
        l_128[4]++;
        if (((VECTOR(int32_t, 16))(l_131.yyxxxyyxxxyxxyxx)).s3)
        { /* block id: 42 */
            struct S0 *l_145 = (void*)0;
            struct S0 **l_146 = &l_145;
            struct S0 **l_147 = (void*)0;
            struct S0 **l_148 = (void*)0;
            struct S0 *l_150 = &p_396->g_151;
            struct S0 **l_149 = &l_150;
            int16_t *l_153 = (void*)0;
            int16_t *l_154 = &p_396->g_127;
            int16_t *l_155 = (void*)0;
            int16_t *l_156 = (void*)0;
            int16_t *l_157 = (void*)0;
            int16_t *l_158 = (void*)0;
            int16_t *l_159 = (void*)0;
            int16_t *l_160 = (void*)0;
            int16_t *l_161 = (void*)0;
            int16_t *l_162[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_165 = &p_396->g_166;
            int32_t **l_167 = &l_125;
            int i;
            (*l_167) = ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((p_396->g_88.s7 <= GROUP_DIVERGE(1, 1)), 0L)), (((*l_165) = ((l_79.s7 ^= ((safe_mod_func_int8_t_s_s((((*l_117) = ((VECTOR(int8_t, 16))(l_140.xxxxxxyxyyyxyxyx)).s2) > (safe_lshift_func_int16_t_s_s((p_396->g_163 &= ((*l_154) = ((safe_rshift_func_uint8_t_u_u(0UL, (&p_396->g_35 != (void*)0))) , ((VECTOR(int16_t, 8))((-3L), 0L, 0x1883L, 1L, p_396->g_113, ((((*l_149) = (((p_72 = p_72) != (void*)0) , ((*l_146) = l_145))) == (void*)0) != p_396->g_152.x), 0L, 0L)).s7))), 8))), (*l_125))) <= 18446744073709551612UL)) <= l_164)) , 0x62L))), p_396->g_74.s7)) , (void*)0);
        }
        else
        { /* block id: 52 */
            int16_t l_168 = (-1L);
            int8_t *l_182 = &p_396->g_118;
            int32_t **l_187 = &l_126[2];
            if (p_396->g_97)
            { /* block id: 53 */
                uint32_t l_179 = 3UL;
                int16_t *l_181[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                int8_t *l_194 = (void*)0;
                int i, j;
                p_396->g_3.s5 = ((((((l_168 = p_396->g_88.s5) <= ((((p_70 != 0UL) <= ((*l_112) = ((l_91 == ((p_396->g_127 = (+(((VECTOR(int32_t, 4))(0L, (1UL > (p_396->g_180[1][0][0] ^= ((((safe_div_func_uint32_t_u_u((0xB7566744L & ((VECTOR(uint32_t, 8))((safe_mul_func_int16_t_s_s(0x075FL, (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(p_396->g_74.s2, ((safe_mul_func_uint16_t_u_u(l_179, 0x32DCL)) , 4294967295UL))) , p_70), 6)))), 0xCB368D48L, p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))], 0x1CC039EEL, ((VECTOR(uint32_t, 2))(1UL)), 1UL, 0xAD940D45L)).s5), p_70)) > l_179) < p_396->g_4.sd) & p_70))), 0x6692431AL, (-1L))).y ^ l_179))) , (void*)0)) >= 6L))) & 0x4790DA673FA2BBC1L) | l_179)) , &p_69) != (void*)0) , l_182) == &p_396->g_118);
                for (l_179 = (-8); (l_179 > 60); l_179++)
                { /* block id: 61 */
                    int8_t **l_193[7][3][9] = {{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}},{{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116},{&l_116,(void*)0,&l_116,&l_182,(void*)0,&l_182,&l_116,(void*)0,&l_116}}};
                    struct S0 **l_199 = &p_396->g_197;
                    VECTOR(int32_t, 8) l_200 = (VECTOR(int32_t, 8))(0x09D31CD2L, (VECTOR(int32_t, 4))(0x09D31CD2L, (VECTOR(int32_t, 2))(0x09D31CD2L, 1L), 1L), 1L, 0x09D31CD2L, 1L);
                    int i, j, k;
                    p_396->g_4.sd &= ((&p_396->g_35 != (l_187 = p_396->g_185)) && (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_192 != (l_194 = &p_396->g_118)), (((safe_div_func_int8_t_s_s(((((*l_199) = p_396->g_197) != (p_72 = (((((*l_182) |= 5L) >= ((~((*p_396->g_186) != ((((VECTOR(int32_t, 16))(0x3746B9F5L, ((VECTOR(int32_t, 2))(0L, 0x287189E9L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_200.s07)).xyyy)), (-1L), ((((safe_add_func_uint16_t_u_u(p_396->g_115[2], (safe_mod_func_uint32_t_u_u((p_396->g_comm_values[p_396->tid] <= l_179), p_70)))) , p_396->g_163) || (-1L)) , 0L), ((VECTOR(int32_t, 2))(0x35358D98L)), p_396->l_comm_values[(safe_mod_func_uint32_t_u_u(p_396->tid, 1))], 0x7EBA5A16L, 4L, 1L, 0x6812EFD5L)).sc , p_70) != p_70))) < p_70)) | p_396->g_9) , p_396->g_205))) == 0x249294EA281D226DL), p_396->g_88.s0)) > l_200.s7) , 0x8CL))), p_396->g_163)));
                }
            }
            else
            { /* block id: 69 */
                int32_t *l_207 = &l_121;
                (*l_187) = ((*p_396->g_185) = l_207);
            }
            (*p_396->g_185) = p_69;
            (*l_125) &= l_79.s6;
            l_124 = &l_121;
        }
    }
    else
    { /* block id: 77 */
        int32_t *l_208 = &p_396->g_9;
        int32_t *l_209 = (void*)0;
        int32_t l_210 = (-3L);
        int32_t *l_211 = &p_396->g_9;
        int32_t *l_212[9][6] = {{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0},{(void*)0,&p_396->g_9,(void*)0,&p_396->g_9,(void*)0,(void*)0}};
        int64_t l_267 = (-1L);
        uint64_t *l_282 = &l_128[4];
        int i, j;
        ++l_213;
        (*l_211) = 1L;
        for (l_210 = (-26); (l_210 >= 29); l_210++)
        { /* block id: 82 */
            (*p_396->g_185) = (void*)0;
        }
        for (p_70 = 0; (p_70 <= 10); p_70 = safe_add_func_uint8_t_u_u(p_70, 3))
        { /* block id: 87 */
            int16_t l_244 = 9L;
            int32_t l_247 = (-10L);
            VECTOR(int32_t, 2) l_253 = (VECTOR(int32_t, 2))(0x0EC8A288L, 0x12A338AAL);
            VECTOR(uint8_t, 16) l_255 = (VECTOR(uint8_t, 16))(0xAAL, (VECTOR(uint8_t, 4))(0xAAL, (VECTOR(uint8_t, 2))(0xAAL, 0xCFL), 0xCFL), 0xCFL, 0xAAL, 0xCFL, (VECTOR(uint8_t, 2))(0xAAL, 0xCFL), (VECTOR(uint8_t, 2))(0xAAL, 0xCFL), 0xAAL, 0xCFL, 0xAAL, 0xCFL);
            uint16_t l_272 = 65533UL;
            uint8_t *l_280 = (void*)0;
            uint64_t *l_281 = (void*)0;
            int32_t **l_302 = &l_211;
            int i;
            (1 + 1);
        }
    }
    l_79.s0 = (l_90 != (void*)0);
    return p_72;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S2 c_397;
    struct S2* p_396 = &c_397;
    struct S2 c_398 = {
        (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x2A2B3B7BL), 0x2A2B3B7BL), 0x2A2B3B7BL, 2L, 0x2A2B3B7BL), // p_396->g_3
        (VECTOR(int32_t, 16))(0x38DD44ADL, (VECTOR(int32_t, 4))(0x38DD44ADL, (VECTOR(int32_t, 2))(0x38DD44ADL, 0x4006310FL), 0x4006310FL), 0x4006310FL, 0x38DD44ADL, 0x4006310FL, (VECTOR(int32_t, 2))(0x38DD44ADL, 0x4006310FL), (VECTOR(int32_t, 2))(0x38DD44ADL, 0x4006310FL), 0x38DD44ADL, 0x4006310FL, 0x38DD44ADL, 0x4006310FL), // p_396->g_4
        0L, // p_396->g_8
        0x23DEC995L, // p_396->g_9
        {0xFA57A880L,0x1B4ADC7CL,0x2975881DL}, // p_396->g_32
        &p_396->g_8, // p_396->g_35
        &p_396->g_35, // p_396->g_34
        &p_396->g_9, // p_396->g_67
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_396->g_74
        0x3A9BL, // p_396->g_76
        {9UL,0UL,0x64988723L}, // p_396->g_78
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 8L), 8L), 8L, 1L, 8L), // p_396->g_88
        1L, // p_396->g_97
        1UL, // p_396->g_113
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_396->g_115
        0L, // p_396->g_118
        8L, // p_396->g_127
        {0x71845DB4L,2UL,0x1CFB4F43L}, // p_396->g_151
        (VECTOR(uint32_t, 2))(1UL, 9UL), // p_396->g_152
        4294967295UL, // p_396->g_163
        0x5C4174CEC6276A10L, // p_396->g_166
        {{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}}}, // p_396->g_180
        &p_396->g_9, // p_396->g_186
        &p_396->g_186, // p_396->g_185
        {5UL,0xF0B847CEL,0x377572B0L}, // p_396->g_198
        &p_396->g_198, // p_396->g_197
        {0xF5C35F3DL,0x4075E5BEL,1L}, // p_396->g_206
        &p_396->g_206, // p_396->g_205
        0L, // p_396->g_237
        &p_396->g_237, // p_396->g_236
        &p_396->g_236, // p_396->g_235
        (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 253UL), 253UL), // p_396->g_256
        (void*)0, // p_396->g_279
        (VECTOR(int32_t, 16))(0x562857CCL, (VECTOR(int32_t, 4))(0x562857CCL, (VECTOR(int32_t, 2))(0x562857CCL, 4L), 4L), 4L, 0x562857CCL, 4L, (VECTOR(int32_t, 2))(0x562857CCL, 4L), (VECTOR(int32_t, 2))(0x562857CCL, 4L), 0x562857CCL, 4L, 0x562857CCL, 4L), // p_396->g_316
        0xC9L, // p_396->g_321
        4UL, // p_396->g_323
        (VECTOR(int8_t, 8))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0L), 0L), 0L, 0x43L, 0L), // p_396->g_335
        0L, // p_396->g_338
        {{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL},{0x7CL}}, // p_396->g_345
        0x591AL, // p_396->g_351
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x31EFE639L), 0x31EFE639L), 0x31EFE639L, (-4L), 0x31EFE639L), // p_396->g_356
        0, // p_396->v_collective
        sequence_input[get_global_id(0)], // p_396->global_0_offset
        sequence_input[get_global_id(1)], // p_396->global_1_offset
        sequence_input[get_global_id(2)], // p_396->global_2_offset
        sequence_input[get_local_id(0)], // p_396->local_0_offset
        sequence_input[get_local_id(1)], // p_396->local_1_offset
        sequence_input[get_local_id(2)], // p_396->local_2_offset
        sequence_input[get_group_id(0)], // p_396->group_0_offset
        sequence_input[get_group_id(1)], // p_396->group_1_offset
        sequence_input[get_group_id(2)], // p_396->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_396->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_397 = c_398;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_396);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_396->g_3.s0, "p_396->g_3.s0", print_hash_value);
    transparent_crc(p_396->g_3.s1, "p_396->g_3.s1", print_hash_value);
    transparent_crc(p_396->g_3.s2, "p_396->g_3.s2", print_hash_value);
    transparent_crc(p_396->g_3.s3, "p_396->g_3.s3", print_hash_value);
    transparent_crc(p_396->g_3.s4, "p_396->g_3.s4", print_hash_value);
    transparent_crc(p_396->g_3.s5, "p_396->g_3.s5", print_hash_value);
    transparent_crc(p_396->g_3.s6, "p_396->g_3.s6", print_hash_value);
    transparent_crc(p_396->g_3.s7, "p_396->g_3.s7", print_hash_value);
    transparent_crc(p_396->g_4.s0, "p_396->g_4.s0", print_hash_value);
    transparent_crc(p_396->g_4.s1, "p_396->g_4.s1", print_hash_value);
    transparent_crc(p_396->g_4.s2, "p_396->g_4.s2", print_hash_value);
    transparent_crc(p_396->g_4.s3, "p_396->g_4.s3", print_hash_value);
    transparent_crc(p_396->g_4.s4, "p_396->g_4.s4", print_hash_value);
    transparent_crc(p_396->g_4.s5, "p_396->g_4.s5", print_hash_value);
    transparent_crc(p_396->g_4.s6, "p_396->g_4.s6", print_hash_value);
    transparent_crc(p_396->g_4.s7, "p_396->g_4.s7", print_hash_value);
    transparent_crc(p_396->g_4.s8, "p_396->g_4.s8", print_hash_value);
    transparent_crc(p_396->g_4.s9, "p_396->g_4.s9", print_hash_value);
    transparent_crc(p_396->g_4.sa, "p_396->g_4.sa", print_hash_value);
    transparent_crc(p_396->g_4.sb, "p_396->g_4.sb", print_hash_value);
    transparent_crc(p_396->g_4.sc, "p_396->g_4.sc", print_hash_value);
    transparent_crc(p_396->g_4.sd, "p_396->g_4.sd", print_hash_value);
    transparent_crc(p_396->g_4.se, "p_396->g_4.se", print_hash_value);
    transparent_crc(p_396->g_4.sf, "p_396->g_4.sf", print_hash_value);
    transparent_crc(p_396->g_8, "p_396->g_8", print_hash_value);
    transparent_crc(p_396->g_9, "p_396->g_9", print_hash_value);
    transparent_crc(p_396->g_32.f0, "p_396->g_32.f0", print_hash_value);
    transparent_crc(p_396->g_32.f1, "p_396->g_32.f1", print_hash_value);
    transparent_crc(p_396->g_32.f2, "p_396->g_32.f2", print_hash_value);
    transparent_crc(p_396->g_74.s0, "p_396->g_74.s0", print_hash_value);
    transparent_crc(p_396->g_74.s1, "p_396->g_74.s1", print_hash_value);
    transparent_crc(p_396->g_74.s2, "p_396->g_74.s2", print_hash_value);
    transparent_crc(p_396->g_74.s3, "p_396->g_74.s3", print_hash_value);
    transparent_crc(p_396->g_74.s4, "p_396->g_74.s4", print_hash_value);
    transparent_crc(p_396->g_74.s5, "p_396->g_74.s5", print_hash_value);
    transparent_crc(p_396->g_74.s6, "p_396->g_74.s6", print_hash_value);
    transparent_crc(p_396->g_74.s7, "p_396->g_74.s7", print_hash_value);
    transparent_crc(p_396->g_76, "p_396->g_76", print_hash_value);
    transparent_crc(p_396->g_78.f0, "p_396->g_78.f0", print_hash_value);
    transparent_crc(p_396->g_78.f1, "p_396->g_78.f1", print_hash_value);
    transparent_crc(p_396->g_78.f2, "p_396->g_78.f2", print_hash_value);
    transparent_crc(p_396->g_88.s0, "p_396->g_88.s0", print_hash_value);
    transparent_crc(p_396->g_88.s1, "p_396->g_88.s1", print_hash_value);
    transparent_crc(p_396->g_88.s2, "p_396->g_88.s2", print_hash_value);
    transparent_crc(p_396->g_88.s3, "p_396->g_88.s3", print_hash_value);
    transparent_crc(p_396->g_88.s4, "p_396->g_88.s4", print_hash_value);
    transparent_crc(p_396->g_88.s5, "p_396->g_88.s5", print_hash_value);
    transparent_crc(p_396->g_88.s6, "p_396->g_88.s6", print_hash_value);
    transparent_crc(p_396->g_88.s7, "p_396->g_88.s7", print_hash_value);
    transparent_crc(p_396->g_97, "p_396->g_97", print_hash_value);
    transparent_crc(p_396->g_113, "p_396->g_113", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_396->g_115[i], "p_396->g_115[i]", print_hash_value);

    }
    transparent_crc(p_396->g_118, "p_396->g_118", print_hash_value);
    transparent_crc(p_396->g_127, "p_396->g_127", print_hash_value);
    transparent_crc(p_396->g_151.f0, "p_396->g_151.f0", print_hash_value);
    transparent_crc(p_396->g_151.f1, "p_396->g_151.f1", print_hash_value);
    transparent_crc(p_396->g_151.f2, "p_396->g_151.f2", print_hash_value);
    transparent_crc(p_396->g_152.x, "p_396->g_152.x", print_hash_value);
    transparent_crc(p_396->g_152.y, "p_396->g_152.y", print_hash_value);
    transparent_crc(p_396->g_163, "p_396->g_163", print_hash_value);
    transparent_crc(p_396->g_166, "p_396->g_166", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_396->g_180[i][j][k], "p_396->g_180[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_396->g_198.f0, "p_396->g_198.f0", print_hash_value);
    transparent_crc(p_396->g_198.f1, "p_396->g_198.f1", print_hash_value);
    transparent_crc(p_396->g_198.f2, "p_396->g_198.f2", print_hash_value);
    transparent_crc(p_396->g_206.f0, "p_396->g_206.f0", print_hash_value);
    transparent_crc(p_396->g_206.f1, "p_396->g_206.f1", print_hash_value);
    transparent_crc(p_396->g_206.f2, "p_396->g_206.f2", print_hash_value);
    transparent_crc(p_396->g_237, "p_396->g_237", print_hash_value);
    transparent_crc(p_396->g_256.x, "p_396->g_256.x", print_hash_value);
    transparent_crc(p_396->g_256.y, "p_396->g_256.y", print_hash_value);
    transparent_crc(p_396->g_256.z, "p_396->g_256.z", print_hash_value);
    transparent_crc(p_396->g_256.w, "p_396->g_256.w", print_hash_value);
    transparent_crc(p_396->g_316.s0, "p_396->g_316.s0", print_hash_value);
    transparent_crc(p_396->g_316.s1, "p_396->g_316.s1", print_hash_value);
    transparent_crc(p_396->g_316.s2, "p_396->g_316.s2", print_hash_value);
    transparent_crc(p_396->g_316.s3, "p_396->g_316.s3", print_hash_value);
    transparent_crc(p_396->g_316.s4, "p_396->g_316.s4", print_hash_value);
    transparent_crc(p_396->g_316.s5, "p_396->g_316.s5", print_hash_value);
    transparent_crc(p_396->g_316.s6, "p_396->g_316.s6", print_hash_value);
    transparent_crc(p_396->g_316.s7, "p_396->g_316.s7", print_hash_value);
    transparent_crc(p_396->g_316.s8, "p_396->g_316.s8", print_hash_value);
    transparent_crc(p_396->g_316.s9, "p_396->g_316.s9", print_hash_value);
    transparent_crc(p_396->g_316.sa, "p_396->g_316.sa", print_hash_value);
    transparent_crc(p_396->g_316.sb, "p_396->g_316.sb", print_hash_value);
    transparent_crc(p_396->g_316.sc, "p_396->g_316.sc", print_hash_value);
    transparent_crc(p_396->g_316.sd, "p_396->g_316.sd", print_hash_value);
    transparent_crc(p_396->g_316.se, "p_396->g_316.se", print_hash_value);
    transparent_crc(p_396->g_316.sf, "p_396->g_316.sf", print_hash_value);
    transparent_crc(p_396->g_321, "p_396->g_321", print_hash_value);
    transparent_crc(p_396->g_323, "p_396->g_323", print_hash_value);
    transparent_crc(p_396->g_335.s0, "p_396->g_335.s0", print_hash_value);
    transparent_crc(p_396->g_335.s1, "p_396->g_335.s1", print_hash_value);
    transparent_crc(p_396->g_335.s2, "p_396->g_335.s2", print_hash_value);
    transparent_crc(p_396->g_335.s3, "p_396->g_335.s3", print_hash_value);
    transparent_crc(p_396->g_335.s4, "p_396->g_335.s4", print_hash_value);
    transparent_crc(p_396->g_335.s5, "p_396->g_335.s5", print_hash_value);
    transparent_crc(p_396->g_335.s6, "p_396->g_335.s6", print_hash_value);
    transparent_crc(p_396->g_335.s7, "p_396->g_335.s7", print_hash_value);
    transparent_crc(p_396->g_338, "p_396->g_338", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_396->g_345[i][j], "p_396->g_345[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_396->g_351, "p_396->g_351", print_hash_value);
    transparent_crc(p_396->g_356.s0, "p_396->g_356.s0", print_hash_value);
    transparent_crc(p_396->g_356.s1, "p_396->g_356.s1", print_hash_value);
    transparent_crc(p_396->g_356.s2, "p_396->g_356.s2", print_hash_value);
    transparent_crc(p_396->g_356.s3, "p_396->g_356.s3", print_hash_value);
    transparent_crc(p_396->g_356.s4, "p_396->g_356.s4", print_hash_value);
    transparent_crc(p_396->g_356.s5, "p_396->g_356.s5", print_hash_value);
    transparent_crc(p_396->g_356.s6, "p_396->g_356.s6", print_hash_value);
    transparent_crc(p_396->g_356.s7, "p_396->g_356.s7", print_hash_value);
    transparent_crc(p_396->v_collective, "p_396->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 41; i++)
            transparent_crc(p_396->l_special_values[i], "p_396->l_special_values[i]", print_hash_value);
    transparent_crc(p_396->l_comm_values[get_linear_local_id()], "p_396->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_396->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_396->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
