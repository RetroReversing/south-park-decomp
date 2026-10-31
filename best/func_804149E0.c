s32 *D_80210ADC(s32,s32); s32 D_8021E6F8(void*,s32,s32); s32 D_8021E76C(void*,void*);
typedef struct {
  char pad[0x1038];
  s32 f38;
  s32 *p40;
  s32 *p44;
  s32 *p48;
  s32 *p4C;
  char pad2[4];
  char t1050[4];
  char pad3[0x10];
  char t1064[4];
  s32 tbl[32][4];
} Big;
void func_804149E0(Big *arg0,s32 arg1) {
  s32 *a; s32 *b; s32 *c; s32 *d; s32 i; s32 off;
  a=D_80210ADC(arg1,0);
  b=D_80210ADC(arg1,1);
  c=D_80210ADC(arg1,2);
  d=D_80210ADC(arg1,3);
  off = 0x1078;
  i = 0;
  arg0->f38 = b[1];
  arg0->p40 = b + 2;
  arg0->p48 = c + 2;
  arg0->p4C = a + 2;
  arg0->f38 = d[1];
  arg0->p44 = d + 2;
  D_8021E6F8(arg0->t1050,0,4);
  D_8021E6F8(arg0->t1064,0,4);
  do {
    D_8021E76C(arg0->t1064, (u8*)arg0 + off);
    i++;
    off += 0x10;
  } while (i < 32);
}
