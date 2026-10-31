/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

M2C_UNK func_80403338(M2C_UNK, s32);                /* extern */
s32 func_80403FBC(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_80404918();                                /* extern */
s32 func_804056C0(s32, M2C_UNK);                    /* extern */
extern M2C_UNK D_415D90;

s32 func_804059EC(s32 arg0, M2C_UNK arg1) {
    s32 var_v0;

    if (func_80404918() != 0) {
        var_v0 = 1;
        if (func_804056C0(arg0, arg1) == 0) {
            var_v0 = 1;
            if (func_80403FBC(arg1, &D_415D90) == 0) {
                func_80403338(arg1, arg0);
                return 1;
            }
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}
