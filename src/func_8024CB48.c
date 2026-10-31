/* identical to func_8024BB04 (matched), with its names changed by decompdecomp */
typedef struct {
    s8 pad[0x2C];
    void *unk2C;
} S_8024BB04;

void func_8024CB48(void *arg0, S_8024BB04 *arg1) {
    void *p = arg1->unk2C;
    if (p != NULL && *(void **)((s8 *)p + 8) != NULL) {
        (*(void (**)(void))((s8 *)p + 8))();
    }
}

s32 func_8024BB38(void *arg0) {
    s32 v = *(s32 *)((s8 *)*(void **)((s8 *)arg0 + 0x14) + 0x1C);
    if (v != 0) {
        return v;
    }
    return 0x46B4;
}

extern void D_8023E95C(s32);

void func_8024BB54(void *arg0, void *arg1) {
    if (*(s8 *)((s8 *)arg1 + 0xB3) != 0) {
        D_8023E95C(0x41);
    }
}

extern void D_80242160(s32, s32);
extern void D_80203F74(void *, void *, s32);
extern void D_8021B7EC(void *, s32, void *);
extern u8 D_800CCA80;

void func_8024BC04(void *arg0, void *arg1) {
    D_80242160(4, *(s32 *)((s8 *)*(void **)((s8 *)arg0 + 0x14) + 0x20));
    D_80203F74(&D_800CCA80, arg0, 1);
    *(s32 *)((s8 *)arg1 + 0xCC) = 0;
    D_8021B7EC(arg0, 1, arg0);
}
