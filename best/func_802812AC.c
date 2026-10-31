void func_802812AC(s32 *p, s32 a1, s32 a2, s32 a3)
{
    p[0] = a1;
    p[1] = *(volatile s32 *)&a2;
    p[2] = *(volatile s32 *)&a3;
    p[3] = *(s32 *)0x10;
}
