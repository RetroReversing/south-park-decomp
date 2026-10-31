extern f32 D_800AA6A0,D_800AA6A4,D_800AA6A8;
extern f32 D_80215964(f32,f32,f32);
extern void D_80241EEC(void *,s32,s32);
extern void D_80241A44(void *,void *,void *);
extern void D_80241C54(void *,void *,u32,u32);
extern void D_8023E95C(void *,void *,s32);
void func_80288B78(void *arg0,void *arg1) {
 unsigned char sp[0xC8]; void *s2=*(void **)((char *)arg0+20)+0x14;
 f32 fs0,fv0; s32 one=1;
 D_80241EEC(sp+8,one,one);
 D_80241A44(arg0,arg1,sp+0x78);
 fs0=D_800AA6A0;
 *(f32 *)((char *)arg1+0xA8)=D_80215964(*(f32 *)((char *)arg1+0xA8),D_800AA6A4,fs0);
 fv0=D_80215964(*(f32 *)((char *)arg1+0x160),D_800AA6A8,fs0);
 *(u32 *)((char *)arg1+0x160)=*(u32 *)&fv0;
 D_80241C54(arg0,arg1,*(u32 *)&fv0,*(u32 *)(sp+0x64));
 if(*(s32 *)(sp+0x60)!=0 && *(s32 *)(sp+0x5c)==0 && *(f32 *)(sp+0x80)<*(f32 *)((char *)s2+0x20))
 D_8023E95C(arg0,arg1,17);
}
