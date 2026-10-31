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

M2C_UNK D_8023E95C(s32, void *, M2C_UNK);           /* extern */
M2C_UNK func_802872C4(s32, void *);                 /* extern */
extern M2C_UNK D_800B04D8;

void func_80287AF8(s32 arg0, void *arg1) {
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;

    if (M2C_FIELD(arg1, s8 *, 0x174) == 8) {
        M2C_FIELD(arg1, s8 *, 0x174) = 7;
    }
    if (M2C_FIELD(arg1, s8 *, 0x175) == 8) {
        M2C_FIELD(arg1, s8 *, 0x175) = 7;
    }
    if (M2C_FIELD(arg1, s8 *, 0x176) == 8) {
        M2C_FIELD(arg1, s8 *, 0x176) = 7;
    }
    temp_v0 = M2C_FIELD(arg1, s8 *, 0x174);
    if (temp_v0 != 0) {
        M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(*(&D_800B04D8 + (temp_v0 * 4)), s32 *, 8);
    } else {
        temp_v0_2 = M2C_FIELD(arg1, s8 *, 0x175);
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(*(&D_800B04D8 + (temp_v0_2 * 4)), s32 *, 0xC);
        } else {
            temp_v0_3 = M2C_FIELD(arg1, s8 *, 0x176);
            if (temp_v0_3 != 0) {
                M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(*(&D_800B04D8 + (temp_v0_3 * 4)), s32 *, 0x10);
            }
        }
    }
    M2C_FIELD(arg1, s32 *, 0x64) = 0;
    D_8023E95C(arg0, arg1, 0xB);
    func_802872C4(arg0, arg1);
}
