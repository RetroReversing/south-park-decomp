typedef struct {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    void *unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    char pad24[0x30-0x24];
    s32 unk30;
    char pad34[0x110-0x34];
    void *unk110;
    char pad114[0x140-0x114];
    f32 unk140;
    f32 unk144;
    f32 unk148;
    s32 unk168;
} Arg0;

typedef struct {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    char pad6[2];
    f32 unk8;
    char padC[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
} Arg4;

typedef struct {
    char pad00[0x2];
    u16 unk2;
    char pad04[0x20-0x04];
    f32 unk20;
    char pad24[0x44-0x24];
    s32 unk44;
} Shape;

typedef struct {
    f32 unk00;
    s32 state;
    f32 unk08;
    f32 unk0C;
    f32 unk10;
    f32 nx;
    f32 ny;
    f32 nz;
} Ctx;

typedef struct { void *unk0; void *unk4; void *unk8; } Ctx2;

void *D_80203B70(void *, void *);
void D_802131C4(void *, void *, void *);
void D_802131F8(void *, void *, f32);
f32 D_80229AB0(void *, s32);
void func_8027917C(void *);
void func_80279454(void *);
void func_80279478(void *, void *);
s32 func_802794E0(void *, void *);
void func_8027D674(void *);
extern f32 D_800AA0D8;
extern f32 D_800AA0DC;
extern f32 D_800AA0E0;
extern f32 D_800AA0E4;
extern f32 D_800AA0E8;
extern f32 D_800AA0EC;
extern f32 D_800AA0F0;
extern f32 D_800AA0F4;
extern f32 D_800ABA00;
extern void (*D_800B25F0[])(void *);
extern char D_800CCA80;
extern char D_800F4868;
extern char D_800F4A48;
extern char D_800F4C18;

s32 func_80277288(Arg0 *arg0, f32 arg1, f32 arg2, f32 arg3, Arg4 *arg4) {
int __repair_literal;

    Ctx2 sp10;
    Ctx ctx;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    void *sp44;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    Shape *shape;
    void (**var_s0)(void *);
    void (*temp_v0_2)(void *);
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 var_fs0f;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_v0;
    u8 *p;

    shape = D_80203B70(&D_800CCA80, arg0->unk10);
    if ((arg4 != (Arg4 *)&D_800F4C18) && (arg4 != (Arg4 *)&D_800F4A48) && (arg4 != (Arg4 *)&D_800F4868)) {
        arg0->unk30 = 0;
        if (arg0->unk0 == 1) {
            arg0->unk168 = arg0->unk168 & 0xFFFE7FFF;
        }
    }
    func_8027D674(arg4);
    var_s6 = 0;
    var_s3 = 0;
    var_fs0f = D_800AA0D8;
    sp10.unk0 = arg0;
    sp10.unk4 = arg4;
    sp38 = arg1;
    sp3C = arg2;
    sp40 = arg3;
    spAC = 0;
    ctx.nx = 0.0f;
    temp_fs0 = D_800ABA00 * D_800AA0DC;
    var_s4 = 3;
    if (!(arg4->unk0 & 0x40000)) {
        var_s4 = 2;
        if (arg4->unk0 & 0x10000000) {
            var_s4 = 1;
        }
    }
    var_v1 = 0;
    if ((arg4->unk0 & 0x800) && (temp_fs0 != 0.0f)) {
        var_v1 = 1;
    }
    spA0 = var_v1;
    temp_fs1 = arg0->unk8;
    if (((arg0->unk0 & 0xFF00FFFF) == 0x02000070) && (arg0->unk110 != 0)) {
        spA0 = 0;
        sp38 = arg0->unk4;
        sp3C = arg0->unk8;
        sp40 = arg0->unkC;
        arg0->unk4 = arg0->unk140;
        arg0->unk8 = arg0->unk144;
        arg0->unkC = arg0->unk148;
    }
    if (spA0 != 0) {
        var_fv1 = arg4->unk14;
        if (arg4->unk18 != var_fv1) {
            temp_v0 = arg0->unk10;
            if ((temp_v0 != NULL) && (((Shape *)temp_v0)->unk2 & 1) && (shape != NULL) && (arg0->unk8 < shape->unk20)) {
                var_fv1 = arg4->unk18;
            }
        }
        var_fv1_2 = var_fv1 * D_800AA0E0;
        temp_fv0 = D_800AA0E4 / temp_fs0;
        if (!(var_fv1_2 <= temp_fv0)) {
            var_fv1_2 = temp_fv0;
        }
        if (var_fv1_2 == 0.0f) {
            spB0 = 0.0f;
            spB8 = 0.0f;
            spB4 = arg4->unk8;
        } else {
            spB0 = -arg0->unk18 * var_fv1_2;
            spB4 = (-arg0->unk1C * var_fv1_2) + arg4->unk8;
            spB8 = -arg0->unk20 * var_fv1_2;
        }
        temp_fv0 = temp_fs0 * D_800AA0E8;
        sp38 += (arg0->unk18 + (spB0 * temp_fv0)) * temp_fs0;
        sp3C += (arg0->unk1C + (spB4 * temp_fv0)) * temp_fs0;
        sp40 += (arg0->unk20 + (spB8 * temp_fv0)) * temp_fs0;
        arg0->unk18 = arg0->unk18 + (spB0 * temp_fs0);
        arg0->unk1C = arg0->unk1C + (spB4 * temp_fs0);
        arg0->unk20 = arg0->unk20 + (spB8 * temp_fs0);
        p = (u8 *)D_800F4864;
        *(f32 *)(p + 0xD4) = arg0->unk18;
        *(f32 *)(p + 0xD8) = arg0->unk1C;
        *(f32 *)(p + 0xDC) = arg0->unk20;
    }
    if ((arg0->unk4 != sp38) || (arg0->unk8 != sp3C) || (var_v0 = 0, (arg0->unkC != sp40))) {
        if (shape == NULL) {
            spA8 = 0;
        } else {
            spA8 = shape->unk44 & 0x4000;
        }
__repair_literal = 1;

        sp9C = var_s4 > __repair_literal;
        func_8027917C(&sp10);
        if ((spA4 != 0) && (spA0 != 0)) {
            temp_fv0 = 0.0f;
            if (!(D_800AA0EC < arg4->unk10)) {
                temp_fv0 = D_800AA0EC - arg4->unk10;
            }
            D_802131F8(&arg0->unk18, &arg0->unk18, temp_fv0);
        }
loop_39:
        func_80279454(&ctx);
        D_802131C4(&sp9C, &sp38, &arg0->unk4);
        if (spA0 != 0) {
            spB0 = arg0->unk18;
            spB4 = arg0->unk1C;
            spB8 = arg0->unk20;
        }
        if ((D_800B25F0[0] != NULL) && (spAC == 0)) {
            var_s0 = &D_800B25F0[0];
loop_44:
            temp_v0_2 = *var_s0;
            var_s0 += 4;
            temp_v0_2(&sp10);
            if (*var_s0 != NULL) {
                if (spAC == 0) {
                    goto loop_44;
                }
            }
        }
        switch (ctx.state) {
        default:
            var_s3 += 1;
            /* fallthrough */
        case 1:
            arg0->unk4 = sp38;
            arg0->unk8 = sp3C;
            arg0->unkC = sp40;
            func_80279478(&ctx, arg0);
            if (spA0 != 0) {
                arg0->unk18 = spB0;
                arg0->unk1C = spB4;
                arg0->unk20 = spB8;
            }
            ctx.nx = ctx.unk0C;
            break;
        case 0:
            arg0->unk4 = sp38;
            arg0->unk8 = sp3C;
            arg0->unkC = sp40;
            break;
        }
        if (!(arg4->unk0 & 0x100000) || (var_v0 = var_s3, (*(s32 *)((u8 *)D_800F4864 + 0x98) == 0))) {
            var_fs0f -= ctx.unk00 * var_fs0f;
            if (spA4 != 0) {
                var_fv0 = D_80229AB0(arg0, 0);
                if (!(arg0->unk8 <= var_fv0)) {
                    var_fv0 = arg0->unk8;
                }
                arg0->unk8 = var_fv0;
            }
            var_s0_2 = 0;
            if ((ctx.state == 1) || (ctx.state == 3)) {
                var_s0_2 = 1;
            }
            if (var_s0_2 != 0) {
                sp38 = ctx.nx;
                sp3C = ctx.ny;
                sp40 = ctx.nz;
                sp9C = (var_s3 + 1) < var_s4;
                func_8027917C(&sp10);
            }
            var_s6 += 1;
            if ((var_s0_2 == 0) || (var_s6 >= 0x64) || (var_s3 >= var_s4)) {
                if ((arg4->unk5 != 0) && !(arg4->unk0 & 0x200000) && (func_802794E0(&sp10, arg0->unk10) != 0)) {
                    var_s0_3 = 0;
                    if (D_800AA0F0 < var_fs0f) {
                        if (sp44 == (u8 *)D_800F4864 + 8) {
                            var_v0_2 = arg4->unk4 ^ 1;
                            goto block_76;
                        }
                        var_s0_3 = 0;
                        if (sp44 == (u8 *)D_800F4864 + 0x9C) {
                            var_v0_2 = arg4->unk5 ^ 1;
block_76:
                            var_s0_3 = var_v0_2 != 0;
                        }
                    }
                    var_fv1 = D_80229AB0(arg0, 0);
                    if (var_s0_3 != 0) {
                        if (!(var_fv1 < sp3C)) {
                            arg0->unk8 = var_fv1;
                        } else {
                            goto block_81;
                        }
                    } else if (var_fv1 < arg0->unk8) {
block_81:
                        if (var_s0_3 != 0) {
                            arg0->unk8 = sp3C;
                        } else {
                            arg0->unk8 = arg0->unk8;
                        }
                    } else {
                        arg0->unk8 = var_fv1;
                    }
                }
                var_v0 = var_s3;
                if (spA4 != 0) {
                    var_v0 = var_s3;
                    if ((spA0 != 0) && (temp_fs0 != 0.0f) && (arg4->unk8 != 0.0f)) {
                        temp_fv0 = arg0->unk8 - temp_fs1;
                        if (temp_fv0 < D_800AA0F4) {
                            arg0->unk1C = temp_fv0 / temp_fs0;
                        }
                    }
                }
            } else {
                goto loop_39;
            }
        }
    }
    return var_v0;
}
