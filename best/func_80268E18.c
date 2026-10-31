/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 D_802046B8(M2C_UNK *, s32, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK D_80221864(M2C_UNK, s32);                   /* extern */
M2C_UNK func_80268DB4(s32, M2C_UNK, void **, M2C_UNK *); /* extern */
extern M2C_UNK D_800CCA80;

void func_80268E18(s32 arg0, M2C_UNK arg1, s32 *arg2, s32 *arg3) {
    void *sp10;
    M2C_UNK sp14;
    s32 temp_v0;

    temp_v0 = D_802046B8(&D_800CCA80, arg0, 4, 1);
    if (temp_v0 != 0) {
        func_80268DB4(temp_v0, arg1, &sp10, &sp14);
        *arg2 = (s32) M2C_FIELD(sp10, u16 *, 4);
        *arg3 = (s32) M2C_FIELD(sp10, u16 *, 6);
        D_80221864(0, temp_v0);
    }
}
