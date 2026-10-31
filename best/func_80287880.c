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
extern f32 D_800AA5A4,D_800AA5A8,D_800AA5AC,D_800AA5B0,D_800AA5B4,D_800AA5B8,D_800AA5BC,D_800AA5C0,D_800AA5C4;
extern void D_80241EEC(void*,void*,void*,s32,s32); extern void D_80241A44(void*,void*,void*); extern s32 D_80246A4C(void*,void*);
extern f32 D_80215964(f32,f32,u32); extern f32 D_802157FC(f32,f32,f32); extern void D_80241C54(void*,void*,u32,f32); extern s32 D_802452F4(void*,void*,void*); extern void D_8023E95C(void*,void*,s32);
void func_80287880(void *arg0, void *arg1){u8 sp18[0x88],spA0[0x40];u8 *p;s32 t;f32 x,y,z;
D_80241EEC(arg0,arg1,sp18,1,1);D_80241A44(arg0,arg1,spA0);if(D_80246A4C(arg0,arg1)==1){
x=-(*(f32*)((u8*)arg0+0x1C))*D_800AA5A4;if(x<D_800AA5A8)x=D_800AA5A8;if(D_800AA5AC<x)x=D_800AA5AC;
*(f32*)((u8*)arg1+0x154)=D_80215964(*(f32*)((u8*)arg1+0x154),x,0x3DB2B8C4);
x=*(f32*)(p+0x4C)*D_800AA5B0;y=D_800AA5B4;if(y<x)y=x;else{y=D_800AA5B8;if(x<y)x=y;}
*(f32*)((u8*)arg1+0x158)=D_80215964(*(f32*)((u8*)arg1+0x158),x,0x3E32B8C4);
x=*(f32*)(p+0xB8)*D_800AA5BC;z=D_802157FC(*(f32*)((u8*)arg0+0x1C),*(f32*)(p+0x60),x);y=D_800AA5C0;*(f32*)((u8*)arg0+0x1C)=z;if(y<z)*(f32*)((u8*)arg0+0x1C)=y;else if(z<D_800AA5C4)*(f32*)((u8*)arg0+0x1C)=D_800AA5C4;}
D_80241C54(arg0,arg1,0x3E567751,*(f32*)(p+0x4C));if(*(s32*)(sp18+0x60)!=0||*(s32*)(sp18+0x1C)!=0){t=D_802452F4(arg0,arg1,p);if(t)D_8023E95C(arg0,arg1,t);}}
