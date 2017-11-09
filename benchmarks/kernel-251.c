// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,36,3 -l 13,6,3
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

__constant uint32_t permutations[10][234] = {
{118,4,64,169,14,98,165,172,2,42,88,199,194,140,125,10,207,74,192,139,142,55,209,66,68,16,102,24,117,53,86,149,160,35,176,232,222,173,94,31,177,135,174,221,69,96,218,15,28,49,45,104,110,180,60,19,34,113,202,17,220,167,1,44,8,179,183,101,111,227,155,217,191,226,231,206,213,59,100,133,171,78,152,184,195,40,214,188,186,22,181,163,129,79,131,18,112,124,81,161,56,63,12,193,37,95,116,70,187,143,208,121,132,25,150,196,146,198,114,233,80,230,164,136,219,41,154,73,39,85,11,26,29,52,20,108,166,72,153,36,168,127,156,159,90,141,224,57,144,33,93,87,32,107,0,216,84,23,6,200,77,54,190,189,157,204,99,103,145,128,106,27,138,212,109,182,147,210,162,9,130,148,211,48,201,205,225,89,5,178,151,58,50,38,51,67,47,65,97,13,122,62,7,76,46,115,21,126,71,185,83,134,91,228,105,119,92,82,120,175,75,61,170,215,123,43,158,197,3,203,30,223,229,137}, // permutation 0
{166,40,205,224,118,228,77,176,134,74,53,67,117,83,126,113,23,153,192,165,202,170,85,149,230,182,188,193,42,121,90,140,32,16,47,78,25,30,112,218,103,6,87,21,139,39,49,79,142,219,24,55,61,125,37,123,81,14,104,80,19,5,209,161,38,100,212,157,108,220,35,12,18,36,214,89,62,99,199,136,185,97,135,181,56,102,154,71,101,59,86,186,63,130,189,22,2,195,132,28,11,124,82,207,174,73,148,137,232,213,184,107,133,64,75,65,158,162,84,227,229,94,225,0,221,72,198,29,122,50,200,76,43,222,196,105,147,152,95,115,151,203,1,204,7,201,180,178,217,131,146,179,51,129,93,92,171,163,128,66,216,141,58,197,68,110,98,34,194,183,17,168,145,116,91,231,175,3,10,96,226,109,172,223,155,159,173,190,69,45,114,26,169,210,31,48,160,177,44,27,8,120,127,46,187,150,54,143,156,15,208,206,60,191,9,111,70,144,138,41,57,215,119,106,20,167,33,164,88,52,211,13,233,4}, // permutation 1
{72,78,165,190,128,73,219,61,167,177,155,50,112,81,46,43,130,32,110,135,26,181,44,19,174,89,113,109,115,226,185,93,82,171,87,7,204,168,37,34,95,229,186,179,62,175,39,195,124,116,75,45,85,67,1,173,114,136,199,203,161,29,104,27,90,188,33,197,170,212,38,119,131,18,21,35,152,157,41,10,206,211,5,180,20,169,91,69,70,64,182,102,121,142,172,202,144,103,98,123,224,59,105,66,220,58,24,233,134,158,107,76,133,207,156,140,194,94,153,126,15,163,231,215,52,166,88,213,54,192,30,150,108,56,48,189,198,49,176,223,149,210,101,51,2,53,146,17,132,6,201,68,14,200,16,148,96,42,65,216,92,178,71,77,106,184,217,74,12,154,205,187,160,137,122,225,208,129,79,25,9,221,120,125,222,8,138,118,3,162,164,28,147,31,40,145,83,196,86,97,99,117,80,55,23,111,183,60,127,84,143,139,11,22,141,209,47,218,159,36,63,230,13,151,232,193,228,4,191,57,0,227,214,100}, // permutation 2
{75,84,188,118,177,232,33,5,137,62,37,132,161,231,44,178,208,48,67,228,174,117,147,27,134,168,176,68,42,3,88,217,103,51,49,119,191,2,194,57,109,100,125,4,8,189,14,71,38,222,181,130,173,204,155,96,171,211,229,220,70,89,156,162,221,160,105,139,226,12,53,201,43,111,142,104,29,170,149,219,74,227,122,113,83,183,199,21,1,76,185,184,20,144,31,164,92,145,110,28,114,52,11,148,78,80,81,138,129,136,133,22,192,150,197,190,187,58,225,32,135,0,97,115,195,182,143,200,203,64,175,209,6,85,19,30,65,215,18,107,106,94,213,124,126,179,24,77,123,102,55,40,69,233,47,36,9,90,10,128,131,72,127,207,79,86,141,186,73,193,91,56,152,140,205,112,66,214,224,166,50,154,99,230,121,60,46,223,98,15,25,216,63,54,146,35,120,196,17,45,153,157,180,210,101,218,212,87,93,116,61,95,7,39,59,41,169,159,202,26,23,34,198,165,158,16,108,172,13,167,163,82,151,206}, // permutation 3
{88,211,52,67,113,29,181,59,106,142,226,2,5,205,44,9,198,134,26,65,204,119,84,23,137,218,14,203,70,165,146,33,72,215,54,117,125,207,20,210,79,231,75,71,118,111,97,223,157,110,50,173,94,191,188,12,42,177,10,15,96,18,131,143,224,1,132,201,148,27,46,31,227,222,166,163,40,114,190,152,85,199,136,91,186,49,6,37,56,74,221,133,105,126,129,60,153,184,206,38,138,7,16,124,121,90,53,25,176,123,145,101,98,197,147,87,100,3,200,182,196,8,178,213,61,19,185,135,155,174,86,55,229,120,144,92,11,76,219,89,36,127,48,34,58,161,102,171,202,45,99,21,168,30,69,175,164,208,130,216,154,4,140,68,169,63,214,192,0,158,167,180,83,150,57,62,43,195,230,66,32,80,160,220,93,149,141,162,194,112,64,151,13,28,78,35,115,17,95,183,39,109,82,179,212,103,108,233,159,209,128,139,41,170,116,232,51,47,225,217,77,107,104,24,22,187,81,193,228,73,122,172,156,189}, // permutation 4
{148,183,44,222,93,137,172,159,59,14,102,39,192,89,209,167,138,87,175,111,214,180,153,187,146,198,108,232,120,52,160,74,208,129,158,20,184,112,42,21,150,201,0,96,90,123,18,36,94,98,225,165,4,155,178,157,107,185,233,121,166,97,91,40,220,34,46,127,48,81,27,24,101,32,130,22,26,218,60,61,224,207,76,125,186,182,219,223,31,124,106,67,162,151,99,49,53,6,116,29,72,17,154,109,177,100,15,38,156,170,211,103,210,16,9,64,56,197,140,3,7,62,115,82,119,203,84,190,199,113,12,216,66,145,117,54,128,80,65,228,133,122,19,191,114,195,30,8,69,75,68,41,212,217,37,5,57,189,2,105,88,161,13,204,23,28,176,25,221,135,230,226,77,200,139,78,202,58,143,92,168,85,79,164,33,196,126,132,35,213,215,10,179,174,11,104,231,149,188,43,173,229,110,136,142,131,86,141,47,71,63,152,55,227,206,181,144,83,134,51,1,95,163,171,194,118,205,45,70,73,50,147,193,169}, // permutation 5
{190,204,154,228,84,48,216,122,193,6,141,139,25,46,53,225,206,119,51,176,115,61,5,129,41,203,140,124,150,98,11,149,72,153,120,121,191,143,156,168,183,90,9,184,211,12,199,167,18,113,130,50,192,110,70,127,97,157,137,202,44,62,82,1,174,172,15,13,8,144,227,37,164,71,142,45,232,42,17,77,112,229,47,219,155,128,222,39,2,214,217,78,147,69,20,207,73,66,94,148,0,31,218,118,91,131,215,23,201,169,96,233,40,163,213,28,43,152,226,146,126,93,145,180,223,75,151,197,86,79,32,89,198,165,107,135,67,99,58,59,195,102,27,54,49,24,171,52,166,30,161,104,81,100,138,175,123,205,220,108,114,194,111,92,170,4,136,221,19,179,106,109,56,187,83,88,68,95,159,224,65,212,160,10,57,125,134,116,64,210,85,33,162,182,3,230,36,186,55,76,231,181,26,208,22,7,200,29,101,74,133,117,158,103,196,105,177,87,178,21,173,14,185,209,188,132,189,38,80,35,63,16,60,34}, // permutation 6
{153,25,88,233,154,75,196,141,54,151,102,38,139,225,205,149,228,202,226,62,160,219,155,218,231,207,145,111,215,179,113,100,148,51,165,74,168,152,83,80,125,142,144,217,4,19,14,112,47,229,84,60,104,114,194,37,10,223,203,163,206,89,52,34,95,64,12,211,133,16,213,117,92,32,124,20,204,212,134,195,68,175,132,137,6,189,174,110,140,73,93,197,185,50,30,227,86,199,79,127,96,87,55,24,214,181,121,128,188,123,146,65,66,98,135,5,130,77,72,22,221,91,186,33,198,108,126,78,216,220,82,120,105,119,173,36,81,169,11,103,41,46,161,150,101,76,29,118,99,183,94,129,131,7,49,208,156,184,67,136,63,59,191,44,58,18,43,222,90,3,159,53,71,70,8,230,166,2,48,26,17,158,116,27,61,182,176,97,170,171,13,1,15,115,172,57,177,40,178,200,45,109,42,224,69,162,21,164,180,122,201,85,9,147,187,190,106,28,167,157,23,209,143,0,232,56,138,107,35,31,210,193,39,192}, // permutation 7
{113,223,32,9,71,194,57,65,202,173,12,21,19,207,29,39,163,156,25,224,35,212,42,88,85,233,117,67,2,172,72,232,54,193,130,37,129,86,175,132,68,74,188,191,203,16,206,76,211,137,38,189,55,18,70,185,153,77,131,101,63,128,23,166,24,144,69,95,119,178,73,222,61,36,141,103,78,182,152,116,7,22,10,82,220,142,158,81,64,151,208,80,229,159,106,15,176,114,157,170,169,60,200,3,100,147,45,89,209,109,218,186,108,226,75,136,58,98,14,174,8,167,133,197,146,93,107,49,210,41,94,215,154,30,143,1,112,227,118,104,59,140,177,53,51,190,231,87,111,13,171,125,120,201,138,34,4,180,230,135,181,33,99,139,134,105,115,48,83,11,28,44,228,6,214,126,161,213,52,31,221,102,149,91,187,90,196,162,219,56,165,123,46,84,179,5,20,96,164,127,124,155,217,50,97,183,150,195,122,79,26,199,17,184,43,192,40,110,225,216,66,145,160,148,62,205,204,47,92,27,121,0,198,168}, // permutation 8
{113,229,186,142,121,117,199,133,40,151,87,27,13,231,81,65,164,93,183,211,24,203,216,47,134,139,131,119,80,75,209,143,219,58,67,72,141,193,176,102,31,201,158,217,38,35,145,196,46,225,224,111,16,138,85,129,105,154,90,77,18,180,213,41,167,64,137,9,14,174,70,0,198,82,191,29,20,128,68,74,22,60,49,78,98,228,144,202,204,69,4,178,190,157,172,66,96,91,21,153,79,17,160,39,215,127,118,100,130,169,120,101,170,194,44,7,88,1,232,122,155,123,94,51,86,104,214,11,226,163,6,126,28,135,212,205,187,10,71,159,220,140,156,2,110,181,165,48,206,84,53,124,125,50,45,61,73,185,148,5,200,26,8,15,59,107,76,62,30,162,147,208,112,12,195,37,36,197,3,33,223,173,25,227,108,95,116,56,114,171,146,207,168,54,19,222,184,188,34,218,230,43,132,55,83,189,115,23,210,63,106,103,109,179,97,99,42,52,149,32,136,92,166,89,152,182,57,192,150,233,177,161,175,221} // permutation 9
};

// Seed: 2302904365

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint16_t  f0;
};

struct S1 {
    int32_t g_3;
    int32_t g_7;
    volatile VECTOR(uint32_t, 4) g_34;
    VECTOR(uint32_t, 16) g_35;
    int8_t g_42;
    VECTOR(uint8_t, 8) g_52;
    volatile VECTOR(uint8_t, 4) g_53;
    VECTOR(uint64_t, 8) g_66;
    uint16_t g_73;
    VECTOR(uint64_t, 4) g_92;
    int32_t g_96;
    VECTOR(int32_t, 8) g_97;
    int32_t ** volatile g_99;
    uint64_t g_104;
    uint16_t g_108;
    VECTOR(int16_t, 4) g_115;
    int32_t * volatile g_130[4][5];
    volatile int16_t * volatile g_145;
    union U0 g_151;
    union U0 *g_150;
    union U0 ** volatile g_149;
    int8_t *g_185;
    int8_t * volatile *g_184;
    uint32_t g_194;
    volatile uint32_t g_196;
    int32_t * volatile g_197[8];
    int32_t * volatile g_198;
    int32_t * volatile g_200;
    int32_t ** volatile g_226;
    int32_t ** volatile g_227;
    int32_t *g_229[9];
    int32_t ** volatile g_228;
    VECTOR(uint8_t, 4) g_234;
    VECTOR(uint8_t, 8) g_236;
    uint16_t g_264;
    VECTOR(uint8_t, 16) g_278;
    volatile VECTOR(uint32_t, 16) g_295;
    int64_t g_312;
    uint64_t g_314[7][8][1];
    int32_t g_318;
    uint32_t g_330;
    uint8_t *g_352[2][4];
    uint8_t **g_351;
    uint8_t *** volatile g_350;
    union U0 *g_356;
    union U0 **g_355[2];
    union U0 ** volatile *g_354;
    int32_t g_358;
    int32_t ** volatile g_361;
    VECTOR(int32_t, 2) g_363;
    volatile VECTOR(int32_t, 4) g_364;
    volatile VECTOR(int32_t, 8) g_365;
    volatile VECTOR(int32_t, 2) g_367;
    VECTOR(int8_t, 2) g_368;
    VECTOR(uint16_t, 2) g_376;
    uint32_t g_382;
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
int32_t  func_1(struct S1 * p_393);
int64_t  func_8(int32_t * p_9, int32_t * p_10, int32_t  p_11, struct S1 * p_393);
int32_t * func_12(int8_t  p_13, int32_t  p_14, struct S1 * p_393);
int16_t  func_17(int8_t * p_18, uint64_t  p_19, uint32_t  p_20, uint16_t  p_21, struct S1 * p_393);
int64_t  func_24(int32_t * p_25, struct S1 * p_393);
uint32_t  func_36(int8_t * p_37, uint16_t  p_38, int64_t  p_39, uint16_t  p_40, struct S1 * p_393);
int64_t  func_43(union U0  p_44, int16_t  p_45, uint8_t  p_46, struct S1 * p_393);
union U0  func_47(int64_t  p_48, uint64_t  p_49, struct S1 * p_393);
uint16_t  func_57(int32_t * p_58, struct S1 * p_393);
int8_t  func_78(int32_t * p_79, uint16_t  p_80, int8_t  p_81, uint16_t * p_82, uint32_t  p_83, struct S1 * p_393);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_393->g_3 p_393->g_comm_values p_393->l_comm_values p_393->g_34 p_393->g_35 p_393->g_42 p_393->g_52 p_393->g_53 p_393->g_66 p_393->g_73 p_393->g_92 p_393->g_96 p_393->g_97 p_393->g_104 p_393->g_115 p_393->g_108 p_393->g_145 p_393->g_149 p_393->g_184 p_393->g_194 p_393->g_185 p_393->g_196 p_393->g_200 p_393->g_228 p_393->g_234 p_393->g_236 p_393->g_229 p_393->g_278 p_393->g_295 p_393->g_318 p_393->g_151 p_393->g_151.f0 p_393->g_312 p_393->g_330 p_393->g_350 p_393->g_354 p_393->g_358 p_393->g_361 p_393->g_363 p_393->g_364 p_393->g_365 p_393->g_367 p_393->g_368 p_393->g_376 p_393->g_382
 * writes: p_393->g_3 p_393->g_7 p_393->g_73 p_393->g_96 p_393->g_104 p_393->g_108 p_393->g_52 p_393->g_35 p_393->g_150 p_393->l_comm_values p_393->g_229 p_393->g_264 p_393->g_194 p_393->g_314 p_393->g_318 p_393->g_330 p_393->g_92 p_393->g_351 p_393->g_comm_values p_393->g_358
 */
int32_t  func_1(struct S1 * p_393)
{ /* block id: 4 */
    int32_t *l_2 = &p_393->g_3;
    int8_t *l_6 = (void*)0;
    int32_t *l_357[9] = {&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358,&p_393->g_358};
    uint32_t l_389 = 0x937AA894L;
    uint8_t l_392 = 254UL;
    int i;
    (*l_2) = 0x4FDA0E60L;
    p_393->g_358 ^= ((safe_mul_func_int8_t_s_s((p_393->g_7 = (*l_2)), (((p_393->g_comm_values[p_393->tid] = func_8(func_12(p_393->g_comm_values[p_393->tid], p_393->l_comm_values[(safe_mod_func_uint32_t_u_u(p_393->tid, 234))], p_393), &p_393->g_3, (*l_2), p_393)) | (p_393->g_354 != (void*)0)) & GROUP_DIVERGE(1, 1)))) , 0x7A99530DL);
    for (p_393->g_96 = 0; (p_393->g_96 <= 29); p_393->g_96++)
    { /* block id: 116 */
        uint8_t l_362 = 0xA7L;
        VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))(0x6B65FCF3L, (VECTOR(int32_t, 2))(0x6B65FCF3L, (-7L)), (-7L));
        uint16_t *l_377 = &p_393->g_108;
        union U0 ***l_378[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U0 ****l_379 = &l_378[2];
        int64_t *l_383 = (void*)0;
        uint64_t *l_384 = &p_393->g_314[6][0][0];
        uint32_t *l_385 = (void*)0;
        uint32_t *l_386 = (void*)0;
        uint32_t *l_387 = (void*)0;
        uint32_t *l_388[2];
        uint32_t l_390 = 0xAD142F23L;
        int32_t l_391 = 0x57FE4C47L;
        int i;
        for (i = 0; i < 2; i++)
            l_388[i] = &p_393->g_194;
        (*p_393->g_361) = l_357[3];
        if (l_362)
            break;
        l_391 = (0x84A21CFFL != (((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_393->g_363.yxyxxyxx)).s73)).yxxxxxyxxyxyyyxx, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(p_393->g_364.wyyx)).lo, ((VECTOR(int32_t, 2))(p_393->g_365.s47)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_366.wxwxxwwy)).s50, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(p_393->g_367.xxyy)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(6L, (-1L), ((l_389 = (((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_393->g_368.yxxxyxxy)))).s34, (int8_t)(((safe_mul_func_int16_t_s_s((((*l_384) = (safe_unary_minus_func_int64_t_s((l_366.x ^= ((safe_add_func_uint16_t_u_u(p_393->g_363.y, (0x6D4C5D184F5A22B4L & ((safe_mul_func_int8_t_s_s((((*l_377) = ((VECTOR(uint16_t, 8))(p_393->g_376.xxyyxxyy)).s2) , ((((((((void*)0 == &p_393->g_185) > (((*l_379) = l_378[2]) == (void*)0)) , (((*p_393->g_185) , ((safe_lshift_func_uint8_t_u_s((0x3AL > (*p_393->g_185)), (*p_393->g_185))) , 1L)) && p_393->g_42)) & 246UL) && l_362) , (*p_393->g_185)) , 0x14L)), 251UL)) != p_393->g_382)))) < (*l_2)))))) || 0x1A2EBA2D8BBFA625L), p_393->g_comm_values[p_393->tid])) > GROUP_DIVERGE(2, 1)) ^ p_393->g_194), (int8_t)(**p_393->g_184)))).even , p_393->g_234.y)) || 1L), ((VECTOR(int32_t, 4))(0x0C82C038L)), (-1L))), ((VECTOR(int32_t, 8))(0x2C2E401CL))))).hi))).xzwwyxwwzzzzwxzw))).s10))).yyyx)).hi))).yyxyyxyyyxyyxxxy))).hi, ((VECTOR(int32_t, 8))(0x19DDAC78L)), ((VECTOR(int32_t, 8))((-1L)))))).s5607220215574171, ((VECTOR(int32_t, 16))((-1L)))))).s0 || l_390));
        if (l_392)
            continue;
    }
    (*p_393->g_200) = ((*l_2) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((*l_2), 4L, (-1L), (-9L))).yxyxxzwxwyzyzyzw)).even)).s0);
    return p_393->g_363.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_350
 * writes: p_393->g_351
 */
int64_t  func_8(int32_t * p_9, int32_t * p_10, int32_t  p_11, struct S1 * p_393)
{ /* block id: 109 */
    uint8_t *l_349 = (void*)0;
    uint8_t **l_348 = &l_349;
    int32_t l_353 = (-9L);
    (*p_393->g_350) = l_348;
    return l_353;
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_3 p_393->g_34 p_393->g_35 p_393->g_42 p_393->g_52 p_393->g_53 p_393->g_66 p_393->g_73 p_393->g_comm_values p_393->g_92 p_393->g_96 p_393->g_97 p_393->g_104 p_393->g_115 p_393->g_108 p_393->g_145 p_393->g_149 p_393->g_184 p_393->g_194 p_393->g_185 p_393->g_196 p_393->g_200 p_393->g_228 p_393->g_234 p_393->g_236 p_393->g_229 p_393->g_278 p_393->g_295 p_393->g_318 p_393->g_151 p_393->g_151.f0 p_393->g_312 p_393->g_330
 * writes: p_393->g_73 p_393->g_96 p_393->g_104 p_393->g_108 p_393->g_52 p_393->g_35 p_393->g_150 p_393->l_comm_values p_393->g_229 p_393->g_264 p_393->g_194 p_393->g_314 p_393->g_318 p_393->g_330 p_393->g_92
 */
int32_t * func_12(int8_t  p_13, int32_t  p_14, struct S1 * p_393)
{ /* block id: 7 */
    VECTOR(uint32_t, 8) l_22 = (VECTOR(uint32_t, 8))(0xF0415773L, (VECTOR(uint32_t, 4))(0xF0415773L, (VECTOR(uint32_t, 2))(0xF0415773L, 6UL), 6UL), 6UL, 0xF0415773L, 6UL);
    VECTOR(int64_t, 4) l_23 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x6E6C8CAC31E13CA4L), 0x6E6C8CAC31E13CA4L);
    int32_t *l_26[3][10] = {{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3},{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3},{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3}};
    int32_t l_325 = 0L;
    VECTOR(int32_t, 16) l_335 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 2L), 2L), 2L, (-8L), 2L, (VECTOR(int32_t, 2))((-8L), 2L), (VECTOR(int32_t, 2))((-8L), 2L), (-8L), 2L, (-8L), 2L);
    VECTOR(int32_t, 4) l_336 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 3L), 3L);
    uint32_t *l_337[5][1];
    int64_t *l_342 = (void*)0;
    int32_t l_347[8] = {0x7657B2FFL,0x7657B2FFL,0x7657B2FFL,0x7657B2FFL,0x7657B2FFL,0x7657B2FFL,0x7657B2FFL,0x7657B2FFL};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_337[i][j] = (void*)0;
    }
    atomic_xor(&p_393->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_uint32_t_u_u((((VECTOR(int32_t, 16))(0x6E5B14F4L, p_393->g_3, (p_393->g_330 |= ((func_17(((((VECTOR(uint32_t, 8))(l_22.s11604366)).s7 , (l_22.s1 , (((VECTOR(int64_t, 16))(l_23.yyzyxzyxwxzywxww)).s7 ^ func_24(l_26[2][0], p_393)))) , &p_393->g_42), (safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((p_14 , (p_393->g_151 , (((l_325 >= ((p_393->g_151.f0 == GROUP_DIVERGE(0, 1)) || p_14)) <= (-2L)) > p_393->g_312))), p_393->g_97.s7)) > FAKE_DIVERGE(p_393->global_1_offset, get_global_id(1), 10)), p_393->g_3)), 3)), p_14, p_393->g_97.s7, p_393) ^ p_14) || p_14)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(3L)), ((VECTOR(int32_t, 2))(0L)), 4L, (-3L), 0x3DAB4369L)).se & 6L), 0L)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_393->v_collective += p_393->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_347[2] &= (p_393->g_66.s1 , (((safe_add_func_uint64_t_u_u(p_393->g_53.w, (p_393->g_92.x &= p_14))) > (safe_sub_func_uint32_t_u_u((((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(l_335.see)).xxxxxxyx, ((VECTOR(int32_t, 16))(l_336.yyzzzyxxxwxxxzyy)).odd))).s3 < (p_393->g_194 &= ((void*)0 != &p_393->g_312))), (p_393->g_35.sd | (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_342 != &p_393->g_312), (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_13, p_393->g_318)), p_13)))), 255UL)))))) && p_393->g_35.s5));
    return &p_393->g_318;
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_96
 * writes: p_393->g_96
 */
int16_t  func_17(int8_t * p_18, uint64_t  p_19, uint32_t  p_20, uint16_t  p_21, struct S1 * p_393)
{ /* block id: 99 */
    VECTOR(int32_t, 16) l_326 = (VECTOR(int32_t, 16))(0x2C214BE4L, (VECTOR(int32_t, 4))(0x2C214BE4L, (VECTOR(int32_t, 2))(0x2C214BE4L, 1L), 1L), 1L, 0x2C214BE4L, 1L, (VECTOR(int32_t, 2))(0x2C214BE4L, 1L), (VECTOR(int32_t, 2))(0x2C214BE4L, 1L), 0x2C214BE4L, 1L, 0x2C214BE4L, 1L);
    int32_t *l_327 = (void*)0;
    int32_t *l_328 = (void*)0;
    int32_t *l_329 = &p_393->g_96;
    int i;
    (*l_329) &= ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_326.sa4)).xxxxxxyxxxxyxyyx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7BE22B7EL, 0x56F3748EL)), 0L, 0x2E23F03FL)).xwxwyzzzxwxzzzzz))).s1;
    l_329 = l_329;
    return (*l_329);
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_34 p_393->g_35 p_393->g_42 p_393->g_3 p_393->g_52 p_393->g_53 p_393->g_66 p_393->g_73 p_393->g_comm_values p_393->g_92 p_393->g_96 p_393->g_97 p_393->g_104 p_393->g_115 p_393->g_108 p_393->g_145 p_393->g_149 p_393->g_184 p_393->g_194 p_393->g_185 p_393->g_196 p_393->g_200 p_393->g_228 p_393->g_234 p_393->g_236 p_393->g_229 p_393->g_278 p_393->g_295 p_393->g_318
 * writes: p_393->g_73 p_393->g_96 p_393->g_104 p_393->g_108 p_393->g_52 p_393->g_35 p_393->g_150 p_393->l_comm_values p_393->g_229 p_393->g_264 p_393->g_194 p_393->g_314 p_393->g_318
 */
int64_t  func_24(int32_t * p_25, struct S1 * p_393)
{ /* block id: 8 */
    int16_t l_31 = (-1L);
    int8_t *l_41 = &p_393->g_42;
    int32_t l_155 = 0x229581EBL;
    uint16_t *l_315 = (void*)0;
    uint16_t *l_316 = &p_393->g_108;
    int32_t *l_317 = &p_393->g_318;
    (*l_317) |= ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_316) = (l_31 != (safe_mul_func_uint8_t_u_u(l_31, (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_393->g_34.wzww)).x, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 2))(p_393->g_35.sbf)).yxxx, (uint32_t)func_36(l_41, p_393->g_42, func_43((l_31 , func_47(p_393->g_3, ((safe_mod_func_int16_t_s_s((l_41 != (((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_393->g_52.s5446)))).wxzxzxwy, ((VECTOR(uint8_t, 16))(p_393->g_53.zzxxyyxxwxwyyzzx)).odd))).s4 , &p_393->g_42)), p_393->g_35.s6)) && 0x7FF1L), p_393)), p_393->g_115.y, l_155, p_393), p_393->g_234.w, p_393), (uint32_t)l_31))).zwyxyxwz)).s21, ((VECTOR(uint32_t, 2))(4294967294UL))))), 0x13F79E03L)).z == p_393->g_115.x))))), l_155)), 1L)) != l_155);
    (*l_317) = (-10L);
    return (*l_317);
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_115 p_393->g_96 p_393->g_194 p_393->g_295 p_393->g_184 p_393->g_185 p_393->g_42
 * writes: p_393->g_229 p_393->g_96 p_393->g_194 p_393->g_314
 */
uint32_t  func_36(int8_t * p_37, uint16_t  p_38, int64_t  p_39, uint16_t  p_40, struct S1 * p_393)
{ /* block id: 84 */
    int32_t *l_280 = &p_393->g_96;
    int32_t **l_281 = &l_280;
    int32_t **l_282 = &p_393->g_229[3];
    uint32_t *l_291 = &p_393->g_194;
    union U0 l_292 = {3UL};
    uint8_t *l_300 = (void*)0;
    uint8_t *l_301 = (void*)0;
    uint8_t *l_302 = (void*)0;
    uint8_t *l_303 = (void*)0;
    uint8_t *l_304[6][2][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_305 = 0x2E0489ACL;
    int32_t *l_306 = (void*)0;
    int32_t *l_307 = (void*)0;
    int32_t *l_308 = (void*)0;
    int32_t *l_309[8][7][4] = {{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}}};
    uint16_t l_310[2][10][7] = {{{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL}},{{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL},{1UL,0x2619L,65527UL,1UL,0x07EBL,65527UL,65527UL}}};
    int64_t *l_311[2];
    uint16_t l_313 = 0x0AD7L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_311[i] = &p_393->g_312;
    (*l_282) = ((*l_281) = l_280);
    (*l_280) = p_38;
    p_393->g_314[5][2][0] = ((safe_rshift_func_uint16_t_u_u((5L | ((l_313 = (safe_rshift_func_int16_t_s_s(p_38, (safe_div_func_int32_t_s_s(p_38, (l_310[1][1][5] = (l_305 &= ((0L & (((*l_280) = (((*l_291) &= (p_393->g_115.z > (safe_sub_func_uint64_t_u_u((**l_281), (*l_280))))) == (l_292 , (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_393->g_295.s1e)).even, (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4UL, 4294967295UL)), 5))))))) != (**p_393->g_184))) == 0x08EB30CCE4455992L)))))))) , p_393->g_115.z)), 7)) , 0L);
    return (*l_280);
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_184 p_393->g_73 p_393->g_92 p_393->g_194 p_393->g_185 p_393->g_42 p_393->g_196 p_393->g_104 p_393->g_200 p_393->g_96 p_393->g_228 p_393->g_34 p_393->g_234 p_393->g_236 p_393->g_229 p_393->g_66 p_393->g_53 p_393->g_35 p_393->g_comm_values p_393->g_3 p_393->g_97 p_393->g_108 p_393->g_145 p_393->g_149 p_393->g_278
 * writes: p_393->l_comm_values p_393->g_96 p_393->g_229 p_393->g_73 p_393->g_264 p_393->g_104 p_393->g_108 p_393->g_52 p_393->g_35 p_393->g_150
 */
int64_t  func_43(union U0  p_44, int16_t  p_45, uint8_t  p_46, struct S1 * p_393)
{ /* block id: 51 */
    VECTOR(uint16_t, 16) l_164 = (VECTOR(uint16_t, 16))(0x97CBL, (VECTOR(uint16_t, 4))(0x97CBL, (VECTOR(uint16_t, 2))(0x97CBL, 0UL), 0UL), 0UL, 0x97CBL, 0UL, (VECTOR(uint16_t, 2))(0x97CBL, 0UL), (VECTOR(uint16_t, 2))(0x97CBL, 0UL), 0x97CBL, 0UL, 0x97CBL, 0UL);
    int32_t l_176 = 0x6C6CD64CL;
    uint32_t *l_179 = (void*)0;
    int8_t *l_180[4] = {&p_393->g_42,&p_393->g_42,&p_393->g_42,&p_393->g_42};
    int32_t l_209[3];
    VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))(0x3F822C63L, (VECTOR(int32_t, 2))(0x3F822C63L, 8L), 8L);
    VECTOR(uint8_t, 4) l_237 = (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 0x09L), 0x09L);
    union U0 **l_238 = &p_393->g_150;
    union U0 **l_240 = &p_393->g_150;
    union U0 *l_249 = &p_393->g_151;
    int32_t **l_265 = &p_393->g_229[3];
    VECTOR(uint8_t, 16) l_276 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    int i;
    for (i = 0; i < 3; i++)
        l_209[i] = 0L;
    if ((~0x4332B00AL))
    { /* block id: 52 */
        uint8_t l_156 = 0xC4L;
        return l_156;
    }
    else
    { /* block id: 54 */
        uint8_t l_161 = 0xF3L;
        int16_t *l_173 = (void*)0;
        int16_t *l_174 = (void*)0;
        int16_t *l_175 = (void*)0;
        uint32_t *l_181 = (void*)0;
        uint32_t *l_182[1][3];
        int32_t l_183 = (-6L);
        int32_t l_207 = 0x5AC4C825L;
        int32_t l_210 = (-1L);
        int32_t l_211 = 1L;
        int32_t l_212 = 0x42C39DB3L;
        int32_t l_215 = 1L;
        VECTOR(uint8_t, 8) l_235 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
        union U0 *l_260 = &p_393->g_151;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_182[i][j] = (void*)0;
        }
        if ((((((((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_161 & (safe_div_func_uint16_t_u_u(((((l_164.sb <= ((p_393->l_comm_values[(safe_mod_func_uint32_t_u_u(p_393->tid, 234))] = ((l_183 |= (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((p_44 , ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_45, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0x29238DAD2CDC48FAL)), 0x8D4B36AF559A8912L, 0xE79F7EB3699347C1L)), (((l_179 != (void*)0) , (void*)0) != l_180[1]), 0x4CFC64E1DA1D933AL, 0xCBE6FDDE1F1B1ED0L)).s0, 0x574D665B7CE1603CL)) < p_44.f0)), l_176)) & p_46), 0x1B1F24016B4405EBL)), 6))) | l_161)) != l_161)) , l_164.sf) , p_393->g_184) == (void*)0), p_44.f0))), l_161)), 3)) || l_164.s5) , l_161) , p_44.f0) != p_393->g_73) <= l_176) != p_44.f0))
        { /* block id: 58 */
            int32_t *l_199 = (void*)0;
            int32_t l_208 = 0x17CDE6F3L;
            int32_t l_213[7] = {1L,(-1L),1L,1L,(-1L),1L,1L};
            int32_t l_214[6] = {0x6F44BDACL,0x6F44BDACL,0x6F44BDACL,0x6F44BDACL,0x6F44BDACL,0x6F44BDACL};
            VECTOR(uint8_t, 16) l_225 = (VECTOR(uint8_t, 16))(0x10L, (VECTOR(uint8_t, 4))(0x10L, (VECTOR(uint8_t, 2))(0x10L, 246UL), 246UL), 246UL, 0x10L, 246UL, (VECTOR(uint8_t, 2))(0x10L, 246UL), (VECTOR(uint8_t, 2))(0x10L, 246UL), 0x10L, 246UL, 0x10L, 246UL);
            int i;
            (*p_393->g_200) = ((safe_add_func_int16_t_s_s(p_45, (((l_176 > (p_393->g_92.x == (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+(((p_393->g_194 , &p_46) == ((((((**p_393->g_184) >= FAKE_DIVERGE(p_393->group_0_offset, get_group_id(0), 10)) == 0L) , (p_44 = p_44)) , (safe_unary_minus_func_int64_t_s(4L))) , p_393->g_185)) >= 0x4AL)), 1L)), GROUP_DIVERGE(0, 1))) <= p_393->g_196), 0x5DL)))) , p_46) < p_393->g_104))) , p_45);
            for (p_44.f0 = (-20); (p_44.f0 == 22); ++p_44.f0)
            { /* block id: 63 */
                int32_t *l_203 = &p_393->g_96;
                int32_t *l_204 = (void*)0;
                int32_t *l_205 = &l_183;
                int32_t *l_206[7][2] = {{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0}};
                uint16_t l_216 = 0x6F8DL;
                int i, j;
                ++l_216;
                atomic_max(&p_393->l_atomic_reduction[0], (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_221.ywxy)).yxywwzxx)).s4, (safe_lshift_func_uint8_t_u_u((l_215 ^ (safe_unary_minus_func_uint16_t_u(((*p_393->g_200) , (&p_393->g_150 != (void*)0))))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_225.s1a)).yyxx)).y)))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_393->v_collective += p_393->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        else
        { /* block id: 67 */
            union U0 ***l_239 = (void*)0;
            union U0 **l_243 = &p_393->g_150;
            union U0 **l_244 = &p_393->g_150;
            union U0 **l_245 = &p_393->g_150;
            union U0 **l_246 = &p_393->g_150;
            union U0 **l_247 = &p_393->g_150;
            union U0 **l_248[8][10] = {{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150},{(void*)0,(void*)0,&p_393->g_150,&p_393->g_150,&p_393->g_150,&p_393->g_150,(void*)0,&p_393->g_150,(void*)0,&p_393->g_150}};
            uint16_t *l_261[1];
            int32_t l_262 = 0x0EC3E9EDL;
            int32_t l_263 = 0x77AED1B3L;
            int32_t l_266 = 5L;
            VECTOR(uint8_t, 8) l_275 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC0L), 0xC0L), 0xC0L, 0UL, 0xC0L);
            VECTOR(uint8_t, 2) l_277 = (VECTOR(uint8_t, 2))(252UL, 0UL);
            int32_t *l_279 = &l_262;
            int i, j;
            for (i = 0; i < 1; i++)
                l_261[i] = &p_393->g_108;
            (*p_393->g_228) = &l_207;
            (**l_265) &= (safe_rshift_func_int16_t_s_u((l_266 &= ((l_210 | p_393->g_34.y) == (((void*)0 != &p_45) < (((safe_mod_func_int64_t_s_s(((((((VECTOR(uint8_t, 16))(0xC0L, ((VECTOR(uint8_t, 2))(p_393->g_234.xx)), ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(l_235.s52)), ((VECTOR(uint8_t, 16))(p_393->g_236.s6447156057130151)).s8a))).yxxy, ((VECTOR(uint8_t, 8))(l_237.wwwwwxwz)).lo))), (l_238 == (l_240 = (void*)0)), 1UL, 255UL, ((p_393->g_264 = ((safe_mod_func_uint8_t_u_u(((l_249 = &p_44) == ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((l_221.z <= ((l_262 = (p_393->g_73 = (safe_mod_func_uint16_t_u_u((!(p_44.f0 = (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((&p_393->g_151 != l_260), p_393->g_194)), p_46)))), 0x1049L)))) || l_210)) <= 2L), l_221.y)), l_263)) , &p_44)), l_164.s8)) , l_211)) || FAKE_DIVERGE(p_393->group_0_offset, get_group_id(0), 10)), ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(8UL)), 8UL)).s6 , p_44.f0) | p_45) > l_164.s6) != l_164.sa), 18446744073709551615UL)) , l_265) != (void*)0)))), p_45));
            l_263 = (((**l_265) = ((*l_279) ^= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((p_44.f0 < (func_47((((**l_265) & l_211) > (2L >= 0xB864D20151E4F78FL)), p_393->g_66.s3, p_393) , (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(253UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(l_275.s7026230440056125)).sbd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_276.sde)).xxyxxyyy)).even)).lo))), ((VECTOR(uint8_t, 8))(l_277.yyxxyyyx)).s67))), ((VECTOR(uint8_t, 2))(p_393->g_278.sc2))))), ((VECTOR(uint8_t, 16))(0UL, (p_46 & 0xCB5C4F61L), p_45, 0x03L, p_393->g_278.sd, 0x4DL, ((VECTOR(uint8_t, 8))(249UL)), 0xB4L, 3UL)).s1c))).xyyy)).y)) && l_266), p_46)))) , (**l_265)) <= GROUP_DIVERGE(0, 1)), (**p_393->g_184))), 0x75F7L)))) > p_44.f0);
            (*l_265) = &l_266;
        }
    }
    return p_393->g_53.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_53 p_393->g_66 p_393->g_35 p_393->g_73 p_393->g_comm_values p_393->g_92 p_393->g_3 p_393->g_96 p_393->g_97 p_393->g_42 p_393->g_104 p_393->g_115 p_393->g_34 p_393->g_108 p_393->g_145 p_393->g_149
 * writes: p_393->g_73 p_393->g_96 p_393->g_104 p_393->g_108 p_393->g_52 p_393->g_35 p_393->g_150
 */
union U0  func_47(int64_t  p_48, uint64_t  p_49, struct S1 * p_393)
{ /* block id: 9 */
    uint32_t l_56 = 0x7BB6ABD3L;
    int32_t *l_59 = (void*)0;
    VECTOR(int64_t, 4) l_60 = (VECTOR(int64_t, 4))(0x0A2C9EA21F9F6D65L, (VECTOR(int64_t, 2))(0x0A2C9EA21F9F6D65L, 1L), 1L);
    VECTOR(int64_t, 4) l_61 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L);
    VECTOR(uint64_t, 4) l_64 = (VECTOR(uint64_t, 4))(0xD45AA775BEB379DEL, (VECTOR(uint64_t, 2))(0xD45AA775BEB379DEL, 0x8C3B083FFB38BA70L), 0x8C3B083FFB38BA70L);
    VECTOR(uint64_t, 16) l_65 = (VECTOR(uint64_t, 16))(0xF68603386B476018L, (VECTOR(uint64_t, 4))(0xF68603386B476018L, (VECTOR(uint64_t, 2))(0xF68603386B476018L, 0xC21E6DB759FFDB42L), 0xC21E6DB759FFDB42L), 0xC21E6DB759FFDB42L, 0xF68603386B476018L, 0xC21E6DB759FFDB42L, (VECTOR(uint64_t, 2))(0xF68603386B476018L, 0xC21E6DB759FFDB42L), (VECTOR(uint64_t, 2))(0xF68603386B476018L, 0xC21E6DB759FFDB42L), 0xF68603386B476018L, 0xC21E6DB759FFDB42L, 0xF68603386B476018L, 0xC21E6DB759FFDB42L);
    VECTOR(uint64_t, 4) l_67 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4516193E9ABA4A7EL), 0x4516193E9ABA4A7EL);
    VECTOR(uint64_t, 2) l_68 = (VECTOR(uint64_t, 2))(0x56AD515890591050L, 3UL);
    VECTOR(uint64_t, 4) l_69 = (VECTOR(uint64_t, 4))(0x6F4617BB4FD8ED9CL, (VECTOR(uint64_t, 2))(0x6F4617BB4FD8ED9CL, 7UL), 7UL);
    uint16_t *l_72 = &p_393->g_73;
    int16_t l_98[9][2] = {{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L},{0x3EE3L,0x3EE3L}};
    int8_t *l_103[4][1] = {{&p_393->g_42},{&p_393->g_42},{&p_393->g_42},{&p_393->g_42}};
    union U0 l_114[10] = {{0UL},{65534UL},{0x459AL},{65534UL},{0UL},{0UL},{65534UL},{0x459AL},{65534UL},{0UL}};
    VECTOR(uint32_t, 8) l_122 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1B1567E6L), 0x1B1567E6L), 0x1B1567E6L, 1UL, 0x1B1567E6L);
    int32_t l_131[9];
    VECTOR(int16_t, 8) l_140 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x275CL), 0x275CL), 0x275CL, 0L, 0x275CL);
    VECTOR(int32_t, 8) l_146 = (VECTOR(int32_t, 8))(0x3DF78F4EL, (VECTOR(int32_t, 4))(0x3DF78F4EL, (VECTOR(int32_t, 2))(0x3DF78F4EL, 7L), 7L), 7L, 0x3DF78F4EL, 7L);
    int i, j;
    for (i = 0; i < 9; i++)
        l_131[i] = 3L;
    if (((0x67D625C2A3DA7981L || ((safe_mul_func_int16_t_s_s(p_49, ((((l_56 | func_57(l_59, p_393)) != (((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_60.yw)), 0x097151158E584094L, 0x453370C164D14C5BL)).yywyxzxzyzzyywyw)).sddca, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_61.yxxw)).wyzzwwzz)).even))).y != p_48)) <= (((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(l_64.yy)).yyxy))).even, ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(l_65.se276)).yxxyxxxyyxxxwwyw, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(0x52136032EE702D15L, ((VECTOR(uint64_t, 8))(p_393->g_66.s20670441)), ((VECTOR(uint64_t, 2))(l_67.zw)), ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_68.xyxyxxyx)).s7430516672533627)).se2, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_69.xx)).yxxxyxxx)).s32))), 0xED293A85175EF58EL, 0xDF66360CCD11DCE2L, 0xA7B55804E0369C31L)).lo)).s0702712242322715))).s40))).even & (((safe_sub_func_uint16_t_u_u(p_393->g_35.sd, ((*l_72)++))) != (p_393->g_comm_values[p_393->tid] ^ (safe_mul_func_int8_t_s_s(func_78(l_59, l_64.x, p_393->g_35.s1, l_72, p_393->g_35.sf, p_393), p_48)))) < l_98[6][0]))) != p_393->g_97.s1))) == p_393->g_92.x)) <= 18446744073709551615UL))
    { /* block id: 19 */
        int32_t **l_100 = &l_59;
        uint64_t l_107 = 0x3292B5330BC39A61L;
        uint8_t *l_109 = (void*)0;
        uint32_t *l_110 = (void*)0;
        uint32_t *l_111[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_111[i] = (void*)0;
        (*l_100) = l_59;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_393->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 234)), permutations[(safe_mod_func_uint32_t_u_u((p_48 & (p_393->g_35.s0 = ((((p_393->g_104 = ((safe_mod_func_uint32_t_u_u(p_393->g_73, 0x00801E7CL)) >= ((void*)0 != l_103[2][0]))) > (p_393->g_52.s5 = ((safe_rshift_func_uint8_t_u_s(0UL, (l_107 = (-1L)))) == (p_393->g_108 = (p_49 & 0x11L))))) > p_49) != p_393->g_comm_values[p_393->tid]))), 10))][(safe_mod_func_uint32_t_u_u(p_393->tid, 234))]));
        for (p_393->g_96 = (-3); (p_393->g_96 == (-4)); p_393->g_96 = safe_sub_func_int8_t_s_s(p_393->g_96, 3))
        { /* block id: 31 */
            return l_114[3];
        }
    }
    else
    { /* block id: 34 */
        VECTOR(int16_t, 16) l_116 = (VECTOR(int16_t, 16))(0x256DL, (VECTOR(int16_t, 4))(0x256DL, (VECTOR(int16_t, 2))(0x256DL, 0x3C42L), 0x3C42L), 0x3C42L, 0x256DL, 0x3C42L, (VECTOR(int16_t, 2))(0x256DL, 0x3C42L), (VECTOR(int16_t, 2))(0x256DL, 0x3C42L), 0x256DL, 0x3C42L, 0x256DL, 0x3C42L);
        int16_t *l_117 = &l_98[6][0];
        int16_t *l_125 = (void*)0;
        int16_t *l_126 = (void*)0;
        int16_t *l_127[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_128 = 1L;
        int16_t l_129 = 5L;
        int8_t *l_143[8][2] = {{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42},{&p_393->g_42,&p_393->g_42}};
        int8_t **l_144 = &l_103[3][0];
        int32_t *l_147 = (void*)0;
        int32_t *l_148 = &p_393->g_96;
        int i, j;
        l_131[8] = (((0x7E7CL != (p_393->g_104 , (l_128 = (((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0x3513L, 0L)).xyxxyxxx, ((VECTOR(int16_t, 4))(p_393->g_115.wzzx)).wxyxxxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_116.s99)), ((*l_117) = p_393->g_34.z), ((VECTOR(int16_t, 4))(0x3980L, 1L, 0x126AL, (-1L))), (-8L)))))).s7 ^ ((p_49 | 3L) < (l_114[8] , (safe_mul_func_uint16_t_u_u(65535UL, (((((safe_sub_func_uint32_t_u_u((l_122.s7 != (safe_div_func_uint16_t_u_u((l_116.sb , l_116.sf), 65535UL))), 0x6705B1A2L)) != p_393->g_108) <= 0xD64EL) , p_49) , GROUP_DIVERGE(2, 1)))))))))) , l_129) | p_48);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_393->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 234)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_393->g_96, p_49)), (safe_div_func_int64_t_s_s(((((((safe_mod_func_uint64_t_u_u(p_49, p_393->g_3)) < p_393->g_97.s4) ^ ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_140.s30)), (-10L), 0x6A56L, 1L, (safe_sub_func_int8_t_s_s((&p_393->g_42 == ((*l_144) = l_143[0][0])), (((p_393->g_145 == (void*)0) > p_393->g_97.s4) , p_393->g_104))), 0x1599L, 0x6A8CL)).s7) == (-1L)) , p_48) , p_393->g_66.s4), p_393->g_92.x)))) , 7UL), 10))][(safe_mod_func_uint32_t_u_u(p_393->tid, 234))]));
        (*l_148) |= ((VECTOR(int32_t, 2))(l_146.s74)).odd;
    }
    (*p_393->g_149) = &l_114[8];
    for (p_393->g_73 = (-5); (p_393->g_73 > 27); ++p_393->g_73)
    { /* block id: 47 */
        union U0 l_154 = {0x8195L};
        return l_154;
    }
    return l_114[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_53
 * writes:
 */
uint16_t  func_57(int32_t * p_58, struct S1 * p_393)
{ /* block id: 10 */
    return p_393->g_53.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_393->g_66 p_393->g_92 p_393->g_3 p_393->g_96 p_393->g_97 p_393->g_42
 * writes: p_393->g_96
 */
int8_t  func_78(int32_t * p_79, uint16_t  p_80, int8_t  p_81, uint16_t * p_82, uint32_t  p_83, struct S1 * p_393)
{ /* block id: 13 */
    int32_t *l_88 = (void*)0;
    int32_t *l_90[6][8][5] = {{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}},{{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0},{(void*)0,&p_393->g_3,&p_393->g_3,(void*)0,(void*)0}}};
    int32_t **l_89 = &l_90[4][3][4];
    VECTOR(int64_t, 8) l_91 = (VECTOR(int64_t, 8))(0x4462E654CDFF1806L, (VECTOR(int64_t, 4))(0x4462E654CDFF1806L, (VECTOR(int64_t, 2))(0x4462E654CDFF1806L, (-1L)), (-1L)), (-1L), 0x4462E654CDFF1806L, (-1L));
    VECTOR(uint64_t, 4) l_93 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
    VECTOR(uint64_t, 16) l_94 = (VECTOR(uint64_t, 16))(0xA657C725C80B88CCL, (VECTOR(uint64_t, 4))(0xA657C725C80B88CCL, (VECTOR(uint64_t, 2))(0xA657C725C80B88CCL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0xA657C725C80B88CCL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0xA657C725C80B88CCL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0xA657C725C80B88CCL, 18446744073709551614UL), 0xA657C725C80B88CCL, 18446744073709551614UL, 0xA657C725C80B88CCL, 18446744073709551614UL);
    int32_t *l_95 = &p_393->g_96;
    int i, j, k;
    (*l_95) = ((safe_sub_func_uint64_t_u_u((((((VECTOR(uint16_t, 2))(0xF50BL, 0xA497L)).hi | ((p_393->g_66.s1 | 7UL) == (l_88 != ((*l_89) = l_88)))) <= p_83) || ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_91.s6464220225162570)).lo)).s07)), 5L, 0x3E551B120E24C2F8L)).y), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_393->g_92.wwzxwyww)).even)).xyzywzyx)).hi)).lo)).yyyyxxyxxyxyyyyy)), ((VECTOR(uint64_t, 16))(l_93.wwyzyzyxwyxxxxzz)), ((VECTOR(uint64_t, 4))(l_94.s5dad)).xwxywzzxzwwyxwww))).even)).s0)) >= p_393->g_3);
    p_393->g_96 &= ((void*)0 != &p_80);
    (*l_95) |= ((VECTOR(int32_t, 16))(p_393->g_97.s5757764636305400)).s8;
    return p_393->g_42;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[234];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 234; i++)
            l_comm_values[i] = 1;
    struct S1 c_394;
    struct S1* p_393 = &c_394;
    struct S1 c_395 = {
        0L, // p_393->g_3
        0x4CAF14C9L, // p_393->g_7
        (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xC46983C1L), 0xC46983C1L), // p_393->g_34
        (VECTOR(uint32_t, 16))(0x25996FD0L, (VECTOR(uint32_t, 4))(0x25996FD0L, (VECTOR(uint32_t, 2))(0x25996FD0L, 0x1F230B56L), 0x1F230B56L), 0x1F230B56L, 0x25996FD0L, 0x1F230B56L, (VECTOR(uint32_t, 2))(0x25996FD0L, 0x1F230B56L), (VECTOR(uint32_t, 2))(0x25996FD0L, 0x1F230B56L), 0x25996FD0L, 0x1F230B56L, 0x25996FD0L, 0x1F230B56L), // p_393->g_35
        (-1L), // p_393->g_42
        (VECTOR(uint8_t, 8))(0x0BL, (VECTOR(uint8_t, 4))(0x0BL, (VECTOR(uint8_t, 2))(0x0BL, 0x4AL), 0x4AL), 0x4AL, 0x0BL, 0x4AL), // p_393->g_52
        (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 0xB3L), 0xB3L), // p_393->g_53
        (VECTOR(uint64_t, 8))(0xD2B77DEECC15C487L, (VECTOR(uint64_t, 4))(0xD2B77DEECC15C487L, (VECTOR(uint64_t, 2))(0xD2B77DEECC15C487L, 0x8E1234CD2740D6A5L), 0x8E1234CD2740D6A5L), 0x8E1234CD2740D6A5L, 0xD2B77DEECC15C487L, 0x8E1234CD2740D6A5L), // p_393->g_66
        0xDCD9L, // p_393->g_73
        (VECTOR(uint64_t, 4))(0xFFC7B43BFD272085L, (VECTOR(uint64_t, 2))(0xFFC7B43BFD272085L, 1UL), 1UL), // p_393->g_92
        0x6B5B7D99L, // p_393->g_96
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-7L)), (-7L)), (-7L), 7L, (-7L)), // p_393->g_97
        (void*)0, // p_393->g_99
        0xAD6BFE3AE0F9FDB8L, // p_393->g_104
        0x759BL, // p_393->g_108
        (VECTOR(int16_t, 4))(0x1D13L, (VECTOR(int16_t, 2))(0x1D13L, 0x330EL), 0x330EL), // p_393->g_115
        {{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0},{&p_393->g_3,(void*)0,&p_393->g_3,&p_393->g_3,(void*)0}}, // p_393->g_130
        (void*)0, // p_393->g_145
        {0xBA2FL}, // p_393->g_151
        &p_393->g_151, // p_393->g_150
        &p_393->g_150, // p_393->g_149
        &p_393->g_42, // p_393->g_185
        &p_393->g_185, // p_393->g_184
        1UL, // p_393->g_194
        4294967289UL, // p_393->g_196
        {(void*)0,&p_393->g_3,(void*)0,(void*)0,&p_393->g_3,(void*)0,(void*)0,&p_393->g_3}, // p_393->g_197
        (void*)0, // p_393->g_198
        &p_393->g_96, // p_393->g_200
        (void*)0, // p_393->g_226
        (void*)0, // p_393->g_227
        {&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96,&p_393->g_96}, // p_393->g_229
        &p_393->g_229[7], // p_393->g_228
        (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 1UL), 1UL), // p_393->g_234
        (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x91L), 0x91L), 0x91L, 253UL, 0x91L), // p_393->g_236
        65535UL, // p_393->g_264
        (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x65L), 0x65L), 0x65L, 250UL, 0x65L, (VECTOR(uint8_t, 2))(250UL, 0x65L), (VECTOR(uint8_t, 2))(250UL, 0x65L), 250UL, 0x65L, 250UL, 0x65L), // p_393->g_278
        (VECTOR(uint32_t, 16))(0x118C57C5L, (VECTOR(uint32_t, 4))(0x118C57C5L, (VECTOR(uint32_t, 2))(0x118C57C5L, 5UL), 5UL), 5UL, 0x118C57C5L, 5UL, (VECTOR(uint32_t, 2))(0x118C57C5L, 5UL), (VECTOR(uint32_t, 2))(0x118C57C5L, 5UL), 0x118C57C5L, 5UL, 0x118C57C5L, 5UL), // p_393->g_295
        (-1L), // p_393->g_312
        {{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}},{{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L},{0x87CC0644F6611DB1L}}}, // p_393->g_314
        0x5378EA7FL, // p_393->g_318
        0x6A26EEE2L, // p_393->g_330
        {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_393->g_352
        &p_393->g_352[0][1], // p_393->g_351
        &p_393->g_351, // p_393->g_350
        &p_393->g_151, // p_393->g_356
        {&p_393->g_356,&p_393->g_356}, // p_393->g_355
        &p_393->g_355[1], // p_393->g_354
        0x1522DD1FL, // p_393->g_358
        &p_393->g_229[7], // p_393->g_361
        (VECTOR(int32_t, 2))(0L, 0x5C2006C5L), // p_393->g_363
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1BA20A1AL), 0x1BA20A1AL), // p_393->g_364
        (VECTOR(int32_t, 8))(0x72974A7CL, (VECTOR(int32_t, 4))(0x72974A7CL, (VECTOR(int32_t, 2))(0x72974A7CL, 0x6141C3E4L), 0x6141C3E4L), 0x6141C3E4L, 0x72974A7CL, 0x6141C3E4L), // p_393->g_365
        (VECTOR(int32_t, 2))(1L, 0x50F22BE4L), // p_393->g_367
        (VECTOR(int8_t, 2))(0x24L, 0x55L), // p_393->g_368
        (VECTOR(uint16_t, 2))(0x28B5L, 65535UL), // p_393->g_376
        0x72378498L, // p_393->g_382
        0, // p_393->v_collective
        sequence_input[get_global_id(0)], // p_393->global_0_offset
        sequence_input[get_global_id(1)], // p_393->global_1_offset
        sequence_input[get_global_id(2)], // p_393->global_2_offset
        sequence_input[get_local_id(0)], // p_393->local_0_offset
        sequence_input[get_local_id(1)], // p_393->local_1_offset
        sequence_input[get_local_id(2)], // p_393->local_2_offset
        sequence_input[get_group_id(0)], // p_393->group_0_offset
        sequence_input[get_group_id(1)], // p_393->group_1_offset
        sequence_input[get_group_id(2)], // p_393->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 234)), permutations[0][get_linear_local_id()])), // p_393->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_394 = c_395;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_393);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_393->g_3, "p_393->g_3", print_hash_value);
    transparent_crc(p_393->g_7, "p_393->g_7", print_hash_value);
    transparent_crc(p_393->g_34.x, "p_393->g_34.x", print_hash_value);
    transparent_crc(p_393->g_34.y, "p_393->g_34.y", print_hash_value);
    transparent_crc(p_393->g_34.z, "p_393->g_34.z", print_hash_value);
    transparent_crc(p_393->g_34.w, "p_393->g_34.w", print_hash_value);
    transparent_crc(p_393->g_35.s0, "p_393->g_35.s0", print_hash_value);
    transparent_crc(p_393->g_35.s1, "p_393->g_35.s1", print_hash_value);
    transparent_crc(p_393->g_35.s2, "p_393->g_35.s2", print_hash_value);
    transparent_crc(p_393->g_35.s3, "p_393->g_35.s3", print_hash_value);
    transparent_crc(p_393->g_35.s4, "p_393->g_35.s4", print_hash_value);
    transparent_crc(p_393->g_35.s5, "p_393->g_35.s5", print_hash_value);
    transparent_crc(p_393->g_35.s6, "p_393->g_35.s6", print_hash_value);
    transparent_crc(p_393->g_35.s7, "p_393->g_35.s7", print_hash_value);
    transparent_crc(p_393->g_35.s8, "p_393->g_35.s8", print_hash_value);
    transparent_crc(p_393->g_35.s9, "p_393->g_35.s9", print_hash_value);
    transparent_crc(p_393->g_35.sa, "p_393->g_35.sa", print_hash_value);
    transparent_crc(p_393->g_35.sb, "p_393->g_35.sb", print_hash_value);
    transparent_crc(p_393->g_35.sc, "p_393->g_35.sc", print_hash_value);
    transparent_crc(p_393->g_35.sd, "p_393->g_35.sd", print_hash_value);
    transparent_crc(p_393->g_35.se, "p_393->g_35.se", print_hash_value);
    transparent_crc(p_393->g_35.sf, "p_393->g_35.sf", print_hash_value);
    transparent_crc(p_393->g_42, "p_393->g_42", print_hash_value);
    transparent_crc(p_393->g_52.s0, "p_393->g_52.s0", print_hash_value);
    transparent_crc(p_393->g_52.s1, "p_393->g_52.s1", print_hash_value);
    transparent_crc(p_393->g_52.s2, "p_393->g_52.s2", print_hash_value);
    transparent_crc(p_393->g_52.s3, "p_393->g_52.s3", print_hash_value);
    transparent_crc(p_393->g_52.s4, "p_393->g_52.s4", print_hash_value);
    transparent_crc(p_393->g_52.s5, "p_393->g_52.s5", print_hash_value);
    transparent_crc(p_393->g_52.s6, "p_393->g_52.s6", print_hash_value);
    transparent_crc(p_393->g_52.s7, "p_393->g_52.s7", print_hash_value);
    transparent_crc(p_393->g_53.x, "p_393->g_53.x", print_hash_value);
    transparent_crc(p_393->g_53.y, "p_393->g_53.y", print_hash_value);
    transparent_crc(p_393->g_53.z, "p_393->g_53.z", print_hash_value);
    transparent_crc(p_393->g_53.w, "p_393->g_53.w", print_hash_value);
    transparent_crc(p_393->g_66.s0, "p_393->g_66.s0", print_hash_value);
    transparent_crc(p_393->g_66.s1, "p_393->g_66.s1", print_hash_value);
    transparent_crc(p_393->g_66.s2, "p_393->g_66.s2", print_hash_value);
    transparent_crc(p_393->g_66.s3, "p_393->g_66.s3", print_hash_value);
    transparent_crc(p_393->g_66.s4, "p_393->g_66.s4", print_hash_value);
    transparent_crc(p_393->g_66.s5, "p_393->g_66.s5", print_hash_value);
    transparent_crc(p_393->g_66.s6, "p_393->g_66.s6", print_hash_value);
    transparent_crc(p_393->g_66.s7, "p_393->g_66.s7", print_hash_value);
    transparent_crc(p_393->g_73, "p_393->g_73", print_hash_value);
    transparent_crc(p_393->g_92.x, "p_393->g_92.x", print_hash_value);
    transparent_crc(p_393->g_92.y, "p_393->g_92.y", print_hash_value);
    transparent_crc(p_393->g_92.z, "p_393->g_92.z", print_hash_value);
    transparent_crc(p_393->g_92.w, "p_393->g_92.w", print_hash_value);
    transparent_crc(p_393->g_96, "p_393->g_96", print_hash_value);
    transparent_crc(p_393->g_97.s0, "p_393->g_97.s0", print_hash_value);
    transparent_crc(p_393->g_97.s1, "p_393->g_97.s1", print_hash_value);
    transparent_crc(p_393->g_97.s2, "p_393->g_97.s2", print_hash_value);
    transparent_crc(p_393->g_97.s3, "p_393->g_97.s3", print_hash_value);
    transparent_crc(p_393->g_97.s4, "p_393->g_97.s4", print_hash_value);
    transparent_crc(p_393->g_97.s5, "p_393->g_97.s5", print_hash_value);
    transparent_crc(p_393->g_97.s6, "p_393->g_97.s6", print_hash_value);
    transparent_crc(p_393->g_97.s7, "p_393->g_97.s7", print_hash_value);
    transparent_crc(p_393->g_104, "p_393->g_104", print_hash_value);
    transparent_crc(p_393->g_108, "p_393->g_108", print_hash_value);
    transparent_crc(p_393->g_115.x, "p_393->g_115.x", print_hash_value);
    transparent_crc(p_393->g_115.y, "p_393->g_115.y", print_hash_value);
    transparent_crc(p_393->g_115.z, "p_393->g_115.z", print_hash_value);
    transparent_crc(p_393->g_115.w, "p_393->g_115.w", print_hash_value);
    transparent_crc(p_393->g_151.f0, "p_393->g_151.f0", print_hash_value);
    transparent_crc(p_393->g_194, "p_393->g_194", print_hash_value);
    transparent_crc(p_393->g_196, "p_393->g_196", print_hash_value);
    transparent_crc(p_393->g_234.x, "p_393->g_234.x", print_hash_value);
    transparent_crc(p_393->g_234.y, "p_393->g_234.y", print_hash_value);
    transparent_crc(p_393->g_234.z, "p_393->g_234.z", print_hash_value);
    transparent_crc(p_393->g_234.w, "p_393->g_234.w", print_hash_value);
    transparent_crc(p_393->g_236.s0, "p_393->g_236.s0", print_hash_value);
    transparent_crc(p_393->g_236.s1, "p_393->g_236.s1", print_hash_value);
    transparent_crc(p_393->g_236.s2, "p_393->g_236.s2", print_hash_value);
    transparent_crc(p_393->g_236.s3, "p_393->g_236.s3", print_hash_value);
    transparent_crc(p_393->g_236.s4, "p_393->g_236.s4", print_hash_value);
    transparent_crc(p_393->g_236.s5, "p_393->g_236.s5", print_hash_value);
    transparent_crc(p_393->g_236.s6, "p_393->g_236.s6", print_hash_value);
    transparent_crc(p_393->g_236.s7, "p_393->g_236.s7", print_hash_value);
    transparent_crc(p_393->g_264, "p_393->g_264", print_hash_value);
    transparent_crc(p_393->g_278.s0, "p_393->g_278.s0", print_hash_value);
    transparent_crc(p_393->g_278.s1, "p_393->g_278.s1", print_hash_value);
    transparent_crc(p_393->g_278.s2, "p_393->g_278.s2", print_hash_value);
    transparent_crc(p_393->g_278.s3, "p_393->g_278.s3", print_hash_value);
    transparent_crc(p_393->g_278.s4, "p_393->g_278.s4", print_hash_value);
    transparent_crc(p_393->g_278.s5, "p_393->g_278.s5", print_hash_value);
    transparent_crc(p_393->g_278.s6, "p_393->g_278.s6", print_hash_value);
    transparent_crc(p_393->g_278.s7, "p_393->g_278.s7", print_hash_value);
    transparent_crc(p_393->g_278.s8, "p_393->g_278.s8", print_hash_value);
    transparent_crc(p_393->g_278.s9, "p_393->g_278.s9", print_hash_value);
    transparent_crc(p_393->g_278.sa, "p_393->g_278.sa", print_hash_value);
    transparent_crc(p_393->g_278.sb, "p_393->g_278.sb", print_hash_value);
    transparent_crc(p_393->g_278.sc, "p_393->g_278.sc", print_hash_value);
    transparent_crc(p_393->g_278.sd, "p_393->g_278.sd", print_hash_value);
    transparent_crc(p_393->g_278.se, "p_393->g_278.se", print_hash_value);
    transparent_crc(p_393->g_278.sf, "p_393->g_278.sf", print_hash_value);
    transparent_crc(p_393->g_295.s0, "p_393->g_295.s0", print_hash_value);
    transparent_crc(p_393->g_295.s1, "p_393->g_295.s1", print_hash_value);
    transparent_crc(p_393->g_295.s2, "p_393->g_295.s2", print_hash_value);
    transparent_crc(p_393->g_295.s3, "p_393->g_295.s3", print_hash_value);
    transparent_crc(p_393->g_295.s4, "p_393->g_295.s4", print_hash_value);
    transparent_crc(p_393->g_295.s5, "p_393->g_295.s5", print_hash_value);
    transparent_crc(p_393->g_295.s6, "p_393->g_295.s6", print_hash_value);
    transparent_crc(p_393->g_295.s7, "p_393->g_295.s7", print_hash_value);
    transparent_crc(p_393->g_295.s8, "p_393->g_295.s8", print_hash_value);
    transparent_crc(p_393->g_295.s9, "p_393->g_295.s9", print_hash_value);
    transparent_crc(p_393->g_295.sa, "p_393->g_295.sa", print_hash_value);
    transparent_crc(p_393->g_295.sb, "p_393->g_295.sb", print_hash_value);
    transparent_crc(p_393->g_295.sc, "p_393->g_295.sc", print_hash_value);
    transparent_crc(p_393->g_295.sd, "p_393->g_295.sd", print_hash_value);
    transparent_crc(p_393->g_295.se, "p_393->g_295.se", print_hash_value);
    transparent_crc(p_393->g_295.sf, "p_393->g_295.sf", print_hash_value);
    transparent_crc(p_393->g_312, "p_393->g_312", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_393->g_314[i][j][k], "p_393->g_314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_393->g_318, "p_393->g_318", print_hash_value);
    transparent_crc(p_393->g_330, "p_393->g_330", print_hash_value);
    transparent_crc(p_393->g_358, "p_393->g_358", print_hash_value);
    transparent_crc(p_393->g_363.x, "p_393->g_363.x", print_hash_value);
    transparent_crc(p_393->g_363.y, "p_393->g_363.y", print_hash_value);
    transparent_crc(p_393->g_364.x, "p_393->g_364.x", print_hash_value);
    transparent_crc(p_393->g_364.y, "p_393->g_364.y", print_hash_value);
    transparent_crc(p_393->g_364.z, "p_393->g_364.z", print_hash_value);
    transparent_crc(p_393->g_364.w, "p_393->g_364.w", print_hash_value);
    transparent_crc(p_393->g_365.s0, "p_393->g_365.s0", print_hash_value);
    transparent_crc(p_393->g_365.s1, "p_393->g_365.s1", print_hash_value);
    transparent_crc(p_393->g_365.s2, "p_393->g_365.s2", print_hash_value);
    transparent_crc(p_393->g_365.s3, "p_393->g_365.s3", print_hash_value);
    transparent_crc(p_393->g_365.s4, "p_393->g_365.s4", print_hash_value);
    transparent_crc(p_393->g_365.s5, "p_393->g_365.s5", print_hash_value);
    transparent_crc(p_393->g_365.s6, "p_393->g_365.s6", print_hash_value);
    transparent_crc(p_393->g_365.s7, "p_393->g_365.s7", print_hash_value);
    transparent_crc(p_393->g_367.x, "p_393->g_367.x", print_hash_value);
    transparent_crc(p_393->g_367.y, "p_393->g_367.y", print_hash_value);
    transparent_crc(p_393->g_368.x, "p_393->g_368.x", print_hash_value);
    transparent_crc(p_393->g_368.y, "p_393->g_368.y", print_hash_value);
    transparent_crc(p_393->g_376.x, "p_393->g_376.x", print_hash_value);
    transparent_crc(p_393->g_376.y, "p_393->g_376.y", print_hash_value);
    transparent_crc(p_393->g_382, "p_393->g_382", print_hash_value);
    transparent_crc(p_393->v_collective, "p_393->v_collective", print_hash_value);
    transparent_crc(p_393->l_comm_values[get_linear_local_id()], "p_393->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_393->g_comm_values[get_linear_group_id() * 234 + get_linear_local_id()], "p_393->g_comm_values[get_linear_group_id() * 234 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
