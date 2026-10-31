extern s32 func_80259860(void *, s32); extern void func_8026C520(void *,s32); extern f32 D_80228864(void *,s32); extern void func_80277288(void *, f32,f32,f32,void*); extern f32 func_8029A900(f32); extern void D_80212AB8(void*,void*); extern f32 D_80299AE8(f32); extern void D_80215200(void*,void*,void*); extern void D_802137A8(void*,u32); extern void D_802153AC(void*,void*); extern void D_802145E4(void*,f32,u32,f32); extern void D_802145B0(void*,f32,f32,f32); extern void D_80211B2C(void*,s32); extern void D_8020C404(s32,s32,s32); extern f32 D_800A9550,D_800A9554,D_800A9558,D_800A955C,D_800A9560,D_800A9564,D_800A9568,D_800A956C,D_800A9570,D_800A9574; extern u8 D_800CCB5C; extern u32 *D_800D7F68; extern f32 D_800DD974; extern u8 D_800F48A8,D_800F4AC8;
void func_8025278C(u8 *arg0) { f32 m0[16], xyz[3], m1[16], m2[16], vec[4], m3[16]; s32 h, i; f32 t, a, b, c; u8 *p;
if(!(h=func_80259860(&D_800CCB5C,1)))return;
if(*(s32*)(arg0+16)){func_8026C520(m1,*(s32*)(arg0+16));t=D_80228864(arg0,0);}
else {for(i=0;i<0x34;i+=4)*(u32*)(i + (int)m3)=*(u32*)(arg0+i);xyz[0]=*(f32*)((u8*)m3+28);xyz[1]=*(f32*)((u8*)m3+32)+D_800A9550-D_800A9554;xyz[2]=*(f32*)((u8*)m3+44);func_80277288(m3,xyz[0],xyz[1],xyz[2],&D_800F48A8);if(!*(s32*)&D_800F4AC8)return;D_80212AB8(m2,(u8*)&D_800F4AC8+0xE0);a=func_8029A900(D_800A9558);D_800DD974=a;vec[0]=a;vec[1]=0;vec[2]=0;vec[3]=D_80299AE8(D_800A9558);D_80215200(m1,vec,m2);t=*(f32*)((u8*)&D_800F4AC8+12);}
b=*(f32*)(arg0+8)-t;a=D_800A9560-b*D_800A955C;if(a>D_800A9564)a=D_800A9564;if(a<0)a=0;
p=*(u8**)(arg0+0xF8);c=*(f32*)(arg0+0x130)*D_800A9568;if(*(s32*)(p+16))c*=D_800A956C;c*=*(f32*)(*(u8**)(p+32)+24);b=c-b*D_800A9570;if(b>c)b=c;if(b<0)b=0;
if(*(s32*)p&1){s16 n=*(s16*)(arg0+0x124);if(n>0)a*=((f32)n-*(f32*)(arg0+0x118))/(f32)n;}
xyz[0]=*(f32*)(arg0+4);xyz[1]=t;xyz[2]=*(f32*)(arg0+12);D_802137A8(xyz,0x469C4000);D_802153AC(m1,m0);D_802145E4(m0,b,0x3f800000,b);D_802145B0(m0,xyz[0],xyz[1],xyz[2]);D_80211B2C(m0,h);
*D_800D7F68++=0xE7000000;*D_800D7F68++=0;*D_800D7F68++=0xE3000A01;*D_800D7F68++=0x100000;
if(a<=D_800A9574)i=(s32)a;else i=(s32)(a-D_800A9574)|0x80000000;D_8020C404(h,1,i&255);
*D_800D7F68++=0xE7000000;*D_800D7F68++=0;*D_800D7F68++=0xE3000A01;*D_800D7F68++=0;
}
