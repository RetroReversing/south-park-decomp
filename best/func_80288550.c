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

extern int D_800CD908;
s32 D_8023E95C(void *, void *, s32);        /* extern */
s32 D_80241C54(void *, void *, s32, f32);   /* extern */
f32 D_80242004(void *, s32, s32, s32);              /* extern */
f32 D_802422A0(void *, s32, s32, s32);              /* extern */
extern f32 D_800ABA00;
extern char D_800CCA80[];

void func_80288550(void *arg0, void *arg1) {
    s32 *var_s2;
    f32 var_fs0;
    s32 temp_s4;
    s32 var_s1;
    void *temp_s0;

    M2C_FIELD(arg1, f32 *, 0x190) -= D_800ABA00;
    temp_s4 = D_800CD908;
    var_fs0 = 0.0f;
    var_s1 = 0;
    if (temp_s4 > 0) {
        var_s2 = &D_800CCA80;
loop_2:
        temp_s0 = M2C_FIELD(var_s2, void **, 0xC88);
        if ((temp_s0 != arg0) && (M2C_FIELD((temp_s0 + 0x168), s8 *, 0x174) == 0xA)) {
            var_s1 += 1;
            if ((s32) D_802422A0(temp_s0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC)) < 0x2710) {
                var_fs0 = D_80242004(arg0, M2C_FIELD(temp_s0, s32 *, 4), M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(temp_s0, s32 *, 0xC));
            } else {
                goto block_7;
            }
        } else {
            var_s1 += 1;
block_7:
            var_s2 += 4;
            if (var_s1 < temp_s4) {
                goto loop_2;
            }
        }
    }
    D_80241C54(arg0, arg1, 0x3E567751, var_fs0);
    if (M2C_FIELD(arg1, f32 *, 0x190) <= 0.0f) {
        M2C_FIELD(arg1, f32 *, 0x190) = 0.0f;
        M2C_FIELD(arg1, f32 *, 0x17C) = 0.0f;
        D_8023E95C(arg0, arg1, 3);
    }
}
