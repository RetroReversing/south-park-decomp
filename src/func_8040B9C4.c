extern s32 D_8010E504;
extern u8 D_800BC754[];
s32 func_804080F8(u8 *, s32, s32, s32);

s32 func_8040B9C4(s32 arg0) {
    s32 tmp;

    if (D_8010E504 != 0) {
        return -6;
    }
    return func_804080F8(D_800BC754, tmp, arg0, 0x19C);
}
