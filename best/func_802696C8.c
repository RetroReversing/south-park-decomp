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

M2C_UNK func_80267570(void *, s32, s32, u16 *);     /* extern */
extern void *D_800D7F68;

void func_802696C8(u16 *arg0, void *arg1) {
    u16 *sp10;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    u16 *var_a3;
    u16 temp_s2;
    u16 temp_s4;
    void *temp_a0;
    void *temp_v1;
    void *var_s3;

    var_a3 = arg0;
    var_s5 = 0;
    temp_s4 = M2C_FIELD(var_a3, u16 *, 2);
    var_s3 = (char *)(var_a3); var_s3 += (s32)(8);
    var_s4 = temp_s4 - 1;
    if (temp_s4 != 0) {
        do {
            temp_s2 = *var_a3;
            var_s2 = temp_s2 - 1;
            if (temp_s2 != 0) {
                do {
                    temp_s1 = M2C_FIELD(var_s3, s32 *, 0);
                    temp_s0 = M2C_FIELD(var_s3, s32 *, 4);
                    sp10 = var_a3;
                    func_80267570(var_s3 + 8, temp_s1, temp_s0, var_a3);
                    temp_a1 = var_s5 * 0x10;
                    var_s5 += 4;
                    temp_a2 = var_s2;
                    temp_a0 = D_800D7F68;
                    temp_v1 = D_800D7F68 + 8;
                    D_800D7F68 = temp_v1;
                    M2C_FIELD(temp_a0, s32 *, 0) = 0x01004008;
                    D_800D7F68 = temp_v1 + 8;
                    var_s2 -= 1;
                    M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + temp_a1);
                    M2C_FIELD(D_800D7F68, s32 *, 8) = 0x06040200;
                    M2C_FIELD(temp_v1, s32 *, 4) = 0x604;
                    var_s3 = var_s3 + ((u32) (temp_s1 * temp_s0) >> 1) + 8;
                } while (temp_a2 != 0);
            }
            var_s4 -= 1;
        } while (var_s4 != 0);
    }
}
