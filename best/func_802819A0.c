f32 func_802819A0(s32 arg0, s32 a1, s32 a2, s32 a3, s32 arg4, f32 t) {
    f32 p1;
    f32 p3;
    f32 p2;

    p1 = *(f32 *)&a1;
    p3 = *(f32 *)&a3;
    p2 = *(f32 *)&a2;
    return *(f32 *)&arg0 + p1 * t + p2 * t * t + p3 * t * t * t * t;
}
