extern s32 D_800F1F20;
extern s32 D_800D7908;

s32 func_8026FD24(s32 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_802706D8(s32 *a, s32 b);
s32 func_802706E0(s32 *a);

s32 func_8027405C(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 n;
    f32 zero = 0.0f;

    if (D_800D7908 != 0) {
        return -1;
    }
    n = 0;
    temp_s1 = func_802706E0(&D_800F1F20);
    func_802706D8(&D_800F1F20, 1);
    temp_s0 = func_8026FD24(&D_800F1F20, arg0, *(s32 *)&zero, *(s32 *)&zero, *(s32 *)&zero, n, arg1);
    func_802706D8(&D_800F1F20, temp_s1);
    return temp_s0;
}
