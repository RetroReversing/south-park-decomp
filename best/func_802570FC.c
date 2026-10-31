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
typedef struct Sub { char pad[0x10]; u16 a; u16 b; } Sub;
typedef struct Main {
    char pad[0x18];
    f32 x, y, z;
    char pad2[0xF8 - 0x24];
    void *pF8;
    char pad3[0x14C - 0xFC];
    s32 a14C, a150, a154;
} Main;
typedef struct F8 { char pad[0x2C]; Sub *s; } F8;

f32 func_8027E368();
void D_80213190(f32 *dst, f32 *src, f32 *src2);
void D_802131F8(f32 *dst, f32 *src, f32 v);
f32 func_8029AA80();

void func_802570FC(Main *arg0) {
    f32 sp10;
    s32 sp20, sp24, sp28;
    f32 f0, f1;
    f32 t;
    Main *s0 = arg0;
    f32 *s1;

    f0 = func_8027E368(((F8 *)s0->pF8)->s->a);
    if (f0 != 0.0f) {
        sp20 = s0->a14C;
        sp24 = s0->a150;
        sp28 = s0->a154;
        D_802131F8(&sp10, &sp20, f0);
        s1 = &s0->x;
        D_80213190(s1, s1, (f32 *)&sp20);
        f1 = func_8029AA80(s0->x * s0->x + s0->y * s0->y + s0->z * s0->z);
        t = func_8027E368(((F8 *)s0->pF8)->s->b);
        if ((f0 > 0.0f) ? (t < f1) : (f1 < t)) {
            D_802131F8(s1, (f32 *)&sp20, t);
        }
    }
}
