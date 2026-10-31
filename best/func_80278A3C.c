typedef struct LNode { char pad[4]; f32 x; } LNode;

typedef struct BNodeP {
    f32 x;            /* 0x0 */
    u16 flags;        /* 0x4 */
    char pad6[0xA];
    struct BNodeP *unk10;
    LNode *unk4;
    LNode *unk8;
    LNode *unkC;
    char pad1C[0x28];
    s32 unk44;
    char pad48[0xA];
    u16 unk52;
    u16 unk54;
    char pad56[0x1A];
    s32 unk70;
} BNodeP;

typedef struct BNode2 {
    f32 x;            /* 0x0 */
    char pad04[4];
    u16 flags;
    char pad0A[2];
    u16 u04;          /* 0xC */
    u16 u06;
    struct BNode2 *unk10;
    LNode *unk4;
    LNode *unk8;
    LNode *unkC;
    char pad1C[0x28];
    s32 unk44;
    char pad48[0xA];
    u16 unk52;
    u16 unk54;
    char pad56[0x1A];
    s32 unk70;
} BNode2;

typedef struct RNode {
    char pad00[0x44];
    s32 unk44;
    char pad48[0xA];
    u16 unk52;
    u16 unk54;
} RNode;

typedef struct Pos3 { s32 a0; s32 a1; s32 a2; } Pos3;
typedef struct Pos3F { f32 x; f32 y; f32 z; } Pos3F;

typedef struct Ctx2 {
    f32 *unk0;
    s32 *unk4;
} Ctx2;

extern RNode *D_80203B70(void *a0, BNode2 *a1);
extern s32 D_80229198(void *);
extern s32 D_802291AC(void *);
extern s32 D_8022920C(void *);
extern s32 D_80229290(void *);
extern s32 D_802292E8(void *);
extern s32 D_80229328(void *);
extern s32 D_80229380(void *);
extern s32 D_802293C0(void *);
extern s32 D_80229418(void *);
extern s32 D_80229458(void *);
extern s32 D_80229498(void *);
extern f32 func_8026B79C(BNode2 *, s32, s32);
extern s32 func_8026CB20(BNode2 *);
extern BNode2 *func_8026CC90(BNode2 *, s32, f32, s32);
extern s32 func_8026D374(BNode2 *, s32, s32);
extern f32 func_8026D63C(BNode2 *, s32, s32);
extern f32 func_8026DA1C(BNode2 *, s32);
extern f32 D_800AA150;
extern f32 D_800AA154;
extern f32 D_800AA158;
extern f32 D_800AA15C;
extern f32 D_800AA160;
extern f32 D_800AA164;
extern s32 D_800AE860;
extern u8 D_800CCA80[];
extern s32 D_800CE2FC;
extern void D_802150FC(f32 *, f32);
extern void D_80215188(f32 *);

BNode2 *func_80278A3C(Ctx2 *ctx, BNodeP *arg1p, s32 arg2, Pos3 *arg3) {
    BNodeP *arg1 = arg1p;
    Pos3F *ap = (Pos3F *)arg3;
    f32 *temp_s3;
    s32 *temp_s4;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    BNode2 *var_s1;
    BNodeP *v;
    RNode *node;
    RNode *node2;
    s32 f1;
    s32 f2;
    s32 f3;
    s32 f4;
    s32 var_s2;
    s32 var_s0;
    s32 temp_s6;
    s32 temp_s7;
    s32 found;
    s32 i;
    f32 spf;
    f32 fv0;

    var_s1 = (BNode2 *)((BNodeP **)arg1p)[arg2 + 4];
    if (var_s1 == NULL) {
        return NULL;
    }
    temp_s3 = ctx->unk0;
    temp_s4 = ctx->unk4;
    found = 0;
    v = arg1p;
    if (arg1p->flags & 0x20) {
        i = 0;
        do {
            if (v->unk10 == arg1) {
                found = 1;
                goto found_;
            }
            i++;
            v = (BNodeP *)((s32 *)((unsigned char *)v + 1));
        } while (i < 3);
    }
found_:
    if (!found) {
        var_s2 = 0;
        if ((*temp_s4 & 0x4000) || D_8022920C(temp_s3)) {
            var_s2 = 1;
        }
        if (!var_s2) {
            return NULL;
        }
        if (func_8026D374((BNode2 *)var_s1, arg3->a0, arg3->a2) != 0) {
            goto block;
        }
        sp10 = ap->x;
        sp14 = temp_s3[2];
        sp18 = ap->z;
        var_s1 = func_8026CC90((BNode2 *)arg1, *(s32 *)&sp10, sp14, *(s32 *)&sp18);
        if (var_s1 == NULL) {
            return NULL;
        }
    }
block:
    node = D_80203B70(D_800CCA80, (BNode2 *)arg1);
    node2 = D_80203B70(D_800CCA80, var_s1);
    if (D_800AE860 != 0 && !(node->unk54 & 8) && (node2->unk54 & 8)) {
        return NULL;
    }
    if (!(*temp_s4 & 0x10) && (var_s1->u04 & 6) == 2) {
        return NULL;
    }
    if (!(var_s1->flags & 0x1000)) {
        if (!(arg1->flags & 0x1000) || (*temp_s4 & 0x400) || !D_80229498(temp_s3)) {
        } else {
            return NULL;
        }
    }
    if (!(arg1->flags & 0x1000) || (*temp_s4 & 0x200) || !D_80229458(temp_s3)) {
    } else {
        return NULL;
    }
    if (D_800CE2FC == 0x1F4 && D_800AE860 == 0 && (var_s1->flags & 0x1000)) {
        return NULL;
    }
    if ((var_s1->flags & 0x40) && !(arg1->flags & 0x40)) {
        fv0 = func_8026B79C(var_s1, arg3->a0, arg3->a2);
        if (ap->y < fv0) {
            return NULL;
        }
    }
    if (((u8 *)temp_s3)[0] == 1 && (((s32 *)temp_s3)[0x168 / 4] & 0x60000)) {
        return var_s1;
    }
    if (!(node2->unk44 & 0x400000)) {
        if (!(node->unk44 & 0x400000) || (*temp_s4 & 0x800000) || !D_80229418(temp_s3)) {
        } else {
            return NULL;
        }
    }
    if ((node->unk44 & 0x400000) && !(node2->unk44 & 0x400000) && !(*temp_s4 & 0x400000)) {
        if (!D_802293C0(temp_s3)) {
            return NULL;
        }
    }
    if (!(node2->unk52 & 0x80)) {
        if (!(node->unk52 & 0x80) || (*temp_s4 & 0x2000000) || !D_80229380(temp_s3)) {
        } else {
            return NULL;
        }
    }
    if ((node->unk52 & 0x80) && !(node2->unk52 & 0x80) && !(*temp_s4 & 0x1000000)) {
        if (!D_80229328(temp_s3)) {
            return NULL;
        }
    }
    var_s2 = 0;
    if (arg1->flags & 1) {
        var_s2 = (node->unk44 & 0x20000000) == 0;
    }
    var_s0 = 0;
    if (var_s1->flags & 1) {
        var_s0 = (node2->unk44 & 0x20000000) == 0;
    }
    if (!var_s0) {
        if (var_s2 && !(*temp_s4 & 0x10000)) {
            if (!D_802292E8(temp_s3)) {
                return NULL;
            }
        }
    }
    if (var_s0) {
        if (!var_s2 && !(*temp_s4 & 0x8000)) {
            if (!D_80229290(temp_s3)) {
                return NULL;
            }
        }
    }
    if ((var_s1->flags & 0x40) && !(arg1->flags & 0x40)) {
        fv0 = func_8026B79C(var_s1, arg3->a0, arg3->a2);
        if (ap->y < fv0) {
            return NULL;
        }
    }
    temp_s7 = func_8026CB20((BNode2 *)arg1);
    var_s0 = func_8026CB20(var_s1);
    if (*temp_s4 & 0x80) {
        if (var_s0) {
            return var_s1;
        }
        return NULL;
    }
    temp_s6 = D_80229198(temp_s3);
    var_s2 = 0;
    if ((*temp_s4 & 0x2000) || D_802291AC(temp_s3)) {
        var_s2 = 1;
    }
    f1 = 0;
    if ((*temp_s4 & 0x4000) || D_8022920C(temp_s3)) {
        f1 = 1;
    }
    if (temp_s6 && temp_s7 && var_s0) {
        if ((arg1->flags & 0x10) && !(var_s1->flags & 0x10)) {
            if (temp_s3[2] < func_8026D63C((BNode2 *)arg1, ((s32 *)temp_s3)[1], ((s32 *)temp_s3)[3]) + D_800AA154) {
                return NULL;
            }
        }
    }
    if (var_s0 && !temp_s7) {
        if ((var_s1->flags & 0x10) && temp_s6) {
            spf = func_8026DA1C((BNode2 *)arg1, arg2) + D_800AA158;
            D_80215188(&spf);
            D_802150FC(&fv0, temp_s3[2]);
            fv0 = spf;
            if (fv0 < 0.0f) {
                if (-fv0 <= D_800AA15C) {
                    var_s2 = 1;
                }
            } else if (fv0 <= D_800AA160) {
                var_s2 = 1;
            }
        }
        if (!var_s2 || !f1) {
            if ((arg1->unk4->x + arg1->unk8->x + arg1->unkC->x) < (var_s1->unk4->x + var_s1->unk8->x + var_s1->unkC->x)) {
                if (!var_s2) {
                    if (D_800AE860 == 0) {
                        f2 = 0;
                        if (var_s1->unk4->x <= var_s1->unk8->x) {
                            f2 = 1;
                        }
                        f3 = 0;
                        if (var_s1->unkC->x <= var_s1->unk4->x) {
                            f3 = 1;
                        }
                        f4 = 0;
                        if (!f2 && !f3) {
                            f4 = 1;
                        }
                        if (f4) {
                            if (temp_s3[2] - D_800AA164 < var_s1->unkC->x) {
                                return var_s1;
                            }
                            return NULL;
                        }
                        if (temp_s3[2] - D_800AA164 < var_s1->unk8->x) {
                            return var_s1;
                        }
                        return NULL;
                    }
                    return NULL;
                }
                return var_s1;
            }
            if (f1) {
                return var_s1;
            }
            return NULL;
        }
        return NULL;
    }
    if (f1) {
        return var_s1;
    }
    return NULL;
}
