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

void *func_8025FB20(s32 *, f32 *);                  /* extern */
M2C_UNK func_8026F7BC(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 D_800B1E80;
extern s32 D_800D78F0;

void func_802704C4(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    void *temp_a0;
    void *temp_v1;

    if ((D_800B1E80 != 0) && (M2C_FIELD(arg0, s32 *, 0x27B4) != 0) && (D_800D78F0 == 0xD) && (M2C_FIELD(arg0, s32 *, 0x134) > 0)) {
        sp28 = 0.0f;
        sp24 = 0.0f;
        sp20 = 0.0f;
        temp_a0 = func_8025FB20(&D_800D78F0 - 0x13F8, &sp20);
        temp_v1 = temp_a0 + 0x134;
        if (!(M2C_FIELD(arg0, s32 *, 0x104) & 3)) {
            func_8026F7BC(arg0, M2C_FIELD(arg0, s32 *, 0x134), M2C_FIELD(temp_a0, s32 *, 0x134), M2C_FIELD(temp_v1, s32 *, 4), M2C_FIELD(temp_v1, s32 *, 8), 0, 0, -1);
        }
    }
}
