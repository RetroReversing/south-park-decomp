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

extern s32 D_800BEE20;
extern M2C_UNK D_800BEF6C;
extern M2C_UNK D_800BEF74;
extern M2C_UNK D_800BEF80;
extern M2C_UNK D_800BEF98;

M2C_UNK *func_804006A4(void) {
    switch (D_800BEE20) {                           /* irregular */
    default:
        return &D_800BEF6C;
    case 1:
        return &D_800BEF74;
    case 2:
        return &D_800BEF80;
    case 3:
        return &D_800BEF98;
    }
}
