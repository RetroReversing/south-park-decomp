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

s32 D_80210B64(s32, s32, s32, s32 *);               /* extern */
void **D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK D_80221864(M2C_UNK, void **, void *);       /* extern */
M2C_UNK D_8022CF48();                               /* extern */
M2C_UNK D_8022D63C(M2C_UNK);                        /* extern */
M2C_UNK D_80237AF0(void *);                         /* extern */
M2C_UNK func_80255DB4(M2C_UNK *);                   /* extern */
M2C_UNK func_80274210();                            /* extern */
M2C_UNK func_802747AC(s32);                         /* extern */
s32 func_8027482C();                                /* extern */
M2C_UNK func_8028C850(s32);                         /* extern */
s32 func_8028EB90();                                /* extern */
void *func_8028EBBC(s32);                           /* extern */
void *func_8028EC08();                              /* extern */
void *func_8028FE64(void *);                        /* extern */
extern M2C_UNK D_28FAEC;
extern M2C_UNK D_800AA9D0;
extern void *D_800B3628;
extern s32 D_800B3640;
extern s32 D_800B3644;
extern M2C_UNK D_800CCA80;
extern s32 D_800CCAA8;
extern s32 D_800CCAE8;
extern M2C_UNK D_800CE0FC;
extern void *D_800D6358;
extern s32 D_800D78F0;

s32 func_8028C98C(s32 arg0) {
    s32 sp20;
    s32 sp24;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 var_fs0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0_4;
    s32 var_a2;
    s32 var_s1;
    s32 var_s1_2;
    void **temp_v0;
    void **var_s0;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_s0_2;
    void *var_v1;

    if ((M2C_FIELD(&D_800CCA80, s32 *, 0x28) == 0) || (M2C_FIELD(&D_800CCA80, s32 *, 0x68) == 0)) {
        goto block_2;
    }
    D_800B3640 = 0;
    D_800B3644 = 0;
    var_a2 = arg0 + 1;
    if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
        func_8028C850(var_a2);
        var_a2 = arg0; var_a2 += 1;
    }
    temp_v0 = D_8021FCD8(0, D_80210B64(M2C_FIELD(&D_800CCA80, s32 *, 0x68), M2C_FIELD(&D_800CCA80, s32 *, 0x28), var_a2, &sp20), sp20, 0x13, 0, &D_28FAEC, &D_800AA9D0, 1);
    var_s1 = 0;
    if (temp_v0 != NULL) {
        var_fs0 = 0.0f;
        M2C_FIELD(D_800B3628, void ***, 0) = temp_v0;
        M2C_FIELD(D_800B3628, void **, 4) = (void *) *temp_v0;
loop_7:
        if (var_s1 < func_8028EB90()) {
            temp_a0 = func_8028EBBC(var_s1);
            temp_s0 = M2C_FIELD(temp_a0, s32 *, 4);
            var_s1 += 1;
            var_fs0 += M2C_FIELD(((temp_s0 * 0x24) + func_8028FE64(temp_a0)), f32 *, -8);
            goto loop_7;
        }
        M2C_FIELD(D_800B3628, s32 *, 0x20) = 0;
        M2C_FIELD(D_800B3628, f32 *, 0x24) = var_fs0;
        M2C_FIELD(D_800B3628, f32 *, 0x18) = 0.0f;
        M2C_FIELD(D_800B3628, f32 *, 0x1C) = var_fs0;
        temp_v0_2 = func_8028EC08();
        temp_v0_3 = func_8028FE64(temp_v0_2);
        temp_a1 = M2C_FIELD(temp_v0_2, s32 *, 4);
        var_s1_2 = 0;
        if (temp_a1 > 0) {
            var_v1 = temp_v0_3;
            do {
                temp_fv0f = M2C_FIELD(var_v1, f32 *, 0x10);
                if (temp_fv0f < M2C_FIELD(D_800B3628, f32 *, 0x18)) {
                    M2C_FIELD(D_800B3628, f32 *, 0x18) = temp_fv0f;
                }
                temp_fv0f_2 = M2C_FIELD(var_v1, f32 *, 0x10);
                if (M2C_FIELD(D_800B3628, f32 *, 0x1C) < temp_fv0f_2) {
                    M2C_FIELD(D_800B3628, f32 *, 0x1C) = temp_fv0f_2;
                }
                var_s1_2 += 1;
                var_v1 += 0x14;
            } while (var_s1_2 < temp_a1);
        }
        temp_v0_4 = D_80210B64(D_800CCAE8, D_800CCAA8, 0, &sp24);
        if (temp_v0_4 == 0) {
            var_s0 = NULL;
        } else {
            var_s0 = D_8021FCD8(0, temp_v0_4, sp24, 0x13, 0, NULL, &D_800AA9D0, 1);
        }
        temp_v1 = (arg0 * 0x48) + func_8028FE64(*var_s0);
        M2C_FIELD(D_800B3628, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0xC);
        M2C_FIELD(D_800B3628, f32 *, 0x34) = (f32) M2C_FIELD(temp_v1, f32 *, 0x3C);
        M2C_FIELD(D_800B3628, f32 *, 0x38) = (f32) M2C_FIELD(temp_v1, f32 *, 0x38);
        M2C_FIELD(D_800B3628, s32 *, 0x44) = (s32) M2C_FIELD(temp_v1, s32 *, 0x40);
        M2C_FIELD(D_800B3628, s32 *, 0x48) = (s32) M2C_FIELD(temp_v1, s32 *, 0x44);
        D_80221864(0, var_s0, D_800B3628);
        temp_fv0 = M2C_FIELD(D_800B3628, f32 *, 0x18);
        M2C_FIELD(D_800B3628, s32 *, 0x28) = 1;
        M2C_FIELD(D_800B3628, f32 *, 0x10) = temp_fv0;
        M2C_FIELD(D_800B3628, f32 *, 0x14) = temp_fv0;
        func_80255DB4(&D_800CE0FC);
        if (D_800D78F0 != 9) {
            func_80274210();
            func_802747AC(func_8027482C());
        }
        var_s0_2 = D_800D6358;
        if (var_s0_2 != NULL) {
            do {
                D_80237AF0(var_s0_2);
                var_s0_2 = M2C_FIELD(var_s0_2, void **, 0x159C);
            } while (var_s0_2 != NULL);
        }
        D_8022CF48();
        D_8022D63C(0);
        return 1;
    }
block_2:
    return 0;
}
