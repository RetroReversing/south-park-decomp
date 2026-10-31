extern s32 D_8024249C(s32, s32, s32, s32, s32);
void func_80264540(u8 *arg0, u8 *arg1, s32 unused2, s32 a3, s32 x, s32 y, s32 z, s32 mode) {
char *__repair_addr;

    if (arg1[0] == 0) {
        if (arg0[1] == mode) goto call_it;
        return;
    }
    if (arg1[0] == 1) {
__repair_addr = (char *)(arg1+0x170);

        if (*(u32 *)(__repair_addr) & (1 << mode)) goto call_it;
        return;
    }
call_it:
    D_8024249C(a3, x, y, z, mode);
}
