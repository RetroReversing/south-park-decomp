/* identical to func_0026F480 in turok2-decomp (matched), with its names changed by decompdecomp */
s32 func_8026B310(f32 (*planes)[4], f32 *point) {
    s32 i;
    f32 *plane;
    for (i = 0; i < 6; i++) {
        plane = planes[i];
        if (!(plane[0] * point[0] + plane[1] * point[1] + plane[2] * point[2] <= plane[3])) {
            return 0;
        }
    }
    return 1;
}
