extern s32 func_80295BE0(s32,s16); extern s32 func_80295C28(void*); extern s32 func_802964F0(void*,s16); extern s32 alSndpStop(void*); extern s32 func_80296428(void*,s32);
void func_802731AC(void *p) {
 s32 arr,idx,minus; s32 *base;
 arr=*(s32*)((char*)p+0xB0); idx=*(s32*)p; base=(s32*)(arr+0x7C);
 func_80295BE0(arr+0x84,*(s16*)((char*)base+idx*2+0x60));
 idx=*(s32*)p; *(s16*)((char*)base+idx*2+0x60)=-1;
 minus=-1; *(s16*)((char*)p+0x34)=0; *(s32*)((char*)p+0xC)=minus; *(s32*)((char*)p+8)=minus; *(s16*)((char*)p+0x36)=minus; *(s32*)((char*)p+0xB4)=minus;
}
void func_8027312C(void *arg0) {
 void *temp_a0; void *temp_s0; s32 v;
 temp_a0=*(void**)((char*)arg0+0xB0); *(s32*)((char*)arg0+0xA8)=1; *(s32*)((char*)arg0+0x4C)=0;
 temp_s0=(char*)temp_a0+0x84;
 if (*(s32*)((char*)arg0+0x10)!=*(s32*)((char*)temp_a0+0x104)) {
   func_802964F0(temp_s0,*(s16*)((char*)temp_a0+*(s32*)arg0*2+0xDC));
   v=func_80295C28(temp_s0);
   if (v) alSndpStop(temp_s0);
   else v=-1;
   *(s32*)((char*)arg0+4)=v;
 }
}
s32 func_80273364(s32 arg0,s16 arg1) {
int __repair_literal;

 s32 temp_a0,temp_s1; void *temp_s0; void *temp_s0_2;
 temp_s0=(void*)(arg1*0xB8+arg0); temp_s0_2=(char*)temp_s0+4;
 temp_a0=*(s32*)((char*)temp_s0_2+0xB0); temp_s1=temp_a0+0x7C;
 func_80295BE0(temp_a0+0x84,*(s16*)(temp_s1+(*(s32*)temp_s0*2)+0x60));
__repair_literal = 2;

 *(s16*)(temp_s1+(*(s32*)temp_s0*__repair_literal)+0x60)=-1;
 *(s16*)((char*)temp_s0_2+0x34)=0; *(s32*)((char*)temp_s0_2+0xC)=-1; *(s32*)((char*)temp_s0_2+8)=-1;
 *(s16*)((char*)temp_s0_2+0x36)=-1; *(s32*)((char*)temp_s0_2+0xB4)=-1; return 0;
}
void func_80273074(void *p,s32 arg) {
 s32 arr,idx; s32 *buf;
 idx=*(s32*)p; arr=*(s32*)((char*)p+0xB0); buf=(s32*)(arr+0x84);
 func_802964F0(buf,*(s16*)(arr+idx*2+0xDC));
 func_80296428(buf,arg&0xFF);
}
