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

s32 func_802A0728(s32);                             /* extern */

void func_80258EF4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_802A0728(1);
    M2C_FIELD(arg1, s32 *, 4) = arg2;
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2E0);
    M2C_FIELD(arg0, void **, 0x2E0) = arg1;
    func_802A0728(temp_v0);
}
