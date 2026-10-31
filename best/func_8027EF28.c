extern f32 D_800AA250;
extern s32 func_8028087C(void);
extern s32 D_80210ADC(s32, s32);
extern f32 D_8021504C(f32, f32, s32, s32, f32);
void func_8027EF28(void *p, f32 x) {
char *__repair_addr;

    s32 idx;
    s32 end;
    s32 base;
    base = D_80210ADC(func_8028087C(), 0) + 8;
    idx = (s32)x;
__repair_addr = (char *)((u8 *)p + 8);

    end = *(s16 *)(__repair_addr) - 1;
    if (idx + 1 < end) end = idx + 1;
    D_8021504C(x - (f32)idx,
        (f32)*(s16 *)(base + idx * 2) * D_800AA250,
        idx, end, (f32)*(s16 *)(base + end * 2) * D_800AA250);
}
