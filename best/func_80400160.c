extern void func_8029CFF8(void *, s32, s16, s16);
extern void func_802A0938(void *, void *, s32);
extern u8 D_800B3C00[];
extern s16 D_8010D9B0;
extern struct R { u8 pad0[8]; s32 f8; u8 p[0x10]; s32 f1C; s32 f20; s32 f24; s32 f28; s32 f2C; s32 f30; u8 p2[8]; s32 f3C; s32 f40; s32 f44; } D_8010D9B8;
void func_80400160(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f) {
char *__repair_addr;

 s32 l0,l1,l2,l3; s16 q0,q1;
 s32 aa,bb,cc,dd,ee,ff,gg,hh; s16 ii,jj,kk,ll,mm,nn,oo,pp,rr,ss,tt;
 func_802A0938(&D_8010D9B8,(D_8010D9B0*0x50)+D_800B3C00,0x50);
 aa=a/2; bb=b/2; cc=f/2; dd=f*2;
 ee=D_8010D9B8.f1C>>16;
 ff=(((s16)D_8010D9B8.f1C-ee)/2+ee)-c;
 l0=D_8010D9B8.f30;
__repair_addr = (char *)((u8*)&D_8010D9B8+0x32);

 ii=*(s16*)(__repair_addr);
 jj=*(s16*)((u8*)&D_8010D9B8+0x30);
 kk=*(u16*)((u8*)&D_8010D9B8+0x30)+(ii-jj)/2;
 ll=kk-d; mm=(ll-bb)+cc; nn=(ll+bb)-dd;
 tt=(((ff-aa)+(e/2))<<16)|(((ff+aa)-(e*2))&0xffff);
 l1=D_8010D9B8.f44; l2=D_8010D9B8.f30;
 *(s16*)((u8*)&D_8010D9B8+0x32)=nn; oo=nn-3; *(s16*)((u8*)&D_8010D9B8+0x32)=oo;
 l3=D_8010D9B8.f44; q0=kk;
 ii=*(s16*)((u8*)&D_8010D9B8+0x36);
 pp=(u16)l1+(ii-(s16)l1)/2; q1=pp;
 rr=pp-d; ss=(rr+bb)-dd; oo=ss-3; l1=(rr-bb)+cc;
 jj=tt; hh=(s32)(a<<10)/(s32)((s16)tt-(tt>>16));
 *(s16*)((u8*)&D_8010D9B8+0x36)=ss; q0=ll; l0=mm; *(s16*)((u8*)&D_8010D9B8+0x36)=oo;
 gg=(D_8010D9B8.f2C&0xffff0000)|(((s32)(b<<11)/(s32)(nn-mm))&0xffff);
 if (*(s16*)((u8*)&D_8010D9B8+0x32)<oo) *(s16*)((u8*)&D_8010D9B8+0x32)=*(s16*)((u8*)&D_8010D9B8+0x32);
 if (*(s16*)((u8*)&D_8010D9B8+0x3A)<oo) *(s16*)((u8*)&D_8010D9B8+0x36)=*(s16*)((u8*)&D_8010D9B8+0x3A);
 if ((s16)D_8010D9B8.f1C<(s16)tt) tt=(tt&0xffff0000)|(D_8010D9B8.f1C&0xffff);
 D_8010D9B8.f2C=gg; D_8010D9B8.f40=gg; D_8010D9B8.f28=0; D_8010D9B8.f3C=a*2; D_8010D9B8.f8=a; D_8010D9B8.f20=hh; D_8010D9B8.f1C=tt; D_8010D9B8.f30=l0; D_8010D9B8.f44=l1;
 func_8029CFF8(&D_8010D9B8,l1,oo,tt);
}
