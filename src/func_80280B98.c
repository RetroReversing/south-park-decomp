u32 func_80280B98(s32 *arg0, u32 arg1) {
    s32 t0 = *arg0;
    u32 *ptr = (u32 *)((t0 & 0xF0000000) | ((u32)(t0 & 0x0FFFFFE0) >> 3));
    u32 lo, hi;
    u8 sh;

    lo = ptr[0];
    hi = ptr[1];
    sh = t0 & 0x1F;
    if (sh != 0) {
        lo >>= sh;
        hi <<= 32 - sh;
        lo |= hi;
    }
    if (arg1 < 32) {
        lo &= (1 << arg1) - 1;
    }
    *arg0 = t0 + arg1;
    return lo;
}
