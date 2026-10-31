void D_80247110(void *, void *);
void D_8021B7EC(void *, s32, s32);
void func_8025A554(void *);

typedef struct {
    u8 pad0[0xF4];
    s32 unkF4;
} S_C0;

typedef struct {
    s32 unk0;
    u8 pad4[0xEC];
    s32 unkF0;
} S_C1;

void func_8028833C(S_C0 *a0, S_C1 *a1, s32 a2) {
    s32 v;

    a1->unk0 |= 0x20;
    v = a0->unkF4;
    v &= 0xFF7FFFFF;
    v &= 0xFFEFFFFF;
    v &= 0xFFFF7FFF;
    a0->unkF4 = v;
    if (a1->unkF0 != 0) {
        D_80247110(a0, a1);
    }
    if (a0->unkF4 & 0x04000000) {
        func_8025A554(a0);
    }
    D_8021B7EC(a0, 1, a2);
}
