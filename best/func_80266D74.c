extern s32 func_802665C4(void); extern void func_802668C4(s32,f32,f32);
extern f32 D_800A9C40,D_800F1510; extern u8 D_800CE370[]; extern s32 D_800CE37C[]; extern u32 *D_800D7F68; extern s32 D_800F14F0,D_800F1508;
void func_80266D74(s32 a0,s32 a1,s32 a2,s32 a3){f32 f;s32 x,y;u32*p,*q,*r;u8*c=D_800CE370;x=a1;y=a2;
if(D_800F1508){f=(f32)func_802665C4()*D_800F1510;if(D_800F1508==2)x-=(s32)f;else x-=(s32)(f*D_800A9C40);}
if(D_800F14F0){p=(u32*)D_800D7F68;q=p+2;D_800D7F68=(u32*)q;p[0]=0xE7000000;p[1]=0;q[0]=0xFA000000;p[2]=a3&255;D_800D7F68=p+4;p[4]=0xFB000000;q[1]=255;x+=D_800CE37C[0];y+=D_800CE37C[1];func_802668C4(a0,(f32)x,(f32)y);x-=D_800CE37C[0];y-=D_800CE37C[1];}
p=(u32*)D_800D7F68;q=p+2;r=q+2;D_800D7F68=(u32*)q;p[0]=0xE7000000;p[1]=0;q[0]=0xFA000000;D_800D7F68=r;q[2]=0xFB000000;q[1]=(c[3]<<24)|(c[7]<<16)|(c[11]<<8)|(a3&255);r[1]=(c[3]<<24)|(c[7]<<16)|(c[11]<<8)|255;func_802668C4(a0,(f32)x,(f32)y);}
