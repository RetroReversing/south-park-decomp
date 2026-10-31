typedef struct Entry { u16 x; u8 y; u8 z; } Entry;
typedef struct Obj { char pad[8]; u16 flags; char pad2; u8 idx; } Obj;
extern volatile Entry D_800F5F90[64];
extern u8 D_80110000[];
void func_802915A8(s32 idx);
void func_80291528(s32 idx, s32 zero, s32 a, s32 b, s32 c, s32 d);
void func_80290600(Obj *o) {
    if (o->idx != 0xFF) {
        if (o->flags & 1) {
            D_800F5F90[o->idx].z=0xFF;
            if (D_800F5F90[o->idx].y != 0xFF) {
                func_80291528(o->idx,0,D_800F5F90[o->idx].x<<12,((s32)D_80110000&0x3FFFFFF)+(D_800F5F90[o->idx].y<<12),-1,7);
            } else {
                func_802915A8(o->idx); D_800F5F90[o->idx].x=0xFFFF;
            }
        } else {
            D_800F5F90[o->idx].y=0xFF;
            if (D_800F5F90[o->idx].z==0xFF) {
                func_802915A8(o->idx); D_800F5F90[o->idx].x=0xFFFF;
            } else {
                func_80291528(o->idx,0,D_800F5F90[o->idx].x<<12,((s32)D_80110000&0x3FFFFFF)+(D_800F5F90[o->idx].z<<12),-1,7);
            }
        }
        o->idx=0xFF;
    }
}
