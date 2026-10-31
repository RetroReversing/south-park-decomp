#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern f32 D_800BC480;
extern f32 D_800BC484;
extern s32 D_800CE2FC;
extern s32 D_800F1500;
extern s32 D_8010DAF8;
extern f32 D_8010DAFC;
extern void func_8025F884(char *p, f32 v);
void func_8022CF48();
void func_8022D63C();

typedef struct {
    char pad0[0x10];
    s32 *unk10;
    char pad14[0x28];
    char *unk3C;
} SA;

void func_804054E4(SA *arg0) {
    s32 *p;
    char *o;

    o = arg0->unk3C;
    D_8010DAF8 = 0;
    func_8025F884(o, 0.1f);
    D_800F1500 = 2;
    func_8022CF48();
    func_8022D63C(0);
    if (D_800CE2FC == 500) {
        p = arg0->unk10;
        D_8010DAFC = D_800BC480;
        p[0xC] |= 0xC0000;
    } else {
        p = arg0->unk10;
        D_8010DAFC = D_800BC484;
        p[0xC] &= 0xFFF3FFFF;
    }
}
