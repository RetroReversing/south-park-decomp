u32 func_80280AA4(s32 arg0, u32 arg1) {
int __repair_literal;

    u32 *ptr = (u32 *)((arg0 & 0xF0000000) | ((u32)(arg0 & 0x0FFFFFE0) >> 3));
    u32 lo, hi;
    s32 sh;

    sh = arg0 & 0x1F;
    lo = ptr[0];
    hi = ptr[1];
    if (sh != 0) {
        lo >>= sh;
        hi <<= 32 - sh;
        lo |= hi;
    }
__repair_literal = 32;

    if (arg1 < __repair_literal) {
        lo &= (1 << arg1) - 1;
    }
    return lo;
}
