extern f32 D_800AA6E0, D_800AA6E4;
f32 D_80215964(f32, f32, f32);
void D_80241EEC(void *, void *, void *, s32, s32);
void D_80241A44(void *, void *, void *);
void D_80241C54(void *, void *, f32, s32);

void func_80288DB0(u8 *a0, u8 *a1)
{
char *__repair_addr;

    u8 sp18[0x88];
    u8 spA0[0x40];
__repair_addr = (char *)(a1 + 0x68);


    *(s32 *)(__repair_addr) = 0;
    *(s32 *)(a1 + 0x70) = 0;
    if (*(u16 *)(a0 + 0xD8) != 0x3E8) {
        *(f32 *)(a1 + 0xA8) = D_80215964(*(f32 *)(a1 + 0xA8), D_800AA6E0, 0.3f);
        *(f32 *)(a1 + 0x160) = D_80215964(*(f32 *)(a1 + 0x160), D_800AA6E4, 0.5f);
    }
    D_80241EEC(a0, a1, sp18, 1, 1);
    D_80241A44(a0, a1, spA0);
    D_80241C54(a0, a1, *(f32 *)(a1 + 0x160), *(s32 *)(sp18 + 0x4C));
}
