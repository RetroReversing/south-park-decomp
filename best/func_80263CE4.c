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

s32 func_80273DCC();
s32 func_80273E60();

void func_80263CE4(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6) {
    if (M2C_FIELD(arg1, u8 *, 0) == 1) {
        if (*M2C_FIELD(arg1, s32 **, 0x14) != 6) {
            goto block_7;
        }
        if (M2C_FIELD(arg1, s32 *, 0x2E4) != 0) {
            M2C_FIELD(arg1, s32 *, 0x2E4) = 0;
            return;
        }
block_7:
        func_80273DCC(arg6);
        return;
    }
    func_80273E60(arg6, arg3, arg4, arg5, 0, 0, M2C_FIELD(arg1, s32 *, 0x80));
}
