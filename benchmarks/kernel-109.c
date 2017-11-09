// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 53,67,1 -l 53,1,1
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

__constant uint32_t permutations[10][53] = {
{38,44,11,16,18,2,39,17,32,49,40,28,8,36,19,12,3,27,4,33,15,10,6,48,0,22,5,43,24,9,7,14,13,52,50,21,51,20,45,37,46,34,25,35,47,29,31,41,23,1,42,30,26}, // permutation 0
{3,41,43,52,50,49,24,44,42,38,4,46,30,34,7,17,33,10,23,22,48,45,18,26,5,35,32,15,28,25,16,20,27,51,36,14,31,9,2,6,40,39,8,21,19,47,13,12,0,11,37,29,1}, // permutation 1
{1,3,25,0,44,12,2,10,32,48,38,23,11,42,49,29,16,37,39,15,30,52,43,20,17,5,6,13,50,46,34,35,47,36,18,24,27,28,26,4,22,21,14,19,9,51,40,8,33,45,41,7,31}, // permutation 2
{19,3,39,40,33,34,1,20,17,49,35,51,7,27,46,43,32,21,24,28,31,0,18,29,10,38,15,14,48,6,16,42,23,2,12,5,8,36,47,37,41,26,50,4,44,13,25,11,30,45,22,52,9}, // permutation 3
{48,3,0,34,23,50,13,38,46,18,27,31,19,20,33,49,17,42,11,43,39,6,25,16,30,40,12,4,36,1,10,35,32,52,7,15,2,5,37,51,22,28,9,24,8,26,41,21,45,14,44,29,47}, // permutation 4
{12,31,17,47,16,52,9,3,26,44,40,13,1,34,18,48,24,10,45,49,6,5,29,19,38,8,33,25,30,51,35,36,7,42,50,0,4,37,22,21,20,11,46,23,39,32,27,43,14,15,28,2,41}, // permutation 5
{51,26,23,20,14,32,16,9,10,4,37,47,39,28,19,11,17,44,25,31,7,38,6,24,12,49,2,29,3,52,34,22,13,15,5,30,50,42,48,0,33,1,41,18,43,21,8,45,40,46,36,27,35}, // permutation 6
{12,6,1,14,20,18,3,29,47,36,17,31,44,28,39,35,38,51,0,40,24,48,34,23,4,27,30,25,50,46,9,13,8,41,15,33,5,37,52,10,7,42,45,16,22,2,19,32,11,43,26,49,21}, // permutation 7
{5,9,40,29,36,42,50,41,33,14,21,47,17,24,23,39,26,10,3,27,35,46,4,8,20,0,6,13,28,49,31,44,19,52,30,32,51,34,15,43,16,1,11,12,22,45,18,7,38,2,25,48,37}, // permutation 8
{39,3,32,52,31,28,27,25,45,5,20,33,1,49,36,34,23,10,7,14,50,26,19,24,42,4,15,9,43,35,29,16,2,41,6,37,18,38,47,13,22,46,17,8,0,51,21,48,40,30,12,11,44} // permutation 9
};

// Seed: 1527833340

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   int64_t  f1;
   uint64_t  f2;
   volatile uint64_t  f3;
   int32_t  f4;
   int8_t  f5;
   uint32_t  f6;
};

struct S1 {
   uint32_t  f0;
};

struct S2 {
   volatile int64_t  f0;
   int8_t  f1;
   volatile int64_t  f2;
   uint16_t  f3;
   volatile uint8_t  f4;
   volatile uint64_t  f5;
};

union U3 {
   int32_t  f0;
};

struct S4 {
    uint16_t g_11;
    uint8_t g_20;
    struct S2 g_32;
    int32_t g_53[1][7];
    int32_t *g_52;
    union U3 g_58;
    uint64_t g_62;
    uint64_t *** volatile g_65;
    uint64_t *** volatile g_66;
    struct S2 g_94;
    struct S1 g_99;
    uint32_t g_101;
    uint16_t *g_103;
    volatile VECTOR(uint16_t, 8) g_125;
    int32_t g_139;
    uint8_t *g_147;
    uint64_t g_157;
    struct S2 g_181[4][2];
    uint16_t *** volatile g_184;
    struct S2 *g_228;
    struct S2 ** volatile g_227;
    struct S1 g_231[6];
    volatile struct S0 g_236;
    int32_t *g_246;
    volatile VECTOR(int32_t, 16) g_253;
    VECTOR(int32_t, 16) g_254;
    struct S0 g_280;
    VECTOR(uint8_t, 4) g_289;
    uint8_t *g_323;
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
uint64_t  func_1(struct S4 * p_332);
int32_t * func_2(int32_t * p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, struct S4 * p_332);
int64_t  func_7(uint16_t  p_8, struct S4 * p_332);
int32_t * func_14(int32_t * p_15, union U3  p_16, int32_t * p_17, struct S4 * p_332);
int32_t * func_21(uint16_t * p_22, uint16_t * p_23, int32_t * p_24, int32_t  p_25, uint64_t  p_26, struct S4 * p_332);
uint16_t * func_27(uint32_t  p_28, int32_t  p_29, struct S4 * p_332);
struct S2  func_33(uint64_t  p_34, uint16_t * p_35, uint16_t * p_36, uint32_t  p_37, uint16_t * p_38, struct S4 * p_332);
uint64_t  func_39(uint32_t  p_40, int32_t  p_41, int32_t * p_42, int32_t * p_43, struct S4 * p_332);
uint32_t  func_44(int16_t  p_45, uint8_t * p_46, uint8_t * p_47, int32_t  p_48, uint16_t * p_49, struct S4 * p_332);
int8_t  func_54(union U3  p_55, uint64_t  p_56, int32_t * p_57, struct S4 * p_332);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_332->g_11 p_332->g_32 p_332->g_52 p_332->g_103 p_332->g_53 p_332->g_58.f0 p_332->g_58 p_332->g_101 p_332->g_139 p_332->g_94.f3 p_332->g_99 p_332->g_comm_values p_332->g_181 p_332->l_comm_values p_332->g_94.f0 p_332->g_94.f1 p_332->g_227 p_332->g_236 p_332->g_66 p_332->g_231.f0 p_332->g_246 p_332->g_253 p_332->g_254 p_332->g_280.f3 p_332->g_289 p_332->g_280.f1 p_332->g_280.f6 p_332->g_62 p_332->g_231
 * writes: p_332->g_11 p_332->g_20 p_332->g_101 p_332->g_139 p_332->g_99 p_332->g_147 p_332->g_53 p_332->g_32.f3 p_332->g_157 p_332->g_94.f3 p_332->g_52 p_332->g_228 p_332->g_231 p_332->g_62 p_332->g_323 p_332->g_280.f5
 */
uint64_t  func_1(struct S4 * p_332)
{ /* block id: 4 */
    uint16_t *l_9 = (void*)0;
    uint16_t *l_10[1];
    int32_t l_18 = 0x3E713E19L;
    uint8_t *l_19 = &p_332->g_20;
    uint64_t *l_61 = &p_332->g_62;
    int32_t l_102 = 0L;
    uint64_t *l_156 = &p_332->g_157;
    uint8_t l_182 = 0UL;
    int32_t *l_247 = &l_18;
    int32_t **l_248 = &p_332->g_52;
    VECTOR(int32_t, 2) l_252 = (VECTOR(int32_t, 2))(3L, 0x2A430478L);
    struct S0 *l_279 = &p_332->g_280;
    int16_t l_282 = 0x715CL;
    uint32_t l_283 = 0x3AC3D3FBL;
    VECTOR(int16_t, 2) l_292 = (VECTOR(int16_t, 2))(0L, 6L);
    int8_t l_299 = 0x1CL;
    struct S2 **l_306[1];
    VECTOR(int64_t, 2) l_317 = (VECTOR(int64_t, 2))(0x07668F40139E502FL, 0x656E355F6F7167E3L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_10[i] = &p_332->g_11;
    for (i = 0; i < 1; i++)
        l_306[i] = &p_332->g_228;
    (*l_248) = func_2((func_7((p_332->g_11++), p_332) , (void*)0), func_14((((*l_19) = l_18) , func_21(func_27((safe_lshift_func_uint8_t_u_s((p_332->g_32 , (func_33(((*l_156) = func_39(func_44((safe_div_func_int8_t_s_s(((void*)0 != p_332->g_52), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(func_54(p_332->g_58, ((*l_61) &= ((safe_div_func_uint16_t_u_u(l_18, p_332->g_comm_values[p_332->tid])) ^ p_332->g_32.f5)), &p_332->g_53[0][2], p_332), 0x67L, p_332->g_101, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x2DL)), 1L)).s1145247104240247)).s7275, ((VECTOR(int8_t, 4))(0x21L))))).z)), &p_332->g_20, &p_332->g_20, l_102, p_332->g_103, p_332), p_332->g_58.f0, p_332->g_52, p_332->g_52, p_332)), l_10[0], p_332->g_103, p_332->g_comm_values[p_332->tid], p_332->g_103, p_332) , l_18)), l_182)), p_332->g_comm_values[p_332->tid], p_332), l_10[0], p_332->g_52, p_332->l_comm_values[(safe_mod_func_uint32_t_u_u(p_332->tid, 53))], l_18, p_332)), p_332->g_58, &l_102, p_332), p_332->g_246, l_247, p_332);
    (*l_247) |= (*p_332->g_52);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_332->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 53)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_252.yyxy)).ywzwwyxyzyxwwxzy)))).sc)) && ((((VECTOR(int32_t, 2))(1L, 0x2FFBBDEFL)).even >= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_332->g_253.sa1e54621a295a454)).se624)), (*p_332->g_52), ((VECTOR(int32_t, 2))(0x2414C672L, 5L)), 0L)), ((VECTOR(int32_t, 16))(p_332->g_254.sd8690e24adb129ca)).lo))).s5) , (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((**l_248), 14)) < (+0x0DA8L)), (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(1UL, 1UL)), 0xA53AL)).yxyzywzzwxxyywxz)).even)).s1243224207703275)).sd != (((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(5L, 15)) != (((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((l_279 == ((&p_332->g_139 != &p_332->g_139) , l_279)), (safe_unary_minus_func_uint8_t_u((*l_247))))) ^ l_282) || 0x3E01L), 3)) | (*l_247)) != l_283)), (*l_247))), 1UL)), p_332->g_181[3][1].f2)), 65527UL)) , p_332->g_94.f1) , (*l_247)) ^ (**l_248)) ^ (-3L))), (*p_332->g_52))), (*l_247))))), 6)))), (*p_332->g_103))), 10))][(safe_mod_func_uint32_t_u_u(p_332->tid, 53))]));
    if ((safe_div_func_int16_t_s_s(p_332->g_280.f3, (safe_unary_minus_func_int16_t_s((FAKE_DIVERGE(p_332->group_2_offset, get_group_id(2), 10) , (!(p_332->g_32.f1 , (safe_mod_func_int32_t_s_s(((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(65535UL, 65532UL)).xyxxxxxxxxyyyyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((*l_247), 65535UL, (((252UL && ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_332->g_289.yz)), 248UL, (safe_add_func_uint32_t_u_u((*l_247), ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_292.yxyxyyxx)), 0L, 0x3ABDL, (((((**l_248) <= 1L) == (*p_332->g_52)) >= (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(0x4DEF45496BD690EFL, 0x59A5322FB90FAADBL)).yxyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x20C809BEB0EB3C9DL, 1L, 0x04FBF150C96593BAL, 0L)))).zzxywywy)).lo))).x || (p_332->g_62 = ((safe_div_func_uint32_t_u_u((*l_247), (**l_248))) | l_299))) , (**l_248)) == p_332->g_280.f1) != (**l_248)) > (*p_332->g_103)), (*p_332->g_52))), p_332->g_181[3][1].f3))) , (**l_248)), 0x6628L, ((VECTOR(int16_t, 4))(0x47C0L)))).s31, (int16_t)0L))).xxxx)).x >= 1L) || (*l_247)))), 0x46L, 255UL, 0UL, 0x40L)), ((VECTOR(uint8_t, 8))(7UL))))).s5) && (**l_248)) >= p_332->g_280.f6), 65527UL, 0x2690L, ((VECTOR(uint16_t, 2))(0UL)), (*p_332->g_103), ((VECTOR(uint16_t, 4))(0xF973L)), 0xA341L, ((VECTOR(uint16_t, 2))(0x06E9L)), 65534UL)).sa, ((VECTOR(uint16_t, 8))(0xCA80L)), (*p_332->g_103), 0x6511L, ((VECTOR(uint16_t, 4))(65526UL)), 0UL))))).sc0)).xyxxxxxyyyyyyxyx, ((VECTOR(uint16_t, 16))(3UL)), ((VECTOR(uint16_t, 16))(0xB6C7L))))).s3c)), 4UL, 65528UL)).y || FAKE_DIVERGE(p_332->group_0_offset, get_group_id(0), 10)) && (*l_247)), (-1L)))))))))))
    { /* block id: 93 */
        (*l_247) ^= (*p_332->g_52);
    }
    else
    { /* block id: 95 */
        int16_t l_301 = (-2L);
        VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))(0x657491BDL, (VECTOR(int32_t, 4))(0x657491BDL, (VECTOR(int32_t, 2))(0x657491BDL, 1L), 1L), 1L, 0x657491BDL, 1L, (VECTOR(int32_t, 2))(0x657491BDL, 1L), (VECTOR(int32_t, 2))(0x657491BDL, 1L), 0x657491BDL, 1L, 0x657491BDL, 1L);
        uint8_t **l_319 = (void*)0;
        uint8_t **l_320 = &p_332->g_147;
        uint8_t **l_321 = &p_332->g_147;
        uint8_t **l_322[7];
        int8_t l_328 = 0x59L;
        int8_t *l_329 = &p_332->g_280.f5;
        uint32_t l_330 = 0xC9763C3BL;
        uint32_t *l_331[5][10] = {{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_322[i] = &l_19;
        (*l_247) = (((safe_unary_minus_func_uint64_t_u(l_301)) , &p_332->g_231[1]) != &p_332->g_231[4]);
        (*l_248) = ((p_332->g_101 = ((((VECTOR(uint8_t, 16))(0xF8L, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(0L, 0x6CL)).yyxxyyxxxyxxyyxy, (int8_t)(safe_lshift_func_uint16_t_u_s((l_306[0] == (void*)0), 8))))).sd, (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((**l_248), 4)), (((*l_61) = ((safe_div_func_uint8_t_u_u((p_332->g_20 = ((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_329) = (((p_332->g_62 | ((VECTOR(int64_t, 4))(l_317.yyyy)).x) >= (0x6387L && p_332->g_181[3][1].f3)) , (((VECTOR(int32_t, 16))(l_318.sd036475ef0fbbd52)).s3 , ((p_332->g_323 = &p_332->g_20) != (((*l_247) , (((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((~(p_332->g_231[1] , 0x2C4BL)), (*p_332->g_103))), l_328)) >= 0x2D7AB4BDL) && l_301)) , &p_332->g_20))))), l_318.s9)), (**l_248))) | p_332->g_58.f0)), p_332->g_11)) , p_332->g_101)) >= 0x8C1E5F623F246A19L))))), l_318.s8, l_330, 0xD6L, 248UL, 0xBFL, ((VECTOR(uint8_t, 8))(1UL)), 0x1EL)).sb ^ l_318.s4) >= p_332->g_254.s3)) , l_331[1][2]);
    }
    return p_332->g_32.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_2(int32_t * p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, struct S4 * p_332)
{ /* block id: 84 */
    atomic_xor(&p_332->l_atomic_reduction[0], (*p_6));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_332->v_collective += p_332->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return &p_332->g_139;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_7(uint16_t  p_8, struct S4 * p_332)
{ /* block id: 6 */
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_236 p_332->g_52 p_332->g_53 p_332->g_66 p_332->g_231.f0 p_332->g_103 p_332->g_94.f3
 * writes: p_332->g_53 p_332->g_94.f3
 */
int32_t * func_14(int32_t * p_15, union U3  p_16, int32_t * p_17, struct S4 * p_332)
{ /* block id: 78 */
    uint16_t l_233[4][9][2] = {{{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L}},{{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L}},{{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L}},{{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L},{0x97BFL,0x39E8L}}};
    int64_t *l_243 = (void*)0;
    int64_t *l_244[1];
    int32_t l_245 = 0x4AE07E1CL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_244[i] = (void*)0;
    (*p_15) = l_233[0][8][1];
    (*p_17) &= (((*p_332->g_103) = (safe_mod_func_int16_t_s_s(((l_233[3][2][0] > (p_332->g_236 , ((*p_332->g_52) , (safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((-7L), (p_16.f0 || (((l_245 = (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_332->global_1_offset, get_global_id(1), 10), ((!((void*)0 == p_332->g_66)) | (~((void*)0 == &p_332->g_20)))))) , FAKE_DIVERGE(p_332->group_2_offset, get_group_id(2), 10)) || FAKE_DIVERGE(p_332->local_0_offset, get_local_id(0), 10))))) | p_332->g_231[1].f0) , p_332->g_53[0][2]), l_233[3][5][1]))))) == 4294967294UL), (*p_332->g_103)))) < p_16.f0);
    return &p_332->g_139;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_94.f3 p_332->g_94.f0 p_332->g_94.f1 p_332->g_52 p_332->g_227 p_332->g_53
 * writes: p_332->g_94.f3 p_332->g_99 p_332->g_53 p_332->g_52 p_332->g_228 p_332->g_231
 */
int32_t * func_21(uint16_t * p_22, uint16_t * p_23, int32_t * p_24, int32_t  p_25, uint64_t  p_26, struct S4 * p_332)
{ /* block id: 47 */
    int16_t l_190 = (-4L);
    struct S1 l_229 = {0UL};
    struct S1 *l_230[9][2] = {{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229},{(void*)0,&l_229}};
    struct S1 l_232 = {2UL};
    int i, j;
    for (p_332->g_94.f3 = (-10); (p_332->g_94.f3 <= 29); p_332->g_94.f3++)
    { /* block id: 50 */
        struct S1 l_224 = {0xDAF65EDAL};
        if ((safe_unary_minus_func_uint64_t_u(l_190)))
        { /* block id: 51 */
            struct S1 *l_225 = &p_332->g_99;
            if ((atomic_inc(&p_332->l_atomic_input[87]) == 1))
            { /* block id: 53 */
                struct S0 l_192 = {2UL,0x27FA77813692EB2FL,18446744073709551611UL,0UL,0L,0x7EL,4294967287UL};/* VOLATILE GLOBAL l_192 */
                struct S0 *l_191 = &l_192;
                struct S0 *l_193 = (void*)0;
                struct S0 *l_194 = &l_192;
                uint8_t l_195 = 255UL;
                struct S1 l_196[7][10] = {{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}},{{0xE14738CBL},{0xEA576658L},{0x99DF8BDBL},{0x46385D5EL},{1UL},{0xE14738CBL},{0x46385D5EL},{0x738FB737L},{0x46385D5EL},{0xE14738CBL}}};
                struct S1 l_197 = {0xD440B176L};
                uint8_t l_198 = 0UL;
                uint32_t l_201 = 4294967289UL;
                int64_t l_202 = 0x58CE94D726B39FBAL;
                VECTOR(uint64_t, 2) l_203 = (VECTOR(uint64_t, 2))(0UL, 0x4CF9F92A51A42DC0L);
                VECTOR(uint64_t, 8) l_204 = (VECTOR(uint64_t, 8))(0x13D7F1B8E7C1B229L, (VECTOR(uint64_t, 4))(0x13D7F1B8E7C1B229L, (VECTOR(uint64_t, 2))(0x13D7F1B8E7C1B229L, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 0x13D7F1B8E7C1B229L, 18446744073709551613UL);
                VECTOR(int32_t, 8) l_205 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x05A86073L), 0x05A86073L), 0x05A86073L, 0L, 0x05A86073L);
                VECTOR(uint32_t, 4) l_206 = (VECTOR(uint32_t, 4))(0x5F9CC065L, (VECTOR(uint32_t, 2))(0x5F9CC065L, 0x020FB83DL), 0x020FB83DL);
                uint64_t l_207 = 18446744073709551612UL;
                uint32_t l_208 = 0x6AB8CA2FL;
                VECTOR(uint16_t, 2) l_209 = (VECTOR(uint16_t, 2))(0x3E31L, 0UL);
                int8_t l_210 = 0L;
                uint32_t l_211 = 4294967295UL;
                VECTOR(uint64_t, 8) l_212 = (VECTOR(uint64_t, 8))(0x6855F1F0AA9D284AL, (VECTOR(uint64_t, 4))(0x6855F1F0AA9D284AL, (VECTOR(uint64_t, 2))(0x6855F1F0AA9D284AL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 0x6855F1F0AA9D284AL, 18446744073709551612UL);
                int32_t l_213 = 1L;
                union U3 l_215 = {0L};
                union U3 *l_214 = &l_215;
                int16_t l_216[2][7] = {{(-3L),0x34C9L,(-3L),(-3L),0x34C9L,(-3L),(-3L)},{(-3L),0x34C9L,(-3L),(-3L),0x34C9L,(-3L),(-3L)}};
                struct S0 l_217[3][9] = {{{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL}},{{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL}},{{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL},{0x4E4E6E4FL,0x6FEA1CC2CD02EC44L,0xEF4640E203554408L,0xD0FFDCB38D5C55EFL,0x200B1F0BL,0L,0UL}}};
                struct S0 l_218 = {4294967289UL,0x5E46916117551B62L,18446744073709551615UL,0xEE41A932F1ED42EEL,-1L,-1L,0x462603D8L};/* VOLATILE GLOBAL l_218 */
                int32_t l_219 = 0x372AB68AL;
                int32_t l_220 = 0x300395D2L;
                uint32_t l_221 = 4294967295UL;
                int i, j;
                l_194 = (l_193 = l_191);
                l_214 = ((((l_196[6][4] = (l_195 , (l_197 = l_196[1][1]))) , (++l_198)) , ((l_201 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0x62EBD1B2AB06402AL, 18446744073709551613UL, 0x2BB022EA64F363A3L, 0UL)), 0x56FE32209B306FA7L, (((l_202 , 1UL) , 9UL) , ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x8F9B7D9B12FEB1DDL, 7UL)), ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 16))(l_203.yyxxyyyyxxyyxxyx)), (uint64_t)((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_204.s2026261777417520)).s0f)).xyxy)).x))).sb3bf, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(0x7007509DA90C6BC6L, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(l_205.s2224014071137515)).s0d96, ((VECTOR(uint32_t, 4))(0x0C9770E6L, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(l_206.zwxwzxxz)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(l_207, l_208, 0x58E6L, (l_210 |= ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(l_209.xyxy)).lo, ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 2))(0xA8D9L)), FAKE_DIVERGE(p_332->global_0_offset, get_global_id(0), 10), ((VECTOR(uint16_t, 4))(0xC6CDL)))).s12))).even), 65534UL, 65535UL, 0xBB7EL, 0UL)).s75, ((VECTOR(uint16_t, 2))(65531UL))))).xyyx)).xwwyyzww))), ((VECTOR(uint32_t, 8))(7UL))))).s5342045316534212)).s78, ((VECTOR(uint32_t, 2))(0x64A2B4ADL))))), ((VECTOR(uint32_t, 2))(4294967295UL))))), 1UL))))), ((VECTOR(int64_t, 8))(0L)), ((VECTOR(int64_t, 2))(1L)), 5L)), ((VECTOR(int64_t, 16))(3L)), ((VECTOR(int64_t, 16))((-4L)))))).lo)).s63))), 1UL, 0UL)), ((VECTOR(uint64_t, 4))(3UL))))).hi, ((VECTOR(uint64_t, 2))(18446744073709551612UL))))), ((VECTOR(uint64_t, 2))(0xE6AA63A2ED1A2A8AL)), ((VECTOR(uint64_t, 2))(1UL))))).odd), 0x73E5A52247C15345L, 0UL, l_211, l_212.s1, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 1UL, 18446744073709551610UL, 0xECF1C8C5D99A76D2L, 5UL)), ((VECTOR(uint64_t, 16))(18446744073709551609UL))))).s16bc)).z) , l_213)) , (void*)0);
                l_218 = (l_216[1][6] , l_217[2][0]);
                --l_221;
                unsigned int result = 0;
                result += l_192.f0;
                result += l_192.f1;
                result += l_192.f2;
                result += l_192.f3;
                result += l_192.f4;
                result += l_192.f5;
                result += l_192.f6;
                result += l_195;
                int l_196_i0, l_196_i1;
                for (l_196_i0 = 0; l_196_i0 < 7; l_196_i0++) {
                    for (l_196_i1 = 0; l_196_i1 < 10; l_196_i1++) {
                        result += l_196[l_196_i0][l_196_i1].f0;
                    }
                }
                result += l_197.f0;
                result += l_198;
                result += l_201;
                result += l_202;
                result += l_203.y;
                result += l_203.x;
                result += l_204.s7;
                result += l_204.s6;
                result += l_204.s5;
                result += l_204.s4;
                result += l_204.s3;
                result += l_204.s2;
                result += l_204.s1;
                result += l_204.s0;
                result += l_205.s7;
                result += l_205.s6;
                result += l_205.s5;
                result += l_205.s4;
                result += l_205.s3;
                result += l_205.s2;
                result += l_205.s1;
                result += l_205.s0;
                result += l_206.w;
                result += l_206.z;
                result += l_206.y;
                result += l_206.x;
                result += l_207;
                result += l_208;
                result += l_209.y;
                result += l_209.x;
                result += l_210;
                result += l_211;
                result += l_212.s7;
                result += l_212.s6;
                result += l_212.s5;
                result += l_212.s4;
                result += l_212.s3;
                result += l_212.s2;
                result += l_212.s1;
                result += l_212.s0;
                result += l_213;
                result += l_215.f0;
                int l_216_i0, l_216_i1;
                for (l_216_i0 = 0; l_216_i0 < 2; l_216_i0++) {
                    for (l_216_i1 = 0; l_216_i1 < 7; l_216_i1++) {
                        result += l_216[l_216_i0][l_216_i1];
                    }
                }
                int l_217_i0, l_217_i1;
                for (l_217_i0 = 0; l_217_i0 < 3; l_217_i0++) {
                    for (l_217_i1 = 0; l_217_i1 < 9; l_217_i1++) {
                        result += l_217[l_217_i0][l_217_i1].f0;
                        result += l_217[l_217_i0][l_217_i1].f1;
                        result += l_217[l_217_i0][l_217_i1].f2;
                        result += l_217[l_217_i0][l_217_i1].f3;
                        result += l_217[l_217_i0][l_217_i1].f4;
                        result += l_217[l_217_i0][l_217_i1].f5;
                        result += l_217[l_217_i0][l_217_i1].f6;
                    }
                }
                result += l_218.f0;
                result += l_218.f1;
                result += l_218.f2;
                result += l_218.f3;
                result += l_218.f4;
                result += l_218.f5;
                result += l_218.f6;
                result += l_219;
                result += l_220;
                result += l_221;
                atomic_add(&p_332->l_special_values[87], result);
            }
            else
            { /* block id: 63 */
                (1 + 1);
            }
            (*l_225) = l_224;
            (*p_332->g_52) = (p_332->g_94.f0 >= p_332->g_94.f1);
        }
        else
        { /* block id: 68 */
            struct S2 *l_226 = &p_332->g_181[3][1];
            p_332->g_52 = p_24;
            (*p_332->g_227) = l_226;
        }
    }
    (*p_332->g_52) &= 0x7EF05E6BL;
    p_332->g_231[1] = (p_332->g_99 = l_229);
    p_332->g_231[5] = l_232;
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_103
 * writes:
 */
uint16_t * func_27(uint32_t  p_28, int32_t  p_29, struct S4 * p_332)
{ /* block id: 44 */
    uint16_t ***l_183 = (void*)0;
    uint16_t **l_186[1][7][7] = {{{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103},{&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103,&p_332->g_103}}};
    uint16_t ***l_185 = &l_186[0][2][5];
    int i, j, k;
    (*l_185) = &p_332->g_103;
    return (**l_185);
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_181
 * writes:
 */
struct S2  func_33(uint64_t  p_34, uint16_t * p_35, uint16_t * p_36, uint32_t  p_37, uint16_t * p_38, struct S4 * p_332)
{ /* block id: 34 */
    int32_t *l_164 = &p_332->g_53[0][2];
    int32_t l_165 = 0x58590BC5L;
    int32_t *l_166[8];
    uint16_t l_167[8];
    int64_t l_170[10][8] = {{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL},{0x75E601DA3A345BD6L,0x5C5B1D9676197838L,0x1C97DBFF9D0CA95DL,0x7E298484EA1F2CDDL,0x1C97DBFF9D0CA95DL,0x5C5B1D9676197838L,0x75E601DA3A345BD6L,0x722CCF1A2F3BF82DL}};
    int32_t l_171 = 0L;
    int16_t l_172 = (-1L);
    int8_t l_173 = (-7L);
    int32_t l_174 = 0x2B0778B0L;
    int32_t l_175 = 1L;
    int32_t l_176 = (-2L);
    int64_t l_177 = 2L;
    uint8_t l_178 = 0xDDL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_166[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_167[i] = 1UL;
    if ((atomic_inc(&p_332->l_atomic_input[62]) == 4))
    { /* block id: 36 */
        int8_t l_158 = 0x0AL;
        int16_t l_159[7] = {1L,9L,1L,1L,9L,1L,1L};
        int64_t l_160[8][8] = {{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL},{0x387322D81C2D92C0L,0x4F4F27BABB6E3EA3L,2L,0x387322D81C2D92C0L,0x488EF96A3AA068DCL,2L,2L,0x488EF96A3AA068DCL}};
        uint32_t l_161 = 0x81A1E77FL;
        int i, j;
        l_161--;
        unsigned int result = 0;
        result += l_158;
        int l_159_i0;
        for (l_159_i0 = 0; l_159_i0 < 7; l_159_i0++) {
            result += l_159[l_159_i0];
        }
        int l_160_i0, l_160_i1;
        for (l_160_i0 = 0; l_160_i0 < 8; l_160_i0++) {
            for (l_160_i1 = 0; l_160_i1 < 8; l_160_i1++) {
                result += l_160[l_160_i0][l_160_i1];
            }
        }
        result += l_161;
        atomic_add(&p_332->l_special_values[62], result);
    }
    else
    { /* block id: 38 */
        (1 + 1);
    }
    l_167[3]++;
    l_178--;
    return p_332->g_181[3][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_58 p_332->g_52 p_332->g_53 p_332->g_101 p_332->g_125 p_332->g_139 p_332->g_103 p_332->g_94.f3 p_332->g_99 p_332->g_32.f3
 * writes: p_332->g_101 p_332->g_139 p_332->g_99 p_332->g_147 p_332->g_53 p_332->g_32.f3
 */
uint64_t  func_39(uint32_t  p_40, int32_t  p_41, int32_t * p_42, int32_t * p_43, struct S4 * p_332)
{ /* block id: 20 */
    VECTOR(uint64_t, 4) l_113 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551611UL), 18446744073709551611UL);
    VECTOR(uint32_t, 4) l_115 = (VECTOR(uint32_t, 4))(0x589387CBL, (VECTOR(uint32_t, 2))(0x589387CBL, 4294967295UL), 4294967295UL);
    uint32_t *l_120[6];
    int32_t l_121 = 0x3BF6D4BDL;
    int32_t l_122[8] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    VECTOR(uint16_t, 8) l_126 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL);
    VECTOR(uint16_t, 4) l_127 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 7UL), 7UL);
    VECTOR(uint16_t, 16) l_128 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL, (VECTOR(uint16_t, 2))(1UL, 5UL), (VECTOR(uint16_t, 2))(1UL, 5UL), 1UL, 5UL, 1UL, 5UL);
    uint8_t l_137 = 0x1FL;
    int32_t *l_138 = &p_332->g_139;
    struct S1 l_140 = {0UL};
    uint8_t *l_148 = &l_137;
    uint16_t *l_153 = (void*)0;
    uint16_t *l_154 = &p_332->g_32.f3;
    int32_t *l_155 = &l_122[5];
    int i;
    for (i = 0; i < 6; i++)
        l_120[i] = &p_332->g_101;
    (*l_138) &= (((VECTOR(uint64_t, 2))(l_113.wz)).odd ^ ((((p_332->g_58 , (safe_unary_minus_func_uint64_t_u((((((VECTOR(uint32_t, 8))(l_115.zwyzwxxz)).s4 != (*p_332->g_52)) == (safe_add_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((l_121 = GROUP_DIVERGE(1, 1)), 4294967290UL)) != (++p_332->g_101)) ^ 0x51ADC77BC62773D5L), ((((VECTOR(uint8_t, 2))(0x93L, 8UL)).hi > l_115.w) , ((VECTOR(uint16_t, 16))(0xF280L, 1UL, 1UL, 0x393FL, 65526UL, (l_122[0] = (FAKE_DIVERGE(p_332->group_0_offset, get_group_id(0), 10) <= (!FAKE_DIVERGE(p_332->global_1_offset, get_global_id(1), 10)))), 0x4591L, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(p_332->g_125.s1535)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(l_126.s4233)).hi, ((VECTOR(uint16_t, 4))(0x2B15L, 0x177DL, 0xC202L, 65534UL)).lo, ((VECTOR(uint16_t, 4))(l_127.xyzw)).even))), 0xF2EBL, 0x30DFL)))).lo))), ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_128.sff)), 0xCE49L, 0x0219L, ((safe_mul_func_uint8_t_u_u((+(safe_mul_func_int16_t_s_s(0x4054L, (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_40, 5)) != (l_122[0] <= (l_120[4] == (void*)0))), l_113.z))))), p_40)) , l_137), p_40, 0x1B02L, 0x9ABBL, 0x99CEL, ((VECTOR(uint16_t, 4))(1UL)), 65528UL, 65526UL, 65531UL)).s5b00, ((VECTOR(uint16_t, 4))(0xC888L))))).odd))), ((VECTOR(uint16_t, 4))(0x5485L)), 0xB4FBL)).s0)))) < 0x24L)))) , p_40) , l_126.s5) , 18446744073709551615UL));
    p_332->g_99 = l_140;
    (*l_155) = ((*l_138) = (((*p_332->g_103) < (0x4968L >= ((*l_154) |= (safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(0UL, ((*p_332->g_52) = (((p_332->g_147 = (p_332->g_99 , &l_137)) == (l_148 = (void*)0)) & (safe_add_func_uint16_t_u_u(p_41, 65534UL)))))) <= (!(safe_lshift_func_int16_t_s_u(((*l_138) == (-1L)), 9)))), 1L))))) == (*l_138)));
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_53
 * writes:
 */
uint32_t  func_44(int16_t  p_45, uint8_t * p_46, uint8_t * p_47, int32_t  p_48, uint16_t * p_49, struct S4 * p_332)
{ /* block id: 17 */
    int32_t *l_104 = &p_332->g_53[0][2];
    int32_t *l_105 = (void*)0;
    int32_t *l_106 = &p_332->g_53[0][2];
    int32_t *l_107 = &p_332->g_53[0][2];
    int32_t *l_108 = &p_332->g_53[0][2];
    int32_t *l_109[4] = {&p_332->g_53[0][2],&p_332->g_53[0][2],&p_332->g_53[0][2],&p_332->g_53[0][2]};
    uint32_t l_110 = 0x24C026D3L;
    int i;
    l_110++;
    return p_332->g_53[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_32.f3 p_332->g_53 p_332->g_94 p_332->g_comm_values p_332->g_99 p_332->g_20 p_332->g_32.f1
 * writes: p_332->g_32.f3 p_332->g_101 p_332->g_53
 */
int8_t  func_54(union U3  p_55, uint64_t  p_56, int32_t * p_57, struct S4 * p_332)
{ /* block id: 10 */
    uint64_t *l_64 = &p_332->g_62;
    uint64_t **l_63[8][5] = {{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64},{&l_64,&l_64,&l_64,&l_64,&l_64}};
    uint64_t ***l_67 = &l_63[2][3];
    int32_t *l_68[10][8] = {{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]},{(void*)0,&p_332->g_53[0][2],&p_332->g_53[0][5],&p_332->g_53[0][5],&p_332->g_53[0][2],(void*)0,&p_332->g_53[0][0],&p_332->g_53[0][2]}};
    uint32_t l_69 = 9UL;
    VECTOR(int64_t, 16) l_74 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x7D024CA9A92ED160L), 0x7D024CA9A92ED160L), 0x7D024CA9A92ED160L, (-1L), 0x7D024CA9A92ED160L, (VECTOR(int64_t, 2))((-1L), 0x7D024CA9A92ED160L), (VECTOR(int64_t, 2))((-1L), 0x7D024CA9A92ED160L), (-1L), 0x7D024CA9A92ED160L, (-1L), 0x7D024CA9A92ED160L);
    uint16_t *l_75 = &p_332->g_32.f3;
    VECTOR(int8_t, 16) l_95 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x51L), 0x51L), 0x51L, 0L, 0x51L, (VECTOR(int8_t, 2))(0L, 0x51L), (VECTOR(int8_t, 2))(0L, 0x51L), 0L, 0x51L, 0L, 0x51L);
    uint64_t *l_96 = &p_332->g_62;
    uint32_t *l_100 = &p_332->g_101;
    int i, j;
    (*l_67) = l_63[2][3];
    l_69++;
    (*p_57) = (safe_mul_func_uint8_t_u_u(((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x526695BD66052DBCL, ((VECTOR(int64_t, 4))(l_74.s806a)).w, (-1L), 0x2A224D52A103ABEDL)))).wzyzwxyyyxzywxzx)).s5 & ((((*l_75)--) <= ((p_56 | p_55.f0) | GROUP_DIVERGE(1, 1))) <= (safe_div_func_int8_t_s_s(0x4CL, (safe_div_func_uint32_t_u_u(((*l_100) = (safe_div_func_uint8_t_u_u((p_332->g_53[0][2] , ((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x4AA22976L, 7UL)).hi, GROUP_DIVERGE(2, 1))), 7)), 0)) <= p_55.f0) , (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((p_332->g_94 , ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_95.s04dd4285)))).s22))).lo), 4)), (!(+(l_96 == ((safe_div_func_uint64_t_u_u(p_332->g_comm_values[p_332->tid], (p_332->g_99 , p_332->g_99.f0))) , (void*)0))))))) , p_55.f0)), p_332->g_20))), (*p_57))))))) ^ 1UL), p_332->g_53[0][0]));
    return p_332->g_32.f1;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[53];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 53; i++)
            l_comm_values[i] = 1;
    struct S4 c_333;
    struct S4* p_332 = &c_333;
    struct S4 c_334 = {
        0xAFA9L, // p_332->g_11
        0x25L, // p_332->g_20
        {0x6FA97F51EF9953E8L,-4L,1L,0xAB56L,0x11L,18446744073709551613UL}, // p_332->g_32
        {{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}}, // p_332->g_53
        &p_332->g_53[0][2], // p_332->g_52
        {0x30F4AEDFL}, // p_332->g_58
        0UL, // p_332->g_62
        (void*)0, // p_332->g_65
        (void*)0, // p_332->g_66
        {-3L,0x7FL,0L,65532UL,0x00L,0x4457BBF0BED92BB8L}, // p_332->g_94
        {0xA8FA0B35L}, // p_332->g_99
        0x91310E34L, // p_332->g_101
        &p_332->g_94.f3, // p_332->g_103
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xA1A8L), 0xA1A8L), 0xA1A8L, 1UL, 0xA1A8L), // p_332->g_125
        0x0A64D15AL, // p_332->g_139
        (void*)0, // p_332->g_147
        0x05CD23E3A335C488L, // p_332->g_157
        {{{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L},{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L}},{{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L},{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L}},{{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L},{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L}},{{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L},{0x681958A2EDE8AA63L,-5L,9L,0xFEF4L,0x91L,0x34F9124F86143A58L}}}, // p_332->g_181
        (void*)0, // p_332->g_184
        (void*)0, // p_332->g_228
        &p_332->g_228, // p_332->g_227
        {{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}}, // p_332->g_231
        {0UL,0x1CB3088F5452E4DEL,18446744073709551610UL,0x8607F98C77ABDB37L,0x4CBDD056L,7L,0xF93ABB72L}, // p_332->g_236
        (void*)0, // p_332->g_246
        (VECTOR(int32_t, 16))(0x3876A514L, (VECTOR(int32_t, 4))(0x3876A514L, (VECTOR(int32_t, 2))(0x3876A514L, 1L), 1L), 1L, 0x3876A514L, 1L, (VECTOR(int32_t, 2))(0x3876A514L, 1L), (VECTOR(int32_t, 2))(0x3876A514L, 1L), 0x3876A514L, 1L, 0x3876A514L, 1L), // p_332->g_253
        (VECTOR(int32_t, 16))(0x6AE771B1L, (VECTOR(int32_t, 4))(0x6AE771B1L, (VECTOR(int32_t, 2))(0x6AE771B1L, 0x2BBAE327L), 0x2BBAE327L), 0x2BBAE327L, 0x6AE771B1L, 0x2BBAE327L, (VECTOR(int32_t, 2))(0x6AE771B1L, 0x2BBAE327L), (VECTOR(int32_t, 2))(0x6AE771B1L, 0x2BBAE327L), 0x6AE771B1L, 0x2BBAE327L, 0x6AE771B1L, 0x2BBAE327L), // p_332->g_254
        {4294967295UL,9L,9UL,0UL,-1L,0x6BL,4UL}, // p_332->g_280
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), // p_332->g_289
        &p_332->g_20, // p_332->g_323
        0, // p_332->v_collective
        sequence_input[get_global_id(0)], // p_332->global_0_offset
        sequence_input[get_global_id(1)], // p_332->global_1_offset
        sequence_input[get_global_id(2)], // p_332->global_2_offset
        sequence_input[get_local_id(0)], // p_332->local_0_offset
        sequence_input[get_local_id(1)], // p_332->local_1_offset
        sequence_input[get_local_id(2)], // p_332->local_2_offset
        sequence_input[get_group_id(0)], // p_332->group_0_offset
        sequence_input[get_group_id(1)], // p_332->group_1_offset
        sequence_input[get_group_id(2)], // p_332->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 53)), permutations[0][get_linear_local_id()])), // p_332->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_333 = c_334;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_332);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_332->g_11, "p_332->g_11", print_hash_value);
    transparent_crc(p_332->g_20, "p_332->g_20", print_hash_value);
    transparent_crc(p_332->g_32.f0, "p_332->g_32.f0", print_hash_value);
    transparent_crc(p_332->g_32.f1, "p_332->g_32.f1", print_hash_value);
    transparent_crc(p_332->g_32.f2, "p_332->g_32.f2", print_hash_value);
    transparent_crc(p_332->g_32.f3, "p_332->g_32.f3", print_hash_value);
    transparent_crc(p_332->g_32.f4, "p_332->g_32.f4", print_hash_value);
    transparent_crc(p_332->g_32.f5, "p_332->g_32.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_332->g_53[i][j], "p_332->g_53[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_332->g_58.f0, "p_332->g_58.f0", print_hash_value);
    transparent_crc(p_332->g_62, "p_332->g_62", print_hash_value);
    transparent_crc(p_332->g_94.f0, "p_332->g_94.f0", print_hash_value);
    transparent_crc(p_332->g_94.f1, "p_332->g_94.f1", print_hash_value);
    transparent_crc(p_332->g_94.f2, "p_332->g_94.f2", print_hash_value);
    transparent_crc(p_332->g_94.f3, "p_332->g_94.f3", print_hash_value);
    transparent_crc(p_332->g_94.f4, "p_332->g_94.f4", print_hash_value);
    transparent_crc(p_332->g_94.f5, "p_332->g_94.f5", print_hash_value);
    transparent_crc(p_332->g_99.f0, "p_332->g_99.f0", print_hash_value);
    transparent_crc(p_332->g_101, "p_332->g_101", print_hash_value);
    transparent_crc(p_332->g_125.s0, "p_332->g_125.s0", print_hash_value);
    transparent_crc(p_332->g_125.s1, "p_332->g_125.s1", print_hash_value);
    transparent_crc(p_332->g_125.s2, "p_332->g_125.s2", print_hash_value);
    transparent_crc(p_332->g_125.s3, "p_332->g_125.s3", print_hash_value);
    transparent_crc(p_332->g_125.s4, "p_332->g_125.s4", print_hash_value);
    transparent_crc(p_332->g_125.s5, "p_332->g_125.s5", print_hash_value);
    transparent_crc(p_332->g_125.s6, "p_332->g_125.s6", print_hash_value);
    transparent_crc(p_332->g_125.s7, "p_332->g_125.s7", print_hash_value);
    transparent_crc(p_332->g_139, "p_332->g_139", print_hash_value);
    transparent_crc(p_332->g_157, "p_332->g_157", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_332->g_181[i][j].f0, "p_332->g_181[i][j].f0", print_hash_value);
            transparent_crc(p_332->g_181[i][j].f1, "p_332->g_181[i][j].f1", print_hash_value);
            transparent_crc(p_332->g_181[i][j].f2, "p_332->g_181[i][j].f2", print_hash_value);
            transparent_crc(p_332->g_181[i][j].f3, "p_332->g_181[i][j].f3", print_hash_value);
            transparent_crc(p_332->g_181[i][j].f4, "p_332->g_181[i][j].f4", print_hash_value);
            transparent_crc(p_332->g_181[i][j].f5, "p_332->g_181[i][j].f5", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_332->g_231[i].f0, "p_332->g_231[i].f0", print_hash_value);

    }
    transparent_crc(p_332->g_236.f0, "p_332->g_236.f0", print_hash_value);
    transparent_crc(p_332->g_236.f1, "p_332->g_236.f1", print_hash_value);
    transparent_crc(p_332->g_236.f2, "p_332->g_236.f2", print_hash_value);
    transparent_crc(p_332->g_236.f3, "p_332->g_236.f3", print_hash_value);
    transparent_crc(p_332->g_236.f4, "p_332->g_236.f4", print_hash_value);
    transparent_crc(p_332->g_236.f5, "p_332->g_236.f5", print_hash_value);
    transparent_crc(p_332->g_236.f6, "p_332->g_236.f6", print_hash_value);
    transparent_crc(p_332->g_253.s0, "p_332->g_253.s0", print_hash_value);
    transparent_crc(p_332->g_253.s1, "p_332->g_253.s1", print_hash_value);
    transparent_crc(p_332->g_253.s2, "p_332->g_253.s2", print_hash_value);
    transparent_crc(p_332->g_253.s3, "p_332->g_253.s3", print_hash_value);
    transparent_crc(p_332->g_253.s4, "p_332->g_253.s4", print_hash_value);
    transparent_crc(p_332->g_253.s5, "p_332->g_253.s5", print_hash_value);
    transparent_crc(p_332->g_253.s6, "p_332->g_253.s6", print_hash_value);
    transparent_crc(p_332->g_253.s7, "p_332->g_253.s7", print_hash_value);
    transparent_crc(p_332->g_253.s8, "p_332->g_253.s8", print_hash_value);
    transparent_crc(p_332->g_253.s9, "p_332->g_253.s9", print_hash_value);
    transparent_crc(p_332->g_253.sa, "p_332->g_253.sa", print_hash_value);
    transparent_crc(p_332->g_253.sb, "p_332->g_253.sb", print_hash_value);
    transparent_crc(p_332->g_253.sc, "p_332->g_253.sc", print_hash_value);
    transparent_crc(p_332->g_253.sd, "p_332->g_253.sd", print_hash_value);
    transparent_crc(p_332->g_253.se, "p_332->g_253.se", print_hash_value);
    transparent_crc(p_332->g_253.sf, "p_332->g_253.sf", print_hash_value);
    transparent_crc(p_332->g_254.s0, "p_332->g_254.s0", print_hash_value);
    transparent_crc(p_332->g_254.s1, "p_332->g_254.s1", print_hash_value);
    transparent_crc(p_332->g_254.s2, "p_332->g_254.s2", print_hash_value);
    transparent_crc(p_332->g_254.s3, "p_332->g_254.s3", print_hash_value);
    transparent_crc(p_332->g_254.s4, "p_332->g_254.s4", print_hash_value);
    transparent_crc(p_332->g_254.s5, "p_332->g_254.s5", print_hash_value);
    transparent_crc(p_332->g_254.s6, "p_332->g_254.s6", print_hash_value);
    transparent_crc(p_332->g_254.s7, "p_332->g_254.s7", print_hash_value);
    transparent_crc(p_332->g_254.s8, "p_332->g_254.s8", print_hash_value);
    transparent_crc(p_332->g_254.s9, "p_332->g_254.s9", print_hash_value);
    transparent_crc(p_332->g_254.sa, "p_332->g_254.sa", print_hash_value);
    transparent_crc(p_332->g_254.sb, "p_332->g_254.sb", print_hash_value);
    transparent_crc(p_332->g_254.sc, "p_332->g_254.sc", print_hash_value);
    transparent_crc(p_332->g_254.sd, "p_332->g_254.sd", print_hash_value);
    transparent_crc(p_332->g_254.se, "p_332->g_254.se", print_hash_value);
    transparent_crc(p_332->g_254.sf, "p_332->g_254.sf", print_hash_value);
    transparent_crc(p_332->g_280.f0, "p_332->g_280.f0", print_hash_value);
    transparent_crc(p_332->g_280.f1, "p_332->g_280.f1", print_hash_value);
    transparent_crc(p_332->g_280.f2, "p_332->g_280.f2", print_hash_value);
    transparent_crc(p_332->g_280.f3, "p_332->g_280.f3", print_hash_value);
    transparent_crc(p_332->g_280.f4, "p_332->g_280.f4", print_hash_value);
    transparent_crc(p_332->g_280.f5, "p_332->g_280.f5", print_hash_value);
    transparent_crc(p_332->g_280.f6, "p_332->g_280.f6", print_hash_value);
    transparent_crc(p_332->g_289.x, "p_332->g_289.x", print_hash_value);
    transparent_crc(p_332->g_289.y, "p_332->g_289.y", print_hash_value);
    transparent_crc(p_332->g_289.z, "p_332->g_289.z", print_hash_value);
    transparent_crc(p_332->g_289.w, "p_332->g_289.w", print_hash_value);
    transparent_crc(p_332->v_collective, "p_332->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 88; i++)
            transparent_crc(p_332->l_special_values[i], "p_332->l_special_values[i]", print_hash_value);
    transparent_crc(p_332->l_comm_values[get_linear_local_id()], "p_332->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_332->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()], "p_332->g_comm_values[get_linear_group_id() * 53 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
