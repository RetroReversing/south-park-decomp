f32 D_80215BE0(f32 a, f32 b);

s16 func_80272DD4(s16 arg0, s16 arg1)
{
    f32 f1;
    f32 f0;
    s16 r;

    f1 = arg0;
    f0 = arg1;
    if (D_80215BE0(f0, f1) >= 0.0f) {
        r = f1 + D_80215BE0(f0, f1);
    } else {
        r = f1 - D_80215BE0(f0, f1);
    }
    return r;
}
