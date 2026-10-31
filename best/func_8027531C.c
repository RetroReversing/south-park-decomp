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

s32 D_8021563C(s32);                                /* extern */
s32 func_8026ACD8(s32, s32, s16, s32 *, s32 *);     /* extern */
M2C_UNK func_80270384(void *);                      /* extern */
M2C_UNK func_802703E8(void *);                      /* extern */
s32 func_80270710(void *);                          /* extern */
M2C_UNK func_802964F0(s32, s16);                    /* extern */
M2C_UNK alSndpStop(s32);                         /* extern */
extern f32 D_800AA020;

s32 func_8027531C(void *arg0, s32 arg1, f32 arg2) {
    s32 sp18;
    s32 sp1C;
    s32 temp_a1_2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    void *temp_a1;

    temp_s3 = func_80270710(M2C_FIELD(arg0, void **, 0));
    func_80270384(M2C_FIELD(arg0, void **, 0));
    var_s1 = 0;
    temp_a1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    var_v1 = -1;
    if ((func_8026ACD8(M2C_FIELD(temp_a1, s32 *, 0x2764), M2C_FIELD(temp_a1, s32 *, 0x2768), M2C_FIELD(arg0, s16 *, 0xE), &sp18, &sp1C) != 0) && (var_v1 = sp18, (sp18 != sp1C))) {
        if (sp1C >= var_v1) {
            do {
                var_v1 += 1;
                var_s1 += 0x64;
            } while (sp1C >= var_v1);
        }
        temp_a1_2 = D_8021563C(sp1C) % var_s1;
        var_v1 = sp18;
        if (var_v1 < sp1C) {
            var_s1_2 = 0x64;
loop_6:
            if (var_s1_2 < temp_a1_2) {
                var_v1 += 1;
                var_s1_2 += 0x64;
                if (var_v1 >= sp1C) {
                    M2C_FIELD(arg0, s32 *, 0x10) = var_v1;
                } else {
                    goto loop_6;
                }
            } else {
                goto block_9;
            }
        } else {
            goto block_9;
        }
    } else {
block_9:
        M2C_FIELD(arg0, s32 *, 0x10) = var_v1;
    }
    if (var_v1 == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = var_v1;
        func_802703E8(M2C_FIELD(arg0, void **, 0));
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg2 * D_800AA020);
    if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0) && (M2C_FIELD(arg0, s32 *, 8) != 2)) {
        M2C_FIELD(arg0, s32 *, 8) = 2;
        func_802964F0(temp_s3, M2C_FIELD(arg0, s16 *, 0x1E));
        alSndpStop(temp_s3);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = 1;
    }
    func_802703E8(M2C_FIELD(arg0, void **, 0));
    return temp_v1;
}
