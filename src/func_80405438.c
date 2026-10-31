extern s32 D_8010DAF4;
extern s32 D_8010DB00;
extern u8 D_800D77E6;
extern s32 D_800C977C[];
extern s32 D_800BC478[];
extern s32 D_8010DA90;
extern s32 D_800CC760;
extern s32 func_802A08B8(s32 *, s32 *, s32, u16);
extern s32 D_80209B6C(s32 *);
struct P
{
  char x[0x20];
  void *p;
};
s32 func_804053B0(struct P *a);
s32 func_80405438(void *a0, struct P *a1)
{
  void *p;
  u16 n;
  if (D_8010DAF4 == 0)
  {
    p = a1->p;
    n = *((u16 *) (((char *) p) + 0xA80));
    *((u16 *) (((char *) p) + 0xA80)) = n - 1;
    ;
    *((s32 *) (((char *) a1->p) + 0xA7C)) = 0;
    p = a1->p;
    D_8010DAF4 = 1;
    *((s32 *) (((char *) p) + 0x1588)) = 0;
  }
  return 0;
}

extern s32 D_800D6368;
extern s32 D_800CC760;
extern s32 D_80209A90(s32 *);
extern s32 func_8025F874(s32, f32);
struct Q
{
  char x[0x20];
  void *p;
  char y[0x18];
  s32 val;
};
s32 func_8040547C(void *a0, struct Q *a1);
extern s32 func_8025F884(s32, f32);
extern s32 D_800F1500;
extern s32 D_800CE2FC;
extern s32 D_8022CF48(void);
extern s32 D_8022D63C(s32);
extern f32 D_800BC480;
extern f32 D_800BC484;
extern u32 D_8010DAF8[2];
struct R
{
  char x[0x10];
  void *p;
  char y[0x28];
  s32 fn;
};
s32 func_804054E4(struct R *a);
