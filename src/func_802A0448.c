extern volatile s32 D_800B4928;
s32 func_802A0500(void);
s32 D_802A0520(s32);
void func_802A0400(s32 arg0) {
    s32 temp_v0;
    volatile s32 *p = &D_800B4928;
    temp_v0 = func_802A0500();
    *p &= ~arg0 | 0x401;
    D_802A0520(temp_v0);
}
void func_802A0448(s32 arg0) {
    s32 temp_v0;
    volatile s32 *p = &D_800B4928;
    temp_v0 = func_802A0500();
    *p |= arg0;
    D_802A0520(temp_v0);
}
void func_802A0540(u32 arg0, s32 arg1) {
    u32 t0, t1;
    if (arg1 <= 0) return;
    if ((u32)arg1 >= 0x2000) {
        t0 = 0x80000000;
        t1 = 0x80001FF0;
        do { t0 += 16; } while (t0 < t1);
        return;
    }
    t0 = arg0;
    t1 = arg0 + arg1;
    if (t0 >= t1) return;
    t1 -= 16;
    if (t0 & 15) {
        t0 -= t0 & 15;
        if (t0 >= t1) return;
        t0 += 16;
    }
    if (t1 & 15) {
        t1 -= t1 & 15;
        if (t1 < t0) return;
    }
    while (t0 < t1) t0 += 16;
}
extern void *D_800B4948;
u64 func_8029E3D4(void *, s32);
s32 func_8029E374(u64, u32);
s32 func_8029DFF8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_a2;
    u64 temp_ret;
    u32 temp_v1;
    temp_a2 = arg3 | arg2;
    *(s32 *)((u8 *)arg0 + 0x10) = arg2;
    *(s32 *)((u8 *)arg0 + 0x14) = arg3;
    *(s32 *)((u8 *)arg0 + 0x0) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = arg4;
    *(s32 *)((u8 *)arg0 + 0xC) = arg5;
    if (temp_a2 == 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = arg4;
        *(s32 *)((u8 *)arg0 + 0x14) = arg5;
    }
    *(s32 *)((u8 *)arg0 + 0x18) = arg6;
    *(s32 *)((u8 *)arg0 + 0x1C) = arg7;
    temp_ret = func_8029E3D4(arg0, temp_a2);
    temp_v1 = (u32)(temp_ret >> 32);
    if (*(void **)D_800B4948 != arg0) {
        return 0;
    }
    func_8029E374(temp_ret, temp_v1);
    return 0;
}
