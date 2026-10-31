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

M2C_UNK D_8020B858(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK D_8020BDE4(M2C_UNK);                        /* extern */
M2C_UNK func_8024E8B0();                            /* extern */
M2C_UNK func_802614C4(void *, void *, M2C_UNK);     /* extern */
extern void *D_800D7F68;

void func_80262264(void *arg0, M2C_UNK arg1) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s1;

    temp_v1 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    D_8020BDE4(0xE);
    temp_v1_2 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE3000A01;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    D_8020B858(0x1C, 0xE3000A01);
    temp_v1_3 = D_800D7F68;
    D_800D7F68 += 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xD7000000;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0;
    func_8024E8B0();
    temp_v0 = D_800D7F68 + 8;
    M2C_FIELD(D_800D7F68, s32 *, 0) = 0xD9F8FBFF;
    M2C_FIELD(D_800D7F68, s32 *, 4) = 0;
    M2C_FIELD(D_800D7F68, s32 *, 8) = 0xD9FFFFFF;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x200004;
    var_s1 = M2C_FIELD(arg0, void **, 0x7520);
    D_800D7F68 = temp_v0;
    D_800D7F68 = temp_v0 + 8;
    if (var_s1 != NULL) {
        do {
            func_802614C4(arg0, var_s1, arg1);
            var_s1 = M2C_FIELD(var_s1, void **, 4);
        } while (var_s1 != NULL);
    }
}
