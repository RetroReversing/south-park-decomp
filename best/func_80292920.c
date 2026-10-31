typedef struct Info Info;
typedef struct Rec0 Rec0;
typedef struct Sub Sub;
typedef struct Tile Tile;
typedef struct LNode LNode;
typedef struct GObj GObj;

struct Rec0 {
    s32 unk0;     /* 0x0 */
    s8 unk4;      /* 0x4 */
    s8 unk5;      /* 0x5 */
    s32 unk8;     /* 0x8 */
    u8 unkC;      /* 0xC */
    u8 unkD;      /* 0xD */
};

struct Sub {
    Info *unk0;   /* 0x0 */
    Rec0 *unk4;   /* 0x4 */
    void *unk8;   /* 0x8 */
};

struct Info {
    s32 unk0;     /* 0x0 */
    s32 unk4;     /* 0x4 */
    u8 unk8;      /* 0x8 */
    u8 unkC;      /* 0xC */
    u8 unkD;      /* 0xD */
};

struct Tile {
    Sub *unk0;    /* 0x0 */
    s16 unk4;     /* 0x4 */
    u8 unk6;      /* 0x6 */
    u8 unk7;      /* 0x7 */
    u8 unk8;      /* 0x8 */
    u8 unk9;      /* 0x9 */
    u8 unkA;      /* 0xA */
    u8 unkB;      /* 0xB */
    f32 unkC;     /* 0xC */
};

struct LNode {
    LNode *next;  /* 0x0 */
    char pad04[0x1C];
    void *unk20;  /* 0x20 */
    s32 unk24;    /* 0x24 */
    f32 unk28;    /* 0x28 */
    f32 unk2C;    /* 0x2C */
    u8 unk30;     /* 0x30 */
    u8 unk31;     /* 0x31 */
    s16 unk32;    /* 0x32 */
    u8 unk33;     /* 0x33 */
    u8 unk34;     /* 0x34 */
    u8 unk35;     /* 0x35 */
    s8 unk36;     /* 0x36 */
    u8 unk37;     /* 0x37 */
};

struct GObj {
    char pad00[0x14];
    void *node;   /* 0x14 */
    s32 unk18;    /* 0x18 */
    s32 unk1C;    /* 0x1C */
    s32 *unk20;   /* 0x20 */
    s32 unk24;    /* 0x24 */
    char pad28[4];
    s32 unk2C;    /* 0x2C */
    char pad30[0x18];
    void *entry;  /* 0x48 */
    char pad4C[0x18];
    Tile *tiles;  /* 0x60 */
    LNode *link;  /* 0x64 */
    char pad68[8];
    s32 (*cb)(s32 *, f32 *, s32, s32, s32, s32); /* 0x70 */
};

extern f32 D_800AAC08;
extern f32 D_800AAC0C;
extern f32 D_800AAC10;
extern char D_800AAB38[];
extern char D_800AAB3C[];

Sub *func_80294D00(GObj *g, s32 a1, s32 a2, s32 a3);
LNode *func_80294B3C(GObj *g, s32 a1, s32 a2, s32 a3);
void func_802965E8(void *n, void *p, s16 *sp);
f32 func_80293470(s16 a0);
void func_8029370C(void *q, s16 *a1, s32 a2);
LNode *func_80294CA0(GObj *g, s32 a1, u8 a2);
s32 func_80295134(GObj *g, void *p, s32 a2);
s16 func_80294E34(LNode *l, GObj *g);
s32 func_80294EA8(LNode *l, s32 a1);
s32 func_80294EC4(LNode *l, GObj *g);
void func_80296A50(void *n, void *p, s16 a2, s32 a3);
void func_80296878(void *n, void *p, s32 a2);
void func_80296928(void *n, void *p, s32 a2);
void func_802969B8(void *n, void *p, f32 a2);
void func_80296BA0(void *n, void *p, s32 a2, f32 a3, s32 a4, s32 a5, s32 a6, s32 a7);
void func_802950E0(GObj *g, void *a1, u8 a2);
void func_8029D580(char *a0, char *a1, s32 a2);

void func_80292920(GObj *g, u8 *a1) {
    s16 sp20;
    LNode *sp24;
    s32 sp28;
    u8 sp2C;
    s16 sp30;
    s16 sp32;
    s8 sp34;
    s32 sp38;
    f32 sp3C;
    f32 temp_fs0;
    f32 temp_fv0;
    s16 *temp_a1;
    s16 temp_s0_6;
    s16 temp_s0_7;
    s16 temp_s0_8;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_s0_2;
    s32 temp_s0_9;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v1;
    u8 temp_s0;
    u8 temp_s0_4;
    u8 temp_s4;
    u8 temp_s5;
    u8 temp_s6;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 *temp_fp;
    Tile *temp_s0_3;
    void *temp_s0_5;
    void *temp_s7;
    Sub *temp_v0_2;
    LNode *temp_v0_3;
    LNode *temp_v0_8;
    LNode *temp_v0_9;
    LNode *var_s1;
    LNode *var_s1_2;
    LNode *var_s1_3;
    LNode *var_s1_4;
    LNode *var_s1_5;
    LNode *var_s1_6;

    temp_fp = a1 + 4;
    temp_v0 = a1[8];
    temp_s6 = a1[9];
    temp_s0 = a1[0xA];
    temp_s4 = temp_v0 & 0xF;
    temp_v1 = temp_v0 & 0xF0;
    temp_s5 = temp_s6;
    switch (temp_v1) {
    case 0x90:
        temp_s1 = temp_s0 & 0xFF;
        if (temp_s1 != 0) {
            if (g->unk2C == 1) {
                temp_s2 = temp_s6 & 0xFF;
                temp_s0_2 = temp_s4 & 0xFF;
                temp_v0_2 = func_80294D00(g, temp_s2, temp_s1, temp_s0_2);
                if (temp_v0_2 != NULL) {
                    temp_s2_2 = temp_s0_2 * 0x10;
                    sp32 = 0;
                    sp34 = 0;
                    sp30 = (s16) g->tiles[temp_s0_2].unk8;
                    temp_v0_3 = func_80294B3C(g, temp_s2, temp_s1, temp_s0_2);
                    temp_s7 = temp_v0_3 + 4;
                    if (temp_v0_3 != NULL) {
                        func_802965E8(g->node, temp_s7, &sp30);
                        temp_v0_3->unk20 = temp_v0_2;
                        temp_v0_3->unk34 = 0;
                        if ((u8) g->tiles[temp_s0_2].unkB >= 0x40U) {
                            temp_v0_3->unk35 = 2;
                        } else {
                            temp_v0_3->unk35 = 0;
                        }
                        temp_v0_3->unk28 = func_80293470((s16) (temp_v0_2->unk4->unk5 + (((temp_s6 & 0xFF) - temp_v0_2->unk4->unk4) * 0x64)));
                        temp_v0_3->unk30 = (u8) temp_v0_2->unk0->unkC;
                        temp_v0_3->unk37 = 0U;
                        temp_v0_3->unk24 = (s32) (g->unk1C + temp_v0_2->unk0->unk0);
                        temp_s0_3 = &g->tiles[temp_s4];
                        sp3C = D_800AAC08;
                        if ((temp_s0_3->unk4 != 0) && (g->cb != NULL)) {
                            temp_v0_5 = g->cb(&sp38, &sp3C, temp_s0_3->unk4, temp_s0_3->unk6, (s32) temp_s0_3->unk7, (s32) 0);
                            if (temp_v0_5 != 0) {
                                sp20 = 0x16;
                                sp24 = temp_v0_3;
                                sp28 = sp38;
                                func_8029370C(&g->entry, &sp20, temp_v0_5);
                                temp_v0_3->unk37 = (u8) (temp_v0_3->unk37 | 1);
                            }
                        }
                        if (!(D_800AAC0C <= sp3C)) {
                            var_v1 = (s32) sp3C;
                        } else {
                            var_v1 = (s32) (sp3C - D_800AAC0C) | 0x80000000;
                        }
                        temp_v0_3->unk36 = (s8) var_v1;
                        sp3C = D_800AAC10;
                        if ((temp_s0_3->unk8 != 0) && (g->cb != NULL)) {
                            temp_v0_6 = g->cb(&sp38, &sp3C, temp_s0_3->unk8, temp_s0_3->unk9, (s32) temp_s0_3->unkA, (s32) temp_s0_3->unkB);
                            if (temp_v0_6 != 0) {
                                sp20 = 0x17;
                                sp24 = temp_v0_3;
                                sp2C = temp_s4;
                                sp28 = sp38;
                                func_8029370C(&g->entry, &sp20, temp_v0_6);
                                temp_v0_3->unk37 = (u8) (temp_v0_3->unk37 | 2);
                            }
                        }
                        temp_v0_3->unk2C = sp3C;
                        temp_s0_4 = g->tiles[temp_s4].unkA;
                        temp_fs0 = temp_v0_3->unk28 * g->tiles[temp_s4].unkC * sp3C;
                        temp_s1_2 = func_80294EC4(temp_v0_3, g);
                        temp_s2_3 = (s32) temp_v0_2->unk8;
                        func_80296BA0(g->node, temp_s7, temp_v0_2->unk0->unk0, temp_fs0, (s32) func_80294E34(temp_v0_3, g), temp_s1_2 & 0xFF, temp_s0_4 & 0xFF, temp_s2_3);
                        sp20 = 6;
                        sp24 = temp_v0_3;
                        temp_s0_5 = &g->entry;
                        sp2C = (u8) temp_v0_2->unk0->unkD;
                        sp28 = temp_v0_2->unk0->unk4;
                        func_8029370C(temp_s0_5, &sp20, temp_s2_3);
                        if (temp_fp[8] != 0) {
                            sp20 = 0x15;
                            sp28 = temp_s4 | 0x80;
                            ((u8 *) &sp20)[9] = temp_s6;
                            ((u8 *) &sp20)[0xA] = 0;
                            func_8029370C(temp_s0_5, &sp20, g->unk24 * temp_fp[8]);
                            return;
                        }
                    }
                }
            }
        } else {
            temp_v0_8 = func_80294CA0(g, temp_s6 & 0xFF, temp_s4);
            if (temp_v0_8 != NULL) {
                if (temp_v0_8->unk35 == 2) {
                    temp_v0_8->unk35 = 4U;
                    return;
                }
                temp_v0_8->unk35 = 3U;
                func_80295134(g, temp_v0_8 + 4, (*(Sub **) &temp_v0_8->unk20)->unk4->unk8);
                return;
            }
            return;
        }
        break;
    case 0xA0:
        temp_v0_9 = func_80294CA0(g, temp_s6 & 0xFF, temp_s4);
        if (temp_v0_9 != NULL) {
            temp_v0_9->unk33 = temp_s0;
            temp_s0_6 = func_80294E34(temp_v0_9, g);
            func_80296A50(g->node, temp_v0_9 + 4, temp_s0_6, func_80294EA8(temp_v0_9, g->unk1C));
            return;
        }
        break;
    case 0xD0:
        var_s1 = g->link;
        if (var_s1 != NULL) {
loop_43:
            if (var_s1->unk31 == (temp_s4 & 0xFF)) {
                var_s1->unk33 = temp_s5;
                temp_s0_7 = func_80294E34(var_s1, g);
                func_80296A50(g->node, var_s1 + 4, temp_s0_7, func_80294EA8(var_s1, g->unk1C));
            }
            var_s1 = var_s1->next;
            if (var_s1 != NULL) {
                goto loop_43;
            }
        }
        break;
    case 0xB0:
        temp_v1_2 = temp_s6 & 0xFF;
        if (temp_v1_2 != 0x10) {
            if (temp_v1_2 < 0x11) {
                if (temp_v1_2 != 7) {
                    temp_a2 = temp_s4 & 0xFF;
                    if (temp_v1_2 != 0xA) {
                        return;
                    }
                    g->tiles[temp_a2].unk7 = temp_s0;
                    var_s1_2 = g->link;
                    if (var_s1_2 != NULL) {
loop_56:
                        if (var_s1_2->unk31 == temp_a2) {
                            func_80296928(g->node, var_s1_2 + 4, func_80294EC4(var_s1_2, g) & 0xFF);
                        }
                        var_s1_2 = var_s1_2->next;
                        if (var_s1_2 != NULL) {
                            goto loop_56;
                        }
                    }
                } else {
                    temp_a2_2 = temp_s4 & 0xFF;
                    g->tiles[temp_a2_2].unk9 = temp_s0;
                    var_s1_3 = g->link;
                    if (var_s1_3 != NULL) {
loop_62:
                        if ((var_s1_3->unk31 == temp_a2_2) && (var_s1_3->unk34 != 3)) {
                            temp_s0_8 = func_80294E34(var_s1_3, g);
                            func_80296A50(g->node, var_s1_3 + 4, temp_s0_8, func_80294EA8(var_s1_3, g->unk1C));
                        }
                        var_s1_3 = var_s1_3->next;
                        if (var_s1_3 != NULL) {
                            goto loop_62;
                        }
                    }
                }
            } else if (temp_v1_2 != 0x40) {
                temp_a2_3 = temp_s4 & 0xFF;
                if (temp_v1_2 != 0x5B) {
                    return;
                }
                g->tiles[temp_a2_3].unkA = temp_s0;
                var_s1_4 = g->link;
                if (var_s1_4 != NULL) {
loop_84:
                    if (var_s1_4->unk31 == temp_a2_3) {
                        func_80296878(g->node, var_s1_4 + 4, temp_s0 & 0xFF);
                    }
                    var_s1_4 = var_s1_4->next;
                    if (var_s1_4 != NULL) {
                        goto loop_84;
                    }
                }
            } else {
                temp_a2_4 = temp_s4 & 0xFF;
                g->tiles[temp_a2_4].unkB = temp_s0;
                var_s1_5 = g->link;
                if (var_s1_5 != NULL) {
loop_70:
                    if (var_s1_5->unk31 == temp_a2_4) {
                        temp_v0_10 = var_s1_5->unk35;
                        if (temp_v0_10 != 3) {
                            if ((u32) (temp_s0 & 0xFF) >= 0x40U) {
                                if (temp_v0_10 == 0) {
                                    var_s1_5->unk35 = 2U;
                                }
                            } else if (temp_v0_10 == 2) {
                                var_s1_5->unk35 = 0U;
                            } else if (temp_v0_10 == 4) {
                                var_s1_5->unk35 = 3U;
                                func_80295134(g, var_s1_5 + 4, (*(Sub **) &var_s1_5->unk20)->unk4->unk8);
                            }
                        }
                    }
                    var_s1_5 = var_s1_5->next;
                    if (var_s1_5 != NULL) {
                        goto loop_70;
                    }
                }
            }
        } else {
            g->tiles[temp_s4].unk8 = temp_s0;
            return;
        }
        break;
    case 0xC0:
        if (g->unk20 == NULL) {
            func_8029D580(D_800AAB38, D_800AAB3C, 0x2C7);
        }
        temp_a1 = (s16 *) g->unk20;
        temp_v1_3 = temp_s6 & 0xFF;
        if (temp_v1_3 < *temp_a1) {
            func_802950E0(g, (void *) ((u8 *) temp_a1 + (temp_v1_3 * 4) + 0xC), temp_s4);
            return;
        }
        break;
    case 0xE0:
        temp_s2_4 = temp_s4 & 0xFF;
        temp_s0_9 = temp_s2_4 * 0x10;
        var_v0 = g->tiles[temp_s2_4].unk4 * ((((temp_s0 & 0xFF) << 7) + (temp_s6 & 0xFF)) - 0x2000);
        if (var_v0 < 0) {
            var_v0 += 0x1FFF;
        }
        temp_fv0 = func_80293470((s16) (var_v0 >> 0xD));
        g->tiles[temp_s2_4].unkC = temp_fv0;
        var_s1_6 = g->link;
        if (var_s1_6 != NULL) {
            do {
                if (var_s1_6->unk31 == temp_s2_4) {
                    func_802969B8(g->node, var_s1_6 + 4, var_s1_6->unk28 * temp_fv0 * var_s1_6->unk2C);
                }
                var_s1_6 = var_s1_6->next;
            } while (var_s1_6 != NULL);
        }
        break;
    }
}
