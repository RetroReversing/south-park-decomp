f32 D_80215BE0(f32,f32); void *func_802705C4(void*,s16); s16 func_802750C8(void*); s16 func_802750D4(void*); s16 func_8027E358(f32); f32 func_8027E368(s32); extern f32 D_800A9F04,D_800A9F08,D_800A9F0C,D_800A9F10,D_800A9F14; extern f32 D_800B1F54;
void func_80270C68(void *arg0, void *arg1, u32 arg2) {
char *__repair_addr;

 f32 angle=0.0f, delta; s16 a; void *p;
__repair_addr = (char *)((u8*)arg0+0x58);

 *(f32*)(__repair_addr)=0.0f; *(f32*)((u8*)arg0+0x54)=0.0f;
 a=*(s16*)((u8*)arg1+0xA);
 if(a!=-1) { p=func_802705C4(*(void**)((u8*)arg0+0xB0),a); *(u32*)((u8*)arg0+0x5C)=*(u32*)p; *(u32*)((u8*)arg0+0x60)=*(u32*)((u8*)p+4); *(u32*)((u8*)arg0+0x64)=*(u32*)((u8*)p+8); }
 else *(s16*)((u8*)arg0+0x5C)=func_8027E358((f32)*(s16*)((u8*)arg1+0x10));
 a=func_802750C8(arg1); delta=(f32)a; a=func_802750D4(arg1); angle=(f32)a; angle=D_80215BE0(angle,delta); if(angle<0.0f) angle=delta-angle; else angle=delta+angle;
 *(s16*)((u8*)arg0+0x5C)=func_8027E358(func_8027E368(*(u16*)((u8*)arg0+0x5C))+(s16)(s32)angle);
 if(arg2&0x40) *(s16*)((u8*)arg0+0x5C)=func_8027E358(func_8027E368(*(u16*)((u8*)arg0+0x5C))+D_800A9F04);
 if(arg2&0x80) *(s16*)((u8*)arg0+0x5C)=func_8027E358(func_8027E368(*(u16*)((u8*)arg0+0x5C))-D_800A9F08);
 angle=func_8027E368(*(u16*)((u8*)arg0+0x5C)); if(D_800A9F0C<=angle) *(s16*)((u8*)arg0+0x5C)=func_8027E358(D_800A9F0C);
 if(*(u16*)((u8*)arg1+6)&2) { *(f32*)((u8*)arg0+0x24)=func_8027E368(*(u16*)((u8*)arg0+0x5C)); angle=func_8027E368(*(u16*)((u8*)arg0+0x60)); delta=func_8027E368(*(u16*)((u8*)arg0+0x62)); *(f32*)((u8*)arg0+0x6C)=(angle-delta)/(f32)*(s16*)((u8*)arg0+0x66); *(f32*)((u8*)arg0+0x68)=angle; }
 angle=(func_8027E368(*(u16*)((u8*)arg0+0x5C))+D_800A9F10)*D_800A9F14; a=(s16)(s32)angle; delta=(f32)a;
 if(delta!=angle) { f32 t=*(f32*)((u8*)&D_800B1F54+(s32)a*4); angle=t+(angle-delta)*(*(f32*)((u8*)&D_800B1F54+(s32)(a+1)*4)-t); } else angle=*(f32*)((u8*)&D_800B1F54+(s32)a*4);
 *(f32*)((u8*)arg0+0x24)=angle; *(s16*)((u8*)arg0+0x5C)=func_8027E358(angle);
}
