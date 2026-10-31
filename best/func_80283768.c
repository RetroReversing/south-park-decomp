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

M2C_UNK D_802131C4(M2C_UNK *, M2C_UNK *, void *);   /* extern */
f32 func_8026D028(s32, void *);                     /* extern */
M2C_UNK func_8026DFC0(void *, M2C_UNK *);           /* extern */
s32 func_80278A3C(void *, void *, s32, M2C_UNK *);  /* extern */
extern void *D_800F4E28;
extern M2C_UNK D_800F4E38;
extern u8 D_800F4E3B;
extern M2C_UNK D_800F4E3C;
extern M2C_UNK D_800F4E58;
extern void *D_800F4E5C;
extern void *D_800F4E60;
extern M2C_UNK *D_800F4E64;
extern s32 D_800F4E68;
extern s32 D_800F4E6C;
extern s32 D_800F4E70;
extern s32 D_800F4E74;
extern M2C_UNK D_800F4E78;
extern f32 D_800F4E84;
extern s32 D_800F4E88;
extern void *D_800F4E90;
extern M2C_UNK D_801029B0;

void func_80283768(void *arg0, void *arg1) {
    u8 sp10;
    u8 sp11;
    s8 sp12;
    M2C_UNK *temp_a2;
    M2C_UNK *temp_a3;
    M2C_UNK *temp_v0_5;
    M2C_UNK *temp_v1_5;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    f32 temp_fv0f_7;
    s32 temp_a1;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u8 var_v0;
    u8 var_v1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (((u32) &arg0 >= (u32) &D_801029B0) && (M2C_FIELD(D_800F4E90, s32 *, 0xCB4) < 0xC8) && (((temp_v0 = M2C_FIELD(arg1, void **, 4), temp_fv0f = M2C_FIELD(temp_v0, f32 *, 0), (M2C_FIELD(D_800F4E90, f32 *, 0x20) <= temp_fv0f)) && (temp_fv0f <= M2C_FIELD(D_800F4E90, f32 *, 0x28)) && (temp_fv0f_2 = M2C_FIELD(temp_v0, f32 *, 8), (M2C_FIELD(D_800F4E90, f32 *, 0x24) <= temp_fv0f_2)) && (temp_fv0f_2 <= M2C_FIELD(D_800F4E90, f32 *, 0x2C))) || ((temp_v1 = M2C_FIELD(arg1, void **, 8), temp_fv0f_3 = M2C_FIELD(temp_v1, f32 *, 0), (M2C_FIELD(D_800F4E90, f32 *, 0x20) <= temp_fv0f_3)) && (temp_fv0f_3 <= M2C_FIELD(D_800F4E90, f32 *, 0x28)) && (temp_fv0f_4 = M2C_FIELD(temp_v1, f32 *, 8), (M2C_FIELD(D_800F4E90, f32 *, 0x24) <= temp_fv0f_4)) && (temp_fv0f_4 <= M2C_FIELD(D_800F4E90, f32 *, 0x2C))) || ((temp_v1_2 = M2C_FIELD(arg1, void **, 0xC), temp_fv0f_5 = M2C_FIELD(temp_v1_2, f32 *, 0), (M2C_FIELD(D_800F4E90, f32 *, 0x20) <= temp_fv0f_5)) && (temp_fv0f_5 <= M2C_FIELD(D_800F4E90, f32 *, 0x28)) && (temp_fv0f_6 = M2C_FIELD(temp_v1_2, f32 *, 8), (M2C_FIELD(D_800F4E90, f32 *, 0x24) <= temp_fv0f_6)) && (temp_fv0f_6 <= M2C_FIELD(D_800F4E90, f32 *, 0x2C))))) {
        if (arg0 != NULL) {
            temp_v1_3 = M2C_FIELD(D_800F4E90, void **, 0xCB8);
            temp_fv0f_7 = M2C_FIELD(arg0, f32 *, 0xC) + func_8026D028(M2C_FIELD(arg0, s32 *, 0), arg1);
            D_800F4E70 = M2C_FIELD(arg0, s32 *, 8) + 1;
            D_800F4E84 = temp_fv0f_7;
            if ((temp_v1_3 != NULL) && (M2C_FIELD(temp_v1_3, f32 *, 0xC) <= temp_fv0f_7)) {
                return;
            }
            goto block_19;
        }
        D_800F4E84 = 0.0f;
        D_800F4E70 = 0;
block_19:
        temp_s1 = M2C_FIELD(D_800F4E90, void **, 0xCB0);
        M2C_FIELD(D_800F4E90, void **, 0xCB0) = (void *) (temp_s1 + 0x10);
        M2C_FIELD(D_800F4E90, s32 *, 0xCB4) = (s32) (M2C_FIELD(D_800F4E90, s32 *, 0xCB4) + 1);
        M2C_FIELD(temp_s1, void **, 0) = arg1;
        M2C_FIELD(temp_s1, void **, 4) = arg0;
        M2C_FIELD(temp_s1, s32 *, 8) = (s32) D_800F4E70;
        M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) D_800F4E84;
        if (arg1 == M2C_FIELD(D_800F4E90, s32 *, 0)) {
            temp_v0_2 = M2C_FIELD(D_800F4E90, void **, 0xCB8);
            if (temp_v0_2 == NULL) {
                M2C_FIELD(D_800F4E90, void **, 0xCB8) = temp_s1;
                return;
            }
            if (D_800F4E84 < M2C_FIELD(temp_v0_2, f32 *, 0xC)) {
                M2C_FIELD(D_800F4E90, void **, 0xCB8) = temp_s1;
            }
        } else {
            D_800F4E68 = 0;
            D_800F4E6C = 0;
            M2C_FIELD(arg1, u16 *, 2) = (u16) (M2C_FIELD(arg1, u16 *, 2) | 0x8000);
            do {
                temp_v1_4 = M2C_FIELD((arg1 + (D_800F4E6C * 4)), void **, 0x10);
                D_800F4E28 = temp_v1_4;
                if ((temp_v1_4 != NULL) && !(M2C_FIELD(temp_v1_4, u16 *, 2) & 0x8000)) {
                    D_800F4E88 = 0;
                    D_800F4E74 = 0;
loop_29:
                    temp_v0_4 = D_800F4E74 + 1;
                    if (M2C_FIELD((temp_v1_4 + (D_800F4E74 * 4)), s32 *, 0x10) == arg1) {
                        D_800F4E88 = 1;
                    } else {
                        D_800F4E74 = temp_v0_4;
                        if (temp_v0_4 < 3) {
                            goto loop_29;
                        }
                    }
                    if (D_800F4E88 != 0) {
                        func_8026DFC0(D_800F4E28, &D_800F4E78);
                        if (func_80278A3C(D_800F4E90 + 0xCBC, D_800F4E28, D_800F4E74, &D_800F4E78) != 0) {
                            D_802131C4(&D_800F4E78, &D_800F4E78, D_800F4E90 + 4);
                            temp_a1 = D_800F4E68 * 8;
                            temp_fv0 = (M2C_FIELD(&D_800F4E78, f32 *, 0) * M2C_FIELD(&D_800F4E78, f32 *, 0)) + (M2C_FIELD(&D_800F4E78, f32 *, 4) * M2C_FIELD(&D_800F4E78, f32 *, 4)) + (M2C_FIELD(&D_800F4E78, f32 *, 8) * M2C_FIELD(&D_800F4E78, f32 *, 8));
                            *(&D_800F4E38 + (D_800F4E68 * 8)) = D_800F4E6C;
                            D_800F4E68 += 1;
                            D_800F4E84 = temp_fv0;
                            *(&D_800F4E3C + temp_a1) = temp_fv0;
                        }
                    }
                }
                temp_v0_3 = D_800F4E6C + 1;
                D_800F4E6C = temp_v0_3;
            } while (temp_v0_3 < 3);
            switch (D_800F4E68) {
void *__repair_cached_pointer = D_800F4E5C;
                   /* irregular */
            case 0:
                break;
            case 1:
                sp11 = -1U;
                sp12 = -1;
                sp10 = D_800F4E3B;
            default:
block_56:
                if ((s8) sp10 != -1) {
                    func_80283768(temp_s1, M2C_FIELD((arg1 + ((s8) sp10 * 4)), void **, 0x10));
                }
                if ((s8) sp11 != -1) {
                    func_80283768(temp_s1, M2C_FIELD((arg1 + ((s8) sp11 * 4)), void **, 0x10));
                }
                if (sp12 != -1) {
                    func_80283768(temp_s1, M2C_FIELD((arg1 + (sp12 * 4)), void **, 0x10));
                }
                break;
            case 2:
                if (M2C_FIELD(&D_800F4E3C, f32 *, 0) < M2C_FIELD(&D_800F4E3C, f32 *, 8)) {
                    var_v1 = M2C_FIELD(&D_800F4E3C, u8 *, 7);
                    sp10 = M2C_FIELD(&D_800F4E3C, u8 *, -1);
                } else {
                    var_v1 = M2C_FIELD(&D_800F4E3C, u8 *, -1);
                    sp10 = M2C_FIELD(&D_800F4E3C, u8 *, 7);
                }
                sp11 = var_v1;
                var_v0 = -1U;
block_55:
                sp12 = (s8) var_v0;
                goto block_56;
            case 3:
                temp_a2 = &D_800F4E38 + 8;
                temp_a3 = &D_800F4E38 + 0x10;
                M2C_FIELD(&D_800F4E58, M2C_UNK **, 0) = &D_800F4E38;
                M2C_FIELD(&D_800F4E58, M2C_UNK **, 4) = temp_a2;
                M2C_FIELD(&D_800F4E58, M2C_UNK **, 8) = temp_a3;
                if (M2C_FIELD(__repair_cached_pointer, f32 *, 4) < M2C_FIELD(M2C_FIELD(&D_800F4E58, M2C_UNK **, 0), f32 *, 4)) {
                    D_800F4E64 = &D_800F4E38;
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 0) = temp_a2;
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 4) = &D_800F4E38;
                }
                if (M2C_FIELD(D_800F4E60, f32 *, 4) < M2C_FIELD(D_800F4E5C, f32 *, 4)) {
                    temp_v0_5 = M2C_FIELD(&D_800F4E58, M2C_UNK **, 4);
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 4) = temp_a3;
                    D_800F4E64 = temp_v0_5;
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 8) = temp_v0_5;
                }
                if (M2C_FIELD(D_800F4E5C, f32 *, 4) < M2C_FIELD(M2C_FIELD(&D_800F4E58, M2C_UNK **, 0), f32 *, 4)) {
                    temp_v1_5 = M2C_FIELD(&D_800F4E58, M2C_UNK **, 0);
                    D_800F4E64 = temp_v1_5;
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(&D_800F4E58, M2C_UNK **, 4);
                    M2C_FIELD(&D_800F4E58, M2C_UNK **, 4) = temp_v1_5;
                }
                sp10 = M2C_FIELD(M2C_FIELD(&D_800F4E58, M2C_UNK **, 0), u8 *, 3);
                sp11 = M2C_FIELD(D_800F4E5C, u8 *, 3);
                var_v0 = M2C_FIELD(D_800F4E60, u8 *, 3);
                goto block_55;
            }
        }
    }
}
