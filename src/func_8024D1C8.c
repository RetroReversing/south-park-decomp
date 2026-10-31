void func_8024D024(void*a,void*b){void*a2=a;s32*p;s32 f,x;p=*(s32**)((char*)a2+0x14);f=*(s32*)((char*)p+0x14);if(*(s8*)((char*)b+0xb3)!=0&&(f&4)){x=*(s32*)((char*)a2+0xf4);x&=0xffefffff;x&=0xffff7fff;*(s32*)((char*)a2+0xf4)=x;}}
void func_8024D180(void*a,void*b){void*a2=a;s32*p;s32 f,x;p=*(s32**)((char*)a2+0x14);f=*(s32*)((char*)p+0x14);if(*(s8*)((char*)b+0xb3)!=0&&(f&0x20)){x=*(s32*)((char*)a2+0xf4);x&=0xffefffff;x&=0xffff7fff;*(s32*)((char*)a2+0xf4)=x;}}
extern s32 D_8023E95C(s32,s32,s32),D_80203F74(void*,s32,s32),D_800CCA80;
void func_8024D1C8(s32 a,s32 b){D_8023E95C(a,b,1);D_80203F74(&D_800CCA80,a,1);}
extern s32 D_8023E95C(s32,s32,s32);
void func_8024D258(void*a,void*b,void*c){s32 flags,t,r;u16 n;flags=*(s32*)(*(u32*)((char*)a+0x14)+0x14);if((flags&1)||(((*(u32*)((char*)c+0xc)>>21)^1)&1)==0){if((flags&2)||!(*(u32*)((char*)c+0xc)&0x200000)){n=*(u16*)((char*)b+4);t=(s32)n-*(s32*)((char*)c+4);if(t<0)r=0;else r=n-*(u16*)((char*)c+6);*(u16*)((char*)b+4)=r;if((u16)r==0){r=1;if(flags&0x40)r=2;D_8023E95C(r,0,0);}}}}
