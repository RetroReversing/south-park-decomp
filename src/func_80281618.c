s32 func_80280B98(s32, s32);

typedef struct { f32 _pad[4]; } Tile4;

void func_80281618(s32 arg0, Tile4 *arg1, s32 arg2) {
    s32 i;
    f32 f;

    i = 0;
    while (i < arg2) {
        *(s32 *)&f = func_80280B98(arg0, 0x20);
        arg1[i]._pad[0] = f;
        i++;
    }
}
