extern void D_8023D488(void *);
extern void D_8021E930(void *, void *);
extern void D_8021E76C(void *, void *);
extern u8 D_800CE1B8[];
extern u8 D_800CE1A4[];

void func_8025A554(s8 *arg0) {
    s32 *v1 = *(s32 **)(arg0 + 0x370);

    if (v1 != NULL) {
        *v1 -= 1;
    }
    if (*(s32 *)(arg0 + 0x334) != 0) {
        D_8023D488(arg0);
    }
    D_8021E930(D_800CE1B8, arg0);
}
