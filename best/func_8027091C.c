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
s32 func_8027091C(void *arg0, s32 arg1) {
 s32 i;
 void *p;
 if(arg1==-1)return -1;
 p=(u8*)arg0+0x1B14;
 i=0;
 do {
   if(*(s32*)((u8*)p+0xC)==arg1)return i;
   i++;
   p=(u8*)p+0xB8;
 }while(i<17);
 return -1;
}
