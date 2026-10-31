typedef struct Sprite { void *unk0; void *unk4; s32 index; s32 unkC; s32 count; void *buf; } Sprite;
extern Sprite *D_800F8724; extern u32 D_800B4928; void func_8029F62C(void);
void func_8029F558(void) {
    volatile u32 *status = (volatile u32 *)0xA4600010;
    Sprite *spr;
    volatile u32 *data;
    while (*(volatile u32*)0xA4600010 & 3) {}
    spr = D_800F8724;
    data = (volatile u32 *)0xA5000510;
    *data = spr->count | 0x10000000;
    while (*(volatile u32*)0xA4600010 & 3) {}
    *data = spr->count;
    func_8029F62C();
    *(volatile u32*)0xA4600010=2;
    D_800B4928 |= 0x100401;
}
