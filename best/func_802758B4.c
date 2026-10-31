typedef struct {
    char pad0[0xA4A];
    s16 unkA4A;
    char padA4C[8];
    void *unkA54;
    char padA58[0x34];
    s16 unkA8C;
    char padA8E[0x10];
    s8 unkA9E;
    char padA9F[9];
    s16 unkAA8;
    char padAAA[0xF2];
    s16 unkB9C;
} GObj;

typedef struct {
    char pad0[0xA54];
    void *unkA54;
    char padA58[0x544];
    void *unk159C;
    s32 unk15A0;
} GBig;

extern u8 D_800D77E8[];
extern u8 D_800D77E6;
extern s32 D_800C92F0[];
extern u8 D_800D64F8[];
extern void *D_800AD1F8[];
extern f32 D_800AA038;

s32 func_8028C6BC(s16 id);
s16 func_8028C544(s32 a);
s32 func_8028C604(s16 a, s16 b);
void func_8025FEC4(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 arg4);
void func_8025F5C8(void *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7);
void func_8025FCE8(void *arg0, void *arg1, s32 arg2);
void D_8023BFAC(GObj *arg0, GObj *arg1, s16 arg2);
void D_8023D7D0(s32 arg0, s32 arg1);

s32 func_802758B4(GObj *arg0, u8 *arg1) {
    u8 *base = D_800D77E8;
    s32 var_s2 = 1;
    s32 var_s6 = 0;
    GBig *var_s1;
    s32 var_s0;
    u8 v1 = 1;
    s16 temp_s0;
    s32 idx;
    u8 *bp;
    GObj *gp;

    if (*base == 0) {
        if (func_8028C6BC(*(s16 *)(arg1 + 4)) == -1) {
            var_s2 = 0;
            var_s1 = *(GBig **)(base - 0x1490);
            if (var_s1->unkA54 == NULL) {
                do {
                    var_s1 = var_s1->unk159C;
                } while (var_s1->unkA54 == NULL);
            }
            if (var_s1 != NULL) {
                var_s0 = var_s1->unk15A0;
                if (var_s2 != 0) {
                    goto after;
                }
                do {
                    var_s2 = func_8028C604(func_8028C544(var_s0), *(s16 *)(arg1 + 4));
                    if (var_s2 != 0) {
                        break;
                    }
                    switch (var_s0) {
                    case 0x65:
                        var_s0 = 0x66;
                        break;
                    case 0x66:
                        var_s0 = 0x67;
                        break;
                    case 0x67:
                        var_s0 = 0x68;
                        break;
                    case 0x68:
                        var_s0 = 0x65;
                        break;
                    default:
                        return 0;
                    }
                    if ((var_s2 == 0) && (var_s0 == var_s1->unk15A0)) {
                        break;
                    }
                } while (var_s2 == 0);
            after:
                if (arg0->unkAA8 < *(s16 *)(arg1 + 8)) {
                    if (var_s1->unk15A0 != var_s0) {
                        D_8023D7D0(var_s0, 0);
                    }
                    var_s1->unk15A0 = var_s0;
                    arg0->unkA4A = func_8028C544(var_s0);
                }
            }
        }
    }
    if (var_s2 == 0) {
        func_8025FEC4(D_800D64F8, arg0->unkA54, D_800C92F0[D_800D77E6], 0x9876, D_800AA038);
        return 0;
    }
    arg0->unkA9E = v1;
    if (arg0->unkAA8 < *(s16 *)(arg1 + 8)) {
        arg0->unkB9C = *(s16 *)(arg1 + 8);
    } else {
        var_s6 = *(s32 *)(*(void **)arg1 + D_800D77E6 * 4);
    }
    switch (*(s16 *)(arg1 + 0xA)) {
    case 1:
    case 4:
        break;
    default:
        temp_s0 = *(s16 *)(arg1 + 6);
        func_8025F5C8(arg0->unkA54, 0xC0, 0x32, 0x32, 0xFF, 0, 0, 2);
        if (var_s6 != 0) {
            func_8025FCE8(D_800D64F8, arg0->unkA54, var_s6);
        }
        if (temp_s0 != 0) {
            D_8023BFAC(arg0, arg0, temp_s0);
        }
        break;
    }
    {
        s16 a3 = *(s16 *)(arg1 + 0xA);
        s16 a1 = *(s16 *)(arg1 + 0xC);
        u8 *a0 = (u8 *)arg0 + a3 * 2;
        s16 v0;
        s32 v2 = 0;
        s32 ret;

        if (a3 == 1 || a3 == 4) {
            ret = 1;
        } else {
            ret = 0;
        }
        for (;;) {
            bp = D_800AD1F8[v2];
            v2++;
            if (*(s16 *)(bp + 0x1C) == a3) {
                if (*(s16 *)(a0 + 0xA8C) < *(s16 *)(bp + 0x1E)) {
                    v0 = *(s16 *)(a0 + 0xA8C) + a1;
                    *(s16 *)(a0 + 0xA8C) = v0;
                    if (*(s16 *)(bp + 0x1E) < v0) {
                        *(s16 *)(a0 + 0xA8C) = *(s16 *)(bp + 0x1E);
                    }
                }
                return ret;
            }
            if (v2 >= 9) {
                return ret;
            }
        }
    }
}
