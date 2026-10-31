typedef struct { s32 x, y, z; } V3;
typedef struct { s32 x, y, z, w; } V4;

extern void D_80212AB8(V4 *, V3 *);
extern void D_80253EB0();
extern u8 D_800CE0FC;
extern V3 D_800F4B7C;
extern V3 D_800F4B9C;

typedef struct Unk {
    char pad[0x18];
    V3 pos;         /* 0x18 */
    char pad2[0x40 - 0x24];
    s32 unk40;      /* 0x40 */
    char pad3[0xF8 - 0x44];
    u32 *unkF8;
    char pad4[0x108 - 0xFC];
    s32 unk108;
    s32 unk10C;
    s32 unk110;
} Unk;

void func_80256C40(Unk *arg0, s32 arg1) {
    V4 sp50;
    V3 sp60;

    if ((*arg0->unkF8 & 0x10) != 0) {
        sp60 = D_800F4B9C;
    } else {
        sp60 = arg0->pos;
    }
    D_80212AB8(&sp50, &sp60);
    D_80253EB0(&D_800CE0FC, arg0, arg0->unk108, arg0->unk10C, arg0->unk110, arg1,
               sp60, sp50, D_800F4B7C, (arg0->unk40 & 0x100002) | 1, 0);
}
