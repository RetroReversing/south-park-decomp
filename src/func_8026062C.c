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

s32 *D_8022154C(M2C_UNK, s32, M2C_UNK, M2C_UNK *);  /* extern */
M2C_UNK func_8026AC4C(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK D_800A98C0;

void func_8026062C(void *arg0, s32 arg1) {
    s32 *temp_v0;
    s32 temp_a0;
    s32 temp_s0;

    temp_s0 = arg1 * 0xFB0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    temp_v0 = D_8022154C(0, temp_s0, 0x23, &D_800A98C0);
    M2C_FIELD(arg0, s32 **, 0) = temp_v0;
    temp_a0 = *temp_v0;
    M2C_FIELD(arg0, s32 *, 4) = temp_a0;
    func_8026AC4C(temp_a0, 0, temp_s0);
}
