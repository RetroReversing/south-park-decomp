extern s32 D_800CCA80;
extern s32 D_80203F74(s32 *, void *, s32);
extern s32 func_8028F18C(void *, void *);
extern s32 func_8028E724(void);
void func_8024D98C(void *arg0) { func_8028F18C(0, arg0); }
void func_8024D93C(void *arg0, s32 arg1, void *arg2) {
    func_8028F18C((void *)arg1, arg2);
    *(s32 *)((u8 *)arg0 + 0xF4) |= 0x108000;
    D_80203F74(&D_800CCA80, arg0, 0);
}
void func_8024D8A0(void *arg0, s32 *arg1) {
    *(s32 *)((u8 *)arg0 + 0xF4) |= 0x108000;
    if (func_8028E724()) *arg1 |= 0x1000;
    D_80203F74(&D_800CCA80, arg0, 0);
}
void func_8024D828(void *arg0) {
char *__repair_addr;

__repair_addr = (char *)((u8 *)arg0 + 0xF4);

    *(s32 *)(__repair_addr) &= 0xFFEFFFFF;
    *(s32 *)((u8 *)arg0 + 0xF4) &= 0xFFFF7FFF;
    D_80203F74(&D_800CCA80, arg0, 1);
}
