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

M2C_UNK D_80221948(M2C_UNK, s32);                   /* extern */
M2C_UNK D_8022CF48();                               /* extern */
M2C_UNK D_8022D63C(M2C_UNK);                        /* extern */
M2C_UNK D_8022E768(void *, s32, M2C_UNK);           /* extern */
M2C_UNK func_8025F874(void *, M2C_UNK);             /* extern */
M2C_UNK func_8028DF64(f32, f32, M2C_UNK);           /* extern */
M2C_UNK func_80407C64(void *);                      /* extern */
extern f32 D_800AA9C8;
extern f32 D_800AA9CC;
extern void *D_800B3628;
extern s32 D_800B3640;
extern s32 D_800B3644;
extern void *D_800D6358;
extern s32 D_800D78F0;

void func_8028C850(void) {
    s32 temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    func_8028DF64(M2C_FIELD(D_800B3628, f32 *, 0x10), M2C_FIELD(D_800B3628, f32 *, 0x1C), 1);
    if (M2C_FIELD(D_800B3628, s32 *, 0x28) != 0) {
        if (M2C_FIELD(D_800B3628, s32 *, 8) != 0) {
            M2C_FIELD(D_800B3628, s32 *, 8) = 0;
        }
        temp_v0 = D_800B3628;
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0);
        if (temp_a1 != 0) {
            D_80221948(0, temp_a1);
        }
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    }
    if (D_800B3640 != 0) {
        temp_s0 = D_800D6358;
        D_8022E768(temp_s0, D_800B3640, 1);
        D_800B3640 = 0;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xA54), s8 *, 0x510) = 0;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xA54), f32 *, 0x514) = (f32) D_800AA9C8;
        func_8025F874(M2C_FIELD(temp_s0, void **, 0xA54), 0x3D4CCCCD);
    }
    if (D_800B3644 != 0) {
        temp_s0_2 = D_800D6358;
        func_80407C64(temp_s0_2);
        D_800B3644 = 0;
        M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0xA54), s8 *, 0x510) = 0;
        M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 0xA54), f32 *, 0x514) = (f32) D_800AA9CC;
    }
    if (D_800D78F0 == 0xD) {
        D_8022CF48();
        D_8022D63C(1);
    }
}
