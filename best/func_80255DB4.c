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

M2C_UNK D_802168D8(M2C_UNK *, void *);              /* extern */
M2C_UNK D_8021E710(s32, void *);                    /* extern */
M2C_UNK D_8021E930(void **, void *);                /* extern */
M2C_UNK func_80257824(void *);                      /* extern */
M2C_UNK func_80261CC0(M2C_UNK *, void *);           /* extern */
extern M2C_UNK D_800CE20C;
extern M2C_UNK D_800CEE08;

void func_80255DB4(s32 arg0) {
    s32 *temp_v1_2;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;
    void **temp_s2;
    void *temp_s0;
    void *temp_v0;
    void *var_s1;

    var_s4 = 0;
    var_s3 = 0x30;
    do {
        temp_s2 = arg0 + var_s3;
        var_s1 = *temp_s2;
        if (var_s1 != NULL) {
            do {
                temp_s0 = var_s1;
                temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x40);
                var_s1 = M2C_FIELD(var_s1, void **, 0x1E4);
                if ((temp_v1 & 0x100) && !(temp_v1 & 0x800)) {
                    if (M2C_FIELD(temp_s0, u8 *, 0x1B1) != 0) {
                        func_80257824(temp_s0);
                        func_80261CC0(&D_800CEE08, temp_s0);
                    }
                    temp_v0 = M2C_FIELD(temp_s0, void **, 0x114);
                    if (temp_v0 != NULL) {
                        M2C_FIELD(temp_v0, s16 *, 0x16) = 0;
                        D_802168D8(&D_800CE20C, M2C_FIELD(temp_s0, void **, 0x114));
                        M2C_FIELD(temp_s0, void **, 0x114) = NULL;
                    }
                    temp_v1_2 = M2C_FIELD(temp_s0, s32 **, 0x10C);
                    if (temp_v1_2 != NULL) {
                        *temp_v1_2 -= 1;
                    }
                    M2C_FIELD(temp_s0, s32 *, 0x40) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x40) & ~0x100);
                    D_8021E930(temp_s2, temp_s0);
                    D_8021E710(arg0 + 8, temp_s0);
                    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xF8), void **, 0x34), s8 *, 5) != 3) {
                        D_8021E930(arg0 + 0x1C, temp_s0);
                    }
                }
            } while (var_s1 != NULL);
        }
        var_s4 += 1;
        var_s3 += 0x14;
    } while (var_s4 < 3);
}
