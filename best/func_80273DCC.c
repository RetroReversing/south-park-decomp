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
s32 func_8026F7BC();
void func_802701C4();

extern u8 D_800F1F20[];
extern s32 D_800D7908;

s32 func_80273DCC(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 v = arg0;

    if (D_800D7908 == 0) {
        if (v != -1) {
            if (v >= 0x7530) {
                func_802701C4(D_800F1F20);
                return -1;
            }
            return func_8026F7BC(D_800F1F20, v, arg1, arg2, arg3, arg4, arg5, -1);
        }
    }
    return -1;
}
