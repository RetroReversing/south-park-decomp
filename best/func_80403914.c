s32 D_8022D09C(s32);
s32 D_8022D0BC(s32);
s32 D_8022D0D4(s32);

s32 func_80403914(void *arg0, s32 x, s32 step, s32 hi, s32 lo, s32 flag) {
    s32 v;

    if (D_8022D0BC(*(s32 *)((u8 *)arg0 + 0x24)) != 0) {
        x -= step;
    }
    if (D_8022D0D4(*(s32 *)((u8 *)arg0 + 0x24)) != 0) {
        x += step;
        v = x < hi;
    } else if (D_8022D09C(*(s32 *)((u8 *)arg0 + 0x24)) == 0) {
        v = x < hi;
    } else {
        x += step;
        v = x < hi;
    }
    if (v) {
        x = hi;
        if (flag != 0) {
            x = lo;
        }
        return x;
    }
    if (lo < x) {
        x = lo;
        if (flag != 0) {
            x = hi;
        }
    }
    return x;
}
