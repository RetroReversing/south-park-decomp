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

s32 func_804083BC(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_804087CC();                            /* extern */
s32 func_8040890C();                                /* extern */
M2C_UNK func_80408B3C();                            /* extern */
s32 func_80408D10(u32);                             /* extern */
s32 func_80408D4C(M2C_UNK);                         /* extern */
s32 func_80408DB4();                                /* extern */
s32 func_80408DC4(u32);                             /* extern */
extern M2C_UNK D_8010E2F8;
extern u32 D_8010E4B8;
extern s16 D_8010E4D4;
extern s16 D_8010E4D6;

s32 func_80409B04(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 var_s0;
    u32 var_s2;

    func_80408B3C();
    var_v0 = func_8040890C() << 0x18;
    var_s1 = -3;
    if (var_v0 == 0) {
        var_s2 = 0;
loop_2:
        var_v0_2 = var_s1 << 0x18;
        if (func_80408D10(var_s2) == 0) {
            var_s1 = -9;
            func_804087CC();
            var_v1 = -9;
            var_s0 = 0;
            M2C_FIELD(&D_8010E2F8, s32 *, 0x1C0) = func_804083BC(&D_8010E2F8, 0x1C0);
            M2C_FIELD(&D_8010E2F8, s16 *, 0x1DE) = 0;
            M2C_FIELD(&D_8010E2F8, s16 *, 0x1DC) = 0;
loop_4:
            if (var_s0 < (u32) D_8010E4B8) {
                var_v1 = func_80408DC4(var_s0);
                if (var_v1 == -3) {
                    D_8010E4D4 = 1;
                }
                var_s0 += 1;
                if (var_v1 == 0) {
                    D_8010E4D6 = 1;
                    var_s1 = 0;
                } else {
                    goto loop_4;
                }
            }
            var_v0_2 = var_s1 << 0x18;
            if (var_v1 != 0) {
                if (D_8010E4D4 == 0) {
                    var_s1 = -9;
                } else {
                    temp_s0 = func_80408DB4();
                    if (temp_s0 >= func_80408D4C(0x19C)) {
                        var_s1 = 0;
                    }
                }
                var_v0_2 = var_s1 << 0x18;
            }
        }
        var_s2 += 1;
        if ((var_v0_2 != 0) && (var_s2 < 4U)) {
            goto loop_2;
        }
        var_v0 = var_s1 << 0x18;
    }
    return var_v0 >> 0x18;
}
