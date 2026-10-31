extern void D_802131C4(void*,void*,void*); extern void D_80214438(void*,void*); extern void D_8021451C(void*,s32,f32,s32); extern void D_802145B0(void*,f32,f32,f32); extern void D_802145E4(void*,s32,s32,s32); extern void D_80214958(void*,s32); extern void D_80214ED4(void*); extern void D_80215200(void*,void*,void*); extern void D_802153AC(void*,void*); extern f32 D_802281F4(void*); extern f32 D_80299AE8(f32); extern void func_80257A4C(s32); extern void func_8029A2CC(void*,s32); extern f32 func_8029A900(f32); extern f32 D_800AA8B0,D_800AA8B4,D_800DD974; extern f32 D_800AA8B8[2];
void func_8028AA88(void *arg0, void *arg1) {
 f32 rot[3],a[4],b[4],c[4],d[4],scale,ang,ret,ang2,ratio,val; s32 pad[24]; void *p=*(void**)((char*)arg0+0x2fc); void *q;
 rot[0]=*(f32*)((char*)p+4); rot[1]=*(f32*)((char*)p+8); rot[2]=*(f32*)((char*)p+12);
 if(!*(s32*)((char*)arg1+0x1a0) && *(s32*)((char*)arg0+0xb8)) {
  D_8029A2CC(a,*(s32*)((char*)arg0+0xb8)+0x180); D_80214438(a,b);
  D_8029A2CC(a,*(s32*)((char*)arg0+0xb8)+0x1c0); D_80214438(a,c);
  D_802131C4(d,c,b); rot[0]+=d[0]; rot[2]+=d[2];
 }
 if(*(s32*)((char*)arg1+0x19c) && *(s32*)((char*)arg0+0xb8)) { func_80257A4C(*(s32*)((char*)arg1+0x19c)); *(s32*)((char*)arg1+0x19c)=0; }
 *(f32*)((char*)arg0+0x2bc)=D_800AA8B0; scale=D_800AA8B4; ang=*(f32*)((char*)p+0x70); *(f32*)((char*)arg0+0x70)=ang;
 ret=func_8029A900(ang*scale); a[0]=0; a[1]=ret; a[2]=0; ang2=*(f32*)((char*)arg0+0x70)*scale; D_800DD974=ret; a[3]=D_80299AE8(ang2);
 D_80215200(b,(char*)arg0+0x40,a); D_80215200(c,b,(char*)arg0+0x50); D_802153AC(c,(char*)arg0+0x78);
 D_802145E4((char*)arg0+0x78,*(s32*)((char*)arg0+0x34),*(s32*)((char*)arg0+0x38),*(s32*)((char*)arg0+0x3c));
 D_80214958((char*)arg0+0x78,*(s32*)((char*)arg1+0x154));
 q=*(s32*)((char*)arg1+0x1a0)?arg0:p;
 D_8021451C((char*)arg0+0x78,0,-D_802281F4(q)*scale,0);
 ratio=(f32)*(u16*)((char*)p+0x16c)/(f32)*(u16*)((char*)p+0x16e);
 val=D_802281F4(p)*ratio;
 val=D_802281F4(p)*D_800AA8B8[0]+val*D_800AA8B8[1]; rot[1]+=val;
 D_802145B0((char*)arg0+0x78,rot[0],rot[1],rot[2]); D_80214ED4((char*)arg0+0x78);
}
