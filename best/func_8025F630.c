extern void *D_800D6358;
void *func_8025F6D0(s32 key);
extern f32 D_800A9A20;
void func_8025F708(void *p, f32 x, f32 y, f32 z, f32 w, s32 k, s32 a, s32 b, s32 c);
extern void D_80213C6C(void *, f32 *);
extern f32 D_800A9A1C;
void func_8025F630(void *p, s32 arg1, f32 *outx, f32 *outy)
{
  f32 new_var;
  char *__repair_addr;
  f32 new_var3;
  f32 temp[2];
  u8 *new_var2;
  volatile long long pad;
  if (1)
  {
    D_80213C6C(((u8 *) p) + 0x1EC, temp);
    new_var2 = (u8 *) p;
    new_var3 = temp[0];
    __repair_addr = (char *) (new_var2 + 0x2A8);
    new_var = D_800A9A1C;
    *outx = (((new_var3 * new_var) * (*((f32 *) __repair_addr))) + ((*((f32 *) (new_var2 + 0x2A8))) * new_var)) + (*((f32 *) (new_var2 + 0x2B0)));
  }
  *outy = (((temp[1] * new_var) * (-(*((f32 *) (new_var2 + 0x2AC))))) + ((*((f32 *) (new_var2 + 0x2AC))) * new_var)) + (*((f32 *) (new_var2 + 0x2B4)));
}

extern void D_802131C4(f32 *, void *, s32);
extern void func_8029AA80(f32);
void func_8025F82C(void *p, s32 x);
