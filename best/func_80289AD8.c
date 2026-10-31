/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

f32 D_802157FC(f32, f32, f32);                      /* extern */
f32 D_80215964(f32, f32, M2C_UNK);                  /* extern */
M2C_UNK D_80241C54(void *, void *, s32, f32);       /* extern */
extern f32 D_800AA7C8;
extern f32 D_800AA7CC;
extern M2C_UNK D_800AA7D0;
extern f32 D_800AA7D8;

void func_80289AD8(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 temp_fv0;
    f32 var_fv0f;

    M2C_FIELD(arg1, f32 *, 0x154) = D_80215964(M2C_FIELD(arg1, f32 *, 0x154), M2C_FIELD(arg0, f32 *, 0x1C) * D_800AA7C8, 0x3D8EFA36);
    M2C_FIELD(arg1, f32 *, 0x158) = D_80215964(M2C_FIELD(arg1, f32 *, 0x158), M2C_FIELD(arg2, f32 *, 0x4C) * D_800AA7CC, 0x3E32B8C4);
    temp_fv0 = D_802157FC(M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg2, f32 *, 0x60), M2C_FIELD(arg3, f32 *, 0x18) * M2C_FIELD(&D_800AA7D0, f32 *, 0));
    var_fv0f = M2C_FIELD(&D_800AA7D0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0;
    if ((var_fv0f < temp_fv0) || (var_fv0f = D_800AA7D8, (temp_fv0 < var_fv0f))) {
        M2C_FIELD(arg0, f32 *, 0x1C) = var_fv0f;
    }
    D_80241C54(arg0, arg1, M2C_FIELD(arg1, s32 *, 0x160), M2C_FIELD(arg2, f32 *, 0x4C));
}
