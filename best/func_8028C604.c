s32 func_8028C604(u32 i, s32 x) {
char *__repair_addr;

    s32 res = 0;
    u32 off;
    if (i < 4 && D_800B3618[i] != 0) {
        off = i * 12;
__repair_addr = (char *)(D_800F529C + off);

        if (*(s32 *)(__repair_addr) == -1 && *(s32 *)(D_800F52A0 + off) != x) {
            *(s32 *)(D_800F529C + off) = x;
            res = 1;
            goto out;
        }
        off += i * 4;
        if (*(s32 *)(D_800F52A0 + off) == -1 && *(s32 *)(D_800F529C + off) != x) {
            *(s32 *)(D_800F52A0 + off) = x;
            res = 1;
        }
    }
out:
    return res;
}
