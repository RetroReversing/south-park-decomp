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
extern void *D_800F4AC8;
extern void D_802417F0(void *,void *,s32,s32,s32,s32);
extern s32 D_802485E8(void *,void *,void *);
extern void D_8023E95C(void *,void *,s32);
extern void D_8023C1BC(void *,s32);
extern void D_8024220C(void *,void *,void *);
void func_80289F9C(void *arg0, void *arg1) {
 s32 var_s3,var_s5,var_v1; u16 temp_s6,temp_v1,var_v0,temp_a0_2; void *temp_s4,*temp_a0,*temp_a1,*temp_s0,*temp_v0,*var_s2; u32 sp18[6],sp30[8];
 if(*(u16*)((char*)arg1+4)==0)return;
 temp_s4=D_800F4AC8;
 if(temp_s4==0)return;
 temp_a0=*(void**)((char*)arg0+0x1CC);
 if(temp_s4==temp_a0)return;
 if(*(void**)((char*)temp_s4+0x1CC)==temp_a0)return;
 temp_v0=temp_s4;
 if(*(u8*)temp_v0!=1)return;
 if(*(u16*)((char*)arg0+0xD8)==0x1C84)return;
 temp_v0=*(void**)((char*)temp_a0+0x1CC);
 if(temp_v0==0)goto last;
 var_s3=5; var_s5=0; var_s2=temp_v0;
 do {
  if(var_s3<=0)goto last;
  temp_a1=*(void**)((char*)var_s2+0x15AC);
  if(temp_a1==0)goto advance;
  temp_s0=(char*)temp_a1+0x168;
  temp_s6=*(u16*)((char*)temp_s0+4);
  D_802417F0(sp30,temp_a1,var_s3,0,0x80000,0);
  if(temp_s4==0)*(void**)((char*)temp_s0+0x108)=temp_a1;
  else *(void**)((char*)temp_s0+0x108)=temp_s4;
  temp_a0_2=*(u16*)((char*)temp_s0+4);
  var_v0=temp_a0_2-*(u16*)((char*)sp30+4);
  if((s16)var_v0<0)var_v0=0;
  else var_v0=temp_a0_2-*(u16*)((char*)sp30+6);
  *(u16*)((char*)temp_s0+4)=var_v0;
  var_v1=0;
  if((var_v0&0xffff)==0)var_v1=temp_a0_2>0;
  if(var_v1){s32 t=D_802485E8(temp_a1,temp_s0,sp30);D_8023E95C(temp_a1,temp_s0,t);}
  temp_v1=*(u16*)((char*)temp_s0+4);
  var_s3-=temp_s6-temp_v1;
  if(temp_v1==0&&*(s32*)((char*)temp_s0+0x64)){*(void**)((char*)var_s2+0x15AC)=0;*(s32*)((char*)temp_s0+0x64)=0;}
 advance:
  var_s5++;var_s2=(char*)var_s2+4;
 }while(var_s5<=0);
 last:
 if(*(void**)((char*)arg0+0x1CC)){
  D_802417F0(sp18,*(void**)((char*)arg0+0x1CC),5,0x41CCCCCC,0x80000,0);
  *(void**)((char*)temp_s4+0x270)=arg0;
  temp_a0=*(void**)((char*)arg0+0x1CC);
  if(temp_a0)D_8023C1BC(temp_a0,0x4B0);else temp_a0=temp_s4;
  D_8024220C(temp_s4,(char*)temp_a0+0x168,sp18);
 }
}
