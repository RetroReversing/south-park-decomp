typedef struct {
    s8 pad[0x18];
    s32 unk18;
    s32 unk1C;
} S_80298D50;

s32 func_80298D50(void *arg0, S_80298D50 *arg1) {
    s32 t;
    void *q;

    t = 0;
    while (1) {
        if (arg1->unk18 != 0) {
            arg1->unk18 = 1;
            break;
        }
        arg1->unk18 = t;
        t = 1;
        arg1->unk1C = t;
        q = *(void **)arg0;
        if (q == NULL) {
            break;
        }
        (*(void (**)(void))((s8 *)q + 8))();
        break;
    }
    return 0;
}
