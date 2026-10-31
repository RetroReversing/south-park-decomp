typedef struct { u32 f0; u8 f4; u8 pad[23]; } Entry1C;
extern Entry1C D_8010E2FC[];
extern u8 D_800D77E6;
extern void *D_800C8F0C[];
void *func_8040BAD0(s32 arg0) {
    if (D_8010E2FC[arg0].f4 != 0) return &D_8010E2FC[arg0];
    return D_800C8F0C[D_800D77E6];
}
