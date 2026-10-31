typedef struct {
    s32 base;
    u32 width;
} BitStream;

u32 func_80281188(BitStream *bs, s32 arg1) {
char *__repair_addr;

    s32 off;
    u32 idx;
    u32 bit;
    u32 w;
    u32 word;
    u32 v;
    u32 x;

    off = bs->base + bs->width * arg1;
    idx = (off & 0xF0000000) | ((u32)(off & 0x0FFFFFE0) >> 3);
    bit = off & 0x1F;
__repair_addr = (char *)((u8 *)idx + 0);

    word = *(u32 *)(__repair_addr);
    x = *(u32 *)((u8 *)idx + 4);
    if (bit != 0) {
        word = (word >> bit) | (x << (0x20 - bit));
    }
    v = word;
    w = bs->width;
    if (w < 0x20) {
        v &= (1 << w) - 1;
    }
    return v;
}
