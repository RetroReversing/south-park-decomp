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

s32 *D_8022154C(s32, s32, s32, void *); /* extern */
s32 func_8026AC4C();
extern char D_800A95E8[];

void func_80256980(void *arg0) {
    s32 *temp_v0;
    s32 temp_a0;

    temp_v0 = D_8022154C(0, 0xFC00, 3, D_800A95E8 + 4);
    M2C_FIELD(arg0, s32 **, 0) = temp_v0;
    temp_a0 = *temp_v0;
    M2C_FIELD(arg0, s32 *, 4) = temp_a0;
    func_8026AC4C(temp_a0, 0, 0xFC00);
}
