s32 D_8023E95C(s32, void *, s32);
s32 D_80241A44(s32, void *, void *);
s32 D_80241EEC(void *, s32, s32, s32);
s32 D_802452F4(s32, void *, void *);
s32 func_8028A17C(s32, void *, void *, void *);

void func_8028A798(s32 arg0, void *arg1) {
    u8 sp18[0x90];
    u8 spA0[0x40];
    s32 temp_v0;

    D_80241EEC(sp18, 1, 1, 0);
    D_80241A44(arg0, arg1, spA0);
    func_8028A17C(arg0, arg1, sp18, spA0);
    if (*(s32 *)(sp18 + 0x48) != 0 || *(s32 *)(sp18 + 4) != 0) {
        temp_v0 = D_802452F4(arg0, arg1, sp18);
        if (temp_v0 != 0) {
            *(s8 *)((u8 *)arg1 + 0x31) = -1;
            D_8023E95C(arg0, arg1, temp_v0);
        }
    }
}
