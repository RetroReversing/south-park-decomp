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

s32 func_8026F7BC(M2C_UNK *, s16, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_802701C4(M2C_UNK *, s16, s32);         /* extern */
extern s32 D_800D7908;
extern M2C_UNK D_800F1F20;

s32 func_80273E60(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_v0;

    if (D_800D7908 != 0) {
        return -1;
    }
    var_v0 = -1;
    if (arg0 != -1) {
        if (arg0 >= 0x7530) {
            func_802701C4(&D_800F1F20, arg0, arg5);
            return -1;
        }
        var_v0 = func_8026F7BC(&D_800F1F20, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
