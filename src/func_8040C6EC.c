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

M2C_UNK D_80221948(M2C_UNK, s32);                   /* extern */

void func_8040C6EC(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a1 != 0) {
        D_80221948(0, temp_a1);
    }
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a1_2 != 0) {
        D_80221948(0, temp_a1_2);
    }
    temp_a1_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a1_3 != 0) {
        D_80221948(0, temp_a1_3);
    }
    temp_a1_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a1_4 != 0) {
        D_80221948(0, temp_a1_4);
    }
    temp_a1_5 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a1_5 != 0) {
        D_80221948(0, temp_a1_5);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
