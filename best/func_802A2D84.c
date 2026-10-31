extern f32 D_800AB434;
extern u16 D_800B4A68[];
extern s16 D_800B4A86;
extern f32 D_800B4A88[];
s32 func_802A2D84(f32 *out, s16 *in) {
    s16 row, col, cur;
    for (row = 0, col = 0; row < 16; row++) {
        cur = col;
        while (cur < D_800B4A68[row]) {
            out[cur] = ((f32)in[0x50 + cur] / D_800B4A88[in[row]]) * D_800AB434;
            cur++;
        }
        col = D_800B4A68[row];
    }
    for (row = D_800B4A86; row < 256; row++) {
        ((s32 *)out)[row] = 0;
    }
    return 1;
}
