typedef struct {
    s32 base;
    s32 width;
} BitStream;

void func_802813D0(BitStream *bs, s32 n) {
    bs->base += n * bs->width;
}

void func_80281488(BitStream *bs, s32 count) {
    s32 i;

    bs->base = count;
    bs->width = (count * 4 + 0xF) & ~7;
    for (i = 1; i <= count; i++) {
        ((s32 *)bs)[i + 1] = 0xDEADBEEF;
    }
}
