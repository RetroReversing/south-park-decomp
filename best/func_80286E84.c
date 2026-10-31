extern u8 D_800CE0FC[];
s32 D_80253EB0();

void func_80286E84(s32 *arg0, s32 *arg1) {
    s32 *p;
    s32 a, b, c, t0, t1, t2, t3, v1;

    p = *(s32 **)((char *)arg0 + 0x14);
    p = (s32 *)((char *)p + 0x14);
    if (p[0x1A] == 1) {
        a = arg0[6];
        b = arg0[7];
        c = arg0[8];
        t0 = arg0[0x14];
        t1 = arg0[0x15];
        t2 = arg0[0x16];
        t3 = arg0[0x17];
        v1 = arg0[1];
        t0 = arg0[2];
        t1 = arg0[3];
        t2 = arg0[4];
        v1 = arg0[4];
        arg1[0x60] = arg1[0x60] - D_80253EB0(D_800CE0FC, arg0, arg0,
            (s32)((char *)arg1 + 0x17C), 0, *(s16 *)((char *)p + 0xA2),
            a, b, c, t0, t1, t3, v1);
    }
}
