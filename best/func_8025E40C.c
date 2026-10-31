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

M2C_UNK D_8020FC58();                               /* extern */
extern M2C_UNK D_800A9910;
extern M2C_UNK D_800A9918;
extern M2C_UNK D_800A9920;
extern f32 D_800A9928;
extern f32 D_800A992C;
extern M2C_UNK D_800A9930;
extern M2C_UNK D_800A9938;
extern M2C_UNK D_800A9940;
extern M2C_UNK D_800A9948;
extern M2C_UNK D_800A9950;
extern f32 D_800A9958;
extern f32 D_800A995C;
extern f32 D_800A9960;
extern f32 D_800A9964;
extern M2C_UNK D_800A9968;
extern f32 D_800A9970;
extern f32 D_800A9974;
extern M2C_UNK D_800A9978;
extern M2C_UNK D_800A9980;
extern f32 D_800A9988;
extern f32 D_800A998C;
extern f32 D_800A9990;
extern f32 D_800A9994;
extern M2C_UNK D_800A9998;
extern M2C_UNK D_800A99A0;
extern M2C_UNK D_800A99A8;
extern M2C_UNK D_800A99B0;
extern f32 D_800A99B8;
extern f32 D_800A99BC;
extern M2C_UNK D_800A99C0;
extern M2C_UNK D_800A99C8;
extern f32 D_800A99D0;
extern f32 D_800A99D4;
extern void *D_800D7F68;

void func_8025E40C(void *arg0) {
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_11;
    f32 temp_fv0_12;
    f32 temp_fv0_13;
    f32 temp_fv0_14;
    f32 temp_fv0_15;
    f32 temp_fv0_16;
    f32 temp_fv0_17;
    f32 temp_fv0_18;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fv0;
    f32 var_fv0_10;
    f32 var_fv0_11;
    f32 var_fv0_12;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv0_6;
    f32 var_fv0_7;
    f32 var_fv0_8;
    f32 var_fv0_9;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_19;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    void *temp_a1;
    void *temp_a1_10;
    void *temp_a1_11;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_4;

    D_8020FC58();
    temp_a1 = D_800D7F68;
    temp_v0 = D_800D7F68 + 8;
    D_800D7F68 = temp_v0;
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x2B0);
    temp_fv1f = M2C_FIELD(arg0, f32 *, 0x2B4);
    temp_ft1 = M2C_FIELD(arg0, f32 *, 0x2A8);
    temp_ft0f = M2C_FIELD(arg0, f32 *, 0x2AC);
    M2C_FIELD(temp_a1, s32 *, 0) = 0xE7000000;
    temp_v1 = temp_v0 + 8;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    temp_a1_2 = temp_v0 + 0x10;
    D_800D7F68 = temp_v1;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    temp_a2 = temp_v0 + 0x18;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    D_800D7F68 = temp_a1_2;
    M2C_FIELD(temp_v0, s32 *, 8) = 0xFCFFFFFF;
    M2C_FIELD(temp_v1, s32 *, 4) = 0xFFFDF6FB;
    D_800D7F68 = temp_a2;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0xE200001C;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0x504240;
    temp_a1_3 = temp_v0 + 0x20;
    D_800D7F68 = temp_a1_3;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0xFA000000;
    temp_fv0 = (temp_fv1 + temp_ft1) - M2C_FIELD(&D_800A9910, f32 *, 4);
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
    D_800D7F68 = temp_v0 + 0x28;
    if (!(M2C_FIELD(&D_800A9918, f32 *, 0) <= temp_fv0)) {
        var_v1 = (s32) temp_fv0;
    } else {
        var_v1 = (s32) (temp_fv0 - M2C_FIELD(&D_800A9918, f32 *, 0)) | 0x80000000;
    }
    temp_fv0_2 = temp_fv1f + M2C_FIELD(&D_800A9918, f32 *, 4);
    if (!(M2C_FIELD(&D_800A9920, f32 *, 0) <= temp_fv0_2)) {
        var_v0 = (s32) temp_fv0_2 & 0x3FF;
    } else {
        var_v0 = ((s32) (temp_fv0_2 - M2C_FIELD(&D_800A9920, f32 *, 0)) | 0x80000000) & 0x3FF;
    }
    var_fv0 = M2C_FIELD(&D_800A9920, f32 *, 4);
    M2C_FIELD(temp_v0, s32 *, 0x20) = (s32) (((var_v1 & 0x3FF) << 0xE) | ((var_v0 * 4) | 0xF6000000));
    if (!(var_fv0 <= temp_fv1)) {
        var_v0_2 = (s32) temp_fv1 & 0x3FF;
    } else {
        temp_v1_2 = (s32) (temp_fv1 - var_fv0) | 0x80000000;
        var_fv0 = D_800A9928;
        var_v0_2 = temp_v1_2 & 0x3FF;
    }
    if (!(var_fv0 <= temp_fv1f)) {
        var_v0_3 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_3 = ((s32) (temp_fv1f - var_fv0) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_3, s32 *, 4) = (s32) ((var_v0_2 << 0xE) | (var_v0_3 * 4));
    temp_a1_4 = D_800D7F68;
    temp_fv0_3 = (temp_fv1 + temp_ft1) - D_800A992C;
    D_800D7F68 = temp_a1_4 + 8;
    if (!(M2C_FIELD(&D_800A9930, f32 *, 0) <= temp_fv0_3)) {
        var_v1_2 = (s32) temp_fv0_3;
        var_fv0_2 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_2 = (s32) (temp_fv0_3 - M2C_FIELD(&D_800A9930, f32 *, 0)) | 0x80000000;
        var_fv0_2 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_4 = var_fv0_2 - M2C_FIELD(&D_800A9930, f32 *, 4);
    if (!(M2C_FIELD(&D_800A9938, f32 *, 0) <= temp_fv0_4)) {
        var_v0_4 = (s32) temp_fv0_4 & 0x3FF;
    } else {
        var_v0_4 = ((s32) (temp_fv0_4 - M2C_FIELD(&D_800A9938, f32 *, 0)) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_4, s32 *, 0) = (s32) (((var_v1_2 & 0x3FF) << 0xE) | ((var_v0_4 * 4) | 0xF6000000));
    if (!(M2C_FIELD(&D_800A9938, f32 *, 4) <= temp_fv1)) {
        var_v1_3 = (s32) temp_fv1;
        var_fv0_3 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_3 = (s32) (temp_fv1 - M2C_FIELD(&D_800A9938, f32 *, 4)) | 0x80000000;
        var_fv0_3 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_5 = var_fv0_3 - M2C_FIELD(&D_800A9940, f32 *, 0);
    if (!(M2C_FIELD(&D_800A9940, f32 *, 4) <= temp_fv0_5)) {
        var_v0_5 = (s32) temp_fv0_5 & 0x3FF;
    } else {
        var_v0_5 = ((s32) (temp_fv0_5 - M2C_FIELD(&D_800A9940, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_4, s32 *, 4) = (s32) (((var_v1_3 & 0x3FF) << 0xE) | (var_v0_5 * 4));
    temp_a1_5 = D_800D7F68;
    temp_fv0_6 = temp_fv1 + M2C_FIELD(&D_800A9948, f32 *, 0);
    D_800D7F68 = temp_a1_5 + 8;
    if (!(M2C_FIELD(&D_800A9948, f32 *, 4) <= temp_fv0_6)) {
        var_v1_4 = (s32) temp_fv0_6;
        var_fv0_4 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_4 = (s32) (temp_fv0_6 - M2C_FIELD(&D_800A9948, f32 *, 4)) | 0x80000000;
        var_fv0_4 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_7 = var_fv0_4 - M2C_FIELD(&D_800A9950, f32 *, 0);
    if (!(M2C_FIELD(&D_800A9950, f32 *, 4) <= temp_fv0_7)) {
        var_v0_6 = (s32) temp_fv0_7 & 0x3FF;
    } else {
        var_v0_6 = ((s32) (temp_fv0_7 - M2C_FIELD(&D_800A9950, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    var_fv0_5 = D_800A9958;
    M2C_FIELD(temp_a1_5, s32 *, 0) = (s32) (((var_v1_4 & 0x3FF) << 0xE) | ((var_v0_6 * 4) | 0xF6000000));
    if (!(var_fv0_5 <= temp_fv1)) {
        var_v0_7 = (s32) temp_fv1 & 0x3FF;
    } else {
        temp_v1_3 = (s32) (temp_fv1 - var_fv0_5) | 0x80000000;
        var_fv0_5 = D_800A995C;
        var_v0_7 = temp_v1_3 & 0x3FF;
    }
    if (!(var_fv0_5 <= temp_fv1f)) {
        var_v0_8 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_8 = ((s32) (temp_fv1f - var_fv0_5) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_5, s32 *, 4) = (s32) ((var_v0_7 << 0xE) | (var_v0_8 * 4));
    temp_t3 = D_800D7F68;
    temp_fv0_8 = (temp_fv1 + temp_ft1) - D_800A9960;
    D_800D7F68 = temp_t3 + 8;
    if (!(D_800A9964 <= temp_fv0_8)) {
        var_v1_5 = (s32) temp_fv0_8;
        var_fv0_6 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_5 = (s32) (temp_fv0_8 - D_800A9964) | 0x80000000;
        var_fv0_6 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_9 = var_fv0_6 - M2C_FIELD(&D_800A9968, f32 *, 0);
    if (!(M2C_FIELD(&D_800A9968, f32 *, 4) <= temp_fv0_9)) {
        var_v0_9 = (s32) temp_fv0_9 & 0x3FF;
    } else {
        var_v0_9 = ((s32) (temp_fv0_9 - M2C_FIELD(&D_800A9968, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    temp_fv0_10 = (temp_fv1 + temp_ft1) - D_800A9970;
    M2C_FIELD(temp_t3, s32 *, 0) = (s32) (((var_v1_5 & 0x3FF) << 0xE) | ((var_v0_9 * 4) | 0xF6000000));
    if (!(D_800A9974 <= temp_fv0_10)) {
        var_v1_6 = (s32) temp_fv0_10;
    } else {
        var_v1_6 = (s32) (temp_fv0_10 - D_800A9974) | 0x80000000;
    }
    if (!(M2C_FIELD(&D_800A9978, f32 *, 0) <= temp_fv1f)) {
        var_a1 = (s32) temp_fv1f;
    } else {
        var_a1 = (s32) (temp_fv1f - M2C_FIELD(&D_800A9978, f32 *, 0)) | 0x80000000;
    }
    M2C_FIELD(temp_t3, s32 *, 4) = (s32) (((var_v1_6 & 0x3FF) << 0xE) | ((var_a1 & 0x3FF) * 4));
    temp_a1_6 = D_800D7F68;
    temp_v1_4 = D_800D7F68 + 8;
    D_800D7F68 = temp_v1_4;
    M2C_FIELD(temp_a1_6, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a1_6, s32 *, 4) = 0;
    temp_a1_7 = temp_v1_4 + 8;
    D_800D7F68 = temp_a1_7;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0x300000;
    temp_v0_2 = temp_v1_4 + 0x10;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xE3000A01;
    D_800D7F68 = temp_v0_2;
    M2C_FIELD(temp_v1_4, s32 *, 8) = 0xFCFFFFFF;
    M2C_FIELD(temp_a1_7, s32 *, 4) = 0xFFFE793C;
    temp_a1_8 = temp_v1_4 + 0x18;
    temp_a2_2 = temp_v1_4 + 0x20;
    D_800D7F68 = temp_a1_8;
    M2C_FIELD(temp_v1_4, s32 *, 0x10) = 0xE200001C;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    D_800D7F68 = temp_a2_2;
    M2C_FIELD(temp_v1_4, s32 *, 0x18) = 0xF7000000;
    temp_fv0_11 = (temp_fv1 + temp_ft1) - M2C_FIELD(&D_800A9978, f32 *, 4);
    M2C_FIELD(temp_a1_8, s32 *, 4) = 0x10001;
    D_800D7F68 = temp_v1_4 + 0x28;
    if (!(M2C_FIELD(&D_800A9980, f32 *, 0) <= temp_fv0_11)) {
        var_v1_7 = (s32) temp_fv0_11;
    } else {
        var_v1_7 = (s32) (temp_fv0_11 - M2C_FIELD(&D_800A9980, f32 *, 0)) | 0x80000000;
    }
    if (!(M2C_FIELD(&D_800A9980, f32 *, 4) <= temp_fv1f)) {
        var_v0_10 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_10 = ((s32) (temp_fv1f - M2C_FIELD(&D_800A9980, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    var_fv0_7 = D_800A9988;
    M2C_FIELD(temp_v1_4, s32 *, 0x20) = (s32) (((var_v1_7 & 0x3FF) << 0xE) | ((var_v0_10 * 4) | 0xF6000000));
    if (!(var_fv0_7 <= temp_fv1)) {
        var_v0_11 = (s32) temp_fv1 & 0x3FF;
    } else {
        temp_v1_5 = (s32) (temp_fv1 - var_fv0_7) | 0x80000000;
        var_fv0_7 = D_800A998C;
        var_v0_11 = temp_v1_5 & 0x3FF;
    }
    if (!(var_fv0_7 <= temp_fv1f)) {
        var_v0_12 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_12 = ((s32) (temp_fv1f - var_fv0_7) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a2_2, s32 *, 4) = (s32) ((var_v0_11 << 0xE) | (var_v0_12 * 4));
    temp_a1_9 = D_800D7F68;
    temp_fv0_12 = (temp_fv1 + temp_ft1) - D_800A9990;
    D_800D7F68 = temp_a1_9 + 8;
    if (!(D_800A9994 <= temp_fv0_12)) {
        var_v1_8 = (s32) temp_fv0_12;
        var_fv0_8 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_8 = (s32) (temp_fv0_12 - D_800A9994) | 0x80000000;
        var_fv0_8 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_13 = var_fv0_8 - M2C_FIELD(&D_800A9998, f32 *, 0);
    if (!(M2C_FIELD(&D_800A9998, f32 *, 4) <= temp_fv0_13)) {
        var_v0_13 = (s32) temp_fv0_13 & 0x3FF;
    } else {
        var_v0_13 = ((s32) (temp_fv0_13 - M2C_FIELD(&D_800A9998, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_9, s32 *, 0) = (s32) (((var_v1_8 & 0x3FF) << 0xE) | ((var_v0_13 * 4) | 0xF6000000));
    if (!(M2C_FIELD(&D_800A99A0, f32 *, 0) <= temp_fv1)) {
        var_v1_9 = (s32) temp_fv1;
        var_fv0_9 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_9 = (s32) (temp_fv1 - M2C_FIELD(&D_800A99A0, f32 *, 0)) | 0x80000000;
        var_fv0_9 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_14 = var_fv0_9 - M2C_FIELD(&D_800A99A0, f32 *, 4);
    if (!(M2C_FIELD(&D_800A99A8, f32 *, 0) <= temp_fv0_14)) {
        var_v0_14 = (s32) temp_fv0_14 & 0x3FF;
    } else {
        var_v0_14 = ((s32) (temp_fv0_14 - M2C_FIELD(&D_800A99A8, f32 *, 0)) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_9, s32 *, 4) = (s32) (((var_v1_9 & 0x3FF) << 0xE) | (var_v0_14 * 4));
    temp_a1_10 = D_800D7F68;
    D_800D7F68 = temp_a1_10 + 8;
    if (!(M2C_FIELD(&D_800A99A8, f32 *, 4) <= temp_fv1)) {
        var_v1_10 = (s32) temp_fv1;
        var_fv0_10 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_10 = (s32) (temp_fv1 - M2C_FIELD(&D_800A99A8, f32 *, 4)) | 0x80000000;
        var_fv0_10 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_15 = var_fv0_10 - M2C_FIELD(&D_800A99B0, f32 *, 0);
    if (!(M2C_FIELD(&D_800A99B0, f32 *, 4) <= temp_fv0_15)) {
        var_v0_15 = (s32) temp_fv0_15 & 0x3FF;
    } else {
        var_v0_15 = ((s32) (temp_fv0_15 - M2C_FIELD(&D_800A99B0, f32 *, 4)) | 0x80000000) & 0x3FF;
    }
    var_fv0_11 = D_800A99B8;
    M2C_FIELD(temp_a1_10, s32 *, 0) = (s32) (((var_v1_10 & 0x3FF) << 0xE) | ((var_v0_15 * 4) | 0xF6000000));
    if (!(var_fv0_11 <= temp_fv1)) {
        var_v0_16 = (s32) temp_fv1 & 0x3FF;
    } else {
        temp_v1_6 = (s32) (temp_fv1 - var_fv0_11) | 0x80000000;
        var_fv0_11 = D_800A99BC;
        var_v0_16 = temp_v1_6 & 0x3FF;
    }
    if (!(var_fv0_11 <= temp_fv1f)) {
        var_v0_17 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_17 = ((s32) (temp_fv1f - var_fv0_11) | 0x80000000) & 0x3FF;
    }
    temp_fv0_16 = temp_fv1 + temp_ft1;
    M2C_FIELD(temp_a1_10, s32 *, 4) = (s32) ((var_v0_16 << 0xE) | (var_v0_17 * 4));
    temp_a1_11 = D_800D7F68;
    D_800D7F68 = temp_a1_11 + 8;
    if (!(M2C_FIELD(&D_800A99C0, f32 *, 0) <= temp_fv0_16)) {
        var_v1_11 = (s32) temp_fv0_16;
        var_fv0_12 = temp_fv1f + temp_ft0f;
    } else {
        var_v1_11 = (s32) (temp_fv0_16 - M2C_FIELD(&D_800A99C0, f32 *, 0)) | 0x80000000;
        var_fv0_12 = temp_fv1f + temp_ft0f;
    }
    temp_fv0_17 = var_fv0_12 - M2C_FIELD(&D_800A99C0, f32 *, 4);
    if (!(M2C_FIELD(&D_800A99C8, f32 *, 0) <= temp_fv0_17)) {
        var_v0_18 = (s32) temp_fv0_17 & 0x3FF;
    } else {
        var_v0_18 = ((s32) (temp_fv0_17 - M2C_FIELD(&D_800A99C8, f32 *, 0)) | 0x80000000) & 0x3FF;
    }
    temp_fv0_18 = (temp_fv1 + temp_ft1) - M2C_FIELD(&D_800A99C8, f32 *, 4);
    M2C_FIELD(temp_a1_11, s32 *, 0) = (s32) (((var_v1_11 & 0x3FF) << 0xE) | ((var_v0_18 * 4) | 0xF6000000));
    if (!(D_800A99D0 <= temp_fv0_18)) {
        var_v1_12 = (s32) temp_fv0_18;
    } else {
        var_v1_12 = (s32) (temp_fv0_18 - D_800A99D0) | 0x80000000;
    }
    if (!(D_800A99D4 <= temp_fv1f)) {
        var_v0_19 = (s32) temp_fv1f & 0x3FF;
    } else {
        var_v0_19 = ((s32) (temp_fv1f - D_800A99D4) | 0x80000000) & 0x3FF;
    }
    M2C_FIELD(temp_a1_11, s32 *, 4) = (s32) (((var_v1_12 & 0x3FF) << 0xE) | (var_v0_19 * 4));
}
