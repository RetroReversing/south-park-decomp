s32 D_8022D1F4(s32);
s32 D_8022D220(s32);
s32 D_8022D248();
s32 func_80408EF4();
s32 func_80410750();
s32 func_80411710();
extern char D_800EEDB8[];
extern char D_8010DE8C[];
extern char D_8010DEA8[];
void func_80408C5C(void)
{
  s32 temp_v0;
  s32 new_var;
  D_8022D1F4(1);
  D_8022D248();
  func_80410750(&D_800EEDB8, &D_8010DEA8, *((s32 *) (((char *) (&D_8010DEA8)) + (-0x30))));
  temp_v0 = func_80411710(&D_8010DEA8);
  new_var = *((s32 *) (((char *) (&D_8010DEA8)) + (-0x30)));
  *(D_8010DE8C + (*((s32 *) (((char *) (&D_8010DEA8)) + (-0x30))))) = -3;
  D_8022D220(new_var);
  func_80408EF4(temp_v0);
}
