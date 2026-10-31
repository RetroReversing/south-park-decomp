extern f32 D_800A9FEC; extern f32 D_800A9FF0; extern void func_80291BF8(void*,void*); extern void func_80293568(void*,void*); extern void func_802934F0(void*,void*); extern void func_80293520(void*,s32,s32); extern void func_80293598(void*,s16); void func_80273CDC(void *a){
char *__repair_addr;
s32 i; f32 t; func_80291BF8(*(void**)((char*)a+16),*(void**)((char*)a+12));func_80293568(*(void**)((char*)a+20),*(void**)((char*)a+16));func_802934F0(*(void**)((char*)a+20),*(void**)(*(char**)((char*)a+8)+4));for(i=0;i<16;i++)func_80293520(*(void**)((char*)a+20),i&255,0);
__repair_addr = (char *)((char*)a+36);
t=(f32)*(s32*)(__repair_addr)*(*(f32*)((char*)*(void**)a+0x27a4)*D_800A9FEC);func_80293598(*(void**)((char*)a+20),(s16)(s32)(t*D_800A9FF0));*(f32*)((char*)a+44)=t;}
