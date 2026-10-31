extern u8 D_800BF0EC[]; extern u8 D_800BF100[]; extern s32 D_800BF0DC,D_800BF0E0,D_800BF0E4;
typedef struct {s32 a,b,c;} Gl;
s32 func_80404E58(void){Gl *p=(Gl*)&D_800BF0E0; s32 i,n,v;
if(p->a!=p->b){p->b=0;i=16;v=p->a;if(v<i){do{n=i-1;v=D_800BF0EC[n];D_800BF0EC[(unsigned short)i]=v;i=n;v=p->a;}while(v<n);} n=p->b;v=D_800BF100[n];D_800BF0EC[p->a]=v;n=p->c+1;p->b=p->a+1;p->c=n;D_800BF0EC[n]=0;}return 0;}
