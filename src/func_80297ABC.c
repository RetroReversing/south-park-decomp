extern f32 D_800AADA0;
extern u8 D_00298B10[];
extern u8 D_00298CD0[];
s32 func_80298980(void *a0, void *fn2, void *fn3, s32 n4);
s32 func_80293970(s32, s32, s32, s32, s32);

void func_80297ABC(void *arg0, s32 arg1)
{
    s32 z;
    s32 v;
    f32 f;
    u8 *p = (u8 *)arg0;

    func_80298980(arg0, &D_00298B10, &D_00298CD0, 1);
    z = 0;
    v = func_80293970(z, z, arg1, 1, 0x20);
    f = D_800AADA0;
    *(s32 *)(p + 0x14) = v;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 1;
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x28) = 0;
    *(s32 *)(p + 0x2C) = 0;
    *(f32 *)(p + 0x18) = f;
}
