typedef struct Buf Buf; struct Buf { s32 *unk0; s32 unk8; s32 unkC; s32 unk10; s32 *unk14; char pad[4]; }; extern u8 *D_800B4940; s32 func_802A0500(void); s32 D_802A0520(s32); void func_8029EC3C(Buf *); s32 func_8029EE28(Buf *); void func_8029E088(s32);
s32 func_8029DDA0(Buf *arg0,s32 arg1,s32 arg2) {
 s32 ret=func_802A0500(), limit=arg0->unk10;
 if(arg0->unk8>=limit) { while(arg0->unk8>=arg0->unk10) { if(arg2!=1){D_802A0520(ret);return -1;} *(s16 *)(D_800B4940+16)=8; func_8029EC3C((Buf *)((s8 *)arg0+4)); } }
 arg0->unk14[(arg0->unkC+arg0->unk8)%arg0->unk10]=arg1; ++arg0->unk8;
 if(*arg0->unk0)func_8029E088(func_8029EE28(arg0));
 D_802A0520(ret); return 0;
}
