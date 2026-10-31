extern f32 D_800A9B90;
extern void *D_800CCA80;
extern void *D_800EDFE8;
extern void D_8020535C();
void func_802643F4(void *a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, s16 a6, u8 a7) {
 s32 x=0,y=0,z=0; void *p;
 if (*(u8*)a0==1 && (*(s32*)((char*)a0+0xF4)&0x18000000)) {
 p=*(void**)((char*)*(void**)((char*)a1+0x1CC)+0xAF4)+0x14C;
 } else { p=&D_800EDFE8; x=a2;y=a3;z=a4; }
 D_8020535C(&D_800CCA80,p,a5,x,y,z,(f32)a6*D_800A9B90,(f32)a7*(*(f32*)((char*)&D_800A9B90+4)));
}
void func_802644B8(void *a0, void *a1, s32 a2,s32 a3,s32 a4,s16 a5,s32 a6,s32 a7,s32 a8) {
 u8 x=*(u8*)a1;
 if(x==0) { if(*(s8*)(*(char**)((char*)a0+0x14)+0xE)==a6) goto callit; return; }
 if(x==1) { if((*(s32*)((char*)a1+0x170)&(x<<a6))==0) return; }
 callit: func_80273DCC(a5,a2,a3,a4);
}
void func_80264540(void *a0, void *a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7) {
 u8 x=*(u8*)a1;
 if(x==0) { if(*(u8*)((char*)a0+1)==a6) return; goto callit; }
 if(x==1) { if((*(s32*)((char*)a1+0x170)&(x<<a6))!=0) goto callit; return; }
 callit: D_8024249C(a5,a2,a3,a4);
}
void func_802647C0(void *a0,void *a1,s32 a2,s32 a3,s32 a4) {
 void *p=(char*)a1+0x168;
 if ((*(s32*)*(void**)((char*)a0+0x10)&9)!=0) return;
 *(s32*)((char*)p+0x188)|=0x10;
 *(s32*)((char*)a1+0x24C)=a2; *(s32*)((char*)a1+0x250)=a3; *(s32*)((char*)a1+0x254)=a4;
 if(*(u16*)((char*)a1+0xD8)==0x3FA) {*(s32*)((char*)p+0x198)=1; *(s32*)((char*)a1+0x24C)=*(s32*)((char*)a1+4); *(s32*)((char*)a1+0x250)=*(s32*)((char*)a1+8); *(s32*)((char*)a1+0x254)=*(s32*)((char*)a1+0xC);}
}
