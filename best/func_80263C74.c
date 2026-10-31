extern void D_80229C4C();
extern void func_8026DD38();
extern void func_8026DD6C();

void func_80263C74(s32 a0, s32 a1, void *a2, s32 a3, s32 *a4)
{
    s32 sp10[4];
    s32 sp20[4];
    s32 sp30[4];

    sp10[0] = (s32)sp20;
    sp10[1] = (s32)sp30;
    sp10[2] = 0;
    sp10[3] = 0;
    D_80229C4C(sp10);
    if (a4 != 0) {
        func_8026DD38(sp30[0]);
    } else {
        func_8026DD6C(sp30[0]);
    }
}
