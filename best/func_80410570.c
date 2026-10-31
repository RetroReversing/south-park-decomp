extern u8 D_8010E858[];

s32 func_8029C638(s32, void *);
s32 func_8029DC78(s32, void *, s32);
void func_80410648(s32);
void func_804106D4(s32, void *);

s32 func_80410570(s32 arg0, s32 arg1) {
    u8 sp10[8];
    u8 sp18[8];
    s32 temp_s0;
    s32 var_v0;

    func_80410648(arg1);
    func_8029C638(1, &D_8010E858);
    func_8029DC78(arg0, sp18, 1);
    temp_s0 = func_8029C638(0, &D_8010E858);
    func_8029DC78(arg0, sp18, 1);
    func_804106D4(arg1, sp10);
    if ((sp10[2] & 1) && (sp10[2] & 2)) {
        var_v0 = 2;
    } else if ((*(u16 *)&sp10[2] & 0x1FF) == 0x100) {
        if (!(sp10[2] & 4)) {
            return temp_s0;
        }
        var_v0 = 4;
    } else {
        var_v0 = 1;
    }
    return var_v0;
}
