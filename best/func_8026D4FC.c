typedef struct Vec3 { s32 x, y, z; } Vec3;
typedef struct Item { char pad0[4]; s32 unk4; s32 unk8; s32 unkC; } Item;

extern Vec3 D_800F1548;
extern Vec3 D_800F1558;
extern f32 D_800A9EA0;
extern f32 D_800A9EA4;
extern s32 D_800F1550;
extern void *D_800B1E58;
extern void *D_800B1E5C;

void D_802131C4(Vec3 *out, s32 a1, s32 a2);
void D_80213274(Vec3 *out, Vec3 *a1, Vec3 *a2);
void D_802132D8(Vec3 *v);

Vec3 *func_8026D4FC(Vec3 *arg0, Item *arg1)
{
    Vec3 sp10;
    Vec3 sp20;

    if (arg1 == NULL) {
        D_800F1558.x = 0;
        D_800F1558.z = 0;
        D_800F1558.y = D_800A9EA0;
    } else if (arg1 != D_800B1E5C) {
        if (arg1 == NULL) {
            D_800F1548.x = 0;
            D_800F1550 = 0;
            D_800F1548.y = D_800A9EA4;
        } else if (arg1 != D_800B1E58) {
            D_802131C4(&sp10, arg1->unk8, arg1->unk4);
            D_802131C4(&sp20, arg1->unkC, arg1->unk8);
            D_80213274(&D_800F1548, &sp10, &sp20);
        }
        D_800B1E58 = arg1;
        D_800F1558 = D_800F1548;
        D_802132D8(&D_800F1558);
    }
    *arg0 = D_800F1558;
    D_800B1E5C = arg1;
    return arg0;
}
