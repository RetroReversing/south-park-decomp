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

M2C_UNK D_802226D8(M2C_UNK);                        /* extern */
M2C_UNK func_8028C850();                            /* extern */
M2C_UNK func_8028C98C(s32);                         /* extern */
M2C_UNK func_8028DF64(f32, f32, M2C_UNK);           /* extern */
M2C_UNK func_804130A0(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK D_800AAA68;
extern s32 D_800AB9F4;
extern void *D_800B3628;
extern s32 D_800B362C;
extern s32 D_800B364C;
extern M2C_UNK D_800CCA80;
extern s32 D_800D7910;

void func_8028E220(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 var_fa0;
    f32 var_fa0_2;
    s32 temp_a0;
    s32 temp_a1;
    void *temp_v0;

    if (D_800B364C != D_800AB9F4) {
        D_800B364C = D_800AB9F4;
        if (D_800B362C == 0) {
            D_800B362C = 1;
            M2C_FIELD(D_800B3628, s32 *, 8) = 0;
            M2C_FIELD(D_800B3628, f32 *, 0x10) = 0.0f;
            M2C_FIELD(D_800B3628, s32 *, 0x28) = 0;
            M2C_FIELD(D_800B3628, s32 *, 0x2C) = 0;
            M2C_FIELD(D_800B3628, s32 *, 0x40) = -1;
            M2C_FIELD(D_800B3628, s32 *, 0x3C) = -1;
            M2C_FIELD(D_800B3628, f32 *, 0x34) = (f32) M2C_FIELD(&D_800AAA68, f32 *, 0);
        }
        if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
            if (D_800D7910 != 0) {
                M2C_FIELD(D_800B3628, f32 *, 0x14) = (f32) M2C_FIELD(D_800B3628, f32 *, 0x10);
            } else {
                M2C_FIELD(D_800B3628, f32 *, 0x10) = M2C_BITWISE(f64, M2C_FIELD(D_800B3628, f32 *, 0x10));
            }
            if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
                temp_fs0 = M2C_FIELD(D_800B3628, f32 *, 0x10);
                var_fa0 = M2C_FIELD(D_800B3628, f32 *, 0x14);
                if (temp_fs0 < var_fa0) {
                    func_8028DF64(var_fa0, M2C_FIELD(D_800B3628, f32 *, 0x1C), 0);
                    var_fa0 = M2C_FIELD(D_800B3628, f32 *, 0x18);
                }
                func_8028DF64(var_fa0, temp_fs0, 0);
            }
        }
        temp_v0 = D_800B3628;
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x40);
        if (temp_a0 != -1) {
            func_8028C98C(temp_a0);
            M2C_FIELD(D_800B3628, s32 *, 0x40) = -1;
        }
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x3C);
        if (temp_a1 != -1) {
            if (M2C_FIELD(&D_800CCA80, s32 *, 0x1774) != temp_a1) {
                func_804130A0(&D_800CCA80, temp_a1, 0);
            }
            M2C_FIELD(D_800B3628, s32 *, 0x3C) = -1;
        }
        if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
            temp_fs0_2 = M2C_FIELD(D_800B3628, f32 *, 0x10);
            var_fa0_2 = M2C_FIELD(D_800B3628, f32 *, 0x14);
            if (temp_fs0_2 < var_fa0_2) {
                func_8028DF64(var_fa0_2, M2C_FIELD(D_800B3628, f32 *, 0x1C), 0);
                var_fa0_2 = M2C_FIELD(D_800B3628, f32 *, 0x18);
            }
            func_8028DF64(var_fa0_2, temp_fs0_2, 0);
            if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
                if (M2C_FIELD(D_800B3628, f32 *, 0x1C) <= M2C_FIELD(D_800B3628, f32 *, 0x10)) {
                    func_8028C850();
                }
                if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
                    D_802226D8(0xA);
                }
            }
        }
    }
}
