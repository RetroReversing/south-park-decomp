/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O2 -mgas -meb -mhard-float, tried by autopilot */
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

extern M2C_UNK D_800F1510;

void func_80269010(f32 arg0, f32 arg1) {
    M2C_FIELD(&D_800F1510, f32 *, 0) = arg0;
    M2C_FIELD(&D_800F1510, f32 *, 4) = arg1;
}
