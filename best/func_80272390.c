extern f32 D_800A9F64, D_800A9F68, D_800A9F6C;
extern s16 D_800F1E68[];
typedef struct { u8 pad[4]; s32 index; u8 rest[0xB0]; void *owner; s32 last; } Node72390;
void func_80272390(Node72390 *arg0, void *arg1) {
char *__repair_addr;

    s32 i = 0;
    s32 j = 0;
    f32 x, y;
    arg0->index = (s32)arg1;
    do {
        x = (f32)i * D_800A9F64;
        y = x * x * x * x * x * D_800A9F68;
        D_800F1E68[0x5A - i] = (s16)(s32)y;
        i++;
    } while (i < 0x5B);
    i = 0;
    do {
        u8 *p = (u8 *)arg0 + j + 4;
        *(void **)(p + 0xB0) = arg1;
__repair_addr = (char *)(p + 0);

        *(s32 *)(__repair_addr) = i;
        *(s32 *)(p + 0xC) = -1;
        *(s32 *)(p + 8) = -1;
        *(s16 *)(p + 0x36) = -1;
        *(s16 *)(p + 0x34) = 0;
        *(s32 *)(p + 0x3C) = -1;
        *(s32 *)(p + 0x14) = 0;
        *(f32 *)(p + 0x2C) = D_800A9F6C;
        *(s32 *)(p + 0x54) = 0;
        *(s32 *)(p + 0x58) = 0;
        *(f32 *)(p + 0x30) = D_800A9F6C;
        *(s32 *)(p + 0xA0) = 0;
        *(s32 *)(p + 0xA8) = 0;
        *(s32 *)(p + 0xB4) = -1;
        *(s32 *)(p + 0xAC) = *(s32 *)((u8 *)arg1 + 0x27AC);
        i++;
        j += 0xB8;
    } while (i < 17);
}
