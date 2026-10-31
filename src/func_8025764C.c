s32 func_8025731C(s32 arg0) { return arg0 == 10 ? 0 : arg0; }
extern s32 D_800CEE08, D_800CE20C, D_800CCA80;
extern void func_80257824();
extern void func_80261CC0();
extern void D_802168D8();
extern void *D_80203B70();
extern void func_80261F64();
extern void *D_80216848();
extern void func_80273DCC();
void func_80257090(void *arg0) { void *p; if (*(u8 *)((u8 *)arg0+0x1B1)) { func_80257824(); func_80261CC0(&D_800CEE08,arg0); } p=*(void **)((u8 *)arg0+0x114); if(p){*(s16 *)((u8 *)p+0x16)=0; D_802168D8(&D_800CE20C,*(void **)((u8 *)arg0+0x114)); *(void **)((u8 *)arg0+0x114)=0;} }
s32 func_8025764C(void *arg0) {
char *__repair_addr;
 void *p=*(void **)((u8 *)arg0+0x10),*q; if(!p)return (*(u32 *)((u8 *)arg0+0x40)>>1)&1;
__repair_addr = (char *)((u8 *)p+2);
 if((*(u16 *)(__repair_addr)&1)==0)return 0; q=D_80203B70(&D_800CCA80,p); if(!q)return (*(u32 *)((u8 *)arg0+0x40)>>1)&1; if(*(u32 *)((u8 *)q+0x44)&0x01000000)return 0; return *(f32 *)((u8 *)arg0+8)<*(f32 *)((u8 *)q+0x20); }
void func_80256FE4(void *arg0,void *arg1) { s8 a=*(s8 *)((u8 *)arg1+6),b; if(a!=-1)func_80261F64(&D_800CEE08,arg0); b=*(s8 *)((u8 *)arg1+7); if(b==-1)*(void **)((u8 *)arg0+0x114)=0; else *(void **)((u8 *)arg0+0x114)=D_80216848(&D_800CE20C,b); if((*(u32 *)((u8 *)arg0+0x40)&0x100000)==0){s16 x=*(s16 *)((u8 *)arg1+0xC);if(x)func_80273DCC(x,*(s32 *)((u8 *)arg0+4),*(s32 *)((u8 *)arg0+8),*(s32 *)((u8 *)arg0+0xC),(u8 *)arg0+4,0);} }
