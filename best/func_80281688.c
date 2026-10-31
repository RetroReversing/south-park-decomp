typedef struct {s32 a0,a4,a8;f32 c;s32 d10,d14;} S816;
extern void *D_80210ADC(void *,s32); extern s32 func_8027F6FC(void *,void *,s32,s32,s32,s32,s32);
extern f32 D_800AA2F0[2],D_800AA2F8[2],D_800F4E10,D_800F4E1C,D_800F4E20;extern s32 D_800F4E14,D_800F4E18;
s32 func_80281688(void *a,void *b){S816 *p;void *x,*y,*z,*w;s32 q;
p=D_80210ADC(0,0);x=D_80210ADC(a,1);y=D_80210ADC(a,2);z=D_80210ADC(b,1);w=D_80210ADC(b,2);
D_800F4E18=1;D_800F4E14=0;D_800F4E1C=D_800AA2F0[0];D_800F4E20=D_800AA2F0[1];D_800F4E10=p->c;
q=func_8027F6FC(x,z,p->d14,3,p->a4,0,p->a8);if(q==0)return 0;
D_800F4E18=0;D_800F4E14=1;D_800F4E1C=D_800AA2F8[0];D_800F4E20=D_800AA2F8[1];D_800F4E10=p->c;
q=func_8027F6FC(y,w,p->d10,4,p->a4,p->a0,p->a8);return q!=0;}
