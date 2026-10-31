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

void *D_80210ADC(s32, M2C_UNK);                     /* extern */
M2C_UNK D_80213190(M2C_UNK32 *, f32 *, f32 *);      /* extern */
M2C_UNK D_802131F8(f32 *, f32 *, f32);              /* extern */
void *func_8028FE64(void *);                        /* extern */
extern M2C_UNK D_800AA9E0;
extern void *D_800B3628;

void *func_8028D3B0(void *arg0, f32 arg1) {
    M2C_UNK32 sp10;
    M2C_UNK32 sp14;
    M2C_UNK32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv1;
    s32 temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_v0 = D_80210ADC(M2C_FIELD(D_800B3628, s32 *, 4), 1);
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 4);
    var_v1 = func_8028FE64(temp_v0);
    if (temp_a0 == 0) {
        sp10 = 0;
        sp14 = 0;
        sp18 = 0;
    } else {
        temp_fv0f = M2C_FIELD(var_v1, f32 *, 0x10);
        if (arg1 <= temp_fv0f) {
            sp10 = M2C_FIELD(var_v1, M2C_UNK32 *, 0);
            sp14 = M2C_FIELD(var_v1, M2C_UNK32 *, 4);
            sp18 = M2C_FIELD(var_v1, M2C_UNK32 *, 8);
        } else {
            temp_v0_2 = (char *)((temp_a0 * 0x14)); temp_v0_2 += (s32)(var_v1);
            temp_a0_2 = temp_v0_2 - 0x14;
            if (M2C_FIELD(temp_a0_2, f32 *, 0x10) <= arg1) {
                sp10 = M2C_FIELD(temp_v0_2, M2C_UNK32 *, -0x14);
                sp14 = M2C_FIELD(temp_a0_2, M2C_UNK32 *, 4);
                sp18 = M2C_FIELD(temp_a0_2, M2C_UNK32 *, 8);
            } else {
                if (temp_fv0f < arg1) {
                    do {
                        var_v1 += 0x14;
                    } while (M2C_FIELD(var_v1, f32 *, 0x10) < arg1);
                }
                temp_fv1 = M2C_FIELD(var_v1, f32 *, -4);
                sp20 = M2C_FIELD(var_v1, f32 *, -0x14);
                sp24 = M2C_FIELD(var_v1, f32 *, -0x10);
                sp28 = M2C_FIELD(var_v1, f32 *, -0xC);
                temp_fs0 = (arg1 - temp_fv1) / (M2C_FIELD(var_v1, f32 *, 0x10) - temp_fv1);
                sp30 = M2C_FIELD(var_v1, f32 *, 0);
                sp34 = M2C_FIELD(var_v1, f32 *, 4);
                sp38 = M2C_FIELD(var_v1, f32 *, 8);
                D_802131F8(&sp20, &sp20, M2C_FIELD(&D_800AA9E0, f32 *, 4) - temp_fs0);
                D_802131F8(&sp30, &sp30, temp_fs0);
                D_80213190(&sp10, &sp20, &sp30);
            }
        }
    }
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp10;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp14;
    M2C_FIELD(arg0, M2C_UNK32 *, 8) = sp18;
    return arg0;
}
