/* context.h for South Park: shared by every function. Agents grow it with edit_context:
 * add a prototype or struct the moment you work one out, so the next function benefits. */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef int s32_bool;

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

extern void *D_800F4864;
extern s32 D_800D77D4;

/* "slot base" table family (func_8028C5C0 / func_8028C50C / func_8028C544 / func_8028C57C):
 * number of slots in D_800B3618, per-slot config at D_800B3614 + i*0xC,
 * slot data at D_800ADDD4[i] + D_800D77E6*4. */
extern s32 D_800B3618[]; /* slot table, 4 entries (func_8028C720) */
extern u8 D_800F529C[0x30];
extern u8 D_800F52A0[0x30];
extern u8 D_800D77E6;
extern u8 D_800ADDD4[];

/* opaque byte-level base address of the game's global struct areas (byte access only) */
extern u8 D_800B3AE8[];

/* float/int constants in .bss/.rodata touched by func_8025AD64 (not in the split ROM) */
extern f32 D_800A9760;
extern f32 D_800A9764;
extern f32 D_800A9768;
extern s32 D_800BEE18;
extern s32 D_800BEE1C;

/* float constants in .rodata (addresses from the ROM) */
extern f32 D_800AA55C; /* 0x800AA55C */
extern f32 D_800A9F60;   /* 0x800A9F60 */
extern f32 D_800A9F7C;   /* 0x800A9F7C */
extern f32 D_800A9F80;   /* 0x800A9F80 */

/* generic byte-offset 3D object (func_80272338 initialises pos/rot/scale) */
typedef struct Obj3D {
    char pad0[8];
    struct Obj3D *next;      /* 0x8 */
    struct Obj3D *prev;      /* 0xC */
    char pad1[0x14];
    void *unk28;             /* 0x28 */
    f32 s_x;                 /* 0x2C */
    f32 s_y;                 /* 0x30 */
    s16 unk34;               /* 0x34 */
    s16 unk36;               /* 0x36 */
    char pad2[0x74];
    void *owner;             /* 0xB0 */
    s32 unkB4;               /* 0xB4 */
} Obj3D;

void func_80272338(Obj3D *obj, s32 a1, s32 a2);

/* actor node referenced through Obj3D.owner (0xB0); +0x84 is its anim/track block */
typedef struct ActorNode {
    char pad00[8];
    struct ActorNode *next;  /* 0x8 */
    struct ActorNode *prev;  /* 0xC */
    char pad10[0x74];
} ActorNode;

/* anim controller at ((u8*)ActorNode)+0x84 */
typedef struct AnimCtl {
    char pad00[0x84];
} AnimCtl;

/* "shooter/character" sub-object living at Obj3D+0x10 (fields relative to that) */
typedef struct CharSub {
    s16 v18;                      /* +0x18 */
    u8 v19;                       /* +0x19 */
    char pad1A[0x66];
    f32 f80;                      /* +0x80  (float base for func_80270B28 args) */
    s32 f84;                      /* +0x84 */
    u16 f8C;                      /* +0x8C */
    s16 f90;                      /* +0x90 */
    f32 f94;                      /* +0x94 */
    f32 f98;                      /* +0x98 */
    s32 f9C;                      /* +0x9C */
    s32 fA0;                      /* +0xA0 */
    char padA4[8];
    s32 fAC;                      /* +0xAC */
    struct ActorNode *node;       /* +0xB0 */
} CharSub;

s32 func_802706FC(void *node);
s32 func_80270B28(void *vec, s32 track);
f32 func_8027E368(s32 x);

/* func_80273F04(id, value) — debug/message printer used in board logic.
 * The ROM body only reads a0 and a1 (a0 = message id sign-extended from 16 bits,
 * a1 = value), so the real prototype takes two args; callers pass one or two. */
void func_80273F04(s32 arg0, s32 arg1);

/* node list used by func_80403E74 (actor/object update list): global list D_800D6A60
 * (head at +0, active flag/ptr at +0x10). Node: +0xC int (passed to D_80221948),
 * +0x18 vtable/struct whose +0x10 is an optional callback(node, list),
 * +0x24 Obj* cleared at +0xC0/+0xC4/+0xCC, +0x1D4 next. */
typedef struct ListNode ListNode;
typedef struct {
    char pad0[0xC0]; s32 a; s32 b; char pad1[4]; s32 c;
} ListNodeRes;
struct ListNode {
    char pad0[0xC];
    s32 unkC;                /* 0xC */
    char pad1[8];
    void *vt;                /* 0x18 */
    ListNodeRes *res;        /* 0x24 */
    char pad3[0x1D4 - 0x2C];
    ListNode *next;          /* 0x1D4 */
};
typedef struct {
    ListNode *head;          /* 0x0 */
    char pad[0xC];
    void *active;            /* 0x10 */
} ListHead;
extern ListHead D_800D6A60;

/* func_80408E14 counter block: only [0] (result/reset) and [2] (counter) used. */
extern s32 D_8010DE84[];

/* NOTE: an older function declared D_800D6358 as `extern s32`; in func_804099BC the ROM
 * loads it with lui+lw (a pointer value at 0x800D6358). Don't redeclare it in context.h. */

/* weight table for the mining-cart / path logic (func_80286060):
 *   weights for direction 2 at +0x84..+0x9A (three pairs: value, weight x2),
 *   weights for direction 1 at +0x9C..+0xA1 (three weights, summed),
 *   weights for direction 1 alt at +0xA4, +0xA5 (thresholds). */
typedef struct PathTbl {
    char pad_00[0x84];
    s16 a84; s16 a86;   /* dir2: value, weight */
    s16 a88; s16 a8A;
    s16 a8C; s16 a8E;
    s16 a90; s16 a92;
    s16 a94; s16 a96;
    s16 a98; s16 a9A;
    s8 a9C, a9D, a9E;   /* dir2 weights */
    s8 a9F, aA0, aA1;   /* dir1 weights */
    char pad_A2[2];
    s8 aA4, aA5;        /* thresholds */
} PathTbl;

/* node struct of the "board/perimeter" logic family (func_8027C5D8 / func_8027CC68):
 * pos at 0x0, flags at 0x2, links at 0x10/0x14/0x18. */
typedef struct BNode {
    f32 x;
    f32 y;
    f32 z;
    u16 u0C;
    u16 flags;
    char pad0E[2];
    struct BNode *unk10;
    struct BNode *unk14;
    struct BNode *unk18;
    char pad1C[0x24];
    s32 unk40;
    s32 unk44;
    s32 unk48;
    char pad4C[0x20];
    struct BNode *unk6C;
    s32 unk70;
    f32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
} BNode;

typedef struct { f32 x, y, z, w; } Vec4;

extern s32 D_800AA198[];
extern u8 D_800AD4E0[];
extern void func_802131C4(Vec4 *dst, Vec4 *a, Vec4 *b);

/* vec3 transform helper used by the collision code (func_8027B970): dst = a * b */
typedef struct V3 { f32 x, y, z; } V3;
extern void func_802131D0(V3 *dst, V3 *a, V3 *b);

typedef struct { void *allocation; void *vertices; s32 count; s32 width; s32 height; } TextureTiles;
typedef struct { u16 width; u16 height; u16 format; u16 flags; u16 tile_width; u16 tile_height; } TextureHeader;

typedef struct S_func_80273400_arg0 {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    s32 unk_38;
    f32 unk_3C;
} S_func_80273400_arg0;

extern f64 D_800AA2C8; /* 2147483648.0 (double) used by func_80280D8C */

typedef struct S_func_802835D0_arg1 {
    u8 unk_00[4]; f32 unk_04; f32 unk_08; f32 unk_0C; s32 unk_10;
    void *unk_14; u8 unk_18[4]; f32 unk_1C; u8 unk_20[0xA4];
    s32 unk_C4; u8 unk_C8[8]; s32 unk_D0; u8 unk_D4[4];
    u16 unk_D8; u8 unk_DA[0x92]; u16 unk_16C; u8 unk_16E[0x1A];
    f32 unk_188; f32 unk_18C;
} S_func_802835D0_arg1;

/* --- South Park object/tile layout worked out from func_80292920 (0x80292920) ---
 * GameObj: node +0x14 (void*), +0x1C int, +0x20 int* (count at *p, sub-table at
 * p+0xC+4*i), +0x24 int, +0x2C int, +0x48 entry (void*), +0x60 Tile*, +0x64
 * LNode* link chain, +0x70 s32 (*cb)(s32*, f32*, s32,s32,s32,s32).
 * Tile is 0x10 bytes: +0 Sub* (unnamed record: +0 s32, +4 s32, +8 u8, +C u8, +D u8),
 * +4 s16, +6 u8, +7 u8, +8 u8, +9 u8, +A u8, +B u8, +C f32. Accessed as g->tiles[i].
 * Sub (func_80294D00 result): +0 Info*(+0 s32, +4 s8, +5 s8, +8 s32), +4 Rec0*
 * (+0 s32, +4 s8, +5 s8, +8 s32), +8 void* unk8.
 * LNode: +0 next, +0x20 void* (->Sub), +0x24 s32, +0x28 f32, +0x2C f32, +0x30 u8,
 * +0x31 u8 tile index, +0x33 u8, +0x34 u8, +0x35 u8 state, +0x36 s8, +0x37 u8 flags.
 * Node body handed to the func_80296xxx helpers is LNode+4.
 * Globals: f32 D_800AAC08, D_800AAC0C, D_800AAC10; char D_800AAB38, D_800AAB3C.
 * Prototypes: func_80294D00/80294B3C(GameObj*,s32,s32,s32); func_80294CA0(GameObj*,s32,u8);
 * func_80294E34(LNode*,GameObj*)->s16; func_80294EA8(LNode*,s32), func_80294EC4(LNode*,GameObj*);
 * func_802965E8(void*,void*,s16*); func_80296A50(void*,void*,s16,s32);
 * func_80296878/80296928(void*,void*,s32); func_802969B8(void*,void*,f32);
 * func_80296BA0(void*,void*,s32,f32,s32,s32,s32,s32); func_8029370C(void*,s16*,s32);
 * func_80293470(s16)->f32; func_802950E0(GameObj*,void*,u8); func_8029D580(char*,char*,s32). */
