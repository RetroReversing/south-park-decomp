extern u8 D_800ADDBA;
extern s8 D_800D77EE;
extern s32 D_800C9A58;
extern s32 D_800C9A64;
extern s32 D_800C9A70;
typedef struct 
{
  u8 pad[0x14];
  u32 *p14;
} Obj674C;
s32 func_8040674C(Obj674C *arg0)
{
  s8 *g = &D_800D77EE;
  s8 v;
  v = *g;
  if (v > ((s32) D_800ADDBA))
  {
    *g = D_800ADDBA;
  }
  v = *g;
  switch (v)
  {
    case 3:
      arg0->p14[2] = (u32) (&D_800C9A64);
      break;

    case 4:
      arg0->p14[2] = (u32) (&D_800C9A70);
      break;

    case 2:
      break;

    default:
      *g = 2;
      arg0->p14[2] = (u32) (&D_800C9A58);
      break;

  }

  return 0;
}
