/* machine draft (m2c) for gcc-2.8.1-pm-sn-as -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

u64 func_802A6AF0(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
extern s16 D_800B4B88;
extern s16 D_800B4B8A;
extern s16 D_800B4B8C;
extern s16 D_800B4B8E;
extern s16 D_800B4B90;
extern M2C_UNK D_800FA878;

u32 func_802A3630(void *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_a3;

    M2C_FIELD(&D_800FA878, void **, 8) = arg0;
    M2C_FIELD(&D_800FA878, void **, 0x14) = arg0;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_800FA878, void **, 0x14) = (void *) (arg0 + 4);
    M2C_FIELD(&D_800FA878, s32 *, 0) = temp_a3;
    M2C_FIELD(&D_800FA878, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_800FA878, void **, 0x14) = (void *) (arg0 + 8);
    M2C_FIELD(&D_800FA878, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_800FA878, void **, 0x14) = (void *) (arg0 + 0xC);
    D_800B4B8E = 0;
    D_800B4B90 = 0;
    D_800B4B88 = 0;
    D_800B4B8A = 0;
    D_800B4B8C = 0;
    M2C_FIELD(&D_800FA878, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    *arg2 = temp_a3;
    return (u32) func_802A6AF0(MULT_HI(M2C_FIELD(&D_800FA878, s32 *, 0x10), 0x0F424000), M2C_FIELD(&D_800FA878, s32 *, 0x10) * 0x0F424000, 0, arg1);
}
