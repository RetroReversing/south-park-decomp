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

M2C_UNK D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_24E8C0;
extern M2C_UNK D_800A92E8;

void func_8024E7E8(void *arg0, M2C_UNK arg1, s32 arg2) {
    D_8021FCD8(0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1, 0, &D_24E8C0, &D_800A92E8, arg2);
}
