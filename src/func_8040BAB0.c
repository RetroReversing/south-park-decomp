typedef struct {
    u32 f0;
    u8 f4;
    u8 pad[28 - 5];
} Entry1C;

extern Entry1C D_8010E2FC[];
extern u8 D_800D77E6;
extern void *D_800C8F0C[];
extern Entry1C D_8010E2F8[];

void *func_8040BAD0(s32 arg0) {
    if (D_8010E2FC[arg0].f4 != 0) {
        return &D_8010E2FC[arg0];
    }
    return D_800C8F0C[D_800D77E6];
}

u32 func_8040BAB0(s32 arg0) {
    return D_8010E2F8[arg0].f0 >> 8;
}
