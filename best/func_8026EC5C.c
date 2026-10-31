extern s32 D_8021EF6C(void*,s32,s32,s32,void*,s32,s32); extern s32 alUnlink(void*); extern s32 alLink(void*,void*); extern s32 func_8029E4E0(s32);
extern s32 D_800B1E68,D_800B1E6C,D_800E6FC8,D_800F1568; extern s32 D_800F1CA0; extern void *D_800F1CBC; extern void *D_800F1CC0;
s32 func_8026EC5C(s32 arg0,s32 arg1){s32 s0,s2,s3,a0,v0,v1;void *s1;
 s2=arg0+D_800F1568;s1=D_800F1CBC;s0=0;a0=s2+arg1;
 if(!s1) goto allocate;
loop: v0=*(s32*)((char*)s1+8);v1=v0+0x300;if((u32)s2<(u32)v0)goto allocate;if(v1<a0){s0=(s32)s1;s1=*(void**)s1;if(s1)goto loop;goto allocate;}
 *(s32*)((char*)s1+0xc)=D_800B1E68;return func_8029E4E0(*(s32*)((char*)s1+0x10)+s2-*(s32*)((char*)s1+8));
allocate:s3=(s32)&D_800F1CC0;s1=*(void**)s3;v0=*(s32*)s1;*(s32*)s3=v0;alUnlink(s1);
 if(s0){alLink(s1,(void*)s0);s0=s2&1;goto setup;}
 s0=*(s32*)(s3-4);if(s0){*(void**)(s3-4)=s1;*(s32*)s1=s0;*(s32*)((char*)s1+4)=0;*(s32*)(s0+4)=(s32)s1;}else{*(void**)(s3-4)=s1;*(s32*)s1=0;*(s32*)((char*)s1+4)=0;}s0=s2&1;
setup:s2-=s0;*(s32*)((char*)s1+8)=s2;*(s32*)((char*)s1+0xc)=D_800B1E68;s3=*(s32*)((char*)s1+0x10);D_800B1E6C++;
 D_8021EF6C(&D_800E6FC8,s2,0x300,s3,&D_800F1CA0,0,1);return func_8029E4E0(s3)+s0;
}
