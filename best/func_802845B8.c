/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

extern M2C_UNK D_800AA3B8;
extern f32 D_800AA3C0;

void func_802845B8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg7) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    void *temp_t0;
    void *var_a2;

    M2C_FIELD(arg0, s16 *, 0) = (s16) (s32) arg1;
    M2C_FIELD(arg0, s16 *, 2) = (s16) (s32) arg2;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xF) = 0xFF;
    M2C_FIELD(arg0, s16 *, 4) = (s16) (s32) arg3;
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (s32) (arg1 + arg4);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (s32) arg2;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0xFF;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (s32) arg3;
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) (s32) (arg1 + arg4);
    var_a2 = arg0;
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) (s32) (arg2 + arg5);
    M2C_FIELD(var_a2, s16 *, 0x28) = 0x1000;
    M2C_FIELD(var_a2, s16 *, 0x2A) = 0x800;
    M2C_FIELD(var_a2, s8 *, 0x2F) = 0xFF;
    M2C_FIELD(var_a2, s16 *, 0x24) = (s16) (s32) arg3;
    temp_t0 = var_a2 + 0x40;
    M2C_FIELD(var_a2, s16 *, 0x30) = (s16) (s32) arg1;
    M2C_FIELD(var_a2, s16 *, 0x32) = (s16) (s32) (arg2 + arg5);
    M2C_FIELD(var_a2, s16 *, 0x38) = 0;
    M2C_FIELD(var_a2, s16 *, 0x3A) = 0x800;
    M2C_FIELD(var_a2, s8 *, 0x3F) = 0xFF;
    M2C_FIELD(var_a2, s16 *, 0x34) = (s16) (s32) arg3;
    do {
        temp_fv1 = (f32) M2C_FIELD(var_a2, s16 *, 0);
        temp_fv0f = (f32) M2C_FIELD(var_a2, s16 *, 4);
        switch (arg7) {                             /* irregular */
        case 1:
            temp_fv0 = -temp_fv1;
            M2C_FIELD(var_a2, s16 *, 0) = (s16) (s32) temp_fv0f;
            M2C_FIELD(var_a2, s16 *, 4) = (s16) (s32) temp_fv0;
            sp0 = M2C_FIELD(&D_800AA3B8, f32 *, 0);
block_18:
            sp4 = 0.0f;
            sp8 = 0.0f;
            break;
        case 2:
            M2C_FIELD(var_a2, s16 *, 0) = (s16) (s32) -temp_fv1;
            M2C_FIELD(var_a2, s16 *, 4) = (s16) (s32) -temp_fv0f;
            sp0 = 0.0f;
            sp4 = 0.0f;
            sp8 = M2C_FIELD(&D_800AA3B8, f32 *, 4);
            break;
        case 3:
            M2C_FIELD(var_a2, s16 *, 0) = (s16) (s32) -temp_fv0f;
            M2C_FIELD(var_a2, s16 *, 4) = (s16) (s32) temp_fv1;
            sp0 = M2C_FIELD(&D_800AA3B8, f32 *, 4);
            goto block_18;
        case 0:
            M2C_FIELD(var_a2, s16 *, 0) = (s16) (s32) temp_fv1;
            M2C_FIELD(var_a2, s16 *, 4) = (s16) (s32) temp_fv0f;
            sp0 = 0.0f;
            sp4 = 0.0f;
            sp8 = M2C_FIELD(&D_800AA3B8, f32 *, 0);
            break;
        }
        M2C_FIELD(var_a2, s8 *, 0xC) = (s8) (s32) (sp0 * D_800AA3C0);
        M2C_FIELD(var_a2, s8 *, 0xD) = (s8) (s32) (sp4 * D_800AA3C0);
        M2C_FIELD(var_a2, s8 *, 0xE) = (s8) (s32) (sp8 * D_800AA3C0);
        var_a2 += 0x10;
    } while ((s32) var_a2 < (s32) temp_t0);
}
