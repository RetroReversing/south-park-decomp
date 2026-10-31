extern char D_259020[]; extern void func_8029D588(void*,void*,s32); extern void func_8029DED0(s32,void*,s32); extern void osViSetEvent(void*,s32,s32); extern void func_8029D5B0(void*,s32,void*,void*,s32,s32); extern void func_8029DFF8(void*);
void func_80258DE4(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
 char *p=arg0;
 *(s16*)p=1;
 *(s32*)(p+0x2f4)=0; *(s32*)(p+0x2f8)=0; *(s32*)(p+0x2e0)=0; *(s32*)(p+0x2fc)=0; *(s32*)(p+0x2e4)=0; *(s32*)(p+0x2e8)=0; *(s32*)(p+0x2ec)=0; *(s32*)(p+0x2f0)=0; *(s32*)(p+0x300)=0; *(s16*)(p+0x20)=4;
 func_8029D588(p+0x40,p+0x58,8); func_8029D588(p+0x78,p+0x90,8);
 func_8029DED0(4,p+0x40,0x29b); func_8029DED0(9,p+0x40,0x29c); func_8029DED0(14,p+0x40,0x29d);
 osViSetEvent(p+0x40,0x29a,arg3);
 func_8029D5B0(p+0xb0,7,D_259020,p,arg1,arg2);
 func_8029DFF8(p+0xb0);
}
