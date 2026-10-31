s32 func_8029BC60(s32,s32,u16,void*);s32 func_804123D4(void);
s32 func_804118C0(void *a,u16 b,s32 c,u8 *d,s32 *out,u8 *e){
char *__repair_addr;

u8 buf[0x18];s32 result,index,i,failed;
result=2;
if(func_804123D4()!=2){
index=0;
__repair_addr = (char *)((u8*)a+0x50);

if(*(s32*)(__repair_addr)>0){
do{
result=func_8029BC60(*(s32*)((u8*)a+4),*(s32*)((u8*)a+8),(u16)(*(u16*)((u8*)a+0x5e)+index),buf);
if(result!=0)goto done;
if(*(u16*)(buf+4)==b && *(s32*)buf==c){
failed=0;
if(d!=0){i=0;do{if(buf[0x10+i]!=d[i]){failed=1;break;}i++;}while(i<16);}
if(failed==0 && e!=0){i=0;do{if(buf[0xc+i]!=e[i]){failed=1;break;}i++;}while(i<4);}
if(failed==0){*out=index;goto done;}
}
index++;
}while(index<*(s32*)((u8*)a+0x50));
}
*out=-1;
result=5;
}
done:return result;
}
