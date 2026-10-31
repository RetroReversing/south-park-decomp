extern void func_8026E2AC(void *,s32,void *);
void func_8026E270(void *a0,s32 a1,void *a2){f32 t; if(a1){t=*(f32 *)a2;*(f32 *)((u8 *)a0+8)=t;*(f32 *)a0=t;t=*(f32 *)((u8 *)a2+8);*(f32 *)((u8 *)a0+12)=t;*(f32 *)((u8 *)a0+4)=t;a1--;a2=(u8 *)a2+12;func_8026E2AC(a0,a1,a2);}}
void func_8026E2AC(void *a0,s32 n,void *a2){s32 i;u8 *p=a2;for(i=0;i<n;i++,p+=12){f32 x,y;x=*(f32 *)p;y=*(f32 *)a0;if(x>y)x=y;*(f32 *)a0=x;x=*(f32 *)(p+8);y=*(f32 *)((u8 *)a0+4);if(x>y)x=y;*(f32 *)((u8 *)a0+4)=x;x=*(f32 *)p;y=*(f32 *)((u8 *)a0+8);if(y>x)x=y;*(f32 *)((u8 *)a0+8)=x;x=*(f32 *)(p+8);y=*(f32 *)((u8 *)a0+12);if(y>x)x=y;*(f32 *)((u8 *)a0+12)=x;}}
extern u8 D_800F1CB8[];extern u8 D_800F17F0[];extern u8 D_0026EC5C[];
void *func_8026E8D8(void **out){u8 *p=D_800F1CB8;if(!p[0]){*(void **)(p+8)=D_800F17F0;*(s32 *)(p+4)=0;p[0]=1;}*out=p;return D_0026EC5C;}
extern s32 D_800A9E08[3];
s32 func_8026D374(void *a0,f32 x,f32 y){s32 i=0; s32 *idx=(s32 *)D_800A9E08; f32 z=0; if(!a0)return 1;while(i<3){void *p=*(void **)((u8 *)a0+idx[i]*4+4);void *q=*(void **)((u8 *)a0+i*4+4);f32 qx=*(f32 *)q,qy=*(f32 *)((u8 *)q+8),px=*(f32 *)p,py=*(f32 *)((u8 *)p+8);if((py-qy)*(x-qx)+(qx-px)*(y-qy)<z)return 0;i++;}return 1;}
