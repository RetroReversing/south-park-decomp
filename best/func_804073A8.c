s16 func_80414904(void*); void func_80412EB4(void*,s32); void func_802A08B8(void*,void*,s32,s32,s32,s32); void func_80264A98(void*);
extern u8 D_800D77E6; extern s32 D_800CCA80[],D_800BC658[],D_800BC668[],D_800BC670[],D_800C9D10[],D_800C9D1C[],D_800C9D28[],D_800C9D34[];
extern u8 D_800CE370[],D_8010DB58[],D_8010DB88[],D_8010DBB8[],D_8010DD08[];
void func_804073A8(void) {
char *__repair_addr;

 s32 i,j,idx,a,b,c,d,x; s32 n=* (s32*)D_800CCA80;
 func_80412EB4(D_800CCA80,(s16)func_80414904(D_800CCA80));
__repair_addr = (char *)(D_800CCA80+0x5E0);

 func_802A08B8(D_8010DD08,D_800BC658,D_800C9D10[D_800D77E6],D_800C9D1C[D_800D77E6],*(s32*)(__repair_addr),*(s32*)(D_800CCA80+0x5E0));
 func_802A08B8(D_8010DB58,D_800BC668,D_800C9D28[D_800D77E6]+n*8,0,0,0);
 func_802A08B8(D_8010DB88,D_800BC668,D_800C9D28[D_800D77E6]+n*8+4,0,0,0);
 n--;
 if((u32)n<5) switch(n) {case 0:a=0;break;case 1:a=4;break;case 2:a=7;break;case 3:a=11;break;case 4:a=14;break;default:a=17;}
 else a=17;
 for(i=0;i<7;i++) { j=a*7+( *(s32*)D_800CCA80-1)*7+i; func_802A08B8(D_8010DBB8+i*0x30,D_800BC668,D_800C9D34[D_800D77E6]+j*4,0,0,0); }
 func_80264A98(D_800CE370);
}
