extern f32 D_800A9A60; void func_80260324(void*p,f32 x,f32 y,f32 z,s32 q,f32 w,s32 r,s32 t,s32 u){
char *__repair_addr;
f32 c=D_800A9A60;
__repair_addr = (char *)((u8*)p+8);
*(s32*)(__repair_addr)=t;*(s32*)((u8*)p+0xC)=u;*(s32*)((u8*)p+0x10)=0;*(f32*)((u8*)p+0x14)=w;*(s32*)((u8*)p+0x18)=r;*(s32*)((u8*)p+0x2C)=r;*(s32*)((u8*)p+0x40)=r;*(f32*)((u8*)p+0x1C)=x*c;*(f32*)((u8*)p+0x30)=y*c;*(f32*)((u8*)p+0x44)=z*c;}
