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

s32 func_80295C28(void *);                          /* extern */
M2C_UNK func_802964F0(void *, s16);                 /* extern */
M2C_UNK alSndpStop(void *);                      /* extern */

void func_8027312C(void *arg0) {
char *__repair_addr;

    void *temp_a0;
    void *temp_s0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(arg0, s32 *, 0xA8) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    temp_s0 = temp_a0 + 0x84;
    if (M2C_FIELD(arg0, s32 *, 0x10) != M2C_FIELD(temp_a0, s32 *, 0x104)) {
__repair_addr = (char *)((temp_a0 + (M2C_FIELD(arg0, s32 *, 0) * 2)));

        func_802964F0(temp_s0, M2C_FIELD(__repair_addr, s16 *, 0xDC));
        if (func_80295C28(temp_s0) != 0) {
            alSndpStop(temp_s0);
        }
        M2C_FIELD(arg0, s32 *, 4) = -1;
    }
}
