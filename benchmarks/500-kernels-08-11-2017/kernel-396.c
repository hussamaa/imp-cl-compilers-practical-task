// --atomics 72 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 78,52,2 -l 3,13,2
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

__constant uint32_t permutations[10][78] = {
{55,47,4,52,41,68,7,20,70,61,63,3,43,57,65,18,71,69,72,19,67,32,76,17,22,49,28,66,8,51,53,13,5,0,2,39,9,36,73,6,56,12,45,27,34,62,40,50,25,48,75,1,58,35,37,26,44,23,30,10,31,33,54,60,59,11,14,74,38,24,29,64,77,16,46,42,21,15}, // permutation 0
{5,11,69,62,34,8,74,76,15,48,36,22,29,40,59,26,56,67,16,50,54,3,32,38,70,17,37,21,44,23,25,64,71,1,30,9,10,46,60,49,24,45,52,28,35,33,41,12,65,39,63,66,27,47,77,72,43,68,4,58,14,55,57,20,73,18,53,75,51,7,0,13,6,2,61,19,31,42}, // permutation 1
{66,40,8,54,33,18,31,56,2,59,35,49,25,57,65,27,68,12,55,4,53,36,28,11,74,14,21,47,17,76,60,15,1,20,9,50,46,42,63,30,0,51,69,41,77,70,24,71,38,48,16,75,52,62,34,10,23,67,58,3,72,5,22,39,29,7,64,32,19,73,45,13,43,26,61,37,44,6}, // permutation 2
{41,59,62,72,27,20,57,23,4,22,75,60,65,10,38,35,7,30,36,1,37,33,29,69,51,63,17,68,47,0,76,54,21,61,26,70,53,50,24,39,9,48,77,73,52,46,56,67,12,58,18,45,3,31,19,34,6,28,5,66,74,43,11,64,2,25,55,40,16,14,42,15,8,32,49,13,71,44}, // permutation 3
{13,22,37,23,72,15,4,41,12,65,24,1,58,39,56,73,66,71,36,18,26,74,9,31,35,61,69,14,46,40,59,52,64,75,45,50,20,63,62,21,0,8,7,44,6,48,68,60,32,2,38,55,10,42,67,11,77,33,53,34,57,19,43,49,28,47,30,5,16,29,3,54,51,76,70,17,27,25}, // permutation 4
{32,67,25,50,46,12,26,33,62,42,2,72,68,19,66,63,11,55,31,28,60,65,17,20,53,70,23,75,51,64,71,59,58,4,3,29,40,74,43,45,9,36,13,41,35,38,22,14,8,34,44,5,48,27,24,73,10,1,77,52,15,16,6,0,18,57,39,69,37,49,56,76,7,47,61,54,30,21}, // permutation 5
{36,32,1,18,2,9,49,68,4,15,51,11,48,70,24,39,3,20,72,47,46,23,16,52,56,57,8,55,26,21,63,33,35,50,13,71,37,44,61,34,73,59,6,76,40,7,53,54,27,69,66,5,41,14,58,10,43,65,31,22,77,30,28,17,0,67,29,45,25,12,19,74,75,60,64,42,38,62}, // permutation 6
{68,9,67,76,69,77,16,6,73,0,47,24,40,51,1,55,8,60,50,25,43,62,70,34,15,36,39,57,11,35,18,17,49,12,13,7,20,45,41,66,56,3,4,28,22,63,46,53,27,72,58,21,54,30,59,23,74,44,10,64,52,14,75,65,37,19,31,42,2,26,32,61,33,29,71,38,48,5}, // permutation 7
{65,18,2,35,6,60,28,38,1,34,12,39,36,43,16,63,26,61,24,42,44,14,32,22,13,49,57,40,67,8,10,5,59,75,31,74,29,20,73,56,66,21,19,37,48,64,3,17,4,52,68,46,71,53,69,54,7,27,9,25,15,41,30,0,76,23,33,72,58,62,50,45,70,51,55,11,77,47}, // permutation 8
{57,46,53,47,39,42,62,72,75,36,3,24,58,21,63,18,1,48,16,50,70,20,26,43,2,8,64,55,59,33,60,45,73,65,25,12,35,19,0,56,31,27,17,67,52,22,49,37,30,76,44,13,29,77,6,32,54,15,9,71,10,11,41,61,38,40,5,14,7,74,68,69,4,23,66,28,34,51} // permutation 9
};

// Seed: 3145047686

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
};

struct S1 {
   volatile uint64_t  f0;
   int64_t  f1;
   uint64_t  f2;
   uint16_t  f3;
};

struct S2 {
   volatile struct S1  f0;
};

struct S3 {
    int32_t g_3[7];
    int32_t *g_5[10];
    int32_t *g_6[1][8];
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
int32_t  func_1(struct S3 * p_242);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_242->l_comm_values
 * writes: p_242->g_5 p_242->g_6
 */
int32_t  func_1(struct S3 * p_242)
{ /* block id: 4 */
    int32_t *l_2 = &p_242->g_3[0];
    int32_t **l_4[4][7][9] = {{{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2}},{{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2}},{{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2}},{{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2},{&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2,&l_2}}};
    int32_t l_7 = 0x556A4262L;
    int8_t l_8 = 0x48L;
    uint16_t l_9 = 0x2E0EL;
    int i, j, k;
    p_242->g_6[0][2] = (p_242->g_5[7] = l_2);
    l_9--;
    if ((atomic_inc(&p_242->l_atomic_input[40]) == 0))
    { /* block id: 9 */
        int8_t l_12[10];
        uint8_t l_13 = 255UL;
        int16_t l_14 = 0x72A9L;
        int8_t l_15 = 0x12L;
        VECTOR(int32_t, 8) l_16 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
        uint32_t l_17[2];
        int32_t *l_241 = (void*)0;
        int i;
        for (i = 0; i < 10; i++)
            l_12[i] = 0x77L;
        for (i = 0; i < 2; i++)
            l_17[i] = 0x9225D623L;
        if (((l_12[2] , (l_13 ^= GROUP_DIVERGE(1, 1))) , (l_17[1] ^= ((VECTOR(int32_t, 8))(0x0479822EL, (l_15 |= l_14), ((VECTOR(int32_t, 2))(0L, 0x13573736L)), ((VECTOR(int32_t, 4))(l_16.s2607)))).s1)))
        { /* block id: 13 */
            struct S0 l_18 = {0x08AFAEF9AD35785FL,0L};
            uint16_t l_19[7][9] = {{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L},{0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L,0x65B0L}};
            uint8_t l_20 = 7UL;
            int32_t l_21[9] = {0x15074072L,0x15074072L,0x15074072L,0x15074072L,0x15074072L,0x15074072L,0x15074072L,0x15074072L,0x15074072L};
            int16_t l_22 = 0x08C1L;
            uint32_t l_165 = 4294967295UL;
            uint32_t l_166 = 0x1063A27BL;
            uint32_t l_167 = 4294967288UL;
            int i, j;
            l_16.s3 &= (l_22 &= (l_21[7] = (((l_18 , l_19[6][1]) , l_20) , 0x5E7B049BL)));
            for (l_21[3] = (-2); (l_21[3] >= 6); l_21[3]++)
            { /* block id: 19 */
                VECTOR(uint32_t, 8) l_25 = (VECTOR(uint32_t, 8))(0x26CF9C76L, (VECTOR(uint32_t, 4))(0x26CF9C76L, (VECTOR(uint32_t, 2))(0x26CF9C76L, 0x768DD0F0L), 0x768DD0F0L), 0x768DD0F0L, 0x26CF9C76L, 0x768DD0F0L);
                int8_t l_26 = 0x7DL;
                int32_t l_27 = 0x52369E1CL;
                uint32_t l_28 = 4294967290UL;
                VECTOR(int32_t, 8) l_29 = (VECTOR(int32_t, 8))(0x547896B8L, (VECTOR(int32_t, 4))(0x547896B8L, (VECTOR(int32_t, 2))(0x547896B8L, 0x43225DEAL), 0x43225DEAL), 0x43225DEAL, 0x547896B8L, 0x43225DEAL);
                int32_t l_30 = 0x63606EC1L;
                uint64_t l_31 = 0UL;
                VECTOR(int16_t, 4) l_32 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4FE8L), 0x4FE8L);
                VECTOR(uint16_t, 16) l_33 = (VECTOR(uint16_t, 16))(0x3821L, (VECTOR(uint16_t, 4))(0x3821L, (VECTOR(uint16_t, 2))(0x3821L, 0xCAA3L), 0xCAA3L), 0xCAA3L, 0x3821L, 0xCAA3L, (VECTOR(uint16_t, 2))(0x3821L, 0xCAA3L), (VECTOR(uint16_t, 2))(0x3821L, 0xCAA3L), 0x3821L, 0xCAA3L, 0x3821L, 0xCAA3L);
                int32_t l_34[8] = {0x475ADB6EL,(-1L),0x475ADB6EL,0x475ADB6EL,(-1L),0x475ADB6EL,0x475ADB6EL,(-1L)};
                int64_t l_35[3][9] = {{0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L,0x25E38B96EC4AE7C4L,0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L},{0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L,0x25E38B96EC4AE7C4L,0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L},{0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L,0x25E38B96EC4AE7C4L,0x25E38B96EC4AE7C4L,0x43AAFF43A563CFC5L,0x1C69F0B4AB819B16L,0x43AAFF43A563CFC5L}};
                int i, j;
                if ((((VECTOR(uint32_t, 8))(l_25.s57605405)).s4 , (l_26 , (l_27 , (l_35[1][1] |= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_28, (-6L), 0x68EE181CL, ((VECTOR(int32_t, 4))(l_29.s6523)), (l_31 ^= (l_18.f1 = (l_16.s2 = l_30))), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_32.zyzx)).wzzywxzx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_33.s97)).yxxyxyyyyxyxxxxy)).even))))))).s5 , (l_27 &= l_34[1])))))))
                { /* block id: 25 */
                    int64_t l_36 = 0x41896B7A3D1CE2E0L;
                    int64_t l_37 = 0x5E09DF947B41CF22L;
                    uint32_t l_38[9][2];
                    VECTOR(int32_t, 2) l_41 = (VECTOR(int32_t, 2))(8L, (-10L));
                    VECTOR(int32_t, 2) l_42 = (VECTOR(int32_t, 2))(0x74A6A36EL, 0L);
                    VECTOR(int32_t, 8) l_43 = (VECTOR(int32_t, 8))(0x7E28E030L, (VECTOR(int32_t, 4))(0x7E28E030L, (VECTOR(int32_t, 2))(0x7E28E030L, 1L), 1L), 1L, 0x7E28E030L, 1L);
                    VECTOR(int32_t, 8) l_44 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L);
                    VECTOR(int32_t, 2) l_45 = (VECTOR(int32_t, 2))(0x203CF1BEL, 1L);
                    uint32_t l_46 = 0UL;
                    VECTOR(int32_t, 4) l_47 = (VECTOR(int32_t, 4))(0x203B3843L, (VECTOR(int32_t, 2))(0x203B3843L, 0x3154EA43L), 0x3154EA43L);
                    VECTOR(int32_t, 16) l_48 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1ACB9E11L), 0x1ACB9E11L), 0x1ACB9E11L, 1L, 0x1ACB9E11L, (VECTOR(int32_t, 2))(1L, 0x1ACB9E11L), (VECTOR(int32_t, 2))(1L, 0x1ACB9E11L), 1L, 0x1ACB9E11L, 1L, 0x1ACB9E11L);
                    VECTOR(int32_t, 2) l_49 = (VECTOR(int32_t, 2))((-8L), 0x445CDDFBL);
                    VECTOR(int32_t, 8) l_50 = (VECTOR(int32_t, 8))(0x204B778EL, (VECTOR(int32_t, 4))(0x204B778EL, (VECTOR(int32_t, 2))(0x204B778EL, (-4L)), (-4L)), (-4L), 0x204B778EL, (-4L));
                    VECTOR(int32_t, 4) l_51 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-1L)), (-1L));
                    VECTOR(int32_t, 2) l_52 = (VECTOR(int32_t, 2))(0x25442DF1L, (-10L));
                    VECTOR(int32_t, 16) l_53 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L), (VECTOR(int32_t, 2))(0L, (-7L)), (VECTOR(int32_t, 2))(0L, (-7L)), 0L, (-7L), 0L, (-7L));
                    VECTOR(int32_t, 2) l_54 = (VECTOR(int32_t, 2))((-9L), 0x7DBEEBB4L);
                    uint32_t l_55 = 0xC06C7073L;
                    int32_t l_56 = (-1L);
                    VECTOR(int32_t, 2) l_57 = (VECTOR(int32_t, 2))(0x2D9DD266L, 0x6F7F9ADAL);
                    VECTOR(int32_t, 4) l_58 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x18A221A7L), 0x18A221A7L);
                    VECTOR(int32_t, 2) l_59 = (VECTOR(int32_t, 2))((-7L), (-2L));
                    VECTOR(int32_t, 4) l_60 = (VECTOR(int32_t, 4))(0x3E97851FL, (VECTOR(int32_t, 2))(0x3E97851FL, 0x66A1E35DL), 0x66A1E35DL);
                    VECTOR(int32_t, 2) l_61 = (VECTOR(int32_t, 2))((-1L), 3L);
                    VECTOR(int32_t, 4) l_62 = (VECTOR(int32_t, 4))(0x0ABD1851L, (VECTOR(int32_t, 2))(0x0ABD1851L, 2L), 2L);
                    VECTOR(int32_t, 8) l_63 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
                    VECTOR(int32_t, 2) l_64 = (VECTOR(int32_t, 2))((-1L), 4L);
                    struct S1 l_65 = {0x03B9D00B73EB7B06L,1L,0xC180532108D450DDL,0x8C2CL};/* VOLATILE GLOBAL l_65 */
                    VECTOR(int8_t, 16) l_66 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x19L), 0x19L), 0x19L, 0L, 0x19L, (VECTOR(int8_t, 2))(0L, 0x19L), (VECTOR(int8_t, 2))(0L, 0x19L), 0L, 0x19L, 0L, 0x19L);
                    uint8_t l_67 = 0UL;
                    uint8_t l_68 = 0xE2L;
                    uint16_t l_69 = 0x98F8L;
                    int32_t *l_103[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_104[5][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_38[i][j] = 4294967295UL;
                    }
                    ++l_38[7][0];
                    if ((l_27 ^= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_41.yyxyxxyyyxxyxyyx)).s879d)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(4L, 0x446319CDL)).xxyx)).wywywwyy)).lo))).zywzzwww)))))))).s22, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_42.xyxy)).yzzxzxzy, ((VECTOR(int32_t, 8))(l_43.s15130456)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_44.s17142166)).s1726051063525230, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_45.xy)).yyyxxxxxxxyyxxxy)))).hi)).s5356471726115526, ((VECTOR(int32_t, 8))(l_46, ((VECTOR(int32_t, 4))(0x29DDE94EL, (-10L), 0L, 1L)), ((VECTOR(int32_t, 16))(l_47.zywxzywxzxzywzwx)).sc, 1L, 0L)).s1643246512531712))).odd, ((VECTOR(int32_t, 2))(0x775BE2A3L, 1L)).yyxyxyxy)))))).lo)), 0x0F12A9C2L, (-1L), 0x605C96C5L, 0x646CDBDEL)).s63))).xxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_48.s48926895)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_49.xxxyyxxy)).s00)), 2L, 0L)))), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_50.s4456024075153246)).even, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_51.ywwxxwyw)).s77, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_52.xxxyyyyxxyxyyyxx)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0x7DF27D35L, (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_53.sbc)).xxxyyyyx)).s76, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))((l_16.s0 = 0x4BF7460FL), ((VECTOR(int32_t, 2))(l_54.xx)), (-1L))), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_51.y &= (l_50.s3 &= l_55)), (l_29.s0 = l_56), 7L, 2L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_57.yxyxyxxxyyyyxxxx)).s85)), (-2L), (-1L))))), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_58.yy)).yyxyxxxx, ((VECTOR(int32_t, 2))(0x5CB7F88AL, 0x2985D356L)).xxyyxxxy))), ((VECTOR(int32_t, 4))(l_59.xxxx)).xxxxyxxw))))).s7, (-5L), (-3L), (-2L))), ((VECTOR(int32_t, 16))(l_60.xyxwxxwxxwwxwwxw)).sac48))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_61.yyyxxyxyyxxxyyyy)).sde, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_62.yxyz)).yyywxzwwxwwywyzy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_63.s6665)).w, 0x40AA097DL, 0L, 1L)).zxwwxwwwwyyxzzzx))).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_64.xx)).xyxyxyxxyxxxyyxx)).lo))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-6L), 1L)).xxyyyyyy)).s07)).yxxy))), (int32_t)(l_16.s5 ^= 0x0EDF5E4CL)))).even)).xxyxyyyxyxyxyyxx, ((VECTOR(int32_t, 8))((l_65 , (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_66.s9ac2)).wzxxyywx)).s5441624623642140)).s7 , l_67)), 0x36F187A6L, 0x3118DE82L, (l_68 , 9L), 0x3AB425CBL, 0x364CFAA4L, 5L, 0x517FA6E5L)).s7065123061326366))).hi))).lo)).hi)), ((VECTOR(int32_t, 2))(0x7C589675L))))), ((VECTOR(int32_t, 2))((-7L)))))).yyyxxyxxyyyxyyxx)).s06cc))).hi))), 0x53BD1B8EL, 0x22BFF11EL)).hi, ((VECTOR(int32_t, 2))((-1L)))))).xxyyyxxxxxxyxyyx))).s7b))).xyxxyyyx, (int32_t)l_69))).hi, ((VECTOR(int32_t, 4))(0x6B3D4A04L))))).yzywwxww))).even))), ((VECTOR(int32_t, 2))(0x124D1F9FL)), 1L, 0x1917F2CBL)).hi))))).odd, ((VECTOR(int32_t, 2))(0x6A306168L)), ((VECTOR(int32_t, 2))(4L))))).yxyxxxyx)), ((VECTOR(int32_t, 8))(4L)), ((VECTOR(int32_t, 8))(0x50EBA8DAL))))).s1))
                    { /* block id: 33 */
                        int32_t l_71 = (-1L);
                        int32_t *l_70 = &l_71;
                        VECTOR(int32_t, 8) l_72 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x78A188AFL), 0x78A188AFL), 0x78A188AFL, 1L, 0x78A188AFL);
                        int32_t l_73 = 0x25DBEDBEL;
                        uint64_t l_74 = 0x480967B42B6AA699L;
                        VECTOR(int32_t, 4) l_75 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x65824EB2L), 0x65824EB2L);
                        uint16_t l_76 = 0x89B6L;
                        uint32_t l_77 = 0xAF68CC08L;
                        uint64_t l_78 = 0xB28C7E9381029D39L;
                        VECTOR(int32_t, 2) l_79 = (VECTOR(int32_t, 2))(5L, 0x7EA332A1L);
                        VECTOR(int32_t, 2) l_80 = (VECTOR(int32_t, 2))(0x7D849581L, 1L);
                        VECTOR(int32_t, 4) l_81 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5A11B485L), 0x5A11B485L);
                        uint32_t l_82 = 0x70B17229L;
                        int32_t l_83[10];
                        int64_t l_84 = (-1L);
                        int i;
                        for (i = 0; i < 10; i++)
                            l_83[i] = 0L;
                        l_70 = (void*)0;
                        l_29.s0 &= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_72.s3166)).wxwxyzxz, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(0x642F9106L, 0x7255190DL, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), (-1L))).xxyxyyyy)))).s75, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_73, (l_74 , (l_54.x = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_75.yw)))).even)), 0x074C63FCL, 0x6A9B94AAL, (l_47.x |= l_76), (-8L), l_77, (l_50.s1 = l_78), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(6L, 0x611B9BB3L, 0x3E4332A9L, 0x0B06D998L)), ((VECTOR(int32_t, 4))(l_79.yxyx)), 7L, ((VECTOR(int32_t, 2))(l_80.yx)), ((VECTOR(int32_t, 4))(l_81.wwxw)), (-1L))).s0369, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_82, (l_44.s0 &= 0x325AEB33L), ((VECTOR(int32_t, 4))(0x63AF0B7DL)), 0x790A8512L, 0x359880F5L, 0x7C3C3C14L, ((VECTOR(int32_t, 4))(0x33E0742FL)), (-1L), 0x56D69B0FL, 1L)).sdcab)).xwxyzywzyzxwwyyx)).s99, ((VECTOR(int32_t, 2))(0x1D5E5635L))))).yxxx)).yxzyzwwx, ((VECTOR(int32_t, 8))(0x0F384123L))))))).lo))))), 1L, ((VECTOR(int32_t, 2))(0x0AB121CEL)), 0x47738B29L)).s9f)).yxxx)), 0x1CDFF82CL, ((VECTOR(int32_t, 2))(1L)), 0L)).s47))), 0x701008DDL, l_83[3], 0x232B6548L, 0x1CC4FA71L)).s1026432727451311, ((VECTOR(int32_t, 16))(0x18CBA621L))))).hi))).odd, ((VECTOR(int32_t, 4))(0L))))).x;
                        l_16.s2 = l_84;
                    }
                    else
                    { /* block id: 41 */
                        uint16_t l_85 = 0UL;
                        struct S0 l_87[10] = {{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL},{0L,0x5BC2652CL}};
                        struct S0 *l_86 = &l_87[7];
                        struct S0 *l_88 = &l_87[4];
                        struct S0 *l_89[2][3][9] = {{{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0},{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0},{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0}},{{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0},{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0},{(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0,(void*)0,&l_87[7],(void*)0}}};
                        int16_t l_90 = 1L;
                        int8_t l_91 = 1L;
                        int16_t l_92 = (-1L);
                        int64_t l_93 = 0x5C071142A211DE2CL;
                        uint64_t l_94 = 0x4C4DBC68AE5B8610L;
                        uint8_t l_97 = 0x05L;
                        struct S0 **l_100 = &l_86;
                        struct S0 **l_101[10][5] = {{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]},{&l_89[0][1][8],&l_89[0][1][7],&l_89[0][1][1],&l_86,&l_89[1][1][1]}};
                        struct S0 **l_102 = &l_86;
                        int i, j, k;
                        l_89[0][1][7] = (l_88 = (l_85 , l_86));
                        --l_94;
                        --l_97;
                        l_102 = (l_101[4][2] = l_100);
                    }
                    l_104[2][0][3] = l_103[0];
                }
                else
                { /* block id: 50 */
                    VECTOR(int32_t, 8) l_105 = (VECTOR(int32_t, 8))(0x3559A3BDL, (VECTOR(int32_t, 4))(0x3559A3BDL, (VECTOR(int32_t, 2))(0x3559A3BDL, 0x0ECA3B41L), 0x0ECA3B41L), 0x0ECA3B41L, 0x3559A3BDL, 0x0ECA3B41L);
                    int32_t *l_106 = (void*)0;
                    int64_t l_107 = 0x25884CE0FD16B3F6L;
                    int i;
                    l_106 = (l_105.s2 , (void*)0);
                    l_29.s5 |= l_107;
                }
                for (l_31 = 8; (l_31 >= 50); l_31 = safe_add_func_uint32_t_u_u(l_31, 4))
                { /* block id: 56 */
                    struct S2 l_110[3][1] = {{{{18446744073709551608UL,-5L,0x4A6EC7818F2E103AL,65535UL}}},{{{18446744073709551608UL,-5L,0x4A6EC7818F2E103AL,65535UL}}},{{{18446744073709551608UL,-5L,0x4A6EC7818F2E103AL,65535UL}}}};
                    struct S2 l_111 = {{1UL,-1L,0x1C74AD158495D608L,1UL}};/* VOLATILE GLOBAL l_111 */
                    int32_t l_113 = (-2L);
                    int32_t *l_112 = &l_113;
                    int32_t *l_114[9][3] = {{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113}};
                    struct S2 l_121 = {{0xA54C6CEB2B01D4E9L,0x3B20B721F5756892L,0x9BA98011CAAB8DD6L,0x2756L}};/* VOLATILE GLOBAL l_121 */
                    struct S2 l_122[1] = {{{1UL,0x5D005BDBE471811AL,0xCF9EB957AB5B4982L,4UL}}};
                    int i, j;
                    l_111 = l_110[1][0];
                    l_114[4][2] = l_112;
                    for (l_113 = 0; (l_113 <= 5); ++l_113)
                    { /* block id: 61 */
                        int32_t l_117 = (-1L);
                        struct S0 l_118 = {6L,0x6DD67E6CL};
                        int64_t l_119 = 1L;
                        int32_t *l_120 = &l_118.f1;
                        l_117 = 4L;
                        l_118 = (l_18 = l_118);
                        l_114[7][1] = (l_119 , l_120);
                    }
                    l_122[0] = l_121;
                }
                for (l_30 = 0; (l_30 <= (-1)); --l_30)
                { /* block id: 71 */
                    int32_t l_125 = 0L;
                    VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(0x4A042813L, (-1L));
                    VECTOR(int32_t, 2) l_127 = (VECTOR(int32_t, 2))((-10L), 1L);
                    int16_t l_128 = (-1L);
                    VECTOR(int32_t, 16) l_129 = (VECTOR(int32_t, 16))(0x4F07992EL, (VECTOR(int32_t, 4))(0x4F07992EL, (VECTOR(int32_t, 2))(0x4F07992EL, 0x45671B14L), 0x45671B14L), 0x45671B14L, 0x4F07992EL, 0x45671B14L, (VECTOR(int32_t, 2))(0x4F07992EL, 0x45671B14L), (VECTOR(int32_t, 2))(0x4F07992EL, 0x45671B14L), 0x4F07992EL, 0x45671B14L, 0x4F07992EL, 0x45671B14L);
                    uint32_t l_130 = 1UL;
                    int32_t l_131 = 4L;
                    VECTOR(int16_t, 8) l_132 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L);
                    VECTOR(uint16_t, 4) l_133 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 7UL), 7UL);
                    VECTOR(int32_t, 16) l_134 = (VECTOR(int32_t, 16))(0x72BB943EL, (VECTOR(int32_t, 4))(0x72BB943EL, (VECTOR(int32_t, 2))(0x72BB943EL, (-10L)), (-10L)), (-10L), 0x72BB943EL, (-10L), (VECTOR(int32_t, 2))(0x72BB943EL, (-10L)), (VECTOR(int32_t, 2))(0x72BB943EL, (-10L)), 0x72BB943EL, (-10L), 0x72BB943EL, (-10L));
                    VECTOR(int32_t, 2) l_135 = (VECTOR(int32_t, 2))((-9L), 0x7B3DE6F4L);
                    VECTOR(int32_t, 8) l_136 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x25009269L), 0x25009269L), 0x25009269L, 8L, 0x25009269L);
                    int64_t l_137 = 0x144C929BB93460BAL;
                    uint16_t l_138 = 0x994CL;
                    uint16_t l_139 = 0UL;
                    uint16_t l_140 = 0x9ADFL;
                    int32_t l_141[5][1] = {{(-6L)},{(-6L)},{(-6L)},{(-6L)},{(-6L)}};
                    int i, j;
                    if (((l_28 = 4294967289UL) , ((GROUP_DIVERGE(2, 1) , (l_131 = ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))((-1L), (-6L), (-1L), l_125, ((VECTOR(int32_t, 8))(l_126.yyxyyyxy)), ((VECTOR(int32_t, 4))(l_127.xyyy)))).hi, ((VECTOR(int32_t, 4))(((l_128 , ((VECTOR(int32_t, 2))(l_129.sc7)).lo) , l_130), (-8L), 1L, (-6L))).yyzxxyww))).s1)) , ((VECTOR(int32_t, 16))(0x7BBFC23EL, 1L, 8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_132.s0543144140160576)), ((VECTOR(uint16_t, 4))(l_133.wxzw)).wxyywwxzwzywwxyw))).s82)), ((VECTOR(int32_t, 8))(l_134.s4bc694da)).s70, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_135.xx)).xxyxxyyyxxyyxyxx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_136.s72)).xxxxyyyxxxxyxxyx)).s65)).yxxxxyxxyyxxxyyy))).s9e))).xxyxxyyxyxyxyyyy)).s8d)), ((VECTOR(int32_t, 4))(4L, l_137, 0x5CAF6B08L, 0x3773B47BL)), l_138, 0x7E731012L, 8L, (l_34[7] ^= (-1L)), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x1A20042BL, (-1L))), ((VECTOR(int32_t, 8))(l_139, l_140, (-1L), 4L, l_141[0][0], 0x4E87DCAFL, 0x4160B101L, (-4L))).s33))), 0x206C9DDDL)).sc)))
                    { /* block id: 75 */
                        uint32_t l_142 = 0xF13C1FFCL;
                        int32_t l_143 = 0x7A1DF521L;
                        int32_t *l_144 = &l_143;
                        int32_t *l_145 = &l_143;
                        int32_t *l_146 = &l_143;
                        int32_t *l_147 = &l_143;
                        int32_t *l_148 = &l_143;
                        int32_t *l_149[3][8] = {{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143}};
                        int i, j;
                        l_136.s2 &= l_142;
                        l_34[0] ^= (l_129.s1 = l_143);
                        l_146 = (l_145 = l_144);
                        l_149[1][7] = (l_148 = l_147);
                    }
                    else
                    { /* block id: 83 */
                        uint16_t l_150 = 65529UL;
                        struct S2 l_154 = {{6UL,-1L,0UL,0UL}};/* VOLATILE GLOBAL l_154 */
                        struct S2 *l_153 = &l_154;
                        struct S2 l_155 = {{0x17E7064428E23497L,0x2A27FE94AFA8B02AL,1UL,0xF22BL}};/* VOLATILE GLOBAL l_155 */
                        struct S2 l_156 = {{1UL,0x086568B13B508CCAL,0x86A586A8A5BE0EE3L,0x3267L}};/* VOLATILE GLOBAL l_156 */
                        --l_150;
                        l_153 = (void*)0;
                        l_156 = l_155;
                    }
                }
                for (l_30 = 5; (l_30 < (-16)); l_30--)
                { /* block id: 91 */
                    int32_t l_159 = 0x06115999L;
                    int32_t *l_160[5][8] = {{(void*)0,&l_159,(void*)0,&l_159,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,(void*)0,&l_159,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,(void*)0,&l_159,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,(void*)0,&l_159,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,(void*)0,&l_159,&l_159,(void*)0,&l_159,&l_159}};
                    int32_t *l_161 = &l_159;
                    int64_t l_162 = (-7L);
                    int32_t **l_163 = &l_160[1][6];
                    int32_t **l_164 = &l_160[3][2];
                    int i, j;
                    l_161 = (l_159 , l_160[1][6]);
                    l_34[1] &= (l_18.f1 ^= l_162);
                    l_16.s4 &= 9L;
                    l_164 = l_163;
                }
            }
            l_166 = (l_16.s7 = l_165);
            l_16.s2 ^= l_167;
        }
        else
        { /* block id: 102 */
            int32_t l_168 = 7L;
            for (l_168 = 16; (l_168 > (-8)); l_168--)
            { /* block id: 105 */
                int64_t l_171 = 0x68E2F51524634641L;
                uint16_t l_172[5];
                uint16_t l_175 = 0UL;
                int16_t l_178 = 0L;
                int i;
                for (i = 0; i < 5; i++)
                    l_172[i] = 1UL;
                l_172[3]++;
                --l_175;
                if (l_178)
                { /* block id: 108 */
                    int16_t l_179 = (-1L);
                    int8_t l_180 = (-1L);
                    int8_t l_181 = 0x73L;
                    VECTOR(int32_t, 8) l_182 = (VECTOR(int32_t, 8))(0x60584195L, (VECTOR(int32_t, 4))(0x60584195L, (VECTOR(int32_t, 2))(0x60584195L, 0x5516A57FL), 0x5516A57FL), 0x5516A57FL, 0x60584195L, 0x5516A57FL);
                    VECTOR(int32_t, 4) l_183 = (VECTOR(int32_t, 4))(0x00997027L, (VECTOR(int32_t, 2))(0x00997027L, 1L), 1L);
                    VECTOR(int32_t, 2) l_184 = (VECTOR(int32_t, 2))(0x22A05F70L, 0L);
                    VECTOR(int32_t, 2) l_185 = (VECTOR(int32_t, 2))(6L, (-1L));
                    struct S0 l_206 = {0x71A464F8CF748600L,0x58D9A0E5L};
                    struct S0 l_207[7] = {{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL},{0x49D13D3843443872L,0x6A804FDCL}};
                    struct S0 l_208 = {0x1B0ECFDE346D14A2L,0x1037137AL};
                    int32_t l_209[2];
                    uint32_t l_210 = 0xB797E4BAL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_209[i] = 0x0EB92531L;
                    if (((VECTOR(int32_t, 8))(l_179, 0x7333EA55L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(9L, l_180, (-2L), 0x0085B64BL)))), (l_16.s4 = l_181), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_182.s74)), ((VECTOR(int32_t, 2))((-1L), 0x73557166L)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_183.yw)), 6L, 0L)).even, ((VECTOR(int32_t, 16))(l_184.yxyxyyyyxyxyxxxy)).se9)))))).lo, 0x29E181D6L, 0x46527211L)).s26)).hi, ((VECTOR(int32_t, 2))(0x1D9CE96FL, 1L)), ((VECTOR(int32_t, 2))(l_185.xx)), 0x604469D8L)).s6)
                    { /* block id: 110 */
                        uint64_t l_186 = 0xF18A5AB74BA3209BL;
                        uint32_t l_187 = 0x308A35FDL;
                        int8_t l_188 = 0x5FL;
                        l_186 = (-1L);
                        l_184.x ^= l_187;
                        l_184.x = (FAKE_DIVERGE(p_242->group_0_offset, get_group_id(0), 10) , l_188);
                    }
                    else
                    { /* block id: 114 */
                        VECTOR(uint16_t, 16) l_189 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xC5ACL), 0xC5ACL), 0xC5ACL, 65535UL, 0xC5ACL, (VECTOR(uint16_t, 2))(65535UL, 0xC5ACL), (VECTOR(uint16_t, 2))(65535UL, 0xC5ACL), 65535UL, 0xC5ACL, 65535UL, 0xC5ACL);
                        uint32_t l_190 = 0x5EFD6794L;
                        VECTOR(uint16_t, 8) l_191 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xE432L), 0xE432L), 0xE432L, 65533UL, 0xE432L);
                        int8_t l_192[10][3][4] = {{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}},{{(-4L),4L,1L,0L},{(-4L),4L,1L,0L},{(-4L),4L,1L,0L}}};
                        VECTOR(int32_t, 4) l_193 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 4L), 4L);
                        VECTOR(int32_t, 2) l_194 = (VECTOR(int32_t, 2))(0x1F3B934AL, 0x6CC76CC3L);
                        VECTOR(int32_t, 16) l_195 = (VECTOR(int32_t, 16))(0x0CE31EFFL, (VECTOR(int32_t, 4))(0x0CE31EFFL, (VECTOR(int32_t, 2))(0x0CE31EFFL, 4L), 4L), 4L, 0x0CE31EFFL, 4L, (VECTOR(int32_t, 2))(0x0CE31EFFL, 4L), (VECTOR(int32_t, 2))(0x0CE31EFFL, 4L), 0x0CE31EFFL, 4L, 0x0CE31EFFL, 4L);
                        int32_t l_196[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                        uint8_t l_197 = 0UL;
                        VECTOR(int32_t, 16) l_198 = (VECTOR(int32_t, 16))(0x598AD08AL, (VECTOR(int32_t, 4))(0x598AD08AL, (VECTOR(int32_t, 2))(0x598AD08AL, 0L), 0L), 0L, 0x598AD08AL, 0L, (VECTOR(int32_t, 2))(0x598AD08AL, 0L), (VECTOR(int32_t, 2))(0x598AD08AL, 0L), 0x598AD08AL, 0L, 0x598AD08AL, 0L);
                        int i, j, k;
                        l_183.z = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(1L, 0L)).yxyyxxxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_189.sd0a6ee8d)))).odd, (uint16_t)l_190))).zyywxyyw)).s1034354333311331)).scf, ((VECTOR(uint16_t, 8))(l_191.s30143317)).s64))))).xxyxyxyx))).s62)), (-1L))).hi, (int32_t)l_192[7][1][3]))), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x2F661273L)).yxyy)), 6L)).s3660704656365041)).s3292)).zyxzwxzyxwxxyyxz)).s01)).yyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_193.yyxxyxwwzzyxyzww)).se7, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_194.yxyyyxyx)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_195.sce)).xyyxxyyxyxxyyxyy)).hi, ((VECTOR(int32_t, 4))(l_196[1], l_197, 1L, 0x29BB82E0L)).wwwyywzw))).s1235422723015230)).hi)).s31, ((VECTOR(int32_t, 16))(l_198.sa23e7edb1d9bc29e)).s1d))))).yyxx))).lo)), (-1L), 0x774116E0L)).y;
                    }
                    for (l_179 = 0; (l_179 >= 5); l_179 = safe_add_func_int8_t_s_s(l_179, 1))
                    { /* block id: 119 */
                        uint16_t l_201 = 65530UL;
                        struct S1 l_202 = {1UL,0L,0xB1FACA5B8809D957L,0xA839L};/* VOLATILE GLOBAL l_202 */
                        struct S1 l_203 = {0UL,1L,0x49D7135F02C4B146L,65530UL};/* VOLATILE GLOBAL l_203 */
                        VECTOR(int32_t, 4) l_204 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x15103395L), 0x15103395L);
                        VECTOR(int32_t, 8) l_205 = (VECTOR(int32_t, 8))(0x50ED8817L, (VECTOR(int32_t, 4))(0x50ED8817L, (VECTOR(int32_t, 2))(0x50ED8817L, (-1L)), (-1L)), (-1L), 0x50ED8817L, (-1L));
                        int i;
                        l_185.y = l_201;
                        l_203 = l_202;
                        l_182.s5 &= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_204.yw)).yyyyxyyyyxxxyxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_205.s0410572574216135)).odd)).s6123115612630702))).s2;
                    }
                    l_208 = (l_207[2] = l_206);
                    if ((l_209[0] , l_210))
                    { /* block id: 126 */
                        struct S2 l_212 = {{0x50ACB21D4D259A4CL,0L,0x37E3313D937E26A3L,0UL}};/* VOLATILE GLOBAL l_212 */
                        struct S2 *l_211 = &l_212;
                        uint32_t l_213 = 0xA1C93ACCL;
                        l_182.s1 = (l_184.x = 0x5C3173CBL);
                        l_211 = l_211;
                        l_213 |= (-4L);
                        l_16.s3 &= 0L;
                    }
                    else
                    { /* block id: 132 */
                        uint32_t l_214 = 0x85685B33L;
                        struct S1 l_215 = {0xC6D49A363C039C90L,0L,0xFF8E7BD97CFE254EL,65529UL};/* VOLATILE GLOBAL l_215 */
                        int32_t *l_216 = (void*)0;
                        l_209[1] &= (((VECTOR(uint16_t, 2))(0xDE17L, 3UL)).odd , l_214);
                        l_216 = (GROUP_DIVERGE(0, 1) , (l_215 , (void*)0));
                    }
                }
                else
                { /* block id: 136 */
                    int32_t l_217 = 0L;
                    uint32_t l_218 = 0x3EE48320L;
                    VECTOR(int64_t, 8) l_219 = (VECTOR(int64_t, 8))(0x5167068786165B3BL, (VECTOR(int64_t, 4))(0x5167068786165B3BL, (VECTOR(int64_t, 2))(0x5167068786165B3BL, 0L), 0L), 0L, 0x5167068786165B3BL, 0L);
                    int32_t *l_220 = (void*)0;
                    int i;
                    l_220 = (l_217 , ((l_218 , (l_171 = ((VECTOR(int64_t, 8))(l_219.s75143173)).s7)) , l_220));
                }
                for (l_178 = 0; (l_178 == 17); l_178++)
                { /* block id: 142 */
                    int32_t l_223 = 0x6E727C3FL;
                    for (l_223 = (-8); (l_223 < 23); l_223 = safe_add_func_int32_t_s_s(l_223, 2))
                    { /* block id: 145 */
                        int8_t l_226 = 4L;
                        int32_t l_227 = 6L;
                        int16_t l_228 = 0x4215L;
                        uint64_t l_229 = 0x551108C7AFC61B7EL;
                        struct S0 l_233 = {-7L,1L};
                        struct S0 *l_232 = &l_233;
                        struct S0 *l_234 = (void*)0;
                        int16_t l_235 = (-1L);
                        VECTOR(int8_t, 4) l_236 = (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, (-1L)), (-1L));
                        int16_t l_237 = 1L;
                        int16_t l_238 = 0L;
                        int32_t *l_239 = &l_233.f1;
                        uint16_t l_240 = 0x8EA3L;
                        int i;
                        l_229--;
                        l_234 = l_232;
                        l_239 = (((VECTOR(int8_t, 16))(0x11L, ((VECTOR(int8_t, 4))(l_235, 3L, 0x7EL, 0x76L)).y, ((VECTOR(int8_t, 4))(l_236.yxwx)), ((VECTOR(int8_t, 4))(1L, 2L, 0x2AL, 0L)), l_237, 0x2DL, 0x0CL, 0x08L, 0L, 0x41L)).s0 , (l_238 , (void*)0));
                        l_240 &= (l_16.s3 = (-5L));
                    }
                }
            }
        }
        l_241 = (void*)0;
        unsigned int result = 0;
        int l_12_i0;
        for (l_12_i0 = 0; l_12_i0 < 10; l_12_i0++) {
            result += l_12[l_12_i0];
        }
        result += l_13;
        result += l_14;
        result += l_15;
        result += l_16.s7;
        result += l_16.s6;
        result += l_16.s5;
        result += l_16.s4;
        result += l_16.s3;
        result += l_16.s2;
        result += l_16.s1;
        result += l_16.s0;
        int l_17_i0;
        for (l_17_i0 = 0; l_17_i0 < 2; l_17_i0++) {
            result += l_17[l_17_i0];
        }
        atomic_add(&p_242->l_special_values[40], result);
    }
    else
    { /* block id: 156 */
        (1 + 1);
    }
    return p_242->l_comm_values[(safe_mod_func_uint32_t_u_u(p_242->tid, 78))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[78];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 78; i++)
            l_comm_values[i] = 1;
    struct S3 c_243;
    struct S3* p_242 = &c_243;
    struct S3 c_244 = {
        {0x1CC14173L,1L,0x1CC14173L,0x1CC14173L,1L,0x1CC14173L,0x1CC14173L}, // p_242->g_3
        {&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0],&p_242->g_3[0]}, // p_242->g_5
        {{(void*)0,&p_242->g_3[4],(void*)0,(void*)0,&p_242->g_3[4],(void*)0,(void*)0,&p_242->g_3[4]}}, // p_242->g_6
        0, // p_242->v_collective
        sequence_input[get_global_id(0)], // p_242->global_0_offset
        sequence_input[get_global_id(1)], // p_242->global_1_offset
        sequence_input[get_global_id(2)], // p_242->global_2_offset
        sequence_input[get_local_id(0)], // p_242->local_0_offset
        sequence_input[get_local_id(1)], // p_242->local_1_offset
        sequence_input[get_local_id(2)], // p_242->local_2_offset
        sequence_input[get_group_id(0)], // p_242->group_0_offset
        sequence_input[get_group_id(1)], // p_242->group_1_offset
        sequence_input[get_group_id(2)], // p_242->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 78)), permutations[0][get_linear_local_id()])), // p_242->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_243 = c_244;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_242);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_242->g_3[i], "p_242->g_3[i]", print_hash_value);

    }
    transparent_crc(p_242->v_collective, "p_242->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 72; i++)
            transparent_crc(p_242->l_special_values[i], "p_242->l_special_values[i]", print_hash_value);
    transparent_crc(p_242->l_comm_values[get_linear_local_id()], "p_242->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_242->g_comm_values[get_linear_group_id() * 78 + get_linear_local_id()], "p_242->g_comm_values[get_linear_group_id() * 78 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
