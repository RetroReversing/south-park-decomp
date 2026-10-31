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

M2C_UNK D_8029B340(s32);                            /* extern */
s32 D_8029D708();                                   /* extern */
M2C_UNK func_8029C7F0(void *);                      /* extern */
M2C_UNK osSpTaskStartGo(void *);                      /* extern */
M2C_UNK osWritebackDCacheAll();                            /* extern */
extern s32 D_800B1090;
extern s32 D_800B1094;
extern s32 D_800F1388;
extern u32 D_800F138C;
extern s32 D_800F1390;
extern s32 D_800F1398;
extern u32 D_800F139C;
extern s32 D_800F13A0;
extern u32 D_800F13A4;
extern s32 D_800F13A8;
extern u32 D_800F13AC;

void func_80259228(void *arg0, void *arg1, void *arg2) {
    s32 temp_ret;
    s32 temp_ret_2;
    s32 temp_ret_3;
    s32 temp_v0;
    u32 temp_v1;
    void *var_a0;
    void *var_s0;

    if ((arg2 != NULL) && (M2C_FIELD(arg2, s32 *, 8) & 0x20) && !(M2C_FIELD(arg2, s32 *, 4) & 0x10)) {
        temp_ret = D_8029D708();
        D_800F13A0 = temp_ret;
        D_800F13A4 = (u32) (u64) temp_ret;
    }
    if (arg1 != NULL) {
        if (M2C_FIELD(arg1, s32 *, 0x10) == 2) {
            var_s0 = arg1 + 0x10;
            osWritebackDCacheAll();
            temp_ret_2 = D_8029D708();
            D_800F1388 = temp_ret_2;
            D_800F138C = (u32) (u64) temp_ret_2;
            var_a0 = var_s0;
        } else {
            var_s0 = arg1 + 0x10;
            if (M2C_FIELD(arg1, s32 *, 8) & 0x20) {
                temp_ret_3 = D_8029D708();
                temp_v0 = temp_ret_3;
                temp_v1 = (u32) (u64) temp_ret_3;
                D_800F1398 = temp_v0;
                D_800F139C = temp_v1;
                if (!(M2C_FIELD(arg1, s32 *, 4) & 0x10)) {
                    D_800F13A8 = temp_v0;
                    D_800F13AC = temp_v1;
                    D_800F1390 = 0;
                    var_s0 = (char *)(arg1); var_s0 += (s32)(0x10);
                }
            }
            var_a0 = var_s0;
        }
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) & ~0x30);
        func_8029C7F0(var_a0);
        osSpTaskStartGo(var_s0);
        M2C_FIELD(arg0, void **, 0x2F4) = arg1;
        if (arg1 == arg2) {
            M2C_FIELD(arg0, void **, 0x2F8) = arg2;
        }
    }
    if ((arg2 != NULL) && (arg2 != arg1)) {
        D_8029B340(M2C_FIELD(arg2, s32 *, 0x38));
        D_800B1090 = 1;
        D_800B1094 = 0;
        M2C_FIELD(arg0, void **, 0x2F8) = arg2;
    }
}
