// -g 31,81,1 -l 1,1,1
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


// Seed: 659708816

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int16_t  f1;
   volatile int32_t  f2;
   int32_t  f3;
};

struct S1 {
    int32_t g_3;
    int32_t g_4[6][9];
    int32_t g_8;
    int32_t * volatile g_7;
    int32_t g_10;
    int32_t * volatile g_9;
    uint8_t g_17;
    int64_t g_26;
    int64_t *g_78;
    int32_t g_101;
    int32_t g_114;
    int32_t * volatile g_113;
    int64_t *** volatile g_118;
    int64_t **g_119;
    union U0 g_124;
    union U0 *g_123[2];
    union U0 ** volatile g_122;
    uint16_t g_129;
    uint32_t g_132;
    uint32_t g_135;
    uint8_t g_138;
    uint8_t *g_137;
    uint64_t g_163;
    uint64_t g_167;
    uint64_t g_171;
    uint16_t g_185;
    uint32_t g_188;
    int8_t g_191;
    int16_t g_193[1];
    int32_t * volatile g_195;
    volatile uint32_t g_199;
    volatile uint32_t g_217[5];
    int64_t g_258;
    int32_t *g_272;
    int8_t g_338[7][3][7];
    int8_t *g_353;
    int32_t g_428[5][4];
    uint16_t g_432;
    union U0 g_438[5];
    uint64_t *g_444[9];
    uint64_t * volatile * volatile g_443[9];
    uint64_t * volatile * volatile *g_442;
    uint16_t *g_455;
    uint16_t **g_454[6][6][1];
    uint16_t *** volatile g_453;
    volatile union U0 g_473;
    uint64_t g_496;
    volatile union U0 g_502;
    uint32_t g_548[2][6][8];
    int32_t ** volatile g_553;
    int64_t *g_555;
    uint32_t g_581;
    int16_t g_582[4][6][6];
    int16_t g_587;
    int64_t g_589;
    int8_t **g_597[10][4][3];
    int8_t **g_598;
    union U0 g_605;
    int64_t g_628;
    int32_t ** volatile g_635;
    int32_t ** volatile g_639;
    int32_t ** volatile g_762;
    int32_t ** volatile g_765;
    int32_t ** volatile g_766;
    union U0 g_799;
    int64_t g_816;
    uint32_t **g_846;
    int32_t * volatile g_855[3];
    int32_t * volatile g_856;
    volatile union U0 g_873;
    uint32_t g_911;
    volatile int64_t g_931;
    union U0 g_974;
    int64_t g_1013[8][2];
    uint8_t *g_1060;
    uint8_t **g_1059;
    uint32_t g_1064;
    int32_t ** volatile g_1076;
    int8_t *** volatile g_1125;
    int32_t ** volatile g_1126;
    int32_t ** volatile g_1171;
    int16_t g_1191;
    uint16_t g_1247[9][8][3];
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S1 * p_1248);
uint32_t  func_29(int32_t  p_30, int64_t * p_31, uint32_t  p_32, uint64_t  p_33, struct S1 * p_1248);
int64_t  func_35(int64_t * p_36, int16_t  p_37, uint8_t * p_38, struct S1 * p_1248);
int64_t * func_39(int64_t * p_40, uint32_t  p_41, struct S1 * p_1248);
int32_t  func_42(uint8_t * p_43, uint8_t * p_44, uint8_t * p_45, uint8_t * p_46, int64_t * p_47, struct S1 * p_1248);
uint8_t * func_48(int32_t * p_49, int32_t  p_50, struct S1 * p_1248);
int32_t * func_51(uint32_t  p_52, struct S1 * p_1248);
uint32_t  func_53(int64_t  p_54, int32_t * p_55, struct S1 * p_1248);
int64_t  func_56(int32_t  p_57, uint8_t * p_58, int64_t * p_59, uint32_t  p_60, int32_t * p_61, struct S1 * p_1248);
uint16_t  func_66(int64_t * p_67, int32_t * p_68, uint16_t  p_69, int32_t * p_70, int64_t * p_71, struct S1 * p_1248);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1248->g_3 p_1248->g_635 p_1248->g_272 p_1248->g_101 p_1248->g_873 p_1248->g_137 p_1248->g_138 p_1248->g_762 p_1248->g_639 p_1248->g_119 p_1248->g_78 p_1248->g_26 p_1248->g_428 p_1248->g_553 p_1248->g_911 p_1248->g_455 p_1248->g_185 p_1248->g_931 p_1248->g_974 p_1248->g_766 p_1248->g_113 p_1248->g_114 p_1248->g_799.f3 p_1248->g_195 p_1248->g_4 p_1248->g_1247
 * writes: p_1248->g_3 p_1248->g_4 p_1248->g_171 p_1248->g_605.f3 p_1248->g_101 p_1248->g_138 p_1248->g_272 p_1248->g_8 p_1248->g_548 p_1248->g_338 p_1248->g_185 p_1248->g_193 p_1248->g_129 p_1248->g_432 p_1248->g_191 p_1248->g_911 p_1248->g_114 p_1248->g_124.f0 p_1248->g_26 p_1248->g_799.f0 p_1248->g_799.f3
 */
int8_t  func_1(struct S1 * p_1248)
{ /* block id: 4 */
    int32_t l_2[3][9][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
    uint8_t l_141[2];
    int64_t *l_588 = &p_1248->g_589;
    uint32_t l_812[3];
    int16_t *l_813[6] = {(void*)0,&p_1248->g_582[3][1][2],(void*)0,(void*)0,&p_1248->g_582[3][1][2],(void*)0};
    uint32_t l_840 = 4294967287UL;
    uint32_t *l_848 = (void*)0;
    uint32_t **l_847[7][2] = {{&l_848,&l_848},{&l_848,&l_848},{&l_848,&l_848},{&l_848,&l_848},{&l_848,&l_848},{&l_848,&l_848},{&l_848,&l_848}};
    int32_t l_862 = 6L;
    int32_t l_865 = 0x0E70614BL;
    int32_t l_866 = (-3L);
    int32_t l_867[1][8] = {{4L,4L,4L,4L,4L,4L,4L,4L}};
    uint32_t l_938 = 0x871E07AEL;
    int32_t l_1032 = 0x059114CDL;
    uint64_t l_1074[2][8][2] = {{{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL}},{{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL},{18446744073709551609UL,9UL}}};
    int8_t **l_1124[5][6] = {{(void*)0,&p_1248->g_353,&p_1248->g_353,(void*)0,(void*)0,&p_1248->g_353},{(void*)0,&p_1248->g_353,&p_1248->g_353,(void*)0,(void*)0,&p_1248->g_353},{(void*)0,&p_1248->g_353,&p_1248->g_353,(void*)0,(void*)0,&p_1248->g_353},{(void*)0,&p_1248->g_353,&p_1248->g_353,(void*)0,(void*)0,&p_1248->g_353},{(void*)0,&p_1248->g_353,&p_1248->g_353,(void*)0,(void*)0,&p_1248->g_353}};
    uint64_t **l_1156 = &p_1248->g_444[5];
    int32_t *l_1174 = (void*)0;
    int16_t l_1241 = 0L;
    int32_t *l_1246 = &p_1248->g_4[4][8];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_141[i] = 1UL;
    for (i = 0; i < 3; i++)
        l_812[i] = 1UL;
    for (p_1248->g_3 = 0; (p_1248->g_3 <= 0); p_1248->g_3 += 1)
    { /* block id: 7 */
        uint8_t l_18 = 252UL;
        int32_t *l_23 = &p_1248->g_3;
        int32_t l_791 = (-1L);
        uint8_t l_792 = 0x3CL;
        int64_t l_814 = 0x11CEEC8018CB3807L;
        int32_t l_861 = (-1L);
        int32_t l_863 = 0x224318EEL;
        int32_t l_864 = 1L;
        uint32_t l_868[2][10] = {{0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL},{0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL,0x9CD4E8FBL}};
        int32_t l_918 = 1L;
        int32_t l_934[1];
        int64_t ***l_1073 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
            l_934[i] = 1L;
        for (p_1248->g_4[4][8] = 0; (p_1248->g_4[4][8] >= 0); p_1248->g_4[4][8] -= 1)
        { /* block id: 10 */
            uint8_t l_5 = 251UL;
            int32_t *l_6 = (void*)0;
            uint16_t l_130 = 65534UL;
            int64_t *l_286 = &p_1248->g_26;
            uint32_t l_818 = 0x41F9F7A9L;
            (1 + 1);
        }
        for (p_1248->g_171 = 0; (p_1248->g_171 <= 0); p_1248->g_171 += 1)
        { /* block id: 409 */
            int16_t l_857 = 0x0B49L;
            int32_t l_858 = (-2L);
            int32_t *l_859 = (void*)0;
            int32_t *l_860[3][7] = {{&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114},{&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114},{&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114,&p_1248->g_8,&p_1248->g_114,&p_1248->g_114}};
            uint16_t *l_926 = (void*)0;
            int64_t l_932 = 0x3B2056FEB5181375L;
            int64_t l_933 = (-1L);
            int64_t l_936 = 0x5ACBE07493651106L;
            int64_t l_937 = (-1L);
            int32_t l_971 = (-6L);
            int8_t ***l_981 = &p_1248->g_597[8][1][0];
            uint64_t l_1014 = 0xC4DF9659AB32DD9DL;
            int16_t l_1037 = 0L;
            uint64_t l_1038 = 0xD6CF22F0D9EADCE9L;
            int8_t l_1050 = 0L;
            int16_t l_1068[6] = {0x1AFCL,0x1AFCL,0x1AFCL,0x1AFCL,0x1AFCL,0x1AFCL};
            int i, j;
            ++l_868[1][7];
            for (p_1248->g_605.f3 = 0; (p_1248->g_605.f3 <= 0); p_1248->g_605.f3 += 1)
            { /* block id: 413 */
                uint8_t l_879 = 255UL;
                int32_t l_914 = 0x1F37D11FL;
                int32_t l_915 = 0x5A2BF4E0L;
                int32_t l_916 = (-10L);
                int32_t l_917 = 1L;
                int32_t l_935 = (-1L);
                (**p_1248->g_635) &= 0L;
                if (((p_1248->g_873 , (!(safe_unary_minus_func_uint8_t_u(((*p_1248->g_137)--))))) >= ((void*)0 != &p_1248->g_135)))
                { /* block id: 416 */
                    int32_t **l_877 = (void*)0;
                    int32_t **l_878[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_878[i] = &l_860[0][1];
                    (*p_1248->g_639) = (l_23 = (*p_1248->g_762));
                }
                else
                { /* block id: 419 */
                    uint64_t l_897 = 5UL;
                    int32_t l_913[9][4][6] = {{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}},{{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L},{0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L,0x0DEDBC14L}}};
                    uint16_t l_919 = 0x222BL;
                    int i, j, k;
                    for (p_1248->g_8 = 0; (p_1248->g_8 >= 0); p_1248->g_8 -= 1)
                    { /* block id: 422 */
                        uint64_t l_882 = 0x89A02459874A53F7L;
                        uint16_t **l_910 = &p_1248->g_455;
                        int8_t *l_912 = &p_1248->g_338[0][2][0];
                        ++l_879;
                        ++l_882;
                        l_914 ^= (!((((((safe_sub_func_int16_t_s_s((!((*p_1248->g_137) & ((safe_mul_func_uint16_t_u_u(((((*l_912) = ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((*p_1248->g_137), l_897)), 7)), 3)), ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_897, ((**p_1248->g_119) || (8L <= ((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(1UL, ((p_1248->g_548[1][4][3] = (safe_mod_func_uint32_t_u_u(((l_910 != (void*)0) , (*l_23)), p_1248->g_428[0][2]))) | l_879))), l_882)) , (**p_1248->g_553)))))), l_812[2])) >= l_882), l_879)) ^ 0x4EL))) > p_1248->g_911) < l_141[0]) , 0x5CL)) , (*l_23)) ^ l_882), (*p_1248->g_455))) || 0xA8A8F329L))), 0x0C90L)) == l_897) ^ l_913[0][2][0]) || l_882) >= l_882) , l_879));
                    }
                    ++l_919;
                    if (l_916)
                        continue;
                }
                l_932 = (255UL >= ((*p_1248->g_137) = (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_141[0], 1L)) && (l_914 |= ((l_926 != ((0L || (p_1248->g_193[0] = (l_915 = (safe_rshift_func_uint16_t_u_s((~((*p_1248->g_455) ^= (safe_add_func_int32_t_s_s(p_1248->g_931, (*p_1248->g_272))))), ((((l_848 == &p_1248->g_581) , 0x4D41CBE8B0B73074L) || 0UL) >= (*l_23))))))) , (void*)0)) && (*l_23)))), p_1248->g_428[1][3]))));
                l_938--;
            }
            for (p_1248->g_129 = 0; (p_1248->g_129 <= 0); p_1248->g_129 += 1)
            { /* block id: 442 */
                uint16_t l_960 = 5UL;
                uint64_t *l_963 = &p_1248->g_496;
                uint64_t l_966 = 0x955E56BB2A1EE6FFL;
                int32_t l_1015 = 0x45613C74L;
                uint32_t l_1061 = 4294967295UL;
                int32_t l_1062 = 0x4D5D90B2L;
                uint32_t l_1065 = 0x892B6741L;
                for (p_1248->g_432 = 0; (p_1248->g_432 <= 0); p_1248->g_432 += 1)
                { /* block id: 445 */
                    for (p_1248->g_191 = 0; (p_1248->g_191 <= 0); p_1248->g_191 += 1)
                    { /* block id: 448 */
                        int8_t l_947 = (-6L);
                        uint32_t *l_948 = &p_1248->g_799.f0;
                        int32_t l_957 = 5L;
                        uint32_t *l_962 = &p_1248->g_581;
                        uint32_t **l_961 = &l_962;
                        uint64_t *l_965[10] = {&p_1248->g_496,&p_1248->g_496,(void*)0,&p_1248->g_496,&p_1248->g_496,&p_1248->g_496,&p_1248->g_496,(void*)0,&p_1248->g_496,&p_1248->g_496};
                        uint64_t **l_964 = &l_965[6];
                        int i;
                        (1 + 1);
                    }
                }
                for (l_863 = 0; (l_863 >= 0); l_863 -= 1)
                { /* block id: 465 */
                    uint64_t l_978 = 0x3CFE89BF2ADB5C60L;
                    (*p_1248->g_272) = ((~0x1D4AL) & ((((++p_1248->g_911) | ((-9L) ^ (safe_mod_func_int16_t_s_s((l_971 ^ (safe_mod_func_int32_t_s_s((p_1248->g_974 , (**p_1248->g_766)), ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int16_t_s_u(l_978, 5)))) , ((((safe_mul_func_int16_t_s_s(((*l_23) >= ((*p_1248->g_137) = 2UL)), 0UL)) <= l_862) & l_840) | l_978))))), 0x50FCL)))) != l_978) > (*l_23)));
                    if ((**p_1248->g_766))
                        continue;
                    return (*l_23);
                }
                (*p_1248->g_113) |= (l_865 &= (*l_23));
                for (p_1248->g_124.f0 = 0; (p_1248->g_124.f0 <= 1); p_1248->g_124.f0 += 1)
                { /* block id: 476 */
                    uint64_t *l_1001 = (void*)0;
                    uint64_t *l_1002 = &p_1248->g_163;
                    int32_t *l_1039 = &l_866;
                    uint32_t l_1040 = 0x9D38D6DCL;
                    int8_t l_1049[4] = {(-10L),(-10L),(-10L),(-10L)};
                    uint8_t *l_1053 = &p_1248->g_138;
                    uint8_t **l_1054 = &p_1248->g_137;
                    uint8_t *l_1063 = &p_1248->g_17;
                    int i, j, k;
                    (1 + 1);
                }
                for (p_1248->g_26 = 0; (p_1248->g_26 >= 0); p_1248->g_26 -= 1)
                { /* block id: 497 */
                    for (p_1248->g_799.f0 = 0; (p_1248->g_799.f0 <= 0); p_1248->g_799.f0 += 1)
                    { /* block id: 500 */
                        --l_1065;
                        return l_1068[4];
                    }
                    (*p_1248->g_272) &= (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 != l_1073), ((void*)0 == &p_1248->g_137))), (+(0UL != ((**p_1248->g_119) != (l_840 ^ (*p_1248->g_455)))))));
                }
            }
        }
    }
    for (p_1248->g_799.f3 = 0; (p_1248->g_799.f3 <= 3); p_1248->g_799.f3 += 1)
    { /* block id: 511 */
        uint8_t l_1075[2][8] = {{251UL,251UL,0x19L,0UL,0xE9L,0UL,0x19L,251UL},{251UL,251UL,0x19L,0UL,0xE9L,0UL,0x19L,251UL}};
        int32_t l_1078 = (-10L);
        int32_t l_1094 = (-5L);
        int32_t l_1095 = (-6L);
        int32_t l_1096 = 8L;
        int32_t l_1097 = 0x5A401EE4L;
        int32_t l_1098 = (-1L);
        int32_t l_1099 = 0x127E236AL;
        int32_t l_1100[10] = {0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L,0x73864A67L};
        int16_t l_1101[5];
        int32_t l_1110[2][9] = {{(-1L),(-1L),0x38638D89L,(-1L),(-1L),(-1L),(-1L),0x38638D89L,(-1L)},{(-1L),(-1L),0x38638D89L,(-1L),(-1L),(-1L),(-1L),0x38638D89L,(-1L)}};
        uint32_t l_1111 = 0xE25FD9F9L;
        uint16_t *l_1147 = &p_1248->g_185;
        uint64_t *l_1151 = &p_1248->g_167;
        int32_t l_1161[4][10] = {{(-1L),(-4L),(-4L),(-1L),0x724D70FFL,5L,5L,0x724D70FFL,(-1L),(-4L)},{(-1L),(-4L),(-4L),(-1L),0x724D70FFL,5L,5L,0x724D70FFL,(-1L),(-4L)},{(-1L),(-4L),(-4L),(-1L),0x724D70FFL,5L,5L,0x724D70FFL,(-1L),(-4L)},{(-1L),(-4L),(-4L),(-1L),0x724D70FFL,5L,5L,0x724D70FFL,(-1L),(-4L)}};
        int64_t l_1170[9][3] = {{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L},{7L,0x1F1BD600B6D23387L,0x1AFBF6E5E81BDAF4L}};
        int32_t *l_1172 = &l_1032;
        uint64_t *l_1212 = (void*)0;
        int i, j;
        for (i = 0; i < 5; i++)
            l_1101[i] = 6L;
        (1 + 1);
    }
    (*l_1246) &= (*p_1248->g_195);
    return p_1248->g_1247[5][6][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_589 p_1248->g_605 p_1248->g_444 p_1248->g_114 p_1248->g_101 p_1248->g_195 p_1248->g_119 p_1248->g_78 p_1248->g_26 p_1248->g_628 p_1248->g_137 p_1248->g_258 p_1248->g_428 p_1248->g_635 p_1248->g_438.f0
 * writes: p_1248->g_597 p_1248->g_598 p_1248->g_338 p_1248->g_167 p_1248->g_171 p_1248->g_114 p_1248->g_101 p_1248->g_138 p_1248->g_17 p_1248->g_124.f3 p_1248->g_272 p_1248->g_581
 */
uint32_t  func_29(int32_t  p_30, int64_t * p_31, uint32_t  p_32, uint64_t  p_33, struct S1 * p_1248)
{ /* block id: 285 */
    int8_t **l_594 = (void*)0;
    int8_t **l_596 = &p_1248->g_353;
    int8_t ***l_595[1][6];
    uint64_t **l_599 = &p_1248->g_444[5];
    int32_t l_604 = 0x1D005FBCL;
    int32_t *l_606 = &p_1248->g_114;
    int16_t l_607 = 9L;
    int64_t l_699[1];
    int32_t l_742[6][5] = {{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L},{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L},{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L},{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L},{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L},{(-1L),0x35975FD7L,(-1L),(-1L),0x35975FD7L}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_595[i][j] = &l_596;
    }
    for (i = 0; i < 1; i++)
        l_699[i] = 0x79D30D862036B83BL;
    l_607 ^= (l_604 = ((*l_606) &= ((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x6DF85D57L, (((l_594 = &p_1248->g_353) == (p_1248->g_598 = (p_1248->g_597[7][2][1] = &p_1248->g_353))) & p_32))), 0x49L)) <= ((**l_599) = (l_599 != (((((safe_div_func_int64_t_s_s((p_33 & (safe_lshift_func_int8_t_s_u((p_1248->g_338[3][2][5] = ((*p_31) <= (6UL <= 0xCCF9L))), l_604))), 1UL)) & l_604) && 7L) , p_1248->g_605) , (void*)0))))));
    for (p_1248->g_101 = 0; (p_1248->g_101 >= 12); ++p_1248->g_101)
    { /* block id: 296 */
        uint32_t l_614[7][1][1] = {{{4294967294UL}},{{4294967294UL}},{{4294967294UL}},{{4294967294UL}},{{4294967294UL}},{{4294967294UL}},{{4294967294UL}}};
        uint8_t *l_629 = (void*)0;
        uint8_t *l_630 = &p_1248->g_17;
        int32_t *l_631[7] = {&l_604,&l_604,&l_604,&l_604,&l_604,&l_604,&l_604};
        int64_t **l_646 = (void*)0;
        int64_t ***l_719[10] = {&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119,&p_1248->g_119};
        int i, j, k;
        l_604 |= (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*l_630) = (((l_614[3][0][0] | (((((((((safe_mod_func_int64_t_s_s(((((*p_1248->g_195) | (safe_lshift_func_uint8_t_u_s(((*p_1248->g_137) = ((safe_unary_minus_func_int64_t_s((((*l_606) | ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(0UL, (safe_mod_func_int16_t_s_s((&l_614[3][0][0] != &l_614[3][0][0]), ((safe_sub_func_int64_t_s_s(((*l_606) , (**p_1248->g_119)), (*p_1248->g_78))) | 1UL))))) >= p_1248->g_628), p_30)) , p_30)) , (*l_606)))) < l_614[3][0][0])), p_32))) , p_30) && 0xD6B00065L), p_30)) || 0x516C8F4A8BCFCF37L) , p_32) ^ p_30) != p_1248->g_258) > (*l_606)) , (*l_599)) != (void*)0) >= p_1248->g_428[1][1])) , p_33) ^ p_30)), p_30)), 6)) && 0x497F29B7L) ^ 0L);
        for (p_1248->g_124.f3 = 0; (p_1248->g_124.f3 < (-13)); --p_1248->g_124.f3)
        { /* block id: 302 */
            int32_t *l_634 = &l_604;
            uint8_t **l_661 = &p_1248->g_137;
            int32_t l_698 = 1L;
            int32_t l_701 = 0x1C440735L;
            uint8_t l_702[3];
            int32_t l_750[1];
            int32_t l_759[5] = {0x3B948B53L,0x3B948B53L,0x3B948B53L,0x3B948B53L,0x3B948B53L};
            int i;
            for (i = 0; i < 3; i++)
                l_702[i] = 1UL;
            for (i = 0; i < 1; i++)
                l_750[i] = 0x7BD42C57L;
            (*p_1248->g_635) = l_634;
            if (p_30)
                break;
            for (l_607 = 1; (l_607 >= 0); l_607 -= 1)
            { /* block id: 307 */
                int32_t *l_638 = &p_1248->g_101;
                int32_t l_747 = (-7L);
                int32_t l_748 = 1L;
                int32_t l_749 = 2L;
                int16_t l_761 = 5L;
                for (p_1248->g_581 = 1; (p_1248->g_581 <= 4); p_1248->g_581 += 1)
                { /* block id: 310 */
                    int64_t ***l_636 = &p_1248->g_119;
                    int16_t *l_637[8][5][1] = {{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}},{{&l_607},{&l_607},{&l_607},{&l_607},{&l_607}}};
                    uint32_t **l_652 = (void*)0;
                    uint32_t *l_654 = &p_1248->g_188;
                    uint32_t **l_653 = &l_654;
                    int8_t **l_695 = &p_1248->g_353;
                    int16_t l_696 = 0x43E4L;
                    int32_t l_697 = 0x68C9C512L;
                    uint8_t *l_715[3];
                    int32_t l_746 = 0x412388EAL;
                    int32_t **l_757 = (void*)0;
                    int32_t **l_758 = &l_631[5];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_715[i] = &l_702[1];
                    (1 + 1);
                }
                if (l_759[3])
                    break;
            }
        }
    }
    return p_1248->g_438[4].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_587
 * writes: p_1248->g_272
 */
int64_t  func_35(int64_t * p_36, int16_t  p_37, uint8_t * p_38, struct S1 * p_1248)
{ /* block id: 282 */
    int32_t **l_586 = &p_1248->g_272;
    (*l_586) = (void*)0;
    return p_1248->g_587;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_4 p_1248->g_114 p_1248->g_135 p_1248->g_119 p_1248->g_78 p_1248->g_26 p_1248->g_188 p_1248->g_185 p_1248->g_455 p_1248->g_137 p_1248->g_138 p_1248->g_338
 * writes: p_1248->g_163 p_1248->g_185 p_1248->g_581 p_1248->g_582 p_1248->g_193 p_1248->g_124.f1 p_1248->g_114
 */
int64_t * func_39(int64_t * p_40, uint32_t  p_41, struct S1 * p_1248)
{ /* block id: 132 */
    int32_t *l_287 = &p_1248->g_114;
    int32_t l_288 = 1L;
    int32_t *l_289 = &l_288;
    int32_t *l_290 = (void*)0;
    int32_t *l_291[3];
    uint32_t l_292 = 0x83E9DA6DL;
    uint64_t *l_299 = &p_1248->g_163;
    int64_t l_308 = 8L;
    uint32_t *l_322 = &p_1248->g_135;
    uint32_t l_335 = 0xD4D1B9F4L;
    uint64_t l_361[1][8][4] = {{{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L},{0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L,0x746B81B9BB46EE75L}}};
    uint32_t l_370 = 0x16C565AAL;
    uint64_t l_375 = 4UL;
    union U0 *l_387 = &p_1248->g_124;
    int32_t l_437[10][2][9] = {{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}},{{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)},{(-6L),0x31E6C77AL,0x63F98E29L,1L,1L,1L,(-1L),0L,(-6L)}}};
    int32_t l_466 = (-1L);
    uint16_t *l_494 = &p_1248->g_129;
    uint32_t *l_514 = &l_370;
    uint8_t **l_531 = (void*)0;
    uint64_t l_570[5];
    uint32_t *l_580[9][4] = {{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0},{&p_1248->g_581,&p_1248->g_581,&p_1248->g_581,(void*)0}};
    int16_t *l_583 = (void*)0;
    int16_t *l_584 = &p_1248->g_124.f1;
    int64_t *l_585 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_291[i] = &p_1248->g_114;
    for (i = 0; i < 5; i++)
        l_570[i] = 0x4DF50196CCCDC0E4L;
    ++l_292;
    (*l_289) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_41, ((((*l_299) = (+p_1248->g_4[4][8])) < ((*l_287) , ((((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(p_1248->g_135, (safe_sub_func_int8_t_s_s(((**p_1248->g_119) == (safe_sub_func_uint8_t_u_u(0x5FL, (((l_308 , ((safe_unary_minus_func_int8_t_s(((void*)0 == p_40))) != p_41)) , &p_1248->g_191) == &p_1248->g_191)))), p_41)))), p_41)) && p_41) ^ 1UL) == p_1248->g_188))) , p_1248->g_4[4][8]))), (*l_287)));
    for (p_1248->g_185 = 0; (p_1248->g_185 != 53); p_1248->g_185 = safe_add_func_int16_t_s_s(p_1248->g_185, 5))
    { /* block id: 138 */
        uint32_t *l_321 = &p_1248->g_135;
        uint32_t **l_320 = &l_321;
        int32_t l_323 = 0x5BA16F0DL;
        uint64_t l_334 = 0x99F7040179BD662EL;
        uint32_t l_384[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        uint64_t l_421 = 0x6E3C937039E12FE5L;
        int32_t l_431 = 1L;
        uint64_t **l_446 = &p_1248->g_444[5];
        uint64_t ***l_445[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t *l_493 = &p_1248->g_438[4].f1;
        int64_t **l_504[1][5][10] = {{{&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78},{&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78},{&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78},{&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78},{&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78,(void*)0,&p_1248->g_78,&p_1248->g_78}}};
        union U0 *l_552 = &p_1248->g_438[4];
        int32_t **l_573 = &l_287;
        int i, j, k;
        (1 + 1);
    }
    (*l_287) ^= (p_41 || ((safe_div_func_int16_t_s_s((p_1248->g_193[0] = (safe_mul_func_uint8_t_u_u(((p_1248->g_582[2][5][1] = (p_1248->g_581 = (safe_mul_func_uint16_t_u_u(p_41, ((*p_1248->g_455) &= 1UL))))) , 0x70L), (p_41 != ((*p_1248->g_137) & 1L))))), 7UL)) < (((((*l_584) = (p_1248->g_338[3][0][6] , p_1248->g_4[4][8])) ^ (*l_289)) > (-1L)) , 4294967295UL)));
    return l_585;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_191 p_1248->g_137 p_1248->g_138 p_1248->g_167 p_1248->g_163 p_1248->g_195 p_1248->g_101 p_1248->g_3 p_1248->g_185 p_1248->g_113 p_1248->g_217 p_1248->g_10 p_1248->g_171 p_1248->g_188 p_1248->g_7 p_1248->g_4 p_1248->g_8
 * writes: p_1248->g_191 p_1248->g_138 p_1248->g_114 p_1248->g_217 p_1248->g_272 p_1248->g_7 p_1248->g_171 p_1248->g_188 p_1248->g_101
 */
int32_t  func_42(uint8_t * p_43, uint8_t * p_44, uint8_t * p_45, uint8_t * p_46, int64_t * p_47, struct S1 * p_1248)
{ /* block id: 112 */
    for (p_1248->g_191 = 11; (p_1248->g_191 < 14); p_1248->g_191++)
    { /* block id: 115 */
        uint32_t l_278 = 0x8199B375L;
        int32_t **l_281 = &p_1248->g_272;
        p_1248->g_7 = func_51(((l_278 >= (((*p_1248->g_137) |= (l_278 , (*p_46))) || ((l_278 ^ ((safe_div_func_int16_t_s_s((((*l_281) = func_51(p_1248->g_167, p_1248)) != &p_1248->g_3), 0xD6DFL)) | 0x4E3854A16A100968L)) || p_1248->g_10))) | l_278), p_1248);
    }
    if (p_1248->g_138)
        goto lbl_284;
lbl_284:
    for (p_1248->g_171 = 0; (p_1248->g_171 == 9); p_1248->g_171 = safe_add_func_uint16_t_u_u(p_1248->g_171, 3))
    { /* block id: 122 */
        return (*p_1248->g_195);
    }
    for (p_1248->g_188 = 0; (p_1248->g_188 <= 0); p_1248->g_188 += 1)
    { /* block id: 128 */
        int32_t *l_285 = &p_1248->g_101;
        (*l_285) &= (-10L);
    }
    return (*p_1248->g_7);
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_101 p_1248->g_122 p_1248->g_123 p_1248->g_185 p_1248->g_114 p_1248->g_119 p_1248->g_78 p_1248->g_26 p_1248->g_193 p_1248->g_137 p_1248->g_138 p_1248->g_258 p_1248->g_9 p_1248->g_10 p_1248->g_113
 * writes: p_1248->g_101 p_1248->g_123 p_1248->g_258 p_1248->g_114 p_1248->g_138 p_1248->g_272
 */
uint8_t * func_48(int32_t * p_49, int32_t  p_50, struct S1 * p_1248)
{ /* block id: 85 */
    uint32_t l_229[8][5][6] = {{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}},{{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL},{0xBB838FA5L,0xBB838FA5L,4UL,0x237C9878L,0xEB6DB735L,0xEE27A70EL}}};
    union U0 *l_242 = &p_1248->g_124;
    uint32_t *l_247[8] = {&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1],&l_229[0][4][1]};
    int32_t l_259 = 0x3CF49A6DL;
    int32_t l_260 = (-8L);
    uint8_t l_262 = 6UL;
    int32_t *l_271 = (void*)0;
    int32_t **l_270[4][8];
    uint64_t *l_273 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
            l_270[i][j] = &l_271;
    }
    for (p_1248->g_101 = 0; (p_1248->g_101 < (-4)); p_1248->g_101--)
    { /* block id: 88 */
        uint16_t *l_223 = &p_1248->g_129;
        uint16_t **l_222 = &l_223;
        uint16_t ***l_224 = (void*)0;
        uint16_t ***l_225 = &l_222;
        int32_t *l_226 = &p_1248->g_114;
        int32_t *l_227 = &p_1248->g_114;
        int32_t *l_228[3];
        union U0 **l_243 = &p_1248->g_123[1];
        uint32_t **l_244 = (void*)0;
        uint32_t *l_246 = &p_1248->g_135;
        uint32_t **l_245[2];
        uint16_t l_256 = 0xFB42L;
        int16_t l_257 = 0x15DDL;
        int64_t l_261 = 4L;
        int i;
        for (i = 0; i < 3; i++)
            l_228[i] = &p_1248->g_114;
        for (i = 0; i < 2; i++)
            l_245[i] = &l_246;
        (*l_225) = l_222;
        --l_229[2][2][5];
        p_1248->g_258 ^= (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((+(p_50 , (safe_add_func_int32_t_s_s(((0x573897A5L <= ((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u(((l_242 == ((*l_243) = (*p_1248->g_122))) <= (p_1248->g_185 || (((p_49 != (l_247[1] = l_226)) >= (*l_226)) <= (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(p_50, l_256)) || 0x75D8L) , 0x0159L), p_50)) != (**p_1248->g_119)), p_50)), l_229[3][2][1]))))), p_50)) , p_50) , p_1248->g_193[0]), 3)) | 0x5306L)) <= (-3L)), 4294967295UL)))), l_257)), (*p_1248->g_137)));
        l_262--;
    }
    for (p_1248->g_114 = 0; (p_1248->g_114 <= (-12)); p_1248->g_114 = safe_sub_func_uint16_t_u_u(p_1248->g_114, 3))
    { /* block id: 98 */
        uint8_t *l_267[8][3] = {{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262},{&p_1248->g_17,&l_262,&l_262}};
        int32_t l_269 = 0x46675EF0L;
        int i, j;
        for (p_1248->g_138 = 0; (p_1248->g_138 <= 0); p_1248->g_138 += 1)
        { /* block id: 101 */
            uint8_t *l_268 = &l_262;
            return &p_1248->g_138;
        }
        l_269 |= (*p_1248->g_9);
    }
    p_49 = (p_1248->g_272 = &p_1248->g_10);
    p_1248->g_101 &= ((*p_1248->g_113) = (l_273 != (void*)0));
    return &p_1248->g_138;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_137 p_1248->g_138 p_1248->g_167 p_1248->g_163 p_1248->g_195 p_1248->g_101 p_1248->g_3 p_1248->g_185 p_1248->g_113 p_1248->g_217
 * writes: p_1248->g_114 p_1248->g_217
 */
int32_t * func_51(uint32_t  p_52, struct S1 * p_1248)
{ /* block id: 80 */
    uint8_t l_211[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int32_t l_214 = 0L;
    int32_t *l_215[2];
    int8_t l_216 = 0x76L;
    int i;
    for (i = 0; i < 2; i++)
        l_215[i] = &p_1248->g_101;
    (*p_1248->g_113) = (((safe_unary_minus_func_uint32_t_u((((((safe_add_func_uint8_t_u_u((*p_1248->g_137), 0x79L)) && (l_214 = (((safe_sub_func_int16_t_s_s((p_52 != p_52), (((((((p_52 , p_1248->g_167) ^ (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_211[6], 0x7815L)), (safe_lshift_func_int16_t_s_s((p_52 , p_1248->g_163), 10))))) & 0x04L) >= (*p_1248->g_195)) || l_211[1]) == 0x39252E7EA93C712BL) && l_211[4]))) , p_1248->g_3) == p_1248->g_185))) || 0x1F002BF4L) >= p_52) == 6UL))) ^ l_211[6]) , 1L);
    p_1248->g_217[4]++;
    return &p_1248->g_4[4][8];
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_8 p_1248->g_163 p_1248->g_167 p_1248->g_171 p_1248->g_132 p_1248->g_137 p_1248->g_138 p_1248->g_78 p_1248->g_26 p_1248->g_10 p_1248->g_114 p_1248->g_188 p_1248->g_191 p_1248->g_193 p_1248->g_195 p_1248->g_199
 * writes: p_1248->g_129 p_1248->g_163 p_1248->g_167 p_1248->g_171 p_1248->g_185 p_1248->g_124.f1 p_1248->g_188 p_1248->g_191 p_1248->g_193 p_1248->g_114 p_1248->g_101 p_1248->g_199
 */
uint32_t  func_53(int64_t  p_54, int32_t * p_55, struct S1 * p_1248)
{ /* block id: 65 */
    union U0 *l_143[3][4] = {{&p_1248->g_124,&p_1248->g_124,&p_1248->g_124,&p_1248->g_124},{&p_1248->g_124,&p_1248->g_124,&p_1248->g_124,&p_1248->g_124},{&p_1248->g_124,&p_1248->g_124,&p_1248->g_124,&p_1248->g_124}};
    union U0 **l_144 = &l_143[2][2];
    uint16_t *l_149 = &p_1248->g_129;
    uint64_t *l_162 = &p_1248->g_163;
    uint64_t *l_166 = &p_1248->g_167;
    uint64_t *l_170 = &p_1248->g_171;
    int32_t l_182 = 0L;
    int64_t l_183[4] = {0x59708B61AE0EBF16L,0x59708B61AE0EBF16L,0x59708B61AE0EBF16L,0x59708B61AE0EBF16L};
    uint16_t *l_184 = &p_1248->g_185;
    int16_t *l_186 = (void*)0;
    int16_t *l_187 = &p_1248->g_124.f1;
    int8_t *l_189 = (void*)0;
    int8_t *l_190 = &p_1248->g_191;
    int16_t *l_192 = &p_1248->g_193[0];
    int32_t *l_194 = &p_1248->g_114;
    int32_t *l_196 = &l_182;
    int32_t *l_197 = &l_182;
    int32_t *l_198[7] = {&p_1248->g_4[4][8],&p_1248->g_10,&p_1248->g_4[4][8],&p_1248->g_4[4][8],&p_1248->g_10,&p_1248->g_4[4][8],&p_1248->g_4[4][8]};
    int i, j;
    (*l_144) = l_143[1][1];
    (*p_1248->g_195) = ((*l_194) = ((0xFDF4L > p_54) , (safe_sub_func_uint32_t_u_u(p_54, (safe_rshift_func_uint16_t_u_s(((*l_149) = ((*l_144) == (*l_144))), ((*l_192) &= (safe_lshift_func_uint16_t_u_s((((*l_190) ^= ((-8L) == (p_1248->g_188 |= ((safe_mod_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_1248->g_8 , ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((--(*l_162)), ((*l_170) &= (+(+((*l_166)++)))))), (p_1248->g_132 , ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*l_187) = (((safe_mod_func_uint16_t_u_u(((*l_184) = (((((safe_add_func_int8_t_s_s((l_182 < l_182), l_183[1])) <= p_54) != 0x4CF2L) <= (*p_1248->g_137)) == p_1248->g_138)), 1UL)) != p_54) & p_54)), 65530UL)), l_182)) > 0x92F6L), 10)) && (*p_1248->g_78))))) , p_1248->g_10)), l_182)), p_1248->g_138)) > 0x3438911BL), p_1248->g_114)) <= p_1248->g_138)))) == l_183[3]), 13)))))))));
    p_1248->g_199++;
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_56(int32_t  p_57, uint8_t * p_58, int64_t * p_59, uint32_t  p_60, int32_t * p_61, struct S1 * p_1248)
{ /* block id: 62 */
    uint64_t l_140 = 0xD8142B0CC679C7D3L;
    l_140 = (p_57 ^ 0x01B9L);
    return l_140;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_17 p_1248->g_101 p_1248->g_3 p_1248->g_9 p_1248->g_10 p_1248->g_26 p_1248->g_113 p_1248->g_122 p_1248->g_114 p_1248->g_4
 * writes: p_1248->g_17 p_1248->g_101 p_1248->g_114 p_1248->g_26 p_1248->g_119 p_1248->g_123
 */
uint16_t  func_66(int64_t * p_67, int32_t * p_68, uint16_t  p_69, int32_t * p_70, int64_t * p_71, struct S1 * p_1248)
{ /* block id: 27 */
    uint64_t l_79[7];
    int32_t *l_92 = &p_1248->g_10;
    int32_t **l_125 = &l_92;
    int32_t *l_127[3][8] = {{&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8]},{&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8]},{&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8],&p_1248->g_4[1][8]}};
    int32_t **l_126 = &l_127[2][2];
    int i, j;
    for (i = 0; i < 7; i++)
        l_79[i] = 0x83D54B5BC1773A67L;
    for (p_1248->g_17 = 0; (p_1248->g_17 <= 6); p_1248->g_17 += 1)
    { /* block id: 30 */
        int32_t **l_93 = &l_92;
        uint32_t l_112 = 0x2B52C7FFL;
        int32_t *l_115[3][10][1] = {{{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114}},{{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114}},{{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114},{&p_1248->g_114}}};
        int32_t l_116[4] = {0x7ADE520EL,0x7ADE520EL,0x7ADE520EL,0x7ADE520EL};
        int64_t **l_117 = &p_1248->g_78;
        int i, j, k;
        (*p_1248->g_113) = ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_93) = l_92) == &p_1248->g_4[4][8]), (safe_unary_minus_func_int64_t_s((~(((l_79[p_1248->g_17] < ((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((p_1248->g_101 ^= (p_71 == (void*)0)), 0x4DL)) , (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0x26A9L, p_69)), ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_79[3], l_112)), p_1248->g_101)) | p_69))), 0x7538L))), p_1248->g_3)) == l_79[2]) == p_69), p_1248->g_3)) & l_79[0])) || 1UL) >= (-7L))))))), l_79[6])) & (*p_1248->g_9)) || p_1248->g_26), l_79[6])), 0x3241L)), p_1248->g_10)), p_69)) > 0x6C63C429AA74C462L);
        l_116[1] = (*p_70);
        if ((*p_68))
        { /* block id: 35 */
            return p_1248->g_3;
        }
        else
        { /* block id: 37 */
            for (p_69 = 0; (p_69 <= 6); p_69 += 1)
            { /* block id: 40 */
                int64_t **l_120 = (void*)0;
                union U0 *l_121 = (void*)0;
                for (p_1248->g_26 = 5; (p_1248->g_26 >= 2); p_1248->g_26 -= 1)
                { /* block id: 43 */
                    for (p_1248->g_114 = 2; (p_1248->g_114 <= 6); p_1248->g_114 += 1)
                    { /* block id: 46 */
                        p_1248->g_119 = l_117;
                    }
                }
                l_120 = &p_1248->g_78;
                (*p_1248->g_122) = l_121;
            }
            if ((**l_93))
                continue;
        }
    }
    (*l_126) = ((*l_125) = &p_1248->g_114);
    return (*l_92);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1249;
    struct S1* p_1248 = &c_1249;
    struct S1 c_1250 = {
        0x45165352L, // p_1248->g_3
        {{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)},{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)},{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)},{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)},{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)},{(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L),(-1L),0x3D0A7084L,(-1L)}}, // p_1248->g_4
        (-6L), // p_1248->g_8
        &p_1248->g_8, // p_1248->g_7
        0x29B85755L, // p_1248->g_10
        &p_1248->g_10, // p_1248->g_9
        0x8EL, // p_1248->g_17
        0x2705104E0BBE0E20L, // p_1248->g_26
        &p_1248->g_26, // p_1248->g_78
        0x619C9FCCL, // p_1248->g_101
        0x39E22A41L, // p_1248->g_114
        &p_1248->g_114, // p_1248->g_113
        (void*)0, // p_1248->g_118
        &p_1248->g_78, // p_1248->g_119
        {0UL}, // p_1248->g_124
        {&p_1248->g_124,&p_1248->g_124}, // p_1248->g_123
        &p_1248->g_123[1], // p_1248->g_122
        65533UL, // p_1248->g_129
        0xA2DDD911L, // p_1248->g_132
        4294967293UL, // p_1248->g_135
        0x35L, // p_1248->g_138
        &p_1248->g_138, // p_1248->g_137
        0x82148F47512D4483L, // p_1248->g_163
        0x95FBE9E82CB70C1DL, // p_1248->g_167
        18446744073709551615UL, // p_1248->g_171
        65535UL, // p_1248->g_185
        4294967295UL, // p_1248->g_188
        0x36L, // p_1248->g_191
        {3L}, // p_1248->g_193
        &p_1248->g_101, // p_1248->g_195
        0x989E8BE2L, // p_1248->g_199
        {0x2E499280L,0x2E499280L,0x2E499280L,0x2E499280L,0x2E499280L}, // p_1248->g_217
        0x4AC006015CD3094BL, // p_1248->g_258
        &p_1248->g_101, // p_1248->g_272
        {{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}},{{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL},{0x3BL,0x2AL,4L,0L,(-1L),0x60L,0x3CL}}}, // p_1248->g_338
        (void*)0, // p_1248->g_353
        {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}, // p_1248->g_428
        2UL, // p_1248->g_432
        {{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL}}, // p_1248->g_438
        {&p_1248->g_171,&p_1248->g_167,&p_1248->g_171,&p_1248->g_171,&p_1248->g_167,&p_1248->g_171,&p_1248->g_171,&p_1248->g_167,&p_1248->g_171}, // p_1248->g_444
        {&p_1248->g_444[5],&p_1248->g_444[2],&p_1248->g_444[5],&p_1248->g_444[5],&p_1248->g_444[2],&p_1248->g_444[5],&p_1248->g_444[5],&p_1248->g_444[2],&p_1248->g_444[5]}, // p_1248->g_443
        &p_1248->g_443[3], // p_1248->g_442
        &p_1248->g_185, // p_1248->g_455
        {{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}},{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}},{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}},{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}},{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}},{{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455},{&p_1248->g_455}}}, // p_1248->g_454
        &p_1248->g_454[4][4][0], // p_1248->g_453
        {4294967295UL}, // p_1248->g_473
        0x37E70B852B233D5AL, // p_1248->g_496
        {0x46A3FA14L}, // p_1248->g_502
        {{{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL}},{{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL},{0x4EF3593BL,0x0FD68956L,4294967295UL,4294967288UL,4294967288UL,4294967295UL,0x0FD68956L,0x4EF3593BL}}}, // p_1248->g_548
        &p_1248->g_272, // p_1248->g_553
        (void*)0, // p_1248->g_555
        4294967293UL, // p_1248->g_581
        {{{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)}},{{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)}},{{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)}},{{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)},{5L,0x6020L,(-5L),(-1L),0x497CL,(-1L)}}}, // p_1248->g_582
        (-3L), // p_1248->g_587
        0x5EA8204617245D8AL, // p_1248->g_589
        {{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}},{{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0},{&p_1248->g_353,&p_1248->g_353,(void*)0}}}, // p_1248->g_597
        &p_1248->g_353, // p_1248->g_598
        {0xBE33EF8DL}, // p_1248->g_605
        0x3C767712ECB5477EL, // p_1248->g_628
        &p_1248->g_272, // p_1248->g_635
        &p_1248->g_272, // p_1248->g_639
        &p_1248->g_272, // p_1248->g_762
        (void*)0, // p_1248->g_765
        &p_1248->g_272, // p_1248->g_766
        {0xC3D2C620L}, // p_1248->g_799
        0x5336E6C65428AA5DL, // p_1248->g_816
        (void*)0, // p_1248->g_846
        {&p_1248->g_8,&p_1248->g_8,&p_1248->g_8}, // p_1248->g_855
        &p_1248->g_8, // p_1248->g_856
        {4294967295UL}, // p_1248->g_873
        0x06873A7CL, // p_1248->g_911
        0x32CE8B895E1AE213L, // p_1248->g_931
        {0xDD1416ECL}, // p_1248->g_974
        {{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L},{1L,0x77D379EC52D6F6B7L}}, // p_1248->g_1013
        &p_1248->g_138, // p_1248->g_1060
        &p_1248->g_1060, // p_1248->g_1059
        0x7D090420L, // p_1248->g_1064
        &p_1248->g_272, // p_1248->g_1076
        &p_1248->g_597[7][2][1], // p_1248->g_1125
        &p_1248->g_272, // p_1248->g_1126
        (void*)0, // p_1248->g_1171
        0x7363L, // p_1248->g_1191
        {{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}},{{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL},{0x0719L,0x18F7L,0xE15EL}}}, // p_1248->g_1247
    };
    c_1249 = c_1250;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1248);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1248->g_3, "p_1248->g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1248->g_4[i][j], "p_1248->g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1248->g_8, "p_1248->g_8", print_hash_value);
    transparent_crc(p_1248->g_10, "p_1248->g_10", print_hash_value);
    transparent_crc(p_1248->g_17, "p_1248->g_17", print_hash_value);
    transparent_crc(p_1248->g_26, "p_1248->g_26", print_hash_value);
    transparent_crc(p_1248->g_101, "p_1248->g_101", print_hash_value);
    transparent_crc(p_1248->g_114, "p_1248->g_114", print_hash_value);
    transparent_crc(p_1248->g_124.f0, "p_1248->g_124.f0", print_hash_value);
    transparent_crc(p_1248->g_129, "p_1248->g_129", print_hash_value);
    transparent_crc(p_1248->g_132, "p_1248->g_132", print_hash_value);
    transparent_crc(p_1248->g_135, "p_1248->g_135", print_hash_value);
    transparent_crc(p_1248->g_138, "p_1248->g_138", print_hash_value);
    transparent_crc(p_1248->g_163, "p_1248->g_163", print_hash_value);
    transparent_crc(p_1248->g_167, "p_1248->g_167", print_hash_value);
    transparent_crc(p_1248->g_171, "p_1248->g_171", print_hash_value);
    transparent_crc(p_1248->g_185, "p_1248->g_185", print_hash_value);
    transparent_crc(p_1248->g_188, "p_1248->g_188", print_hash_value);
    transparent_crc(p_1248->g_191, "p_1248->g_191", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1248->g_193[i], "p_1248->g_193[i]", print_hash_value);

    }
    transparent_crc(p_1248->g_199, "p_1248->g_199", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1248->g_217[i], "p_1248->g_217[i]", print_hash_value);

    }
    transparent_crc(p_1248->g_258, "p_1248->g_258", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1248->g_338[i][j][k], "p_1248->g_338[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1248->g_428[i][j], "p_1248->g_428[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1248->g_432, "p_1248->g_432", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1248->g_438[i].f0, "p_1248->g_438[i].f0", print_hash_value);

    }
    transparent_crc(p_1248->g_473.f0, "p_1248->g_473.f0", print_hash_value);
    transparent_crc(p_1248->g_496, "p_1248->g_496", print_hash_value);
    transparent_crc(p_1248->g_502.f0, "p_1248->g_502.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1248->g_548[i][j][k], "p_1248->g_548[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1248->g_581, "p_1248->g_581", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1248->g_582[i][j][k], "p_1248->g_582[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1248->g_587, "p_1248->g_587", print_hash_value);
    transparent_crc(p_1248->g_589, "p_1248->g_589", print_hash_value);
    transparent_crc(p_1248->g_628, "p_1248->g_628", print_hash_value);
    transparent_crc(p_1248->g_799.f0, "p_1248->g_799.f0", print_hash_value);
    transparent_crc(p_1248->g_816, "p_1248->g_816", print_hash_value);
    transparent_crc(p_1248->g_873.f0, "p_1248->g_873.f0", print_hash_value);
    transparent_crc(p_1248->g_911, "p_1248->g_911", print_hash_value);
    transparent_crc(p_1248->g_931, "p_1248->g_931", print_hash_value);
    transparent_crc(p_1248->g_974.f0, "p_1248->g_974.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1248->g_1013[i][j], "p_1248->g_1013[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1248->g_1064, "p_1248->g_1064", print_hash_value);
    transparent_crc(p_1248->g_1191, "p_1248->g_1191", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1248->g_1247[i][j][k], "p_1248->g_1247[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
