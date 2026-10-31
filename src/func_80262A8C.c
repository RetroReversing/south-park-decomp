void func_80262770(void*p){void*o=*(void**)((char*)p+0x1c);u8 x;f32 y;if(o){if(*(s32*)((char*)p+0x3c)&1){x=*((u8*)o+0x137);if(x)*((u8*)o+0x137)=x-1;}if(*(s32*)((char*)p+0x3c)&2){o=*(void**)((char*)p+0x1c);x=*((u8*)o+0x1b1);if(x)*((u8*)o+0x1b1)=x-1;}}*(void**)((char*)p+0x1c)=0;y=*(f32*)((char*)*(void**)((char*)p+8)+4);if(*(f32*)((char*)p+0x24)<y)*(f32*)((char*)p+0x24)=y;}
void func_802625D0(void*p,s32 target){void*n=*(void**)((char*)p+0x7520);void*o;u8 x;f32 y;while(n){o=*(void**)((char*)n+0x1c);if(o==(void*)target){if(o){if(*(s32*)((char*)n+0x3c)&1){x=*((u8*)o+0x137);if(x)*((u8*)o+0x137)=x-1;}if(*(s32*)((char*)n+0x3c)&2){o=*(void**)((char*)n+0x1c);x=*((u8*)o+0x1b1);if(x)*((u8*)o+0x1b1)=x-1;}}*(void**)((char*)n+0x1c)=0;y=*(f32*)((char*)*(void**)((char*)n+8)+4);if(*(f32*)((char*)n+0x24)<y)*(f32*)((char*)n+0x24)=y;}n=*(void**)((char*)n+4);}}
extern f32 D_800A9B0C,D_800A9B10;extern void func_8029A2CC(void*,s32);extern void D_802145E4(void*,f32,f32,f32);extern void D_80213A84(void*);extern void func_802608E0(s32,void*,void*);
void func_80262A8C(s32 a,void*b,s32 c,s32 d){
char *__repair_addr;

s32 __repair_argument;
void*o=*(void**)((char*)b+0x1c);f32 x;
__repair_addr = (char *)((char*)b+0x24);
if(o==(void*)c&&*(f32*)(__repair_addr)>0.0f){char tmp[0x40];func_8029A2CC(tmp,d);__repair_argument = *(s32*)((char*)*(void**)((char*)o+0xf8)+0x10);
x=D_800A9B0C;if(__repair_argument)x=D_800A9B10;D_802145E4(tmp,x,x,x);D_80213A84(tmp);func_802608E0(a,b,tmp);}}
