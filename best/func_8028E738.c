typedef struct {
    char pad0[0x10];
    f32 f10;
    char pad14[0xC];
    f32 f20;
    f32 f24;
    s32 w28;
} SndObj;
extern SndObj *D_800B3628;
s32 func_8028E738(void) {
    SndObj *o = D_800B3628;
    s32 r = 0;
    if (o->w28) {
        f32 a = o->f10;
        f32 b = o->f20;
        if (b <= a) {
            if (o->f24 >= a)
                r = 1;
        }
    }
    return r;
}
