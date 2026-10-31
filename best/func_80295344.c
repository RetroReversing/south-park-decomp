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

M2C_UNK func_8029370C(void *, s16 *, s32);          /* extern */
s32 func_802956E8(s32);                             /* extern */
M2C_UNK func_802958DC(s32, s32);                    /* extern */
s32 func_80295914(s32, s32 *);                      /* extern */

void func_80295344(void *arg0) {
    s16 sp10;
    s32 sp20;
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x18);
    if ((M2C_FIELD(arg0, s32 *, 0x2C) == 1) && (temp_s0 != 0) && (func_80295914(temp_s0, &sp20) & 0xFF)) {
        if ((M2C_FIELD(arg0, s32 *, 0x84) != 0) && ((func_802956E8(temp_s0) + sp20) >= M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 8))) {
            func_802958DC(temp_s0, M2C_FIELD(arg0, s32 *, 0x7C));
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x84);
            if (temp_v1 != -1) {
                M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_v1 - 1);
            }
        }
        sp10 = 0;
        func_8029370C(arg0 + 0x48, &sp10, sp20 * M2C_FIELD(arg0, s32 *, 0x24));
    }
}
