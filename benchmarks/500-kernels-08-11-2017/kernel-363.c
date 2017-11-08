// --atomics 75 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 63,84,1 -l 9,14,1
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

__constant uint32_t permutations[10][126] = {
{105,45,47,15,14,36,28,54,98,13,103,91,53,117,74,120,96,27,2,95,114,37,0,99,113,100,118,80,9,124,93,46,42,18,39,50,23,58,69,87,85,12,59,6,111,122,40,112,44,25,72,3,35,5,71,82,88,26,22,121,1,7,78,75,73,79,110,65,63,116,52,109,24,70,97,32,56,94,64,49,90,34,104,8,41,29,101,68,4,115,89,16,67,62,55,92,86,106,43,30,11,38,102,33,17,66,84,125,83,31,19,61,119,77,20,107,123,60,51,21,76,48,10,81,57,108}, // permutation 0
{63,89,9,82,57,101,51,96,86,52,48,32,13,15,114,36,107,112,90,3,61,68,18,10,120,40,87,97,106,91,39,56,53,38,122,124,27,30,58,70,119,105,47,62,1,0,4,54,95,72,42,94,14,123,22,78,71,16,73,25,45,83,49,24,93,43,19,84,80,115,66,12,64,99,26,69,17,76,21,77,20,44,110,7,125,59,79,37,29,35,31,46,74,108,11,121,98,109,28,104,75,5,60,81,34,102,100,41,88,116,8,50,111,6,103,92,23,113,85,117,2,33,118,65,55,67}, // permutation 1
{97,27,56,14,98,16,123,84,33,121,115,6,50,51,69,46,67,73,120,89,110,96,42,49,61,91,68,111,19,5,44,1,9,37,28,117,66,3,18,26,86,82,70,40,93,41,59,101,23,108,102,90,105,122,109,47,113,106,100,10,38,17,79,53,83,36,11,103,8,39,85,78,34,65,116,104,24,35,99,107,45,95,80,77,29,74,81,92,76,52,21,64,4,0,88,124,22,54,125,118,62,31,94,87,75,32,30,43,55,63,60,57,112,119,25,71,114,12,72,58,13,20,2,15,7,48}, // permutation 2
{100,17,11,124,34,35,58,3,38,89,64,88,61,102,104,103,80,29,106,96,28,39,84,30,14,19,31,85,45,76,90,125,120,66,56,75,117,0,107,116,12,23,6,68,51,83,108,15,78,71,1,44,121,13,118,99,86,49,105,10,25,41,113,74,63,101,111,70,59,69,115,65,62,95,42,60,123,21,24,32,77,79,54,52,57,50,81,92,93,43,119,2,37,72,97,73,47,7,9,8,27,114,18,4,48,112,82,122,5,22,40,109,98,87,26,91,16,55,46,53,94,110,36,20,67,33}, // permutation 3
{37,86,109,81,85,1,43,20,21,111,115,27,60,67,114,121,30,105,10,35,92,113,89,122,79,52,107,55,45,3,33,36,23,98,94,22,48,5,78,91,102,71,117,51,125,73,83,112,41,82,4,11,32,116,28,123,64,101,57,54,61,25,68,84,96,58,72,118,53,119,97,65,88,63,103,49,46,24,108,70,12,34,104,0,66,31,80,99,7,69,87,110,16,42,106,2,29,56,124,6,50,38,76,39,62,59,95,90,40,8,44,100,17,19,74,77,75,9,93,120,26,47,14,18,13,15}, // permutation 4
{37,59,91,61,20,42,57,92,1,70,94,19,76,25,68,120,40,90,105,2,46,50,109,118,55,75,86,49,28,65,123,119,13,33,45,124,7,38,82,67,77,72,30,43,14,122,108,112,110,114,69,107,35,78,58,51,88,44,89,31,62,84,21,103,113,116,101,93,63,36,15,73,60,8,104,125,85,106,100,6,71,97,98,64,96,41,23,0,16,66,18,56,99,4,17,81,115,3,39,111,34,26,95,54,80,52,74,5,12,117,10,53,79,24,102,47,22,27,48,29,87,9,11,121,32,83}, // permutation 5
{83,74,112,52,99,30,76,10,108,80,106,73,27,90,60,45,124,115,120,58,18,26,114,121,51,2,53,31,77,82,7,92,57,113,62,24,50,109,81,98,84,122,1,15,67,95,71,49,25,13,110,34,41,93,16,4,65,8,88,72,32,29,78,66,85,36,89,38,117,70,100,47,56,37,116,22,48,87,17,61,96,103,12,3,119,125,0,75,35,63,104,33,28,11,69,97,14,55,40,54,111,101,20,23,94,6,43,21,86,44,105,42,19,9,107,5,91,79,59,68,102,46,39,123,118,64}, // permutation 6
{121,92,122,77,83,116,26,96,48,99,123,55,6,46,104,50,35,13,41,33,101,105,124,53,52,49,31,79,117,110,32,86,74,18,78,39,30,8,29,93,120,2,11,112,44,22,59,63,17,68,91,94,76,103,42,9,100,69,90,38,66,106,51,98,12,24,10,82,67,25,16,36,0,119,40,64,84,125,115,43,102,58,109,37,27,47,4,88,23,5,14,111,62,60,54,71,20,87,65,72,118,56,97,19,28,61,15,57,34,85,70,21,75,3,80,95,73,7,81,89,108,45,107,113,114,1}, // permutation 7
{49,82,13,89,40,104,64,124,83,66,75,63,20,47,113,58,120,60,15,23,39,115,68,86,9,14,17,30,35,88,22,110,117,69,42,77,19,61,33,91,6,43,105,97,111,99,67,57,11,48,10,37,31,62,29,121,101,102,59,103,53,50,2,12,106,7,73,24,52,55,93,25,0,65,4,81,18,54,74,118,44,28,122,79,16,108,1,96,112,84,38,36,85,114,5,87,51,125,107,45,76,78,71,119,100,8,95,72,34,116,41,80,56,90,123,70,21,46,98,26,3,27,109,92,94,32}, // permutation 8
{47,92,7,111,9,71,124,99,100,78,103,89,125,5,123,102,59,105,51,6,22,2,117,76,43,27,28,108,45,29,53,56,54,112,19,113,30,14,84,0,37,81,107,61,69,119,122,85,8,4,35,68,91,55,32,88,49,74,66,87,52,1,26,79,46,63,21,110,17,39,83,82,98,10,11,41,72,23,44,40,97,94,93,60,34,13,58,31,36,42,120,96,18,12,57,118,3,38,20,67,80,62,73,64,50,115,24,77,25,86,109,48,90,101,75,65,95,121,114,70,106,33,116,16,15,104} // permutation 9
};

// Seed: 2453740933

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_20;
    volatile int16_t g_23;
    uint32_t g_24;
    int32_t ** volatile g_52[10];
    int32_t *g_54[4][8];
    int32_t ** volatile g_53;
    int32_t g_63;
    int32_t * volatile g_62;
    VECTOR(uint32_t, 16) g_66;
    volatile VECTOR(uint32_t, 4) g_67;
    volatile VECTOR(uint32_t, 16) g_85;
    VECTOR(uint8_t, 4) g_134;
    int8_t g_137;
    int64_t *g_138;
    uint64_t g_150;
    VECTOR(int32_t, 16) g_154;
    int16_t g_161;
    int32_t *g_164[7];
    uint16_t g_173;
    VECTOR(uint64_t, 16) g_191;
    uint32_t g_229;
    uint16_t g_231;
    uint16_t g_233[7][10];
    volatile int16_t **g_252;
    VECTOR(int8_t, 2) g_282;
    int8_t g_285;
    VECTOR(int16_t, 4) g_392;
    VECTOR(uint8_t, 4) g_402;
    VECTOR(uint32_t, 2) g_419;
    uint16_t *g_454;
    uint16_t *g_455[8];
    int16_t *g_460;
    uint64_t *g_462;
    uint64_t **g_461;
    uint64_t **g_465;
    uint8_t *g_506;
    volatile uint8_t g_508;
    volatile uint8_t *g_507;
    uint64_t g_524;
    int32_t g_588;
    int32_t * volatile g_630;
    int8_t g_632;
    int16_t g_658;
    VECTOR(int8_t, 2) g_666;
    VECTOR(uint32_t, 2) g_701;
    int32_t * volatile g_711;
    VECTOR(uint32_t, 2) g_757;
    VECTOR(int32_t, 16) g_778;
    VECTOR(uint16_t, 16) g_842;
    volatile VECTOR(int32_t, 16) g_847;
    int32_t *g_861;
    VECTOR(uint64_t, 8) g_889;
    VECTOR(uint16_t, 2) g_894;
    VECTOR(uint16_t, 16) g_895;
    volatile VECTOR(uint16_t, 8) g_896;
    volatile VECTOR(uint16_t, 8) g_897;
    VECTOR(int64_t, 8) g_904;
    uint16_t **g_912;
    VECTOR(uint8_t, 16) g_919;
    volatile VECTOR(int8_t, 2) g_933;
    int32_t ** volatile g_960;
    volatile VECTOR(uint64_t, 2) g_1000;
    VECTOR(uint64_t, 16) g_1003;
    volatile VECTOR(uint32_t, 2) g_1006;
    volatile uint32_t g_1020;
    volatile uint32_t *g_1019;
    volatile uint32_t ** volatile g_1018;
    volatile uint32_t ** volatile *g_1017;
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
uint64_t  func_1(struct S0 * p_1028);
int32_t  func_8(uint8_t  p_9, int64_t  p_10, int16_t  p_11, uint32_t  p_12, int64_t  p_13, struct S0 * p_1028);
int32_t  func_16(int64_t  p_17, struct S0 * p_1028);
int64_t  func_73(int32_t  p_74, uint32_t  p_75, int32_t * p_76, int32_t ** p_77, struct S0 * p_1028);
int64_t  func_86(int32_t ** p_87, int32_t  p_88, struct S0 * p_1028);
int32_t  func_99(int32_t * p_100, int32_t * p_101, int64_t  p_102, uint32_t  p_103, uint16_t  p_104, struct S0 * p_1028);
int64_t  func_107(int64_t  p_108, int32_t  p_109, int32_t * p_110, struct S0 * p_1028);
int32_t * func_115(int32_t ** p_116, int32_t * p_117, uint8_t  p_118, struct S0 * p_1028);
int32_t * func_119(int16_t  p_120, int32_t  p_121, int32_t * p_122, struct S0 * p_1028);
int32_t  func_123(int64_t * p_124, int64_t * p_125, int16_t  p_126, int32_t ** p_127, uint64_t  p_128, struct S0 * p_1028);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1028->g_3 p_1028->g_632 p_1028->g_711 p_1028->g_63 p_1028->g_20 p_1028->g_960 p_1028->g_54 p_1028->g_1000 p_1028->g_1003 p_1028->g_757 p_1028->g_1006 p_1028->g_1017 p_1028->g_894 p_1028->g_191 p_1028->g_658
 * writes: p_1028->g_3 p_1028->g_632 p_1028->g_63 p_1028->g_20 p_1028->g_164
 */
uint64_t  func_1(struct S0 * p_1028)
{ /* block id: 4 */
    int64_t l_6 = 0x3C4AB274BF90EDCAL;
    uint32_t l_872[5];
    VECTOR(int32_t, 16) l_873 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1072A8FDL), 0x1072A8FDL), 0x1072A8FDL, 0L, 0x1072A8FDL, (VECTOR(int32_t, 2))(0L, 0x1072A8FDL), (VECTOR(int32_t, 2))(0L, 0x1072A8FDL), 0L, 0x1072A8FDL, 0L, 0x1072A8FDL);
    int32_t l_874 = 1L;
    VECTOR(int64_t, 4) l_1013 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6FA48BC31CD57D40L), 0x6FA48BC31CD57D40L);
    int32_t *l_1023 = &p_1028->g_3;
    int32_t *l_1024[5];
    uint16_t l_1025[7][2] = {{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL},{0xE1ACL,0xFC0DL}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_872[i] = 0x24B203C7L;
    for (i = 0; i < 5; i++)
        l_1024[i] = &p_1028->g_20;
    for (p_1028->g_3 = 0; (p_1028->g_3 == 16); p_1028->g_3 = safe_add_func_int64_t_s_s(p_1028->g_3, 5))
    { /* block id: 7 */
        int32_t l_7 = (-7L);
        int32_t l_868[6] = {0x5A543133L,0x5A543133L,0x5A543133L,0x5A543133L,0x5A543133L,0x5A543133L};
        int32_t *l_869 = &l_7;
        int i;
        (1 + 1);
    }
    for (p_1028->g_632 = (-5); (p_1028->g_632 >= 2); ++p_1028->g_632)
    { /* block id: 454 */
        int32_t *l_998 = &p_1028->g_20;
        int64_t l_999 = 0x75BA5797ADBDC89CL;
        uint32_t *l_1016 = &p_1028->g_229;
        uint32_t **l_1015 = &l_1016;
        uint32_t ***l_1014 = &l_1015;
        for (p_1028->g_63 = 6; (p_1028->g_63 >= (-10)); p_1028->g_63 = safe_sub_func_uint8_t_u_u(p_1028->g_63, 3))
        { /* block id: 457 */
            int32_t *l_995 = (void*)0;
            int32_t *l_996 = (void*)0;
            int32_t *l_997 = &p_1028->g_20;
            (*l_997) |= (*p_1028->g_711);
            l_998 = func_115(&l_997, (*p_1028->g_960), (*l_997), p_1028);
            l_999 = 0x7C797054L;
            (*l_998) = (GROUP_DIVERGE(1, 1) | ((((VECTOR(uint64_t, 2))(p_1028->g_1000.yx)).odd ^ (((safe_sub_func_int64_t_s_s((-1L), ((VECTOR(uint64_t, 8))(p_1028->g_1003.s9961e34c)).s6)) < 0xE0L) , FAKE_DIVERGE(p_1028->group_1_offset, get_group_id(1), 10))) , (p_1028->g_757.x > (0xF7CD947FL ^ (l_873.s9 >= (safe_mod_func_int16_t_s_s((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1028->g_1006.yxyy)).odd)).xxyx)).z <= (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_997) = (l_872[3] , (((((((VECTOR(int64_t, 16))(l_1013.zzywwzwzwwzzyyyx)).s5 , l_1014) == p_1028->g_1017) && (safe_lshift_func_uint8_t_u_u(p_1028->g_757.x, 0))) , p_1028->g_894.x) , l_1013.y))), 0x172A4548L)), GROUP_DIVERGE(2, 1))) && p_1028->g_191.sf) ^ p_1028->g_658), p_1028->g_191.sb))), ((VECTOR(uint64_t, 4))(0x79077D000B7B5FF2L)), 0x230540B616F1FA95L, (*l_997), 0xAB23CA7F7B7E8BBAL, (*l_998), ((VECTOR(uint64_t, 4))(0x64A3BBDC88F2E285L)), 0x9D3F6FA51BD552E8L, 18446744073709551607UL, 5UL)))).s3 , (*l_998)) | (*l_998)) & p_1028->g_658), (*l_998))))))));
        }
    }
    l_1025[3][1]--;
    return p_1028->g_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_173 p_1028->g_889 p_1028->g_894 p_1028->g_895 p_1028->g_896 p_1028->g_897 p_1028->g_632 p_1028->g_904 p_1028->g_419 p_1028->g_630 p_1028->g_63 p_1028->g_919 p_1028->g_455 p_1028->g_701 p_1028->g_20 p_1028->g_960
 * writes: p_1028->g_173 p_1028->g_161 p_1028->g_164 p_1028->g_912 p_1028->g_632 p_1028->g_137 p_1028->g_63 p_1028->g_20 p_1028->g_54
 */
int32_t  func_8(uint8_t  p_9, int64_t  p_10, int16_t  p_11, uint32_t  p_12, int64_t  p_13, struct S0 * p_1028)
{ /* block id: 381 */
    uint64_t l_880 = 18446744073709551615UL;
    int16_t *l_885 = &p_1028->g_161;
    VECTOR(uint64_t, 8) l_888 = (VECTOR(uint64_t, 8))(0xB20FCB3F43695F11L, (VECTOR(uint64_t, 4))(0xB20FCB3F43695F11L, (VECTOR(uint64_t, 2))(0xB20FCB3F43695F11L, 0x670F32DA78CD0CA6L), 0x670F32DA78CD0CA6L), 0x670F32DA78CD0CA6L, 0xB20FCB3F43695F11L, 0x670F32DA78CD0CA6L);
    VECTOR(uint16_t, 4) l_898 = (VECTOR(uint16_t, 4))(0xDE49L, (VECTOR(uint16_t, 2))(0xDE49L, 65526UL), 65526UL);
    VECTOR(uint8_t, 16) l_899 = (VECTOR(uint8_t, 16))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 251UL), 251UL), 251UL, 0xA8L, 251UL, (VECTOR(uint8_t, 2))(0xA8L, 251UL), (VECTOR(uint8_t, 2))(0xA8L, 251UL), 0xA8L, 251UL, 0xA8L, 251UL);
    VECTOR(uint8_t, 2) l_900 = (VECTOR(uint8_t, 2))(0xA8L, 248UL);
    VECTOR(uint16_t, 2) l_901 = (VECTOR(uint16_t, 2))(0x079CL, 0xCF8CL);
    int32_t **l_903 = &p_1028->g_54[3][6];
    int32_t ***l_902 = &l_903;
    uint16_t **l_910 = &p_1028->g_455[4];
    int32_t l_913 = 0x7005C80AL;
    VECTOR(uint8_t, 16) l_934 = (VECTOR(uint8_t, 16))(0x20L, (VECTOR(uint8_t, 4))(0x20L, (VECTOR(uint8_t, 2))(0x20L, 0xF2L), 0xF2L), 0xF2L, 0x20L, 0xF2L, (VECTOR(uint8_t, 2))(0x20L, 0xF2L), (VECTOR(uint8_t, 2))(0x20L, 0xF2L), 0x20L, 0xF2L, 0x20L, 0xF2L);
    int32_t *l_980 = &p_1028->g_20;
    int32_t *l_981 = (void*)0;
    int32_t *l_982 = (void*)0;
    int32_t *l_983 = &p_1028->g_20;
    int32_t *l_984 = &p_1028->g_20;
    int32_t *l_985[2];
    uint16_t l_986 = 0x6EAAL;
    int32_t *l_989[7];
    int32_t *l_990 = &l_913;
    int i;
    for (i = 0; i < 2; i++)
        l_985[i] = &p_1028->g_63;
    for (i = 0; i < 7; i++)
        l_989[i] = (void*)0;
    for (p_1028->g_173 = (-23); (p_1028->g_173 <= 32); p_1028->g_173 = safe_add_func_int64_t_s_s(p_1028->g_173, 8))
    { /* block id: 384 */
        int32_t *l_877 = &p_1028->g_20;
        int32_t *l_878 = &p_1028->g_63;
        int32_t *l_879[2];
        int i;
        for (i = 0; i < 2; i++)
            l_879[i] = &p_1028->g_63;
        --l_880;
    }
    if ((((((safe_mul_func_int16_t_s_s(((*l_885) = l_880), ((VECTOR(uint16_t, 2))(7UL, 0xE222L)).odd)) ^ GROUP_DIVERGE(2, 1)) | (safe_rshift_func_uint8_t_u_u(l_880, 6))) > l_880) < ((&l_885 != (void*)0) & ((((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 8))(l_888.s25204753)), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(p_1028->g_889.s7142454164042467)).sf5, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(p_1028->g_894.yyxxyxxyyxyyxxyx)).se764, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(p_1028->g_895.s3789097e6656e92e)).se3, ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(p_1028->g_896.s2416)).xwzzyxywwxwyxzyz, ((VECTOR(uint16_t, 4))(p_1028->g_897.s2047)).yzwzwyzxyywwzwyx))).s06)))))).yxxx))).xwzxyywy)).s0440270771125206)).sb7f5)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(l_898.ywyzwwyxwzywxwyy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(l_899.scdf4)).zywxyyyxwxxyzyzw, ((VECTOR(uint8_t, 2))(l_900.xx)).yxxxxyyyxyyxxxxx))).s7ae4)).ywxxyxxw)).s1611434637367447))).sf67d)).hi))).xxxyxyyy, (uint16_t)((VECTOR(uint16_t, 16))(l_901.yxyxyxyyxxyxxxyx)).s5, (uint16_t)(&p_1028->g_54[2][2] == ((*l_902) = &p_1028->g_164[5]))))).s1 && p_1028->g_632), 6)) ^ ((VECTOR(int64_t, 4))(p_1028->g_904.s4652)).z), ((-2L) && p_1028->g_419.y))), ((VECTOR(uint64_t, 2))(0x82156AF0E8357EE2L)), 0UL)).odd))).xyyx)).wyyxxwzy, (uint64_t)p_9))).s77)).yyyxxxxy)).s0505517340600071)).sda))), ((VECTOR(uint64_t, 2))(0UL))))), 1UL, 0xE8AA7F67FA042A67L, 4UL, 0xDD09E242F70B03BDL)).s5 <= 5L) , p_12))))
    { /* block id: 389 */
        for (p_10 = 0; (p_10 != 8); p_10 = safe_add_func_int16_t_s_s(p_10, 8))
        { /* block id: 392 */
            VECTOR(uint8_t, 2) l_918 = (VECTOR(uint8_t, 2))(255UL, 0x72L);
            uint16_t *l_920 = &p_1028->g_231;
            int8_t *l_921 = &p_1028->g_632;
            int8_t *l_922 = &p_1028->g_137;
            int32_t *l_923 = &p_1028->g_20;
            int i;
            if ((*p_1028->g_630))
                break;
            for (p_1028->g_161 = (-13); (p_1028->g_161 > (-10)); ++p_1028->g_161)
            { /* block id: 396 */
                int32_t *l_909[8] = {&p_1028->g_63,&p_1028->g_63,&p_1028->g_63,&p_1028->g_63,&p_1028->g_63,&p_1028->g_63,&p_1028->g_63,&p_1028->g_63};
                uint16_t ***l_911[4] = {&l_910,&l_910,&l_910,&l_910};
                int i;
                (**l_902) = l_909[2];
                l_913 &= ((p_1028->g_912 = l_910) == (void*)0);
            }
            (**l_902) = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(6UL, 0xDCL, 255UL, ((VECTOR(uint8_t, 8))(l_918.yxyxyxyx)), 0x8DL, 0xA9L, 255UL, 1UL, 0x1BL)))).even, (uint8_t)((VECTOR(uint8_t, 4))(p_1028->g_919.s0e57)).z, (uint8_t)(l_920 != (*l_910))))).s2, ((*l_922) = ((*l_921) = p_1028->g_701.x)))), 4)) , l_923);
        }
        (**l_902) = (void*)0;
    }
    else
    { /* block id: 406 */
        int16_t l_952 = 0x3486L;
        int32_t *l_954 = &p_1028->g_63;
        for (p_1028->g_63 = (-20); (p_1028->g_63 == 15); p_1028->g_63 = safe_add_func_int32_t_s_s(p_1028->g_63, 9))
        { /* block id: 409 */
            int16_t l_946 = 0x1434L;
            int32_t *l_955 = &p_1028->g_20;
            int32_t l_956 = 0x3FC7A8A4L;
            for (l_880 = 0; (l_880 == 45); l_880 = safe_add_func_int32_t_s_s(l_880, 1))
            { /* block id: 412 */
                uint8_t l_951 = 5UL;
                int32_t l_953 = 0x37D2F67BL;
                int32_t *l_958[7][8][4] = {{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}},{{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0},{(void*)0,&l_913,(void*)0,(void*)0}}};
                int i, j, k;
                for (p_1028->g_20 = (-4); (p_1028->g_20 == 18); ++p_1028->g_20)
                { /* block id: 415 */
                    uint8_t l_939[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int16_t *l_957 = &l_946;
                    int32_t *l_959 = (void*)0;
                    uint32_t **l_961 = (void*)0;
                    uint32_t ***l_962 = &l_961;
                    int i;
                    (*p_1028->g_960) = ((**l_902) = l_959);
                    (*l_903) = (void*)0;
                    (*l_962) = l_961;
                }
            }
            if ((atomic_inc(&p_1028->l_atomic_input[35]) == 9))
            { /* block id: 428 */
                VECTOR(int32_t, 4) l_963 = (VECTOR(int32_t, 4))(0x25DAE679L, (VECTOR(int32_t, 2))(0x25DAE679L, (-1L)), (-1L));
                VECTOR(uint64_t, 8) l_972 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                int8_t l_973[7] = {0L,(-1L),0L,0L,(-1L),0L,0L};
                VECTOR(uint8_t, 4) l_974 = (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x94L), 0x94L);
                uint32_t l_975 = 4294967295UL;
                uint64_t l_976[9] = {0UL,0xF8CE8CA3BA0781FCL,0UL,0UL,0xF8CE8CA3BA0781FCL,0UL,0UL,0xF8CE8CA3BA0781FCL,0UL};
                int32_t *l_977 = (void*)0;
                int32_t **l_978 = &l_977;
                int32_t **l_979 = &l_977;
                int i;
                for (l_963.y = 0; (l_963.y != 11); ++l_963.y)
                { /* block id: 431 */
                    VECTOR(int64_t, 4) l_966 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 4L), 4L);
                    int16_t l_967 = 0x5A5DL;
                    int16_t l_968 = 0L;
                    uint32_t l_969 = 0xA4C09FA2L;
                    int i;
                    l_969++;
                }
                l_977 = (((l_973[1] = ((VECTOR(uint64_t, 2))(l_972.s45)).lo) , l_974.w) , ((l_976[0] &= l_975) , l_977));
                l_979 = l_978;
                unsigned int result = 0;
                result += l_963.w;
                result += l_963.z;
                result += l_963.y;
                result += l_963.x;
                result += l_972.s7;
                result += l_972.s6;
                result += l_972.s5;
                result += l_972.s4;
                result += l_972.s3;
                result += l_972.s2;
                result += l_972.s1;
                result += l_972.s0;
                int l_973_i0;
                for (l_973_i0 = 0; l_973_i0 < 7; l_973_i0++) {
                    result += l_973[l_973_i0];
                }
                result += l_974.w;
                result += l_974.z;
                result += l_974.y;
                result += l_974.x;
                result += l_975;
                int l_976_i0;
                for (l_976_i0 = 0; l_976_i0 < 9; l_976_i0++) {
                    result += l_976[l_976_i0];
                }
                atomic_add(&p_1028->l_special_values[35], result);
            }
            else
            { /* block id: 438 */
                (1 + 1);
            }
        }
        (*l_954) ^= p_12;
    }
    l_986--;
    (**l_902) = l_990;
    return (*l_983);
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_24 p_1028->g_53 p_1028->g_62 p_1028->g_54 p_1028->g_658 p_1028->g_20 p_1028->g_460 p_1028->g_711 p_1028->g_173 p_1028->g_66 p_1028->g_3 p_1028->g_comm_values p_1028->g_229 p_1028->g_233 p_1028->g_282 p_1028->l_comm_values p_1028->g_63 p_1028->g_191 p_1028->g_161 p_1028->g_285 p_1028->g_134 p_1028->g_419 p_1028->g_154 p_1028->g_454 p_1028->g_630 p_1028->g_701 p_1028->g_632
 * writes: p_1028->g_20 p_1028->g_24 p_1028->g_54 p_1028->g_63 p_1028->g_66 p_1028->g_comm_values p_1028->g_150 p_1028->g_173 p_1028->g_233 p_1028->l_comm_values p_1028->g_137 p_1028->g_164 p_1028->g_285 p_1028->g_231 p_1028->g_161 p_1028->g_419 p_1028->g_658 p_1028->g_524 p_1028->g_632 p_1028->g_229 p_1028->g_861
 */
int32_t  func_16(int64_t  p_17, struct S0 * p_1028)
{ /* block id: 8 */
    uint32_t l_18 = 0x2A17D0B0L;
    int32_t *l_19 = &p_1028->g_20;
    uint16_t l_111[8];
    int32_t l_636 = 8L;
    int16_t **l_645[2][6][9] = {{{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460}},{{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460},{&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460,&p_1028->g_460}}};
    int64_t **l_708 = &p_1028->g_138;
    int32_t l_805 = 0x31AE6AFCL;
    int32_t l_811 = 1L;
    int32_t l_813[4];
    uint8_t *l_844[2];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_111[i] = 0xF560L;
    for (i = 0; i < 4; i++)
        l_813[i] = (-8L);
    for (i = 0; i < 2; i++)
        l_844[i] = (void*)0;
    if (((*l_19) = l_18))
    { /* block id: 10 */
        int8_t l_21 = 0L;
        int32_t *l_22[9][9] = {{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3},{(void*)0,(void*)0,&p_1028->g_20,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3,&p_1028->g_3}};
        int i, j;
        --p_1028->g_24;
    }
    else
    { /* block id: 12 */
        uint32_t l_45 = 0x2E7C525AL;
        for (l_18 = (-7); (l_18 < 22); l_18++)
        { /* block id: 15 */
            int32_t *l_29 = &p_1028->g_20;
            int32_t *l_30 = (void*)0;
            int32_t *l_31 = &p_1028->g_20;
            int32_t *l_32 = &p_1028->g_20;
            int32_t *l_33 = &p_1028->g_20;
            int32_t *l_34 = &p_1028->g_20;
            int32_t *l_35 = &p_1028->g_20;
            int32_t *l_36 = &p_1028->g_20;
            int32_t *l_37 = &p_1028->g_20;
            int32_t *l_38 = (void*)0;
            int32_t *l_39 = &p_1028->g_20;
            int32_t *l_40 = &p_1028->g_20;
            int32_t *l_41 = &p_1028->g_20;
            int32_t *l_42 = &p_1028->g_20;
            int32_t *l_43 = &p_1028->g_20;
            int32_t *l_44[5][9][5] = {{{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3}},{{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3}},{{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3}},{{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3}},{{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3},{&p_1028->g_3,&p_1028->g_20,&p_1028->g_3,(void*)0,&p_1028->g_3}}};
            int i, j, k;
            l_45++;
        }
    }
    for (l_18 = 0; (l_18 <= 2); l_18++)
    { /* block id: 21 */
        uint32_t l_69 = 1UL;
        int32_t **l_90 = &p_1028->g_54[3][6];
        int32_t **l_590 = &p_1028->g_54[3][6];
        VECTOR(int64_t, 2) l_641 = (VECTOR(int64_t, 2))((-1L), 0x2579B6DD568E4E57L);
        int16_t *l_656[8] = {&p_1028->g_161,&p_1028->g_161,&p_1028->g_161,&p_1028->g_161,&p_1028->g_161,&p_1028->g_161,&p_1028->g_161,&p_1028->g_161};
        VECTOR(int16_t, 2) l_657 = (VECTOR(int16_t, 2))(0x08F6L, 0x1F9BL);
        VECTOR(int8_t, 4) l_667 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x46L), 0x46L);
        VECTOR(int16_t, 2) l_704 = (VECTOR(int16_t, 2))((-2L), (-8L));
        uint8_t *l_754 = (void*)0;
        VECTOR(int16_t, 2) l_766 = (VECTOR(int16_t, 2))(2L, 0x1E89L);
        int32_t l_795 = 0x311EFCA9L;
        int32_t l_799 = (-1L);
        int32_t l_800 = (-3L);
        int16_t l_801 = 0x19C8L;
        int32_t l_802 = 0x6205E27AL;
        int32_t l_804[1][9] = {{6L,6L,6L,6L,6L,6L,6L,6L,6L}};
        int32_t l_808 = 6L;
        int32_t **l_860[7];
        int32_t *l_862 = (void*)0;
        int32_t *l_863[6] = {&l_811,&l_811,&l_811,&l_811,&l_811,&l_811};
        uint8_t l_864 = 0x9AL;
        int32_t l_867 = 0x0586C848L;
        int i, j;
        for (i = 0; i < 7; i++)
            l_860[i] = (void*)0;
        for (p_1028->g_24 = 0; (p_1028->g_24 >= 25); p_1028->g_24 = safe_add_func_uint64_t_u_u(p_1028->g_24, 9))
        { /* block id: 24 */
            int64_t l_55 = (-1L);
            int32_t *l_60 = (void*)0;
            int64_t l_91 = (-1L);
            VECTOR(int64_t, 4) l_653 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0L), 0L);
            uint8_t *l_670 = (void*)0;
            uint8_t *l_671 = (void*)0;
            uint8_t *l_672 = (void*)0;
            uint8_t *l_673 = (void*)0;
            uint8_t *l_674 = (void*)0;
            int32_t l_675[1][3][8] = {{{0L,0L,0x523E4495L,0x3810FDC5L,0x273C9DF7L,0x3810FDC5L,0x523E4495L,0L},{0L,0L,0x523E4495L,0x3810FDC5L,0x273C9DF7L,0x3810FDC5L,0x523E4495L,0L},{0L,0L,0x523E4495L,0x3810FDC5L,0x273C9DF7L,0x3810FDC5L,0x523E4495L,0L}}};
            VECTOR(int16_t, 16) l_707 = (VECTOR(int16_t, 16))(0x2FD8L, (VECTOR(int16_t, 4))(0x2FD8L, (VECTOR(int16_t, 2))(0x2FD8L, 0x2EB7L), 0x2EB7L), 0x2EB7L, 0x2FD8L, 0x2EB7L, (VECTOR(int16_t, 2))(0x2FD8L, 0x2EB7L), (VECTOR(int16_t, 2))(0x2FD8L, 0x2EB7L), 0x2FD8L, 0x2EB7L, 0x2FD8L, 0x2EB7L);
            VECTOR(uint8_t, 8) l_716 = (VECTOR(uint8_t, 8))(0x0BL, (VECTOR(uint8_t, 4))(0x0BL, (VECTOR(uint8_t, 2))(0x0BL, 6UL), 6UL), 6UL, 0x0BL, 6UL);
            int64_t l_815 = 0x4BD37C55AE255E96L;
            int i, j, k;
            (*p_1028->g_53) = &p_1028->g_3;
            if (l_55)
            { /* block id: 26 */
                VECTOR(int64_t, 16) l_82 = (VECTOR(int64_t, 16))(0x2E3254C1C085588CL, (VECTOR(int64_t, 4))(0x2E3254C1C085588CL, (VECTOR(int64_t, 2))(0x2E3254C1C085588CL, (-1L)), (-1L)), (-1L), 0x2E3254C1C085588CL, (-1L), (VECTOR(int64_t, 2))(0x2E3254C1C085588CL, (-1L)), (VECTOR(int64_t, 2))(0x2E3254C1C085588CL, (-1L)), 0x2E3254C1C085588CL, (-1L), 0x2E3254C1C085588CL, (-1L));
                VECTOR(int32_t, 2) l_84 = (VECTOR(int32_t, 2))(1L, (-9L));
                int32_t **l_89 = &l_19;
                uint32_t l_635 = 0UL;
                int i;
                for (p_17 = 6; (p_17 > 16); p_17 = safe_add_func_int32_t_s_s(p_17, 7))
                { /* block id: 29 */
                    VECTOR(uint32_t, 2) l_68 = (VECTOR(uint32_t, 2))(1UL, 0x1FF3C8D2L);
                    uint32_t l_523 = 0x4F9554A5L;
                    int i;
                    for (p_1028->g_20 = 19; (p_1028->g_20 <= 8); p_1028->g_20 = safe_sub_func_uint16_t_u_u(p_1028->g_20, 2))
                    { /* block id: 32 */
                        int32_t **l_61 = &p_1028->g_54[3][6];
                        int32_t *l_70 = &p_1028->g_63;
                        VECTOR(int64_t, 2) l_83 = (VECTOR(int64_t, 2))(0x288D18043A44ADEFL, 0x1E30C926164A3C80L);
                        int64_t *l_112 = (void*)0;
                        int64_t *l_113 = (void*)0;
                        int64_t *l_114 = (void*)0;
                        int32_t *l_587 = &p_1028->g_588;
                        int64_t *l_589 = (void*)0;
                        int i;
                        (*l_61) = l_60;
                        (*p_1028->g_62) = p_17;
                        (*l_70) = ((((safe_mod_func_uint32_t_u_u((p_1028->g_66.s8 = ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(p_1028->g_66.sd3)).xxxxyxxx, ((VECTOR(uint32_t, 4))(p_1028->g_67.ywwz)).xywyyyyy, ((VECTOR(uint32_t, 2))(l_68.xy)).yxxyyyyy))).even)).xzxzyzzyywywyyxz, (uint32_t)4294967292UL))).s0), 0x3584F79AL)) == l_69) , &p_1028->g_54[3][6]) == (void*)0);
                    }
                    (**l_89) = ((void*)0 == (*p_1028->g_53));
                    (**l_89) = ((safe_div_func_uint64_t_u_u(p_17, l_635)) || FAKE_DIVERGE(p_1028->group_2_offset, get_group_id(2), 10));
                }
            }
            else
            { /* block id: 289 */
                uint64_t l_642 = 1UL;
                int16_t **l_646 = &p_1028->g_460;
                int32_t l_661[7][5][6] = {{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}},{{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)},{(-6L),0x5173B454L,1L,0x5173B454L,(-6L),(-6L)}}};
                int i, j, k;
                (*l_19) = (l_636 , (safe_sub_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((l_642 = (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(l_641.xxyx)).xyxwywxywyyyzyxz))).s3c)).hi != 0x3D8F3C9CAEB26676L)), (safe_mod_func_int32_t_s_s(((((l_645[1][4][7] != l_646) || (safe_sub_func_uint8_t_u_u(((((+(safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((((VECTOR(int64_t, 2))(l_653.yz)).even ^ (p_17 || ((((l_656[7] == (((((VECTOR(int16_t, 8))(l_657.xyyxxyyx)).s6 != p_1028->g_658) > (safe_rshift_func_uint8_t_u_s((*l_19), 4))) , (*l_646))) || p_1028->g_658) && p_17) >= l_661[6][3][4]))) > FAKE_DIVERGE(p_1028->global_1_offset, get_global_id(1), 10)) , 0x10730C591E894F64L), 18446744073709551612UL)), p_17))) || p_17) , (*l_19)) ^ p_17), p_17))) < (*l_19)) == l_661[6][3][4]), p_1028->g_24)))) , (-7L)), GROUP_DIVERGE(0, 1))));
                (*l_590) = (*p_1028->g_53);
                (*l_590) = l_60;
                (*l_19) |= l_661[2][0][1];
            }
            if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((*l_19) ^ (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(p_1028->g_666.yyxyyyxxxyxyyxxy)), ((VECTOR(int8_t, 8))(0x60L, 0x15L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x79L, (-1L))), 0x52L, 5L)))), 0x58L, 0x38L)).s7040201701262441))).s7319)).xxyzxzzz, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(0x59L, (*l_19), ((VECTOR(int8_t, 2))(l_667.yw)), 1L, ((safe_add_func_int32_t_s_s((p_17 , 4L), ((l_675[0][1][7] = (p_1028->g_402.w = p_17)) ^ ((safe_rshift_func_uint8_t_u_s(((!(*l_19)) , (safe_add_func_uint64_t_u_u(0xEB452B146D741870L, ((((((safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 6)) | (safe_sub_func_uint32_t_u_u((p_17 >= p_17), (*p_1028->g_62)))) > (-6L)) , p_17) ^ 0x491585D6L) > p_1028->g_392.w)))), (*l_19))) , p_1028->g_173)))) , p_17), ((VECTOR(int8_t, 8))(0L)), 0x02L, 3L)).sb108, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x57L))))).hi))))).lo, l_675[0][1][7], 0x66L, ((VECTOR(int8_t, 4))(0L)), 1L))))).s4666347773131362)).s8 == p_17)) | (*l_19)), p_17)), (*l_19))))
            { /* block id: 298 */
                VECTOR(int64_t, 8) l_690 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x36188D172AEDD5B6L), 0x36188D172AEDD5B6L), 0x36188D172AEDD5B6L, 1L, 0x36188D172AEDD5B6L);
                int64_t *l_709[9] = {&l_55,&l_55,&l_55,&l_55,&l_55,&l_55,&l_55,&l_55,&l_55};
                int32_t l_710 = 0x71A4738CL;
                int32_t l_722 = 1L;
                int32_t l_803 = 0x7535FE9BL;
                int32_t l_806 = 1L;
                int32_t l_807 = (-1L);
                int32_t l_809 = 9L;
                int32_t l_812 = 0L;
                int32_t l_814 = 0x16B9A9E6L;
                int32_t l_816 = 1L;
                int32_t l_817 = 0x32FAE64FL;
                int8_t l_820[7][10] = {{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L},{8L,(-6L),0x49L,8L,0L,0x49L,0x49L,0L,8L,0x49L}};
                int16_t l_821 = 0x683CL;
                int32_t l_822 = 0x7D4EDEB3L;
                int32_t l_823 = 0x5A72D879L;
                int32_t l_825 = (-10L);
                int32_t l_826 = 0L;
                int32_t l_827 = 0x693EC3ECL;
                int32_t l_828 = (-2L);
                int32_t l_829 = 0x7CDC4121L;
                int32_t l_830 = (-1L);
                int32_t l_831 = 0x44845880L;
                int32_t l_832 = 0x36C9D540L;
                int32_t l_833[3][1];
                uint32_t l_834 = 0xE74F518CL;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_833[i][j] = 0x4FF03F26L;
                }
                (*p_1028->g_711) = (((p_17 >= (safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(p_17, (~((*l_19) = 65532UL)))) && 0L) , ((safe_div_func_int64_t_s_s((l_710 |= (p_1028->g_comm_values[p_1028->tid] = ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_690.s5402)), ((VECTOR(int64_t, 8))((((VECTOR(int16_t, 2))((-6L), 0x0196L)).hi >= 0x2545L), (safe_sub_func_int32_t_s_s(((((l_690.s6 >= (safe_mod_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((((((!p_17) >= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1028->g_701.yyyy)).hi)))).hi, (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(0L, 0x39A9L)).xyyyyxxyxxyyyxyx, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))((-6L), 0x2042L)).yyxy, ((VECTOR(int16_t, 4))((-6L), ((VECTOR(int16_t, 2))((-1L), 0L)), 0x1945L))))).xwwxywzwzxxywxww))).see)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(0x32CAL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_704.yx)), 1L, (-1L))).lo, ((VECTOR(int16_t, 8))(1L, 0x00DAL, (safe_div_func_int32_t_s_s((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_707.sd845)), (((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_690.s3, 0UL, 0x27F6L, 0x7DF8L, 0x795BL, 0xA549L, 0x6E61L, 0x20DEL)).even)).hi, ((VECTOR(uint16_t, 2))(0x2838L)), ((VECTOR(uint16_t, 2))(0xD96AL))))).lo , p_1028->g_67.w), 0L, (-1L), 0x7F22L)).s6615607162475127)))).s3 >= 1L), p_17)), p_17, p_17, 0L, 1L, 0L)).s04))), ((VECTOR(int16_t, 2))((-6L))), ((VECTOR(int16_t, 2))(0L))))).yyxx)), 0x6A88L, ((VECTOR(int16_t, 8))(0x54C4L)), 0x5A03L, 7L)).saa, (int16_t)(*l_19)))), ((VECTOR(int16_t, 2))(0x0E64L)), ((VECTOR(int16_t, 2))(0x7607L)))))))).odd, 0xD1C2L)) , FAKE_DIVERGE(p_1028->local_2_offset, get_local_id(2), 10)) >= p_17)))) , l_673) == (void*)0) , 0L) , p_17), 1L)), (*l_19))) == 0x1160914D1B2B9AA2L), 0x7F6052FF1B7A9CCFL))) , 0x0B22EC3CL) , &p_1028->g_138) == l_708), (-5L))), 0L, 0x43B94660CF277DDFL, 0x5A34492023C94F41L, p_1028->g_67.y, 0x176EF1AD255BE56CL, 8L)), (-5L), 2L, 0x25FD652ABF23F322L, 1L)), ((VECTOR(int64_t, 16))((-7L)))))).sb)), 5UL)) == (-8L))), 65534UL))) != p_17) && p_17);
                if ((*l_19))
                    break;
                if ((*l_19))
                    continue;
                for (p_17 = 0; (p_17 < 22); p_17++)
                { /* block id: 307 */
                    int8_t l_717 = 1L;
                    VECTOR(int16_t, 2) l_741 = (VECTOR(int16_t, 2))(0x79FFL, 0L);
                    uint64_t *l_776 = &p_1028->g_524;
                    int32_t l_785[4][5][1] = {{{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L}},{{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L}},{{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L}},{{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L},{0x4E124B48L}}};
                    int8_t l_810 = 0x1BL;
                    int64_t l_824 = 1L;
                    int i, j, k;
                    for (l_710 = 0; (l_710 < 12); l_710 = safe_add_func_uint8_t_u_u(l_710, 3))
                    { /* block id: 310 */
                        int64_t l_729 = 0x53D39559AEB034E1L;
                        uint32_t *l_730 = &l_69;
                        int32_t l_767 = 0x49B39B1EL;
                        int8_t *l_768 = (void*)0;
                        int8_t *l_769 = &p_1028->g_137;
                        uint16_t *l_777 = &l_111[4];
                        (*l_590) = func_119((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x17L, 0x91L, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(0xF0L, ((*l_90) != (void*)0), ((VECTOR(uint8_t, 4))(l_716.s2534)), 255UL, 0x15L))))), 3UL, ((l_717 != GROUP_DIVERGE(1, 1)) | ((safe_sub_func_int64_t_s_s((p_17 , (((*l_19) = p_17) != ((*l_730) = (safe_add_func_int16_t_s_s((l_722 = ((VECTOR(int16_t, 4))(0x5B5EL, (-2L), 0x68FBL, 2L)).x), (safe_add_func_int8_t_s_s(p_1028->g_134.x, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((VECTOR(int64_t, 16))(1L, p_1028->g_524, 0x3AD3488010CF293AL, ((VECTOR(int64_t, 2))(4L)), p_1028->g_402.y, 0x5ED58D065EE2D3FEL, p_17, (-4L), (-1L), 3L, ((VECTOR(int64_t, 4))(0x53BB672D270AA196L)), 0L)).s1 ^ l_729), (*p_1028->g_711))), p_1028->g_402.y))))))))), p_17)) , p_17)), ((VECTOR(uint8_t, 4))(255UL)))).s6b)), 0UL, 0xA4L, 0x14L, (*p_1028->g_507), 0x6CL, 6UL)).s5 == l_690.s3), p_17, &p_1028->g_3, p_1028);
                        (*l_19) = ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((p_1028->g_comm_values[p_1028->tid] ^= ((+0x4DA46F97L) >= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_17, ((VECTOR(int16_t, 2))(l_741.xy)).odd)), (safe_mod_func_int32_t_s_s(((-4L) | (safe_div_func_uint32_t_u_u(((*l_730)--), p_1028->g_154.sc))), (safe_mul_func_int8_t_s_s(((((*l_777) ^= (safe_sub_func_uint16_t_u_u(((*p_1028->g_454) = 0xFD45L), (safe_add_func_int16_t_s_s((((p_1028->g_658 = ((void*)0 == l_754)) > (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1028->g_757.xyyx)).zxzzxxwz)), (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_766.xxxx)))).xxyxwxyyxzywwwwx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(3L, ((VECTOR(int16_t, 2))(0x1C13L, (-1L))), (-1L))).xwyzwyzxxzyxzzxx))))).sd | (((*l_769) = l_767) , ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((((p_17 , l_776) != (void*)0) & p_1028->g_666.y), (*p_1028->g_507))), 15)), 3)) == 0x6EL))) && (*p_1028->g_507)), l_707.s7)) && p_17), 6)) > l_690.s0), 6)) ^ p_17), l_729)), ((VECTOR(uint32_t, 2))(1UL)), 0xDC749E45L, 0UL, ((VECTOR(uint32_t, 2))(4294967287UL)), 4294967292UL)).sd, p_1028->g_419.y))) || 5L), p_17))))) || GROUP_DIVERGE(1, 1)) == p_17), p_17)))))))) ^ p_17) , p_17), p_17)) , p_17), p_17)) <= GROUP_DIVERGE(0, 1)), 1)) > GROUP_DIVERGE(1, 1));
                    }
                    if (p_17)
                    { /* block id: 323 */
                        int32_t l_788 = 0L;
                        int32_t l_791 = (-1L);
                        (*l_19) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1028->g_778.sde5f)).zwwyxxxzwxyzzyxx)).sc77f, ((VECTOR(int32_t, 8))(0x24369A2CL, ((VECTOR(int32_t, 2))(0x74842BE5L, 0x1A4F7059L)), (safe_add_func_int64_t_s_s(((p_17 < (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(0x04L, (&p_1028->g_229 == &p_1028->g_229))), (p_1028->g_658 &= ((l_788 = (++(*p_1028->g_454))) <= (p_17 || (+(safe_mul_func_uint16_t_u_u(p_17, (p_17 > ((((l_741.y , (!0xAEF351B0E338ACF8L)) || l_791) , (void*)0) == (void*)0))))))))))) != p_17), p_17)), 0x5478A186L, (-1L), (-1L), 0x0AE8A659L)).odd, ((VECTOR(int32_t, 4))((-3L)))))).xwxxyyyyyzwxwywy)).sd;
                    }
                    else
                    { /* block id: 328 */
                        if (l_785[0][0][0])
                            break;
                        return (*p_1028->g_630);
                    }
                    for (p_1028->g_658 = 0; (p_1028->g_658 == (-19)); p_1028->g_658--)
                    { /* block id: 334 */
                        int32_t *l_794 = &l_722;
                        int32_t *l_796 = (void*)0;
                        int32_t *l_797 = &l_675[0][0][4];
                        int32_t *l_798[4][1][10] = {{{&l_675[0][1][7],&p_1028->g_20,&p_1028->g_20,&l_675[0][1][7],(void*)0,(void*)0,(void*)0,(void*)0,&l_675[0][1][7],&p_1028->g_20}},{{&l_675[0][1][7],&p_1028->g_20,&p_1028->g_20,&l_675[0][1][7],(void*)0,(void*)0,(void*)0,(void*)0,&l_675[0][1][7],&p_1028->g_20}},{{&l_675[0][1][7],&p_1028->g_20,&p_1028->g_20,&l_675[0][1][7],(void*)0,(void*)0,(void*)0,(void*)0,&l_675[0][1][7],&p_1028->g_20}},{{&l_675[0][1][7],&p_1028->g_20,&p_1028->g_20,&l_675[0][1][7],(void*)0,(void*)0,(void*)0,(void*)0,&l_675[0][1][7],&p_1028->g_20}}};
                        int64_t l_818 = 1L;
                        int16_t l_819 = 0x0F06L;
                        int i, j, k;
                        (*l_19) = p_17;
                        l_834++;
                    }
                }
            }
            else
            { /* block id: 339 */
                int32_t l_837 = 2L;
                l_837 ^= ((FAKE_DIVERGE(p_1028->group_1_offset, get_group_id(1), 10) > 0x2DB3L) >= p_17);
                for (p_1028->g_63 = 0; (p_1028->g_63 <= 25); p_1028->g_63 = safe_add_func_int16_t_s_s(p_1028->g_63, 4))
                { /* block id: 343 */
                    VECTOR(uint64_t, 4) l_840 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x75A3E95590B3F15EL), 0x75A3E95590B3F15EL);
                    uint64_t *l_841 = &p_1028->g_524;
                    uint64_t *l_843 = &p_1028->g_150;
                    int i;
                    (*l_19) = (((*l_841) = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(l_840.zxxz)).even))), 0x791A2A77BF21A64CL, 0x4A04AD663AF64CEDL)).w) < ((*l_843) = (p_17 <= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_1028->g_842.se9e34ca5c344b00e)))).s8)));
                    (*l_19) = (l_837 = ((*l_19) >= ((l_844[1] != &p_1028->g_508) | p_17)));
                    for (p_1028->g_231 = 0; (p_1028->g_231 == 50); ++p_1028->g_231)
                    { /* block id: 351 */
                        (*l_19) = ((VECTOR(int32_t, 16))(p_1028->g_847.sb45e5ebd08f316e8)).s7;
                    }
                    for (l_795 = 0; (l_795 == (-3)); l_795 = safe_sub_func_uint32_t_u_u(l_795, 4))
                    { /* block id: 356 */
                        int8_t *l_854 = &p_1028->g_632;
                        (*l_19) = (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(p_1028->g_701.x, ((*l_854) &= 0x3EL))), 4));
                    }
                }
                for (p_1028->g_229 = 25; (p_1028->g_229 < 23); --p_1028->g_229)
                { /* block id: 363 */
                    int32_t *l_857 = &l_813[0];
                    l_837 = l_837;
                    (*l_590) = l_857;
                    if (p_17)
                        continue;
                    (*l_590) = &l_813[2];
                }
                (*l_19) = (safe_sub_func_int32_t_s_s(p_17, ((&p_1028->g_173 == (void*)0) || 0L)));
            }
        }
        (*l_19) = ((p_1028->g_861 = &p_1028->g_588) == &p_1028->g_588);
        l_864++;
        return l_867;
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_154 p_1028->g_233 p_1028->g_507 p_1028->g_508 p_1028->g_54 p_1028->g_588 p_1028->g_630
 * writes: p_1028->g_54 p_1028->g_137 p_1028->g_588 p_1028->g_63
 */
int64_t  func_73(int32_t  p_74, uint32_t  p_75, int32_t * p_76, int32_t ** p_77, struct S0 * p_1028)
{ /* block id: 243 */
    uint32_t l_591 = 4294967288UL;
    int32_t l_592 = 0x1EF27D51L;
    VECTOR(int64_t, 2) l_612 = (VECTOR(int64_t, 2))(0x35E452E2A5C934F8L, 1L);
    uint8_t l_613 = 249UL;
    int32_t *l_631 = (void*)0;
    int i;
    l_592 = l_591;
    for (p_74 = 5; (p_74 != (-29)); p_74 = safe_sub_func_uint64_t_u_u(p_74, 3))
    { /* block id: 247 */
        int32_t *l_595[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_63,&p_1028->g_3,&p_1028->g_3,(void*)0,&p_1028->g_3}};
        int64_t l_619 = (-8L);
        int64_t **l_621 = &p_1028->g_138;
        int i, j;
        (*p_77) = l_595[3][4];
        for (p_75 = 0; (p_75 == 35); ++p_75)
        { /* block id: 251 */
            int64_t l_618 = 0x6F9D7DB107F30966L;
            int8_t *l_620 = &p_1028->g_137;
            if ((atomic_inc(&p_1028->l_atomic_input[66]) == 4))
            { /* block id: 253 */
                int32_t l_598 = 0L;
                VECTOR(uint32_t, 16) l_599 = (VECTOR(uint32_t, 16))(0xC0FD15F0L, (VECTOR(uint32_t, 4))(0xC0FD15F0L, (VECTOR(uint32_t, 2))(0xC0FD15F0L, 0xD77466CCL), 0xD77466CCL), 0xD77466CCL, 0xC0FD15F0L, 0xD77466CCL, (VECTOR(uint32_t, 2))(0xC0FD15F0L, 0xD77466CCL), (VECTOR(uint32_t, 2))(0xC0FD15F0L, 0xD77466CCL), 0xC0FD15F0L, 0xD77466CCL, 0xC0FD15F0L, 0xD77466CCL);
                int32_t l_600[6][5][1] = {{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}},{{2L},{2L},{2L},{2L},{2L}}};
                int64_t l_601[5][3][4] = {{{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L}},{{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L}},{{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L}},{{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L}},{{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L},{0x20F32DE84C1C0643L,0L,0x20F32DE84C1C0643L,0x20F32DE84C1C0643L}}};
                uint32_t l_602 = 0x64C5EEA7L;
                int32_t *l_605 = &l_600[2][1][0];
                int32_t *l_606[10][2] = {{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0},{&l_600[5][2][0],(void*)0}};
                uint16_t l_607 = 65534UL;
                int i, j, k;
                l_599.s7 &= l_598;
                ++l_602;
                l_606[6][0] = l_605;
                l_607 &= (-10L);
                unsigned int result = 0;
                result += l_598;
                result += l_599.sf;
                result += l_599.se;
                result += l_599.sd;
                result += l_599.sc;
                result += l_599.sb;
                result += l_599.sa;
                result += l_599.s9;
                result += l_599.s8;
                result += l_599.s7;
                result += l_599.s6;
                result += l_599.s5;
                result += l_599.s4;
                result += l_599.s3;
                result += l_599.s2;
                result += l_599.s1;
                result += l_599.s0;
                int l_600_i0, l_600_i1, l_600_i2;
                for (l_600_i0 = 0; l_600_i0 < 6; l_600_i0++) {
                    for (l_600_i1 = 0; l_600_i1 < 5; l_600_i1++) {
                        for (l_600_i2 = 0; l_600_i2 < 1; l_600_i2++) {
                            result += l_600[l_600_i0][l_600_i1][l_600_i2];
                        }
                    }
                }
                int l_601_i0, l_601_i1, l_601_i2;
                for (l_601_i0 = 0; l_601_i0 < 5; l_601_i0++) {
                    for (l_601_i1 = 0; l_601_i1 < 3; l_601_i1++) {
                        for (l_601_i2 = 0; l_601_i2 < 4; l_601_i2++) {
                            result += l_601[l_601_i0][l_601_i1][l_601_i2];
                        }
                    }
                }
                result += l_602;
                result += l_607;
                atomic_add(&p_1028->l_special_values[66], result);
            }
            else
            { /* block id: 258 */
                (1 + 1);
            }
            p_76 = ((*p_77) = (((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((((VECTOR(int64_t, 4))(l_612.xxxx)).w < l_613), l_592)) < (0xE6D164E6B4913022L & (GROUP_DIVERGE(0, 1) != (p_75 > ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(p_1028->g_154.s0, ((((l_618 && (l_618 < l_619)) > (((*l_620) = p_1028->g_233[2][1]) , 0x9E57FF3AL)) == (*p_1028->g_507)) && 0UL))), l_592)) == p_75))))), l_618)) , 2L) , (*p_77)));
        }
        l_621 = (void*)0;
    }
    for (l_613 = 0; (l_613 == 19); ++l_613)
    { /* block id: 269 */
        for (p_1028->g_588 = 0; (p_1028->g_588 > (-20)); p_1028->g_588 = safe_sub_func_int32_t_s_s(p_1028->g_588, 8))
        { /* block id: 272 */
            int32_t l_626 = 4L;
            if (l_626)
                break;
            return l_626;
        }
    }
    for (l_592 = (-24); (l_592 <= 29); l_592++)
    { /* block id: 279 */
        int32_t *l_629 = (void*)0;
        (*p_1028->g_630) = l_591;
        (*p_77) = l_631;
    }
    return p_74;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_86(int32_t ** p_87, int32_t  p_88, struct S0 * p_1028)
{ /* block id: 38 */
    uint64_t l_92 = 0xF66B510C19ED05CEL;
    l_92--;
    return l_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_comm_values p_1028->l_comm_values p_1028->g_63 p_1028->g_231
 * writes: p_1028->l_comm_values
 */
int32_t  func_99(int32_t * p_100, int32_t * p_101, int64_t  p_102, uint32_t  p_103, uint16_t  p_104, struct S0 * p_1028)
{ /* block id: 216 */
    int8_t l_527 = 0L;
    int64_t *l_540 = (void*)0;
    int64_t *l_541 = (void*)0;
    int64_t *l_542 = (void*)0;
    int64_t *l_543 = (void*)0;
    int64_t *l_544 = (void*)0;
    int64_t *l_545 = (void*)0;
    int64_t *l_546 = (void*)0;
    int64_t *l_547 = (void*)0;
    int64_t *l_548 = (void*)0;
    int32_t l_549 = 0x04CE9E62L;
    VECTOR(uint16_t, 2) l_556 = (VECTOR(uint16_t, 2))(65531UL, 65535UL);
    VECTOR(int32_t, 16) l_563 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x0EEB93EEL), 0x0EEB93EEL), 0x0EEB93EEL, 6L, 0x0EEB93EEL, (VECTOR(int32_t, 2))(6L, 0x0EEB93EEL), (VECTOR(int32_t, 2))(6L, 0x0EEB93EEL), 6L, 0x0EEB93EEL, 6L, 0x0EEB93EEL);
    int32_t *l_566 = (void*)0;
    int32_t *l_567 = (void*)0;
    int32_t *l_568 = &l_549;
    uint16_t l_569[8][10] = {{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL},{65535UL,65530UL,65530UL,65535UL,0UL,0x70D7L,0x6137L,65535UL,1UL,65532UL}};
    int32_t l_570 = 0x580CDCD2L;
    int i, j;
    atomic_xor(&p_1028->l_atomic_reduction[0], (((safe_mod_func_uint16_t_u_u(l_527, (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(250UL, 3)) , (safe_rshift_func_int16_t_s_u((l_549 |= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(p_103, (p_1028->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1028->tid, 126))] &= p_1028->g_comm_values[p_1028->tid]))) != l_527), 3)), 10))), 14))), ((VECTOR(int16_t, 2))(0x2E06L, (-7L))).hi)))) && (p_1028->g_63 == (safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(l_556.xxxxyxyxxyxyxxyx)).sb1, (uint16_t)((safe_add_func_uint32_t_u_u(p_104, (safe_rshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(l_563.s62)).xxyxyxyyyxyxyyxx, ((VECTOR(int32_t, 8))(((*l_568) = (p_103 == (safe_add_func_uint32_t_u_u(4294967290UL, 3UL)))), 0L, l_569[0][2], ((VECTOR(int32_t, 2))(0x4AB4271FL)), 0x05D83DB7L, 0x7419C490L, 4L)).s0752603351367756))).even)).s4, p_103)) >= p_104), l_570)))) && (*l_568))))).odd, p_103)), p_104)), FAKE_DIVERGE(p_1028->group_1_offset, get_group_id(1), 10))))) && p_1028->g_231));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1028->v_collective += p_1028->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((atomic_inc(&p_1028->g_atomic_input[75 * get_linear_group_id() + 0]) == 7))
    { /* block id: 222 */
        int32_t l_571 = 0x66F33B4CL;
        int32_t *l_584 = &l_571;
        int32_t *l_585 = (void*)0;
        int32_t *l_586 = &l_571;
        for (l_571 = 0; (l_571 != 9); ++l_571)
        { /* block id: 225 */
            uint64_t l_574[10] = {18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL};
            int i;
            l_574[9] |= 0L;
            for (l_574[9] = (-29); (l_574[9] <= 35); l_574[9]++)
            { /* block id: 229 */
                int8_t l_577[5][1];
                uint16_t l_578 = 0UL;
                uint32_t l_579 = 0xC0F2C372L;
                uint32_t l_580 = 4294967295UL;
                VECTOR(uint32_t, 2) l_581 = (VECTOR(uint32_t, 2))(0x1017E43FL, 0xDE7FA2B5L);
                VECTOR(int16_t, 8) l_582 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L));
                uint32_t l_583 = 4294967286UL;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_577[i][j] = 0x49L;
                }
                l_578 ^= l_577[1][0];
                l_580 = l_579;
                l_583 ^= (((VECTOR(uint32_t, 4))(l_581.xxxx)).w , l_582.s4);
            }
        }
        l_585 = l_584;
        l_586 = (void*)0;
        unsigned int result = 0;
        result += l_571;
        atomic_add(&p_1028->g_special_values[75 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 237 */
        (1 + 1);
    }
    return p_104;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_3 p_1028->g_134 p_1028->g_138 p_1028->g_150 p_1028->g_154 p_1028->g_20 p_1028->g_161 p_1028->g_66 p_1028->g_54 p_1028->g_173 p_1028->g_63 p_1028->g_comm_values p_1028->g_229 p_1028->g_233 p_1028->g_282 p_1028->l_comm_values p_1028->g_285 p_1028->g_191 p_1028->g_419 p_1028->g_460 p_1028->g_461 p_1028->g_137 p_1028->g_507
 * writes: p_1028->g_137 p_1028->g_150 p_1028->g_63 p_1028->g_161 p_1028->g_164 p_1028->g_173 p_1028->g_233 p_1028->l_comm_values p_1028->g_comm_values p_1028->g_285 p_1028->g_231 p_1028->g_419 p_1028->g_454 p_1028->g_455 p_1028->g_461 p_1028->g_465 p_1028->g_506 p_1028->g_229
 */
int64_t  func_107(int64_t  p_108, int32_t  p_109, int32_t * p_110, struct S0 * p_1028)
{ /* block id: 42 */
    int32_t l_129 = 1L;
    int8_t *l_135 = (void*)0;
    int8_t *l_136 = &p_1028->g_137;
    int64_t l_145 = 0x21209A5621383E18L;
    int8_t l_148 = (-4L);
    uint64_t *l_149 = &p_1028->g_150;
    VECTOR(uint64_t, 8) l_151 = (VECTOR(uint64_t, 8))(0x66A50E2640699D30L, (VECTOR(uint64_t, 4))(0x66A50E2640699D30L, (VECTOR(uint64_t, 2))(0x66A50E2640699D30L, 1UL), 1UL), 1UL, 0x66A50E2640699D30L, 1UL);
    int32_t *l_155 = (void*)0;
    int32_t *l_156 = (void*)0;
    int32_t *l_157 = &p_1028->g_63;
    int16_t *l_160 = &p_1028->g_161;
    int32_t **l_449 = &l_155;
    uint16_t *l_453 = &p_1028->g_231;
    uint16_t **l_452[9][6];
    uint64_t ***l_463[3];
    VECTOR(int16_t, 8) l_464 = (VECTOR(int16_t, 8))(0x5D16L, (VECTOR(int16_t, 4))(0x5D16L, (VECTOR(int16_t, 2))(0x5D16L, 0x2293L), 0x2293L), 0x2293L, 0x5D16L, 0x2293L);
    VECTOR(int32_t, 2) l_487 = (VECTOR(int32_t, 2))(0x53C1F47EL, 0x0B10890BL);
    VECTOR(int32_t, 8) l_488 = (VECTOR(int32_t, 8))(0x1AEF16FAL, (VECTOR(int32_t, 4))(0x1AEF16FAL, (VECTOR(int32_t, 2))(0x1AEF16FAL, 0x4FB253C0L), 0x4FB253C0L), 0x4FB253C0L, 0x1AEF16FAL, 0x4FB253C0L);
    VECTOR(int32_t, 8) l_494 = (VECTOR(int32_t, 8))(0x36F74B78L, (VECTOR(int32_t, 4))(0x36F74B78L, (VECTOR(int32_t, 2))(0x36F74B78L, 0x2F0243F0L), 0x2F0243F0L), 0x2F0243F0L, 0x36F74B78L, 0x2F0243F0L);
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
            l_452[i][j] = &l_453;
    }
    for (i = 0; i < 3; i++)
        l_463[i] = &p_1028->g_461;
    (*l_449) = func_115(&p_1028->g_54[2][5], func_119(p_1028->g_3, func_123(((l_129 , ((*l_136) = (FAKE_DIVERGE(p_1028->local_2_offset, get_local_id(2), 10) != (safe_rshift_func_uint8_t_u_s(l_129, (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(0x3FL, (-1L))).odd, ((VECTOR(uint8_t, 8))(p_1028->g_134.ywxzwzxx)).s1))))))) , p_1028->g_138), p_1028->g_138, ((((!(safe_rshift_func_int16_t_s_u((!(safe_sub_func_int16_t_s_s(((*l_160) &= ((safe_div_func_uint16_t_u_u(l_145, (((*l_149) &= (safe_lshift_func_int8_t_s_u(l_148, 2))) & ((VECTOR(uint64_t, 4))(l_151.s3703)).y))) | (((safe_add_func_uint8_t_u_u((((*l_157) = ((VECTOR(int32_t, 8))(p_1028->g_154.s47aafff4)).s7) != ((((VECTOR(int32_t, 16))(0x069CBCCDL, (safe_mod_func_int32_t_s_s((*p_110), 0x4AF182F5L)), 1L, 0x1E3AF264L, p_108, (-10L), ((VECTOR(int32_t, 8))(0x7F65E9E5L)), (-1L), 7L)).s8 , p_1028->g_154.sa) , p_109)), 1UL)) | p_109) > 0x39L))), 65533UL))), 11))) | (-1L)) >= 0x0E0BL) , (-3L)), &p_1028->g_54[3][1], p_1028->g_66.s5, p_1028), &p_1028->g_3, p_1028), p_108, p_1028);
    if (((((((*l_136) |= (safe_rshift_func_uint16_t_u_s((((VECTOR(int8_t, 2))(0x5CL, 1L)).hi <= (((p_1028->g_454 = &p_1028->g_233[4][0]) == (p_1028->g_455[4] = &p_1028->g_233[4][0])) | (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((*l_160) = (+p_1028->g_comm_values[p_1028->tid])), ((l_160 == p_1028->g_460) || (&l_149 == (void*)0)))), ((p_1028->g_461 = p_1028->g_461) != (((VECTOR(int16_t, 4))(l_464.s6474)).x , (p_1028->g_465 = &p_1028->g_462))))))), p_109))) & 0L) > p_108) < p_109) < (**l_449)))
    { /* block id: 175 */
        int32_t **l_473 = (void*)0;
        VECTOR(int32_t, 2) l_489 = (VECTOR(int32_t, 2))((-1L), (-1L));
        int32_t **l_513 = (void*)0;
        int32_t **l_514 = &l_156;
        int i;
        for (p_1028->g_150 = 24; (p_1028->g_150 > 43); p_1028->g_150++)
        { /* block id: 178 */
            uint32_t l_468[2][1];
            VECTOR(int32_t, 4) l_476 = (VECTOR(int32_t, 4))(0x0816CDA1L, (VECTOR(int32_t, 2))(0x0816CDA1L, 1L), 1L);
            int32_t l_486 = 8L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_468[i][j] = 0x6EB0705AL;
            }
            ++l_468[1][0];
            for (l_148 = 0; (l_148 <= (-21)); --l_148)
            { /* block id: 182 */
                VECTOR(int32_t, 16) l_477 = (VECTOR(int32_t, 16))(0x4F62859FL, (VECTOR(int32_t, 4))(0x4F62859FL, (VECTOR(int32_t, 2))(0x4F62859FL, 0x49C1F746L), 0x49C1F746L), 0x49C1F746L, 0x4F62859FL, 0x49C1F746L, (VECTOR(int32_t, 2))(0x4F62859FL, 0x49C1F746L), (VECTOR(int32_t, 2))(0x4F62859FL, 0x49C1F746L), 0x4F62859FL, 0x49C1F746L, 0x4F62859FL, 0x49C1F746L);
                int16_t *l_480 = (void*)0;
                int16_t *l_481 = (void*)0;
                int16_t *l_482 = (void*)0;
                int16_t *l_483 = (void*)0;
                int16_t *l_484 = (void*)0;
                int16_t *l_485 = (void*)0;
                uint8_t *l_505 = (void*)0;
                int i;
                (*l_449) = &p_1028->g_63;
                (**l_449) = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4CC0FEF1L, 0x7295A194L)))))).yxxxyyxx)).hi, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_487.xyxx)).xzzxxwxw)).s14, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_488.s1555304607453070)).s7f)).yyyyyyxyxxxxyyxx, ((VECTOR(int32_t, 4))(l_489.xxyy)).wzyxyyyyyxwwyxyy))).hi)).s30, ((VECTOR(int32_t, 4))(((((safe_sub_func_uint8_t_u_u(0x49L, 0x33L)) >= ((safe_div_func_int16_t_s_s(p_109, p_108)) & ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_494.s6012231350451473)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x20DFAB2EL, 0x66FF6770L)), ((VECTOR(int32_t, 4))((-8L), (**l_449), 0x25D3924EL, 0x71A732B4L)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_108, ((p_1028->g_506 = l_505) == p_1028->g_507))) , (safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((0xE8D6BEFDL | p_109) | (*l_157)), p_108)) && 0UL), l_477.s0))), p_109)), 3)), l_477.sd)) < 0x501BAF555E4AAB20L), 0x08A5053CD819565DL)), ((VECTOR(int32_t, 2))(0x02C088D8L)), 0x7D1CFB70L)).lo, ((VECTOR(int32_t, 2))((-9L)))))).xyxxxxxy)).s06))).xyxxyyxxyxyyyxyx))))).sd)) > 0x5D0F0743L) , (*p_110)), 0x3F6CADF3L, 0x68613480L, 0x69463E9DL)).hi))).yxyy))).yxxyyxwz, ((VECTOR(int32_t, 8))(0x3292A4DDL))))), ((VECTOR(int32_t, 8))(0x65F449BBL))))).s4;
            }
            (*l_449) = &p_109;
        }
        (*l_514) = ((*l_449) = (void*)0);
        for (p_1028->g_229 = (-14); (p_1028->g_229 < 20); ++p_1028->g_229)
        { /* block id: 197 */
            return p_108;
        }
    }
    else
    { /* block id: 200 */
        int16_t *l_521 = (void*)0;
        (*l_157) = 0x713685C8L;
        for (p_109 = (-15); (p_109 <= (-11)); p_109 = safe_add_func_uint64_t_u_u(p_109, 9))
        { /* block id: 204 */
            int32_t l_522 = (-1L);
            for (l_145 = 3; (l_145 > 13); l_145++)
            { /* block id: 207 */
                return p_108;
            }
            (*l_157) |= (l_522 = (&p_110 == (((void*)0 != l_521) , &p_1028->g_54[3][6])));
            return p_108;
        }
    }
    return p_108;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_54
 * writes: p_1028->g_164
 */
int32_t * func_115(int32_t ** p_116, int32_t * p_117, uint8_t  p_118, struct S0 * p_1028)
{ /* block id: 165 */
    uint32_t l_422 = 0UL;
    uint8_t l_445 = 0x76L;
    uint8_t l_446 = 0x51L;
    int32_t *l_447 = (void*)0;
    int32_t **l_448[8] = {&p_1028->g_54[3][6],&l_447,&p_1028->g_54[3][6],&p_1028->g_54[3][6],&l_447,&p_1028->g_54[3][6],&p_1028->g_54[3][6],&l_447};
    int i;
    p_1028->g_164[0] = (*p_116);
    return &p_1028->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_150 p_1028->g_173 p_1028->g_66 p_1028->g_3 p_1028->g_63 p_1028->g_20 p_1028->g_comm_values p_1028->g_229 p_1028->g_233 p_1028->g_282 p_1028->l_comm_values p_1028->g_285 p_1028->g_191 p_1028->g_161 p_1028->g_134 p_1028->g_419
 * writes: p_1028->g_150 p_1028->g_173 p_1028->g_233 p_1028->l_comm_values p_1028->g_137 p_1028->g_164 p_1028->g_comm_values p_1028->g_285 p_1028->g_231 p_1028->g_161 p_1028->g_419
 */
int32_t * func_119(int16_t  p_120, int32_t  p_121, int32_t * p_122, struct S0 * p_1028)
{ /* block id: 52 */
    VECTOR(uint16_t, 16) l_178 = (VECTOR(uint16_t, 16))(0x5E26L, (VECTOR(uint16_t, 4))(0x5E26L, (VECTOR(uint16_t, 2))(0x5E26L, 0x67E1L), 0x67E1L), 0x67E1L, 0x5E26L, 0x67E1L, (VECTOR(uint16_t, 2))(0x5E26L, 0x67E1L), (VECTOR(uint16_t, 2))(0x5E26L, 0x67E1L), 0x5E26L, 0x67E1L, 0x5E26L, 0x67E1L);
    int32_t l_205[3];
    uint16_t l_210 = 0x9385L;
    VECTOR(int16_t, 8) l_238 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x31FCL), 0x31FCL), 0x31FCL, (-1L), 0x31FCL);
    VECTOR(int8_t, 4) l_284 = (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 0x14L), 0x14L);
    int16_t *l_299[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t **l_298 = &l_299[3];
    int32_t **l_338 = &p_1028->g_54[3][6];
    int32_t ***l_337 = &l_338;
    VECTOR(uint64_t, 16) l_339 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL, (VECTOR(uint64_t, 2))(1UL, 5UL), (VECTOR(uint64_t, 2))(1UL, 5UL), 1UL, 5UL, 1UL, 5UL);
    int i;
    for (i = 0; i < 3; i++)
        l_205[i] = (-1L);
    for (p_1028->g_150 = 0; (p_1028->g_150 <= 20); p_1028->g_150 = safe_add_func_uint64_t_u_u(p_1028->g_150, 9))
    { /* block id: 55 */
        uint16_t *l_172 = &p_1028->g_173;
        int32_t l_190 = 0x39073E8DL;
        uint8_t *l_202 = (void*)0;
        uint8_t *l_203 = (void*)0;
        uint8_t *l_204 = (void*)0;
        uint8_t *l_206 = (void*)0;
        uint8_t *l_207[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_208 = 0x2A718D19L;
        int32_t l_209 = (-1L);
        VECTOR(uint64_t, 4) l_213 = (VECTOR(uint64_t, 4))(0x93BDCD76EB741D22L, (VECTOR(uint64_t, 2))(0x93BDCD76EB741D22L, 0UL), 0UL);
        uint64_t *l_214 = (void*)0;
        uint64_t *l_215 = (void*)0;
        uint64_t *l_216 = (void*)0;
        uint64_t *l_217 = (void*)0;
        uint64_t *l_218[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int64_t, 2) l_225 = (VECTOR(int64_t, 2))(0x23963281A18FF7ECL, 0x0289208D764150C3L);
        VECTOR(int64_t, 2) l_226 = (VECTOR(int64_t, 2))(0x77A4E5EF4969E898L, (-4L));
        uint32_t *l_227 = (void*)0;
        uint32_t *l_228[1];
        uint16_t *l_230 = &p_1028->g_231;
        uint16_t *l_232 = &p_1028->g_233[4][0];
        VECTOR(uint16_t, 4) l_277 = (VECTOR(uint16_t, 4))(0xA1F4L, (VECTOR(uint16_t, 2))(0xA1F4L, 65535UL), 65535UL);
        VECTOR(int8_t, 8) l_283 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6EL), 0x6EL), 0x6EL, 0L, 0x6EL);
        VECTOR(int64_t, 8) l_301 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x48A71C66B8E97200L), 0x48A71C66B8E97200L), 0x48A71C66B8E97200L, 8L, 0x48A71C66B8E97200L);
        VECTOR(int64_t, 8) l_329 = (VECTOR(int64_t, 8))(0x41E353BDB61C8AC3L, (VECTOR(int64_t, 4))(0x41E353BDB61C8AC3L, (VECTOR(int64_t, 2))(0x41E353BDB61C8AC3L, 1L), 1L), 1L, 0x41E353BDB61C8AC3L, 1L);
        VECTOR(int64_t, 4) l_330 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0F1B1C8B13025689L), 0x0F1B1C8B13025689L);
        VECTOR(int16_t, 4) l_353 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x7468L), 0x7468L);
        int i, j;
        for (i = 0; i < 1; i++)
            l_228[i] = &p_1028->g_229;
        if (((safe_mul_func_uint16_t_u_u((~(!(++(*l_172)))), (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_178.s42)).hi, (((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(65528UL, ((*l_232) = (safe_rshift_func_uint16_t_u_s((((((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_190 != (((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(0x74B49123F8D3DCD3L, 0x2307A3C17D6ECED9L)).xyyyxxxyyxyxxyyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1028->g_191.s45)), 0xBC6CB3F44D478327L, (((VECTOR(uint64_t, 16))(0xDDAE6AD3C435FAD4L, (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_190, (safe_mod_func_uint16_t_u_u(((*l_230) = (((++l_210) <= (((l_205[2] = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_213.zz)))), 0x27661964D51499A7L, 18446744073709551607UL)).y) | (safe_rshift_func_int16_t_s_u(((l_209 && (safe_lshift_func_int8_t_s_s((((l_208 &= (safe_sub_func_uint8_t_u_u((p_1028->g_134.w = ((!((((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_225.yy)).xxxxyyxxxxxyxyxy)).s5c08, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_226.yxxy)), 4L, p_1028->g_191.s5, 0x02A35B3A7F255F03L, 0x545185051AD09930L)).hi))).w , (&p_122 != (void*)0)) <= (l_209 < (l_207[2][6] == (void*)0)))) & GROUP_DIVERGE(0, 1))), p_120))) , p_120) && (-1L)), 2))) , 0x1ADBL), l_178.s1))) & l_226.y)) && FAKE_DIVERGE(p_1028->global_0_offset, get_global_id(0), 10))), p_1028->g_comm_values[p_1028->tid])))), p_1028->g_191.sb)), 0)), GROUP_DIVERGE(2, 1))), 0UL, 0xE2D6D25A9A4678B7L, 18446744073709551607UL, ((VECTOR(uint64_t, 8))(0x3028EE803E18173DL)), 18446744073709551615UL, 0x20E952B729E55A86L, 0xCA8B2C8D88053D1BL)).s3 ^ l_190), 0x6B8D06BC6574C90BL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551615UL)).s7321716763571375))).sb && p_120)), p_1028->g_66.s7)), (*p_122))), p_1028->g_comm_values[p_1028->tid])) <= l_178.s7) ^ 7UL) && 1UL) || 0x3CL), 11))))))) ^ GROUP_DIVERGE(1, 1)) >= p_1028->g_229))))) < p_120))
        { /* block id: 63 */
            int32_t **l_239[7][7][4] = {{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}},{{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]},{&p_1028->g_54[1][7],&p_1028->g_54[0][2],(void*)0,&p_1028->g_54[3][6]}}};
            int16_t *l_241 = (void*)0;
            int16_t **l_240 = &l_241;
            int64_t *l_253 = (void*)0;
            int64_t *l_254[3][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int8_t l_302 = 0L;
            int32_t l_303[10][7] = {{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L},{(-6L),(-6L),0x2EA4E470L,0x67078D9BL,0L,0x67078D9BL,0x2EA4E470L}};
            uint32_t l_318 = 0UL;
            uint32_t l_323 = 0x70552E89L;
            VECTOR(uint64_t, 4) l_331 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), 18446744073709551610UL);
            uint8_t *l_336 = (void*)0;
            int8_t l_345[3][6][10] = {{{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L}},{{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L}},{{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L},{0L,0x56L,0x7DL,0L,0x2AL,1L,0x7EL,0x0AL,0x7EL,1L}}};
            VECTOR(uint8_t, 8) l_354 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL);
            uint32_t l_372 = 0xEC6C433EL;
            int i, j, k;
            p_122 = (((safe_mod_func_uint8_t_u_u(l_210, (((((l_205[1] != (((p_1028->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1028->tid, 126))] = (l_190 = (safe_lshift_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(0x2A4FL, 0L, 3L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_238.s6143016470344137)).s45)), 0x665AL, 0x0E92L, (l_239[3][4][0] == (void*)0), l_238.s0, 0x721BL, (l_240 != ((safe_add_func_uint32_t_u_u(((l_208 = ((safe_rshift_func_int8_t_s_s(((l_225.y != (safe_rshift_func_int16_t_s_s(p_1028->g_134.x, 1))) >= ((safe_mod_func_int16_t_s_s((-5L), p_120)) > (-1L))), p_1028->g_154.s5)) , l_238.s3)) || FAKE_DIVERGE(p_1028->local_2_offset, get_local_id(2), 10)), (*p_122))) , p_1028->g_252)), p_1028->g_137, 0x48FBL, ((VECTOR(int16_t, 2))((-6L))), 0x7678L)), ((VECTOR(uint16_t, 16))(6UL))))).s98c7)).y , 0L), 7)))) || 0x283E14190088FAD8L) & l_225.x)) != p_120) != 251UL) , p_1028->g_233[2][8]) , p_121))) , 0x90E365370F3B8830L) , &p_1028->g_20);
            for (l_190 = 7; (l_190 >= (-7)); l_190 = safe_sub_func_int64_t_s_s(l_190, 9))
            { /* block id: 70 */
                uint8_t l_257 = 0xF5L;
                int32_t l_268[5][5][2] = {{{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)}},{{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)}},{{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)}},{{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)}},{{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)},{0x0FB665E9L,(-10L)}}};
                int8_t *l_286 = &p_1028->g_137;
                int32_t l_287 = 0x333A8B88L;
                int32_t ***l_300 = &l_239[3][4][0];
                int32_t *l_304 = &l_205[1];
                int i, j, k;
                if (l_226.y)
                    break;
                l_257++;
                p_121 = (((safe_div_func_int32_t_s_s((7UL & (safe_rshift_func_int8_t_s_u(0x61L, (safe_div_func_uint8_t_u_u((l_287 ^= ((safe_mod_func_uint16_t_u_u(((l_268[2][0][1] && (-5L)) && (0UL || (safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_277.yy)).xxyx)).xwxxywxz)).s6, (safe_sub_func_int8_t_s_s(l_268[2][0][1], GROUP_DIVERGE(1, 1))))), 9)), 4294967294UL)), ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(0x5C216B368C89E3A0L, 0xB7AF79196BF7D5F7L)).yxyx))).w)))), (safe_sub_func_int8_t_s_s(((*l_286) = ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1028->g_282.yyxyyxxy)).s24)).xyyxyxyx, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(l_283.s72)).yxyy, ((VECTOR(int8_t, 2))(0x76L, 0x4AL)).yyyy)))))).wwywyxwxwzyyzyyw)).hi)).s0223434472747177)).sd86d, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_284.yzzzyxxyyzyzwxyy)).odd)).even, ((VECTOR(int8_t, 16))(2L, 0x34L, 0x21L, (((p_121 , (p_120 ^ 0xC3L)) , p_120) <= p_1028->g_285), ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 2))(0x0CL)), p_120, ((VECTOR(int8_t, 4))(0x12L)), ((VECTOR(int8_t, 2))(0x3BL)), 0x6BL)).s02ec))).wwwxxyxz))).s3), 0x5BL)))) , p_1028->g_282.x)), p_1028->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1028->tid, 126))]))))), (*p_122))) && (*p_122)) > 0x64L);
                (*l_304) = ((~(safe_sub_func_int64_t_s_s(((((((safe_div_func_uint8_t_u_u((~(safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x4198L, (&p_120 == (void*)0), 1L, 0x3CEAL)), 0x4004L, 0L, 0x7958L, 1L)).s1 | ((l_303[0][6] |= ((safe_sub_func_uint32_t_u_u(((p_1028->g_3 , ((l_298 != (void*)0) == ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x29EEA6B0394F41C5L, ((VECTOR(int64_t, 4))((l_209 = (((*l_300) = &p_1028->g_164[5]) == (void*)0)), ((VECTOR(int64_t, 2))((-1L), 1L)), 1L)), 0x5B1B38B637A08B2CL, 0x5C6CC01759944B1AL, 1L)).lo)), ((VECTOR(int64_t, 8))(l_301.s64051025)).even))).xwzxwzwzxzzzyzzy)).s9807, ((VECTOR(int64_t, 8))(0x1BAACFC42F424CE6L, p_120, 0L, ((VECTOR(int64_t, 2))((-8L))), 3L, (-1L), 0x147C1FB6B1B6B8CCL)).hi))), ((VECTOR(int64_t, 2))(6L)), 0x527F47FDB5AEA7E3L, 0L)).s0)) > p_121), 5UL)) > l_302)) != p_1028->g_282.y)), 0L)) , 0x10C9A88411622C3EL), l_190))), p_1028->g_173)) , 0x2DD1L) & l_301.s4) , 0x975EL) <= 0x6933L) != 1UL), l_302))) , 1L);
            }
            for (p_1028->g_173 = 0; (p_1028->g_173 == 57); ++p_1028->g_173)
            { /* block id: 83 */
                int8_t l_310 = 0L;
                int32_t l_311 = 0x3C09B54BL;
                int32_t l_312 = 0x18AD0A17L;
                int32_t l_314 = 0x754B015BL;
                int32_t l_316[4] = {(-3L),(-3L),(-3L),(-3L)};
                VECTOR(uint64_t, 16) l_332 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 1UL), 1UL), 1UL, 18446744073709551606UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 1UL), 18446744073709551606UL, 1UL, 18446744073709551606UL, 1UL);
                VECTOR(uint16_t, 8) l_335 = (VECTOR(uint16_t, 8))(0xCE86L, (VECTOR(uint16_t, 4))(0xCE86L, (VECTOR(uint16_t, 2))(0xCE86L, 65535UL), 65535UL), 65535UL, 0xCE86L, 65535UL);
                uint64_t *l_360 = (void*)0;
                int16_t l_371[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_371[i] = 1L;
                p_122 = &p_1028->g_63;
                for (p_1028->g_137 = 0; (p_1028->g_137 <= 28); p_1028->g_137 = safe_add_func_int64_t_s_s(p_1028->g_137, 8))
                { /* block id: 87 */
                    int8_t l_309 = 0L;
                    int32_t l_313 = 0x41B65D1AL;
                    int32_t l_315 = 0x5E84021AL;
                    int32_t l_317 = (-10L);
                    p_1028->g_164[4] = &p_121;
                    --l_318;
                    for (l_190 = 0; (l_190 < (-14)); l_190--)
                    { /* block id: 92 */
                        --l_323;
                    }
                }
                if ((((p_1028->g_173 && FAKE_DIVERGE(p_1028->group_2_offset, get_group_id(2), 10)) > (((+((p_1028->g_comm_values[p_1028->tid] = (safe_add_func_int32_t_s_s((p_1028->g_comm_values[p_1028->tid] , (*p_122)), ((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(l_329.s3727545251703512)), ((VECTOR(int64_t, 16))(l_330.xxzywzxyyxyzzyzz))))).hi)).even))).z)) == ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_331.zy)).yyyxxyxxyyxyyyyy)))).odd, ((VECTOR(uint64_t, 16))(l_332.s4388c200b22dd97d)).lo, ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 16))((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(3UL, ((VECTOR(uint16_t, 4))(l_335.s1256)), ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(8L, 0x63L)).yxyx, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((0x47C7L ^ ((((((void*)0 == l_336) , &l_239[3][4][0]) == l_337) > p_121) != p_121)) | 0x0FL), ((VECTOR(int8_t, 2))(7L)), 0x54L)), ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 8))(0x13L)))).s45, ((VECTOR(int8_t, 2))((-1L)))))).odd, 0x42L, 1L, (-1L), 0x19L, 1L, (-1L), (-9L), (-1L), ((VECTOR(int8_t, 4))(0L)), (-1L), 1L, 0x4AL)).even, ((VECTOR(int8_t, 8))(0L))))).s2234454772733216))).sf17c))).wwxxxwyz)), ((VECTOR(uint8_t, 8))(0x72L))))).even)).even, (int16_t)p_120))), (-10L), 0x07A0L)).lo)).yyxx)).lo, ((VECTOR(int16_t, 2))(0x0284L))))), 1UL)).s24)), 0x1345L, 0x6EA1L)).hi)), p_1028->g_233[5][7], 0xBF30L, 0UL, ((VECTOR(uint16_t, 2))(65535UL)), 0xFBCFL, p_1028->g_63, 0UL, 65528UL, 1UL, 0x44F2L, 7UL, 1UL, 4UL)).s1, 0x343FL)), l_339.se, 0x71706491E01E2FD9L, 18446744073709551613UL, p_121, p_121, p_1028->g_66.s2, 0UL, p_1028->g_161, 18446744073709551614UL, ((VECTOR(uint64_t, 2))(0x999C207EE671A5FCL)), 18446744073709551615UL, 18446744073709551614UL, 0x670F25A0BAEF3A46L, 0xE46925A65C302F5DL)).odd, (uint64_t)FAKE_DIVERGE(p_1028->group_0_offset, get_group_id(0), 10), (uint64_t)0x76B6B50FD8B76332L)))))).hi)).x)))) ^ 0x248CACE7AB45704FL)) != p_1028->g_229) < 0x0429L)) , (-3L)))
                { /* block id: 97 */
                    uint32_t l_342 = 0xF9788EBAL;
                    for (p_120 = (-8); (p_120 <= (-26)); p_120 = safe_sub_func_uint16_t_u_u(p_120, 7))
                    { /* block id: 100 */
                        if (l_342)
                            break;
                    }
                }
                else
                { /* block id: 103 */
                    uint16_t l_346 = 0x0A81L;
                    uint64_t *l_358[10][1][9] = {{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}},{{&p_1028->g_150,(void*)0,(void*)0,&p_1028->g_150,(void*)0,(void*)0,(void*)0,(void*)0,&p_1028->g_150}}};
                    int i, j, k;
                    for (l_312 = 0; (l_312 != (-19)); l_312 = safe_sub_func_int64_t_s_s(l_312, 4))
                    { /* block id: 106 */
                        int16_t l_355 = 9L;
                        uint64_t **l_359 = &l_217;
                        uint64_t **l_361 = &l_216;
                        int32_t l_370[7][7][1] = {{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}},{{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L},{0x571C69D0L}}};
                        int i, j, k;
                        ++l_346;
                        l_208 = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_314 = ((VECTOR(int8_t, 8))((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_353.wyww)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4D3CL, 0x7F09L)).xxxxyyyxxxyxyyxy)).sfd89)))))).s7 && (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_354.s6006)).lo)).xxyx)).x , (p_1028->g_233[4][0] = (((*p_122) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((65535UL >= (l_355 , GROUP_DIVERGE(0, 1))), 0x1BF947E9L, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_355 , (l_370[5][3][0] = (safe_add_func_int8_t_s_s((((*l_359) = l_358[6][0][0]) == ((*l_361) = l_360)), (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((1UL > 0x29L), l_346)) || p_121) & p_1028->g_282.x) , p_120), p_1028->g_161)), l_346)), 1)))))), l_190, (-2L), 0x78932494L)).zzwxwwww)).even, ((VECTOR(int32_t, 4))((-1L)))))), 0L, (*p_122), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(2L)), ((VECTOR(int32_t, 4))(1L)))).s5e7b)))).xxxxzxwy, ((VECTOR(int32_t, 8))(2L)), ((VECTOR(int32_t, 8))(1L))))).s65)).lo) == p_1028->g_231)))) & 0x7557BE8AA566FA66L) > p_1028->g_3), ((VECTOR(int8_t, 4))(1L)), 0x1BL, 0x32L, 0L)).s6) < p_1028->g_3), l_310)), p_121));
                    }
                    p_1028->g_164[0] = &p_121;
                    if (l_335.s3)
                        continue;
                    l_372--;
                }
            }
            for (p_1028->g_285 = 0; (p_1028->g_285 == 11); ++p_1028->g_285)
            { /* block id: 123 */
                l_205[2] |= 7L;
            }
        }
        else
        { /* block id: 126 */
            uint32_t l_405[2];
            int32_t l_410 = 0x12D960DBL;
            int i;
            for (i = 0; i < 2; i++)
                l_405[i] = 0x8EBD3E7EL;
            for (p_120 = (-13); (p_120 < (-4)); p_120++)
            { /* block id: 129 */
                VECTOR(int32_t, 8) l_390 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x37D162F4L), 0x37D162F4L), 0x37D162F4L, (-1L), 0x37D162F4L);
                VECTOR(int32_t, 2) l_391 = (VECTOR(int32_t, 2))(0L, 0L);
                VECTOR(uint16_t, 2) l_393 = (VECTOR(uint16_t, 2))(65531UL, 0xD742L);
                int i;
                for (p_1028->g_231 = 0; (p_1028->g_231 >= 17); p_1028->g_231 = safe_add_func_uint64_t_u_u(p_1028->g_231, 9))
                { /* block id: 132 */
                    int32_t *l_389 = &l_205[0];
                    (*l_389) = (p_120 < (safe_add_func_int16_t_s_s(((((void*)0 == p_122) <= (((safe_lshift_func_uint16_t_u_u(p_1028->g_191.s8, 13)) & (safe_rshift_func_uint16_t_u_s(((p_1028->g_161 |= p_1028->g_282.x) && ((6UL != (*p_122)) , (safe_sub_func_int64_t_s_s((p_1028->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1028->tid, 126))] && 1L), p_121)))), p_1028->g_285))) ^ 7L)) <= p_1028->g_134.w), p_1028->g_229)));
                    (*l_389) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_390.s1233631246272450)))))).s2;
                    (*l_389) |= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_391.yy)), ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1028->g_392.yzwz)))).xwwzyzyzwywxyyxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(l_393.yy)), ((VECTOR(uint16_t, 16))(((!(p_120 || ((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_209 ^= ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(p_1028->g_402.wywz)).wwxwxxww, (uint8_t)1UL))).s1521265551235565)).s1e)))).hi) && ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((((l_393.y <= ((VECTOR(int16_t, 4))((safe_mul_func_int8_t_s_s(l_213.z, (l_389 != (p_121 , &p_1028->g_229)))), 7L, 0L, (-1L))).z) && (!l_390.s4)) || (0x6523E813F1C1A734L && p_1028->g_282.x)) <= 0x08F6720AL), ((VECTOR(uint8_t, 4))(0xF1L)), 0x4FL, 249UL, 248UL)).s3203213635207276)).s0), 15)), p_1028->g_191.s3)) >= l_405[1]), p_121)) != l_405[1]), p_120)) > 0xE15AL))) | p_1028->g_comm_values[p_1028->tid]), 0x6929L, 0x366AL, l_329.s1, p_1028->g_282.x, l_405[1], l_405[1], 65528UL, ((VECTOR(uint16_t, 2))(0xF694L)), 1UL, ((VECTOR(uint16_t, 4))(0UL)), 3UL)).sc5))).xyyyyxyyyyyxyyyx)).s3b25)).wzwzyzxywxywzxzw))))).s369f, ((VECTOR(int32_t, 4))(2L))))).ywzxzzzywwxwyzwy, ((VECTOR(int32_t, 16))((-1L)))))).s4a))).even;
                    if ((*l_389))
                        break;
                }
                for (l_190 = (-24); (l_190 < 14); ++l_190)
                { /* block id: 142 */
                    VECTOR(int32_t, 8) l_413 = (VECTOR(int32_t, 8))(0x1B50BA4EL, (VECTOR(int32_t, 4))(0x1B50BA4EL, (VECTOR(int32_t, 2))(0x1B50BA4EL, 4L), 4L), 4L, 0x1B50BA4EL, 4L);
                    int32_t l_414 = 1L;
                    int32_t *l_418[6][2][4] = {{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}},{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}},{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}},{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}},{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}},{{&l_205[1],(void*)0,&l_414,(void*)0},{&l_205[1],(void*)0,&l_414,(void*)0}}};
                    int i, j, k;
                    for (p_1028->g_231 = 22; (p_1028->g_231 <= 58); ++p_1028->g_231)
                    { /* block id: 145 */
                        int32_t *l_411 = (void*)0;
                        int32_t *l_412[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_412[i] = &l_208;
                        p_121 = (p_121 , (p_121 > (l_410 = l_405[1])));
                        if ((*p_122))
                            break;
                        l_414 ^= ((VECTOR(int32_t, 4))(l_413.s7101)).z;
                    }
                    if ((atomic_inc(&p_1028->l_atomic_input[42]) == 3))
                    { /* block id: 152 */
                        int32_t l_416 = 0x4B527FCEL;
                        int32_t *l_415 = &l_416;
                        uint32_t l_417 = 0x7D05A90DL;
                        l_415 = (void*)0;
                        l_417 = 0x30269BF7L;
                        unsigned int result = 0;
                        result += l_416;
                        result += l_417;
                        atomic_add(&p_1028->l_special_values[42], result);
                    }
                    else
                    { /* block id: 155 */
                        (1 + 1);
                    }
                    p_1028->g_419.y++;
                }
                return &p_1028->g_63;
            }
        }
    }
    return &p_1028->g_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_1028->g_54
 * writes: p_1028->g_164
 */
int32_t  func_123(int64_t * p_124, int64_t * p_125, int16_t  p_126, int32_t ** p_127, uint64_t  p_128, struct S0 * p_1028)
{ /* block id: 47 */
    int32_t *l_163 = (void*)0;
    int32_t **l_162[3][10][8] = {{{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]}},{{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]}},{{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]},{&p_1028->g_54[1][5],&p_1028->g_54[2][0],&p_1028->g_54[3][6],(void*)0,&p_1028->g_54[3][6],&l_163,&p_1028->g_54[1][5],&p_1028->g_54[1][7]}}};
    int16_t *l_166 = &p_1028->g_161;
    int16_t **l_165 = &l_166;
    int16_t **l_167 = &l_166;
    int i, j, k;
    p_1028->g_164[0] = &p_1028->g_63;
    l_167 = l_165;
    p_1028->g_164[1] = (*p_127);
    return p_126;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[126];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 126; i++)
            l_comm_values[i] = 1;
    struct S0 c_1029;
    struct S0* p_1028 = &c_1029;
    struct S0 c_1030 = {
        0x7B871C7BL, // p_1028->g_2
        (-1L), // p_1028->g_3
        (-9L), // p_1028->g_20
        0x6224L, // p_1028->g_23
        0UL, // p_1028->g_24
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1028->g_52
        {{(void*)0,(void*)0,&p_1028->g_3,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_20,&p_1028->g_20},{(void*)0,(void*)0,&p_1028->g_3,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_20,&p_1028->g_20},{(void*)0,(void*)0,&p_1028->g_3,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_20,&p_1028->g_20},{(void*)0,(void*)0,&p_1028->g_3,(void*)0,&p_1028->g_3,&p_1028->g_3,&p_1028->g_20,&p_1028->g_20}}, // p_1028->g_54
        &p_1028->g_54[3][6], // p_1028->g_53
        (-1L), // p_1028->g_63
        &p_1028->g_63, // p_1028->g_62
        (VECTOR(uint32_t, 16))(0xE0BB6923L, (VECTOR(uint32_t, 4))(0xE0BB6923L, (VECTOR(uint32_t, 2))(0xE0BB6923L, 0x9E48991CL), 0x9E48991CL), 0x9E48991CL, 0xE0BB6923L, 0x9E48991CL, (VECTOR(uint32_t, 2))(0xE0BB6923L, 0x9E48991CL), (VECTOR(uint32_t, 2))(0xE0BB6923L, 0x9E48991CL), 0xE0BB6923L, 0x9E48991CL, 0xE0BB6923L, 0x9E48991CL), // p_1028->g_66
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 2UL), 2UL), // p_1028->g_67
        (VECTOR(uint32_t, 16))(0x62B02D37L, (VECTOR(uint32_t, 4))(0x62B02D37L, (VECTOR(uint32_t, 2))(0x62B02D37L, 0xB94A9589L), 0xB94A9589L), 0xB94A9589L, 0x62B02D37L, 0xB94A9589L, (VECTOR(uint32_t, 2))(0x62B02D37L, 0xB94A9589L), (VECTOR(uint32_t, 2))(0x62B02D37L, 0xB94A9589L), 0x62B02D37L, 0xB94A9589L, 0x62B02D37L, 0xB94A9589L), // p_1028->g_85
        (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 0x8EL), 0x8EL), // p_1028->g_134
        0x1BL, // p_1028->g_137
        (void*)0, // p_1028->g_138
        0xF954D451FECA7173L, // p_1028->g_150
        (VECTOR(int32_t, 16))(0x3C1C087CL, (VECTOR(int32_t, 4))(0x3C1C087CL, (VECTOR(int32_t, 2))(0x3C1C087CL, 0x5C4F2F58L), 0x5C4F2F58L), 0x5C4F2F58L, 0x3C1C087CL, 0x5C4F2F58L, (VECTOR(int32_t, 2))(0x3C1C087CL, 0x5C4F2F58L), (VECTOR(int32_t, 2))(0x3C1C087CL, 0x5C4F2F58L), 0x3C1C087CL, 0x5C4F2F58L, 0x3C1C087CL, 0x5C4F2F58L), // p_1028->g_154
        0L, // p_1028->g_161
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1028->g_164
        65526UL, // p_1028->g_173
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_1028->g_191
        3UL, // p_1028->g_229
        65529UL, // p_1028->g_231
        {{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL},{0xD8F9L,65528UL,4UL,0x0FB5L,4UL,65528UL,0xD8F9L,0x2C6CL,1UL,1UL}}, // p_1028->g_233
        (void*)0, // p_1028->g_252
        (VECTOR(int8_t, 2))(0x29L, 1L), // p_1028->g_282
        8L, // p_1028->g_285
        (VECTOR(int16_t, 4))(0x1659L, (VECTOR(int16_t, 2))(0x1659L, (-1L)), (-1L)), // p_1028->g_392
        (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x1BL), 0x1BL), // p_1028->g_402
        (VECTOR(uint32_t, 2))(0xA4E67DB3L, 0xCEFC932FL), // p_1028->g_419
        &p_1028->g_173, // p_1028->g_454
        {&p_1028->g_173,&p_1028->g_173,&p_1028->g_173,&p_1028->g_173,&p_1028->g_173,&p_1028->g_173,&p_1028->g_173,&p_1028->g_173}, // p_1028->g_455
        (void*)0, // p_1028->g_460
        (void*)0, // p_1028->g_462
        &p_1028->g_462, // p_1028->g_461
        (void*)0, // p_1028->g_465
        (void*)0, // p_1028->g_506
        255UL, // p_1028->g_508
        &p_1028->g_508, // p_1028->g_507
        18446744073709551613UL, // p_1028->g_524
        (-5L), // p_1028->g_588
        &p_1028->g_63, // p_1028->g_630
        0L, // p_1028->g_632
        1L, // p_1028->g_658
        (VECTOR(int8_t, 2))(0x4CL, 0x66L), // p_1028->g_666
        (VECTOR(uint32_t, 2))(0xDBC04058L, 4294967295UL), // p_1028->g_701
        &p_1028->g_63, // p_1028->g_711
        (VECTOR(uint32_t, 2))(1UL, 4294967286UL), // p_1028->g_757
        (VECTOR(int32_t, 16))(0x6AEC6BA7L, (VECTOR(int32_t, 4))(0x6AEC6BA7L, (VECTOR(int32_t, 2))(0x6AEC6BA7L, 0x4275F017L), 0x4275F017L), 0x4275F017L, 0x6AEC6BA7L, 0x4275F017L, (VECTOR(int32_t, 2))(0x6AEC6BA7L, 0x4275F017L), (VECTOR(int32_t, 2))(0x6AEC6BA7L, 0x4275F017L), 0x6AEC6BA7L, 0x4275F017L, 0x6AEC6BA7L, 0x4275F017L), // p_1028->g_778
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL), // p_1028->g_842
        (VECTOR(int32_t, 16))(0x0FE18BC7L, (VECTOR(int32_t, 4))(0x0FE18BC7L, (VECTOR(int32_t, 2))(0x0FE18BC7L, 0x6990A7AAL), 0x6990A7AAL), 0x6990A7AAL, 0x0FE18BC7L, 0x6990A7AAL, (VECTOR(int32_t, 2))(0x0FE18BC7L, 0x6990A7AAL), (VECTOR(int32_t, 2))(0x0FE18BC7L, 0x6990A7AAL), 0x0FE18BC7L, 0x6990A7AAL, 0x0FE18BC7L, 0x6990A7AAL), // p_1028->g_847
        &p_1028->g_588, // p_1028->g_861
        (VECTOR(uint64_t, 8))(0x8ECEE64B65AE9C1DL, (VECTOR(uint64_t, 4))(0x8ECEE64B65AE9C1DL, (VECTOR(uint64_t, 2))(0x8ECEE64B65AE9C1DL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0x8ECEE64B65AE9C1DL, 18446744073709551609UL), // p_1028->g_889
        (VECTOR(uint16_t, 2))(0xD7ACL, 0xC9B8L), // p_1028->g_894
        (VECTOR(uint16_t, 16))(0x625AL, (VECTOR(uint16_t, 4))(0x625AL, (VECTOR(uint16_t, 2))(0x625AL, 0x00AAL), 0x00AAL), 0x00AAL, 0x625AL, 0x00AAL, (VECTOR(uint16_t, 2))(0x625AL, 0x00AAL), (VECTOR(uint16_t, 2))(0x625AL, 0x00AAL), 0x625AL, 0x00AAL, 0x625AL, 0x00AAL), // p_1028->g_895
        (VECTOR(uint16_t, 8))(0xA1EEL, (VECTOR(uint16_t, 4))(0xA1EEL, (VECTOR(uint16_t, 2))(0xA1EEL, 5UL), 5UL), 5UL, 0xA1EEL, 5UL), // p_1028->g_896
        (VECTOR(uint16_t, 8))(0x8FEBL, (VECTOR(uint16_t, 4))(0x8FEBL, (VECTOR(uint16_t, 2))(0x8FEBL, 0x85CBL), 0x85CBL), 0x85CBL, 0x8FEBL, 0x85CBL), // p_1028->g_897
        (VECTOR(int64_t, 8))(0x71A50E58C18064D8L, (VECTOR(int64_t, 4))(0x71A50E58C18064D8L, (VECTOR(int64_t, 2))(0x71A50E58C18064D8L, 8L), 8L), 8L, 0x71A50E58C18064D8L, 8L), // p_1028->g_904
        &p_1028->g_455[3], // p_1028->g_912
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL), // p_1028->g_919
        (VECTOR(int8_t, 2))(0x45L, 0x30L), // p_1028->g_933
        &p_1028->g_54[3][6], // p_1028->g_960
        (VECTOR(uint64_t, 2))(0xC6D4D6E74B47CDC8L, 0UL), // p_1028->g_1000
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x28EB850C7FCD6C24L), 0x28EB850C7FCD6C24L), 0x28EB850C7FCD6C24L, 0UL, 0x28EB850C7FCD6C24L, (VECTOR(uint64_t, 2))(0UL, 0x28EB850C7FCD6C24L), (VECTOR(uint64_t, 2))(0UL, 0x28EB850C7FCD6C24L), 0UL, 0x28EB850C7FCD6C24L, 0UL, 0x28EB850C7FCD6C24L), // p_1028->g_1003
        (VECTOR(uint32_t, 2))(0UL, 0x814B07C3L), // p_1028->g_1006
        4294967295UL, // p_1028->g_1020
        &p_1028->g_1020, // p_1028->g_1019
        &p_1028->g_1019, // p_1028->g_1018
        &p_1028->g_1018, // p_1028->g_1017
        0, // p_1028->v_collective
        sequence_input[get_global_id(0)], // p_1028->global_0_offset
        sequence_input[get_global_id(1)], // p_1028->global_1_offset
        sequence_input[get_global_id(2)], // p_1028->global_2_offset
        sequence_input[get_local_id(0)], // p_1028->local_0_offset
        sequence_input[get_local_id(1)], // p_1028->local_1_offset
        sequence_input[get_local_id(2)], // p_1028->local_2_offset
        sequence_input[get_group_id(0)], // p_1028->group_0_offset
        sequence_input[get_group_id(1)], // p_1028->group_1_offset
        sequence_input[get_group_id(2)], // p_1028->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 126)), permutations[0][get_linear_local_id()])), // p_1028->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1029 = c_1030;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1028);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1028->g_2, "p_1028->g_2", print_hash_value);
    transparent_crc(p_1028->g_3, "p_1028->g_3", print_hash_value);
    transparent_crc(p_1028->g_20, "p_1028->g_20", print_hash_value);
    transparent_crc(p_1028->g_23, "p_1028->g_23", print_hash_value);
    transparent_crc(p_1028->g_24, "p_1028->g_24", print_hash_value);
    transparent_crc(p_1028->g_63, "p_1028->g_63", print_hash_value);
    transparent_crc(p_1028->g_66.s0, "p_1028->g_66.s0", print_hash_value);
    transparent_crc(p_1028->g_66.s1, "p_1028->g_66.s1", print_hash_value);
    transparent_crc(p_1028->g_66.s2, "p_1028->g_66.s2", print_hash_value);
    transparent_crc(p_1028->g_66.s3, "p_1028->g_66.s3", print_hash_value);
    transparent_crc(p_1028->g_66.s4, "p_1028->g_66.s4", print_hash_value);
    transparent_crc(p_1028->g_66.s5, "p_1028->g_66.s5", print_hash_value);
    transparent_crc(p_1028->g_66.s6, "p_1028->g_66.s6", print_hash_value);
    transparent_crc(p_1028->g_66.s7, "p_1028->g_66.s7", print_hash_value);
    transparent_crc(p_1028->g_66.s8, "p_1028->g_66.s8", print_hash_value);
    transparent_crc(p_1028->g_66.s9, "p_1028->g_66.s9", print_hash_value);
    transparent_crc(p_1028->g_66.sa, "p_1028->g_66.sa", print_hash_value);
    transparent_crc(p_1028->g_66.sb, "p_1028->g_66.sb", print_hash_value);
    transparent_crc(p_1028->g_66.sc, "p_1028->g_66.sc", print_hash_value);
    transparent_crc(p_1028->g_66.sd, "p_1028->g_66.sd", print_hash_value);
    transparent_crc(p_1028->g_66.se, "p_1028->g_66.se", print_hash_value);
    transparent_crc(p_1028->g_66.sf, "p_1028->g_66.sf", print_hash_value);
    transparent_crc(p_1028->g_67.x, "p_1028->g_67.x", print_hash_value);
    transparent_crc(p_1028->g_67.y, "p_1028->g_67.y", print_hash_value);
    transparent_crc(p_1028->g_67.z, "p_1028->g_67.z", print_hash_value);
    transparent_crc(p_1028->g_67.w, "p_1028->g_67.w", print_hash_value);
    transparent_crc(p_1028->g_85.s0, "p_1028->g_85.s0", print_hash_value);
    transparent_crc(p_1028->g_85.s1, "p_1028->g_85.s1", print_hash_value);
    transparent_crc(p_1028->g_85.s2, "p_1028->g_85.s2", print_hash_value);
    transparent_crc(p_1028->g_85.s3, "p_1028->g_85.s3", print_hash_value);
    transparent_crc(p_1028->g_85.s4, "p_1028->g_85.s4", print_hash_value);
    transparent_crc(p_1028->g_85.s5, "p_1028->g_85.s5", print_hash_value);
    transparent_crc(p_1028->g_85.s6, "p_1028->g_85.s6", print_hash_value);
    transparent_crc(p_1028->g_85.s7, "p_1028->g_85.s7", print_hash_value);
    transparent_crc(p_1028->g_85.s8, "p_1028->g_85.s8", print_hash_value);
    transparent_crc(p_1028->g_85.s9, "p_1028->g_85.s9", print_hash_value);
    transparent_crc(p_1028->g_85.sa, "p_1028->g_85.sa", print_hash_value);
    transparent_crc(p_1028->g_85.sb, "p_1028->g_85.sb", print_hash_value);
    transparent_crc(p_1028->g_85.sc, "p_1028->g_85.sc", print_hash_value);
    transparent_crc(p_1028->g_85.sd, "p_1028->g_85.sd", print_hash_value);
    transparent_crc(p_1028->g_85.se, "p_1028->g_85.se", print_hash_value);
    transparent_crc(p_1028->g_85.sf, "p_1028->g_85.sf", print_hash_value);
    transparent_crc(p_1028->g_134.x, "p_1028->g_134.x", print_hash_value);
    transparent_crc(p_1028->g_134.y, "p_1028->g_134.y", print_hash_value);
    transparent_crc(p_1028->g_134.z, "p_1028->g_134.z", print_hash_value);
    transparent_crc(p_1028->g_134.w, "p_1028->g_134.w", print_hash_value);
    transparent_crc(p_1028->g_137, "p_1028->g_137", print_hash_value);
    transparent_crc(p_1028->g_150, "p_1028->g_150", print_hash_value);
    transparent_crc(p_1028->g_154.s0, "p_1028->g_154.s0", print_hash_value);
    transparent_crc(p_1028->g_154.s1, "p_1028->g_154.s1", print_hash_value);
    transparent_crc(p_1028->g_154.s2, "p_1028->g_154.s2", print_hash_value);
    transparent_crc(p_1028->g_154.s3, "p_1028->g_154.s3", print_hash_value);
    transparent_crc(p_1028->g_154.s4, "p_1028->g_154.s4", print_hash_value);
    transparent_crc(p_1028->g_154.s5, "p_1028->g_154.s5", print_hash_value);
    transparent_crc(p_1028->g_154.s6, "p_1028->g_154.s6", print_hash_value);
    transparent_crc(p_1028->g_154.s7, "p_1028->g_154.s7", print_hash_value);
    transparent_crc(p_1028->g_154.s8, "p_1028->g_154.s8", print_hash_value);
    transparent_crc(p_1028->g_154.s9, "p_1028->g_154.s9", print_hash_value);
    transparent_crc(p_1028->g_154.sa, "p_1028->g_154.sa", print_hash_value);
    transparent_crc(p_1028->g_154.sb, "p_1028->g_154.sb", print_hash_value);
    transparent_crc(p_1028->g_154.sc, "p_1028->g_154.sc", print_hash_value);
    transparent_crc(p_1028->g_154.sd, "p_1028->g_154.sd", print_hash_value);
    transparent_crc(p_1028->g_154.se, "p_1028->g_154.se", print_hash_value);
    transparent_crc(p_1028->g_154.sf, "p_1028->g_154.sf", print_hash_value);
    transparent_crc(p_1028->g_161, "p_1028->g_161", print_hash_value);
    transparent_crc(p_1028->g_173, "p_1028->g_173", print_hash_value);
    transparent_crc(p_1028->g_191.s0, "p_1028->g_191.s0", print_hash_value);
    transparent_crc(p_1028->g_191.s1, "p_1028->g_191.s1", print_hash_value);
    transparent_crc(p_1028->g_191.s2, "p_1028->g_191.s2", print_hash_value);
    transparent_crc(p_1028->g_191.s3, "p_1028->g_191.s3", print_hash_value);
    transparent_crc(p_1028->g_191.s4, "p_1028->g_191.s4", print_hash_value);
    transparent_crc(p_1028->g_191.s5, "p_1028->g_191.s5", print_hash_value);
    transparent_crc(p_1028->g_191.s6, "p_1028->g_191.s6", print_hash_value);
    transparent_crc(p_1028->g_191.s7, "p_1028->g_191.s7", print_hash_value);
    transparent_crc(p_1028->g_191.s8, "p_1028->g_191.s8", print_hash_value);
    transparent_crc(p_1028->g_191.s9, "p_1028->g_191.s9", print_hash_value);
    transparent_crc(p_1028->g_191.sa, "p_1028->g_191.sa", print_hash_value);
    transparent_crc(p_1028->g_191.sb, "p_1028->g_191.sb", print_hash_value);
    transparent_crc(p_1028->g_191.sc, "p_1028->g_191.sc", print_hash_value);
    transparent_crc(p_1028->g_191.sd, "p_1028->g_191.sd", print_hash_value);
    transparent_crc(p_1028->g_191.se, "p_1028->g_191.se", print_hash_value);
    transparent_crc(p_1028->g_191.sf, "p_1028->g_191.sf", print_hash_value);
    transparent_crc(p_1028->g_229, "p_1028->g_229", print_hash_value);
    transparent_crc(p_1028->g_231, "p_1028->g_231", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1028->g_233[i][j], "p_1028->g_233[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1028->g_282.x, "p_1028->g_282.x", print_hash_value);
    transparent_crc(p_1028->g_282.y, "p_1028->g_282.y", print_hash_value);
    transparent_crc(p_1028->g_285, "p_1028->g_285", print_hash_value);
    transparent_crc(p_1028->g_392.x, "p_1028->g_392.x", print_hash_value);
    transparent_crc(p_1028->g_392.y, "p_1028->g_392.y", print_hash_value);
    transparent_crc(p_1028->g_392.z, "p_1028->g_392.z", print_hash_value);
    transparent_crc(p_1028->g_392.w, "p_1028->g_392.w", print_hash_value);
    transparent_crc(p_1028->g_402.x, "p_1028->g_402.x", print_hash_value);
    transparent_crc(p_1028->g_402.y, "p_1028->g_402.y", print_hash_value);
    transparent_crc(p_1028->g_402.z, "p_1028->g_402.z", print_hash_value);
    transparent_crc(p_1028->g_402.w, "p_1028->g_402.w", print_hash_value);
    transparent_crc(p_1028->g_419.x, "p_1028->g_419.x", print_hash_value);
    transparent_crc(p_1028->g_419.y, "p_1028->g_419.y", print_hash_value);
    transparent_crc(p_1028->g_508, "p_1028->g_508", print_hash_value);
    transparent_crc(p_1028->g_524, "p_1028->g_524", print_hash_value);
    transparent_crc(p_1028->g_588, "p_1028->g_588", print_hash_value);
    transparent_crc(p_1028->g_632, "p_1028->g_632", print_hash_value);
    transparent_crc(p_1028->g_658, "p_1028->g_658", print_hash_value);
    transparent_crc(p_1028->g_666.x, "p_1028->g_666.x", print_hash_value);
    transparent_crc(p_1028->g_666.y, "p_1028->g_666.y", print_hash_value);
    transparent_crc(p_1028->g_701.x, "p_1028->g_701.x", print_hash_value);
    transparent_crc(p_1028->g_701.y, "p_1028->g_701.y", print_hash_value);
    transparent_crc(p_1028->g_757.x, "p_1028->g_757.x", print_hash_value);
    transparent_crc(p_1028->g_757.y, "p_1028->g_757.y", print_hash_value);
    transparent_crc(p_1028->g_778.s0, "p_1028->g_778.s0", print_hash_value);
    transparent_crc(p_1028->g_778.s1, "p_1028->g_778.s1", print_hash_value);
    transparent_crc(p_1028->g_778.s2, "p_1028->g_778.s2", print_hash_value);
    transparent_crc(p_1028->g_778.s3, "p_1028->g_778.s3", print_hash_value);
    transparent_crc(p_1028->g_778.s4, "p_1028->g_778.s4", print_hash_value);
    transparent_crc(p_1028->g_778.s5, "p_1028->g_778.s5", print_hash_value);
    transparent_crc(p_1028->g_778.s6, "p_1028->g_778.s6", print_hash_value);
    transparent_crc(p_1028->g_778.s7, "p_1028->g_778.s7", print_hash_value);
    transparent_crc(p_1028->g_778.s8, "p_1028->g_778.s8", print_hash_value);
    transparent_crc(p_1028->g_778.s9, "p_1028->g_778.s9", print_hash_value);
    transparent_crc(p_1028->g_778.sa, "p_1028->g_778.sa", print_hash_value);
    transparent_crc(p_1028->g_778.sb, "p_1028->g_778.sb", print_hash_value);
    transparent_crc(p_1028->g_778.sc, "p_1028->g_778.sc", print_hash_value);
    transparent_crc(p_1028->g_778.sd, "p_1028->g_778.sd", print_hash_value);
    transparent_crc(p_1028->g_778.se, "p_1028->g_778.se", print_hash_value);
    transparent_crc(p_1028->g_778.sf, "p_1028->g_778.sf", print_hash_value);
    transparent_crc(p_1028->g_842.s0, "p_1028->g_842.s0", print_hash_value);
    transparent_crc(p_1028->g_842.s1, "p_1028->g_842.s1", print_hash_value);
    transparent_crc(p_1028->g_842.s2, "p_1028->g_842.s2", print_hash_value);
    transparent_crc(p_1028->g_842.s3, "p_1028->g_842.s3", print_hash_value);
    transparent_crc(p_1028->g_842.s4, "p_1028->g_842.s4", print_hash_value);
    transparent_crc(p_1028->g_842.s5, "p_1028->g_842.s5", print_hash_value);
    transparent_crc(p_1028->g_842.s6, "p_1028->g_842.s6", print_hash_value);
    transparent_crc(p_1028->g_842.s7, "p_1028->g_842.s7", print_hash_value);
    transparent_crc(p_1028->g_842.s8, "p_1028->g_842.s8", print_hash_value);
    transparent_crc(p_1028->g_842.s9, "p_1028->g_842.s9", print_hash_value);
    transparent_crc(p_1028->g_842.sa, "p_1028->g_842.sa", print_hash_value);
    transparent_crc(p_1028->g_842.sb, "p_1028->g_842.sb", print_hash_value);
    transparent_crc(p_1028->g_842.sc, "p_1028->g_842.sc", print_hash_value);
    transparent_crc(p_1028->g_842.sd, "p_1028->g_842.sd", print_hash_value);
    transparent_crc(p_1028->g_842.se, "p_1028->g_842.se", print_hash_value);
    transparent_crc(p_1028->g_842.sf, "p_1028->g_842.sf", print_hash_value);
    transparent_crc(p_1028->g_847.s0, "p_1028->g_847.s0", print_hash_value);
    transparent_crc(p_1028->g_847.s1, "p_1028->g_847.s1", print_hash_value);
    transparent_crc(p_1028->g_847.s2, "p_1028->g_847.s2", print_hash_value);
    transparent_crc(p_1028->g_847.s3, "p_1028->g_847.s3", print_hash_value);
    transparent_crc(p_1028->g_847.s4, "p_1028->g_847.s4", print_hash_value);
    transparent_crc(p_1028->g_847.s5, "p_1028->g_847.s5", print_hash_value);
    transparent_crc(p_1028->g_847.s6, "p_1028->g_847.s6", print_hash_value);
    transparent_crc(p_1028->g_847.s7, "p_1028->g_847.s7", print_hash_value);
    transparent_crc(p_1028->g_847.s8, "p_1028->g_847.s8", print_hash_value);
    transparent_crc(p_1028->g_847.s9, "p_1028->g_847.s9", print_hash_value);
    transparent_crc(p_1028->g_847.sa, "p_1028->g_847.sa", print_hash_value);
    transparent_crc(p_1028->g_847.sb, "p_1028->g_847.sb", print_hash_value);
    transparent_crc(p_1028->g_847.sc, "p_1028->g_847.sc", print_hash_value);
    transparent_crc(p_1028->g_847.sd, "p_1028->g_847.sd", print_hash_value);
    transparent_crc(p_1028->g_847.se, "p_1028->g_847.se", print_hash_value);
    transparent_crc(p_1028->g_847.sf, "p_1028->g_847.sf", print_hash_value);
    transparent_crc(p_1028->g_889.s0, "p_1028->g_889.s0", print_hash_value);
    transparent_crc(p_1028->g_889.s1, "p_1028->g_889.s1", print_hash_value);
    transparent_crc(p_1028->g_889.s2, "p_1028->g_889.s2", print_hash_value);
    transparent_crc(p_1028->g_889.s3, "p_1028->g_889.s3", print_hash_value);
    transparent_crc(p_1028->g_889.s4, "p_1028->g_889.s4", print_hash_value);
    transparent_crc(p_1028->g_889.s5, "p_1028->g_889.s5", print_hash_value);
    transparent_crc(p_1028->g_889.s6, "p_1028->g_889.s6", print_hash_value);
    transparent_crc(p_1028->g_889.s7, "p_1028->g_889.s7", print_hash_value);
    transparent_crc(p_1028->g_894.x, "p_1028->g_894.x", print_hash_value);
    transparent_crc(p_1028->g_894.y, "p_1028->g_894.y", print_hash_value);
    transparent_crc(p_1028->g_895.s0, "p_1028->g_895.s0", print_hash_value);
    transparent_crc(p_1028->g_895.s1, "p_1028->g_895.s1", print_hash_value);
    transparent_crc(p_1028->g_895.s2, "p_1028->g_895.s2", print_hash_value);
    transparent_crc(p_1028->g_895.s3, "p_1028->g_895.s3", print_hash_value);
    transparent_crc(p_1028->g_895.s4, "p_1028->g_895.s4", print_hash_value);
    transparent_crc(p_1028->g_895.s5, "p_1028->g_895.s5", print_hash_value);
    transparent_crc(p_1028->g_895.s6, "p_1028->g_895.s6", print_hash_value);
    transparent_crc(p_1028->g_895.s7, "p_1028->g_895.s7", print_hash_value);
    transparent_crc(p_1028->g_895.s8, "p_1028->g_895.s8", print_hash_value);
    transparent_crc(p_1028->g_895.s9, "p_1028->g_895.s9", print_hash_value);
    transparent_crc(p_1028->g_895.sa, "p_1028->g_895.sa", print_hash_value);
    transparent_crc(p_1028->g_895.sb, "p_1028->g_895.sb", print_hash_value);
    transparent_crc(p_1028->g_895.sc, "p_1028->g_895.sc", print_hash_value);
    transparent_crc(p_1028->g_895.sd, "p_1028->g_895.sd", print_hash_value);
    transparent_crc(p_1028->g_895.se, "p_1028->g_895.se", print_hash_value);
    transparent_crc(p_1028->g_895.sf, "p_1028->g_895.sf", print_hash_value);
    transparent_crc(p_1028->g_896.s0, "p_1028->g_896.s0", print_hash_value);
    transparent_crc(p_1028->g_896.s1, "p_1028->g_896.s1", print_hash_value);
    transparent_crc(p_1028->g_896.s2, "p_1028->g_896.s2", print_hash_value);
    transparent_crc(p_1028->g_896.s3, "p_1028->g_896.s3", print_hash_value);
    transparent_crc(p_1028->g_896.s4, "p_1028->g_896.s4", print_hash_value);
    transparent_crc(p_1028->g_896.s5, "p_1028->g_896.s5", print_hash_value);
    transparent_crc(p_1028->g_896.s6, "p_1028->g_896.s6", print_hash_value);
    transparent_crc(p_1028->g_896.s7, "p_1028->g_896.s7", print_hash_value);
    transparent_crc(p_1028->g_897.s0, "p_1028->g_897.s0", print_hash_value);
    transparent_crc(p_1028->g_897.s1, "p_1028->g_897.s1", print_hash_value);
    transparent_crc(p_1028->g_897.s2, "p_1028->g_897.s2", print_hash_value);
    transparent_crc(p_1028->g_897.s3, "p_1028->g_897.s3", print_hash_value);
    transparent_crc(p_1028->g_897.s4, "p_1028->g_897.s4", print_hash_value);
    transparent_crc(p_1028->g_897.s5, "p_1028->g_897.s5", print_hash_value);
    transparent_crc(p_1028->g_897.s6, "p_1028->g_897.s6", print_hash_value);
    transparent_crc(p_1028->g_897.s7, "p_1028->g_897.s7", print_hash_value);
    transparent_crc(p_1028->g_904.s0, "p_1028->g_904.s0", print_hash_value);
    transparent_crc(p_1028->g_904.s1, "p_1028->g_904.s1", print_hash_value);
    transparent_crc(p_1028->g_904.s2, "p_1028->g_904.s2", print_hash_value);
    transparent_crc(p_1028->g_904.s3, "p_1028->g_904.s3", print_hash_value);
    transparent_crc(p_1028->g_904.s4, "p_1028->g_904.s4", print_hash_value);
    transparent_crc(p_1028->g_904.s5, "p_1028->g_904.s5", print_hash_value);
    transparent_crc(p_1028->g_904.s6, "p_1028->g_904.s6", print_hash_value);
    transparent_crc(p_1028->g_904.s7, "p_1028->g_904.s7", print_hash_value);
    transparent_crc(p_1028->g_919.s0, "p_1028->g_919.s0", print_hash_value);
    transparent_crc(p_1028->g_919.s1, "p_1028->g_919.s1", print_hash_value);
    transparent_crc(p_1028->g_919.s2, "p_1028->g_919.s2", print_hash_value);
    transparent_crc(p_1028->g_919.s3, "p_1028->g_919.s3", print_hash_value);
    transparent_crc(p_1028->g_919.s4, "p_1028->g_919.s4", print_hash_value);
    transparent_crc(p_1028->g_919.s5, "p_1028->g_919.s5", print_hash_value);
    transparent_crc(p_1028->g_919.s6, "p_1028->g_919.s6", print_hash_value);
    transparent_crc(p_1028->g_919.s7, "p_1028->g_919.s7", print_hash_value);
    transparent_crc(p_1028->g_919.s8, "p_1028->g_919.s8", print_hash_value);
    transparent_crc(p_1028->g_919.s9, "p_1028->g_919.s9", print_hash_value);
    transparent_crc(p_1028->g_919.sa, "p_1028->g_919.sa", print_hash_value);
    transparent_crc(p_1028->g_919.sb, "p_1028->g_919.sb", print_hash_value);
    transparent_crc(p_1028->g_919.sc, "p_1028->g_919.sc", print_hash_value);
    transparent_crc(p_1028->g_919.sd, "p_1028->g_919.sd", print_hash_value);
    transparent_crc(p_1028->g_919.se, "p_1028->g_919.se", print_hash_value);
    transparent_crc(p_1028->g_919.sf, "p_1028->g_919.sf", print_hash_value);
    transparent_crc(p_1028->g_933.x, "p_1028->g_933.x", print_hash_value);
    transparent_crc(p_1028->g_933.y, "p_1028->g_933.y", print_hash_value);
    transparent_crc(p_1028->g_1000.x, "p_1028->g_1000.x", print_hash_value);
    transparent_crc(p_1028->g_1000.y, "p_1028->g_1000.y", print_hash_value);
    transparent_crc(p_1028->g_1003.s0, "p_1028->g_1003.s0", print_hash_value);
    transparent_crc(p_1028->g_1003.s1, "p_1028->g_1003.s1", print_hash_value);
    transparent_crc(p_1028->g_1003.s2, "p_1028->g_1003.s2", print_hash_value);
    transparent_crc(p_1028->g_1003.s3, "p_1028->g_1003.s3", print_hash_value);
    transparent_crc(p_1028->g_1003.s4, "p_1028->g_1003.s4", print_hash_value);
    transparent_crc(p_1028->g_1003.s5, "p_1028->g_1003.s5", print_hash_value);
    transparent_crc(p_1028->g_1003.s6, "p_1028->g_1003.s6", print_hash_value);
    transparent_crc(p_1028->g_1003.s7, "p_1028->g_1003.s7", print_hash_value);
    transparent_crc(p_1028->g_1003.s8, "p_1028->g_1003.s8", print_hash_value);
    transparent_crc(p_1028->g_1003.s9, "p_1028->g_1003.s9", print_hash_value);
    transparent_crc(p_1028->g_1003.sa, "p_1028->g_1003.sa", print_hash_value);
    transparent_crc(p_1028->g_1003.sb, "p_1028->g_1003.sb", print_hash_value);
    transparent_crc(p_1028->g_1003.sc, "p_1028->g_1003.sc", print_hash_value);
    transparent_crc(p_1028->g_1003.sd, "p_1028->g_1003.sd", print_hash_value);
    transparent_crc(p_1028->g_1003.se, "p_1028->g_1003.se", print_hash_value);
    transparent_crc(p_1028->g_1003.sf, "p_1028->g_1003.sf", print_hash_value);
    transparent_crc(p_1028->g_1006.x, "p_1028->g_1006.x", print_hash_value);
    transparent_crc(p_1028->g_1006.y, "p_1028->g_1006.y", print_hash_value);
    transparent_crc(p_1028->g_1020, "p_1028->g_1020", print_hash_value);
    transparent_crc(p_1028->v_collective, "p_1028->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 75; i++)
            transparent_crc(p_1028->g_special_values[i + 75 * get_linear_group_id()], "p_1028->g_special_values[i + 75 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 75; i++)
            transparent_crc(p_1028->l_special_values[i], "p_1028->l_special_values[i]", print_hash_value);
    transparent_crc(p_1028->l_comm_values[get_linear_local_id()], "p_1028->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1028->g_comm_values[get_linear_group_id() * 126 + get_linear_local_id()], "p_1028->g_comm_values[get_linear_group_id() * 126 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
