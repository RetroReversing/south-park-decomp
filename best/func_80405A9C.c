extern s32 D_800D77D4;

void func_80405A9C(s16 *arg0) {
    s32 i;
    s32 one;
    s32 mask;

    i = 0;
    one = 1;
    mask = D_800D77D4;
    *arg0 = one;
loop:
    if ((mask & (one << i)) != 0) {
        *arg0 = i + 1;
        return;
    }
    i++;
    if (i < 0xB) {
        goto loop;
    }
}
