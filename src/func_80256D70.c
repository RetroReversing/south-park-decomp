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
typedef struct {s32 x,y,z;} I3; typedef struct {s32 x,y,z,w;} I4;
typedef struct {char pad[0x18];s32 x18,x1c,x20;char pad2[0x1C];s32 x40;char pad3[0xB4];u32 *flags;char pfc[0xC];s32 x108,x10c,x110;} A;
extern void D_80212AB8(I4 *,I3 *);
extern void D_80253EB0(u8 *,void *,s32,s32,s32,s32,I3,I4,I3,s32,s32,s32,s32);
extern u8 D_800CE0FC; extern I3 D_800F4B9C; extern I3 D_800F4B7C;
void func_80256D70(A *arg0, s32 arg1) {
 I4 vec; I3 p;
 if(*arg0->flags&0x10) p=D_800F4B9C; else p=*(I3*)((u8*)arg0+0x18);
 D_80212AB8(&vec,&p);
 D_80253EB0(&D_800CE0FC,arg0,arg0->x108,arg0->x10c,arg0->x110,arg1,p,vec,D_800F4B7C,((s32*)&D_800F4B7C)[-1],-2,(arg0->x40&0x100002)|1,0);
}
