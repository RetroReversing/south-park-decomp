extern s8 D_800D77EB[];
extern u8 D_800BC5DC[];
extern u8 D_800C9B6C[];
extern u8 D_800C9B78[];
typedef struct 
{
  u8 pad[0x14];
  u8 *p14;
} Obj;
s32 func_802A08B8();
s32 func_80406898(Obj *arg0)
{
  int new_var;
  if (D_800D77EB[0] != 0)
  {
    *((u8 **) (arg0->p14 + 8)) = D_800C9B78;
    new_var = 5;
    func_802A08B8((u8 *) (*((u32 *) (((u8 *) 0x800C9B78) + (((u32) ((u8) D_800D77EB[-new_var])) * 4)))), D_800BC5DC, D_800D77EB[0]);
  }
  else
  {
    *((u8 **) (arg0->p14 + 8)) = D_800C9B6C;
  }
  return 0;
}
