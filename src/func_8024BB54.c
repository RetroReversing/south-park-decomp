extern void D_8023E95C(void *, void *, s32);

void func_8024BB54(void *arg0, void *arg1) {
    if (*(s8 *)((s8 *)arg1 + 0xB3) != 0) {
        D_8023E95C(arg0, arg1, 0x41);
    }
}

extern void D_80242160(s32, s32, s32);
extern void D_80203F74(void *, void *, s32);
extern void D_8021B7EC(void *, s32, void *);
extern u8 D_800CCA80;

void func_8024BC04(void *arg0, void *arg1) {
    void *a2;

    D_80242160(4, 0, *(s32 *)((s8 *)*(void **)((s8 *)arg0 + 0x14) + 0x20));
    a2 = arg1;
    D_80203F74(&D_800CCA80, arg0, 1);
    *(s32 *)((s8 *)a2 + 0xCC) = 0;
    D_8021B7EC(arg0, 1, arg0);
}
