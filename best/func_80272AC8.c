typedef struct Ent {
    char pad0[8];
    s32 unk8;
    char pad1[0x9C];
    s32 unkA8;
    char pad2[0xC];
    s32 unkB8;
} Ent;

typedef struct Arr {
    void *unk0;
    Ent ent[16];
} Arr;

s32 func_80272AC8(Arr *arg0, s32 arg1, s32 arg2)
{
char *__repair_addr;

    s32 i;
    Ent *e;

    e = arg0->ent;
    for (i = 0; i < 16; i++, e++) {
__repair_addr = (char *)((u8 *)arg0->unk0 + 0x102);

        if (e->unk8 != -1
            && *(s16 *)(__repair_addr) != i
            && e->unkA8 == arg1
            && e->unkB8 == arg2) {
            return i;
        }
    }
    return -1;
}
