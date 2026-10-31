typedef struct { s32 pad0[3]; s32 fieldC; } Arg;
typedef struct { u16 pad0; u16 value; } U16Box;
extern u16 D_800F6338;
extern s32 D_800F7678;
extern s32 D_800F767C;
extern u64 D_800F7680;
extern s32 D_800F7684;
extern void *func_8029CF90(void);
extern void func_8029DC78(s32, s32 *, s32);
extern void D_8029D240(void);
extern void func_8029DDA0(void *, void *, s32);
extern void func_8029E1D8(void);
extern s32 func_802A04D0(void);
void func_8029CDFC(Arg *arg) {
    s32 started = 0;
    s32 local = 0;
    void *p = func_8029CF90();
    u16 n = *(u16 *)((u8 *)p + 2);
    D_800F6338 = n;
    if (n == 0) D_800F6338 = 1;
    for (;;) {
        func_8029DC78(arg->fieldC, &local, 1);
        n = *(u16 *)local;
        if (n == 13) {
            D_8029D240();
            D_800F6338--;
            if (D_800F6338 == 0) {
                p = func_8029CF90();
                if (*(void **)((u8 *)p + 0x10) != 0)
                    func_8029DDA0(*(void **)((u8 *)p + 0x10), *(void **)((u8 *)p + 0x14), 0);
                D_800F6338 = *(u16 *)((u8 *)p + 2);
            }
            D_800F767C++;
            if (!started) {
                s32 v = func_802A04D0();
                D_800F7680 = 0;
                D_800F7684 = v;
                started = 0;
            }
            {
                s32 old = D_800F7678;
                D_800F7678 = func_802A04D0();
                D_800F7680 += (u32)(D_800F7678 - old);
            }
        } else if (n == 14) {
            func_8029E1D8();
        }
    }
}
