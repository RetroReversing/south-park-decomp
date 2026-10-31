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

M2C_UNK D_802A0520(s32);                            /* extern */
s32 func_8025FB20(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_8026F21C(void *, s32, M2C_UNK, M2C_UNK); /* extern */
void *func_80271F8C(void *, void *, M2C_UNK, s32);  /* extern */
M2C_UNK func_80272554(void *, s16, s16);            /* extern */
s32 func_80272680(void *, s16);                     /* extern */
M2C_UNK func_80272884(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_802728A4(void *, s16);                 /* extern */
M2C_UNK func_802728AC(void *, void *, s32);         /* extern */
s32 func_80272AC8(void *, s16, s32);                /* extern */
f32 func_80272CD4(M2C_UNK, s32);                    /* extern */
s32 func_80274848(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8029DC78(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_8029DDA0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_802A0500();                                /* extern */
extern M2C_UNK D_800D64F8;

s32 func_8026F598(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_a0;

    M2C_FIELD(arg0, s32 *, 0x279C) = func_8025FB20(&D_800D64F8, arg2);
    if ((!(M2C_FIELD(arg1, u16 *, 6) & 1) || ((var_v0 = -1, (func_80272680(arg0 + 0x1B10, M2C_FIELD(arg0, s16 *, 0x2790)) == 0)) && ((temp_a1 = M2C_FIELD(arg0, s32 *, 0x279C), (temp_a1 == 0)) || (var_v0 = -1, (func_80272CD4(arg2, temp_a1 + 0x134) != 0.0f))))) && (!(M2C_FIELD(arg1, u16 *, 6) & 0x1000) || (temp_a2 = M2C_FIELD(arg0, s32 *, 0x2794), (temp_a2 == -1)) || (var_v0 = -1, (func_80272AC8(arg0 + 0x1B10, M2C_FIELD(arg0, s16 *, 0x2790), temp_a2) == -1)))) {
        if (M2C_FIELD(arg1, s16 *, 2) != 0) {
            return func_80274848(arg0 + 0x138, arg1, arg2, arg3, arg5);
        }
        var_a0 = arg0 + 0x1B10;
        if (M2C_FIELD(arg1, u16 *, 6) & 0x40) {
            func_80272554(arg0 + 0x1B10, M2C_FIELD(arg0, s16 *, 0x2790), M2C_FIELD(arg1, s16 *, 0));
            var_a0 = arg0 + 0x1B10;
        }
        temp_v0 = func_80271F8C(var_a0, arg1, arg3, arg4);
        if (temp_v0 == NULL) {
            return -1;
        }
        func_80272884(temp_v0, arg2, arg6);
        func_802728A4(temp_v0, M2C_FIELD(arg0, s16 *, 0x2790));
        func_802728AC(temp_v0, arg1, arg5);
        temp_s0 = arg0 + 0x110;
        temp_a0 = func_802A0500();
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C) + 1;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = temp_v1;
        if (temp_v1 != 1) {
            D_802A0520(temp_a0);
            func_8029DC78(temp_s0, 0, 1);
        } else {
            D_802A0520(temp_a0);
        }
        func_8026F21C(arg0, M2C_FIELD(temp_v0, s32 *, 0xC), 0, arg2);
        temp_s0_2 = arg0 + 0x110;
        temp_v0_2 = func_802A0500();
        temp_v1_2 = M2C_FIELD(temp_s0_2, s32 *, 0x1C) - 1;
        M2C_FIELD(temp_s0_2, s32 *, 0x1C) = temp_v1_2;
        if (temp_v1_2 != 0) {
            D_802A0520(temp_v0_2);
            func_8029DDA0(temp_s0_2, 0, 1);
            return 0;
        }
        D_802A0520(temp_v0_2);
        var_v0 = 0;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
