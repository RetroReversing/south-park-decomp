typedef void (*Fn)(s32,s32,s32,s32,s32,s32);
typedef struct { Fn fn; s32 pad; } FnEntry;
extern FnEntry D_800B1208[];
extern void D_8024249C();
extern void func_8026349C();
void func_80263BAC(s32 a0,s32 a1,s32 idx,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7) {
    FnEntry *e = &D_800B1208[idx];
    if (e->fn) D_800B1208[idx].fn(a1,a3,a4,a5,a6,a7);
}
void func_80263D94(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6) {
    D_8024249C(a0,a6,a3,a4,a5);
}
void func_80263DC8(u8 *a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9) {
    if (*a0 == 1) func_8026349C(a0,a1,a2,a3,a4,a5,a6,a7,0,0,0x80000);
}
void func_80263E28(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9) {
    func_8026349C(a0,a1,a2,a3,a4,a5,a6,a7,1,0,0x80000);
}
