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
extern s32 D_800B3A70[];
extern u8 D_800F6090;
extern u8 D_800F61B8[];
extern u8 D_800F62B8[];
extern u8 D_8010E858[];

s32 func_8029C418();
s32 func_8029C5A4();
s32 func_8029C610();
s32 func_8029C638();
s32 func_8029DC78();

typedef struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
} S_arg0;

typedef struct {
    u8 bytes[0x30];
} Copy;

s32 func_8029B3F8(S_arg0 *arg0) {
    Copy buf;
    u8 *src;
    u8 *p;
    s32 i;
    s32 v;
    u32 res;

    src = D_8010E858;
    if (D_800B3A70[arg0->unk8] == 0) {
        return 5;
    }
    p = buf.bytes;
    func_8029C5A4();
    D_800F6090 = 3;
    func_8029C638(1, &D_800F61B8[arg0->unk8 << 6]);
    func_8029DC78(arg0->unk4, 0, 1);
    func_8029C638(0, D_8010E858);
    func_8029DC78(arg0->unk4, 0, 1);
    i = arg0->unk8;
    if (i != 0) {
        for (v = 0; v < i; v++) {
            src++;
        }
    }
    *(Copy *)(p + 0x10) = *(Copy *)src;
    res = (buf.bytes[2] & 0xC0) >> 4;
    if (res == 0) {
        if ((func_8029C418(D_800F62B8) & 0xFF) != buf.bytes[0x26]) {
            res = 4;
        }
    }
    func_8029C610();
    return res;
}
