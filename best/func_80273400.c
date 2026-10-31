void *D_80210ADC(s32, s32);
s32 func_8026AC70();
s32 func_80291BF8();
s32 func_802920E0();
s32 func_802934C0();
s32 func_802934F0();
s32 func_80293520();
s32 func_80293568();
s32 func_80293598();
extern f32 D_800A9F90[2];
extern f32 D_800A9F98[2];
extern f32 D_800A9FA0[2];
extern f32 D_800A9FA8;
extern f32 D_800A9FAC;
extern f32 D_800A9FB0;
extern s32 D_800B2150;
extern s32 D_800B2154;
void func_80273400(S_func_80273400_arg0 *arg0)
{
  s16 new_var;
  f32 fs0;
  f32 fv1;
  s32 a1;
  s32 a2;
  s32 s0;
  s32 v0;
  s32 v1;
  void *p;
  void *q;
  switch (arg0->unk_18)
  {
    case 0x20:
      if (arg0->unk_1C & 4)
    {
      v1 = arg0->unk_28;
      arg0->unk_1C = 0;
      D_800B2150 = -1;
      if (v1 < 0)
      {
        arg0->unk_18 = 0x10;
        return;
      }
      arg0->unk_18 = 0x40;
      return;
    }
      return;

    case 0x10:
      return;

    case 0x100:
      if (arg0->unk_1C & 8)
    {
      arg0->unk_18 = 0x80;
      arg0->unk_1C = 0;
      return;
    }
      D_800B2154++;
      if (D_800B2154 < 10)
    {
      return;
    }
      D_800B2150 = -1;
      arg0->unk_18 = 0x40;
      return;

    case 0x40:
      a2 = arg0->unk_28;
      if (a2 == (-1))
    {
      v0 = 0x10;
      goto finish;
    }
      v0 = (s32) arg0->unk_00;
      a1 = func_8026AC70(*((s32 *) (v0 + 0x2764)), *((s32 *) (v0 + 0x2768)), a2);
      s0 = a1;
      if (s0 != (-1))
    {
      s0 <<= 1;
      v0 = (s32) arg0->unk_00;
      p = D_80210ADC(*((s32 *) (v0 + 0x2754)), s0 | 1);
      v1 = (s32) arg0->unk_00;
      a1 = s0;
      q = D_80210ADC(*((s32 *) (v1 + 0x2754)), a1);
      s0 = (s32) p;
      arg0->unk_24 = *((s32 *) q);
      fs0 = func_8027E368(*((u16 *) (((char *) q) + 4)));
      arg0->unk_30 = fs0;
      if (fs0 <= 0)
      {
        fs0 = D_800A9F90[0];
      }
      arg0->unk_30 = fs0;
      v0 = s0;
    }
    else
    {
      v0 = 0;
    }
      arg0->unk_0C = (void *) v0;
      if (!v0)
    {
      arg0->unk_18 = 0x100;
      D_800B2154 = 0;
      arg0->unk_1C = 0;
      return;
    }
      arg0->unk_18 = 0x80;
      arg0->unk_04 = 1;

    case 0x80:
      func_80291BF8((s32) arg0->unk_10, arg0->unk_0C);
      s0 = 0;
      func_80293568((s32) arg0->unk_14, (s32) arg0->unk_10);
      v0 = (s32) arg0->unk_08;
      func_802934F0((s32) arg0->unk_14, *((s32 *) (v0 + 4)));
      do
    {
      func_80293520((s32) arg0->unk_14, s0 & 255, 0);
      s0++;
    }
    while (s0 < 16);
      v0 = (s32) arg0->unk_00;
      fs0 = (f32) arg0->unk_24;
      fs0 = fs0 * ((*((f32 *) (v0 + 0x27A4))) * D_800A9F90[1]);
      func_80293598((s32) arg0->unk_14, (s16) ((s32) (fs0 * D_800A9F98[0])));
      arg0->unk_2C = fs0;
      func_802934C0((s32) arg0->unk_14);
      v1 = arg0->unk_28;
      arg0->unk_1C = 0;
      arg0->unk_18 = 0x10;
      D_800B2150 = v1;
      return;

    default:
      v0 = D_800B2150;
      if ((v0 > 0) && (func_802920E0((s32) arg0->unk_14) == 0))
    {
      D_800B2150 = 0;
      arg0->unk_28 = 0;
      goto change;
    }
      if (arg0->unk_38)
    {
      v0 = (s32) arg0->unk_00;
      fs0 = ((f32) arg0->unk_24) * ((*((f32 *) (v0 + 0x27A4))) * D_800A9F98[1]);
      fs0 = fs0 * arg0->unk_3C;
      goto update;
    }
      v0 = (s32) arg0->unk_00;
      fs0 = ((f32) arg0->unk_24) * ((*((f32 *) (v0 + 0x27A4))) * D_800A9FA0[0]);
      if (fs0 == arg0->unk_2C)
    {
      goto change;
    }
      update:
    func_80293598((s32) arg0->unk_14, new_var = (s16) ((s32) (fs0 * D_800A9FA0[1])));

      arg0->unk_2C = fs0;
      change:
    v0 = arg0->unk_28;

      v1 = D_800B2150;
      if (v0 == v1)
    {
      return;
    }
      if (v1 > 0)
    {
      fs0 = arg0->unk_2C * D_800A9FA8;
      arg0->unk_1C = 2;
      arg0->unk_18 = 0x20;
      arg0->unk_20 = (s32) fs0;
      arg0->unk_30 = (fv1 = arg0->unk_30);
      if (!(D_800A9FAC <= fv1))
      {
        fv1 = D_800A9FAC;
      }
      fs0 = ((f32) arg0->unk_20) / (fv1 * D_800A9FB0);
      arg0->unk_34 = fs0;
      return;
    }
      arg0->unk_1C = 0;
      arg0->unk_18 = 0x40;
      return;

  }

  finish:
  arg0->unk_18 = v0;

}
