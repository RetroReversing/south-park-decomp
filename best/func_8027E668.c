extern s32 func_8028087C(void*); extern void *D_80210ADC(void*,s32); extern void func_8027F0D0(void*,s32,f32,void*); extern f32 D_800AA214,D_800AA218,D_800AA248,D_800AA24C,D_800ABA00; extern f64 D_800AA220,D_800AA228,D_800AA230,D_800AA238,D_800AA240; extern f32 D_8021504C(f32,f32,f32); extern void D_80217AC4(void*,void*,f32,f32); extern void D_80213190(void*,void*,void*); extern void D_802131C4(void*,void*,void*); extern f32 D_802150FC(f32,f32);
void func_8027E668(void *obj, void *out, f32 *acc, void *target) {
char *__repair_addr;

 s32 i,index,next,n,sample; f32 t,v0,v1,rate; void *table,*node; f32 tmp[4],vec[3],tmp2[4]; s32 count;
 func_8028087C(obj); ((f32*)out)[0]=0;((f32*)out)[1]=0;((f32*)out)[2]=0;*acc=0;
__repair_addr = (char *)((u8*)obj+0x14);

 if(*(s32*)(__repair_addr)&1) *(f32*)obj=(f32)(*(s16*)((u8*)obj+8)-1);
 table=D_80210ADC((void*)func_8028087C(obj),3);node=D_80210ADC(table,0);
 func_8027F0D0(obj,0,*(f32*)obj,tmp);t=*(f32*)obj;
 node=D_80210ADC((void*)func_8028087C(obj),0);count=*(s16*)((u8*)obj+8)-1;
 index=(s32)t;next=index+1;if(next<count)count=next;
 v0=(f32)*(s16*)((u8*)node+8+index*2)*D_800AA214;v1=(f32)*(s16*)((u8*)node+8+count*2)*D_800AA214;
 rate=D_8021504C(*(f32*)obj,(f32)index,v1-v0);
 if(!(*(s32*)((u8*)obj+0x14)&1))*(f32*)obj += D_800ABA00*tmp[2]*D_800AA218;
 D_80217AC4(target,obj,*(f32*)obj,*(f32*)obj);
 if(*(f32*)obj<(f32)(*(s16*)((u8*)obj+8)-1)){
  func_8027F0D0(obj,0,(f32)(*(s16*)((u8*)obj+8)-1),tmp2);
  node=D_80210ADC((void*)func_8028087C(obj),0);
  t=(f32)(*(s16*)((u8*)obj+8)-1);index=(s32)t;next=index+1;if(next<count)count=next;
  v0=(f32)*(s16*)((u8*)node+8+index*2)*D_800AA248;v1=(f32)*(s16*)((u8*)node+8+count*2)*D_800AA248;
  rate=D_8021504C(t,(f32)index,v1-v0);
  D_80213190(out,out,tmp2); D_802131C4(out,out,tmp);
  *acc += D_802150FC(rate,rate);
 }
 sample=(s16)*(u16*)((u8*)node+2);if(sample==-1)sample=0;
 v0=(f32)sample;if(sample<0)v0+=D_800AA220;
 t=*(f32*)obj;v1=v0+t; if(t<v1)*(f32*)obj=v1;
 if(t<v1){ D_80217AC4(target,obj,v1,*(f32*)obj); }
 if(sample<0)v0+=D_800AA230;
 D_80217AC4(obj,obj,v0,*(f32*)obj);
 func_8027F0D0(obj,0,v0,tmp);
 v0=(f32)sample;if(sample<0)v0+=D_800AA238;
 node=D_80210ADC((void*)func_8028087C(obj),0);
 index=(s32)v0;next=index+1;if(next<count)count=next;
 rate=D_8021504C(v0,(f32)index,(f32)*(s16*)((u8*)node+8+count*2)*D_800AA248);
 *(s16*)((u8*)obj+0xA)=1;
 D_80213190(out,out,tmp2);D_802131C4(out,out,tmp);*acc+=D_802150FC(rate,D_800AA24C);
}
