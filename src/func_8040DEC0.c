extern f32 D_800BE354;
extern f32 D_8010E7BC;
extern s32 D_800D78F0;
extern char D_800CE370;
extern s32 D_40DE88;
extern s32 D_40DE2C;
void func_80264A98(void *);

typedef struct { char pad00[0x1C]; s32 *unk1C; } S_obj;
typedef struct { char pad00[0x68]; S_obj *unk68; } S_sub10;
typedef struct { char pad00[0x10]; S_sub10 *unk10; } S_arg0;

void func_8040DEC0(S_arg0 *arg0)
{
    S_sub10 *v;
    S_obj *o;
    func_80264A98(&D_800CE370);
    if (D_800D78F0 == 0xA) {
        o = arg0->unk10->unk68;
        D_8010E7BC = D_800BE354;
        v = arg0->unk10;
        o->unk1C = &D_40DE88;
        return;
    }
    o = arg0->unk10->unk68;
    o->unk1C = &D_40DE2C;
}
