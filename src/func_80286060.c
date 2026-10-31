typedef struct 
{
  char pad[0x18C];
  s32 f18C;
  s32 f190;
  s32 f194;
  s32 f198;
} State;
extern s32 D_8021563C();
s16 func_80286060(void *arg0, PathTbl *p, State *s, s32 *arg3, s32 *arg4)
{
  s32 totals[3];
  s32 r;
  s32 ret = -1;
  s32 choice;
  if (s->f198 == 1)
  {
    *arg3 = 1;
  }
  else
    if (s->f198 == 2)
  {
    *arg3 = 2;
  }
  else
    if (((u32) s->f18C) < 2U)
  {
    if (s->f194 < p->aA5)
    {
      *arg3 = 1;
    }
    else
      if (s->f190 < p->aA4)
    {
      *arg3 = 2;
    }
  }
  else
    if (s->f190 < p->aA4)
  {
    *arg3 = 2;
  }
  else
    if (s->f194 < p->aA5)
  {
    *arg3 = 1;
  }
  choice = *arg3;
  if (choice == 1)
  {
    totals[0] = p->a9F;
    totals[1] = totals[0] + p->aA0;
    totals[2] = totals[1] + p->aA1;
    if (totals[2] <= 0)
    {
      *arg3 = 2;
    }
  }
  else
    if (choice == 2)
  {
    totals[0] = p->a9C;
    totals[1] = totals[0] + p->a9D;
    totals[2] = totals[1] + p->a9E;
    if (totals[2] <= 0)
    {
      *arg3 = 1;
    }
  }
  if ((*arg3) == 1)
  {
    if ((*((u16 *) (((u8 *) arg0) + 0xD8))) == 0x3FA)
    {
      if (s->f198 != 1)
      {
        totals[0] = 0;
        totals[1] = p->aA0;
        totals[2] = totals[1] + p->aA1;
      }
      else
        if (s->f194 >= p->aA5)
      {
        totals[0] = 100;
        totals[1] = 100;
        totals[2] = 100;
      }
      else
      {
        totals[0] = p->a9F;
        totals[1] = totals[0] + p->aA0;
        totals[2] = totals[1] + p->aA1;
      }
    }
    else
    {
      totals[0] = p->a9F;
      totals[1] = totals[0] + p->aA0;
      totals[2] = totals[1] + p->aA1;
    }
    if (totals[2] > 0)
    {
      r = D_8021563C() % totals[2];
      if (r < totals[0])
      {
        ret = p->a96;
        *arg4 = p->a8A;
      }
      else
        if (r < totals[1])
      {
        ret = p->a98;
        *arg4 = p->a8C;
      }
      else
        if (r < totals[2])
      {
        ret = p->a9A;
        *arg4 = p->a8E;
      }
    }
  }
  else
    if ((*arg3) == 2)
  {
    totals[0] = p->a9C;
    totals[1] = totals[0] + p->a9D;
    totals[2] = totals[1] + p->a9E;
    if (totals[2] > 0)
    {
      r = D_8021563C() % totals[2];
      if (r < totals[0])
      {
        ret = p->a90;
        *arg4 = p->a84;
      }
      else
        if (r < totals[1])
      {
        ret = p->a92;
        *arg4 = p->a86;
      }
      else
        if (r < totals[2])
      {
        ret = p->a94;
        *arg4 = p->a88;
      }
    }
  }
  s->f198 = 3;
  return ret;
}
