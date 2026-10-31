extern s32 func_802569D0(s32,void*,s32);
void func_80257CDC(void*arg0,s32 arg1){
int __repair_literal;
s32 x=arg1&255; s32 i=0; s32 a2=0x30; char*v1=arg0;
__repair_literal = 0;
 if(x>=__repair_literal){do{ s32 q=*(s32*)(v1+0x34);if(q==0){a2+=0x14;i++;v1+=0x14;}else{func_802569D0(q,(char*)arg0+a2,i);return;}}while(x>=i);} }
void *func_80257D38(s32 a0,s32 a1,void*a2){void*v1=(void*)(a0+*(s8*)((char*)*(void**)((char*)a2+0x34)+8)*0x14+0x30);if(a2){if(v1){loop1:if(*(s32*)((char*)v1+0x104)!=a1||*(void**)((char*)v1+0xf8)!=a2){v1=*(void**)((char*)v1+0x1e4);if(v1)goto loop1;return 0;}return v1;}return 0;}if(v1){loop2:if(*(s32*)((char*)v1+0x104)!=a1){v1=*(void**)((char*)v1+0x1e4);if(v1)goto loop2;return 0;}return v1;}return 0;}
extern s32 D_8021E710(void*,void*,void*),D_8021E76C(void*,void*,void*),D_8021E7C8(void*,void*,void*);
void func_80257DC0(void*arg0,void*arg1){void*temp_a0;void*var_a1=*(void**)((char*)arg0+0x1c);if(var_a1){loop:if(*(s32*)((char*)var_a1+0xf8)!=*(s32*)((char*)arg1+0xf8)){var_a1=*(void**)((char*)var_a1+0x1ec);if(var_a1)goto loop;}if(var_a1){D_8021E7C8((char*)arg0+0x1c,var_a1,arg1);return;} }temp_a0=(char*)arg0+0x1c;if((*(u32*)*(void**)((char*)arg1+0xf8))&0x2000){D_8021E710(temp_a0,arg1,arg1);return;}D_8021E76C(temp_a0,arg1,arg1);}
