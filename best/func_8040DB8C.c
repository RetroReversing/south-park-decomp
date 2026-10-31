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

M2C_UNK func_802A08B8(M2C_UNK *);                   /* extern */
extern M2C_UNK D_800BE344;
extern M2C_UNK D_800D7858;
extern s32 D_8010E7C0;

void func_8040DB8C(void *arg0, u32 arg1) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    func_802A08B8(&D_800BE344);
    var_v1 = 0;
    M2C_FIELD(arg0, u32 *, 0xC) = arg1;
    var_v0 = 0 * 0x10;
loop_1:
    if ((u32) *(&D_800D7858 + var_v0) >= arg1) {
        var_v1 += 1;
        var_v0 = var_v1 * 0x10;
        if (var_v1 >= 0xA) {
            var_v0_2 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_v0_2 = var_v1;
    }
    D_8010E7C0 = var_v0_2;
}
