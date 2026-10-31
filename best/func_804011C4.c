typedef struct {
    s16 type;      /* 0x0 */
    s16 unk2;      /* 0x2 */
    s16 sub;       /* 0x4 */
    s16 unk6;      /* 0x6 */
    s32 flags;     /* 0x8 */
    s16 w;         /* 0xC */
    s16 h;         /* 0xE */
    s32 unk10;     /* 0x10 */
    s32 *data;     /* 0x14 */
} Entry;

typedef struct {
    s32 kind;     /* 0x0 */
    f32 scale;    /* 0x4 */
    s32 unk8;     /* 0x8 */
    f32 unkC;     /* 0xC */
} Layout;

typedef struct {
    char pad[0x3C];
    void *obj;    /* 0x3C */
} Ctx;

typedef struct {
    char pad[0xB0];
    f32 k_x;      /* 0xB0 */
    f32 k_y;      /* 0xB4 */
} Obj;

extern Layout D_800BF018[];
extern s32 D_800F150C;
extern u8 D_800D77E6;
extern s32 func_80400DB8();
extern s32 func_802665C4();
void func_80268E18(s32, s32, s32 *, s32 *);

void func_804011C4(Entry *e, s32 *o, Ctx *c)
{
    Layout *lay;
    s32 kind;
    s32 val;
    s32 *data;
    s32 idx;
    s32 k;
    Obj *obj;

    switch (e->sub) {
    case 0:
    case 1:
        k = e->flags & 0x1E0;
        idx = 0;
        if (k == 0x40) idx = 1;
        else if (k == 0x80) idx = 2;
        else if (k == 0x100) idx = 3;
        lay = &D_800BF018[idx + 4];
        kind = lay->kind;
        if (e->sub == 7) {
            val = func_80400DB8(e);
        } else if (e->sub == 9) {
            val = (s32)e->data;
        } else {
            val = e->data[D_800D77E6];
        }
        switch (kind) {
        case 0:
            D_800F150C = 0;
            break;
        case 1:
        case 2:
        case 3:
            D_800F150C = kind;
            break;
        }
        if (e->sub == 1) {
            val = (s32)*(f32 *)e->data;
        } else {
            val = func_802665C4();
        }
        o[1] = (s32)((f32)val * lay->scale);
        o[2] = lay->unk8;
        break;
    case 7:
        k = e->flags & 0x1E0;
        idx = 0;
        if (k == 0x40) idx = 1;
        else if (k == 0x80) idx = 2;
        else if (k == 0x100) idx = 3;
        lay = &D_800BF018[idx + 4];
        kind = lay->kind;
        if (e->sub == 7) {
            val = func_80400DB8(e);
        } else if (e->sub == 9) {
            val = (s32)e->data;
        } else {
            val = e->data[D_800D77E6];
        }
        switch (kind) {
        case 0:
            D_800F150C = 0;
            break;
        case 1:
        case 2:
        case 3:
            D_800F150C = kind;
            break;
        }
        if (e->sub == 1) {
            val = (s32)*(f32 *)e->data;
        } else {
            val = func_802665C4();
        }
        o[1] = (s32)((f32)val * lay->scale);
        o[2] = lay->unk8;
        break;
    case 2:
        k = e->flags & 0x1E0;
        idx = 0;
        if (k == 0x40) idx = 1;
        else if (k == 0x80) idx = 2;
        else if (k == 0x100) idx = 3;
        lay = &D_800BF018[idx + 4];
        o[1] = lay->unk8;
        o[2] = lay->unk8;
        break;
    case 3:
        data = e->data;
        func_80268E18(data[0], 0, &o[1], &o[2]);
        break;
    case 4:
        data = e->data;
        o[1] = data[9];
        o[2] = data[10];
        break;
    case 5:
        data = e->data;
        o[1] = data[7];
        o[2] = data[8];
        break;
    default:
        o[1] = 1;
        o[2] = 1;
        break;
    }

    obj = c->obj;
    o[1] = (s32)((f32)o[1] * obj->k_x);
    o[2] = (s32)((f32)o[2] * obj->k_y);

    if (!(e->flags & 0x400)) {
        if (e->flags & 0x200) {
            o[3] = (s32)((f32)o[4] + (f32)e->w * obj->k_x);
        } else {
            o[3] = (s32)((f32)e->w * obj->k_x);
        }
    }
    o[4] = o[3] + o[1];

    if (!(e->flags & 0x1000)) {
        if (e->flags & 0x800) {
            o[5] = (s32)((f32)o[6] + (f32)e->h * obj->k_y);
        } else {
            o[5] = (s32)((f32)e->h * obj->k_y);
        }
    }
    o[6] = o[5] + o[2];
}
