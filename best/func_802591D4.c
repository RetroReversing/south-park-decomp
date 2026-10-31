s32 func_802591D4(void *x, void *p) {
    s32 result = 0;
    if ((*(s32 *)((char *)p + 4) & 3) == 0) {
        if (*(s32 *)((char *)p + 0x10) == 1) {
            if ((*(s32 *)((char *)p + 8) & 0x60) == 0x60) {
                func_8029D1F8(*(s32 *)((char *)p + 0xC));
                result = 1;
            }
        }
    }
    return result;
}
