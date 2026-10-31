s32 func_8028C6BC(s32 arg0) {
    s32 i = 0, off = 0;
    do {
        if (((s32 *)&D_800B3618)[i] == 0) goto next;
        if (*(s32 *)((u8 *)&D_800F529C + off) == arg0) return i;
        if (*(s32 *)((u8 *)&D_800F52A0 + off) != arg0) goto next;
        return i;
    next:
        i++;
        off += 12;
    } while (i < 4);
    return -1;
}
