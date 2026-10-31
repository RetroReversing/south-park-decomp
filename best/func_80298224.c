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

u16 func_80298510(f64, f64, s32, s32, void *);      /* extern */
M2C_UNK func_8029D580(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8029E4E0(s32);                             /* extern */
extern M2C_UNK D_800AADB8;
extern M2C_UNK D_800AADBC;
extern M2C_UNK D_800B3948;

void *func_80298224(void *arg0, u16 *arg1, s16 *arg2, s32 arg3, s32 arg4, void *arg5) {
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    void *temp_s0;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_v0;
    void *var_s0;
    void *var_s2;

    temp_s0 = M2C_FIELD(arg0, void **, 0);
    if ((M2C_FIELD(arg0, s32 *, 0x48) != 1) || (arg3 == 0)) {
        return arg5;
    }
    if (temp_s0 == NULL) {
        func_8029D580(&D_800AADB8, &D_800AADBC, 0x16E);
    }
    temp_v0 = M2C_FIELD(temp_s0, void *(**)(void *, u16 *, s32, s32, void *), 4)(temp_s0, arg1, arg3, arg4, arg5);
    temp_s2 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) (*arg1 | 0x08000000);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (((*arg2 + 0x440) << 0x10) | ((arg3 * 2) & 0xFFFF));
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) (((*arg2 + 0x580) & 0xFFFF) | 0x08080000);
    temp_v0_2 = *arg2;
    M2C_FIELD(temp_s2, s32 *, 4) = (s32) (((temp_v0_2 + 0x6C0) << 0x10) | ((unsigned short)(temp_v0_2 + 0x800)));
    var_s2 = temp_s2 + 8;
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        temp_a0 = (s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *(&D_800B3948 + (M2C_FIELD(arg0, s16 *, 0x18) * 2))) >> 0xF;
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) temp_a0;
        M2C_FIELD(arg0, u16 *, 0x26) = func_80298510((f64) M2C_FIELD(arg0, s16 *, 0x1C), (f64) (s16) temp_a0, temp_a0, M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0x24);
        temp_a0_2 = (s32) (M2C_FIELD(arg0, s16 *, 0x1A) * *(&D_800B3948 + ((0x7F - M2C_FIELD(arg0, s16 *, 0x18)) * 2))) >> 0xF;
        M2C_FIELD(arg0, u16 *, 0x2E) = (u16) temp_a0_2;
        temp_s2_2 = var_s2 + 8;
        temp_s2_3 = temp_s2_2 + 8;
        temp_s2_4 = temp_s2_3 + 8;
        M2C_FIELD(arg0, u16 *, 0x2C) = func_80298510((f64) M2C_FIELD(arg0, s16 *, 0x1E), (f64) (s16) temp_a0_2, temp_a0_2, M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0x2A);
        M2C_FIELD(var_s2, s32 *, 4) = 0;
        M2C_FIELD(temp_s2, s32 *, 8) = (s32) ((u16) M2C_FIELD(arg0, s16 *, 0x1C) | 0x09060000);
        temp_s2_5 = temp_s2_4 + 8;
        M2C_FIELD(temp_s2_2, s32 *, 4) = 0;
        M2C_FIELD(var_s2, s32 *, 8) = (s32) ((u16) M2C_FIELD(arg0, s16 *, 0x1E) | 0x09040000);
        M2C_FIELD(temp_s2_2, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x28) | 0x09020000);
        M2C_FIELD(temp_s2_3, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x26) << 0x10) | M2C_FIELD(arg0, u16 *, 0x24));
        M2C_FIELD(temp_s2_3, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x2E) | 0x09000000);
        M2C_FIELD(temp_s2_4, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x2C) << 0x10) | M2C_FIELD(arg0, u16 *, 0x2A));
        var_s2 = temp_s2_5 + 8;
        M2C_FIELD(temp_s2_4, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x20) | 0x09080000);
        var_s0 = var_s2;
        M2C_FIELD(temp_s2_5, s32 *, 4) = (s32) M2C_FIELD(arg0, u16 *, 0x22);
        var_v0 = 0x03090000;
    } else {
        var_s0 = var_s2;
        var_v0 = 0x03080000;
    }
    M2C_FIELD(var_s0, s32 *, 0) = var_v0;
    M2C_FIELD(var_s0, s32 *, 4) = func_8029E4E0(M2C_FIELD(arg0, s32 *, 0x14));
    *arg1 += arg3 * 2;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + arg3);
    return var_s2 + 8;
}
