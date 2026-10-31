extern void D_80241EEC(void *buf, s32 a1, s32 a2, s32 a3);
extern void D_80241A44(s32 a0, void *a1, void *buf);
extern void func_80287FD0(s32 a0, void *a1, void *in, void *out);
extern void D_8023E95C(s32 a0, void *a1, s32 a2);
extern f32 D_800AA644;
extern f32 D_800AA648;
void func_80288690(s32 arg0, u8 *arg1) {
char *__repair_addr;

    u8 in[0x88];
    u8 out[0x50];
    D_80241EEC(in, 1, 1, 1);
    D_80241A44(arg0, arg1, out);
    func_80287FD0(arg0, arg1, in, out);
__repair_addr = (char *)(in + 0x84);

    if ((*(f32 *)(__repair_addr) < D_800AA644) || (*(f32 *)(arg1 + 0x3C) > D_800AA648)) {
        D_8023E95C(arg0, arg1, 4);
    }
}
