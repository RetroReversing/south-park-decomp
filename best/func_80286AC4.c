extern f32 D_800AA4FC,D_800AA500,D_800AA508,D_800AA50C,D_800AA510,D_800AA514,D_800AA518,D_800AA51C,D_800AA520,D_800AA524,D_800AA528,D_800AA52C,D_800AA530,D_800AA534,D_800F4EC0,D_800F5280;
extern struct { char pad[4]; f32 x; } D_800F4ED8;
extern s32 D_800F5258,D_800F5278; extern u8 D_800F526C[];
extern s32 func_80286678(f32,f32,f32,void*);
extern void D_8023E95C(void*,void*,s32); extern void D_80241EEC(void*,void*,void*,s32,s32); extern void D_80241A44(void*,void*,void*); extern void func_802835D0(void*,void*); extern void func_802859C8(void*,void*,void*,void*);
void func_80286AC4(void *arg0,void *arg1) {
u8 sp18[0x88],spA0[0x50]; f32 x,y,z; s32 state=D_800F5258;
if(state==0){if(func_80286678(D_800F4ED8.x*D_800AA4FC,0.25f,0.0f,0)==0)goto skip;D_800F5258=1;}
else if(state==1){
if(!func_80286678(*(f32*)arg0,D_800F4ED8.x*D_800AA500,D_800F4EC0,D_800F526C))goto skip;
if(D_800AA500+4 < D_800F4ED8.x){
s32 dir=D_800F5278;
if(dir!=state){
if(dir==0){x=D_800F4ED8.x-D_800AA500; y=D_800F5280-D_800AA508; z=D_800F4EC0+D_800AA50C;goto common;}
if(dir==3){x=D_800F4ED8.x-D_800AA500; y=D_800F5280-D_800AA520; z=D_800F4EC0+D_800AA524;goto common;}
if(dir==2){y=D_800F4ED8.x-D_800AA51C;x=D_800F5280-D_800AA518;D_800F5280=x;D_800F4ED8.x=y;D_800F4EC0+=D_800AA530;}
else {x=D_800F5280-D_800AA528;y=D_800F4ED8.x-D_800AA52C;D_800F5280=x;D_800F4ED8.x=y;D_800F4EC0+=D_800AA530;}
}else{x=D_800F4ED8.x-D_800AA500;y=D_800F5280-D_800AA510;z=D_800F4EC0+D_800AA514;common:D_800F4ED8.x=x;D_800F5280=y;D_800F4EC0=z;}
}else D_800F5280=0;
D_8023E95C(arg0,arg1,4);
}
skip:
D_80241EEC(arg0,arg1,sp18,1,0);
if(*(s32*)(sp18+0x44)==3 && *(f32*)(sp18+0x68)<=D_800AA534) func_802835D0((char*)arg1+0x80,arg0);
D_80241A44(arg0,arg1,spA0);func_802859C8(arg0,arg1,sp18,spA0);
}
