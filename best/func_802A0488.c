/* machine draft (m2c) for sn-n64-281 -G8 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_802A0520(s32);                            /* extern */
M2C_UNK func_8029EC3C(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_802A0500();                                /* extern */
extern M2C_UNK D_800B4938;
extern void *D_800B4940;

void func_802A0488(void) {
    s32 temp_s0;

    temp_s0 = func_802A0500();
    M2C_FIELD(D_800B4940, s16 *, 0x10) = 2;
    func_8029EC3C(&D_800B4938, 2);
    D_802A0520(temp_s0);
}
