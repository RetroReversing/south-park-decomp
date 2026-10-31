extern f32 D_800A96A8,D_800A96AC,D_800A96B0,D_800A96B4;
extern f32 func_8026D63C(s32,s32,s32);
void func_80257ABC(void *p,s32 a1,s32 a2,void *p3) {
char *__repair_addr;

 f32 f; u16 t;
 if (a1) goto run;
 if (!a2) return;
__repair_addr = (char *)((char*)p+0x40);

run:
 *(s32*)(__repair_addr)=(*(s32*)((char*)p+0x40)&0xFFFEFFFF)|0x20000;
 t=*(u16*)((char*)p+2);
 *(s32*)((char*)p+0x118)=0;
 if(t==0x6B) { *(s16*)((char*)p+0x124)=0x10; *(s8*)((char*)p+0x1A8)=-7; }
 else if(t==0x84C) {
   f=*(f32*)((char*)p+0x120)*D_800A96A8;
   *(f32*)((char*)p+0x158)=D_800A96AC;
   *(s8*)((char*)p+0x1A8)=-3;
   *(s16*)((char*)p+0x124)=(s16)(s32)f;
 } else {
   f=*(f32*)((char*)p+0x120)*D_800A96B0;
   *(s8*)((char*)p+0x1A8)=-7;
   *(s16*)((char*)p+0x124)=(s16)(s32)f;
 }
 *(s32*)((char*)p+0x150)=0; *(s32*)((char*)p+0x18)=0; *(s32*)((char*)p+0x1C)=0; *(s32*)((char*)p+0x20)=0;
 *(s32*)((char*)p+0x10)=*(s32*)((char*)p3+0x10);
 *(s32*)((char*)p+0x18C)&=0xFFDFFFFF;
 f=func_8026D63C(*(s32*)((char*)p+0x10),*(s32*)((char*)p+4),*(s32*)((char*)p+0xC));
 if(f<=*(f32*)((char*)p+8)) *(f32*)((char*)p+0x194)=D_800A96B4;
 else *(s32*)((char*)p+0x194)=0;
 if(a2) *(s16*)((char*)p+0x124)=1;
}
