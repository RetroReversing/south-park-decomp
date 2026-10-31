extern s32 func_80295BE0(s32, s16);
extern s32 func_80295C28(void *);
extern s32 func_802964F0(void *, s16);
extern s32 alSndpStop(void *);
void func_802731AC(void *p)
{
  s32 arr;
  s32 idx;
  char *new_var;
  s32 minus;
  s32 *base;
  s16 *new_var2;
  s16 *slot;
  arr = *((s32 *) (((char *) p) + 0xB0));
  idx = *((s32 *) p);
  base = (s32 *) (arr + 0x7C);
  new_var2 = (s16 *) ((((char *) base) + (idx * 2)) + 0x60);
  func_80295BE0(arr + 0x84, *new_var2);
  idx = *((s32 *) p);
  slot = (s16 *) ((((char *) base) + (idx * 2)) + 0x60);
  minus = -1;
  *slot = -1;
  *((s16 *) (((char *) p) + 0x34)) = 0;
  *((s32 *) (((char *) p) - (-0xC))) = -1;
  new_var = (char *) p;
  *((s32 *) (new_var + 8)) = -1;
  *((s16 *) (new_var + 0x36)) = -1;
  *((s32 *) (((char *) p) + 0xB4)) = -1;
}

void func_802730C8(void *p);
void func_8027312C(void *p);
s32 func_80273364(s32 arg0, s16 arg1);
