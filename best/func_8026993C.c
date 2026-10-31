void func_8026798C(s32, s32, s32, s32, f32, f32, s32);
extern u8 D_800F1518[];
extern s16 D_800B17D0[];

void func_8026993C(s32 arg0, s32 arg1, f32 x, f32 arg3, f32 arg4, f32 arg5) {
int __repair_literal;

    u8 idx;
    s32 i;

    if (arg0 != 0) {
__repair_literal = 0;

        if (arg1 > __repair_literal) {
            i = 0;
            do {
                idx = D_800F1518[i];
                x = x - (f32)D_800B17D0[idx] * arg4;
                func_8026798C(4, idx, (s16)(s32)x, (s16)(s32)arg3, arg4, arg5, 0);
                i++;
            } while (i < arg1);
        }
    } else {
        i = arg1 - 1;
        if (i >= 0) {
            do {
                idx = D_800F1518[i];
                func_8026798C(4, idx, (s16)(s32)x, (s16)(s32)arg3, arg4, arg5, 0);
                x = x + (f32)D_800B17D0[idx] * arg4;
                i--;
            } while (i >= 0);
        }
    }
}
