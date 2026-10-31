typedef struct SVec { s32 x, y, z; f32 u, v; } SVec;

extern s32 D_80205340(void *tbl, s16 v);
extern s32 func_802820F8(void *p, s32 v);
extern u8 D_800CCA80;

void func_80281BFC(void *arg0, s16 *arg1, SVec sv, void **arg7) {
char *__repair_addr;

    f32 u = sv.u;
    f32 v = sv.v;
    s32 x = sv.x;
    s32 y = sv.y;
    s32 z = sv.z;

    *(void **)((u8 *)arg0 + 8) = arg1;
__repair_addr = (char *)((u8 *)arg0 + 0xC);

    *(s32 *)(__repair_addr) = x;
    *(s32 *)((u8 *)arg0 + 0x10) = y;
    *(s32 *)((u8 *)arg0 + 0x14) = z;
    *(f32 *)((u8 *)arg0 + 0x18) = u;
    *(f32 *)((u8 *)arg0 + 0x1C) = v;
    *(void ***)((u8 *)arg0 + 0x38) = arg7;
    if (arg7 != NULL) {
        *arg7 = arg0;
    }
    func_802820F8((u8 *)arg0 + 0x20, D_80205340(&D_800CCA80, arg1[0]));
    func_802820F8((u8 *)arg0 + 0x2C, D_80205340(&D_800CCA80, arg1[1]));
}
