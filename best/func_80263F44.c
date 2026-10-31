extern s32 func_8025F788(void *, s32, s32, s32);
extern void func_8025F5C8(void *, u8, u8, u8, u8, u8, u8, u8);
extern void *D_800D6518;
void func_80263F44(s32 a1, s32 a2, s32 a3, s32 a4, u8 *bytes) {
    void *node=D_800D6518;
    if (node != 0) {
        do {
            if (func_8025F788(node, a1, a2, a3))
                func_8025F5C8(node, bytes[3], bytes[0], bytes[1], bytes[2],
                              bytes[4], bytes[5], bytes[6]);
            node=*(void **)((u8 *)node+4);
        } while (node != 0);
    }
}
