typedef struct {u8 pad[4];s32 f4,f8,fc;} Arg; typedef struct {u8 pad[0x3c];f32 f3c;u8 x[0x20];f32 f60;} F; extern s32 D_800CCA80; extern void D_80203F74(void*,void*,s32); extern void func_80263BAC(void*,void*,s32,s32,s32,s32,s32);
void func_8024CCB8(Arg*p){ s32 z=0; func_80263BAC(p,p,6,p->f4,p->f8,p->fc,z); D_80203F74(&D_800CCA80,p,1);}
void func_8024CD20(Arg*p){ s32 z=0; func_80263BAC(p,p,7,p->f4,p->f8,p->fc,z); D_80203F74(&D_800CCA80,p,0);}
void func_8024CD88(void*x,F*p,f32 a){if(a==0.0f || p->f60<a){if(p->f60==0.0f)p->f3c=0.0f;p->f60=a;}}
s32 func_8024CED4(void *p){s32 v; v=*(s32*)(*(u8**)((u8*)p+0x14)+0x24); if(v!=0)return v; return 0x5334;}
