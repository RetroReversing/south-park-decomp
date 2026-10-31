typedef struct {
    s32 base;      /* 0x0 */
    s32 stride;    /* 0x4 */
    f32 y;         /* 0x8 */
    f32 scale;     /* 0xC */
} BitStream;

extern f64 D_800AA2E0;

f32 func_8028107C(BitStream *bs, s32 index) {
int __repair_literal;

    u32 offset;
    u32 bits;
    u32 bitoff;
    u32 value;
    u32 mask;
    f64 d;

    bits = bs->stride;
    d = bs->y;
    offset = bs->base + bs->stride * index;
    {
        u32 *p = (u32 *)((offset & 0xF0000000) | ((offset & 0x0FFFFFE0) >> 3));
        bitoff = offset & 0x1F;
        value = p[0];
        if (bitoff != 0) {
            value = (value >> bitoff) | (p[1] << (0x20 - bitoff));
        }
    }
__repair_literal = 0x20;

    if (bits < __repair_literal) {
        value &= (1 << bits) - 1;
    }
    d = (f64)value;
    if ((s32)value < 0) {
        d = d + D_800AA2E0;
    }
    return ((f32)d / (f32)((1 << bits) - 1)) * bs->scale + (f32)bs->y;
}
