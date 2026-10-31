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

s32 D_802046B8(void *, s32, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK D_80221864(M2C_UNK, s32);                   /* extern */
M2C_UNK D_80221CCC(M2C_UNK, s32);                   /* extern */
M2C_UNK func_80267DA8(s32, s16, s16, s32, f32);     /* extern */
M2C_UNK func_80268DB4(s32, M2C_UNK, s32 *, M2C_UNK *); /* extern */
extern M2C_UNK D_800CE388;

void func_8026986C(s32 arg0, M2C_UNK arg1, s16 arg2, s16 arg3, s32 arg4, f32 arg5) {
    s32 sp18;
    M2C_UNK sp1C;
    s32 temp_v0;

    if ((M2C_FIELD(&D_800CE388, s32 *, 0) != 0) && (M2C_FIELD(&D_800CE388, s16 *, 0x88) < 0x200)) {
        temp_v0 = D_802046B8(&D_800CE388 - 0x1908, arg0, 4, 1);
        if (temp_v0 != 0) {
            func_80268DB4(temp_v0, arg1, &sp18, &sp1C);
            if (sp18 != 0) {
                func_80267DA8(sp18, arg2, arg3, arg4, arg5);
                D_80221CCC(0, temp_v0);
            }
            D_80221864(0, temp_v0);
        }
    }
}
