void func_80295D80(void*, void*);
int func_80293674(void*, void*);
void func_8029370C(void*, s16*, int);

void func_802961D8(char *s0, char *s1) {
    s16 v;
    int r;

    for (;;) {
        if (*(s16*)(s0+0x28) == 5) {
            v = 5;
            func_8029370C(s0+0x14, &v, *(int*)(s0+0x48));
        } else {
            func_80295D80(s0, s1);
        }
        r = func_80293674(s0+0x14, s0+0x28);
        *(int*)(s0+0x4c) = r;
        if (r != 0) break;
    }
    *(int*)(s0+0x50) += r;
}
