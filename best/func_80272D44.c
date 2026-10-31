extern f32 D_800A9F74, D_800A9F78, D_800B1F54;
f32 func_80272D44(f32 x) {
    f32 shifted = x + D_800A9F74;
    f32 t = shifted * D_800A9F78;
    s32 ti = (s32)t;
    s16 i = (s16)ti;
    f32 fi = (f32)i;
    f32 result;
    if (fi == t) {
        result = (&D_800B1F54)[i];
    } else {
        f32 v = (&D_800B1F54)[i];
        f32 n = (&D_800B1F54)[(s16)(ti + 1)];
        result = v + (t - fi) * (n - v);
    }
    return result;
}
