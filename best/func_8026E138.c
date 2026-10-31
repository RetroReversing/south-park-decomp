typedef struct N {u16 id,flags;u8 pad[12];struct N *c[3];} N; void func_8026DDC8(N*,u16); void func_8026DD38(N*p){if(p&&(p->flags&2)){func_8026DDC8(p,p->id);}}
void func_8026E138(void *arg0){u16 *flags=(u16*)((u8*)arg0+2);s32 i;void *p=arg0;*flags &=0xEFFF;for(i=0;i<3;i++,p=(u8*)p+4){void*c=*(void**)((u8*)p+16);if(c&&(*(u16*)((u8*)c+2)&0x1000))func_8026E138(c);}}
void *D_80203B70(void*,s32);extern u8 D_800CCA80[];
u8 func_8026D8F0(s32 id){void*p=D_80203B70(D_800CCA80,id);return p==0?0: *((u8*)p+0x59);}
u8 func_8026D8BC(s32 id){void*p=D_80203B70(D_800CCA80,id);return p==0?0: *((u8*)p+0x58);}
