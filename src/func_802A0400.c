extern volatile s32 D_800B4928;
s32 func_802A0500(void);
s32 D_802A0520(s32);
void func_802A0400(s32 arg0)
{
  s32 temp_v0;
  volatile s32 *p = &D_800B4928;
  temp_v0 = func_802A0500();
 do { *p &= (~arg0) | 0x401; D_802A0520(temp_v0); } while (0);
}

void func_802A0448(s32 arg0);
void func_802A0540(u32 arg0, s32 arg1);
extern void *D_800B4948;
u64 func_8029E3D4(void *, s32);
s32 __osSetTimerIntr(u64, u32);
s32 func_8029DFF8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
