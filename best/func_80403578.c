extern f32 D_800BC3CC;
extern u8 D_800D77E6;
extern s32 D_800F1508;
extern s32 func_804016EC(void *a0, s32 a1, s16 *a2, void *a3);

void func_80403578(u8 *a0, u8 *a1, s16 *a2, u8 *a3) {
char *__repair_addr;

    s32 v0;
    s32 v1;
    s32 x;
    u32 flag;
    s32 arg;
__repair_addr = (char *)(a0 + 0x14);


    v1 = *(s32 *)(__repair_addr);
    v0 = *(s32 *)(v1 + 4);
    v0 = v0 + D_800D77E6 * 4;
    func_804016EC((void *)v0, a1, a2, a3);
    D_800F1508 = 2;
    flag = *(u32 *)(a0 + 8) & 0x80000;
    x = (s32)(D_800D77E6 * 4);

    if (flag != 0) {
        arg = 0xFF;
    } else {
        arg = 0x3F;
    }
    func_80268FF8(0, arg, arg);

    v1 = *(s32 *)(a0 + 0x14);
    v0 = *(s32 *)(v1 + 8);
    v0 = v0 + D_800D77E6 * 4;
    func_80266B34(*(s32 *)v0, *(s32 *)(a1 + 0x10), *(s32 *)(a1 + 0x14),
                  (s32)(*(f32 *)(a3 + 0x34) * (*(f32 *)(a3 + 0x38) * D_800BC3CC)));
    (void)x;
}
