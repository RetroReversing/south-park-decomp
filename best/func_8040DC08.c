/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_8026AB80(void *, void *, s32);         /* extern */
M2C_UNK func_802A0938(void *, s32 *, M2C_UNK);      /* extern */
extern M2C_UNK D_800D7858;
extern M2C_UNK D_800D785C;

void func_8040DC08(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3) {
    s32 temp_s1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;

    var_s1 = 0;
    var_v0 = 0 * 0x10;
loop_1:
    if ((u32) *(&D_800D7858 + var_v0) >= arg3) {
        var_s1 += 1;
        var_v0 = var_s1 * 0x10;
        if (var_s1 >= 0xA) {
            var_v0_2 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_v0_2 = var_s1;
    }
    temp_s1 = var_v0_2 * 0x10;
    temp_s0 = temp_s1 + (&D_800D785C - 0x10);
    func_8026AB80(temp_s1 + &D_800D785C, temp_s0, (9 - var_v0_2) * 0x10);
    func_802A0938(temp_s0, &arg0, 9);
    *(&D_800D7858 + temp_s1) = arg3;
}
