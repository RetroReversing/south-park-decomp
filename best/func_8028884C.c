extern f32 D_800AA650,D_800AA654,D_800AA658,D_800AA65C,D_800AA660,D_800AA664,D_800AA668,D_800AA670,D_800AA678,D_800AA67C,D_800AA680,D_800AA684,D_800AA688,D_800AA68C,D_800AA690,D_800AA694,D_800AA698,D_800ABA00;
extern f32 D_80215964(f32,f32,s32); extern f32 D_80215BE0(f32,f32); extern void D_80241EEC(void*,void*,void*,s32,...); extern void D_80241A44(void*,void*,void*); extern void D_80241C54(void*,void*,f32,f32); extern void D_8023E95C(void*,void*,s32); extern f32 func_8029A900(f32); extern f32 D_80299AE8(f32);
void func_8028884C(void*a,void*b){
char *__repair_addr; f32 x,y; unsigned char z[0xc8];
__repair_addr = (char *)((char*)a); __repair_addr += (s32)(0xd8);
if(*(u16*)__repair_addr!=1000){*(f32*)((char*)b+0xa8)=D_80215964(*(f32*)((char*)b+0xa8),D_800AA654,*(s32*)&D_800AA650);*(f32*)((char*)b+0x160)=D_80215964(*(f32*)((char*)b+0x160),D_800AA658,*(s32*)&D_800AA650);}
D_80241EEC(a,b,z,1,1); D_80241A44(a,b,z+0x88); D_80241C54(a,b,*(f32*)((char*)b+0x160),*(f32*)(z+0x4c));
x=*(f32*)((char*)b+0x17c)-D_800ABA00; *(f32*)((char*)b+0x17c)=x;
if(x>0&&*(void**)((char*)b+0x180)){void*p=*(void**)((char*)b+0x180);D_80215BE0(D_800AA65C,D_800AA660);y=D_80215BE0(D_800AA664,D_800AA668);x=*(f32*)((char*)p+0x70)+D_800AA670+y;x=func_8029A900(x);y*=x;*(f32*)((char*)b+0x98)=D_80215BE0(*(f32*)((char*)p+4)+x,D_800AA678);*(f32*)((char*)b+0x8c)=D_80299AE8(x);*(f32*)((char*)b+0xa0)=*(f32*)((char*)p+0xc)+y;}
if(*(u16*)((char*)a+0xd8)==1000)x=D_80215BE0(D_800AA680,D_800AA684);else x=D_80215BE0(D_800AA688,D_800AA68C);*(f32*)((char*)b+0x17c)=x;
if(*(f32*)((char*)b+0x3c)>D_800AA690&&(*(f32*)(z+0x84)<D_800AA694||*(f32*)((char*)b+0x3c)>D_800AA698)){*(u32*)((char*)b+0x180)=0;D_8023E95C(a,b,4);}}
