extern s32 D_80215684(void); extern f32 D_800A9F50[2],D_800A9F58[2]; extern s8 D_800F1F1E;
s32 func_80270384(void *); s32 func_802703E8(void *);
s16 func_80271DF0(void **,s16,s16,s16,s32);
s16 func_80275040(void *);s8 func_80275058(void *);s8 func_80275064(void *);s8 func_80275088(void *);s16 func_802750BC(void *);
s16 func_80295B28(void *,s32,void *);s32 func_802964C8(void *,s16,s32);
void *func_80271F8C(void **arg0,void *arg1,s32 arg2,s32 arg3){
char *__repair_addr;

 void *sp18,*temp_a0,*temp_s1,*temp_s7,*temp_s0_2,*temp_s0_3,*temp_v0_2,*temp_v1_2;u16 sp26;s16 temp_s6,temp_v0,temp_v0_3,*temp_a0_2;f32 temp_fv0; s32 temp_s0,temp_v0_4,temp_v1,var_v0,var_v1;void *temp_a2;
 temp_s6=func_80275040(arg1);temp_a0=*arg0;sp26=(u16)func_80275058(arg1);sp18=temp_a0+0xDC;
__repair_addr = (char *)(*(u8 **)(*(u8 **)(temp_a0+0x7C)+0xC)+0xE);

 if(*(s16 *)(__repair_addr)<temp_s6)return 0;
 func_80270384(temp_a0);
 if(func_80275064(arg1)==0x64 || (temp_s0=D_80215684()%100,temp_s0<func_80275064(arg1))!=0){
 temp_v0=func_80271DF0(arg0,(s16)arg2,temp_s6,(s16)sp26,func_802750BC(arg1));
 if(temp_v0!=-1){temp_s1=(u8 *)arg0+(temp_v0*0xB8)+4;
 if(temp_v0==0x10){*(s32 *)(temp_s1+4)=arg3;temp_v0_2=*arg0;temp_v1=*(s32 *)(temp_v0_2+0x108);*(s32 *)(temp_s1+0xC)=temp_v1;*(s32 *)(temp_v0_2+0x108)=temp_v1+1;*(s32 *)(temp_s1+8)=0x63;goto block14;}
 (*arg0);temp_a2=*arg0;*(s16 *)(temp_a2+0x102)=temp_v0;temp_s7=(u8 *)temp_a2+0x84;temp_s0_2=(u8 *)temp_a2+0x7C;
 temp_v0_3=func_80295B28(temp_s7,*(s32 *)(*(u8 **)(*(u8 **)(temp_a2+0x7C)+0xC)+0x10+temp_s6*4),temp_a2);temp_a0_2=(s16 *)((u8 *)sp18+temp_v0*2);*temp_a0_2=temp_v0_3;
 if(temp_v0_3==-1){*(s32 *)(temp_s1+0xC)=temp_v0_3;*(s32 *)(temp_s1+8)=temp_v0_3;*(s16 *)(temp_s1+0x34)=0;(*(s16 **)arg0)[0x81]=temp_v0_3;goto block9;}
 *(u16 *)(temp_s0_2+0x80)=*(u16 *)(temp_s0_2+0x80)+1;
 temp_fv0=(f32)(s16)sp26*D_800A9F50[1];*(s32 *)(temp_s1+4)=arg3;temp_v1_2=*arg0;temp_v0_4=*(s32 *)(temp_v1_2+0x108);*(s32 *)(temp_s1+0xC)=temp_v0_4;*(s32 *)(temp_v1_2+0x108)=temp_v0_4+1;*(s32 *)(temp_s1+8)=*temp_a0_2;*(s32 *)(temp_s1+0x9C)=*(s16 *)((u8 *)arg1+2);
 if(!(D_800A9F58[0]<=temp_fv0)){var_v1=(s32)temp_fv0;var_v0=temp_v0<<16;}else{var_v1=(s32)(temp_fv0-D_800A9F58[0])|0x80000000;var_v0=temp_v0<<16;}
 D_800F1F1E=(s8)var_v1;func_802964C8(temp_s7,*(s16 *)((u8 *)sp18+(var_v0>>15)),var_v1&255);
block14:
 *(s32 *)(temp_s1+0xA8)=0;*(s32 *)(temp_s1+0xA4)=*(s16 *)((u8 *)*arg0+0x2790);*(s32 *)(temp_s1+0xAC)=*(s32 *)((u8 *)*arg0+0x27AC);temp_s0_3=(u8 *)temp_s1+0x10;*(s32 *)(temp_s1+0xB4)=*(s32 *)((u8 *)*arg0+0x2794);*(u16 *)(temp_s0_3+0x24)=sp26;*(s32 *)(temp_s0_3+0xC)=0x7D00;*(s32 *)(temp_s0_3+8)=0x7D00;*(s32 *)(temp_s0_3+0x14)=0;*(s16 *)(temp_s0_3+0x18)=0x40;*(s16 *)(temp_s0_3+0x26)=temp_s6;*(u16 *)(temp_s0_3+0x28)=arg2;*(s16 *)(temp_s0_3+0x10)=(s16)(s8)*((s8 *)arg1+0xE);*(s32 *)(temp_s1+0x10)=*(s32 *)((u8 *)*arg0+0x104);*(f32 *)(temp_s0_3+0x20)=D_800A9F58[1];*(u8 *)(temp_s0_3+0x40)=func_80275088(arg1);*(s32 *)(temp_s1+0xA0)=func_802750BC(arg1);*(s32 *)(temp_s0_3+0x3C)=0;func_802703E8(*arg0);return temp_s1;
 }}
block9:func_802703E8(*arg0);return 0;
}
