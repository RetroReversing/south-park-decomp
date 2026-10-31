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

M2C_UNK func_802A0938(void *, void *, M2C_UNK);     /* extern */

void func_80274D6C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    void **var_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;

    temp_a1 = M2C_FIELD(arg0, void **, 0) + ((arg1 * 0xB8) + 0x1B14);
    if (M2C_FIELD(temp_a1, s32 *, 0xA8) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0xC8);
        if (temp_a0 != (arg0 + 0xC4)) {
            M2C_FIELD(M2C_FIELD(temp_a0, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_a0, void ***, 4);
            *M2C_FIELD(temp_a0, void ***, 4) = M2C_FIELD(temp_a0, void **, 0);
            func_802A0938(temp_a0 + 8, temp_a1, 0xB8);
            M2C_FIELD(temp_a0, s32 *, 0x44) = arg2;
            M2C_FIELD(temp_a0, f32 *, 0x48) = (f32) M2C_FIELD(arg3, f32 *, 0);
            M2C_FIELD(temp_a0, f32 *, 0x4C) = (f32) M2C_FIELD(arg3, f32 *, 4);
            temp_v0 = arg0 + 4;
            M2C_FIELD(temp_a0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_a0, f32 *, 0x50) = (f32) M2C_FIELD(arg3, f32 *, 8);
            var_v1 = M2C_FIELD(arg0, void ***, 8);
            if (var_v1 != temp_v0) {
loop_4:
                if (M2C_FIELD(var_v1, s16 *, 0x3C) >= M2C_FIELD(temp_a0, s16 *, 0x3C)) {
                    var_v1 = M2C_FIELD(var_v1, void ***, 4);
                    if (var_v1 != temp_v0) {
                        goto loop_4;
                    }
                }
            }
            M2C_FIELD(temp_a0, void ***, 4) = var_v1;
            M2C_FIELD(temp_a0, void **, 0) = (void *) *var_v1;
            M2C_FIELD(*var_v1, void **, 4) = temp_a0;
            *var_v1 = temp_a0;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x26C8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x26CA) = -1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x26A0) = -1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x269C) = -1;
    }
}
