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

M2C_UNK D_80221948(M2C_UNK, s32);                   /* extern */
M2C_UNK func_8025A554(void *);                      /* extern */
extern M2C_UNK D_800CCA80;
extern void *D_800CE1B8;

void func_8025A198(void) {
    s32 temp_a1;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_s2;
    u16 temp_v1;
    void *temp_s1;
    void *var_s0;
    void *var_s1;
    void *var_s3;

    var_s2 = M2C_FIELD(&D_800CCA80, s32 *, 0xF0);
    temp_s4 = M2C_FIELD(&D_800CCA80, s32 *, 0xF4);
    if (var_s2 < temp_s4) {
        var_s3 = (var_s2 * 0x368) + M2C_FIELD(&D_800CCA80, s32 *, 0xEC);
        do {
            temp_v0 = *M2C_FIELD(var_s3, s32 **, 0x14);
            temp_s1 = var_s3 + 0x168;
            if ((temp_v0 == 1) || (temp_v0 == 0xC)) {
                temp_v1 = M2C_FIELD(var_s3, u16 *, 0xD8);
                if ((temp_v1 != 0x7D4) && (temp_v1 != 0x7D5) && (temp_v1 != 0x3FF) && (temp_v1 != 0x4B5)) {
                    M2C_FIELD(var_s3, s32 *, 0x168) = (s32) (M2C_FIELD(var_s3, s32 *, 0x168) | 0x20);
                    M2C_FIELD(var_s3, s32 *, 0xF4) = (s32) (M2C_FIELD(var_s3, s32 *, 0xF4) & 0xFF7FFFFF & 0xFFEFFFFF);
                    temp_a1 = M2C_FIELD(temp_s1, s32 *, 0x100);
                    if (temp_a1 != 0) {
                        D_80221948(0, temp_a1);
                        M2C_FIELD(temp_s1, s32 *, 0x100) = 0;
                    }
                    temp_v1_2 = M2C_FIELD(var_s3, s32 *, 0xF4) & 0xFFFF7FFF;
                    M2C_FIELD(var_s3, s32 *, 0xF4) = temp_v1_2;
                    if (temp_v1_2 & 0x04000000) {
                        func_8025A554(var_s3);
                    }
                }
            }
            var_s2 += 1;
            var_s3 += 0x368;
        } while (var_s2 < temp_s4);
    }
    var_s0 = D_800CE1B8;
    if (var_s0 != NULL) {
        var_s1 = var_s0 + 0x168;
        do {
            if (M2C_FIELD(var_s1, s32 *, 0xF0) != 0) {
                M2C_FIELD(var_s1, s32 *, 0xF8) = 0;
                M2C_FIELD(var_s1, s16 *, 4) = 0;
                temp_v0_2 = M2C_FIELD(var_s0, s32 *, 0xF4) & 0xFFEFFFFF & 0xFFFF7FFF;
                M2C_FIELD(var_s0, s32 *, 0xF4) = temp_v0_2;
                M2C_FIELD(var_s0, s32 *, 0x168) = (s32) (M2C_FIELD(var_s0, s32 *, 0x168) | 0x20);
                if (temp_v0_2 & 0x04000000) {
                    func_8025A554(var_s0);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0x36C);
            var_s1 = var_s0 + 0x168;
        } while (var_s0 != NULL);
    }
}
