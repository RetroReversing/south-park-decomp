extern f32 D_800AB018;
extern f32 D_800AB01C;

void func_8029A0F8(s32 *arg0) {
    f32 m[4][4];
    f32 *mtx;
    f32 *out2;
    s32 i, j;
    s32 x, y;
    f32 a, b;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j)
                m[i][j] = D_800AB018;
            else
                m[i][j] = 0.0f;
        }
    }
    mtx = (f32 *)arg0;
    out2 = (f32 *)((u8 *)arg0 + 0x20);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            a = m[i][j * 2];
            b = m[i][j * 2 + 1];
            a *= D_800AB01C;
            b *= D_800AB01C;
            x = (s32)a;
            y = (s32)b;
            *((s32 *)mtx) = (s32)((x & 0xFFFF0000) | ((u32)y >> 16));
            mtx++;
            *((s32 *)out2) = (s32)(((x << 16) & 0xFFFF0000) | (y & 0xFFFF));
            out2++;
        }
    }
}
