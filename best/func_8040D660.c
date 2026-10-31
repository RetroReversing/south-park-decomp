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
typedef struct S_8040D660 {
    char pad0[0x34];
    f32 f34;
    char pad1[4];
    void *ptr3C;
} S_8040D660;

extern f32 D_800BE328;
extern f32 D_800BE32C;

void func_80269028();
void func_8026624C();
void func_80268FF8();
void func_80269010();
void func_80266B34();
void func_8040C8D4();

extern s32 D_800F150C;
extern s32 D_800F14F0;
extern s32 D_800F1508;
extern s32 D_800BEE18;
extern s32 D_800D792C;
extern u8 D_800BE2FC[];
extern u8 D_800BE310[];
extern u8 D_800BE31C[];

void func_8040D660(S_8040D660 *arg0) {
char *__repair_addr;

    u8 *p;
    u8 *s0;
    s32 one = 1;
    s32 a1v, a2v;

    s0 = arg0->ptr3C;
    func_80269028((s32)(arg0->f34 * D_800BE328));
    func_8026624C();
    D_800F150C = one;
    D_800F14F0 = one;
    D_800F1508 = one;
    func_80268FF8(0xFF, 0, 0x80);
__repair_addr = (char *)(s0 + 0xB0);

    func_80269010(*(f32 *)(__repair_addr), *(f32 *)(s0 + 0xB4));

    a1v = D_800BEE18 / 2;
    a2v = (s32)(*(f32 *)(s0 + 0xB4) * D_800BE32C);

    switch (D_800D792C) {
    case 1:
        p = D_800BE2FC;
        break;
    case 2:
        p = D_800BE310;
        break;
    case 3:
        p = D_800BE31C;
        break;
    default:
        goto done;
    }
    func_80266B34(p, a1v, a2v, 0xFF);
done:
    func_8040C8D4(arg0);
}
