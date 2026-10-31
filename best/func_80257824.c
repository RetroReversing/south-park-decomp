extern s32 D_800AB9FC;
extern s32 D_800D6528[];
extern void D_80213AF4(void *, void *, f32 *);
extern void func_80251D00(void *, void *, void *, f32);
void func_80257824(void *arg0) {
char *__repair_addr;

    f32 angle;
    void *obj;
    f32 scratch[3];
    s32 *global = D_800D6528;
    if (global[0] == 1) {
        obj = (void *)global[-4];
        D_80213AF4((u8 *)obj + 0x22C, (u8 *)arg0 + 4, scratch);
        angle = scratch[2];
        if (angle < 0.0f) angle = -angle;
        func_80251D00(arg0, (u8 *)arg0 + (D_800AB9FC * 0x40 + 0x48), obj, angle);
    } else {
        func_80251D00(arg0, (u8 *)arg0 + (D_800AB9FC * 0x40 + 0x48), 0, 0.0f);
    }
__repair_addr = (char *)((u8 *)arg0 + 0x40);

    *(u32 *)(__repair_addr) |= 0x80000;
}
