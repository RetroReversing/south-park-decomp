s32 func_80402948(void);void func_8026624C(void);void func_80268FF8(s32,s32,s32);void func_802A08B8(void*,void*,s32,s32);void func_80266B34(void*,s32,s32,s32);extern f32 D_800BC5D0,D_800BC5D8;extern s32 D_800BEE18;extern s8 D_800D77EE;extern s32 D_800F150C;
void func_804061F0(void *arg0){
register char *__repair_addr;
u8 sp10[0x18];s32 s0,s1; s8 *s4; s32 *s2; s8 state;f32 f;
func_80402948();s0=0;func_8026624C();
__repair_addr = (char *)((u8*)*(void**)((u8*)arg0+0x3c)+0xb4);
f=*(f32*)(__repair_addr)*D_800BC5D0;D_800F150C=1;s1=(s32)f;s4=(s8*)&D_800D77EE-8;
if(D_800D77EE>0){do{
state=*(s8*)((u8*)0x800D7802+((s0*8+s0)*2));
if(state==0){s2=(s32*)0x800C9578;}else if(state==1){s2=(s32*)0x800C9584;}
if(*(u8*)(0x8010DB48+s0)){func_80268FF8(0x96,0x96,0x96);}else{func_80268FF8(0xff,0xff,0);}
s0++;func_802A08B8(sp10,(void*)0x800BC5C8,s0,s2[(u8)*s4]);
func_80266B34(sp10,(D_800BEE18+((u32)D_800BEE18>>31))>>1,s1,(s32)(*(f32*)((u8*)arg0+0x38)*(*(f32*)((u8*)0x800BC5D0+4))));
f=*(f32*)((u8*)*(void**)((u8*)arg0+0x3c)+0xb4)*D_800BC5D8;s1=(s32)((f32)s1+f);
}while(s0<*(s8*)(s4+8));}
}
