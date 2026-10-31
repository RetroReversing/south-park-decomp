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
s32 func_8040FCE8();
s32 func_8040FB1C(void *arg0, u16 *arg1, s32 arg2, s32 *arg3, s32 arg4, s32 *arg5, s32 *arg6, u8 arg7, s32 arg8) {
int __repair_literal;
u8 sp10[0x18]; s32 result=0,index=1,count,base,i; s32 byteArg=arg4&0xff; u16 *p;
if(byteArg==0)index=*(s32*)((u8*)arg0+0x60);
if(index<0x80){p=arg1+index;while(*p!=3&&index<0x80){index++;p++;}}
if(index==0x80){*arg3=-1;return 0;}
for(i=0;i<32;i++)sp10[i]=0;
*arg5=1;count=index;i=count+1;base=count;__repair_literal=1;
if(arg2>__repair_literal){p=arg1+i;do{if(i>=128)break;if(*p==3){((u8*)arg1)[count*2]=byteArg;((u8*)arg1)[count*2+1]=i;result=func_8040FCE8(arg0,count,sp10,byteArg);if(result)return result;count=i;++*arg5;}else{p++;i++;continue;}p++;i++;}while(*arg5<arg2);}
*arg3=base;if(i==128&&*arg5<arg2){*arg6=count;return result;}((u16*)arg1)[count]=1;result=func_8040FCE8(arg0,count,sp10,byteArg);*arg6=0;return result;
}
