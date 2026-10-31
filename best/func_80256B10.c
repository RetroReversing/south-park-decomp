typedef struct {char pad[0xF8]; u32 *flags; char pfc[0xC]; s32 x108,x10c,x110;} A;
extern s32 D_800F4B9C,D_800F4BA0,D_800F4BA4,D_800F4B64,D_800F4B68,D_800F4B6C,D_800F4B60,D_800F4B70,D_800CE0FC;
extern void D_80212AB8(s32*,s32*); extern void D_80253EB0(s32*,void*,s32,s32,s32,...);
void func_80256B10(A *arg0,s32 arg1) {
 s32 vec[4]; s32 p[3];
 if(*arg0->flags&0x10){p[0]=D_800F4B9C;p[1]=D_800F4BA0;p[2]=D_800F4BA4;}
 else {p[0]=*((s32*)arg0+6);p[1]=*((s32*)arg0+7);p[2]=*((s32*)arg0+8);}
 D_80212AB8(vec,p);
 D_80253EB0(&D_800CE0FC,arg0,arg0->x108,arg0->x10c,arg0->x110,arg1,p[0],p[1],p[2],vec[0],vec[1],vec[2],vec[3],D_800F4B64,D_800F4B68,D_800F4B6C,D_800F4B60,D_800F4B70,(*((s32*)arg0+16)&0x100002)|1,0);
}
