typedef struct Unk {
    char pad0[0x18];
    s16 unk1A;
    char pad1[0x1C];
    s32 unk38;
    struct Unk *unk3C;
    struct Unk *unk40;
    s32 unk44;
    s32 unk48;
} Unk;
typedef struct Obj { char pad0[8]; void (*fn)(void *, s32); } Obj;
s32 func_80298760(Unk *arg0, s32 arg1, Unk *arg2) {
    Obj *o;
    Unk *v1 = arg0;
    switch (arg1) {
    case 1:
        ((void **)arg0)[0] = arg2;
        break;
    case 3:
        o = *(Obj **)&v1->unk40;
        if (o != NULL) *(Unk **)o = arg2;
        else v1->unk3C = arg2;
        v1->unk40 = arg2;
        break;
    case 4:
        o = *(Obj **)v1;
        v1->unk38 = 1;
        v1->unk48 = 0;
        v1->unk1A = 1;
        if (o != NULL) o->fn(v1, 4);
        break;
    case 9:
        o = *(Obj **)v1;
        v1->unk48 = 1;
        if (o != NULL) o->fn(v1, 9);
        break;
    default:
        o = *(Obj **)v1;
        if (o != NULL) o->fn(o, arg1);
        break;
    }
    return 0;
}
