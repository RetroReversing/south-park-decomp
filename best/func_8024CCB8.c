typedef struct { u8 pad[4]; s32 f4; s32 f8; s32 fc; } Arg; extern s32 D_800CCA80; extern s32 D_80203E9C(s32 *,u16,u16,s32); extern void D_80203F74(s32 *,void*,s32); extern void func_80263BAC(void*,s32,s32,s32,s32,s32,s32);
void func_8024CC58(void *arg0) { volatile s32 dummy[2]; D_80203E9C(&D_800CCA80,*(u16*)((u8*)arg0+10),*(u16*)((u8*)arg0+4),0); }
void func_8024CCB8(Arg *p) { volatile s32 z=0; func_80263BAC(p,p,6,p->f4,p->f8,p->fc,z); D_80203F74(&D_800CCA80,p,1); }
void func_8024CD20(Arg *p) { volatile s32 z=0; func_80263BAC(p,p,7,p->f4,p->f8,p->fc,z); D_80203F74(&D_800CCA80,p,0); }
typedef struct {u8 x[0x3c];f32 a;u8 y[0x20];f32 b;} F;
void func_8024CD88(void *x, F *p, f32 a) { f32 z=0.0f; if(a==z || p->b<a){ if(p->b==z) p->a=z; p->b=a; } }
