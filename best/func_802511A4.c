typedef struct {char p[0x10];s32 mode;char a[4];s32 x,y,z;char b[0x1c];s32 flags;char c[0xb4];void*anim;} Obj;extern s32 D_800F4B78;extern s32 D_800F4B7C[3],D_800F4B9C[3];extern u8 D_800CE0FC;
s32 func_8026D8F0(s32);void func_802630B0(void*,void*,u16,s32,s32,s32,s32,s32,s32);void D_80212AB8(s32*,s32*);void D_80253EB0(void*,void*,...);void func_80273DCC(s32,s32,s32,s32,s32,s32);void func_802569D0(void*,void*,s32);
void func_802511A4(Obj*o,s32 arg1){
char *__repair_addr;
s32 i,sp50,sp54;u16 tex,frame,anim;s32 v[3],p[4];u8*r;
i=func_8026D8F0(o->mode);if(i==10)i=0;
__repair_addr = (char *)((u8*)o->anim+0x14);
r=(u8*)(*(u32*)(__repair_addr));tex=*(u16*)(r+i*2+0x70);frame=*(u16*)(r+i*2+0x8c);sp50=*(s32*)(r+i*8);sp54=*(s32*)(r+i*8+4);anim=*(u16*)(r+i*2+0xa8);
if(frame!=0xffff)func_802630B0(o,o,frame,-1,D_800F4B7C[0],D_800F4B7C[1],D_800F4B7C[2],sp50,sp54);
if(tex!=0xffff){if(*(u32*)o->anim&0x10){v[0]=D_800F4B9C[0];v[1]=D_800F4B9C[1];v[2]=D_800F4B9C[2];}else{v[0]=o->x;v[1]=o->y;v[2]=o->z;}D_80212AB8(p,v);D_80253EB0(&D_800CE0FC,o,*(s32*)((u8*)o+0x108),*(s32*)((u8*)o+0x10c),*(s32*)((u8*)o+0x110),tex,v[0],v[1],v[2],p[0],p[1],p[2],p[3],D_800F4B7C[0],D_800F4B7C[1],D_800F4B7C[2],D_800F4B78,-2,(*(u32*)((u8*)o+0x40)&0x100002)|1,0);}
if(anim!=0xffff)func_80273DCC((s16)anim,D_800F4B7C[0],D_800F4B7C[1],D_800F4B7C[2],0,0);if(*((s8*)o+0x192)==1)func_802569D0(&D_800CE0FC,o,arg1);}
