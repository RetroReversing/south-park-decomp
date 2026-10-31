#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern u8 D_800AAC28,D_800AAC2C;
extern void func_8029D580(void*,void*,s32);
extern void *func_80294CA0(void*,s32,s32);
void func_802942B4(void *arg0, u8 *arg1) {
char *__repair_addr;

 u32 x=*(u16*)arg1; x--; if(x<2) goto dispatch;
 func_8029D580(&D_800AAC28,&D_800AAC2C,0x1B4);
 goto op;
dispatch:
op:
 {
 u8 field=arg1[8];
 u8 idx=field&0xf;
 u8 op=field&0xf0;
 u8 a=arg1[9];
 u8 b=arg1[10];
 switch(op) {
 case 0x80: func_80294CA0(arg0,a,idx); break;
__repair_addr = (char *)((u8*)arg0+0x2c);

 case 0x90: if(*(s32*)(__repair_addr)==1) func_80294CA0(arg0,a,idx); break;
 case 0xa0: break;
 case 0xb0: switch(a) { case 7: case 10: case 16: case 0x40: case 0x5b: case 0x80: case 0x90: break; } break;
 case 0xc0: break; case 0xd0: break; case 0xe0: break;
 }
 }
}
