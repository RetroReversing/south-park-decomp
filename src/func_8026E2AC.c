void func_8026E2AC(f32 *a0,s32 n,f32 *a2){s32 i=0; f32 v,t;if(n<=0)return;do{
v=a2[i*3];t=a0[0];if(!(v<=t))v=t;a0[0]=v;
v=a2[i*3+2];t=a0[1];if(!(v<=t))v=t;a0[1]=v;
v=a2[i*3];t=a0[2];if(!(t<=v))v=t;a0[2]=v;
v=a2[i*3+2];t=a0[3];if(!(t<=v))v=t;a0[3]=v;
i++;}while(i<n);}
