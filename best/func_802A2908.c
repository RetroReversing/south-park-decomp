extern volatile s16 D_800B4B8E;
extern u8 D_800B4C2C[];
#define D_800B4C2C ((SlotRec *)D_800B4C2C)
typedef struct { s32 unk0; s32 unk4; void *unk8; s32 unkC; s32 unk10; void *unk14; u16 unk18; } S_D_800FA878;
typedef struct { s32 unk0; s32 unk4; s32 unk8; s32 unkC; s32 unk10; } SlotRec;
/* use opaque global declaration above */
extern u16 D_800F9C50[];
extern s32 func_802A2330(void *, s32, s32, s32, void *);
extern s16 func_802A2504(void *, void *, s32, s16 *, void *);
s32 func_802A2908(S_D_800FA878 *arg0) {
 s16 sp18;
 s16 i;
 SlotRec *p = D_800B4C2C;
 s32 result;
 volatile s16 *flag = &D_800B4B8E;
 s16 state = *flag;
 if (state == 0) {
  D_800B4B8E = 1;
  if ((s16)func_802A2330(&arg0->unk18, 6, 0x10, 0, arg0) <= 0) goto fail;
  D_800B4C2C[0].unkC += 0x60;
  for (i=0;i<16;i++) D_800F9C50[i] = ((u16 *) &arg0->unk18)[i];
  while (p->unk0) p = (SlotRec *)((u8 *)p + 0x14);
 } else {
  if (func_802A2504(D_800B4C2C, &arg0->unk18, 0x10, &sp18, arg0) != 0x10) goto fail;
  p = (SlotRec *)((u8 *)D_800B4C2C + sp18 * 0x14);
  for (i=0;i<16;i++) {
   u16 v = ((u16 *)&arg0->unk18)[i] + D_800F9C50[i];
   ((u16 *)&arg0->unk18)[i] = v;
   D_800F9C50[i] = v;
  }
 }
 result = func_802A2504(p, ((u8 *)arg0)+0xB8, 0x100, &sp18, arg0);
 if (result != 0x100) goto fail;
 return 1;
fail:
 return -1;
}
