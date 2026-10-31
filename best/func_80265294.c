s32 D_802046B8(void *,  s32);
struct S_func_8020982C {
    u8 pad[0xB0];
    f32 unkB0;
    f32 unkB4;
};
struct S_func_8020982C *D_8020982C(void *);
s32 D_80221864(s32, s32);
s32 D_80221CCC(s32, s32);
void func_80268DB4(s32, s32, void **, void *);

typedef struct S_D_800A9BA8 {
    f32 unk0;
    f32 unk4;
} S_D_800A9BA8;
extern S_D_800A9BA8 D_800A9BA8;
extern f32 D_800A9BB0;
extern u8 D_800CC760;
extern void *D_800D7F68;

typedef struct GfxCmd {
    u32 w1;
    u32 w0;
} GfxCmd;

typedef struct StripHdr {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s32 unk8;
} StripHdr;

typedef struct StripBlock {
    s32 unk0;
    s32 unk4;
} StripBlock;

void func_80265294(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5) {
int __repair_literal;

    void *sp10;
    u8 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a0_9;
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_9;
    s32 temp_a2_10;
    s32 temp_a2_4;
    s32 temp_lo_3;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t4;
    s32 var_t5;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_t8;
    s32 var_t9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 temp_hi;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_4;
    u32 temp_lo_5;
    u32 temp_v0_3;
    GfxCmd *temp_a0;
    GfxCmd *temp_a0_10;
    GfxCmd *temp_a0_11;
    GfxCmd *temp_a0_3;
    GfxCmd *temp_a0_6;
    GfxCmd *temp_a0_8;
    GfxCmd *temp_a1_3;
    GfxCmd *temp_a1_5;
    GfxCmd *temp_a1_8;
    GfxCmd *temp_a2;
    GfxCmd *temp_a2_11;
    GfxCmd *temp_a2_12;
    GfxCmd *temp_a2_2;
    GfxCmd *temp_a2_3;
    GfxCmd *temp_a2_5;
    GfxCmd *temp_a2_6;
    GfxCmd *temp_a2_7;
    GfxCmd *temp_a2_8;
    GfxCmd *temp_a2_9;
    GfxCmd *temp_a3;
    GfxCmd *temp_a3_2;
    GfxCmd *temp_t0;
    GfxCmd *temp_t0_2;
    GfxCmd *temp_t1;
    GfxCmd *temp_t1_2;
    GfxCmd *temp_t1_3;
    GfxCmd *temp_v0_10;
    GfxCmd *temp_v0_11;
    GfxCmd *temp_v0_12;
    StripHdr *temp_a1;
    GfxCmd *temp_v0_4;
    GfxCmd *temp_v0_5;
    GfxCmd *temp_v0_6;
    GfxCmd *temp_v0_7;
    GfxCmd *temp_v0_8;
    GfxCmd *temp_v0_9;
    GfxCmd *temp_v1;
    GfxCmd *temp_v1_2;
    GfxCmd *temp_v1_3;
    GfxCmd *temp_v1_4;
    GfxCmd *temp_v1_5;
    GfxCmd *temp_v1_6;
    GfxCmd *temp_v1_7;
    GfxCmd *temp_v1_8;
    void *var_a2;
    void *var_t1;

    temp_fs0 = D_8020982C(&D_800CC760)->unkB0;
    temp_fs0f = D_8020982C(&D_800CC760)->unkB4;
    var_s2 = 0x400;
    if (temp_fs0 != 0.0f) {
        var_s2 = (s32) ((f32) var_s2 / temp_fs0);
    }
    sp20 = 0x400;
    if (temp_fs0f != 0.0f) {
        sp20 = (s32) ((f32) sp20 / temp_fs0f);
    }
    temp_v0 = D_802046B8(&D_800CC760 + 0x320,  arg0);
    sp18 = temp_v0;
    if (temp_v0 != 0) {
        func_80268DB4(temp_v0, arg1, &sp10, &sp14);
        temp_a1 = (StripHdr *)sp10;
        if (sp10 != NULL) {
            sp10 = (u8 *)temp_a1 + 8;
            if (arg5 == 0) {
                var_s1 = (s32) ((D_800A9BA8.unk0 - arg4) * (f32) temp_a1->unk6);
                var_s5 = (s32) ((f32) arg3 + ((f32) var_s1 * temp_fs0f));
            } else {
                var_s7 = (s32) (arg4 * (f32) temp_a1->unk4);
            }
            var_s4 = 0;
            if (arg5 == 0) {
                temp_v0_3 = ((StripBlock *)sp10)->unk4;
                temp_hi = (u32) var_s1 % temp_v0_3;
                temp_lo = (u32) var_s1 / temp_v0_3;
                temp_lo_2 = temp_a1->unk8 * temp_v0_3;
                var_t8 = var_s5;
                var_t7 = (temp_a1->unk2 - temp_lo) - 1;
__repair_literal = 2;

                sp10 = (u8 *)sp10 + ((temp_lo_2 * __repair_literal) + (temp_lo_2 >> 1) + 8) * temp_lo;
                var_t9 = 1;
                if (var_t7 != -1) {
                    do {
                        temp_t5 = ((StripBlock *)sp10)->unk0;
                        temp_t6 = ((StripBlock *)sp10)->unk4;
                        var_t1 = (u8 *)sp10 + 8;
                        var_t4 = temp_t6;
                        var_a2 = (u8 *)var_t1 + (temp_t5 * temp_t6 * 2);
                        if (var_t9 != 0) {
                            temp_lo_3 = temp_hi * temp_t5;
                            var_t4 = temp_t6 - temp_hi;
                            var_t9 = 0;
                            var_t1 = (u8 *)var_t1 + temp_lo_3 * 2;
                            var_a2 = (u8 *)var_a2 + temp_lo_3 / 2;
                        }
                        var_a3 = temp_t5;
                        temp_a0 = (GfxCmd *)D_800D7F68;
                        temp_v1 = temp_a0 + 1;
                        D_800D7F68 = temp_v1;
                        temp_a0->w0 = 0xFD900000;
                        temp_v0_4 = temp_v1 + 1;
                        temp_a0->w1 = (u32)var_a2;
                        temp_a2 = temp_v1 + 2;
                        D_800D7F68 = temp_v0_4;
                        temp_v1->w0 = 0xF5900100;
                        temp_v1->w1 = 0x07000000;
                        D_800D7F68 = temp_a2;
                        temp_v0_4->w0 = 0xE6000000;
                        temp_v0_4->w1 = 0;
                        D_800D7F68 = temp_v1 + 3;
                        temp_a2->w0 = 0xF3000000;
                        if (temp_t5 < 0) {
                            var_a3 = temp_t5 + 0xF;
                        }
                        temp_a1_2 = var_a3 >> 4;
                        var_v1 = 0x800;
                        if (temp_a1_2 > 0) {
                            var_v1 = temp_a1_2 + 0x7FF;
                        }
                        var_a0 = ((s32) ((temp_t5 * var_t4) + 3) >> 2) - 1;
                        if (var_a0 >= 0x800) {
                            var_a0 = 0x7FF;
                        }
                        temp_a0_2 = ((var_a0 & 0xFFF) << 0xC) | 0x07000000;
                        if (temp_a1_2 > 0) {
                            temp_a2->w1 = (s32) (temp_a0_2 | ((var_v1 / temp_a1_2) & 0xFFF));
                        } else {
                            temp_a2->w1 = (s32) (temp_a0_2 | (var_v1 & 0xFFF));
                        }
                        var_t0 = temp_t5;
                        temp_v0_5 = (GfxCmd *)D_800D7F68;
                        temp_a0_3 = temp_v0_5 + 1;
                        temp_a2_2 = temp_a0_3 + 1;
                        D_800D7F68 = temp_a0_3;
                        temp_v0_5->w0 = 0xE7000000;
                        temp_v0_5->w1 = 0;
                        temp_a1_3 = temp_a0_3 + 2;
                        D_800D7F68 = temp_a2_2;
                        temp_a0_3->w0 = (s32) (((((s32) ((temp_t5 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800100);
                        temp_a0_3->w1 = 0;
                        D_800D7F68 = temp_a1_3;
                        temp_a2_2->w0 = 0xF2000000;
                        temp_a2_2->w1 = (s32) (((((temp_t5 - 1) * 4) & 0xFFF) << 0xC) | (((var_t4 - 1) * 4) & 0xFFF));
                        temp_v1_2 = temp_a0_3 + 3;
                        D_800D7F68 = temp_v1_2;
                        temp_a1_3->w0 = 0xFD100000;
                        temp_v0_6 = temp_a0_3 + 4;
                        temp_a2_3 = temp_a0_3 + 5;
                        temp_a1_3->w1 = (u32)var_t1;
                        D_800D7F68 = temp_v0_6;
                        temp_v1_2->w0 = 0xF5100000;
                        temp_v1_2->w1 = 0x07000000;
                        D_800D7F68 = temp_a2_3;
                        temp_v0_6->w0 = 0xE6000000;
                        temp_v0_6->w1 = 0;
                        D_800D7F68 = temp_a0_3 + 6;
                        temp_a2_3->w0 = 0xF3000000;
                        if (temp_t5 < 0) {
                            var_t0 = temp_t5 + 3;
                        }
                        temp_a1_4 = var_t0 >> 2;
                        var_v1_2 = 0x800;
                        if (temp_a1_4 > 0) {
                            var_v1_2 = temp_a1_4 + 0x7FF;
                        }
                        var_a0_2 = (temp_t5 * var_t4) - 1;
                        if (var_a0_2 >= 0x800) {
                            var_a0_2 = 0x7FF;
                        }
                        temp_a0_4 = ((var_a0_2 & 0xFFF) << 0xC) | 0x07000000;
                        if (temp_a1_4 > 0) {
                            temp_a2_3->w1 = (s32) (temp_a0_4 | ((var_v1_2 / temp_a1_4) & 0xFFF));
                        } else {
                            temp_a2_3->w1 = (s32) (temp_a0_4 | (var_v1_2 & 0xFFF));
                        }
                        var_a3_2 = temp_t5;
                        temp_v0_7 = (GfxCmd *)D_800D7F68;
                        temp_t1 = temp_v0_7 + 1;
                        temp_v1_3 = temp_t1 + 1;
                        D_800D7F68 = temp_t1;
                        temp_v0_7->w0 = 0xE7000000;
                        temp_v0_7->w1 = 0;
                        temp_a1_5 = temp_t1 + 2;
                        D_800D7F68 = temp_v1_3;
                        temp_t1->w0 = (s32) (((((s32) ((temp_t5 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
                        temp_a2_4 = (((temp_t5 - 1) * 4) & 0xFFF) << 0xC;
                        temp_a0_5 = ((var_t4 - 1) * 4) & 0xFFF;
                        temp_t1->w1 = 0;
                        D_800D7F68 = temp_a1_5;
                        temp_v1_3->w0 = 0xF2000000;
                        temp_v1_3->w1 = (s32) (temp_a2_4 | temp_a0_5);
                        temp_v1_4 = temp_t1 + 3;
                        D_800D7F68 = temp_v1_4;
                        if (temp_t5 < 0) {
                            var_a3_2 = temp_t5 + 0xF;
                        }
                        var_t7 -= 1;
                        temp_t0 = temp_t1 + 4;
                        temp_a1_5->w0 = (s32) ((((var_a3_2 >> 4) & 0x1FF) << 9) | 0xF5800100);
                        temp_a2_5 = temp_t1 + 5;
                        temp_a3 = temp_t1 + 6;
                        temp_lo_4 = temp_t5 * temp_t6;
                        temp_a1_5->w1 = 0x01000000;
                        D_800D7F68 = temp_t0;
                        temp_v1_4->w0 = 0xF2000000;
                        temp_v1_4->w1 = (s32) (temp_a2_4 | (temp_a0_5 | 0x01000000));
                        temp_a1_6 = (var_t8 * 4) & 0xFFF;
                        D_800D7F68 = temp_a2_5;
                        D_800D7F68 = temp_a3;
                        D_800D7F68 = temp_t1 + 7;
                        temp_fv0f = (f32) var_t8 + ((f32) var_t4 * temp_fs0f);
                        sp10 = (u8 *)sp10 + (temp_lo_4 * 2) + ((s32) (temp_lo_4 + ((s32)temp_lo_4 >> 0x1F)) >> 1) + 8;
                        var_t8 = (s32) temp_fv0f;
                        temp_t0->w0 = (s32) ((((s32) (((f32) arg2 + ((f32) temp_t5 * temp_fs0)) * D_800A9BA8.unk4) & 0xFFF) << 0xC) | (((s32) (temp_fv0f * D_800A9BA8.unk4) & 0xFFF) | 0xE4000000));
                        temp_t0->w1 = (s32) ((((arg2 * 4) & 0xFFF) << 0xC) | temp_a1_6);
                        temp_a2_5->w0 = 0xE1000000;
                        temp_a2_5->w1 = 0;
                        temp_a3->w0 = 0xF1000000;
                        temp_a3->w1 = (s32) ((var_s2 << 0x10) | (sp20 & 0xFFFF));
                    } while (var_t7 != -1);
                }
            } else {
                var_s1_2 = arg2;
                var_t7_2 = temp_a1->unk0 - 1;
                var_s0 = 0;
                if (var_t7_2 != -1) {
                    sp1C = arg3 * 4;
loop_38:
                    temp_t5 = ((StripBlock *)sp10)->unk0;
                    temp_t6_2 = ((StripBlock *)sp10)->unk4;
                    temp_t1_2 = (u8 *)sp10 + 8;
                    temp_t2 = temp_t5;
                    temp_a2_6 = (u8 *)temp_t1_2 + (temp_t5 * temp_t6_2 * 2);
                    if (var_s7 < (var_s0 + temp_t2)) {
                        var_s4 = 1;
                        temp_t5 = var_s7 - var_s0;
                    }
                    var_a3_3 = temp_t2;
                    temp_a0_6 = (GfxCmd *)D_800D7F68;
                    temp_v1_5 = temp_a0_6 + 1;
                    D_800D7F68 = temp_v1_5;
                    temp_a0_6->w0 = 0xFD900000;
                    temp_v0_8 = temp_v1_5 + 1;
                    temp_a0_6->w1 = (u32)temp_a2_6;
                    temp_a2_7 = temp_v1_5 + 2;
                    D_800D7F68 = temp_v0_8;
                    temp_v1_5->w0 = 0xF5900100;
                    temp_v1_5->w1 = 0x07000000;
                    D_800D7F68 = temp_a2_7;
                    temp_v0_8->w0 = 0xE6000000;
                    temp_v0_8->w1 = 0;
                    D_800D7F68 = temp_v1_5 + 3;
                    temp_a2_7->w0 = 0xF3000000;
                    if (temp_t2 < 0) {
                        var_a3_3 = temp_t2 + 0xF;
                    }
                    temp_a1_7 = var_a3_3 >> 4;
                    var_v1_3 = 0x800;
                    if (temp_a1_7 > 0) {
                        var_v1_3 = temp_a1_7 + 0x7FF;
                    }
                    var_a0_3 = ((s32) ((temp_t2 * temp_t6_2) + 3) >> 2) - 1;
                    if (var_a0_3 >= 0x800) {
                        var_a0_3 = 0x7FF;
                    }
                    temp_a0_7 = ((var_a0_3 & 0xFFF) << 0xC) | 0x07000000;
                    if (temp_a1_7 > 0) {
                        temp_a2_7->w1 = (s32) (temp_a0_7 | ((var_v1_3 / temp_a1_7) & 0xFFF));
                    } else {
                        temp_a2_7->w1 = (s32) (temp_a0_7 | (var_v1_3 & 0xFFF));
                    }
                    var_t0_2 = temp_t2;
                    temp_v0_9 = (GfxCmd *)D_800D7F68;
                    temp_a0_8 = temp_v0_9 + 1;
                    temp_a2_8 = temp_a0_8 + 1;
                    D_800D7F68 = temp_a0_8;
                    temp_v0_9->w0 = 0xE7000000;
                    temp_v0_9->w1 = 0;
                    temp_a1_8 = temp_a0_8 + 2;
                    D_800D7F68 = temp_a2_8;
                    temp_a0_8->w0 = (s32) (((((s32) ((temp_t2 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800100);
                    temp_a0_8->w1 = 0;
                    D_800D7F68 = temp_a1_8;
                    temp_a2_8->w0 = 0xF2000000;
                    temp_a2_8->w1 = (s32) (((((temp_t2 - 1) * 4) & 0xFFF) << 0xC) | (((temp_t6_2 - 1) * 4) & 0xFFF));
                    temp_v1_6 = temp_a0_8 + 3;
                    D_800D7F68 = temp_v1_6;
                    temp_a1_8->w0 = 0xFD100000;
                    temp_v0_10 = temp_a0_8 + 4;
                    temp_a2_9 = temp_a0_8 + 5;
                    temp_a1_8->w1 = (u32)temp_t1_2;
                    D_800D7F68 = temp_v0_10;
                    temp_v1_6->w0 = 0xF5100000;
                    temp_v1_6->w1 = 0x07000000;
                    D_800D7F68 = temp_a2_9;
                    temp_v0_10->w0 = 0xE6000000;
                    temp_v0_10->w1 = 0;
                    D_800D7F68 = temp_a0_8 + 6;
                    temp_a2_9->w0 = 0xF3000000;
                    if (temp_t2 < 0) {
                        var_t0_2 = temp_t2 + 3;
                    }
                    temp_a1_9 = var_t0_2 >> 2;
                    var_v1_4 = 0x800;
                    if (temp_a1_9 > 0) {
                        var_v1_4 = temp_a1_9 + 0x7FF;
                    }
                    var_a0_4 = (temp_t2 * temp_t6_2) - 1;
                    if (var_a0_4 >= 0x800) {
                        var_a0_4 = 0x7FF;
                    }
                    temp_a0_9 = ((var_a0_4 & 0xFFF) << 0xC) | 0x07000000;
                    if (temp_a1_9 > 0) {
                        temp_a2_9->w1 = (s32) (temp_a0_9 | ((var_v1_4 / temp_a1_9) & 0xFFF));
                    } else {
                        temp_a2_9->w1 = (s32) (temp_a0_9 | (var_v1_4 & 0xFFF));
                    }
                    var_t0_3 = temp_t2;
                    temp_v0_11 = (GfxCmd *)D_800D7F68;
                    temp_t1_3 = temp_v0_11 + 1;
                    temp_v1_7 = temp_t1_3 + 1;
                    D_800D7F68 = temp_t1_3;
                    temp_v0_11->w0 = 0xE7000000;
                    temp_v0_11->w1 = 0;
                    temp_a0_10 = temp_t1_3 + 2;
                    D_800D7F68 = temp_v1_7;
                    temp_t1_3->w0 = (s32) (((((s32) ((temp_t2 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
                    temp_a2_10 = (((temp_t2 - 1) * 4) & 0xFFF) << 0xC;
                    temp_a1_10 = ((temp_t6_2 - 1) * 4) & 0xFFF;
                    temp_t1_3->w1 = 0;
                    D_800D7F68 = temp_a0_10;
                    temp_v1_7->w0 = 0xF2000000;
                    temp_v1_7->w1 = (s32) (temp_a2_10 | temp_a1_10);
                    temp_v1_8 = temp_t1_3 + 3;
                    D_800D7F68 = temp_v1_8;
                    if (temp_t2 < 0) {
                        var_t0_3 = temp_t2 + 0xF;
                    }
                    temp_a0_10->w0 = (s32) ((((var_t0_3 >> 4) & 0x1FF) << 9) | 0xF5800100);
                    temp_a0_10->w1 = 0x01000000;
                    temp_a0_11 = temp_t1_3 + 4;
                    temp_a2_11 = temp_t1_3 + 5;
                    D_800D7F68 = temp_a0_11;
                    temp_v1_8->w0 = 0xF2000000;
                    temp_v1_8->w1 = (s32) (temp_a2_10 | (temp_a1_10 | 0x01000000));
                    temp_fv1f = (f32) var_s1_2;
                    temp_t0_2 = temp_t1_3 + 7;
                    D_800D7F68 = temp_a2_11;
                    temp_a0_11->w0 = (s32) (((((var_s1_2 + temp_t5) * 4) & 0xFFF) << 0xC) | ((((arg3 + temp_t6_2) * 4) & 0xFFF) | 0xE4000000));
                    temp_lo_5 = temp_t5 * temp_t6_2;
                    temp_a1_11 = (((var_s1_2 * 4) & 0xFFF) << 0xC) | (sp1C & 0xFFF);
                    temp_v0_12 = temp_t1_3 + 6;
                    temp_a0_11->w1 = temp_a1_11;
                    D_800D7F68 = temp_v0_12;
                    temp_a2_11->w0 = 0xE1000000;
                    temp_a2_11->w1 = 0;
                    temp_a2_12 = temp_t1_3 + 8;
                    D_800D7F68 = temp_t0_2;
                    temp_v0_12->w0 = 0xF1000000;
                    temp_v0_12->w1 = 0x04000400;
                    temp_a3_2 = temp_t1_3 + 9;
                    temp_fv1 = (temp_fv1f + ((f32) temp_t5 * temp_fs0)) * D_800A9BB0;
                    D_800D7F68 = temp_a2_12;
                    D_800D7F68 = temp_a3_2;
                    D_800D7F68 = temp_t1_3 + 10;
                    sp10 = (u8 *)sp10 + (temp_lo_5 * 2) + ((s32) (temp_lo_5 + ((s32)temp_lo_5 >> 0x1F)) >> 1) + 8;
                    var_s1_2 = (s32) (temp_fv1f + ((f32) temp_t2 * temp_fs0));
                    temp_t0_2->w0 = (s32) ((((s32) temp_fv1 & 0xFFF) << 0xC) | (((s32) (((f32) arg3 + ((f32) temp_t6_2 * temp_fs0f)) * D_800A9BB0) & 0xFFF) | 0xE4000000));
                    temp_t0_2->w1 = temp_a1_11;
                    temp_a2_12->w0 = 0xE1000000;
                    temp_a2_12->w1 = 0;
                    temp_a3_2->w0 = 0xF1000000;
                    var_t7_2 -= 1;
                    temp_a3_2->w1 = (s32) ((var_s2 << 0x10) | (sp20 & 0xFFFF));
                    var_s0 += temp_t5;
                    if ((var_t7_2 != -1) && (var_s4 == 0)) {
                        goto loop_38;
                    }
                }
            }
            D_80221CCC(0, sp18);
        }
        D_80221864(0, sp18);
    }
}
