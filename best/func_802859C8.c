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
extern f32 D_800AA430;
extern f32 D_800AA434;
extern f32 D_800AA438;
extern f32 D_800AA43C;
extern f32 D_800AA440;
extern f32 D_800AA444;
extern f32 D_800AA448;
extern f32 D_800AA44C;
extern f32 D_800AA450;

typedef struct Arg0 {
    char pad0[0x4];
    f32 unk4;
    char pad8[0x1C - 0x8];
    f32 unk1C;
    char pad20[0xD8 - 0x20];
    u16 unkD8;
} Arg0;

typedef struct Arg1 {
    char pad0[0x154];
    f32 unk154;
    f32 unk158;
    char pad15C[0x174 - 0x15C];
    s8 unk174;
    char pad175[0x188 - 0x175];
    s32 unk188;
    char pad18C[0x1B0 - 0x18C];
    f32 unk1B0;
    f32 unk1B4;
    f32 unk1B8;
} Arg1;

typedef struct Arg2 {
    char pad0[0x48];
    void *unk48;
    f32 unk4C;
    char pad50[0x60 - 0x50];
    f32 unk60;
} Arg2;

typedef struct Arg3 {
    char pad0[0x18];
    f32 unk18;
} Arg3;

void func_802857B4();
void D_802131C4(f32 *, f32 *, void *);
s32 D_80246A4C(void *, void *);
f32 D_80215964(f32, f32, s32);
f32 D_802157FC(f32, f32, f32);
void D_80241C54(void *, void *, s32, f32);

void func_802859C8(Arg0 *arg0, Arg1 *arg1, Arg2 *arg2, Arg3 *arg3) {
    f32 pos[3];
    f32 v[4];
    f32 m;
    f32 lim;
    void *t;
    u32 val;

    t = arg2->unk48;
    if (t != NULL) {
        if (arg1->unk174 != 12 && arg0->unkD8 != 0x7D3 && *(s32 *)(*(char **)((char *)t + 0x14)) == 13) {
            func_802857B4(arg0, arg1, t, arg2);
        }
    }

    if (arg1->unk188 & 0x80) {
        pos[0] = arg1->unk1B0;
        pos[1] = arg1->unk1B4;
        pos[2] = arg1->unk1B8;
        D_802131C4(v, pos, &arg0->unk4);
        if ((s32)(v[0] * v[0] + v[2] * v[2]) < 0x1068) {
            arg1->unk188 &= ~0x80;
        }
    }

    if (D_80246A4C(arg0, arg1) == 1) {
        if (arg0->unkD8 != 0x3FA) {
            m = arg0->unk1C * D_800AA430;
            if (m > D_800AA434) {
                m = D_800AA434;
            }
            if (m < D_800AA438) {
                m = D_800AA438;
            }
            arg1->unk154 = D_80215964(arg1->unk154, m, 0x3DB2B8C4);

            m = arg2->unk4C * D_800AA43C;
            if (m > D_800AA440) {
                m = D_800AA440;
            }
            if (m < D_800AA444) {
                m = D_800AA444;
            }
            arg1->unk158 = D_80215964(arg1->unk158, m, 0x3E32B8C4);
        }

        lim = D_802157FC(arg0->unk1C, arg2->unk60, arg3->unk18 * D_800AA448);
        arg0->unk1C = lim;
        if (D_800AA44C < lim) {
            arg0->unk1C = D_800AA44C;
        } else if (lim < D_800AA450) {
            arg0->unk1C = D_800AA450;
        }
    }

    if ((u8)(arg1->unk174 - 11) < 2) {
        val = 0x3D23D70A;
    } else if (arg0->unkD8 == 0x3FA) {
        val = 0x3DA3D70A;
    } else {
        val = 0x3E567751;
    }
    D_80241C54(arg0, arg1, val, arg2->unk4C);
}
