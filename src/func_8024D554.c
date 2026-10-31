/* identical to func_8024CC3C (matched), with its names changed by decompdecomp */
typedef struct {
    u8 pad0[6];
    u16 f6;
} Arg;

extern void D_8023E95C(s32 a0, s32 a1, s32 a2);
extern void D_8023CF60(s32 a0, s32 a1);

void func_8024CBCC(s32 a0, s32 a1, Arg *a2) {
    u16 v;
    Arg *p = a2;
    D_8023E95C(a0, a1, 0);
    v = p->f6;
    if (v != 0xFFFF) {
        D_8023CF60(v, -1);
    }
}

void func_8024D554(s32 a0, s32 a1) {
    D_8023E95C(a0, a1, 1);
}
