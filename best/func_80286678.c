#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern f32 D_800AA4D8,D_800AA4EC,D_800AA4F0,D_800AA4F4,D_800AA4F8; extern f32 D_800F4EC8[],D_800F4ED8,D_800F4EEC,D_800F4EE0[],D_800F4EE8; extern s32 D_800F5258,D_800F5270; extern f32 D_800F5274; extern s32 D_800F5268[]; extern void *D_800D6338; extern s32 D_80236DF0(void*,s32,s32,s32); extern void *D_8021FCD8(s32,s32,s32,s32,s32,s32,s32); extern void *D_80210ADC(s32,s32); extern f32 D_802281F4(void*); extern f32 D_80242004(void*,f32,f32); extern s32 D_8024249C(s32,s32,s32,s32); extern s32 D_80221864(s32,void*); extern f32 D_80215964(f32,f32,f32);
s32 func_80286678(void *arg0, f32 arg1, f32 arg2, s32 *arg3){u8*p=arg0;f32 delta=0.0f; s32 result=0;u8*state=p+0x168;s32*seq=arg3;void*anim;s32 i;f32 oldv;
if(!*(s32*)(state+0x74)){anim=(void*)D_80236DF0(D_800D6338,*(s32*)(p+4),*(s32*)(p+8),*(s32*)(p+12));if(anim)*(void**)(state+0x74)=anim;}
anim=D_8021FCD8(0,*(s32*)(p+0xC4),*(s32*)(p+0xD0),0,(s32)&D_800AA4D8,1,0);
if(anim){void*v=D_80210ADC(*(s32*)anim,0);if(*((s8*)v+0x19)!=-1&&*((s8*)v+0x18)!=0){
if(*(u16*)(state+4)){f32 pos[3];pos[0]=*(f32*)(p+4);pos[1]=*(f32*)(p+8)+D_802281F4(p)*D_800AA4EC;pos[2]=*(f32*)(p+12);delta=D_80242004(p,D_800F4EE0[0],*(s32*)(state+0x74)?D_800F4EE0[1]+D_802281F4(*(void**)(state+0x74))*D_800AA4EC:D_800F4EE0[1]);}else delta=0.0f;
oldv=D_80215964(arg2,*(f32*)(state+0x20),delta);delta=oldv-delta;*(f32*)(state+0x20)=oldv;*(s32*)(state+0x24)=0;
if(delta<0){if(-delta<D_800AA4F4)result=1;else if(delta<D_800AA4F8)result=1;if(result)*(f32*)(state+0x20)=oldv;}else if(delta>D_800AA4F8)result=1;
if(D_800F5258==1&&D_800F5270<5){s32 n=D_800F5270;f32 a=D_800F5274,b=D_800F4EEC;s32 cond=b<a?*(f32*)(state+0x20)<=D_800F4EC8[n]:D_800F4EC8[n]<=*(f32*)(state+0x20);if(cond){*(f32*)(state+0x20)=D_800F4EC8[n];D_8024249C(D_800F5268[0],0x7DC,D_800F5268[1],D_800F5268[2]);D_800F5270++;}}
D_80221864(0,anim);}}return result;}
