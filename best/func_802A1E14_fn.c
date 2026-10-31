extern s32 D_800B4A08;
void func_802A0828(void *p, s32 n);
void *func_802A36EC(void);

typedef struct {
    u8 pad00[0x28];
    s32 *unk28;
    u8 pad2C[0xC];
    s32 unk38;
} Arg0;

s32 func_802A1E14_fn(Arg0 *arg0, s32 *src, s32 arg2, s32 arg3, s32 arg4, s32 *arg5)
{
    s32 v1, v2, v3, v4, v5;
    s32 *out;
    s16 val;

    out = arg5;
    val = *(s16 *)src;
    v1 = val;
    if (arg0->unk28[0] == 0) {
        out[0] = ((v1 & 0xFFFFFF) | 0x2000000);
        out[1] = arg2 << 1;
        return 0xFFFFFF;
    }
    if (arg2 != 0) {
        do {
            if (arg0->unk38 == 0) {
                D_800B4A08 = (s32)func_802A36EC();
                if (D_800B4A08 == 0) {
                    out[0] = ((v1 & 0xFFFFFF) | 0x2000000);
                    out[1] = 0;
                    return 0xFFFFFF;
                }
                func_802A0828((void *)D_800B4A08, 0x200);
                arg0->unk38 = 0x100;
            }
            v2 = arg2;
            if (arg0->unk38 < arg2) {
                v2 = arg0->unk38;
            }
            v4 = v1 & 7;
            v3 = D_800B4A08 & 7;
            if (v4 != 0) {
                v5 = 8 - v4;
            } else {
                v5 = 0;
            }
            out[0] = (((v1 + v5) & 0xFFFF) | 0x8000000);
            out[1] = (v2 * 2 + v3) & 0x7FFF;
            out[2] = 0x4000000;
            out[3] = (D_800B4A08 & 0x1FFFFFFF) - v3;
            out += 4;
            if (v3 != 0) {
                goto both;
            }
            if (v5 != 0) {
both:
                out[0] = (((v1 + v3 + v5) & 0xFFFFFF) | 0xA000000);
                out[1] = (v1 << 16) | (v2 * 2);
                out += 2;
            }
            arg2 -= v2;
            v1 += v2 * 2;
            D_800B4A08 = D_800B4A08 + v2 * 2;
            arg0->unk38 = arg0->unk38 - v2;
        } while (arg2 != 0);
    }
    return 0xFFFFFF;
}
