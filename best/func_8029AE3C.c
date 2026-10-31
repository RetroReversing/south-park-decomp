extern u8 D_800F604C;
extern u8 D_800F6050[];
extern s32 D_800F608C;

typedef struct {
    u8 b0, b1, b2, b3;
    u16 h4;
    u8 b6, b7;
} Rec;

void func_8029AE3C(void) {
    Rec r;
    Rec *p;
    u8 *end;
    s32 i;
    s32 one;

    p = (Rec *)D_800F6050;
    for (i = 0xE; i >= 0; i--) {
        *(s32 *)((u8 *)p + 0x38 + i * 4) = 0;
    }
    one = 1;
    r.b0 = 0xFF;
    r.b2 = 4;
    r.h4 = 0xFFFF;
    D_800F608C = one;
    i = 0;
    r.b1 = one;
    r.b3 = one;
    r.b6 = 0xFF;
    r.b7 = 0xFF;
    if (D_800F604C != 0) {
        do {
            *p = r;
            i++;
            p++;
        } while (i < D_800F604C);
    }
    ((u8 *)p)[0] = 0xFE;
}
