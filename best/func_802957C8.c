s32 func_802954A0(void*,s16*);
void func_802957C8(void *a,void *b,u32 c){s16 t;u16 save; s32 s3,s7;u16 s2;u32 fp;u32 s1;
if(!c){*(s16*)((u8*)b+0xc)=0;*(u32*)((u8*)b+4)=0;*(u32*)((u8*)b+8)=0;*(u32*)b=*(u32*)((u8*)a+4);return;}
s7=*(s32*)((u8*)a+8);save=*(u16*)((u8*)a+0x1a);fp=*(u32*)((u8*)a+0xc);*(u16*)((u8*)a+0x1a)=0;*(u32*)((u8*)a+0xc)=0;*(u32*)((u8*)a+8)=*(u32*)((u8*)a+4);
do{s3=*(s32*)((u8*)a+8);s2=*(u16*)((u8*)a+0x1a);s1=*(u32*)((u8*)a+0xc);func_802954A0(a,&t);if(t==4){s2=*(u16*)((u8*)a+0x1a);s1=*(u32*)((u8*)a+0xc);*(u32*)b=*(u32*)((u8*)a+8);}else if(*(u32*)((u8*)a+0xc)<c)continue;else *(u32*)b=s3;*(u16*)((u8*)b+0xc)=s2;*(u32*)((u8*)b+4)=s1;*(u32*)((u8*)b+8)=*(u32*)((u8*)a+0xc);*(u32*)((u8*)a+8)=s7;*(u16*)((u8*)a+0x1a)=save;*(u32*)((u8*)a+0xc)=fp;break;}while(1);}
