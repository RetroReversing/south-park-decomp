extern u8 D_800ADDBA;

s32 func_80406AD8(u8 *arg0) {
    if (D_800ADDBA < 2) {
        *(u32 *)(arg0 + 8) = *(u32 *)(arg0 + 8) & 0xFFF7FFFF;
    } else {
        *(u32 *)(arg0 + 8) = *(u32 *)(arg0 + 8) | 0x80000;
    }
    return 0;
}

s32 func_80408EF4(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return -3;
    case 2:
        return -6;
    case 3:
        return -4;
    case 4:
        return -12;
    case 5:
        return -9;
    case 6:
        return -10;
    case 7:
        return -7;
    case 8:
        return -7;
    case 9:
        return -7;
    case 10:
        return -7;
    case 11:
        return -7;
    default:
        return -7;
    }
}
