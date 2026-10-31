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

M2C_UNK D_802096E0(M2C_UNK *, void *, s32, s32, s32, s32); /* extern */
M2C_UNK func_8025AFA0();                            /* extern */
extern M2C_UNK D_800CC760;

void func_8025F54C(void *arg0) {
    f32 temp_fv1;

    func_8025AFA0();
    if (M2C_FIELD(arg0, s32 *, 0x50C) != 0) {
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x2B0);
        D_802096E0(&D_800CC760, arg0 + 0x520, (s32) temp_fv1, (s32) M2C_FIELD(arg0, f32 *, 0x2B4), (s32) (temp_fv1 + M2C_FIELD(arg0, f32 *, 0x2A8)), (s32) (M2C_FIELD(arg0, f32 *, 0x2B4) + M2C_FIELD(arg0, f32 *, 0x2AC)));
    }
}
