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

s32 func_80296718();
void *__allocParam();

s32 func_802965E8(void *arg0, void *arg1, void *arg2) {
    void *sp10;
    s32 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp10 = NULL;
    M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg2, u16 *, 0);
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s16 *, 0x1A) = (s16) M2C_FIELD(arg2, u8 *, 4);
    M2C_FIELD(arg1, s16 *, 0x14) = 0;
    M2C_FIELD(arg1, void **, 8) = NULL;
    M2C_FIELD(arg1, u16 *, 0x18) = (u16) M2C_FIELD(arg2, u16 *, 2);
    temp_v0 = func_80296718(arg0, &sp10, (s16) M2C_FIELD(arg2, u16 *, 0));
    if (sp10 != NULL) {
        temp_s0 = M2C_FIELD(sp10, void **, 0xC);
        if (temp_v0 != 0) {
            M2C_FIELD(sp10, s32 *, 0xD8) = 0x200;
            M2C_FIELD(M2C_FIELD(sp10, void **, 8), s32 *, 8) = 0;
            temp_v0_2 = __allocParam(sp10);
            M2C_FIELD(temp_v0_2, s16 *, 8) = 0xB;
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(temp_v0_2, s32 *, 0x10) = (s32) (M2C_FIELD(sp10, s32 *, 0xD8) - 0x40);
            M2C_FIELD(temp_s0, s32 (**)(void *, s32, void *, void *), 8)(temp_s0, 3, temp_v0_2, temp_v0_2);
            temp_v0_3 = __allocParam();
            if (temp_v0_3 != NULL) {
                M2C_FIELD(temp_v0_3, s16 *, 8) = 0xF;
                M2C_FIELD(temp_v0_3, s32 *, 0) = 0;
                M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(sp10, s32 *, 0xD8));
                M2C_FIELD(temp_s0, s32 (**)(void *, s32, void *, void *), 8)(temp_s0, 3, temp_v0_3, temp_v0_3);
            }
        } else {
            M2C_FIELD(sp10, s32 *, 0xD8) = 0;
        }
        M2C_FIELD(sp10, void **, 8) = arg1;
        M2C_FIELD(arg1, void **, 8) = sp10;
    }
    return sp10 != NULL;
}
