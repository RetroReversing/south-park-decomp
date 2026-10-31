typedef struct {char p[0x10];s32 mode;char a[4];s32 x,y,z;char b[0x1c];s32 flags;char c[0xb4];void*anim;} Obj;typedef struct{s32 x,y,z;} V3;extern s32 D_800F4B78;extern V3 D_800F4B7C,D_800F4B9C;extern u8 D_800CE0FC;
s32 func_8026CB20(s32);s32 func_8026D8F0(s32);s32 func_8026D8BC(s32);void func_802630B0(void*,void*,u16,s32,s32,s32,s32,s32,s32);void D_80212AB8(V3*,V3*);void D_80253EB0(void*,void*,...);void func_80273DCC(s16,s32,s32,s32,s32,s32);void func_802569D0(void*,void*,s32);
void func_80250F38(Obj*o,s32 arg1){s32 mode,sp50,sp54;u16 tex,frame,anim;V3 v,p;
if(func_8026CB20(o->mode)){mode=func_8026D8F0(o->mode);}else{mode=func_8026D8BC(o->mode);}if(mode==10)mode=0;
{u8*q=(u8*)o->anim;u32 t=*(u32*)(q+0x14);u8*r=(u8*)t;tex=*(u16*)(r+mode*2+0x70);frame=*(u16*)(r+mode*2+0x8c);anim=*(u16*)(r+mode*2+0xa8);sp50=*(s32*)(r+mode*8);sp54=*(s32*)(r+mode*8+4);}
if(frame!=0xffff)func_802630B0(o,o,frame,-1,D_800F4B7C.x,D_800F4B7C.y,D_800F4B7C.z,sp50,sp54);
if(tex!=0xffff){if((*(u32*)o->anim)&0x10)v=D_800F4B9C;else{v.x=o->x;v.y=o->y;v.z=o->z;}D_80212AB8(&p,&v);D_80253EB0(&D_800CE0FC,o,*(s32*)((u8*)o+0x108),*(s32*)((u8*)o+0x10c),*(s32*)((u8*)o+0x110),tex,v.x,v.y,v.z,p.x,p.y,p.z,0,D_800F4B7C.x,D_800F4B7C.y,D_800F4B7C.z,D_800F4B78,-3,(*(u32*)((u8*)o+0x40)&0x100002)|1,0);}
if(anim!=0xffff)func_80273DCC((s16)anim,D_800F4B7C.x,D_800F4B7C.y,D_800F4B7C.z,0,0);if(*((s8*)o+0x192)==1)func_802569D0(&D_800CE0FC,o,arg1);}
