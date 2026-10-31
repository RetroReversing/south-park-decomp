typedef struct { s32 unk0; s32 unk4; s32 unk8; } Tbl804056C0;

extern u8 D_800BF0EC;
extern s32 D_800BF130[];
extern s32 D_800BF134[][32];
extern Tbl804056C0 D_800BF138[];
extern Tbl804056C0 D_800BF270;
extern s32 D_800D77D4[];
extern u32 D_800D77D8;
extern u8 D_800D77E6;
extern u8 D_415908;

s32 func_80403FBC(void **arg0, s32 arg1);
void func_802A08B8(s32 *a0, s32 *a1, s32 a2);
void func_80403D34(void *a0, void *a1, void *a2);

typedef struct {
    void **unk0;
    s32 *unk4;
    s8 unk8;
    char pad9[3];
    s32 unkC;
} S804056C0;

s32 func_804056C0(s32 **arg0, S804056C0 *arg1) {
    s32 var_s0;
    Tbl804056C0 *var_a3;
    u8 *var_a1;
    u8 *var_a2;
    s32 var_v1;
    u8 v0;
    u8 a0v;

    var_s0 = 0;
    var_a3 = D_800BF138;
    do {
        var_a1 = (u8 *)*(s32 *)((u8 *)D_800BF130 + var_s0);
        var_a2 = &D_800BF0EC;
        var_v1 = -1;
        if (var_a1 != NULL) {
            if (var_a2 != NULL) {
                v0 = *var_a1;
                if (v0 != 0) {
                    for (;;) {
                        a0v = *var_a2;
                        if (a0v == 0) {
                            goto block8;
                        }
                        if ((u32)(v0 & 0xFF) < a0v) {
                            goto block11;
                        }
                        if (a0v < (v0 & 0xFF)) {
                            goto block9;
                        }
                        var_a1++;
                        v0 = *var_a1;
                        var_a2++;
                        if (v0 == 0) {
                            break;
                        }
                    }
                }
            }
block8:
            if (*var_a1 != 0) {
block9:
                var_v1 = 1;
            } else {
block10:
                var_v1 = 0;
                if (*var_a2 != 0) {
block11:
                    var_v1 = -1;
                }
            }
        }
        if (var_v1 != 0) {
            var_a3 += 1;
            var_s0 += 0xC;
            if (var_a3 >= &D_800BF270) {
                return 0;
            }
            continue;
        }
        D_800D77D4[0] |= var_a3->unk0;
        D_800D77D4[-1] |= var_a3->unk0;
        if (func_80403FBC((void **)arg1, (s32)&D_415908) != 0) {
            return 1;
        }
        D_800D77D8 |= (u32)(D_800D77D4[0] & 0x07FFF800) >> 7;
        func_802A08B8((s32 *)0x8010DB08, (s32 *)0x800BC5C0,
                      *(s32 *)((u8 *)(&D_800BF134[0][0] + D_800D77E6 * 32) + var_s0));
        func_80403D34(arg1, arg0, &D_415908);
        return 1;
    } while (1);
}
