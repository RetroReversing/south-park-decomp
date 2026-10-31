extern f32 D_800AA568, D_800AA56C, D_800AA570, D_800AA574, D_800AA578, D_800AA57C, D_800AA580, D_800AA584, D_800AA588;
extern s32 D_80246A4C(void);
extern f32 D_80215964(f32, f32, u32);
extern f32 D_802157FC(f32, f32, f32);
extern void D_80241C54(void *, void *, u32, f32);

void func_80287444(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
char *__repair_addr;

    f32 v;
    f32 t;

    if (D_80246A4C() == 1) {
__repair_addr = (char *)(arg0 + 0x1C);

        v = -*(f32 *)(__repair_addr) * D_800AA568;
        if (D_800AA56C < v) {
            v = D_800AA56C;
        } else if (v < D_800AA570) {
            v = D_800AA570;
        }
        *(f32 *)(arg1 + 0x154) = D_80215964(*(f32 *)(arg1 + 0x154), v, 0x3DB2B8C4);
        if ((s32)D_800AA578 < 0) {
        }
        v = *(f32 *)(arg2 + 0x4C) * D_800AA574;
        if (D_800AA578 < v) {
            v = D_800AA578;
        } else if (v < D_800AA57C) {
            v = D_800AA57C;
        }
        *(f32 *)(arg1 + 0x158) = D_80215964(*(f32 *)(arg1 + 0x158), v, 0x3E32B8C4);

        t = D_802157FC(*(f32 *)(arg0 + 0x1C), *(f32 *)(arg2 + 0x60), *(f32 *)(arg3 + 0x18) * D_800AA580);
        if (D_800AA584 < t) {
            *(f32 *)(arg0 + 0x1C) = D_800AA584;
        } else if (t < D_800AA588) {
            *(f32 *)(arg0 + 0x1C) = D_800AA588;
        } else {
            *(f32 *)(arg0 + 0x1C) = t;
        }
    }
    D_80241C54(arg0, arg1, 0x3E567751, *(f32 *)(arg2 + 0x4C));
}
