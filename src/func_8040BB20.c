typedef struct {
    u8 pad[0x1C];
} Entry1C;

extern Entry1C D_8010E30E[];
extern Entry1C D_8010E2FC[];
extern u8 D_800D77E6;
extern void *D_800C8F0C[];
extern u32 D_8010E2F8[];

void *func_8040BB20(s32 arg0) {
    return &D_8010E30E[arg0];
}

void *func_8040BAD0(s32 arg0) {
    if (*(u8 *)&D_8010E2FC[arg0] != 0) {
        return &D_8010E2FC[arg0];
    }
    return D_800C8F0C[D_800D77E6];
}

u32 func_8040BAB0(s32 arg0) {
    return *(u32 *)((u8 *)&D_8010E2F8[arg0]) >> 8;
}
