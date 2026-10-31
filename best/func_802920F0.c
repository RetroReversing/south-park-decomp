/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

M2C_UNK func_802935F8(void *, M2C_UNK *, s32);      /* extern */
M2C_UNK *func_80293970(M2C_UNK, M2C_UNK, s32, u8, s32); /* extern */
M2C_UNK func_80294FB0(void *);                      /* extern */
M2C_UNK alSynAddPlayer(s32, void *);                 /* extern */
extern M2C_UNK D_292260;
extern s32 D_800B37B0;

void func_802920F0(void *arg0, void *arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    s32 temp_s2;
    s32 var_a0;

    temp_s2 = M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x30) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x1E8;
    M2C_FIELD(arg0, s16 *, 0x32) = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x3E80;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) D_800B37B0;
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0x38) = 9;
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = func_80293970(0, 0, temp_s2, M2C_FIELD(arg1, u8 *, 8), 0x10);
    func_80294FB0(arg0);
    temp_v0 = func_80293970(0, 0, temp_s2, (u8) M2C_FIELD(arg1, s32 *, 0), 0x38);
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = NULL;
    var_a0 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) > 0) {
        var_v1 = temp_v0;
        do {
            var_a0 += 1;
            *var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
            M2C_FIELD(arg0, M2C_UNK **, 0x6C) = var_v1;
            var_v1 += 0x38;
        } while (var_a0 < M2C_FIELD(arg1, s32 *, 0));
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_802935F8(arg0 + 0x48, func_80293970(0, 0, temp_s2, (u8) M2C_FIELD(arg1, s32 *, 4), 0x1C), M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_292260;
    M2C_FIELD(arg0, void **, 4) = arg0;
    alSynAddPlayer(D_800B37B0, arg0);
}
