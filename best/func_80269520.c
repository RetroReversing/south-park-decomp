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
extern f32 D_800A9D10; extern f64 D_800A9D18; extern f32 D_800A9D20; void func_802676F8(void*,f32,f32,s32,s32,f32,f32);
void func_80269520(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4){
 f32 xstep,ystep; s32 w,h; void *p; ystep=(f32)*(u16*)((u8*)arg0+2)-D_800A9D10; p=(u8*)arg0+8;
 if((f32)*(u16*)((u8*)arg0+2)!=0.0f){ f64 q=D_800A9D18; do{
 xstep=(f32)*(u16*)arg0-D_800A9D10; if((f32)*(u16*)arg0!=0.0f){xstep=*(f32*)&D_800A9D20; do{
 w=*(s32*)p; h=*(s32*)((u8*)p+4); func_802676F8((u8*)p+8,arg1,arg2,w,h,arg3,arg4);
 p=(u8*)p+((u32)(w*h)>>1)+8; xstep-=*(f32*)&D_800A9D20;
 }while(xstep!=0.0f);}
 ystep-=*((f32*)&D_800A9D20+1); arg2+=(f32)h*arg4;
 }while(ystep!=0.0f);}
}
