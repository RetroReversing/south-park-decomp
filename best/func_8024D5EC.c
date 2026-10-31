extern void D_887F837C(void);
extern void D_8023E95C(void *, void *, s32);
extern s32 D_80200528(void *, void *);
extern s32 D_8021563C(void);
extern u32 D_20E8EC, D_24D6D4, D_800B0F88, D_800CCA80;
void func_8024D5EC(void *arg0, void *arg1) {
char *__repair_addr;

    s32 quotient;
    s32 value;
    s32 flags;
    D_887F837C();
    *(void **)((char *)arg1 + 0x28) = &D_800B0F88;
    *(void **)((char *)arg1 + 0xC4) = &D_24D6D4;
__repair_addr = (char *)((char *)arg1 + 0x154);

    *(s32 *)(__repair_addr) = *(s32 *)(*(void **)((char *)arg0 + 0x14) + 0x18);
    D_8023E95C(arg0, arg1, 0);
    if (D_80200528(&D_800CCA80, arg0) == 1) {
        flags = *(s32 *)((char *)arg0 + 0xF4);
        flags &= 0xFFEFFFFF;
        flags &= 0xFFFF7FFF;
        *(s32 *)((char *)arg0 + 0xF4) = flags;
    }
    if (*(u16 *)((char *)arg0 + 0xD8) == 1000) {
        value = D_8021563C();
        quotient = value / 6;
        *(void **)((char *)arg1 + 0xC8) = &D_20E8EC;
        value %= 6;
        *(s32 *)((char *)arg1 + 0x17C) = value;
        *(s32 *)((char *)arg1 + 0x180) = value;
    }
}
