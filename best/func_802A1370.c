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
extern s32 func_802A0938(void*,void*,s32); extern u64 func_802A5F88(s32,s32,s32,s32); extern u64 func_802A6578(s32,s32,s32,s32); extern u64 func_802A6AF0(s32,s32,s32,s32); extern u64 func_802A7078(s32,s32,s32,s32); extern u8 D_800B49E0[],D_800B49F4[];
void func_802A1370(void *arg0, s32 arg1) {
 u8 sp10[24]; s32 sp28,sp30; u32 sp2c,sp34; u8 *s7; s32 s6,s4,s2,s3,s1,s0,v0,v1;
 s7=D_800B49E0; v1=arg1&255; if(v1==0x58)s7=D_800B49F4;
 if(v1!=0x6f){s6=0x10;if(v1!=0x78){if(v1!=0x58){s6=10;s4=24;}else s4=24;}else s4=24;}else{s6=8;s4=24;}
 s2=*(s32*)((char*)arg0);s3=*(s32*)((char*)arg0+4);
 if((arg1&255)==0x64 || (arg1&255)==0x69){v0=s2|s3;if(*(s32*)arg0<0){s3=-s3;s2=-s2-(s3!=0);v0=s3|s2;}}else v0=s2|s3;
 if(v0 || *(s32*)((char*)arg0+0x24)){s4=23; sp10[23]=s7[(s32)func_802A7078(s2,s3,0,s6)];}
 v0=func_802A6AF0(s2,s3,0,s6); *(s32*)arg0=v0; *(s32*)((char*)arg0+4)=v0;
 while(*(s32*)arg0>0 || (*(s32*)arg0==0 && *(s32*)((char*)arg0+4)!=0)){
 if(s4<=0)break;
 s2=*(s32*)arg0;s3=*(s32*)((char*)arg0+4); sp28=func_802A5F88(s2,s3,0,s6);sp2c=sp28;sp30=func_802A6578(s2,s3,0,s6);sp34=sp30;*(s32*)arg0=sp28;*(s32*)((char*)arg0+4)=sp2c;s4--;sp10[s4]=s7[sp34];}
 v1=24-s4; *(s32*)((char*)arg0+0x14)=v1; func_802A0938(*(void**)((char*)arg0+8),sp10+s4,v1);
 v0=*(s32*)((char*)arg0+0x14);v1=*(s32*)((char*)arg0+0x24);if(v0<v1)*(s32*)((char*)arg0+0x10)=v1-v0;
 if(*(s32*)((char*)arg0+0x24)<0 && (*(s32*)((char*)arg0+0x30)&0x14)==0x10){s4=(*(s32*)((char*)arg0+0x28)-*(s32*)((char*)arg0+0xc))-*(s32*)((char*)arg0+0x10)-*(s32*)((char*)arg0+0x14);if(s4>0)*(s32*)((char*)arg0+0x10)=*(s32*)((char*)arg0+0x10)+s4;}
}
