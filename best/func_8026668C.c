extern s32 D_800F150C;
extern s32 D_800A9BE0[];
extern s32 D_800A9BF8[];
extern char D_800CCA80[];
extern f32 D_800F1510;
extern f32 D_800F1514;
extern s8 D_800CE80E[];
extern s8 D_800CE610[];
extern s8 D_800CE412[];
extern s8 D_800CEA0C[];
extern s8 D_800CEC0A[];
extern void *D_802046B8(char *path, s32 id, s32 n, s32 m);
extern void D_80221CCC(s32 a, void *b);
extern void D_80221864(s32 a, void *b);
void func_80268DB4(void *a, s32 b, void **c, u8 *d);
void func_80269520(void *a,  s32 b);

typedef struct {
    u8 tag;
    s8 val;
} Tbl;

void func_8026668C(u8 *arg0, f32 arg1, f32 arg2)
{
    Tbl *tbl;
    s32 id;
    u8 *p;
    void *h;
    void *off;
    u8 c;
    s32 f;
    u8 tag;

    switch (D_800F150C) {
    case 0:
        tbl = (Tbl *)D_800CE80E;
        id = 3;
        break;
    case 1:
        tbl = (Tbl *)D_800CE610;
        id = 2;
        break;
    case 2:
        tbl = (Tbl *)D_800CE412;
        id = 1;
        break;
    case 3:
        tbl = (Tbl *)D_800CEA0C;
        id = 6;
        break;
    case 4:
        tbl = (Tbl *)D_800CEC0A;
        id = 7;
        break;
    }
    h = D_802046B8(D_800CCA80, (s16)id, 4, 1);
    if (h != NULL) {
        D_80221CCC(0, h);
        p = arg0;
        c = *p;
        if (c != 0) {
            do {
                p++;
                tag = tbl[c].tag;
                if (tag != 0xFF) {
                    func_80268DB4(h, tag, &off, &tag);
                    if (off != NULL) {
                        func_80269520(off,  arg1);
                    }
                }
                switch (D_800F150C) {
                case 0:
                    f = tbl[c].val;
                    break;
                case 1:
                    f = tbl[c].val;
                    break;
                case 2:
                    f = tbl[c].val;
                    break;
                case 3:
                    f = tbl[c].val;
                    break;
                case 4:
                    f = tbl[c].val;
                    break;
                default:
                    f = 0;
                    break;
                }
                arg1 = arg1 + f * D_800F1510;
                c = *p;
            } while (c != 0);
        }
        D_80221864(0, h);
    }
}
