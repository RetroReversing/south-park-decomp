s32 func_8041207C(void *arg0, void *arg1, s32 arg2, s32 arg3);

s32 func_80410EA8(void *arg0, s32 arg1, void *arg2) {
    u8 col;
    s32 cnt;
    s32 vid;
    s32 i;
    s32 shkey;
    s32 grp;
    s32 base;
    s32 r;
    u16 *p;
    u8 b;

    shkey = (u16)(arg1 >> 16);
    grp = (shkey >> 8) & 0xFF;
    base = (((shkey >> 0) & 0xFF) >> 2) + ((grp & 7) << 5);
    col = 0;
    cnt = 0;
    while (col < *(u8 *)((u8 *)arg0 + 0x64)) {
        i = col;
        if (i == 0) {
            vid = *(s32 *)((u8 *)arg0 + 0x60);
        } else {
            vid = 1;
        }
        if (i != grp) {
            b = *(u8 *)((u8 *)arg2 + 0x101 + base);
            if (((b >> (i & 7)) & 1) == 0) {
                col++;
                continue;
            }
        }
        if (i != *(u8 *)((u8 *)arg2 + 0x100)) {
            r = func_8041207C(arg0, arg2, 0, i);
            if (r != 0) {
                if (r != 3) {
                    return r;
                }
            }
            *(u8 *)((u8 *)arg2 + 0x100) = col;
        }
        if (cnt < 2) {
            p = (u16 *)((u8 *)arg2 + vid * 2);
            while (vid < 0x80 && cnt < 2) {
                if (*p == shkey) {
                    cnt++;
                }
                vid++;
                p++;
            }
            if (cnt < 2) {
                col++;
                continue;
            }
            return 2;
        }
        col++;
    }
    return cnt;
}
