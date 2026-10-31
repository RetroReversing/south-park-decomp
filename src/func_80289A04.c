extern f32 D_800AA7C4; extern s32 D_800CCA80;
s32 D_8021B7EC(void*,s32,void*); s32 D_80203F74(void*,void*,s32); s32 D_80247110(void*,void*); s32 D_802368C0(void*,void*);
void func_80289A04(void *arg0,void *arg1) {
 s32 v;
 *(s16*)((char*)arg1+4)=0; *(s8*)((char*)arg1+0x31)=-1;
 *(s32*)((char*)arg0+0xf4)|=0x01000000;
 v=**(s32**)((char*)arg0+0x14);
 if(v==1) goto call;
 if(v==12) goto call;
 if(v!=4) goto after;
 call: D_8021B7EC(arg0,1,arg0);
 after: D_80203F74(&D_800CCA80,arg0,1);
 if(*(s32*)((char*)arg1+0xf0)) D_80247110(arg0,arg1);
 if(*(void**)((char*)arg1+0x108) && **(u8**)((char*)arg1+0x108)==1) D_802368C0(arg0,arg1);
 *(f32*)((char*)arg0+0x1c)=D_800AA7C4;
}
