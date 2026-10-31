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

M2C_UNK func_802935F8(void *, void *, s32);         /* extern */
s32 func_80293674(void *, void *);                  /* extern */
M2C_UNK func_8029370C(void *, s16 *, s32);          /* extern */
void *func_80293970(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK alSynAddPlayer(s32, void *);                 /* extern */
extern M2C_UNK D_2961BC;
extern s32 D_800B37B0;

void func_80295C50(void *arg0, void *arg1) {
    s16 sp18;
    u32 var_v1;
    void *temp_s0;
    void *var_a0;

    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x3E80;
    M2C_FIELD(arg0, u32 *, 0x44) = (u32) M2C_FIELD(arg1, u32 *, 0);
    var_a0 = func_80293970(0, 0, M2C_FIELD(arg1, s32 *, 8), 1, M2C_FIELD(arg1, u32 *, 0) * 0x30);
    M2C_FIELD(arg0, void **, 0x40) = var_a0;
    var_v1 = 0;
    if (M2C_FIELD(arg1, u32 *, 0) != 0) {
        do {
            M2C_FIELD(var_a0, s32 *, 0x1C) = 0;
            var_v1 += 1;
            var_a0 += 0x30;
        } while (var_v1 < (u32) M2C_FIELD(arg1, u32 *, 0));
    }
    temp_s0 = arg0 + 0x14;
    func_802935F8(temp_s0, func_80293970(0, 0, M2C_FIELD(arg1, s32 *, 8), 1, M2C_FIELD(arg1, s32 *, 4) * 0x1C), M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 4) = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) D_800B37B0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_2961BC;
    alSynAddPlayer(D_800B37B0, arg0);
    sp18 = 5;
    func_8029370C(temp_s0, &sp18, M2C_FIELD(arg0, s32 *, 0x48));
    M2C_FIELD(arg0, s32 *, 0x4C) = func_80293674(temp_s0, arg0 + 0x28);
}
