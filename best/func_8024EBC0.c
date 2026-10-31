typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec;
void D_80213190(Vec *, Vec *, Vec *);
void D_802131C4(Vec *, Vec *, Vec *);
void D_802131F8(Vec *, Vec *, f32);
void D_80213274(Vec *, Vec *, Vec4 *);
f32 func_8029A900(f32);
extern f32 D_800A9308;
extern f32 D_800A930C;
extern f32 D_800A9310;
extern f32 D_800ABA00;
void func_8024EBC0(u8 *p, f32 dt)
{
  Vec axis;
  Vec m;
  Vec4 pos;
  Vec rot;
  u8 *new_var;
  Vec rot2;
  Vec m2;
  f32 lim;
  f32 val;
  f32 scale;
  lim = (f32) (*((s8 *) ((*((u32 *) ((*((u32 *) (p + 0xf8))) + 0x28))) + 0x18)));
  scale = D_800A9308;
  if ((*((f32 *) (p + 0x118))) < lim)
  {
    scale = (*((f32 *) (p + 0x118))) / lim;
  }
  scale = scale * dt;
  *((Vec *) (&pos)) = *((Vec *) (p + 0x14c));
  if ((*((f32 *) (p + 0x184))) > 0)
  {
    axis.x = 0;
    axis.y = D_800A930C;
    axis.z = 0;
    D_80213274(&m, &axis, &pos);
    val = func_8029A900(*((f32 *) (p + 0x174)));
    D_802131F8(&rot, &m, (val * (*((f32 *) (p + 0x184)))) * scale);
    *((f32 *) (p + 0x174)) = (*((f32 *) (p + 0x174))) + (((*((f32 *) (p + 0x17c))) * scale) * D_800ABA00);
    val = func_8029A900(*((f32 *) (p + 0x174)));
    new_var = (char *)(p); new_var += (s32)(0x184);
    D_802131F8(&rot2, &m, (val * (*((f32 *) new_var))) * scale);
    D_802131C4((Vec *) (p + 0x18), (Vec *) (p + 0x18), &rot);
    D_80213190((Vec *) (p + 0x18), (Vec *) (p + 0x18), &rot2);
  }
  else
  {
    *((f32 *) (p + 0x174)) = (*((f32 *) (p + 0x174))) + (((*((f32 *) (p + 0x17c))) * scale) * D_800ABA00);
  }
  if ((*((f32 *) (p + 0x188))) > 0)
  {
    axis.x = 0;
    axis.y = D_800A9310;
    axis.z = 0;
    D_80213274(&m2, &axis, &pos);
    D_80213274(&m, &m2, &pos);
    val = func_8029A900(*((f32 *) (p + 0x178)));
    D_802131F8(&rot, &m, (val * (*((f32 *) (p + 0x188)))) * scale);
    *((f32 *) (p + 0x178)) = (*((f32 *) (p + 0x178))) + (((*((f32 *) (p + 0x180))) * scale) * D_800ABA00);
    val = func_8029A900(*((f32 *) (p + 0x178)));
    D_802131F8(&rot2, &m, (val * (*((f32 *) (p + 0x188)))) * scale);
    D_802131C4((Vec *) (p + 0x18), (Vec *) (p + 0x18), &rot);
    D_80213190((Vec *) (p + 0x18), (Vec *) (p + 0x18), &rot2);
  }
  else
  {
    *((f32 *) (p + 0x178)) = (((*((f32 *) (p + 0x180))) * scale) * D_800ABA00) + (*((f32 *) (p + 0x178)));
  }
}
