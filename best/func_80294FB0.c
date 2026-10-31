extern f32 D_800AACB4;

void func_80294FB0(void *arg0) {
    s32 i = 0;
    s32 o;

    if (*(u8 *)((u8 *)arg0 + 0x34) != 0) {
        do {
            f32 f = D_800AACB4;
            s32 *b = (s32 *)((u8 *)arg0 + 0x60);
            o = i * 16;
            *(s32 *)(o + *b) = 0;
            *(u8 *)(o + *b + 0x6) = 0;
            *(u8 *)(o + *b + 0xA) = 0;
            *(u8 *)(o + *b + 0x7) = 0x40;
            *(u8 *)(o + *b + 0x9) = 0x7F;
            *(u8 *)(o + *b + 0x8) = 5;
            *(u8 *)(o + *b + 0xB) = 0;
            *(u16 *)(o + *b + 0x4) = 0xC8;
            *(f32 *)(o + *b + 0xC) = f;
            i++;
        } while (i < *(u8 *)((u8 *)arg0 + 0x34));
    }
}
