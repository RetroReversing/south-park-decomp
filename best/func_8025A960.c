void D_8021E930(void *node, void *value);
void D_8021E710(void *tree, void *value);

void *func_8025A960(void *arg0, s32 *arg1)
{
    void *temp = *(void **)((u8 *)arg0 + 0x8);

    if (temp != NULL) {
        D_8021E930((u8 *)arg0 + 0x8, temp);
        D_8021E710((u8 *)arg0 + 0x1C, temp);
        if (arg1 != NULL) {
            *(void **)((u8 *)temp + 0x370) = arg1;
            *arg1 += 1;
        }
    }
    return temp;
}
