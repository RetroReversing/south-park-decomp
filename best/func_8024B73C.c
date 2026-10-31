typedef struct { char pad0[4]; s32 x,y,z; char pad10[4]; void *p14; char pad18[0x58]; f32 f70; } A0;
typedef struct { char pad0[0x33]; s8 mode; char p34[0x2C]; f32 value60; char pad64[0x10]; void *ptr74; char pad78[0xC]; f32 f84; char pad88[0xCC]; f32 f154; } A1;
typedef struct { char pad0[0x34]; s32 type; f32 f38,f3c,f40,f44,f48; char pad4c[0x14]; u8 mode60,mode61; } P;
typedef struct { char pad0[8]; f32 y; char pad0c[0x34]; f32 z; char pad44[0x40]; } Hit;
typedef struct { f32 x,y,z; } V3; typedef struct { f32 a,b; } F2;
extern f32 D_800A9284,D_800A9290; extern F2 D_800A9288;
void D_80215188(f32 *); void D_80241EEC(void *,void *,void *,s32,s32); f32 D_802281F4(void *);
void D_802131C4(void *,void *,void *); f32 D_80213858(void *);
void func_8024B4A0(void *,void *,u8,void *); void D_80241C54(void *,void *,s32,f32); f32 D_80215964(f32,f32,s32);
s32 func_8024B73C(A0 *arg0,A1 *arg1) {
Hit hitout; V3 spA0,spB0,spC0; f32 spA4,spB4,spD0; s32 spA8,spB8;
P *p; void *obj; f32 dist,angle=0.0f,rate,limit,temp; s32 hit=0; u8 mode;
spD0=arg0->f70-arg1->f84;D_80215188(&spD0);D_80241EEC(arg0,arg1,&hitout,0,1);
obj=arg1->ptr74;p=(P*)((char*)arg0->p14+0x14);
if(obj){if(hitout.z<=p->f3c){temp=p->f40*D_800A9284;if(hitout.y<0){if(-hitout.y<temp)goto check;goto skip;}if(hitout.y<temp){
check:if(hitout.z<=p->f44){temp=p->f48*D_800A9288.a;if(hitout.y<0){if(-hitout.y<temp)hit=1;}else if(hitout.y<temp)hit=1;}
rate=D_800A9288.b;spA0.x=arg0->x;spA4=arg0->y;spA8=arg0->z;spA4+=D_802281F4(arg0)*rate;spB0.x=((s32*)obj)[1];spB4=((f32*)obj)[2];spB8=((s32*)obj)[3];spB4+=D_802281F4(obj)*rate;D_802131C4(&spC0,&spB0,&spA0);limit=D_80213858(&spC0);
dist=p->f38;angle=hitout.y;if(dist<D_800A9290){temp=dist*rate;if(temp<spD0+angle)angle=temp-spD0;else if(spD0+angle< -temp)angle=-temp-spD0;}mode=p->mode60;goto call;}}}
skip:limit=0;mode=p->mode61;angle=-spD0;
call:func_8024B4A0(arg0,arg1,mode,obj);D_80241C54(arg0,arg1,p->type,angle);arg1->f154=D_80215964(arg1->f154,limit,p->type);return hit;
}
