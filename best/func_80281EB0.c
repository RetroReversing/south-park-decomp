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

s32 D_80205340(M2C_UNK *, s16);                     /* extern */
M2C_UNK D_8021E76C(void **, void *);                /* extern */
M2C_UNK D_8021E930(void **, void *);                /* extern */
M2C_UNK D_802A0520(s32);                            /* extern */
M2C_UNK func_802820F8(void *, s32);                 /* extern */
s32 func_802A0500();                                /* extern */
extern M2C_UNK D_800CCA80;

void *func_80281EB0(void **arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, void **arg7) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_s4;
    void *temp_s0;

    temp_s0 = *arg0;
    temp_s4 = func_802A0500();
    if (temp_s0 != NULL) {
        D_8021E930(arg0, temp_s0);
        D_8021E76C(arg0 + 0x14, temp_s0);
        sp18 = arg2;
        sp1C = arg3;
        sp20 = arg4;
        M2C_FIELD(temp_s0, void **, 8) = arg1;
        M2C_FIELD(temp_s0, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_s0, s32 *, 0x10) = arg3;
        M2C_FIELD(temp_s0, s32 *, 0x14) = arg4;
        M2C_FIELD(temp_s0, f32 *, 0x18) = arg5;
        M2C_FIELD(temp_s0, void ***, 0x38) = arg7;
        M2C_FIELD(temp_s0, f32 *, 0x1C) = arg6;
        if (arg7 != NULL) {
            *arg7 = temp_s0;
        }
        func_802820F8(temp_s0 + 0x20, D_80205340(&D_800CCA80, M2C_FIELD(arg1, s16 *, 0)));
        func_802820F8(temp_s0 + 0x2C, D_80205340(&D_800CCA80, M2C_FIELD(arg1, s16 *, 2)));
    }
    D_802A0520(temp_s4);
    return temp_s0;
}
