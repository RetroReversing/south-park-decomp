extern u8 *D_800B3628;

s32 func_8028EC2C(s32 arg0, s32 arg1) {
    s32 idx = arg1 >> 5;
    s32 bit = 1 << (arg1 & 0x1F);
    return *(s32 *)(arg0 + idx * 4) & bit;
}
