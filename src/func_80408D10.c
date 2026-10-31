extern s32 D_8010DE78;
extern s8 D_8010DE8C[];
s32 func_80408D10(s32 arg0) {
    s32 v = D_8010DE8C[arg0];
    D_8010DE78 = arg0;
    if (D_8010DE8C[arg0] == 0) D_8010DE8C[arg0] = -8;
    return v;
}
