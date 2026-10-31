extern s8 D_800D77EC[];
extern u8 D_800C9B90TabPtr[];
extern u8 D_800C9B6C[];
extern u8 D_800BC5E4[];
typedef struct 
{
  char pad[0x14];
  u8 *p14;
} Obj;
s32 func_802A08B8(u8 *, u8 *, s32);
s32 func_80406968(Obj *arg0)
{
  int __repair_literal;
  int new_var;
  if (D_800D77EC[0] != 0)
  {
    new_var = 6;
    *((u8 **) (arg0->p14 + 8)) = D_800C9B90TabPtr;
    __repair_literal = 4;
    func_802A08B8(*((u8 **) (D_800C9B90TabPtr + ((*((u8 *) (&D_800D77EC[-new_var]))) * __repair_literal))), D_800BC5E4, D_800D77EC[0]);
  }
  else
  {
    *((u8 **) (arg0->p14 + 8)) = D_800C9B6C;
  }
  return 0;
}
