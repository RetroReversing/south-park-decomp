extern s32 D_800AB9FC;
extern void func_802621D4(s32);
extern void func_80262BD0(s32);
extern void func_80262C28(s32, s32);
extern void func_80262CD0(s32, s32, s32, s32);
extern void func_80262C70(void *, void *);

typedef struct {
    char pad[0x2580];
    s32 unk2580;
    s32 unk2584;
} S2;

void func_80262234(S2 *arg0) {
    s32 n;

    arg0->unk2580 = 0x12C;
    n = D_800AB9FC;
    arg0->unk2584 = (s32)((u8 *)arg0 + n * 0x12C0);
}

s32 func_802621FC(S2 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->unk2580;
    if (temp_v1 >= arg1) {
        temp_v0 = arg0->unk2584;
        arg0->unk2580 = temp_v1 - arg1;
        arg0->unk2584 = temp_v0 + arg1 * 0x10;
        return temp_v0;
    }
    return 0;
}

void func_8026215C(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    func_80262CD0(arg0 + 0x7514, arg0 + 0x6A94, 0x54, 0x20);
    func_80262BD0(arg0 + 0x6A88);
    var_s1 = 0;
    var_s0 = 0x2588;
    do {
        func_80262C28(arg0 + 0x6A88, arg0 + var_s0);
        var_s1 += 1;
        var_s0 += 0xB8;
    } while (var_s1 < 0x60);
    func_802621D4(arg0);
}

void func_802623C4(s32 arg0, void *arg1, void *arg2) {
    f32 v = *(f32 *)((u8 *)arg1 + 0x4C) - *(f32 *)((u8 *)arg2 + 0xAC);

    *(f32 *)((u8 *)arg1 + 0x4C) = v;
    func_80262C70((u8 *)arg1 + 0x40, arg2);
    func_80262C28(arg0 + 0x6A88, arg2);
}
