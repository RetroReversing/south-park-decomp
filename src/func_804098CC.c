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

s32 D_8022D0EC(s32);                                /* extern */
s32 D_8022D104(s32);                                /* extern */
extern M2C_UNK D_8010E4BC;
extern s32 D_8010E4F0;
extern s32 D_8010E500;

void func_804098CC(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(&D_8010E4BC, s32 *, 0) != -1) {
        if (D_8022D104(D_8010E4F0) != 0) {
            func_80273F04(0x2EF, 0);
            D_8010E500 = 0;
            temp_v0 = M2C_FIELD(&D_8010E4BC, s32 *, 0) + 1;
            M2C_FIELD(&D_8010E4BC, s32 *, 0) = temp_v0;
            if (temp_v0 >= 0x10) {
                M2C_FIELD(&D_8010E4BC, s32 *, 0) = 0xF;
            }
            if ((M2C_FIELD(&D_8010E4BC, s32 *, 4) + 7) < M2C_FIELD(&D_8010E4BC, s32 *, 0)) {
                M2C_FIELD(&D_8010E4BC, s32 *, 4) = (s32) (M2C_FIELD(&D_8010E4BC, s32 *, 0) - 7);
            }
        }
        if (D_8022D0EC(D_8010E4F0) != 0) {
            func_80273F04(0x2EF, 0);
            D_8010E500 = 0;
            temp_v0_2 = M2C_FIELD(&D_8010E4BC, s32 *, 0) - 1;
            M2C_FIELD(&D_8010E4BC, s32 *, 0) = temp_v0_2;
            if (temp_v0_2 < 0) {
                M2C_FIELD(&D_8010E4BC, s32 *, 0) = 0;
            }
            if (M2C_FIELD(&D_8010E4BC, s32 *, 0) < M2C_FIELD(&D_8010E4BC, s32 *, 4)) {
                M2C_FIELD(&D_8010E4BC, s32 *, 4) = (s32) M2C_FIELD(&D_8010E4BC, s32 *, 0);
            }
        }
    }
}
