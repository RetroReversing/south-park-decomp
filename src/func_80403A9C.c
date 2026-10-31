typedef struct { char pad[0x14]; u16 f14; } S;

extern void func_8021E6F8(void *p, s32 a, s32 b);

void func_80403A9C(S *arg0) {
    func_8021E6F8(arg0, 0x1D0, 0x1D4);
    arg0->f14 = 0;
}
