extern f32 D_800A96C8, D_800A96D0, D_800A96D4, D_800ABA14, D_800ABA18, D_800F1390;
extern s32 D_800B1088, D_800F1388, D_800F138C, D_800F1398, D_800F139C, D_8010E55C;
extern u8 D_800CC760[];
extern s32 func_8029CAA0(void *);
extern void D_80221DFC(s32,s32);
extern void D_8029D708(void);
extern u64 func_802A6AF0(u32,u32,s32,s32);
extern s32 func_802A7570(u64,u32,s32,s32);
extern f32 func_802A75B8(u64,u32);
extern s32 func_8029DDA0(s32,s32,s32);
extern void func_802591D4(void *,void *);
extern s32 func_80258BD4(void *,s32 *,s32 *,s32);
extern void func_80259228(void *,s32,s32);
void func_8025841C(void *arg0){
 s32 sp10=0,sp14=0; u8 *state; u32 lo,hi; u64 fixed; s32 a,b,c; f32 f; s32 *base;
 state=*(u8**)((u8*)arg0+0x2f4); *(void**)((u8*)arg0+0x2f4)=0;
 if((*(s32*)(state+4)&0x10)&&func_8029CAA0(state+0x10)){
 *(s32*)(state+4)|=0x20;
 if((*(s32*)(state+8)&7)==3){*(void**)state=*(void**)((u8*)arg0+0x2e8);*(void**)((u8*)arg0+0x2e8)=state;if(!*(void**)((u8*)arg0+0x2f0))*(void**)((u8*)arg0+0x2f0)=state;}
 if(*(s32*)(state+8)&0x20){D_8029D708();lo=D_800F1390;hi=D_800F139C;a=0;b=3;fixed=func_802A6AF0(D_800F1398,hi,0,3);lo=(u32)fixed;if(func_802A7570(fixed,lo,0,0)>0)f=func_802A75B8(fixed,lo);else f=2.0f*func_802A75B8((u32)(fixed>>1),(lo&1)|(lo>>1)|((u32)fixed<<31));D_800F1390+=f*D_800A96C8;}
 }else{*(s32*)(state+4)&=~2;
 if(*(s32*)(state+0x10)==1){c=*(s32*)(state+0xc);D_800B1088=0;base=(s32*)D_800CC760;if(c==base[0xF0/4]){}else if(c==base[0x1f8/4])base=(s32*)((u8*)base+0x108);else if(c==base[0x300/4])base=(s32*)((u8*)base+0x210);D_80221DFC(0,base[0xF4/4]==D_8010E55C);
 if(*(s32*)(state+8)&0x20){D_8029D708();lo=D_800F139C;hi=D_800F139C;fixed=func_802A6AF0(D_800F1398,hi,0,3);lo=(u32)fixed;if(func_802A7570(fixed,lo,0,0)>0)f=func_802A75B8(fixed,lo);else f=2.0f*func_802A75B8((u32)(fixed>>1),(lo&1)|(lo>>1)|((u32)fixed<<31));D_800F1390+=f*(*(f32*)((u8*)&D_800A96C8+4));D_800ABA18=D_800F1390;D_8029D708();fixed=func_802A6AF0(D_800F1388,D_800F138C,0,3);lo=(u32)fixed;if(func_802A7570(fixed,lo,0,0)>0)f=func_802A75B8(fixed,lo);else f=2.0f*func_802A75B8((u32)(fixed>>1),(lo&1)|(lo>>1)|((u32)fixed<<31));D_800ABA14=f*D_800A96D0;func_8029DDA0(*(s32*)(state+0x50),*(s32*)(state+0x54),0);}
 }else{D_8029D708();fixed=func_802A6AF0(D_800F1388,D_800F138C,0,3);lo=(u32)fixed;if(func_802A7570(fixed,lo,0,0)>0)f=func_802A75B8(fixed,lo);else f=2.0f*func_802A75B8((u32)(fixed>>1),(lo&1)|(lo>>1)|((u32)fixed<<31));D_800ABA14=f*D_800A96D4;if(func_8029DDA0(*(s32*)(state+0x50),*(s32*)(state+0x54),0)==-1)*(volatile s32*)0=0;}
 func_802591D4(arg0,state);}
 c=(!*(void**)((u8*)arg0+0x2f4))*2|(!*(s32*)((u8*)arg0+0x2f8));if(func_80258BD4(arg0,&sp10,&sp14,c)!=c)func_80259228(arg0,sp10,sp14);
}
