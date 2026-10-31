extern void *D_800D6358;

void *func_8025F6D0(s32 arg0) {
    void *v1;

    for (v1 = D_800D6358; v1 != 0; v1 = *(void **)((u8 *)v1 + 0x159C)) {
        if (*(s32 *)((u8 *)v1 + 0xA54) == arg0) {
            break;
        }
    }
    return v1;
}
