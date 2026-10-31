extern u8 D_800ADDBA;

extern void func_80269028(s32);
extern void func_8026798C(s32, s32, s32, s32, f32, f32, s32);
extern void func_80402948(void *, void *);

s32 func_80406AD8(u8 *arg0) {
    u32 *f = (u32 *)(arg0 + 8);
    u32 v;

    if (D_800ADDBA < 2) {
        v = *f & 0xFFF7FFFF;
    } else {
        v = *f | 0x80000;
    }
    *f = v;
    return 0;
}

typedef struct {
    u8 pad[0xB0];
    f32 fB0;
    f32 fB4;
} S7EC0;

typedef struct {
    u8 pad[0x3C];
    S7EC0 *p3C;
} S7EC0arg;

void func_80407EC0(S7EC0arg *arg0, void *arg1) {
    S7EC0 *s = arg0->p3C;

    func_80269028(0xFF);
    func_8026798C(0x3FC, 0, 0, 0, s->fB0, s->fB4, 0);
    func_80402948(arg0, arg1);
}

s32 func_80408EF4(s32 arg0) {
    switch (arg0) {
    case 0:
        return 0;
    case 1:
        return -3;
    case 2:
        return -6;
    case 3:
        return -4;
    case 4:
        return -12;
    case 5:
        return -9;
    case 6:
        return -10;
    case 7:
        return 0;
    case 8:
        return 0;
    case 9:
        return 0;
    case 10:
        return 0;
    case 11:
        return 0;
    default:
        return -7;
    }
}
