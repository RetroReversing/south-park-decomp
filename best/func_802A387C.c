extern s32 D_800FBCE8;

void func_802A387C(s32 arg0) {
    s32 *p = &D_800FBCE8;
    s32 i = 0;
    s32 n = arg0;
    *p = i;
    goto test;
body:
    i = *p + 1;
    *p = i;
test:
    if (i < n)
        goto body;
}
