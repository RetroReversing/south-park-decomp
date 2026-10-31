s32 func_8028C50C(u32 a, s32 b) {
    u32 old;
    s32 changed = 0;
    if (a < 4) {
        old = ((u32 *)&D_800B3618)[a];
        ((u32 *)&D_800B3618)[a] = b;
        changed = changed < (old ^ (u32)b);
    }
    return changed;
}
