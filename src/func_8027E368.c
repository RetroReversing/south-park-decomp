extern f32 D_800F4AC8; extern s32 D_414F28; extern void *D_800F4864;
f32 func_8027E358(f32 x){volatile f32 t=x; return *(volatile u16*)&t;}
f32 func_8027E368(s32 x){volatile s32 t=x<<16; return *(volatile f32*)&t;}
void func_8027EF04(void *p){s32 n=*(s16*)((u8*)p+8)-1; f32 f=(f32)n; *(f32*)p=f;*(s32*)((u8*)p+0x14)|=1;}
void func_8027D640(void){D_800F4864=&D_800F4AC8; func_8027D6A0((s32*)&D_414F28);}
