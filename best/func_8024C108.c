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

s32 D_8023E95C(s32);                        /* extern */
extern char D_24BDF8[];
extern char D_24C15C[];
extern char D_24C208[];
extern char D_800B0CC0[];

void func_8024C108(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 **, 0x28) = &D_800B0CC0;
    M2C_FIELD(arg1, s32 **, 0xC4) = &D_24C208;
    M2C_FIELD(arg1, s32 **, 0xD0) = &D_24C15C;
    M2C_FIELD(arg1, s32 **, 0xD8) = &D_24BDF8;
    M2C_FIELD(arg1, s32 *, 0x158) = 0;
    M2C_FIELD(arg1, s32 *, 0x15C) = 0;
    D_8023E95C(0);
}
