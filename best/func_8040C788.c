/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern s32 D_800CA528;
extern s32 D_800CA52C;
extern s8 D_800D77EE;
extern s32 D_8010E760;
extern s8 *D_8010E768;
extern void *D_8010E76C;

void func_8040C788(void) {
int __repair_literal;

    s32 var_a3;
    s32 var_t1;
    s32 var_v1;
    s8 **var_a2;
    s8 *temp_a0;
    s8 *temp_a1;
    char *var_a0;

    D_8010E760 = (s32) D_800D77EE;
    var_v1 = 0;
__repair_literal = 0;

    if (D_800D77EE > __repair_literal) {
        var_a0 = D_800D77EE + 0x13;
        do {
            (&D_8010E768)[var_v1] = var_a0;
            var_v1 += 1;
            var_a0 += 0x12;
        } while (var_v1 < D_800D77EE);
    }
    var_t1 = 0;
    if (D_8010E760 > 0) {
        var_a3 = 1;
        do {
            if (var_a3 < D_8010E760) {
                var_a2 = &(&D_8010E768)[var_a3];
                do {
                    temp_a1 = (&D_8010E768)[var_t1];
                    temp_a0 = *var_a2;
                    var_a3 += 1;
                    if ((u8) M2C_FIELD(temp_a1, u8 *, 6) < (u8) M2C_FIELD(temp_a0, u8 *, 6)) {
                        (&D_8010E768)[var_t1] = temp_a0;
                        *var_a2 = temp_a1;
                    }
                    var_a2 += 4;
                } while (var_a3 < D_8010E760);
            }
            var_t1 += 1;
            var_a3 = var_t1 + 1;
        } while (var_t1 < D_8010E760);
    }
    D_800CA528 = M2C_FIELD(D_8010E768, u8 *, 6) != M2C_FIELD(D_8010E76C, u8 *, 6);
    D_800CA52C = M2C_FIELD((&D_8010E768)[D_8010E760 - 1], u8 *, 6) != M2C_FIELD((&D_8010E768)[D_8010E760 - 2], u8 *, 6);
}
