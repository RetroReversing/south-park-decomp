extern f32 D_800ABA00;
extern f32 D_800BC6A8;
extern f32 D_800BC6AC;
extern f32 D_800BF2E0;
extern f32 D_800BF2E8;
extern s32 D_800BF2D8;
extern s32 D_800BF2DC;
extern s32 D_800BF2E4;
extern s32 D_800BC6A0;
extern s32 D_800C9C50[];
extern s32 D_800C9C5C[];
extern s32 D_800C9C68[];
extern s32 D_800C9C80[];
extern u8 D_800D77E6;
extern s32 D_8010DD38;
extern s32 D_8010DD78;
extern s32 D_8010DDBC;
extern s32 D_8010DDC0;
extern s32 D_8010DDC8;
extern s32 D_8010DDD0;
extern s32 D_8010DDD8;
extern s32 D_8010DE18;
extern s32 D_8010DE28;
extern s32 D_8010DE68;
extern s32 D_8010DE6C;
extern s32 D_8010DE70;
void func_802742A0(s32, s32);
void func_802A08B8(s32 *, s32 *, s32, s32);
s32 func_804078FC(void *arg0)
{
  char *__repair_addr;
  s32 *src;
  s32 anim;
  s32 counter;
  if (D_800BF2D8 == 0)
  {
    D_800BF2D8 = 1;
    D_800BF2E0 = D_800BC6A8;
  }
  if (D_800BF2E0 > 0.0f)
  {
    D_800BF2E0 -= D_800ABA00;
 do { if (D_800BF2E0 <= 0.0f) { D_800BF2E0 = 0.0f; func_802742A0(13, 0); } } while (0);
  }
  if (D_800BF2DC == 0)
  {
    if (D_8010DDC8 == D_8010DE6C)
    {
      if (D_8010DDD0 == D_8010DE70)
      {
        if (D_8010DE68 == D_8010DDC0)
        {
          if (D_8010DDBC == D_8010DE18)
          {
            D_800BF2DC = 1;
          }
        }
      }
    }
  }
  if (D_800BF2E8 > 0.0f)
  {
    if (D_800BF2DC == 0)
    {
      D_800BF2E8 -= D_800ABA00;
      if (D_800BF2E8 <= 0.0f)
      {
        __repair_addr = (char *) (((u8 *) (*((void **) (((u8 *) arg0) + 0x24)))) + 0xC0);
        if (!((*((s32 *) __repair_addr)) & 0x9000))
        {
          D_800BF2E4 = 1;
        }
        else
        {
          D_800BF2E4 = 4;
        }
        D_800BF2E8 = D_800BC6AC;
        if (D_8010DDC8 != D_8010DE6C)
        {
          D_8010DE6C += D_800BF2E4;
          if (D_8010DDC8 < D_8010DE6C)
          {
            D_8010DE6C = D_8010DDC8;
          }
          src = &D_8010DD38;
          anim = D_800C9C50[D_800D77E6];
          counter = D_8010DE6C;
          goto update;
        }
        if (D_8010DDD0 != D_8010DE70)
        {
          D_8010DE70 += D_800BF2E4;
          if (D_8010DDD0 < D_8010DE70)
          {
            D_8010DE70 = D_8010DDD0;
          }
          src = &D_8010DD78;
          anim = D_800C9C5C[D_800D77E6];
          counter = D_8010DE70;
          goto update;
        }
        if (D_8010DE68 != D_8010DDC0)
        {
          D_8010DDC0 += D_800BF2E4;
          if (D_8010DE68 < D_8010DDC0)
          {
            D_8010DDC0 = D_8010DE68;
          }
          src = &D_8010DDD8;
          anim = D_800C9C68[D_800D77E6];
          counter = D_8010DDC0;
          goto update;
        }
        if (D_8010DDBC != D_8010DE18)
        {
          D_8010DE18 += D_800BF2E4;
          if (D_8010DDBC < D_8010DE18)
          {
            D_8010DE18 = D_8010DDBC;
          }
          src = &D_8010DE28;
          anim = D_800C9C80[D_800D77E6];
          counter = D_8010DE18;
          goto update;
        }
      }
    }
  }
  D_800BF2E4 = 1;
  return 0;
  update:
  func_802A08B8(src, &D_800BC6A0, anim, counter);

  D_800BF2E4 = 1;
  return 0;
}
