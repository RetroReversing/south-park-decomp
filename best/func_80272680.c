s32 func_8027091C(void *arg0, s32 arg1) {
 s32 i;
 if (arg1 == -1) return -1;
 arg0 = (u8 *)arg0 + 0x1B14;
 for (i=0; i<17; i++, arg0=(u8 *)arg0+0xB8) {
   if (*(s32 *)((u8 *)arg0+0xC)==arg1) return i;
 }
 return -1;
}
void func_80272338(Obj3D *obj, s32 a1, s32 a2) {
 s32 x = -1;
 void *p = (void *)a1;
 obj->owner = p;
 *(s32 *)obj = a2;
 obj->prev=x; obj->next=x; obj->unk36=x; obj->unk34=0;
 *(s32 *)((u8 *)obj+0x3C)=x;
 *(s32 *)((u8 *)obj+0x14)=0;
 *(s32 *)((u8 *)obj+0x54)=0;
 *(s32 *)((u8 *)obj+0x58)=0;
 *(s32 *)((u8 *)obj+0xA0)=0;
 *(s32 *)((u8 *)obj+0xA8)=0;
 obj->unkB4=x;
 obj->s_x=D_800A9F60; obj->s_y=D_800A9F60;
 *(s32 *)((u8 *)obj+0xAC)=*(s32 *)((u8 *)p+0x27AC);
}
extern s32 alSndpPlay(s32, s16);
void func_802724F0(void *arg0, s16 arg1) {
 s32 offset = arg1 * 0xB8;
 void *p=(u8 *)arg0+offset;
 alSndpPlay(*(s32 *)((u8 *)p+0xB4)+0x84, arg1);
 *(s32 *)((u8 *)p+0xA4) |= 8;
}
s32 func_80272680(void *arg0, s32 arg1) {
 s32 i=0;
 u8 *p=(u8 *)arg0+0xAC;
 do {
   if (*(s32 *)(p-0xA0)==-1) goto skip;
   if (*(s16 *)(*(s32 *)arg0+0x102)==i) goto skip;
   i++;
   if (*(s32 *)(p-4)!=arg1) goto test;
   if (*(s32 *)p==0) return 1;
test:
   if (i>=16) return 0;
   p+=0xB8;
   continue;
skip:
   i++;
   if (i>=16) return 0;
   p+=0xB8;
 } while(1);
}
