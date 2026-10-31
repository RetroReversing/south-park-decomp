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

M2C_UNK D_8023D274(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
M2C_UNK D_80241C54(void *, void *, M2C_UNK, f32);   /* extern */
f32 D_80242004(void *, s32, s32, s32);              /* extern */
f32 D_802422A0(void *, s32, s32, s32);              /* extern */
extern M2C_UNK D_800AA648;
extern void *D_800D6358;

void func_8028874C(void *arg0, void *arg1) {
    f32 var_fv0;
    s8 temp_v0;
    void *temp_s0;

    temp_s0 = D_800D6358;
    if ((f32) (s32) D_802422A0(temp_s0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC)) < M2C_FIELD(&D_800AA648, f32 *, 4)) {
        var_fv0 = D_80242004(arg0, M2C_FIELD(temp_s0, s32 *, 4), M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(temp_s0, s32 *, 0xC));
    } else {
        var_fv0 = 0.0f;
    }
    D_80241C54(arg0, arg1, 0x3E567751, var_fv0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), u16 *, 8) != 1) {
        temp_v0 = M2C_FIELD(arg1, s8 *, 0xB3);
        if (temp_v0 == 1) {
            D_8023D274(arg0, 0x91, -1, 0);
            return;
        }
        if (temp_v0 >= 3) {
            M2C_FIELD(arg1, s32 *, 0x17C) = 0;
            D_8023E95C(arg0, arg1, 3);
        }
    }
}
