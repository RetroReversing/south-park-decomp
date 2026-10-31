extern s32 D_800BF350;
extern s32 D_8010E504;
extern s32 D_800BC754;
s32 func_80408BB8(void);
s32 func_804080F8(s32 *, s32, s32);
s32 func_80408BC8(void);
s32 func_8040967C(void);
s32 func_8040BA70(void);

void func_8040B964(void) {
    D_800BF350 = 0;
    func_80408BB8();
}

s32 func_8040B9C4(s32 arg0) {
    if (D_8010E504 != 0) {
        return -6;
    }
    return func_804080F8(&D_800BC754, arg0, 0x19C);
}

s32 func_8040BA04(void) {
    if (D_8010E504 != 0) {
        return -6;
    }
    return func_80408BC8();
}

s32 func_8040BA38(void) {
    s32 var_s0;

    var_s0 = func_8040967C();
    func_8040BA70();
    if (var_s0 != -8) {
        return var_s0;
    }
    return 0;
}
