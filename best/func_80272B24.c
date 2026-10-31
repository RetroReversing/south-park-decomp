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

s32 func_80295C28();
s32 func_802964F0();
s32 alSndpStop();

void func_80272B24(s32 arg0, s32 arg1) {
char *__repair_addr;

    char *var_s3;
    s32 var_s2;
    void *temp_a0;
    void *temp_s1;
    void *var_s0;

    var_s3 = arg0 + 4;
    var_s2 = 0;
    var_s0 = arg0 + 8;
    do {
        if (M2C_FIELD(var_s0, s32 *, 0xA0) == arg1) {
            temp_a0 = M2C_FIELD(var_s0, void **, 0xAC);
            M2C_FIELD(var_s0, s32 *, 0xA4) = 1;
            M2C_FIELD(var_s0, s32 *, 0x48) = 0;
            if (M2C_FIELD(var_s0, s32 *, 0xC) != M2C_FIELD(temp_a0, s32 *, 0x104)) {
                temp_s1 = temp_a0 + 0x84;
__repair_addr = (char *)((temp_a0 + (*(s32 *)var_s3 * 2)));

                func_802964F0(temp_s1, M2C_FIELD(__repair_addr, s16 *, 0xDC));
                if (func_80295C28(temp_s1) != 0) {
                    alSndpStop(temp_s1);
                }
                M2C_FIELD(var_s0, s32 *, 0) = -1;
            }
        }
        var_s0 += 0xB8;
        var_s2 += 1;
        var_s3 += 0xB8;
    } while (var_s2 < 0x11);
}
