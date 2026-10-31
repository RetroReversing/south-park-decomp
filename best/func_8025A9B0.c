void D_8023D488(void **tree, void *value);
void D_8021E930(void **tree, void *value);
void D_8021E76C(void **tree, void *value);

void func_8025A9B0(u8 *arg0, u8 *arg1)
{
    s32 *ref = *(s32 **)(arg1 + 0x370);

    if (ref != NULL) {
        *ref -= 1;
    }
    if (*(s32 **)(arg1 + 0x334) != NULL) {
        D_8023D488((void **)(arg0 + 0x1C), arg1);
    }
    D_8021E930((void **)(arg0 + 0x1C), arg1);
    D_8021E76C((void **)(arg0 + 0x8), arg1);
}
