extern volatile s32 D_800D7908;
extern s32 D_800F1F20;
extern s32 D_800F3A04;
extern void func_802701C4(s32 *, s32, s32);
void func_802742A0(s32 value, s32 unused) {
    if (D_800D7908 != 0) return;
    if (value < 0xFF) {
        D_800F3A04 = value;
        return;
    }
    if (D_800D7908 == 0) func_802701C4(&D_800F1F20, value, unused);
}
