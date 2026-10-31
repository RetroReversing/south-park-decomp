extern void *D_800B3628; extern f32 D_800AAA7C; extern void *D_800B363C; s32 D_80210ADC(void*,s32); void *func_8028FE64(s32);
s32 func_8028EA88(s32 a0){ void *p=D_800B3628; s32 i,n,x; f32 sum=0.0f; volatile s32 keep;
if(*(s32*)((u8*)p+0x28)){x=*(s32*)((u8*)p+0x44);keep=x;}else{D_800B363C=(void*)a0;keep=0;}
p=D_800B3628;if(!*(s32*)((u8*)p+0x28)){sum=*(f32*)((u8*)p+0x38)*D_800AAA7C;for(i=0;;i++){p=D_800B3628;n=*(s32*)p;if(i>=n)return sum;x=D_80210ADC(*(void**)((u8*)p+4),0);x=D_80210ADC((void*)x,i);x=D_80210ADC((void*)x,0);x=*(s32*)((u8*)x+4);sum+=*(f32*)((u8*)func_8028FE64(x)-8);}}return keep;}
