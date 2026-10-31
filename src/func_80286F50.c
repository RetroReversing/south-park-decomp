void D_8023E95C(void *, void *, s32); extern s32 D_800F5258,D_800F526C,D_800F5270; extern u8 D_800D6338; extern s32 D_800F4EE0[3]; void *D_80236DF0(void *,s32,s32,s32);
extern f32 D_800AA5C8,D_800AA5CC,D_800AA5D0,D_800AA5D4,D_800AA5D8,D_800AA5DC; f32 D_80215BE0(f32,f32);
s32 D_8021563C(void); extern f32 D_800AA63C,D_800AA640;
typedef struct {u8 pad[0x1ac];s32 f;} T1; typedef struct {u8 pad[0x74];void*p;} T2; typedef struct {u8 pad[0xd8];u16 id;} T3;
typedef struct {u8 pad[0x68];f32 x68,x6c,x70;u8 p[0x34];f32 xa8;u8 q[0xb4];f32 x160;} T4; typedef struct {u8 pad[0x198];f32 x;} T5;
void func_80286F50(void*a0,T1*a1){if(*(s8*)((u8*)a1+0xb3)){if(*(u16*)((u8*)a0+0xd8)==0x3f9&&(*(s32*)((u8*)a1+0x188)&4)){D_8023E95C(a0,a1,0x33);a1->f=4;}else D_8023E95C(a0,a1,4);}}
void func_80286FB4(void*a0,T2*a1){void*p; s32 x=*(s32*)((u8*)a0+4),y=*(s32*)((u8*)a0+8),z=*(s32*)((u8*)a0+12); D_800F5258=0;D_800F526C=1;D_800F5270=0;p=D_80236DF0(&D_800D6338,x,y,z);if(p)a1->p=p;D_800F4EE0[0]=*(s32*)((u8*)p+4);D_800F4EE0[1]=*(s32*)((u8*)p+8);D_800F4EE0[2]=*(s32*)((u8*)p+12);}
void func_80287A54(void*a0,T4*a1){f32 x=D_800AA5C8; f32 y; y=D_800AA5CC; a1->x68=D_80215BE0(x,y);a1->x6c=D_80215BE0(x,y);a1->x70=D_80215BE0(x,y);*(s32*)((u8*)a1+0x40)=0;a1->xa8=D_80215BE0(D_800AA5D0,D_800AA5D4);a1->x160=D_80215BE0(D_800AA5D8,D_800AA5DC);}
void func_802884B0(T3*a0,T5*a1){s32 r=D_8021563C();s32 q=(s32)(((s64)r*0x88888889LL)>>35);q-=r>>31; a1->x=(f32)(r-q*30)+D_800AA640+(f32)((s32)a0->id-0x65)*D_800AA63C;}
