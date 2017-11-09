// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 96,73,1 -l 3,1,1
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

__constant uint32_t permutations[10][3] = {
{2,0,1}, // permutation 0
{1,0,2}, // permutation 1
{1,2,0}, // permutation 2
{2,0,1}, // permutation 3
{1,2,0}, // permutation 4
{1,2,0}, // permutation 5
{2,0,1}, // permutation 6
{1,0,2}, // permutation 7
{1,2,0}, // permutation 8
{2,0,1} // permutation 9
};

// Seed: 360827055

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   int16_t  f1;
   uint32_t  f2;
};

struct S1 {
    volatile int32_t g_2[7];
    volatile int32_t g_3;
    int32_t g_4[7];
    int32_t g_8;
    int32_t *g_7;
    struct S0 g_41;
    struct S0 * volatile g_43;
    volatile VECTOR(int64_t, 2) g_53;
    VECTOR(int8_t, 16) g_64;
    int32_t g_71;
    VECTOR(uint64_t, 2) g_76;
    struct S0 g_88;
    int32_t *g_92[2];
    int32_t **g_91[5];
    int32_t g_134;
    VECTOR(int8_t, 8) g_141;
    uint16_t g_169;
    VECTOR(uint16_t, 8) g_179;
    VECTOR(uint16_t, 4) g_193;
    uint64_t g_249[4];
    int64_t g_255;
    int8_t g_257;
    int32_t * volatile g_265[6];
    int32_t ** volatile g_267[10];
    int32_t ** volatile g_270;
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
int32_t  func_1(struct S1 * p_287);
int32_t  func_18(int32_t  p_19, struct S1 * p_287);
uint8_t  func_20(uint8_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S1 * p_287);
struct S0  func_29(uint32_t  p_30, int32_t * p_31, struct S1 * p_287);
int32_t * func_46(int64_t  p_47, struct S1 * p_287);
uint8_t  func_55(uint8_t  p_56, struct S1 * p_287);
int32_t * func_60(int64_t  p_61, uint32_t  p_62, int32_t  p_63, struct S1 * p_287);
int8_t  func_68(uint64_t  p_69, struct S1 * p_287);
int32_t * func_72(uint32_t  p_73, int16_t  p_74, struct S1 * p_287);
uint8_t  func_77(uint64_t  p_78, uint16_t  p_79, int32_t * p_80, int64_t  p_81, int32_t ** p_82, struct S1 * p_287);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_287->g_4 p_287->l_comm_values p_287->g_2 p_287->g_7 p_287->g_8 p_287->g_41 p_287->g_43 p_287->g_comm_values p_287->g_53 p_287->g_64 p_287->g_76 p_287->g_71 p_287->g_88.f2 p_287->g_91 p_287->g_141 p_287->g_134 p_287->g_169 p_287->g_193 p_287->g_88.f1 p_287->g_249 p_287->g_270 p_287->g_88.f0
 * writes: p_287->g_4 p_287->g_7 p_287->g_8 p_287->g_41 p_287->g_71 p_287->g_134 p_287->g_169 p_287->g_88.f1 p_287->g_64 p_287->g_255 p_287->g_257
 */
int32_t  func_1(struct S1 * p_287)
{ /* block id: 4 */
    int64_t l_9 = 0x18AB5457D670012AL;
    int32_t *l_25[7];
    int32_t *l_26[2];
    VECTOR(uint32_t, 4) l_28 = (VECTOR(uint32_t, 4))(0x13251F81L, (VECTOR(uint32_t, 2))(0x13251F81L, 0xD46409EFL), 0xD46409EFL);
    int i;
    for (i = 0; i < 7; i++)
        l_25[i] = &p_287->g_4[5];
    for (i = 0; i < 2; i++)
        l_26[i] = &p_287->g_8;
    for (p_287->g_4[2] = 0; (p_287->g_4[2] > 9); p_287->g_4[2] = safe_add_func_uint8_t_u_u(p_287->g_4[2], 9))
    { /* block id: 7 */
        int32_t l_10 = 4L;
        int32_t l_15 = (-9L);
        int64_t *l_280 = &p_287->g_255;
        int64_t *l_281[10][4][1] = {{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}},{{&l_9},{&l_9},{&l_9},{&l_9}}};
        uint32_t l_282 = 0x3CC7EE48L;
        int32_t l_283 = 1L;
        int i, j, k;
        p_287->g_7 = &p_287->g_4[0];
        l_283 |= (((l_9 , p_287->l_comm_values[(safe_mod_func_uint32_t_u_u(p_287->tid, 3))]) == (l_9 , (l_10 >= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_15, l_10)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x0F219A6FDD8FB8CEL, (-1L), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))((l_282 = ((safe_div_func_int64_t_s_s(((*l_280) = (l_10 & func_18((func_20((p_287->g_2[0] , 255UL), l_25[4], l_26[0], &l_15, p_287) > l_28.w), p_287))), FAKE_DIVERGE(p_287->global_2_offset, get_global_id(2), 10))) >= 0L)), 0x44F5B647A3EA6D4CL, 0L, (-1L))).even))), ((VECTOR(int64_t, 2))(0x103A164675EDD77EL)), (-1L), 6L)).odd)).xyywxywyzxxwwyxx))).hi)).s4))))) || p_287->g_64.s0);
        if ((atomic_inc(&p_287->l_atomic_input[14]) == 0))
        { /* block id: 124 */
            int32_t l_285[4] = {(-1L),(-1L),(-1L),(-1L)};
            int32_t *l_284[8][3] = {{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]},{(void*)0,(void*)0,&l_285[3]}};
            int32_t *l_286 = (void*)0;
            int i, j;
            l_286 = l_284[7][2];
            unsigned int result = 0;
            int l_285_i0;
            for (l_285_i0 = 0; l_285_i0 < 4; l_285_i0++) {
                result += l_285[l_285_i0];
            }
            atomic_add(&p_287->l_special_values[14], result);
        }
        else
        { /* block id: 126 */
            (1 + 1);
        }
        if (l_283)
            continue;
    }
    return p_287->g_169;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_41 p_287->g_43 p_287->g_comm_values p_287->g_8 p_287->g_4 p_287->g_53 p_287->g_64 p_287->l_comm_values p_287->g_76 p_287->g_71 p_287->g_88.f2 p_287->g_91 p_287->g_141 p_287->g_134 p_287->g_169 p_287->g_193 p_287->g_88.f1 p_287->g_249 p_287->g_7 p_287->g_270 p_287->g_88.f0
 * writes: p_287->g_41 p_287->g_7 p_287->g_71 p_287->g_134 p_287->g_169 p_287->g_88.f1 p_287->g_64 p_287->g_255 p_287->g_257 p_287->g_8
 */
int32_t  func_18(int32_t  p_19, struct S1 * p_287)
{ /* block id: 14 */
    int32_t *l_32 = &p_287->g_4[3];
    struct S0 *l_42 = (void*)0;
    int32_t *l_274 = &p_287->g_134;
    int32_t l_275[2];
    int32_t *l_276[5][7] = {{&p_287->g_71,&l_275[1],&p_287->g_8,(void*)0,(void*)0,&p_287->g_71,(void*)0},{&p_287->g_71,&l_275[1],&p_287->g_8,(void*)0,(void*)0,&p_287->g_71,(void*)0},{&p_287->g_71,&l_275[1],&p_287->g_8,(void*)0,(void*)0,&p_287->g_71,(void*)0},{&p_287->g_71,&l_275[1],&p_287->g_8,(void*)0,(void*)0,&p_287->g_71,(void*)0},{&p_287->g_71,&l_275[1],&p_287->g_8,(void*)0,(void*)0,&p_287->g_71,(void*)0}};
    uint64_t l_277 = 0x0D20FDDF2EE573C3L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_275[i] = 0x3916DEC0L;
    (*p_287->g_43) = func_29(p_19, l_32, p_287);
    for (p_287->g_41.f1 = 25; (p_287->g_41.f1 < (-20)); p_287->g_41.f1 = safe_sub_func_int8_t_s_s(p_287->g_41.f1, 7))
    { /* block id: 21 */
        int32_t **l_268 = (void*)0;
        int32_t **l_269 = (void*)0;
        (*p_287->g_270) = func_46(p_287->g_comm_values[p_287->tid], p_287);
        for (p_287->g_134 = 13; (p_287->g_134 > (-13)); p_287->g_134 = safe_sub_func_int64_t_s_s(p_287->g_134, 6))
        { /* block id: 112 */
            int32_t *l_273 = &p_287->g_71;
            (*l_273) |= ((GROUP_DIVERGE(1, 1) || 0x02L) | p_287->g_88.f0);
        }
        if (p_19)
            break;
        return (*p_287->g_7);
    }
    ++l_277;
    return (*l_274);
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_7 p_287->g_4 p_287->g_8
 * writes: p_287->g_8
 */
uint8_t  func_20(uint8_t  p_21, int32_t * p_22, int32_t * p_23, int32_t * p_24, struct S1 * p_287)
{ /* block id: 9 */
    uint32_t l_27[7][10][1] = {{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}},{{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L},{0x09063446L}}};
    int i, j, k;
    l_27[4][1][0] ^= ((*p_23) = (*p_287->g_7));
    (*p_23) = (0L == GROUP_DIVERGE(0, 1));
    return p_287->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_41
 * writes:
 */
struct S0  func_29(uint32_t  p_30, int32_t * p_31, struct S1 * p_287)
{ /* block id: 15 */
    int32_t *l_33 = &p_287->g_8;
    int32_t *l_34 = &p_287->g_8;
    int32_t *l_35 = &p_287->g_8;
    int32_t *l_36 = &p_287->g_8;
    int32_t *l_37[2];
    uint8_t l_38 = 7UL;
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = (void*)0;
    l_38--;
    return p_287->g_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_comm_values p_287->g_8 p_287->g_4 p_287->g_53 p_287->g_64 p_287->g_41.f2 p_287->l_comm_values p_287->g_76 p_287->g_71 p_287->g_88.f2 p_287->g_91 p_287->g_41.f1 p_287->g_141 p_287->g_134 p_287->g_169 p_287->g_193 p_287->g_88.f1 p_287->g_249 p_287->g_7
 * writes: p_287->g_7 p_287->g_71 p_287->g_134 p_287->g_41.f2 p_287->g_169 p_287->g_88.f1 p_287->g_64 p_287->g_255 p_287->g_257 p_287->g_8
 */
int32_t * func_46(int64_t  p_47, struct S1 * p_287)
{ /* block id: 22 */
    int16_t l_52 = 0x4FB4L;
    VECTOR(int32_t, 16) l_54 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0A27EA10L), 0x0A27EA10L), 0x0A27EA10L, (-1L), 0x0A27EA10L, (VECTOR(int32_t, 2))((-1L), 0x0A27EA10L), (VECTOR(int32_t, 2))((-1L), 0x0A27EA10L), (-1L), 0x0A27EA10L, (-1L), 0x0A27EA10L);
    int32_t **l_59 = &p_287->g_7;
    VECTOR(int8_t, 2) l_65 = (VECTOR(int8_t, 2))(0x16L, 0x5CL);
    int32_t *l_261 = (void*)0;
    int32_t l_262 = 0x742B53B3L;
    VECTOR(int16_t, 16) l_263 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-10L)), (-10L)), (-10L), (-4L), (-10L), (VECTOR(int16_t, 2))((-4L), (-10L)), (VECTOR(int16_t, 2))((-4L), (-10L)), (-4L), (-10L), (-4L), (-10L));
    struct S0 *l_264 = (void*)0;
    int32_t *l_266 = &p_287->g_8;
    int i;
    l_262 |= ((safe_lshift_func_uint8_t_u_u((p_287->g_comm_values[p_287->tid] ^ (p_47 == p_287->g_8)), 4)) >= ((safe_div_func_uint64_t_u_u((p_47 | p_287->g_4[2]), (l_52 , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_287->g_53.yxyyxxyy)).even)).w))) ^ ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(l_54.s2817)).zxyyzyxzywzzzwww, ((VECTOR(int32_t, 8))(((func_55((safe_mod_func_uint8_t_u_u((((*l_59) = &p_287->g_4[3]) == (p_47 , func_60(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(1L, 0x32L)), (-8L), 0x2DL)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_287->g_64.sb90e)))).odd, ((VECTOR(int8_t, 4))(l_65.yyyy)).odd))).xxxyxxyx)).s7 > p_287->g_8) || 0x02F563EDL), p_47, p_287->g_41.f2, p_287))), p_287->g_8)), p_287) , p_287->g_193.w) != (-1L)), (-1L), ((VECTOR(int32_t, 4))(0x53EEA590L)), 0x25C0CCC0L, 0x3E18E927L)).s2742557244667446))).s9));
    (*l_266) |= ((((VECTOR(int16_t, 8))(l_263.sf76da6cb)).s0 , (void*)0) != l_264);
    return (*l_59);
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_7 p_287->g_4
 * writes:
 */
uint8_t  func_55(uint8_t  p_56, struct S1 * p_287)
{ /* block id: 103 */
    int32_t **l_260 = &p_287->g_7;
    atomic_max(&p_287->g_atomic_reduction[get_linear_group_id()], ((void*)0 == l_260));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_287->v_collective += p_287->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return (**l_260);
}


/* ------------------------------------------ */
/* 
 * reads : p_287->l_comm_values p_287->g_41.f2 p_287->g_76 p_287->g_64 p_287->g_71 p_287->g_88.f2 p_287->g_91 p_287->g_41.f1 p_287->g_141 p_287->g_134 p_287->g_169 p_287->g_comm_values p_287->g_4 p_287->g_193 p_287->g_88.f1 p_287->g_249
 * writes: p_287->g_71 p_287->g_134 p_287->g_41.f2 p_287->g_169 p_287->g_88.f1 p_287->g_64 p_287->g_255 p_287->g_257
 */
int32_t * func_60(int64_t  p_61, uint32_t  p_62, int32_t  p_63, struct S1 * p_287)
{ /* block id: 24 */
    uint64_t *l_248 = &p_287->g_249[2];
    uint64_t *l_250[4][4][7] = {{{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_287->g_249[2],(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t *l_253 = (void*)0;
    int64_t *l_254 = &p_287->g_255;
    int8_t *l_256 = &p_287->g_257;
    VECTOR(int32_t, 2) l_258 = (VECTOR(int32_t, 2))((-9L), 0x6C9EC02BL);
    int32_t *l_259 = &p_287->g_8;
    int i, j, k;
    l_258.y = ((safe_rshift_func_int8_t_s_u(func_68(p_61, p_287), 5)) | (((*l_256) = (safe_rshift_func_int16_t_s_s(((((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))((-5L), ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_62, (p_287->g_4[2] >= (((l_248 = l_248) != l_250[0][3][0]) ^ ((*l_254) = ((safe_sub_func_int16_t_s_s(p_63, p_63)) , ((~(!(((p_287->g_249[2] | 1L) >= (-1L)) != 0x8AE68A92C4B39B5AL))) ^ p_287->g_193.z))))))), 14)) && FAKE_DIVERGE(p_287->group_1_offset, get_group_id(1), 10)), FAKE_DIVERGE(p_287->global_1_offset, get_global_id(1), 10))) , p_61), 0x30893299AB02FF75L, 0L)), ((VECTOR(int64_t, 4))(0x57443F8EBD85918FL))))).w & p_63) == 0x31F43052L), p_61))) , FAKE_DIVERGE(p_287->local_2_offset, get_local_id(2), 10)));
    return l_259;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->l_comm_values p_287->g_41.f2 p_287->g_76 p_287->g_64 p_287->g_71 p_287->g_88.f2 p_287->g_91 p_287->g_41.f1 p_287->g_141 p_287->g_134 p_287->g_169 p_287->g_comm_values p_287->g_4 p_287->g_193 p_287->g_88.f1
 * writes: p_287->g_71 p_287->g_134 p_287->g_41.f2 p_287->g_169 p_287->g_88.f1 p_287->g_64
 */
int8_t  func_68(uint64_t  p_69, struct S1 * p_287)
{ /* block id: 25 */
    int32_t *l_70 = &p_287->g_71;
    int32_t l_75 = 0x45F844B9L;
    uint64_t *l_83 = (void*)0;
    struct S0 *l_87 = &p_287->g_88;
    int16_t *l_89 = (void*)0;
    int32_t l_90 = 0x299C91EDL;
    int32_t **l_239 = &l_70;
    (*l_70) = (p_287->l_comm_values[(safe_mod_func_uint32_t_u_u(p_287->tid, 3))] != 65535UL);
    (*l_239) = func_72((l_75 | ((+(p_287->g_41.f2 >= (((VECTOR(uint64_t, 4))(p_287->g_76.yyyy)).y , ((((&l_75 != (void*)0) && func_77((p_69 ^= 0x82FEEDE604A327E9L), p_287->g_64.s3, ((l_90 |= ((safe_unary_minus_func_int16_t_s((((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))((safe_add_func_int64_t_s_s((((l_87 == ((*l_70) , l_87)) < 1L) , 1L), (*l_70))), (-1L), 1L, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 8))(0L)), 1L)).s0937, ((VECTOR(int32_t, 4))(0x7650D96AL)), ((VECTOR(int32_t, 4))(1L))))).x & p_287->g_88.f2))) , (*l_70))) , (void*)0), (*l_70), p_287->g_91[0], p_287)) > 0xD125L) >= p_287->g_64.s3)))) , 0x285DE3A3L)), l_75, p_287);
    return p_69;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_134 p_287->g_41.f2 p_287->g_169 p_287->g_64 p_287->g_41.f1 p_287->g_comm_values p_287->g_4 p_287->g_193 p_287->g_88.f2 p_287->g_88.f1
 * writes: p_287->g_134 p_287->g_41.f2 p_287->g_169 p_287->g_88.f1 p_287->g_64
 */
int32_t * func_72(uint32_t  p_73, int16_t  p_74, struct S1 * p_287)
{ /* block id: 42 */
    uint64_t l_145 = 1UL;
    uint64_t l_161 = 4UL;
    uint16_t *l_178[7][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 2) l_199 = (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551609UL);
    VECTOR(uint64_t, 16) l_200 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), 18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL);
    int32_t l_204 = 2L;
    int32_t *l_238 = &p_287->g_8;
    int i, j, k;
    for (p_287->g_134 = 0; (p_287->g_134 == 24); p_287->g_134++)
    { /* block id: 45 */
        int32_t *l_144[7][6] = {{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71},{&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71,&p_287->g_71}};
        VECTOR(uint8_t, 16) l_183 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
        int64_t l_185[6];
        VECTOR(uint16_t, 8) l_194 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
        VECTOR(uint16_t, 4) l_195 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3F43L), 0x3F43L);
        VECTOR(uint64_t, 8) l_198 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL), 0UL), 0UL, 18446744073709551612UL, 0UL);
        int i, j;
        for (i = 0; i < 6; i++)
            l_185[i] = 0x34DF6071DF99225BL;
        l_145 &= 0x38ED122DL;
        for (p_287->g_41.f2 = 0; (p_287->g_41.f2 == 12); p_287->g_41.f2 = safe_add_func_int8_t_s_s(p_287->g_41.f2, 3))
        { /* block id: 49 */
            int32_t l_154[9][2][3] = {{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}},{{1L,3L,0L},{1L,3L,0L}}};
            uint16_t *l_166 = (void*)0;
            uint16_t *l_167 = (void*)0;
            uint16_t *l_168 = &p_287->g_169;
            int32_t l_180 = 0L;
            uint64_t *l_184 = (void*)0;
            VECTOR(uint16_t, 8) l_190 = (VECTOR(uint16_t, 8))(0x6902L, (VECTOR(uint16_t, 4))(0x6902L, (VECTOR(uint16_t, 2))(0x6902L, 0x0C1BL), 0x0C1BL), 0x0C1BL, 0x6902L, 0x0C1BL);
            int16_t *l_201 = &p_287->g_88.f1;
            int8_t *l_202 = (void*)0;
            int32_t l_203 = 0x22779326L;
            int i, j, k;
            atomic_and(&p_287->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int8_t_s_s(p_73, ((~p_73) ^ (((safe_div_func_int32_t_s_s(l_154[0][1][1], ((VECTOR(int32_t, 2))(0L, 0x7E3D08FBL)).odd)) || ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(0L, ((l_154[0][1][1] || 0UL) || GROUP_DIVERGE(1, 1)))) || (-10L)) < p_73), p_74)), 3)) , l_161)) != p_287->g_41.f2)))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_287->v_collective += p_287->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_180 ^= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))((safe_sub_func_int8_t_s_s((((((*l_168) ^= 65535UL) ^ (safe_lshift_func_int8_t_s_s(l_154[0][1][1], p_287->g_64.s1))) , 4L) > ((safe_sub_func_uint64_t_u_u(0xEFA5C7AFD339ECABL, p_73)) > ((((safe_rshift_func_int16_t_s_u(p_74, (safe_sub_func_uint8_t_u_u(0x10L, ((p_287->g_64.sc > p_74) & 0UL))))) , l_178[6][1][2]) != (void*)0) || 248UL))), l_154[4][0][1])), p_287->g_41.f1, 0UL, 1UL)).yxzyxyzyzzxywzyz)).s9, p_73));
            if (p_74)
                break;
            l_204 = (((p_287->g_comm_values[p_287->tid] == ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_183.s95)).hi, ((((l_185[3] = p_287->g_41.f2) , (l_203 &= (p_287->g_64.s2 = ((VECTOR(int8_t, 16))(((safe_div_func_int8_t_s_s(l_161, (safe_lshift_func_int8_t_s_s((p_73 | ((l_180 = ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(p_287->g_4[0], ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_190.s3324)).wxywyzwyzxzwwzxx)))).lo))).s56)).yyxxyxxxyxxyyxxy, ((VECTOR(uint16_t, 16))(1UL, (safe_mod_func_uint16_t_u_u(((*l_168) = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_287->g_193.wy)).yyyy)), ((VECTOR(uint16_t, 8))(l_194.s67327775)).s3, 0x95EAL, 0x2016L, 65534UL, 1UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(9UL, ((VECTOR(uint16_t, 2))(l_195.zw)), 0x5EE4L)))), 3UL, 0x91A7L)).s1), (~((*l_201) |= ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))((p_287->g_88.f2 , l_154[0][1][1]), ((VECTOR(uint64_t, 2))(l_198.s14)), 18446744073709551615UL)), l_154[0][0][1], 1UL, 7UL, 1UL)), ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(l_199.yyyx)), ((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 2))(0xE94818A428A5F05DL, 0xEDC6F9226B48D14CL)).yxyxxxyx, ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_200.s581a96ea2a7fc2ab)).hi)), ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))(p_74, ((VECTOR(uint64_t, 4))(0x3F59F7A6D0993D72L)), p_74, 0xC15D356DD27AED0AL, ((VECTOR(uint64_t, 4))(0x9A5B24819A5C94C1L)), 0x7760C5BB3ADCCEB2L, 18446744073709551614UL, ((VECTOR(uint64_t, 2))(0xEF2194803DEE0DAAL)), 0x09A50AA0B69B365FL)).sff, ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).xxxxxyxy, ((VECTOR(uint64_t, 8))(18446744073709551610UL))))), ((VECTOR(uint64_t, 8))(18446744073709551609UL))))).even))).zzxxxyyx, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))))).sa, p_73)) <= 0x45L))))), 0x9280L, 0UL, l_199.x, ((VECTOR(uint16_t, 4))(0xD792L)), ((VECTOR(uint16_t, 4))(65533UL)), ((VECTOR(uint16_t, 2))(0x517CL)), 0x8D60L)), ((VECTOR(uint16_t, 16))(65533UL))))).s39)), 0x77AAL)).odd, ((VECTOR(uint16_t, 2))(1UL))))).yxyyxyxyxyyyxxxy, ((VECTOR(uint16_t, 16))(0x2061L)), ((VECTOR(uint16_t, 16))(8UL))))).sb) < l_190.s0)), 5)))) >= l_190.s5), 5L, 0x3EL, p_73, (-4L), 0x60L, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 4))(0x53L)), 0x3BL, 0x1CL, 1L, 0x16L)).sb))) != 9UL) , (-1L)))) ^ 0x4AL)) , l_161) ^ GROUP_DIVERGE(2, 1));
        }
        for (p_287->g_41.f2 = 10; (p_287->g_41.f2 >= 10); p_287->g_41.f2 = safe_add_func_uint8_t_u_u(p_287->g_41.f2, 6))
        { /* block id: 64 */
            if ((atomic_inc(&p_287->l_atomic_input[80]) == 9))
            { /* block id: 66 */
                VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(0x47BAEC8BL, 0x591DE52BL);
                int16_t l_235[7][1];
                uint32_t l_236[1];
                uint16_t l_237 = 0x4935L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_235[i][j] = 0x122DL;
                }
                for (i = 0; i < 1; i++)
                    l_236[i] = 0xEBB217B4L;
                if (((VECTOR(int32_t, 2))(l_207.xy)).odd)
                { /* block id: 67 */
                    int32_t l_208 = 0x627D5DB6L;
                    int32_t l_209[9][7][4] = {{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}},{{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)},{0x77E2624BL,0x51FFDDDAL,0x3F30F5FAL,(-2L)}}};
                    int32_t l_210 = 7L;
                    int8_t l_211[10] = {0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL};
                    uint8_t l_212[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_212[i] = 0x4EL;
                    ++l_212[4];
                    l_207.x = 0x381F5FF8L;
                }
                else
                { /* block id: 70 */
                    uint32_t l_215 = 1UL;
                    uint32_t l_234 = 0xBC886C32L;
                    ++l_215;
                    for (l_215 = 27; (l_215 == 57); l_215++)
                    { /* block id: 74 */
                        int16_t l_222 = (-1L);
                        int16_t *l_221 = &l_222;
                        int16_t **l_220 = &l_221;
                        int16_t **l_223 = &l_221;
                        int16_t **l_224 = &l_221;
                        int32_t l_226[7][4] = {{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L},{0L,0x15CC3C88L,0L,0x15CC3C88L}};
                        int32_t *l_225 = &l_226[1][2];
                        int32_t *l_227 = &l_226[1][2];
                        int i, j;
                        l_224 = (l_223 = l_220);
                        l_227 = l_225;
                    }
                    for (l_215 = (-6); (l_215 < 45); l_215++)
                    { /* block id: 81 */
                        int16_t l_230 = 0x245FL;
                        int32_t l_232[3];
                        int32_t *l_231 = &l_232[2];
                        int32_t *l_233[2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_232[i] = 0x28365250L;
                        for (i = 0; i < 2; i++)
                            l_233[i] = (void*)0;
                        l_231 = (l_230 , (l_233[0] = l_231));
                    }
                    l_207.x = l_234;
                }
                l_237 = (l_236[0] = l_235[6][0]);
                unsigned int result = 0;
                result += l_207.y;
                result += l_207.x;
                int l_235_i0, l_235_i1;
                for (l_235_i0 = 0; l_235_i0 < 7; l_235_i0++) {
                    for (l_235_i1 = 0; l_235_i1 < 1; l_235_i1++) {
                        result += l_235[l_235_i0][l_235_i1];
                    }
                }
                int l_236_i0;
                for (l_236_i0 = 0; l_236_i0 < 1; l_236_i0++) {
                    result += l_236[l_236_i0];
                }
                result += l_237;
                atomic_add(&p_287->l_special_values[80], result);
            }
            else
            { /* block id: 89 */
                (1 + 1);
            }
            if (p_73)
                break;
        }
    }
    return l_238;
}


/* ------------------------------------------ */
/* 
 * reads : p_287->g_41.f1 p_287->g_71 p_287->g_141 p_287->g_76
 * writes: p_287->g_134 p_287->g_71
 */
uint8_t  func_77(uint64_t  p_78, uint16_t  p_79, int32_t * p_80, int64_t  p_81, int32_t ** p_82, struct S1 * p_287)
{ /* block id: 29 */
    int32_t *l_93 = (void*)0;
    int32_t *l_94 = &p_287->g_71;
    int32_t *l_95 = &p_287->g_71;
    int32_t *l_96 = &p_287->g_71;
    int32_t *l_97 = &p_287->g_71;
    int32_t *l_98 = &p_287->g_71;
    int32_t *l_99 = &p_287->g_71;
    int32_t *l_100 = &p_287->g_71;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = &p_287->g_71;
    int32_t *l_103 = &p_287->g_71;
    int32_t *l_104 = &p_287->g_71;
    int32_t *l_105 = &p_287->g_71;
    int32_t *l_106 = &p_287->g_71;
    int32_t *l_107 = &p_287->g_71;
    int32_t l_108[4] = {(-10L),(-10L),(-10L),(-10L)};
    int32_t *l_109[6] = {(void*)0,&p_287->g_4[2],(void*)0,(void*)0,&p_287->g_4[2],(void*)0};
    VECTOR(int32_t, 4) l_110 = (VECTOR(int32_t, 4))(0x51EAB3F1L, (VECTOR(int32_t, 2))(0x51EAB3F1L, (-1L)), (-1L));
    int32_t l_111 = (-5L);
    uint16_t l_112 = 0UL;
    VECTOR(uint32_t, 2) l_118 = (VECTOR(uint32_t, 2))(0x096333BDL, 0x286ECF40L);
    int64_t l_133 = 1L;
    int i;
    --l_112;
    for (l_112 = 0; (l_112 <= 32); ++l_112)
    { /* block id: 33 */
        uint64_t l_117 = 18446744073709551615UL;
        int32_t l_119 = 0x06B8BA93L;
        int32_t l_120 = 0x528ECC62L;
        int32_t l_121 = 0x33B9DB78L;
        int32_t l_122 = 8L;
        int32_t l_123 = 0x4308E421L;
        int32_t l_124 = (-5L);
        int32_t l_125 = (-1L);
        int32_t l_126[10][1][4] = {{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}},{{(-6L),(-1L),0x4877578BL,0x7EDF9961L}}};
        int64_t l_127 = 0x527156C71AA19CEEL;
        uint64_t l_128 = 0x50ABEB8739EEF94EL;
        VECTOR(uint16_t, 8) l_138 = (VECTOR(uint16_t, 8))(0x4D34L, (VECTOR(uint16_t, 4))(0x4D34L, (VECTOR(uint16_t, 2))(0x4D34L, 0UL), 0UL), 0UL, 0x4D34L, 0UL);
        int i, j, k;
        l_118.x ^= l_117;
        l_128++;
        l_121 &= ((safe_mul_func_uint8_t_u_u((p_287->g_134 = l_133), (9L != (((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(l_138.s52)).even)), 10)) , l_117) >= (((p_287->g_41.f1 >= (safe_mod_func_int8_t_s_s(p_287->g_71, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(p_287->g_141.s2373)), ((VECTOR(int8_t, 2))(1L, 6L)).yxyx))).x))) , (&l_120 != &l_108[2])) , GROUP_DIVERGE(2, 1)))))) > 0x977AL);
        return p_287->g_76.x;
    }
    (*l_104) |= (-8L);
    return (*l_96);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S1 c_288;
    struct S1* p_287 = &c_288;
    struct S1 c_289 = {
        {(-1L),0x50BA1BF2L,(-1L),(-1L),0x50BA1BF2L,(-1L),(-1L)}, // p_287->g_2
        0x49DFCF09L, // p_287->g_3
        {0x5FA5FEF9L,0x5FA5FEF9L,0x5FA5FEF9L,0x5FA5FEF9L,0x5FA5FEF9L,0x5FA5FEF9L,0x5FA5FEF9L}, // p_287->g_4
        1L, // p_287->g_8
        &p_287->g_8, // p_287->g_7
        {0xEB71DEE155039576L,3L,0xEF091AFFL}, // p_287->g_41
        &p_287->g_41, // p_287->g_43
        (VECTOR(int64_t, 2))((-1L), 0x4C2ED117543214E4L), // p_287->g_53
        (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x46L), 0x46L), 0x46L, (-7L), 0x46L, (VECTOR(int8_t, 2))((-7L), 0x46L), (VECTOR(int8_t, 2))((-7L), 0x46L), (-7L), 0x46L, (-7L), 0x46L), // p_287->g_64
        0x05E82EF2L, // p_287->g_71
        (VECTOR(uint64_t, 2))(0x2B79F9BF173AA332L, 0xBD8298C9807A6E46L), // p_287->g_76
        {0x77E5FFF9132EE097L,-3L,4294967291UL}, // p_287->g_88
        {&p_287->g_4[2],&p_287->g_4[2]}, // p_287->g_92
        {&p_287->g_92[1],&p_287->g_92[1],&p_287->g_92[1],&p_287->g_92[1],&p_287->g_92[1]}, // p_287->g_91
        0x5D925F0FL, // p_287->g_134
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x24L), 0x24L), 0x24L, 1L, 0x24L), // p_287->g_141
        0x4827L, // p_287->g_169
        (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65535UL), 65535UL), 65535UL, 7UL, 65535UL), // p_287->g_179
        (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0xB522L), 0xB522L), // p_287->g_193
        {1UL,1UL,1UL,1UL}, // p_287->g_249
        1L, // p_287->g_255
        (-1L), // p_287->g_257
        {&p_287->g_8,&p_287->g_4[2],&p_287->g_8,&p_287->g_8,&p_287->g_4[2],&p_287->g_8}, // p_287->g_265
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_287->g_267
        &p_287->g_7, // p_287->g_270
        0, // p_287->v_collective
        sequence_input[get_global_id(0)], // p_287->global_0_offset
        sequence_input[get_global_id(1)], // p_287->global_1_offset
        sequence_input[get_global_id(2)], // p_287->global_2_offset
        sequence_input[get_local_id(0)], // p_287->local_0_offset
        sequence_input[get_local_id(1)], // p_287->local_1_offset
        sequence_input[get_local_id(2)], // p_287->local_2_offset
        sequence_input[get_group_id(0)], // p_287->group_0_offset
        sequence_input[get_group_id(1)], // p_287->group_1_offset
        sequence_input[get_group_id(2)], // p_287->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_287->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_288 = c_289;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_287);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_287->g_2[i], "p_287->g_2[i]", print_hash_value);

    }
    transparent_crc(p_287->g_3, "p_287->g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_287->g_4[i], "p_287->g_4[i]", print_hash_value);

    }
    transparent_crc(p_287->g_8, "p_287->g_8", print_hash_value);
    transparent_crc(p_287->g_41.f0, "p_287->g_41.f0", print_hash_value);
    transparent_crc(p_287->g_41.f1, "p_287->g_41.f1", print_hash_value);
    transparent_crc(p_287->g_41.f2, "p_287->g_41.f2", print_hash_value);
    transparent_crc(p_287->g_53.x, "p_287->g_53.x", print_hash_value);
    transparent_crc(p_287->g_53.y, "p_287->g_53.y", print_hash_value);
    transparent_crc(p_287->g_64.s0, "p_287->g_64.s0", print_hash_value);
    transparent_crc(p_287->g_64.s1, "p_287->g_64.s1", print_hash_value);
    transparent_crc(p_287->g_64.s2, "p_287->g_64.s2", print_hash_value);
    transparent_crc(p_287->g_64.s3, "p_287->g_64.s3", print_hash_value);
    transparent_crc(p_287->g_64.s4, "p_287->g_64.s4", print_hash_value);
    transparent_crc(p_287->g_64.s5, "p_287->g_64.s5", print_hash_value);
    transparent_crc(p_287->g_64.s6, "p_287->g_64.s6", print_hash_value);
    transparent_crc(p_287->g_64.s7, "p_287->g_64.s7", print_hash_value);
    transparent_crc(p_287->g_64.s8, "p_287->g_64.s8", print_hash_value);
    transparent_crc(p_287->g_64.s9, "p_287->g_64.s9", print_hash_value);
    transparent_crc(p_287->g_64.sa, "p_287->g_64.sa", print_hash_value);
    transparent_crc(p_287->g_64.sb, "p_287->g_64.sb", print_hash_value);
    transparent_crc(p_287->g_64.sc, "p_287->g_64.sc", print_hash_value);
    transparent_crc(p_287->g_64.sd, "p_287->g_64.sd", print_hash_value);
    transparent_crc(p_287->g_64.se, "p_287->g_64.se", print_hash_value);
    transparent_crc(p_287->g_64.sf, "p_287->g_64.sf", print_hash_value);
    transparent_crc(p_287->g_71, "p_287->g_71", print_hash_value);
    transparent_crc(p_287->g_76.x, "p_287->g_76.x", print_hash_value);
    transparent_crc(p_287->g_76.y, "p_287->g_76.y", print_hash_value);
    transparent_crc(p_287->g_88.f0, "p_287->g_88.f0", print_hash_value);
    transparent_crc(p_287->g_88.f1, "p_287->g_88.f1", print_hash_value);
    transparent_crc(p_287->g_88.f2, "p_287->g_88.f2", print_hash_value);
    transparent_crc(p_287->g_134, "p_287->g_134", print_hash_value);
    transparent_crc(p_287->g_141.s0, "p_287->g_141.s0", print_hash_value);
    transparent_crc(p_287->g_141.s1, "p_287->g_141.s1", print_hash_value);
    transparent_crc(p_287->g_141.s2, "p_287->g_141.s2", print_hash_value);
    transparent_crc(p_287->g_141.s3, "p_287->g_141.s3", print_hash_value);
    transparent_crc(p_287->g_141.s4, "p_287->g_141.s4", print_hash_value);
    transparent_crc(p_287->g_141.s5, "p_287->g_141.s5", print_hash_value);
    transparent_crc(p_287->g_141.s6, "p_287->g_141.s6", print_hash_value);
    transparent_crc(p_287->g_141.s7, "p_287->g_141.s7", print_hash_value);
    transparent_crc(p_287->g_169, "p_287->g_169", print_hash_value);
    transparent_crc(p_287->g_179.s0, "p_287->g_179.s0", print_hash_value);
    transparent_crc(p_287->g_179.s1, "p_287->g_179.s1", print_hash_value);
    transparent_crc(p_287->g_179.s2, "p_287->g_179.s2", print_hash_value);
    transparent_crc(p_287->g_179.s3, "p_287->g_179.s3", print_hash_value);
    transparent_crc(p_287->g_179.s4, "p_287->g_179.s4", print_hash_value);
    transparent_crc(p_287->g_179.s5, "p_287->g_179.s5", print_hash_value);
    transparent_crc(p_287->g_179.s6, "p_287->g_179.s6", print_hash_value);
    transparent_crc(p_287->g_179.s7, "p_287->g_179.s7", print_hash_value);
    transparent_crc(p_287->g_193.x, "p_287->g_193.x", print_hash_value);
    transparent_crc(p_287->g_193.y, "p_287->g_193.y", print_hash_value);
    transparent_crc(p_287->g_193.z, "p_287->g_193.z", print_hash_value);
    transparent_crc(p_287->g_193.w, "p_287->g_193.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_287->g_249[i], "p_287->g_249[i]", print_hash_value);

    }
    transparent_crc(p_287->g_255, "p_287->g_255", print_hash_value);
    transparent_crc(p_287->g_257, "p_287->g_257", print_hash_value);
    transparent_crc(p_287->v_collective, "p_287->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 83; i++)
            transparent_crc(p_287->l_special_values[i], "p_287->l_special_values[i]", print_hash_value);
    transparent_crc(p_287->l_comm_values[get_linear_local_id()], "p_287->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_287->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_287->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
