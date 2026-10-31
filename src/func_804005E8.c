/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

M2C_UNK func_80400000();                            /* extern */
extern s32 D_800BEE20;
extern s32 D_800BEE24;
extern s32 D_800BEE28;
extern s32 D_800EC058;

void func_804005E8(void) {
    if (D_800BEE20 == -1) {
        if (D_800EC058 != 0x400000) {
            D_800BEE20 = 1;
        } else {
            D_800BEE20 = 0;
        }
    }
    if ((D_800BEE28 == 0) && (D_800BEE24 != D_800BEE20)) {
        func_80400000();
        D_800BEE24 = D_800BEE20;
    }
    if (D_800BEE28 == 1) {
        func_80400000();
        D_800BEE24 = D_800BEE20;
    }
}
