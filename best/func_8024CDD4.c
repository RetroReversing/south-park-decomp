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

s32 D_80200528(M2C_UNK *, void *);                  /* extern */
M2C_UNK D_8023E95C(void *, void *, M2C_UNK);        /* extern */
extern M2C_UNK D_24CEA0;
extern M2C_UNK D_24D258;
extern M2C_UNK D_800B0E08;
extern M2C_UNK D_800CCA80;

void func_8024CDD4(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_v0;

    M2C_ERROR(/* unknown instruction: lld $s5, 0x50ed($s1) */);
    M2C_FIELD(arg1, M2C_UNK **, 0x28) = &D_800B0E08;
    M2C_FIELD(arg1, M2C_UNK **, 0xC4) = &D_24CEA0;
    M2C_FIELD(arg1, M2C_UNK **, 0xCC) = &D_24D258;
    if (D_80200528(&D_800CCA80, arg0) == 1) {
        D_8023E95C(arg0, arg1, 1);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFFF7FFF;
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_v1;
        if (M2C_FIELD(&D_800CCA80, s32 *, 4) == 0) {
            var_v0 = 0x40000000 | temp_v1;
            goto block_4;
        }
    } else {
        D_8023E95C(arg0, arg1, 0);
        var_v0 = M2C_FIELD(arg0, s32 *, 0xF4) | 0x800000;
block_4:
        M2C_FIELD(arg0, s32 *, 0xF4) = var_v0;
    }
}
