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

s32 D_80203A94(M2C_UNK);                            /* extern */
s32 D_80204858(s32, s32);                           /* extern */
void *D_80210ADC(void *, M2C_UNK);                  /* extern */
s32 D_80210B64(void *, s32, M2C_UNK, s32 *);        /* extern */
void **D_8021FCD8(M2C_UNK, s32, s32, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK D_80221948(M2C_UNK, void **);               /* extern */
extern M2C_UNK D_20D6F0;
extern M2C_UNK D_800A7668;
extern M2C_UNK D_800A7678;

void func_80414D8C(s32 arg0, void *arg1, M2C_UNK arg2) {
    s32 sp20;
    s32 temp_v0;
    s32 temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void *temp_v0_5;

    temp_v0 = D_80203A94(arg2);
    if (temp_v0 == -1) {
        M2C_FIELD(arg1, s32 *, 8) = 0;
        return;
    }
    temp_v0_2 = D_80204858(arg0, temp_v0);
    temp_v0_3 = D_8021FCD8(0, temp_v0_2, 0x18, 0, 0, NULL, &D_800A7668, 1);
    if (temp_v0_3 != NULL) {
        temp_v0_4 = D_8021FCD8(0, D_80210B64(*temp_v0_3, temp_v0_2, 1, &sp20), sp20, 0, 0, &D_20D6F0, &D_800A7678, 1);
        if (temp_v0_4 != NULL) {
            temp_v0_5 = D_80210ADC(D_80210ADC(D_80210ADC(D_80210ADC(*temp_v0_4, 2), 0), 0), 0);
            M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_v0_5, s32 *, 0);
            M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_v0_5, s32 *, 4);
            M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(temp_v0_5, s32 *, 8);
            M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0_5, s32 *, 0xC);
            M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0_5, s32 *, 0x10);
            M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(temp_v0_5, s32 *, 0x14);
            M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(temp_v0_5, s32 *, 0x18);
            D_80221948(0, temp_v0_4);
        }
        D_80221948(0, temp_v0_3);
    }
}
