typedef struct { char pad[0x14]; s32 *unk14; } S_80403524;

void func_804016EC();

void func_80403524(S_80403524 *arg0, s32 a1, s32 a2, s32 a3) {
    func_804016EC(arg0, a1, a2, a3, arg0->unk14[D_800D77E6]);
}
