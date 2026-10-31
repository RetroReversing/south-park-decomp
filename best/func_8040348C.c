typedef struct S {
    char pad[4];
    s16 v4;
    char pad2[0xE];
    void *v14;
} S;
extern u8 D_800D77E6;
u8 *func_80400DB8();

s32 func_8040348C(S *arg0) {
    s32 i = 0;
    u8 *p;
    do {
        switch (arg0->v4) {
        case 7:
            p = func_80400DB8();
            break;
        case 9:
            p = arg0->v14;
            break;
        default:
            p = ((u8 **)arg0->v14)[D_800D77E6];
            break;
        }
    } while (0);
    if (p) {
        while (*p) {
            i++;
            p++;
        }
    }
    return i;
}
