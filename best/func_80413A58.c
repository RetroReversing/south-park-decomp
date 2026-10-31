s32 D_80203C0C(void *, s32);
s32 *D_80205434(void *, u16);
s32 D_80210C34(void *, void *, s32);
s32 D_80215188(void *);
s32 D_80219DD8(void *, void *, s32, s32);
s32 D_80221E20(s32, void ***, void **);
void **D_802223EC(s32, void ***, s32);
s32 D_80222FA0(void ***, s32);
s32 D_80228F84(void *);
s32 D_80228FC4(void *);
s32 D_8022DAFC(s32, void *, s32, s32);
s32 D_8023AD80(void *, s32);
f32 D_80242234(void *, s32, s32, s32);
extern f32 D_800A78B0[2], D_800A78B8;
extern s32 D_800D633C, D_800D6340, D_800D657C, D_800D78F0;
extern u8 D_800F11C0[];
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define H(p,o) (*(u16*)((char*)(p)+(o)))
#define SH(p,o) (*(s16*)((char*)(p)+(o)))
void func_80413A58(void *arg0, void ***arg1) {
 s32 count,i,j,frame,idx,flag; s32 *entry; void *base,*records,*items,*item,*out,*other; f32 min,max,scale,x,best;
 if(!D_80222FA0(arg1,1)) return;
 D_80203C0C(arg0,0);
 base=**arg1; count=W(base,4); frame=0;
 records=D_802223EC(0,arg1,count*0x368+8);
 if(records) {
   D_80210C34(base,*(void**)records,1);
   items=(char*)base+8; out=(char*)*(void**)records+8;
   W(arg0,0xEC)=(s32)out; W(arg0,0xF4)=count;
   flag=0;
   for(i=0;i<count;i++) { item=(char*)items+i*0x28; entry=D_80205434(arg0,H(item,0x22)); if(entry[1]&0x2000) flag++; }
   D_8023AD80(D_800F11C0,flag+0x21);
   for(i=0;i<count;i++) { item=(char*)items+i*0x28; out=(char*)W(arg0,0xEC)+i*0x368; W(out,0x14)=(s32)D_80205434(arg0,H(item,0x22)); W(out,0xF4)=0; }
   W(arg0,0xF0)=0;
   for(i=0;i<count;i++) { item=(char*)items+i*0x28; out=(char*)W(arg0,0xEC)+i*0x368; entry=D_80205434(arg0,H(item,0x22)); if(entry[0]==11) W(arg0,0xF0)++; else D_80219DD8(out,item,frame,i); }
   for(i=0;i<D_800D6340;i++) { idx=D_800D633C+i*0x15C0; if(W(arg0,0x1864)) { item=(char*)items+i*0x28; H(item,0x20)=H((char*)arg0+0x1868,0x12); D_80215188((char*)arg0+0x1874); x=F((char*)arg0+0x1868,0xC); min=D_800A78B0[0]; max=D_800A78B0[1]; scale=D_800A78B8; if(x<min) SH(item,0x24)=0x7fff; else if(x<max) SH(item,0x24)=-0x7fff; else if(min<x) SH(item,0x24)=0x7fff; else SH(item,0x24)=(s16)(s32)(x*scale); W(item,4)=W((char*)arg0+0x1868,0); W(item,8)=W((char*)arg0+0x1868,4); W(item,0xC)=W((char*)arg0+0x1868,8); } out=(char*)W(arg0,0xEC)+i*0x368; D_8022DAFC(idx,out,frame,i); }
 }
 D_800D657C=0; count=W(arg0,0xF4);
 for(i=W(arg0,0xF0);i<count;i++) { item=(char*)W(arg0,0xEC)+i*0x368; W(item,0x1CC)=0; if(D_80228FC4(item)) for(j=W(arg0,0xF0);j<count;j++) { other=(char*)W(arg0,0xEC)+j*0x368; if(W(W(item,0x14),0)==W(W(other,0x14),0) && D_80228F84(other) && item!=other) { if(W(item,0x1CC)) { best=D_80242234(item,W(other,4),W(other,8),W(other,0xC)); if(best<x) { W(item,0x1CC)=(s32)other; x=best; } } else { W(item,0x1CC)=(s32)other; x=D_80242234(item,W(other,4),W(other,8),W(other,0xC)); } } } }
 D_80221E20(0,arg1,records); W(arg0,0xF14)=0;
 if(D_800D78F0==12) { count=W(arg0,0xF4); for(i=W(arg0,0xF0);i<count;i++) { item=(char*)W(arg0,0xEC)+i*0x368; W(item,0xF4)&=0xFFEFFFFF; } }
}
