typedef struct Arg1_939EC
{
  s32 unk0;
  s32 unk4;
  u8 unk8;
  u8 unk9;
  char padA[2];
  void *unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
} Arg1_939EC;
typedef struct Arg0_939EC
{
  s32 unk0;
  struct Arg0_939EC *unk4;
  s32 *unk8;
  char padC[8];
  void *unk14;
  s32 unk18;
  s32 unk1C;
  s32 unk20;
  s32 unk24;
  s32 unk28;
  s32 unk2C;
  s16 unk30;
  s16 unk32;
  u8 unk34;
  u8 unk35;
  char pad36[2];
  s16 unk38;
  char pad3A[0xE];
  void *unk48;
  char pad4C[0x10];
  void *unk5C;
  void *unk60;
  s32 unk64;
  s32 unk68;
  struct Arg0_939EC *unk6C;
  s32 unk70;
  s32 unk74;
  s32 unk78;
  s32 unk7C;
  s32 unk80;
  s32 unk84;
} Arg0_939EC;
typedef struct Node939EC
{
  struct Node939EC *unk0;
  s32 pad[13];
} Node939EC;
extern s32 D_800B37B0;
extern s32 D_00293B74;
void alSynAddPlayer();
Node939EC *func_80293970();
static inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 > arg1;
}

void func_802939EC(Arg0_939EC *arg0, Arg1_939EC *arg1)
{
  Node939EC *temp_v0;
  Node939EC *var_v1;
  s32 var_a0;
  void *temp_s2;
  temp_s2 = arg1->unkC;
  arg0->unk30 = 0xFF;
  arg0->unk24 = 0x1E8;
  arg0->unk20 = 0;
  arg0->unk18 = 0;
  arg0->unk28 = 0;
  arg0->unk2C = 0;
  arg0->unk32 = 0x7FFF;
  arg0->unk14 = (void *) D_800B37B0;
  arg0->unk35 = arg1->unk9;
  arg0->unk5C = (void *) 0x3E80;
  arg0->unk1C = 0;
  arg0->unk70 = arg1->unk10;
  arg0->unk74 = arg1->unk14;
  arg0->unk78 = arg1->unk18;
  arg0->unk7C = 0;
  arg0->unk80 = 0;
  arg0->unk84 = 0;
  arg0->unk38 = 9;
  arg0->unk34 = arg1->unk8;
  arg0->unk60 = func_80293970(0, 0, temp_s2, arg1->unk8, 0x10);
  func_80294FB0(arg0);
  temp_v0 = func_80293970(0, 0, temp_s2, arg1->unk0, 0x38);
  arg0->unk6C = NULL;
  if (inline_fn(arg1->unk0, 0))
  {
    var_v1 = temp_v0;
    for (var_a0 = 0; var_a0 < arg1->unk0; var_a0++)
    {
      var_v1->unk0 = arg0->unk6C;
      arg0->unk6C = var_v1;
      var_v1++;
    }

 do { } while (0);
  }
  arg0->unk64 = 0;
  arg0->unk68 = 0;
  func_802935F8(&arg0->unk48, func_80293970(0, 0, temp_s2, arg1->unk4, 0x1C), arg1->unk4);
  arg0->unk0 = 0;
  arg0->unk8 = &D_00293B74;
  arg0->unk4 = arg0;
  alSynAddPlayer((void *) D_800B37B0, arg0);
}
