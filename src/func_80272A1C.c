typedef struct Arr Arr;
typedef struct Ent {
    char pad0[8];
    s32 unk8;
    char pad1[0xAC];
} Ent;

struct Arr {
    void *unk0;
    Ent ent[16];
};

extern s32 D_800B2148;
extern s32 D_800B214C;

void func_80271B10(Ent *e);

void func_80272A1C(Arr *arg0)
{
    s32 i;
    s32 count;
    Ent *e;

    count = 0;
    e = arg0->ent;
    for (i = 0; i < 16; i++, e++) {
        if (e->unk8 != -1 && *(s16 *)((u8 *)arg0->unk0 + 0x102) != i) {
            func_80271B10(e);
            count++;
        }
    }
    D_800B2148 = count;
    if (D_800B214C < count) {
        D_800B214C = count;
    }
}
