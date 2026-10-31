extern char D_800AAC28[];
extern char D_800AAC2C[];
extern s16 *D_800AAC48[24];
extern float D_800AAC40;

s32 func_80293674(void *, void *);
void func_8029370C(void *, void *, s32);
void func_80293890(void *, s32);
void func_802940B0(void *);
void func_802942B4(void *, void *);
void func_80294B8C(void *, void *);
s32 func_80294BF0(void *, void *, s32);
void func_8029D580(void *, void *, s32);
void func_80294F04(void *, void *);
s32 func_80295134(void *, void *, s32);
void func_80295254(void *, void *);
void func_80295344(void *);
void func_8029540C(void *, void *);
s32 func_80295470(void *, s32);
void func_802967D8(void *, void *);
void func_802969B8(void *, void *, float);
void func_80296A50(void *, void *, s16, s32);
void func_80296CA8(void *, void *);
s16 func_80294E34(void *, void *);
s32 func_80294EA8(void *, s32);

typedef struct App App;
struct App {
    char pad00[0x14];
    void *unk14;      /* 0x14 */
    s32 unk18;        /* 0x18 */
    s32 unk1C;        /* 0x1C */
    void *unk20;      /* 0x20 */
    float f24;        /* 0x24 */
    s32 unk28;        /* 0x28 */
    s32 state;        /* 0x2C */
    char pad30[0x2];
    s16 unk32;        /* 0x32 */
    char pad34[4];
    s16 op;           /* 0x38 */
    char pad3A[2];
    void *arg1;       /* 0x3C */
    void *arg2;       /* 0x40 */
    u8 arg3;          /* 0x44 */
    char arg3b[3];
    char sub48[0x14]; /* 0x48 */
    s32 unk5C;        /* 0x5C */
    u8 *sprtab;       /* 0x60 */
    void *nodes;      /* 0x64 */
    char pad68[0xC];
    s32 (*fp74)(void *);
    char pad78[4];
    void *save7C;     /* 0x7C */
    void *save80;     /* 0x80 */
    s32 save84;       /* 0x84 */
};

void func_80293B74(App *self) {
    s16 sh[0xA];
    s32 r;
    void *n;
    void *s0;
    void *s1;
    float f;

    while (1) {
        switch (self->op) {
        case 0:
            func_802940B0(self);
            break;
        case 1:
            sh[0] = 9;
            func_8029370C(self->sub48, sh, self->unk5C);
            break;
        case 2:
            s0 = self->arg1;
            func_80296CA8(self->unk14, s0);
            func_802967D8(self->unk14, s0);
            s1 = *(void **)((u8 *)s0 + 0x10);
            if (*(u8 *)((u8 *)s1 + 0x37) != 0) {
                func_80295254(self, s1);
            }
            func_80294B8C(self, s0);
            break;
        case 3:
            s0 = self->arg1;
            s1 = *(void **)((u8 *)s0 + 0x10);
            if (*(u8 *)((u8 *)s1 + 0x34) == 0) {
                *(u8 *)((u8 *)s1 + 0x34) = 1;
            }
            *(u8 *)((u8 *)s1 + 0x30) = self->arg3;
            *(s32 *)((u8 *)s1 + 0x24) = self->unk1C + (s32)self->arg2;
            r = func_80294E34(s1, self);
            func_80296A50(self->unk14, s0, r, (s32)self->arg2);
            break;
        case 4:
            s0 = self->arg1;
            s1 = self->arg2;
            r = self->fp74(s1);
            f = *(float *)&self->unk20;
            if (f >= D_800AAC40) {
                *(s8 *)((u8 *)s0 + 0x36) = (s32)f;
            } else {
                *(s8 *)((u8 *)s0 + 0x36) = (s32)(f - D_800AAC40) | (s32)0x80000000;
            }
            sh[0] = 0x16;
            *(void **)((u8 *)sh + 4) = s0;
            *(void **)((u8 *)sh + 8) = s1;
            func_8029370C(self->sub48, sh, r);
            break;
        case 7:
            func_802942B4(self, &self->op);
            break;
        case 8:
            func_8029540C(self, &self->op);
            break;
        case 9:
            if (self->state != 1) {
                break;
            }
            self->state = 1;
            func_80295344(self);
            break;
        case 12:
            if (self->state != 2) {
                break;
            }
            s1 = self->nodes;
            if (s1 == 0) {
                self->unk1C = 0;
            } else {
                do {
                    s0 = (u8 *)s1 + 4;
                    func_80296CA8(self->unk14, s0);
                    func_802967D8(self->unk14, s0);
                    if (*(u8 *)((u8 *)s1 + 0x37) != 0) {
                        func_80295254(self, s1);
                    }
                    func_80294B8C(self, s0);
                    s1 = self->nodes;
                } while (s1 != 0);
                self->unk1C = 0;
            }
            self->state = 0;
            break;
        case 20:
            s0 = self->sub48;
            if (self->state != 1) {
                break;
            }
            func_80293890(s0, 0);
            func_80293890(s0, 2);
            s1 = self->nodes;
            if (s1 != 0) {
                do {
                    void *tr = (u8 *)s1 + 4;
                    if ((func_80294BF0(self, tr, 0xC350) & 0xFF) != 0) {
                        func_80295134(self, tr, 0xC350);
                    }
                    s1 = *(void **)s1;
                } while (s1 != 0);
            }
            self->state = 2;
            sh[0] = 0x10;
            func_8029370C(self->sub48, sh, 0x7FFFFFFF);
            break;
        case 21:
            s1 = self->arg1;
            self->unk32 = (s16)(s32)self->arg1;
            while (s1 != 0) {
                r = func_80294E34(s1, self);
                *(s16 *)&r = r;
                r = func_80294EA8(s1, self->unk1C);
                func_80296A50(self->unk14, (u8 *)s1 + 4, *(s16 *)&r, r);
                s1 = *(void **)s1;
            }
            break;
        case 22:
            self->save7C = self->arg1;
            self->save80 = self->arg2;
            self->save84 = (s32)self->arg3;
            break;
        case 23:
            self->sprtab[self->arg3b[0] * 16 + 8] = self->arg3b[1];
            break;
        default:
            func_8029D580(D_800AAC28, D_800AAC2C, 0x13B);
            break;
        }
        r = func_80293674(self->sub48, &self->op);
        if (r == 0) {
            break;
        }
        self->unk28 = r;
        self->unk1C += r;
    }
}
