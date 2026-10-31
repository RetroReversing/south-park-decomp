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

s32 D_80209A90(s32 *);                      /* extern */
s32 func_8025F874();
extern char D_800CC760[];
extern s32 D_800D6368;

s32 func_8040547C(s32 arg0, void *arg1) {
    if (D_800D6368 == 1) {
        D_80209A90(&D_800CC760);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x20), s16 *, 0xA48) = 0;
    }
    func_8025F874(M2C_FIELD(arg1, s32 *, 0x3C));
    return 1;
}
