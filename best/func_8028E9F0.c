typedef struct SndObj {
    char pad0[0x10];
    f32 f10;
    char pad14[0xC];
    f32 f20;
    f32 f24;
    s32 w28;
    s32 w2C;
    s32 w30;
} SndObj;

extern SndObj *D_800B3628;

s32 func_8028E9F0(void) {
    SndObj *o = D_800B3628;
    f32 a;
    s32 r = 0;
    if (o->w28 != 0) {
        a = o->f10;
        if (o->f20 <= a) {
            if (a <= o->f24) {
                r = 1;
            }
        }
    }
    if (r == 0) {
        goto out;
    }
    o = D_800B3628;
    if (o->w30 & 2) {
        return 1;
    }
out:
    return 0;
}
