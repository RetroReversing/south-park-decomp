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

M2C_UNK func_80270384(void *);                      /* extern */
M2C_UNK func_802703E8(void *, s16);                 /* extern */
M2C_UNK func_802728A4(void *, s16);                 /* extern */
M2C_UNK func_802728AC(void *, M2C_UNK, s32);        /* extern */
s16 func_80275040(M2C_UNK, void *);                 /* extern */
s16 func_8027504C(M2C_UNK);                         /* extern */
s8 func_80275058(M2C_UNK);                          /* extern */
s8 func_80275088(M2C_UNK);                          /* extern */
s8 func_80275098(M2C_UNK);                          /* extern */
s16 func_802750BC(M2C_UNK);                         /* extern */

s32 func_80274848(void *arg0, M2C_UNK arg1, void *arg2, s32 arg3, s32 arg4) {
    s16 temp_a1_2;
    s32 temp_v0;
    void **var_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v1;

    if (M2C_FIELD(arg0, void **, 0xC8) != (arg0 + 0xC4)) {
        func_80270384(M2C_FIELD(arg0, void **, 0));
        temp_v1 = M2C_FIELD(arg0, void **, 0xC8);
        M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_v1, void ***, 4);
        *M2C_FIELD(temp_v1, void ***, 4) = M2C_FIELD(temp_v1, void **, 0);
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        temp_v0 = M2C_FIELD(temp_a1, s32 *, 0x108);
        M2C_FIELD(temp_v1, s32 *, 0x14) = temp_v0;
        M2C_FIELD(temp_a1, s32 *, 0x108) = (s32) (temp_v0 + 1);
        M2C_FIELD(temp_v1, s32 *, 0xC) = arg3;
        M2C_FIELD(temp_v1, s32 *, 0x44) = -1;
        M2C_FIELD(temp_v1, s16 *, 0x40) = (s16) arg3;
        M2C_FIELD(temp_v1, s16 *, 0x3E) = func_80275040(arg1, temp_a1);
        M2C_FIELD(temp_v1, s16 *, 0x3C) = (s16) func_80275058(arg1);
        M2C_FIELD(temp_v1, s32 *, 0x1C) = (s32) func_8027504C(arg1);
        M2C_FIELD(temp_v1, s8 *, 0x58) = func_80275088(arg1);
        M2C_FIELD(temp_v1, s32 *, 0xA8) = (s32) func_802750BC(arg1);
        M2C_FIELD(temp_v1, s16 *, 0x28) = (s16) func_80275098(arg1);
        M2C_FIELD(temp_v1, s32 *, 0x24) = 0x7D00;
        M2C_FIELD(temp_v1, s32 *, 0x20) = 0x7D00;
        M2C_FIELD(temp_v1, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_v1, s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x104);
        M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(temp_v1, s32 *, 0x4C) = (s32) M2C_FIELD(arg2, s32 *, 4);
        M2C_FIELD(temp_v1, s32 *, 0x50) = (s32) M2C_FIELD(arg2, s32 *, 8);
        M2C_FIELD(temp_v1, s32 *, 0x54) = 0;
        M2C_FIELD(temp_v1, s32 *, 0xB0) = 0;
        M2C_FIELD(temp_v1, s32 *, 0xB4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x27AC);
        temp_s0 = temp_v1 + 8;
        func_802728A4(temp_s0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2790));
        func_802728AC(temp_s0, arg1, arg4);
        temp_v0_2 = arg0 + 4;
        var_v1 = M2C_FIELD(arg0, void ***, 8);
        temp_a1_2 = M2C_FIELD(temp_v1, s16 *, 0x3C);
        if (var_v1 != temp_v0_2) {
loop_2:
            if (M2C_FIELD(var_v1, s16 *, 0x3C) >= temp_a1_2) {
                var_v1 = M2C_FIELD(var_v1, void ***, 4);
                if (var_v1 != temp_v0_2) {
                    goto loop_2;
                }
            }
        }
        M2C_FIELD(temp_v1, void ***, 4) = var_v1;
        M2C_FIELD(temp_v1, void **, 0) = (void *) *var_v1;
        M2C_FIELD(*var_v1, void **, 4) = temp_v1;
        *var_v1 = temp_v1;
        func_802703E8(M2C_FIELD(arg0, void **, 0), temp_a1_2);
        return M2C_FIELD(temp_v1, s32 *, 0x14);
    }
    return -1;
}
