#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 D_8022D1F4(s32); s32 D_8022D220(void); s32 D_8022D248(void); s32 func_802A0938(u8 *,s32,u32); s32 func_80408DC4(s32); s32 func_80408EF4(s32); s32 func_80408F54(s32,s32 *,s32); s32 func_8040F778(void *,s32,s32,s32 *,void *,s32,s32 *); s32 func_804112D8(void *,s32,s32,s32,s32,u8 *); s32 func_804118C0(void *,s32,s32,s32 *,void *,s32 *);
extern s32 D_8010DE78; extern s8 D_8010DE8C; extern u8 D_8010DE90,D_8010DEA8,D_8010DF1A[];
s32 func_804080F8(s32 arg0, s32 arg1, s32 arg2, u32 arg3){
 u8 sp20[0x400];s32 sp420; s32 s0,s1=0,s2=0,s3,s4=arg0,s5=arg3,s6,s7,fp=arg2,status,a2=0,mask=0,i,bit,result=-6;u32 len=arg3,chunk,crc; s32 offset=0,aligned;u8 *p;
 s0=arg1;
 if(func_80408DC4(s0)==0){a2=D_8010DF1A[s0<<5]-26;goto body;}
 if(func_80408DC4(s0)!=-3)return -6;
 s3=1;
 i=s1<<16;
loop1:
 s0=(s16)(i>>16);
 status=func_80408DC4(s0);
 i=s1+1;
 if(status==0){bit=D_8010DF1A[s0<<5]-26;mask|=s3<<bit;i=s1+1;}
 s1=i;
 if((s16)i<16)goto loop1;
 a2=0;s1=a2;mask&=0xFFFF;i=s1<<16;
loop2:
 s0=(s16)(i>>16);bit=mask>>s0;
 if((bit&1)==0){a2=s0;goto body;}
 i=s1+1;s1=i;
 if((s16)i<16)goto loop2;
body:
 func_80408F54(s4,(s32 *)&D_8010DE90,a2);D_8022D1F4(1);D_8022D248();
 result=func_8040F778((char *)&D_8010DE90+24,0x3531,0x4E445450,(s32 *)&D_8010DE90,(char *)&D_8010DE90+17,len+((len+255)>>8),&sp420);
 if(result==9)result=func_804118C0((char *)&D_8010DE90+24,0x3531,0x4E445450,(s32 *)&D_8010DE90,(char *)&D_8010DE90+17,&sp420);
 if(result==0){s3=0;if(s5){s7=(s32)sp20;status=s5<0x400;do{
 s1=status?s5:0x3FF;s2=4;s0=1;s6=s7+s1;aligned=(s1+64)&-64;
loop3:
 if(!s0)goto endchunk;
 func_802A0938(sp20,fp,s1);p=sp20;crc=0x27;bit=0;
 if(s1)do{crc=(crc^*p)^bit;bit++;p++;}while(bit<s1);
 *(u8 *)s6=crc;
 s0=func_804112D8(&D_8010DEA8,sp420,1,s3,aligned,(u8 *)s7);
 s2--;if(s2>0)goto loop3;
endchunk:
 s3+=s1+1;s5-=s1;fp+=s1;
 if(s0!=0)break;status=s5<0x400;
 }while(s5);}
 *(s8 *)(&D_8010DE8C+D_8010DE78)=-3;}
 D_8022D220();return func_80408EF4(result);
}
