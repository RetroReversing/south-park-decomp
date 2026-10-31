/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_802621D4(s32);                         /* extern */
M2C_UNK func_80262BD0(s32);                         /* extern */
M2C_UNK func_80262C28(s32, s32);                    /* extern */
M2C_UNK func_80262CD0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_8026215C(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    func_80262CD0(arg0 + 0x7514, arg0 + 0x6A94, 0x54, 0x20);
    func_80262BD0(arg0 + 0x6A88);
    var_s1 = 0;
    var_s0 = 0x2588;
    do {
        func_80262C28(arg0 + 0x6A88, arg0 + var_s0);
        var_s1 += 1;
        var_s0 += 0xB8;
    } while (var_s1 < 0x60);
    func_802621D4(arg0);
}
