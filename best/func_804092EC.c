extern s32 func_804098CC(void);
extern s32 func_804099BC(void);
extern s32 func_8040B988(void *, s32, s32);
extern s32 func_8040BB3C(s32);
extern s32 func_8040BB68(void);
extern void func_8040BD9C(void *);
extern s32 D_416610;
extern s32 D_416720;
extern s32 D_4167A8;
extern s32 D_416830;
extern s32 D_416C08;
extern s16 D_800BF358;
extern s16 D_8010E4EC;
extern u8 D_8010E150[];
extern u32 D_8010E2EC;
extern s32 D_8010E4BC;
extern s32 D_8010E4F4;
extern s32 D_8010E504;
extern s32 D_8010E508;
extern s32 D_8010E510;
struct X
{
  char pad[0xC4];
  u32 flags;
};
extern struct X *D_8010E4F0;
s32 func_804092EC(void)
{
  s32 res = 0;
  s32 *bcp;
  if (D_8010E510)
  {
    if (D_8010E504)
    {
      D_800BF358 = 0;
      return res;
      func_804098CC();
    }
    D_8010E510 = 0;
    if (D_8010E4F0->flags & 0x9000)
    {
      if ((D_8010E2EC == 0) && (D_8010E4EC == 0))
      {
        bcp = &D_8010E4BC;
        if ((*bcp) != (-1))
        {
          s32 r = func_8040BB3C(*bcp);
          if (r == 0)
          {
            res = func_8040B988(D_8010E150, *bcp, 0x19C);
            if ((res == 0) && (func_804099BC() == 0))
            {
              res = -6;
            }
            D_8010E4F4 = 2;
          }
          else
            if (r == (-11))
          {
            func_8040BD9C(&D_416C08);
            D_800BF358 = 0;
          }
        }
      }
      if (D_8010E2EC == 1)
      {
        if (D_8010E4EC == 0)
        {
          if (D_8010E4BC == (-1))
          {
            func_8040BD9C(&D_416610);
          }
          else
          {
            s32 r = func_8040BB3C(D_8010E4BC);
            if (r == (-11))
            {
              func_8040BD9C(&D_416C08);
              D_800BF358 = 0;
            }
            else
            {
              func_8040BD9C((r == (-3)) ? (&D_4167A8) : (&D_416830));
              D_800BF358 = 2;
              D_8010E508 = 4;
            }
          }
        }
      }
      if (((D_8010E2EC == 1) && (D_8010E4EC == 1)) || ((D_8010E2EC == 2) && (D_8010E4EC == 0)))
      {
        if (func_8040BB3C(D_8010E4BC) != (-3))
        {
          func_8040BD9C(&D_416720);
          D_800BF358 = 1;
          D_8010E508 = 4;
        }
      }
    }
    else
      if (D_8010E4F0->flags & 0x4000)
    {
      D_8010E510 = (D_800BF358 = 0);
    }
  }
  else
  {
    func_8040BB68();
    if (D_8010E4F0->flags & 0x9000)
    {
      if ((D_8010E2EC < 2) && (D_8010E4EC == 0))
      {
        D_8010E510 = 1;
      }
      if (((D_8010E2EC == 1) && (D_8010E4EC == D_8010E2EC)) || ((D_8010E2EC == 2) && (D_8010E4EC == 0)))
      {
        D_8010E510 = 1;
      }
      if ((((D_8010E2EC == 1) && (D_8010E4EC == 2)) || ((D_8010E2EC == 0) && (D_8010E4EC == 1))) || ((D_8010E2EC == 2) && (D_8010E4EC == 1)))
      {
        D_800BF358 = 4;
      }
    }
    return D_8010E504;
  }
  return res;
}
