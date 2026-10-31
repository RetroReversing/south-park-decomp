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

extern void *D_800D7F68;

void func_80264DE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9) {
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u32 var_t5;
    u32 var_t6;
    u32 var_t7;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t3_3;
    void *temp_t3_4;
    void *temp_t4_2;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_v0;
    void *temp_v0_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (arg5 != 0) {
        var_t7 = arg6 >> 1;
    } else {
        temp_v1 = arg6 * 2;
        var_t7 = 0xFF;
        if (temp_v1 < 0x100) {
            var_t7 = (u32) temp_v1;
        }
    }
    var_t6 = arg7 >> 1;
    if (arg5 == 0) {
        temp_v1_2 = arg7 * 2;
        var_t6 = 0xFF;
        if (temp_v1_2 < 0x100) {
            var_t6 = (u32) temp_v1_2;
        }
    }
    var_t5 = arg8 >> 1;
    if (arg5 == 0) {
        temp_v1_3 = arg8 * 2;
        var_t5 = 0xFF;
        if (temp_v1_3 < 0x100) {
            var_t5 = (u32) temp_v1_3;
        }
    }
    temp_v1_4 = arg6 * 2;
    if (arg5 != 0) {
        var_s3 = 0xFF;
        if (temp_v1_4 < 0x100) {
            var_s3 = temp_v1_4;
        }
    } else {
        var_s3 = (s32) (arg6 >> 1);
    }
    temp_v1_5 = arg7 * 2;
    if (arg5 != 0) {
        var_s2 = 0xFF;
        if (temp_v1_5 < 0x100) {
            var_s2 = temp_v1_5;
        }
    } else {
        var_s2 = (s32) (arg7 >> 1);
    }
    temp_v1_6 = arg8 * 2;
    if (arg5 != 0) {
        var_s1 = 0xFF;
        if (temp_v1_6 < 0x100) {
            var_s1 = temp_v1_6;
        }
    } else {
        var_s1 = (s32) (arg8 >> 1);
    }
    temp_t9 = arg9 & 0xFF;
    temp_t0 = D_800D7F68 + 8;
    temp_t8 = temp_t0 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 0) = 0xE7000000;
    M2C_FIELD(D_800D7F68, s32 *, 4) = 0;
    temp_t3 = temp_t0 + 0x10;
    D_800D7F68 = temp_t0;
    D_800D7F68 = temp_t8;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xFA00FFFF;
    M2C_FIELD(temp_t0, s32 *, 4) = (s32) ((arg6 << 0x18) | ((arg7 & 0xFF) << 0x10) | ((arg8 & 0xFF) << 8) | temp_t9);
    D_800D7F68 = temp_t3;
    var_t4 = var_a2;
    if (var_a2 < 0) {
        var_t4 = 0;
    }
    var_v1 = var_a3;
    if (var_a3 < 0) {
        var_v1 = 0;
    }
    M2C_FIELD(temp_t0, s32 *, 8) = (s32) (((var_t4 & 0x3FF) << 0xE) | (((var_v1 & 0x3FF) * 4) | 0xF6000000));
    var_v0 = arg0;
    if (arg0 < 0) {
        var_v0 = 0;
    }
    var_a0 = var_a1;
    if (var_a1 < 0) {
        var_a0 = 0;
    }
    var_t2 = var_a2;
    temp_a0 = temp_t0 + 0x18;
    M2C_FIELD(temp_t8, s32 *, 4) = (s32) (((var_v0 & 0x3FF) << 0xE) | ((var_a0 & 0x3FF) * 4));
    temp_t8_2 = temp_t0 + 0x20;
    M2C_FIELD(temp_t0, s32 *, 0x10) = 0xE7000000;
    M2C_FIELD(temp_t3, s32 *, 4) = 0;
    M2C_FIELD(temp_t0, s32 *, 0x18) = 0xFA00FFFF;
    temp_t4 = (var_t7 << 0x18) | ((var_t6 & 0xFF) << 0x10) | ((var_t5 & 0xFF) << 8) | temp_t9;
    temp_t3_2 = temp_t0 + 0x28;
    D_800D7F68 = temp_a0;
    D_800D7F68 = temp_t8_2;
    M2C_FIELD(temp_a0, s32 *, 4) = temp_t4;
    D_800D7F68 = temp_t3_2;
    if (var_a2 < 0) {
        var_t2 = 0;
    }
    var_v1_2 = var_a1 + arg4;
    if (var_v1_2 < 0) {
        var_v1_2 = 0;
    }
    M2C_FIELD(temp_t0, s32 *, 0x20) = (s32) (((var_t2 & 0x3FF) << 0xE) | (((var_v1_2 & 0x3FF) * 4) | 0xF6000000));
    var_v0_2 = arg0;
    if (arg0 < 0) {
        var_v0_2 = 0;
    }
    var_v1_3 = var_a1;
    if (var_a1 < 0) {
        var_v1_3 = 0;
    }
    var_t1 = var_a2;
    M2C_FIELD(temp_t8_2, s32 *, 4) = (s32) (((var_v0_2 & 0x3FF) << 0xE) | ((var_v1_3 & 0x3FF) * 4));
    temp_v0 = temp_t0 + 0x30;
    M2C_FIELD(temp_t0, s32 *, 0x28) = 0xE7000000;
    M2C_FIELD(temp_t3_2, s32 *, 4) = 0;
    temp_t3_3 = temp_t0 + 0x38;
    M2C_FIELD(temp_t0, s32 *, 0x30) = 0xFA00FFFF;
    M2C_FIELD(temp_v0, s32 *, 4) = temp_t4;
    temp_t4_2 = temp_t0 + 0x40;
    D_800D7F68 = temp_v0;
    D_800D7F68 = temp_t3_3;
    D_800D7F68 = temp_t4_2;
    if (var_a2 < 0) {
        var_t1 = 0;
    }
    var_v1_4 = var_a3;
    if (var_a3 < 0) {
        var_v1_4 = 0;
    }
    M2C_FIELD(temp_t0, s32 *, 0x38) = (s32) (((var_t1 & 0x3FF) << 0xE) | (((var_v1_4 & 0x3FF) * 4) | 0xF6000000));
    var_v0_3 = var_a2 - arg4;
    if (var_v0_3 < 0) {
        var_v0_3 = 0;
    }
    var_v1_5 = var_a1;
    if (var_a1 < 0) {
        var_v1_5 = 0;
    }
    temp_a0_2 = temp_t0 + 0x48;
    M2C_FIELD(temp_t3_3, s32 *, 4) = (s32) (((var_v0_3 & 0x3FF) << 0xE) | ((var_v1_5 & 0x3FF) * 4));
    temp_t3_4 = temp_t0 + 0x50;
    temp_v1_7 = (var_s3 << 0x18) | ((var_s2 & 0xFF) << 0x10) | ((var_s1 & 0xFF) << 8) | (arg9 & 0xFF);
    temp_t2 = temp_t0 + 0x58;
    D_800D7F68 = temp_a0_2;
    M2C_FIELD(temp_t0, s32 *, 0x40) = 0xE7000000;
    M2C_FIELD(temp_t4_2, s32 *, 4) = 0;
    D_800D7F68 = temp_t3_4;
    M2C_FIELD(temp_t0, s32 *, 0x48) = 0xFA00FFFF;
    M2C_FIELD(temp_a0_2, s32 *, 4) = temp_v1_7;
    D_800D7F68 = temp_t2;
    if (var_a2 < 0) {
        var_a2 = 0;
    }
    var_a0_2 = var_a3;
    if (var_a3 < 0) {
        var_a0_2 = 0;
    }
    M2C_FIELD(temp_t0, s32 *, 0x50) = (s32) (((var_a2 & 0x3FF) << 0xE) | (((var_a0_2 & 0x3FF) * 4) | 0xF6000000));
    var_v0_4 = arg0;
    if (arg0 < 0) {
        var_v0_4 = 0;
    }
    var_a0_3 = var_a3 - arg4;
    if (var_a0_3 < 0) {
        var_a0_3 = 0;
    }
    var_a2_2 = arg0 + arg4;
    M2C_FIELD(temp_t3_4, s32 *, 4) = (s32) (((var_v0_4 & 0x3FF) << 0xE) | ((var_a0_3 & 0x3FF) * 4));
    temp_v0_2 = temp_t0 + 0x60;
    temp_t1 = temp_t0 + 0x68;
    D_800D7F68 = temp_v0_2;
    M2C_FIELD(temp_t0, s32 *, 0x58) = 0xE7000000;
    M2C_FIELD(temp_t2, s32 *, 4) = 0;
    M2C_FIELD(temp_t0, s32 *, 0x60) = 0xFA00FFFF;
    M2C_FIELD(temp_v0_2, s32 *, 4) = temp_v1_7;
    D_800D7F68 = temp_t1;
    D_800D7F68 = temp_t0 + 0x70;
    if (var_a2_2 < 0) {
        var_a2_2 = 0;
    }
    if (var_a3 < 0) {
        var_a3 = 0;
    }
    var_a0_4 = arg0;
    M2C_FIELD(temp_t0, s32 *, 0x68) = (s32) (((var_a2_2 & 0x3FF) << 0xE) | (((var_a3 & 0x3FF) * 4) | 0xF6000000));
    if (var_a0_4 < 0) {
        var_a0_4 = 0;
    }
    if (var_a1 < 0) {
        var_a1 = 0;
    }
    M2C_FIELD(temp_t1, s32 *, 4) = (s32) (((var_a0_4 & 0x3FF) << 0xE) | ((var_a1 & 0x3FF) * 4));
}
