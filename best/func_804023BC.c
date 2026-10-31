/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

void func_804023BC(void *arg0, s32 arg1) {
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;
    s8 temp_a2_2;
    u8 *var_v0;
    void *temp_v1;

    temp_a1 = arg1 & 0xFF;
    temp_t0 = M2C_FIELD(arg0, s16 *, 0);
    var_v0 = M2C_FIELD(arg0, s32 *, 0x10) + (temp_t0 * 0x28) + temp_a1;
    do {
loop_1:
        temp_a2 = M2C_FIELD(arg0, s16 *, 0);
        temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0) + (s8) *var_v0;
        M2C_FIELD(arg0, s16 *, 0) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, u16 *, 0x16) - 1);
        } else if (temp_v0 >= M2C_FIELD(arg0, s32 *, 0x14)) {
            M2C_FIELD(arg0, s16 *, 0) = 0;
        }
        temp_v0_2 = M2C_FIELD(arg0, s16 *, 0);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x10) + (temp_v0_2 * 0x28);
        temp_a2_2 = temp_a2 - temp_v0_2;
        switch (temp_a1) {                          /* irregular */
        case 16:
            if (M2C_FIELD(temp_v1, s32 *, 8) & 0x4000) {
                M2C_FIELD(temp_v1, s8 *, 0x11) = temp_a2_2;
            }
            break;
        case 17:
            if (M2C_FIELD(temp_v1, s32 *, 8) & 0x2000) {
                M2C_FIELD(temp_v1, s8 *, 0x10) = temp_a2_2;
            }
            break;
        case 18:
            if (M2C_FIELD(temp_v1, s32 *, 8) & 0x10000) {
                M2C_FIELD(temp_v1, s8 *, 0x13) = temp_a2_2;
            }
            break;
        case 19:
            if (M2C_FIELD(temp_v1, s32 *, 8) & 0x8000) {
                M2C_FIELD(temp_v1, s8 *, 0x12) = temp_a2_2;
            }
            break;
        }
        var_v0 = temp_v1 + temp_a1;
        if ((M2C_FIELD(temp_v1, s32 *, 8) & 0xC0000) != 0xC0000) {
            goto loop_1;
        }
        var_v0 = temp_v1 + temp_a1;
    } while (M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x18), s32 *, 0x1C) == 0);
    if ((M2C_FIELD(arg0, s16 *, 0) != temp_t0) && !(M2C_FIELD(arg0, s32 *, 8) & 4)) {
        func_80273F04(0x2EF, 0);
    }
}
