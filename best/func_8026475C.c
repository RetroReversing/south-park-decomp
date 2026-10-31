extern s32 D_800D6340;
extern void func_80407C64(s32 x, s32 off, void *p);
void func_8026475C(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *base = &D_800D6340;
    s32 i;
    s32 off;
    a3 = a3;
    if (*base > 0) {
        s32 *p = base - 1;
        i = 0;
        off = 0;
        do {
            if (p[0] + off) {
                func_80407C64(p[0] + off, off, p);
                break;
            }
            i++;
            off += 0x15C0;
        } while (i < p[1]);
    }
}
