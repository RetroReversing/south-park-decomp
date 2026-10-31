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

M2C_UNK func_8029370C(void *, s16 *, s32);          /* extern */
M2C_UNK alUnlink(void *);                      /* extern */
M2C_UNK alLink(void *, void *);              /* extern */
M2C_UNK func_80296A48(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_80296A50(s32, void *, M2C_UNK, s32);   /* extern */

void func_80295134(void *arg0, void *arg1, s32 arg2) {
    s16 sp10;
    void *sp14;
    void *temp_s1;
    void *temp_s2;
    void *var_s0;

    temp_s2 = M2C_FIELD(arg1, void **, 0x10);
    if (M2C_FIELD(temp_s2, u8 *, 0x34) == 0) {
        var_s0 = M2C_FIELD(arg0, void **, 0x50);
        if (var_s0 != NULL) {
            do {
                temp_s1 = M2C_FIELD(var_s0, void **, 0);
                if ((M2C_FIELD(var_s0, s16 *, 0xC) == 6) && (M2C_FIELD(var_s0, s32 *, 0x10) == arg1)) {
                    if (temp_s1 != NULL) {
                        M2C_FIELD(temp_s1, s32 *, 8) = (s32) (M2C_FIELD(temp_s1, s32 *, 8) + M2C_FIELD(var_s0, s32 *, 8));
                    }
                    alUnlink(var_s0);
                    alLink(var_s0, arg0 + 0x48);
                }
                var_s0 = temp_s1;
            } while (var_s0 != NULL);
        }
    }
    M2C_FIELD(temp_s2, s8 *, 0x33) = 0;
    M2C_FIELD(temp_s2, u8 *, 0x34) = 3U;
    M2C_FIELD(temp_s2, s8 *, 0x30) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + arg2);
    func_80296A48(M2C_FIELD(arg0, s32 *, 0x14), arg1, 0);
    func_80296A50(M2C_FIELD(arg0, s32 *, 0x14), arg1, 0, arg2);
    sp10 = 5;
    sp14 = arg1;
    func_8029370C(arg0 + 0x48, &sp10, arg2);
}
