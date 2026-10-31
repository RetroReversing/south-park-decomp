s32 func_8027A218(f32 *a0, f32 *a1) {
    f32 x = a0[0] - a1[0];
    f32 z = a0[2] - a1[2];
    return x * x + z * z <= a0[4];
}
