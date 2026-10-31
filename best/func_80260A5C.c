extern f32 D_800A9A98, D_800A9A9C, D_800A9AA0, D_800A9AA4, D_800A9AA8, D_800A9AAC, D_800A9AB0;
extern f32 D_80299AE8(f32, s32);
extern void D_802131F8(f32 *, void *, f32);
void func_80260A5C(void *arg0, void *arg1, s16 *arg2, f32 arg3, void *arg4) {
char *__repair_addr;

 f32 v0[4],v1[4]; f32 f0,f0f,f1,f1f,f2,f2f,f3,f3f,f4,f4f;
 s16 *dst; u8 *base,*fmt,*rec,*col; s32 i,n,flag; void *src,*ref;
 f4f=arg3; f1f=0.0f; f2f=0.0f; dst=arg2;
 if(arg4){fmt=*(u8**)((u8*)arg4+8);base=*(u8**)((u8*)arg0+8);f2=(f32)(1<<(fmt[2]+5))*base[0x1d];f4=(f32)(1<<(fmt[3]+5));}
 base=*(u8**)((u8*)arg0+8);
__repair_addr = (char *)((u8*)arg1+8);

 f1=*(f32*)(__repair_addr)/(*(f32*)(base+8))*D_800A9A9C;
 f0f=D_800A9AA0;
 f0=f0f-D_80299AE8(f1,(s32)(arg4!=0))*f0f;
 if(*(f32*)((u8*)arg0+0x24)<=*(f32*)(base+4)){
  f1=*(f32*)((u8*)arg0+0x24)/(*(f32*)(base+4))*D_800A9A9C;
  f0*=f0f-D_80299AE8(f1,0)*f0f;
 }
 f3f=base[0x21]*D_800A9AA4; col=base+0x24; n=base[0x23]; rec=base+0x2b; f0=D_800A9AA8-f0;
 f3=D_800A9AA8/((f32)n-D_800A9AA8); f2f=(f32)base[0x22]*D_800A9AA4; n--;
 if(n!=-1){dst=(s16*)((u8*)dst+0xF);do{
  src=*(void**)((u8*)arg0+0xC)+( *(u16*)(rec+1)*20);
  if(*(s32*)((u8*)arg0+0x3c)&2) ref=*(void**)((u8*)arg0+0x10)+(*(u16*)(rec+3)*20);
  else ref=*(void**)((u8*)arg0+0xC)+(*(u16*)(rec+3)*20);
  D_802131F8(v0,src,f3f); D_802131F8(v1,ref,f2f);
  dst[-15]=(s16)(s32)((v0[0]+f0*(v1[0]-v0[0]))*D_800A9AAC);
  dst[-13]=(s16)(s32)((v0[1]+f0*(v1[1]-v0[1]))*D_800A9AAC);
  dst[-11]=(s16)(s32)((v0[2]+f0*(v1[2]-v0[2]))*D_800A9AAC);
  if(arg4){dst[-7]=(s16)(s32)(f2*arg3);dst[-5]=(s16)(s32)(f4*f1f);}
  for(i=0;i<4;i++){u8 a=rec[(i==0)?0:(i==1)?2:(i==2)?1:0], b=col[(i==0)?4:(i==1)?2:(i==2)?1:0];f1=(f32)a+f0*(f32)((s32)b-a);flag=(s32)f1;if(f1>=D_800A9AB0)flag=(s32)(f1-D_800A9AB0)|0x80000000;((u8*)dst)[-3+i]=flag;}
  rec+=12;col+=12;dst+=8;arg2+=8;f1f+=f3;n--;
 }while(n!=-1);}
}
