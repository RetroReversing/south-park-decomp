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

s32 D_80216848(M2C_UNK *, s8);                      /* extern */
M2C_UNK func_80261F64(M2C_UNK *, void *, s8);       /* extern */
M2C_UNK func_80273DCC(s16, s32, s32, s32, void *, s32); /* extern */
extern M2C_UNK D_800CE20C;
extern M2C_UNK D_800CEE08;

void func_80256FE4(void *arg0, void *arg1) {
    s16 temp_a0;
    s8 temp_a1;
    s8 temp_a2;

    temp_a2 = M2C_FIELD(arg1, s8 *, 6);
    if (temp_a2 != -1) {
        func_80261F64(&D_800CEE08, arg0, temp_a2);
    }
    temp_a1 = M2C_FIELD(arg1, s8 *, 7);
    if (temp_a1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x114) = D_80216848(&D_800CE20C, temp_a1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x114) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x40) & 0x100000)) {
        temp_a0 = M2C_FIELD(arg1, s16 *, 0xC);
        if (temp_a0 != 0) {
            func_80273DCC(temp_a0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), arg0 + 4, 0);
        }
    }
}
