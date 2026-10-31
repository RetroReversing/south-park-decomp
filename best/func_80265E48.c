s32 func_8026798C(s32, u8, s16, s32, f32, f32, s32); extern f32 D_800A9BB4; extern s16 D_800B17D0[10]; extern u8 D_800CE370[]; extern u32 *D_800D7F68; extern u8 D_800F1518[];
void func_80265E48(s8 arg0,f32 arg1,f32 arg2,f32 arg3,f32 arg4,s32 arg5,s32 arg6,s32 arg7){
int __repair_literal;

 s32 n=0,i,q=arg0; f32 x,y;
__repair_literal = 0;

 if(q<__repair_literal)q=-q;
 while(q>=10){D_800F1518[n++]=q%10;q/=10;}
 D_800F1518[n++]=q; while(n<arg6)D_800F1518[n++]=0;
 if(arg7){
  u32 *p=D_800D7F68; p[0]=0xFA000000;p[1]=0xA0;p[2]=0xFB000000;p[3]=0xA0;D_800D7F68=p+4;
  x=arg1+D_800A9BB4;y=arg2+D_800A9BB4;
  if(arg5){for(i=0;i<n;i++){u8 d=D_800F1518[i];x-=(f32)D_800B17D0[d]*arg3;func_8026798C(4,d,(s16)x,(s16)y,arg3,arg4,0);}}
  else{for(i=n-1;i>=0;i--){u8 d=D_800F1518[i];func_8026798C(4,d,(s16)x,(s16)y,arg3,arg4,0);x+=(f32)D_800B17D0[d]*arg3;}}
 }
 x=arg1;{u32 *p=D_800D7F68;p[0]=0xFA000000;p[1]=(D_800CE370[3]<<24)|(D_800CE370[7]<<16)|(D_800CE370[11]<<8)|255;p[2]=0xFB000000;p[3]=p[1];D_800D7F68=p+4;}
 if(arg5){for(i=0;i<n;i++){u8 d=D_800F1518[i];x-=(f32)D_800B17D0[d]*arg3;func_8026798C(4,d,(s16)x,(s16)arg2,arg3,arg4,0);}}
 else{for(i=n-1;i>=0;i--){u8 d=D_800F1518[i];func_8026798C(4,d,(s16)x,(s16)arg2,arg3,arg4,0);x+=(f32)D_800B17D0[d]*arg3;}}
}
