extern s32 D_802A0520(s32);
extern s32 func_802726DC(void *, s16);
extern s32 func_80274E9C(void *, s32);
extern s32 func_8029DC78(void *, s32, s32);
extern s32 func_8029DDA0(void *, s32, s32);
extern s32 func_802A0500(void);
typedef struct Obj
{
  char pad0[0x110];
  char lockpad[0x1c];
  s32 count;
} Obj;
s32 func_8026F3F8(void *arg0, s32 arg1)
{
  s32 i;
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v1;
  s32 temp_v1_3;
  s32 var_s3;
  s32 var_s6;
  Obj *lock;
  void *slot;
  s16 *state;
  s32 hold;
  s32 off;
  s32 *record;
  var_s6 = 0;
  if (arg1 != (-1))
  {
    lock = (Obj *) (((char *) arg0) + 0x110);
    temp_a0 = func_802A0500();
    temp_v1 = (*((s32 *) (((char *) lock) + 0x1c))) + 1;
    *((s32 *) (((char *) lock) + 0x1c)) = temp_v1;
    if (temp_v1 != 1)
    {
      if (arg0)
      {
        D_802A0520(temp_a0);
        func_8029DC78(lock, 0, 1);
      }
      else
      {
        D_802A0520(temp_a0);
        func_8029DC78(lock, 0, 1);
      }
    }
    else
    {
      D_802A0520(temp_a0);
    }
    func_80274E9C(((char *) arg0) + 0x138, arg1);
    i = 0;
    state = (s16 *) (((char *) arg0) + 0x7c);
    off = 0x1b14;
    record = (s32 *) arg0;
    do
    {
      if (record[0x1b18 / 4] == arg1)
      {
        var_s6++;
        slot = ((char *) arg0) + off;
        if (i == 0x10)
        {
          *((s32 *) (((char *) slot) + 4)) = -1;
          *((s16 *) (((char *) slot) + 0x34)) = 0;
          *((s16 *) (((char *) slot) + 0x36)) = -1;
          *((s32 *) (((char *) slot) + 0xc)) = -1;
          *((s32 *) (((char *) slot) + 8)) = -1;
        }
        else
        {
          if ((*((s32 *) (((char *) slot) + 0x9c))) > 0)
          {
            *((s32 *) (((char *) slot) + 0x9c)) = 0;
            *((s32 *) (((char *) slot) + 0xa0)) &= ~0x10;
          }
          if (state[0x60 / 2] != (-1))
          {
            func_802726DC(((char *) arg0) + 0x1b10, i);
          }
        }
      }
      state++;
      off += 0xb8;
      record = (s32 *) (((char *) record) + 0xb8);
      i++;
    }
    while (i < 0x11);
    lock = (Obj *) (((char *) arg0) + 0x110);
    temp_v0 = func_802A0500();
    temp_v1_3 = (*((s32 *) (((char *) lock) + 0x1c))) - 1;
    *((s32 *) (((char *) lock) + 0x1c)) = temp_v1_3;
    if (temp_v1_3 != 0)
    {
      D_802A0520(temp_v0);
      func_8029DDA0(lock, 0, 1);
      return var_s6;
    }
    D_802A0520(temp_v0);
  }
  return var_s6;
}
