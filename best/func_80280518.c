u32 func_80280AA4(s32,s32);void func_80280154(void*);extern f32 D_800AA2B0;extern f64 D_800AA2B8;
#define F(p,o,t) (*(t*)((char*)(p)+(o)))
f32 func_80280518(void *arg0,f32 arg1){
int __repair_literal;
f32 scratch[64];f32 sp14,sp18,sp1c; s32 sp20; f32 *p; f32 delta; f64 val; s32 first,bytes,i;u32 temp,start,end; s32 count,index; u32 result;if(!(D_800AA2B0<=arg1))index=(s32)arg1;else index=(s32)(arg1-D_800AA2B0)|0x80000000;end=F(arg0,0x24,u32);first=(u32)index<end;
__repair_literal = 4;
count=F(arg0,0,s32)*__repair_literal+6;if(first||((u32)index>=(u32)(end+F(arg0,0x20,u32)))){i=F(arg0,0x28,s32);start=end;bytes=i*count;temp=F(arg0,0x20,u32);end=start+temp;first=F(arg0,0xc,s32);start=first+bytes;if(first){first=F(arg0,0xc,s32);i=0;start=0;end=func_80280AA4(first,6);}p=scratch+i;while(1){if((u32)index<start){first+=count;goto next;}if((u32)index>=end){first+=count;goto next;}if(i!=F(arg0,0x28,s32)){F(arg0,0x24,u32)=start;F(arg0,0x28,s32)=i;func_80280154(arg0);}break;next:p+=1;i++;start=end;result=func_80280AA4(first,6);*p=(f32)result;end+=result;}}temp=F(arg0,0x24,u32);val=(f64)temp;if((s32)temp<0)val=(f64)(s32)temp+D_800AA2B8;sp14=F(arg0,0x10,f32);sp18=F(arg0,0x18,f32);sp1c=F(arg0,0x1c,f32);sp20=F(arg0,0x20,s32);delta=arg1-(f32)val;return F(arg0,0x10,f32)+F(arg0,0x14,f32)*delta+sp18*delta*delta+sp1c*delta*delta*delta;}
