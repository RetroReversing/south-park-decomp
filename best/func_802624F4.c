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
void func_8029A2CC();
void D_802145E4(void *p, f32 a, f32 b, f32 c);
void D_80213A84(void *p);
void func_802608E0();

extern f32 D_800A9AFC;
extern f32 D_800A9B00;

typedef struct Unk624 {
    char pad0[0x1C];
    s8 *unk1C;
    f32 unk24;
    char pad1[4];
} Unk624;

void func_802624F4(s8 *arg0, s8 *arg1, void *arg2) {
    Unk624 *cur;
    f32 f0;
    s32 buf[22];

    cur = *(Unk624 **)(arg0 + 0x7520);
    if (cur != NULL) {
        do {
            if (cur->unk1C == arg1) {
                f0 = cur->unk24;
                if (0.0f < f0) {
                    if (0.0f < f0) {
                        func_8029A2CC(buf, arg2);
                        f0 = D_800A9AFC;
                        if (*(s32 *)(*(s8 **)(arg1 + 0xF8) + 0x10) != 0) {
                            f0 = D_800A9B00;
                        }
                        D_802145E4(buf, f0, f0, f0);
                        D_80213A84(buf);
                        func_802608E0(arg0, cur, buf);
                    }
                }
            }
            cur = *(Unk624 **)((s8 *)cur + 4);
        } while (cur != NULL);
    }
}
