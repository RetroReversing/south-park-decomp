/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK D_80204E88(M2C_UNK, void *);                /* extern */
M2C_UNK D_80247110(void *, void *);                 /* extern */
M2C_UNK func_8025A554(void *);                      /* extern */
s32 func_8028E738();                                /* extern */
extern f32 D_800A9734;
extern f32 D_800A9738;
extern f32 D_800ABA00;
extern M2C_UNK D_800F14B8;

void func_8025A360(void *arg0, M2C_UNK arg1) {
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 *temp_v1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x1C);
    if (var_s0 != NULL) {
        do {
            var_s1 = 0;
            if ((M2C_FIELD(var_s0, f32 *, 0xDC) < M2C_FIELD(&D_800F14B8, f32 *, 0)) && (M2C_FIELD(&D_800F14B8, f32 *, -8) < M2C_FIELD(var_s0, f32 *, 0xE8)) && (M2C_FIELD(var_s0, f32 *, 0xE4) < M2C_FIELD(&D_800F14B8, f32 *, 4)) && (M2C_FIELD(&D_800F14B8, f32 *, -4) < M2C_FIELD(var_s0, f32 *, 0xF0))) {
                var_s1 = 1;
            }
            if (func_8028E738() != 0) {
                var_v0 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0x14), s32 *, 4) & 0x1000;
            } else {
                var_v0 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0x14), s32 *, 4) & 0x800;
            }
            if (var_v0 == 0) {
                var_s1 = 0;
            }
            if (var_s1 != 0) {
                D_80204E88(arg1, var_s0);
                temp_v1 = M2C_FIELD(var_s0, s32 **, 0x370);
                if ((temp_v1 != NULL) && (M2C_FIELD(var_s0, u16 *, 0x16C) == 0)) {
                    *temp_v1 -= 1;
                    M2C_FIELD(var_s0, s32 **, 0x370) = NULL;
                }
            } else {
                temp_a1 = var_s0 + 0x168;
                if (M2C_FIELD(temp_a1, s32 *, 0xF0) != 0) {
                    temp_fv0f = M2C_FIELD(temp_a1, f32 *, 0xF8);
                    if (temp_fv0f == D_800A9734) {
                        M2C_FIELD(temp_a1, f32 *, 0xF8) = (f32) D_800A9738;
                    } else {
                        temp_fv0 = temp_fv0f - D_800ABA00;
                        M2C_FIELD(temp_a1, f32 *, 0xF8) = temp_fv0;
                        if (temp_fv0 <= 0.0f) {
                            M2C_FIELD(temp_a1, f32 *, 0xF8) = 0.0f;
                            M2C_FIELD(temp_a1, s16 *, 4) = 0;
                            M2C_FIELD(var_s0, s32 *, 0x168) = (s32) (M2C_FIELD(var_s0, s32 *, 0x168) | 0x20);
                            D_80247110(var_s0, temp_a1);
                            temp_v0 = M2C_FIELD(var_s0, s32 *, 0xF4) & 0xFFEFFFFF & 0xFFFF7FFF;
                            M2C_FIELD(var_s0, s32 *, 0xF4) = temp_v0;
                            if (temp_v0 & 0x04000000) {
                                func_8025A554(var_s0);
                            }
                        }
                    }
                } else {
                    M2C_FIELD(var_s0, s32 *, 0xF4) = (s32) (M2C_FIELD(var_s0, s32 *, 0xF4) & 0xFFFEFFFF);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0x36C);
        } while (var_s0 != NULL);
    }
}
