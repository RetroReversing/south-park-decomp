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

M2C_UNK D_80204D7C(M2C_UNK *, s32, s32);            /* extern */
M2C_UNK D_802103E0(s32, void *, void *, s32, s32, s32, s32, s32); /* extern */
extern s32 D_800AB9FC;
extern M2C_UNK D_800CCA80;

void func_802578D8(void *arg0) {
    D_80204D7C(&D_800CCA80, arg0 + 4, arg0 + ((D_800AB9FC * 0x18) + 0xC8));
    D_802103E0(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0x10), arg0 + ((D_800AB9FC << 6) + 0x48), arg0 + ((D_800AB9FC * 0x18) + 0xC8), ((u32) M2C_FIELD(arg0, u32 *, 0x40) >> 0x12) & 1, 0, -1, 0, 4);
}
