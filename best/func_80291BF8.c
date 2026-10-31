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
typedef struct {
    s32 *unk0;
    u32 unk4;
    f32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x3C];
    s32 unk58;
    char pad2[0x3C];
    s32 unk98;
    char pad3[0xC];
    s32 unkA8;
    char pad4[0xC];
    s32 unkB8;
} S1;

s32 __readVarLen();
extern f64 D_800AAAF0;
extern f32 D_800AAAF8;

void func_80291BF8(S1 *arg0, s32 *arg1) {
    u32 i;
    s32 bit;
    s32 val;
    s32 count;

    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk10 = 0;
    arg0->unkC = 0;
    arg0->unk14 = 1;
    for (i = 0; i < 0x10; i++) {
        bit = 1 << i;
        ((s8 *)arg0)[i + 0xA8] = 0;
        (&arg0->unk58)[i] = 0;
        ((s8 *)arg0)[i + 0x98] = 0;
        val = arg0->unk0[i];
        if (val != 0) {
            arg0->unk4 |= bit;
            (&arg0->unk18)[i] = (s32)arg1 + val;
            (&arg0->unkB8)[i] = __readVarLen(arg0, i);
        } else {
            (&arg0->unk18)[i] = 0;
        }
    }
    count = *(s32 *)(arg0->unk0 + 0x10);
    arg0->unk8 = D_800AAAF8 / (f32)count;
}
