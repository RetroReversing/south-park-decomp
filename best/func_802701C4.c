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

s32 D_8021563C();                                   /* extern */
M2C_UNK D_80239B10(s32, s32, M2C_UNK, M2C_UNK);     /* extern */
s32 func_8026ACD8(s32, s32, s16, s32 *, s32 *);     /* extern */
M2C_UNK func_8027531C(void *, s16, f32, M2C_UNK);   /* extern */
extern M2C_UNK D_800A9EE8;

void func_802701C4(void *arg0, s16 arg1, void *arg2) {
    s32 sp18;
    s32 sp1C;
    f32 temp_fv0f;
    f32 var_fs0;
    s16 var_a1_2;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 temp_a3;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;

    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x27A8);
    var_fs0 = M2C_FIELD(&D_800A9EE8, f32 *, 4);
    if (!(var_fs0 < temp_fv0f)) {
        var_fs0 = temp_fv0f;
    }
    var_v0 = arg1 < 0x7530;
    if (arg2 != NULL) {
        temp_s3 = M2C_FIELD(arg2, s32 *, 0x334);
        if (temp_s3 != 0) {
            var_s0 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x2758) != 0) {
                var_a1 = -1;
                if ((func_8026ACD8(M2C_FIELD(arg0, s32 *, 0x275C), M2C_FIELD(arg0, s32 *, 0x2758), arg1, &sp18, &sp1C) != 0) && (var_a1 = sp18, (var_a1 != sp1C))) {
                    var_a2 = var_a1;
                    if (sp1C >= var_a1) {
                        var_a0 = (var_a1 * 4) + M2C_FIELD(arg0, s32 *, 0x2760);
                        do {
                            temp_v0 = *var_a0;
                            var_a0 += 4;
                            var_a2 += 1;
                            var_s0 += temp_v0 * 0xA;
                        } while (sp1C >= var_a2);
                    }
                    temp_a3 = D_8021563C() % var_s0;
                    var_a1 = sp18;
                    var_s0_2 = 0;
                    if (var_a1 < sp1C) {
                        var_a0_2 = (var_a1 * 4) + M2C_FIELD(arg0, s32 *, 0x2760);
loop_12:
                        var_s0_2 += *var_a0_2 * 0xA;
                        if (var_s0_2 < temp_a3) {
                            var_a1 += 1;
                            var_a0_2 += 4;
                            if (var_a1 >= sp1C) {

                            } else {
                                goto loop_12;
                            }
                        }
                    }
                }
            } else {
                var_a1 = -1;
            }
            if (var_a1 != -1) {
                D_80239B10(temp_s3, var_a1, 0, 0);
            }
            var_v0 = arg1 < 0x7530;
        }
    }
    if (var_v0 != 0) {
        var_a1_2 = arg1;
    } else {
        var_a1_2 = arg1 - 0x7530;
    }
    func_8027531C(arg0 + 0x27B8, var_a1_2, var_fs0, 0x40);
}
