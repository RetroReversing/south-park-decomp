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

M2C_UNK func_8024E7C0(void *, s16);                 /* extern */

void func_80283340(void *arg0, s16 *arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 **, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0x10) = arg2;
    func_8024E7C0(arg0 + 0x14, *arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    M2C_FIELD(arg0, s32 *, 0x20C) = 0;
}
