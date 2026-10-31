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

M2C_UNK D_8021E930(void **, void *);                /* extern */
M2C_UNK D_80221948(M2C_UNK, s32);                   /* extern */
s32 func_80402548(void *, void **);                 /* extern */

void func_80403E74(void **arg0) {
    M2C_UNK (*temp_v0)(void *, void **);
    void *temp_s2;
    void *temp_v0_2;
    void *var_s0;

    if ((arg0 == &D_800D6A60) || (D_800D6A60.active == NULL)) {
        var_s0 = *arg0;
        if (var_s0 != NULL) {
            do {
                temp_s2 = M2C_FIELD(var_s0, void **, 0x1D4);
                if (func_80402548(var_s0, arg0) != 0) {
                    temp_v0 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0x18), M2C_UNK (**)(void *, void **), 0x10);
                    if (temp_v0 != NULL) {
                        temp_v0(var_s0, arg0);
                    }
                    temp_v0_2 = M2C_FIELD(var_s0, void **, 0x24);
                    M2C_FIELD(temp_v0_2, s32 *, 0xC0) = 0;
                    M2C_FIELD(temp_v0_2, s32 *, 0xC4) = 0;
                    M2C_FIELD(temp_v0_2, s32 *, 0xCC) = 0;
                    D_8021E930(arg0, var_s0);
                    D_80221948(0, M2C_FIELD(var_s0, s32 *, 0xC));
                }
                var_s0 = temp_s2;
            } while (var_s0 != NULL);
        }
    }
}
