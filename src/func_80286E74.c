void *D_80236DF0(void*,s32,s32,s32); extern u8 D_800D6338; extern s32 D_800F5258,D_800F526C,D_800F5270; extern s32 D_800F4EE0[3]; extern f32 D_800AA63C,D_800AA640; s32 D_8021563C(void); s32 func_8028F18C(void*,s32,void*);
typedef struct{u8 p[0xd8];u16 x;} A;typedef struct{u8 p[0x74];void*x;} B;typedef struct{u8 p[0x198];f32 x;} C;
void func_80286FB4(void*a,B*b){void*p;D_800F5258=0;D_800F526C=1;D_800F5270=0;p=D_80236DF0(&D_800D6338,*(s32*)((u8*)a+4),*(s32*)((u8*)a+8),*(s32*)((u8*)a+12));if(p)b->x=p;D_800F4EE0[0]=*(s32*)((u8*)p+4);D_800F4EE0[1]=*(s32*)((u8*)p+8);D_800F4EE0[2]=*(s32*)((u8*)p+12);}
void func_802884B0(A*a,C*c){s32 r=D_8021563C();s32 q=r%30;c->x=(f32)q+D_800AA640+(f32)(a->x-0x65)*D_800AA63C;}
void func_80286E74(void*a,void*b){*(s32*)((u8*)b+0x68)=0;*(s32*)((u8*)b+0x6c)=0;*(s32*)((u8*)b+0x70)=0;}
void func_80286E58(void*a,s32 b,void*c){func_8028F18C(a,b,c);}
