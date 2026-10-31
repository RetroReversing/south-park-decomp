extern void func_8026349C(s32 *, u8 *, u16, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8025F788(void *node, s32, s32, s32);
extern void func_8025F5C8(void *node, u8, u8, u8, u8, u8, u8, u8);
extern void *D_800D6518;

void func_80263DC8(s32 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7)
{
    if (*(u8 *)a0 == 1) {
        func_8026349C(a0, (u8 *)a1, (u16)a2, a3, a4, a5, a6, a7, 0, 0, 0x80000);
    }
}

void func_80263E28(s32 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7)
{
    func_8026349C(a0, (u8 *)a1, (u16)a2, a3, a4, a5, a6, a7, 1, 0, 0x80000);
}

void func_80263F44(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, u8 a6, u8 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12)
{
    void *node = D_800D6518;

    if (node != NULL) {
        do {
            if (func_8025F788(node, a3, a4, a5) != 0) {
                func_8025F5C8(node, a6, a7, a8, a9, a10, a11, a12);
            }
            node = *(void **)((u8 *)node + 4);
        } while (node != NULL);
    }
}
