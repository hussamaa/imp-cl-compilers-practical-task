// --atomics 81 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 68,61,1 -l 1,1,1
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

// Seed: 3394106799

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(uint8_t, 2) g_11;
    VECTOR(int8_t, 8) g_17;
    volatile VECTOR(int32_t, 8) g_19;
    int16_t g_25;
    uint8_t g_27;
    volatile uint8_t * volatile g_34;
    volatile uint8_t g_36;
    volatile uint8_t *g_35;
    uint16_t g_37;
    int32_t g_42;
    uint8_t g_44;
    uint32_t g_51;
    int32_t *g_65;
    int32_t **g_64[8][6];
    uint16_t g_67;
    VECTOR(int16_t, 8) g_73;
    VECTOR(int8_t, 16) g_75;
    uint8_t *g_113;
    volatile VECTOR(uint16_t, 2) g_118;
    VECTOR(uint16_t, 16) g_119;
    volatile VECTOR(int8_t, 16) g_130;
    VECTOR(int8_t, 4) g_131;
    VECTOR(int16_t, 4) g_140;
    VECTOR(int16_t, 16) g_142;
    uint64_t g_149;
    int32_t ** volatile g_161;
    int32_t ** volatile g_162[3][1][3];
    int32_t ** volatile g_163;
    uint8_t **g_166;
    uint8_t *** volatile g_165;
    VECTOR(uint64_t, 4) g_188;
    VECTOR(int16_t, 8) g_196;
    int64_t g_230;
    uint64_t g_241;
    uint16_t g_245;
    volatile VECTOR(uint64_t, 8) g_256;
    VECTOR(uint8_t, 4) g_257;
    VECTOR(uint8_t, 16) g_259;
    VECTOR(uint8_t, 8) g_262;
    VECTOR(uint8_t, 4) g_263;
    int32_t g_275;
    VECTOR(int8_t, 2) g_375;
    VECTOR(int8_t, 2) g_376;
    volatile VECTOR(int8_t, 2) g_377;
    VECTOR(int8_t, 8) g_378;
    volatile uint32_t g_400;
    uint32_t g_433[2][7][8];
    VECTOR(int8_t, 8) g_485;
    volatile VECTOR(int8_t, 8) g_575;
    uint8_t g_581;
    VECTOR(uint16_t, 2) g_622;
    volatile uint64_t g_633;
    volatile VECTOR(int8_t, 16) g_647;
    VECTOR(int32_t, 8) g_655;
    int32_t * volatile g_683;
    int32_t * volatile g_685;
    volatile uint16_t g_699;
    volatile VECTOR(uint32_t, 4) g_705;
    uint32_t g_730;
    VECTOR(int8_t, 16) g_735;
    VECTOR(int64_t, 4) g_744;
    volatile VECTOR(uint16_t, 4) g_752;
    VECTOR(uint16_t, 8) g_753;
    VECTOR(uint16_t, 4) g_755;
    VECTOR(uint16_t, 16) g_756;
    volatile VECTOR(uint16_t, 2) g_760;
    VECTOR(uint16_t, 4) g_761;
    volatile VECTOR(uint16_t, 2) g_764;
    VECTOR(uint16_t, 8) g_765;
    VECTOR(uint16_t, 8) g_767;
    volatile VECTOR(uint16_t, 4) g_768;
    int16_t g_776;
    VECTOR(int32_t, 16) g_827;
    volatile VECTOR(uint32_t, 4) g_838;
    VECTOR(uint32_t, 2) g_839;
    uint8_t *** volatile g_866;
    int64_t *g_918;
    int64_t **g_917[9][2];
    int64_t **g_920;
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
int32_t  func_1(struct S0 * p_930);
uint64_t  func_4(int16_t  p_5, uint32_t  p_6, struct S0 * p_930);
uint64_t  func_7(int64_t  p_8, uint8_t  p_9, struct S0 * p_930);
uint16_t  func_12(int32_t  p_13, uint32_t  p_14, int32_t  p_15, uint32_t  p_16, struct S0 * p_930);
int32_t * func_54(uint16_t  p_55, int32_t ** p_56, int32_t  p_57, struct S0 * p_930);
int8_t  func_58(int32_t ** p_59, int32_t * p_60, int32_t  p_61, uint8_t * p_62, int32_t ** p_63, struct S0 * p_930);
int32_t * func_70(uint64_t  p_71, uint8_t  p_72, struct S0 * p_930);
uint32_t  func_81(int32_t  p_82, int32_t  p_83, uint8_t * p_84, struct S0 * p_930);
uint8_t ** func_93(int32_t * p_94, int64_t  p_95, uint64_t  p_96, struct S0 * p_930);
int32_t * func_97(int64_t  p_98, int16_t  p_99, uint32_t  p_100, struct S0 * p_930);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_930->l_comm_values p_930->g_11 p_930->g_17 p_930->g_19 p_930->g_27 p_930->g_34 p_930->g_35 p_930->g_37 p_930->g_25 p_930->g_44 p_930->g_130 p_930->g_259 p_930->g_42 p_930->g_140 p_930->g_263 p_930->g_118 p_930->g_131 p_930->g_230 p_930->g_67 p_930->g_400 p_930->g_51 p_930->g_75 p_930->g_65 p_930->g_119 p_930->g_73 p_930->g_165 p_930->g_113 p_930->g_149 p_930->g_377 p_930->g_485 p_930->g_142 p_930->g_378 p_930->g_comm_values p_930->g_275 p_930->g_245 p_930->g_376 p_930->g_257 p_930->g_575 p_930->g_375 p_930->g_622 p_930->g_633 p_930->g_647 p_930->g_655 p_930->g_256 p_930->g_699 p_930->g_705 p_930->g_262 p_930->g_730 p_930->g_735 p_930->g_744 p_930->g_752 p_930->g_753 p_930->g_755 p_930->g_756 p_930->g_760 p_930->g_761 p_930->g_764 p_930->g_765 p_930->g_767 p_930->g_768 p_930->g_433 p_930->g_581 p_930->g_827 p_930->g_838 p_930->g_839 p_930->g_866 p_930->g_776 p_930->g_917
 * writes: p_930->g_27 p_930->g_44 p_930->g_comm_values p_930->g_42 p_930->g_25 p_930->g_140 p_930->g_51 p_930->g_67 p_930->g_241 p_930->g_400 p_930->g_65 p_930->g_166 p_930->g_119 p_930->g_230 p_930->g_37 p_930->g_149 p_930->g_245 p_930->g_257 p_930->g_581 p_930->g_633 p_930->g_699 p_930->g_275 p_930->g_730 p_930->g_776 p_930->g_433 p_930->g_761 p_930->g_17 p_930->g_920
 */
int32_t  func_1(struct S0 * p_930)
{ /* block id: 4 */
    VECTOR(int8_t, 16) l_10 = (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 2L), 2L), 2L, (-6L), 2L, (VECTOR(int8_t, 2))((-6L), 2L), (VECTOR(int8_t, 2))((-6L), 2L), (-6L), 2L, (-6L), 2L);
    VECTOR(int8_t, 4) l_18 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0DL), 0x0DL);
    VECTOR(int32_t, 16) l_20 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int32_t, 2))(0L, (-4L)), (VECTOR(int32_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L));
    uint8_t *l_26 = &p_930->g_27;
    int16_t l_670 = 7L;
    uint64_t *l_709 = (void*)0;
    VECTOR(uint16_t, 2) l_754 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
    int32_t l_822 = 0x2143F5AAL;
    uint8_t l_824 = 0xF1L;
    int64_t **l_842 = (void*)0;
    int64_t *l_844[2];
    int64_t **l_843 = &l_844[1];
    VECTOR(int32_t, 2) l_855 = (VECTOR(int32_t, 2))(0x0BD84C20L, 0x799303B2L);
    VECTOR(uint8_t, 2) l_862 = (VECTOR(uint8_t, 2))(4UL, 255UL);
    int8_t l_865 = 0L;
    uint16_t l_898[3][10] = {{0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL,0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL},{0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL,0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL},{0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL,0x36EFL,0x3F77L,0x65EAL,0x3F77L,0x36EFL}};
    int8_t l_923 = 0x71L;
    int64_t l_925 = (-5L);
    uint16_t l_926 = 65535UL;
    int8_t l_929 = (-3L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_844[i] = &p_930->g_230;
    if ((safe_mod_func_uint8_t_u_u(((!func_4(p_930->l_comm_values[(safe_mod_func_uint32_t_u_u(p_930->tid, 1))], (func_7((((~p_930->l_comm_values[(safe_mod_func_uint32_t_u_u(p_930->tid, 1))]) , (GROUP_DIVERGE(0, 1) <= ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_10.s25f5f996f377cc42)).hi)).hi, ((VECTOR(uint8_t, 16))(255UL, 255UL, FAKE_DIVERGE(p_930->global_0_offset, get_global_id(0), 10), 255UL, 0xAFL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_930->g_11.xx)).xxxy)), (func_12((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_930->g_17.s56640072)).lo)), 0L, 0x38L, 0x7FL, 0x1EL)).s60, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_18.yzxz)).zwwwyyyw, ((VECTOR(int8_t, 4))(0x6CL, ((VECTOR(int8_t, 2))(0x32L, (-9L))), 1L)).xyxxxyxz))).s56))).xxyyxxxyxyyxyxyx)).s3 , (-4L)), (((VECTOR(int32_t, 4))(p_930->g_19.s0166)).z , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_930->g_19.s3, (-1L), p_930->g_19.s1, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_20.s9b)), 0L, (-1L))), 0x259DBA5CL, (((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((--(*l_26)), (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((p_930->g_34 == p_930->g_35), 3)) != p_930->g_37), p_930->g_37)) == l_18.y) | 0x9274CB07L))), (-2L))) < p_930->g_25) && 18446744073709551609UL), 0x18B3027FL, ((VECTOR(int32_t, 4))((-1L))), 0x42D225D8L, (-1L))).se9bd)).x != l_18.y)), p_930->l_comm_values[(safe_mod_func_uint32_t_u_u(p_930->tid, 1))], l_20.sb, p_930) >= 0x174CL), 0x49L, 6UL, ((VECTOR(uint8_t, 4))(0x3EL)))).s9242))).z)) > l_20.s9), p_930->g_259.sb, p_930) , p_930->g_230), p_930)) | l_18.x), l_670)))
    { /* block id: 275 */
        int16_t l_682 = 1L;
        int32_t l_687 = (-5L);
        int32_t **l_690 = &p_930->g_65;
        int32_t l_729[1][1];
        VECTOR(uint16_t, 2) l_763 = (VECTOR(uint16_t, 2))(1UL, 0xB121L);
        int32_t *l_809 = &l_729[0][0];
        int32_t *l_810 = (void*)0;
        int32_t *l_811 = (void*)0;
        int32_t *l_812 = &l_729[0][0];
        int32_t *l_813 = &l_729[0][0];
        int32_t *l_814 = (void*)0;
        int32_t *l_815 = (void*)0;
        int32_t *l_816 = (void*)0;
        int32_t *l_817 = (void*)0;
        int32_t *l_818 = &p_930->g_42;
        int32_t *l_819 = &l_687;
        int32_t *l_820 = &l_729[0][0];
        int32_t *l_821 = (void*)0;
        int32_t *l_823[9];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_729[i][j] = 0x28B4A8ADL;
        }
        for (i = 0; i < 9; i++)
            l_823[i] = &p_930->g_42;
        if ((atomic_inc(&p_930->g_atomic_input[81 * get_linear_group_id() + 54]) == 2))
        { /* block id: 277 */
            VECTOR(int64_t, 2) l_671 = (VECTOR(int64_t, 2))(0x5DD96D8D2A9F2C88L, 0x4A6C3B8AADC26E56L);
            VECTOR(uint32_t, 16) l_672 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0UL), 0UL), 0UL, 4294967288UL, 0UL, (VECTOR(uint32_t, 2))(4294967288UL, 0UL), (VECTOR(uint32_t, 2))(4294967288UL, 0UL), 4294967288UL, 0UL, 4294967288UL, 0UL);
            VECTOR(int8_t, 2) l_673 = (VECTOR(int8_t, 2))(0x12L, 4L);
            int32_t l_675[6];
            int32_t *l_674[9][5] = {{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0},{(void*)0,&l_675[4],&l_675[4],&l_675[4],(void*)0}};
            uint64_t l_676 = 0x36BA62E92B02488BL;
            int64_t l_677 = 0x7E30A09EAB0F6E0CL;
            uint16_t l_678 = 65535UL;
            uint32_t l_679 = 0xDC4512D8L;
            int i, j;
            for (i = 0; i < 6; i++)
                l_675[i] = 1L;
            l_674[7][0] = ((l_673.y = (l_672.s8 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_671.xyyxyyyy)).s4142342751365731)).sd)) , (void*)0);
            l_677 ^= l_676;
            l_679 = (l_678 ^= (-8L));
            unsigned int result = 0;
            result += l_671.y;
            result += l_671.x;
            result += l_672.sf;
            result += l_672.se;
            result += l_672.sd;
            result += l_672.sc;
            result += l_672.sb;
            result += l_672.sa;
            result += l_672.s9;
            result += l_672.s8;
            result += l_672.s7;
            result += l_672.s6;
            result += l_672.s5;
            result += l_672.s4;
            result += l_672.s3;
            result += l_672.s2;
            result += l_672.s1;
            result += l_672.s0;
            result += l_673.y;
            result += l_673.x;
            int l_675_i0;
            for (l_675_i0 = 0; l_675_i0 < 6; l_675_i0++) {
                result += l_675[l_675_i0];
            }
            result += l_676;
            result += l_677;
            result += l_678;
            result += l_679;
            atomic_add(&p_930->g_special_values[81 * get_linear_group_id() + 54], result);
        }
        else
        { /* block id: 284 */
            (1 + 1);
        }
        if ((65535UL == (~p_930->g_118.y)))
        { /* block id: 287 */
            for (p_930->g_42 = 18; (p_930->g_42 > 9); p_930->g_42 = safe_sub_func_uint8_t_u_u(p_930->g_42, 2))
            { /* block id: 290 */
                int32_t *l_684 = (void*)0;
                int32_t *l_686[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_686[i] = (void*)0;
                l_687 = l_682;
            }
        }
        else
        { /* block id: 293 */
            int32_t **l_691 = &p_930->g_65;
            VECTOR(uint32_t, 4) l_706 = (VECTOR(uint32_t, 4))(0x61199BFDL, (VECTOR(uint32_t, 2))(0x61199BFDL, 4294967295UL), 4294967295UL);
            VECTOR(uint16_t, 4) l_757 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 1UL), 1UL);
            VECTOR(uint16_t, 8) l_766 = (VECTOR(uint16_t, 8))(0xC7BFL, (VECTOR(uint16_t, 4))(0xC7BFL, (VECTOR(uint16_t, 2))(0xC7BFL, 0xE439L), 0xE439L), 0xE439L, 0xC7BFL, 0xE439L);
            int32_t l_773 = 0x44131AEAL;
            int i;
            for (p_930->g_67 = 0; (p_930->g_67 >= 15); p_930->g_67 = safe_add_func_uint64_t_u_u(p_930->g_67, 6))
            { /* block id: 296 */
                int32_t ***l_692 = (void*)0;
                int32_t **l_693 = (void*)0;
                int32_t l_694 = (-1L);
                int32_t *l_695 = (void*)0;
                int32_t *l_696 = &l_694;
                int32_t *l_697 = (void*)0;
                int32_t *l_698[10] = {&p_930->g_42,(void*)0,(void*)0,(void*)0,&p_930->g_42,&p_930->g_42,(void*)0,(void*)0,(void*)0,&p_930->g_42};
                int i;
                (**l_690) ^= (l_694 = (((VECTOR(uint8_t, 2))(0x48L, 0x32L)).odd <= (&p_930->g_683 != (l_693 = (l_691 = ((&p_930->g_275 != &p_930->g_275) , l_690))))));
                if ((**l_690))
                    break;
                ++p_930->g_699;
                if ((**l_690))
                    break;
            }
            for (p_930->g_275 = 15; (p_930->g_275 <= (-29)); --p_930->g_275)
            { /* block id: 307 */
                uint32_t l_704 = 0xDC31D9F9L;
                uint32_t l_722 = 1UL;
                int32_t *l_723 = &l_687;
                int32_t l_724 = 0x1C08C0C2L;
                if (l_704)
                    break;
                (**l_691) = (((VECTOR(uint32_t, 4))(p_930->g_705.wyxz)).y >= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_706.xx)).yyyxyyyyyyxyxyxx)).s6e0c)).w);
                l_724 ^= ((((safe_lshift_func_int16_t_s_u(((void*)0 == l_709), 4)) , ((*l_723) = ((**l_691) = (safe_mod_func_uint64_t_u_u(0x7549EC977EB80AFBL, (((safe_mul_func_uint8_t_u_u((l_722 = (safe_mod_func_uint32_t_u_u(((0x67L >= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x217DL, (**l_691))), ((p_930->g_262.s5 <= (l_670 , ((void*)0 != &p_930->g_699))) , GROUP_DIVERGE(0, 1))))) <= (*p_930->g_113)), (**l_691)))), l_704)) | (**l_691)) , 0xD448DABE902AE60BL)))))) == l_10.s6) , 0x5356FF35L);
            }
            for (l_687 = (-27); (l_687 == 10); ++l_687)
            { /* block id: 317 */
                int32_t *l_727 = &p_930->g_42;
                int32_t *l_728[3];
                VECTOR(int64_t, 2) l_745 = (VECTOR(int64_t, 2))((-3L), 0x74E2A8FE7F130EB5L);
                VECTOR(uint16_t, 2) l_762 = (VECTOR(uint16_t, 2))(65535UL, 0xC37BL);
                int32_t *l_774 = (void*)0;
                int32_t *l_775 = &p_930->g_275;
                uint16_t *l_777 = &p_930->g_37;
                uint32_t l_807 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_728[i] = &p_930->g_42;
                ++p_930->g_730;
                (*l_690) = func_97((((((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(p_930->g_735.sbb33d1a8)).s6, ((*l_26) = ((safe_sub_func_int64_t_s_s((**l_691), (safe_mul_func_int8_t_s_s(((p_930->g_433[0][6][0] ^= (5UL & (((((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(p_930->g_744.yxwyxzyyxzxwzxyw)).lo, ((VECTOR(int64_t, 2))(l_745.yx)).yyyxxxxx))).s0, 1L)) || ((0xD6D3CF3C394B2B91L | (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(p_930->g_752.wy)).xyxyxyyy, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(p_930->g_753.s75)).xxxyxyxyxxxxxxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_754.xy)).yyyyyxyyxxxxyxxx)), ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(p_930->g_755.zyyx)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(0x2631L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_930->g_756.s3f43abd038b20f00)).sb6)), 0UL, 0xA018L, (p_930->g_263.y <= ((**l_690) , 1L)), 0UL, 0x5108L)).s41))))), ((VECTOR(uint16_t, 8))(l_757.wxwxxxxz)).s64))).xxyxyyxyxyxyyyyy))).sea7e, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((safe_lshift_func_uint16_t_u_u(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_930->g_760.yy)), 65531UL, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_930->g_761.zywx)).wzxwyxxywwwzwzyx)).lo)).hi, ((VECTOR(uint16_t, 8))(l_762.yxxyxxxy)).hi, ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_763.xyyxyxyx)).hi)).zwwzyzwz, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_930->g_764.yx)).xyxxxxyxxyxxyxxy)).hi))).even))).w, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_18.x, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(p_930->g_765.s14))))), 65530UL, 1UL)), ((VECTOR(uint16_t, 2))(l_766.s22)), 0x9478L)).s5, ((VECTOR(uint16_t, 2))(p_930->g_767.s44)), 0xE077L, ((VECTOR(uint16_t, 4))(p_930->g_768.yzwy)))), 0x2C31L, ((safe_add_func_uint16_t_u_u(((*l_777) = ((p_930->g_776 = ((*l_775) ^= ((VECTOR(int32_t, 8))((safe_rshift_func_int8_t_s_s(((l_773 = 0x61F48087L) , (**l_691)), p_930->g_17.s3)), (-7L), ((VECTOR(int32_t, 2))(0x779DA840L)), ((VECTOR(int32_t, 4))((-8L))))).s1)) , FAKE_DIVERGE(p_930->group_0_offset, get_group_id(0), 10))), p_930->g_622.x)) != 0x32429F0FF5317633L), 0x730FL, 0x64D3L)))).even, ((VECTOR(uint16_t, 8))(0xF541L))))).s36)), ((VECTOR(uint32_t, 2))(4294967295UL))))).xyxxxxyyxyyxxyxx)).s1 != p_930->g_744.y) <= (**l_690)), 5)) != FAKE_DIVERGE(p_930->local_1_offset, get_local_id(1), 10)), p_930->g_761.y, ((VECTOR(uint16_t, 2))(0x2BEEL)), 8UL, (**l_691), 65528UL, 0UL, ((VECTOR(uint16_t, 4))(65528UL)), l_20.s8, 0x2884L, 0x52A4L, 0x276BL)).s8665)).yywxxwwxxzzwyxyz, ((VECTOR(uint16_t, 16))(0x836AL))))).sb8c4, ((VECTOR(uint16_t, 4))(0xF16DL))))).wxwxzzyz))), ((VECTOR(uint32_t, 8))(0UL)), ((VECTOR(uint32_t, 8))(0xAA27E339L))))).s76, ((VECTOR(uint32_t, 2))(1UL))))), 0x70194848L, p_930->g_767.s5, 0UL, 0x6B4E9AF7L, 0UL, ((VECTOR(uint32_t, 8))(0x2BFCCCECL)), 0x879A4518L)).s2 ^ p_930->g_730), FAKE_DIVERGE(p_930->local_2_offset, get_local_id(2), 10))), 0x13C5L)), p_930->g_73.s6))) != 4L)) , (*l_727)) != (**l_691)) ^ 0L))) && 0UL), (**l_690))))) < 0x02L)))) , p_930->g_581) , (*l_727)) ^ (-1L)) < p_930->g_119.sd), p_930->g_119.s3, p_930->g_245, p_930);
                for (p_930->g_230 = 0; (p_930->g_230 <= 16); ++p_930->g_230)
                { /* block id: 328 */
                    uint8_t l_795 = 9UL;
                    int64_t *l_800[8][9] = {{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230},{(void*)0,&p_930->g_230,(void*)0,(void*)0,&p_930->g_230,(void*)0,(void*)0,(void*)0,&p_930->g_230}};
                    int32_t l_808 = 1L;
                    int i, j;
                    for (p_930->g_581 = 12; (p_930->g_581 <= 38); p_930->g_581 = safe_add_func_uint8_t_u_u(p_930->g_581, 6))
                    { /* block id: 331 */
                        int8_t l_790 = (-7L);
                        uint16_t *l_801 = (void*)0;
                        uint16_t *l_802 = (void*)0;
                        uint16_t *l_803 = (void*)0;
                        uint16_t *l_804[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_805 = &p_930->g_275;
                        uint32_t l_806 = 6UL;
                        int i;
                        l_808 ^= (safe_rshift_func_int8_t_s_u(p_930->g_75.s0, (0x147CB328E0BCAC44L > (safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((*l_727) = ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x43L, 1L)).xyyyyxyx)), p_930->g_755.w, (l_790 = p_930->g_130.sb), ((safe_mod_func_int16_t_s_s((((~((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(5L, 7L)).yyxyxxyx, (int32_t)((l_795 ^ (p_930->g_761.w |= ((*l_777) ^= (safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s(1L, (((void*)0 != l_800[6][8]) || (p_930->g_375.x < l_795)))) | l_20.s6) != (**l_690)), 1L))))) ^ 255UL)))), ((VECTOR(int32_t, 8))(0x46129E51L)), ((VECTOR(int32_t, 8))(0x7A1974B3L))))).s24, ((VECTOR(int32_t, 2))((-10L)))))).odd, l_795)) || 0xAF88L)) , l_805) != &p_930->g_275), 0x32C8L)) == l_806), 0x1DL, ((VECTOR(int8_t, 2))(0x34L)), 0x4CL, (-1L))), (int8_t)l_807))).sdd)).hi, p_930->g_744.x)) & (**l_691))), l_670)) <= l_806), p_930->g_622.x)))));
                    }
                }
            }
        }
        l_824--;
        (*l_690) = (*l_690);
    }
    else
    { /* block id: 343 */
        l_20.s6 = ((*p_930->g_65) = ((VECTOR(int32_t, 2))(p_930->g_827.sa7)).even);
    }
    (*p_930->g_866) = ((l_754.y == (safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((*p_930->g_65) = (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((0x6A19L >= ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_930->g_838.wwzwxywz)))).lo)).y ^ ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_930->g_839.yy)), 0x4A2A7748L, 4294967295UL))))).z) != (safe_add_func_uint16_t_u_u((&p_930->g_230 == ((*l_843) = (void*)0)), (safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((*p_930->g_113), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-3L), (-1L))).yyyy)).y)), (safe_rshift_func_int16_t_s_u((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xEC94L, ((+((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_855.xxxy)).xyywzwwy))).even)).w) && ((safe_sub_func_int8_t_s_s(((p_930->g_comm_values[p_930->tid] = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(l_862.yyyyxyxyyxxxyxxx))))).s4, ((safe_lshift_func_int16_t_s_s((l_20.sd , 7L), 1)) != ((((l_865 | l_855.y) , GROUP_DIVERGE(1, 1)) != l_20.s0) || 8UL)))), (*p_930->g_113)))) & l_862.x), (*p_930->g_113))) == l_855.y)), 65535UL, 0x8B5AL)).wxzyzyzz)).s0565140271125565))))).hi)).s7 | l_754.y), l_862.x)))) , 0L), 0x49260E2CL)))))) , 0x756B3B1813858DBBL), p_930->g_230)), p_930->g_131.y))) >= 0x82C50C55L), p_930->g_119.sd)), GROUP_DIVERGE(1, 1))) <= l_855.x) && (*p_930->g_113)), 0x43L))) , &l_26);
    (*p_930->g_65) ^= (-7L);
    for (p_930->g_37 = 2; (p_930->g_37 > 57); p_930->g_37 = safe_add_func_uint32_t_u_u(p_930->g_37, 1))
    { /* block id: 354 */
        int32_t l_869 = 0x0EA944E0L;
        int64_t *l_883 = &p_930->g_230;
        int64_t **l_882 = &l_883;
        int16_t *l_899 = &l_670;
        uint32_t l_904 = 7UL;
        uint16_t *l_905[4][10][6] = {{{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0}},{{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0}},{{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0}},{{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0},{&p_930->g_245,(void*)0,&l_898[2][0],(void*)0,&p_930->g_37,(void*)0}}};
        int8_t *l_906 = (void*)0;
        int8_t *l_907 = (void*)0;
        int8_t *l_908 = (void*)0;
        int8_t *l_909 = (void*)0;
        int8_t *l_910[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t ***l_919[10] = {&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842,&l_842};
        int32_t *l_921 = (void*)0;
        int32_t *l_922[3];
        int8_t l_924[1][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_922[i] = &p_930->g_42;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_924[i][j] = 0x0FL;
        }
        if (l_869)
            break;
        (*p_930->g_65) = ((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(l_855.x, (safe_mod_func_int8_t_s_s((p_930->g_17.s4 = ((+((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_855.y ^ (((*l_843) = &p_930->g_230) == ((*l_882) = &p_930->g_230))), (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(255UL, 0xDAL)), ((VECTOR(uint8_t, 4))(((*l_26) |= ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_898[0][2], ((*l_899) &= p_930->g_744.z))), (!((p_930->g_140.w = (safe_lshift_func_uint16_t_u_s((p_930->g_119.sc = ((safe_mod_func_uint64_t_u_u((((void*)0 == &p_930->g_776) ^ l_869), GROUP_DIVERGE(2, 1))) != l_904)), p_930->g_42))) | p_930->g_744.x)))) >= l_898[1][9]), (*p_930->g_113), ((VECTOR(uint8_t, 2))(0x2EL)), ((VECTOR(uint8_t, 2))(0x22L)), 0UL, 1UL)).s37, ((VECTOR(uint8_t, 2))(248UL))))), ((VECTOR(uint8_t, 2))(4UL))))).odd), GROUP_DIVERGE(1, 1), 0UL, 0x54L)).even))).lo, l_10.s0)), 0x50A0270BL)), p_930->g_259.s4)), GROUP_DIVERGE(1, 1))) == l_869), p_930->g_753.s2)))), (*p_930->g_113))) < l_904) , p_930->g_118.x) >= p_930->g_776)) <= l_869)), p_930->g_655.s3)))) < GROUP_DIVERGE(2, 1)), p_930->g_259.s3)) < 0x787F41CD49F904CFL);
        (*p_930->g_65) = (((GROUP_DIVERGE(0, 1) & 65535UL) > (safe_add_func_int8_t_s_s(p_930->g_130.s6, ((((+((l_855.x , ((safe_mul_func_uint8_t_u_u(((*p_930->g_113) = (safe_rshift_func_int16_t_s_u(((*l_899) = (0x7CL & 0x25L)), ((*p_930->g_113) == ((l_842 = (l_862.x , p_930->g_917[7][0])) != (p_930->g_920 = &p_930->g_918)))))), 254UL)) , l_865)) > l_904)) , p_930->g_827.s9) ^ p_930->g_263.x) || 0x1138843BL)))) , l_869);
        ++l_926;
    }
    return l_929;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_647 p_930->g_113 p_930->g_44 p_930->g_655 p_930->g_256 p_930->g_67 p_930->g_142 p_930->g_65 p_930->g_485
 * writes: p_930->g_44 p_930->g_42
 */
uint64_t  func_4(int16_t  p_5, uint32_t  p_6, struct S0 * p_930)
{ /* block id: 268 */
    int64_t l_654 = (-1L);
    uint32_t *l_660 = &p_930->g_433[0][5][5];
    uint32_t *l_661 = &p_930->g_433[1][1][6];
    int64_t *l_662 = (void*)0;
    int32_t l_663 = (-1L);
    VECTOR(uint8_t, 16) l_664 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 252UL), 252UL), 252UL, 248UL, 252UL, (VECTOR(uint8_t, 2))(248UL, 252UL), (VECTOR(uint8_t, 2))(248UL, 252UL), 248UL, 252UL, 248UL, 252UL);
    int32_t *l_665 = &l_663;
    int64_t ***l_668 = (void*)0;
    int64_t **l_669 = &l_662;
    int i;
    l_663 = (((safe_mul_func_int8_t_s_s(p_5, (((+(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_930->g_647.sd5)).xyyxyxxy)).s6 != ((*p_930->g_113) ^= p_5))) && (safe_lshift_func_int8_t_s_s(1L, ((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(l_654, ((VECTOR(int32_t, 8))(p_930->g_655.s23406245)).s7)), p_930->g_256.s2)) <= ((((safe_lshift_func_uint16_t_u_s((p_6 , (safe_rshift_func_uint16_t_u_s(3UL, 14))), 13)) && (((p_6 | (l_660 == l_661)) >= 255UL) > FAKE_DIVERGE(p_930->local_1_offset, get_local_id(1), 10))) , &p_930->g_230) == l_662))))) < p_930->g_67))) != 1UL) , l_654);
    l_665 = (((VECTOR(uint8_t, 16))(l_664.sf89fc434d5006373)).s4 , &l_663);
    (*p_930->g_65) = (safe_mul_func_int8_t_s_s((l_661 != (void*)0), p_930->g_142.s5));
    l_669 = &l_662;
    return p_930->g_485.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_257
 * writes:
 */
uint64_t  func_7(int64_t  p_8, uint8_t  p_9, struct S0 * p_930)
{ /* block id: 265 */
    int32_t l_636 = 0x307B6F7AL;
    int32_t *l_637 = &l_636;
    int32_t *l_638 = &p_930->g_42;
    int32_t *l_639 = (void*)0;
    int32_t *l_640 = &l_636;
    int32_t *l_641[5];
    uint8_t l_642 = 0x07L;
    int i;
    for (i = 0; i < 5; i++)
        l_641[i] = (void*)0;
    ++l_642;
    return p_930->g_257.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_27 p_930->g_44 p_930->g_130 p_930->g_259 p_930->g_42 p_930->g_140 p_930->g_263 p_930->g_118 p_930->g_131 p_930->g_230 p_930->g_67 p_930->g_400 p_930->g_51 p_930->g_75 p_930->g_65 p_930->g_17 p_930->g_119 p_930->g_73 p_930->g_19 p_930->g_165 p_930->g_11 p_930->g_113 p_930->g_149 p_930->g_377 p_930->g_485 p_930->g_142 p_930->g_378 p_930->g_comm_values p_930->g_275 p_930->g_245 p_930->g_25 p_930->g_376 p_930->g_257 p_930->g_575 p_930->g_375 p_930->g_622 p_930->g_633
 * writes: p_930->g_27 p_930->g_44 p_930->g_comm_values p_930->g_42 p_930->g_25 p_930->g_140 p_930->g_51 p_930->g_67 p_930->g_241 p_930->g_400 p_930->g_65 p_930->g_166 p_930->g_119 p_930->g_230 p_930->g_37 p_930->g_149 p_930->g_245 p_930->g_257 p_930->g_581 p_930->g_633
 */
uint16_t  func_12(int32_t  p_13, uint32_t  p_14, int32_t  p_15, uint32_t  p_16, struct S0 * p_930)
{ /* block id: 6 */
    int32_t *l_47 = &p_930->g_42;
    int32_t l_50 = 0x612730C4L;
    uint8_t *l_184[9];
    VECTOR(int64_t, 4) l_336 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0CE7FD27E0605E98L), 0x0CE7FD27E0605E98L);
    int64_t *l_343 = &p_930->g_230;
    int64_t *l_344 = (void*)0;
    int64_t *l_345 = (void*)0;
    int64_t *l_346 = (void*)0;
    int64_t *l_347 = (void*)0;
    int16_t *l_348 = &p_930->g_25;
    int32_t *l_349 = &l_50;
    int8_t *l_353 = (void*)0;
    VECTOR(int8_t, 4) l_374 = (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 0x5FL), 0x5FL);
    VECTOR(int8_t, 2) l_379 = (VECTOR(int8_t, 2))(0x1DL, 0L);
    int32_t l_393[10] = {0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL,0x3751AEDEL};
    int32_t ***l_409 = (void*)0;
    VECTOR(uint8_t, 16) l_413 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x51L), 0x51L), 0x51L, 2UL, 0x51L, (VECTOR(uint8_t, 2))(2UL, 0x51L), (VECTOR(uint8_t, 2))(2UL, 0x51L), 2UL, 0x51L, 2UL, 0x51L);
    VECTOR(int64_t, 8) l_450 = (VECTOR(int64_t, 8))(0x78EB27C5EDAC6EBDL, (VECTOR(int64_t, 4))(0x78EB27C5EDAC6EBDL, (VECTOR(int64_t, 2))(0x78EB27C5EDAC6EBDL, 0x0914B6E423DDED81L), 0x0914B6E423DDED81L), 0x0914B6E423DDED81L, 0x78EB27C5EDAC6EBDL, 0x0914B6E423DDED81L);
    uint32_t l_456 = 0UL;
    int32_t l_504 = 0x45092A16L;
    uint8_t l_613 = 255UL;
    int32_t l_625 = 0x70C1C816L;
    int32_t *l_630 = &l_50;
    int32_t *l_631 = (void*)0;
    int32_t *l_632[4];
    int i;
    for (i = 0; i < 9; i++)
        l_184[i] = &p_930->g_27;
    for (i = 0; i < 4; i++)
        l_632[i] = &p_930->g_42;
    for (p_930->g_27 = 4; (p_930->g_27 != 34); p_930->g_27++)
    { /* block id: 9 */
        int32_t *l_41 = &p_930->g_42;
        int32_t **l_40 = &l_41;
        int32_t *l_43[8][3] = {{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42},{(void*)0,&p_930->g_42,&p_930->g_42}};
        VECTOR(int8_t, 8) l_76 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x39L), 0x39L), 0x39L, 1L, 0x39L);
        int i, j;
        (*l_40) = (void*)0;
        p_930->g_44--;
        (*l_40) = l_47;
    }
    (*l_349) |= (((((safe_sub_func_int8_t_s_s(l_336.z, ((p_930->g_140.w &= ((*l_348) = (safe_rshift_func_uint8_t_u_s(((*l_47) = (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((0x554C870BL >= p_930->g_130.s4) ^ 0x45639CB8L), ((p_15 != (&p_930->g_230 == ((~(!p_930->g_259.s3)) , l_343))) || (p_930->g_comm_values[p_930->tid] = 6L)))) , (*l_47)), (*l_47)))), p_13)))) , p_930->g_263.z))) , &l_184[6]) == (void*)0) == p_930->g_263.w) > 0x15F8ECFFL);
    if ((*l_47))
    { /* block id: 141 */
        int32_t l_352 = (-5L);
        int32_t **l_354[5];
        uint8_t **l_355 = (void*)0;
        uint8_t **l_356 = &l_184[7];
        uint32_t *l_366 = &p_930->g_51;
        VECTOR(int32_t, 4) l_371 = (VECTOR(int32_t, 4))(0x164675EDL, (VECTOR(int32_t, 2))(0x164675EDL, (-1L)), (-1L));
        int32_t l_388 = (-2L);
        int32_t l_395 = 0x0DDE7017L;
        uint32_t l_404 = 0xB439C47EL;
        uint32_t l_439 = 0x18F1D3E0L;
        VECTOR(int8_t, 16) l_510 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x7BL), 0x7BL), 0x7BL, 0x0CL, 0x7BL, (VECTOR(int8_t, 2))(0x0CL, 0x7BL), (VECTOR(int8_t, 2))(0x0CL, 0x7BL), 0x0CL, 0x7BL, 0x0CL, 0x7BL);
        int64_t l_518 = (-1L);
        VECTOR(int64_t, 8) l_578 = (VECTOR(int64_t, 8))(0x1BA59BFBAC284C97L, (VECTOR(int64_t, 4))(0x1BA59BFBAC284C97L, (VECTOR(int64_t, 2))(0x1BA59BFBAC284C97L, 0x2C5F92D5F432D7E7L), 0x2C5F92D5F432D7E7L), 0x2C5F92D5F432D7E7L, 0x1BA59BFBAC284C97L, 0x2C5F92D5F432D7E7L);
        int i;
        for (i = 0; i < 5; i++)
            l_354[i] = &l_47;
        (*l_349) ^= 0x43FA0F31L;
        if (((safe_sub_func_int16_t_s_s((l_352 && GROUP_DIVERGE(1, 1)), ((l_353 != (void*)0) & (((void*)0 != l_354[0]) , ((((*l_356) = (void*)0) == ((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u((((*l_366) = (safe_sub_func_uint64_t_u_u(p_930->g_118.y, (~(safe_rshift_func_uint16_t_u_s(((((VECTOR(int16_t, 2))((-8L), 0x0ED4L)).odd ^ (safe_rshift_func_int8_t_s_s((*l_47), 1))) > 0x60L), p_930->g_131.z)))))) , 0x0D215954L))), p_930->g_230)) , (void*)0)) != 0x6918L))))) | p_930->g_263.y))
        { /* block id: 145 */
            int32_t *l_382 = &l_50;
            int32_t l_389 = 7L;
            int32_t l_392 = 0x791D268BL;
            int32_t l_399[6] = {(-7L),0x5643F276L,(-7L),(-7L),0x5643F276L,(-7L)};
            int32_t ***l_411 = &l_354[0];
            uint8_t l_412 = 0x12L;
            int i;
            for (p_930->g_67 = 11; (p_930->g_67 != 15); ++p_930->g_67)
            { /* block id: 148 */
                int64_t *l_380 = &p_930->g_230;
                int32_t l_387 = 0L;
                int32_t l_391 = 0x2A68C8D2L;
                int32_t l_397 = 0x7C3C4E69L;
                int32_t l_398 = 0x114B24BAL;
                int16_t l_403 = 1L;
                uint64_t *l_407 = &p_930->g_241;
                uint64_t l_408 = 0x79917598C3E60566L;
                int32_t ****l_410 = &l_409;
                VECTOR(uint16_t, 4) l_426 = (VECTOR(uint16_t, 4))(0xCBD5L, (VECTOR(uint16_t, 2))(0xCBD5L, 0x13CAL), 0x13CAL);
                uint32_t *l_431 = (void*)0;
                uint32_t *l_432 = &p_930->g_433[1][1][6];
                uint64_t *l_436 = &l_408;
                int i;
                for (p_930->g_241 = 0; (p_930->g_241 > 9); ++p_930->g_241)
                { /* block id: 151 */
                    int32_t *l_381 = (void*)0;
                    int32_t l_384 = 0x101819E1L;
                    int32_t l_394 = 0x40E6BEA8L;
                    int32_t l_396 = 5L;
                    if (((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(6L, 1L)).xyxyxxxyxxyyyyxx, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_371.xw)).yxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x34131A00L, (((((+(p_930->g_44 >= p_930->g_25)) , (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x75483D43F8D3BAAFL, (p_930->g_142.s0 <= (((safe_lshift_func_uint16_t_u_s((*l_349), (((*l_366) = 1UL) , ((*l_348) &= p_930->g_140.w)))) < (!((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(0x13L, ((VECTOR(int8_t, 2))(l_374.wz)), 0x1DL)).wwyxzyyxyzzyzyxx, ((VECTOR(int8_t, 2))(p_930->g_375.yx)).yyxyxxxyyyxyyyxx))).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(p_930->g_376.xxxxxxyyxyxyyxyx)).s99, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(p_930->g_377.yx)).xxxxyxxy, ((VECTOR(int8_t, 16))(p_930->g_378.s3231526201004255)).odd))).s52))), 9L, 0x1FL)).wwwwxwxz, ((VECTOR(int8_t, 4))(l_379.yyyy)).yyzyyywx))).s02)).yxxyyyyx))), (-1L), 0x64L, 6L, ((&p_930->g_230 == ((*l_47) , l_380)) < p_930->g_262.s7), 0x1CL, 0x08L, (-8L))).s76)).xxyxxxyxxxxyyyyy)).s3)) & p_14)), 0x81A6F64A17665F87L, 1UL)).yzzzyzxx)).s7 | 18446744073709551609UL)) <= p_15) ^ p_930->g_196.s6) < p_15), p_15, 1L, ((VECTOR(int32_t, 2))((-9L))), 1L, 0x271DF8FAL)).s17)).yyyy))).yyxyxyzzwywzzxww))).s35)).xyxy)).wxywxxwxxzzxxwyw, ((VECTOR(int32_t, 16))((-1L)))))).sb)
                    { /* block id: 154 */
                        l_382 = l_381;
                    }
                    else
                    { /* block id: 156 */
                        int64_t l_383 = 0L;
                        int32_t l_385 = 1L;
                        int32_t l_386 = 0x3FD56A67L;
                        int32_t l_390[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_390[i] = 0L;
                        --p_930->g_400;
                    }
                    l_404++;
                }
                l_408 |= (((*l_407) = (p_930->g_51 , (p_930->g_230 < ((VECTOR(int64_t, 4))(1L, 0x4434E24FD4D226B8L, 0x64A4A42AF7E8750BL, 6L)).z))) == p_930->g_75.se);
                l_382 = func_70((&p_930->g_162[0][0][2] != (l_411 = ((*l_410) = l_409))), (l_412 , ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(0x7FL, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_413.se5a4)).zxwxzzzzxwxxxywz)).s95, (uint8_t)(safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), ((*l_47) = (safe_rshift_func_uint16_t_u_s(((((*l_436) = ((*l_407) = (safe_sub_func_uint64_t_u_u((((((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL)).even > ((((*p_930->g_65) == (((-3L) >= 1L) < (safe_add_func_int8_t_s_s(((((VECTOR(uint16_t, 2))(l_426.xw)).lo ^ p_930->g_37) || (((*p_930->g_113) = (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x314471E7L, ((*l_432)--))), 14))) >= p_13)), FAKE_DIVERGE(p_930->global_2_offset, get_global_id(2), 10))))) , &p_930->g_241) != (void*)0)) >= 0x12L) == 0x498A7C6BF5DFE2C9L), p_930->g_37)))) , (*l_349)) | p_13), 9))))), 0UL))))).xxyy)), 0x8DL, ((VECTOR(uint8_t, 2))(1UL)), 3UL)).s65, ((VECTOR(uint8_t, 2))(0x6CL))))), 255UL)).even, ((VECTOR(uint8_t, 2))(0x2FL))))).xxyyxxyyxyyyyyyx, ((VECTOR(uint8_t, 16))(1UL))))).s5), p_930);
            }
            for (p_930->g_230 = 8; (p_930->g_230 > 12); ++p_930->g_230)
            { /* block id: 174 */
                return l_439;
            }
        }
        else
        { /* block id: 177 */
            int8_t *l_444 = (void*)0;
            int8_t *l_445 = (void*)0;
            int8_t *l_446 = (void*)0;
            int8_t *l_447 = (void*)0;
            int8_t *l_448[3][6][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_449 = 0x5C50B2DEL;
            int32_t ***l_451 = (void*)0;
            uint32_t *l_468 = (void*)0;
            int32_t l_509 = 6L;
            uint8_t ***l_519 = &l_356;
            uint32_t l_523 = 0x1B85CAEAL;
            uint64_t *l_537 = (void*)0;
            int32_t l_538 = 0x14DB3E95L;
            uint32_t l_539 = 0xF8F80373L;
            int32_t *l_582 = &p_930->g_42;
            int i, j, k;
            if (((p_14 , (safe_lshift_func_int8_t_s_u(((FAKE_DIVERGE(p_930->local_1_offset, get_local_id(1), 10) < ((safe_mul_func_int16_t_s_s(p_930->g_130.s9, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((*l_348) = (((0x08L & (l_449 = p_930->g_73.s2)) & ((VECTOR(int64_t, 2))(l_450.s37)).hi) ^ (((&p_930->g_65 == &p_930->g_65) == (l_451 == l_409)) && (safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((*p_930->g_113) |= p_13), 1UL)), (-2L)))))), ((VECTOR(int16_t, 2))(4L)), 0x7B92L)), 0L, ((VECTOR(int16_t, 2))(0x3AD4L)), (-1L))).s7 != p_14) < 9UL))) <= p_13)) , p_930->g_75.sf), l_456))) && l_449))
            { /* block id: 181 */
                uint16_t *l_457 = &p_930->g_37;
                int32_t ***l_460 = &l_354[0];
                uint32_t **l_467 = &l_366;
                uint32_t *l_469[8] = {&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6],&p_930->g_433[1][1][6]};
                int i;
                (*l_349) = ((*p_930->g_65) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x28156B48L, ((p_16 = (((*l_457) = p_16) >= ((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x54L, 0x5FL)), 0x34L, 6L)).y & GROUP_DIVERGE(1, 1)), (((*l_467) = l_349) == l_468))) <= FAKE_DIVERGE(p_930->global_2_offset, get_global_id(2), 10)))) & 0L), 0x181DB104L, ((VECTOR(int32_t, 8))((-3L))), 0x4C8260ABL, 0x4D47F1AAL, ((VECTOR(int32_t, 2))(1L)), 0x04DBAA6AL)).s9f)).even);
            }
            else
            { /* block id: 188 */
                VECTOR(uint64_t, 8) l_486 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL);
                VECTOR(uint32_t, 4) l_505 = (VECTOR(uint32_t, 4))(0x759A9922L, (VECTOR(uint32_t, 2))(0x759A9922L, 0xE6C2C894L), 0xE6C2C894L);
                VECTOR(int8_t, 16) l_507 = (VECTOR(int8_t, 16))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, (-2L)), (-2L)), (-2L), 0x77L, (-2L), (VECTOR(int8_t, 2))(0x77L, (-2L)), (VECTOR(int8_t, 2))(0x77L, (-2L)), 0x77L, (-2L), 0x77L, (-2L));
                VECTOR(int64_t, 2) l_514 = (VECTOR(int64_t, 2))((-1L), 0x2EC80323EA4B3E93L);
                int32_t *l_520 = &p_930->g_42;
                int i;
                if ((*l_47))
                { /* block id: 189 */
                    VECTOR(int32_t, 16) l_482 = (VECTOR(int32_t, 16))(0x1F471096L, (VECTOR(int32_t, 4))(0x1F471096L, (VECTOR(int32_t, 2))(0x1F471096L, (-1L)), (-1L)), (-1L), 0x1F471096L, (-1L), (VECTOR(int32_t, 2))(0x1F471096L, (-1L)), (VECTOR(int32_t, 2))(0x1F471096L, (-1L)), 0x1F471096L, (-1L), 0x1F471096L, (-1L));
                    int i;
                    for (p_930->g_149 = 0; (p_930->g_149 != 45); p_930->g_149 = safe_add_func_uint8_t_u_u(p_930->g_149, 1))
                    { /* block id: 192 */
                        int32_t l_491 = 0L;
                        int64_t *l_494 = (void*)0;
                        int64_t *l_495[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_495[i] = (void*)0;
                        (*p_930->g_65) = (p_14 > (safe_div_func_uint8_t_u_u(0xD0L, (safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(p_930->g_377.x, ((((safe_rshift_func_int16_t_s_u((+(safe_add_func_int16_t_s_s(((((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_482.s03)).yxyyxyxxxxyyxyxy)).s64a9, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((((*l_47) >= (!((VECTOR(int8_t, 4))(p_930->g_485.s2445)).y)) > (((void*)0 == &p_930->g_67) == ((VECTOR(uint64_t, 2))(l_486.s30)).lo)), ((safe_mul_func_uint16_t_u_u(p_930->g_142.sc, (safe_sub_func_int64_t_s_s(l_491, (p_930->g_comm_values[p_930->tid] |= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x13A5L, (((VECTOR(uint32_t, 2))(0x4874C2CAL, 0x6F827A2DL)).hi <= (((*p_930->g_113) && p_14) , (-1L))), 1UL, ((VECTOR(uint16_t, 4))(0x161BL)), 0x9511L)).s4, p_930->g_378.s7))))))) != p_14), 1L, ((VECTOR(int32_t, 4))(0x226214C6L)), (-1L))).s0122305703371046)).sfd03))).w ^ (*p_930->g_65)) > p_16), p_16))), p_13)) < 1UL) < p_13) && 2L))) < p_930->g_67), p_930->g_485.s1)))));
                    }
                }
                else
                { /* block id: 196 */
                    VECTOR(int32_t, 8) l_506 = (VECTOR(int32_t, 8))(0x7BCB1C6FL, (VECTOR(int32_t, 4))(0x7BCB1C6FL, (VECTOR(int32_t, 2))(0x7BCB1C6FL, 0L), 0L), 0L, 0x7BCB1C6FL, 0L);
                    int32_t l_508 = 1L;
                    VECTOR(uint16_t, 16) l_513 = (VECTOR(uint16_t, 16))(0x7E02L, (VECTOR(uint16_t, 4))(0x7E02L, (VECTOR(uint16_t, 2))(0x7E02L, 0xF249L), 0xF249L), 0xF249L, 0x7E02L, 0xF249L, (VECTOR(uint16_t, 2))(0x7E02L, 0xF249L), (VECTOR(uint16_t, 2))(0x7E02L, 0xF249L), 0x7E02L, 0xF249L, 0x7E02L, 0xF249L);
                    int16_t *l_515 = (void*)0;
                    int32_t l_516 = 6L;
                    int32_t *l_517 = &l_352;
                    int i;
                    l_349 = (void*)0;
                    l_509 = (((((~((*l_47) = (safe_add_func_int32_t_s_s(((safe_div_func_int8_t_s_s(0x19L, (safe_rshift_func_int16_t_s_s((0x3290EFD1L && ((((l_504 >= ((+(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(l_505.wxzwwyzwxwxzwxww)).s94, ((VECTOR(uint32_t, 2))(0UL, 1UL)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 16))(p_15, ((VECTOR(int32_t, 4))(l_506.s5633)), ((*l_517) |= ((((VECTOR(int32_t, 8))((0x59L && (((0xDDL || ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_507.s733fbc13)).even, ((VECTOR(int8_t, 8))(0x67L, (-4L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(1L, 0x72L)))), ((VECTOR(int8_t, 4))((l_508 = p_930->g_75.sc), l_509, 0x22L, 2L)))).even, ((VECTOR(int8_t, 4))(l_510.s1620))))).wzxyyzxx)).s1) != ((l_516 = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_513.s2573088e6bc878c7)).sd0)).hi, (((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(l_514.xyxy)).wxyxyyww))).s47)).xxyyxyxxyxxyyxyx))).s5a36)).z , l_515) == &p_930->g_25) & 18446744073709551615UL) ^ 1L) ^ l_513.sd)))) , p_930->g_275)) || p_930->g_142.se)), ((VECTOR(int32_t, 4))((-2L))), 0x453FBAF2L, 0x52005FD1L, (-1L))).s5 , 0xC7F7L) >= p_930->g_19.s7)), ((VECTOR(int32_t, 8))(0x2C14FB73L)), (-10L), 0x7C6649B9L)).sf8, ((VECTOR(int32_t, 2))(0x060F2886L))))), 4294967290UL, p_13, 0x425838CCL, 0xDDBF1B76L, 0x7FC2B122L, 0xB421DCC3L)))).s1263171203375520)).s65, ((VECTOR(uint32_t, 2))(4294967291UL))))).yyxyxyxx)), ((VECTOR(uint32_t, 2))(0x431F9062L)), l_505.z, p_930->g_118.y, 1UL, ((VECTOR(uint32_t, 2))(4294967295UL)), 4294967295UL)).s3b))).xyyxxyxyyyxyxxxx, ((VECTOR(uint32_t, 16))(0x9BC4E993L))))).s1 , p_14)) == p_13)) > 18446744073709551615UL) & p_15) == l_518)), l_505.w)))) == 0x99L), FAKE_DIVERGE(p_930->local_0_offset, get_local_id(0), 10))))) , 0xCDL) | l_486.s7) , (void*)0) == l_519);
                }
                (*l_520) |= (((void*)0 == p_930->g_113) & ((void*)0 == l_520));
                l_520 = func_54(((safe_sub_func_int64_t_s_s(p_930->g_51, p_930->g_75.s1)) , p_930->g_377.y), &p_930->g_65, l_523, p_930);
            }
            l_47 = &l_50;
            for (p_930->g_245 = (-21); (p_930->g_245 > 24); p_930->g_245 = safe_add_func_uint16_t_u_u(p_930->g_245, 4))
            { /* block id: 210 */
                uint32_t l_534 = 1UL;
                uint32_t **l_579 = &l_468;
                int64_t *l_580[8][10] = {{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518},{(void*)0,(void*)0,&l_518,(void*)0,(void*)0,(void*)0,&l_518,(void*)0,(void*)0,&l_518}};
                VECTOR(int32_t, 2) l_585 = (VECTOR(int32_t, 2))((-5L), 1L);
                int i, j;
                (*l_47) ^= (((VECTOR(int8_t, 16))((l_539 &= (p_930->g_130.s4 <= ((*p_930->g_65) > (safe_mod_func_uint8_t_u_u((*p_930->g_113), (p_930->g_257.y |= ((safe_div_func_int16_t_s_s(((*l_348) = (safe_mul_func_uint8_t_u_u(((p_13 < (((safe_lshift_func_int16_t_s_s(p_930->g_25, 10)) | l_534) != (0x313F0C2BL & p_14))) && (safe_mod_func_uint8_t_u_u(((l_347 != l_537) | l_538), (-2L)))), p_14))), p_930->g_376.x)) , 254UL))))))), 0x52L, 1L, ((VECTOR(int8_t, 8))(0L)), 0x3FL, ((VECTOR(int8_t, 4))(0x75L)))).s5 && p_14);
                l_582 = func_70((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), ((safe_mod_func_uint8_t_u_u(p_14, (~((VECTOR(uint8_t, 2))(246UL, 1UL)).hi))) & (3L == ((safe_lshift_func_uint8_t_u_s((p_14 >= ((((safe_sub_func_int8_t_s_s(((+1L) == p_14), (safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(((p_930->g_581 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))((p_930->g_comm_values[p_930->tid] |= ((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(0x4FA77B0AL, (((safe_rshift_func_int8_t_s_s(l_534, 7)) < (safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_930->g_575.s62265102)).s4, (!(safe_mod_func_int32_t_s_s((l_449 &= ((5L == ((((VECTOR(int64_t, 16))(l_578.s5403144233630770)).s2 , l_579) != &l_468)) || l_534)), p_930->g_42))))), 0x54BEEAABL))))) , p_930->g_75.s9))), p_13)) , p_13)), 0x03A7D59A113D8571L, 1L, 0x7B2EEA22F1768314L)), ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x5C7B2A57E7198275L))))))), (-1L), ((VECTOR(int64_t, 2))(0x53CCA6ECCDDF4C33L)), (-7L))).s5163770423034044)))).sa04d))), p_13, 9L, 0x763A0B0ABFF9812DL, 1L)).s4) ^ (-6L)), p_930->g_259.s1)) , p_930->g_257.y), GROUP_DIVERGE(1, 1))), p_930->g_275)), p_930->g_275)))) , 0x64L) & p_13) == 255UL)), 3)) & p_930->g_375.x))))), p_930->g_149)) >= p_13) ^ 3L) & p_13) && 0x05F82151L), p_13)), 0x4003L)) < (*p_930->g_65)) , 18446744073709551615UL), p_15, p_930);
                for (l_404 = 10; (l_404 == 18); l_404 = safe_add_func_uint32_t_u_u(l_404, 4))
                { /* block id: 221 */
                    int64_t l_586 = 0x7CDD15BC1E5AD07CL;
                    l_586 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_585.xyxx)).lo)).lo;
                }
                if (p_14)
                    continue;
            }
        }
    }
    else
    { /* block id: 227 */
        int32_t l_594 = 1L;
        int32_t l_597[5];
        int8_t l_603[2][4][7] = {{{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)}},{{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)},{(-2L),0x10L,(-1L),(-9L),(-1L),0x10L,(-2L)}}};
        int32_t *l_618 = &l_597[1];
        int32_t *l_619 = &l_50;
        uint8_t l_626 = 249UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_597[i] = 0x15CA763FL;
        for (l_456 = 9; (l_456 != 45); ++l_456)
        { /* block id: 230 */
            int16_t l_595 = (-4L);
            int32_t l_596 = 0L;
            VECTOR(int32_t, 4) l_604 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x1C14D8D5L), 0x1C14D8D5L);
            uint8_t l_606 = 250UL;
            int i;
            for (p_930->g_51 = 0; (p_930->g_51 == 48); p_930->g_51++)
            { /* block id: 233 */
                uint16_t l_598[1];
                int32_t *l_601 = &l_597[2];
                int32_t *l_602[8][6][5] = {{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0},{(void*)0,&l_504,(void*)0,(void*)0,(void*)0}}};
                int32_t l_605 = 6L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_598[i] = 65531UL;
                for (p_13 = 0; (p_13 >= (-9)); p_13 = safe_sub_func_uint8_t_u_u(p_13, 9))
                { /* block id: 236 */
                    int32_t *l_593[4] = {&l_50,&l_50,&l_50,&l_50};
                    int i;
                    --l_598[0];
                    if (l_597[1])
                        continue;
                }
                --l_606;
                if (p_14)
                    break;
            }
            for (p_930->g_27 = (-17); (p_930->g_27 >= 26); p_930->g_27++)
            { /* block id: 245 */
                int8_t l_611 = 0L;
                int32_t *l_612[8] = {&l_393[9],&l_393[9],&l_393[9],&l_393[9],&l_393[9],&l_393[9],&l_393[9],&l_393[9]};
                int i;
                --l_613;
            }
            l_604.z ^= ((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xF2L, 3UL)))).xyxx)).y || p_930->g_51) , (safe_mod_func_int64_t_s_s(p_13, 1UL))) || (*l_47)) , ((*p_930->g_65) &= p_16));
        }
        l_618 = (void*)0;
        l_619 = (l_618 = &l_597[1]);
        if ((safe_mul_func_int16_t_s_s(((*l_348) ^= (0x7A03L >= p_13)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_930->g_622.xx)))).hi)))
        { /* block id: 255 */
            int32_t l_623 = 0x764BB0D0L;
            int32_t *l_624[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_629 = &l_47;
            int i;
            ++l_626;
            (*l_629) = (l_624[3] = &l_597[3]);
        }
        else
        { /* block id: 259 */
            (*p_930->g_65) = (*l_619);
        }
    }
    p_930->g_633++;
    return p_930->g_575.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_188 p_930->g_196 p_930->g_65 p_930->g_42 p_930->g_118 p_930->g_149 p_930->g_17 p_930->g_119 p_930->g_131 p_930->g_73 p_930->g_19 p_930->g_165 p_930->g_44 p_930->g_11 p_930->g_51 p_930->g_245 p_930->g_67 p_930->g_256 p_930->g_257 p_930->g_259 p_930->g_262 p_930->g_263 p_930->g_275
 * writes: p_930->g_64 p_930->g_149 p_930->g_42 p_930->g_65 p_930->g_25 p_930->g_166 p_930->g_119 p_930->g_51 p_930->g_230 p_930->g_241 p_930->g_142 p_930->g_140
 */
int32_t * func_54(uint16_t  p_55, int32_t ** p_56, int32_t  p_57, struct S0 * p_930)
{ /* block id: 47 */
    int32_t ***l_191 = (void*)0;
    int32_t ***l_192 = &p_930->g_64[4][2];
    int32_t **l_193 = &p_930->g_65;
    uint64_t *l_197 = &p_930->g_149;
    int32_t l_198[6];
    int32_t *l_199 = &l_198[5];
    int32_t *l_200[8];
    uint64_t l_201 = 8UL;
    VECTOR(uint16_t, 2) l_219 = (VECTOR(uint16_t, 2))(0x6B23L, 65535UL);
    int8_t *l_231 = (void*)0;
    VECTOR(int32_t, 16) l_232 = (VECTOR(int32_t, 16))(0x271F3DFEL, (VECTOR(int32_t, 4))(0x271F3DFEL, (VECTOR(int32_t, 2))(0x271F3DFEL, 0x6592466DL), 0x6592466DL), 0x6592466DL, 0x271F3DFEL, 0x6592466DL, (VECTOR(int32_t, 2))(0x271F3DFEL, 0x6592466DL), (VECTOR(int32_t, 2))(0x271F3DFEL, 0x6592466DL), 0x271F3DFEL, 0x6592466DL, 0x271F3DFEL, 0x6592466DL);
    VECTOR(uint8_t, 16) l_258 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF3L), 0xF3L), 0xF3L, 0UL, 0xF3L, (VECTOR(uint8_t, 2))(0UL, 0xF3L), (VECTOR(uint8_t, 2))(0UL, 0xF3L), 0UL, 0xF3L, 0UL, 0xF3L);
    VECTOR(uint8_t, 2) l_261 = (VECTOR(uint8_t, 2))(0xFAL, 0UL);
    int i;
    for (i = 0; i < 6; i++)
        l_198[i] = 1L;
    for (i = 0; i < 8; i++)
        l_200[i] = &l_198[1];
    (*l_193) = func_70(((*l_197) &= ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_930->g_188.yyzy)), 0xE211D2C571BFB598L, 18446744073709551607UL, 0UL, ((VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551610UL)), (safe_rshift_func_int8_t_s_u((((((((*l_192) = (p_56 = p_56)) == l_193) | p_55) || (safe_add_func_int16_t_s_s(((((((((VECTOR(int16_t, 4))(p_930->g_196.s2510)).x == FAKE_DIVERGE(p_930->group_1_offset, get_group_id(1), 10)) ^ 0L) ^ (65526UL > ((void*)0 == &p_930->g_25))) | (p_57 ^ p_55)) < 0x84D75D99L) ^ 0UL), 65534UL))) & GROUP_DIVERGE(1, 1)) , (**l_193)), FAKE_DIVERGE(p_930->group_0_offset, get_group_id(0), 10))), 0x6319326E76953BF8L, p_57, 0xD4BA92695958FE57L, ((VECTOR(uint64_t, 2))(0xA650ABEB8739EEF9L)), 0x82CD3DBA2F45142BL)).s981a, (uint64_t)p_930->g_118.x, (uint64_t)FAKE_DIVERGE(p_930->global_2_offset, get_global_id(2), 10)))).x), p_57, p_930);
    --l_201;
    if ((atomic_inc(&p_930->l_atomic_input[8]) == 9))
    { /* block id: 54 */
        int32_t *l_204 = (void*)0;
        int32_t l_206[9][10] = {{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL},{0x2DBA5B90L,0L,0x7DD12565L,1L,0x470344B6L,0x3DC60BFEL,1L,(-10L),4L,0x2380030FL}};
        int32_t *l_205 = &l_206[4][0];
        int i, j;
        l_205 = l_204;
        unsigned int result = 0;
        int l_206_i0, l_206_i1;
        for (l_206_i0 = 0; l_206_i0 < 9; l_206_i0++) {
            for (l_206_i1 = 0; l_206_i1 < 10; l_206_i1++) {
                result += l_206[l_206_i0][l_206_i1];
            }
        }
        atomic_add(&p_930->l_special_values[8], result);
    }
    else
    { /* block id: 56 */
        (1 + 1);
    }
    for (p_930->g_51 = 0; (p_930->g_51 < 46); ++p_930->g_51)
    { /* block id: 61 */
        uint32_t l_242 = 0xC309F253L;
        int32_t l_244 = (-1L);
        int32_t l_251 = 0x5A0B546CL;
        VECTOR(uint64_t, 2) l_255 = (VECTOR(uint64_t, 2))(0x5E930BEB40F5E0B1L, 6UL);
        int i;
        for (p_55 = 0; (p_55 == 44); p_55 = safe_add_func_uint16_t_u_u(p_55, 6))
        { /* block id: 64 */
            uint32_t l_220 = 6UL;
            uint8_t *l_266 = (void*)0;
            if ((**p_56))
            { /* block id: 65 */
                if ((**p_56))
                    break;
            }
            else
            { /* block id: 67 */
                int64_t *l_229 = &p_930->g_230;
                int8_t *l_233 = (void*)0;
                uint32_t l_240 = 0x2DDEA36BL;
                int64_t l_243[7];
                int16_t *l_246 = (void*)0;
                int16_t *l_247 = (void*)0;
                int16_t *l_248 = (void*)0;
                int16_t *l_249[3];
                uint32_t *l_250 = &l_240;
                int i;
                for (i = 0; i < 7; i++)
                    l_243[i] = 0x6929111879B9E345L;
                for (i = 0; i < 3; i++)
                    l_249[i] = (void*)0;
                l_251 = (safe_div_func_uint32_t_u_u(((*l_250) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(l_219.xyxyyxxy)).s1, (l_220 > ((*l_199) &= (4294967295UL != ((VECTOR(int32_t, 16))((-1L), ((p_55 , (255UL >= ((VECTOR(uint8_t, 8))((safe_sub_func_int16_t_s_s((p_930->g_140.x = ((safe_sub_func_int16_t_s_s((((p_930->g_142.sb = (!(safe_lshift_func_int8_t_s_u(((((((*l_229) = (safe_lshift_func_uint8_t_u_u(0x88L, 7))) , l_231) == (((VECTOR(int32_t, 16))(l_232.s64f9ab17aefa5c7a)).sf , l_233)) ^ (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((p_930->g_241 = (+(l_240 , l_220))) , p_55) | l_242), p_57)), l_240)) ^ l_240), 2))) == l_243[1]), l_244)))) ^ 0x7F6CL) == 0x1FL), p_930->g_245)) | p_930->g_67)), p_57)), l_242, 250UL, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(1UL)), 0x41L)).s7)) , 1L), ((VECTOR(int32_t, 4))(0L)), 0x6B6214BEL, (**p_56), ((VECTOR(int32_t, 4))(0x547FC5B3L)), 0x576E49E5L, (**p_56), 0x11345061L, (-1L))).s6))))) != p_930->g_17.s5), p_57)), 9))), (**p_56)));
                if ((**p_56))
                    break;
            }
            for (p_57 = 16; (p_57 < (-27)); p_57 = safe_sub_func_int8_t_s_s(p_57, 9))
            { /* block id: 79 */
                VECTOR(uint64_t, 2) l_254 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
                VECTOR(uint8_t, 8) l_260 = (VECTOR(uint8_t, 8))(0x1EL, (VECTOR(uint8_t, 4))(0x1EL, (VECTOR(uint8_t, 2))(0x1EL, 254UL), 254UL), 254UL, 0x1EL, 254UL);
                int8_t *l_267 = (void*)0;
                int8_t *l_268 = (void*)0;
                int8_t *l_269 = (void*)0;
                int8_t *l_270 = (void*)0;
                int8_t *l_271[3];
                int32_t l_272 = 0x26B48D14L;
                int i;
                for (i = 0; i < 3; i++)
                    l_271[i] = (void*)0;
                (*l_199) = ((1UL > (((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(l_254.xxxyyxyxyxyxxxyx)).s9459, ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_255.xy)).yyyy)).xyxzzwxx, ((VECTOR(uint64_t, 16))(p_930->g_256.s1031036171552466)).lo))).odd))).y < (((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(p_930->g_257.ywwxywzxwyywyyzz)), ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_258.s2e9d)).odd)).yxyy))).zxwwyxyywxywyyww, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(p_930->g_259.sfa04edcd)), ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_260.s0104)))).lo, (uint8_t)1UL))).xyxyyyyy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(250UL, 0x33L)).xxyxyyyx, ((VECTOR(uint8_t, 16))(l_261.xyyxxyxxxyxxyyxx)).lo))))))))).s7374141220300753, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_930->g_262.s0563)), ((VECTOR(uint8_t, 2))(p_930->g_263.zz)), 255UL, 255UL)).s6732777535415625))).sd201, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x7EL, 255UL, ((VECTOR(uint8_t, 2))(2UL, 5UL)), ((~p_930->g_196.s5) != (l_220 && (safe_rshift_func_int16_t_s_u(((l_272 |= (((*l_197) = (l_266 != l_266)) != 0UL)) < p_930->g_42), ((safe_mul_func_int8_t_s_s((l_220 ^ 0L), p_55)) , l_251))))), ((VECTOR(uint8_t, 4))(255UL)), 7UL, p_930->g_275, ((VECTOR(uint8_t, 2))(253UL)), GROUP_DIVERGE(1, 1), 1UL, 246UL)).lo)).even, ((VECTOR(uint8_t, 4))(1UL))))).ywzwwywwwzxxywww))).sa < p_57))) ^ 2UL);
            }
            (*p_56) = (*p_56);
        }
        if ((atomic_inc(&p_930->l_atomic_input[39]) == 7))
        { /* block id: 87 */
            VECTOR(int32_t, 4) l_276 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2A011E8AL), 0x2A011E8AL);
            int8_t l_277 = 0x1AL;
            VECTOR(uint16_t, 2) l_278 = (VECTOR(uint16_t, 2))(0x5DC7L, 1UL);
            VECTOR(uint16_t, 16) l_279 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0xD556L), 0xD556L), 0xD556L, 9UL, 0xD556L, (VECTOR(uint16_t, 2))(9UL, 0xD556L), (VECTOR(uint16_t, 2))(9UL, 0xD556L), 9UL, 0xD556L, 9UL, 0xD556L);
            int32_t l_280 = 0x099C41B8L;
            VECTOR(uint16_t, 8) l_281 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x0597L), 0x0597L), 0x0597L, 5UL, 0x0597L);
            VECTOR(uint16_t, 4) l_282 = (VECTOR(uint16_t, 4))(0x91F8L, (VECTOR(uint16_t, 2))(0x91F8L, 0x704DL), 0x704DL);
            int8_t l_283 = 0L;
            VECTOR(uint16_t, 4) l_284 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xCF56L), 0xCF56L);
            VECTOR(uint16_t, 2) l_285 = (VECTOR(uint16_t, 2))(0UL, 0xD653L);
            VECTOR(uint16_t, 2) l_286 = (VECTOR(uint16_t, 2))(0x91ECL, 2UL);
            VECTOR(uint16_t, 4) l_287 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x239CL), 0x239CL);
            VECTOR(uint16_t, 16) l_288 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65534UL), 65534UL, 65535UL, 65534UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65535UL, 65534UL, 65535UL, 65534UL);
            VECTOR(uint16_t, 8) l_289 = (VECTOR(uint16_t, 8))(0x8802L, (VECTOR(uint16_t, 4))(0x8802L, (VECTOR(uint16_t, 2))(0x8802L, 0xF155L), 0xF155L), 0xF155L, 0x8802L, 0xF155L);
            uint32_t l_290[9][4][7] = {{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}},{{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}}};
            int16_t l_291 = 0x220BL;
            VECTOR(uint16_t, 16) l_292 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint16_t, 2))(3UL, 0UL), (VECTOR(uint16_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
            int32_t l_293 = 1L;
            VECTOR(uint16_t, 4) l_294 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65533UL), 65533UL);
            int32_t l_295 = (-1L);
            int8_t l_296 = 0x3DL;
            int64_t l_297 = 0x0D91F2BCD1FA6C8DL;
            int16_t l_298 = 0x70E8L;
            uint16_t l_299 = 0x291FL;
            uint32_t l_300 = 0UL;
            uint32_t l_301 = 4294967295UL;
            uint32_t l_302 = 2UL;
            uint32_t l_328 = 2UL;
            int32_t l_329 = 0x66E13537L;
            uint64_t l_330 = 0UL;
            uint16_t l_331 = 65534UL;
            uint32_t l_332 = 0x572CC66FL;
            VECTOR(int32_t, 4) l_333 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x4109FD41L), 0x4109FD41L);
            int i, j, k;
            if (((l_302 |= ((l_300 = (l_299 = (l_298 = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_276.wywyzxyzwwxxwyyw)).scf)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))((((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(65535UL, 0xBF58L, ((VECTOR(uint16_t, 16))(l_277, ((VECTOR(uint16_t, 2))(l_278.xx)), 0x68A5L, ((VECTOR(uint16_t, 2))(l_279.s80)), l_280, 0x3A0BL, 7UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_281.s4256)))), ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x75BBL, 0xED1CL, 0x14A7L, 65535UL, 65529UL, 1UL, 65535UL, 0x9BC5L)).s51)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x45E2L, 65535UL)).yyxxxxxxxyxyyxxx)).s8b08)).even)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_282.yywyyzzz)))))), ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(0xBE51L, 65531UL)).yxyyxxxyyxyyyxxx))).s1, 0xD125L, 3UL)).s163c, ((VECTOR(uint16_t, 16))(2UL, 0x2C42L, 0UL, l_283, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x4E21L, 0UL)).yyyy)).xwywxxxw)), ((VECTOR(uint16_t, 8))(l_284.yzzxwwzw)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_285.yxyxxxyxxyyxxxxx)).odd)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 16))(l_286.xyxxyyxxxxxyxyyy)).s836b, ((VECTOR(uint16_t, 2))(0x01A6L, 0x0F66L)).yyxy))).z, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(l_287.wxxwwywywzyxzxyy)).sd128))), 0x382AL, 0x0D30L)).s4347071643426206)).sd430)), 0UL, ((VECTOR(uint16_t, 2))(l_288.s91)), 0x8AA6L)).odd))), ((VECTOR(uint16_t, 4))(0x22E6L, ((VECTOR(uint16_t, 2))(l_289.s76)), 5UL)))).sd5cf))).even, (uint16_t)GROUP_DIVERGE(2, 1), (uint16_t)l_290[0][3][5]))), 0x3DA5L)).s8, 65531UL, (l_293 = (l_291 , ((VECTOR(uint16_t, 16))(l_292.s25d9c955408f6a8a)).s6)), ((VECTOR(uint16_t, 2))(l_294.wx)), 0UL)).s63)).xyyxxxyx))).s6 , (l_295 = 0x532267C3L)), 0L, l_296, l_297, 0x2A162045L, ((VECTOR(int32_t, 8))(1L)), 0x7407F640L, 0x6E8977E2L, 0L)).s2baf, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(9L))))).odd)), ((VECTOR(int32_t, 2))(0x72C54B80L))))).lo))) , l_301)) , 0x1CA02910L))
            { /* block id: 94 */
                uint16_t l_303 = 0xF619L;
                int32_t l_304[4][4][9] = {{{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L}},{{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L}},{{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L}},{{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L},{(-1L),0x749EA9D4L,0x08B69E5AL,0x52836525L,0x235B8130L,(-4L),0x50620B81L,1L,0x50620B81L}}};
                int32_t l_306 = 0x51E0E351L;
                int32_t *l_305 = &l_306;
                uint32_t l_307[9][6][4] = {{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}},{{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL},{0x2F93B749L,0UL,4UL,0x04C0DA5FL}}};
                int i, j, k;
                l_295 &= 0x64BD269EL;
                l_305 = ((((l_291 ^= l_303) , 0x801A0375L) , l_304[3][0][7]) , (void*)0);
                if (l_307[7][5][0])
                { /* block id: 98 */
                    uint16_t l_308 = 0x8523L;
                    l_295 &= l_308;
                }
                else
                { /* block id: 100 */
                    int32_t l_309 = 0L;
                    VECTOR(int32_t, 16) l_321 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-3L)), (-3L)), (-3L), 2L, (-3L), (VECTOR(int32_t, 2))(2L, (-3L)), (VECTOR(int32_t, 2))(2L, (-3L)), 2L, (-3L), 2L, (-3L));
                    int i;
                    l_306 = 1L;
                    if (l_309)
                    { /* block id: 102 */
                        int8_t l_310[3];
                        uint16_t l_311[7][10] = {{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL},{2UL,2UL,65528UL,6UL,0xA580L,6UL,65528UL,2UL,2UL,65528UL}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_310[i] = (-1L);
                        l_311[3][1]--;
                    }
                    else
                    { /* block id: 104 */
                        int8_t l_314 = 0x38L;
                        uint8_t l_315 = 0xF3L;
                        int32_t l_319 = 0x4FBFC27EL;
                        int32_t *l_318 = &l_319;
                        int32_t *l_320 = &l_319;
                        l_315--;
                        l_305 = l_318;
                        l_305 = (void*)0;
                        l_305 = (l_318 = l_320);
                    }
                    if (((VECTOR(int32_t, 8))(l_321.s5a0bc34a)).s1)
                    { /* block id: 111 */
                        l_309 = 0x4F9DE6A6L;
                    }
                    else
                    { /* block id: 113 */
                        int32_t l_323 = 0x7F750143L;
                        int32_t *l_322 = &l_323;
                        l_305 = l_322;
                        l_305 = (void*)0;
                    }
                }
            }
            else
            { /* block id: 118 */
                int32_t l_324 = 0x1931F430L;
                VECTOR(int8_t, 16) l_325 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-2L)), (-2L)), (-2L), (-5L), (-2L), (VECTOR(int8_t, 2))((-5L), (-2L)), (VECTOR(int8_t, 2))((-5L), (-2L)), (-5L), (-2L), (-5L), (-2L));
                VECTOR(int8_t, 8) l_326 = (VECTOR(int8_t, 8))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 6L), 6L), 6L, 0x11L, 6L);
                int8_t l_327 = 8L;
                int i;
                l_293 ^= l_324;
                l_295 |= (l_293 = (((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_325.s0064)).yzxyzxyzxxzwwyzx, ((VECTOR(int8_t, 2))(l_326.s57)).yyxyxxxxxyyyxyxy))).s1 , l_327));
            }
            l_329 &= l_328;
            l_276.w = (l_331 = l_330);
            l_333.w ^= l_332;
            unsigned int result = 0;
            result += l_276.w;
            result += l_276.z;
            result += l_276.y;
            result += l_276.x;
            result += l_277;
            result += l_278.y;
            result += l_278.x;
            result += l_279.sf;
            result += l_279.se;
            result += l_279.sd;
            result += l_279.sc;
            result += l_279.sb;
            result += l_279.sa;
            result += l_279.s9;
            result += l_279.s8;
            result += l_279.s7;
            result += l_279.s6;
            result += l_279.s5;
            result += l_279.s4;
            result += l_279.s3;
            result += l_279.s2;
            result += l_279.s1;
            result += l_279.s0;
            result += l_280;
            result += l_281.s7;
            result += l_281.s6;
            result += l_281.s5;
            result += l_281.s4;
            result += l_281.s3;
            result += l_281.s2;
            result += l_281.s1;
            result += l_281.s0;
            result += l_282.w;
            result += l_282.z;
            result += l_282.y;
            result += l_282.x;
            result += l_283;
            result += l_284.w;
            result += l_284.z;
            result += l_284.y;
            result += l_284.x;
            result += l_285.y;
            result += l_285.x;
            result += l_286.y;
            result += l_286.x;
            result += l_287.w;
            result += l_287.z;
            result += l_287.y;
            result += l_287.x;
            result += l_288.sf;
            result += l_288.se;
            result += l_288.sd;
            result += l_288.sc;
            result += l_288.sb;
            result += l_288.sa;
            result += l_288.s9;
            result += l_288.s8;
            result += l_288.s7;
            result += l_288.s6;
            result += l_288.s5;
            result += l_288.s4;
            result += l_288.s3;
            result += l_288.s2;
            result += l_288.s1;
            result += l_288.s0;
            result += l_289.s7;
            result += l_289.s6;
            result += l_289.s5;
            result += l_289.s4;
            result += l_289.s3;
            result += l_289.s2;
            result += l_289.s1;
            result += l_289.s0;
            int l_290_i0, l_290_i1, l_290_i2;
            for (l_290_i0 = 0; l_290_i0 < 9; l_290_i0++) {
                for (l_290_i1 = 0; l_290_i1 < 4; l_290_i1++) {
                    for (l_290_i2 = 0; l_290_i2 < 7; l_290_i2++) {
                        result += l_290[l_290_i0][l_290_i1][l_290_i2];
                    }
                }
            }
            result += l_291;
            result += l_292.sf;
            result += l_292.se;
            result += l_292.sd;
            result += l_292.sc;
            result += l_292.sb;
            result += l_292.sa;
            result += l_292.s9;
            result += l_292.s8;
            result += l_292.s7;
            result += l_292.s6;
            result += l_292.s5;
            result += l_292.s4;
            result += l_292.s3;
            result += l_292.s2;
            result += l_292.s1;
            result += l_292.s0;
            result += l_293;
            result += l_294.w;
            result += l_294.z;
            result += l_294.y;
            result += l_294.x;
            result += l_295;
            result += l_296;
            result += l_297;
            result += l_298;
            result += l_299;
            result += l_300;
            result += l_301;
            result += l_302;
            result += l_328;
            result += l_329;
            result += l_330;
            result += l_331;
            result += l_332;
            result += l_333.w;
            result += l_333.z;
            result += l_333.y;
            result += l_333.x;
            atomic_add(&p_930->l_special_values[39], result);
        }
        else
        { /* block id: 127 */
            (1 + 1);
        }
        return (*p_56);
    }
    return (*p_56);
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_17
 * writes:
 */
int8_t  func_58(int32_t ** p_59, int32_t * p_60, int32_t  p_61, uint8_t * p_62, int32_t ** p_63, struct S0 * p_930)
{ /* block id: 43 */
    int32_t *l_186 = &p_930->g_42;
    (*p_63) = (void*)0;
    (*p_63) = l_186;
    return p_930->g_17.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_19 p_930->g_37 p_930->g_118 p_930->g_119 p_930->l_comm_values p_930->g_130 p_930->g_131 p_930->g_27 p_930->g_17 p_930->g_113 p_930->g_65 p_930->g_140 p_930->g_142 p_930->g_73 p_930->g_165 p_930->g_42 p_930->g_44 p_930->g_11
 * writes: p_930->g_113 p_930->g_42 p_930->g_65 p_930->g_25 p_930->g_166 p_930->g_119
 */
int32_t * func_70(uint64_t  p_71, uint8_t  p_72, struct S0 * p_930)
{ /* block id: 21 */
    uint64_t l_101[7] = {18446744073709551611UL,0x759B496B13AC1787L,18446744073709551611UL,18446744073709551611UL,0x759B496B13AC1787L,18446744073709551611UL,18446744073709551611UL};
    uint8_t *l_108 = (void*)0;
    uint8_t *l_110[7][3][6] = {{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}},{{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0},{&p_930->g_27,&p_930->g_27,(void*)0,(void*)0,&p_930->g_27,(void*)0}}};
    uint8_t **l_109 = &l_110[3][1][0];
    uint8_t **l_111 = (void*)0;
    uint8_t **l_112[10][10][2] = {{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}},{{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108},{&l_108,&l_108}}};
    int32_t **l_135 = (void*)0;
    int32_t **l_136 = &p_930->g_65;
    uint16_t *l_171 = (void*)0;
    uint16_t *l_172 = (void*)0;
    uint16_t *l_173 = (void*)0;
    uint16_t *l_174[2][4][7] = {{{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67}},{{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67},{(void*)0,&p_930->g_37,&p_930->g_67,&p_930->g_37,(void*)0,&p_930->g_37,&p_930->g_67}}};
    VECTOR(uint8_t, 4) l_181 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xE3L), 0xE3L);
    VECTOR(uint8_t, 8) l_182 = (VECTOR(uint8_t, 8))(0x1EL, (VECTOR(uint8_t, 4))(0x1EL, (VECTOR(uint8_t, 2))(0x1EL, 0UL), 0UL), 0UL, 0x1EL, 0UL);
    uint32_t l_183 = 4294967293UL;
    int i, j, k;
    (*p_930->g_165) = (l_112[6][4][1] = func_93(((*l_136) = func_97(p_72, l_101[2], (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))((safe_lshift_func_int16_t_s_s((l_108 == ((*l_109) = (GROUP_DIVERGE(1, 1) , &p_930->g_27))), 15)), 0x3B77L, 0x7FF9L, 0x2EE0L)).y, GROUP_DIVERGE(1, 1))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((GROUP_DIVERGE(1, 1) | p_71), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((l_108 != (p_930->g_113 = &p_72)), p_930->g_19.s0, ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x678BCBB588299C91L, 5L)), 0x403E3ABEA0BD5792L, p_930->g_19.s6, p_72, l_101[4], 0x152B013A5848C367L, 0x495206BB7C98E343L)).s3 & l_101[2]) | l_101[3]), ((VECTOR(uint16_t, 2))(65528UL)), FAKE_DIVERGE(p_930->global_0_offset, get_global_id(0), 10), ((VECTOR(uint16_t, 8))(0xB94AL)), 0x09C1L, 9UL)).sf6)).xyxx, ((VECTOR(uint16_t, 4))(65535UL))))), l_101[2], ((VECTOR(uint32_t, 2))(0xD4EE7BA7L)), 0x21912DA4L)).s20)), ((VECTOR(uint32_t, 2))(0UL)), 4294967295UL, 0UL, 4294967295UL)).even)).y)), p_930)), p_930->g_17.s3, p_930->g_119.s6, p_930));
    (*l_136) = func_97((safe_rshift_func_uint8_t_u_u((**l_136), p_72)), p_71, ((((safe_rshift_func_int16_t_s_u(0x3DB8L, 11)) , (((p_930->g_119.sf ^= (p_930->g_44 > 1UL)) < ((safe_mod_func_int64_t_s_s((p_72 || ((safe_mul_func_uint8_t_u_u(249UL, (safe_mul_func_uint16_t_u_u((((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(1UL, 255UL)).yyxyxyyx, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(l_181.zwwxywzy)).s27, ((VECTOR(uint8_t, 2))(l_182.s56))))).yyyxxyxx))).s45))).odd == (+(p_930->g_11.y <= (**l_136)))), p_930->g_17.s3)))) , 0UL)), (**l_136))) >= 0x6513EDB85034D1DAL)) , l_183)) || 0x63D15342L) <= p_71), p_930);
    return (*l_136);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_81(int32_t  p_82, int32_t  p_83, uint8_t * p_84, struct S0 * p_930)
{ /* block id: 19 */
    return p_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_131 p_930->g_140 p_930->g_142 p_930->g_119 p_930->g_73 p_930->g_19 p_930->g_17 p_930->g_37 p_930->g_118 p_930->l_comm_values p_930->g_130 p_930->g_27 p_930->g_113 p_930->g_65
 * writes: p_930->g_25 p_930->g_42
 */
uint8_t ** func_93(int32_t * p_94, int64_t  p_95, uint64_t  p_96, struct S0 * p_930)
{ /* block id: 29 */
    uint16_t *l_139 = &p_930->g_67;
    VECTOR(int16_t, 16) l_141 = (VECTOR(int16_t, 16))(0x5171L, (VECTOR(int16_t, 4))(0x5171L, (VECTOR(int16_t, 2))(0x5171L, 0L), 0L), 0L, 0x5171L, 0L, (VECTOR(int16_t, 2))(0x5171L, 0L), (VECTOR(int16_t, 2))(0x5171L, 0L), 0x5171L, 0L, 0x5171L, 0L);
    int64_t l_147 = 0x7D62526AD9819071L;
    uint64_t *l_148[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_150 = 1L;
    uint16_t l_151 = 0x2EEBL;
    int8_t *l_152 = (void*)0;
    int8_t *l_153 = (void*)0;
    int8_t *l_154 = (void*)0;
    int8_t *l_155 = (void*)0;
    uint64_t l_156[2];
    VECTOR(int32_t, 2) l_157 = (VECTOR(int32_t, 2))(0x52A57B08L, 0x7EB79DC5L);
    uint64_t **l_158 = (void*)0;
    uint64_t **l_159 = &l_148[5];
    int16_t *l_160 = &p_930->g_25;
    int32_t **l_164 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_156[i] = 0x49A5D95BAE7EB1C1L;
    p_94 = func_97((p_930->g_131.y , (safe_lshift_func_int8_t_s_u((((l_139 == l_139) > ((*l_160) = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(p_930->g_140.ww)), ((VECTOR(int16_t, 8))(l_141.sa2a8b54c)).s41))).xyxy)).lo, ((VECTOR(int16_t, 16))(p_930->g_142.s598eef55b7fedfde)).sec))), 0x3A28L, 6L)))), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(1L, 0x33BAAAF8L, 0x189E628FL, 5L)).z, (safe_rshift_func_uint16_t_u_s((((l_150 = l_147) >= ((l_156[0] ^= (((l_151 |= p_930->g_140.y) , l_151) , (FAKE_DIVERGE(p_930->group_0_offset, get_group_id(0), 10) , l_141.s8))) > (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_157.yyyxxyxx)).odd)).x | l_141.sc) ^ FAKE_DIVERGE(p_930->global_1_offset, get_global_id(1), 10)) <= (((*l_159) = l_148[5]) != &p_930->g_149)))) , p_96), p_930->g_119.s5)))) > p_96), 0L, ((VECTOR(int16_t, 2))(1L)), l_157.x, ((VECTOR(int16_t, 4))(0x63D4L)), ((VECTOR(int16_t, 4))(5L)), (-2L), (-1L), 0x6B9DL)))), ((VECTOR(int16_t, 16))(1L))))).s71, ((VECTOR(int16_t, 2))((-8L)))))).yxxy, ((VECTOR(int16_t, 4))(4L)))))))).lo)).odd)) ^ p_930->g_73.s6), 4))), p_930->g_19.s4, p_930->g_17.s6, p_930);
    p_94 = &l_150;
    return &p_930->g_113;
}


/* ------------------------------------------ */
/* 
 * reads : p_930->g_37 p_930->g_118 p_930->g_119 p_930->l_comm_values p_930->g_130 p_930->g_131 p_930->g_27 p_930->g_17 p_930->g_113 p_930->g_65 p_72
 * writes: p_930->g_42
 */
int32_t * func_97(int64_t  p_98, int16_t  p_99, uint32_t  p_100, struct S0 * p_930)
{ /* block id: 24 */
    VECTOR(uint16_t, 2) l_122 = (VECTOR(uint16_t, 2))(1UL, 0x4F1AL);
    uint8_t **l_125[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 16) l_128 = (VECTOR(uint16_t, 16))(0x7D19L, (VECTOR(uint16_t, 4))(0x7D19L, (VECTOR(uint16_t, 2))(0x7D19L, 65532UL), 65532UL), 65532UL, 0x7D19L, 65532UL, (VECTOR(uint16_t, 2))(0x7D19L, 65532UL), (VECTOR(uint16_t, 2))(0x7D19L, 65532UL), 0x7D19L, 65532UL, 0x7D19L, 65532UL);
    int32_t l_129 = 1L;
    int32_t l_132 = 0L;
    int32_t *l_133 = &l_129;
    int32_t *l_134 = &p_930->g_42;
    int i;
    (*p_930->g_65) = ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(0x4DDA6C63L, 4L, ((p_99 > p_930->g_37) | (safe_lshift_func_int8_t_s_u(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x7BL, ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_930->g_118.xy)), 9UL, 65530UL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_930->g_119.s326e)), 0x3898L, (p_98 ^ (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(l_122.yy)).even, 5))), 0xE466L, 0x2384L)), (safe_sub_func_uint32_t_u_u((l_122.x ^ (l_125[0] == ((p_930->l_comm_values[(safe_mod_func_uint32_t_u_u(p_930->tid, 1))] > (safe_rshift_func_uint8_t_u_s(l_122.x, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(0x2CL, ((l_129 = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_128.s16)))).odd) | p_100), ((VECTOR(int8_t, 4))(p_930->g_130.s1753)), 0x1DL, (-1L))).s7664663037447044, ((VECTOR(int8_t, 4))(p_930->g_131.xxwy)).zyyxyzxyxyyxyxyz))).sac)), (int8_t)p_930->g_27))).xxyx, ((VECTOR(int8_t, 4))(1L))))).x))) , (void*)0))), l_122.y)), 0x27B5L, 0x6D42L, 9UL)).sa, p_98)), ((VECTOR(int8_t, 4))(0x3DL)), 0x57L, 0x47L, 0x52L)).s2641714001525410)).sb, 0x1BL, 0x24L, (-1L))).zwwwwzxy, (int8_t)p_930->l_comm_values[(safe_mod_func_uint32_t_u_u(p_930->tid, 1))]))).s32, (int8_t)0x65L))), p_930->g_17.s4, ((VECTOR(int8_t, 4))(0L)), 0x47L)).even, ((VECTOR(int8_t, 4))(1L))))).wyxywxzyywyyyxwy, ((VECTOR(int8_t, 16))((-1L)))))).sed, (int8_t)l_122.y))), 4L)))).wwxzwzxw, ((VECTOR(int8_t, 8))(0x78L)), ((VECTOR(int8_t, 8))(0x3EL))))).s1116341557377666, ((VECTOR(int8_t, 16))(0x48L))))).lo, ((VECTOR(int8_t, 8))((-1L)))))))).s3 , (-1L)) >= (*p_930->g_113)), p_99))), l_132, l_128.sf, 0L, 0x18936BB2L, (-2L))).odd, ((VECTOR(int32_t, 4))(1L))))).y;
    return l_134;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[81];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 81; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[81];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 81; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S0 c_931;
    struct S0* p_930 = &c_931;
    struct S0 c_932 = {
        (VECTOR(uint8_t, 2))(247UL, 0x7CL), // p_930->g_11
        (VECTOR(int8_t, 8))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x05L), 0x05L), 0x05L, 0x5FL, 0x05L), // p_930->g_17
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2D7BA966L), 0x2D7BA966L), 0x2D7BA966L, 1L, 0x2D7BA966L), // p_930->g_19
        (-8L), // p_930->g_25
        1UL, // p_930->g_27
        (void*)0, // p_930->g_34
        250UL, // p_930->g_36
        &p_930->g_36, // p_930->g_35
        2UL, // p_930->g_37
        0x42427020L, // p_930->g_42
        0xEFL, // p_930->g_44
        0UL, // p_930->g_51
        &p_930->g_42, // p_930->g_65
        {{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0},{(void*)0,&p_930->g_65,(void*)0,(void*)0,&p_930->g_65,(void*)0}}, // p_930->g_64
        0x83B7L, // p_930->g_67
        (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x26C3L), 0x26C3L), 0x26C3L, 4L, 0x26C3L), // p_930->g_73
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int8_t, 2))((-1L), 5L), (VECTOR(int8_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L), // p_930->g_75
        &p_930->g_44, // p_930->g_113
        (VECTOR(uint16_t, 2))(65535UL, 0xAA76L), // p_930->g_118
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_930->g_119
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L), (VECTOR(int8_t, 2))(1L, (-7L)), (VECTOR(int8_t, 2))(1L, (-7L)), 1L, (-7L), 1L, (-7L)), // p_930->g_130
        (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-1L)), (-1L)), // p_930->g_131
        (VECTOR(int16_t, 4))(0x6BD7L, (VECTOR(int16_t, 2))(0x6BD7L, (-1L)), (-1L)), // p_930->g_140
        (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-8L)), (-8L)), (-8L), 4L, (-8L), (VECTOR(int16_t, 2))(4L, (-8L)), (VECTOR(int16_t, 2))(4L, (-8L)), 4L, (-8L), 4L, (-8L)), // p_930->g_142
        0x0BD27AD0C03D5BD3L, // p_930->g_149
        (void*)0, // p_930->g_161
        {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}}, // p_930->g_162
        (void*)0, // p_930->g_163
        (void*)0, // p_930->g_166
        &p_930->g_166, // p_930->g_165
        (VECTOR(uint64_t, 4))(0x653D7A3F9EB71334L, (VECTOR(uint64_t, 2))(0x653D7A3F9EB71334L, 0xBC17C50ED043E5B9L), 0xBC17C50ED043E5B9L), // p_930->g_188
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 9L), 9L), 9L, 1L, 9L), // p_930->g_196
        0L, // p_930->g_230
        0xD35EB0D30FA18C33L, // p_930->g_241
        7UL, // p_930->g_245
        (VECTOR(uint64_t, 8))(0x1FB2E3F9418459B3L, (VECTOR(uint64_t, 4))(0x1FB2E3F9418459B3L, (VECTOR(uint64_t, 2))(0x1FB2E3F9418459B3L, 0x6A4BE8A0454B4435L), 0x6A4BE8A0454B4435L), 0x6A4BE8A0454B4435L, 0x1FB2E3F9418459B3L, 0x6A4BE8A0454B4435L), // p_930->g_256
        (VECTOR(uint8_t, 4))(0x15L, (VECTOR(uint8_t, 2))(0x15L, 0x4AL), 0x4AL), // p_930->g_257
        (VECTOR(uint8_t, 16))(0x96L, (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 0x76L), 0x76L), 0x76L, 0x96L, 0x76L, (VECTOR(uint8_t, 2))(0x96L, 0x76L), (VECTOR(uint8_t, 2))(0x96L, 0x76L), 0x96L, 0x76L, 0x96L, 0x76L), // p_930->g_259
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x08L), 0x08L), 0x08L, 254UL, 0x08L), // p_930->g_262
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x02L), 0x02L), // p_930->g_263
        1L, // p_930->g_275
        (VECTOR(int8_t, 2))(0x12L, 5L), // p_930->g_375
        (VECTOR(int8_t, 2))(0x59L, 0x67L), // p_930->g_376
        (VECTOR(int8_t, 2))(5L, 9L), // p_930->g_377
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3BL), 0x3BL), 0x3BL, 0L, 0x3BL), // p_930->g_378
        1UL, // p_930->g_400
        {{{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL}},{{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL},{0x3C98158CL,1UL,1UL,0x3C98158CL,0x3C98158CL,1UL,1UL,0x3C98158CL}}}, // p_930->g_433
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-4L)), (-4L)), (-4L), (-5L), (-4L)), // p_930->g_485
        (VECTOR(int8_t, 8))(0x1BL, (VECTOR(int8_t, 4))(0x1BL, (VECTOR(int8_t, 2))(0x1BL, (-1L)), (-1L)), (-1L), 0x1BL, (-1L)), // p_930->g_575
        1UL, // p_930->g_581
        (VECTOR(uint16_t, 2))(0xF013L, 0x3F73L), // p_930->g_622
        0x29A388AF2FE599B8L, // p_930->g_633
        (VECTOR(int8_t, 16))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x0FL), 0x0FL), 0x0FL, 0x35L, 0x0FL, (VECTOR(int8_t, 2))(0x35L, 0x0FL), (VECTOR(int8_t, 2))(0x35L, 0x0FL), 0x35L, 0x0FL, 0x35L, 0x0FL), // p_930->g_647
        (VECTOR(int32_t, 8))(0x08FCA00BL, (VECTOR(int32_t, 4))(0x08FCA00BL, (VECTOR(int32_t, 2))(0x08FCA00BL, 0L), 0L), 0L, 0x08FCA00BL, 0L), // p_930->g_655
        (void*)0, // p_930->g_683
        (void*)0, // p_930->g_685
        0x36A5L, // p_930->g_699
        (VECTOR(uint32_t, 4))(0xB8176314L, (VECTOR(uint32_t, 2))(0xB8176314L, 0x9B25DAB5L), 0x9B25DAB5L), // p_930->g_705
        0x4234C597L, // p_930->g_730
        (VECTOR(int8_t, 16))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 2L), 2L), 2L, 0x62L, 2L, (VECTOR(int8_t, 2))(0x62L, 2L), (VECTOR(int8_t, 2))(0x62L, 2L), 0x62L, 2L, 0x62L, 2L), // p_930->g_735
        (VECTOR(int64_t, 4))(0x6D519A2A35CE6588L, (VECTOR(int64_t, 2))(0x6D519A2A35CE6588L, 0x3BC01FE356EED96CL), 0x3BC01FE356EED96CL), // p_930->g_744
        (VECTOR(uint16_t, 4))(0x55D1L, (VECTOR(uint16_t, 2))(0x55D1L, 0x0B28L), 0x0B28L), // p_930->g_752
        (VECTOR(uint16_t, 8))(0xBFE8L, (VECTOR(uint16_t, 4))(0xBFE8L, (VECTOR(uint16_t, 2))(0xBFE8L, 0UL), 0UL), 0UL, 0xBFE8L, 0UL), // p_930->g_753
        (VECTOR(uint16_t, 4))(0x37D4L, (VECTOR(uint16_t, 2))(0x37D4L, 1UL), 1UL), // p_930->g_755
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x80E6L), 0x80E6L), 0x80E6L, 0UL, 0x80E6L, (VECTOR(uint16_t, 2))(0UL, 0x80E6L), (VECTOR(uint16_t, 2))(0UL, 0x80E6L), 0UL, 0x80E6L, 0UL, 0x80E6L), // p_930->g_756
        (VECTOR(uint16_t, 2))(0xBE3AL, 0x43DEL), // p_930->g_760
        (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 4UL), 4UL), // p_930->g_761
        (VECTOR(uint16_t, 2))(0UL, 0xEF7DL), // p_930->g_764
        (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65527UL), 65527UL), 65527UL, 65534UL, 65527UL), // p_930->g_765
        (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65535UL), 65535UL), 65535UL, 3UL, 65535UL), // p_930->g_767
        (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x0DFBL), 0x0DFBL), // p_930->g_768
        0x145FL, // p_930->g_776
        (VECTOR(int32_t, 16))(0x1D6F5A77L, (VECTOR(int32_t, 4))(0x1D6F5A77L, (VECTOR(int32_t, 2))(0x1D6F5A77L, 0x2544A36BL), 0x2544A36BL), 0x2544A36BL, 0x1D6F5A77L, 0x2544A36BL, (VECTOR(int32_t, 2))(0x1D6F5A77L, 0x2544A36BL), (VECTOR(int32_t, 2))(0x1D6F5A77L, 0x2544A36BL), 0x1D6F5A77L, 0x2544A36BL, 0x1D6F5A77L, 0x2544A36BL), // p_930->g_827
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x08464557L), 0x08464557L), // p_930->g_838
        (VECTOR(uint32_t, 2))(0x216F6B55L, 4294967291UL), // p_930->g_839
        &p_930->g_166, // p_930->g_866
        &p_930->g_230, // p_930->g_918
        {{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918},{&p_930->g_918,&p_930->g_918}}, // p_930->g_917
        &p_930->g_918, // p_930->g_920
        0, // p_930->v_collective
        sequence_input[get_global_id(0)], // p_930->global_0_offset
        sequence_input[get_global_id(1)], // p_930->global_1_offset
        sequence_input[get_global_id(2)], // p_930->global_2_offset
        sequence_input[get_local_id(0)], // p_930->local_0_offset
        sequence_input[get_local_id(1)], // p_930->local_1_offset
        sequence_input[get_local_id(2)], // p_930->local_2_offset
        sequence_input[get_group_id(0)], // p_930->group_0_offset
        sequence_input[get_group_id(1)], // p_930->group_1_offset
        sequence_input[get_group_id(2)], // p_930->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_930->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_931 = c_932;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_930);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_930->g_11.x, "p_930->g_11.x", print_hash_value);
    transparent_crc(p_930->g_11.y, "p_930->g_11.y", print_hash_value);
    transparent_crc(p_930->g_17.s0, "p_930->g_17.s0", print_hash_value);
    transparent_crc(p_930->g_17.s1, "p_930->g_17.s1", print_hash_value);
    transparent_crc(p_930->g_17.s2, "p_930->g_17.s2", print_hash_value);
    transparent_crc(p_930->g_17.s3, "p_930->g_17.s3", print_hash_value);
    transparent_crc(p_930->g_17.s4, "p_930->g_17.s4", print_hash_value);
    transparent_crc(p_930->g_17.s5, "p_930->g_17.s5", print_hash_value);
    transparent_crc(p_930->g_17.s6, "p_930->g_17.s6", print_hash_value);
    transparent_crc(p_930->g_17.s7, "p_930->g_17.s7", print_hash_value);
    transparent_crc(p_930->g_19.s0, "p_930->g_19.s0", print_hash_value);
    transparent_crc(p_930->g_19.s1, "p_930->g_19.s1", print_hash_value);
    transparent_crc(p_930->g_19.s2, "p_930->g_19.s2", print_hash_value);
    transparent_crc(p_930->g_19.s3, "p_930->g_19.s3", print_hash_value);
    transparent_crc(p_930->g_19.s4, "p_930->g_19.s4", print_hash_value);
    transparent_crc(p_930->g_19.s5, "p_930->g_19.s5", print_hash_value);
    transparent_crc(p_930->g_19.s6, "p_930->g_19.s6", print_hash_value);
    transparent_crc(p_930->g_19.s7, "p_930->g_19.s7", print_hash_value);
    transparent_crc(p_930->g_25, "p_930->g_25", print_hash_value);
    transparent_crc(p_930->g_27, "p_930->g_27", print_hash_value);
    transparent_crc(p_930->g_36, "p_930->g_36", print_hash_value);
    transparent_crc(p_930->g_37, "p_930->g_37", print_hash_value);
    transparent_crc(p_930->g_42, "p_930->g_42", print_hash_value);
    transparent_crc(p_930->g_44, "p_930->g_44", print_hash_value);
    transparent_crc(p_930->g_51, "p_930->g_51", print_hash_value);
    transparent_crc(p_930->g_67, "p_930->g_67", print_hash_value);
    transparent_crc(p_930->g_73.s0, "p_930->g_73.s0", print_hash_value);
    transparent_crc(p_930->g_73.s1, "p_930->g_73.s1", print_hash_value);
    transparent_crc(p_930->g_73.s2, "p_930->g_73.s2", print_hash_value);
    transparent_crc(p_930->g_73.s3, "p_930->g_73.s3", print_hash_value);
    transparent_crc(p_930->g_73.s4, "p_930->g_73.s4", print_hash_value);
    transparent_crc(p_930->g_73.s5, "p_930->g_73.s5", print_hash_value);
    transparent_crc(p_930->g_73.s6, "p_930->g_73.s6", print_hash_value);
    transparent_crc(p_930->g_73.s7, "p_930->g_73.s7", print_hash_value);
    transparent_crc(p_930->g_75.s0, "p_930->g_75.s0", print_hash_value);
    transparent_crc(p_930->g_75.s1, "p_930->g_75.s1", print_hash_value);
    transparent_crc(p_930->g_75.s2, "p_930->g_75.s2", print_hash_value);
    transparent_crc(p_930->g_75.s3, "p_930->g_75.s3", print_hash_value);
    transparent_crc(p_930->g_75.s4, "p_930->g_75.s4", print_hash_value);
    transparent_crc(p_930->g_75.s5, "p_930->g_75.s5", print_hash_value);
    transparent_crc(p_930->g_75.s6, "p_930->g_75.s6", print_hash_value);
    transparent_crc(p_930->g_75.s7, "p_930->g_75.s7", print_hash_value);
    transparent_crc(p_930->g_75.s8, "p_930->g_75.s8", print_hash_value);
    transparent_crc(p_930->g_75.s9, "p_930->g_75.s9", print_hash_value);
    transparent_crc(p_930->g_75.sa, "p_930->g_75.sa", print_hash_value);
    transparent_crc(p_930->g_75.sb, "p_930->g_75.sb", print_hash_value);
    transparent_crc(p_930->g_75.sc, "p_930->g_75.sc", print_hash_value);
    transparent_crc(p_930->g_75.sd, "p_930->g_75.sd", print_hash_value);
    transparent_crc(p_930->g_75.se, "p_930->g_75.se", print_hash_value);
    transparent_crc(p_930->g_75.sf, "p_930->g_75.sf", print_hash_value);
    transparent_crc(p_930->g_118.x, "p_930->g_118.x", print_hash_value);
    transparent_crc(p_930->g_118.y, "p_930->g_118.y", print_hash_value);
    transparent_crc(p_930->g_119.s0, "p_930->g_119.s0", print_hash_value);
    transparent_crc(p_930->g_119.s1, "p_930->g_119.s1", print_hash_value);
    transparent_crc(p_930->g_119.s2, "p_930->g_119.s2", print_hash_value);
    transparent_crc(p_930->g_119.s3, "p_930->g_119.s3", print_hash_value);
    transparent_crc(p_930->g_119.s4, "p_930->g_119.s4", print_hash_value);
    transparent_crc(p_930->g_119.s5, "p_930->g_119.s5", print_hash_value);
    transparent_crc(p_930->g_119.s6, "p_930->g_119.s6", print_hash_value);
    transparent_crc(p_930->g_119.s7, "p_930->g_119.s7", print_hash_value);
    transparent_crc(p_930->g_119.s8, "p_930->g_119.s8", print_hash_value);
    transparent_crc(p_930->g_119.s9, "p_930->g_119.s9", print_hash_value);
    transparent_crc(p_930->g_119.sa, "p_930->g_119.sa", print_hash_value);
    transparent_crc(p_930->g_119.sb, "p_930->g_119.sb", print_hash_value);
    transparent_crc(p_930->g_119.sc, "p_930->g_119.sc", print_hash_value);
    transparent_crc(p_930->g_119.sd, "p_930->g_119.sd", print_hash_value);
    transparent_crc(p_930->g_119.se, "p_930->g_119.se", print_hash_value);
    transparent_crc(p_930->g_119.sf, "p_930->g_119.sf", print_hash_value);
    transparent_crc(p_930->g_130.s0, "p_930->g_130.s0", print_hash_value);
    transparent_crc(p_930->g_130.s1, "p_930->g_130.s1", print_hash_value);
    transparent_crc(p_930->g_130.s2, "p_930->g_130.s2", print_hash_value);
    transparent_crc(p_930->g_130.s3, "p_930->g_130.s3", print_hash_value);
    transparent_crc(p_930->g_130.s4, "p_930->g_130.s4", print_hash_value);
    transparent_crc(p_930->g_130.s5, "p_930->g_130.s5", print_hash_value);
    transparent_crc(p_930->g_130.s6, "p_930->g_130.s6", print_hash_value);
    transparent_crc(p_930->g_130.s7, "p_930->g_130.s7", print_hash_value);
    transparent_crc(p_930->g_130.s8, "p_930->g_130.s8", print_hash_value);
    transparent_crc(p_930->g_130.s9, "p_930->g_130.s9", print_hash_value);
    transparent_crc(p_930->g_130.sa, "p_930->g_130.sa", print_hash_value);
    transparent_crc(p_930->g_130.sb, "p_930->g_130.sb", print_hash_value);
    transparent_crc(p_930->g_130.sc, "p_930->g_130.sc", print_hash_value);
    transparent_crc(p_930->g_130.sd, "p_930->g_130.sd", print_hash_value);
    transparent_crc(p_930->g_130.se, "p_930->g_130.se", print_hash_value);
    transparent_crc(p_930->g_130.sf, "p_930->g_130.sf", print_hash_value);
    transparent_crc(p_930->g_131.x, "p_930->g_131.x", print_hash_value);
    transparent_crc(p_930->g_131.y, "p_930->g_131.y", print_hash_value);
    transparent_crc(p_930->g_131.z, "p_930->g_131.z", print_hash_value);
    transparent_crc(p_930->g_131.w, "p_930->g_131.w", print_hash_value);
    transparent_crc(p_930->g_140.x, "p_930->g_140.x", print_hash_value);
    transparent_crc(p_930->g_140.y, "p_930->g_140.y", print_hash_value);
    transparent_crc(p_930->g_140.z, "p_930->g_140.z", print_hash_value);
    transparent_crc(p_930->g_140.w, "p_930->g_140.w", print_hash_value);
    transparent_crc(p_930->g_142.s0, "p_930->g_142.s0", print_hash_value);
    transparent_crc(p_930->g_142.s1, "p_930->g_142.s1", print_hash_value);
    transparent_crc(p_930->g_142.s2, "p_930->g_142.s2", print_hash_value);
    transparent_crc(p_930->g_142.s3, "p_930->g_142.s3", print_hash_value);
    transparent_crc(p_930->g_142.s4, "p_930->g_142.s4", print_hash_value);
    transparent_crc(p_930->g_142.s5, "p_930->g_142.s5", print_hash_value);
    transparent_crc(p_930->g_142.s6, "p_930->g_142.s6", print_hash_value);
    transparent_crc(p_930->g_142.s7, "p_930->g_142.s7", print_hash_value);
    transparent_crc(p_930->g_142.s8, "p_930->g_142.s8", print_hash_value);
    transparent_crc(p_930->g_142.s9, "p_930->g_142.s9", print_hash_value);
    transparent_crc(p_930->g_142.sa, "p_930->g_142.sa", print_hash_value);
    transparent_crc(p_930->g_142.sb, "p_930->g_142.sb", print_hash_value);
    transparent_crc(p_930->g_142.sc, "p_930->g_142.sc", print_hash_value);
    transparent_crc(p_930->g_142.sd, "p_930->g_142.sd", print_hash_value);
    transparent_crc(p_930->g_142.se, "p_930->g_142.se", print_hash_value);
    transparent_crc(p_930->g_142.sf, "p_930->g_142.sf", print_hash_value);
    transparent_crc(p_930->g_149, "p_930->g_149", print_hash_value);
    transparent_crc(p_930->g_188.x, "p_930->g_188.x", print_hash_value);
    transparent_crc(p_930->g_188.y, "p_930->g_188.y", print_hash_value);
    transparent_crc(p_930->g_188.z, "p_930->g_188.z", print_hash_value);
    transparent_crc(p_930->g_188.w, "p_930->g_188.w", print_hash_value);
    transparent_crc(p_930->g_196.s0, "p_930->g_196.s0", print_hash_value);
    transparent_crc(p_930->g_196.s1, "p_930->g_196.s1", print_hash_value);
    transparent_crc(p_930->g_196.s2, "p_930->g_196.s2", print_hash_value);
    transparent_crc(p_930->g_196.s3, "p_930->g_196.s3", print_hash_value);
    transparent_crc(p_930->g_196.s4, "p_930->g_196.s4", print_hash_value);
    transparent_crc(p_930->g_196.s5, "p_930->g_196.s5", print_hash_value);
    transparent_crc(p_930->g_196.s6, "p_930->g_196.s6", print_hash_value);
    transparent_crc(p_930->g_196.s7, "p_930->g_196.s7", print_hash_value);
    transparent_crc(p_930->g_230, "p_930->g_230", print_hash_value);
    transparent_crc(p_930->g_241, "p_930->g_241", print_hash_value);
    transparent_crc(p_930->g_245, "p_930->g_245", print_hash_value);
    transparent_crc(p_930->g_256.s0, "p_930->g_256.s0", print_hash_value);
    transparent_crc(p_930->g_256.s1, "p_930->g_256.s1", print_hash_value);
    transparent_crc(p_930->g_256.s2, "p_930->g_256.s2", print_hash_value);
    transparent_crc(p_930->g_256.s3, "p_930->g_256.s3", print_hash_value);
    transparent_crc(p_930->g_256.s4, "p_930->g_256.s4", print_hash_value);
    transparent_crc(p_930->g_256.s5, "p_930->g_256.s5", print_hash_value);
    transparent_crc(p_930->g_256.s6, "p_930->g_256.s6", print_hash_value);
    transparent_crc(p_930->g_256.s7, "p_930->g_256.s7", print_hash_value);
    transparent_crc(p_930->g_257.x, "p_930->g_257.x", print_hash_value);
    transparent_crc(p_930->g_257.y, "p_930->g_257.y", print_hash_value);
    transparent_crc(p_930->g_257.z, "p_930->g_257.z", print_hash_value);
    transparent_crc(p_930->g_257.w, "p_930->g_257.w", print_hash_value);
    transparent_crc(p_930->g_259.s0, "p_930->g_259.s0", print_hash_value);
    transparent_crc(p_930->g_259.s1, "p_930->g_259.s1", print_hash_value);
    transparent_crc(p_930->g_259.s2, "p_930->g_259.s2", print_hash_value);
    transparent_crc(p_930->g_259.s3, "p_930->g_259.s3", print_hash_value);
    transparent_crc(p_930->g_259.s4, "p_930->g_259.s4", print_hash_value);
    transparent_crc(p_930->g_259.s5, "p_930->g_259.s5", print_hash_value);
    transparent_crc(p_930->g_259.s6, "p_930->g_259.s6", print_hash_value);
    transparent_crc(p_930->g_259.s7, "p_930->g_259.s7", print_hash_value);
    transparent_crc(p_930->g_259.s8, "p_930->g_259.s8", print_hash_value);
    transparent_crc(p_930->g_259.s9, "p_930->g_259.s9", print_hash_value);
    transparent_crc(p_930->g_259.sa, "p_930->g_259.sa", print_hash_value);
    transparent_crc(p_930->g_259.sb, "p_930->g_259.sb", print_hash_value);
    transparent_crc(p_930->g_259.sc, "p_930->g_259.sc", print_hash_value);
    transparent_crc(p_930->g_259.sd, "p_930->g_259.sd", print_hash_value);
    transparent_crc(p_930->g_259.se, "p_930->g_259.se", print_hash_value);
    transparent_crc(p_930->g_259.sf, "p_930->g_259.sf", print_hash_value);
    transparent_crc(p_930->g_262.s0, "p_930->g_262.s0", print_hash_value);
    transparent_crc(p_930->g_262.s1, "p_930->g_262.s1", print_hash_value);
    transparent_crc(p_930->g_262.s2, "p_930->g_262.s2", print_hash_value);
    transparent_crc(p_930->g_262.s3, "p_930->g_262.s3", print_hash_value);
    transparent_crc(p_930->g_262.s4, "p_930->g_262.s4", print_hash_value);
    transparent_crc(p_930->g_262.s5, "p_930->g_262.s5", print_hash_value);
    transparent_crc(p_930->g_262.s6, "p_930->g_262.s6", print_hash_value);
    transparent_crc(p_930->g_262.s7, "p_930->g_262.s7", print_hash_value);
    transparent_crc(p_930->g_263.x, "p_930->g_263.x", print_hash_value);
    transparent_crc(p_930->g_263.y, "p_930->g_263.y", print_hash_value);
    transparent_crc(p_930->g_263.z, "p_930->g_263.z", print_hash_value);
    transparent_crc(p_930->g_263.w, "p_930->g_263.w", print_hash_value);
    transparent_crc(p_930->g_275, "p_930->g_275", print_hash_value);
    transparent_crc(p_930->g_375.x, "p_930->g_375.x", print_hash_value);
    transparent_crc(p_930->g_375.y, "p_930->g_375.y", print_hash_value);
    transparent_crc(p_930->g_376.x, "p_930->g_376.x", print_hash_value);
    transparent_crc(p_930->g_376.y, "p_930->g_376.y", print_hash_value);
    transparent_crc(p_930->g_377.x, "p_930->g_377.x", print_hash_value);
    transparent_crc(p_930->g_377.y, "p_930->g_377.y", print_hash_value);
    transparent_crc(p_930->g_378.s0, "p_930->g_378.s0", print_hash_value);
    transparent_crc(p_930->g_378.s1, "p_930->g_378.s1", print_hash_value);
    transparent_crc(p_930->g_378.s2, "p_930->g_378.s2", print_hash_value);
    transparent_crc(p_930->g_378.s3, "p_930->g_378.s3", print_hash_value);
    transparent_crc(p_930->g_378.s4, "p_930->g_378.s4", print_hash_value);
    transparent_crc(p_930->g_378.s5, "p_930->g_378.s5", print_hash_value);
    transparent_crc(p_930->g_378.s6, "p_930->g_378.s6", print_hash_value);
    transparent_crc(p_930->g_378.s7, "p_930->g_378.s7", print_hash_value);
    transparent_crc(p_930->g_400, "p_930->g_400", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_930->g_433[i][j][k], "p_930->g_433[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_930->g_485.s0, "p_930->g_485.s0", print_hash_value);
    transparent_crc(p_930->g_485.s1, "p_930->g_485.s1", print_hash_value);
    transparent_crc(p_930->g_485.s2, "p_930->g_485.s2", print_hash_value);
    transparent_crc(p_930->g_485.s3, "p_930->g_485.s3", print_hash_value);
    transparent_crc(p_930->g_485.s4, "p_930->g_485.s4", print_hash_value);
    transparent_crc(p_930->g_485.s5, "p_930->g_485.s5", print_hash_value);
    transparent_crc(p_930->g_485.s6, "p_930->g_485.s6", print_hash_value);
    transparent_crc(p_930->g_485.s7, "p_930->g_485.s7", print_hash_value);
    transparent_crc(p_930->g_575.s0, "p_930->g_575.s0", print_hash_value);
    transparent_crc(p_930->g_575.s1, "p_930->g_575.s1", print_hash_value);
    transparent_crc(p_930->g_575.s2, "p_930->g_575.s2", print_hash_value);
    transparent_crc(p_930->g_575.s3, "p_930->g_575.s3", print_hash_value);
    transparent_crc(p_930->g_575.s4, "p_930->g_575.s4", print_hash_value);
    transparent_crc(p_930->g_575.s5, "p_930->g_575.s5", print_hash_value);
    transparent_crc(p_930->g_575.s6, "p_930->g_575.s6", print_hash_value);
    transparent_crc(p_930->g_575.s7, "p_930->g_575.s7", print_hash_value);
    transparent_crc(p_930->g_581, "p_930->g_581", print_hash_value);
    transparent_crc(p_930->g_622.x, "p_930->g_622.x", print_hash_value);
    transparent_crc(p_930->g_622.y, "p_930->g_622.y", print_hash_value);
    transparent_crc(p_930->g_633, "p_930->g_633", print_hash_value);
    transparent_crc(p_930->g_647.s0, "p_930->g_647.s0", print_hash_value);
    transparent_crc(p_930->g_647.s1, "p_930->g_647.s1", print_hash_value);
    transparent_crc(p_930->g_647.s2, "p_930->g_647.s2", print_hash_value);
    transparent_crc(p_930->g_647.s3, "p_930->g_647.s3", print_hash_value);
    transparent_crc(p_930->g_647.s4, "p_930->g_647.s4", print_hash_value);
    transparent_crc(p_930->g_647.s5, "p_930->g_647.s5", print_hash_value);
    transparent_crc(p_930->g_647.s6, "p_930->g_647.s6", print_hash_value);
    transparent_crc(p_930->g_647.s7, "p_930->g_647.s7", print_hash_value);
    transparent_crc(p_930->g_647.s8, "p_930->g_647.s8", print_hash_value);
    transparent_crc(p_930->g_647.s9, "p_930->g_647.s9", print_hash_value);
    transparent_crc(p_930->g_647.sa, "p_930->g_647.sa", print_hash_value);
    transparent_crc(p_930->g_647.sb, "p_930->g_647.sb", print_hash_value);
    transparent_crc(p_930->g_647.sc, "p_930->g_647.sc", print_hash_value);
    transparent_crc(p_930->g_647.sd, "p_930->g_647.sd", print_hash_value);
    transparent_crc(p_930->g_647.se, "p_930->g_647.se", print_hash_value);
    transparent_crc(p_930->g_647.sf, "p_930->g_647.sf", print_hash_value);
    transparent_crc(p_930->g_655.s0, "p_930->g_655.s0", print_hash_value);
    transparent_crc(p_930->g_655.s1, "p_930->g_655.s1", print_hash_value);
    transparent_crc(p_930->g_655.s2, "p_930->g_655.s2", print_hash_value);
    transparent_crc(p_930->g_655.s3, "p_930->g_655.s3", print_hash_value);
    transparent_crc(p_930->g_655.s4, "p_930->g_655.s4", print_hash_value);
    transparent_crc(p_930->g_655.s5, "p_930->g_655.s5", print_hash_value);
    transparent_crc(p_930->g_655.s6, "p_930->g_655.s6", print_hash_value);
    transparent_crc(p_930->g_655.s7, "p_930->g_655.s7", print_hash_value);
    transparent_crc(p_930->g_699, "p_930->g_699", print_hash_value);
    transparent_crc(p_930->g_705.x, "p_930->g_705.x", print_hash_value);
    transparent_crc(p_930->g_705.y, "p_930->g_705.y", print_hash_value);
    transparent_crc(p_930->g_705.z, "p_930->g_705.z", print_hash_value);
    transparent_crc(p_930->g_705.w, "p_930->g_705.w", print_hash_value);
    transparent_crc(p_930->g_730, "p_930->g_730", print_hash_value);
    transparent_crc(p_930->g_735.s0, "p_930->g_735.s0", print_hash_value);
    transparent_crc(p_930->g_735.s1, "p_930->g_735.s1", print_hash_value);
    transparent_crc(p_930->g_735.s2, "p_930->g_735.s2", print_hash_value);
    transparent_crc(p_930->g_735.s3, "p_930->g_735.s3", print_hash_value);
    transparent_crc(p_930->g_735.s4, "p_930->g_735.s4", print_hash_value);
    transparent_crc(p_930->g_735.s5, "p_930->g_735.s5", print_hash_value);
    transparent_crc(p_930->g_735.s6, "p_930->g_735.s6", print_hash_value);
    transparent_crc(p_930->g_735.s7, "p_930->g_735.s7", print_hash_value);
    transparent_crc(p_930->g_735.s8, "p_930->g_735.s8", print_hash_value);
    transparent_crc(p_930->g_735.s9, "p_930->g_735.s9", print_hash_value);
    transparent_crc(p_930->g_735.sa, "p_930->g_735.sa", print_hash_value);
    transparent_crc(p_930->g_735.sb, "p_930->g_735.sb", print_hash_value);
    transparent_crc(p_930->g_735.sc, "p_930->g_735.sc", print_hash_value);
    transparent_crc(p_930->g_735.sd, "p_930->g_735.sd", print_hash_value);
    transparent_crc(p_930->g_735.se, "p_930->g_735.se", print_hash_value);
    transparent_crc(p_930->g_735.sf, "p_930->g_735.sf", print_hash_value);
    transparent_crc(p_930->g_744.x, "p_930->g_744.x", print_hash_value);
    transparent_crc(p_930->g_744.y, "p_930->g_744.y", print_hash_value);
    transparent_crc(p_930->g_744.z, "p_930->g_744.z", print_hash_value);
    transparent_crc(p_930->g_744.w, "p_930->g_744.w", print_hash_value);
    transparent_crc(p_930->g_752.x, "p_930->g_752.x", print_hash_value);
    transparent_crc(p_930->g_752.y, "p_930->g_752.y", print_hash_value);
    transparent_crc(p_930->g_752.z, "p_930->g_752.z", print_hash_value);
    transparent_crc(p_930->g_752.w, "p_930->g_752.w", print_hash_value);
    transparent_crc(p_930->g_753.s0, "p_930->g_753.s0", print_hash_value);
    transparent_crc(p_930->g_753.s1, "p_930->g_753.s1", print_hash_value);
    transparent_crc(p_930->g_753.s2, "p_930->g_753.s2", print_hash_value);
    transparent_crc(p_930->g_753.s3, "p_930->g_753.s3", print_hash_value);
    transparent_crc(p_930->g_753.s4, "p_930->g_753.s4", print_hash_value);
    transparent_crc(p_930->g_753.s5, "p_930->g_753.s5", print_hash_value);
    transparent_crc(p_930->g_753.s6, "p_930->g_753.s6", print_hash_value);
    transparent_crc(p_930->g_753.s7, "p_930->g_753.s7", print_hash_value);
    transparent_crc(p_930->g_755.x, "p_930->g_755.x", print_hash_value);
    transparent_crc(p_930->g_755.y, "p_930->g_755.y", print_hash_value);
    transparent_crc(p_930->g_755.z, "p_930->g_755.z", print_hash_value);
    transparent_crc(p_930->g_755.w, "p_930->g_755.w", print_hash_value);
    transparent_crc(p_930->g_756.s0, "p_930->g_756.s0", print_hash_value);
    transparent_crc(p_930->g_756.s1, "p_930->g_756.s1", print_hash_value);
    transparent_crc(p_930->g_756.s2, "p_930->g_756.s2", print_hash_value);
    transparent_crc(p_930->g_756.s3, "p_930->g_756.s3", print_hash_value);
    transparent_crc(p_930->g_756.s4, "p_930->g_756.s4", print_hash_value);
    transparent_crc(p_930->g_756.s5, "p_930->g_756.s5", print_hash_value);
    transparent_crc(p_930->g_756.s6, "p_930->g_756.s6", print_hash_value);
    transparent_crc(p_930->g_756.s7, "p_930->g_756.s7", print_hash_value);
    transparent_crc(p_930->g_756.s8, "p_930->g_756.s8", print_hash_value);
    transparent_crc(p_930->g_756.s9, "p_930->g_756.s9", print_hash_value);
    transparent_crc(p_930->g_756.sa, "p_930->g_756.sa", print_hash_value);
    transparent_crc(p_930->g_756.sb, "p_930->g_756.sb", print_hash_value);
    transparent_crc(p_930->g_756.sc, "p_930->g_756.sc", print_hash_value);
    transparent_crc(p_930->g_756.sd, "p_930->g_756.sd", print_hash_value);
    transparent_crc(p_930->g_756.se, "p_930->g_756.se", print_hash_value);
    transparent_crc(p_930->g_756.sf, "p_930->g_756.sf", print_hash_value);
    transparent_crc(p_930->g_760.x, "p_930->g_760.x", print_hash_value);
    transparent_crc(p_930->g_760.y, "p_930->g_760.y", print_hash_value);
    transparent_crc(p_930->g_761.x, "p_930->g_761.x", print_hash_value);
    transparent_crc(p_930->g_761.y, "p_930->g_761.y", print_hash_value);
    transparent_crc(p_930->g_761.z, "p_930->g_761.z", print_hash_value);
    transparent_crc(p_930->g_761.w, "p_930->g_761.w", print_hash_value);
    transparent_crc(p_930->g_764.x, "p_930->g_764.x", print_hash_value);
    transparent_crc(p_930->g_764.y, "p_930->g_764.y", print_hash_value);
    transparent_crc(p_930->g_765.s0, "p_930->g_765.s0", print_hash_value);
    transparent_crc(p_930->g_765.s1, "p_930->g_765.s1", print_hash_value);
    transparent_crc(p_930->g_765.s2, "p_930->g_765.s2", print_hash_value);
    transparent_crc(p_930->g_765.s3, "p_930->g_765.s3", print_hash_value);
    transparent_crc(p_930->g_765.s4, "p_930->g_765.s4", print_hash_value);
    transparent_crc(p_930->g_765.s5, "p_930->g_765.s5", print_hash_value);
    transparent_crc(p_930->g_765.s6, "p_930->g_765.s6", print_hash_value);
    transparent_crc(p_930->g_765.s7, "p_930->g_765.s7", print_hash_value);
    transparent_crc(p_930->g_767.s0, "p_930->g_767.s0", print_hash_value);
    transparent_crc(p_930->g_767.s1, "p_930->g_767.s1", print_hash_value);
    transparent_crc(p_930->g_767.s2, "p_930->g_767.s2", print_hash_value);
    transparent_crc(p_930->g_767.s3, "p_930->g_767.s3", print_hash_value);
    transparent_crc(p_930->g_767.s4, "p_930->g_767.s4", print_hash_value);
    transparent_crc(p_930->g_767.s5, "p_930->g_767.s5", print_hash_value);
    transparent_crc(p_930->g_767.s6, "p_930->g_767.s6", print_hash_value);
    transparent_crc(p_930->g_767.s7, "p_930->g_767.s7", print_hash_value);
    transparent_crc(p_930->g_768.x, "p_930->g_768.x", print_hash_value);
    transparent_crc(p_930->g_768.y, "p_930->g_768.y", print_hash_value);
    transparent_crc(p_930->g_768.z, "p_930->g_768.z", print_hash_value);
    transparent_crc(p_930->g_768.w, "p_930->g_768.w", print_hash_value);
    transparent_crc(p_930->g_776, "p_930->g_776", print_hash_value);
    transparent_crc(p_930->g_827.s0, "p_930->g_827.s0", print_hash_value);
    transparent_crc(p_930->g_827.s1, "p_930->g_827.s1", print_hash_value);
    transparent_crc(p_930->g_827.s2, "p_930->g_827.s2", print_hash_value);
    transparent_crc(p_930->g_827.s3, "p_930->g_827.s3", print_hash_value);
    transparent_crc(p_930->g_827.s4, "p_930->g_827.s4", print_hash_value);
    transparent_crc(p_930->g_827.s5, "p_930->g_827.s5", print_hash_value);
    transparent_crc(p_930->g_827.s6, "p_930->g_827.s6", print_hash_value);
    transparent_crc(p_930->g_827.s7, "p_930->g_827.s7", print_hash_value);
    transparent_crc(p_930->g_827.s8, "p_930->g_827.s8", print_hash_value);
    transparent_crc(p_930->g_827.s9, "p_930->g_827.s9", print_hash_value);
    transparent_crc(p_930->g_827.sa, "p_930->g_827.sa", print_hash_value);
    transparent_crc(p_930->g_827.sb, "p_930->g_827.sb", print_hash_value);
    transparent_crc(p_930->g_827.sc, "p_930->g_827.sc", print_hash_value);
    transparent_crc(p_930->g_827.sd, "p_930->g_827.sd", print_hash_value);
    transparent_crc(p_930->g_827.se, "p_930->g_827.se", print_hash_value);
    transparent_crc(p_930->g_827.sf, "p_930->g_827.sf", print_hash_value);
    transparent_crc(p_930->g_838.x, "p_930->g_838.x", print_hash_value);
    transparent_crc(p_930->g_838.y, "p_930->g_838.y", print_hash_value);
    transparent_crc(p_930->g_838.z, "p_930->g_838.z", print_hash_value);
    transparent_crc(p_930->g_838.w, "p_930->g_838.w", print_hash_value);
    transparent_crc(p_930->g_839.x, "p_930->g_839.x", print_hash_value);
    transparent_crc(p_930->g_839.y, "p_930->g_839.y", print_hash_value);
    transparent_crc(p_930->v_collective, "p_930->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 81; i++)
            transparent_crc(p_930->g_special_values[i + 81 * get_linear_group_id()], "p_930->g_special_values[i + 81 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 81; i++)
            transparent_crc(p_930->l_special_values[i], "p_930->l_special_values[i]", print_hash_value);
    transparent_crc(p_930->l_comm_values[get_linear_local_id()], "p_930->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_930->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_930->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
